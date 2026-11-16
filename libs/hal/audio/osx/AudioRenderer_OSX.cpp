// libs/hal/audio/osx/AudioRenderer_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.audio

namespace jag::hal::audio::osx {
    class OSXAudioRenderer : public AudioRenderer // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~OSXAudioRenderer();
        virtual uint64_t Init(AudioAPI* audioAPI, const AudioSystemStartParams& audioSystemStartParams);
        virtual void Resume();
        virtual float Update(float arg1);
        void BufferMasterOutput(OSXAudioRenderer* osxAudioRenderer, AudioQueueBuffer* audioQueueBuffer);
        void AudioQueueOutputCallback(void* arg1, OpaqueAudioQueue* opaqueAudioQueue,
                                      AudioQueueBuffer* audioQueueBuffer);
        OSXAudioRenderer();

    private:
        uint8_t _unknown_264[24];
        uint8_t* field_288;
        uint8_t _unknown_296[8];
    };

    // 0x100b91560
    void OSXAudioRenderer::BufferMasterOutput(OSXAudioRenderer* osxAudioRenderer, AudioQueueBuffer* audioQueueBuffer) {
        uint32_t extraout_var;
        unique_ptr<AudioBuffer>* unique_ptr;
        WrapArray<short>* this_01;
        uint32_t extraout_var_00;
        void* pvVar5;

        scoped_lock<std::mutex> local_38(*((mutex*)&AudioRenderer::m_audioMutex));
        void* pvVar1 = *(void**)(audioQueueBuffer + 8);
        unique_ptr =
            (unique_ptr<AudioBuffer>*)(*((Array<std::unique_ptr<AudioBuffer>>*)&AudioRenderer::m_outputBuffers))[(
                long)AudioRenderer::m_outputBuffersIndex];
        auto this_00 = unique_ptr->get();
        unsigned int uVar4 = *(unsigned int*)audioQueueBuffer;
        uint8_t uVar2 = this_00->GetNumberSamplesCanBeRead((unsigned int)this_00);
        uVar4 = eastl::min<unsigned int>((((uint32_t)extraout_var << 8) | (uint8_t)uVar2), uVar4 >> 2);
        if (uVar4 == 0) {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/osx/"
                      "AudioRenderer_OSX.cpp",
                      46, "Audio buffer underflow");
            ___bzero(pvVar1, *(uint32_t*)audioQueueBuffer);
            *(uint32_t*)(audioQueueBuffer + 16) = *(uint32_t*)audioQueueBuffer;
        } else {
            this_01 = this_00->GetDataShort(0);
            uVar2 = this_00->GetReadOffsetSamples((unsigned int)this_00);
            pvVar5 = (void*)(*this_01)[(unsigned long)(((uint32_t)extraout_var_00 << 8) | (uint8_t)uVar2)];
            _memcpy(pvVar1, pvVar5, (unsigned long)(uVar4 << 2));
            *(unsigned int*)(audioQueueBuffer + 16) = uVar4 << 2;
            this_00->ConsumedSamples(uVar4, false);
            if (this_00->CanReadSample(0, 0) == '\0') {
                AudioRenderer::m_outputBuffersIndex =
                    AudioRenderer::m_outputBuffersIndex + ((AudioRenderer::m_outputBuffersIndex + 1) / 3) * -3 + 1;
            }
        }
    }

    // 0x100b917e0
    void OSXAudioRenderer::AudioQueueOutputCallback(void* arg1, OpaqueAudioQueue* opaqueAudioQueue,
                                                    AudioQueueBuffer* audioQueueBuffer) {
        int iVar1;

        if (arg1 != nullptr) {
            iVar1 = arg1->GetEndPosition();
            if (iVar1 != 3) {
                BufferMasterOutput(arg1, audioQueueBuffer);
                iVar1 = _AudioQueueEnqueueBuffer(opaqueAudioQueue, audioQueueBuffer, 0, 0);
                if ((iVar1 != -66632) && (iVar1 != 0)) {
                    (logger::default_logger())
                        ->Log(false, 8,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/osx/"
                              "AudioRenderer_OSX.cpp",
                              81, "AudioQueueEnqueueBuffer in CALLBACK ERROR status code: %d", iVar1);
                }
            }
        }
    }

    // 0x100b91860
    OSXAudioRenderer::OSXAudioRenderer() {
        unique_ptr<AudioBuffer>* puVar1;
        unique_ptr<AudioBuffer, std::default_delete<AudioBuffer> _> local_50;
        bool local_31;

        new (this) AudioRenderer();
        field_288 = nullptr;
        uint8_t* local_48 = &field_296;
        new (local_48) Array<AudioQueueBuffer*>();
        unsigned long arg1 = 0;
        OSXAudioRenderer* local_40 = this;
        do {
            local_31 = false;
            std::make_unique<AudioBuffer, unsigned int&, int, unsigned int&, AudioFormat const*&, bool>(
                local_50, field_28, 2, field_20, local_31);
            puVar1 = (unique_ptr<AudioBuffer>*)(*(
                (Array<std::unique_ptr<AudioBuffer>>*)&AudioRenderer::m_outputBuffers))[arg1];
            *puVar1 = local_50;
            puVar1 = (unique_ptr<AudioBuffer>*)(*(
                (Array<std::unique_ptr<AudioBuffer>>*)&AudioRenderer::m_outputBuffers))[arg1];
            ((AudioBuffer*)(*puVar1).operator->())->WroteSamples(field_28);
            arg1 = arg1 + 1;
        } while (arg1 != 3);
    }

    // 0x100b91a20
    OSXAudioRenderer::~OSXAudioRenderer() {
        Logger* pLVar2;

        int iVar1 = _AudioQueueFlush(field_288);
        if (iVar1 != 0) {
            pLVar2 = logger::default_logger();
            pLVar2->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/osx/"
                        "AudioRenderer_OSX.cpp",
                        133, "AudioQueueFlush FAILED, status code: %d", iVar1);
        }
        iVar1 = _AudioQueueStop(field_288);
        if (iVar1 != 0) {
            pLVar2 = logger::default_logger();
            pLVar2->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/osx/"
                        "AudioRenderer_OSX.cpp",
                        138, "AudioQueueStop FAILED, status code: %d", iVar1);
        }
        iVar1 = _AudioQueueDispose(field_288);
        if (iVar1 != 0) {
            pLVar2 = logger::default_logger();
            pLVar2->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/osx/"
                        "AudioRenderer_OSX.cpp",
                        143, "AudioQueueDispose FAILED, status code: %d", iVar1);
        }
        field_296.~Array();
    }

    // 0x100b91b70
    uint64_t OSXAudioRenderer::Init(AudioAPI* audioAPI, const AudioSystemStartParams& audioSystemStartParams) {
        AudioQueueBuffer* pAVar1;
        uint64_t* puVar2;
        OSXAudioRenderer* osxAudioRenderer;
        double local_78[5];
        AudioQueueBuffer* local_50[3];
        OSXAudioRenderer* local_38;

        Init(audioAPI, audioSystemStartParams);
        local_78[0] = (double)*(unsigned int*)((long)&audioSystemStartParams.field_0 + 4);
        local_78[1] = 2.63628054990002e-313;
        local_78[4] = 7.90505033345994e-323;
        local_78[2] = 2.12199579294153e-314;
        local_78[3] = 4.24399158390681e-314;
        _AudioQueueNewOutput(local_78, AudioQueueOutputCallback, this, 0,
                             *(uint64_t*)PTR__kCFRunLoopCommonModes_100ee9dd8, 0, &local_38);
        new (local_50) Array<AudioQueueBuffer*>(3);
        field_296 = *local_50;
        unsigned long arg1 = 0;
        do {
            osxAudioRenderer = local_38;
            _AudioQueueAllocateBuffer(local_38, field_28 << 2, (Array<AudioQueueBuffer*>*)local_50);
            BufferMasterOutput(osxAudioRenderer, local_50[0]);
            _AudioQueueEnqueueBuffer(local_38, local_50[0], 0, 0);
            pAVar1 = local_50[0];
            puVar2 = &field_296[arg1];
            *puVar2 = pAVar1;
            arg1 = arg1 + 1;
        } while (arg1 != 3);
        field_288 = (uint8_t*)local_38;
        _AudioQueueStart(local_38, 0);
        field_36 = 1;
        field_40 = 1;
        return 1;
    }

    // 0x100b91d80
    void OSXAudioRenderer::Resume() {
        _AudioQueueStart(field_288, 0);
    }

    // 0x100b91da0
    float OSXAudioRenderer::Update(float arg1) {
        int iVar1;
        unique_ptr<AudioBuffer>* this_00;
        AudioBuffer* this_01;
        float extraout_XMM0_Da;
        float extraout_XMM0_Da_00;

        if (field_40 == 1) {
            this_00 = (unique_ptr<AudioBuffer>*)(*(
                (Array<std::unique_ptr<AudioBuffer>>*)&AudioRenderer::m_outputBuffers))[(unsigned long)field_32];
            this_01 = (AudioBuffer*)this_00->get();
            iVar1 = this_01->GetNumberBytesCanBeRead(0, 0);
            arg1 = extraout_XMM0_Da;
            if (iVar1 == 0) {
                (((AudioMixer*)field_8.operator->())->GetMasterBuss())->MixToBuffer(this_01);
                iVar1 = this_01->GetNumberBytesCanBeRead(0, 0);
                if (iVar1 == 0) {
                    LogAssert("audioBuffer->GetNumberBytesCanBeRead(0, 0) > 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/osx/"
                              "AudioRenderer_OSX.cpp",
                              222, nullptr);
                }
                field_32 = field_32 + ((int)(field_32 + 1) / 3) * -3 + 1;
                arg1 = extraout_XMM0_Da_00;
            }
        }
        return arg1;
    }

} // namespace jag::hal::audio::osx

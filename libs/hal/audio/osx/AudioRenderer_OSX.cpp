// libs/hal/audio/osx/AudioRenderer_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.audio

namespace jag::hal::audio::osx {
    class OSXAudioRenderer : public AudioRenderer // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~OSXAudioRenderer();
        virtual Init(AudioAPI*, AudioSystemStartParams const&);
        virtual void Resume();
        virtual float Update(float);
        void BufferMasterOutput(OSXAudioRenderer*, AudioQueueBuffer*);
        void AudioQueueOutputCallback(void*, OpaqueAudioQueue*, AudioQueueBuffer*);
        OSXAudioRenderer();

        // data members, from how the methods use this: 304 bytes, the first 264 are AudioRenderer
        char _unknown_264[24];
        undefined* field_288; // offset 288
        char _unknown_296[8];
    };

    // 0x100b91560, 368 bytes, placed by debug map only (low confidence)
    // OSXAudioRenderer::BufferMasterOutput(OSXAudioRenderer*, AudioQueueBuffer*)
    void OSXAudioRenderer::BufferMasterOutput(OSXAudioRenderer* param_1, AudioQueueBuffer* param_2) {
        void* pvVar1;
        uint uVar3;
        uint uVar4;
        unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>* this;
        AudioBuffer* this_00;
        WrapArray<short>* this_01;
        void* pvVar5;
        undefined8 uVar6;
        scoped_lock<std::mutex> local_38[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)&AudioRenderer::m_audioMutex);
        pvVar1 = *(void**)(param_2 + 8);
        this = (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)
            Array<std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>, eastl::allocator>::operator[](
                (Array<std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>,
                       eastl::allocator>*)&AudioRenderer::m_outputBuffers,
                (long)AudioRenderer::m_outputBuffersIndex);
        this_00 = (AudioBuffer*)std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::get(this);
        uVar4 = *(uint*)param_2;
        uVar3 = (*(code*)this_00->field_0[2])(this_00, 0);
        uVar4 = eastl::min<unsigned int>(uVar3, uVar4 >> 2);
        if (uVar4 == 0) {
            uVar6 = logger::default_logger();
            logger::Logger::Log(uVar6, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/osx/"
                                "AudioRenderer_OSX.cpp",
                                46, "Audio buffer underflow");
            ___bzero(pvVar1, *(undefined4*)param_2);
            *(undefined4*)(param_2 + 16) = *(undefined4*)param_2;
        } else {
            this_01 = (WrapArray<short>*)this_00->GetDataShort(0);
            uVar3 = (*(code*)this_00->field_0[9])(this_00, 0);
            pvVar5 = (void*)WrapArray<short>::operator[](this_01, (ulong)uVar3);
            _memcpy(pvVar1, pvVar5, (ulong)(uVar4 << 2));
            *(uint*)(param_2 + 16) = uVar4 << 2;
            this_00->ConsumedSamples(uVar4, false);
            if (this_00->CanReadSample(0, 0) == '\0') {
                AudioRenderer::m_outputBuffersIndex =
                    AudioRenderer::m_outputBuffersIndex + ((AudioRenderer::m_outputBuffersIndex + 1) / 3) * -3 + 1;
            }
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
    }

    // 0x100b917e0, 128 bytes, placed by debug map only (low confidence)
    // OSXAudioRenderer::AudioQueueOutputCallback(void*, OpaqueAudioQueue*, AudioQueueBuffer*)
    void OSXAudioRenderer::AudioQueueOutputCallback(void* param_1, OpaqueAudioQueue* param_2,
                                                    AudioQueueBuffer* param_3) {
        int iVar1;
        undefined8 uVar2;

        if (param_1 != (void*)0) {
            iVar1 = param_1->GetEndPosition();
            if (iVar1 != 3) {
                BufferMasterOutput(param_1, param_3);
                iVar1 = _AudioQueueEnqueueBuffer(param_2, param_3, 0, 0);
                if ((iVar1 != -66632) && (iVar1 != 0)) {
                    uVar2 = logger::default_logger();
                    logger::Logger::Log(uVar2, 0, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "audio/osx/AudioRenderer_OSX.cpp",
                                        81, "AudioQueueEnqueueBuffer in CALLBACK ERROR status code: %d", iVar1);
                }
            }
        }
    }

    // 0x100b91860, 272 bytes, base-object constructor, placed by neighbouring functions
    // OSXAudioRenderer::OSXAudioRenderer()
    void OSXAudioRenderer::OSXAudioRenderer() {
        unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>* puVar1;
        AudioBuffer* this_00;
        ulong uVar2;
        unique_ptr local_50[8];
        undefined1* local_48;
        OSXAudioRenderer* local_40;
        uint local_38;
        bool local_31;

        new (this) AudioRenderer();
        field_0 = &PTR__OSXAudioRenderer_100f26948;
        field_288 = (undefined*)0;
        local_48 = &field_296;
        new (local_48) Array<AudioQueueBuffer*, eastl::allocator>();
        uVar2 = 0;
        local_40 = this;
        do {
            local_38 = 2;
            local_31 = false;
            std::make_unique<AudioBuffer, unsigned int&, int, unsigned int&, AudioFormat_const*&, bool>(
                (uint*)local_50, (int*)&field_28, &local_38, &field_20, &local_31);
            puVar1 = (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)
                Array<std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>, eastl::allocator>::operator[](
                    (Array<std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>,
                           eastl::allocator>*)&AudioRenderer::m_outputBuffers,
                    uVar2);
            std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator=(puVar1, local_50);
            local_50->~unique_ptr();
            puVar1 = (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)
                Array<std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>, eastl::allocator>::operator[](
                    (Array<std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>,
                           eastl::allocator>*)&AudioRenderer::m_outputBuffers,
                    uVar2);
            this_00 = (AudioBuffer*)std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator->(puVar1);
            this_00->WroteSamples(field_28);
            uVar2 = uVar2 + 1;
        } while (uVar2 != 3);
    }

    // 0x100b91a10, 16 bytes, complete-object constructor, placed by neighbouring functions
    // OSXAudioRenderer::OSXAudioRenderer(): jumps straight to the base-object constructor

    // 0x100b91a20, 288 bytes, base-object destructor, placed by debug map only (low confidence)
    // OSXAudioRenderer::~OSXAudioRenderer()
    void OSXAudioRenderer::~OSXAudioRenderer() {
        int iVar1;
        undefined8 uVar2;

        field_0 = &PTR__OSXAudioRenderer_100f26948;
        iVar1 = _AudioQueueFlush(field_288);
        if (iVar1 != 0) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/osx/"
                                "AudioRenderer_OSX.cpp",
                                133, "AudioQueueFlush FAILED, status code: %d", iVar1);
        }
        iVar1 = _AudioQueueStop(field_288, 1);
        if (iVar1 != 0) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/osx/"
                                "AudioRenderer_OSX.cpp",
                                138, "AudioQueueStop FAILED, status code: %d", iVar1);
        }
        iVar1 = _AudioQueueDispose(field_288, 1);
        if (iVar1 != 0) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/osx/"
                                "AudioRenderer_OSX.cpp",
                                143, "AudioQueueDispose FAILED, status code: %d", iVar1);
        }
        (&field_296)->~Array();
        ~AudioRenderer();
    }

    // 0x100b91b40, 16 bytes, complete-object destructor, placed by neighbouring functions
    // OSXAudioRenderer::~OSXAudioRenderer(): jumps straight to the base-object destructor

    // 0x100b91b50, 32 bytes, deleting destructor, placed by neighbouring functions
    // OSXAudioRenderer::~OSXAudioRenderer()
    void OSXAudioRenderer::~OSXAudioRenderer() {
        ~OSXAudioRenderer(this);
        operator_delete(this);
    }

    // 0x100b91b70, 336 bytes, placed by neighbouring functions
    // OSXAudioRenderer::Init(AudioAPI*, AudioSystemStartParams const&)
    undefined8 OSXAudioRenderer::Init(AudioAPI* param_1, AudioSystemStartParams* param_2) {
        AudioQueueBuffer* pAVar1;
        undefined8* puVar2;
        ulong uVar3;
        OSXAudioRenderer* pOVar4;
        double local_78[5];
        AudioQueueBuffer* local_50[3];
        OSXAudioRenderer* local_38;

        Init(param_1, param_2);
        local_78[0] = (double)*(uint*)((long)&param_2->field_0 + 4);
        local_78[1] = 2.63628054990002e-313;
        local_78[4] = 7.90505033345994e-323;
        local_78[2] = 2.12199579294153e-314;
        local_78[3] = 4.24399158390681e-314;
        _AudioQueueNewOutput(local_78, AudioQueueOutputCallback, this, 0,
                             *(undefined8*)PTR__kCFRunLoopCommonModes_100ee9dd8, 0, &local_38);
        new (local_50) Array<AudioQueueBuffer*, eastl::allocator>(3);
        Array<AudioQueueBuffer*, eastl::allocator>::operator=((Array<AudioQueueBuffer*, eastl::allocator>*)&field_296,
                                                              (Array*)local_50);
        local_50->~Array();
        uVar3 = 0;
        do {
            pOVar4 = local_38;
            _AudioQueueAllocateBuffer(local_38, field_28 << 2, (Array<AudioQueueBuffer*, eastl::allocator>*)local_50);
            BufferMasterOutput(pOVar4, local_50[0]);
            _AudioQueueEnqueueBuffer(local_38, local_50[0], 0, 0);
            pAVar1 = local_50[0];
            puVar2 = (undefined8*)Array<AudioQueueBuffer*, eastl::allocator>::operator[](
                (Array<AudioQueueBuffer*, eastl::allocator>*)&field_296, uVar3);
            *puVar2 = pAVar1;
            uVar3 = uVar3 + 1;
        } while (uVar3 != 3);
        field_288 = (undefined*)local_38;
        _AudioQueueStart(local_38, 0);
        field_36 = 1;
        field_40 = 1;
        return 1;
    }

    // 0x100b91d80, 32 bytes, placed by neighbouring functions
    // OSXAudioRenderer::Resume()
    void OSXAudioRenderer::Resume() {
        _AudioQueueStart(field_288, 0);
    }

    // 0x100b91da0, 192 bytes, placed by debug map only (low confidence)
    // OSXAudioRenderer::Update(float)
    float OSXAudioRenderer::Update(float param_1) {
        int iVar1;
        unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>* this_00;
        AudioBuffer* this_01;
        AudioMixer* this_02;
        AudioBuss* this_03;
        float extraout_XMM0_Da;
        float extraout_XMM0_Da_00;

        if (field_40 == 1) {
            this_00 = (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)
                Array<std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>, eastl::allocator>::operator[](
                    (Array<std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>,
                           eastl::allocator>*)&AudioRenderer::m_outputBuffers,
                    (ulong)field_32);
            this_01 = (AudioBuffer*)std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::get(this_00);
            iVar1 = this_01->GetNumberBytesCanBeRead(0, 0);
            param_1 = extraout_XMM0_Da;
            if (iVar1 == 0) {
                this_02 = (AudioMixer*)std::unique_ptr<AudioMixer, std::default_delete<AudioMixer>>::operator->(
                    (unique_ptr<AudioMixer, std::default_delete<AudioMixer>>*)&field_8);
                this_03 = (AudioBuss*)this_02->GetMasterBuss();
                this_03->MixToBuffer(this_01);
                iVar1 = this_01->GetNumberBytesCanBeRead(0, 0);
                if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("audioBuffer->GetNumberBytesCanBeRead(0, 0) > 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/osx/"
                              "AudioRenderer_OSX.cpp",
                              222, (char*)0);
                }
                field_32 = field_32 + ((int)(field_32 + 1) / 3) * -3 + 1;
                param_1 = extraout_XMM0_Da_00;
            }
        }
        return param_1;
    }

} // namespace jag::hal::audio::osx

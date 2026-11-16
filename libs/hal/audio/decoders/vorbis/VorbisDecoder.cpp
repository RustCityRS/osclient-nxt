// libs/hal/audio/decoders/vorbis/VorbisDecoder.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.audio

namespace jag::hal::audio::decoders::vorbis {
    class VorbisDecoder : public game::IPositionManager // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~VorbisDecoder();
        virtual void Init(const unsigned char* arg1, unsigned long arg2, unsigned long arg3);
        virtual void Update(float arg1);
        virtual void Decode(const unsigned char* arg1, unsigned long arg2, unsigned long arg3);
        virtual void GetDecoderTypeEnum() const;
        virtual void SetCallback(std::function<void(PacketT<Array<unsigned char>>&)> const& callback);
        void Shutdown();
        VorbisDecoder();

    private:
        uint8_t _unknown_16[304];
    };

    class VorbisDecoderPacket {
    public:
        ~VorbisDecoderPacket();
        void PacketT(unsigned long arg1);

        uint8_t _unknown_0[1];
    };

    // 0x100009e70: VorbisDecoder::Update(float) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: VorbisDecoder::Shutdown() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100016cf0: VorbisDecoder::GetDecoderTypeEnum() const has the same machine code as eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator, eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::size() const

    // 0x100b90ea0
    VorbisDecoder::VorbisDecoder() : AudioDecoder() {
        ReturnValue local_28;

        auto str = getTaskRunner();
        make_shared<VorbisWorker>(&local_28);
        field_8->AddTask<VorbisWorker>(str, (shared_ptr<VorbisWorker>*)"VorbisWorker");
        *(uint8_t**)(field_8 + 16) = AudioFormat::VORBIS;
    }

    // 0x100b91080
    VorbisDecoder::~VorbisDecoder() {
        uint8_t* this_00 = field_8;
        if (this_00->operator_cast_to_bool() != '\0') {
            ((Task*)(*this_00).operator->())->Join();
            this_00->reset();
        }
        this_00->~shared_ptr();
    }

    // 0x100b911b0
    void VorbisDecoder::Init(const unsigned char* arg1, unsigned long arg2, unsigned long arg3) {
        WindowSavedPosition local_60;
        VorbisDecoderPacket local_40;

        if ((arg1 == nullptr) || (arg3 == 0)) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/decoders/"
                            "vorbis/VorbisDecoder.cpp",
                            45, nullptr);
        }
        local_60.PacketT(arg3 + 1);
        MakeSharedPool<PacketT<Array<unsigned char>>, 8>::MakeShared<VorbisDecoderPacket>(&local_40);
        auto pPVar1 = local_40.operator->();
        pPVar1->p1<unsigned long>(0);
        pPVar1 = (PacketT<Array<unsigned char>>*)local_40.operator->();
        pPVar1->pArrayBuffer(arg1, arg2, arg3);
        ((Task*)(*field_8).operator->())->Message(local_40);
    }

    // 0x100b913b0
    void VorbisDecoder::Decode(const unsigned char* arg1, unsigned long arg2, unsigned long arg3) {
        WindowSavedPosition local_60;
        VorbisDecoderPacket local_40;

        if ((arg1 == nullptr) || (arg3 == 0)) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/decoders/"
                            "vorbis/VorbisDecoder.cpp",
                            59, nullptr);
        }
        local_60.PacketT(arg3 + 1);
        MakeSharedPool<PacketT<Array<unsigned char>>, 8>::MakeShared<VorbisDecoderPacket>(&local_40);
        auto pPVar1 = local_40.operator->();
        pPVar1->p1<unsigned long>(10);
        pPVar1 = (PacketT<Array<unsigned char>>*)local_40.operator->();
        pPVar1->pArrayBuffer(arg1, arg2, arg3);
        ((Task*)(*field_8).operator->())->Message(local_40);
    }

    // 0x100b914b0
    void VorbisDecoder::SetCallback(std::function<void(PacketT<Array<unsigned char>>&)> const& callback) {
        ((VorbisWorker*)(*field_8).operator->())->SetWorkerOnResponse(callback);
    }

} // namespace jag::hal::audio::decoders::vorbis

// libs/hal/audio/decoders/vorbis/VorbisDecoder.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.audio

namespace jag::hal::audio::decoders::vorbis {
    class VorbisDecoder : public game::IPositionManager // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~VorbisDecoder();
        virtual void Init(unsigned char const*, unsigned long, unsigned long);
        virtual Update(float);
        virtual void Decode(unsigned char const*, unsigned long, unsigned long);
        virtual GetDecoderTypeEnum() const;
        virtual void SetCallback(std::function<void(PacketT<Array<unsigned char, eastl::allocator>>&)> const&);
        Shutdown();
        VorbisDecoder();

        // data members, from how the methods use this: 32 bytes, the first 16 are IPositionManager
        char _unknown_16[8];
        undefined* field_24; // offset 24
    };

    class VorbisDecoderPacket {
    public:
        ~VorbisDecoderPacket();
        void PacketT(unsigned long);

        // data members, from how the methods use this: 32 bytes
        char _unknown_0[24];
        undefined8 field_24; // offset 24
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    VorbisDecoder::Update(float);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    VorbisDecoder::Shutdown();

    // 0x100016cf0: the linker folded this into eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator, eastl::use_first<eastl::pair<int const, unsigned int> >, eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::size() const, which has identical code
    VorbisDecoder::GetDecoderTypeEnum() const;

    // 0x100b90ea0, 144 bytes, base-object constructor, placed by class name and debug map
    // VorbisDecoder::VorbisDecoder()
    void VorbisDecoder::VorbisDecoder() {
        TaskRunner* this_00;
        shared_ptr local_28;

        new (this) AudioDecoder();
        field_0 = &PTR__VorbisDecoder_100f268f8;
        this_00 = (TaskRunner*)getTaskRunner();
        make_shared<VorbisWorker>((jag*)&local_28);
        TaskRunner::AddTask<VorbisWorker>((shared_ptr*)field_8, this_00, "VorbisWorker", &local_28);
        local_28.~shared_ptr();
        field_24 = AudioFormat::VORBIS;
    }

    // 0x100b91070, 16 bytes, complete-object constructor, placed by class name
    // VorbisDecoder::VorbisDecoder(): jumps straight to the base-object constructor

    // 0x100b91080, 128 bytes, base-object destructor, placed by class name
    // VorbisDecoder::~VorbisDecoder()
    void VorbisDecoder::~VorbisDecoder() {
        undefined1* this_00;
        Task* this_01;

        field_0 = &PTR__VorbisDecoder_100f268f8;
        this_00 = field_8;
        if (this_00->operator_cast_to_bool()) {
            this_01 = (Task*)shared_ptr<VorbisWorker>::operator->((shared_ptr<VorbisWorker>*)this_00);
            this_01->Join();
            shared_ptr<VorbisWorker>::reset();
        }
        this_00->~shared_ptr();
        ~AutoSingleton();
    }

    // 0x100b91180, 16 bytes, complete-object destructor, placed by class name
    // VorbisDecoder::~VorbisDecoder(): jumps straight to the base-object destructor

    // 0x100b91190, 32 bytes, deleting destructor, placed by class name
    // VorbisDecoder::~VorbisDecoder()
    void VorbisDecoder::~VorbisDecoder() {
        ~VorbisDecoder(this);
        operator_delete(this);
    }

    // 0x100b911b0, 240 bytes, placed by class name
    // VorbisDecoder::Init(unsigned char const*, unsigned long, unsigned long)
    void VorbisDecoder::Init(uchar* param_1, ulong param_2, ulong param_3) {
        PacketT<Array<unsigned char, eastl::allocator>>* pPVar1;
        Task* this_00;
        VorbisDecoderPacket* extraout_RDX;
        VorbisDecoderPacket local_60;
        shared_ptr local_40;

        if ((param_1 == (uchar*)0) || (param_3 == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/decoders/"
                            "vorbis/VorbisDecoder.cpp",
                            45, (char*)0);
        }
        local_60.PacketT(param_3 + 1);
        MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::MakeShared<VorbisDecoderPacket>(
            &local_40, (MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>*)&local_60, extraout_RDX);
        local_60.~WindowSavedPosition();
        pPVar1 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                     shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                         (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar1, 0);
        pPVar1 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                     shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                         (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
        pPVar1->pArrayBuffer(param_1, param_2, param_3);
        this_00 = (Task*)shared_ptr<VorbisWorker>::operator->((shared_ptr<VorbisWorker>*)field_8);
        this_00->Message(&local_40);
        local_40.~shared_ptr();
    }

    // 0x100b913b0, 256 bytes, placed by class name
    // VorbisDecoder::Decode(unsigned char const*, unsigned long, unsigned long)
    void VorbisDecoder::Decode(uchar* param_1, ulong param_2, ulong param_3) {
        PacketT<Array<unsigned char, eastl::allocator>>* pPVar1;
        Task* this_00;
        VorbisDecoderPacket* extraout_RDX;
        VorbisDecoderPacket local_60;
        shared_ptr local_40;

        if ((param_1 == (uchar*)0) || (param_3 == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/decoders/"
                            "vorbis/VorbisDecoder.cpp",
                            59, (char*)0);
        }
        local_60.PacketT(param_3 + 1);
        MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::MakeShared<VorbisDecoderPacket>(
            &local_40, (MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>*)&local_60, extraout_RDX);
        local_60.~WindowSavedPosition();
        pPVar1 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                     shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                         (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar1, 10);
        pPVar1 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                     shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                         (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
        pPVar1->pArrayBuffer(param_1, param_2, param_3);
        this_00 = (Task*)shared_ptr<VorbisWorker>::operator->((shared_ptr<VorbisWorker>*)field_8);
        this_00->Message(&local_40);
        local_40.~shared_ptr();
    }

    // 0x100b914b0, 48 bytes, placed by class name
    // VorbisDecoder::SetCallback(std::function<void (PacketT<Array<unsigned char, eastl::allocator> >&)> const&)
    /* VorbisDecoder::SetCallback(std::function<void
   (PacketT<Array<unsigned char, eastl::allocator> >&)> const&) */

    void VorbisDecoder::SetCallback(function* param_1) {
        VorbisWorker* this_00;

        this_00 = (VorbisWorker*)shared_ptr<VorbisWorker>::operator->((shared_ptr<VorbisWorker>*)field_8);
        this_00->SetWorkerOnResponse(param_1);
    }

} // namespace jag::hal::audio::decoders::vorbis

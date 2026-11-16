// libs/oldscape/jagex3/sound/delayed_stream.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::oldscape::sound {
    class DelayedStream : public jag::graphics::particlemodules::Module // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~DelayedStream();
        virtual SubstreamStart();
        virtual SelfMixCost();
        virtual void DoMix(Array<int, eastl::allocator>&, int, int);
        virtual void PretendToMix(int);
        DelayedStream(shared_ptr<PCMStream> const&, int);
        DelayedStream* BySamples(shared_ptr<PCMStream>&, int);
        DelayedStream* ByMillis(shared_ptr<PCMStream>, int);
        DelayedStream* SubstreamNext();

        // data members, from how the methods use this: 96 bytes, the first 8 are Module
        shared_ptr field_8; // offset 8
        long field_24;      // offset 24
        char _unknown_32[16];
        undefined4 field_48; // offset 48
        undefined1 field_52; // offset 52
        char _unknown_53[19];
        shared_ptr field_72; // offset 72
        int field_88;        // offset 88
        char _unknown_92[4];
    };

    // 0x1002a75c0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // DelayedStream::~DelayedStream(): jumps straight to the base-object destructor

    // 0x1002a75d0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // DelayedStream::~DelayedStream()
    void DelayedStream::~DelayedStream() {
        ~DelayedStream(this);
        operator_delete(this);
    }

    // 0x1002a75f0, 32 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // DelayedStream::SubstreamStart()
    /* DelayedStream::SubstreamNext() */

    DelayedStream* DelayedStream::SubstreamNext() {
        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        return this;
    }

    // 0x1002a7630, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // DummyPCMPlayer::~DummyPCMPlayer(): jumps straight to the base-object destructor

    // 0x1002a7640, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // DummyPCMPlayer::~DummyPCMPlayer()
    void DummyPCMPlayer::~DummyPCMPlayer() {
        ~DummyPCMPlayer(this);
        operator_delete(this);
    }

    // 0x1002a8610, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // DelayedStream::~DelayedStream()
    void DelayedStream::~DelayedStream() {
        field_0 = &PTR__DelayedStream_100ef9c28;
        field_72->~shared_ptr();
        ~PCMStream();
    }

    // 0x1002a8680, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // DummyPCMPlayer::~DummyPCMPlayer()
    void DummyPCMPlayer::~DummyPCMPlayer() {
        ~PCMPlayer();
    }

} // namespace jag::oldscape::sound

namespace jag {
    // 0x1002a7950, 128 bytes, inline, placed by debug map only (low confidence)
    // void PacketT<Array<unsigned char, BucketAllocatorEASTL> >::p1Isaac<unsigned char>(unsigned char, Isaac&)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1Isaac<unsigned char>(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, uchar param_1, Isaac* param_2) {
        long lVar1;
        char cVar2;
        ulong uVar3;
        char* pcVar4;

        lVar1 = *(long*)(this + 24);
        uVar3 = end();
        if (uVar3 < lVar1 + 1U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + sizeof(val) <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      96, (char*)0);
        }
        cVar2 = param_2->TakeNextValue();
        uVar3 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar3 + 1;
        pcVar4 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar3);
        *pcVar4 = cVar2 + param_1;
    }

    // 0x1002a8440, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::sound::LazyWave::LazyWaveImpl>::type make_shared<oldscape::sound::LazyWave::LazyWaveImpl, shared_ptr<oldscape::sound::JagVorbis> const&, decltype(nullptr)>(shared_ptr<oldscape::sound::JagVorbis> const&, decltype(nullptr)&&)
    jag* jag::make_shared<oldscape::sound::LazyWave::LazyWaveImpl, shared_ptr<oldscape::sound::JagVorbis> const&,
                          decltype(nullptr)>(shared_ptr* param_1, _func_decltype_nullptr** param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        LazyWaveImpl* local_38[2];

        pvVar1 = (void*)aligned_alloc(128, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] =
                placement_new<oldscape::sound::LazyWave::LazyWaveImpl, shared_ptr<oldscape::sound::JagVorbis> const&,
                              decltype(nullptr)>((void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::sound::LazyWave::LazyWaveImpl>, int,
                                   oldscape::sound::LazyWave::LazyWaveImpl*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x1002a84f0, 112 bytes, inline, placed by debug map only (low confidence)
    // oldscape::sound::LazyWave::LazyWaveImpl* placement_new<oldscape::sound::LazyWave::LazyWaveImpl, shared_ptr<oldscape::sound::JagVorbis> const&, decltype(nullptr)>(void*, shared_ptr<oldscape::sound::JagVorbis> const&, decltype(nullptr)&&)
    LazyWaveImpl*
    jag::placement_new<oldscape::sound::LazyWave::LazyWaveImpl, shared_ptr<oldscape::sound::JagVorbis> const&,
                       decltype(nullptr)>(void* param_1, shared_ptr* param_2, _func_decltype_nullptr** param_3) {
        shared_ptr<oldscape::dash3d::Decor> asStackY_b8[128];
        shared_ptr in_stack_ffffffffffffffc8;
        shared_ptr in_stack_ffffffffffffffd8;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> asStack_16[6];

        shared_ptr<oldscape::dash3d::Decor>::shared_ptr(asStackY_b8 + 136, param_2);
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(asStack_16 + -10,
                                                                                 (_func_decltype_nullptr*)0);
        oldscape::sound::LazyWave::LazyWaveImpl::LazyWaveImpl(param_1, in_stack_ffffffffffffffc8,
                                                              in_stack_ffffffffffffffd8);
        ((asStack_16 + -10))->~shared_ptr();
        ((asStackY_b8 + 136))->~shared_ptr();
        return param_1;
    }

    // 0x1002a87a0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::sound::WaveCache* placement_new<oldscape::sound::WaveCache, oldscape::jagex3::Js5&, oldscape::jagex3::Js5&>(void*, oldscape::jagex3::Js5&, oldscape::jagex3::Js5&)
    WaveCache* jag::placement_new<oldscape::sound::WaveCache, oldscape::jagex3::Js5&, oldscape::jagex3::Js5&>(
        void* param_1, Js5* param_2, Js5* param_3) {
        oldscape::sound::WaveCache::WaveCache(param_1, param_2, param_3);
        return param_1;
    }

    // 0x1002a87c0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::sound::WaveCache>* placement_new<ref_counter_shared<oldscape::sound::WaveCache>, int, oldscape::sound::WaveCache*&>(void*, int&&, oldscape::sound::WaveCache*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::sound::WaveCache>, int, oldscape::sound::WaveCache*&>(
        void* param_1, int* param_2, WaveCache** param_3) {
        ref_counter_shared<oldscape::sound::WaveCache>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag

namespace jag::oldscape::shared {
    // 0x1002a77a0, 112 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PacketPool::PacketPool(unsigned int)
    void PacketPool::PacketPool(uint param_1) {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this_00;
        ulong uVar1;

        new (this) std::array<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, 10ul>();
        field_320 = 0;
        field_324 = param_1;
        uVar1 = 0;
        do {
            this_00 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                std::array<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, 10ul>::operator[](
                    (array<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, 10ul>*)this, uVar1);
            this_00->Reserve((ulong)param_1);
            uVar1 = uVar1 + 1;
        } while (uVar1 != 10);
    }

    // 0x1002a78e0, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // PacketPool::~PacketPool()
    void PacketPool::~PacketPool() {
        ~array();
    }

} // namespace jag::oldscape::shared

namespace jag::oldscape::dash3d {
    // 0x1002a75f0: the linker folded this into sound::DelayedStream::SubstreamStart(), which has identical code
    ModelRSevenUnlit::GetTempModel(int);

} // namespace jag::oldscape::dash3d

namespace jag::oldscape {
    // 0x1002a78a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // PacketJ<Array<unsigned char, BucketAllocatorEASTL> >::PacketJ(): jumps straight to the base-object constructor

} // namespace jag::oldscape

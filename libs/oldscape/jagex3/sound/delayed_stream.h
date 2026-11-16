// libs/oldscape/jagex3/sound/delayed_stream.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.jagex3

namespace jag {
    // 0x1002a7950
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1Isaac<unsigned char>(unsigned char arg1, Isaac& isaac) {
        long lVar1 = *(long*)(this + 24);
        unsigned long uVar3 = end();
        if (uVar3 < lVar1 + 1U) {
            LogAssert("m_pos + sizeof(val) <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      96, nullptr);
        }
        char cVar2 = isaac.TakeNextValue();
        uVar3 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar3 + 1;
        char* pcVar4 = (char*)(*this)[uVar3];
        *pcVar4 = cVar2 + arg1;
    }

    // 0x1002a8440
    shared_ptr_if_not_array<oldscape::sound::LazyWave::LazyWaveImpl>::type
    make_shared<oldscape::sound::LazyWave::LazyWaveImpl, shared_ptr<oldscape::sound::JagVorbis> const&,
                decltype(nullptr)>(const shared_ptr<oldscape::sound::JagVorbis>& jagVorbis, decltype(nullptr)&& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        LazyWaveImpl* local_38[2];

        auto arg1 = aligned_alloc(128, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::sound::LazyWave::LazyWaveImpl>::type result;
        } else {
            local_38[0] =
                placement_new<oldscape::sound::LazyWave::LazyWaveImpl, shared_ptr<oldscape::sound::JagVorbis> const&,
                              decltype(nullptr)>((void*)((long)arg1 + 32), jagVorbis, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::sound::LazyWave::LazyWaveImpl>, int,
                              oldscape::sound::LazyWave::LazyWaveImpl*&>(arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x1002a84f0
    oldscape::sound::LazyWave::LazyWaveImpl*
    placement_new<oldscape::sound::LazyWave::LazyWaveImpl, shared_ptr<oldscape::sound::JagVorbis> const&,
                  decltype(nullptr)>(void* arg1, const shared_ptr<oldscape::sound::JagVorbis>& jagVorbis,
                                     decltype(nullptr)&& arg3) {

        shared_ptr<oldscape::dash3d::Decor> local_30(jagVorbis);
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_20;
        new (arg1) oldscape::sound::LazyWave::LazyWaveImpl(&local_30, &local_20);
        return arg1;
    }

    // 0x1002a87a0
    oldscape::sound::WaveCache*
    placement_new<oldscape::sound::WaveCache, oldscape::jagex3::Js5&, oldscape::jagex3::Js5&>(
        void* arg1, oldscape::jagex3::Js5& js51, oldscape::jagex3::Js5& js52) {
        new (arg1) oldscape::sound::WaveCache(js51, js52);
        return arg1;
    }

    // 0x1002a87c0
    ref_counter_shared<oldscape::sound::WaveCache>*
    placement_new<ref_counter_shared<oldscape::sound::WaveCache>, int, oldscape::sound::WaveCache*&>(
        void* arg1, int&& arg2, oldscape::sound::WaveCache*& arg3) {
        new (arg1) ref_counter_shared<oldscape::sound::WaveCache>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::oldscape::sound {
    class DelayedStream : public jag::graphics::particlemodules::Module // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~DelayedStream();
        virtual DelayedStream* SubstreamStart();
        virtual uint64_t SelfMixCost();
        virtual void DoMix(Array<int>& arg1, int arg2, int arg3);
        virtual void PretendToMix(int arg1);
        DelayedStream(const shared_ptr<PCMStream>& pcmStream, int arg2);
        auto BySamples(shared_ptr<PCMStream>& pcmStream, int arg2);
        auto ByMillis(shared_ptr<PCMStream> pcmStream, int arg2);
        DelayedStream* SubstreamNext();

    private:
        uint8_t _unknown_8[16];
        long field_24;
        uint8_t _unknown_32[16];
        uint32_t field_48;
        uint8_t field_52;
        uint8_t _unknown_53[35];
        int field_88;
        uint8_t _unknown_92[4];
    };

    // 0x1002a75f0
    DelayedStream* DelayedStream::SubstreamStart() {
        new (this) shared_ptr();
        return this;
    }

    // 0x1002a8610
    DelayedStream::~DelayedStream() {
        field_72.~shared_ptr();
    }

    // 0x1002a8680
    DummyPCMPlayer::~DummyPCMPlayer() {}

} // namespace jag::oldscape::sound

namespace jag::oldscape::shared {
    // 0x1002a77a0
    PacketPool::PacketPool(unsigned int arg1)
        : std::array<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, 10ul>(), field_320(0), field_324(arg1) {
        unsigned long arg1_00 = 0;
        do {
            ((PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(*this)[arg1_00])->Reserve((unsigned long)arg1);
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 10);
    }

    // 0x1002a78e0
    PacketPool::~PacketPool() {}

} // namespace jag::oldscape::shared

namespace jag::oldscape::dash3d {
    // 0x1002a75f0: ModelRSevenUnlit::GetTempModel(int) has the same machine code as sound::DelayedStream::SubstreamStart()

} // namespace jag::oldscape::dash3d

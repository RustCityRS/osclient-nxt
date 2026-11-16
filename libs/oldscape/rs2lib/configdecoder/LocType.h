// libs/oldscape/rs2lib/configdecoder/LocType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::configdecoder {
    class LocType {
    public:
        void Init(jagex3::Js5* js51, jagex3::Js5* js52, bool arg3);
        LocType();
        shared_ptr<midi2::MidiPlayerMainThread>* List(int arg1);
        void Decode(shared_ptr<PacketJ<Array<unsigned char>>>& packetJ);
        void PostDecode();
        void Decode(shared_ptr<PacketJ<Array<unsigned char>>>& packetJ, int arg2);
        unsigned long CheckModel(int arg1);
        unsigned long CheckModelAll();
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>* GetModel(int arg1, int arg2, int arg3, int arg4, int arg5,
                                                                     int arg6);
        LocType* BuildModel(int arg1, int arg2);
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>* GetModelLit(int arg1, int arg2, int arg3, int arg4,
                                                                        int arg5, int arg6);
        LocType* GetTempModel(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, SeqType* seqType, int arg8);
        uint8_t* GetMultiLoc() const;
        LocType* GetMultiLocOrThis() const;
        LocType* GetSpecifiedMultiLocOrThis(int arg1) const;
        void GetParam(int arg1, int arg2);
        auto GetParam(int arg1, const eastl::string& str);
        void ResetCache();
        unsigned long HasBgSound();
        ~LocType();
        static int64_t m_lowMem;
        static int64_t m_pConfigClient;
        static int64_t m_pModels;
        static LRUHashCache<LocType, 4096ul, 4097ul, false, unsigned long long> m_recentUse;
        static LRUHashCache<dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long> m_mc1;
        static LRUHashCache<dash3d::ModelSource, 128ul, 129ul, false, unsigned long long> m_mc2;
        static LRUHashCache<dash3d::ModelLit, 128ul, 129ul, false, unsigned long long> m_mc3;

    private:
        uint8_t _unknown_0[184];
        unsigned int field_184;
        unsigned int field_188;
        uint32_t field_192;
        uint8_t field_196;
        uint8_t _unknown_197[3];
        unsigned int field_200;
        unsigned int field_204;
        uint8_t field_208;
        uint8_t field_209;
        uint8_t _unknown_210[2];
        unsigned int field_212;
        unsigned int field_216;
        int field_220;
        int field_224;
        uint8_t _unknown_228[204];
        unsigned int field_432;
        unsigned int field_436;
        unsigned int field_440;
        uint8_t field_444;
        uint8_t field_445;
        uint8_t _unknown_446[2];
        unsigned int field_448;
        unsigned int field_452;
        unsigned int field_456;
        int field_460;
        int field_464;
        int field_468;
        unsigned int field_472;
        uint8_t field_476;
        uint8_t field_477;
        uint8_t _unknown_478[2];
        unsigned int field_480;
        uint8_t _unknown_484[28];
        unsigned int field_512;
        unsigned int field_516;
        unsigned int field_520;
        unsigned int field_524;
        unsigned int field_528;
        unsigned int field_532;
        uint8_t _unknown_536[24];
        uint8_t field_560;
        uint8_t _unknown_561[15];
    };

    // 0x100246c60
    LocType::~LocType() {
        field_568.~hash_map();
        field_536.~Array();
        field_488.~Array();
        field_232.~fixed_vector();
        field_160.~Array();
        field_136.~Array();
        field_112.~Array();
        field_88.~Array();
        field_56.~basic_string();
        field_32.~Array();
        field_8.~Array();
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x100228ea0
    shared_ptr_if_not_array<oldscape::configdecoder::LocType>::type make_shared<oldscape::configdecoder::LocType>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        LocType* local_28[2];

        auto arg1 = aligned_alloc(656, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::configdecoder::LocType>::type result;
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::LocType>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::configdecoder::LocType>, int,
                              oldscape::configdecoder::LocType*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag

// libs/oldscape/rs2lib/configdecoder/VarnType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::configdecoder {
    class VarnType {
    public:
        void Init(jagex3::Js5* js5);
        auto List(int arg1);
        void Decode(PacketJ<Array<unsigned char>>& packetJ);
        void Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2);
        void ResetCache();
        static int64_t m_pConfigClient;
        static LRUHashCache<VarnType, 64ul, 65ul, false, unsigned long long> m_recentUse;

        uint8_t _unknown_0[1];
    };

    // 0x101680ff0
    int64_t VarnType::m_pConfigClient;

    // 0x101680ff8
    LRUHashCache<VarnType, 64ul, 65ul, false, unsigned long long> VarnType::m_recentUse;

    // 0x100239310
    void VarnType::Init(jagex3::Js5* js5) {
        m_pConfigClient = js5;
    }

    // 0x100239320
    auto VarnType::List(int arg1) {
        VarnType* varnType;
        PacketJ<Array<unsigned char> _>* packetJ;
        ReturnValue local_40;
        ReturnValue local_30;

        local_30[0] = (ReturnValue)(long)arg1;
        auto groundDecor = m_recentUse.Find(local_30);
        auto result(groundDecor);
        if (!(result != nullptr)) {
            local_30 = shared_ptr();
            m_pConfigClient->GetFile(local_30, 24, arg1, nullptr);
            make_shared<VarnType>(&local_40);
            result = local_40;
            if (local_30 != nullptr) {
                varnType = (VarnType*)(result).operator->();
                packetJ = (PacketJ<Array<unsigned char> _>*)*local_30;
                Decode(varnType, packetJ);
            }
            local_40[0] = (ReturnValue)(long)arg1;
            m_recentUse.Put(result, 1, local_40);
        }
        return result;
    }

    // 0x1002395f0
    void VarnType::Decode(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1;

        while (true) {
            bVar1 = packetJ.g1();
            if (bVar1 == 0)
                break;
            Decode((VarnType*)packetJ, packetJ, (unsigned int)bVar1);
        }
    }

    // 0x100239710
    void VarnType::Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2) {
        uint64_t in_RAX;

        uint32_t uVar1 = (uint32_t)((unsigned long)in_RAX >> 32);
        (logger::default_logger())
            ->Log(false, 8,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/configdecoder/"
                  "VarnType.cpp",
                  50, "Error unrecognised .varn config code: %i", (((uint64_t)uVar1 << 32) | (uint32_t)arg2));
    }

    // 0x100239750
    void VarnType::ResetCache() {
        m_recentUse.Reset();
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x1002394e0
    shared_ptr_if_not_array<oldscape::configdecoder::VarnType>::type make_shared<oldscape::configdecoder::VarnType>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        VarnType* local_28[2];

        auto arg1 = aligned_alloc(24, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::configdecoder::VarnType>::type result;
        } else {
            local_28[0] = (VarnType*)((Layout*)((long)arg1 + 16))->SSOBeginPtr();
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared_trivial<oldscape::configdecoder::VarnType>, int,
                              oldscape::configdecoder::VarnType*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag

// libs/oldscape/rs2lib/util/playermodel.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::rs2lib {
    class PlayerModel {
    public:
        void SetBodytype(int hiscoresDataSource);
        uint32_t GetBodytype() const;
        ~PlayerModel();
        int GetPronoun() const;
        void RefreshAppearance();
        void SetDefaultTypeForIdkSlot(int arg1, eastl::fixed_vector<int, 12ul>& arg2, int arg3);
        auto GetHeadModel() const;
        PlayerModel();
        PlayerModel(PlayerModel& playerModel);
        void SetAppearance(const eastl::fixed_vector<int, 12ul>& arg1, const eastl::fixed_vector<int, 12ul>& arg2,
                           const eastl::fixed_vector<int, 5ul>& arg3, int arg4, int arg5);
        auto BuildDefaultAppearance(int arg1);
        void CalcBaseId();
        void IdkChangePart(int arg1, bool arg2);
        void IdkChangeColour(int arg1, bool arg2);
        void IdkChangeBodytype(int arg1);
        void IdkSaveDesign(PacketJ<Array<unsigned char>>& packetJ);
        auto GetTempModel(configdecoder::SeqType* seqType1, int arg2, configdecoder::SeqType* seqType2, int arg4);
        int GetHeadModelCacheId();
        void ResetCache();
        void SetAppearance(const eastl::fixed_vector<int, 12ul>& arg1, const eastl::fixed_vector<int, 12ul>& arg2,
                           Array<shared_ptr<configdecoder::ObjTypeCustomisation>> objTypeCustomisations, bool arg4,
                           const eastl::fixed_vector<int, 5ul>& arg5, int arg6, int arg7, int arg8);
        static int32_t m_basePartMap[7]; // = { 8, 11, 4, 6, 9, 7, 10 }
        static std::array<short, 5ul> m_recol1s;
        static std::array<Array<short>, 5ul> m_recol1d; // = array<Array<short>, 5ul>()
        static std::array<short, 5ul> m_recol2s;
        static std::array<Array<short>, 5ul> m_recol2d; // = array<Array<short>, 5ul>()
        static LRUHashCache<dash3d::ModelLit, 260ul, 261ul, false, unsigned long long> m_modelCache;
        static LRUHashCache<int, 16ul, 17ul, false, unsigned long long>
            m_headModelHashToModelCacheID; // = LRUHashCache<int, 16ul, 17ul, false, unsigned long long>(16, "LRUHashCache")
        static int64_t m_nextHeadModelCacheID;

    private:
        long field_0;
        long field_8;
        uint8_t _unknown_16[224];
        unsigned int field_240;
        uint8_t _unknown_244[4];
        ReturnValue field_248;
        uint8_t _unknown_256[32];
        bool field_288;
        uint8_t _unknown_289[3];
        int m_pronoun;
        HiscoresDataSource m_bodytype;
        uint8_t _unknown_300[4];
    };

    // 0x10010c980
    uint32_t PlayerModel::GetBodytype() const {
        return m_spriteCompassID;
    }

    // 0x100133250
    PlayerModel::~PlayerModel() {
        field_264.~Array();
        field_176.~fixed_vector();
        field_88.~fixed_vector();
    }

    // 0x100165a30
    int PlayerModel::GetPronoun() const {
        return m_tileHeight;
    }

} // namespace jag::oldscape::rs2lib

namespace jag::oldscape::helpers {
    // 0x10010c990
    eastl::list<int> GetKeysIf<int, SubInterface, Client::CloseModal()::$_15>(eastl::hash_map<int, SubInterface>& arg1,
                                                                              Client::CloseModal()::$_15 arg2) {
        eastl::list<int> result;
        __15* self;
        ReturnValue result;
        ReturnValue local_38;

        new (arg1) eastl::list<int>();
        auto local_48 = arg2->begin();
        &result = &local_38;
        result = arg2->end();
        bool cVar1 = local_48 != result;
        if (cVar1) {
            do {
                self = (__15*)local_48.HeapBeginPtr();
                cVar1 = Client::CloseModal()::$_15::operator()(self, &result);
                if (cVar1) {
                    arg1.push_back(*self);
                }
                ++local_48;
                &result = &local_38;
                cVar1 = local_48 != local_38;
            } while (cVar1);
        }
        return arg1;
    }

    // 0x10010ce10
    eastl::list<unsigned long long> GetKeysIf<unsigned long long, int, Client::PurgeServerActive(int)::$_16>(
        eastl::hash_map<unsigned long long, int>& arg1, Client::PurgeServerActive(int)::$_16 arg2) {
        bool cVar1;
        pair<unsigned long long const, int>* arg1_00;
        __16 local_38;

        new (arg1) eastl::list<unsigned long long>();
        auto local_58 = arg2->begin();
        auto local_48 = arg2->end();
        while (true) {
            cVar1 = local_58 != local_48;
            if (!cVar1)
                break;
            arg1_00 = (pair<unsigned long long const, int>*)local_58.HeapBeginPtr();
            cVar1 = int->PurgeServerActive()::$_16::operator()(&local_38, arg1_00);
            if (cVar1) {
                arg1.push_back(*arg1_00);
            }
            ++local_58;
        }
        return arg1;
    }

} // namespace jag::oldscape::helpers

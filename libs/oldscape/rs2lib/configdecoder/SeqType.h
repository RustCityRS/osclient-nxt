// libs/oldscape/rs2lib/configdecoder/SeqType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::configdecoder {
    class SeqType {
    public:
        auto AnimateModel90(dash3d::ModelLit& modelLit, int arg2, int arg3, int arg4) const;
        void SplitAnimateModel(dash3d::ModelLit& modelLit, int arg2, SeqType& seqType, int arg4);
        auto AnimateModel(dash3d::ModelLit& modelLit, int arg2, int arg3) const;
        void Init(jagex3::Js5* js51, jagex3::Js5* js52, jagex3::Js5* js53);
        auto List(int arg1);
        void Decode(PacketJ<Array<unsigned char>>& packetJ);
        void PostDecode();
        void Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2);
        bool IsKeyFramed() const;
        auto Get(int arg1);
        auto GetKeyFrameSet(int arg1);
        auto GetKeyFrameSet() const;
        SeqType* SplitAnimateModelNoKeyFrameSet(dash3d::ModelLit& modelLit, int arg2, SeqType& seqType, int arg4);
        unsigned long Compare(Array<int> arg1, Array<int> arg2, int arg3, int arg4);
        auto AnimateModelWithExtra(dash3d::ModelLit& modelLit, int arg2) const;
        unsigned int GetEnd() const;
        unsigned int GetStart() const;
        int GetDuration() const;
        uint8_t* GetKeyFrameSetStatus() const;
        void GetKeyFrameSetStatus(int arg1);
        auto GetKeyFrameSetInner(int arg1);
        void ResetCache();
        bool IsInitComplete();
        void GetNumFrames();
        SeqType();
        ~SeqType();
        static int64_t m_pConfigClient;
        static int64_t m_pAnims;
        static int64_t m_pBases;
        static LRUHashCache<SeqType, 64ul, 65ul, false, unsigned long long> m_recentUse;
        static LRUHashCache<dash3d::AnimFrameSet, 100ul, 101ul, false, unsigned long long> m_framesetCache;
        static LRUHashCache<graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false, unsigned long long>
            m_keyFrameSetCache;

    private:
        int field_0;
        uint8_t _unknown_4[60];
        unsigned int m_start;
        unsigned int m_end;
        uint8_t _unknown_72[96];
        unsigned int field_168;
        uint8_t _unknown_172[52];
        uint8_t field_224;
        uint8_t _unknown_225[3];
        unsigned int field_228;
        unsigned int field_232;
        unsigned int field_236;
        unsigned int field_240;
        uint8_t field_244;
        uint8_t _unknown_245[3];
        unsigned int field_248;
        unsigned int field_252;
        unsigned int field_256;
        uint8_t _unknown_260[4];
    };

    // 0x100235310
    auto SeqType::GetKeyFrameSet(int arg1) {
        OldscapeAnimKeyFrameSet* oldscapeAnimKeyFrameSet;
        ReturnValue local_28;

        GetKeyFrameSetInner(&local_28, arg1);
        if (local_28 != nullptr) {
            oldscapeAnimKeyFrameSet = (OldscapeAnimKeyFrameSet*)local_28.operator->();
            if ((uint8_t*)oldscapeAnimKeyFrameSet->GetStatus() == DataStatus::READY) {
                result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_28);
                goto LAB_10023535f;
            }
        }
        auto result;
    LAB_10023535f:
        return result;
    }

    // 0x10024d180
    SeqType::SeqType() : field_0(-1) {
        uint8_t* local_40 = &field_8;
        new (&field_8) eastl::hash_map(local_48);
        m_start = 0;
        m_end = 0;
        new (&field_72) Array<int>();
        uint8_t* local_38 = &field_72;
        new (&field_96) Array<int>();
        new (&field_120) Array<int>();
        new (&field_144) Array<int>();
        field_168 = 4294967295;
        new (&field_176) Array<int>();
        new (&field_200) Array<bool>();
        field_224 = 0;
        field_228 = 5;
        field_232 = 4294967295;
        field_236 = 4294967295;
        field_240 = 99;
        field_244 = 0;
        field_248 = 4294967295;
        field_252 = 4294967295;
        field_256 = 2;
    }

    // 0x10024d370
    SeqType::~SeqType() {
        field_200.~Array();
        field_176.~Array();
        field_144.~Array();
        field_120.~Array();
        field_96.~Array();
        field_72.~Array();
        field_8.~hash_map();
    }

} // namespace jag::oldscape::configdecoder

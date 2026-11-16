// libs/game/runetek5/config/invtype/InvType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class InvType {
    public:
        // virtual methods in vtable order
        virtual ~InvType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        unsigned int GetSize() const;
        InvType(BaseTemplateConfigTypeList<InvType>* baseTemplateConfigTypeList, int arg2);

    private:
        uint8_t _unknown_8[16];
        BaseTemplateConfigTypeList<InvType>* field_24;
        int field_32;
        uint8_t _unknown_36[20];
        unsigned int m_size;
        unsigned int field_60;
        uint8_t _unknown_64[8];
    };

    // 0x100583610
    InvType::~InvType() {
        field_64.~hash_map();
    }

    // 0x100583850
    InvType::InvType(BaseTemplateConfigTypeList<InvType>* baseTemplateConfigTypeList, int arg2)
        : ConfigType<InvType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<InvType, 32>(), m_size(0), field_60(0) {

        new (&field_64) eastl::hash_map(local_20);
    }

} // namespace jag::game

namespace jag::oldscape::configdecoder {
    class InvType {
    public:
        InvType();
        void Init(jagex3::Js5* js5);
        auto List(int arg1);
        void Decode(PacketJ<Array<unsigned char>>& packetJ);
        void ResetCache();
        void Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2);
        static int64_t m_pConfigClient;
        static LRUHashCache<InvType, 64ul, 65ul, false, unsigned long long> m_recentUse;

    private:
        unsigned int field_0;
    };

} // namespace jag::oldscape::configdecoder

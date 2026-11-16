// libs/game/runetek5/config/seqtype/SeqGroupType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class SeqGroupType {
    public:
        // virtual methods in vtable order
        virtual ~SeqGroupType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        virtual uint8_t* GetTransformMask() const;
        virtual uint8_t* GetJointWeights() const;
        bool IsWalkMerge() const;
        SeqGroupType(BaseTemplateConfigTypeList<SeqGroupType>* baseTemplateConfigTypeList, int arg2);

    private:
        uint8_t _unknown_8[16];
        BaseTemplateConfigTypeList<SeqGroupType>* field_24;
        int field_32;
        uint8_t _unknown_36[20];
        uint8_t** field_56;
        uint8_t _unknown_64[48];
        bool m_walkMerge;
    };

    // 0x1004de990
    bool SeqGroupType::IsWalkMerge() const {
        return m_membersServer;
    }

    // 0x1005bf4a0
    SeqGroupType::~SeqGroupType() {
        field_56 = &PTR__SeqGroupType_100f02570;
        field_88.~Array();
        field_64.~Array();
    }

    // 0x1005bf700
    SeqGroupType::SeqGroupType(BaseTemplateConfigTypeList<SeqGroupType>* baseTemplateConfigTypeList, int arg2)
        : ConfigType<SeqGroupType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<SeqGroupType, 64>() {
        field_56 = &PTR__SeqGroupType_100f02570;
        new (&field_64) Array<bool>();
        new (&field_88) Array<float>();
        m_walkMerge = false;
    }

} // namespace jag::game

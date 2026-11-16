// libs/game/runetek5/config/vartype/bit/VarBitType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class VarBitType {
    public:
        // virtual methods in vtable order
        virtual ~VarBitType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        uint8_t* GetBaseVar() const;
        VarBitType(BaseTemplateConfigTypeList<VarBitType>* baseTemplateConfigTypeList, int arg2);
        unsigned int SetVarBitValue(int arg1, int arg2, bool* arg3) const;
        unsigned int GetVarBitValue(int arg1) const;
        unsigned int GetVarBitMask() const;

    private:
        uint8_t _unknown_8[16];
        BaseTemplateConfigTypeList<VarBitType>* field_24;
        int field_32;
        uint8_t _unknown_36[36];
        unsigned int field_72;
        unsigned int field_76;
        uint8_t _unknown_80[4];
    };

    // 0x1004c9280
    VarBitType::~VarBitType() {
        field_56.~shared_ptr();
    }

    // 0x1004ce5f0
    unsigned int VarBitType::GetVarBitValue(int arg1) const {
        unsigned int uVar1 = field_72;
        return GetVarBitMask() & arg1 >> ((uint8_t)uVar1 & 31);
    }

    // 0x1004d2cf0
    unsigned int VarBitType::GetVarBitMask() const {
        return ~(-1 << (((char)field_76 - (char)field_72) + 1U & 31));
    }

} // namespace jag::game

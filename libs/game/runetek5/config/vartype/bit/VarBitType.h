// libs/game/runetek5/config/vartype/bit/VarBitType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class VarBitType {
    public:
        // virtual methods in vtable order
        virtual ~VarBitType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual void PostDecode();
        GetBaseVar() const;
        VarBitType(BaseTemplateConfigTypeList<VarBitType>*, int);
        uint SetVarBitValue(int, int, bool*) const;
        uint GetVarBitValue(int) const;
        uint GetVarBitMask() const;

        // data members, from how the methods use this: 84 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        BaseTemplateConfigTypeList* field_24; // offset 24
        int field_32;                         // offset 32
        char _unknown_36[36];
        uint field_72; // offset 72
        uint field_76; // offset 76
        char _unknown_80[4];
    };

    // 0x1004c82a0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // VarBitType::~VarBitType(): jumps straight to the base-object destructor

    // 0x1004c82b0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // VarBitType::~VarBitType()
    void VarBitType::~VarBitType() {
        ~VarBitType(this);
        operator_delete(this);
    }

    // 0x1004c9280, 48 bytes, base-object destructor, inline, placed by class name
    // VarBitType::~VarBitType()
    void VarBitType::~VarBitType() {
        field_0 = &PTR__VarBitType_100f01c40;
        (&field_56)->~shared_ptr();
        ~ConfigType();
    }

    // 0x1004ce5f0, 32 bytes, inline, placed by class name
    // VarBitType::GetVarBitValue(int) const
    uint VarBitType::GetVarBitValue(int param_1) {
        uint uVar1;

        uVar1 = field_72;
        return GetVarBitMask(this) & param_1 >> ((byte)uVar1 & 31);
    }

    // 0x1004d2cf0, 32 bytes, inline, placed by class name
    // VarBitType::GetVarBitMask() const
    uint VarBitType::GetVarBitMask() {
        return ~(-1 << (((char)field_76 - (char)field_72) + 1U & 31));
    }

} // namespace jag::game

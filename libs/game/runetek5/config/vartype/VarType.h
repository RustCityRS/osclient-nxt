// libs/game/runetek5/config/vartype/VarType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class DelayedVariable {
    public:
        DelayedVariable();
        DelayedVariable(unsigned long long, bool);

        // data members, from how the methods use this: 9 bytes
        ulonglong field_0; // offset 0
        bool field_8;      // offset 8
    };

    class VarType {
    public:
        // virtual methods in vtable order
        virtual ~VarType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual void PostDecode();
        LegacyDefaultValue() const;
        long GetDataType() const;
        void GetDefaultValue() const;
        VarType(BaseTemplateConfigTypeList<VarType>*, int);

        // data members, from how the methods use this: 96 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        VarTypeList* field_24; // offset 24
        int field_32;          // offset 32
        char _unknown_36[20];
        long* field_56;      // offset 56
        long m_dataType;     // offset 64
        undefined* field_72; // offset 72
        undefined* field_80; // offset 80
        uint field_88;       // offset 88
        undefined1 field_92; // offset 92
        char _unknown_93[3];
    };

    // 0x1001a3d70, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // VarType::~VarType()
    void VarType::~VarType() {
        ~ConfigType();
    }

    // 0x1004c8dd0, 16 bytes, inline, placed by class name
    // VarType::LegacyDefaultValue() const
    undefined1 VarType::LegacyDefaultValue() {
        return field_92;
    }

    // 0x1004c8de0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // VarType::GetDataType() const
    /* EnumType::GetOutputType() const */

    undefined8 EnumType::GetOutputType() {
        return m_outputType;
    }

    // 0x1004c8de0: the linker folded this into VarType::GetDataType() const, which has identical code
    Js5ResourceProvider* BaseConfigTypeList::GetResourceProvider() const;

    // 0x1004ce420, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // DelayedVariable::DelayedVariable(unsigned long long, bool): jumps straight to the base-object constructor

    // 0x1004d1d10, 16 bytes, complete-object destructor, inline, placed by class name
    // VarType::~VarType(): jumps straight to the base-object destructor

    // 0x1004d1d20, 32 bytes, deleting destructor, inline, placed by class name
    // VarType::~VarType()
    void VarType::~VarType() {
        ~VarType(this);
        operator_delete(this);
    }

    // 0x1004d2ce0, 16 bytes, base-object constructor, inline, placed by class header (inline)
    // DelayedVariable::DelayedVariable(unsigned long long, bool)
    void DelayedVariable::DelayedVariable(ulonglong param_1, bool param_2) {
        field_0 = param_1;
        field_8 = param_2;
    }

} // namespace jag::game

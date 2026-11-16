// libs/game/runetek5/config/vartype/VarType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class DelayedVariable {
    public:
        DelayedVariable();
        DelayedVariable(unsigned long long arg1, bool arg2);

    private:
        unsigned long long field_0;
        bool field_8;
    };

    class VarType {
    public:
        // virtual methods in vtable order
        virtual ~VarType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        uint8_t LegacyDefaultValue() const;
        long GetDataType() const;
        void GetDefaultValue() const;
        VarType(BaseTemplateConfigTypeList<VarType>* baseTemplateConfigTypeList, int arg2);

    private:
        uint8_t _unknown_8[16];
        VarTypeList* field_24;
        int field_32;
        uint8_t _unknown_36[20];
        long* field_56;
        long m_dataType;
        uint8_t* field_72;
        uint8_t* field_80;
        unsigned int field_88;
        uint8_t field_92;
        uint8_t _unknown_93[3];
    };

    // 0x1001a3d70
    VarType::~VarType() {}

    // 0x1004c8dd0
    uint8_t VarType::LegacyDefaultValue() const {
        return field_92;
    }

    // 0x1004c8de0
    long VarType::GetDataType() const {
        return m_outputType;
    }

    // 0x1004c8de0: BaseConfigTypeList::GetResourceProvider() const has the same machine code as VarType::GetDataType() const

    // 0x1004d2ce0
    DelayedVariable::DelayedVariable(unsigned long long arg1, bool arg2) : field_0(arg1), field_8(arg2) {}

} // namespace jag::game

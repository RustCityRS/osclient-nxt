// libs/game/runetek5/config/vartype/VarContainerSparse.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class VarContainerSparse {
    public:
        // virtual methods in vtable order
        virtual ~VarContainerSparse();
        virtual long GetVarValue(const shared_ptr<VarType>& varType) const;
        virtual void SetVarValue(const shared_ptr<VarType>& varType, const VarValue& varValue);
        virtual void GetVarBitValue(const shared_ptr<VarBitType>& varBitType) const;
        virtual void SetVarBitValue(const shared_ptr<VarBitType>& varBitType, int arg2, bool* arg3);
        void GetValues() const;
        void SetVarValueByID(int arg1, const VarValue& varValue);
        VarContainerSparse();
        VarContainerSparse* operator=(VarContainerSparse&& varContainerSparse);
        void Clear();
        VarContainerSparse(VarContainerSparse&& varContainerSparse);
        VarContainerSparse(const VarContainerSparse& varContainerSparse);
        VarValue GetVarValueByID(int arg1) const;

    private:
        uint8_t _unknown_8[8];
    };

    // 0x100113790
    void VarContainerSparse::SetVarValueByID(int arg1, const VarValue& varValue) {
        int local_14;

        VarValue* this_00 = &field_8[local_14];
        *this_00 = varValue;
    }

    // 0x100152e10
    VarContainerSparse::VarContainerSparse() : VarDomain() {

        new (&field_8) eastl::hash_map(local_20);
    }

    // 0x1004bb3b0
    VarContainerSparse* VarContainerSparse::operator=(VarContainerSparse&& varContainerSparse) {
        SSOBeginPtr();
        field_8 = varContainerSparse.field_8;
        return this;
    }

    // 0x1004bb3e0
    void VarContainerSparse::Clear() {
        field_8.clear();
    }

    // 0x1004be580
    VarContainerSparse::VarContainerSparse(VarContainerSparse&& varContainerSparse)
        : VarDomain(), field_8(varContainerSparse.field_8) {}

    // 0x1004bedf0
    VarContainerSparse::VarContainerSparse(const VarContainerSparse& varContainerSparse)
        : VarDomain(), field_8(varContainerSparse.field_8) {}

    // 0x1004d1cc0
    void VarContainerSparse::SetVarValue(const shared_ptr<VarType>& varType, const VarValue& varValue) {
        int local_1c = ((GameToken*)varType.operator->())->GetStatus();
        VarValue* this_01 = &field_8[local_1c];
        *this_01 = varValue;
    }

    // 0x1004d4150
    VarContainerSparse::~VarContainerSparse() {
        field_8.~hash_map();
    }

} // namespace jag::game

namespace jag {
    // 0x1001137d0
    void ShuffledPacket4::g3() {
        g3_alt3();
    }

} // namespace jag

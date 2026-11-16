// libs/game/runetek5/config/vartype/EntityVarDomain.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class EntityVarDomain {
    public:
        // virtual methods in vtable order
        virtual ~EntityVarDomain();
        virtual void GetVarValue(const shared_ptr<VarType>& varType) const;
        virtual void SetVarValue(const shared_ptr<VarType>& varType, const VarValue& varValue);
        virtual void GetVarBitValue(const shared_ptr<VarBitType>& varBitType) const;
        virtual void SetVarBitValue(const shared_ptr<VarBitType>& varBitType, int arg2, bool* arg3);
        EntityVarDomain(Entity* entity);

    private:
        Entity* field_8;
        VarContainerSparse field_16;
    };

    // 0x1003fde50
    EntityVarDomain::EntityVarDomain(Entity* entity) : VarDomain(), field_8(entity) {}

    // 0x1003fdec0
    void EntityVarDomain::GetVarValue(const shared_ptr<VarType>& varType) const {
        field_16->GetVarValue(varType);
    }

    // 0x1003fded0
    void EntityVarDomain::SetVarValue(const shared_ptr<VarType>& varType, const VarValue& varValue) {
        field_16->SetVarValue(varType, varValue);
    }

    // 0x1003fdee0
    void EntityVarDomain::GetVarBitValue(const shared_ptr<VarBitType>& varBitType) const {
        field_16->GetVarBitValue(varBitType);
    }

    // 0x1003fdef0
    void EntityVarDomain::SetVarBitValue(const shared_ptr<VarBitType>& varBitType, int arg2, bool* arg3) {
        field_16->SetVarBitValue(varBitType, arg2, arg3);
    }

    // 0x1003ffe20
    EntityVarDomain::~EntityVarDomain() {
        field_16->~VarContainerSparse();
    }

} // namespace jag::game

// libs/game/runetek5/config/vartype/EntityVarDomain.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class EntityVarDomain {
    public:
        // virtual methods in vtable order
        virtual ~EntityVarDomain();
        virtual void GetVarValue(shared_ptr<VarType> const&) const;
        virtual void SetVarValue(shared_ptr<VarType> const&, VarValue const&);
        virtual void GetVarBitValue(shared_ptr<VarBitType> const&) const;
        virtual void SetVarBitValue(shared_ptr<VarBitType> const&, int, bool*);
        EntityVarDomain(Entity*);

        // data members, from how the methods use this: 32 bytes
        undefined* field_0;          // offset 0, vtable pointer
        Entity* field_8;             // offset 8
        VarContainerSparse field_16; // offset 16
    };

    // 0x1003f0580, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // EntityVarDomain::EntityVarDomain(Entity*): jumps straight to the base-object constructor

    // 0x1003f08c0, 16 bytes, complete-object destructor, inline, placed by class name
    // EntityVarDomain::~EntityVarDomain(): jumps straight to the base-object destructor

    // 0x1003fde50, 80 bytes, base-object constructor, inline, placed by class name
    // EntityVarDomain::EntityVarDomain(Entity*)
    void EntityVarDomain::EntityVarDomain(Entity* param_1) {
        new (this) VarDomain();
        field_0 = PTR_vtable_100ee7f78 + 16;
        field_8 = param_1;
        new (field_16) VarContainerSparse();
    }

    // 0x1003fdea0, 32 bytes, deleting destructor, inline, placed by class name
    // EntityVarDomain::~EntityVarDomain()
    void EntityVarDomain::~EntityVarDomain() {
        ~EntityVarDomain(this);
        operator_delete(this);
    }

    // 0x1003fdec0, 16 bytes, inline, placed by class name
    // EntityVarDomain::GetVarValue(shared_ptr<VarType> const&) const
    void EntityVarDomain::GetVarValue(shared_ptr* param_1) {
        (field_16, param_1)->GetVarValue();
    }

    // 0x1003fded0, 16 bytes, inline, placed by class name
    // EntityVarDomain::SetVarValue(shared_ptr<VarType> const&, VarValue const&)
    void EntityVarDomain::SetVarValue(shared_ptr* param_1, VarValue* param_2) {
        (field_16, param_1, param_2)->SetVarValue();
    }

    // 0x1003fdee0, 16 bytes, inline, placed by class name
    // EntityVarDomain::GetVarBitValue(shared_ptr<VarBitType> const&) const
    void EntityVarDomain::GetVarBitValue(shared_ptr* param_1) {
        (field_16, param_1)->GetVarBitValue();
    }

    // 0x1003fdef0, 16 bytes, inline, placed by class name
    // EntityVarDomain::SetVarBitValue(shared_ptr<VarBitType> const&, int, bool*)
    void EntityVarDomain::SetVarBitValue(shared_ptr* param_1, int param_2, bool* param_3) {
        (field_16, param_1, param_2, param_3)->SetVarBitValue();
    }

    // 0x1003ffe20, 48 bytes, base-object destructor, inline, placed by class name
    // EntityVarDomain::~EntityVarDomain()
    void EntityVarDomain::~EntityVarDomain() {
        field_0 = PTR_vtable_100ee7f78 + 16;
        field_16->~VarContainerSparse();
        ~AutoSingleton();
    }

} // namespace jag::game

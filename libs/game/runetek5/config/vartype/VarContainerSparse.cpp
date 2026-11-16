// libs/game/runetek5/config/vartype/VarContainerSparse.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "VarContainerSparse.h"

namespace jag::game {
    // 0x100009d50: VarContainerSparse::GetValues() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x1004d1540
    long VarContainerSparse::GetVarValue(const shared_ptr<VarType>& varType) const {
        long lVar2;
        eastl local_38;
        uint8_t local_28[16];

        local_28._0_4_ = ((GameToken*)varType.operator->())->GetStatus();
        &local_38 = (eastl[16])field_8.find(*local_28);
        local_28 = field_8.end();
        if (local_38 == *local_28 == '\0') {
            lVar2 = local_38.HeapBeginPtr();
            lVar2 = lVar2 + 8;
        } else {
            lVar2 = ((VarType*)varType.operator->())->GetDefaultValue();
        }
        return lVar2;
    }

    // 0x1004d15d0
    VarValue VarContainerSparse::GetVarValueByID(int arg1) const {
        long lVar2;
        uint32_t extraout_EDX;
        uint32_t extraout_EDX_00;
        uint32_t extraout_var;
        uint32_t extraout_var_00;

        uint64_t local_30 = field_8.find(arg1);
        uint64_t local_28 = (((uint64_t)extraout_var << 32) | (uint32_t)extraout_EDX);
        uint64_t local_40 = field_8.end();
        uint64_t local_38 = (((uint64_t)extraout_var_00 << 32) | (uint32_t)extraout_EDX_00);
        if (local_30 == local_40 == '\0') {
            lVar2 = local_30.HeapBeginPtr();
            VarValue result((lVar2 + 8));
        } else {
            new (&result) VarValue();
        }
        return result;
    }

    // 0x1004d1660
    void VarContainerSparse::GetVarBitValue(const shared_ptr<VarBitType>& varBitType) const {
        auto this_00 = varBitType.operator->();
        ((Logger*)varBitType.operator->())->GetLogStreams();
        this_00->GetVarBitValue(((VarValue*)GetVarValue())->GetInt());
    }

    // 0x1004d16c0
    void VarContainerSparse::SetVarBitValue(const shared_ptr<VarBitType>& varBitType, int arg2, bool* arg3) {
        uint64_t extraout_var;

        auto this_00 = varBitType.operator->();
        auto this_01 = this_00->GetLogStreams();
        auto this_02 = varBitType.operator->();
        uint8_t uVar1 = GetVarValue();
        int iVar2 = ((VarValue*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1))->GetInt();
        iVar2 = this_02->SetVarBitValue(iVar2, arg2, arg3);
        VarValue local_58(iVar2);
        int local_34 = ((GameToken*)(*this_01).operator->())->GetStatus();
        VarValue* this_04 = &field_8[local_34];
        *this_04 = &local_58;
    }

} // namespace jag::game

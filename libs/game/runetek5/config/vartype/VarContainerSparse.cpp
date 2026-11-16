// libs/game/runetek5/config/vartype/VarContainerSparse.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "VarContainerSparse.h"

namespace jag::game {
    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    VarContainerSparse::GetValues() const;

    // 0x1004d1540, 144 bytes, placed by class name and debug map
    // VarContainerSparse::GetVarValue(shared_ptr<VarType> const&) const
    long VarContainerSparse::GetVarValue(shared_ptr* param_1) {
        GameToken* this_00;
        VarType* this_01;
        long lVar2;
        eastl local_38[16];
        undefined1 local_28[16];

        this_00 = (GameToken*)shared_ptr<VarType>::operator->((shared_ptr<VarType>*)param_1);
        local_28._0_4_ = this_00->GetStatus();
        local_38 = (eastl[16])(&field_8, (int*)local_28)->find();
        local_28 = (&field_8)->end();
        if (eastl::operator==(local_38, (hashtable_iterator_base*)local_28, local_28._8_8_)) {
            this_01 = (VarType*)shared_ptr<VarType>::operator->((shared_ptr<VarType>*)param_1);
            lVar2 = this_01->GetDefaultValue();
        } else {
            lVar2 = local_38->HeapBeginPtr();
            lVar2 = lVar2 + 8;
        }
        return lVar2;
    }

    // 0x1004d15d0, 128 bytes, placed by class name and debug map
    // VarContainerSparse::GetVarValueByID(int) const
    VarContainerSparse* VarContainerSparse::GetVarValueByID(int param_1) {
        bool bVar1;
        long lVar2;
        undefined4 extraout_EDX;
        undefined4 extraout_EDX_00;
        undefined4 extraout_var;
        undefined4 extraout_var_00;
        hashtable<int, eastl::pair<int const, VarValue>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, VarValue>>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            this_00;
        undefined4 in_register_00000034;
        undefined8 local_40;
        undefined8 local_38;
        undefined8 local_30;
        undefined8 local_28;
        int local_1c;

        this_00 = (hashtable<int, eastl::pair<int const, VarValue>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, VarValue>>, eastl::equal_to<int>, eastl::hash<int>,
                             eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
                             true, true>*)(CONCAT44(in_register_00000034, param_1) + 8);
        local_30 = eastl::hashtable<int, eastl::pair<int const, VarValue>, eastl::allocator,
                                    eastl::use_first<eastl::pair<int const, VarValue>>, eastl::equal_to<int>,
                                    eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                    eastl::prime_rehash_policy, false, true, true>::find(this_00, &local_1c);
        local_28 = CONCAT44(extraout_var, extraout_EDX);
        local_40 = this_00->end();
        local_38 = CONCAT44(extraout_var_00, extraout_EDX_00);
        bVar1 = eastl::operator==((eastl*)&local_30, (hashtable_iterator_base*)&local_40,
                                  (hashtable_iterator_base*)CONCAT44(extraout_var_00, extraout_EDX_00));
        if (bVar1) {
            new (this) VarValue();
        } else {
            lVar2 = local_30.HeapBeginPtr();
            new (this) VarValue((VarValue*)(lVar2 + 8));
        }
        return this;
    }

    // 0x1004d1660, 96 bytes, placed by class name and debug map
    // VarContainerSparse::GetVarBitValue(shared_ptr<VarBitType> const&) const
    void VarContainerSparse::GetVarBitValue(shared_ptr* param_1) {
        VarBitType* this_00;
        Logger* this_01;
        undefined8 uVar1;
        VarValue* this_02;
        int iVar2;

        this_00 = (VarBitType*)shared_ptr<VarBitType>::operator->((shared_ptr<VarBitType>*)param_1);
        this_01 = (Logger*)shared_ptr<VarBitType>::operator->((shared_ptr<VarBitType>*)param_1);
        uVar1 = this_01->GetLogStreams();
        this_02 = (VarValue*)(*(code*)field_0[2])(this, uVar1);
        iVar2 = this_02->GetInt();
        this_00->GetVarBitValue(iVar2);
    }

    // 0x1004d16c0, 208 bytes, placed by class name and debug map
    // VarContainerSparse::SetVarBitValue(shared_ptr<VarBitType> const&, int, bool*)
    void VarContainerSparse::SetVarBitValue(shared_ptr* param_1, int param_2, bool* param_3) {
        int iVar1;
        Logger* this_00;
        shared_ptr<VarType>* this_01;
        VarBitType* this_02;
        VarValue* pVVar2;
        GameToken* this_03;
        VarValue local_58[36];
        int local_34;

        this_00 = (Logger*)shared_ptr<VarBitType>::operator->((shared_ptr<VarBitType>*)param_1);
        this_01 = (shared_ptr<VarType>*)this_00->GetLogStreams();
        this_02 = (VarBitType*)shared_ptr<VarBitType>::operator->((shared_ptr<VarBitType>*)param_1);
        pVVar2 = (VarValue*)(*(code*)field_0[2])(this, this_01);
        iVar1 = pVVar2->GetInt();
        iVar1 = this_02->SetVarBitValue(iVar1, param_2, param_3);
        VarValue::VarValue(local_58, iVar1);
        this_03 = (GameToken*)shared_ptr<VarType>::operator->(this_01);
        local_34 = this_03->GetStatus();
        pVVar2 = (VarValue*)
            eastl::hash_map<int, VarValue, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, VarValue, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)&field_8,
                &local_34);
        VarValue::operator=(pVVar2, local_58);
        local_58->~VarValue();
    }

} // namespace jag::game

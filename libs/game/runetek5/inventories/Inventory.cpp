// libs/game/runetek5/inventories/Inventory.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "Inventory.h"

namespace jag::game {
    // 0x1004bbb10, 64 bytes, base-object constructor, placed by class name and debug map
    // Inventory::Inventory(ConfigProvider*, int)
    void Inventory::Inventory(ConfigProvider* param_1, int param_2) {
        field_0 = param_1;
        field_8 = param_2;
        new (&field_16) eastl::vector<Inventory::Slot, eastl::allocator>();
        new (&field_48) eastl::vector<VarContainerSparse, eastl::allocator>();
    }

    // 0x1004bbb50, 16 bytes, complete-object constructor, placed by class name and debug map
    // Inventory::Inventory(ConfigProvider*, int): jumps straight to the base-object constructor

    // 0x1004bbb60, 576 bytes, placed by class name and debug map
    // Inventory::CheckContainer(int, bool)
    void Inventory::CheckContainer(int param_1, bool param_2) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        shared_ptr* this_01;
        MSIType* this_02;
        long lVar5;
        Pix8** ppPVar6;
        Pix8** ppPVar7;
        ulong uVar8;
        VarContainerSparse* pVVar9;
        VarContainerSparse* pVVar10;
        ulong uVar11;
        undefined7 in_register_00000011;
        undefined1* puVar12;
        uint uVar13;
        allocator local_70[8];
        vector<Inventory::Slot, eastl::allocator> local_68[36];
        int local_44;
        Inventory* local_40;
        undefined4 local_34;

        local_34 = (undefined4)CONCAT71(in_register_00000011, param_2);
        puVar12 = &field_16;
        local_40 = this;
        cVar2 = puVar12->empty();
        if ((cVar2 == '\0') && (iVar3 = puVar12->size(), param_1 < iVar3)) {
            if ((char)local_34 == '\0') {
                return;
            }
            this_00 = &local_40->field_48;
            cVar2 = this_00->empty();
            if ((cVar2 == '\0') && (iVar3 = this_00->size(), param_1 < iVar3)) {
                return;
            }
        }
        this_01 = ConfigProvider::GetConfig<InvType>(local_40->field_0, local_40->field_8, (DataStatus**)0);
        this_02 = (MSIType*)shared_ptr<InvType>::operator->((shared_ptr<InvType>*)this_01);
        iVar4 = this_02->GetSpriteID();
        iVar3 = param_1 + 1;
        if (param_1 + 1 < iVar4) {
            iVar3 = iVar4;
        }
        iVar4 = puVar12->size();
        if (iVar4 <= iVar3) {
            local_44 = iVar3;
            eastl::allocator::allocator(local_70, "EASTL vector");
            eastl::vector<Inventory::Slot, eastl::allocator>::vector(local_68, (long)iVar3, local_70);
            lVar5 = puVar12->size();
            if (lVar5 != 0) {
                uVar13 = 1;
                uVar11 = 0;
                do {
                    ppPVar6 = (Pix8**)eastl::vector<Inventory::Slot, eastl::allocator>::operator[](local_68, uVar11);
                    ppPVar7 = (Pix8**)eastl::vector<Inventory::Slot, eastl::allocator>::operator[](
                        (vector<Inventory::Slot, eastl::allocator>*)puVar12, uVar11);
                    eastl::swap<oldscape::graphics::Pix8*>(ppPVar6, ppPVar7);
                    uVar11 = (ulong)uVar13;
                    uVar8 = puVar12->size();
                    uVar13 = uVar13 + 1;
                } while (uVar11 < uVar8);
            }
            puVar12->swap(local_68);
            eastl::vector<Inventory::Slot, eastl::allocator>::~vector(local_68);
            iVar3 = local_44;
        }
        if ((char)local_34 != '\0') {
            puVar12 = &local_40->field_48;
            iVar4 = puVar12->size();
            if (iVar4 <= iVar3) {
                eastl::allocator::allocator(local_70, "EASTL vector");
                new (local_68) eastl::vector<VarContainerSparse, eastl::allocator>((long)iVar3, local_70);
                lVar5 = puVar12->size();
                if (lVar5 != 0) {
                    uVar11 = 0;
                    uVar8 = 1;
                    do {
                        pVVar9 = (VarContainerSparse*)eastl::vector<VarContainerSparse, eastl::allocator>::operator[](
                            (vector<VarContainerSparse, eastl::allocator>*)local_68, uVar11);
                        pVVar10 = (VarContainerSparse*)eastl::vector<VarContainerSparse, eastl::allocator>::operator[](
                            (vector<VarContainerSparse, eastl::allocator>*)puVar12, uVar11);
                        eastl::swap<VarContainerSparse>(pVVar9, pVVar10);
                        uVar11 = puVar12->size();
                        bVar1 = uVar8 < uVar11;
                        uVar11 = uVar8;
                        uVar8 = (ulong)((int)uVar8 + 1);
                    } while (bVar1);
                }
                puVar12->swap(local_68);
                local_68->~vector();
            }
        }
    }

    // 0x1004bbf60, 80 bytes, placed by class name and debug map
    // Inventory::GetSlotType(int)
    undefined4 Inventory::GetSlotType(int param_1) {
        int iVar1;
        undefined4* puVar2;
        undefined4 uVar3;

        uVar3 = 4294967295;
        if (-1 < param_1) {
            iVar1 = (&field_16)->size();
            if (param_1 < iVar1) {
                puVar2 = (undefined4*)eastl::vector<Inventory::Slot, eastl::allocator>::operator[](
                    (vector<Inventory::Slot, eastl::allocator>*)&field_16, (long)param_1);
                uVar3 = *puVar2;
            }
        }
        return uVar3;
    }

    // 0x1004bbfb0, 80 bytes, placed by class name and debug map
    // Inventory::GetSlotCount(int)
    undefined4 Inventory::GetSlotCount(int param_1) {
        int iVar1;
        long lVar2;
        undefined4 uVar3;

        uVar3 = 0;
        if (-1 < param_1) {
            iVar1 = (&field_16)->size();
            if (param_1 < iVar1) {
                lVar2 = eastl::vector<Inventory::Slot, eastl::allocator>::operator[](
                    (vector<Inventory::Slot, eastl::allocator>*)&field_16, (long)param_1);
                uVar3 = *(undefined4*)(lVar2 + 4);
            }
        }
        return uVar3;
    }

    // 0x1004bc000, 96 bytes, placed by class name and debug map
    // Inventory::GetSlotVarBitValue(int, shared_ptr<VarBitType> const&)
    undefined4 Inventory::GetSlotVarBitValue(int param_1, shared_ptr* param_2) {
        int iVar1;
        undefined4 uVar2;
        long* plVar3;

        uVar2 = 0;
        if (-1 < param_1) {
            iVar1 = (&field_48)->size();
            if (param_1 < iVar1) {
                plVar3 = (long*)eastl::vector<VarContainerSparse, eastl::allocator>::operator[](
                    (vector<VarContainerSparse, eastl::allocator>*)&field_48, (long)param_1);
                uVar2 = (**(code**)(*plVar3 + 32))(plVar3, param_2);
            }
        }
        return uVar2;
    }

    // 0x1004bc060, 144 bytes, placed by class name and debug map
    // Inventory::GetCategoryCount(int)
    int Inventory::GetCategoryCount(int param_1) {
        int* piVar2;
        int* piVar3;
        shared_ptr* this_00;
        ObjType* this_01;
        int iVar4;

        piVar2 = (int*)(&field_16)->HeapBeginPtr();
        piVar3 = (int*)(&field_16)->end();
        if (piVar2 == piVar3) {
            iVar4 = 0;
        } else {
            iVar4 = 0;
            do {
                if (*piVar2 != -1) {
                    this_00 = ConfigProvider::GetConfig<ObjType>(field_0, *piVar2, (DataStatus**)0);
                    this_01 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this_00);
                    if (this_01->GetCategory() == param_1) {
                        iVar4 = iVar4 + piVar2[1];
                    }
                }
                piVar2 = piVar2 + 2;
            } while (piVar2 != piVar3);
        }
        return iVar4;
    }

    // 0x1004bc110, 176 bytes, placed by class name
    // Inventory::GetParamCount(int, bool)
    int Inventory::GetParamCount(int param_1, bool param_2) {
        int iVar1;
        shared_ptr* psVar2;
        int* piVar3;
        int* piVar4;
        shared_ptr* this_00;
        ConfigType<ObjType>* this_01;
        int iVar5;

        iVar5 = 0;
        psVar2 = ConfigProvider::GetConfig<ParamType>(field_0, param_1, (DataStatus**)0);
        piVar3 = (int*)(&field_16)->HeapBeginPtr();
        piVar4 = (int*)(&field_16)->end();
        if (piVar3 != piVar4) {
            iVar5 = 0;
            do {
                if (*piVar3 != -1) {
                    this_00 = ConfigProvider::GetConfig<ObjType>(field_0, *piVar3, (DataStatus**)0);
                    this_01 = (ConfigType<ObjType>*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this_00);
                    iVar1 = this_01->GetParam(param_1, psVar2);
                    if (param_2) {
                        iVar5 = iVar5 + piVar3[1] * iVar1;
                    } else {
                        if (piVar3[1] < 1) {
                            iVar1 = 0;
                        }
                        iVar5 = iVar5 + iVar1;
                    }
                }
                piVar3 = piVar3 + 2;
            } while (piVar3 != piVar4);
        }
        return iVar5;
    }

    // 0x1004bc250, 112 bytes, placed by class name
    // Inventory::GetFreeSpace(shared_ptr<InvType> const&)
    int Inventory::GetFreeSpace(shared_ptr* param_1) {
        int iVar1;
        int iVar2;
        int* piVar3;
        int* piVar4;
        MSIType* this_00;
        int iVar5;
        undefined1* this_01;

        this_01 = &field_16;
        piVar3 = (int*)this_01->HeapBeginPtr();
        piVar4 = (int*)this_01->end();
        iVar5 = 0;
        for (; piVar3 != piVar4; piVar3 = piVar3 + 2) {
            iVar5 = iVar5 + (uint)(*piVar3 == -1);
        }
        this_00 = (MSIType*)shared_ptr<InvType>::operator->((shared_ptr<InvType>*)param_1);
        iVar1 = this_00->GetSpriteID();
        iVar2 = this_01->size();
        return (iVar1 + iVar5) - iVar2;
    }

    // 0x1004bc2c0, 96 bytes, placed by class name
    // Inventory::GetTotal(int)
    int Inventory::GetTotal(int param_1) {
        int* piVar1;
        int* piVar2;
        int iVar3;

        iVar3 = 0;
        if (param_1 != -1) {
            piVar1 = (int*)(&field_16)->HeapBeginPtr();
            piVar2 = (int*)(&field_16)->end();
            if (piVar1 != piVar2) {
                iVar3 = 0;
                do {
                    if (*piVar1 == param_1) {
                        iVar3 = iVar3 + piVar1[1];
                    }
                    piVar1 = piVar1 + 2;
                } while (piVar1 != piVar2);
            }
        }
        return iVar3;
    }

} // namespace jag::game

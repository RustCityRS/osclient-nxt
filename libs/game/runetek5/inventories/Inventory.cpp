// libs/game/runetek5/inventories/Inventory.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "Inventory.h"

namespace jag::game {
    // 0x1004bbb10
    Inventory::Inventory(ConfigProvider* configProvider, int arg2) : field_0(configProvider), field_8(arg2) {}

    // 0x1004bbb60
    void Inventory::CheckContainer(int arg1, bool arg2) {
        uint8_t* this_00;
        bool bVar1;
        int iVar3;
        long lVar5;
        Pix32** arg1_00;
        Pix32** arg2_00;
        unsigned long uVar6;
        VarContainerSparse* varContainerSparse1;
        VarContainerSparse* varContainerSparse2;
        unsigned long uVar7;
        uint64_t in_register_00000011;
        unsigned int uVar9;
        vector<Inventory::Slot> local_68;
        int local_44;

        uint32_t local_34 = (uint32_t)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2);
        uint8_t* puVar8 = &field_16;
        Inventory* local_40 = this;
        bool cVar2 = puVar8->empty();
        if ((!cVar2) && (iVar3 = puVar8->size(), arg1 < iVar3)) {
            if ((char)local_34 == '\0') {
                return;
            }
            this_00 = &local_40->field_48;
            cVar2 = this_00->empty();
            if ((!cVar2) && (iVar3 = this_00->size(), arg1 < iVar3)) {
                return;
            }
        }
        auto this_01 = local_40->field_0->GetConfig<InvType>(local_40->field_8, nullptr);
        int iVar4 = ((MSIType*)(*this_01).operator->())->GetSpriteID();
        iVar3 = arg1 + 1;
        if (arg1 + 1 < iVar4) {
            iVar3 = iVar4;
        }
        iVar4 = puVar8->size();
        if (iVar4 <= iVar3) {
            local_44 = iVar3;
            local_68 = eastl::vector<Inventory::Slot>((long)iVar3, local_70);
            lVar5 = puVar8->size();
            if (lVar5 != 0) {
                uVar9 = 1;
                uVar7 = 0;
                do {
                    arg1_00 = &local_68[uVar7];
                    arg2_00 = (Pix32**)(*puVar8)[uVar7];
                    eastl::swap<oldscape::graphics::Pix8*>(*arg1_00, *arg2_00);
                    uVar7 = (unsigned long)uVar9;
                    uVar6 = puVar8->size();
                    uVar9 = uVar9 + 1;
                } while (uVar7 < uVar6);
            }
            puVar8->swap(local_68);
            iVar3 = local_44;
        }
        if ((char)local_34 != '\0') {
            puVar8 = &local_40->field_48;
            iVar4 = puVar8->size();
            if (iVar4 <= iVar3) {
                local_68 = eastl::vector<VarContainerSparse>((long)iVar3, local_70);
                lVar5 = puVar8->size();
                if (lVar5 != 0) {
                    uVar7 = 0;
                    uVar6 = 1;
                    do {
                        varContainerSparse1 = (VarContainerSparse*)local_68[uVar7];
                        varContainerSparse2 = (VarContainerSparse*)(*puVar8)[uVar7];
                        eastl::swap<VarContainerSparse>(*varContainerSparse1, *varContainerSparse2);
                        uVar7 = puVar8->size();
                        bVar1 = uVar6 < uVar7;
                        uVar7 = uVar6;
                        uVar6 = (unsigned long)((int)uVar6 + 1);
                    } while (bVar1);
                }
                puVar8->swap(local_68);
            }
        }
    }

    // 0x1004bbf60
    uint32_t Inventory::GetSlotType(int arg1) {
        int iVar1;
        uint32_t* puVar2;

        uint32_t uVar3 = 4294967295;
        if (-1 < arg1) {
            iVar1 = field_16.size();
            if (arg1 < iVar1) {
                puVar2 = &field_16[(long)arg1];
                uVar3 = *puVar2;
            }
        }
        return uVar3;
    }

    // 0x1004bbfb0
    uint32_t Inventory::GetSlotCount(int arg1) {
        int iVar1;
        long lVar2;

        uint32_t uVar3 = 0;
        if (-1 < arg1) {
            iVar1 = field_16.size();
            if (arg1 < iVar1) {
                lVar2 = field_16[(long)arg1];
                uVar3 = *(uint32_t*)(lVar2 + 4);
            }
        }
        return uVar3;
    }

    // 0x1004bc000
    uint32_t Inventory::GetSlotVarBitValue(int arg1, const shared_ptr<VarBitType>& varBitType) {
        int iVar1;
        long* plVar3;

        uint32_t uVar2 = 0;
        if (-1 < arg1) {
            iVar1 = field_48.size();
            if (arg1 < iVar1) {
                plVar3 = &field_48[(long)arg1];
                uVar2 = (**(void (**)(...))(*plVar3 + 32))(plVar3, varBitType);
            }
        }
        return uVar2;
    }

    // 0x1004bc060
    int Inventory::GetCategoryCount(int arg1) {
        shared_ptr<ObjType>* this_00;
        int iVar4;

        auto piVar2 = field_16.HeapBeginPtr();
        auto piVar3 = field_16.end();
        if (piVar2 == piVar3) {
            iVar4 = 0;
        } else {
            iVar4 = 0;
            do {
                if (*piVar2 != -1) {
                    this_00 = field_0->GetConfig<ObjType>(*piVar2, nullptr);
                    if (((ObjType*)(*this_00).operator->())->GetCategory() == arg1) {
                        iVar4 = iVar4 + piVar2[1];
                    }
                }
                piVar2 = piVar2 + 2;
            } while (piVar2 != piVar3);
        }
        return iVar4;
    }

    // 0x1004bc110
    int Inventory::GetParamCount(int arg1, bool arg2) {
        int iVar1;
        shared_ptr<ObjType>* this_00;

        int iVar4 = 0;
        auto paramType = field_0->GetConfig<ParamType>(arg1, nullptr);
        auto piVar2 = field_16.HeapBeginPtr();
        auto piVar3 = field_16.end();
        if (piVar2 != piVar3) {
            iVar4 = 0;
            do {
                if (*piVar2 != -1) {
                    this_00 = field_0->GetConfig<ObjType>(*piVar2, nullptr);
                    iVar1 = ((ConfigType<ObjType>*)(*this_00).operator->())->GetParam(arg1, *paramType);
                    if (arg2) {
                        iVar4 = iVar4 + piVar2[1] * iVar1;
                    } else {
                        if (piVar2[1] < 1) {
                            iVar1 = 0;
                        }
                        iVar4 = iVar4 + iVar1;
                    }
                }
                piVar2 = piVar2 + 2;
            } while (piVar2 != piVar3);
        }
        return iVar4;
    }

    // 0x1004bc250
    int Inventory::GetFreeSpace(const shared_ptr<InvType>& invType) {
        uint8_t* this_01 = &field_16;
        auto piVar3 = this_01->HeapBeginPtr();
        auto piVar4 = this_01->end();
        int iVar5 = 0;
        for (; piVar3 != piVar4; piVar3 = piVar3 + 2) {
            iVar5 = iVar5 + (unsigned int)(*piVar3 == -1);
        }
        int iVar1 = ((MSIType*)invType.operator->())->GetSpriteID();
        int iVar2 = this_01->size();
        return (iVar1 + iVar5) - iVar2;
    }

    // 0x1004bc2c0
    int Inventory::GetTotal(int arg1) {
        int* piVar1;
        int* piVar2;

        int iVar3 = 0;
        if (arg1 != -1) {
            piVar1 = (int*)field_16.HeapBeginPtr();
            piVar2 = (int*)field_16.end();
            if (piVar1 != piVar2) {
                iVar3 = 0;
                do {
                    if (*piVar1 == arg1) {
                        iVar3 = iVar3 + piVar1[1];
                    }
                    piVar1 = piVar1 + 2;
                } while (piVar1 != piVar2);
            }
        }
        return iVar3;
    }

} // namespace jag::game

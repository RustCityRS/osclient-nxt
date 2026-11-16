// libs/graphics/runetek7/materials/ShaderSlotManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ShaderSlotManager.h"

namespace jag::graphics {
    // 0x1008c78f0, 48 bytes, placed by class name and debug map
    // ShaderSlotManager::SetMaxSize(unsigned long)
    void ShaderSlotManager::SetMaxSize(ulong param_1) {
        vector* this_00;

        this_00 = SSOBeginPtr(param_1);
        this_00->reserve(param_1);
        Clear(this);
    }

    // 0x1008c7920, 144 bytes, placed by class name and debug map
    // ShaderSlotManager::Clear()
    void ShaderSlotManager::Clear() {
        bool bVar1;
        int iVar2;
        int iVar3;
        undefined8 in_RAX;
        vector* this_00;
        type* in_RSI;
        undefined8 uStack_28;

        uStack_28 = in_RAX;
        iVar2 = GetBatchCount();
        if (0 < iVar2) {
            iVar2 = 0;
            do {
                pop();
                iVar2 = iVar2 + 1;
                iVar3 = GetBatchCount();
            } while (iVar2 < iVar3);
        }
        this_00 = SSOBeginPtr(in_RSI);
        uStack_28._4_4_ = this_00->capacity();
        if (-1 < uStack_28._4_4_) {
            do {
                push((int*)((long)&uStack_28 + 4));
                bVar1 = 0 < uStack_28._4_4_;
                uStack_28._4_4_ = uStack_28._4_4_ + -1;
            } while (bVar1);
        }
    }

    // 0x1008c79b0, 64 bytes, placed by class name and debug map
    // ShaderSlotManager::AllocSlot()
    undefined4 ShaderSlotManager::AllocSlot() {
        char cVar1;
        undefined4* puVar2;
        undefined4 uVar3;

        cVar1 = empty();
        uVar3 = 4294967295;
        if (cVar1 == '\0') {
            puVar2 = (undefined4*)top();
            uVar3 = *puVar2;
            pop();
        }
        return uVar3;
    }

    // 0x1008c7a10, 32 bytes, placed by class name and debug map
    // ShaderSlotManager::FreeSlot(int)
    void ShaderSlotManager::FreeSlot(int param_1) {
        int local_c;

        local_c = param_1;
        push(&local_c);
    }

    // 0x1008c7a40, 48 bytes, placed by neighbouring functions
    // ShaderResourceSlotManager::SetMaxSize(unsigned long)
    void ShaderResourceSlotManager::SetMaxSize(ulong param_1) {
        SetMaxSize(param_1);
        (&field_32, param_1)->reserve();
    }

    // 0x1008c7a70, 144 bytes, placed by debug map only (low confidence)
    // ShaderResourceSlotManager::RegisterSlotID(unsigned int)
    int ShaderResourceSlotManager::RegisterSlotID(uint param_1) {
        vector_map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>>* this;
        int iVar1;
        long lVar2;
        long lVar3;
        int* piVar4;
        undefined4 in_register_0000003c;
        uint local_24;

        this =
            (vector_map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator,
                        eastl::vector<eastl::pair<unsigned int, unsigned int>,
                                      eastl::allocator>>*)((ShaderSlotManager*)CONCAT44(in_register_0000003c, param_1) +
                                                           32);
        lVar2 = eastl::vector_map<
            unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>>::find(this, &local_24);
        lVar3 = end();
        if (lVar2 == lVar3) {
            iVar1 = (CONCAT44(in_register_0000003c, param_1))->AllocSlot();
            if (iVar1 == -1) {
                /* WARNING: Subroutine does not return */
                LogAssert("shaderResourceSlot != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/ShaderSlotManager.cpp",
                          75, "Unable to register shader resource slot id, maximum number of slots exceeded");
            }
            piVar4 = (int*)eastl::vector_map<
                unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator,
                eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>>::operator[](this, &local_24);
            *piVar4 = iVar1;
        } else {
            iVar1 = *(int*)(lVar2 + 4);
        }
        return iVar1;
    }

    // 0x1008c7b00, 96 bytes, placed by neighbouring functions
    // ShaderResourceSlotManager::UnregisterSlotID(unsigned int)
    void ShaderResourceSlotManager::UnregisterSlotID(uint param_1) {
        vector_map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>>* this;
        pair* ppVar1;
        pair* ppVar2;
        undefined4 in_register_0000003c;
        uint local_24;

        this =
            (vector_map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator,
                        eastl::vector<eastl::pair<unsigned int, unsigned int>,
                                      eastl::allocator>>*)((ShaderSlotManager*)CONCAT44(in_register_0000003c, param_1) +
                                                           32);
        ppVar1 = (pair*)eastl::vector_map<
            unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>>::find(this, &local_24);
        ppVar2 = (pair*)end();
        if (ppVar1 != ppVar2) {
            (CONCAT44(in_register_0000003c, param_1))->FreeSlot(*(int*)(ppVar1 + 4));
            eastl::vector_map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>>::erase(this,
                                                                                                               ppVar1);
        }
    }

    // 0x1008c7b70, 112 bytes, placed by debug map only (low confidence)
    // ShaderResourceSlotManager::GetTextureSlot(unsigned int)
    undefined4 ShaderResourceSlotManager::GetTextureSlot(uint param_1) {
        long lVar1;
        long lVar2;
        undefined4* puVar3;
        undefined1* this_00;
        uint local_1c;

        this_00 = &field_32;
        local_1c = param_1;
        lVar1 = this_00->find(&local_1c);
        lVar2 = this_00->end();
        if (lVar1 == lVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_assignedSlots.find(slotID) != m_assignedSlots.cend()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/ShaderSlotManager.cpp",
                      97, (char*)0);
        }
        puVar3 =
            (undefined4*)eastl::vector_map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>>::
            operator[]((vector_map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator,
                                   eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>>*)this_00,
                       &local_1c);
        return *puVar3;
    }

    // 0x1008c7be0, 48 bytes, placed by debug map only (low confidence)
    // ShaderResourceSlotManager::Clear()
    void ShaderResourceSlotManager::Clear() {
        Clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

} // namespace jag::graphics

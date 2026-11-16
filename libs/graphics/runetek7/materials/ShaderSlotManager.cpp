// libs/graphics/runetek7/materials/ShaderSlotManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ShaderSlotManager.h"

namespace jag::graphics {
    // 0x1008c78f0
    void ShaderSlotManager::SetMaxSize(unsigned long arg1) {
        ((vector<int>*)SSOBeginPtr())->reserve(arg1);
        Clear();
    }

    // 0x1008c7920
    void ShaderSlotManager::Clear() {
        bool bVar1;
        int iVar3;
        uint64_t in_RAX;

        uint64_t uStack_28 = in_RAX;
        int iVar2 = GetBatchCount();
        if (0 < iVar2) {
            iVar2 = 0;
            do {
                eastl::stack<int, eastl::vector<int>>::pop();
                iVar2 = iVar2 + 1;
                iVar3 = GetBatchCount();
            } while (iVar2 < iVar3);
        }
        uStack_28._4_4_ =
            ((vector<int, eastl::fixed_vector_allocator<4ul, 10000ul, 4ul, 0ul, true>>*)SSOBeginPtr())->capacity();
        if (-1 < uStack_28._4_4_) {
            do {
                push(*((int*)((long)&uStack_28 + 4)));
                bVar1 = 0 < uStack_28._4_4_;
                uStack_28._4_4_ = uStack_28._4_4_ - 1;
            } while (bVar1);
        }
    }

    // 0x1008c79b0
    uint32_t ShaderSlotManager::AllocSlot() {
        uint32_t* puVar2;

        bool cVar1 = empty();
        uint32_t uVar3 = 4294967295;
        if (!cVar1) {
            puVar2 = (uint32_t*)eastl::stack<int, eastl::vector<int>>::top();
            uVar3 = *puVar2;
            eastl::stack<int, eastl::vector<int>>::pop();
        }
        return uVar3;
    }

    // 0x1008c7a10
    void ShaderSlotManager::FreeSlot(int arg1) {
        push(arg1);
    }

    // 0x1008c7a40
    void ShaderResourceSlotManager::SetMaxSize(unsigned long arg1) {
        SetMaxSize(arg1);
        field_32.reserve(arg1);
    }

    // 0x1008c7a70
    int ShaderResourceSlotManager::RegisterSlotID(unsigned int arg1) {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this;
        int iVar1;
        int* piVar4;
        uint32_t in_register_0000003c;
        unsigned int local_24;

        this = (vector<oldscape::dash3d::EntityHighlight*,
                       BucketAllocatorEASTL>*)((ShaderSlotManager*)(((uint64_t)in_register_0000003c << 32) |
                                                                    (uint32_t)arg1) +
                                               32);
        long lVar2 = eastl::vector_map<unsigned int, unsigned int>::find(*this);
        long lVar3 = end();
        if (lVar2 == lVar3) {
            iVar1 = ((ShaderSlotManager*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1))->AllocSlot();
            if (iVar1 == -1) {
                LogAssert("shaderResourceSlot != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/ShaderSlotManager.cpp",
                          75, "Unable to register shader resource slot id, maximum number of slots exceeded");
            }
            piVar4 = (int*)(*this)[local_24];
            *piVar4 = iVar1;
        } else {
            iVar1 = *(int*)(lVar2 + 4);
        }
        return iVar1;
    }

    // 0x1008c7b00
    void ShaderResourceSlotManager::UnregisterSlotID(unsigned int arg1) {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this;
        uint32_t in_register_0000003c;

        this = (vector<oldscape::dash3d::EntityHighlight*,
                       BucketAllocatorEASTL>*)((ShaderSlotManager*)(((uint64_t)in_register_0000003c << 32) |
                                                                    (uint32_t)arg1) +
                                               32);
        pair<unsigned int, unsigned int>* arg1_00 =
            (pair<unsigned int, unsigned int>*)eastl::vector_map<unsigned int, unsigned int>::find(*this);
        auto ppVar1 = end();
        if (arg1_00 != ppVar1) {
            ((ShaderSlotManager*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1))
                ->FreeSlot(*(int*)(arg1_00 + 4));
            erase(arg1_00);
        }
    }

    // 0x1008c7b70
    uint32_t ShaderResourceSlotManager::GetTextureSlot(unsigned int arg1) {
        unsigned int* this_00 = &field_32;
        long lVar1 = eastl::vector_map<unsigned int, unsigned int>::find(*this_00);
        long lVar2 = this_00->end();
        if (lVar1 == lVar2) {
            LogAssert("m_assignedSlots.find(slotID) != m_assignedSlots.cend()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/ShaderSlotManager.cpp",
                      97, nullptr);
        }
        uint32_t* puVar3 = (uint32_t*)(*this_00)[arg1];
        return *puVar3;
    }

    // 0x1008c7be0
    void ShaderResourceSlotManager::Clear() {
        Clear();
        field_32.clear();
    }

} // namespace jag::graphics

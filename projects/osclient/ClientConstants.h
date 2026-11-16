// projects/osclient/ClientConstants.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class ClientConstants {
    public:
        int GetMaxAntialisingLevel();
        bool IsCoordInBuildArea(const rs2lib::CoordGrid& coordGrid);

        uint8_t _unknown_0[1];
    };

    // 0x100021dc0
    int ClientConstants::GetMaxAntialisingLevel() {
        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        double dVar2 = (double)log2<int>(*(int*)(lVar1 + 96));
        return (int)dVar2;
    }

    // 0x1001846d0
    bool ClientConstants::IsCoordInBuildArea(const rs2lib::CoordGrid& coordGrid) {
        int iVar1 = coordGrid.GetX();
        if ((((iVar1 < 0) || (iVar1 = coordGrid.GetX(), 3 < iVar1)) || (iVar1 = coordGrid.GetZ(), iVar1 < 0)) ||
            ((iVar1 = coordGrid.GetZ(), 103 < iVar1 || (iVar1 = coordGrid.GetPos(), iVar1 < 0)))) {
            return false;
        }
        iVar1 = coordGrid.GetPos();
        return iVar1 < 104;
    }

} // namespace jag::oldscape

namespace jag {
    // 0x100185600
    shared_ptr_if_not_array<oldscape::rs2lib::IfType>::type make_shared<oldscape::rs2lib::IfType, int&>(int& arg1) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        IfType* local_30[2];

        auto arg1_00 = aligned_alloc(2192, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::IfType>::type result;
        } else {
            local_30[0] = placement_new<oldscape::rs2lib::IfType, int const&>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::IfType>, int, oldscape::rs2lib::IfType*&>(
                    arg1_00, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag

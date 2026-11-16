// projects/osclient/ClientConstants.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class ClientConstants {
    public:
        int GetMaxAntialisingLevel();
        bool IsCoordInBuildArea(rs2lib::CoordGrid const&);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100021dc0, 32 bytes, inline, placed by class name and debug map
    // ClientConstants::GetMaxAntialisingLevel()
    int ClientConstants::GetMaxAntialisingLevel() {
        MapArea* this_00;
        long lVar1;
        double dVar2;

        this_00 = (MapArea*)Instance();
        lVar1 = this_00->GetOrigin();
        dVar2 = (double)log2<int>(*(int*)(lVar1 + 96));
        return (int)dVar2;
    }

    // 0x1001846d0, 96 bytes, inline, placed by class name and debug map
    // ClientConstants::IsCoordInBuildArea(rs2lib::CoordGrid const&)
    bool ClientConstants::IsCoordInBuildArea(CoordGrid* param_1) {
        int iVar1;

        iVar1 = param_1->GetX();
        if ((((iVar1 < 0) || (iVar1 = param_1->GetX(), 3 < iVar1)) || (iVar1 = param_1->GetZ(), iVar1 < 0)) ||
            ((iVar1 = param_1->GetZ(), 103 < iVar1 || (iVar1 = param_1->GetPos(), iVar1 < 0)))) {
            return false;
        }
        iVar1 = param_1->GetPos();
        return iVar1 < 104;
    }

} // namespace jag::oldscape

namespace jag {
    // 0x100185600, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::IfType>::type make_shared<oldscape::rs2lib::IfType, int&>(int&)
    /* shared_ptr_if_not_array<oldscape::rs2lib::IfType>::type
   make_shared<oldscape::rs2lib::IfType, int const&>(int const&) */

    jag* make_shared<oldscape::rs2lib::IfType, int const&>(int* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        IfType* local_30[2];

        pvVar1 = (void*)aligned_alloc(2192, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_30[0] = placement_new<oldscape::rs2lib::IfType, int const&>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::IfType>, int, oldscape::rs2lib::IfType*&>(
                pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag

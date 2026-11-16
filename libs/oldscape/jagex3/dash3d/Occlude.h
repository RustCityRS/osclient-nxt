// libs/oldscape/jagex3/dash3d/Occlude.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100308140, 208 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::QuickGround>::type make_shared<oldscape::dash3d::QuickGround, int&, int&, int&, int&, int, int&, bool, bool>(int&, int&, int&, int&, int&&, int&, bool&&, bool&&)
    /* shared_ptr_if_not_array<oldscape::dash3d::QuickGround>::type
   make_shared<oldscape::dash3d::QuickGround, int&, int&, int&, int&, int&, int&, bool,
   bool>(int&, int&, int&, int&, int&, int&, bool&&, bool&&) */

    jag* make_shared<oldscape::dash3d::QuickGround, int&, int&, int&, int&, int&, int&, bool, bool>(
        int* param_1, int* param_2, int* param_3, int* param_4, int* param_5, int* param_6, bool* param_7,
        bool* param_8) {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_44;
        QuickGround* local_40[2];

        pvVar1 = (void*)aligned_alloc(48, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::dash3d::QuickGround, int&, int&, int&, int&, int&, int&, bool, bool>(
                (void*)((long)pvVar1 + 16), param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared_trivial<oldscape::dash3d::QuickGround>, int,
                                   oldscape::dash3d::QuickGround*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100308250, 256 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::Ground>::type make_shared<oldscape::dash3d::Ground, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&>(int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&)
    jag* jag::make_shared<oldscape::dash3d::Ground, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&,
                          int&, int&, int&, int&, int&, int&, int&, int&>(
        int* param_1, int* param_2, int* param_3, int* param_4, int* param_5, int* param_6, int* param_7, int* param_8,
        int* param_9, int* param_10, int* param_11, int* param_12, int* param_13, int* param_14, int* param_15,
        int* param_16, int* param_17, int* param_18, int* param_19) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        Ground* local_40[2];

        pvVar1 = (void*)aligned_alloc(392, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::dash3d::Ground, int&, int&, int&, int&, int&, int&, int&, int&, int&,
                                        int&, int&, int&, int&, int&, int&, int&, int&, int&, int&>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
                param_9, param_10, param_11, param_12, param_13, param_14, param_15, param_16, param_17, param_18,
                param_19);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::Ground>, int, oldscape::dash3d::Ground*&>(
                pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x1003084b0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::GroundDecor>::type make_shared<oldscape::dash3d::GroundDecor>()
    jag* make_shared<oldscape::dash3d::GroundDecor>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        GroundDecor* local_28[2];

        pvVar1 = (void*)aligned_alloc(88, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::dash3d::GroundDecor>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::dash3d::GroundDecor>, int, oldscape::dash3d::GroundDecor*&>(
                    pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x1003086f0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::GroundObject>::type make_shared<oldscape::dash3d::GroundObject>()
    jag* make_shared<oldscape::dash3d::GroundObject>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        GroundObject* local_28[2];

        pvVar1 = (void*)aligned_alloc(120, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::dash3d::GroundObject>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::GroundObject>, int,
                                   oldscape::dash3d::GroundObject*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x100308b40, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::Wall>::type make_shared<oldscape::dash3d::Wall>()
    jag* make_shared<oldscape::dash3d::Wall>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        Wall* local_28[2];

        pvVar1 = (void*)aligned_alloc(112, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::dash3d::Wall>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::Wall>, int, oldscape::dash3d::Wall*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x100308dc0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::Decor>::type make_shared<oldscape::dash3d::Decor>()
    jag* make_shared<oldscape::dash3d::Decor>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        Decor* local_28[2];

        pvVar1 = (void*)aligned_alloc(120, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::dash3d::Decor>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::Decor>, int, oldscape::dash3d::Decor*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    class Occlude {
    public:
        Occlude();
    };

    // 0x100307cd0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // Occlude::Occlude(): jumps straight to the base-object constructor

    // 0x100326ef0, 32 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Occlude::Occlude()
    /* ImGuiSettingsHandler::ImGuiSettingsHandler() */

    void ImGuiSettingsHandler::ImGuiSettingsHandler() {
        *(undefined8*)(this + 48) = 0;
        *(undefined8*)(this + 56) = 0;
        *(undefined8*)(this + 32) = 0;
        *(undefined8*)(this + 40) = 0;
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 64) = 0;
    }

} // namespace jag::oldscape::dash3d

// libs/graphics/runetek5/HardCodedSprites.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class HardCodedSprites {
    public:
        class SpriteGroup;
        class SpriteReference;
        HardCodedSprites(Js5ResourceProvider&, game::ConfigProvider&, graphics::FontHelpers&, graphics::RT7Core&);
        void MainDraw();
        GetSpriteReferencesFromGroupID(int, bool);
        GetSpriteReferences(SpriteGroup&);
        void ClearGroupSpriteReferences(SpriteGroup&);
        shared_ptr<oldscape::dash3d::Decor>* GetExistingSpriteReferencesFromGroupID(int);
        GetCrossGroup();
        void SetCrossGroupOverride(int);

        // data members, from how the methods use this: 544 bytes
        RT7Core* field_0;              // offset 0
        FontHelpers* field_8;          // offset 8
        ConfigProvider* field_16;      // offset 16
        Js5ResourceProvider* field_24; // offset 24
        undefined1 field_32;           // offset 32
        char _unknown_33[207];
        SpriteGroup field_240; // offset 240
        char _unknown_256[8];
        SpriteGroup field_264; // offset 264
        char _unknown_280[8];
        SpriteGroup field_288; // offset 288
        char _unknown_304[8];
        SpriteGroup field_312; // offset 312
        char _unknown_328[8];
        SpriteGroup field_336; // offset 336
        char _unknown_352[8];
        SpriteGroup field_360; // offset 360
        char _unknown_376[8];
        SpriteGroup field_384; // offset 384
        char _unknown_400[8];
        SpriteGroup field_408; // offset 408
        char _unknown_424[8];
        SpriteGroup field_432; // offset 432
        char _unknown_448[8];
        SpriteGroup field_456; // offset 456
        char _unknown_472[8];
        SpriteGroup field_480; // offset 480
        char _unknown_496[8];
        SpriteGroup field_504; // offset 504
        char _unknown_520[8];
        SpriteGroup field_528; // offset 528
    };

    class HardCodedSprites::SpriteGroup {
    public:
        ~SpriteGroup();
        SpriteGroup(HardCodedSprites*);

        // data members, from how the methods use this: 16 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[12];
    };

    class HardCodedSprites::SpriteReference {
    public:
        ~SpriteReference();
        SpriteReference* operator=(SpriteReference const&);
        SpriteReference(SpriteReference&&);
        SpriteReference();

        // data members, from how the methods use this: 16 bytes
        undefined8 field_0; // offset 0
        char _unknown_8[8];
    };

    // 0x100418160, 48 bytes, inline, placed by class name and debug map
    // HardCodedSprites::SpriteReference::operator=(HardCodedSprites::SpriteReference const&)
    /* HardCodedSprites::SpriteReference::TEMPNAMEPLACEHOLDERVALUE(HardCodedSprites::SpriteReference
   const&) */

    SpriteReference* HardCodedSprites::SpriteReference::operator=(SpriteReference* param_1) {
        field_0 = param_1->field_0;
        shared_ptr<graphics::SpriteAtlasReference>::operator=((shared_ptr<graphics::SpriteAtlasReference>*)&field_8,
                                                              (shared_ptr*)&param_1->field_8);
        return this;
    }

    // 0x100418640, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<EntityIcon>::type make_shared<EntityIcon, int, math::Point<int> >(int&&, math::Point<int>&&)
    jag* make_shared<EntityIcon, int, math::Point<int>>(int* param_1, Point* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        EntityIcon* local_38[2];

        pvVar1 = (void*)aligned_alloc(64, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] =
                placement_new<EntityIcon, int, math::Point<int>>((void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<EntityIcon>, int, EntityIcon*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x100426b40, 16 bytes, complete-object constructor, inline, placed by class name
    // HardCodedSprites::SpriteReference::SpriteReference(HardCodedSprites::SpriteReference&&): jumps straight to the base-object constructor

    // 0x100426b50, 32 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // HardCodedSprites::SpriteReference::SpriteReference(HardCodedSprites::SpriteReference&&)
    /* eastl::pair<unsigned long long, shared_ptr<game::BuildAnimationMain>
   >::pair(eastl::pair<unsigned long long, shared_ptr<game::BuildAnimationMain> >&&) */

    void eastl::pair<unsigned long long, shared_ptr<game::BuildAnimationMain>>::pair(
        pair<unsigned long long, shared_ptr<game::BuildAnimationMain>>* this, pair* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)(this + 8), (shared_ptr*)(param_1 + 8));
    }

    // 0x100426bc0, 16 bytes, complete-object constructor, inline, placed by class name
    // HardCodedSprites::SpriteReference::SpriteReference(): jumps straight to the base-object constructor

    // 0x100426bd0, 32 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // HardCodedSprites::SpriteReference::SpriteReference()
    /* graphics::FontHelpers::ModIconReference::ModIconReference() */

    void graphics::FontHelpers::ModIconReference::ModIconReference() {
        _func_decltype_nullptr* in_RSI;

        field_0 = 0;
        new (&field_8, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x10097b880, 16 bytes, complete-object constructor, inline, placed by class name
    // HardCodedSprites::SpriteGroup::SpriteGroup(HardCodedSprites*): jumps straight to the base-object constructor

    // 0x10098d5d0, 96 bytes, base-object constructor, inline, placed by class name
    // HardCodedSprites::SpriteGroup::SpriteGroup(HardCodedSprites*)
    void HardCodedSprites::SpriteGroup::SpriteGroup(HardCodedSprites* param_1) {
        SpriteGroup* local_28;

        field_0 = 4294967295;
        new (&field_8, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        local_28 = this;
        (&param_1->field_40, &local_28)->push_back();
    }

} // namespace jag

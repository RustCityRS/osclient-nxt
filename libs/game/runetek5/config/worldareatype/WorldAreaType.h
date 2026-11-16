// libs/game/runetek5/config/worldareatype/WorldAreaType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class BuildCombinedLocationResult_GroupSection {
    public:
        BuildCombinedLocationResult_GroupSection(BuildCombinedLocationResult_GroupSection const&);
        ~BuildCombinedLocationResult_GroupSection();
        BuildCombinedLocationResult_GroupSection(BuildCombinedLocationResult_GroupSection&&);
        BuildCombinedLocationResult_GroupSection();

        // data members, from how the methods use this: 192 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[4];
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        undefined8 field_40; // offset 40
        AABB field_48;       // offset 48
        undefined4 field_84; // offset 84
        LocData field_88;    // offset 88
        char _unknown_120[20];
        undefined2 field_140; // offset 140
        char _unknown_142[34];
        undefined4 field_176; // offset 176
        undefined1 field_180; // offset 180
        char _unknown_181[3];
        undefined4 field_184; // offset 184
        undefined1 field_188; // offset 188
        char _unknown_189[3];
    };

    class WorldAreaType {
    public:
        // virtual methods in vtable order
        virtual ~WorldAreaType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual PostDecode();
        GetColour() const;
        void HasImpostorsForMapSquare(int, int);
        ulong FillImpostorForCompositeZone(ClientCompositeZone&, int, int, int);
        WorldAreaType(BaseTemplateConfigTypeList<WorldAreaType>*, int);

        // data members, from how the methods use this: 168 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        BaseTemplateConfigTypeList* field_24; // offset 24
        int field_32;                         // offset 32
        char _unknown_36[20];
        undefined4 m_colour; // offset 56
        char _unknown_60[108];
    };

    // 0x100456dd0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // CoordGridSize::CoordGridSize(CoordGrid const&, int, int): jumps straight to the base-object constructor

    // 0x100456f20, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // CoordGridSize::CoordGridSize(CoordGrid const&, int, int)
    /* graphics::ModelParticleSource::VertexBonePos::VertexBonePos(math::Vector3T<float>
   const&, int, int) */

    void graphics::ModelParticleSource::VertexBonePos::VertexBonePos(Vector3T* param_1, int param_2, int param_3) {
        field_8 = *(undefined4*)(param_1 + 8);
        field_0 = *(undefined8*)param_1;
        field_12 = param_2;
        field_16 = param_3;
    }

    // 0x10045b560, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResult_GroupSection::BuildCombinedLocationResult_GroupSection(BuildCombinedLocationResult_GroupSection const&): jumps straight to the base-object constructor

    // 0x10045b580, 192 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResult_GroupSection::BuildCombinedLocationResult_GroupSection(BuildCombinedLocationResult_GroupSection const&)
    void BuildCombinedLocationResult_GroupSection::BuildCombinedLocationResult_GroupSection(
        BuildCombinedLocationResult_GroupSection* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined4 uVar5;
        undefined4 uVar6;
        undefined1 uVar7;
        undefined1 uVar8;
        undefined3 uVar9;

        uVar5 = param_1->field_0;
        uVar6 = *(undefined4*)&param_1->field_4;
        uVar1 = param_1->field_8;
        uVar2 = param_1->field_16;
        uVar3 = param_1->field_24;
        uVar4 = param_1->field_40;
        field_32 = param_1->field_32;
        field_40 = uVar4;
        field_16 = uVar2;
        field_24 = uVar3;
        field_0 = uVar5;
        *(undefined4*)&field_4 = uVar6;
        field_8 = uVar1;
        new (field_48, (AABB*)param_1->field_48) math::AABB();
        *(undefined8*)(field_48 + 32) = *(undefined8*)(param_1->field_48 + 32);
        new (field_88, (LocData*)param_1->field_88) LocData();
        field_140 = param_1->field_140;
        new (&field_144, (shared_ptr*)&param_1->field_144) shared_ptr<oldscape::dash3d::Decor>();
        new (&field_160, (shared_ptr*)&param_1->field_160) shared_ptr<oldscape::dash3d::Decor>();
        uVar6 = param_1->field_176;
        uVar8 = param_1->field_180;
        uVar9 = *(undefined3*)&param_1->field_181;
        uVar5 = param_1->field_184;
        uVar7 = param_1->field_188;
        *(undefined3*)&field_181 = *(undefined3*)&param_1->field_181;
        field_184 = uVar5;
        field_188 = uVar7;
        field_176 = uVar6;
        field_180 = uVar8;
        *(undefined3*)&field_181 = uVar9;
    }

    // 0x10045c8c0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResult_GroupSection::~BuildCombinedLocationResult_GroupSection(): jumps straight to the base-object destructor

    // 0x10045c8d0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResult_GroupSection::~BuildCombinedLocationResult_GroupSection()
    void BuildCombinedLocationResult_GroupSection::~BuildCombinedLocationResult_GroupSection() {
        (&field_160)->~shared_ptr();
        (&field_144)->~shared_ptr();
    }

    // 0x1004c8300, 16 bytes, complete-object destructor, inline, placed by class name
    // WorldAreaType::~WorldAreaType(): jumps straight to the base-object destructor

    // 0x1004c8310, 32 bytes, deleting destructor, inline, placed by class name
    // WorldAreaType::~WorldAreaType()
    void WorldAreaType::~WorldAreaType() {
        ~WorldAreaType(this);
        operator_delete(this);
    }

    // 0x1004c92f0, 64 bytes, base-object destructor, inline, placed by class name
    // WorldAreaType::~WorldAreaType()
    void WorldAreaType::~WorldAreaType() {
        field_0 = &PTR__WorldAreaType_100f01cb0;
        (&field_160)->~map();
        eastl::map<void*, eastl::pair<void*, void (*)(void*)>, eastl::less<void*>, eastl::allocator>::~map(
            (map<void*, eastl::pair<void*, void (*)(void*)>, eastl::less<void*>, eastl::allocator>*)&field_112);
        (&field_64)->~map();
        ~ConfigType();
    }

    // 0x1005d9c00, 16 bytes, complete-object constructor, inline, placed by class name
    // WorldAreaType::WorldAreaType(BaseTemplateConfigTypeList<WorldAreaType>*, int): jumps straight to the base-object constructor

    // 0x1005d9c10, 208 bytes, base-object constructor, inline, placed by class name
    // WorldAreaType::WorldAreaType(BaseTemplateConfigTypeList<WorldAreaType>*, int)
    void WorldAreaType::WorldAreaType(BaseTemplateConfigTypeList* param_1, int param_2) {
        allocator local_30[8];

        new (this) ConfigType<WorldAreaType>(param_1, param_2);
        new (this) MakeSharedPool<WorldAreaType, 1024>();
        field_0 = &PTR__WorldAreaType_100f01cb0;
        m_colour = 0;
        eastl::allocator::allocator(local_30, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)&field_64);
        eastl::allocator::allocator(local_30, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)&field_112);
        eastl::allocator::allocator(local_30, "EASTL set");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)&field_160);
    }

} // namespace jag::game

namespace jag {
    // 0x100455e30, 32 bytes, inline, placed by debug map only (low confidence)
    // game::MapSquare* placement_new<game::MapSquare, graphics::GraphNode*&, shared_ptr<game::World>, int&, int&, shared_ptr<game::ClientCompositeData>&>(void*, graphics::GraphNode*&, shared_ptr<game::World>&&, int&, int&, shared_ptr<game::ClientCompositeData>&)
    MapSquare* jag::placement_new<game::MapSquare, graphics::GraphNode*&, shared_ptr<game::World>, int&, int&,
                                  shared_ptr<game::ClientCompositeData>&>(void* param_1, GraphNode** param_2,
                                                                          shared_ptr* param_3, int* param_4,
                                                                          int* param_5, shared_ptr* param_6) {
        game::MapSquare::MapSquare(param_1, *param_2, param_3, *param_4, *param_5, param_6);
        return param_1;
    }

    // 0x100455e50, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::MapSquare, MakeSharedPool<game::MapSquare, 32> >* placement_new<MakeSharedPoolRefCounter<game::MapSquare, MakeSharedPool<game::MapSquare, 32> >, MakeSharedPool<game::MapSquare, 32>::RefCounterAndData*&, game::MapSquare*>(void*, MakeSharedPool<game::MapSquare, 32>::RefCounterAndData*&, game::MapSquare*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::MapSquare, MakeSharedPool<game::MapSquare, 32>>,
                       MakeSharedPool<game::MapSquare, 32>::RefCounterAndData*&, game::MapSquare*>(
        void* param_1, RefCounterAndData** param_2, MapSquare** param_3) {
        MakeSharedPoolRefCounter<game::MapSquare, MakeSharedPool<game::MapSquare, 32>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1004564f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::MapSquare, MakeSharedPool<game::MapSquare, 32> >::MakeSharedPoolRefCounter(void*, game::MapSquare*): jumps straight to the base-object constructor

    // 0x100456500, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::MapSquare, MakeSharedPool<game::MapSquare, 32> >::MakeSharedPoolRefCounter(void*, game::MapSquare*)
    void MakeSharedPoolRefCounter<game::MapSquare, MakeSharedPool<game::MapSquare, 32>>::MakeSharedPoolRefCounter(
        MakeSharedPoolRefCounter<game::MapSquare, MakeSharedPool<game::MapSquare, 32>>* this, void* param_1,
        MapSquare* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7b50 + 16;
        *(void**)(this + 16) = param_1;
        *(MapSquare**)(this + 24) = param_2;
    }

    // 0x100456540, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::MapSquare, MakeSharedPool<game::MapSquare, 32> >::DeleteSelf()
    void MakeSharedPoolRefCounter<game::MapSquare, MakeSharedPool<game::MapSquare, 32>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::MapSquare, MakeSharedPool<game::MapSquare, 32>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::MapSquare, 32>::deallocate(pvVar1);
    }

    // 0x10045cc10, 128 bytes, inline, placed by debug map only (low confidence)
    // game::CombinedLocationSection* placement_new<game::CombinedLocationSection, graphics::GraphNode*&, shared_ptr<game::World> const&, int&, int&, int&, shared_ptr<game::LocType>&, game::LocData&, bool&, short&, short&, math::AABB&, int&>(void*, graphics::GraphNode*&, shared_ptr<game::World> const&, int&, int&, int&, shared_ptr<game::LocType>&, game::LocData&, bool&, short&, short&, math::AABB&, int&)
    CombinedLocationSection*
    jag::placement_new<game::CombinedLocationSection, graphics::GraphNode*&, shared_ptr<game::World> const&, int&, int&,
                       int&, shared_ptr<game::LocType>&, game::LocData&, bool&, short&, short&, math::AABB&, int&>(
        void* param_1, GraphNode** param_2, shared_ptr* param_3, int* param_4, int* param_5, int* param_6,
        shared_ptr* param_7, LocData* param_8, bool* param_9, short* param_10, short* param_11, AABB* param_12,
        int* param_13) {
        game::CombinedLocationSection::CombinedLocationSection(param_1, *param_2, param_3, *param_4, *param_5, *param_6,
                                                               param_7, param_8, *param_9, (int)*param_10,
                                                               (int)*param_11, param_12, *param_13);
        return param_1;
    }

    // 0x10045cc90, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::CombinedLocationSection, MakeSharedPool<game::CombinedLocationSection, 512> >* placement_new<MakeSharedPoolRefCounter<game::CombinedLocationSection, MakeSharedPool<game::CombinedLocationSection, 512> >, MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData*&, game::CombinedLocationSection*>(void*, MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData*&, game::CombinedLocationSection*&&)
    MakeSharedPoolRefCounter* jag::placement_new<
        MakeSharedPoolRefCounter<game::CombinedLocationSection, MakeSharedPool<game::CombinedLocationSection, 512>>,
        MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData*&, game::CombinedLocationSection*>(
        void* param_1, RefCounterAndData** param_2, CombinedLocationSection** param_3) {
        MakeSharedPoolRefCounter<game::CombinedLocationSection, MakeSharedPool<game::CombinedLocationSection, 512>>::
            MakeSharedPoolRefCounter(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x10045ccb0, 160 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::CombinedLocationSection>(ref_counter_base*, game::CombinedLocationSection*, game::CombinedLocationSection::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::CombinedLocationSection>(ref_counter_base* param_1,
                                                                              CombinedLocationSection* param_2,
                                                                              enable_shared_type* param_3) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48[16];
        weak_ptr<oldscape::dash3d::Decor> local_38[24];

        if (param_1 != (ref_counter_base*)0) {
            param_1->IncRef();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
                local_48, (hash_node*)param_1, (hash_node**)param_2);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_38, (weak_ptr*)local_48);
            (&param_2->field_192, (weak_ptr*)local_38)->__internal_set_weak_ptr();
            local_38->~weak_ptr();
            local_48->~shared_ptr();
        }
    }

    // 0x10045d3c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::CombinedLocationSection, MakeSharedPool<game::CombinedLocationSection, 512> >::MakeSharedPoolRefCounter(void*, game::CombinedLocationSection*): jumps straight to the base-object constructor

    // 0x10045d3d0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::CombinedLocationSection, MakeSharedPool<game::CombinedLocationSection, 512> >::MakeSharedPoolRefCounter(void*, game::CombinedLocationSection*)
    void
    jag::MakeSharedPoolRefCounter<game::CombinedLocationSection, MakeSharedPool<game::CombinedLocationSection, 512>>::
        MakeSharedPoolRefCounter(MakeSharedPoolRefCounter<game::CombinedLocationSection,
                                                          MakeSharedPool<game::CombinedLocationSection, 512>>* this,
                                 void* param_1, CombinedLocationSection* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7ab0 + 16;
        *(void**)(this + 16) = param_1;
        *(CombinedLocationSection**)(this + 24) = param_2;
    }

    // 0x10045d410, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::CombinedLocationSection, MakeSharedPool<game::CombinedLocationSection, 512> >::DeleteSelf()
    void
    jag::MakeSharedPoolRefCounter<game::CombinedLocationSection, MakeSharedPool<game::CombinedLocationSection, 512>>::
        DeleteSelf(MakeSharedPoolRefCounter<game::CombinedLocationSection,
                                            MakeSharedPool<game::CombinedLocationSection, 512>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::CombinedLocationSection, 512>::deallocate(pvVar1);
    }

} // namespace jag

namespace jag::graphics {
    // 0x10045ae90, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // FaceGroupRenderMasks::FaceGroupRenderMasks(): jumps straight to the base-object constructor

    // 0x10045b180, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // FaceGroupRenderMasks::FaceGroupRenderMasks()
    /* ui::ComponentPinchConfig::ComponentPinchConfig() */

    void ui::ComponentPinchConfig::ComponentPinchConfig() {
        field_0 = 0;
    }

    // 0x10045b180: the linker folded this into FaceGroupRenderMasks::FaceGroupRenderMasks(), which has identical code
    ModelTextureMeta::ModelTextureMeta();

} // namespace jag::graphics

namespace jag::ui {
    // 0x10045ae90: the linker folded this into graphics::FaceGroupRenderMasks::FaceGroupRenderMasks(), which has identical code
    ComponentPinchConfig::ComponentPinchConfig();

} // namespace jag::ui

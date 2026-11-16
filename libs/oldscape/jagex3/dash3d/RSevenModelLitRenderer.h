// libs/oldscape/jagex3/dash3d/RSevenModelLitRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::dash3d {
    class RSevenModelLitRenderer {
    public:
        class ActiveModel;
        class ActiveOverlay;
        class ActiveStaticBatch;
        class StaticBatchAppendList;
        Matrix44T* CreateViewMatrix(jag::math::Vector3T<int>, jag::math::Vector2T<int>);
        RSevenModelLitRenderer* CreateProjectionMatrix(double, double);
        RSevenModelLitRenderer();
        ~RSevenModelLitRenderer();
        void SetSpritesJs5(jagex3::Js5*);
        void ResetMap();
        void OnFinishRebuild();
        void OnBeginWorldRender(world*);
        void SubmitModel(ModelSource&, int, int, int, int, int, int, long long, ModelTypecodeType,
                         EntityHighlight const&, int);
        void ResolveAndSendToRenderThread(ModelRSevenLit const&, shared_ptr<RenderState::ModelSubmissionRSeven>&, int,
                                          int, int, int, int, long long, long long, EntityHighlight const&);
        void TestModelMouseIntersection(ActiveModel const&);
        void SubmitTileHighlight(int, int, int, EntityHighlight const&);
        void SubmitLightSource(PointLightSource&, int, int, int, long long, int);
        void ResolveAndUpdateSubmission(ModelRSevenLit const&, shared_ptr<RenderState::ModelSubmissionRSeven>&, int,
                                        int, int, int, int, long long, long long, EntityHighlight const&);
        void UploadModelTextures(jag::graphics::Model const&);
        void OnEndWorldRender();
        void DeleteUnusedOverlays();
        TestStaticAabbMouseIntersection(jag::math::AABB const&, bool);
        void DestroyResources();
        void TestModelMouseIntersectionFine(ResolvedModel const&, RenderState::ModelSubmissionRSeven const&);
        void SubmitOverlayModel(ModelLit&, int, int, jag::math::Vector3T<int>, RenderState::OverlayViewportState&);
        void GetNextOverlay();
        void UploadTextures(Array<short, eastl::allocator>&);

        // data members, from how the methods use this: 232 bytes
        Js5* m_pSpritesJs5; // offset 0
        world* field_8;     // offset 8
        char _unknown_16[184];
        ulonglong field_200; // offset 200
        int field_208;       // offset 208
        char _unknown_212[20];
    };

    class RSevenModelLitRenderer::ActiveModel {
    public:
        ~ActiveModel();
        ActiveModel();
        ActiveModel(ActiveModel&&);

        // data members, from how the methods use this: 32 bytes
        undefined8 field_0; // offset 0
        char _unknown_8[16];
        undefined4 field_24; // offset 24
        undefined1 field_28; // offset 28
        char _unknown_29[3];
    };

    class RSevenModelLitRenderer::ActiveOverlay {
    public:
        ~ActiveOverlay();
        ActiveOverlay(ActiveOverlay&&);
        ActiveOverlay();

        // data members, from how the methods use this: 56 bytes
        char _unknown_0[48];
        undefined4 field_48; // offset 48
        char _unknown_52[4];
    };

    class RSevenModelLitRenderer::ActiveStaticBatch {
    public:
        ~ActiveStaticBatch();
        ActiveStaticBatch();
        ActiveStaticBatch(ActiveStaticBatch&&);

        // data members, from how the methods use this: 97 bytes
        char _unknown_0[88];
        undefined8 field_88; // offset 88
        undefined1 field_96; // offset 96
    };

    class RSevenModelLitRenderer::StaticBatchAppendList {
    public:
        // virtual methods in vtable order
        virtual Count() const;
        virtual GetBaseModel(unsigned long) const;
        virtual GetTempModel(unsigned long);
        StaticBatchAppendList(eastl::hash_map<long long, shared_ptr<ModelLit>, eastl::hash<long long>,
                                              eastl::equal_to<long long>, eastl::allocator, false> const&,
                              bool);
        ~StaticBatchAppendList();

        // data members, from how the methods use this: 9 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[1];
    };

    // 0x1001c4650, 240 bytes, inline, placed by class name and debug map
    // RSevenModelLitRenderer::CreateViewMatrix(jag::math::Vector3T<int>, jag::math::Vector2T<int>)
    Matrix44T* RSevenModelLitRenderer::CreateViewMatrix(Matrix44T* param_1, type* param_2, undefined4 param_3,
                                                        undefined8 param_4) {
        int iVar1;
        int* piVar2;
        vector* pvVar3;
        undefined1 local_80[56];
        type* local_48;
        undefined4 local_40;
        undefined8 local_38;
        float local_30;
        float local_2c;
        float local_28;
        float local_24;

        local_48 = param_2;
        local_40 = param_3;
        local_38 = param_4;
        piVar2 = (int*)local_38.y();
        local_2c = (float)*piVar2;
        pvVar3 = local_38.SSOBeginPtr(param_2);
        local_28 = (float)*(int*)pvVar3;
        pvVar3 = local_48.SSOBeginPtr(param_2);
        local_30 = (float)*(int*)pvVar3;
        piVar2 = (int*)local_48.y();
        iVar1 = *piVar2;
        piVar2 = (int*)local_48.second();
        local_24 = (float)*piVar2;
        jag::math::Matrix33RotationYawPitchRoll<float>((math*)local_80, local_2c * -0.0030679617,
                                                       local_28 * 0.0030679617, 0.0);
        new ((local_80 + 40)) jag::math::ColourHSL(local_30, (float)-iVar1, local_24);
        new (param_1) jag::math::Matrix44T<float>();
        jag::math::Matrix44View<float>(param_1, (Matrix33T*)local_80, (Vector3T*)(local_80 + 40));
        return param_1;
    }

    // 0x1001c4750, 160 bytes, inline, placed by class name
    // RSevenModelLitRenderer::CreateProjectionMatrix(double, double)
    RSevenModelLitRenderer* RSevenModelLitRenderer::CreateProjectionMatrix(double param_1, double param_2) {
        float fVar1;

        new (this) jag::math::Matrix44T<float>();
        fVar1 = (float)::sqrt(2.0);
        jag::math::Matrix44PerspectiveFovLH<float>(
            (float)(3.1415927410125732 /
                    (((param_1 + -181.0) * 6.103515625e-07 + 0.0083984375) * (param_1 + -181.0) + 2.111)),
            (float)param_2, 1115684864, fVar1 * 13312.0, this, 0);
        return this;
    }

    // 0x1001d22f0, 224 bytes, base-object constructor, inline, placed by class name
    // RSevenModelLitRenderer::RSevenModelLitRenderer()
    void RSevenModelLitRenderer::RSevenModelLitRenderer() {
        allocator local_38[8];

        m_pSpritesJs5 = (Js5*)0;
        field_8 = (world*)0;
        eastl::allocator::allocator(local_38, "EASTL hash_map");
        new (&field_16, local_38)
            eastl::hash_map<long long, RSevenModelLitRenderer::ActiveModel, eastl::hash<long long>,
                            eastl::equal_to<long long>, eastl::allocator, false>();
        eastl::allocator::allocator(local_38, "EASTL hash_map");
        new (&field_72, local_38)
            eastl::hash_map<long long, RSevenModelLitRenderer::ActiveStaticBatch, eastl::hash<long long>,
                            eastl::equal_to<long long>, eastl::allocator, false>();
        new (&field_128) eastl::vector<RSevenModelLitRenderer::ActiveOverlay, eastl::allocator>();
        new (&field_160) eastl::vector<RenderState::LightSubmissionRSeven, eastl::allocator>();
        field_208 = 1;
        new (&field_224, false) jag::graphics::PickingHelper();
    }

    // 0x1001d2870, 16 bytes, complete-object destructor, inline, placed by class name
    // RSevenModelLitRenderer::ActiveOverlay::~ActiveOverlay(): jumps straight to the base-object destructor

    // 0x1001d2880, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // RSevenModelLitRenderer::ActiveOverlay::~ActiveOverlay()
    /* void eastl::destruct<eastl::pair<shared_ptr<ui::Component>, int>
   >(eastl::pair<shared_ptr<ui::Component>, int>*) */

    void eastl::destruct<eastl::pair<shared_ptr<ui::Component>, int>>(pair* param_1) {
        ~LRUHashCacheWrapper();
    }

    // 0x1001d2a20, 16 bytes, complete-object destructor, inline, placed by class name
    // RSevenModelLitRenderer::ActiveStaticBatch::~ActiveStaticBatch(): jumps straight to the base-object destructor

    // 0x1001d2a30, 48 bytes, base-object destructor, inline, placed by class name
    // RSevenModelLitRenderer::ActiveStaticBatch::~ActiveStaticBatch()
    void RSevenModelLitRenderer::ActiveStaticBatch::~ActiveStaticBatch() {
        (&field_32)->~hash_map();
        (&field_16)->~shared_ptr();
        ~shared_ptr();
    }

    // 0x1001d58c0, 80 bytes, base-object destructor, inline, placed by class name
    // RSevenModelLitRenderer::~RSevenModelLitRenderer()
    void RSevenModelLitRenderer::~RSevenModelLitRenderer() {
        (&field_224)->~PickingHelper();
        (&field_160)->~vector();
        (&field_128)->~vector();
        (&field_72)->~hash_map();
        (&field_16)->~hash_map();
    }

    // 0x1002f06f0, 16 bytes, complete-object constructor, inline, placed by class name
    // RSevenModelLitRenderer::ActiveModel::ActiveModel(): jumps straight to the base-object constructor

    // 0x1002f0ad0, 16 bytes, complete-object constructor, inline, placed by class name
    // RSevenModelLitRenderer::ActiveStaticBatch::ActiveStaticBatch(): jumps straight to the base-object constructor

    // 0x1002f2170, 16 bytes, complete-object constructor, inline, placed by class name
    // RSevenModelLitRenderer::StaticBatchAppendList::StaticBatchAppendList(eastl::hash_map<long long, shared_ptr<ModelLit>, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false> const&, bool): jumps straight to the base-object constructor

    // 0x1002f21c0, 16 bytes, complete-object destructor, inline, placed by class name
    // RSevenModelLitRenderer::StaticBatchAppendList::~StaticBatchAppendList(): jumps straight to the base-object destructor

    // 0x100325750, 16 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // RSevenModelLitRenderer::ActiveModel::ActiveModel()
    /* ResourceList<unsigned long long, render::Texture, eastl::map<unsigned long long,
   shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator>
   >::AddResourceResult::AddResourceResult() */

    void jag::ResourceList<unsigned long long, render::Texture,
                           eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>,
                                      eastl::allocator>>::AddResourceResult::AddResourceResult() {
        _func_decltype_nullptr* in_RSI;

        new ((this + 8)) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
    }

    // 0x100325760, 112 bytes, base-object constructor, inline, placed by class name
    // RSevenModelLitRenderer::ActiveStaticBatch::ActiveStaticBatch()
    void RSevenModelLitRenderer::ActiveStaticBatch::ActiveStaticBatch() {
        _func_decltype_nullptr* in_RSI;
        allocator local_28[8];

        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        new (&field_16, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        eastl::allocator::allocator(local_28, "EASTL hash_map");
        new (&field_32, local_28) eastl::hash_map<long long, shared_ptr<ModelLit>, eastl::hash<long long>,
                                                  eastl::equal_to<long long>, eastl::allocator, false>();
    }

    // 0x100325ab0, 288 bytes, base-object constructor, inline, placed by class name
    // RSevenModelLitRenderer::StaticBatchAppendList::StaticBatchAppendList(eastl::hash_map<long long, shared_ptr<ModelLit>, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false> const&, bool)
    void RSevenModelLitRenderer::StaticBatchAppendList::StaticBatchAppendList(hash_map* param_1, bool param_2) {
        bool bVar1;
        eastl* this_00;
        pair* ppVar2;
        long* plVar3;
        undefined4 extraout_EDX;
        undefined4 extraout_EDX_00;
        undefined4 extraout_EDX_01;
        undefined4 uVar4;
        undefined4 extraout_EDX_02;
        undefined4 extraout_EDX_03;
        undefined4 extraout_var;
        undefined4 extraout_var_00;
        undefined4 extraout_var_01;
        undefined4 uVar5;
        undefined4 extraout_var_02;
        undefined4 extraout_var_03;
        undefined8 local_68;
        undefined8 local_60;
        undefined8 local_58;
        undefined8 local_50;
        undefined8 local_48;
        undefined8 local_40;
        hash_map* local_38;

        new (this) ModelAppendList();
        field_0 = PTR_vtable_100ee89d0 + 16;
        new (&field_8) eastl::fixed_vector<ModelLit_const*, 20ul, true, eastl::allocator>();
        local_68 = eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                    eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                    eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                    eastl::prime_rehash_policy, false, true, true>::begin();
        local_60 = CONCAT44(extraout_var, extraout_EDX);
        local_38 = param_1;
        local_58 = param_1->end();
        local_50 = CONCAT44(extraout_var_00, extraout_EDX_00);
        uVar4 = extraout_EDX_00;
        uVar5 = extraout_var_00;
        do {
            bVar1 = eastl::operator!=((eastl*)&local_68, (hashtable_iterator_base*)&local_58,
                                      (hashtable_iterator_base*)CONCAT44(uVar5, uVar4));
            if (!bVar1) {
                return;
            }
            this_00 = (eastl*)local_68.HeapBeginPtr();
            if (param_2) {
                local_48 =
                    eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                     eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                     eastl::prime_rehash_policy, false, true, true>::begin();
                local_40 = CONCAT44(extraout_var_02, extraout_EDX_02);
                ppVar2 = (pair*)local_48.HeapBeginPtr();
                bVar1 = eastl::operator!=(this_00, ppVar2, (pair*)CONCAT44(extraout_var_03, extraout_EDX_03));
                if (bVar1)
                    goto LAB_100325b70;
            } else {
            LAB_100325b70:
                local_48 = ((this_00 + 8))->end();
                (&field_8, (ModelLit**)&local_48)->push_back();
                plVar3 = (long*)shared_ptr<ModelLit>::operator->((shared_ptr<ModelLit>*)(this_00 + 8));
                (**(code**)(*plVar3 + 64))(plVar3);
            }
            eastl::hashtable_iterator<
                eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>, true, false>::
            operator++(
                (hashtable_iterator<eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>,
                                    true, false>*)&local_68);
            uVar4 = extraout_EDX_01;
            uVar5 = extraout_var_01;
        } while (true);
    }

    // 0x100325c30, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // RSevenModelLitRenderer::StaticBatchAppendList::Count() const
    /* ThreadPool::GetNumberOfThreads() */

    void ThreadPool::GetNumberOfThreads() {
        (&field_8)->size();
    }

    // 0x100325c40, 32 bytes, inline, placed by class name
    // RSevenModelLitRenderer::StaticBatchAppendList::GetBaseModel(unsigned long) const
    undefined8 RSevenModelLitRenderer::StaticBatchAppendList::GetBaseModel(ulong param_1) {
        undefined8* puVar1;

        puVar1 = (undefined8*)
            eastl::vector<ModelLit_const*, eastl::fixed_vector_allocator<8ul, 20ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<ModelLit_const*,
                               eastl::fixed_vector_allocator<8ul, 20ul, 8ul, 0ul, true, eastl::allocator>>*)&field_8,
                       param_1);
        return *puVar1;
    }

    // 0x100325c60, 32 bytes, inline, placed by class name
    // RSevenModelLitRenderer::StaticBatchAppendList::GetTempModel(unsigned long)
    undefined8 RSevenModelLitRenderer::StaticBatchAppendList::GetTempModel(ulong param_1) {
        undefined8* puVar1;

        puVar1 = (undefined8*)
            eastl::vector<ModelLit_const*, eastl::fixed_vector_allocator<8ul, 20ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<ModelLit_const*,
                               eastl::fixed_vector_allocator<8ul, 20ul, 8ul, 0ul, true, eastl::allocator>>*)&field_8,
                       param_1);
        return *puVar1;
    }

    // 0x100326120, 32 bytes, base-object destructor, inline, placed by class name
    // RSevenModelLitRenderer::StaticBatchAppendList::~StaticBatchAppendList()
    void RSevenModelLitRenderer::StaticBatchAppendList::~StaticBatchAppendList() {
        field_0 = PTR_vtable_100ee89d0 + 16;
        (&field_8)->~fixed_vector();
    }

    // 0x10032cb50, 16 bytes, complete-object constructor, inline, placed by class name
    // RSevenModelLitRenderer::ActiveModel::ActiveModel(RSevenModelLitRenderer::ActiveModel&&): jumps straight to the base-object constructor

    // 0x10032cb60, 64 bytes, base-object constructor, inline, placed by class name
    // RSevenModelLitRenderer::ActiveModel::ActiveModel(RSevenModelLitRenderer::ActiveModel&&)
    void RSevenModelLitRenderer::ActiveModel::ActiveModel(ActiveModel* param_1) {
        field_0 = param_1->field_0;
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&field_8, (shared_ptr*)&param_1->field_8);
        field_28 = param_1->field_28;
        field_24 = param_1->field_24;
    }

    // 0x10032cef0, 16 bytes, complete-object constructor, inline, placed by class name
    // RSevenModelLitRenderer::ActiveStaticBatch::ActiveStaticBatch(RSevenModelLitRenderer::ActiveStaticBatch&&): jumps straight to the base-object constructor

    // 0x10032cf00, 112 bytes, base-object constructor, inline, placed by class name
    // RSevenModelLitRenderer::ActiveStaticBatch::ActiveStaticBatch(RSevenModelLitRenderer::ActiveStaticBatch&&)
    void RSevenModelLitRenderer::ActiveStaticBatch::ActiveStaticBatch(ActiveStaticBatch* param_1) {
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&field_16, (shared_ptr*)&param_1->field_16);
        new (&field_32, (hash_map*)&param_1->field_32)
            eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        field_96 = param_1->field_96;
        field_88 = param_1->field_88;
    }

    // 0x10032d910, 16 bytes, complete-object constructor, inline, placed by class name
    // RSevenModelLitRenderer::ActiveOverlay::ActiveOverlay(RSevenModelLitRenderer::ActiveOverlay&&): jumps straight to the base-object constructor

    // 0x10032d920, 32 bytes, base-object constructor, inline, placed by class name
    // RSevenModelLitRenderer::ActiveOverlay::ActiveOverlay(RSevenModelLitRenderer::ActiveOverlay&&)
    void RSevenModelLitRenderer::ActiveOverlay::ActiveOverlay(ActiveOverlay* param_1) {
        new (this) RenderState::OverlayRSeven(param_1);
        field_48 = param_1->field_48;
    }

    // 0x10032d9a0, 16 bytes, complete-object constructor, inline, placed by class name
    // RSevenModelLitRenderer::ActiveOverlay::ActiveOverlay(): jumps straight to the base-object constructor

    // 0x10032d9b0, 16 bytes, base-object constructor, inline, placed by class name
    // RSevenModelLitRenderer::ActiveOverlay::ActiveOverlay()
    void RSevenModelLitRenderer::ActiveOverlay::ActiveOverlay() {
        new (this) RenderState::OverlayRSeven();
    }

} // namespace jag::oldscape::dash3d

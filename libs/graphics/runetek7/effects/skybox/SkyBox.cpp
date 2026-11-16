// libs/graphics/runetek7/effects/skybox/SkyBox.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "SkyBox.h"

namespace jag::graphics {
    // 0x100f444c0, 1 bytes, __data
    SkyBox::m_ShowSkyBox = 1;

    // 0x100f444c1, 1 bytes, __data
    SkyBox::m_UseModels = 1;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    SkyBox::GetTransformedTriangle(unsigned int, math::Vector4T<float> (&)[3]);

    // 0x100067280: the linker folded this into game::console::Snow::GetSnowPiles() const, which has identical code
    SkyBox::GetMaterial() const;

    // 0x10041b1e0: the linker folded this into game::NPCType::GetFirstUniqueOpIndex() const, which has identical code
    SkyBox::GetPendingSkyID() const;

    // 0x10047dbc0: the linker folded this into PointLightShadows::GetPointLightSMManager(), which has identical code
    SkyBox::GetRenderTargets();

    // 0x10091a2a0, 416 bytes, base-object constructor, placed by class name and debug map
    // SkyBox::SkyBox()
    void SkyBox::SkyBox() {
        _func_decltype_nullptr* p_Var1;

        p_Var1 = (_func_decltype_nullptr*)4;
        new (this) Drawable(4);
        new (this) MakeSharedPool<SkyBox, 16>();
        field_0 = &PTR__SkyBox_100f193f0;
        field_16 = 0;
        field_24 = 0;
        field_32 = 0;
        new (&field_40) SkyBoxMaterial();
        new (field_576, p_Var1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_592, p_Var1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_608, p_Var1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_624, p_Var1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_640, 32) Array<eastl::pair<unsigned char, int>, eastl::allocator>();
        p_Var1 = (_func_decltype_nullptr*)32;
        new (&field_664, 32) Array<eastl::pair<unsigned char, int>, eastl::allocator>();
        new (field_688, p_Var1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        m_pendingSkyID = -2;
        m_pendingSkyTransitionTime = 0;
        m_exposure = 0.0;
        new (&field_736) math::Vector4T<float>();
        (&field_40)->Init();
        CreateRenderingResources();
    }

    // 0x10091a4d0, 48 bytes, placed by class name
    // SkyBox::CreateRenderingResources()
    undefined8 SkyBox::CreateRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_10[8];

        local_10->~AutoSingleton("Sky_Box");
        return 1;
    }

    // 0x10091a520, 16 bytes, complete-object constructor, placed by class name
    // SkyBox::SkyBox(): jumps straight to the base-object constructor

    // 0x10091a530, 256 bytes, base-object destructor, placed by class name
    // SkyBox::~SkyBox()
    void SkyBox::~SkyBox() {
        field_0 = &PTR__SkyBox_100f193f0;
        DestroyRenderingResources(this);
        field_688->~shared_ptr();
        (&field_664)->~Array();
        (&field_640)->~Array();
        field_624->~shared_ptr();
        field_608->~shared_ptr();
        field_592->~shared_ptr();
        field_576->~shared_ptr();
        (&field_40)->~LightProbeMaterial();
        ~AutoSingleton();
    }

    // 0x10091a630, 96 bytes, placed by class name
    // SkyBox::DestroyRenderingResources()
    void SkyBox::DestroyRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_18[8];

        local_18->~AutoSingleton("Sky_Box");
        (&field_40)->DestroyRenderingResources();
        shared_ptr<render::TextureCube>::reset();
        shared_ptr<render::TextureCube>::reset();
        shared_ptr<Model>::reset();
    }

    // 0x10091a690, 16 bytes, complete-object destructor, placed by class name
    // SkyBox::~SkyBox(): jumps straight to the base-object destructor

    // 0x10091a6a0, 32 bytes, deleting destructor, placed by class name
    // SkyBox::~SkyBox()
    void SkyBox::~SkyBox() {
        ~SkyBox(this);
        operator_delete(this);
    }

    // 0x10091a6c0, 208 bytes, placed by class name
    // SkyBox::MainLogic()
    void SkyBox::MainLogic() {
        Model* pMVar1;
        bool bVar2;
        ulong uVar3;
        SkyBox* this_00;
        SkyBox* this_01;

        uVar3 = FrameTime::GetCurrentTimeMS();
        field_16 = uVar3;
        if ((field_32 != 0) && (field_32 <= uVar3)) {
            field_24 = 0;
            field_32 = 0;
            shared_ptr<render::TextureCube>::operator=((shared_ptr<render::TextureCube>*)field_576,
                                                       (shared_ptr*)field_592);
            shared_ptr<render::TextureCube>::reset();
            this_01 = (SkyBox*)field_624;
            this_00 = (SkyBox*)field_608;
            shared_ptr<Model>::operator=((shared_ptr<Model>*)this_00, (shared_ptr*)this_01);
            shared_ptr<Model>::reset();
            bVar2 = this_00->operator_cast_to_bool();
            if (bVar2) {
                pMVar1 = (Model*)shared_ptr<Model>::operator*((shared_ptr<Model>*)this_00);
                SetupRenderOrderForSkyModel(this_00, (Array*)&field_640, pMVar1);
            }
            bVar2 = this_01->operator_cast_to_bool();
            if (bVar2) {
                pMVar1 = (Model*)shared_ptr<Model>::operator*((shared_ptr<Model>*)this_01);
                SetupRenderOrderForSkyModel(this_01, (Array*)&field_664, pMVar1);
            }
        }
    }

    // 0x10091a790, 208 bytes, placed by class name
    // SkyBox::SetupRenderOrderForSkyModel(Array<eastl::pair<unsigned char, int>, eastl::allocator>&, Model&)
    void SkyBox::SetupRenderOrderForSkyModel(Array* param_1, Model* param_2) {
        byte bVar1;
        undefined4 uVar2;
        vector<eastl::pair<int, int>, eastl::allocator>* this_00;
        ulong uVar3;
        byte* pbVar4;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_01;
        GeometryBatchInstance* this_02;
        long lVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        byte bVar8;

        this_00 = (vector<eastl::pair<int, int>, eastl::allocator>*)param_2->GetBatchList();
        bVar1 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(this_00);
        uVar3 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(this_00);
        param_1->set_max_size(uVar3, 1);
        if (bVar1 != 0) {
            bVar8 = 0;
            do {
                uVar3 = (ulong)bVar8;
                pbVar4 = (byte*)Array<eastl::pair<unsigned char, int>, eastl::allocator>::operator[](
                    (Array<eastl::pair<unsigned char, int>, eastl::allocator>*)param_1, uVar3);
                *pbVar4 = bVar8;
                this_01 =
                    (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                        eastl::vector<std::unique_ptr<GeometryBatchInstance,
                                                      MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                                      eastl::allocator>::
                        operator[](
                            (vector<std::unique_ptr<GeometryBatchInstance,
                                                    MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                                    eastl::allocator>*)this_00,
                            uVar3);
                this_02 = (GeometryBatchInstance*)std::unique_ptr<
                              GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_01);
                uVar2 = this_02->GetFirstSequenceIDFromSource();
                lVar5 = Array<eastl::pair<unsigned char, int>, eastl::allocator>::operator[](
                    (Array<eastl::pair<unsigned char, int>, eastl::allocator>*)param_1, uVar3);
                *(undefined4*)(lVar5 + 4) = uVar2;
                bVar8 = bVar8 + 1;
            } while (bVar8 < bVar1);
        }
        uVar6 = param_1->data();
        uVar7 = param_1->end();
        eastl::sort<eastl::pair<unsigned char, int>*, (Array<eastl::pair<unsigned char, int>, eastl::allocator>&)
                                                          ->SetupRenderOrderForSkyModel(Model&)::__4>(uVar6, uVar7);
    }

    // 0x10091a860, 112 bytes, placed by class name
    // SkyBox::Clear()
    void SkyBox::Clear() {
        field_16 = 0;
        field_24 = 0;
        field_32 = 0;
        shared_ptr<render::TextureCube>::reset();
        shared_ptr<render::TextureCube>::reset();
        shared_ptr<Model>::reset();
        shared_ptr<Model>::reset();
        m_pendingSkyID = -2;
        m_pendingSkyTransitionTime = 0;
        m_exposure = 0.0;
    }

    // 0x10091a8d0, 128 bytes, placed by class name
    // SkyBox::GetTransitionProgress(unsigned long long, bool) const
    float SkyBox::GetTransitionProgress(ulonglong param_1, bool param_2) {
        ulong uVar1;
        float fVar2;

        fVar2 = 0.0;
        uVar1 = field_32 - field_24;
        if (((uVar1 != 0) && (fVar2 = 1.0, param_1 < field_32)) && (param_2)) {
            fVar2 = (float)(param_1 - field_24) / (float)uVar1;
        }
        return fVar2;
    }

    // 0x10091a950, 144 bytes, placed by class name
    // SkyBox::SetCubeMap(shared_ptr<render::TextureCube> const&, unsigned long long, unsigned long long)
    void SkyBox::SetCubeMap(shared_ptr* param_1, ulonglong param_2, ulonglong param_3) {
        undefined1* this_00;

        if (param_2 == 0) {
            shared_ptr<render::TextureCube>::operator=((shared_ptr<render::TextureCube>*)field_576, param_1);
            shared_ptr<render::TextureCube>::reset();
            field_24 = 0;
            field_32 = 0;
        } else {
            this_00 = field_592;
            if (this_00->operator_cast_to_bool()) {
                shared_ptr<render::TextureCube>::operator=((shared_ptr<render::TextureCube>*)field_576,
                                                           (shared_ptr*)this_00);
            }
            shared_ptr<render::TextureCube>::operator=((shared_ptr<render::TextureCube>*)this_00, param_1);
            field_16 = param_3;
            field_24 = param_3;
            field_32 = param_2 + param_3;
        }
    }

    // 0x10091a9e0, 464 bytes, placed by class name
    // SkyBox::SetModel(shared_ptr<Model> const&, unsigned long long, unsigned long long)
    void SkyBox::SetModel(shared_ptr* param_1, ulonglong param_2, ulonglong param_3) {
        undefined1* this_00;
        bool bVar1;
        ulong uVar2;
        ulong uVar3;
        Model* pMVar4;
        shared_ptr* extraout_RDX;
        SkyBox* pSVar5;
        float local_34;

        m_pendingSkyID = -1;
        m_pendingSkyTransitionTime = 0;
        if (param_2 == 0) {
            shared_ptr<Model>::operator=((shared_ptr<Model>*)field_608, param_1);
            shared_ptr<Model>::reset();
            field_24 = 0;
            field_32 = 0;
        } else {
            this_00 = field_624;
            bVar1 = operator==((jag*)param_1, (shared_ptr*)this_00, (shared_ptr*)param_2);
            if (bVar1) {
                local_34 = (float)GetTransitionProgress(this, param_3, true);
            } else {
                bVar1 = this_00->operator_cast_to_bool();
                local_34 = 0.0;
                if (bVar1) {
                    bVar1 = operator==((jag*)param_1, (shared_ptr*)field_608, extraout_RDX);
                    local_34 = 0.0;
                    if (bVar1) {
                        local_34 = (float)GetTransitionProgress(this, param_3, true);
                        local_34 = 1.0 - local_34;
                    }
                    shared_ptr<Model>::operator=((shared_ptr<Model>*)field_608, (shared_ptr*)this_00);
                }
                shared_ptr<Model>::operator=((shared_ptr<Model>*)this_00, param_1);
            }
            field_16 = param_3;
            uVar2 = (ulong)((float)param_2 * local_34);
            uVar3 = 0;
            if (0.0 < local_34) {
                uVar3 = (long)((float)param_2 * local_34 - 9.223372e+18) & (long)uVar2 >> 63 | uVar2;
            }
            field_24 = param_3 - uVar3;
            field_32 = (param_3 - uVar3) + param_2;
        }
        pSVar5 = (SkyBox*)field_608;
        bVar1 = pSVar5->operator_cast_to_bool();
        if (bVar1) {
            pMVar4 = (Model*)shared_ptr<Model>::operator*((shared_ptr<Model>*)pSVar5);
            SetupRenderOrderForSkyModel(pSVar5, (Array*)&field_640, pMVar4);
        }
        pSVar5 = (SkyBox*)field_624;
        bVar1 = pSVar5->operator_cast_to_bool();
        if (bVar1) {
            pMVar4 = (Model*)shared_ptr<Model>::operator*((shared_ptr<Model>*)pSVar5);
            SetupRenderOrderForSkyModel(pSVar5, (Array*)&field_664, pMVar4);
        }
    }

    // 0x10091abb0, 160 bytes, placed by class name
    // SkyBox::SetPendingSkyID(int, unsigned long long)
    void SkyBox::SetPendingSkyID(int param_1, ulonglong param_2) {
        ulonglong uVar1;
        shared_ptr local_30;

        if (param_1 == -2) {
            /* WARNING: Subroutine does not return */
            LogAssert("skyID != SKYBOX_ID_UNINITIALISED",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "skybox/SkyBox.cpp",
                      178, (char*)0);
        }
        m_pendingSkyID = param_1;
        m_pendingSkyTransitionTime = param_2;
        if (param_1 == -1) {
            new (&local_30) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
            uVar1 = FrameTime::GetCurrentTimeMS();
            SetModel(this, &local_30, param_2, uVar1);
            local_30.~shared_ptr();
        }
    }

    // 0x10091ac50, 144 bytes, placed by class name
    // SkyBox::GetDesiredClearColour(math::Vector4T<float> const&) const
    undefined1[16] SkyBox::GetDesiredClearColour(Vector4T* param_1) {
        float fVar1;
        undefined1 auVar3[16];
        ImVec4 local_48[16];
        ImVec4 local_38[24];

        ImVec4::ImVec4(local_38, 0.0, 0.0, 0.0, 0.0);
        if (!field_576->operator_cast_to_bool()) {
            math::Rect<float>::operator=((Rect<float>*)local_38, (Rect*)param_1);
            fVar1 = m_exposure;
            ImVec4::ImVec4(local_48, fVar1, fVar1, fVar1, 0.0);
            math::QuaternionT<float>::operator+=((QuaternionT<float>*)local_38, (QuaternionT*)local_48);
        }
        auVar3[0] = local_38[0];
        auVar3[1] = local_38[1];
        auVar3[2] = local_38[2];
        auVar3[3] = local_38[3];
        auVar3[4] = local_38[4];
        auVar3[5] = local_38[5];
        auVar3[6] = local_38[6];
        auVar3[7] = local_38[7];
        auVar3[8] = local_38[8];
        auVar3[9] = local_38[9];
        auVar3[10] = local_38[10];
        auVar3[11] = local_38[11];
        auVar3[12] = local_38[12];
        auVar3[13] = local_38[13];
        auVar3[14] = local_38[14];
        auVar3[15] = local_38[15];
        return auVar3;
    }

    // 0x10091ace0, 16 bytes, placed by class name
    // SkyBox::GatherDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&)
    void SkyBox::GatherDrawableElements(DrawableQueue* param_1, RT7Core* param_2, SceneViewData* param_3,
                                        EffectManager* param_4) {
        GatherDrawableElementsImpl(this, param_1, param_2, param_3, param_4, false);
    }

    // 0x10091acf0, 944 bytes, placed by class name
    // SkyBox::GatherDrawableElementsImpl(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&, bool)
    void SkyBox::GatherDrawableElementsImpl(DrawableQueue* param_1, RT7Core* param_2, SceneViewData* param_3,
                                            EffectManager* param_4, bool param_5) {
        char cVar2;
        bool bVar3;
        undefined4 uVar4;
        RenderPassBitSet* pRVar5;
        ulonglong uVar6;
        long* plVar7;
        RenderPassEffect* pRVar8;
        undefined7 in_register_00000089;
        DrawableSortKey local_e8;
        __3 local_e0;
        RenderMaterial* local_88;
        long* local_80;
        shared_ptr local_78;
        shared_ptr local_68;
        float local_58;
        undefined4 local_54;
        long local_40;
        uint local_38;
        int local_34;

        if (m_ShowSkyBox == '\0') {
            return;
        }
        pRVar5 = (RenderPassBitSet*)param_3->GetRenderPassBits();
        local_88 = (RenderMaterial*)&field_40;
        cVar2 = (&field_40, pRVar5)->CanRenderInPasses();
        if (cVar2 == '\0') {
            return;
        }
        cVar2 = param_4->IsEnabled(27);
        if (cVar2 == '\0') {
            return;
        }
        new (&local_78) shared_ptr<oldscape::dash3d::Decor>(field_576);
        new (&local_68) shared_ptr<oldscape::dash3d::Decor>(field_592);
        bVar3 = shared_ptr::operator_cast_to_bool(&local_78);
        if ((((bVar3) || (bVar3 = shared_ptr::operator_cast_to_bool(&local_68), bVar3)) ||
             (bVar3 = field_608->operator_cast_to_bool(), bVar3)) ||
            (bVar3 = field_624->operator_cast_to_bool(), bVar3)) {
            uVar6 = FrameTime::GetCurrentTimeMS();
            bVar3 = (bool)param_4->IsEnabled(94);
            local_58 = (float)GetTransitionProgress(this, uVar6, bVar3);
            local_34 = 1;
            if (0.0 < local_58) {
                bVar3 = shared_ptr::operator_cast_to_bool(&local_78);
                local_34 = 2;
                if (bVar3) {
                    bVar3 = shared_ptr::operator_cast_to_bool(&local_68);
                    local_34 = 2 - (uint)bVar3;
                }
            }
            bVar3 = field_608->operator_cast_to_bool();
            if (bVar3) {
                GatherSkyModel(this, param_2, param_3, param_4, (shared_ptr*)field_608, param_5);
                local_34 = 2;
            }
            bVar3 = field_624->operator_cast_to_bool();
            if (bVar3) {
                GatherSkyModel(this, param_2, param_3, param_4, (shared_ptr*)field_624, param_5);
                local_34 = 2;
            }
            local_54 = (undefined4)CONCAT71(in_register_00000089, param_5);
            plVar7 = (long*)(&param_3->field_520)->HeapBeginPtr();
            local_80 = (long*)(&param_3->field_520)->end();
            if (plVar7 != local_80) {
                do {
                    if (*plVar7 == 0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("renderPass",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/effects/skybox/SkyBox.cpp",
                                  265, (char*)0);
                    }
                    local_38 = (*plVar7)->GetPos();
                    pRVar8 = (RenderPassEffect*)local_88->GetRenderPassEffect(local_38);
                    local_40 = 0;
                    new (&local_e8) math::Vector2T<int>();
                    local_e0.field_0 = (SkyBox*)this;
                    local_e0.field_24 = param_2;
                    local_e0.field_40 = &local_34;
                    local_e0.field_48 = &local_58;
                    local_e0.field_56 = &local_40;
                    local_e0.field_64 = param_1;
                    local_e0.field_72 = &local_38;
                    local_e0.field_8 = &local_e8;
                    local_e0.field_16 = pRVar8;
                    local_e0.field_32 = param_4;
                    if (14 < local_38) {
                    LAB_10091b02f:
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/effects/skybox/SkyBox.cpp",
                                        296, "Unsupported render pass");
                    }
                    if ((21000U >> (local_38 & 31) & 1) == 0) {
                        if (local_38 == 2) {
                            GatherDrawableElementsImpl(DrawableQueue&, RT7Core&, SceneViewData_const&,
                                                       EffectManager_const&, bool)::$_3::operator()(&local_e0);
                        } else {
                            if (local_38 != 4)
                                goto LAB_10091b02f;
                            if ((char)local_54 != '\0') {
                                GatherDrawableElementsImpl(DrawableQueue&, RT7Core&, SceneViewData_const&,
                                                           EffectManager_const&, bool)::$_3::operator()(&local_e0);
                            }
                        }
                    }
                    if (local_40 != 0) {
                        uVar4 = ((SkyBox*)this)->GetPos();
                        *(undefined4*)(local_40 + 96) = uVar4;
                        *(SkyBox**)(local_40 + 104) = (SkyBox*)this;
                        uVar6 = FrameTime::GetCurrentTimeMS();
                        bVar3 = (bool)param_4->IsEnabled(94);
                        uVar4 = GetTransitionProgress((SkyBox*)this, uVar6, bVar3);
                        *(undefined4*)(local_40 + 112) = uVar4;
                    }
                    plVar7 = plVar7 + 1;
                } while (plVar7 != local_80);
            }
        }
        local_68.~shared_ptr();
        local_78.~shared_ptr();
    }

    // 0x10091b0a0, 32 bytes, placed by class name
    // SkyBox::GatherForwardDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&)
    void SkyBox::GatherForwardDrawableElements(DrawableQueue* param_1, RT7Core* param_2, SceneViewData* param_3,
                                               EffectManager* param_4) {
        GatherDrawableElementsImpl(this, param_1, param_2, param_3, param_4, true);
    }

    // 0x10091b0c0, 768 bytes, placed by class name
    // SkyBox::GatherSkyModel(RT7Core&, SceneViewData const&, EffectManager const&, shared_ptr<Model>&, bool)
    void SkyBox::GatherSkyModel(RT7Core* param_1, SceneViewData* param_2, EffectManager* param_3, shared_ptr* param_4,
                                bool param_5) {
        SceneViewData* pSVar1;
        char cVar2;
        uint uVar3;
        Model* pMVar4;
        Layout* pLVar5;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        PointLightShadows* this_01;
        SkyBox* this_02;
        GeometryBatch* this_03;
        long* plVar6;
        long* plVar7;
        GeometryBatchInstance* pGVar8;
        RenderMaterial* pRVar9;
        RenderPassEffect* pRVar10;
        BillboardBatchInstance* pBVar11;
        SkyBox* this_04;
        undefined3 in_register_00000089;
        Vector4T<float> local_78[16];
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* local_68;
        shared_ptr* local_60;
        EffectManager* local_58;
        RT7Core* local_50;
        SceneViewData* local_48;
        SkyBox* local_40;
        undefined4 local_34;

        local_34 = CONCAT31(in_register_00000089, param_5);
        local_58 = param_3;
        local_50 = param_1;
        local_48 = param_2;
        pMVar4 = (Model*)shared_ptr<Model>::operator->((shared_ptr<Model>*)param_4);
        cVar2 = pMVar4->IsReadyToRender();
        if (cVar2 != '\0') {
            pMVar4 = (Model*)shared_ptr<Model>::operator->((shared_ptr<Model>*)param_4);
            local_40 = this;
            math::Vector4T<float>::Vector4T(local_78, m_exposure);
            pMVar4->SetTint(local_78);
            local_60 = param_4;
            pMVar4 = (Model*)shared_ptr<Model>::operator->((shared_ptr<Model>*)param_4);
            pLVar5 = (Layout*)pMVar4->GetBatchList();
            this_00 =
                (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(pLVar5);
            local_68 =
                (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                    pLVar5->end();
            local_48 = (SceneViewData*)&local_48->field_520;
            if (this_00 != local_68) {
                do {
                    pGVar8 = (GeometryBatchInstance*)std::unique_ptr<
                                 GeometryBatchInstance,
                                 MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
                    this_03 = (GeometryBatch*)pGVar8->GetGeometryBatch();
                    cVar2 = this_03->IsHidden();
                    pSVar1 = local_48;
                    if (cVar2 == '\0') {
                        plVar6 = (long*)local_48->HeapBeginPtr();
                        plVar7 = (long*)pSVar1->end();
                        for (; plVar6 != plVar7; plVar6 = plVar6 + 1) {
                            if (*plVar6 == 0) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("renderPass",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek7/effects/skybox/SkyBox.cpp",
                                          328, (char*)0);
                            }
                            uVar3 = (*plVar6)->GetPos();
                            pGVar8 = (GeometryBatchInstance*)
                                         std::unique_ptr<GeometryBatchInstance,
                                                         MakeUniquePool<GeometryBatchInstance,
                                                                        3072>::UniquePoolDeleter>::operator->(this_00);
                            pRVar9 = (RenderMaterial*)pGVar8->GetMaterial();
                            pRVar10 = (RenderPassEffect*)pRVar9->GetRenderPassEffect(uVar3);
                            if (14 < uVar3) {
                            LAB_10091b2a5:
                                /* WARNING: Subroutine does not return */
                                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "graphics/runetek7/effects/skybox/SkyBox.cpp",
                                                349, "Unsupported render pass");
                            }
                            if ((21000U >> (uVar3 & 31) & 1) == 0) {
                                if (uVar3 != 2) {
                                    if (uVar3 != 4)
                                        goto LAB_10091b2a5;
                                    if ((char)local_34 == '\0')
                                        goto LAB_10091b21f;
                                }
                                pGVar8 = (GeometryBatchInstance*)std::unique_ptr<
                                    GeometryBatchInstance,
                                    MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::get(this_00);
                                UpdateSkyBatchForwardPassEffect(local_40, pRVar10, local_50, local_58, pGVar8);
                            }
                        LAB_10091b21f:
                        }
                    }
                    this_00 = this_00 + 8;
                } while (this_00 != local_68);
            }
            this_01 = (PointLightShadows*)shared_ptr<Model>::operator->((shared_ptr<Model>*)local_60);
            pLVar5 = (Layout*)this_01->GetPointLightSMManager();
            this_02 = (SkyBox*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar5);
            local_40 = (SkyBox*)pLVar5->end();
            if (this_02 != local_40) {
                do {
                    pSVar1 = local_48;
                    plVar6 = (long*)local_48->HeapBeginPtr();
                    plVar7 = (long*)pSVar1->end();
                    for (; plVar6 != plVar7; plVar6 = plVar6 + 1) {
                        if (*plVar6 == 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("renderPass",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/effects/skybox/SkyBox.cpp",
                                      359, (char*)0);
                        }
                        uVar3 = (*plVar6)->GetPos();
                        pGVar8 =
                            (GeometryBatchInstance*)std::unique_ptr<
                                BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::
                            operator->(
                                (unique_ptr<BillboardBatchInstance,
                                            MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)this_02);
                        pRVar9 = (RenderMaterial*)pGVar8->GetMaterial();
                        pRVar10 = (RenderPassEffect*)pRVar9->GetRenderPassEffect(uVar3);
                        if (14 < uVar3) {
                        LAB_10091b2ff:
                            /* WARNING: Subroutine does not return */
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek7/effects/skybox/SkyBox.cpp",
                                            378, "Unsupported render pass");
                        }
                        if ((21004U >> (uVar3 & 31) & 1) == 0) {
                            if (uVar3 != 4)
                                goto LAB_10091b2ff;
                            if ((char)local_34 != '\0') {
                                this_04 = this_02;
                                pBVar11 = (BillboardBatchInstance*)this_02->get();
                                UpdateSkyBillboardBatchForwardPassEffect(this_04, pRVar10, local_50, local_58, pBVar11);
                            }
                        }
                    }
                    this_02 = (SkyBox*)&this_02->field_8;
                } while (this_02 != local_40);
            }
        }
    }

    // 0x10091b3c0, 208 bytes, placed by class name
    // SkyBox::GatherDrawableElementsImpl(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&, bool)::$_3::operator()() const
    /* SkyBox::GatherDrawableElementsImpl(DrawableQueue&,
   RT7Core&, SceneViewData const&, EffectManager
   const&, bool)::$_3::TEMPNAMEPLACEHOLDERVALUE() const */

    void SkyBox::GatherDrawableElementsImpl(DrawableQueue&, RT7Core&, SceneViewData_const&, EffectManager_const&,
                                            bool)::$_3::operator()() {
        undefined8 uVar1;
        DrawableQueue* pDVar2;
        DrawableSortKey DVar3;
        bool bVar4;
        SkyBox_DE* pSVar5;
        SkyBox* this_00;
        unique_ptr<DrawableElement, DrawableElementDeleter> local_38[8];

        uVar1 = field_0;
        bVar4 = *field_48 <= 1.0 && *field_48 != 1.0;
        this_00 = (SkyBox*)(ulong)bVar4;
        UpdateForwardPassEffect(this_00, field_8, field_16, field_24, field_32, *field_40 == 2, bVar4);
        pSVar5 = DrawableElementPool<SkyBox_DE>::Create<>((DrawableElementPool<SkyBox_DE>*)this_00);
        *field_56 = pSVar5;
        pDVar2 = field_64;
        DVar3 = *field_8;
        std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(local_38,
                                                                                         (DrawableElement*)*field_56);
        pDVar2->AddDrawable(DVar3, local_38, uVar1, 3, *field_72);
        std::unique_ptr<DrawableElement, DrawableElementDeleter>::~unique_ptr(local_38);
    }

    // 0x10091b4c0, 480 bytes, placed by class name
    // SkyBox::UpdateSkyBatchForwardPassEffect(RenderPassEffect&, RT7Core&, EffectManager const&, GeometryBatchInstance*)
    void SkyBox::UpdateSkyBatchForwardPassEffect(RenderPassEffect* param_1, RT7Core* param_2, EffectManager* param_3,
                                                 GeometryBatchInstance* param_4) {
        undefined8 uVar1;
        undefined* puVar2;
        undefined8 uVar3;
        char cVar4;
        undefined7 in_register_00000001;
        RenderMaterial* this_00;
        undefined8 extraout_RDX;
        bool bVar5;
        undefined4 uVar6;

        uVar6 = (undefined4)((uint7)in_register_00000001 >> 24);
        param_1->Set(86, 1);
        param_1->Set(7, 0);
        param_1->Set(21, 0);
        param_1->Set(52, 0);
        param_1->Set(26, 0);
        param_1->Set(30, 0);
        param_1->Set(28, 0);
        param_1->Set(48, 0);
        param_1->Set(57, 0);
        param_1->Set(24, 0);
        param_1->Set(51, 0);
        param_1->Set(110, 0);
        param_1->Set(15, 0);
        param_1->Set(44, 0);
        param_1->Set(117, 0);
        param_1->Set(35, 0);
        param_1->Set(82, m_exposure != 0.0);
        uVar1 = param_3->BuildShaderEffectList(param_1);
        param_1->field_16 = uVar1;
        param_1->field_24 = extraout_RDX;
        this_00 = (RenderMaterial*)param_4->GetMaterial();
        cVar4 = this_00->GetOption(1);
        bVar5 = true;
        if (cVar4 == '\0') {
            cVar4 = this_00->GetOption(2);
            if (cVar4 == '\0') {
                puVar2 = (undefined*)this_00->data();
                bVar5 = puVar2 != AlphaMode::ALPHA_OPAQUE;
            }
        }
        (&param_1->field_16, 65, bVar5)->Set();
        uVar1 = param_2->GetShaderManager();
        uVar3 = GeometryBatchRenderer::GetVertexDecl();
        param_1->UpdateShader(param_3, uVar1, 0, uVar3, 4, CONCAT44(uVar6, 3));
    }

    // 0x10091b6c0, 240 bytes, placed by class name
    // SkyBox::UpdateSkyBillboardBatchForwardPassEffect(RenderPassEffect&, RT7Core&, EffectManager const&, BillboardBatchInstance*)
    void SkyBox::UpdateSkyBillboardBatchForwardPassEffect(RenderPassEffect* param_1, RT7Core* param_2,
                                                          EffectManager* param_3, BillboardBatchInstance* param_4) {
        BillboardBatch* this_00;
        undefined8 uVar1;
        PostProcessController* this_01;
        long lVar2;
        undefined8 uVar3;
        undefined1 uVar4;
        undefined8 extraout_RDX;

        param_1->Set(86, 1);
        this_00 = (BillboardBatch*)param_4->GetBillboardBatch();
        uVar4 = this_00->IsLowPrecision();
        param_1->Set(20, uVar4);
        uVar4 = param_3->IsEnabled(48);
        param_1->Set(29, uVar4);
        uVar1 = param_3->BuildShaderEffectList(param_1);
        param_1->field_16 = uVar1;
        param_1->field_24 = extraout_RDX;
        this_01 = (PostProcessController*)param_2->GetPostProcessController();
        lVar2 = this_01->GetCurrentConfig();
        if (*(char*)(lVar2 + 468) == '\0') {
            (&param_1->field_16, 64, 0)->Set();
        }
        uVar1 = param_2->GetShaderManager();
        uVar3 = BillboardBatchRenderer::GetVertexDecl();
        param_1->UpdateShader(param_3, uVar1, 5, uVar3, 4, 3);
    }

    // 0x10091b990, 240 bytes, placed by class name
    // SkyBox::UpdateForwardPassEffect(DrawableSortKey&, RenderPassEffect&, RT7Core&, EffectManager const&, bool, bool)
    void SkyBox::UpdateForwardPassEffect(DrawableSortKey* param_1, RenderPassEffect* param_2, RT7Core* param_3,
                                         EffectManager* param_4, bool param_5, bool param_6) {
        undefined1 uVar1;
        ushort uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        BucketAllocatorEASTL* extraout_RDX;
        ulong uVar5;
        undefined7 in_register_00000089;
        undefined1 auVar6[16];
        DrawableSortKey local_40;
        DrawableSortKey* local_38;

        local_38 = param_1;
        uVar1 = param_4->IsEnabled(48);
        param_2->Set(29, uVar1);
        param_2->Set(84, param_6);
        auVar6 = param_4->BuildShaderEffectList(param_2);
        param_2->field_16 = auVar6._0_8_;
        param_2->field_24 = auVar6._8_8_;
        uVar3 = param_3->GetShaderManager();
        uVar4 = SkyBoxRenderer::GetVertexDecl();
        param_2->UpdateShader(param_4, uVar3, 17, uVar4, 4294967295, 3);
        uVar2 = param_2->GetConstructedShaderId();
        uVar5 = 576460752320135168;
        if ((int)CONCAT71(in_register_00000089, param_5) != 0) {
            uVar5 = 72057594054639616;
        }
        new (&local_40) eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(
            (EntityHighlight**)(uVar5 | uVar2), extraout_RDX);
        *local_38 = local_40;
    }

    // 0x10091ba90, 464 bytes, placed by class name
    // SkyBox::UpdateRenderTargets(RT7Core&, unsigned int, unsigned int)
    void SkyBox::UpdateRenderTargets(RT7Core* param_1, uint param_2, uint param_3) {
        RenderTargets* pRVar1;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar2;
        undefined8* puVar3;
        uint* puVar4;
        long lVar5;
        RenderTargetsManager* this_00;
        RenderDevice* this_01;
        undefined8 uVar6;
        bool bVar7;
        undefined1* this_02;
        Desc* this_03;
        undefined8 local_148;
        undefined8 uStack_140;
        undefined8 local_138;
        undefined8 uStack_130;
        undefined8 local_128;
        undefined8 uStack_120;
        undefined8 local_118;
        undefined8 uStack_110;
        Desc local_108;
        undefined1 local_c0[68];
        uint uStack_7c;
        undefined4 uStack_78;
        undefined4 uStack_74;
        undefined8 local_70;
        undefined8 uStack_68;
        undefined8 local_60;
        undefined8 uStack_58;
        undefined8 local_50;
        undefined8 uStack_48;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_40[16];

        this_02 = field_688;
        bVar7 = this_02->operator_cast_to_bool();
        if (bVar7) {
            pRVar1 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_02);
            pvVar2 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar1->GetColourTargetTextures();
            puVar3 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar2, 0);
            puVar4 = (uint*)(*puVar3)->second();
            if (*puVar4 == param_2) {
                pRVar1 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)this_02);
                pvVar2 = (vector<render::Texture*,
                                 eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                             pRVar1->GetColourTargetTextures();
                puVar3 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar2, 0);
                lVar5 = (*puVar3)->second();
                if (*(uint*)(lVar5 + 4) == param_3)
                    goto LAB_10091bc22;
            }
        }
        bVar7 = this_02->operator_cast_to_bool();
        if (bVar7) {
            this_00 = (RenderTargetsManager*)param_1->GetRenderTargetsManager();
            this_00->Unregister(this_02);
            shared_ptr<render::RenderTargets>::reset();
        }
        new (local_c0) render::Texture::Desc();
        local_c0._0_4_ = param_2;
        local_c0._4_4_ = param_3;
        local_c0._12_4_ = render::GetFormatFromDepthStencilBits(16, 0, false);
        this_03 = (Desc*)(local_c0 + 64);
        render::Texture::Desc::Desc(this_03);
        local_c0._64_4_ = param_2;
        uStack_7c = param_3;
        this_01 = (RenderDevice*)this_03->Instance();
        uStack_74 = this_01->GetLowestPrecisionRGBFloatFormat();
        uVar6 = param_1->GetRenderTargetsManager();
        local_148 = CONCAT44(uStack_7c, local_c0._64_4_);
        uStack_140 = CONCAT44(uStack_74, uStack_78);
        local_118 = local_50;
        uStack_110 = uStack_48;
        local_128 = local_60;
        uStack_120 = uStack_58;
        local_138 = local_70;
        uStack_130 = uStack_68;
        new (&local_108) render::Texture::Desc();
        local_40->Register(uVar6, "SkyBoxMap", 3553, &local_148, 1, local_c0, 0, 1);
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)this_02,
                                                     (shared_ptr*)local_40);
        local_40->~shared_ptr();
    LAB_10091bc22:
        operator!=((shared_ptr*)this_02, (_func_decltype_nullptr*)0);
    }

} // namespace jag::graphics

namespace jag::oldscape {
    // 0x100023af0: the linker folded this into hal::Haptics::GetEnabled() const, which has identical code
    Skybox::ShowSkybox() const;

} // namespace jag::oldscape

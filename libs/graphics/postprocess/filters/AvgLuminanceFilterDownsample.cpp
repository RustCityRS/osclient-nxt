// libs/graphics/postprocess/filters/AvgLuminanceFilterDownsample.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class AvgLuminanceFilterDownsample {
    public:
        // virtual methods in vtable order
        virtual ~AvgLuminanceFilterDownsample();
        virtual Init();
        virtual void Destroy();
        virtual void DestroyRenderTargets();
        virtual void CalcAvgAndAdaptedLuminance(render::RenderContext&, render::Texture const&, float, float,
                                                graphics::ViewRenderTargets*);
        virtual void RenderDebug(render::Viewport const&) const;
        virtual GetAvgLuminanceTex() const;
        virtual GetAdaptedLuminanceTex() const;
        AvgLuminanceFilterDownsample(render::RenderTargetsManager*, graphicutils::RenderToTextureHelper const*);
        ulong CreateRenderTargets();

        // data members, from how the methods use this: 376 bytes
        undefined** field_0;             // offset 0, vtable pointer
        RenderTargetsManager* field_8;   // offset 8
        RenderToTextureHelper* field_16; // offset 16
        int field_24;                    // offset 24
        char field_28;                   // offset 28
        char _unknown_29[27];
        shared_ptr field_56;           // offset 56
        shared_ptr field_72;           // offset 72
        shared_ptr field_88;           // offset 88
        shared_ptr field_104;          // offset 104
        shared_ptr field_120;          // offset 120
        shared_ptr field_136;          // offset 136
        shared_ptr field_152;          // offset 152
        shared_ptr field_168;          // offset 168
        InputAssemblerState field_184; // offset 184
    };

    // 0x1009b6d00, 352 bytes, base-object constructor, placed by class name and debug map
    // AvgLuminanceFilterDownsample::AvgLuminanceFilterDownsample(render::RenderTargetsManager*, graphicutils::RenderToTextureHelper const*)
    void AvgLuminanceFilterDownsample::AvgLuminanceFilterDownsample(RenderTargetsManager* param_1,
                                                                    RenderToTextureHelper* param_2) {
        new (this) AvgLuminanceFilter(param_1, param_2);
        field_0 = &PTR__AvgLuminanceFilterDownsample_100f1c598;
        new (&field_32) Array<shared_ptr<render::RenderTargets>, eastl::allocator>();
        new (field_56, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_72, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_88, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_104, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_120, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_136, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_152, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_168, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_184) render::InputAssemblerState();
    }

    // 0x1009b6e60, 16 bytes, complete-object constructor, placed by class name and debug map
    // AvgLuminanceFilterDownsample::AvgLuminanceFilterDownsample(render::RenderTargetsManager*, graphicutils::RenderToTextureHelper const*): jumps straight to the base-object constructor

    // 0x1009b6e70, 272 bytes, base-object destructor, placed by class name and debug map
    // AvgLuminanceFilterDownsample::~AvgLuminanceFilterDownsample()
    void AvgLuminanceFilterDownsample::~AvgLuminanceFilterDownsample() {
        field_0 = &PTR__AvgLuminanceFilterDownsample_100f1c598;
        Destroy(this);
        field_184->~InputAssemblerState();
        field_168->~shared_ptr();
        field_152->~shared_ptr();
        field_136->~shared_ptr();
        field_120->~shared_ptr();
        field_104->~shared_ptr();
        field_88->~shared_ptr();
        field_72->~shared_ptr();
        field_56->~shared_ptr();
        (&field_32)->~Array();
        ~AutoSingleton();
    }

    // 0x1009b6f80, 16 bytes, complete-object destructor, placed by class name and debug map
    // AvgLuminanceFilterDownsample::~AvgLuminanceFilterDownsample(): jumps straight to the base-object destructor

    // 0x1009b6f90, 32 bytes, deleting destructor, placed by class name and debug map
    // AvgLuminanceFilterDownsample::~AvgLuminanceFilterDownsample()
    void AvgLuminanceFilterDownsample::~AvgLuminanceFilterDownsample() {
        ~AvgLuminanceFilterDownsample(this);
        operator_delete(this);
    }

    // 0x1009b6fb0, 976 bytes, placed by class name and debug map
    // AvgLuminanceFilterDownsample::Init()
    undefined4 AvgLuminanceFilterDownsample::Init() {
        undefined4 uVar1;
        char* pcVar2;
        char* pcVar3;
        VertexElementDesc* pVVar4;
        undefined8 uVar5;
        PostProcessVS local_70[24];
        RGBLogLuminance3x3 local_58[24];
        shared_ptr local_40;

        uVar1 = CreateRenderTargets(this);
        if ((char)uVar1 == '\0') {
            uVar5 = logger::default_logger();
            logger::Logger::Log(uVar5, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "postprocess/filters/AvgLuminanceFilterDownsample.cpp",
                                49, "Failed to determine AvgLuminanceFilterDownsample render target format");
            (*(code*)field_0[3])(this);
        } else {
            pcVar2 = (char*)((AvgLuminanceFilterDownsample*)this)->Instance();
            local_70->BuildVSFragment();
            pcVar3 = (char*)local_70->c_str();
            local_58->BuildFSFragment(field_24);
            pVVar4 = (VertexElementDesc*)local_58->c_str();
            local_40.RegisterFromSourceString(pcVar2, pcVar3, pVVar4, 62757712, '\x02');
            shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)field_56, &local_40);
            local_40.~shared_ptr();
            local_58->~basic_string();
            local_70->~basic_string();
            local_70->BuildVSFragment();
            pcVar3 = (char*)local_70->c_str();
            local_58->BuildFSFragment(field_24);
            pVVar4 = (VertexElementDesc*)local_58->c_str();
            local_40.RegisterFromSourceString(pcVar2, pcVar3, pVVar4, 62757712, '\x02');
            shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)field_72, &local_40);
            local_40.~shared_ptr();
            local_58->~basic_string();
            local_70->~basic_string();
            local_70->BuildVSFragment();
            pcVar3 = (char*)local_70->c_str();
            local_58->BuildFSFragment(field_24);
            pVVar4 = (VertexElementDesc*)local_58->c_str();
            local_40.RegisterFromSourceString(pcVar2, pcVar3, pVVar4, 62757712, '\x02');
            shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)field_88, &local_40);
            local_40.~shared_ptr();
            local_58->~basic_string();
            local_70->~basic_string();
            local_70->BuildVSFragment();
            pcVar3 = (char*)local_70->c_str();
            local_58->BuildFSFragment(field_24, 0);
            pVVar4 = (VertexElementDesc*)local_58->c_str();
            local_40.RegisterFromSourceString(pcVar2, pcVar3, pVVar4, 62757712, '\x02');
            shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)field_104, &local_40);
            local_40.~shared_ptr();
            local_58->~basic_string();
            local_70->~basic_string();
            local_70->BuildVSFragment();
            pcVar3 = (char*)local_70->c_str();
            local_58->BuildFSFragment(field_24, 1);
            pVVar4 = (VertexElementDesc*)local_58->c_str();
            local_40.RegisterFromSourceString(pcVar2, pcVar3, pVVar4, 62757712, '\x02');
            shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)field_120, &local_40);
            local_40.~shared_ptr();
            local_58->~basic_string();
            local_70->~basic_string();
            local_70->BuildVSFragment();
            pcVar3 = (char*)local_70->c_str();
            local_58->BuildFSFragment(field_24);
            pVVar4 = (VertexElementDesc*)local_58->c_str();
            local_40.RegisterFromSourceString(pcVar2, pcVar3, pVVar4, 62757712, '\x02');
            shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)field_168, &local_40);
            local_40.~shared_ptr();
            local_58->~basic_string();
            local_70->~basic_string();
        }
        return uVar1;
    }

    // 0x1009b7380, 976 bytes, placed by class name and debug map
    // AvgLuminanceFilterDownsample::CreateRenderTargets()
    ulong AvgLuminanceFilterDownsample::CreateRenderTargets() {
        undefined1* this_00;
        undefined1* this_01;
        long* plVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        shared_ptr<render::RenderTargets>* this_02;
        bool bVar9;
        char cVar10;
        shared_ptr<render::RenderTargets>* psVar11;
        shared_ptr* this_03;
        RenderTargets* pRVar12;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar13;
        undefined8* puVar14;
        undefined8* puVar15;
        long lVar16;
        shared_ptr<render::RenderTargets>* psVar17;
        long lVar18;
        undefined8 in_stack_fffffffffffffec8;
        undefined4 uVar19;
        undefined1 local_118[64];
        shared_ptr local_d8[8];
        WrapArray<unsigned char const> local_58[16];
        shared_ptr<render::RenderTargets>* local_48;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_40[16];

        uVar19 = (undefined4)((ulong)in_stack_fffffffffffffec8 >> 32);
        this_00 = &field_32;
        this_00->set_max_size(4, 0);
        ((local_118 + 64))
            ->TryCreateRenderTarget(&field_24, field_8, "AvgLumIntermediateRT0", 64, 64, CONCAT44(uVar19, 35632));
        psVar11 =
            (shared_ptr<render::RenderTargets>*)Array<shared_ptr<render::RenderTargets>, eastl::allocator>::operator[](
                (Array<shared_ptr<render::RenderTargets>, eastl::allocator>*)this_00, 0);
        shared_ptr<render::RenderTargets>::operator=(psVar11, (shared_ptr*)(local_118 + 64));
        ((local_118 + 64))->~shared_ptr();
        this_03 = (shared_ptr*)Array<shared_ptr<render::RenderTargets>, eastl::allocator>::operator[](
            (Array<shared_ptr<render::RenderTargets>, eastl::allocator>*)this_00, 0);
        bVar9 = shared_ptr::operator_cast_to_bool(this_03);
        if (bVar9) {
            WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(local_58,
                                                                                              (Array*)this_00);
            cVar10 = luminance::CreateDownsampleChain(local_58, field_8, "AvgLumIntermediateRT", 4);
            if (cVar10 != '\0') {
                new ((local_118 + 64)) std::array<render::Texture::Desc, 2ul>();
                psVar11 = (shared_ptr<render::RenderTargets>*)this_00->back();
                pRVar12 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(psVar11);
                pvVar13 = (vector<render::Texture*,
                                  eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                              pRVar12->GetColourTargetTextures();
                puVar14 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar13, 0);
                puVar14 = (undefined8*)(*puVar14)->second();
                puVar15 = (undefined8*)std::array<render::Texture::Desc, 2ul>::operator[]((ulong)(local_118 + 64));
                uVar2 = puVar14[1];
                uVar3 = puVar14[2];
                uVar4 = puVar14[3];
                uVar5 = puVar14[4];
                uVar6 = puVar14[5];
                uVar7 = puVar14[6];
                uVar8 = puVar14[7];
                *puVar15 = *puVar14;
                puVar15[1] = uVar2;
                puVar15[2] = uVar3;
                puVar15[3] = uVar4;
                puVar15[4] = uVar5;
                puVar15[5] = uVar6;
                puVar15[6] = uVar7;
                puVar15[7] = uVar8;
                new (local_118) render::Texture::Desc();
                local_40->Register(field_8, "AdaptedLum0RT", 3553, local_118 + 64, 1, (Desc*)local_118, 0, 1);
                this_01 = field_136;
                shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)this_01,
                                                             (shared_ptr*)local_40);
                local_40->~shared_ptr();
                local_48 = (shared_ptr<render::RenderTargets>*)this_01;
                lVar16 = this_01->end();
                if (lVar16 != 0) {
                    local_40->Register(field_8, "AdaptedLum1RT", 3553, local_118 + 64, 1, (Desc*)local_118, 0, 1);
                    shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)field_152,
                                                                 (shared_ptr*)local_40);
                    local_40->~shared_ptr();
                    lVar16 = field_152->end();
                    if (lVar16 != 0) {
                        psVar11 = (shared_ptr<render::RenderTargets>*)this_00->data();
                        psVar17 = (shared_ptr<render::RenderTargets>*)this_00->end();
                        this_02 = local_48;
                        for (; local_48 = this_02, psVar11 != psVar17; psVar11 = psVar11 + 16) {
                            pRVar12 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(psVar11);
                            pvVar13 =
                                (vector<render::Texture*,
                                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    pRVar12->GetColourTargetTextures();
                            puVar14 = (undefined8*)
                                eastl::vector<render::Texture*,
                                              eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](pvVar13, 0);
                            plVar1 = (long*)*puVar14;
                            lVar18 = pvVar13->Instance();
                            (**(code**)(*plVar1 + 24))(plVar1, lVar18 + 80, 0);
                            pRVar12 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(psVar11);
                            lVar18 = pRVar12->GetDepthStencilTargetTexture();
                            if (lVar18 != 0) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("avgLumRT->GetDepthStencilTargetTexture() == nullptr",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/postprocess/filters/AvgLuminanceFilterDownsample.cpp",
                                          327, (char*)0);
                            }
                            this_02 = local_48;
                        }
                        pRVar12 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(this_02);
                        pvVar13 = (vector<render::Texture*,
                                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                      pRVar12->GetColourTargetTextures();
                        puVar14 = (undefined8*)eastl::vector<
                            render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](pvVar13, 0);
                        plVar1 = (long*)*puVar14;
                        lVar18 = pvVar13->Instance();
                        (**(code**)(*plVar1 + 24))(plVar1, lVar18 + 80, 0);
                        pRVar12 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(this_02);
                        lVar18 = pRVar12->GetDepthStencilTargetTexture();
                        if (lVar18 != 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("m_CurrAdaptedLuminanceRT->GetDepthStencilTargetTexture() == nullptr",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "postprocess/filters/AvgLuminanceFilterDownsample.cpp",
                                      331, (char*)0);
                        }
                        pRVar12 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                            (shared_ptr<render::RenderTargets>*)field_152);
                        pvVar13 = (vector<render::Texture*,
                                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                      pRVar12->GetColourTargetTextures();
                        puVar14 = (undefined8*)eastl::vector<
                            render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](pvVar13, 0);
                        plVar1 = (long*)*puVar14;
                        lVar18 = pvVar13->Instance();
                        (**(code**)(*plVar1 + 24))(plVar1, lVar18 + 80, 0);
                        pRVar12 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                            (shared_ptr<render::RenderTargets>*)field_152);
                        lVar18 = pRVar12->GetDepthStencilTargetTexture();
                        if (lVar18 != 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("m_PrevAdaptedLuminanceRT->GetDepthStencilTargetTexture() == nullptr",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "postprocess/filters/AvgLuminanceFilterDownsample.cpp",
                                      334, (char*)0);
                        }
                        field_28 = '\x01';
                        return CONCAT71((int7)((ulong)lVar16 >> 8), lVar16 != 0) & 4294967295;
                    }
                }
            }
        }
        return 0;
    }

    // 0x1009b7ba0, 128 bytes, placed by class name
    // AvgLuminanceFilterDownsample::Destroy()
    void AvgLuminanceFilterDownsample::Destroy() {
        ShaderProgramManager* this_00;
        Singleton<render::ShaderProgramManager>* this_01;

        (*(code*)field_0[4])();
        this_01 = (Singleton<render::ShaderProgramManager>*)field_184;
        this_01->Destroy();
        this_00 = (ShaderProgramManager*)this_01->Instance();
        this_00->Unregister(field_72);
        this_00->Unregister(field_56);
        this_00->Unregister(field_88);
        this_00->Unregister(field_104);
        this_00->Unregister(field_120);
        this_00->Unregister(field_168);
    }

    // 0x1009b7c20, 2096 bytes, placed by class name
    // AvgLuminanceFilterDownsample::CalcAvgAndAdaptedLuminance(render::RenderContext&, render::Texture const&, float, float, graphics::ViewRenderTargets*)
    void AvgLuminanceFilterDownsample::CalcAvgAndAdaptedLuminance(RenderContext* param_1, Texture* param_2,
                                                                  float param_3, float param_4,
                                                                  ViewRenderTargets* param_5) {
        undefined1* puVar1;
        RenderToTextureHelper* pRVar2;
        Texture* pTVar3;
        RenderContext* this_00;
        AvgLuminanceFilterDownsample* pAVar4;
        char cVar5;
        int iVar6;
        long lVar7;
        RenderTargets* pRVar8;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_01;
        RenderPipelineState* pRVar9;
        Layout* this_02;
        int* piVar10;
        ShaderProgram* pSVar11;
        HashedString* pHVar12;
        Vector4T* pVVar13;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar14;
        ShaderProgramVariable* pSVar15;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar16;
        RenderTargets* pRVar17;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar18;
        undefined8* puVar19;
        Viewport* pVVar20;
        OutputMergerState* this_03;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_04;
        VertexDeclaration* pVVar21;
        VertexBuffer* pVVar22;
        ImVec4* this_05;
        DrawCallState* pDVar23;
        ulong uVar24;
        undefined1 auVar25[16];
        HashedString HVar26;
        HashedString HVar27;
        array<math::Vector4T<float>, 5ul> local_188[80];
        ImVec4 local_138[128];
        undefined1 local_b8[32];
        DrawCallState local_98;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_68;
        shared_ptr<render::RenderTargets>* local_60;
        float local_58;
        float local_54;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_50;
        Texture* local_48;
        RenderContext* local_40;
        AvgLuminanceFilterDownsample* local_38;

        local_58 = param_3;
        local_54 = param_4;
        local_48 = param_2;
        local_40 = param_1;
        if (param_5 == (ViewRenderTargets*)0) {
            eastl::swap<shared_ptr<render::RenderTargets>>((shared_ptr*)field_152, (shared_ptr*)field_136);
        } else {
            cVar5 = EnsureRenderTargetsAvailable(param_5);
            if (cVar5 == '\0') {
                return;
            }
            HVar26.field_8 = *(undefined8*)PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588;
            HVar26.field_0 = (char*)param_5;
            HVar27.field_8 = *(undefined8*)PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578;
            HVar27.field_0 = *(char**)(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588 + 8);
            graphics::ViewRenderTargets::Swap(HVar26, HVar27);
            if (param_5 != (ViewRenderTargets*)0) {
                local_60 = (shared_ptr<render::RenderTargets>*)param_5->Get(
                    *(HashedString*)PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580);
                goto LAB_1009b7cc6;
            }
        }
        local_60 = (shared_ptr<render::RenderTargets>*)(&field_32)->back();
    LAB_1009b7cc6:
        if (param_5 == (ViewRenderTargets*)0) {
            local_50 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_136;
            local_b8._24_8_ = field_152;
            cVar5 = field_28;
        } else {
            local_50 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)param_5->Get(
                *(HashedString*)PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578);
            local_b8._24_8_ = param_5->Get(*(HashedString*)PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588);
            cVar5 = field_28;
        }
        if (cVar5 != '\0') {
            this_05 = local_138;
            ImVec4::ImVec4(local_138, 1.0, 1.0, 1.0, 1.0);
            lVar7 = this_05->Instance();
            this_00 = local_40;
            local_40->SetBlendState((BlendState*)(lVar7 + 1524));
            pRVar8 =
                (RenderTargets*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_50);
            this_00->ClearRenderTargets(pRVar8, local_138, 1);
            pRVar8 = (RenderTargets*)local_b8._24_8_->end();
            this_00->ClearRenderTargets(pRVar8, local_138, 1);
            field_28 = '\0';
        }
        pDVar23 = &local_98;
        local_38 = this;
        render::DrawCallState::DrawCallState(pDVar23);
        this_01 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                      pDVar23->GetRenderPipelineState();
        auVar25 = pDVar23->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this_01, (EntityHighlight**)(auVar25._0_8_ + 1524), auVar25._8_8_);
        pDVar23 = &local_98;
        pRVar9 = (RenderPipelineState*)pDVar23->GetRenderPipelineState();
        lVar7 = pDVar23->Instance();
        pRVar9->SetRasteriserState((RasteriserState*)(lVar7 + 1200));
        pDVar23 = &local_98;
        this_02 = (Layout*)pDVar23->GetRenderPipelineState();
        lVar7 = pDVar23->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(this_02, lVar7 + 1080);
        std::array<math::Vector4T<float>, 5ul>::array(local_188);
        pTVar3 = local_48;
        piVar10 = (int*)local_48->second();
        iVar6 = *piVar10;
        lVar7 = pTVar3->second();
        Calc3x3OffsetsNearestNeighbour((array*)local_188, iVar6, *(int*)(lVar7 + 4));
        pRVar9 = (RenderPipelineState*)local_98.GetRenderPipelineState();
        puVar1 = local_38->field_56;
        pSVar11 = (ShaderProgram*)puVar1->end();
        pRVar9->SetShaderProgram(pSVar11);
        pSVar11 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)puVar1);
        pHVar12 = (HashedString*)postprocess::operator*((postprocess*)13);
        pVVar13 = (Vector4T*)std::array<math::Vector4T<float>, 5ul>::data(local_188);
        pSVar11->SetShaderConstVector4(pHVar12, 5, pVVar13, 1);
        pRVar2 = local_38->field_16;
        local_68 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_38->field_32;
        pvVar14 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
            Array<shared_ptr<render::RenderTargets>, eastl::allocator>::operator[](
                (Array<shared_ptr<render::RenderTargets>, eastl::allocator>*)local_68, 0);
        pRVar8 = (RenderTargets*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar14);
        pSVar15 = (ShaderProgramVariable*)postprocess::operator*((postprocess*)0);
        pSVar11 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator*((shared_ptr<render::ShaderProgram>*)puVar1);
        pRVar2->RenderTextureToQuad(local_40, &local_98, pRVar8, local_48, pSVar15, pSVar11, 0, 0, -1);
        pRVar9 = (RenderPipelineState*)local_98.GetRenderPipelineState();
        local_48 = (Texture*)local_38->field_104;
        pSVar11 = (ShaderProgram*)local_48->end();
        pRVar9->SetShaderProgram(pSVar11);
        new (local_138) std::array<math::Vector4T<float>, 8ul>();
        pvVar14 = local_68;
        lVar7 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_68);
        if (1 < lVar7 - 1U) {
            uVar24 = 1;
            do {
                pvVar16 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    Array<shared_ptr<render::RenderTargets>, eastl::allocator>::operator[](
                        (Array<shared_ptr<render::RenderTargets>, eastl::allocator>*)pvVar14, uVar24);
                pRVar8 = (RenderTargets*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                    pvVar16);
                pvVar14 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    Array<shared_ptr<render::RenderTargets>, eastl::allocator>::operator[](
                        (Array<shared_ptr<render::RenderTargets>, eastl::allocator>*)pvVar14, uVar24 - 1);
                pRVar17 = (RenderTargets*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                    pvVar14);
                pvVar18 = (vector<render::Texture*,
                                  eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                              pRVar17->GetColourTargetTextures();
                puVar19 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar18, 0);
                piVar10 = (int*)(*puVar19)->second();
                pRVar8->Invalidate();
                Calc4x4OffsetsNearestNeighbour((array*)local_138, *piVar10, piVar10[1]);
                pSVar11 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->(
                    (shared_ptr<render::ShaderProgram>*)local_48);
                pHVar12 = (HashedString*)postprocess::operator*((postprocess*)15);
                pVVar13 = (Vector4T*)local_138->data();
                pSVar11->SetShaderConstVector4(pHVar12, 8, pVVar13, 1);
                pRVar2 = local_38->field_16;
                pvVar18 = (vector<render::Texture*,
                                  eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                              pRVar17->GetColourTargetTextures();
                puVar19 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar18, 0);
                pTVar3 = (Texture*)*puVar19;
                pSVar15 = (ShaderProgramVariable*)postprocess::operator*((postprocess*)16);
                pSVar11 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator*(
                    (shared_ptr<render::ShaderProgram>*)local_48);
                pRVar2->RenderTextureToQuad(local_40, &local_98, pRVar8, pTVar3, pSVar15, pSVar11, 0, 0, -1);
                pvVar14 = local_68;
                lVar7 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_68);
                uVar24 = uVar24 + 1;
            } while (uVar24 < lVar7 - 1U);
        }
        lVar7 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar14);
        pvVar16 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
            Array<shared_ptr<render::RenderTargets>, eastl::allocator>::operator[](
                (Array<shared_ptr<render::RenderTargets>, eastl::allocator>*)pvVar14, lVar7 - 1);
        pRVar8 = (RenderTargets*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar16);
        lVar7 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar14);
        pvVar14 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
            Array<shared_ptr<render::RenderTargets>, eastl::allocator>::operator[](
                (Array<shared_ptr<render::RenderTargets>, eastl::allocator>*)pvVar14, lVar7 - 2);
        pRVar17 = (RenderTargets*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar14);
        pvVar18 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      pRVar17->GetColourTargetTextures();
        puVar19 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar18, 0);
        piVar10 = (int*)(*puVar19)->second();
        iVar6 = *piVar10;
        pvVar18 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      pRVar17->GetColourTargetTextures();
        puVar19 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar18, 0);
        lVar7 = (*puVar19)->second();
        Calc4x4OffsetsNearestNeighbour((array*)local_138, iVar6, *(int*)(lVar7 + 4));
        pRVar9 = (RenderPipelineState*)local_98.GetRenderPipelineState();
        puVar1 = local_38->field_120;
        pSVar11 = (ShaderProgram*)puVar1->end();
        pRVar9->SetShaderProgram(pSVar11);
        pSVar11 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)puVar1);
        pHVar12 = (HashedString*)postprocess::operator*((postprocess*)15);
        pVVar13 = (Vector4T*)local_138->data();
        pSVar11->SetShaderConstVector4(pHVar12, 8, pVVar13, 1);
        pRVar2 = local_38->field_16;
        pvVar18 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      pRVar17->GetColourTargetTextures();
        puVar19 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar18, 0);
        pTVar3 = (Texture*)*puVar19;
        pSVar15 = (ShaderProgramVariable*)postprocess::operator*((postprocess*)16);
        pSVar11 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator*((shared_ptr<render::ShaderProgram>*)puVar1);
        pRVar2->RenderTextureToQuad(local_40, &local_98, pRVar8, pTVar3, pSVar15, pSVar11, 0, 0, -1);
        new (local_b8) render::Viewport(0, 0, 1, 1, 0.0, 1.0);
        pAVar4 = local_38;
        pVVar20 = (Viewport*)local_98.GetOutputMergerState();
        render::OutputMergerState::SetViewports(pVVar20, (uint)local_b8);
        this_03 = (OutputMergerState*)local_98.GetOutputMergerState();
        pRVar8 = (RenderTargets*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_50);
        this_03->SetRenderTargets(pRVar8);
        pRVar9 = (RenderPipelineState*)local_98.GetRenderPipelineState();
        puVar1 = pAVar4->field_168;
        pSVar11 = (ShaderProgram*)puVar1->end();
        pRVar9->SetShaderProgram(pSVar11);
        this_04 =
            (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                         eastl::allocator>>::Layout,
                                 eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)puVar1);
        pVVar21 = (VertexDeclaration*)eastl::compressed_pair_imp<
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_04);
        pVVar22 = (VertexBuffer*)pAVar4->field_16->GetBoneIDMap();
        (pAVar4->field_184, pVVar21, pVVar22)->SetVertexStreamData();
        local_98.SetInputAssemblerState(pAVar4->field_184);
        pRVar8 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(local_60);
        pvVar18 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      pRVar8->GetColourTargetTextures();
        puVar19 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar18, 0);
        pTVar3 = (Texture*)*puVar19;
        pSVar11 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)puVar1);
        pHVar12 = (HashedString*)postprocess::operator*((postprocess*)&DAT_00000001);
        iVar6 = pSVar11->GetConstIndex(pHVar12);
        pRVar9 = (RenderPipelineState*)local_98.GetRenderPipelineState();
        pRVar9->SetPSTextureSamplerPair(0, pTVar3, iVar6, 0, false);
        pSVar11 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)puVar1);
        pHVar12 = (HashedString*)postprocess::operator*((postprocess*)19);
        iVar6 = pSVar11->GetConstIndex(pHVar12);
        pRVar9 = (RenderPipelineState*)local_98.GetRenderPipelineState();
        pRVar8 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)local_b8._24_8_);
        pvVar18 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      pRVar8->GetColourTargetTextures();
        puVar19 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar18, 0);
        pRVar9->SetPSTextureSamplerPair(1, (Texture*)*puVar19, iVar6, 0, false);
        pSVar11 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)puVar1);
        pHVar12 = (HashedString*)postprocess::operator*((postprocess*)17);
        pSVar11->SetShaderConstFloat1(pHVar12, local_58);
        pSVar11 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)puVar1);
        pHVar12 = (HashedString*)postprocess::operator*((postprocess*)18);
        pSVar11->SetShaderConstFloat1(pHVar12, 1.0 / local_54);
        (pAVar4->field_16, local_40, &local_98)->RenderQuad();
        local_98.~DrawCallState();
    }

    // 0x1009b84c0, 768 bytes, placed by class name
    // AvgLuminanceFilterDownsample::RenderDebug(render::Viewport const&) const
    void AvgLuminanceFilterDownsample::RenderDebug(Viewport* param_1) {
        undefined8 uVar1;
        int iVar2;
        long* plVar3;
        shared_ptr<render::RenderTargets>* this_00;
        RenderTargets* pRVar4;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar5;
        undefined8* puVar6;
        ImVec4 local_70[16];
        Point<float> local_60[8];
        SideBarData local_58;
        float local_4c;
        Point<float> local_48[8];
        undefined1 local_40[12];
        float local_34;

        local_40._8_4_ = 128.0 / (float)param_1->field_8;
        local_34 = 128.0 / (float)param_1->field_12;
        plVar3 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar3 != (long*)0) {
            this_00 = (shared_ptr<render::RenderTargets>*)(&field_32)->back();
            pRVar4 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(this_00);
            pvVar5 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar4->GetColourTargetTextures();
            puVar6 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar5, 0);
            uVar1 = *puVar6;
            ImVec4::ImVec4(local_70, 0.0, 0.0, (float)local_40._8_4_, local_34);
            math::Point<float>::Point(local_48, 0.0, 0.0);
            math::Point<float>::Point(local_60, 1.0, 1.0);
            new (local_40) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 255, 255);
            iVar2 = local_40->GetX();
            new (&local_58) oldscape::sidebars::SideBarData(iVar2, 0);
            (**(code**)(*plVar3 + 112))(plVar3, uVar1, local_70, local_48, local_60, 0, 0, 0, &local_58);
        }
        plVar3 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar3 != (long*)0) {
            pRVar4 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)field_136);
            pvVar5 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar4->GetColourTargetTextures();
            puVar6 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar5, 0);
            uVar1 = *puVar6;
            ImVec4::ImVec4(local_70, 0.0, local_34, (float)local_40._8_4_, local_34);
            math::Point<float>::Point(local_48, 0.0, 0.0);
            math::Point<float>::Point(local_60, 1.0, 1.0);
            new (local_40) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 255, 255);
            iVar2 = local_40->GetX();
            new (&local_58) oldscape::sidebars::SideBarData(iVar2, 0);
            (**(code**)(*plVar3 + 112))(plVar3, uVar1, local_70, local_48, local_60, 0, 0, 0, &local_58);
        }
        plVar3 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar3 != (long*)0) {
            local_4c = local_34 + local_34;
            pRVar4 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)field_152);
            pvVar5 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar4->GetColourTargetTextures();
            puVar6 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar5, 0);
            uVar1 = *puVar6;
            ImVec4::ImVec4(local_70, 0.0, local_4c, (float)local_40._8_4_, local_34);
            math::Point<float>::Point(local_48, 0.0, 0.0);
            math::Point<float>::Point(local_60, 1.0, 1.0);
            new (local_40) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 255, 255);
            iVar2 = local_40->GetX();
            new (&local_58) oldscape::sidebars::SideBarData(iVar2, 0);
            (**(code**)(*plVar3 + 112))(plVar3, uVar1, local_70, local_48, local_60, 0, 0, 0, &local_58);
        }
    }

    // 0x1009b87c0, 96 bytes, placed by class name
    // AvgLuminanceFilterDownsample::GetAvgLuminanceTex() const
    undefined8 AvgLuminanceFilterDownsample::GetAvgLuminanceTex() {
        shared_ptr<render::RenderTargets>* this_00;
        RenderTargets* this_01;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_02;
        undefined8* puVar1;

        if (field_24 == 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_shaderOutputFormat != LuminanceShaderOutputFormat::DEPTH",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterDownsample.cpp",
                      248, (char*)0);
        }
        this_00 = (shared_ptr<render::RenderTargets>*)(&field_32)->back();
        this_01 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(this_00);
        this_02 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      this_01->GetColourTargetTextures();
        puVar1 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](this_02, 0);
        return *puVar1;
    }

    // 0x1009b8820, 96 bytes, placed by class name
    // AvgLuminanceFilterDownsample::GetAdaptedLuminanceTex() const
    undefined8 AvgLuminanceFilterDownsample::GetAdaptedLuminanceTex() {
        RenderTargets* this_00;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_01;
        undefined8* puVar1;

        if (field_24 == 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_shaderOutputFormat != LuminanceShaderOutputFormat::DEPTH",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterDownsample.cpp",
                      254, (char*)0);
        }
        this_00 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)field_136);
        this_01 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      this_00->GetColourTargetTextures();
        puVar1 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](this_01, 0);
        return *puVar1;
    }

    // 0x1009b8c70, 128 bytes, placed by class name
    // AvgLuminanceFilterDownsample::DestroyRenderTargets()
    void AvgLuminanceFilterDownsample::DestroyRenderTargets() {
        shared_ptr* psVar1;
        shared_ptr* psVar2;

        psVar1 = (shared_ptr*)(&field_32)->data();
        psVar2 = (shared_ptr*)(&field_32)->end();
        for (; psVar1 != psVar2; psVar1 = psVar1 + 1) {
            (field_8, psVar1)->Unregister();
        }
        (field_8, (shared_ptr*)field_152)->Unregister();
        (field_8, (shared_ptr*)field_136)->Unregister();
    }

} // namespace jag::postprocess

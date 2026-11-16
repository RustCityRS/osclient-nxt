// libs/graphics/postprocess/filters/AvgLuminanceFilterCompute.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class AvgLuminanceFilterCompute {
    public:
        // virtual methods in vtable order
        virtual ~AvgLuminanceFilterCompute();
        virtual Init();
        virtual void Destroy();
        virtual void DestroyRenderTargets();
        virtual void CalcAvgAndAdaptedLuminance(render::RenderContext&, render::Texture const&, float, float,
                                                graphics::ViewRenderTargets*);
        virtual void RenderDebug(render::Viewport const&) const;
        virtual GetAvgLuminanceTex() const;
        virtual GetAdaptedLuminanceTex() const;
        AvgLuminanceFilterCompute(render::RenderTargetsManager*, graphicutils::RenderToTextureHelper const*);
        CreateRenderTargets();
        static float /* 4 bytes */ s_colourScaleMultiplier; // = 1.0f

        // data members, from how the methods use this: 128 bytes
        undefined** field_0;             // offset 0, vtable pointer
        RenderTargetsManager* field_8;   // offset 8
        RenderToTextureHelper* field_16; // offset 16
        int field_24;                    // offset 24
        undefined1 field_28;             // offset 28
        char _unknown_29[3];
        shared_ptr field_32;  // offset 32
        shared_ptr field_48;  // offset 48
        shared_ptr field_64;  // offset 64
        shared_ptr field_80;  // offset 80
        shared_ptr field_96;  // offset 96
        shared_ptr field_112; // offset 112
    };

    // 0x100d4fc88, 4 bytes, __const
    float AvgLuminanceFilterCompute::s_colourScaleMultiplier = 1.0f;

    // 0x1009b5410, 224 bytes, base-object constructor, placed by class name and debug map
    // AvgLuminanceFilterCompute::AvgLuminanceFilterCompute(render::RenderTargetsManager*, graphicutils::RenderToTextureHelper const*)
    void AvgLuminanceFilterCompute::AvgLuminanceFilterCompute(RenderTargetsManager* param_1,
                                                              RenderToTextureHelper* param_2) {
        new (this) AvgLuminanceFilter(param_1, param_2);
        field_0 = &PTR__AvgLuminanceFilterCompute_100f1c540;
        new (field_32, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_48, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_64, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_80, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_96, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_112, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1009b5540, 16 bytes, complete-object constructor, placed by class name
    // AvgLuminanceFilterCompute::AvgLuminanceFilterCompute(render::RenderTargetsManager*, graphicutils::RenderToTextureHelper const*): jumps straight to the base-object constructor

    // 0x1009b5550, 176 bytes, base-object destructor, placed by class name
    // AvgLuminanceFilterCompute::~AvgLuminanceFilterCompute()
    void AvgLuminanceFilterCompute::~AvgLuminanceFilterCompute() {
        field_0 = &PTR__AvgLuminanceFilterCompute_100f1c540;
        Destroy(this);
        field_112->~shared_ptr();
        field_96->~shared_ptr();
        field_80->~shared_ptr();
        field_64->~shared_ptr();
        field_48->~shared_ptr();
        field_32->~shared_ptr();
        ~AutoSingleton();
    }

    // 0x1009b5600, 16 bytes, complete-object destructor, placed by class name
    // AvgLuminanceFilterCompute::~AvgLuminanceFilterCompute(): jumps straight to the base-object destructor

    // 0x1009b5610, 32 bytes, deleting destructor, placed by class name
    // AvgLuminanceFilterCompute::~AvgLuminanceFilterCompute()
    void AvgLuminanceFilterCompute::~AvgLuminanceFilterCompute() {
        ~AvgLuminanceFilterCompute(this);
        operator_delete(this);
    }

    // 0x1009b5630, 368 bytes, placed by class name
    // AvgLuminanceFilterCompute::Init()
    undefined4 AvgLuminanceFilterCompute::Init() {
        undefined4 uVar1;
        uchar uVar2;
        undefined4 uVar3;
        RenderTargets* this_00;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_01;
        undefined8* puVar4;
        long lVar5;
        char* pcVar6;
        undefined8 uVar7;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_02;
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_58[24];
        shared_ptr local_40;

        uVar3 = CreateRenderTargets(this);
        if ((char)uVar3 == '\0') {
            uVar7 = logger::default_logger();
            logger::Logger::Log(uVar7, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "postprocess/filters/AvgLuminanceFilterCompute.cpp",
                                42, "Failed to determine AvgLuminanceFilterCompute render target format");
            (*(code*)field_0[3])(this);
        } else {
            this_00 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)field_48);
            this_01 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    this_00->GetColourTargetTextures();
            puVar4 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_01, 0);
            this_02 = (compressed_pair_imp<
                       eastl::basic_string<
                           char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                       eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)*puVar4;
            lVar5 = eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_02);
            uVar1 = *(undefined4*)(lVar5 + 12);
            pcVar6 = (char*)this_02->Instance();
            local_58->BuildFirstPassCSFragment(uVar1, 0, 1, 0);
            uVar2 = std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::c_str(local_58);
            local_40.RegisterFromSourceString(pcVar6, uVar2);
            shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)field_96, &local_40);
            local_40.~shared_ptr();
            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(local_58);
            local_58->BuildSecondPassCSFragment(uVar1, 0, 1, 0);
            uVar2 = std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::c_str(local_58);
            local_40.RegisterFromSourceString(pcVar6, uVar2);
            shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)field_112, &local_40);
            local_40.~shared_ptr();
            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(local_58);
        }
        return uVar3;
    }

    // 0x1009b57a0, 1136 bytes, placed by class name
    // AvgLuminanceFilterCompute::CreateRenderTargets()
    undefined8 AvgLuminanceFilterCompute::CreateRenderTargets() {
        undefined1* this_00;
        undefined1* puVar1;
        long* plVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        bool bVar10;
        RenderTargets* pRVar11;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar12;
        undefined8* puVar13;
        undefined8* puVar14;
        long lVar15;
        shared_ptr local_110[8];
        undefined1 local_90[72];
        shared_ptr<render::RenderTargets>* local_48;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_40[16];

        local_110->TryCreateRenderTarget(&field_24, field_8, "AvgLumRT1x1", 1, 1, 37305);
        this_00 = field_48;
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)this_00, local_110);
        local_110->~shared_ptr();
        bVar10 = this_00->operator_cast_to_bool();
        if (bVar10) {
            new (local_110) std::array<render::Texture::Desc, 2ul>();
            pRVar11 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_00);
            pvVar12 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar11->GetColourTargetTextures();
            puVar13 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar12, 0);
            puVar13 = (undefined8*)(*puVar13)->second();
            puVar14 = (undefined8*)std::array<render::Texture::Desc, 2ul>::operator[]((ulong)local_110);
            uVar3 = puVar13[1];
            uVar4 = puVar13[2];
            uVar5 = puVar13[3];
            uVar6 = puVar13[4];
            uVar7 = puVar13[5];
            uVar8 = puVar13[6];
            uVar9 = puVar13[7];
            *puVar14 = *puVar13;
            puVar14[1] = uVar3;
            puVar14[2] = uVar4;
            puVar14[3] = uVar5;
            puVar14[4] = uVar6;
            puVar14[5] = uVar7;
            puVar14[6] = uVar8;
            puVar14[7] = uVar9;
            *puVar14 = 34359738376;
            new (local_90) render::Texture::Desc();
            local_40->Register(field_8, "AvgLumRT8x8", 3553, local_110, 1, (Desc*)local_90, 0, 1);
            puVar1 = field_32;
            shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)puVar1,
                                                         (shared_ptr*)local_40);
            local_40->~shared_ptr();
            lVar15 = puVar1->end();
            if (lVar15 != 0) {
                local_90._64_8_ = puVar1;
                new (local_110) std::array<render::Texture::Desc, 2ul>();
                pRVar11 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)this_00);
                pvVar12 = (vector<render::Texture*,
                                  eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                              pRVar11->GetColourTargetTextures();
                puVar13 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar12, 0);
                puVar13 = (undefined8*)(*puVar13)->second();
                puVar14 = (undefined8*)std::array<render::Texture::Desc, 2ul>::operator[]((ulong)local_110);
                uVar3 = puVar13[1];
                uVar4 = puVar13[2];
                uVar5 = puVar13[3];
                uVar6 = puVar13[4];
                uVar7 = puVar13[5];
                uVar8 = puVar13[6];
                uVar9 = puVar13[7];
                *puVar14 = *puVar13;
                puVar14[1] = uVar3;
                puVar14[2] = uVar4;
                puVar14[3] = uVar5;
                puVar14[4] = uVar6;
                puVar14[5] = uVar7;
                puVar14[6] = uVar8;
                puVar14[7] = uVar9;
                new (local_90) render::Texture::Desc();
                local_40->Register(field_8, "AdaptedLum0RT", 3553, local_110, 1, (Desc*)local_90, 0, 1);
                puVar1 = field_64;
                shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)puVar1,
                                                             (shared_ptr*)local_40);
                local_40->~shared_ptr();
                lVar15 = puVar1->end();
                if (lVar15 != 0) {
                    local_48 = (shared_ptr<render::RenderTargets>*)puVar1;
                    local_40->Register(field_8, "AdaptedLum1RT", 3553, local_110, 1, local_90, 0, 1);
                    puVar1 = field_80;
                    shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)puVar1,
                                                                 (shared_ptr*)local_40);
                    local_40->~shared_ptr();
                    lVar15 = puVar1->end();
                    uVar3 = local_90._64_8_;
                    if (lVar15 != 0) {
                        pRVar11 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                            (shared_ptr<render::RenderTargets>*)local_90._64_8_);
                        pvVar12 = (vector<render::Texture*,
                                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                      pRVar11->GetColourTargetTextures();
                        puVar13 = (undefined8*)eastl::vector<
                            render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](pvVar12, 0);
                        plVar2 = (long*)*puVar13;
                        lVar15 = pvVar12->Instance();
                        (**(code**)(*plVar2 + 24))(plVar2, lVar15 + 208, 0);
                        pRVar11 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                            (shared_ptr<render::RenderTargets>*)this_00);
                        pvVar12 = (vector<render::Texture*,
                                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                      pRVar11->GetColourTargetTextures();
                        puVar13 = (undefined8*)eastl::vector<
                            render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](pvVar12, 0);
                        plVar2 = (long*)*puVar13;
                        lVar15 = pvVar12->Instance();
                        (**(code**)(*plVar2 + 24))(plVar2, lVar15 + 80, 0);
                        pRVar11 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(local_48);
                        pvVar12 = (vector<render::Texture*,
                                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                      pRVar11->GetColourTargetTextures();
                        puVar13 = (undefined8*)eastl::vector<
                            render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](pvVar12, 0);
                        plVar2 = (long*)*puVar13;
                        lVar15 = pvVar12->Instance();
                        (**(code**)(*plVar2 + 24))(plVar2, lVar15 + 80, 0);
                        pRVar11 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                            (shared_ptr<render::RenderTargets>*)puVar1);
                        pvVar12 = (vector<render::Texture*,
                                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                      pRVar11->GetColourTargetTextures();
                        puVar13 = (undefined8*)eastl::vector<
                            render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](pvVar12, 0);
                        plVar2 = (long*)*puVar13;
                        lVar15 = pvVar12->Instance();
                        (**(code**)(*plVar2 + 24))(plVar2, lVar15 + 80, 0);
                        pRVar11 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                            (shared_ptr<render::RenderTargets>*)uVar3);
                        lVar15 = pRVar11->GetDepthStencilTargetTexture();
                        if (lVar15 != 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("m_AvgLuminanceRT8x8->GetDepthStencilTargetTexture() == nullptr",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "postprocess/filters/AvgLuminanceFilterCompute.cpp",
                                      400, (char*)0);
                        }
                        pRVar11 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                            (shared_ptr<render::RenderTargets>*)this_00);
                        lVar15 = pRVar11->GetDepthStencilTargetTexture();
                        if (lVar15 != 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("m_AvgLuminanceRT1x1->GetDepthStencilTargetTexture() == nullptr",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "postprocess/filters/AvgLuminanceFilterCompute.cpp",
                                      401, (char*)0);
                        }
                        pRVar11 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(local_48);
                        lVar15 = pRVar11->GetDepthStencilTargetTexture();
                        if (lVar15 != 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("m_CurrAdaptedLuminanceRT->GetDepthStencilTargetTexture() == nullptr",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "postprocess/filters/AvgLuminanceFilterCompute.cpp",
                                      402, (char*)0);
                        }
                        pRVar11 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                            (shared_ptr<render::RenderTargets>*)puVar1);
                        lVar15 = pRVar11->GetDepthStencilTargetTexture();
                        if (lVar15 != 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("m_PrevAdaptedLuminanceRT->GetDepthStencilTargetTexture() == nullptr",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "postprocess/filters/AvgLuminanceFilterCompute.cpp",
                                      403, (char*)0);
                        }
                        field_28 = 1;
                        return 1;
                    }
                }
            }
        }
        return 0;
    }

    // 0x1009b5dd0, 64 bytes, placed by class name
    // AvgLuminanceFilterCompute::Destroy()
    void AvgLuminanceFilterCompute::Destroy() {
        ShaderProgramManager* this_00;

        (*(code*)field_0[4])();
        this_00 = (ShaderProgramManager*)((AvgLuminanceFilterCompute*)this)->Instance();
        this_00->Unregister(field_96);
        this_00->Unregister(field_112);
    }

    // 0x1009b5e10, 2480 bytes, placed by class name
    // AvgLuminanceFilterCompute::CalcAvgAndAdaptedLuminance(render::RenderContext&, render::Texture const&, float, float, graphics::ViewRenderTargets*)
    void AvgLuminanceFilterCompute::CalcAvgAndAdaptedLuminance(RenderContext* param_1, Texture* param_2, float param_3,
                                                               float param_4, ViewRenderTargets* param_5) {
        undefined1* this_00;
        undefined1* this_01;
        undefined8 uVar1;
        Texture* pTVar2;
        undefined8 uVar3;
        RenderContext* this_02;
        char cVar4;
        int iVar5;
        int iVar6;
        undefined4 uVar7;
        int iVar8;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_03;
        long lVar9;
        RenderTargets* pRVar10;
        ComputePipelineState* pCVar11;
        ShaderProgram* pSVar12;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar13;
        undefined8* puVar14;
        int* piVar15;
        Vector4T* pVVar16;
        HashedString* this_04;
        HashedString HVar17;
        HashedString HVar18;
        DispatchCallState local_a8;
        shared_ptr<render::RenderTargets>* local_90;
        RenderContext* local_88;
        Texture* local_80;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_78;
        int local_70;
        int local_6c;
        HashedString local_68[2];
        uint local_3c;
        uint local_38;
        int local_34;

        local_88 = param_1;
        local_80 = param_2;
        if (param_5 == (ViewRenderTargets*)0) {
            eastl::swap<shared_ptr<render::RenderTargets>>((shared_ptr*)field_80, (shared_ptr*)field_64);
        LAB_1009b5e83:
            local_90 = (shared_ptr<render::RenderTargets>*)field_48;
        } else {
            cVar4 = EnsureRenderTargetsAvailable(param_5);
            if (cVar4 == '\0') {
                return;
            }
            HVar17.field_8 = *(undefined8*)PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588;
            HVar17.field_0 = (char*)param_5;
            HVar18.field_8 = *(undefined8*)PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578;
            HVar18.field_0 = *(char**)(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588 + 8);
            graphics::ViewRenderTargets::Swap(HVar17, HVar18);
            if (param_5 == (ViewRenderTargets*)0)
                goto LAB_1009b5e83;
            local_90 = (shared_ptr<render::RenderTargets>*)param_5->Get(
                *(HashedString*)PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580);
        }
        if (param_5 == (ViewRenderTargets*)0) {
            this_03 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_64;
        } else {
            this_03 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)param_5->Get(
                *(HashedString*)PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578);
            if (param_5 != (ViewRenderTargets*)0) {
                local_78 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)param_5->Get(
                    *(HashedString*)PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588);
                goto LAB_1009b5f00;
            }
        }
        local_78 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_80;
    LAB_1009b5f00:
        if (field_28 != '\0') {
            this_04 = local_68;
            new (local_68) ImVec4(1.0, 1.0, 1.0, 1.0);
            lVar9 = this_04->Instance();
            this_02 = local_88;
            local_88->SetBlendState((BlendState*)(lVar9 + 1524));
            pRVar10 =
                (RenderTargets*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_03);
            this_02->ClearRenderTargets(pRVar10, local_68, 1);
            pRVar10 =
                (RenderTargets*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_78);
            this_02->ClearRenderTargets(pRVar10, local_68, 1);
            field_28 = 0;
        }
        new (&local_a8) render::DispatchCallState();
        pCVar11 = (ComputePipelineState*)local_a8.GetComputePipelineState();
        this_00 = field_96;
        pSVar12 = (ShaderProgram*)this_00->end();
        pCVar11->SetShaderProgram(pSVar12);
        pSVar12 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_00);
        HashedString::HashedString(local_68, "uSampleOffsets4x4");
        local_3c = pSVar12->GetUniformLocationIndex(local_68);
        this_01 = field_112;
        pSVar12 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_01);
        HashedString::HashedString(local_68, "uColourScale");
        local_70 = pSVar12->GetUniformLocationIndex(local_68);
        pSVar12 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_01);
        HashedString::HashedString(local_68, "uInverseColourScale");
        local_6c = pSVar12->GetUniformLocationIndex(local_68);
        pSVar12 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_00);
        HashedString::HashedString(local_68, "sSourceTex");
        local_38 = pSVar12->GetUniformLocationIndex(local_68);
        pSVar12 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_00);
        HashedString::HashedString(local_68, "uTargetAvgLumTex");
        local_34 = pSVar12->GetUniformBindingIndex(local_68);
        if ((int)local_38 < 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("srcTextureSamplerSlot >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterCompute.cpp",
                      136, (char*)0);
        }
        if ((int)local_3c < 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("sampleOffsetsSlot >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterCompute.cpp",
                      137, (char*)0);
        }
        if (local_34 < 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("destTextureSlot >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterCompute.cpp",
                      138, (char*)0);
        }
        pRVar10 =
            (RenderTargets*)shared_ptr<render::RenderTargets>::operator->((shared_ptr<render::RenderTargets>*)field_32);
        pvVar13 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      pRVar10->GetColourTargetTextures();
        puVar14 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar13, 0);
        uVar1 = *puVar14;
        new (local_68) std::array<math::Vector4T<float>, 2ul>();
        pTVar2 = local_80;
        piVar15 = (int*)local_80->second();
        iVar5 = *piVar15;
        lVar9 = pTVar2->second();
        Calc4x4OffsetsBilinear((array*)local_68, iVar5, *(int*)(lVar9 + 4));
        pSVar12 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_00);
        pVVar16 = (Vector4T*)local_68->data();
        pSVar12->SetShaderConstVector4(local_3c, 2, pVVar16, 1);
        pSVar12 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_00);
        pSVar12->SetShaderConstFloat1(local_70, 1.0);
        pSVar12 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_00);
        pSVar12->SetShaderConstFloat1(local_6c, 1.0);
        pCVar11 = (ComputePipelineState*)local_a8.GetComputePipelineState();
        pCVar11->SetCSTextureSamplerPair(0, local_80, local_38, 0, false);
        pCVar11 = (ComputePipelineState*)local_a8.GetComputePipelineState();
        pCVar11->SetCSTextureImage(local_34, uVar1, 35001);
        local_88->DispatchCompute(&local_a8, 8, 8, 1);
        local_a8.~DispatchCallState();
        local_88->MemoryBarrier(8);
        new (&local_a8) render::DispatchCallState();
        pCVar11 = (ComputePipelineState*)local_a8.GetComputePipelineState();
        pSVar12 = (ShaderProgram*)this_01->end();
        pCVar11->SetShaderProgram(pSVar12);
        pSVar12 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_01);
        HashedString::HashedString(local_68, "uSampleOffsets4x4");
        iVar5 = pSVar12->GetUniformLocationIndex(local_68);
        pSVar12 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_01);
        HashedString::HashedString(local_68, "uTimeDelta");
        iVar6 = pSVar12->GetUniformLocationIndex(local_68);
        pSVar12 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_01);
        HashedString::HashedString(local_68, "uExposureSpeedMul");
        uVar7 = pSVar12->GetUniformLocationIndex(local_68);
        local_80 = (Texture*)CONCAT44(local_80._4_4_, uVar7);
        pSVar12 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_01);
        HashedString::HashedString(local_68, "uColourScale");
        local_70 = pSVar12->GetUniformLocationIndex(local_68);
        pSVar12 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_01);
        HashedString::HashedString(local_68, "uInverseColourScale");
        local_6c = pSVar12->GetUniformLocationIndex(local_68);
        pSVar12 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_01);
        HashedString::HashedString(local_68, "sSourceTex");
        local_3c = pSVar12->GetUniformLocationIndex(local_68);
        pSVar12 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_01);
        HashedString::HashedString(local_68, "uPrevAdaptedLumTex");
        local_38 = pSVar12->GetUniformBindingIndex(local_68);
        pSVar12 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_01);
        HashedString::HashedString(local_68, "uTargetAvgLumTex");
        local_34 = pSVar12->GetUniformBindingIndex(local_68);
        pSVar12 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_01);
        HashedString::HashedString(local_68, "uTargetAdaptedLumTex");
        iVar8 = pSVar12->GetUniformBindingIndex(local_68);
        if (iVar5 < 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("sampleOffsetsSlot >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterCompute.cpp",
                      211, (char*)0);
        }
        if (iVar6 < 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("timeDeltaSlot >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterCompute.cpp",
                      212, (char*)0);
        }
        if ((int)local_80 < 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("exposureSpeedMulSlot >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterCompute.cpp",
                      213, (char*)0);
        }
        if ((int)local_3c < 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("srcAvgLumTextureSamplerSlot >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterCompute.cpp",
                      215, (char*)0);
        }
        if ((int)local_38 < 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("prevAdaptedLumTexSlot >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterCompute.cpp",
                      216, (char*)0);
        }
        if (local_34 < 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("avgLumTextSlot >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterCompute.cpp",
                      217, (char*)0);
        }
        if (iVar8 < 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("curAdaptedLumTexSlot >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterCompute.cpp",
                      218, (char*)0);
        }
        pRVar10 =
            (RenderTargets*)shared_ptr<render::RenderTargets>::operator->((shared_ptr<render::RenderTargets>*)field_32);
        pvVar13 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      pRVar10->GetColourTargetTextures();
        puVar14 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar13, 0);
        pTVar2 = (Texture*)*puVar14;
        pRVar10 =
            (RenderTargets*)shared_ptr<render::RenderTargets>::operator->((shared_ptr<render::RenderTargets>*)local_78);
        pvVar13 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      pRVar10->GetColourTargetTextures();
        puVar14 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar13, 0);
        local_78 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)*puVar14;
        pRVar10 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(local_90);
        pvVar13 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      pRVar10->GetColourTargetTextures();
        puVar14 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar13, 0);
        uVar1 = *puVar14;
        pRVar10 =
            (RenderTargets*)shared_ptr<render::RenderTargets>::operator->((shared_ptr<render::RenderTargets>*)this_03);
        pvVar13 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      pRVar10->GetColourTargetTextures();
        puVar14 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar13, 0);
        local_90 = (shared_ptr<render::RenderTargets>*)CONCAT44(local_90._4_4_, iVar8);
        uVar3 = *puVar14;
        new (local_68) std::array<math::Vector4T<float>, 2ul>();
        piVar15 = (int*)pTVar2->second();
        iVar8 = *piVar15;
        lVar9 = pTVar2->second();
        Calc4x4OffsetsBilinear((array*)local_68, iVar8, *(int*)(lVar9 + 4));
        pSVar12 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_01);
        pVVar16 = (Vector4T*)local_68->data();
        pSVar12->SetShaderConstVector4(iVar5, 2, pVVar16, 1);
        pSVar12 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_01);
        pSVar12->SetShaderConstFloat1(iVar6, param_3);
        pSVar12 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_01);
        pSVar12->SetShaderConstFloat1((int)local_80, 1.0 / param_4);
        pSVar12 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_01);
        pSVar12->SetShaderConstFloat1(local_70, 1.0);
        pSVar12 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_01);
        pSVar12->SetShaderConstFloat1(local_6c, 1.0);
        pCVar11 = (ComputePipelineState*)local_a8.GetComputePipelineState();
        pCVar11->SetCSTextureSamplerPair(0, pTVar2, local_3c, 0, false);
        pCVar11 = (ComputePipelineState*)local_a8.GetComputePipelineState();
        pCVar11->SetCSTextureImage(local_38, local_78, 35002);
        pCVar11 = (ComputePipelineState*)local_a8.GetComputePipelineState();
        pCVar11->SetCSTextureImage(local_34, uVar1, 35001);
        pCVar11 = (ComputePipelineState*)local_a8.GetComputePipelineState();
        pCVar11->SetCSTextureImage((ulong)local_90 & 4294967295, uVar3, 35001);
        local_88->DispatchCompute(&local_a8, 1, 1, 1);
        local_a8.~DispatchCallState();
        local_88->MemoryBarrier(40);
    }

    // 0x1009b6900, 752 bytes, placed by class name
    // AvgLuminanceFilterCompute::RenderDebug(render::Viewport const&) const
    void AvgLuminanceFilterCompute::RenderDebug(Viewport* param_1) {
        undefined8 uVar1;
        int iVar2;
        long* plVar3;
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
            pRVar4 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)field_48);
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
                (shared_ptr<render::RenderTargets>*)field_64);
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
                (shared_ptr<render::RenderTargets>*)field_80);
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

    // 0x1009b6bf0, 96 bytes, placed by class name
    // AvgLuminanceFilterCompute::GetAvgLuminanceTex() const
    undefined8 AvgLuminanceFilterCompute::GetAvgLuminanceTex() {
        RenderTargets* this_00;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_01;
        undefined8* puVar1;

        if (field_24 == 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_shaderOutputFormat != LuminanceShaderOutputFormat::DEPTH",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterCompute.cpp",
                      301, (char*)0);
        }
        this_00 =
            (RenderTargets*)shared_ptr<render::RenderTargets>::operator->((shared_ptr<render::RenderTargets>*)field_48);
        this_01 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      this_00->GetColourTargetTextures();
        puVar1 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](this_01, 0);
        return *puVar1;
    }

    // 0x1009b6c50, 96 bytes, placed by class name
    // AvgLuminanceFilterCompute::GetAdaptedLuminanceTex() const
    undefined8 AvgLuminanceFilterCompute::GetAdaptedLuminanceTex() {
        RenderTargets* this_00;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_01;
        undefined8* puVar1;

        if (field_24 == 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_shaderOutputFormat != LuminanceShaderOutputFormat::DEPTH",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterCompute.cpp",
                      307, (char*)0);
        }
        this_00 =
            (RenderTargets*)shared_ptr<render::RenderTargets>::operator->((shared_ptr<render::RenderTargets>*)field_64);
        this_01 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      this_00->GetColourTargetTextures();
        puVar1 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](this_01, 0);
        return *puVar1;
    }

    // 0x1009b6cb0, 80 bytes, placed by class name
    // AvgLuminanceFilterCompute::DestroyRenderTargets()
    void AvgLuminanceFilterCompute::DestroyRenderTargets() {
        (field_8, (shared_ptr*)field_32)->Unregister();
        (field_8, (shared_ptr*)field_48)->Unregister();
        (field_8, (shared_ptr*)field_80)->Unregister();
        (field_8, (shared_ptr*)field_64)->Unregister();
    }

} // namespace jag::postprocess

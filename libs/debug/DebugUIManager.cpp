// libs/debug/DebugUIManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.debug

#include "DebugUIManager.h"

namespace jag::debug {
    // 0x100720690, 144 bytes, placed by class name and debug map
    // DebugUIManager::TransferOwnership(std::unique_ptr<DebugUIElement, std::default_delete<DebugUIElement> >)
    /* DebugUIManager::TransferOwnership(std::unique_ptr<DebugUIElement,
   std::default_delete<DebugUIElement> >) */

    void DebugUIManager::TransferOwnership(unique_ptr* param_2) {
        lock_guard<std::mutex> local_20[8];

        if (!std::unique_ptr::operator_cast_to_bool(param_2)) {
            /* WARNING: Subroutine does not return */
            LogAssert("element",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIManager.cpp",
                      264, (char*)0);
        }
        std::lock_guard<std::mutex>::lock_guard(local_20, (mutex*)&field_3520);
        eastl::vector<std::unique_ptr<DebugUIElement, std::default_delete<DebugUIElement>>, eastl::allocator>::
            emplace_back<std::unique_ptr<DebugUIElement, std::default_delete<DebugUIElement>>>(
                (vector<std::unique_ptr<DebugUIElement, std::default_delete<DebugUIElement>>,
                        eastl::allocator>*)&field_3616,
                param_2);
        local_20->~lock_guard();
    }

    // 0x1007207a0, 224 bytes, placed by class name
    // DebugUIManager::Register(DebugUIElement*)
    void DebugUIManager::Register(DebugUIElement* param_1) {
        function** ppfVar1;
        function** ppfVar2;
        undefined1* this_00;
        lock_guard<std::mutex> local_28[8];
        DebugUIElement* local_20;

        local_20 = param_1;
        if (param_1 == (DebugUIElement*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("element",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIManager.cpp",
                      274, (char*)0);
        }
        std::lock_guard<std::mutex>::lock_guard(local_28, (mutex*)&field_3520);
        this_00 = &field_3584;
        ppfVar1 = (function**)this_00->HeapBeginPtr();
        ppfVar2 = (function**)this_00->end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, (function**)&local_20);
        ppfVar2 = (function**)this_00->end();
        if (ppfVar1 != ppfVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("eastl::find(m_uiElements.begin(), m_uiElements.end(), element) == m_uiElements.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIManager.cpp",
                      277, (char*)0);
        }
        this_00->push_back(&local_20);
        (**(code**)(local_20->field_0 + 40))(local_20, 1);
        local_28->~lock_guard();
    }

    // 0x1007208d0, 320 bytes, placed by class name
    // DebugUIManager::Unregister(DebugUIElement*)
    void DebugUIManager::Unregister(DebugUIElement* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        unique_ptr* puVar3;
        unique_ptr* puVar4;
        function** ppfVar5;
        function** ppfVar6;
        DebugUIElement** ppDVar7;
        DebugUIElement** ppDVar8;
        undefined1* puVar9;
        lock_guard<std::mutex> local_30[8];
        DebugUIElement* local_28;

        local_28 = param_1;
        if (param_1 == (DebugUIElement*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("element",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIManager.cpp",
                      284, (char*)0);
        }
        std::lock_guard<std::mutex>::lock_guard(local_30, (mutex*)&field_3520);
        puVar9 = &field_3616;
        uVar1 = puVar9->HeapBeginPtr();
        uVar2 = puVar9->end();
        puVar3 = eastl::find<std::unique_ptr<DebugUIElement, std::default_delete<DebugUIElement>>*, DebugUIElement*,
                             (DebugUIElement*)->Unregister()::__0>(uVar1, uVar2, &local_28);
        puVar4 = (unique_ptr*)puVar9->end();
        if (puVar3 != puVar4) {
            /* WARNING: Subroutine does not return */
            LogAssert("eastl::find(m_ownedUIElements.begin(), m_ownedUIElements.end(), element, ownedMatchFn) == "
                      "m_ownedUIElements.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIManager.cpp",
                      290, (char*)0);
        }
        puVar9 = &field_3584;
        ppfVar5 = (function**)puVar9->HeapBeginPtr();
        ppfVar6 = (function**)puVar9->end();
        ppDVar7 = (DebugUIElement**)
            eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
                ppfVar5, ppfVar6, (function**)&local_28);
        ppDVar8 = (DebugUIElement**)puVar9->end();
        if (ppDVar7 == ppDVar8) {
            /* WARNING: Subroutine does not return */
            LogAssert("matchIt != m_uiElements.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIManager.cpp",
                      293, (char*)0);
        }
        puVar9->erase(ppDVar7);
        (**(code**)(local_28->field_0 + 40))(local_28, 0);
        local_30->~lock_guard();
    }

    // 0x100720a10, 1376 bytes, placed by neighbouring functions
    // KeyToImGuiKey(int)
    undefined8 KeyToImGuiKey(int param_1) {
        undefined8 uVar1;

        switch (param_1) {
        case 0:
            return 546;
        case 1:
            return 564;
        case 2:
            return 549;
        case 3:
            return 551;
        case 4:
            return 553;
        case 5:
            return 552;
        case 6:
            return 571;
        case 7:
            return 569;
        case 8:
            return 548;
        case 9:
            return 567;
        case 10:
        case 24:
        case 50:
        case 52:
        case 60:
        case 61:
        case 62:
        case 63:
        case 64:
        case 66:
        case 68:
        case 70:
        case 71:
        case 72:
        case 73:
        case 74:
        case 76:
        case 77:
        case 79:
        case 80:
        case 81:
        case 90:
            goto switchD_100720a2a_caseD_a;
        case 11:
            return 547;
        case 12:
            return 562;
        case 13:
            return 568;
        case 14:
            return 550;
        case 15:
            return 563;
        case 16:
            return 570;
        case 17:
            return 565;
        case 18:
            return 537;
        case 19:
            return 538;
        case 20:
            return 539;
        case 21:
            return 540;
        case 22:
            return 542;
        case 23:
            return 541;
        case 25:
            return 545;
        case 26:
            return 543;
        case 27:
            return 586;
        case 28:
            return 544;
        case 29:
            return 536;
        case 30:
            return 593;
        case 31:
            return 560;
        case 32:
            return 566;
        case 33:
            return 591;
        case 34:
            return 554;
        case 35:
            return 561;
        case 36:
            return 525;
        case 37:
            return 557;
        case 38:
            return 555;
        case 39:
            return 584;
        case 40:
            return 556;
        case 41:
            return 589;
        case 42:
            return 592;
        case 43:
            return 585;
        case 44:
            return 588;
        case 45:
            return 559;
        case 46:
            return 558;
        case 47:
            return 587;
        case 48:
            return 512;
        case 49:
            return 524;
        case 51:
            return 523;
        case 53:
            return 526;
        case 54:
            return 534;
        case 55:
            return 530;
        case 56:
            return 528;
        case 57:
            return 595;
        case 58:
            return 529;
        case 59:
            return 527;
        case 65:
            return 610;
        case 67:
            return 612;
        case 69:
            return 614;
        case 75:
            return 611;
        case 78:
            return 613;
        case 82:
            return 600;
        case 83:
            return 601;
        case 84:
            return 602;
        case 85:
            return 603;
        case 86:
            return 604;
        case 87:
            return 605;
        case 88:
            return 606;
        case 89:
            return 607;
        case 91:
            return 608;
        case 92:
            return 609;
        case -1:
            return 590;
        default:
            uVar1 = 513;
            switch (param_1) {
            case 63232:
                return 515;
            case 63233:
                return 516;
            case 63234:
                goto switchD_100720a51_caseD_f702;
            case 63235:
                return 514;
            case 63236:
                return 572;
            case 63237:
                return 573;
            case 63238:
                return 574;
            case 63239:
                return 575;
            case 63240:
                return 576;
            case 63241:
                return 577;
            case 63242:
                return 578;
            case 63243:
                return 579;
            case 63244:
                return 580;
            case 63245:
                return 581;
            case 63246:
                return 582;
            case 63247:
                return 583;
            case 63248:
            case 63249:
            case 63250:
            case 63251:
            case 63252:
            case 63253:
            case 63254:
            case 63255:
            case 63256:
            case 63257:
            case 63258:
            case 63259:
            case 63260:
            case 63261:
            case 63262:
            case 63263:
            case 63264:
            case 63265:
            case 63266:
            case 63267:
            case 63268:
            case 63269:
            case 63270:
            case 63274:
            case 63281:
            case 63282:
            case 63283:
            case 63284:
            case 63286:
            case 63287:
            case 63288:
                break;
            case 63271:
                return 521;
            case 63272:
                return 522;
            case 63273:
                return 519;
            case 63275:
                return 520;
            case 63276:
                return 517;
            case 63277:
                return 518;
            case 63278:
                return 598;
            case 63279:
                return 596;
            case 63280:
                return 599;
            case 63285:
                return 535;
            case 63289:
                return 597;
            default:
                if (param_1 == 7331) {
                    return 594;
                }
            }
        switchD_100720a2a_caseD_a:
            uVar1 = 0;
        switchD_100720a51_caseD_f702:
            return uVar1;
        }
    }

    // 0x100720f70, 544 bytes, placed by class name
    // DebugUIManager::CreateRenderingResources()
    undefined4 DebugUIManager::CreateRenderingResources() {
        undefined1* this_00;
        Layout* this_01;
        char cVar1;
        int iVar2;
        undefined4 uVar3;
        long lVar4;
        ImGuiStyle* this_02;
        Texture2D* this_03;
        ulong uVar5;
        VertexElementDesc local_100;
        VertexElementDesc local_d8;
        VertexElementDesc local_b0;
        undefined1 local_88[64];
        uchar* local_48;
        uchar* local_30;
        int local_28;
        int local_24;

        lVar4 = ImGui::GetIO();
        *(undefined4*)(lVar4 + 80) = 1065353216;
        this_02 = (ImGuiStyle*)ImGui::GetStyle();
        ImGuiStyle::ScaleAllSizes(this_02, 1.0);
        ImFontAtlas::GetTexDataAsRGBA32(*(ImFontAtlas**)(lVar4 + 72), &local_30, &local_28, &local_24, (int*)0);
        new (&local_48) render::ResourceDataT<unsigned char const>(0, 0, 0, false);
        local_48 = local_30;
        new (local_88) render::Texture::Desc();
        local_88._0_4_ = local_28;
        local_88._4_4_ = local_24;
        local_88._12_4_ = 8;
        make_shared<render::Texture2D, char const(&)[31]>((jag*)&local_100, "IMGUI Font");
        this_00 = &field_3232;
        shared_ptr<render::Texture2D>::operator=((shared_ptr<render::Texture2D>*)this_00, (shared_ptr*)&local_100);
        local_100.~shared_ptr();
        this_03 = (Texture2D*)shared_ptr<render::Texture2D>::operator->((shared_ptr<render::Texture2D>*)this_00);
        cVar1 = this_03->Create(local_88, (ResourceDataT*)&local_48, 0);
        if (cVar1 != '\0') {
            this_01 = *(Layout**)(lVar4 + 72);
            uVar5 = this_00->end();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                Layout::SetHeapSize(this_01, uVar5);
            new (&local_100) render::VertexElementDesc(0, "aVertexPosition2D", 1, 0, 0, 0);
            new (&local_d8) render::VertexElementDesc(0, "aTextureUV", 1, 0, 5, 0);
            new (&local_b0) render::VertexElementDesc(0, "aVertexColour", 12, 1, 10, 0);
            uVar5 = local_100.data();
            cVar1 = render::VertexDeclaration::Create((VertexElementDesc*)&field_3248, uVar5, (void*)3, 0);
            if (cVar1 != '\0') {
                iVar2 = (&field_3248, 0)->GetVertexStride();
                if (iVar2 != 20) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_vertexDeclaration.GetVertexStride() == sizeof(Vertex)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/"
                              "DebugUIManager.cpp",
                              168, (char*)0);
                }
                uVar3 = CreateShader(this);
                goto LAB_100721148;
            }
        }
        uVar3 = 0;
    LAB_100721148:
        local_48.~ResourceDataT();
        return uVar3;
    }

    // 0x100721240, 448 bytes, placed by class name
    // DebugUIManager::CreateShader()
    ulong DebugUIManager::CreateShader() {
        char* pcVar1;
        char* pcVar2;
        VertexDeclaration* pVVar3;
        long lVar4;
        ostream* this_00;
        undefined1 local_290[280];
        undefined1 local_178[280];
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_60[24];
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_48[24];
        shared_ptr local_30;

        new (local_290) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        std::operator<<(
            (ostream*)(local_290 + 16),
            "\n            uniform mat4 uProjectionMatrix;\n\n            attribute vec2 aVertexPosition2D;\n          "
            "  attribute vec2 aTextureUV;\n            attribute vec4 aVertexColour;\n\n            out vec4 "
            "vColour;\n            out vec2 vUV;\n\n            void main()\n            {\n                vColour = "
            "aVertexColour.xyzw;\n                vUV = aTextureUV;\n\n                gl_Position = uProjectionMatrix "
            "* vec4(aVertexPosition2D, 1.0, 1.0);\n            }\n\n            ");
        new (local_178) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        this_00 = (ostream*)(local_178 + 16);
        std::operator<<(this_00,
                        "\n            in vec4 vColour;\n            in vec2 vUV;\n\n            uniform sampler2D "
                        "uDiffuseMap;\n\n            void main()\n            {\n                gl_FragColor = "
                        "texture2D(uDiffuseMap, vUV) * vColour;\n            }\n\n            ");
        pcVar1 = (char*)this_00->Instance();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_60);
        pcVar2 = (char*)local_60->c_str();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_48);
        pVVar3 = (VertexDeclaration*)local_48->c_str();
        local_30.RegisterFromSourceString(pcVar1, pcVar2, pVVar3, (char)this + 176);
        shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)field_3216, &local_30);
        local_30.~shared_ptr();
        local_48->~basic_string();
        local_60->~basic_string();
        lVar4 = field_3216->end();
        local_178->~PixelShaderSourceStream();
        local_290->~VertexShaderSourceStream();
        return CONCAT71((int7)((ulong)pcVar2 >> 8), lVar4 != 0) & 4294967295;
    }

    // 0x100721400, 176 bytes, placed by class name
    // DebugUIManager::NotifyFrameStart(float, int, int, math::Rect<int> const&)
    void DebugUIManager::NotifyFrameStart(float param_1, int param_2, int param_3, Rect* param_4) {
        int iVar1;
        long lVar2;
        undefined8 local_38;
        float local_2c;

        local_2c = param_1;
        lVar2 = ImGui::GetIO();
        new (&local_38) math::Point<float>((float)param_2, (float)param_3);
        *(undefined8*)(lVar2 + 8) = local_38;
        *(float*)(lVar2 + 16) = local_2c;
        iVar1 = param_4->GetX();
        local_2c = (float)iVar1;
        iVar1 = param_4->GetZ();
        new (&local_38) math::Point<float>(local_2c, (float)iVar1);
        lVar2 = ImGui::GetStyle();
        *(undefined8*)(lVar2 + 176) = local_38;
        ImGui::NewFrame();
        field_3652 = 1;
    }

    // 0x1007214b0, 320 bytes, placed by class name
    // DebugUIManager::MainDraw(render::RenderContext*, int, int)
    void DebugUIManager::MainDraw(RenderContext* param_1, int param_2, int param_3) {
        char cVar1;
        undefined8* puVar2;
        undefined8* puVar3;
        ImDrawData* pIVar4;
        float extraout_XMM0_Db;

        if (field_3652 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_frameStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIManager.cpp",
                      197, (char*)0);
        }
        if ((field_3653 != '\0') && (cVar1 = ImGui::BeginMainMenuBar(), cVar1 != '\0')) {
            puVar2 = (undefined8*)(&field_3584)->HeapBeginPtr();
            puVar3 = (undefined8*)(&field_3584)->end();
            for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
                (**(code**)(*(long*)*puVar2 + 16))();
            }
            ImGui::GetWindowSize();
            m_mainMenuHeight = (int)extraout_XMM0_Db;
            ImGui::EndMainMenuBar();
        }
        puVar2 = (undefined8*)(&field_3584)->HeapBeginPtr();
        puVar3 = (undefined8*)(&field_3584)->end();
        for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
            (**(code**)(*(long*)*puVar2 + 24))();
        }
        ImGui::Render();
        pIVar4 = (ImDrawData*)ImGui::GetDrawData();
        if (param_1 == (RenderContext*)0) {
            DeferToRenderThread(this, pIVar4);
        } else {
            RenderImDrawData(this, param_1, param_2, param_3, pIVar4);
        }
        field_3652 = 0;
    }

    // 0x1007215f0, 1344 bytes, placed by class name
    // DebugUIManager::RenderImDrawData(render::RenderContext*, int, int, ImDrawData*)
    void DebugUIManager::RenderImDrawData(RenderContext* param_1, int param_2, int param_3, ImDrawData* param_4) {
        undefined1* this_00;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        DynamicBuffer<render::VertexBuffer>* this_02;
        DynamicBuffer<render::IndexBuffer>* this_03;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        DebugUIManager* pDVar1;
        bool bVar2;
        uint uVar3;
        int iVar4;
        undefined8* puVar5;
        RenderPipelineState* this_05;
        long lVar6;
        OutputMergerState* this_06;
        RenderTargets* pRVar7;
        InputAssemblerState* this_07;
        VertexBuffer* pVVar8;
        RenderPipelineState* pRVar9;
        ShaderProgram* pSVar10;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_08;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* pAVar11;
        Rect* pRVar12;
        Texture* pTVar13;
        DrawCallState* this_09;
        float fVar14;
        undefined1 auVar15[16];
        Matrix44T local_178;
        WrapArray<unsigned char> local_130[16];
        DrawCallState local_120;
        DrawCallState local_f0;
        undefined1 local_c0[16];
        HashedString local_b0;
        undefined8* local_a0;
        undefined8* local_98;
        DynamicBuffer<render::VertexBuffer>* local_90;
        DynamicBuffer<render::IndexBuffer>* local_88;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_80;
        RenderContext* local_78;
        float local_6c;
        float local_68;
        float local_64;
        float local_60;
        float local_5c;
        float local_58;
        float local_54;
        float local_50;
        float local_4c;
        DebugUIManager* local_48;
        int local_40;
        int local_3c;
        float local_38;
        float local_34;

        local_80 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_3216;
        local_78 = param_1;
        local_48 = this;
        local_40 = param_3;
        local_3c = param_2;
        bVar2 = local_80->operator_cast_to_bool();
        if (!bVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_shader",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIManager.cpp",
                      547, (char*)0);
        }
        bVar2 = (&local_48->field_3232)->operator_cast_to_bool();
        pDVar1 = local_48;
        if (!bVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_fontTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIManager.cpp",
                      548, (char*)0);
        }
        this_00 = &local_48->field_3344;
        this_00->RotateBuffers();
        (&pDVar1->field_3432)->RotateBuffers();
        local_38 = (float)local_3c;
        local_34 = (float)local_40;
        new (&local_178) math::Matrix44T<float>();
        math::Matrix44OrthographicLH<float>(0, local_38, local_34, 0, 1036831949, 1167867904, &local_178, 0);
        WrapArray<unsigned char>::WrapArray(local_130, *(uchar**)(param_4 + 16), (long)*(int*)(param_4 + 4));
        puVar5 = (undefined8*)local_130->end();
        local_98 = (undefined8*)local_130->end();
        if (puVar5 != local_98) {
            local_48 = (DebugUIManager*)&local_48->field_3248;
            local_90 = (DynamicBuffer<render::VertexBuffer>*)this_00;
            local_88 = (DynamicBuffer<render::IndexBuffer>*)&pDVar1->field_3432;
            do {
                this_03 = local_88;
                this_02 = local_90;
                this_09 = &local_120;
                this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)*puVar5;
                iVar4 = *(int*)(this_01 + 16);
                local_a0 = puVar5;
                local_90->Update(0, *(int*)(this_01 + 32) * 20, *(void**)(this_01 + 40));
                this_03->Update(0, iVar4 * 2, *(void**)(this_01 + 24));
                render::DrawCallState::DrawCallState(this_09);
                this_05 = (RenderPipelineState*)this_09->GetRenderPipelineState();
                auVar15 = this_09->Instance();
                pRVar9 = this_05;
                new (this_05) eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(
                    (EntityHighlight**)(auVar15._0_8_ + 1676), auVar15._8_8_);
                lVar6 = pRVar9->Instance();
                pRVar9 = this_05;
                this_05->SetHeapSize(lVar6 + 1080);
                lVar6 = pRVar9->Instance();
                this_05->SetRasteriserState((RasteriserState*)(lVar6 + 1308));
                new (&local_f0) render::Viewport(0, 0, local_3c, local_40, 0.0, 1.0);
                this_06 = (OutputMergerState*)local_120.GetOutputMergerState();
                render::OutputMergerState::SetViewports((Viewport*)this_06, (uint)&local_f0);
                pRVar7 = (RenderTargets*)local_78->GetBackBuffer();
                this_06->SetRenderTargets(pRVar7);
                this_07 = (InputAssemblerState*)local_120.GetInputAssemblerState();
                pVVar8 = (VertexBuffer*)this_02->CurrentBuffer();
                this_07->SetVertexStreamData(local_48, pVVar8);
                uVar3 = this_03->CurrentBuffer();
                render::InputAssemblerState::SetIndexBuffer((IndexBuffer*)this_07, uVar3);
                pRVar9 = (RenderPipelineState*)local_120.GetRenderPipelineState();
                this_04 = local_80;
                pSVar10 = (ShaderProgram*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                    local_80);
                pRVar9->SetShaderProgram(pSVar10);
                pSVar10 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->(
                    (shared_ptr<render::ShaderProgram>*)this_04);
                new (local_c0) HashedString("uProjectionMatrix");
                pSVar10->SetShaderConstMatrix4(local_c0, 1, &local_178, 1);
                this_08 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                 std::default_delete<LoadingScreenScript::AnimLayer>>,
                                 eastl::allocator>*)
                    eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
                pAVar11 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                 std::default_delete<LoadingScreenScript::AnimLayer>>,
                                 eastl::allocator>*)this_01->end();
                for (; this_08 != pAVar11; this_08 = this_08 + 56) {
                    if ((*(float*)this_08 <= *(float*)(this_08 + 8) && *(float*)(this_08 + 8) != *(float*)this_08) &&
                        (*(float*)(this_08 + 4) <= *(float*)(this_08 + 12) &&
                         *(float*)(this_08 + 12) != *(float*)(this_08 + 4))) {
                        new (&local_f0) render::DrawCallState(&local_120);
                        local_b0.field_0._0_4_ = 0;
                        local_54 = math::Clamp<float>((float*)this_08, (float*)(local_c0 + 16), &local_38);
                        local_6c = local_34 - *(float*)(this_08 + 12);
                        local_68 = 0.0;
                        local_50 = math::Clamp<float>(&local_6c, &local_68, &local_34);
                        local_64 = *(float*)(this_08 + 8) - *(float*)this_08;
                        local_60 = 0.0;
                        local_4c = math::Clamp<float>(&local_64, &local_60, &local_38);
                        local_5c = *(float*)(this_08 + 12) - *(float*)(this_08 + 4);
                        local_58 = 0.0;
                        fVar14 = math::Clamp<float>(&local_5c, &local_58, &local_34);
                        new (local_c0) oldscape::dash3d::GridRect((int)(long)local_54, (int)(long)local_50,
                                                                  (int)(long)local_4c, (int)(long)fVar14);
                        pRVar12 = (Rect*)local_f0.GetOutputMergerState();
                        render::OutputMergerState::SetScissorRects(pRVar12, (uint)local_c0);
                        pRVar9 = (RenderPipelineState*)local_f0.GetRenderPipelineState();
                        pTVar13 = (Texture*)this_08->data();
                        pSVar10 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->(
                            (shared_ptr<render::ShaderProgram>*)local_80);
                        new ((local_c0 + 16)) HashedString("uDiffuseMap");
                        iVar4 = pSVar10->GetConstIndex((HashedString*)(local_c0 + 16));
                        pRVar9->SetPSTextureSamplerPair(0, pTVar13, iVar4, 0, false);
                        local_78->DrawIndexedPrimitives(&local_f0, 4, *(undefined4*)(this_08 + 32),
                                                        *(undefined4*)(this_08 + 28));
                        local_f0.~DrawCallState();
                    }
                }
                local_120.~DrawCallState();
                puVar5 = local_a0 + 1;
            } while (puVar5 != local_98);
        }
    }

    // 0x100721b30, 384 bytes, placed by class name
    // DebugUIManager::DeferToRenderThread(ImDrawData*)
    void DebugUIManager::DeferToRenderThread(ImDrawData* param_1) {
        uint uVar1;
        undefined8 uVar2;
        undefined1 auVar3[16];
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        void* pvVar8;
        undefined8 uVar9;
        ulong uVar10;
        long lVar11;
        undefined4 local_88;
        undefined4 uStack_84;
        undefined4 uStack_80;
        undefined4 uStack_7c;
        ImDrawData local_68[4];
        int local_64;
        void* local_58;
        lock_guard<std::mutex> local_38[8];

        uVar4 = *(undefined8*)param_1;
        uVar5 = *(undefined8*)(param_1 + 8);
        uVar6 = *(undefined8*)(param_1 + 24);
        uVar7 = *(undefined8*)(param_1 + 32);
        uVar2 = *(undefined8*)(param_1 + 40);
        uVar1 = *(uint*)(param_1 + 4);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (long)(int)uVar1;
        uVar10 = 18446744073709551615;
        if (SUB168(auVar3 * ZEXT816(8), 8) == 0) {
            uVar10 = SUB168(auVar3 * ZEXT816(8), 0);
        }
        pvVar8 = operator_new__(uVar10);
        if (0 < (long)(int)uVar1) {
            uVar10 = 0;
            do {
                uVar9 = ImDrawList::CloneOutput(*(ImDrawList**)(*(long*)(param_1 + 16) + uVar10 * 8));
                *(undefined8*)((long)pvVar8 + uVar10 * 8) = uVar9;
                uVar10 = uVar10 + 1;
            } while (uVar1 != uVar10);
        }
        ImDrawData::ImDrawData(local_68);
        local_58 = (void*)0;
        std::lock_guard<std::mutex>::lock_guard(local_38, (mutex*)&field_3520);
        if (field_16 != (void*)0) {
            local_64 = field_4;
            local_58 = field_16;
        }
        field_0 = (int)uVar4;
        field_4 = (int)((ulong)uVar4 >> 32);
        field_8 = uVar5;
        field_16 = pvVar8;
        local_88 = (undefined4)uVar6;
        uStack_84 = (undefined4)((ulong)uVar6 >> 32);
        uStack_80 = (undefined4)uVar7;
        uStack_7c = (undefined4)((ulong)uVar7 >> 32);
        field_24 = local_88;
        field_28 = uStack_84;
        field_32 = uStack_80;
        field_36 = uStack_7c;
        field_40 = uVar2;
        if (field_112 != (void*)0) {
            if (local_58 != (void*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "toFree.CmdLists == nullptr",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIManager.cpp",
                    677, (char*)0);
            }
            local_58 = field_112;
            local_64 = field_100;
            field_112 = (void*)0;
        }
        local_38->~lock_guard();
        if (local_58 != (void*)0) {
            if (0 < local_64) {
                lVar11 = 0;
                do {
                    ImGui::MemFree(*(void**)((long)local_58 + lVar11 * 8));
                    lVar11 = lVar11 + 1;
                } while (lVar11 < local_64);
            }
            if (local_58 != (void*)0) {
                operator_delete__(local_58);
            }
        }
    }

    // 0x100721cb0, 96 bytes, placed by class name
    // DebugUIManager::MainLogic(bool)
    void DebugUIManager::MainLogic(bool param_1) {
        undefined8* puVar1;
        undefined8* puVar2;

        puVar1 = (undefined8*)(&field_3584)->HeapBeginPtr();
        puVar2 = (undefined8*)(&field_3584)->end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            (**(code**)(*(long*)*puVar1 + 32))((long*)*puVar1, param_1);
        }
    }

    // 0x100721d10, 304 bytes, placed by class name
    // DebugUIManager::FlushOwnedUIElements()
    void DebugUIManager::FlushOwnedUIElements() {
        unique_ptr<DebugUIElement, std::default_delete<DebugUIElement>>* this_00;
        unique_ptr<DebugUIElement, std::default_delete<DebugUIElement>>* puVar1;
        long* plVar2;
        function** ppfVar3;
        function** ppfVar4;
        DebugUIElement** ppDVar5;
        DebugUIElement** ppDVar6;
        undefined1* puVar7;
        function* local_48;
        vector<std::unique_ptr<DebugUIElement, std::default_delete<DebugUIElement>>, eastl::allocator>* local_40;
        lock_guard<std::mutex> local_38[8];

        std::lock_guard<std::mutex>::lock_guard(local_38, (mutex*)&field_3520);
        puVar7 = &field_3616;
        this_00 = (unique_ptr<DebugUIElement, std::default_delete<DebugUIElement>>*)puVar7->HeapBeginPtr();
        local_40 =
            (vector<std::unique_ptr<DebugUIElement, std::default_delete<DebugUIElement>>, eastl::allocator>*)puVar7;
        puVar1 = (unique_ptr<DebugUIElement, std::default_delete<DebugUIElement>>*)puVar7->end();
        if (this_00 != puVar1) {
            puVar7 = &field_3584;
            do {
                plVar2 =
                    (long*)std::unique_ptr<DebugUIElement, std::default_delete<DebugUIElement>>::operator->(this_00);
                (**(code**)(*plVar2 + 40))(plVar2, 0);
                ppfVar3 = (function**)puVar7->HeapBeginPtr();
                ppfVar4 = (function**)puVar7->end();
                local_48 =
                    (function*)std::unique_ptr<DebugUIElement, std::default_delete<DebugUIElement>>::get(this_00);
                ppDVar5 = (DebugUIElement**)
                    eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
                        ppfVar3, ppfVar4, &local_48);
                ppDVar6 = (DebugUIElement**)puVar7->end();
                if (ppDVar5 == ppDVar6) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("matchIt != m_uiElements.end()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/"
                              "DebugUIManager.cpp",
                              255, (char*)0);
                }
                puVar7->erase(ppDVar5);
                this_00 = this_00 + 8;
            } while (this_00 != puVar1);
        }
        eastl::vector<std::unique_ptr<DebugUIElement, std::default_delete<DebugUIElement>>, eastl::allocator>::clear(
            local_40);
        local_38->~lock_guard();
    }

    // 0x100722030, 128 bytes, placed by class name
    // DebugUIManager::RegisterInputHandler(input::Input*)
    void DebugUIManager::RegisterInputHandler(Input* param_1) {
        if (param_1 == (Input*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("inputHAL",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIManager.cpp",
                      301, (char*)0);
        }
        if (field_160 != param_1) {
            UnregisterInputHandler(this);
            field_160 = param_1;
            param_1->RegisterInputHandler("0debugui", field_168);
        }
    }

    // 0x1007220b0, 64 bytes, placed by class name
    // DebugUIManager::UnregisterInputHandler()
    void DebugUIManager::UnregisterInputHandler() {
        if (field_160 != (Input*)0) {
            (field_160, "0debugui")->UnregisterInputHandler();
            field_160 = (Input*)0;
        }
    }

    // 0x1007220f0, 1408 bytes, base-object constructor, placed by class name
    // DebugUIManager::DebugUIManager()
    void DebugUIManager::DebugUIManager() {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        undefined1* this_03;
        undefined1* this_04;
        undefined1* this_05;
        undefined1* this_06;
        undefined1* this_07;
        undefined1* this_08;
        undefined1* this_09;
        undefined1* this_10;
        undefined1* this_11;
        undefined1* this_12;
        undefined1* this_13;
        undefined1* this_14;
        undefined1* this_15;
        undefined* puVar1;
        _func_decltype_nullptr* in_RSI;
        __1 local_a8[8];
        __2 local_a0[8];
        __3 local_98[8];
        __4 local_90[8];
        __5 local_88[8];
        __6 local_80[8];
        __7 local_78[8];
        __8 local_70[8];
        __9 local_68[8];
        __10 local_60[8];
        __11 local_58[8];
        __12 local_50[8];
        __13 local_48[8];
        __14 local_40[16];

        new (this) AutoSingleton<DebugUIManager>();
        new (this) ImDrawData();
        new (&field_48) ImDrawData();
        new (&field_96) ImDrawData();
        puVar1 = PTR_ZERO_100ee66e8;
        field_152 = *(undefined4*)(PTR_ZERO_100ee66e8 + 8);
        field_144 = *(undefined8*)puVar1;
        field_160 = (Input*)0;
        this_00 = field_168;
        new (this_00) input::InputHandler();
        this_01 = &field_2496;
        std::function<bool(float, float)>::function((function<bool(float, float)>*)this_01);
        this_02 = &field_2544;
        std::function<bool(float, float)>::function((function<bool(float, float)>*)this_02);
        this_03 = &field_2592;
        std::function<bool(float, float)>::function((function<bool(float, float)>*)this_03);
        this_04 = &field_2640;
        std::function<bool(float, float)>::function((function<bool(float, float)>*)this_04);
        this_05 = &field_2688;
        std::function<bool(float, float)>::function((function<bool(float, float)>*)this_05);
        this_06 = &field_2736;
        std::function<bool(float, float)>::function((function<bool(float, float)>*)this_06);
        this_07 = &field_2784;
        std::function<bool(float, float)>::function((function<bool(float, float)>*)this_07);
        this_08 = &field_2832;
        std::function<bool(float, float, float, float)>::function((function<bool(float, float, float, float)>*)this_08);
        this_09 = &field_2880;
        std::function<bool(int)>::function((function<bool(int)>*)this_09);
        this_10 = &field_2928;
        std::function<bool(int)>::function((function<bool(int)>*)this_10);
        this_11 = &field_2976;
        std::function<bool(int)>::function((function<bool(int)>*)this_11);
        this_12 = &field_3024;
        std::function<bool(unsigned long, float, float)>::function(
            (function<bool(unsigned long, float, float)>*)this_12);
        this_13 = &field_3072;
        std::function<bool(unsigned long, float, float)>::function(
            (function<bool(unsigned long, float, float)>*)this_13);
        this_14 = &field_3120;
        std::function<bool(unsigned long, float, float)>::function(
            (function<bool(unsigned long, float, float)>*)this_14);
        this_15 = &field_3168;
        std::function<bool(unsigned long, float, float)>::function(
            (function<bool(unsigned long, float, float)>*)this_15);
        new (field_3216, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_3232, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_3248) render::VertexDeclaration();
        new (&field_3344) render::DynamicBuffer<render::VertexBuffer>();
        new (&field_3432) render::DynamicBuffer<render::IndexBuffer>();
        new (&field_3520) std::mutex();
        new (&field_3584) eastl::vector<DebugUIElement*, eastl::allocator>();
        new (&field_3616)
            eastl::vector<std::unique_ptr<DebugUIElement, std::default_delete<DebugUIElement>>, eastl::allocator>();
        m_mainMenuHeight = 0;
        field_3652 = 0;
        field_3653 = 0;
        if (ImGui::CreateContext((ImFontAtlas*)0) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("initOk",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIManager.cpp",
                      324, (char*)0);
        }
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)this_01, local_a8);
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)this_02, local_a0);
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)this_03, local_98);
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)this_04, local_90);
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)this_05, local_88);
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)this_06, local_80);
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)this_07, local_78);
        std::function<bool(float, float, float, float)>::operator=((function<bool(float, float, float, float)>*)this_08,
                                                                   local_70);
        std::function<bool(int)>::operator=((function<bool(int)>*)this_09, local_68);
        std::function<bool(int)>::operator=((function<bool(int)>*)this_10, local_60);
        std::function<bool(int)>::operator=((function<bool(int)>*)this_11, local_58);
        std::function<bool(unsigned long, float, float)>::operator=(
            (function<bool(unsigned long, float, float)>*)this_12, local_50);
        std::function<bool(unsigned long, float, float)>::operator=(
            (function<bool(unsigned long, float, float)>*)this_13, local_48);
        std::function<bool(unsigned long, float, float)>::operator=(
            (function<bool(unsigned long, float, float)>*)this_14, local_40);
        std::function<bool(unsigned long, float, float)>::operator=(
            (function<bool(unsigned long, float, float)>*)this_15, (function*)this_14);
        this_00->RegisterLMouseDown(this_01);
        this_00->RegisterRMouseDown(this_02);
        this_00->RegisterMMouseDown(this_03);
        this_00->RegisterLMouseUp(this_04);
        this_00->RegisterRMouseUp(this_05);
        this_00->RegisterMMouseUp(this_06);
        this_00->RegisterMouseMove(this_07);
        this_00->RegisterMouseWheel(this_08);
        this_00->RegisterKeyChar(this_09);
        this_00->RegisterKeyDown(this_10);
        this_00->RegisterKeyUp(this_11);
        this_00->RegisterTouchDown(this_12);
        this_00->RegisterTouchMove(this_13);
        this_00->RegisterTouchUp(this_14);
        this_00->RegisterTouchCanceled(this_15);
    }

    // 0x100722d20, 16 bytes, complete-object constructor, placed by class name
    // DebugUIManager::DebugUIManager(): jumps straight to the base-object constructor

    // 0x100722d30, 960 bytes, base-object destructor, placed by class name
    // DebugUIManager::~DebugUIManager()
    void DebugUIManager::~DebugUIManager() {
        undefined1* this_00;
        char cVar1;

        FlushOwnedUIElements(this);
        cVar1 = (&field_3584)->empty();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_uiElements.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIManager.cpp",
                      475, (char*)0);
        }
        UnregisterInputHandler(this);
        this_00 = field_168;
        this_00->UnregisterLMouseDown((function*)&field_2496);
        this_00->UnregisterRMouseDown((function*)&field_2544);
        this_00->UnregisterMMouseDown((function*)&field_2592);
        this_00->UnregisterLMouseUp((function*)&field_2640);
        this_00->UnregisterRMouseUp((function*)&field_2688);
        this_00->UnregisterMMouseUp((function*)&field_2736);
        this_00->UnregisterMouseMove((function*)&field_2784);
        this_00->UnregisterMouseWheel((function*)&field_2832);
        this_00->UnregisterKeyChar((function*)&field_2880);
        this_00->UnregisterKeyDown((function*)&field_2928);
        this_00->UnregisterKeyUp((function*)&field_2976);
        this_00->UnregisterTouchDown((function*)&field_3024);
        this_00->UnregisterTouchMove((function*)&field_3072);
        this_00->UnregisterTouchUp((function*)&field_3120);
        this_00->UnregisterTouchCanceled((function*)&field_3168);
        (&field_3616)->~vector();
        (&field_3584)->~vector();
        (&field_3520)->~mutex();
        (&field_3432)->~DynamicBuffer();
        (&field_3344)->~DynamicBuffer();
        (&field_3248)->~VertexDeclaration();
        (&field_3232)->~shared_ptr();
        field_3216->~shared_ptr();
        std::function<bool(unsigned long, float, float)>::~function(
            (function<bool(unsigned long, float, float)>*)&field_3168);
        std::function<bool(unsigned long, float, float)>::~function(
            (function<bool(unsigned long, float, float)>*)&field_3120);
        std::function<bool(unsigned long, float, float)>::~function(
            (function<bool(unsigned long, float, float)>*)&field_3072);
        std::function<bool(unsigned long, float, float)>::~function(
            (function<bool(unsigned long, float, float)>*)&field_3024);
        std::function<bool(int)>::~function((function<bool(int)>*)&field_2976);
        std::function<bool(int)>::~function((function<bool(int)>*)&field_2928);
        std::function<bool(int)>::~function((function<bool(int)>*)&field_2880);
        std::function<bool(float, float, float, float)>::~function(
            (function<bool(float, float, float, float)>*)&field_2832);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_2784);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_2736);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_2688);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_2640);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_2592);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_2544);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_2496);
        this_00->~InputHandler();
        ~AutoSingleton();
    }

    // 0x100723110, 16 bytes, complete-object destructor, placed by class name
    // DebugUIManager::~DebugUIManager(): jumps straight to the base-object destructor

    // 0x100723170, 160 bytes, placed by class name
    // DebugUIManager::Render(render::RenderContext*, int, int)
    void DebugUIManager::Render(RenderContext* param_1, int param_2, int param_3) {
        lock_guard<std::mutex> local_30[8];

        std::lock_guard<std::mutex>::lock_guard(local_30, (mutex*)&field_3520);
        if (field_16 != (void*)0) {
            field_112 = field_64;
            field_100 = field_52;
            field_48 = field_0;
            field_52 = field_4;
            field_56 = field_8;
            field_64 = field_16;
            field_72 = field_24;
            field_76 = field_28;
            field_80 = field_32;
            field_84 = field_36;
            field_88 = field_40;
            field_16 = (void*)0;
        }
        local_30->~lock_guard();
        if (field_64 != (void*)0) {
            RenderImDrawData(this, param_1, param_2, param_3, (ImDrawData*)&field_48);
        }
    }

    // 0x1007252a0, 80 bytes, placed by class name
    // DebugUIManager::DebugUIManager()::$_1::operator()(float, float) const
    /* DebugUIManager::DebugUIManager()::$_1::TEMPNAMEPLACEHOLDERVALUE(float, float) const
    */

    ImGuiIO DebugUIManager::DebugUIManager()::$_1::operator()(float param_1, float param_2) {
        ImGuiIO* this;

        this = (ImGuiIO*)ImGui::GetIO();
        ImGuiIO::AddMousePosEvent(this, param_1, param_2);
        ImGuiIO::AddMouseButtonEvent(this, 0, true);
        return this[200];
    }

    // 0x100725c20, 80 bytes, placed by class name
    // DebugUIManager::DebugUIManager()::$_2::operator()(float, float) const
    /* DebugUIManager::DebugUIManager()::$_2::TEMPNAMEPLACEHOLDERVALUE(float, float) const
    */

    ImGuiIO DebugUIManager::DebugUIManager()::$_2::operator()(float param_1, float param_2) {
        ImGuiIO* this;

        this = (ImGuiIO*)ImGui::GetIO();
        ImGuiIO::AddMousePosEvent(this, param_1, param_2);
        ImGuiIO::AddMouseButtonEvent(this, 1, true);
        return this[200];
    }

    // 0x100726400, 80 bytes, placed by class name
    // DebugUIManager::DebugUIManager()::$_3::operator()(float, float) const
    /* DebugUIManager::DebugUIManager()::$_3::TEMPNAMEPLACEHOLDERVALUE(float, float) const
    */

    ImGuiIO DebugUIManager::DebugUIManager()::$_3::operator()(float param_1, float param_2) {
        ImGuiIO* this;

        this = (ImGuiIO*)ImGui::GetIO();
        ImGuiIO::AddMousePosEvent(this, param_1, param_2);
        ImGuiIO::AddMouseButtonEvent(this, 2, true);
        return this[200];
    }

    // 0x100726be0, 80 bytes, placed by class name
    // DebugUIManager::DebugUIManager()::$_4::operator()(float, float) const
    /* DebugUIManager::DebugUIManager()::$_4::TEMPNAMEPLACEHOLDERVALUE(float, float) const
    */

    ImGuiIO DebugUIManager::DebugUIManager()::$_4::operator()(float param_1, float param_2) {
        ImGuiIO* this;

        this = (ImGuiIO*)ImGui::GetIO();
        ImGuiIO::AddMousePosEvent(this, param_1, param_2);
        ImGuiIO::AddMouseButtonEvent(this, 0, false);
        return this[200];
    }

    // 0x1007273c0, 80 bytes, placed by class name
    // DebugUIManager::DebugUIManager()::$_5::operator()(float, float) const
    /* DebugUIManager::DebugUIManager()::$_5::TEMPNAMEPLACEHOLDERVALUE(float, float) const
    */

    ImGuiIO DebugUIManager::DebugUIManager()::$_5::operator()(float param_1, float param_2) {
        ImGuiIO* this;

        this = (ImGuiIO*)ImGui::GetIO();
        ImGuiIO::AddMousePosEvent(this, param_1, param_2);
        ImGuiIO::AddMouseButtonEvent(this, 1, false);
        return this[200];
    }

    // 0x100727ba0, 80 bytes, placed by class name
    // DebugUIManager::DebugUIManager()::$_6::operator()(float, float) const
    /* DebugUIManager::DebugUIManager()::$_6::TEMPNAMEPLACEHOLDERVALUE(float, float) const
    */

    ImGuiIO DebugUIManager::DebugUIManager()::$_6::operator()(float param_1, float param_2) {
        ImGuiIO* this;

        this = (ImGuiIO*)ImGui::GetIO();
        ImGuiIO::AddMousePosEvent(this, param_1, param_2);
        ImGuiIO::AddMouseButtonEvent(this, 2, false);
        return this[200];
    }

    // 0x100728380, 64 bytes, placed by class name
    // DebugUIManager::DebugUIManager()::$_7::operator()(float, float) const
    /* DebugUIManager::DebugUIManager()::$_7::TEMPNAMEPLACEHOLDERVALUE(float, float) const
    */

    ImGuiIO DebugUIManager::DebugUIManager()::$_7::operator()(float param_1, float param_2) {
        ImGuiIO* this;

        this = (ImGuiIO*)ImGui::GetIO();
        ImGuiIO::AddMousePosEvent(this, param_1, param_2);
        return this[200];
    }

    // 0x100728b90, 96 bytes, placed by class name
    // DebugUIManager::DebugUIManager()::$_8::operator()(float, float, float, float) const
    /* DebugUIManager::DebugUIManager()::$_8::TEMPNAMEPLACEHOLDERVALUE(float, float, float,
   float) const */

    ImGuiIO DebugUIManager::DebugUIManager()::$_8::operator()(float param_1, float param_2, float param_3,
                                                              float param_4) {
        ImGuiIO* this;

        this = (ImGuiIO*)ImGui::GetIO();
        ImGuiIO::AddMousePosEvent(this, param_1, param_2);
        ImGuiIO::AddMouseWheelEvent(this, param_3, param_4);
        return this[200];
    }

    // 0x100729540, 48 bytes, placed by class name
    // DebugUIManager::DebugUIManager()::$_9::operator()(int) const
    /* DebugUIManager::DebugUIManager()::$_9::TEMPNAMEPLACEHOLDERVALUE(int) const */

    ImGuiIO DebugUIManager::DebugUIManager()::$_9::operator()(int param_1) {
        ImGuiIO* this_00;

        this_00 = (ImGuiIO*)ImGui::GetIO();
        ImGuiIO::AddInputCharacter(this_00, (uint)this);
        return this_00[201];
    }

    // 0x100729e80, 64 bytes, placed by class name
    // DebugUIManager::DebugUIManager()::$_10::operator()(int) const
    /* DebugUIManager::DebugUIManager()::$_10::TEMPNAMEPLACEHOLDERVALUE(int) const */

    ImGuiIO DebugUIManager::DebugUIManager()::$_10::operator()(int param_1) {
        ImGuiIO* this_00;
        int iVar1;

        this_00 = (ImGuiIO*)ImGui::GetIO();
        iVar1 = KeyToImGuiKey((int)this);
        ImGuiIO::AddKeyEvent(this_00, iVar1, true);
        return this_00[201];
    }

    // 0x10072a630, 64 bytes, placed by class name
    // DebugUIManager::DebugUIManager()::$_11::operator()(int) const
    /* DebugUIManager::DebugUIManager()::$_11::TEMPNAMEPLACEHOLDERVALUE(int) const */

    ImGuiIO DebugUIManager::DebugUIManager()::$_11::operator()(int param_1) {
        ImGuiIO* this_00;
        int iVar1;

        this_00 = (ImGuiIO*)ImGui::GetIO();
        iVar1 = KeyToImGuiKey((int)this);
        ImGuiIO::AddKeyEvent(this_00, iVar1, false);
        return this_00[201];
    }

    // 0x10072ae40, 96 bytes, placed by class name
    // DebugUIManager::DebugUIManager()::$_12::operator()(unsigned long, float, float) const
    /* DebugUIManager::DebugUIManager()::$_12::TEMPNAMEPLACEHOLDERVALUE(unsigned long,
   float, float) const */

    ImGuiIO DebugUIManager::DebugUIManager()::$_12::operator()(ulong param_1, float param_2, float param_3) {
        ImGuiIO* this;

        this = (ImGuiIO*)ImGui::GetIO();
        if (param_1 == 0) {
            ImGuiIO::AddMousePosEvent(this, param_2, param_3);
            ImGuiIO::AddMouseButtonEvent(this, 0, true);
        }
        return this[200];
    }

    // 0x10072b7d0, 80 bytes, placed by class name
    // DebugUIManager::DebugUIManager()::$_13::operator()(unsigned long, float, float) const
    /* DebugUIManager::DebugUIManager()::$_13::TEMPNAMEPLACEHOLDERVALUE(unsigned long,
   float, float) const */

    ImGuiIO DebugUIManager::DebugUIManager()::$_13::operator()(ulong param_1, float param_2, float param_3) {
        ImGuiIO* this;

        this = (ImGuiIO*)ImGui::GetIO();
        if (param_1 == 0) {
            ImGuiIO::AddMousePosEvent(this, param_2, param_3);
        }
        return this[200];
    }

    // 0x10072bfb0, 96 bytes, placed by class name
    // DebugUIManager::DebugUIManager()::$_14::operator()(unsigned long, float, float) const
    /* DebugUIManager::DebugUIManager()::$_14::TEMPNAMEPLACEHOLDERVALUE(unsigned long,
   float, float) const */

    ImGuiIO DebugUIManager::DebugUIManager()::$_14::operator()(ulong param_1, float param_2, float param_3) {
        ImGuiIO* this;

        this = (ImGuiIO*)ImGui::GetIO();
        if (param_1 == 0) {
            ImGuiIO::AddMousePosEvent(this, param_2, param_3);
            ImGuiIO::AddMouseButtonEvent(this, 0, false);
        }
        return this[200];
    }

} // namespace jag::debug

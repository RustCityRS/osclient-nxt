// libs/debug/DebugUIManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.debug

#include "DebugUIManager.h"

namespace jag::debug {
    // 0x100720690
    void DebugUIManager::TransferOwnership(std::unique_ptr<DebugUIElement> debugUIElement) {

        if (debugUIElement->operator_cast_to_bool() == '\0') {
            LogAssert("element",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIManager.cpp",
                      264, nullptr);
        }
        lock_guard<std::mutex> local_20(field_3520);
        eastl::vector<std::unique_ptr<DebugUIElement>>::emplace_back<std::unique_ptr<DebugUIElement>>(
            (vector<std::unique_ptr<DebugUIElement>>*)&field_3616, debugUIElement);
    }

    // 0x1007207a0
    void DebugUIManager::Register(DebugUIElement* debugUIElement) {
        function<bool_(int, int, int, int)>** ppfVar1;
        function<bool_(int, int, int, int)>** ppfVar2;

        DebugUIElement* local_20 = debugUIElement;
        if (debugUIElement == nullptr) {
            LogAssert("element",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIManager.cpp",
                      274, nullptr);
        }
        lock_guard<std::mutex> local_28(field_3520);
        uint8_t* this_00 = &field_3584;
        ppfVar1 = (function<bool_(int, int, int, int)>**)this_00->HeapBeginPtr();
        ppfVar2 = (function<bool_(int, int, int, int)>**)this_00->end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, local_20);
        ppfVar2 = (function<bool_(int, int, int, int)>**)this_00->end();
        if (ppfVar1 != ppfVar2) {
            LogAssert("eastl::find(m_uiElements.begin(), m_uiElements.end(), element) == m_uiElements.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIManager.cpp",
                      277, nullptr);
        }
        this_00->push_back(local_20);
        local_20->NotifyDebugRegistration((uint8_t)local_20);
    }

    // 0x1007208d0
    void DebugUIManager::Unregister(DebugUIElement* debugUIElement) {
        function<bool_(int, int, int, int)>** arg1;
        function<bool_(int, int, int, int)>** arg2;
        __0* in_RCX;

        DebugUIElement* local_28 = debugUIElement;
        if (debugUIElement == nullptr) {
            LogAssert("element",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIManager.cpp",
                      284, nullptr);
        }
        lock_guard<std::mutex> local_30(field_3520);
        uint8_t* puVar4 = &field_3616;
        auto puVar1 = puVar4->HeapBeginPtr();
        auto puVar2 = puVar4->end();
        puVar1 = eastl::find<std::unique_ptr<DebugUIElement>*, DebugUIElement*, (DebugUIElement*)->Unregister()::__0>(
            puVar1, puVar2, &local_28, in_RCX);
        puVar2 = (unique_ptr<DebugUIElement, std::default_delete<DebugUIElement> _>*)puVar4->end();
        if (puVar1 != puVar2) {
            LogAssert("eastl::find(m_ownedUIElements.begin(), m_ownedUIElements.end(), element, ownedMatchFn) == "
                      "m_ownedUIElements.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIManager.cpp",
                      290, nullptr);
        }
        puVar4 = &field_3584;
        arg1 = (function<bool_(int, int, int, int)>**)puVar4->HeapBeginPtr();
        arg2 = (function<bool_(int, int, int, int)>**)puVar4->end();
        DebugUIElement** arg1_00 = (DebugUIElement**)
            eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(arg1, arg2,
                                                                                                             local_28);
        auto ppDVar3 = puVar4->end();
        if (arg1_00 == ppDVar3) {
            LogAssert("matchIt != m_uiElements.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIManager.cpp",
                      293, nullptr);
        }
        puVar4->erase(arg1_00);
        local_28->NotifyDebugRegistration((uint8_t)local_28);
    }

    // 0x100720a10
    void KeyToImGuiKey(int arg1) {
        uint64_t uVar1;

        switch (arg1) {
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
            switch (arg1) {
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
                if (arg1 == 7331) {
                    return 594;
                }
            }
        switchD_100720a2a_caseD_a:
            uVar1 = 0;
        switchD_100720a51_caseD_f702:
            return uVar1;
        }
    }

    // 0x100720f70
    uint32_t DebugUIManager::CreateRenderingResources() {
        uint32_t uVar3;
        VertexElementDesc* vertexElementDesc;
        VertexElementDesc local_100;
        VertexElementDesc local_d8;
        VertexElementDesc local_b0;
        uint8_t local_88[64];
        unsigned char* local_48;
        unsigned char* local_30;
        int local_28;
        int local_24;

        auto pIVar4 = ImGui::GetIO();
        *(uint32_t*)(pIVar4 + 80) = 1065353216;
        ((ImGuiStyle*)ImGui::GetStyle())->ScaleAllSizes(1.0);
        (*(ImFontAtlas**)(pIVar4 + 72))->GetTexDataAsRGBA32(&local_30, &local_28, &local_24, nullptr);
        new (&local_48) render::ResourceDataT(nullptr, 0, 0, false);
        local_48 = local_30;
        new (local_88) render::Texture::Desc();
        local_88._0_4_ = local_28;
        local_88._4_4_ = local_24;
        local_88._12_4_ = 8;
        make_shared<render::Texture2D, char const(&)[31]>((ReturnValue*)&local_100, "IMGUI Font");
        uint8_t* this_00 = &field_3232;
        *this_00 = local_100;
        if (((Texture2D*)(*this_00).operator->())->Create(*local_88, &local_48, 0)) {
            *(Layout**)(pIVar4 + 72)->SetHeapSize((void*)this_00->end());
            local_100 = render::VertexElementDesc(0, "aVertexPosition2D", 1, false, 0, 0);
            local_d8 = render::VertexElementDesc(0, "aTextureUV", 1, false, 5, 0);
            local_b0 = render::VertexElementDesc(0, "aVertexColour", 12, true, 10, 0);
            vertexElementDesc = (VertexElementDesc*)local_100.data();
            if (field_3248.Create(vertexElementDesc, 3, nullptr, 0)) {
                if (field_3248.GetVertexStride(0) != 20) {
                    LogAssert("m_vertexDeclaration.GetVertexStride() == sizeof(Vertex)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/"
                              "DebugUIManager.cpp",
                              168, nullptr);
                }
                uVar3 = CreateShader();
                goto LAB_100721148;
            }
        }
        uVar3 = 0;
    LAB_100721148:
        return uVar3;
    }

    // 0x100721240
    unsigned long DebugUIManager::CreateShader() {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        uint8_t local_290[280];
        uint8_t local_178[280];
        ReturnValue local_30;

        new (local_290) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_290 + 16),
            "\n            uniform mat4 uProjectionMatrix;\n\n            attribute vec2 aVertexPosition2D;\n          "
            "  attribute vec2 aTextureUV;\n            attribute vec4 aVertexColour;\n\n            out vec4 "
            "vColour;\n            out vec2 vUV;\n\n            void main()\n            {\n                vColour = "
            "aVertexColour.xyzw;\n                vUV = aTextureUV;\n\n                gl_Position = uProjectionMatrix "
            "* vec4(aVertexPosition2D, 1.0, 1.0);\n            }\n\n            ");
        new (local_178) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_178 + 16);
        std::operator<<(basic_ostream,
                        "\n            in vec4 vColour;\n            in vec2 vUV;\n\n            uniform sampler2D "
                        "uDiffuseMap;\n\n            void main()\n            {\n                gl_FragColor = "
                        "texture2D(uDiffuseMap, vUV) * vColour;\n            }\n\n            ");
        auto this_00 = basic_ostream->Instance();
        auto local_60 = local_290->str();
        auto str1 = local_60.c_str();
        auto local_48 = local_178->str();
        auto str2 = local_48.c_str();
        local_30.RegisterFromSourceString(this_00, str1, str2, &field_3248, '\x01');
        *field_3216 = local_30;
        long lVar1 = field_3216->end();
        return lVar1 != 0 & 4294967295;
    }

    // 0x100721400
    void DebugUIManager::NotifyFrameStart(float arg1, int arg2, int arg3, const math::Rect<int>& rect) {
        uint64_t local_38;

        float local_2c = arg1;
        auto pIVar2 = ImGui::GetIO();
        new (&local_38) math::Point((float)arg2, (float)arg3);
        *(uint64_t*)(pIVar2 + 8) = local_38;
        *(float*)(pIVar2 + 16) = local_2c;
        int iVar1 = rect.GetX();
        local_2c = (float)iVar1;
        iVar1 = rect.GetZ();
        new (&local_38) math::Point(local_2c, (float)iVar1);
        long lVar3 = ImGui::GetStyle();
        *(uint64_t*)(lVar3 + 176) = local_38;
        ImGui::NewFrame();
        field_3652 = 1;
    }

    // 0x1007214b0
    void DebugUIManager::MainDraw(render::RenderContext* renderContext, int arg2, int arg3) {
        bool cVar1;
        uint64_t* puVar2;
        uint64_t* puVar3;
        float extraout_XMM0_Db;

        if (field_3652 == '\0') {
            LogAssert("m_frameStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIManager.cpp",
                      197, nullptr);
        }
        if ((field_3653 != '\0') && (cVar1 = ImGui::BeginMainMenuBar(), cVar1)) {
            puVar2 = (uint64_t*)field_3584.HeapBeginPtr();
            puVar3 = (uint64_t*)field_3584.end();
            for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
                (**(void (**)(...))(*(long*)*puVar2 + 16))();
            }
            ImGui::GetWindowSize();
            m_mainMenuHeight = (int)extraout_XMM0_Db;
            ImGui::EndMainMenuBar();
        }
        puVar2 = (uint64_t*)field_3584.HeapBeginPtr();
        puVar3 = (uint64_t*)field_3584.end();
        for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
            (**(void (**)(...))(*(long*)*puVar2 + 24))();
        }
        ImGui::Render();
        auto imDrawData = ImGui::GetDrawData();
        if (renderContext == nullptr) {
            DeferToRenderThread(imDrawData);
        } else {
            RenderImDrawData(renderContext, arg2, arg3, imDrawData);
        }
        field_3652 = 0;
    }

    // 0x1007215f0
    void DebugUIManager::RenderImDrawData(render::RenderContext* renderContext, int arg2, int arg3,
                                          ImDrawData* imDrawData) {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        DynamicBuffer<render::VertexBuffer>* this_02;
        DynamicBuffer<render::IndexBuffer>* this_03;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        unsigned int arg2_00;
        int iVar3;
        RenderPipelineState* this_05;
        long lVar5;
        OutputMergerState* pOVar6;
        InputAssemblerState* this_06;
        VertexBuffer* vertexBuffer;
        RenderPipelineState* pRVar7;
        ShaderProgram* pSVar8;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_07;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* pAVar9;
        Texture* texture;
        float fVar10;
        DrawCallState local_120;
        DrawCallState local_f0;
        uint8_t local_c0[16];
        HashedString local_b0;
        uint64_t* local_a0;
        DynamicBuffer<render::VertexBuffer>* local_90;
        DynamicBuffer<render::IndexBuffer>* local_88;
        float local_6c;
        float local_64;
        float local_5c;
        float local_54;
        float local_50;
        float local_4c;

        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_80 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_3216;
        DebugUIManager* local_48 = this;
        bool cVar2 = local_80->operator_cast_to_bool();
        if (!cVar2) {
            LogAssert("m_shader",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIManager.cpp",
                      547, nullptr);
        }
        cVar2 = (&local_48->field_3232)->operator_cast_to_bool();
        DebugUIManager* pDVar1 = local_48;
        if (!cVar2) {
            LogAssert("m_fontTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIManager.cpp",
                      548, nullptr);
        }
        uint8_t* this_00 = &local_48->field_3344;
        this_00->RotateBuffers();
        pDVar1->field_3432.RotateBuffers();
        Matrix44T<float> local_178;
        math::Matrix44OrthographicLH<float>(local_178, 0.0, (float)arg2, (float)arg3, 0.0, 0.1, 5000.0, 0);
        WrapArray<unsigned char> local_130(*(Particle**)(imDrawData + 16), (long)*(int*)(imDrawData + 4));
        auto puVar4 = local_130.end();
        auto local_98 = local_130.end();
        if (puVar4 != local_98) {
            local_48 = (DebugUIManager*)&local_48->field_3248;
            local_90 = (DynamicBuffer<render::VertexBuffer>*)this_00;
            local_88 = (DynamicBuffer<render::IndexBuffer>*)&pDVar1->field_3432;
            do {
                this_03 = local_88;
                this_02 = local_90;
                this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)*puVar4;
                iVar3 = *(int*)(this_01 + 16);
                local_a0 = puVar4;
                local_90->Update(0, *(int*)(this_01 + 32) * 20, *(void**)(this_01 + 40));
                this_03->Update(0, iVar3 * 2, *(void**)(this_01 + 24));
                local_120 = render::DrawCallState();
                this_05 = (RenderPipelineState*)local_120.GetRenderPipelineState();
                lVar5 = local_120.Instance();
                pRVar7 = this_05;
                new (this_05) eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(
                    (lVar5 + 1676));
                lVar5 = pRVar7->Instance();
                pRVar7 = this_05;
                this_05->SetHeapSize((lVar5 + 1080));
                lVar5 = pRVar7->Instance();
                this_05->SetRasteriserState((lVar5 + 1308));
                local_f0 = render::Viewport(0, 0, arg2, arg3, 0.0, 1.0);
                pOVar6 = local_120.GetOutputMergerState();
                pOVar6->SetViewports(&local_f0, 1);
                pOVar6->SetRenderTargets(renderContext->GetBackBuffer());
                this_06 = (InputAssemblerState*)local_120.GetInputAssemblerState();
                vertexBuffer = (VertexBuffer*)this_02->CurrentBuffer();
                this_06->SetVertexStreamData(local_48, vertexBuffer);
                arg2_00 = this_03->CurrentBuffer();
                render::InputAssemblerState::SetIndexBuffer(this_06, arg2_00);
                pRVar7 = (RenderPipelineState*)local_120.GetRenderPipelineState();
                this_04 = local_80;
                pRVar7->SetShaderProgram((BlendMode*)local_80->end());
                pSVar8 = (ShaderProgram*)(*this_04).operator->();
                new (local_c0) HashedString("uProjectionMatrix");
                pSVar8->SetShaderConstMatrix4(local_c0, 1, &local_178, 1);
                this_07 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)this_01->end();
                pAVar9 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)this_01->end();
                for (; this_07 != pAVar9; this_07 = this_07 + 56) {
                    if ((*(float*)this_07 <= *(float*)(this_07 + 8) && *(float*)(this_07 + 8) != *(float*)this_07) &&
                        (*(float*)(this_07 + 4) <= *(float*)(this_07 + 12) &&
                         *(float*)(this_07 + 12) != *(float*)(this_07 + 4))) {
                        local_f0 = render::DrawCallState(local_120);
                        local_b0.field_0._0_4_ = 0;
                        local_54 = math::Clamp<float>(*this_07, *((local_c0 + 16)), (float)arg2);
                        local_6c = (float)arg3 - *(float*)(this_07 + 12);
                        local_50 = math::Clamp<float>(local_6c, 0.0, (float)arg3);
                        local_64 = *(float*)(this_07 + 8) - *(float*)this_07;
                        local_4c = math::Clamp<float>(local_64, 0.0, (float)arg2);
                        local_5c = *(float*)(this_07 + 12) - *(float*)(this_07 + 4);
                        fVar10 = math::Clamp<float>(local_5c, 0.0, (float)arg3);
                        new (local_c0) oldscape::dash3d::GridRect((int)(long)local_54, (int)(long)local_50,
                                                                  (int)(long)local_4c, (int)(long)fVar10);
                        pOVar6 = local_f0.GetOutputMergerState();
                        pOVar6->SetScissorRects(local_c0, 1);
                        pRVar7 = (RenderPipelineState*)local_f0.GetRenderPipelineState();
                        texture = (Texture*)this_07->data();
                        pSVar8 = (ShaderProgram*)(*local_80).operator->();
                        new ((local_c0 + 16)) HashedString("uDiffuseMap");
                        iVar3 = pSVar8->GetConstIndex(*((local_c0 + 16)));
                        pRVar7->SetPSTextureSamplerPair(0, texture, iVar3, nullptr, false);
                        renderContext->DrawIndexedPrimitives(&local_f0, 4, *(unsigned int*)(this_07 + 32),
                                                             *(unsigned int*)(this_07 + 28));
                    }
                }
                puVar4 = local_a0 + 1;
            } while (puVar4 != local_98);
        }
    }

    // 0x100721b30
    void DebugUIManager::DeferToRenderThread(ImDrawData* imDrawData) {
        uint8_t auVar3[16];
        uint64_t uVar9;
        long lVar11;
        int local_64;

        uint64_t uVar4 = *(uint64_t*)imDrawData;
        uint64_t uVar5 = *(uint64_t*)(imDrawData + 8);
        uint64_t uVar6 = *(uint64_t*)(imDrawData + 24);
        uint64_t uVar7 = *(uint64_t*)(imDrawData + 32);
        uint64_t uVar2 = *(uint64_t*)(imDrawData + 40);
        unsigned int uVar1 = *(unsigned int*)(imDrawData + 4);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (long)(int)uVar1;
        unsigned long uVar10 = 18446744073709551615;
        if ((uint64_t)((auVar3 * (unsigned __int128)8) >> 64) == 0) {
            uVar10 = (uint64_t)(auVar3 * (unsigned __int128)8);
        }
        auto pvVar8 = operator_new__(uVar10);
        if (0 < (long)(int)uVar1) {
            uVar10 = 0;
            do {
                uVar9 = (*(ImDrawList**)(*(long*)(imDrawData + 16) + uVar10 * 8))->CloneOutput();
                *(uint64_t*)((long)pvVar8 + uVar10 * 8) = uVar9;
                uVar10 = uVar10 + 1;
            } while (uVar1 != uVar10);
        }
        ImDrawData local_68;
        void* local_58 = nullptr;
        lock_guard<std::mutex> local_38(field_3520);
        if (field_16 != nullptr) {
            local_64 = field_4;
            local_58 = field_16;
        }
        field_0 = (int)uVar4;
        field_4 = (int)((unsigned long)uVar4 >> 32);
        field_8 = uVar5;
        field_16 = pvVar8;
        uint32_t local_88 = (uint32_t)uVar6;
        uint32_t uStack_84 = (uint32_t)((unsigned long)uVar6 >> 32);
        uint32_t uStack_80 = (uint32_t)uVar7;
        uint32_t uStack_7c = (uint32_t)((unsigned long)uVar7 >> 32);
        field_24 = local_88;
        field_28 = uStack_84;
        field_32 = uStack_80;
        field_36 = uStack_7c;
        field_40 = uVar2;
        if (field_112 != nullptr) {
            if (local_58 != nullptr) {
                LogAssert(
                    "toFree.CmdLists == nullptr",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIManager.cpp",
                    677, nullptr);
            }
            local_58 = field_112;
            local_64 = field_100;
            field_112 = nullptr;
        }
        if (local_58 != nullptr) {
            if (0 < local_64) {
                lVar11 = 0;
                do {
                    ImGui::MemFree(*(void**)((long)local_58 + lVar11 * 8));
                    lVar11 = lVar11 + 1;
                } while (lVar11 < local_64);
            }
            if (local_58 != nullptr) {
                operator_delete__(local_58);
            }
        }
    }

    // 0x100721cb0
    void DebugUIManager::MainLogic(bool arg1) {
        auto puVar1 = field_3584.HeapBeginPtr();
        auto puVar2 = field_3584.end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            (**(void (**)(...))(*(long*)*puVar1 + 32))((long*)*puVar1, arg1);
        }
    }

    // 0x100721d10
    void DebugUIManager::FlushOwnedUIElements() {
        long* plVar2;
        function<bool_(int, int, int, int)>** arg1;
        function<bool_(int, int, int, int)>** arg2;
        DebugUIElement** arg1_00;
        DebugUIElement** ppDVar3;
        function<bool_(int, int, int, int)>* local_48;

        lock_guard<std::mutex> local_38(field_3520);
        uint8_t* puVar4 = &field_3616;
        auto this_00 = puVar4->HeapBeginPtr();
        vector<std::unique_ptr<DebugUIElement>>* local_40 = (vector<std::unique_ptr<DebugUIElement>>*)puVar4;
        auto puVar1 = puVar4->end();
        if (this_00 != puVar1) {
            puVar4 = &field_3584;
            do {
                plVar2 = (long*)(*this_00).operator->();
                (**(void (**)(...))(*plVar2 + 40))(plVar2, 0);
                arg1 = (function<bool_(int, int, int, int)>**)puVar4->HeapBeginPtr();
                arg2 = (function<bool_(int, int, int, int)>**)puVar4->end();
                local_48 = (function<bool_(int, int, int, int)>*)this_00->get();
                arg1_00 = (DebugUIElement**)
                    eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
                        arg1, arg2, local_48);
                ppDVar3 = (DebugUIElement**)puVar4->end();
                if (arg1_00 == ppDVar3) {
                    LogAssert("matchIt != m_uiElements.end()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/"
                              "DebugUIManager.cpp",
                              255, nullptr);
                }
                puVar4->erase(arg1_00);
                this_00 = this_00 + 8;
            } while (this_00 != puVar1);
        }
        local_40->clear();
    }

    // 0x100722030
    void DebugUIManager::RegisterInputHandler(input::Input* input) {
        if (input == nullptr) {
            LogAssert("inputHAL",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIManager.cpp",
                      301, nullptr);
        }
        if (field_160 != input) {
            UnregisterInputHandler();
            field_160 = input;
            input->RegisterInputHandler("0debugui", &field_168);
        }
    }

    // 0x1007220b0
    void DebugUIManager::UnregisterInputHandler() {
        if (field_160 != nullptr) {
            field_160->UnregisterInputHandler("0debugui");
            field_160 = nullptr;
        }
    }

    // 0x1007220f0
    DebugUIManager::DebugUIManager() : AutoSingleton<DebugUIManager>(), ImDrawData() {
        __1 local_a8;
        __2 local_a0;
        __3 local_98;
        __4 local_90;
        __5 local_88;
        __6 local_80;
        __7 local_78;
        __8 local_70;
        __9 local_68;
        __10 local_60;
        __11 local_58;
        __12 local_50;
        __13 local_48;
        __14 local_40;

        uint8_t* puVar1 = PTR_ZERO_100ee66e8;
        field_152 = *(uint32_t*)(PTR_ZERO_100ee66e8 + 8);
        field_144 = *(uint64_t*)puVar1;
        field_160 = nullptr;
        uint8_t* this_00 = &field_168;
        new (this_00) input::InputHandler();
        uint8_t* this_01 = &field_2496;
        new (this_01) std::function<bool(float, float)>();
        uint8_t* this_02 = &field_2544;
        new (this_02) std::function<bool(float, float)>();
        uint8_t* this_03 = &field_2592;
        new (this_03) std::function<bool(float, float)>();
        uint8_t* this_04 = &field_2640;
        new (this_04) std::function<bool(float, float)>();
        uint8_t* this_05 = &field_2688;
        new (this_05) std::function<bool(float, float)>();
        uint8_t* this_06 = &field_2736;
        new (this_06) std::function<bool(float, float)>();
        uint8_t* this_07 = &field_2784;
        new (this_07) std::function<bool(float, float)>();
        uint8_t* this_08 = &field_2832;
        new (this_08) std::function<bool(float, float, float, float)>();
        uint8_t* this_09 = &field_2880;
        new (this_09) std::function<bool(int)>();
        uint8_t* this_10 = &field_2928;
        new (this_10) std::function<bool(int)>();
        uint8_t* this_11 = &field_2976;
        new (this_11) std::function<bool(int)>();
        uint8_t* this_12 = &field_3024;
        new (this_12) std::function<bool(unsigned long, float, float)>();
        uint8_t* this_13 = &field_3072;
        new (this_13) std::function<bool(unsigned long, float, float)>();
        uint8_t* this_14 = &field_3120;
        new (this_14) std::function<bool(unsigned long, float, float)>();
        uint8_t* this_15 = &field_3168;
        new (this_15) std::function<bool(unsigned long, float, float)>();
        new (field_3216) shared_ptr();
        new (&field_3232) shared_ptr();
        new (&field_3248) render::VertexDeclaration();
        new (&field_3344) render::DynamicBuffer<render::VertexBuffer>();
        new (&field_3432) render::DynamicBuffer<render::IndexBuffer>();
        new (&field_3520) std::mutex();
        new (&field_3584) eastl::vector<DebugUIElement*>();
        new (&field_3616) eastl::vector<std::unique_ptr<DebugUIElement>>();
        m_mainMenuHeight = 0;
        field_3652 = 0;
        field_3653 = 0;
        if (ImGui::CreateContext(nullptr) == 0) {
            LogAssert("initOk",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIManager.cpp",
                      324, nullptr);
        }
        ((function<bool(float, float)>*)this_01)->operator=(&local_a8);
        ((function<bool(float, float)>*)this_02)->operator=(&local_a0);
        ((function<bool(float, float)>*)this_03)->operator=(&local_98);
        ((function<bool(float, float)>*)this_04)->operator=(&local_90);
        ((function<bool(float, float)>*)this_05)->operator=(&local_88);
        ((function<bool(float, float)>*)this_06)->operator=(&local_80);
        ((function<bool(float, float)>*)this_07)->operator=(&local_78);
        ((function<bool(float, float, float, float)>*)this_08)->operator=(&local_70);
        ((function<bool(int)>*)this_09)->operator=(&local_68);
        ((function<bool(int)>*)this_10)->operator=(&local_60);
        ((function<bool(int)>*)this_11)->operator=(&local_58);
        *this_12 = local_50;
        *this_13 = local_48;
        *this_14 = local_40;
        *this_15 = *this_14;
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

    // 0x100722d30
    DebugUIManager::~DebugUIManager() {
        FlushOwnedUIElements();
        if (field_3584.empty() == '\0') {
            LogAssert("m_uiElements.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/debug/DebugUIManager.cpp",
                      475, nullptr);
        }
        UnregisterInputHandler();
        uint8_t* this_00 = &field_168;
        this_00->UnregisterLMouseDown(&field_2496);
        this_00->UnregisterRMouseDown(&field_2544);
        this_00->UnregisterMMouseDown(&field_2592);
        this_00->UnregisterLMouseUp(&field_2640);
        this_00->UnregisterRMouseUp(&field_2688);
        this_00->UnregisterMMouseUp(&field_2736);
        this_00->UnregisterMouseMove(&field_2784);
        this_00->UnregisterMouseWheel(&field_2832);
        this_00->UnregisterKeyChar(&field_2880);
        this_00->UnregisterKeyDown(&field_2928);
        this_00->UnregisterKeyUp(&field_2976);
        this_00->UnregisterTouchDown(&field_3024);
        this_00->UnregisterTouchMove(&field_3072);
        this_00->UnregisterTouchUp(&field_3120);
        this_00->UnregisterTouchCanceled(&field_3168);
        field_3616.~vector();
        field_3584.~vector();
        (&field_3520)->~mutex();
        field_3432.~DynamicBuffer();
        field_3344.~DynamicBuffer();
        field_3248.~VertexDeclaration();
        field_3232.~shared_ptr();
        field_3216->~shared_ptr();
        field_3168.~function();
        field_3120.~function();
        field_3072.~function();
        field_3024.~function();
        field_2976.~function();
        field_2928.~function();
        field_2880.~function();
        field_2832.~function();
        field_2784.~function();
        field_2736.~function();
        field_2688.~function();
        field_2640.~function();
        field_2592.~function();
        field_2544.~function();
        field_2496.~function();
        this_00->~InputHandler();
    }

    // 0x100723170
    void DebugUIManager::Render(render::RenderContext* renderContext, int arg2, int arg3) {

        lock_guard<std::mutex> local_30(field_3520);
        if (field_16 != nullptr) {
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
            field_16 = nullptr;
        }
        if (field_64 != nullptr) {
            RenderImDrawData(renderContext, arg2, arg3, &field_48);
        }
    }

    // 0x1007252a0
    ImGuiIO DebugUIManager::DebugUIManager()::$_1::operator()(float arg1, float arg2) const {
        auto this_00 = ImGui::GetIO();
        this_00->AddMousePosEvent(arg1, arg2);
        this_00->AddMouseButtonEvent(0, true);
        return this_00[200];
    }

    // 0x100725c20
    ImGuiIO DebugUIManager::DebugUIManager()::$_2::operator()(float arg1, float arg2) const {
        auto this_00 = ImGui::GetIO();
        this_00->AddMousePosEvent(arg1, arg2);
        this_00->AddMouseButtonEvent(1, true);
        return this_00[200];
    }

    // 0x100726400
    ImGuiIO DebugUIManager::DebugUIManager()::$_3::operator()(float arg1, float arg2) const {
        auto this_00 = ImGui::GetIO();
        this_00->AddMousePosEvent(arg1, arg2);
        this_00->AddMouseButtonEvent(2, true);
        return this_00[200];
    }

    // 0x100726be0
    ImGuiIO DebugUIManager::DebugUIManager()::$_4::operator()(float arg1, float arg2) const {
        auto this_00 = ImGui::GetIO();
        this_00->AddMousePosEvent(arg1, arg2);
        this_00->AddMouseButtonEvent(0, false);
        return this_00[200];
    }

    // 0x1007273c0
    ImGuiIO DebugUIManager::DebugUIManager()::$_5::operator()(float arg1, float arg2) const {
        auto this_00 = ImGui::GetIO();
        this_00->AddMousePosEvent(arg1, arg2);
        this_00->AddMouseButtonEvent(1, false);
        return this_00[200];
    }

    // 0x100727ba0
    ImGuiIO DebugUIManager::DebugUIManager()::$_6::operator()(float arg1, float arg2) const {
        auto this_00 = ImGui::GetIO();
        this_00->AddMousePosEvent(arg1, arg2);
        this_00->AddMouseButtonEvent(2, false);
        return this_00[200];
    }

    // 0x100728380
    ImGuiIO DebugUIManager::DebugUIManager()::$_7::operator()(float arg1, float arg2) const {
        auto this_00 = ImGui::GetIO();
        this_00->AddMousePosEvent(arg1, arg2);
        return this_00[200];
    }

    // 0x100728b90
    ImGuiIO DebugUIManager::DebugUIManager()::$_8::operator()(float arg1, float arg2, float arg3, float arg4) const {
        auto this_00 = ImGui::GetIO();
        this_00->AddMousePosEvent(arg1, arg2);
        this_00->AddMouseWheelEvent(arg3, arg4);
        return this_00[200];
    }

    // 0x100729540
    ImGuiIO DebugUIManager::DebugUIManager()::$_9::operator()(int arg1) const {
        auto this_00 = ImGui::GetIO();
        this_00->AddInputCharacter((unsigned int)this);
        return this_00[201];
    }

    // 0x100729e80
    ImGuiIO DebugUIManager::DebugUIManager()::$_10::operator()(int arg1) const {
        auto this_00 = ImGui::GetIO();
        this_00->AddKeyEvent(KeyToImGuiKey((int)this), true);
        return this_00[201];
    }

    // 0x10072a630
    ImGuiIO DebugUIManager::DebugUIManager()::$_11::operator()(int arg1) const {
        auto this_00 = ImGui::GetIO();
        this_00->AddKeyEvent(KeyToImGuiKey((int)this), false);
        return this_00[201];
    }

    // 0x10072ae40
    ImGuiIO DebugUIManager::DebugUIManager()::$_12::operator()(unsigned long arg1, float arg2, float arg3) const {
        auto this_00 = ImGui::GetIO();
        if (this == nullptr) {
            this_00->AddMousePosEvent(arg2, arg3);
            this_00->AddMouseButtonEvent(0, true);
        }
        return this_00[200];
    }

    // 0x10072b7d0
    ImGuiIO DebugUIManager::DebugUIManager()::$_13::operator()(unsigned long arg1, float arg2, float arg3) const {
        auto this_00 = ImGui::GetIO();
        if (this == nullptr) {
            this_00->AddMousePosEvent(arg2, arg3);
        }
        return this_00[200];
    }

    // 0x10072bfb0
    ImGuiIO DebugUIManager::DebugUIManager()::$_14::operator()(unsigned long arg1, float arg2, float arg3) const {
        auto this_00 = ImGui::GetIO();
        if (this == nullptr) {
            this_00->AddMousePosEvent(arg2, arg3);
            this_00->AddMouseButtonEvent(0, false);
        }
        return this_00[200];
    }

} // namespace jag::debug

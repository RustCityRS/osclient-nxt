// libs/ui/components/Component.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "Component.h"

namespace jag::ui {
    // 0x100f38bd0, set at startup by ___cxx_global_var_init.28
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> Component::NullComponentShared =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100009720: Component::GetRGB() const has the same machine code as BaseApp::GetExitCode()

    // 0x100009e70: Component::SetLinkObjType(int) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: Component::FlagLayoutDirty() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: Component::MainDrawClipped(ComponentDependencies const&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: Component::SetLinkObjCount(unsigned long long) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: Component::LoadStyleSheetVisuals(StyleSheet const&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: Component::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: Component::SetMargin(Component::MarginType, Margin) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100029ea0: Component::ProcessSwipeMovement(math::Vector2T<int> const&, math::Vector2T<int> const&, float) has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: Component::GetClientCode() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: Component::SupportsMargin(Component::MarginType) const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: Component::GetLinkObjCount() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: Component::IsComponentCollection() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: Component::HasInteractionInProgress() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10002d860: Component::NotifyInteracted() has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x10005fe70: Component::SetCurrentWidth(int) has the same machine code as oldscape::widgets::CommandLineWidget::SetHighlightColour(unsigned int)

    // 0x10005fe80: Component::SetCurrentHeight(int) has the same machine code as oldscape::widgets::CommandLineWidget::SetSelectedTextColour(unsigned int)

    // 0x1000b7900: Component::GetCurrentWidth() const has the same machine code as oldscape::minimenu::MinimenuEntry::GetSubjectType() const

    // 0x1000b7900: Component::GetVisibleWidth() const has the same machine code as oldscape::minimenu::MinimenuEntry::GetSubjectType() const

    // 0x1000e31a0: Component::GetCurrentHeight() const has the same machine code as oldscape::graphics::NXTPixScreen::GetUIWidth() const

    // 0x1000e31a0: Component::GetVisibleHeight() const has the same machine code as oldscape::graphics::NXTPixScreen::GetUIWidth() const

    // 0x100120420: Component::GetLinkObjType() const has the same machine code as oldscape::javapal::GameShell::GetVisibleAppHeight()

    // 0x100120420: Component::GetLinkedStaticComponentID() const has the same machine code as oldscape::javapal::GameShell::GetVisibleAppHeight()

    // 0x1001c0a60: Component::GetDebugName() const has the same machine code as graphics::GraphNode::GetChildren() const

    // 0x1001fb280: Component::GetOpConfig() has the same machine code as http::CRMData::GetActionInfo() const

    // 0x1003a4970: Component::GetDragConfig() has the same machine code as Window::GetWindowInitParams()

    // 0x1003c2100: Component::GetSwipeConfig() has the same machine code as game::LocationContainer::GetDynamicMultiLocations() const

    // 0x1003f65a0: Component::GetDataHeight() const has the same machine code as EntityRoute::GetStalledTickCount() const

    // 0x100429b10: Component::GetDataWidth() const has the same machine code as game::StaticPointLight::GetRGB() const

    // 0x100431760: Component::GetCursorConfig() has the same machine code as game::Location::GetLocationType() const

    // 0x10043b780: Component::GetCurrentY() const has the same machine code as game::StaticPointLight::GetLightTypeToLoad() const

    // 0x1004491a0: Component::GetParams() has the same machine code as game::CombinedLocationSection::GetHighlightState()

    // 0x100619950: Component::GetParent() const has the same machine code as game::PositionEntity::GetPositionEntity() const

    // 0x100659510: Component::GetCurrentX() const has the same machine code as graphics::AnimationDescriptor::GetLoopBehaviour() const

    // 0x1006922c0
    void Component::Initialise(void (*arg1)(Component*, PacketT<Array<unsigned char>>&, int), int arg2, int arg3,
                               unsigned int arg4, PacketT<Array<unsigned char>>& arg5, const char* str) {
        uint32_t in_register_00000034;
        char* in_stack_00000008;

        *(short*)((long)arg1 + 8) = (short)arg3;
        *(short*)((long)arg1 + 10) = (short)arg4;
        (((long)arg1 + 360))->assign(in_stack_00000008);
        (*(void (*)(...))(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2))(arg1, str,
                                                                                    (unsigned long)arg5 & 4294967295);
    }

    // 0x100692310
    void Component::Initialise(const shared_ptr<Component>& component, int arg2) {
        ReturnValue local_30;

        auto pCVar4 = component.operator->();
        unsigned short uVar2 = GetInterfaceID(pCVar4);
        field_8 = uVar2;
        pCVar4 = (Component*)component.operator->();
        uVar2 = GetStaticID(pCVar4);
        field_10 = uVar2;
        pCVar4 = (Component*)component.operator->();
        uVar2 = GetStaticID(pCVar4);
        field_14 = uVar2;
        field_12 = (unsigned short)arg2;
        field_16 = component;
        pCVar4 = (Component*)component.operator->();
        if (HasDynamicRoot(pCVar4) == '\0') {
            pCVar4 = (Component*)component.operator->();
            if (GetDynamicID(pCVar4) != -1) {
                LogAssert(
                    "parent->GetDynamicID() == -1",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Component.cpp",
                    38, nullptr);
            }
            field_32 = component;
        } else {
            local_30 = ((Tweaky*)component.operator->())->GetFocus();
            field_32 = local_30;
        }
    }

    // 0x100692500
    void Component::ClippingTest(graphics::RT7Core& rt7Core, int arg2, int arg3) const {
        int iVar1 = GetStreamCountLastMix();
        int iVar2 = GetMinMapX();
        rt7Core.ClippingTest(arg2, arg3, iVar1 + arg2, iVar2 + arg3);
    }

    // 0x100692550
    unsigned long Component::GetSwipeable() const {
        unsigned int uVar2;
        long* plVar3;
        uint64_t unaff_R14;
        unsigned long uVar4;

        uint8_t* this_00 = &field_104;
        bool cVar1 = this_00->operator_cast_to_bool();
        if (!cVar1) {
            uVar4 = 0;
        } else {
            plVar3 = (long*)(*this_00).operator->();
            cVar1 = (**(void (**)(...))(*plVar3 + 24))(plVar3, 0);
            uVar4 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
            if (!cVar1) {
                plVar3 = (long*)(*this_00).operator->();
                cVar1 = (**(void (**)(...))(*plVar3 + 24))(plVar3, 1);
                if (!cVar1) {
                    plVar3 = (long*)(*this_00).operator->();
                    uVar2 = (**(void (**)(...))(*plVar3 + 24))(plVar3, 2);
                    uVar4 = (unsigned long)uVar2;
                }
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x100692600
    unsigned long Component::GetPinchable() const {
        unsigned int uVar2;
        long* plVar3;
        uint64_t unaff_R14;
        unsigned long uVar4;

        uint8_t* this_00 = &field_104;
        bool cVar1 = this_00->operator_cast_to_bool();
        if (!cVar1) {
            uVar4 = 0;
        } else {
            plVar3 = (long*)(*this_00).operator->();
            cVar1 = (**(void (**)(...))(*plVar3 + 24))(plVar3, 3);
            uVar4 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
            if (!cVar1) {
                plVar3 = (long*)(*this_00).operator->();
                cVar1 = (**(void (**)(...))(*plVar3 + 24))(plVar3, 4);
                if (!cVar1) {
                    plVar3 = (long*)(*this_00).operator->();
                    uVar2 = (**(void (**)(...))(*plVar3 + 24))(plVar3, 5);
                    uVar4 = (unsigned long)uVar2;
                }
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x100692680
    void Component::UpdateCurrentPosition(int arg1, int arg2, const math::Rect<int>& rect) {
        int iVar1 = CalculatePositionValue((unsigned int)field_50, field_56, m_currentWidth, arg1);
        m_currentX = iVar1;
        iVar1 = CalculatePositionValue((unsigned int)field_51, field_60, m_currentHeight, arg2);
        m_currentY = iVar1;
        if (field_54 != '\0') {
            iVar1 = rect.GetX();
            m_currentX = m_currentX + iVar1;
            iVar1 = rect.GetZ();
            m_currentY = m_currentY + iVar1;
        }
    }

    // 0x100692790
    bool Component::UpdateCurrentSize(int arg1, int arg2, const math::Rect<int>& rect) {
        uint8_t bVar1;
        bool cVar2;

        unsigned int uVar3 = m_currentWidth;
        int iVar4 = m_currentHeight;
        m_currentWidth = CalculateSizeValue((unsigned int)m_modeWidth, m_dataWidth, arg1);
        int iVar6 = CalculateSizeValue((unsigned int)m_modeHeight, m_dataHeight, arg2);
        m_currentHeight = iVar6;
        if (m_modeWidth == 4) {
            m_currentWidth = (iVar6 * field_72) / field_76;
            bVar1 = m_modeHeight;
        } else {
            bVar1 = m_modeHeight;
        }
        if (bVar1 == 4) {
            if (m_modeWidth == 4) {
                LogAssert(
                    "m_modeWidth != ComponentSizeMode::ASPECTRATIO",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Component.cpp",
                    92, nullptr);
            }
            m_currentHeight = (int)(field_76 * m_currentWidth) / field_72;
            cVar2 = field_54;
        } else {
            cVar2 = field_54;
        }
        if (cVar2) {
            iVar6 = rect.Right();
            m_currentWidth = m_currentWidth - iVar6;
            iVar6 = rect.MaxZ();
            m_currentHeight = m_currentHeight - iVar6;
        }
        bool bVar7 = true;
        if (uVar3 == m_currentWidth) {
            bVar7 = iVar4 != m_currentHeight;
        }
        return bVar7;
    }

    // 0x1006928d0
    uint64_t Component::CalculatePosition() const {
        int local_20;
        int iStack_1c;

        new (&local_20) shared_ptr();
        switch (field_50) {
        case 0:
            local_20 = field_56;
            break;
        case 1:
            local_20 = -((int)m_currentWidth / 2);
            break;
        case 2:
            local_20 = -m_currentWidth;
            break;
        case 3:
            goto switchD_1006928fd_caseD_3;
        case 4:
            local_20 = -((int)m_currentWidth / 2);
            goto switchD_1006928fd_caseD_3;
        case 5:
            local_20 = -m_currentWidth;
        switchD_1006928fd_caseD_3:
        }
        switch (field_51) {
        case 0:
            iStack_1c = field_60;
            break;
        case 1:
            iStack_1c = -(m_currentHeight / 2);
            break;
        case 2:
            iStack_1c = -m_currentHeight;
            break;
        case 3:
            goto switchD_100692977_caseD_3;
        case 4:
            iStack_1c = -(m_currentHeight / 2);
            goto switchD_100692977_caseD_3;
        case 5:
            iStack_1c = -m_currentHeight;
        switchD_100692977_caseD_3:
        }
        return (((uint64_t)iStack_1c << 32) | (uint32_t)local_20);
    }

    // 0x100692a20
    uint64_t Component::CalculateSize() const {
        int iVar2;
        int local_20;
        int iStack_1c;
        float local_18;

        new (&local_20) shared_ptr();
        char cVar1 = GetTextAlpha();
        if (cVar1 == '\x02') {
            iVar2 = GetAmplitude();
            local_18 = (float)iVar2 * 6.1035156e-05;
        } else if (cVar1 == '\x01') {
            local_20 = GetAmplitude();
            local_20 = -local_20;
            local_18 = 1.0;
        } else if (!cVar1) {
            local_20 = GetAmplitude();
        }
        cVar1 = GetModeHeight();
        if (cVar1 == '\x02') {
            GetDuration();
        } else if (cVar1 == '\x01') {
            iStack_1c = GetDuration();
            iStack_1c = -iStack_1c;
        } else if (!cVar1) {
            iStack_1c = GetDuration();
        }
        return (((uint64_t)iStack_1c << 32) | (uint32_t)local_20);
    }

    // 0x100692af0
    uint8_t[16] Component::ApplyAspectRatioSize() {
        long lVar1;
        long lVar2;
        unsigned long uVar3;
        uint8_t auVar4[16];
        unsigned long in_RDX;
        uint8_t auVar5[16];

        if (m_modeWidth == 4) {
            lVar1 = (long)(field_72 * m_currentHeight);
            lVar2 = lVar1 / (long)field_76;
            uVar3 = lVar1 % (long)field_76;
            m_currentWidth = (unsigned int)lVar2;
        } else {
            if (m_modeHeight != 4) {
                auVar4._8_8_ = 0;
                auVar4._0_8_ = in_RDX;
                return auVar4 << 64;
            }
            lVar1 = (long)(int)(field_76 * m_currentWidth);
            lVar2 = lVar1 / (long)field_72;
            uVar3 = lVar1 % (long)field_72;
            m_currentHeight = (int)lVar2;
        }
        auVar5._8_8_ = uVar3 & 4294967295;
        auVar5._1_7_ = (uint64_t)((unsigned long)lVar2 >> 8) & 16777215;
        auVar5[0] = 1;
        return auVar5;
    }

    // 0x100692b30
    void Component::ApplyStyleSheet() {
        uint64_t in_RAX;
        long lVar1;

        uint32_t uVar2 = (uint32_t)((unsigned long)in_RAX >> 32);
        if (m_styleSheetPackID != -1) {
            lVar1 = ((StyleSheetRegistry*)StyleSheetRegistry::Instance())->Find((int)m_styleSheetPackID);
            if (lVar1 == 0) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                          "Component.cpp",
                          243, "Could not access style sheet %d - packing issue?",
                          (((uint64_t)uVar2 << 32) | (uint32_t)((int)m_styleSheetPackID)));
            } else {
                MainLogic(lVar1);
            }
        }
    }

    // 0x100692c70
    uint64_t Component::BindAnimation(graphics::GUIAnimationInstance& guiAnimationInstance) {
        int iVar2;
        int* arg1;
        uint8_t local_30[8];
        __40 local_28;

        uint32_t uVar1 = guiAnimationInstance.GetTarget();
        local_30 = (uint8_t[8])this;
        local_28.field_0 = (long*)this;
        switch (uVar1) {
        case 0:
            iVar2 = guiAnimationInstance.GetTargetMode();
            if (iVar2 == 1) {
                local_28 = math::Vector2T();
                graphics::GUIAnimationInstance::BindIndirect<math::Vector2T<int>,
                                                             (graphics::GUIAnimationInstance&)->BindAnimation()::__38>(
                    guiAnimationInstance, (Vector2T<int>*)&local_28, (__38*)local_30);
            } else {
                iVar2 = guiAnimationInstance.GetTargetMode();
                if (iVar2 == 2) {
                    local_28 = oldscape::sidebars::SideBarData(m_currentWidth, m_currentHeight);
                    graphics::GUIAnimationInstance::BindIndirect<
                        math::Vector2T<int>, (graphics::GUIAnimationInstance&)->BindAnimation()::__39>(
                        guiAnimationInstance, (Vector2T<int>*)&local_28, (__39*)local_30);
                } else {
                    graphics::GUIAnimationInstance::BindIndirect<Component::BindAnimation(
                        graphics::GUIAnimationInstance&)::__40>(guiAnimationInstance, &local_28);
                }
            }
            break;
        case 1:
        case 4:
            arg1 = &m_currentX;
            goto LAB_100692cb0;
        case 2:
        case 5:
            arg1 = &m_currentY;
        LAB_100692cb0:
            guiAnimationInstance.Bind<int>(arg1);
            break;
        case 3:
            iVar2 = guiAnimationInstance.GetTargetMode();
            if (iVar2 == 1) {
                local_28 = math::Vector2T();
                graphics::GUIAnimationInstance::BindIndirect<math::Vector2T<int>,
                                                             (graphics::GUIAnimationInstance&)->BindAnimation()::__32>(
                    guiAnimationInstance, (Vector2T<int>*)&local_28, (__32*)local_30);
            } else {
                iVar2 = guiAnimationInstance.GetTargetMode();
                if (iVar2 == 2) {
                    local_28 = oldscape::sidebars::SideBarData(m_currentX, m_currentY);
                    graphics::GUIAnimationInstance::BindIndirect<
                        math::Vector2T<int>, (graphics::GUIAnimationInstance&)->BindAnimation()::__33>(
                        guiAnimationInstance, (Vector2T<int>*)&local_28, (__33*)local_30);
                } else {
                    graphics::GUIAnimationInstance::BindIndirect<Component::BindAnimation(
                        graphics::GUIAnimationInstance&)::__34>(guiAnimationInstance, (__34*)&local_28);
                }
            }
            break;
        case 6:
            iVar2 = guiAnimationInstance.GetTargetMode();
            if (iVar2 == 1) {
                new (local_30) graphics::GUIAnimationRGB(0, 0, 0);
                graphics::GUIAnimationInstance::BindIndirect<graphics::GUIAnimationRGB,
                                                             (graphics::GUIAnimationInstance&)->BindAnimation()::__35>(
                    guiAnimationInstance, (GUIAnimationRGB*)local_30, (__35*)&local_28);
            } else {
                iVar2 = guiAnimationInstance.GetTargetMode();
                if (iVar2 == 2) {
                    graphics::GUIAnimationInstance::BindIndirect<
                        unsigned int&, (graphics::GUIAnimationInstance&)->BindAnimation()::__36>(
                        guiAnimationInstance, &m_rGB, (__36*)&local_28);
                } else {
                    graphics::GUIAnimationInstance::BindIndirect<Component::BindAnimation(
                        graphics::GUIAnimationInstance&)::__37>(guiAnimationInstance, (__37*)&local_28);
                }
            }
            break;
        case 7:
            guiAnimationInstance.Bind<unsigned char>(&m_alpha);
            break;
        default:
            return 0;
        }
        return 1;
    }

    // 0x1006932a0
    int ComponentHelpers::EncodeDynamicID(int arg1, int arg2) {
        if (EncodableDynamicID(arg1, arg2) == '\0') {
            LogAssert(
                "EncodableDynamicID(categoryID, dynamicID)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Component.cpp",
                371, nullptr);
        }
        int iVar2 = 0;
        if (0 < arg1) {
            iVar2 = arg1 * 256 + 3840;
        }
        return iVar2 + arg2;
    }

    // 0x100693320
    int ComponentHelpers::GetCategoryID(unsigned int arg1) {
        int iVar1;

        if (arg1 - 4096 < 60160) {
            iVar1 = (arg1 - 4096 >> 8) + 1;
        } else {
            iVar1 = 0;
            if (64255 < arg1) {
                LogAssert(
                    "encodedDynamicID < MAX_ENCODED_ID",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Component.cpp",
                    392, nullptr);
            }
        }
        return iVar1;
    }

    // 0x100693370
    unsigned int ComponentHelpers::GetDynamicID(unsigned int arg1) {
        int iVar1;

        if (arg1 - 4096 < 60160) {
            iVar1 = GetCategoryID(arg1);
            arg1 = (arg1 + iVar1 * -256) - 3840;
        } else if (64255 < arg1) {
            LogAssert(
                "encodedDynamicID < MAX_ENCODED_ID",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Component.cpp",
                407, nullptr);
        }
        return arg1;
    }

    // 0x1006cd810
    void Component::BindAnimation(graphics::GUIAnimationInstance&)::$_35::operator()(
        graphics::GUIAnimationRGB* guiAnimationRGB1, graphics::GUIAnimationRGB guiAnimationRGB2,
        graphics::GUIAnimationRGB guiAnimationRGB3, float arg4) const {
        GUIAnimationRGB guiAnimationRGB;
        GUIAnimationRGB guiAnimationRGB_00;
        uint32_t in_EDX;
        uint64_t in_stack_ffffffffffffffc8;
        uint8_t local_28[8];
        uint8_t local_20[4];

        long lVar1 = field_0;
        guiAnimationRGB._8_4_ = in_EDX;
        guiAnimationRGB._0_8_ = in_stack_ffffffffffffffc8;
        uint64_t uVar3 = ((local_28 - 8))->Lerp(guiAnimationRGB, arg4);
        local_20 = (uint32_t)uVar3;
        short local_1c = (short)((unsigned long)uVar3 >> 32);
        guiAnimationRGB_00._8_4_ = in_EDX;
        guiAnimationRGB_00.field_0 = (short)in_stack_ffffffffffffffc8;
        guiAnimationRGB_00.field_2 = (short)((unsigned long)in_stack_ffffffffffffffc8 >> 16);
        guiAnimationRGB_00.field_4 = (short)((unsigned long)in_stack_ffffffffffffffc8 >> 32);
        guiAnimationRGB_00._6_2_ = (short)((unsigned long)in_stack_ffffffffffffffc8 >> 48);
        uVar3 = local_20->Delta(guiAnimationRGB_00);
        local_28._0_4_ = (uint32_t)uVar3;
        local_28._4_2_ = (uint16_t)((unsigned long)uVar3 >> 32);
        guiAnimationRGB1->field_0 = local_20._0_2_;
        guiAnimationRGB1->field_2 = local_20._2_2_;
        guiAnimationRGB1->field_4 = local_1c;
        uint32_t uVar2 = local_28->EvalAdd(*(unsigned int*)(lVar1 + 96));
        *(uint32_t*)(lVar1 + 96) = uVar2;
    }

    // 0x1006cdea0
    void Component::BindAnimation(graphics::GUIAnimationInstance&)::$_36::operator()(
        unsigned int* arg1, graphics::GUIAnimationRGB guiAnimationRGB1, graphics::GUIAnimationRGB guiAnimationRGB2,
        float arg4) const {
        GUIAnimationRGB guiAnimationRGB;
        uint64_t in_RDX;
        GUIAnimationRGB aGStackY_628[128];
        uint16_t in_stack_ffffffffffffffde;
        uint32_t in_stack_ffffffffffffffe0;
        uint8_t auStack_1a[2];

        long lVar1 = field_0;
        guiAnimationRGB._6_2_ = in_stack_ffffffffffffffde;
        guiAnimationRGB.field_0 = (short)in_RDX;
        guiAnimationRGB.field_2 = (short)((unsigned long)in_RDX >> 16);
        guiAnimationRGB.field_4 = (short)((unsigned long)in_RDX >> 32);
        guiAnimationRGB._8_4_ = in_stack_ffffffffffffffe0;
        (aGStackY_628 + 128)->Lerp(guiAnimationRGB, arg4);
        uint32_t uVar2 = aGStackY_628[128].field_8.EvalMultiply(*arg1);
        *(uint32_t*)(lVar1 + 96) = uVar2;
    }

    // 0x1006ce290
    void Component::BindAnimation(graphics::GUIAnimationInstance&)::$_37::operator()(
        graphics::GUIAnimationRGB guiAnimationRGB1, graphics::GUIAnimationRGB guiAnimationRGB2, float arg3) const {
        GUIAnimationRGB guiAnimationRGB;
        uint32_t in_ESI;
        uint64_t in_stack_ffffffffffffffd8;
        uint8_t local_18[4];

        long lVar1 = field_0;
        guiAnimationRGB._8_4_ = in_ESI;
        guiAnimationRGB._0_8_ = in_stack_ffffffffffffffd8;
        uint64_t uVar3 = ((local_18 - 8))->Lerp(guiAnimationRGB, arg3);
        local_18 = (uint32_t)uVar3;
        short local_14 = (short)((unsigned long)uVar3 >> 32);
        uint32_t uVar2 = local_18->AsUint();
        *(uint32_t*)(lVar1 + 96) = uVar2;
    }

    // 0x100c92b50: Component::~Component() has the same machine code as InlineFatalBreak()

} // namespace jag::ui

// libs/ui/components/Component.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "Component.h"

namespace jag::ui {
    // 0x100f38bd0, 16 bytes, __data; set at startup by ___cxx_global_var_init.28
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> Component::NullComponentShared;

    // 0x100009720: the linker folded this into BaseApp::GetExitCode(), which has identical code
    Component::GetRGB() const;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Component::SetLinkObjType(int);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Component::FlagLayoutDirty();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Component::MainDrawClipped(ComponentDependencies const&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Component::SetLinkObjCount(unsigned long long);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Component::LoadStyleSheetVisuals(StyleSheet const&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Component::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Component::SetMargin(Component::MarginType, Margin);

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    Component::ProcessSwipeMovement(math::Vector2T<int> const&, math::Vector2T<int> const&, float);

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    Component::GetClientCode() const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    Component::SupportsMargin(Component::MarginType) const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    Component::GetLinkObjCount() const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    Component::IsComponentCollection() const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    Component::HasInteractionInProgress() const;

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    Component::NotifyInteracted();

    // 0x10005fe70: the linker folded this into oldscape::widgets::CommandLineWidget::SetHighlightColour(unsigned int), which has identical code
    Component::SetCurrentWidth(int);

    // 0x10005fe80: the linker folded this into oldscape::widgets::CommandLineWidget::SetSelectedTextColour(unsigned int), which has identical code
    Component::SetCurrentHeight(int);

    // 0x1000b7900: the linker folded this into oldscape::minimenu::MinimenuEntry::GetSubjectType() const, which has identical code
    int Component::GetCurrentWidth() const;

    // 0x1000b7900: the linker folded this into oldscape::minimenu::MinimenuEntry::GetSubjectType() const, which has identical code
    Component::GetVisibleWidth() const;

    // 0x1000e31a0: the linker folded this into oldscape::graphics::NXTPixScreen::GetUIWidth() const, which has identical code
    int Component::GetCurrentHeight() const;

    // 0x1000e31a0: the linker folded this into oldscape::graphics::NXTPixScreen::GetUIWidth() const, which has identical code
    Component::GetVisibleHeight() const;

    // 0x100120420: the linker folded this into oldscape::javapal::GameShell::GetVisibleAppHeight(), which has identical code
    Component::GetLinkObjType() const;

    // 0x100120420: the linker folded this into oldscape::javapal::GameShell::GetVisibleAppHeight(), which has identical code
    Component::GetLinkedStaticComponentID() const;

    // 0x1001c0a60: the linker folded this into graphics::GraphNode::GetChildren() const, which has identical code
    Component::GetDebugName() const;

    // 0x1001fb280: the linker folded this into http::CRMData::GetActionInfo() const, which has identical code
    Component::GetOpConfig();

    // 0x1003a4970: the linker folded this into Window::GetWindowInitParams(), which has identical code
    VisibleShadowCastingLightInfo Component::GetDragConfig();

    // 0x1003bb930, 128 bytes, placed by the data it initialises
    // ___cxx_global_var_init.28
    void ___cxx_global_var_init_28(undefined8 param_1, _func_decltype_nullptr* param_2) {
        if (*PTR_NullComponentShared_100ee4660 == '\0') {
            if (___cxa_guard_acquire(PTR_NullComponentShared_100ee4660) != 0) {
                new (PTR_NullComponentShared_100ee6498)
                    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
                ___cxa_atexit(PTR__shared_ptr_100ee5178, PTR_NullComponentShared_100ee6498, 4294967296);
                ___cxa_guard_release(PTR_NullComponentShared_100ee4660);
            }
        }
    }

    // 0x1003c2100: the linker folded this into game::LocationContainer::GetDynamicMultiLocations() const, which has identical code
    Component::GetSwipeConfig();

    // 0x1003f65a0: the linker folded this into EntityRoute::GetStalledTickCount() const, which has identical code
    int Component::GetDataHeight() const;

    // 0x100429b10: the linker folded this into game::StaticPointLight::GetRGB() const, which has identical code
    int Component::GetDataWidth() const;

    // 0x100431760: the linker folded this into game::Location::GetLocationType() const, which has identical code
    Component::GetCursorConfig();

    // 0x10043b780: the linker folded this into game::StaticPointLight::GetLightTypeToLoad() const, which has identical code
    int Component::GetCurrentY() const;

    // 0x1004491a0: the linker folded this into game::CombinedLocationSection::GetHighlightState(), which has identical code
    Component::GetParams();

    // 0x100619950: the linker folded this into game::PositionEntity::GetPositionEntity() const, which has identical code
    Component::GetParent() const;

    // 0x100659510: the linker folded this into graphics::AnimationDescriptor::GetLoopBehaviour() const, which has identical code
    int Component::GetCurrentX() const;

    // 0x1006922c0, 80 bytes, placed by class name and debug map
    // Component::Initialise(void (*)(Component*, PacketT<Array<unsigned char, eastl::allocator> >&, int), int, int, unsigned int, PacketT<Array<unsigned char, eastl::allocator> >&, char const*)
    void Component::Initialise(_func_void_Component_ptr_PacketT_ptr_int* param_1, int param_2, int param_3,
                               uint param_4, PacketT* param_5, char* param_6) {
        field_8 = (ushort)param_2;
        field_10 = (ushort)param_3;
        (&field_360, param_6)->assign();
        (*param_1)(this, param_5, param_4);
    }

    // 0x100692310, 272 bytes, placed by class name and debug map
    // Component::Initialise(shared_ptr<Component> const&, int)
    void Component::Initialise(shared_ptr* param_1, int param_2) {
        ushort uVar2;
        Component* pCVar4;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_30[16];

        pCVar4 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
        uVar2 = GetInterfaceID(pCVar4);
        field_8 = uVar2;
        pCVar4 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
        uVar2 = GetStaticID(pCVar4);
        field_10 = uVar2;
        pCVar4 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
        uVar2 = GetStaticID(pCVar4);
        m_layerID = uVar2;
        field_12 = (ushort)param_2;
        weak_ptr<Component>::operator=((weak_ptr<Component>*)&field_16, param_1);
        pCVar4 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
        if (HasDynamicRoot(pCVar4) == '\0') {
            pCVar4 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
            if (GetDynamicID(pCVar4) != -1) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "parent->GetDynamicID() == -1",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Component.cpp",
                    38, (char*)0);
            }
            weak_ptr<Component>::operator=((weak_ptr<Component>*)&field_32, param_1);
        } else {
            shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
            local_30->GetFocus();
            weak_ptr<Component>::operator=((weak_ptr<Component>*)&field_32, (shared_ptr*)local_30);
            local_30->~shared_ptr();
        }
    }

    // 0x100692500, 80 bytes, placed by class name and debug map
    // Component::ClippingTest(graphics::RT7Core&, int, int) const
    void Component::ClippingTest(RT7Core* param_1, int param_2, int param_3) {
        int iVar1;
        int iVar2;

        iVar1 = GetStreamCountLastMix();
        iVar2 = GetMinMapX();
        param_1->ClippingTest(param_2, param_3, iVar1 + param_2, iVar2 + param_3);
    }

    // 0x100692550, 128 bytes, placed by class name and debug map
    // Component::GetSwipeable() const
    ulong Component::GetSwipeable() {
        char cVar2;
        uint uVar3;
        long* plVar4;
        undefined1* this_00;
        undefined8 unaff_R14;
        ulong uVar5;

        this_00 = &field_104;
        if (this_00->operator_cast_to_bool()) {
            plVar4 = (long*)std::unique_ptr<UIHookProperties, std::default_delete<UIHookProperties>>::operator->(
                (unique_ptr<UIHookProperties, std::default_delete<UIHookProperties>>*)this_00);
            cVar2 = (**(code**)(*plVar4 + 24))(plVar4, 0);
            uVar5 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
            if (cVar2 == '\0') {
                plVar4 = (long*)std::unique_ptr<UIHookProperties, std::default_delete<UIHookProperties>>::operator->(
                    (unique_ptr<UIHookProperties, std::default_delete<UIHookProperties>>*)this_00);
                cVar2 = (**(code**)(*plVar4 + 24))(plVar4, 1);
                if (cVar2 == '\0') {
                    plVar4 =
                        (long*)std::unique_ptr<UIHookProperties, std::default_delete<UIHookProperties>>::operator->(
                            (unique_ptr<UIHookProperties, std::default_delete<UIHookProperties>>*)this_00);
                    uVar3 = (**(code**)(*plVar4 + 24))(plVar4, 2);
                    uVar5 = (ulong)uVar3;
                }
            }
        } else {
            uVar5 = 0;
        }
        return uVar5 & 4294967295;
    }

    // 0x100692600, 128 bytes, placed by class name and debug map
    // Component::GetPinchable() const
    ulong Component::GetPinchable() {
        char cVar2;
        uint uVar3;
        long* plVar4;
        undefined1* this_00;
        undefined8 unaff_R14;
        ulong uVar5;

        this_00 = &field_104;
        if (this_00->operator_cast_to_bool()) {
            plVar4 = (long*)std::unique_ptr<UIHookProperties, std::default_delete<UIHookProperties>>::operator->(
                (unique_ptr<UIHookProperties, std::default_delete<UIHookProperties>>*)this_00);
            cVar2 = (**(code**)(*plVar4 + 24))(plVar4, 3);
            uVar5 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
            if (cVar2 == '\0') {
                plVar4 = (long*)std::unique_ptr<UIHookProperties, std::default_delete<UIHookProperties>>::operator->(
                    (unique_ptr<UIHookProperties, std::default_delete<UIHookProperties>>*)this_00);
                cVar2 = (**(code**)(*plVar4 + 24))(plVar4, 4);
                if (cVar2 == '\0') {
                    plVar4 =
                        (long*)std::unique_ptr<UIHookProperties, std::default_delete<UIHookProperties>>::operator->(
                            (unique_ptr<UIHookProperties, std::default_delete<UIHookProperties>>*)this_00);
                    uVar3 = (**(code**)(*plVar4 + 24))(plVar4, 5);
                    uVar5 = (ulong)uVar3;
                }
            }
        } else {
            uVar5 = 0;
        }
        return uVar5 & 4294967295;
    }

    // 0x100692680, 112 bytes, placed by class name and debug map
    // Component::UpdateCurrentPosition(int, int, math::Rect<int> const&)
    void Component::UpdateCurrentPosition(int param_1, int param_2, Rect* param_3) {
        int iVar1;

        iVar1 = CalculatePositionValue(field_50, m_dataX, m_currentWidth, param_1);
        m_currentX = iVar1;
        iVar1 = CalculatePositionValue(field_51, m_dataY, m_currentHeight, param_2);
        m_currentY = iVar1;
        if (field_54 != '\0') {
            iVar1 = param_3->GetX();
            m_currentX = m_currentX + iVar1;
            iVar1 = param_3->GetZ();
            m_currentY = m_currentY + iVar1;
        }
    }

    // 0x100692790, 224 bytes, placed by class name
    // Component::UpdateCurrentSize(int, int, math::Rect<int> const&)
    bool Component::UpdateCurrentSize(int param_1, int param_2, Rect* param_3) {
        char cVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        bool bVar5;

        iVar2 = m_currentWidth;
        iVar3 = m_currentHeight;
        iVar4 = CalculateSizeValue(m_modeWidth, m_dataWidth, param_1);
        m_currentWidth = iVar4;
        iVar4 = CalculateSizeValue(m_modeHeight, m_dataHeight, param_2);
        m_currentHeight = iVar4;
        if (m_modeWidth == '\x04') {
            m_currentWidth = (iVar4 * m_aspectRatioWidth) / m_aspectRatioHeight;
            cVar1 = m_modeHeight;
        } else {
            cVar1 = m_modeHeight;
        }
        if (cVar1 == '\x04') {
            if (m_modeWidth == '\x04') {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "m_modeWidth != ComponentSizeMode::ASPECTRATIO",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Component.cpp",
                    92, (char*)0);
            }
            m_currentHeight = (m_aspectRatioHeight * m_currentWidth) / m_aspectRatioWidth;
            cVar1 = field_54;
        } else {
            cVar1 = field_54;
        }
        if (cVar1 != '\0') {
            iVar4 = param_3->Right();
            m_currentWidth = m_currentWidth - iVar4;
            iVar4 = param_3->MaxZ();
            m_currentHeight = m_currentHeight - iVar4;
        }
        bVar5 = true;
        if (iVar2 == m_currentWidth) {
            bVar5 = iVar3 != m_currentHeight;
        }
        return bVar5;
    }

    // 0x1006928d0, 336 bytes, placed by class name
    // Component::CalculatePosition() const
    undefined8 Component::CalculatePosition() {
        _func_decltype_nullptr* in_RSI;
        int local_20;
        int iStack_1c;

        new (&local_20) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        switch (field_50) {
        case '\0':
            local_20 = m_dataX;
            break;
        case '\x01':
            local_20 = -(m_currentWidth / 2);
            break;
        case '\x02':
            local_20 = -m_currentWidth;
            break;
        case '\x03':
            goto switchD_1006928fd_caseD_3;
        case '\x04':
            local_20 = -(m_currentWidth / 2);
            goto switchD_1006928fd_caseD_3;
        case '\x05':
            local_20 = -m_currentWidth;
        switchD_1006928fd_caseD_3:
        }
        switch (field_51) {
        case '\0':
            iStack_1c = m_dataY;
            break;
        case '\x01':
            iStack_1c = -(m_currentHeight / 2);
            break;
        case '\x02':
            iStack_1c = -m_currentHeight;
            break;
        case '\x03':
            goto switchD_100692977_caseD_3;
        case '\x04':
            iStack_1c = -(m_currentHeight / 2);
            goto switchD_100692977_caseD_3;
        case '\x05':
            iStack_1c = -m_currentHeight;
        switchD_100692977_caseD_3:
        }
        return CONCAT44(iStack_1c, local_20);
    }

    // 0x100692a20, 208 bytes, placed by class name
    // Component::CalculateSize() const
    undefined8 Component::CalculateSize() {
        char cVar1;
        int iVar2;
        _func_decltype_nullptr* in_RSI;
        int local_20;
        int iStack_1c;
        float local_18;

        new (&local_20) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        cVar1 = GetTextAlpha();
        if (cVar1 == '\x02') {
            iVar2 = GetAmplitude();
            local_18 = (float)iVar2 * 6.1035156e-05;
        } else if (cVar1 == '\x01') {
            local_20 = GetAmplitude();
            local_20 = -local_20;
            local_18 = 1.0;
        } else if (cVar1 == '\0') {
            local_20 = GetAmplitude();
        }
        cVar1 = GetModeHeight(this);
        if (cVar1 == '\x02') {
            GetDuration();
        } else if (cVar1 == '\x01') {
            iStack_1c = GetDuration();
            iStack_1c = -iStack_1c;
        } else if (cVar1 == '\0') {
            iStack_1c = GetDuration();
        }
        return CONCAT44(iStack_1c, local_20);
    }

    // 0x100692af0, 64 bytes, placed by class name
    // Component::ApplyAspectRatioSize()
    undefined1[16] Component::ApplyAspectRatioSize() {
        long lVar1;
        long lVar2;
        ulong uVar3;
        undefined1 auVar4[16];
        ulong in_RDX;
        undefined1 auVar5[16];

        if (m_modeWidth == '\x04') {
            lVar1 = (long)(m_aspectRatioWidth * m_currentHeight);
            lVar2 = lVar1 / (long)m_aspectRatioHeight;
            uVar3 = lVar1 % (long)m_aspectRatioHeight;
            m_currentWidth = (int)lVar2;
        } else {
            if (m_modeHeight != '\x04') {
                auVar4._8_8_ = 0;
                auVar4._0_8_ = in_RDX;
                return auVar4 << 64;
            }
            lVar1 = (long)(m_aspectRatioHeight * m_currentWidth);
            lVar2 = lVar1 / (long)m_aspectRatioWidth;
            uVar3 = lVar1 % (long)m_aspectRatioWidth;
            m_currentHeight = (int)lVar2;
        }
        auVar5._8_8_ = uVar3 & 4294967295;
        auVar5._1_7_ = (uint7)((ulong)lVar2 >> 8) & 16777215;
        auVar5[0] = 1;
        return auVar5;
    }

    // 0x100692b30, 112 bytes, placed by class name
    // Component::ApplyStyleSheet()
    void Component::ApplyStyleSheet() {
        undefined8 in_RAX;
        StyleSheetRegistry* this_00;
        long lVar1;
        undefined8 uVar2;
        undefined4 uVar3;

        uVar3 = (undefined4)((ulong)in_RAX >> 32);
        if (m_styleSheetPackID != -1) {
            this_00 = (StyleSheetRegistry*)StyleSheetRegistry::Instance();
            lVar1 = this_00->Find((int)m_styleSheetPackID);
            if (lVar1 == 0) {
                uVar2 = logger::default_logger();
                logger::Logger::Log(
                    uVar2, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Component.cpp",
                    243, "Could not access style sheet %d - packing issue?", CONCAT44(uVar3, (int)m_styleSheetPackID));
            } else {
                (*(code*)field_0[31])(this, lVar1);
            }
        }
    }

    // 0x100692c70, 528 bytes, placed by class name
    // Component::BindAnimation(graphics::GUIAnimationInstance&)
    undefined8 Component::BindAnimation(GUIAnimationInstance* param_1) {
        undefined4 uVar1;
        int iVar2;
        int* piVar3;
        undefined1 local_30[8];
        Component* local_28;

        uVar1 = param_1->GetTarget();
        local_30 = (undefined1[8])this;
        local_28 = this;
        switch (uVar1) {
        case 0:
            iVar2 = param_1->GetTargetMode();
            if (iVar2 == 1) {
                new (&local_28) math::Vector2T<int>();
                graphics::GUIAnimationInstance::BindIndirect<math::Vector2T<int>,
                                                             (graphics::GUIAnimationInstance&)->BindAnimation()::__38>(
                    param_1, (Vector2T*)&local_28, (__38*)local_30);
            } else {
                iVar2 = param_1->GetTargetMode();
                if (iVar2 == 2) {
                    new (&local_28) oldscape::sidebars::SideBarData(m_currentWidth, m_currentHeight);
                    graphics::GUIAnimationInstance::BindIndirect<
                        math::Vector2T<int>, (graphics::GUIAnimationInstance&)->BindAnimation()::__39>(
                        param_1, (Vector2T*)&local_28, (__39*)local_30);
                } else {
                    graphics::GUIAnimationInstance::BindIndirect<Component::BindAnimation(
                        graphics::GUIAnimationInstance&)::__40>(param_1, (__40*)&local_28);
                }
            }
            break;
        case 1:
        case 4:
            piVar3 = &m_currentX;
            goto LAB_100692cb0;
        case 2:
        case 5:
            piVar3 = &m_currentY;
        LAB_100692cb0:
            graphics::GUIAnimationInstance::Bind<int>(param_1, piVar3);
            break;
        case 3:
            iVar2 = param_1->GetTargetMode();
            if (iVar2 == 1) {
                new (&local_28) math::Vector2T<int>();
                graphics::GUIAnimationInstance::BindIndirect<math::Vector2T<int>,
                                                             (graphics::GUIAnimationInstance&)->BindAnimation()::__32>(
                    param_1, (Vector2T*)&local_28, (__32*)local_30);
            } else {
                iVar2 = param_1->GetTargetMode();
                if (iVar2 == 2) {
                    new (&local_28) oldscape::sidebars::SideBarData(m_currentX, m_currentY);
                    graphics::GUIAnimationInstance::BindIndirect<
                        math::Vector2T<int>, (graphics::GUIAnimationInstance&)->BindAnimation()::__33>(
                        param_1, (Vector2T*)&local_28, (__33*)local_30);
                } else {
                    graphics::GUIAnimationInstance::BindIndirect<Component::BindAnimation(
                        graphics::GUIAnimationInstance&)::__34>(param_1, (__34*)&local_28);
                }
            }
            break;
        case 6:
            iVar2 = param_1->GetTargetMode();
            if (iVar2 == 1) {
                new (local_30) graphics::GUIAnimationRGB(0, 0, 0);
                graphics::GUIAnimationInstance::BindIndirect<graphics::GUIAnimationRGB,
                                                             (graphics::GUIAnimationInstance&)->BindAnimation()::__35>(
                    param_1, (GUIAnimationRGB*)local_30, (__35*)&local_28);
            } else {
                iVar2 = param_1->GetTargetMode();
                if (iVar2 == 2) {
                    graphics::GUIAnimationInstance::BindIndirect<
                        unsigned int&, (graphics::GUIAnimationInstance&)->BindAnimation()::__36>(param_1, &m_rGB,
                                                                                                 (__36*)&local_28);
                } else {
                    graphics::GUIAnimationInstance::BindIndirect<Component::BindAnimation(
                        graphics::GUIAnimationInstance&)::__37>(param_1, (__37*)&local_28);
                }
            }
            break;
        case 7:
            graphics::GUIAnimationInstance::Bind<unsigned char>(param_1, &m_alpha);
            break;
        default:
            return 0;
        }
        return 1;
    }

    // 0x1006932a0, 80 bytes, placed by __FILE__ string
    // ComponentHelpers::EncodeDynamicID(int, int)
    int ComponentHelpers::EncodeDynamicID(int param_1, int param_2) {
        int iVar2;

        if (EncodableDynamicID(param_1, param_2) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "EncodableDynamicID(categoryID, dynamicID)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Component.cpp",
                371, (char*)0);
        }
        iVar2 = 0;
        if (0 < param_1) {
            iVar2 = param_1 * 256 + 3840;
        }
        return iVar2 + param_2;
    }

    // 0x100693320, 80 bytes, placed by __FILE__ string
    // ComponentHelpers::GetCategoryID(unsigned int)
    int ComponentHelpers::GetCategoryID(uint param_1) {
        int iVar1;

        if (param_1 - 4096 < 60160) {
            iVar1 = (param_1 - 4096 >> 8) + 1;
        } else {
            iVar1 = 0;
            if (64255 < param_1) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "encodedDynamicID < MAX_ENCODED_ID",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Component.cpp",
                    392, (char*)0);
            }
        }
        return iVar1;
    }

    // 0x100693370, 96 bytes, placed by __FILE__ string
    // ComponentHelpers::GetDynamicID(unsigned int)
    uint ComponentHelpers::GetDynamicID(uint param_1) {
        int iVar1;

        if (param_1 - 4096 < 60160) {
            iVar1 = GetCategoryID(param_1);
            param_1 = (param_1 + iVar1 * -256) - 3840;
        } else if (64255 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "encodedDynamicID < MAX_ENCODED_ID",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Component.cpp",
                407, (char*)0);
        }
        return param_1;
    }

    // 0x1006cd810, 128 bytes, placed by class name
    // Component::BindAnimation(graphics::GUIAnimationInstance&)::$_35::operator()(graphics::GUIAnimationRGB*, graphics::GUIAnimationRGB, graphics::GUIAnimationRGB, float) const
    /* Component::BindAnimation(graphics::GUIAnimationInstance&)::$_35::TEMPNAMEPLACEHOLDERVALUE(graphics::GUIAnimationRGB*,
   graphics::GUIAnimationRGB, graphics::GUIAnimationRGB, float) const */

    void Component::BindAnimation(graphics::GUIAnimationInstance&)::$_35::operator()(GUIAnimationRGB* param_1,
                                                                                     GUIAnimationRGB param_2,
                                                                                     GUIAnimationRGB param_3,
                                                                                     float param_4) {
        long lVar1;
        GUIAnimationRGB GVar2;
        GUIAnimationRGB GVar3;
        undefined4 uVar4;
        undefined8 uVar5;
        undefined4 in_EDX;
        undefined4* in_RSI;
        undefined8 in_stack_ffffffffffffffc8;
        undefined1 local_28[8];
        undefined1 local_20[4];
        short local_1c;

        lVar1 = *(long*)param_1;
        GVar2._8_4_ = in_EDX;
        GVar2._0_8_ = in_stack_ffffffffffffffc8;
        uVar5 = ((local_28 + -8))->Lerp(GVar2, param_4);
        local_20 = SUB84(uVar5, 0);
        local_1c = (short)((ulong)uVar5 >> 32);
        GVar3._8_4_ = in_EDX;
        GVar3.field_0 = (short)in_stack_ffffffffffffffc8;
        GVar3.field_2 = (short)((ulong)in_stack_ffffffffffffffc8 >> 16);
        GVar3.field_4 = (short)((ulong)in_stack_ffffffffffffffc8 >> 32);
        GVar3._6_2_ = (short)((ulong)in_stack_ffffffffffffffc8 >> 48);
        uVar5 = local_20->Delta(GVar3);
        local_28._0_4_ = SUB84(uVar5, 0);
        local_28._4_2_ = SUB82((ulong)uVar5 >> 32, 0);
        *in_RSI = local_20;
        *(short*)(in_RSI + 1) = local_1c;
        uVar4 = local_28->EvalAdd(*(uint*)(lVar1 + 96));
        *(undefined4*)(lVar1 + 96) = uVar4;
    }

    // 0x1006cdea0, 80 bytes, placed by class name
    // Component::BindAnimation(graphics::GUIAnimationInstance&)::$_36::operator()(unsigned int*, graphics::GUIAnimationRGB, graphics::GUIAnimationRGB, float) const
    /* Component::BindAnimation(graphics::GUIAnimationInstance&)::$_36::TEMPNAMEPLACEHOLDERVALUE(unsigned
   int*, graphics::GUIAnimationRGB, graphics::GUIAnimationRGB, float) const */

    void Component::BindAnimation(graphics::GUIAnimationInstance&)::$_36::operator()(uint* param_1,
                                                                                     GUIAnimationRGB param_2,
                                                                                     GUIAnimationRGB param_3,
                                                                                     float param_4) {
        long lVar1;
        GUIAnimationRGB GVar2;
        undefined4 uVar3;
        undefined8 in_RDX;
        uint* in_RSI;
        GUIAnimationRGB aGStackY_628[128];
        undefined2 in_stack_ffffffffffffffde;
        undefined4 in_stack_ffffffffffffffe0;
        undefined1 auStack_1a[2];

        lVar1 = *(long*)param_1;
        GVar2._6_2_ = in_stack_ffffffffffffffde;
        GVar2.field_0 = (short)in_RDX;
        GVar2.field_2 = (short)((ulong)in_RDX >> 16);
        GVar2.field_4 = (short)((ulong)in_RDX >> 32);
        GVar2._8_4_ = in_stack_ffffffffffffffe0;
        (aGStackY_628 + 128)->Lerp(GVar2, param_4);
        uVar3 = aGStackY_628[128].field_8.EvalMultiply(*in_RSI);
        *(undefined4*)(lVar1 + 96) = uVar3;
    }

    // 0x1006ce290, 80 bytes, placed by class name
    // Component::BindAnimation(graphics::GUIAnimationInstance&)::$_37::operator()(graphics::GUIAnimationRGB, graphics::GUIAnimationRGB, float) const
    /* Component::BindAnimation(graphics::GUIAnimationInstance&)::$_37::TEMPNAMEPLACEHOLDERVALUE(graphics::GUIAnimationRGB,
   graphics::GUIAnimationRGB, float) const */

    void Component::BindAnimation(graphics::GUIAnimationInstance&)::$_37::operator()(GUIAnimationRGB param_1,
                                                                                     GUIAnimationRGB param_2,
                                                                                     float param_3) {
        long lVar1;
        GUIAnimationRGB GVar2;
        undefined4 uVar3;
        undefined8 uVar4;
        undefined4 in_ESI;
        long* in_RDI;
        undefined8 in_stack_ffffffffffffffd8;
        undefined1 local_18[4];
        short local_14;

        lVar1 = *in_RDI;
        GVar2._8_4_ = in_ESI;
        GVar2._0_8_ = in_stack_ffffffffffffffd8;
        uVar4 = ((local_18 + -8))->Lerp(GVar2, param_3);
        local_18 = SUB84(uVar4, 0);
        local_14 = (short)((ulong)uVar4 >> 32);
        uVar3 = local_18->AsUint();
        *(undefined4*)(lVar1 + 96) = uVar3;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    Component::~Component();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    Component::~Component();

} // namespace jag::ui

// libs/ui/components/Component.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class Component : public graphics::DrawableElement // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~Component();
        virtual ProcessSwipeMovement(math::Vector2T<int> const&, math::Vector2T<int> const&, float);
        virtual void SetEnabled(bool);
        virtual void SetForceDisabled(bool);
        virtual SetLinkObjType(int);
        virtual void __pure_slot_7() = 0;
        virtual void __pure_slot_9() = 0;
        virtual NotifyInteracted();
        virtual int GetCurrentWidth() const;
        virtual int GetCurrentHeight() const;
        virtual Margin GetMargin(MarginType) const;
        virtual BindAnimation(graphics::GUIAnimationInstance&);
        virtual GetLinkObjType() const;
        virtual void LinkStaticComponent(shared_ptr<Component> const&);
        virtual ulong GetPinchable() const;
        virtual ulong GetSwipeable() const;
        virtual GetValueRepresentation();
        virtual void OnResizeAnimation();
        GetRGB() const;
        FlagLayoutDirty();
        MainDrawClipped(ComponentDependencies const&);
        SetLinkObjCount(unsigned long long);
        LoadStyleSheetVisuals(StyleSheet const&);
        MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool);
        SetMargin(MarginType, Margin);
        GetClientCode() const;
        SupportsMargin(MarginType) const;
        GetLinkObjCount() const;
        IsComponentCollection() const;
        HasInteractionInProgress() const;
        void SetCurrentWidth(int);
        SetCurrentHeight(int);
        GetVisibleWidth() const;
        GetVisibleHeight() const;
        GetLinkedStaticComponentID() const;
        GetDebugName() const;
        GetOpConfig();
        VisibleShadowCastingLightInfo GetDragConfig();
        GetSwipeConfig();
        int GetDataHeight() const;
        int GetDataWidth() const;
        GetCursorConfig();
        int GetCurrentY() const;
        GetParams();
        void SetDataX(int);
        void SetDataY(int);
        void SetDataWidth(int);
        void SetDataHeight(int);
        void SetModeWidth(ComponentSizeMode);
        void SetModeHeight(ComponentSizeMode);
        void SetModeX(ComponentPositionMode);
        void SetModeY(ComponentPositionMode);
        char GetModeWidth() const;
        char GetModeHeight() const;
        void SetAspectRatioWidth(int);
        void SetAspectRatioHeight(int);
        void SetLayerID(unsigned short);
        void SetInitiallyHidden(bool);
        void SetClickthrough(bool);
        void SetStyleSheetPackID(short);
        void SetParentPageIndex(unsigned char);
        GetServerConfig();
        void SetHooks(std::unique_ptr<UIHookProperties, std::default_delete<UIHookProperties>>&&);
        void FlagParentLayoutDirty();
        GetParent() const;
        int GetCurrentX() const;
        uint GetLayerID() const;
        bool NeedsStaticComponentLinking() const;
        void SetStaticParent(shared_ptr<Component> const&);
        Component();
        byte GetAlpha() const;
        uint IsEnabled() const;
        uint GetRGBA() const;
        void IsCurrentlyMouseOver() const;
        void Initialise(void (*)(Component*, PacketT<Array<unsigned char, eastl::allocator>>&, int), int, int,
                        unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&, char const*);
        void Initialise(shared_ptr<Component> const&, int);
        uint GetInterfaceID() const;
        uint GetStaticID() const;
        byte HasDynamicRoot() const;
        GetDynamicRoot() const;
        uint GetDynamicID() const;
        void ClippingTest(graphics::RT7Core&, int, int) const;
        void UpdateCurrentPosition(int, int, math::Rect<int> const&);
        bool UpdateCurrentSize(int, int, math::Rect<int> const&);
        CalculatePosition() const;
        CalculateSize() const;
        ApplyAspectRatioSize();
        void ApplyStyleSheet();
        void IsInitiallyHidden() const;
        uint GetCombinedID() const;
        void SetCurrentX(int);
        void SetCurrentY(int);
        void IsClickthrough() const;
        uchar GetParentPageIndex() const;
        GetBounds() const;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullComponentShared;

        // data members, from how the methods use this: 368 bytes, the first 108 are DrawableElement
        char _unknown_108[156];
        VisibleShadowCastingLightInfo m_dragConfig; // offset 264
        char _unknown_288[64];
        undefined1 field_352; // offset 352
        char _unknown_353[3];
        undefined4 field_356; // offset 356
        char _unknown_360[8];
    };

    class ComponentCursorConfig {
    public:
        void SetValidTargetCursor(int);
        void SetInvalidTargetCursor(int);
        void SetMouseOverCursor(int);
        ComponentCursorConfig();

        // data members, from how the methods use this: 12 bytes
        short m_mouseOverCursor;     // offset 0
        short m_validTargetCursor;   // offset 2
        short m_invalidTargetCursor; // offset 4
        char _unknown_6[6];
    };

    class ComponentDragConfig {
    public:
        ~ComponentDragConfig();
        ComponentDragConfig();
        GetRenderBehaviour() const;
        void Decode(PacketT<Array<unsigned char, eastl::allocator>>&, int);

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[16];
        undefined4 m_renderBehaviour; // offset 16
        char _unknown_20[4];
    };

    class ComponentHelpers {
    public:
        int EncodeDynamicID(int, int);
        bool EncodableDynamicID(int, int);
        int GetCategoryID(unsigned int);
        uint GetDynamicID(unsigned int);
        GetMaxDynamicID(int);
    };

    class ComponentMultiValueMixin {
    public:
        class ValueChangeEvent;
        // virtual methods in vtable order
        virtual ~ComponentMultiValueMixin();
        virtual GetValueRepresentationType() const;
        ComponentMultiValueMixin();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    class ComponentMultiValueMixin::ValueChangeEvent {
    public:
        ValueChangeEvent(int, Type);
        ValueChangeEvent(int, bool);
    };

    class ComponentPinchConfig {
    public:
        ComponentPinchConfig();

        // data members, from how the methods use this: 2 bytes
        undefined2 field_0; // offset 0
    };

    class ComponentServerConfig {
    public:
        SetServerActiveProperties(ServerActiveProperties const&);
        void DecodeServerKeys(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        ComponentServerConfig();
        ~ComponentServerConfig();
        static oldscape::sidebars::SideBarData /* 16 bytes */ DEFAULT_SERVER_ACTIVE_PROPERTIES; // = SideBarData(0, -1)

        // data members, from how the methods use this: 16 bytes
        char _unknown_0[16];
    };

    class ComponentSingleValueMixin {
    public:
        // virtual methods in vtable order
        virtual ~ComponentSingleValueMixin();
        virtual GetValueRepresentationType() const;
        ComponentSingleValueMixin();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    class ComponentSingleValueMultiOptionMixin {
    public:
        // virtual methods in vtable order
        virtual ~ComponentSingleValueMultiOptionMixin();
        virtual GetValueRepresentationType() const;
        virtual void __pure_slot_3() = 0;
        virtual void __pure_slot_4() = 0;
        virtual GetPreviousValue() const;
        RequiresSeparatePreviousValueTrigger() const;
        ComponentSingleValueMultiOptionMixin();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    class ComponentSwipeConfig {
    public:
        byte GetDeadZoneVertical() const;
        byte GetDeadZoneHorizontal() const;
        GetDirectionMask() const;
        GetStopExponent() const;
        GetDeceleration() const;
        ComponentSwipeConfig();

        // data members, from how the methods use this: 5 bytes
        byte m_deadZoneVertical;    // offset 0
        byte m_deadZoneHorizontal;  // offset 1
        undefined1 m_directionMask; // offset 2
        undefined1 m_deceleration;  // offset 3
        undefined1 m_stopExponent;  // offset 4
    };

    // 0x1005476d0, 32 bytes, inline, placed by class name
    // Component::SetDataX(int)
    void Component::SetDataX(int param_1) {
        if (m_dataX != param_1) {
            FlagParentLayoutDirty();
            m_dataX = param_1;
        }
    }

    // 0x1005476f0, 32 bytes, inline, placed by class name
    // Component::SetDataY(int)
    void Component::SetDataY(int param_1) {
        if (m_dataY != param_1) {
            FlagParentLayoutDirty();
            m_dataY = param_1;
        }
    }

    // 0x100547710, 48 bytes, inline, placed by class name
    // Component::SetDataWidth(int)
    void Component::SetDataWidth(int param_1) {
        if (m_dataWidth != param_1) {
            FlagParentLayoutDirty();
            (*(code*)field_0[10])(this);
            m_dataWidth = param_1;
        }
    }

    // 0x100547740, 48 bytes, inline, placed by class name
    // Component::SetDataHeight(int)
    void Component::SetDataHeight(int param_1) {
        if (m_dataHeight != param_1) {
            FlagParentLayoutDirty();
            (*(code*)field_0[10])(this);
            m_dataHeight = param_1;
        }
    }

    // 0x100547770, 48 bytes, inline, placed by class name
    // Component::SetModeWidth(ComponentSizeMode)
    void Component::SetModeWidth(char param_2) {
        if (m_modeWidth != param_2) {
            FlagParentLayoutDirty();
            (*(code*)field_0[10])(this);
            m_modeWidth = param_2;
        }
    }

    // 0x1005477a0, 48 bytes, inline, placed by class name
    // Component::SetModeHeight(ComponentSizeMode)
    void Component::SetModeHeight(char param_2) {
        if (m_modeHeight != param_2) {
            FlagParentLayoutDirty();
            (*(code*)field_0[10])(this);
            m_modeHeight = param_2;
        }
    }

    // 0x1005477d0, 48 bytes, inline, placed by class name
    // Component::SetModeX(ComponentPositionMode)
    void Component::SetModeX(char param_2) {
        if (field_50 != param_2) {
            FlagParentLayoutDirty();
            field_50 = param_2;
        }
    }

    // 0x100547800, 48 bytes, inline, placed by class name
    // Component::SetModeY(ComponentPositionMode)
    void Component::SetModeY(char param_2) {
        if (field_51 != param_2) {
            FlagParentLayoutDirty();
            field_51 = param_2;
        }
    }

    // 0x100547830, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Component::GetModeWidth() const
    /* TextData::GetTextAlpha() const */

    byte TextData::GetTextAlpha() {
        return m_textAlpha;
    }

    // 0x100547840, 16 bytes, inline, placed by class name
    // Component::GetModeHeight() const
    char Component::GetModeHeight() {
        return m_modeHeight;
    }

    // 0x100547850, 48 bytes, inline, placed by class name
    // Component::SetAspectRatioWidth(int)
    void Component::SetAspectRatioWidth(int param_1) {
        if (m_aspectRatioWidth != param_1) {
            FlagParentLayoutDirty();
            (*(code*)field_0[10])(this);
            m_aspectRatioWidth = param_1;
        }
    }

    // 0x100547880, 48 bytes, inline, placed by class name
    // Component::SetAspectRatioHeight(int)
    void Component::SetAspectRatioHeight(int param_1) {
        if (m_aspectRatioHeight != param_1) {
            FlagParentLayoutDirty();
            (*(code*)field_0[10])(this);
            m_aspectRatioHeight = param_1;
        }
    }

    // 0x1005478b0, 64 bytes, inline, placed by class name
    // Component::SetLayerID(unsigned short)
    void Component::SetLayerID(ushort param_1) {
        if (m_layerID != 65535) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_layerID == -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Component.h",
                      114, (char*)0);
        }
        m_layerID = param_1;
    }

    // 0x1005478f0, 32 bytes, inline, placed by class name
    // Component::SetInitiallyHidden(bool)
    void Component::SetInitiallyHidden(bool param_1) {
        (&field_49, 1, param_1)->set();
    }

    // 0x100547910, 32 bytes, inline, placed by class name
    // Component::SetClickthrough(bool)
    void Component::SetClickthrough(bool param_1) {
        (&field_49, 2, param_1)->set();
    }

    // 0x100547930, 16 bytes, inline, placed by class name
    // Component::SetStyleSheetPackID(short)
    void Component::SetStyleSheetPackID(short param_1) {
        m_styleSheetPackID = param_1;
        ApplyStyleSheet(this);
    }

    // 0x100547940, 16 bytes, inline, placed by class name
    // Component::SetParentPageIndex(unsigned char)
    void Component::SetParentPageIndex(uchar param_1) {
        m_parentPageIndex = param_1;
    }

    // 0x100547950, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Component::GetServerConfig()
    /* postprocess::PostProcessManager::GetDownSampledSourceRTs() const */

    undefined1* postprocess::PostProcessManager::GetDownSampledSourceRTs() {
        return &field_296;
    }

    // 0x100547a10, 16 bytes, inline, placed by class name
    // Component::SetHooks(std::unique_ptr<UIHookProperties, std::default_delete<UIHookProperties> >&&)
    /* Component::SetHooks(std::unique_ptr<UIHookProperties,
   std::default_delete<UIHookProperties> >&&) */

    void Component::SetHooks(unique_ptr* param_1) {
        std::unique_ptr<UIHookProperties, std::default_delete<UIHookProperties>>::operator=(
            (unique_ptr<UIHookProperties, std::default_delete<UIHookProperties>>*)&field_104, param_1);
    }

    // 0x100549e00, 96 bytes, inline, placed by class name
    // Component::FlagParentLayoutDirty()
    void Component::FlagParentLayoutDirty() {
        long* plVar2;
        shared_ptr local_20;

        weak_ptr<oldscape::rs2lib::IfType>::lock();
        if (shared_ptr::operator_cast_to_bool(&local_20)) {
            plVar2 = (long*)shared_ptr<Component>::operator->((shared_ptr<Component>*)&local_20);
            (**(code**)(*plVar2 + 80))(plVar2);
        }
        local_20.~shared_ptr();
    }

    // 0x10067aa70, 32 bytes, inline, placed by class name
    // Component::GetLayerID() const
    uint Component::GetLayerID() {
        uint uVar1;

        uVar1 = 4294967295;
        if (m_layerID != 65535) {
            uVar1 = (uint)m_layerID;
        }
        return uVar1;
    }

    // 0x10067ab40, 32 bytes, inline, placed by class name
    // Component::NeedsStaticComponentLinking() const
    bool Component::NeedsStaticComponentLinking() {
        return (*(code*)field_0[20])() != -1;
    }

    // 0x10067ab70, 128 bytes, inline, placed by class name
    // Component::SetStaticParent(shared_ptr<Component> const&)
    void Component::SetStaticParent(shared_ptr* param_1) {
        char cVar1;

        cVar1 = (&field_16)->expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_parent.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Component.h",
                      98, (char*)0);
        }
        if (field_12 != 65535) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_dynamicID == -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Component.h",
                      98, (char*)0);
        }
        weak_ptr<Component>::operator=((weak_ptr<Component>*)&field_16, param_1);
    }

    // 0x100688cd0, 416 bytes, base-object constructor, inline, placed by class name
    // Component::Component()
    void Component::Component() {
        _func_decltype_nullptr* in_RSI;

        field_0 = &PTR__OptionStore_100f0fcb8;
        field_8 = 65535;
        field_10 = 65535;
        field_12 = 65535;
        m_layerID = 65535;
        new (&field_16, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_32, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        m_parentPageIndex = '\0';
        new (&field_49, 0) eastl::bitset<6ul, unsigned char>();
        field_54 = '\0';
        field_50 = '\0';
        field_51 = '\0';
        m_modeWidth = '\0';
        m_modeHeight = '\0';
        m_dataX = 0;
        m_dataY = 0;
        m_dataWidth = 0;
        m_dataHeight = 0;
        m_aspectRatioWidth = 1;
        m_aspectRatioHeight = 1;
        m_currentX = 0;
        m_currentY = 0;
        m_currentWidth = 0;
        m_currentHeight = 0;
        m_rGB = 16777215;
        m_alpha = 255;
        m_styleSheetPackID = -1;
        std::unique_ptr<UIHookProperties, std::default_delete<UIHookProperties>>::unique_ptr<true, void>(
            (unique_ptr<UIHookProperties, std::default_delete<UIHookProperties>>*)&field_104);
        new (&field_112) ComponentOpConfig();
        new (&field_256) ComponentCursorConfig();
        new (m_dragConfig) ComponentDragConfig();
        new (&field_288) ComponentSwipeConfig();
        new (&field_293) math::Vector2T<unsigned char>();
        new (&field_296) ComponentServerConfig();
        new (&field_312) ComponentParams();
        new (&field_320) eastl::string();
        field_352 = 255;
        field_356 = 0;
        new (&field_360) eastl::string();
    }

    // 0x100688f50, 128 bytes, base-object destructor, inline, placed by class name
    // Component::~Component()
    void Component::~Component() {
        field_0 = &PTR__OptionStore_100f0fcb8;
        (&field_360)->~basic_string();
        (&field_320)->~basic_string();
        (&field_312)->~ComponentParams();
        (&field_296)->~ComponentServerConfig();
        m_dragConfig->~VisibleShadowCastingLightInfo();
        (&field_112)->~ComponentOpConfig();
        (&field_104)->~unique_ptr();
        (&field_32)->~weak_ptr();
        (&field_16)->~weak_ptr();
    }

    // 0x100689230, 16 bytes, inline, placed by class name
    // Component::GetAlpha() const
    byte Component::GetAlpha() {
        return m_alpha;
    }

    // 0x100689970, 32 bytes, inline, placed by class name
    // Component::SetEnabled(bool)
    void Component::SetEnabled(bool param_1) {
        (&field_49, 0, param_1)->set();
    }

    // 0x100689a50, 64 bytes, inline, placed by class name
    // Component::IsEnabled() const
    uint Component::IsEnabled() {
        uint uVar2;

        uVar2 = 0;
        if ((&field_49, 0)->test() != '\0') {
            uVar2 = (&field_49, 5)->test();
            uVar2 = uVar2 ^ 1;
        }
        return uVar2;
    }

    // 0x100689aa0, 32 bytes, inline, placed by class name
    // Component::GetRGBA() const
    uint Component::GetRGBA() {
        return (uint)m_alpha | m_rGB << 8;
    }

    // 0x100690e00, 32 bytes, inline, placed by class name
    // Component::IsCurrentlyMouseOver() const
    void Component::IsCurrentlyMouseOver() {
        (&field_49, 3)->test();
    }

    // 0x100692420, 32 bytes, inline, placed by class name
    // Component::GetInterfaceID() const
    uint Component::GetInterfaceID() {
        uint uVar1;

        uVar1 = 4294967295;
        if (field_8 != 65535) {
            uVar1 = (uint)field_8;
        }
        return uVar1;
    }

    // 0x100692440, 32 bytes, inline, placed by class name
    // Component::GetStaticID() const
    uint Component::GetStaticID() {
        uint uVar1;

        uVar1 = 4294967295;
        if (field_10 != 65535) {
            uVar1 = (uint)field_10;
        }
        return uVar1;
    }

    // 0x1006924a0, 32 bytes, inline, placed by class name
    // Component::HasDynamicRoot() const
    byte Component::HasDynamicRoot() {
        byte bVar1;

        bVar1 = (&field_32)->expired();
        return bVar1 ^ 1;
    }

    // 0x1006924c0, 32 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Component::GetDynamicRoot() const
    /* tweak::Tweaky::GetFocus() const */

    Tweaky* tweak::Tweaky::GetFocus() {
        weak_ptr<oldscape::rs2lib::IfType>::lock();
        return this;
    }

    // 0x1006924e0, 32 bytes, inline, placed by class name
    // Component::GetDynamicID() const
    uint Component::GetDynamicID() {
        uint uVar1;

        uVar1 = 4294967295;
        if (field_12 != 65535) {
            uVar1 = (uint)field_12;
        }
        return uVar1;
    }

    // 0x100694a60, 32 bytes, inline, placed by class name
    // Component::IsInitiallyHidden() const
    void Component::IsInitiallyHidden() {
        (&field_49, 1)->test();
    }

    // 0x100695a90, 48 bytes, inline, placed by class name
    // Component::GetCombinedID() const
    uint Component::GetCombinedID() {
        uint uVar1;

        uVar1 = 4294967295;
        if (field_10 != 65535) {
            uVar1 = (uint)field_10;
        }
        return uVar1 | (uint)field_8 << 16;
    }

    // 0x100696000, 80 bytes, inline, placed by class header (inline)
    // ComponentHelpers::GetMaxDynamicID(int)
    undefined8 ComponentHelpers::GetMaxDynamicID(int param_1) {
        undefined8 uVar1;

        if (234 < (uint)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(categoryID >= 0) && (categoryID < CATEGORY_ID_MAX)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Component.h",
                      447, (char*)0);
        }
        uVar1 = 256;
        if (param_1 == 0) {
            uVar1 = 4096;
        }
        return uVar1;
    }

    // 0x100697660, 16 bytes, inline, placed by class name
    // Component::SetCurrentX(int)
    void Component::SetCurrentX(int param_1) {
        m_currentX = param_1;
    }

    // 0x100697670, 16 bytes, inline, placed by class name
    // Component::SetCurrentY(int)
    void Component::SetCurrentY(int param_1) {
        m_currentY = param_1;
    }

    // 0x10069b910, 32 bytes, inline, placed by class name
    // Component::IsClickthrough() const
    void Component::IsClickthrough() {
        (&field_49, 2)->test();
    }

    // 0x1006a2f60, 16 bytes, inline, placed by class name
    // Component::GetParentPageIndex() const
    uchar Component::GetParentPageIndex() {
        return m_parentPageIndex;
    }

    // 0x1006ac750, 112 bytes, inline, placed by class name
    // Component::GetBounds() const
    Component* Component::GetBounds() {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        WorldmapAreaMetadata* in_RSI;

        iVar1 = GetCurrentX((Component*)in_RSI);
        iVar2 = in_RSI->GetLoopLength();
        iVar3 = in_RSI->GetStreamCountLastMix();
        iVar4 = in_RSI->GetMinMapX();
        new (this) oldscape::dash3d::GridRect(iVar1, iVar2, iVar3, iVar4);
        return this;
    }

    // 0x1006acd80, 32 bytes, inline, placed by class name
    // Component::SetForceDisabled(bool)
    void Component::SetForceDisabled(bool param_1) {
        (&field_49, 5, param_1)->set();
    }

    // 0x1006acda0, 32 bytes, inline, placed by class name
    // Component::GetMargin(Component::MarginType) const
    Margin Component::GetMargin() {
        Margin local_c;

        new (&local_c) Margin();
        return local_c;
    }

    // 0x1006acdc0, 32 bytes, inline, placed by class name
    // Component::LinkStaticComponent(shared_ptr<Component> const&)
    void Component::LinkStaticComponent(shared_ptr* param_1) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways(
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Component.h", 223,
            (char*)0);
    }

    // 0x1006acde0, 96 bytes, inline, placed by class name
    // Component::GetValueRepresentation()
    undefined* Component::GetValueRepresentation() {
        if (*PTR_none_100ee50c8 == '\0') {
            if (___cxa_guard_acquire(PTR_none_100ee50c8) != 0) {
                ___cxa_atexit(PTR_destruct<oldscape::highlight::NpcUID*> _100ee6448, PTR_none_100ee9d38, 4294967296);
                ___cxa_guard_release(PTR_none_100ee50c8);
            }
        }
        return PTR_none_100ee9d38;
    }

    // 0x1006ace40, 16 bytes, inline, placed by class name
    // Component::OnResizeAnimation()
    void Component::OnResizeAnimation() {
        (*(code*)field_0[10])();
    }

    // 0x1006cb8c0, 112 bytes, inline, placed by class name
    // Component::BindAnimation(graphics::GUIAnimationInstance&)::$_32::operator()(math::Vector2T<int>*, math::Vector2T<int>, math::Vector2T<int>, float) const
    /* Component::BindAnimation(graphics::GUIAnimationInstance&)::$_32::TEMPNAMEPLACEHOLDERVALUE(math::Vector2T<int>*,
   math::Vector2T<int>, math::Vector2T<int>, float) const */

    void Component::BindAnimation(graphics::GUIAnimationInstance&)::$_32::operator()(float param_1_00, __32* this,
                                                                                     Vector2T* param_1,
                                                                                     undefined8 param_4,
                                                                                     undefined8 param_5) {
        int* piVar1;
        long lVar2;
        undefined8 uVar3;
        undefined8 local_48;
        undefined8 local_40;
        undefined8 local_38;

        lVar2 = *(long*)this;
        local_48 = param_4;
        local_40 = param_5;
        local_38 = math::Lerp<math::Vector2T<int>, float>((Vector2T*)&local_48, (Vector2T*)&local_40, param_1_00);
        uVar3 = math::operator-((Vector2T*)&local_38, param_1);
        eastl::pair<int, unsigned int>::operator=((pair<int, unsigned int>*)param_1, (pair*)&local_38);
        piVar1 = (int*)(lVar2 + 80);
        *piVar1 = *piVar1 + (int)uVar3;
        piVar1 = (int*)(lVar2 + 84);
        *piVar1 = *piVar1 + (int)((ulong)uVar3 >> 32);
    }

    // 0x1006cbd30, 96 bytes, inline, placed by class name
    // Component::BindAnimation(graphics::GUIAnimationInstance&)::$_33::operator()(math::Vector2T<int>*, math::Vector2T<float>, math::Vector2T<float>, float) const
    /* Component::BindAnimation(graphics::GUIAnimationInstance&)::$_33::TEMPNAMEPLACEHOLDERVALUE(math::Vector2T<int>*,
   math::Vector2T<float>, math::Vector2T<float>, float) const */

    void Component::BindAnimation(graphics::GUIAnimationInstance&)::$_33::operator()(undefined8 param_1_00,
                                                                                     undefined8 param_2, float param_3,
                                                                                     __33* this, int* param_1) {
        long lVar1;
        undefined8 uVar2;
        undefined8 local_28;
        undefined8 local_20;

        lVar1 = *(long*)this;
        local_28 = param_1_00;
        local_20 = param_2;
        uVar2 = math::Lerp<math::Vector2T<float>, float>((Vector2T*)&local_28, (Vector2T*)&local_20, param_3);
        *(int*)(lVar1 + 80) = (int)((float)*param_1 * (float)uVar2);
        *(int*)(lVar1 + 84) = (int)((float)((ulong)uVar2 >> 32) * (float)param_1[1]);
    }

    // 0x1006cced0, 48 bytes, inline, placed by class name
    // Component::BindAnimation(graphics::GUIAnimationInstance&)::$_34::operator()(math::Vector2T<int>, math::Vector2T<int>, float) const
    /* Component::BindAnimation(graphics::GUIAnimationInstance&)::$_34::TEMPNAMEPLACEHOLDERVALUE(math::Vector2T<int>,
   math::Vector2T<int>, float) const */

    void Component::BindAnimation(graphics::GUIAnimationInstance&)::$_34::operator()(float param_1, __34* this,
                                                                                     undefined8 param_3,
                                                                                     undefined8 param_4) {
        long lVar1;
        undefined8 uVar2;
        undefined8 local_20;
        undefined8 local_18;

        lVar1 = *(long*)this;
        local_20 = param_3;
        local_18 = param_4;
        uVar2 = math::Lerp<math::Vector2T<int>, float>((Vector2T*)&local_20, (Vector2T*)&local_18, param_1);
        *(undefined8*)(lVar1 + 80) = uVar2;
    }

    // 0x1006cea40, 128 bytes, inline, placed by class name
    // Component::BindAnimation(graphics::GUIAnimationInstance&)::$_38::operator()(math::Vector2T<int>*, math::Vector2T<int>, math::Vector2T<int>, float) const
    /* Component::BindAnimation(graphics::GUIAnimationInstance&)::$_38::TEMPNAMEPLACEHOLDERVALUE(math::Vector2T<int>*,
   math::Vector2T<int>, math::Vector2T<int>, float) const */

    void Component::BindAnimation(graphics::GUIAnimationInstance&)::$_38::operator()(float param_1_00, __38* this,
                                                                                     Vector2T* param_1,
                                                                                     undefined8 param_4,
                                                                                     undefined8 param_5) {
        long* plVar1;
        undefined8 uVar2;
        undefined8 local_48;
        undefined8 local_40;
        undefined8 local_38;

        plVar1 = *(long**)this;
        local_48 = param_4;
        local_40 = param_5;
        local_38 = math::Lerp<math::Vector2T<int>, float>((Vector2T*)&local_48, (Vector2T*)&local_40, param_1_00);
        uVar2 = math::operator-((Vector2T*)&local_38, param_1);
        eastl::pair<int, unsigned int>::operator=((pair<int, unsigned int>*)param_1, (pair*)&local_38);
        *(int*)(plVar1 + 11) = (int)plVar1[11] + (int)uVar2;
        *(int*)((long)plVar1 + 92) = *(int*)((long)plVar1 + 92) + (int)((ulong)uVar2 >> 32);
        (**(code**)(*plVar1 + 240))(plVar1);
    }

    // 0x1006cece0, 112 bytes, inline, placed by class name
    // Component::BindAnimation(graphics::GUIAnimationInstance&)::$_39::operator()(math::Vector2T<int>*, math::Vector2T<float>, math::Vector2T<float>, float) const
    /* Component::BindAnimation(graphics::GUIAnimationInstance&)::$_39::TEMPNAMEPLACEHOLDERVALUE(math::Vector2T<int>*,
   math::Vector2T<float>, math::Vector2T<float>, float) const */

    void Component::BindAnimation(graphics::GUIAnimationInstance&)::$_39::operator()(undefined8 param_1_00,
                                                                                     undefined8 param_2, float param_3,
                                                                                     __39* this, int* param_1) {
        long* plVar1;
        undefined8 uVar2;
        undefined8 local_28;
        undefined8 local_20;

        plVar1 = *(long**)this;
        local_28 = param_1_00;
        local_20 = param_2;
        uVar2 = math::Lerp<math::Vector2T<float>, float>((Vector2T*)&local_28, (Vector2T*)&local_20, param_3);
        *(int*)(plVar1 + 11) = (int)((float)*param_1 * (float)uVar2);
        *(int*)((long)plVar1 + 92) = (int)((float)((ulong)uVar2 >> 32) * (float)param_1[1]);
        (**(code**)(*plVar1 + 240))(plVar1);
    }

    // 0x1006cef60, 64 bytes, inline, placed by class name
    // Component::BindAnimation(graphics::GUIAnimationInstance&)::$_40::operator()(math::Vector2T<int>, math::Vector2T<int>, float) const
    /* Component::BindAnimation(graphics::GUIAnimationInstance&)::$_40::TEMPNAMEPLACEHOLDERVALUE(math::Vector2T<int>,
   math::Vector2T<int>, float) const */

    void Component::BindAnimation(graphics::GUIAnimationInstance&)::$_40::operator()(float param_1, __40* this,
                                                                                     undefined8 param_3,
                                                                                     undefined8 param_4) {
        long* plVar1;
        long lVar2;
        undefined8 local_20;
        undefined8 local_18;

        plVar1 = *(long**)this;
        local_20 = param_3;
        local_18 = param_4;
        lVar2 = math::Lerp<math::Vector2T<int>, float>((Vector2T*)&local_20, (Vector2T*)&local_18, param_1);
        plVar1[11] = lVar2;
        (**(code**)(*plVar1 + 240))(plVar1);
    }

} // namespace jag::ui

// libs/ui/components/Component.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class Component : public graphics::DrawableElement // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~Component();
        virtual uint64_t ProcessSwipeMovement(const math::Vector2T<int>& arg1, const math::Vector2T<int>& arg2,
                                              float arg3);
        virtual void SetEnabled(bool arg1);
        virtual void SetForceDisabled(bool arg1);
        virtual void SetLinkObjType(int arg1);
        virtual void __pure_slot_7() = 0;
        virtual void __pure_slot_9() = 0;
        virtual uint8_t NotifyInteracted();
        virtual unsigned int GetCurrentWidth() const;
        virtual int GetCurrentHeight() const;
        virtual Margin GetMargin(MarginType marginType) const;
        virtual uint64_t BindAnimation(graphics::GUIAnimationInstance& guiAnimationInstance);
        virtual uint64_t GetLinkObjType() const;
        virtual void LinkStaticComponent(const shared_ptr<Component>& component);
        virtual unsigned long GetPinchable() const;
        virtual unsigned long GetSwipeable() const;
        virtual uint8_t* GetValueRepresentation();
        virtual void OnResizeAnimation();
        uint32_t GetRGB() const;
        void FlagLayoutDirty();
        void MainDrawClipped(const ComponentDependencies& arg1);
        void SetLinkObjCount(unsigned long long arg1);
        void LoadStyleSheetVisuals(const StyleSheet& arg1);
        void MainLogic(const ComponentDependencies& arg1, int arg2, int arg3, bool arg4, bool arg5, bool arg6,
                       bool arg7);
        void SetMargin(MarginType arg1, Margin arg2);
        uint64_t GetClientCode() const;
        uint64_t SupportsMargin(MarginType arg1) const;
        uint64_t GetLinkObjCount() const;
        bool IsComponentCollection() const;
        bool HasInteractionInProgress() const;
        void SetCurrentWidth(int arg1);
        void SetCurrentHeight(int arg1);
        int GetVisibleWidth() const;
        int GetVisibleHeight() const;
        uint64_t GetLinkedStaticComponentID() const;
        uint8_t* GetDebugName() const;
        uint8_t* GetOpConfig();
        VisibleShadowCastingLightInfo GetDragConfig();
        uint8_t* GetSwipeConfig();
        int GetDataHeight() const;
        int GetDataWidth() const;
        uint8_t* GetCursorConfig();
        int GetCurrentY() const;
        uint8_t* GetParams();
        void SetDataX(int arg1);
        void SetDataY(int arg1);
        void SetDataWidth(int arg1);
        void SetDataHeight(int arg1);
        void SetModeWidth(ComponentSizeMode componentSizeMode);
        void SetModeHeight(ComponentSizeMode componentSizeMode);
        void SetModeX(ComponentPositionMode componentPositionMode);
        void SetModeY(ComponentPositionMode componentPositionMode);
        uint8_t GetModeWidth() const;
        uint8_t GetModeHeight() const;
        void SetAspectRatioWidth(int arg1);
        void SetAspectRatioHeight(int arg1);
        void SetLayerID(unsigned short arg1);
        void SetInitiallyHidden(bool arg1);
        void SetClickthrough(bool arg1);
        void SetStyleSheetPackID(short arg1);
        void SetParentPageIndex(unsigned char arg1);
        uint8_t* GetServerConfig();
        void SetHooks(std::unique_ptr<UIHookProperties>&& uiHookProperties);
        void FlagParentLayoutDirty();
        auto GetParent() const;
        int GetCurrentX() const;
        unsigned int GetLayerID() const;
        bool NeedsStaticComponentLinking() const;
        void SetStaticParent(const shared_ptr<Component>& component);
        Component();
        uint8_t GetAlpha() const;
        bool IsEnabled() const;
        unsigned int GetRGBA() const;
        void IsCurrentlyMouseOver() const;
        void Initialise(void (*arg1)(Component*, PacketT<Array<unsigned char>>&, int), int arg2, int arg3,
                        unsigned int arg4, PacketT<Array<unsigned char>>& arg5, const char* str);
        void Initialise(const shared_ptr<Component>& component, int arg2);
        unsigned int GetInterfaceID() const;
        unsigned int GetStaticID() const;
        bool HasDynamicRoot() const;
        auto GetDynamicRoot() const;
        unsigned int GetDynamicID() const;
        void ClippingTest(graphics::RT7Core& rt7Core, int arg2, int arg3) const;
        void UpdateCurrentPosition(int arg1, int arg2, const math::Rect<int>& rect);
        bool UpdateCurrentSize(int arg1, int arg2, const math::Rect<int>& rect);
        uint64_t CalculatePosition() const;
        uint64_t CalculateSize() const;
        uint8_t[16] ApplyAspectRatioSize();
        void ApplyStyleSheet();
        void IsInitiallyHidden() const;
        unsigned int GetCombinedID() const;
        void SetCurrentX(int arg1);
        void SetCurrentY(int arg1);
        void IsClickthrough() const;
        unsigned char GetParentPageIndex() const;
        oldscape::dash3d::GridRect GetBounds() const;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullComponentShared; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        uint8_t _unknown_108[156];
        VisibleShadowCastingLightInfo m_dragConfig;
        uint8_t _unknown_288[64];
        uint8_t field_352;
        uint8_t _unknown_353[3];
        uint32_t field_356;
        uint8_t _unknown_360[8];
    };

    class ComponentCursorConfig {
    public:
        void SetValidTargetCursor(int arg1);
        void SetInvalidTargetCursor(int arg1);
        void SetMouseOverCursor(int arg1);
        ComponentCursorConfig();

    private:
        short m_mouseOverCursor;
        short m_validTargetCursor;
        short m_invalidTargetCursor;
        uint8_t _unknown_6[6];
    };

    class ComponentDragConfig {
    public:
        ~ComponentDragConfig();
        ComponentDragConfig();
        uint8_t GetRenderBehaviour() const;
        void Decode(PacketT<Array<unsigned char>>& arg1, int arg2);

    private:
        uint8_t _unknown_0[16];
        uint32_t m_renderBehaviour;
        uint8_t _unknown_20[4];
    };

    class ComponentHelpers {
    public:
        int EncodeDynamicID(int arg1, int arg2);
        bool EncodableDynamicID(int arg1, int arg2);
        int GetCategoryID(unsigned int arg1);
        unsigned int GetDynamicID(unsigned int arg1);
        void GetMaxDynamicID(int arg1);
    };

    class ComponentMultiValueMixin {
    public:
        class ValueChangeEvent;
        // virtual methods in vtable order
        virtual ~ComponentMultiValueMixin();
        virtual uint64_t GetValueRepresentationType() const;
        ComponentMultiValueMixin();
    };

    class ComponentMultiValueMixin::ValueChangeEvent {
    public:
        ValueChangeEvent(int arg1, Type arg2);
        ValueChangeEvent(int arg1, bool arg2);
    };

    class ComponentPinchConfig {
    public:
        ComponentPinchConfig();

    private:
        uint16_t field_0;
    };

    class ComponentServerConfig {
    public:
        void SetServerActiveProperties(const ServerActiveProperties& arg1);
        void DecodeServerKeys(PacketT<Array<unsigned char>>& arg1, int arg2);
        ComponentServerConfig();
        ~ComponentServerConfig();
        static oldscape::sidebars::SideBarData DEFAULT_SERVER_ACTIVE_PROPERTIES; // = SideBarData(0, -1)

        uint8_t _unknown_0[16];
    };

    class ComponentSingleValueMixin {
    public:
        // virtual methods in vtable order
        virtual ~ComponentSingleValueMixin();
        virtual uint64_t GetValueRepresentationType() const;
        ComponentSingleValueMixin();
    };

    class ComponentSingleValueMultiOptionMixin {
    public:
        // virtual methods in vtable order
        virtual ~ComponentSingleValueMultiOptionMixin();
        virtual uint64_t GetValueRepresentationType() const;
        virtual void __pure_slot_3() = 0;
        virtual void __pure_slot_4() = 0;
        virtual uint64_t GetPreviousValue() const;
        uint64_t RequiresSeparatePreviousValueTrigger() const;
        ComponentSingleValueMultiOptionMixin();
    };

    class ComponentSwipeConfig {
    public:
        uint8_t GetDeadZoneVertical() const;
        uint8_t GetDeadZoneHorizontal() const;
        uint8_t GetDirectionMask() const;
        uint8_t GetStopExponent() const;
        uint8_t GetDeceleration() const;
        ComponentSwipeConfig();

    private:
        uint8_t m_deadZoneVertical;
        uint8_t m_deadZoneHorizontal;
        uint8_t m_directionMask;
        uint8_t m_deceleration;
        uint8_t m_stopExponent;
    };

    // 0x1005476d0
    void Component::SetDataX(int arg1) {
        if (field_56 != arg1) {
            FlagParentLayoutDirty();
            field_56 = arg1;
        }
    }

    // 0x1005476f0
    void Component::SetDataY(int arg1) {
        if (field_60 != arg1) {
            FlagParentLayoutDirty();
            field_60 = arg1;
        }
    }

    // 0x100547710
    void Component::SetDataWidth(int arg1) {
        if (m_dataWidth != arg1) {
            FlagParentLayoutDirty();
            MainLogic();
            m_dataWidth = arg1;
        }
    }

    // 0x100547740
    void Component::SetDataHeight(int arg1) {
        if (m_dataHeight != arg1) {
            FlagParentLayoutDirty();
            MainLogic();
            m_dataHeight = arg1;
        }
    }

    // 0x100547770
    void Component::SetModeWidth(ComponentSizeMode componentSizeMode) {
        if (m_modeWidth != (uint8_t)componentSizeMode) {
            FlagParentLayoutDirty();
            MainLogic();
            m_modeWidth = (uint8_t)componentSizeMode;
        }
    }

    // 0x1005477a0
    void Component::SetModeHeight(ComponentSizeMode componentSizeMode) {
        if (m_modeHeight != (uint8_t)componentSizeMode) {
            FlagParentLayoutDirty();
            MainLogic();
            m_modeHeight = (uint8_t)componentSizeMode;
        }
    }

    // 0x1005477d0
    void Component::SetModeX(ComponentPositionMode componentPositionMode) {
        if (field_50 != (uint8_t)componentPositionMode) {
            FlagParentLayoutDirty();
            field_50 = (uint8_t)componentPositionMode;
        }
    }

    // 0x100547800
    void Component::SetModeY(ComponentPositionMode componentPositionMode) {
        if (field_51 != (uint8_t)componentPositionMode) {
            FlagParentLayoutDirty();
            field_51 = (uint8_t)componentPositionMode;
        }
    }

    // 0x100547830
    uint8_t Component::GetModeWidth() const {
        return m_textAlpha;
    }

    // 0x100547840
    uint8_t Component::GetModeHeight() const {
        return m_modeHeight;
    }

    // 0x100547850
    void Component::SetAspectRatioWidth(int arg1) {
        if (field_72 != arg1) {
            FlagParentLayoutDirty();
            MainLogic();
            field_72 = arg1;
        }
    }

    // 0x100547880
    void Component::SetAspectRatioHeight(int arg1) {
        if (field_76 != arg1) {
            FlagParentLayoutDirty();
            MainLogic();
            field_76 = arg1;
        }
    }

    // 0x1005478b0
    void Component::SetLayerID(unsigned short arg1) {
        if (field_14 != 65535) {
            LogAssert("m_layerID == -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Component.h",
                      114, nullptr);
        }
        field_14 = arg1;
    }

    // 0x1005478f0
    void Component::SetInitiallyHidden(bool arg1) {
        field_49 = eastl::bitset<6ul, unsigned char>::set(1, arg1);
    }

    // 0x100547910
    void Component::SetClickthrough(bool arg1) {
        field_49 = eastl::bitset<6ul, unsigned char>::set(2, arg1);
    }

    // 0x100547930
    void Component::SetStyleSheetPackID(short arg1) {
        m_styleSheetPackID = arg1;
        ApplyStyleSheet();
    }

    // 0x100547940
    void Component::SetParentPageIndex(unsigned char arg1) {
        m_parentPageIndex = arg1;
    }

    // 0x100547950
    uint8_t* Component::GetServerConfig() {
        return &field_296;
    }

    // 0x100547a10
    void Component::SetHooks(std::unique_ptr<UIHookProperties>&& uiHookProperties) {
        field_104 = uiHookProperties;
    }

    // 0x100549e00
    void Component::FlagParentLayoutDirty() {
        long* plVar2;

        shared_ptr local_20 = field_16.lock();
        if (shared_ptr::operator_cast_to_bool(&local_20) != '\0') {
            plVar2 = (long*)local_20.operator->();
            (**(void (**)(...))(*plVar2 + 80))(plVar2);
        }
    }

    // 0x10067aa70
    unsigned int Component::GetLayerID() const {
        unsigned int uVar1 = 4294967295;
        if (field_14 != 65535) {
            uVar1 = (unsigned int)field_14;
        }
        return uVar1;
    }

    // 0x10067ab40
    bool Component::NeedsStaticComponentLinking() const {
        uint64_t extraout_var;

        uint8_t uVar1 = GetLinkedStaticComponentID();
        return (int)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1) != -1;
    }

    // 0x10067ab70
    void Component::SetStaticParent(const shared_ptr<Component>& component) {
        if (field_16.expired() == '\0') {
            LogAssert("m_parent.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Component.h",
                      98, nullptr);
        }
        if (field_12 != 65535) {
            LogAssert("m_dynamicID == -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Component.h",
                      98, nullptr);
        }
        field_16 = component;
    }

    // 0x100688cd0
    Component::Component() : field_8(65535), field_10(65535), field_12(65535), field_14(65535) {
        new (&field_16) shared_ptr();
        new (&field_32) shared_ptr();
        m_parentPageIndex = '\0';
        new (&field_49) eastl::bitset<6ul, unsigned char>(0);
        field_54 = '\0';
        field_50 = 0;
        field_51 = 0;
        m_modeWidth = 0;
        m_modeHeight = 0;
        field_56 = 0;
        field_60 = 0;
        m_dataWidth = 0;
        m_dataHeight = 0;
        field_72 = 1;
        field_76 = 1;
        m_currentX = 0;
        m_currentY = 0;
        m_currentWidth = 0;
        m_currentHeight = 0;
        m_rGB = 16777215;
        m_alpha = 255;
        m_styleSheetPackID = -1;
        field_104.unique_ptr<true, void>();
        new (&field_112) ComponentOpConfig();
        new (&field_256) ComponentCursorConfig();
        new (m_dragConfig) ComponentDragConfig();
        new (&field_288) ComponentSwipeConfig();
        new (&field_293) math::Vector2T();
        new (&field_296) ComponentServerConfig();
        new (&field_312) ComponentParams();
        new (&field_320) eastl::string();
        field_352 = 255;
        field_356 = 0;
        new (&field_360) eastl::string();
    }

    // 0x100688f50
    Component::~Component() {
        field_360.~basic_string();
        field_320.~basic_string();
        field_312.~ComponentParams();
        field_296.~ComponentServerConfig();
        m_dragConfig->~VisibleShadowCastingLightInfo();
        field_112.~ComponentOpConfig();
        field_104.~unique_ptr();
        field_32.~weak_ptr();
        field_16.~weak_ptr();
    }

    // 0x100689230
    uint8_t Component::GetAlpha() const {
        return m_alpha;
    }

    // 0x100689970
    void Component::SetEnabled(bool arg1) {
        field_49 = eastl::bitset<6ul, unsigned char>::set(0, arg1);
    }

    // 0x100689a50
    bool Component::IsEnabled() const {
        unsigned int uVar2 = 0;
        if (field_49.test(0) != '\0') {
            uVar2 = field_49.test(5);
            uVar2 = uVar2 ^ 1;
        }
        return uVar2;
    }

    // 0x100689aa0
    unsigned int Component::GetRGBA() const {
        return (unsigned int)m_alpha | m_rGB << 8;
    }

    // 0x100690e00
    void Component::IsCurrentlyMouseOver() const {
        field_49.test(3);
    }

    // 0x100692420
    unsigned int Component::GetInterfaceID() const {
        unsigned int uVar1 = 4294967295;
        if (field_8 != 65535) {
            uVar1 = (unsigned int)field_8;
        }
        return uVar1;
    }

    // 0x100692440
    unsigned int Component::GetStaticID() const {
        unsigned int uVar1 = 4294967295;
        if (field_10 != 65535) {
            uVar1 = (unsigned int)field_10;
        }
        return uVar1;
    }

    // 0x1006924a0
    bool Component::HasDynamicRoot() const {
        return field_32.expired() ^ 1;
    }

    // 0x1006924c0
    auto Component::GetDynamicRoot() const {
        auto result;
        result = field_32.lock();
        return result;
    }

    // 0x1006924e0
    unsigned int Component::GetDynamicID() const {
        unsigned int uVar1 = 4294967295;
        if (field_12 != 65535) {
            uVar1 = (unsigned int)field_12;
        }
        return uVar1;
    }

    // 0x100694a60
    void Component::IsInitiallyHidden() const {
        field_49.test(1);
    }

    // 0x100695a90
    unsigned int Component::GetCombinedID() const {
        unsigned int uVar1 = 4294967295;
        if (field_10 != 65535) {
            uVar1 = (unsigned int)field_10;
        }
        return uVar1 | (unsigned int)field_8 << 16;
    }

    // 0x100696000
    void ComponentHelpers::GetMaxDynamicID(int arg1) {
        if (234 < (unsigned int)arg1) {
            LogAssert("(categoryID >= 0) && (categoryID < CATEGORY_ID_MAX)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Component.h",
                      447, nullptr);
        }
        uint64_t uVar1 = 256;
        if (arg1 == 0) {
            uVar1 = 4096;
        }
        return uVar1;
    }

    // 0x100697660
    void Component::SetCurrentX(int arg1) {
        m_currentX = arg1;
    }

    // 0x100697670
    void Component::SetCurrentY(int arg1) {
        m_currentY = arg1;
    }

    // 0x10069b910
    void Component::IsClickthrough() const {
        field_49.test(2);
    }

    // 0x1006a2f60
    unsigned char Component::GetParentPageIndex() const {
        return m_parentPageIndex;
    }

    // 0x1006ac750
    oldscape::dash3d::GridRect Component::GetBounds() const {
        int arg1 = GetCurrentX();
        int arg2 = GetLoopLength();
        int arg3 = GetStreamCountLastMix();
        int arg4 = GetMinMapX();
        return oldscape::dash3d::GridRect(arg1, arg2, arg3, arg4);
    }

    // 0x1006acd80
    void Component::SetForceDisabled(bool arg1) {
        field_49 = eastl::bitset<6ul, unsigned char>::set(5, arg1);
    }

    // 0x1006acda0
    Margin Component::GetMargin(Component::MarginType marginType) const {

        return local_c;
        return local_c;
    }

    // 0x1006acdc0
    void Component::LinkStaticComponent(const shared_ptr<Component>& component) {
        LogAssertAlways(
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Component.h", 223,
            nullptr);
    }

    // 0x1006acde0
    uint8_t* Component::GetValueRepresentation() {
        if (*PTR_none_100ee50c8 == '\0') {
            if (___cxa_guard_acquire(PTR_none_100ee50c8) != 0) {
                ___cxa_atexit(PTR_destruct<oldscape::highlight::NpcUID*> _100ee6448, PTR_none_100ee9d38, 4294967296);
                ___cxa_guard_release(PTR_none_100ee50c8);
            }
        }
        return PTR_none_100ee9d38;
    }

    // 0x1006ace40
    void Component::OnResizeAnimation() {
        MainLogic();
    }

    // 0x1006cb8c0
    void Component::BindAnimation(graphics::GUIAnimationInstance&)::$_32::operator()(math::Vector2T<int>* vector21,
                                                                                     math::Vector2T<int> vector22,
                                                                                     math::Vector2T<int> vector23,
                                                                                     float arg4) const {
        long lVar2 = field_0;
        uint64_t local_38 = math::Lerp<math::Vector2T<int>, float>(vector22, vector23, arg4);
        uint64_t uVar3 = local_38 - *vector21;
        *vector21 = local_38;
        int* piVar1 = (int*)(lVar2 + 80);
        *piVar1 = *piVar1 + (int)uVar3;
        piVar1 = (int*)(lVar2 + 84);
        *piVar1 = *piVar1 + (int)((unsigned long)uVar3 >> 32);
    }

    // 0x1006cbd30
    void Component::BindAnimation(graphics::GUIAnimationInstance&)::$_33::operator()(math::Vector2T<int>* vector21,
                                                                                     math::Vector2T<float> vector22,
                                                                                     math::Vector2T<float> vector23,
                                                                                     float arg4) const {
        uint32_t in_XMM0_Db;
        float in_XMM2_Da;
        Vector2T<float> local_20;

        uint64_t local_28 = (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg4);
        long lVar1 = field_0;
        uint64_t uVar2 = math::Lerp<math::Vector2T<float>, float>(local_28, local_20, in_XMM2_Da);
        *(int*)(lVar1 + 80) = (int)((float)*(int*)vector21 * (float)uVar2);
        *(int*)(lVar1 + 84) = (int)((float)((unsigned long)uVar2 >> 32) * (float)*(int*)(vector21 + 4));
    }

    // 0x1006cced0
    void Component::BindAnimation(graphics::GUIAnimationInstance&)::$_34::operator()(math::Vector2T<int> vector21,
                                                                                     math::Vector2T<int> vector22,
                                                                                     float arg3) const {
        long lVar1 = field_0;
        uint64_t uVar2 = math::Lerp<math::Vector2T<int>, float>(vector21, vector22, arg3);
        *(uint64_t*)(lVar1 + 80) = uVar2;
    }

    // 0x1006cea40
    void Component::BindAnimation(graphics::GUIAnimationInstance&)::$_38::operator()(math::Vector2T<int>* vector21,
                                                                                     math::Vector2T<int> vector22,
                                                                                     math::Vector2T<int> vector23,
                                                                                     float arg4) const {
        long* plVar1 = field_0;
        uint64_t local_38 = math::Lerp<math::Vector2T<int>, float>(vector22, vector23, arg4);
        uint64_t uVar2 = local_38 - *vector21;
        *vector21 = local_38;
        *(int*)(plVar1 + 11) = (int)plVar1[11] + (int)uVar2;
        *(int*)((long)plVar1 + 92) = *(int*)((long)plVar1 + 92) + (int)((unsigned long)uVar2 >> 32);
        (**(void (**)(...))(*plVar1 + 240))(plVar1);
    }

    // 0x1006cece0
    void Component::BindAnimation(graphics::GUIAnimationInstance&)::$_39::operator()(math::Vector2T<int>* vector21,
                                                                                     math::Vector2T<float> vector22,
                                                                                     math::Vector2T<float> vector23,
                                                                                     float arg4) const {
        uint32_t in_XMM0_Db;
        float in_XMM2_Da;
        Vector2T<float> local_20;

        uint64_t local_28 = (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg4);
        long* plVar1 = field_0;
        uint64_t uVar2 = math::Lerp<math::Vector2T<float>, float>(local_28, local_20, in_XMM2_Da);
        *(int*)(plVar1 + 11) = (int)((float)*(int*)vector21 * (float)uVar2);
        *(int*)((long)plVar1 + 92) = (int)((float)((unsigned long)uVar2 >> 32) * (float)*(int*)(vector21 + 4));
        (**(void (**)(...))(*plVar1 + 240))(plVar1);
    }

    // 0x1006cef60
    void Component::BindAnimation(graphics::GUIAnimationInstance&)::$_40::operator()(math::Vector2T<int> vector21,
                                                                                     math::Vector2T<int> vector22,
                                                                                     float arg3) const {
        long* plVar1 = field_0;
        plVar1[11] = math::Lerp<math::Vector2T<int>, float>(vector21, vector22, arg3);
        (**(void (**)(...))(*plVar1 + 240))(plVar1);
    }

} // namespace jag::ui

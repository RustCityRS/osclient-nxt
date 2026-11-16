// libs/ui/components/Slider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.ui

namespace jag::ui {
    class Slider {
    public:
        // virtual methods in vtable order
        virtual ~Slider();
        virtual uint64_t GetType() const;
        virtual void MainLogic(const ComponentDependencies& componentDependencies, int arg2, int arg3, bool arg4,
                               bool arg5, bool arg6, bool arg7);
        virtual void MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2);
        virtual uint8_t* GetValueRepresentation();
        virtual void LoadStyleSheetVisuals(const StyleSheet& styleSheet);
        virtual Vector2T<float> HasRecentValueChange() const;
        virtual void NotifyRecentValueChangeHandled();
        virtual int GetCurrentValue() const;
        Slider();
        void UpdateThumbLogic(math::Vector2T<float> vector2, bool arg2, bool arg3, bool arg4);
        void HandleMouseWheelScroll(float arg1);
        void UpdateAnimations(float arg1);
        bool ShowNotches() const;
        void DrawNotches(graphics::RT7Core* rt7Core, int arg2, int arg3);
        void DrawTrack(graphics::RT7Core* rt7Core, int arg2, int arg3);
        void DrawThumb(graphics::RT7Core* rt7Core, int arg2, int arg3);
        void DrawLabels(graphics::FontManager* fontManager, graphics::FontHelpers* fontHelpers, int arg3, int arg4);
        uint32_t Setup(int arg1, int arg2, int arg3, int arg4, int arg5);
        void ValidateValues(int arg1, int arg2, int arg3, int arg4, int arg5);
        unsigned long Setup(const UIDataMappingProvider<int, StringView>& uiDataMappingProvider);
        unsigned long SetCurrentValue(int arg1, bool arg2);
        uint8_t* GetCurrentValueLabel() const;
        auto GetCurrentValueAsString() const;
        void SetVisualParams(unsigned short arg1, unsigned short arg2, unsigned short arg3, unsigned short arg4,
                             unsigned short arg5, unsigned short arg6);
        math::Rect<float> GetVisualUV<TrackVisualState>(const math::Rect<float>& rect,
                                                        TrackVisualState trackVisualState);
        float GetValuePercentage() const;
        math::Rect<float> GetVisualUV<ThumbVisualState>(const math::Rect<float>& rect,
                                                        ThumbVisualState thumbVisualState);
        int GetDisplayValue() const;
        uint8_t* GetDisplayValueLabel() const;
        float GetGraphicSliceOffset<TrackVisualState>(TrackVisualState trackVisualState);
        float GetGraphicSliceHeightPercent<TrackVisualState>();
        float GetGraphicSliceOffset<ThumbVisualState>(ThumbVisualState thumbVisualState);
        float GetGraphicSliceHeightPercent<ThumbVisualState>();

    private:
        unsigned short field_8;
        unsigned short field_10;
        unsigned short field_12;
        unsigned short field_14;
        uint8_t _unknown_16[32];
        unsigned char field_48;
        uint8_t _unknown_49[1];
        uint8_t field_50;
        uint8_t field_51;
        uint8_t field_52;
        uint8_t field_53;
        char field_54;
        uint8_t _unknown_55[1];
        int field_56;
        int field_60;
        int field_64;
        int field_68;
        int field_72;
        int field_76;
        int field_80;
        int field_84;
        unsigned int field_88;
        int field_92;
        uint32_t field_96;
        uint8_t field_100;
        uint8_t _unknown_101[1];
        short field_102;
        uint8_t _unknown_104[160];
        VisibleShadowCastingLightInfo field_264;
        ComponentSwipeConfig field_288;
        uint8_t _unknown_293[59];
        uint8_t field_352;
        uint8_t _unknown_353[3];
        uint32_t field_356;
        uint8_t _unknown_360[32];
        uint8_t** m_pValueRepresentation;
        uint8_t _unknown_400[144];
        TcpConnectionMessageBase field_544;
        uint8_t _unknown_592[16];
        unsigned int field_608;
        unsigned int field_612;
        int m_currentValue;
        int field_620;
        unsigned int field_624;
        unsigned short field_628;
        unsigned short field_630;
        unsigned short field_632;
        unsigned short field_634;
        unsigned short field_636;
        unsigned short field_638;
        HeaderAlignment field_640;
        Vector2T<float> m_hasRecentValueChange;
        uint8_t _unknown_645[163];
        float field_808;
        float field_812;
        float field_816;
        Vector2T<float> field_820;
        Vector2T<float> field_821;
        uint8_t _unknown_822[2];
        int field_824;
        uint8_t _unknown_828[4];
    };

    // 0x1006a98c0
    bool Slider::ShowNotches() const {
        return field_634 != 0;
    }

    // 0x1006ab360
    math::Rect<float> Slider::GetVisualUV<Slider::TrackVisualState>(const math::Rect<float>& rect,
                                                                    Slider::TrackVisualState trackVisualState) {
        TrackVisualState in_EDX;
        uint32_t in_register_00000034;

        new (rect) math::Float4(*((Rect<float>*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)trackVisualState)));
        auto pfVar3 = rect.qw();
        float fVar1 = *pfVar3;
        pfVar3 = (float*)rect.y();
        float fVar2 = *pfVar3;
        float fVar4 = GetGraphicSliceOffset<Slider::TrackVisualState>(in_EDX);
        float fVar5 = GetGraphicSliceHeightPercent<Slider::TrackVisualState>();
        pfVar3 = (float*)rect.y();
        *pfVar3 = fVar4 * fVar1 + fVar2;
        rect.SetVerticalFov(fVar5 * fVar1);
        return rect;
    }

    // 0x1006ab3f0
    float Slider::GetValuePercentage() const {
        int iVar1;

        float fVar2 = 0.0;
        if ((int)field_608 < (int)field_612) {
            iVar1 = GetDisplayValue();
            fVar2 = (float)(int)(iVar1 - field_608) / (float)(int)(field_612 - field_608);
        }
        return fVar2;
    }

    // 0x1006ab440
    math::Rect<float> Slider::GetVisualUV<Slider::ThumbVisualState>(const math::Rect<float>& rect,
                                                                    Slider::ThumbVisualState thumbVisualState) {
        ThumbVisualState in_EDX;
        uint32_t in_register_00000034;

        new (rect) math::Float4(*((Rect<float>*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)thumbVisualState)));
        auto pfVar3 = rect.qw();
        float fVar1 = *pfVar3;
        pfVar3 = (float*)rect.y();
        float fVar2 = *pfVar3;
        float fVar4 = GetGraphicSliceOffset<Slider::ThumbVisualState>(in_EDX);
        float fVar5 = GetGraphicSliceHeightPercent<Slider::ThumbVisualState>();
        pfVar3 = (float*)rect.y();
        *pfVar3 = fVar4 * fVar1 + fVar2;
        rect.SetVerticalFov(fVar5 * fVar1);
        return rect;
    }

    // 0x1006ab4d0
    int Slider::GetDisplayValue() const {
        int* piVar1 = &field_824;
        if (field_821[0] == '\0') {
            piVar1 = &m_currentValue;
        }
        return *piVar1;
    }

    // 0x1006ae180
    Vector2T<float> Slider::HasRecentValueChange() const {
        return m_hasRecentValueChange[0];
    }

    // 0x1006ae190
    void Slider::NotifyRecentValueChangeHandled() {
        m_hasRecentValueChange[0] = 0;
    }

    // 0x1006b30f0
    Slider::~Slider() {
        m_pValueRepresentation = &PTR__Slider_100f0fc68;
        field_648.~fixed_vector();
        field_544->~TextData();
        field_496.~Sprite();
        field_448.~Sprite();
        field_400.~Sprite();
        (&m_pValueRepresentation)->destruct<oldscape::highlight::NpcUID*>();
    }

    // 0x1006dafb0
    void Slider::Setup(UIDataMappingProvider<int, StringView> const&)::$_59::operator()(int arg1,
                                                                                        StringView stringView) const {
        uint32_t in_register_00000034;

        long lVar1 = *(long*)this;
        auto local_30 = ((StringView*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1))
                            ->to_owned_string<eastl::basic_string<char, BucketAllocatorEASTL>>();
        ((lVar1 + 648))->push_back(local_30);
    }

    // 0x1006db3e0
    float Slider::GetGraphicSliceOffset<Slider::TrackVisualState>(Slider::TrackVisualState trackVisualState) {
        return (float)(int)trackVisualState * 0.25;
    }

    // 0x1006db400
    float Slider::GetGraphicSliceHeightPercent<Slider::TrackVisualState>() {
        return 0.25;
    }

    // 0x1006db410
    float Slider::GetGraphicSliceOffset<Slider::ThumbVisualState>(Slider::ThumbVisualState thumbVisualState) {
        return (float)(int)thumbVisualState * 0.25;
    }

    // 0x1006db430
    float Slider::GetGraphicSliceHeightPercent<Slider::ThumbVisualState>() {
        return 0.25;
    }

} // namespace jag::ui

namespace jag::tweak {
    // 0x1007fd220
    void Slider::SetSlider<unsigned int>(unsigned int arg1) {
        enable_shared_from_this<PathingEntity> local_48;
        float local_38[6];

        local_38[0] = (float)arg1;
        float local_1c = math::Clamp<float>(*local_38, field_524, field_528);
        float local_20 = m_currentValue;
        SetCurrentValue(local_1c);
        if (local_1c != local_20) {
            local_48.shared_from_this();
            new (local_38) Event(local_48, 3);
            DoCallback(*local_38);
        }
    }

    // 0x100912aa0
    void Slider::SetSlider<float>(float arg1) {
        enable_shared_from_this<PathingEntity> local_48;
        float local_38[6];

        local_38[0] = arg1;
        float local_1c = math::Clamp<float>(*local_38, field_524, field_528);
        float local_20 = m_currentValue;
        SetCurrentValue(local_1c);
        if (local_1c != local_20) {
            local_48.shared_from_this();
            new (local_38) Event(local_48, 3);
            DoCallback(*local_38);
        }
    }

    // 0x100912b60
    float Slider::GetCurrentValue() {
        return m_currentValue;
    }

    // 0x100a41130
    void Slider::SetSliderDiscrete<float>(float arg1) {
        float local_14;

        SetCurrentValue(math::Clamp<float>(local_14, field_524, field_528));
    }

    // 0x100a48710
    Slider::~Slider() {
        field_448.~fixed_string();
    }

    // 0x100a51780
    void Slider::InitDefault() {
        field_520 = m_currentValue;
    }

} // namespace jag::tweak

namespace jag {
    // 0x1006aac40
    bool operator== <char, BucketAllocatorEASTL>(const eastl::basic_string<char, BucketAllocatorEASTL>& str,
                                                 const StringView& stringView) {
        char* pcVar4;
        char* pcVar5;
        size_t sVar6;
        bool bVar7;

        long lVar2 = str.size();
        long lVar3 = stringView.HeapBeginPtr();
        if (lVar2 == lVar3) {
            lVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            lVar3 = stringView.end();
            if (lVar2 == lVar3) {
                bVar7 = true;
            } else {
                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pcVar5 = (char*)stringView.end();
                sVar6 = str.size();
                bVar7 = _strncmp(pcVar4, pcVar5, sVar6) == 0;
            }
        } else {
            bVar7 = false;
        }
        return bVar7;
    }

} // namespace jag

// 0x1006ab650
void round(float arg1) {
    _roundf();
}

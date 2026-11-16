// libs/ui/components/Slider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.ui

namespace jag::ui {
    class Slider {
    public:
        // virtual methods in vtable order
        virtual ~Slider();
        virtual GetType() const;
        virtual void MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool);
        virtual void MainDraw(ComponentDependencies const&, int, int, float);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        virtual GetValueRepresentation();
        virtual void LoadStyleSheetVisuals(StyleSheet const&);
        virtual HasRecentValueChange() const;
        virtual void NotifyRecentValueChangeHandled();
        virtual int GetCurrentValue() const;
        Slider();
        void UpdateThumbLogic(math::Vector2T<float>, bool, bool, bool);
        void HandleMouseWheelScroll(float);
        void UpdateAnimations(float);
        bool ShowNotches() const;
        void DrawNotches(graphics::RT7Core*, int, int);
        void DrawTrack(graphics::RT7Core*, int, int);
        void DrawThumb(graphics::RT7Core*, int, int);
        void DrawLabels(graphics::FontManager*, graphics::FontHelpers*, int, int);
        Setup(int, int, int, int, int);
        ValidateValues(int, int, int, int, int);
        ulong Setup(UIDataMappingProvider<int, StringView> const&);
        ulong SetCurrentValue(int, bool);
        GetCurrentValueLabel() const;
        GetCurrentValueAsString() const;
        void SetVisualParams(unsigned short, unsigned short, unsigned short, unsigned short, unsigned short,
                             unsigned short);
        math::Rect<float> GetVisualUV<TrackVisualState>(math::Rect<float> const&, TrackVisualState);
        float GetValuePercentage() const;
        math::Rect<float> GetVisualUV<ThumbVisualState>(math::Rect<float> const&, ThumbVisualState);
        int GetDisplayValue() const;
        GetDisplayValueLabel() const;
        float GetGraphicSliceOffset<TrackVisualState>(TrackVisualState);
        float GetGraphicSliceHeightPercent<TrackVisualState>();
        float GetGraphicSliceOffset<ThumbVisualState>(ThumbVisualState);
        float GetGraphicSliceHeightPercent<ThumbVisualState>();

        // data members, from how the methods use this: 832 bytes
        undefined** field_0; // offset 0, vtable pointer
        ushort field_8;      // offset 8
        ushort field_10;     // offset 10
        ushort field_12;     // offset 12
        ushort field_14;     // offset 14
        char _unknown_16[32];
        uchar field_48; // offset 48
        char _unknown_49[1];
        char field_50; // offset 50
        char field_51; // offset 51
        char field_52; // offset 52
        char field_53; // offset 53
        char field_54; // offset 54
        char _unknown_55[1];
        int field_56;        // offset 56
        int field_60;        // offset 60
        int field_64;        // offset 64
        int field_68;        // offset 68
        int field_72;        // offset 72
        int field_76;        // offset 76
        int field_80;        // offset 80
        int field_84;        // offset 84
        int field_88;        // offset 88
        int field_92;        // offset 92
        undefined4 field_96; // offset 96
        byte field_100;      // offset 100
        char _unknown_101[1];
        short field_102; // offset 102
        char _unknown_104[160];
        VisibleShadowCastingLightInfo field_264; // offset 264
        ComponentSwipeConfig field_288;          // offset 288
        char _unknown_293[59];
        undefined1 field_352; // offset 352
        char _unknown_353[3];
        undefined4 field_356; // offset 356
        char _unknown_360[32];
        undefined** field_392; // offset 392
        char _unknown_400[144];
        TcpConnectionMessageBase field_544; // offset 544
        char _unknown_592[16];
        int field_608;                     // offset 608
        uint field_612;                    // offset 612
        int m_currentValue;                // offset 616
        int field_620;                     // offset 620
        int field_624;                     // offset 624
        ushort field_628;                  // offset 628
        ushort field_630;                  // offset 630
        ushort m_visualParams;             // offset 632
        ushort field_634;                  // offset 634
        ushort field_636;                  // offset 636
        ushort field_638;                  // offset 638
        int field_640;                     // offset 640
        undefined1 m_hasRecentValueChange; // offset 644
        char _unknown_645[163];
        float field_808; // offset 808
        float field_812; // offset 812
        float field_816; // offset 816
        char field_820;  // offset 820
        char field_821;  // offset 821
        char _unknown_822[10];
    };

    // 0x1006a98c0, 32 bytes, inline, placed by class name and debug map
    // Slider::ShowNotches() const
    bool Slider::ShowNotches() {
        return field_634 != 0;
    }

    // 0x1006ab360, 144 bytes, inline, placed by class name and debug map
    // math::Rect<float> Slider::GetVisualUV<Slider::TrackVisualState>(math::Rect<float> const&, Slider::TrackVisualState)
    Slider* Slider::GetVisualUV<Slider::TrackVisualState>(Vector4T* param_1, undefined4 param_3) {
        float fVar1;
        float fVar2;
        float* pfVar3;
        float fVar4;
        float fVar5;

        new (this) math::Float4(param_1);
        pfVar3 = (float*)qw();
        fVar1 = *pfVar3;
        pfVar3 = (float*)y();
        fVar2 = *pfVar3;
        fVar4 = GetGraphicSliceOffset<Slider::TrackVisualState>(param_3);
        fVar5 = GetGraphicSliceHeightPercent<Slider::TrackVisualState>();
        pfVar3 = (float*)y();
        *pfVar3 = fVar4 * fVar1 + fVar2;
        SetVerticalFov(fVar5 * fVar1);
        return this;
    }

    // 0x1006ab3f0, 80 bytes, inline, placed by class name and debug map
    // Slider::GetValuePercentage() const
    float Slider::GetValuePercentage() {
        int iVar1;
        float fVar2;

        fVar2 = 0.0;
        if (field_608 < (int)field_612) {
            iVar1 = GetDisplayValue(this);
            fVar2 = (float)(iVar1 - field_608) / (float)(int)(field_612 - field_608);
        }
        return fVar2;
    }

    // 0x1006ab440, 144 bytes, inline, placed by class name and debug map
    // math::Rect<float> Slider::GetVisualUV<Slider::ThumbVisualState>(math::Rect<float> const&, Slider::ThumbVisualState)
    Slider* Slider::GetVisualUV<Slider::ThumbVisualState>(Vector4T* param_1, undefined4 param_3) {
        float fVar1;
        float fVar2;
        float* pfVar3;
        float fVar4;
        float fVar5;

        new (this) math::Float4(param_1);
        pfVar3 = (float*)qw();
        fVar1 = *pfVar3;
        pfVar3 = (float*)y();
        fVar2 = *pfVar3;
        fVar4 = GetGraphicSliceOffset<Slider::ThumbVisualState>(param_3);
        fVar5 = GetGraphicSliceHeightPercent<Slider::ThumbVisualState>();
        pfVar3 = (float*)y();
        *pfVar3 = fVar4 * fVar1 + fVar2;
        SetVerticalFov(fVar5 * fVar1);
        return this;
    }

    // 0x1006ab4d0, 48 bytes, inline, placed by class name and debug map
    // Slider::GetDisplayValue() const
    int Slider::GetDisplayValue() {
        int* piVar1;

        piVar1 = (int*)&field_824;
        if (field_821 == '\0') {
            piVar1 = &m_currentValue;
        }
        return *piVar1;
    }

    // 0x1006ae150, 16 bytes, complete-object destructor, inline, placed by class name
    // Slider::~Slider(): jumps straight to the base-object destructor

    // 0x1006ae160, 32 bytes, deleting destructor, inline, placed by class name
    // Slider::~Slider()
    void Slider::~Slider() {
        ~Slider(this);
        operator_delete(this);
    }

    // 0x1006ae180, 16 bytes, inline, placed by class name
    // Slider::HasRecentValueChange() const
    undefined1 Slider::HasRecentValueChange() {
        return m_hasRecentValueChange;
    }

    // 0x1006ae190, 16 bytes, inline, placed by class name
    // Slider::NotifyRecentValueChangeHandled()
    void Slider::NotifyRecentValueChangeHandled() {
        m_hasRecentValueChange = 0;
    }

    // 0x1006b30f0, 128 bytes, base-object destructor, inline, placed by class name
    // Slider::~Slider()
    void Slider::~Slider() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__Slider_100f0fb40;
        field_392 = &PTR__Slider_100f0fc68;
        (&field_648)->~fixed_vector();
        field_544->~TextData();
        (&field_496)->~Sprite();
        (&field_448)->~Sprite();
        (&field_400)->~Sprite();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)&field_392, in_RSI, extraout_RDX);
        ~Component();
    }

    // 0x1006dafb0, 80 bytes, inline, placed by class name
    // Slider::Setup(UIDataMappingProvider<int, StringView> const&)::$_59::operator()(int, StringView) const
    /* Slider::Setup(UIDataMappingProvider<int, StringView>
   const&)::$_59::TEMPNAMEPLACEHOLDERVALUE(int, StringView) const */

    void Slider::Setup(UIDataMappingProvider<int, StringView> const&)::$_59::operator()(int param_1,
                                                                                        StringView param_2) {
        long lVar1;
        undefined4 in_register_0000003c;
        StringView local_30;

        lVar1 = *(long*)CONCAT44(in_register_0000003c, param_1);
        StringView::to_owned_string<eastl::basic_string<char, BucketAllocatorEASTL>>(&local_30);
        ((lVar1 + 648))->push_back((basic_string*)&local_30);
        local_30.~basic_string();
    }

    // 0x1006db3e0, 32 bytes, inline, placed by class name
    // float Slider::GetGraphicSliceOffset<Slider::TrackVisualState>(Slider::TrackVisualState)
    float Slider::GetGraphicSliceOffset<Slider::TrackVisualState>(int param_1) {
        return (float)param_1 * 0.25;
    }

    // 0x1006db400, 16 bytes, inline, placed by class name
    // float Slider::GetGraphicSliceHeightPercent<Slider::TrackVisualState>()
    float Slider::GetGraphicSliceHeightPercent<Slider::TrackVisualState>() {
        return 0.25;
    }

    // 0x1006db410, 32 bytes, inline, placed by class name
    // float Slider::GetGraphicSliceOffset<Slider::ThumbVisualState>(Slider::ThumbVisualState)
    float Slider::GetGraphicSliceOffset<Slider::ThumbVisualState>(int param_1) {
        return (float)param_1 * 0.25;
    }

    // 0x1006db430, 16 bytes, inline, placed by class name
    // float Slider::GetGraphicSliceHeightPercent<Slider::ThumbVisualState>()
    float Slider::GetGraphicSliceHeightPercent<Slider::ThumbVisualState>() {
        return 0.25;
    }

} // namespace jag::ui

namespace jag::tweak {
    // 0x1007fd220, 208 bytes, inline, placed by class name
    // void Slider::SetSlider<unsigned int>(unsigned int)
    void Slider::SetSlider<unsigned int>(uint param_1) {
        enable_shared_from_this<PathingEntity> local_48[16];
        float local_38[6];
        float local_20;
        float local_1c;

        local_38[0] = (float)param_1;
        local_1c = math::Clamp<float>((float*)local_38, &field_524, &field_528);
        local_20 = m_currentValue;
        (*(code*)field_0[30])(this);
        if (local_1c != local_20) {
            local_48->shared_from_this();
            new (local_38) Event(local_48, 3);
            DoCallback(local_38);
            local_38->~LRUHashCacheWrapper();
            local_48->~shared_ptr();
        }
    }

    // 0x100912aa0, 192 bytes, inline, placed by class name
    // void Slider::SetSlider<float>(float)
    void Slider::SetSlider<float>(float param_1) {
        enable_shared_from_this<PathingEntity> local_48[16];
        float local_38[6];
        float local_20;
        float local_1c;

        local_38[0] = param_1;
        local_1c = math::Clamp<float>((float*)local_38, &field_524, &field_528);
        local_20 = m_currentValue;
        (*(code*)field_0[30])(this);
        if (local_1c != local_20) {
            local_48->shared_from_this();
            new (local_38) Event(local_48, 3);
            DoCallback(local_38);
            local_38->~LRUHashCacheWrapper();
            local_48->~shared_ptr();
        }
    }

    // 0x100912b60, 16 bytes, inline, placed by class name
    // Slider::GetCurrentValue()
    float Slider::GetCurrentValue() {
        return m_currentValue;
    }

    // 0x100a41130, 64 bytes, inline, placed by class name
    // void Slider::SetSliderDiscrete<float>(float)
    void Slider::SetSliderDiscrete<float>(float param_1) {
        float local_14;

        math::Clamp<float>(&local_14, &field_524, &field_528);
        (*(code*)field_0[30])(this);
    }

    // 0x100a48710, 96 bytes, base-object destructor, inline, placed by class name
    // Slider::~Slider()
    void Slider::~Slider() {
        field_0 = &PTR__Slider_100f1d6d8;
        /* WARNING: Subroutine does not return */
        (&field_448)->~fixed_string();
    }

    // 0x100a51750, 16 bytes, complete-object destructor, inline, placed by class name
    // Slider::~Slider(): jumps straight to the base-object destructor

    // 0x100a51760, 32 bytes, deleting destructor, inline, placed by class name
    // Slider::~Slider()
    void Slider::~Slider() {
        ~Slider(this);
        operator_delete(this);
    }

    // 0x100a51780, 32 bytes, inline, placed by class name
    // Slider::InitDefault()
    void Slider::InitDefault() {
        field_520 = m_currentValue;
    }

} // namespace jag::tweak

namespace jag::fixedfunction {
    // 0x1006aac30, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (int, StringView), 64ul, 16ul, (Methods)0>::function<ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59, void>(ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59&&): jumps straight to the base-object constructor

} // namespace jag::fixedfunction

namespace jag {
    // 0x1006aac40, 128 bytes, inline, placed by debug map only (low confidence)
    // bool operator==<char, BucketAllocatorEASTL>(eastl::basic_string<char, BucketAllocatorEASTL> const&, StringView const&)
    /* bool TEMPNAMEPLACEHOLDERVALUE(eastl::basic_string<char, BucketAllocatorEASTL> const&,
   StringView const&) */

    bool operator==(basic_string* param_1, StringView* param_2) {
        long lVar2;
        long lVar3;
        char* pcVar4;
        char* pcVar5;
        size_t sVar6;
        bool bVar7;

        lVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        lVar3 = param_2->HeapBeginPtr();
        if (lVar2 == lVar3) {
            lVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            lVar3 = param_2->end();
            if (lVar2 == lVar3) {
                bVar7 = true;
            } else {
                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pcVar5 = (char*)param_2->end();
                sVar6 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                bVar7 = _strncmp(pcVar4, pcVar5, sVar6) == 0;
            }
        } else {
            bVar7 = false;
        }
        return bVar7;
    }

} // namespace jag

// 0x1006ab650, 16 bytes, placed by debug map only (low confidence)
// round(float)
void round(float param_1) {
    _roundf();
}

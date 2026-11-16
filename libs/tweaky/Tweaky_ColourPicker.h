// libs/tweaky/Tweaky_ColourPicker.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.tweaky

namespace jag::tweak {
    class ColourPicker {
    public:
        // virtual methods in vtable order
        virtual ~ColourPicker();
        virtual OnClick(float, float, bool);
        virtual void InitDefault();
        virtual void ResetToDefault();
        virtual void SetTweaky(weak_ptr<Tweaky>);
        float GetIntensity() const;
        ColourPicker(char const*, bool, math::Range<float> const&);
        ColourPicker(char const*, bool, math::Range<float> const&, math::Range<float> const&);
        void Initialise();
        void CreateSwatch();
        char* CreateRGBASlider(char const*, float*);
        void CreateIntensitySlider();
        void SetColour(math::Vector3T<float> const&);
        void UpdateSliderGradients();
        void UpdateSliderValues();
        void SetColour(math::Vector4T<float> const&);
        GetColour3() const;
        GetColour4() const;
        void SetIntensity(float);

        // data members, from how the methods use this: 456 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[256];
        undefined8 field_264; // offset 264
        shared_ptr field_272; // offset 272
        undefined4 field_288; // offset 288
        undefined2 field_292; // offset 292
        undefined1 field_294; // offset 294
        char _unknown_295[1];
        shared_ptr field_296; // offset 296
        char _unknown_312[48];
        shared_ptr field_360; // offset 360
        shared_ptr field_376; // offset 376
        undefined8 field_392; // offset 392
        undefined8 field_400; // offset 400
        char field_408;       // offset 408
        bool field_409;       // offset 409
        undefined1 field_410; // offset 410
        char _unknown_411[1];
        float field_412;   // offset 412
        float field_416;   // offset 416
        float field_420;   // offset 420
        float field_424;   // offset 424
        float field_428;   // offset 428
        float field_432;   // offset 432
        float field_436;   // offset 436
        float field_440;   // offset 440
        float m_intensity; // offset 444
        float field_448;   // offset 448
        char _unknown_452[4];
    };

    // 0x1004c6a30: the linker folded this into game::WaterType::GetCausticsEdgeFadeStart() const, which has identical code
    ColourPicker::GetIntensity() const;

    // 0x100a40210, 352 bytes, base-object constructor, placed by class name
    // ColourPicker::ColourPicker(char const*, bool, math::Range<float> const&)
    void ColourPicker::ColourPicker(char* param_1, bool param_2, Range* param_3) {
        new (this) Container(param_1);
        field_0 = &PTR__ColourPicker_100f1d1c0;
        new (field_296, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_312, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_328, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_344, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_360, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_376, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_392 = *(undefined8*)param_3;
        new (&field_400, 0.0, 0.0) math::Point<float>();
        field_408 = '\0';
        field_410 = 0;
        field_412 = 0.0;
        field_416 = 0.0;
        field_420 = 0.0;
        field_424 = 0.0;
        field_428 = 0.0;
        field_432 = 0.0;
        field_436 = 0.0;
        field_440 = 0.0;
        m_intensity = 1.0;
        field_448 = 1.0;
        field_409 = param_2;
    }

    // 0x100a40470, 16 bytes, complete-object constructor, placed by class name
    // ColourPicker::ColourPicker(char const*, bool, math::Range<float> const&): jumps straight to the base-object constructor

    // 0x100a40480, 336 bytes, base-object constructor, placed by class name
    // ColourPicker::ColourPicker(char const*, bool, math::Range<float> const&, math::Range<float> const&)
    void ColourPicker::ColourPicker(char* param_1, bool param_2, Range* param_3, Range* param_4) {
        new (this) Container(param_1);
        field_0 = &PTR__ColourPicker_100f1d1c0;
        new (field_296, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_312, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_328, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_344, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_360, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_376, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_392 = *(undefined8*)param_3;
        field_400 = *(undefined8*)param_4;
        field_410 = 0;
        field_412 = 0.0;
        field_416 = 0.0;
        field_420 = 0.0;
        field_424 = 0.0;
        field_428 = 0.0;
        field_432 = 0.0;
        field_436 = 0.0;
        field_440 = 0.0;
        m_intensity = 1.0;
        field_448 = 1.0;
        field_408 = '\x01';
        field_409 = false;
        field_409 = param_2;
    }

    // 0x100a405d0, 16 bytes, complete-object constructor, placed by class name
    // ColourPicker::ColourPicker(char const*, bool, math::Range<float> const&, math::Range<float> const&): jumps straight to the base-object constructor

    // 0x100a405e0, 320 bytes, placed by class name
    // ColourPicker::Initialise()
    void ColourPicker::Initialise() {
        char cVar1;
        shared_ptr local_28;

        CreateSwatch(this);
        CreateRGBASlider((char*)&local_28, (float*)this);
        shared_ptr<GradientSlider>::operator=((shared_ptr<GradientSlider>*)&field_312, &local_28);
        local_28.~shared_ptr();
        CreateRGBASlider((char*)&local_28, (float*)this);
        shared_ptr<GradientSlider>::operator=((shared_ptr<GradientSlider>*)&field_328, &local_28);
        local_28.~shared_ptr();
        CreateRGBASlider((char*)&local_28, (float*)this);
        shared_ptr<GradientSlider>::operator=((shared_ptr<GradientSlider>*)&field_344, &local_28);
        local_28.~shared_ptr();
        if (field_409 == false) {
            field_424 = 255.0;
            cVar1 = field_408;
        } else {
            CreateRGBASlider((char*)&local_28, (float*)this);
            shared_ptr<GradientSlider>::operator=((shared_ptr<GradientSlider>*)field_360, &local_28);
            local_28.~shared_ptr();
            cVar1 = field_408;
        }
        if (cVar1 != '\0') {
            CreateIntensitySlider(this);
        }
        field_410 = 1;
    }

    // 0x100a40720, 304 bytes, placed by class name
    // ColourPicker::CreateSwatch()
    void ColourPicker::CreateSwatch() {
        undefined1* this_00;
        Control* this_01;
        float* local_78;
        float* local_70;
        float* local_68;
        float* local_60;
        shared_ptr local_58[3];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_78 = &field_412;
        local_70 = &field_416;
        local_68 = &field_420;
        local_60 = &field_424;
        make_shared<Swatch, float*, float*, float*, float*>((jag*)local_58, &local_78, &local_70, &local_68, &local_60);
        this_00 = field_296;
        shared_ptr<Swatch>::operator=((shared_ptr<Swatch>*)this_00, local_58);
        local_58->~shared_ptr();
        new (local_58) shared_ptr<oldscape::dash3d::Decor>(this_00);
        Add(local_58);
        local_58->~shared_ptr();
        this_01 = (Control*)shared_ptr<Swatch>::operator->((shared_ptr<Swatch>*)this_00);
        std::function<void(Event_const&)>::function<ColourPicker::CreateSwatch()::__6, void>(local_58, this);
        this_01->SetHandler(local_58);
        std::function<void(Event_const&)>::~function((function<void(Event_const&)>*)local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100a40850, 256 bytes, placed by class name
    // ColourPicker::CreateRGBASlider(char const*, float*)
    char* ColourPicker::CreateRGBASlider(char* param_1, float* param_2) {
        Control* this;
        char* local_78;
        float local_70;
        float local_6c;
        shared_ptr local_68[3];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_68[0]._0_4_ = 0;
        local_70 = 255.0;
        local_6c = 1.0;
        make_shared<GradientSlider, char const*&, float&, float&, float&>((jag*)param_1, &local_78, (float*)local_68,
                                                                          &local_70, &local_6c);
        new (local_68) shared_ptr<oldscape::dash3d::Decor>(param_1);
        param_2->Add(local_68);
        local_68->~shared_ptr();
        this = (Control*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)param_1);
        std::function<void(Event_const&)>::function<ColourPicker::CreateRGBASlider(char const*, float*)::__7, void>(
            local_68, param_2);
        SetHandler(local_68);
        std::function<void(Event_const&)>::~function((function<void(Event_const&)>*)local_68);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x100a40990, 416 bytes, placed by class name
    // ColourPicker::CreateIntensitySlider()
    void ColourPicker::CreateIntensitySlider() {
        undefined8* this_00;
        undefined1* this_01;
        int iVar2;
        Control* this_02;
        GradientSlider* this_03;
        float fVar3;
        float local_78;
        float local_74;
        float local_70;
        float local_6c;
        shared_ptr local_68[3];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = &field_400;
        local_70 = (float)this_00->GetAlpha();
        fVar3 = (float)this_00->GetOverbright();
        iVar2 = math::GetDecimalPlaces<float>(local_70 - fVar3) + 3;
        local_6c = 1.0;
        if (0 < iVar2) {
            do {
                local_6c = local_6c * 0.1;
                iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
        }
        local_78 = (float)this_00->GetOverbright();
        local_74 = (float)this_00->GetAlpha();
        make_shared<GradientSlider, char const(&)[11], float, float, float>((jag*)local_68, "Intensity", &local_78,
                                                                            &local_74, &local_6c);
        this_01 = field_376;
        shared_ptr<GradientSlider>::operator=((shared_ptr<GradientSlider>*)this_01, local_68);
        local_68->~shared_ptr();
        new (local_68) shared_ptr<oldscape::dash3d::Decor>(this_01);
        Add(local_68);
        local_68->~shared_ptr();
        this_02 = (Control*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)this_01);
        std::function<void(Event_const&)>::function<ColourPicker::CreateIntensitySlider()::__8, void>(local_68, this);
        this_02->SetHandler(local_68);
        std::function<void(Event_const&)>::~function((function<void(Event_const&)>*)local_68);
        this_03 = (GradientSlider*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)this_01);
        this_03->SetGradient(255, 4294967295);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100a40b30, 192 bytes, placed by class name
    // ColourPicker::SetColour(math::Vector3T<float> const&)
    void ColourPicker::SetColour(Vector3T* param_1) {
        undefined8* this_00;
        float fVar1;
        float fVar2;

        this_00 = &field_392;
        fVar1 = (float)this_00->GetAlpha();
        fVar2 = (float)this_00->GetOverbright();
        fVar1 = 255.0 / (fVar1 - fVar2);
        fVar2 = (float)this_00->GetOverbright();
        field_412 = (*(float*)param_1 - fVar2) * fVar1;
        field_416 = (*(float*)(param_1 + 4) - fVar2) * fVar1;
        field_420 = (*(float*)(param_1 + 8) - fVar2) * fVar1;
        if (field_410 != '\0') {
            UpdateSliderGradients(this);
            UpdateSliderValues(this);
        }
    }

    // 0x100a40bf0, 480 bytes, placed by class name
    // ColourPicker::UpdateSliderGradients()
    void ColourPicker::UpdateSliderGradients() {
        GradientSlider* pGVar1;
        ImVec4 local_b8[16];
        ImVec4 local_a8[16];
        ImVec4 local_98[16];
        ImVec4 local_88[16];
        ImVec4 local_78[16];
        ImVec4 local_68[16];
        ImVec4 local_58[16];
        ImVec4 local_48[28];
        float local_2c;
        float local_28;
        float local_24;

        local_24 = field_412 * 0.003921569;
        local_28 = field_416 * 0.003921569;
        local_2c = field_420 * 0.003921569;
        ImVec4::ImVec4(local_b8, 0.0, local_28, local_2c, 1.0);
        ImVec4::ImVec4(local_a8, 1.0, local_28, local_2c, 1.0);
        pGVar1 = (GradientSlider*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)&field_312);
        pGVar1->SetGradient(local_b8, local_a8);
        ImVec4::ImVec4(local_98, local_24, 0.0, local_2c, 1.0);
        ImVec4::ImVec4(local_88, local_24, 1.0, local_2c, 1.0);
        pGVar1 = (GradientSlider*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)&field_328);
        pGVar1->SetGradient(local_98, local_88);
        ImVec4::ImVec4(local_78, local_24, local_28, 0.0, 1.0);
        ImVec4::ImVec4(local_68, local_24, local_28, 1.0, 1.0);
        pGVar1 = (GradientSlider*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)&field_344);
        pGVar1->SetGradient(local_78, local_68);
        if (field_409 != false) {
            if (field_360->operator_cast_to_bool()) {
                ImVec4::ImVec4(local_58, local_24, local_28, local_2c, 0.0);
                ImVec4::ImVec4(local_48, local_24, local_28, local_2c, 1.0);
                pGVar1 =
                    (GradientSlider*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)field_360);
                pGVar1->SetGradient(local_58, local_48);
            }
        }
    }

    // 0x100a40dd0, 160 bytes, placed by class name
    // ColourPicker::UpdateSliderValues()
    void ColourPicker::UpdateSliderValues() {
        Slider* pSVar1;

        pSVar1 = (Slider*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)&field_312);
        Slider::SetSliderDiscrete<float>(pSVar1, field_412);
        pSVar1 = (Slider*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)&field_328);
        Slider::SetSliderDiscrete<float>(pSVar1, field_416);
        pSVar1 = (Slider*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)&field_344);
        Slider::SetSliderDiscrete<float>(pSVar1, field_420);
        if (field_409 != false) {
            if (field_360->operator_cast_to_bool()) {
                pSVar1 = (Slider*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)field_360);
                Slider::SetSliderDiscrete<float>(pSVar1, field_424);
            }
        }
    }

    // 0x100a40e70, 208 bytes, placed by class name
    // ColourPicker::SetColour(math::Vector4T<float> const&)
    void ColourPicker::SetColour(Vector4T* param_1) {
        undefined8* this_00;
        float fVar1;
        float fVar2;

        this_00 = &field_392;
        fVar1 = (float)this_00->GetAlpha();
        fVar2 = (float)this_00->GetOverbright();
        fVar1 = 255.0 / (fVar1 - fVar2);
        fVar2 = (float)this_00->GetOverbright();
        field_412 = (*(float*)param_1 - fVar2) * fVar1;
        field_416 = (*(float*)(param_1 + 4) - fVar2) * fVar1;
        field_420 = (*(float*)(param_1 + 8) - fVar2) * fVar1;
        field_424 = (*(float*)(param_1 + 12) - fVar2) * fVar1;
        if (field_410 != '\0') {
            UpdateSliderGradients(this);
            UpdateSliderValues(this);
        }
    }

    // 0x100a40f40, 176 bytes, placed by class name
    // ColourPicker::GetColour3() const
    undefined8 ColourPicker::GetColour3() {
        undefined8* this_00;
        float fVar1;
        undefined8 uVar2;
        float fVar3;
        undefined1 local_28[16];

        this_00 = &field_392;
        local_28._12_4_ = this_00->GetAlpha();
        fVar1 = (float)this_00->GetOverbright();
        local_28._12_4_ = 255.0 / ((float)local_28._12_4_ - fVar1);
        fVar1 = (float)this_00->GetOverbright();
        fVar3 = 1.0 / (float)local_28._12_4_;
        new (local_28) math::ColourHSL(field_412 * fVar3 + fVar1, field_416 * fVar3 + fVar1, fVar3 * field_420 + fVar1);
        uVar2._0_4_ = (float)local_28._0_4_;
        uVar2._4_4_ = (float)local_28._4_4_;
        return uVar2;
    }

    // 0x100a40ff0, 192 bytes, placed by class name
    // ColourPicker::GetColour4() const
    undefined1[16] ColourPicker::GetColour4() {
        undefined8* this_00;
        float fVar1;
        float fVar2;
        undefined1 auVar3[16];
        ImVec4 local_38[28];
        float local_1c;

        this_00 = &field_392;
        local_1c = (float)this_00->GetAlpha();
        fVar1 = (float)this_00->GetOverbright();
        local_1c = 255.0 / (local_1c - fVar1);
        fVar1 = (float)this_00->GetOverbright();
        fVar2 = 1.0 / local_1c;
        ImVec4::ImVec4(local_38, field_412 * fVar2 + fVar1, field_416 * fVar2 + fVar1, field_420 * fVar2 + fVar1,
                       fVar2 * field_424 + fVar1);
        auVar3[0] = local_38[0];
        auVar3[1] = local_38[1];
        auVar3[2] = local_38[2];
        auVar3[3] = local_38[3];
        auVar3[4] = local_38[4];
        auVar3[5] = local_38[5];
        auVar3[6] = local_38[6];
        auVar3[7] = local_38[7];
        auVar3[8] = local_38[8];
        auVar3[9] = local_38[9];
        auVar3[10] = local_38[10];
        auVar3[11] = local_38[11];
        auVar3[12] = local_38[12];
        auVar3[13] = local_38[13];
        auVar3[14] = local_38[14];
        auVar3[15] = local_38[15];
        return auVar3;
    }

    // 0x100a410b0, 64 bytes, placed by class name
    // ColourPicker::SetIntensity(float)
    void ColourPicker::SetIntensity(float param_1) {
        Slider* this_00;

        m_intensity = param_1;
        if (field_410 != '\0') {
            this_00 = (Slider*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)field_376);
            Slider::SetSliderDiscrete<float>(this_00, m_intensity);
        }
    }

    // 0x100a411a0, 144 bytes, placed by class name
    // ColourPicker::OnClick(float, float, bool)
    undefined4 ColourPicker::OnClick(float param_1, float param_2, bool param_3) {
        undefined4 uVar1;
        Event local_48;
        enable_shared_from_this<PathingEntity> local_30[16];

        uVar1 = OnClick(param_1, param_2, param_3);
        if ((char)uVar1 != '\0') {
            local_30->shared_from_this();
            new (&local_48) Event(local_30, 2);
            DoCallback(&local_48);
            local_48.~LRUHashCacheWrapper();
            local_30->~shared_ptr();
        }
        return uVar1;
    }

    // 0x100a41560, 48 bytes, placed by class name
    // ColourPicker::SetTweaky(weak_ptr<Tweaky>)
    void ColourPicker::SetTweaky(weak_ptr* param_2) {
        weak_ptr<Tweaky>::operator=((weak_ptr<Tweaky>*)&field_104, param_2);
        Initialise(this);
    }

    // 0x100a415d0, 160 bytes, placed by class name
    // ColourPicker::InitDefault()
    void ColourPicker::InitDefault() {
        Event local_40;
        enable_shared_from_this<PathingEntity> local_28[16];

        field_428 = field_412;
        field_432 = field_416;
        field_436 = field_420;
        field_440 = field_424;
        field_448 = m_intensity;
        InitDefault();
        local_28->shared_from_this();
        new (&local_40) Event(local_28, 1);
        DoCallback(&local_40);
        local_40.~LRUHashCacheWrapper();
        local_28->~shared_ptr();
    }

    // 0x100a41700, 192 bytes, placed by class name
    // ColourPicker::ResetToDefault()
    void ColourPicker::ResetToDefault() {
        Event local_40;
        enable_shared_from_this<PathingEntity> local_28[16];

        field_412 = field_428;
        field_416 = field_432;
        field_420 = field_436;
        field_424 = field_440;
        if (field_408 != '\0') {
            SetIntensity(this, field_448);
        }
        UpdateSliderGradients(this);
        UpdateSliderValues(this);
        ResetToDefault();
        local_28->shared_from_this();
        new (&local_40) Event(local_28, 3);
        DoCallback(&local_40);
        local_40.~LRUHashCacheWrapper();
        local_28->~shared_ptr();
    }

    // 0x100a51690, 16 bytes, complete-object destructor, inline, placed by class name
    // ColourPicker::~ColourPicker(): jumps straight to the base-object destructor

    // 0x100a516a0, 32 bytes, deleting destructor, inline, placed by class name
    // ColourPicker::~ColourPicker()
    void ColourPicker::~ColourPicker() {
        ~ColourPicker(this);
        operator_delete(this);
    }

    // 0x100a52a90, 112 bytes, base-object destructor, inline, placed by class name
    // ColourPicker::~ColourPicker()
    void ColourPicker::~ColourPicker() {
        field_0 = &PTR__ColourPicker_100f1d1c0;
        field_376->~shared_ptr();
        field_360->~shared_ptr();
        (&field_344)->~shared_ptr();
        (&field_328)->~shared_ptr();
        (&field_312)->~shared_ptr();
        field_296->~shared_ptr();
        ~Container();
    }

    // 0x100a58c10, 144 bytes, placed by class name
    // ColourPicker::CreateSwatch()::$_6::operator()(Event const&) const
    /* ColourPicker::CreateSwatch()::$_6::TEMPNAMEPLACEHOLDERVALUE(Event const&)
   const */

    void ColourPicker::CreateSwatch()::$_6::operator()(Event* param_1) {
        ColourPicker* this_00;
        Event local_40;
        enable_shared_from_this<PathingEntity> local_28[16];

        if (param_1->field_16 == 3) {
            this_00 = *(ColourPicker**)this;
            UpdateSliderGradients(this_00);
            UpdateSliderValues(this_00);
            local_28->shared_from_this();
            new (&local_40) Event(local_28, 3);
            this_00->DoCallback(&local_40);
            local_40.~LRUHashCacheWrapper();
            local_28->~shared_ptr();
        }
    }

    // 0x100a596c0, 208 bytes, placed by class name
    // ColourPicker::CreateRGBASlider(char const*, float*)::$_7::operator()(Event const&) const
    /* ColourPicker::CreateRGBASlider(char const*,
   float*)::$_7::TEMPNAMEPLACEHOLDERVALUE(Event const&) const */

    void ColourPicker::CreateRGBASlider(char const*, float*)::$_7::operator()(Event* param_1) {
        ColourPicker* this_00;
        Slider* this_01;
        undefined4 uVar1;
        Event local_50;
        enable_shared_from_this<PathingEntity> local_38[16];

        this_00 = *(ColourPicker**)this;
        this_01 = (Slider*)param_1->end();
        if (param_1->field_16 == 1) {
            Slider::SetSliderDiscrete<float>(this_01, **(float**)(this + 8));
        }
        if (param_1->field_16 == 3) {
            uVar1 = this_01->GetCurrentValue();
            **(undefined4**)(this + 8) = uVar1;
            UpdateSliderGradients(this_00);
            local_38->shared_from_this();
            new (&local_50) Event(local_38, 3);
            this_00->DoCallback(&local_50);
            local_50.~LRUHashCacheWrapper();
            local_38->~shared_ptr();
        }
    }

    // 0x100a5a0d0, 192 bytes, placed by class name
    // ColourPicker::CreateIntensitySlider()::$_8::operator()(Event const&) const
    /* ColourPicker::CreateIntensitySlider()::$_8::TEMPNAMEPLACEHOLDERVALUE(Event
   const&) const */

    void ColourPicker::CreateIntensitySlider()::$_8::operator()(Event* param_1) {
        Control* this_00;
        Slider* this_01;
        undefined4 uVar1;
        Event local_48;
        enable_shared_from_this<PathingEntity> local_30[16];

        this_00 = *(Control**)this;
        this_01 = (Slider*)param_1->end();
        if (param_1->field_16 == 1) {
            Slider::SetSliderDiscrete<float>(this_01, *(float*)&this_00[2].field_12);
        }
        if (param_1->field_16 == 3) {
            uVar1 = this_01->GetCurrentValue();
            *(undefined4*)&this_00[2].field_12 = uVar1;
            local_30->shared_from_this();
            new (&local_48) Event(local_30, 3);
            this_00->DoCallback(&local_48);
            local_48.~LRUHashCacheWrapper();
            local_30->~shared_ptr();
        }
    }

} // namespace jag::tweak

// libs/tweaky/Tweaky_ColourPicker.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.tweaky

namespace jag::tweak {
    class ColourPicker {
    public:
        // virtual methods in vtable order
        virtual ~ColourPicker();
        virtual uint32_t OnClick(float arg1, float arg2, bool arg3);
        virtual void InitDefault();
        virtual void ResetToDefault();
        virtual void SetTweaky(weak_ptr<Tweaky> tweaky);
        float GetIntensity() const;
        ColourPicker(const char* str, bool arg2, const math::Range<float>& range);
        ColourPicker(const char* str, bool arg2, const math::Range<float>& range1, const math::Range<float>& range2);
        void Initialise();
        void CreateSwatch();
        auto CreateRGBASlider(const char* str, float* arg2);
        void CreateIntensitySlider();
        void SetColour(const math::Vector3T<float>& vector3);
        void UpdateSliderGradients();
        void UpdateSliderValues();
        void SetColour(const math::Vector4T<float>& vector4);
        uint64_t GetColour3() const;
        uint8_t[16] GetColour4() const;
        void SetIntensity(float arg1);

    private:
        uint8_t _unknown_8[256];
        uint64_t field_264;
        shared_ptr field_272;
        uint32_t field_288;
        uint16_t field_292;
        uint8_t field_294;
        uint8_t _unknown_295[65];
        shared_ptr field_360;
        uint8_t _unknown_376[16];
        uint64_t field_392;
        uint64_t field_400;
        char field_408;
        bool field_409;
        uint8_t field_410;
        uint8_t _unknown_411[1];
        float field_412;
        float field_416;
        float field_420;
        float field_424;
        float field_428;
        float field_432;
        float field_436;
        float field_440;
        float m_intensity;
        float field_448;
        uint8_t _unknown_452[4];
    };

    // 0x1004c6a30: ColourPicker::GetIntensity() const has the same machine code as game::WaterType::GetCausticsEdgeFadeStart() const

    // 0x100a40210
    ColourPicker::ColourPicker(const char* str, bool arg2, const math::Range<float>& range) : Container(str) {
        field_392 = *(uint64_t*)range;
        new (&field_400) math::Point(0.0, 0.0);
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
        field_409 = arg2;
    }

    // 0x100a40480
    ColourPicker::ColourPicker(const char* str, bool arg2, const math::Range<float>& range1,
                               const math::Range<float>& range2)
        : Container(str) {
        field_392 = *(uint64_t*)range1;
        field_400 = *(uint64_t*)range2;
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
        field_409 = arg2;
    }

    // 0x100a405e0
    void ColourPicker::Initialise() {
        bool cVar1;
        ReturnValue local_28;

        CreateSwatch();
        CreateRGBASlider(&local_28, this, "R", &field_412);
        field_312 = local_28;
        CreateRGBASlider(&local_28, this, "G", &field_416);
        field_328 = local_28;
        CreateRGBASlider(&local_28, this, "B", &field_420);
        field_344 = local_28;
        if (field_409 == false) {
            field_424 = 255.0;
            cVar1 = field_408;
        } else {
            CreateRGBASlider(&local_28, this, "A", &field_424);
            *field_360 = local_28;
            cVar1 = field_408;
        }
        if (cVar1) {
            CreateIntensitySlider();
        }
        field_410 = 1;
    }

    // 0x100a40720
    void ColourPicker::CreateSwatch() {
        float* local_78 = &field_412;
        float* local_70 = &field_416;
        float* local_68 = &field_420;
        float* local_60 = &field_424;
        make_shared<Swatch, float*, float*, float*, float*>(&local_58, &local_78, &local_70, &local_68, &local_60);
        uint8_t* this_00 = &field_296;
        *this_00 = local_58;
        shared_ptr local_58(this_00);
        Add(local_58);
        Control* this_01 = (Control*)(*this_00).operator->();
        std::function<void(Event const&)>::function<ColourPicker::CreateSwatch()::__6, void>(
            (function<void(Event const&)>*)&local_58, (__6*)this);
        this_01->SetHandler(local_58);
    }

    // 0x100a40850
    auto ColourPicker::CreateRGBASlider(const char* str, float* arg2) {
        auto result;
        float local_68[12];

        local_68[0] = 0.0;
        float local_70 = 255.0;
        float local_6c = 1.0;
        char* local_78 = str;
        make_shared<GradientSlider, char const*&, float&, float&, float&>(&result, &local_78, local_68, &local_70,
                                                                          &local_6c);
        new (local_68) shared_ptr(&result);
        Add(*local_68);
        Control* this_00 = (Control*)(result).operator->();
        std::function<void(Event const&)>::function<ColourPicker::CreateRGBASlider(char const*, float*)::__7, void>(
            (function<void(Event const&)>*)local_68, (__7*)this);
        this_00->SetHandler(*local_68);
        return result;
    }

    // 0x100a40990
    void ColourPicker::CreateIntensitySlider() {
        uint64_t* this_00 = &field_400;
        float local_70 = (float)this_00->GetAlpha();
        float fVar3 = (float)this_00->GetOverbright();
        int iVar2 = math::GetDecimalPlaces<float>(local_70 - fVar3) + 3;
        float local_6c = 1.0;
        if (0 < iVar2) {
            do {
                local_6c = local_6c * 0.1;
                iVar2 = iVar2 - 1;
            } while (iVar2 != 0);
        }
        float local_78 = (float)this_00->GetOverbright();
        float local_74 = (float)this_00->GetAlpha();
        make_shared<GradientSlider, char const(&)[11], float, float, float>(&local_68, "Intensity", &local_78,
                                                                            &local_74, &local_6c);
        uint8_t* this_01 = &field_376;
        *this_01 = local_68;
        shared_ptr local_68(this_01);
        Add(local_68);
        Control* this_02 = (Control*)(*this_01).operator->();
        std::function<void(Event const&)>::function<ColourPicker::CreateIntensitySlider()::__8, void>(
            (function<void(Event const&)>*)&local_68, (__8*)this);
        this_02->SetHandler(local_68);
        ((GradientSlider*)(*this_01).operator->())->SetGradient(255, 4294967295);
    }

    // 0x100a40b30
    void ColourPicker::SetColour(const math::Vector3T<float>& vector3) {
        uint64_t* this_00 = &field_392;
        float fVar1 = (float)this_00->GetAlpha();
        float fVar2 = (float)this_00->GetOverbright();
        fVar1 = 255.0 / (fVar1 - fVar2);
        fVar2 = (float)this_00->GetOverbright();
        field_412 = (*(float*)vector3 - fVar2) * fVar1;
        field_416 = (*(float*)(vector3 + 4) - fVar2) * fVar1;
        field_420 = (*(float*)(vector3 + 8) - fVar2) * fVar1;
        if (field_410 != '\0') {
            UpdateSliderGradients();
            UpdateSliderValues();
        }
    }

    // 0x100a40bf0
    void ColourPicker::UpdateSliderGradients() {
        ImVec4 local_58;
        ImVec4 local_48;

        float local_24 = field_412 * 0.003921569f;
        float local_28 = field_416 * 0.003921569f;
        float local_2c = field_420 * 0.003921569f;
        ImVec4 local_b8(0.0, local_28, local_2c, 1.0);
        ImVec4 local_a8(1.0, local_28, local_2c, 1.0);
        auto pGVar1 = field_312.operator->();
        pGVar1->SetGradient(&local_b8, &local_a8);
        ImVec4 local_98(local_24, 0.0, local_2c, 1.0);
        ImVec4 local_88(local_24, 1.0, local_2c, 1.0);
        pGVar1 = (GradientSlider*)field_328.operator->();
        pGVar1->SetGradient(&local_98, &local_88);
        ImVec4 local_78(local_24, local_28, 0.0, 1.0);
        ImVec4 local_68(local_24, local_28, 1.0, 1.0);
        pGVar1 = (GradientSlider*)field_344.operator->();
        pGVar1->SetGradient(&local_78, &local_68);
        if (field_409 != false) {
            if (field_360->operator_cast_to_bool() != '\0') {
                local_58 = ImVec4(local_24, local_28, local_2c, 0.0);
                local_48 = ImVec4(local_24, local_28, local_2c, 1.0);
                pGVar1 = (GradientSlider*)(*field_360).operator->();
                pGVar1->SetGradient(&local_58, &local_48);
            }
        }
    }

    // 0x100a40dd0
    void ColourPicker::UpdateSliderValues() {
        auto pSVar1 = field_312.operator->();
        pSVar1->SetSliderDiscrete<float>(field_412);
        pSVar1 = (Slider*)field_328.operator->();
        pSVar1->SetSliderDiscrete<float>(field_416);
        pSVar1 = (Slider*)field_344.operator->();
        pSVar1->SetSliderDiscrete<float>(field_420);
        if (field_409 != false) {
            if (field_360->operator_cast_to_bool() != '\0') {
                pSVar1 = (Slider*)(*field_360).operator->();
                pSVar1->SetSliderDiscrete<float>(field_424);
            }
        }
    }

    // 0x100a40e70
    void ColourPicker::SetColour(const math::Vector4T<float>& vector4) {
        uint64_t* this_00 = &field_392;
        float fVar1 = (float)this_00->GetAlpha();
        float fVar2 = (float)this_00->GetOverbright();
        fVar1 = 255.0 / (fVar1 - fVar2);
        fVar2 = (float)this_00->GetOverbright();
        field_412 = (*(float*)vector4 - fVar2) * fVar1;
        field_416 = (*(float*)(vector4 + 4) - fVar2) * fVar1;
        field_420 = (*(float*)(vector4 + 8) - fVar2) * fVar1;
        field_424 = (*(float*)(vector4 + 12) - fVar2) * fVar1;
        if (field_410 != '\0') {
            UpdateSliderGradients();
            UpdateSliderValues();
        }
    }

    // 0x100a40f40
    uint64_t ColourPicker::GetColour3() const {
        uint64_t uVar2;
        uint8_t local_28[16];

        uint64_t* this_00 = &field_392;
        local_28._12_4_ = this_00->GetAlpha();
        float fVar1 = (float)this_00->GetOverbright();
        local_28._12_4_ = 255.0 / ((float)local_28._12_4_ - fVar1);
        fVar1 = (float)this_00->GetOverbright();
        float fVar3 = 1.0 / (float)local_28._12_4_;
        new (local_28) math::ColourHSL(field_412 * fVar3 + fVar1, field_416 * fVar3 + fVar1, fVar3 * field_420 + fVar1);
        uVar2._0_4_ = (float)local_28._0_4_;
        uVar2._4_4_ = (float)local_28._4_4_;
        return uVar2;
    }

    // 0x100a40ff0
    uint8_t[16] ColourPicker::GetColour4() const {
        uint8_t auVar3[16];

        uint64_t* this_00 = &field_392;
        float local_1c = (float)this_00->GetAlpha();
        float fVar1 = (float)this_00->GetOverbright();
        local_1c = 255.0 / (local_1c - fVar1);
        fVar1 = (float)this_00->GetOverbright();
        float fVar2 = 1.0 / local_1c;
        ImVec4 local_38(field_412 * fVar2 + fVar1, field_416 * fVar2 + fVar1, field_420 * fVar2 + fVar1,
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

    // 0x100a410b0
    void ColourPicker::SetIntensity(float arg1) {
        m_intensity = arg1;
        if (field_410 != '\0') {
            ((Slider*)field_376.operator->())->SetSliderDiscrete<float>(m_intensity);
        }
    }

    // 0x100a411a0
    uint32_t ColourPicker::OnClick(float arg1, float arg2, bool arg3) {
        Event local_48;
        enable_shared_from_this<PathingEntity> local_30;

        uint32_t uVar1 = OnClick(arg1, arg2, arg3);
        if ((char)uVar1 != '\0') {
            local_30.shared_from_this();
            local_48 = Event(local_30, 2);
            DoCallback(local_48);
        }
        return uVar1;
    }

    // 0x100a41560
    void ColourPicker::SetTweaky(weak_ptr<Tweaky> tweaky) {
        field_104 = *tweaky;
        Initialise();
    }

    // 0x100a415d0
    void ColourPicker::InitDefault() {
        enable_shared_from_this<PathingEntity> local_28;

        field_428 = field_412;
        field_432 = field_416;
        field_436 = field_420;
        field_440 = field_424;
        field_448 = m_intensity;
        InitDefault();
        local_28.shared_from_this();
        Event local_40(local_28, 1);
        DoCallback(local_40);
    }

    // 0x100a41700
    void ColourPicker::ResetToDefault() {
        enable_shared_from_this<PathingEntity> local_28;

        field_412 = field_428;
        field_416 = field_432;
        field_420 = field_436;
        field_424 = field_440;
        if (field_408 != '\0') {
            SetIntensity(field_448);
        }
        UpdateSliderGradients();
        UpdateSliderValues();
        ResetToDefault();
        local_28.shared_from_this();
        Event local_40(local_28, 3);
        DoCallback(local_40);
    }

    // 0x100a52a90
    ColourPicker::~ColourPicker() {
        field_376.~shared_ptr();
        field_360->~shared_ptr();
        field_344.~shared_ptr();
        field_328.~shared_ptr();
        field_312.~shared_ptr();
        field_296.~shared_ptr();
    }

    // 0x100a58c10
    void ColourPicker::CreateSwatch()::$_6::operator()(const Event& event) const {
        ColourPicker* this_00;
        Event local_40;
        enable_shared_from_this<PathingEntity> local_28;

        if (event.field_16 == 3) {
            this_00 = field_0;
            UpdateSliderGradients(this_00);
            UpdateSliderValues(this_00);
            local_28.shared_from_this();
            local_40 = Event(local_28, 3);
            this_00->DoCallback(local_40);
        }
    }

    // 0x100a596c0
    void ColourPicker::CreateRGBASlider(char const*, float*)::$_7::operator()(const Event& event) const {
        uint32_t uVar1;
        Event local_50;
        enable_shared_from_this<PathingEntity> local_38;

        ColourPicker* this_00 = *(ColourPicker**)this;
        auto this_01 = event.end();
        if (event.field_16 == 1) {
            this_01->SetSliderDiscrete<float>(**(float**)(this + 8));
        }
        if (event.field_16 == 3) {
            uVar1 = this_01->GetCurrentValue();
            **(uint32_t**)(this + 8) = uVar1;
            UpdateSliderGradients(this_00);
            local_38.shared_from_this();
            local_50 = Event(local_38, 3);
            this_00->DoCallback(local_50);
        }
    }

    // 0x100a5a0d0
    void ColourPicker::CreateIntensitySlider()::$_8::operator()(const Event& event) const {
        uint32_t uVar1;
        Event local_48;
        enable_shared_from_this<PathingEntity> local_30;

        Control* this_00 = field_0;
        auto this_01 = event.end();
        if (event.field_16 == 1) {
            this_01->SetSliderDiscrete<float>(*(float*)&this_00[2].field_12);
        }
        if (event.field_16 == 3) {
            uVar1 = this_01->GetCurrentValue();
            *(uint32_t*)&this_00[2].field_12 = uVar1;
            local_30.shared_from_this();
            local_48 = Event(local_30, 3);
            this_00->DoCallback(local_48);
        }
    }

} // namespace jag::tweak

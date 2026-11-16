// libs/tweaky/Tweaky_Swatch.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.tweaky

namespace jag::tweak {
    class Swatch : public Label // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~Swatch();
        virtual void Draw(int arg1, int arg2);
        virtual unsigned long GetControlSize(int& arg1, int& arg2);
        virtual unsigned long OnClick(float arg1, float arg2, bool arg3);
        virtual unsigned long OnMouseMove(float arg1, float arg2);
        virtual unsigned long OnMouseOver(float arg1, float arg2);
        virtual void OnMouseWheel(float arg1, float arg2, float arg3);
        virtual void DoOnShown();
        virtual void ResetToDefault();
        virtual void SetTweaky(weak_ptr<Tweaky> tweaky);
        Swatch(float* arg1, float* arg2, float* arg3, float* arg4);
        void Initialise();
        void UpdateHSL();
        void DrawAlphaBackground(shared_ptr<Tweaky> tweaky, int arg2, int arg3);
        void DrawTriangle(shared_ptr<Tweaky> tweaky, int arg2, int arg3);
        void DrawPicker(shared_ptr<Tweaky> tweaky, int arg2, int arg3);
        void CreatePicker();
        void UpdateSaturationGradient();
        void UpdateRGB();
        static int32_t m_pickerWidth; // = 250
        static int64_t m_createdPicker;
        static Array<unsigned int> m_pickerData; // = Array<unsigned int>()
        static int64_t m_pickerHeight;           // = m_pickerWidth / 2

    private:
        uint8_t _unknown_220[12];
        uint64_t field_232;
        long field_240;
        uint64_t field_248;
        long field_256;
        char field_264;
        char field_265;
        uint8_t _unknown_266[2];
        unsigned int field_268;
        int field_272;
        uint8_t _unknown_276[4];
        float* field_280;
        float* field_288;
        float* field_296;
        float* field_304;
        uint32_t field_312;
        float field_316;
        float field_320;
        float field_324;
        uint8_t _unknown_328[4];
        Callstack field_332;
        uint8_t _unknown_348[12];
    };

    // 0x100f460cc
    int32_t Swatch::m_pickerWidth = 250;

    // 0x103bc21f0
    int64_t Swatch::m_createdPicker;

    // 0x103bc21f8, set at startup by ___cxx_global_var_init.60
    Array<unsigned int> Swatch::m_pickerData = Array<unsigned int>();

    // 0x103bc2210, set at startup by ___cxx_global_var_init.61
    int64_t Swatch::m_pickerHeight = Swatch::m_pickerWidth / 2;

    // 0x100a4d9f0
    Swatch::Swatch(float* arg1, float* arg2, float* arg3, float* arg4) : Control(0, 0, 11, "") {
        new (&field_216) shared_ptr();
        new (&field_232) shared_ptr();
        new (&field_248) shared_ptr();
        field_264 = '\0';
        field_265 = '\0';
        field_268 = 15;
        field_312 = 1132396544;
        new (&field_316) math::Vector3T();
        new (&field_328) callstack::Callstack();
        new (field_332) callstack::Callstack();
        field_280 = arg1;
        field_288 = arg2;
        field_296 = arg3;
        float* pfVar1 = (float*)&field_312;
        if (arg4 != nullptr) {
            pfVar1 = arg4;
        }
        field_304 = pfVar1;
    }

    // 0x100a4db10
    void Swatch::Initialise() {
        ReturnValue local_68;

        float local_74 = 0.0;
        float local_70 = 1.0;
        float local_6c = 0.01;
        make_shared<GradientSlider, char const(&)[11], float, float, float>(&local_68, "Saturation", &local_74,
                                                                            &local_70, &local_6c);
        uint8_t* this_00 = &field_216;
        *this_00 = local_68;
        long* plVar1 = (long*)(*this_00).operator->();
        weak_ptr<oldscape::dash3d::Decor> local_88(field_104);
        (**(void (**)(...))(*plVar1 + 232))(plVar1, &local_88);
        Control* this_01 = (Control*)(*this_00).operator->();
        std::function<void(Event const&)>::function<Swatch::Initialise()::__23, void>(
            (function<void(Event const&)>*)&local_68, (__23*)this);
        this_01->SetHandler(local_68);
        UpdateHSL();
    }

    // 0x100a4dc60
    void Swatch::UpdateHSL() {
        float local_24 = field_316;
        float local_20 = field_320;
        float fVar3 = *field_288;
        ColourHSL local_38(*field_280, fVar3, *field_296);
        local_38 /= 255.0;
        uint64_t uVar1 = math::RGBToHSL(local_38);
        field_316 = (float)(int)uVar1;
        field_320 = (float)(int)((unsigned long)uVar1 >> 32);
        field_324 = fVar3;
        float local_1c = *field_296 * 0.003921569f;
        fVar3 = (float)eastl::max_alt(*field_280 * 0.003921569f, *field_288 * 0.003921569f);
        local_1c = (float)eastl::max_alt(local_1c, fVar3);
        float local_28 = *field_296 * 0.003921569f;
        fVar3 = (float)eastl::min<float>(*field_280 * 0.003921569f, *field_288 * 0.003921569f);
        fVar3 = (float)eastl::min<float>(local_28, fVar3);
        float fVar4 = fVar3 + local_1c;
        unsigned int uVar2 = -(unsigned int)(0.5 < fVar4 * 0.5);
        fVar3 = (local_1c - fVar3) / (float)(~uVar2 & (unsigned int)fVar4 | (unsigned int)(2.0 - fVar4) & uVar2);
        if ((fVar3 <= 0.0) || (1.0 <= fVar3)) {
            field_320 = local_20;
        }
        if (field_320 == 0.0) {
            field_316 = local_24;
        }
        ((Slider*)field_216.operator->())->SetSliderDiscrete<float>(field_320);
        UpdateSaturationGradient();
    }

    // 0x100a4de20
    void Swatch::Draw(int arg1, int arg2) {
        uint8_t* this_00;
        Tweaky* pTVar2;
        long* plVar3;
        uint8_t local_7c[4];
        shared_ptr<oldscape::dash3d::Decor> local_78;
        shared_ptr<oldscape::dash3d::Decor> local_68;
        shared_ptr<oldscape::dash3d::Decor> local_58;
        int local_48;
        uint8_t local_44[4];
        shared_ptr local_40;

        int iVar5 = field_24 + arg1;
        int iVar4 = field_28 + arg2;
        new ((local_44 + 4)) oldscape::dash3d::GridRect(iVar5, iVar4, field_36 + iVar5, field_40 + iVar4);
        field_136 = local_40._0_8_;
        field_144 = local_40.field_8;
        iVar5 = field_24 + arg1;
        iVar4 = field_28 + arg2;
        new ((local_44 + 4)) oldscape::dash3d::GridRect(iVar5, iVar4, field_36 + iVar5, field_268 + iVar4);
        field_232 = local_40._0_8_;
        field_240 = local_40.field_8;
        iVar5 = field_24 + arg1;
        iVar4 = field_268 + field_28 + arg2 + field_272 + 2;
        new ((local_44 + 4)) oldscape::dash3d::GridRect(iVar5, iVar4, m_pickerWidth + iVar5, m_pickerHeight + iVar4);
        field_248 = local_40._0_8_;
        field_256 = local_40.field_8;
        *((local_44 + 4)) = field_104.lock();
        bool cVar1 = ((local_44 + 4))->operator_cast_to_bool();
        if (cVar1) {
            new (local_44) math::ColourStorage8888((unsigned int)(long)*field_280, (unsigned int)(long)*field_288,
                                                   (unsigned int)(long)*field_296, (unsigned int)(long)*field_304);
            iVar4 = local_44->GetX();
            this_00 = &field_328;
            iVar5 = this_00->GetX();
            if (iVar4 != iVar5) {
                *(uint8_t(*)[4]) & field_328 = local_44;
                UpdateHSL();
            }
            SetColour(1886417151, false);
            pTVar2 = (Tweaky*)(*((local_44 + 4))).operator->();
            pTVar2->DrawRect(arg1, arg2, field_36, field_268, false);
            cVar1 = this_00->GetShape();
            if (cVar1 != -1) {
                local_78 = shared_ptr((local_44 + 4));
                DrawAlphaBackground(&local_78, arg1 + 1, arg2 + 1);
            }
            SetColour(this_00->GetX(), false);
            pTVar2 = (Tweaky*)(*((local_44 + 4))).operator->();
            pTVar2->FillRect(arg1, arg2, field_36, field_268);
            local_68 = shared_ptr((local_44 + 4));
            DrawTriangle(&local_68, arg1, arg2);
            if (field_264 != '\0') {
                iVar4 = arg2 + field_268;
                plVar3 = (long*)field_216.operator->();
                (**(void (**)(...))(*plVar3 + 32))(plVar3, arg1, iVar4 + 1);
                plVar3 = (long*)field_216.operator->();
                (**(void (**)(...))(*plVar3 + 40))(plVar3, local_7c, &local_48);
                local_58 = shared_ptr((local_44 + 4));
                DrawPicker(&local_58, arg1 + 2, iVar4 + local_48 + 2);
            }
        }
        ((local_44 + 4))->~shared_ptr();
    }

    // 0x100a4e100
    void Swatch::DrawAlphaBackground(shared_ptr<Tweaky> tweaky, int arg2, int arg3) {
        Tweaky* this_00;
        int iVar3;
        int arg4;
        int arg1;
        int arg3_00;
        int iVar5;
        int iVar6;
        unsigned int uVar7;
        bool bVar8;

        unsigned int uVar4 = field_36 / 7;
        unsigned int uVar1 = field_268 / 7;
        SetColour(2425393407, false);
        unsigned int uVar2 = 0;
        do {
            iVar3 = ~(uVar2 * 8) + uVar2;
            iVar5 = -8;
            uVar7 = 0;
            iVar6 = arg2;
            do {
                if ((uVar2 & 1) == 0) {
                    arg3_00 = 7;
                    arg4 = 7;
                    if (uVar2 == uVar1) {
                        arg4 = field_268 + iVar3;
                    }
                    if (uVar7 == uVar4) {
                        arg3_00 = field_36 + iVar5 + 7;
                    }
                    this_00 = (Tweaky*)(*tweaky).operator->();
                    arg1 = iVar6;
                } else {
                    arg3_00 = 7;
                    arg4 = 7;
                    if (uVar2 == uVar1) {
                        arg4 = field_268 + iVar3;
                    }
                    if (uVar7 - uVar4 == -1) {
                        arg3_00 = field_36 + iVar5;
                    }
                    this_00 = (Tweaky*)(*tweaky).operator->();
                    arg1 = iVar6 + 7;
                }
                this_00->FillRect(arg1, uVar2 * 7 + arg3, arg3_00, arg4);
                uVar7 = uVar7 + 2;
                iVar6 = iVar6 + 14;
                iVar5 = iVar5 - 14;
            } while (uVar7 <= uVar4);
            bVar8 = uVar2 != uVar1;
            uVar2 = uVar2 + 1;
        } while (bVar8);
    }

    // 0x100a4e2a0
    void Swatch::DrawTriangle(shared_ptr<Tweaky> tweaky, int arg2, int arg3) {
        bool bVar2;
        Tweaky* pTVar3;
        int iVar4;
        int iVar5;
        int iVar7;

        SetColour((int)(long)(255.0 - *field_296) << 8 | (int)(long)(255.0 - *field_288) << 16 |
                      (int)(long)(255.0 - *field_280) << 24 | 255,
                  false);
        if (field_208 == false) {
            iVar7 = 4;
        } else {
            iVar7 = (unsigned int)(field_265 == '\0') * 2 + 2;
        }
        unsigned int uVar1 = field_268;
        int iVar6 = uVar1 + iVar7 * -2;
        if (field_264 == '\0') {
            if (0 < iVar6) {
                iVar4 = iVar6 / 2 + arg2;
                iVar5 = (uVar1 + arg3) - iVar7;
                iVar7 = iVar7 + arg3;
                do {
                    pTVar3 = (Tweaky*)(*tweaky).operator->();
                    pTVar3->DrawLine(iVar4, iVar7, iVar4, iVar5, true);
                    iVar4 = iVar4 + 1;
                    iVar5 = iVar5 - 1;
                    iVar7 = iVar7 + 1;
                    bVar2 = 2 < iVar6;
                    iVar6 = iVar6 - 2;
                } while (bVar2);
            }
        } else if (0 < iVar6) {
            iVar5 = (uVar1 + arg2) - iVar7;
            iVar7 = iVar7 + arg2;
            iVar4 = iVar6 / 2 + arg3;
            do {
                pTVar3 = (Tweaky*)(*tweaky).operator->();
                pTVar3->DrawLine(iVar7, iVar4, iVar5, iVar4, true);
                iVar5 = iVar5 - 1;
                iVar7 = iVar7 + 1;
                iVar4 = iVar4 + 1;
                bVar2 = 2 < iVar6;
                iVar6 = iVar6 - 2;
            } while (bVar2);
        }
    }

    // 0x100a4e440
    void Swatch::DrawPicker(shared_ptr<Tweaky> tweaky, int arg2, int arg3) {
        unsigned int* puVar5;
        unsigned int uVar7;
        unsigned long uVar8;
        unsigned int uVar9;
        unsigned long uVar10;
        int iVar11;
        int local_4c;
        int local_48;
        unsigned int local_40[3];
        unsigned int local_34;

        m_pickerWidth = field_36;
        m_pickerHeight = (int)m_pickerWidth / 2;
        if (m_createdPicker == '\0') {
            CreatePicker();
        }
        unsigned int uVar6 = m_pickerHeight;
        unsigned int uVar1 = m_pickerWidth;
        unsigned long uVar4 = (unsigned long)m_pickerWidth / 3;
        unsigned int uVar2 = m_pickerHeight / 3;
        ((Tweaky*)(*tweaky).operator->())->GetScroll(local_4c, local_48);
        LoginManager* this_01 = (LoginManager*)(*tweaky).operator->();
        GUIManager* this_03 = ((RT7Core*)this_01->GetAuthWrapper())->GetGUIManager();
        unsigned int uVar3 = (unsigned int)uVar4;
        if (2 < uVar6) {
            uVar8 = 1;
            if (1 < uVar3) {
                uVar8 = uVar4;
            }
            uVar6 = 1;
            if (1 < uVar2) {
                uVar6 = uVar2;
            }
            local_34 = 0;
            uVar7 = 0;
            do {
                if (2 < uVar1) {
                    uVar10 = uVar8;
                    uVar9 = local_34;
                    iVar11 = arg2;
                    do {
                        puVar5 = &m_pickerData[(unsigned long)uVar9];
                        this_03->AddColouredRectangle(iVar11 - local_4c, (uVar7 * 3 + arg3) - local_48, 3, 3, *puVar5,
                                                      0);
                        iVar11 = iVar11 + 3;
                        uVar9 = uVar9 + 1;
                        uVar10 = uVar10 - 1;
                    } while (uVar10 != 0);
                }
                uVar7 = uVar7 + 1;
                local_34 = local_34 + uVar3;
            } while (uVar7 != uVar6);
        }
        unsigned int local_44 = (unsigned int)((float)uVar2 * field_324);
        local_40[0] = (unsigned int)((unsigned long)(uVar1 / 6 + (int)((float)uVar3 * field_316)) % uVar4);
        local_40[1] = 0;
        local_40[2] = uVar3 - 1;
        local_40[0] = math::Clamp<unsigned int>(*local_40, *(local_40 + 1), *(local_40 + 2));
        local_40[1] = 0;
        local_40[2] = uVar2 - 1;
        local_44 = math::Clamp<unsigned int>(local_44, *(local_40 + 1), *(local_40 + 2));
        puVar5 = (unsigned int*)m_pickerData[(unsigned long)(uVar3 * local_44 + local_40[0])];
        this_03->AddColouredRectangle((arg2 - local_4c) + (int)((float)(int)m_pickerWidth * field_316) - 2,
                                      (arg3 - local_48) + (int)((float)(int)m_pickerHeight * (1.0 - field_324)) - 2, 4,
                                      4, *puVar5, 0);
    }

    // 0x100a4e710
    void Swatch::CreatePicker() {
        uint32_t* puVar1;
        unsigned long uVar2;
        uint64_t uVar4;
        uint32_t uVar5;
        ColourHSL local_88;
        uint32_t uStack_70;
        uint32_t uStack_6c;
        unsigned long local_60;
        float local_4c;
        float local_48;
        unsigned int local_44;
        float local_40;
        unsigned int local_3c;
        float local_38;

        unsigned int uVar3 = m_pickerHeight;
        unsigned long local_68 = (unsigned long)m_pickerWidth;
        unsigned long local_58 = local_68 / 3;
        unsigned int local_34 = 0;
        m_pickerData.set_max_size((unsigned long)(unsigned int)((int)local_58 * (int)local_58), 0);
        if (2 < uVar3) {
            uVar3 = uVar3 / 3;
            local_48 = 1.0 / (float)(int)(unsigned int)local_58;
            local_40 = 1.0 / (float)uVar3;
            local_60 = 1;
            if (1 < (unsigned int)local_58) {
                local_60 = local_58 & 4294967295;
            }
            local_3c = 1;
            if (1 < uVar3) {
                local_3c = uVar3;
            }
            local_44 = 0;
            local_4c = 1.0;
            do {
                if (2 < (unsigned int)local_68) {
                    local_38 = 0.0;
                    uVar2 = local_60;
                    uVar3 = local_34;
                    do {
                        uVar5 = 1065353216;
                        local_88 = math::ColourHSL(local_38, 1.0, local_4c);
                        uVar4 = math::HSLToRGB(local_88, 1.0);
                        uStack_70 = uVar5;
                        uStack_6c = 0;
                        uVar5 = math::R8G8B8A8FromColour4(uVar4);
                        puVar1 = &m_pickerData[(unsigned long)uVar3];
                        *puVar1 = uVar5;
                        local_38 = local_38 + local_48;
                        uVar3 = uVar3 + 1;
                        uVar2 = uVar2 - 1;
                    } while (uVar2 != 0);
                }
                local_4c = local_4c - local_40;
                local_44 = local_44 + 1;
                local_34 = local_34 + (int)local_58;
            } while (local_44 != local_3c);
        }
        m_createdPicker = 1;
    }

    // 0x100a4e890
    unsigned long Swatch::GetControlSize(int& arg1, int& arg2) {
        unsigned int uVar2;
        long* plVar3;
        uint8_t local_44[4];
        int local_2c;

        shared_ptr local_40 = field_104.lock();
        if (shared_ptr::operator_cast_to_bool(&local_40) != '\0') {
            uVar2 = ((Tweaky*)local_40.operator->())->GetMinControlHeight();
            field_268 = uVar2;
        }
        field_36 = 250;
        field_40 = field_268;
        if (field_264 != '\0') {
            field_40 = field_268 + m_pickerHeight;
            plVar3 = (long*)field_216.operator->();
            (**(void (**)(...))(*plVar3 + 40))(plVar3, local_44, &local_2c);
            field_40 = field_40 + local_2c;
            field_272 = local_2c;
        }
        uVar2 = field_36;
        unsigned int uVar4 = field_40 + 2;
        field_40 = uVar4;
        if (0 < (int)uVar4 && 0 < (int)uVar2) {
            arg1 = uVar2;
            arg2 = field_40;
        }
        return 0 < (int)uVar4 && 0 < (int)uVar2 & 4294967295;
    }

    // 0x100a4e9a0
    void Swatch::UpdateSaturationGradient() {
        ColourHSL local_58(field_316, 0.0, field_324);
        uint64_t local_38 = math::HSLToRGB(local_58, 1.0);
        uint32_t uStack_30 = 0;
        uint32_t uStack_2c = 0;
        ColourHSL local_48(field_316, 1.0, field_324);
        uint64_t local_28 = math::HSLToRGB(local_48, 1.0);
        uint32_t uStack_20 = 1065353216;
        uint32_t uStack_1c = 0;
        ((GradientSlider*)field_216.operator->())->SetGradient(&local_38, &local_28);
    }

    // 0x100a4ea50
    void Swatch::UpdateRGB() {
        float in_XMM1_Da;
        uint32_t local_14;

        uint64_t local_28 = math::HSLToRGB(field_316, *field_304 * 0.003921569f);
        float fStack_20 = in_XMM1_Da;
        unsigned int arg1 = math::R8G8B8A8FromColour4(local_28);
        new (&local_14) math::ColourStorage8888(arg1);
        *(uint32_t*)&field_328 = local_14;
        *field_280 = (float)local_28 * 255.0;
        *field_288 = local_28._4_4_ * 255.0;
        *field_296 = fStack_20 * 255.0;
    }

    // 0x100a4eb00
    unsigned long Swatch::OnClick(float arg1, float arg2, bool arg3) {
        bool cVar1;
        long* plVar2;
        uint64_t in_register_00000031;
        uint64_t unaff_R14;
        unsigned long uVar3;
        Event local_50;
        enable_shared_from_this<PathingEntity> local_38;

        uint64_t uVar4 = (uint64_t)((unsigned long)unaff_R14 >> 8);
        if (((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg3) == 0) ||
            (cVar1 = field_232.IsInside((int)arg1, (int)arg2), !cVar1)) {
            if (field_264 != '\0') {
                plVar2 = (long*)field_216.operator->();
                cVar1 = (**(void (**)(...))(*plVar2 + 48))(arg1, arg2, plVar2, arg3);
                uVar3 = (((uint64_t)uVar4 << 8) | (uint8_t)1);
                if (cVar1)
                    goto LAB_100a4ec6f;
                if (arg3) {
                    cVar1 = field_248.IsInside((int)arg1, (int)arg2);
                    if (cVar1) {
                        SetFocus();
                        field_316 = (arg1 - (float)*(int*)&field_248) / (float)m_pickerWidth;
                        field_324 = ((float)*(int*)((long)&field_248 + 4) - arg2) / (float)m_pickerHeight + 1.0;
                        UpdateRGB();
                        UpdateSaturationGradient();
                        local_38.shared_from_this();
                        local_50 = Event(local_38, 3);
                        DoCallback(local_50);
                        goto LAB_100a4ec6f;
                    }
                } else {
                    ClearFocus();
                }
            }
            uVar3 = 0;
        } else {
            field_264 = field_264 ^ 1;
            uVar3 = (((uint64_t)uVar4 << 8) | (uint8_t)1);
        }
    LAB_100a4ec6f:
        return uVar3 & 4294967295;
    }

    // 0x100a4eca0
    unsigned long Swatch::OnMouseMove(float arg1, float arg2) {
        uint64_t in_RCX;
        unsigned long uVar2;
        Event local_48;
        enable_shared_from_this<PathingEntity> local_30;

        if (field_264 != '\0') {
            if (field_248.IsInside((int)arg1, (int)arg2) != '\0') {
                field_316 = (arg1 - (float)*(int*)&field_248) / (float)m_pickerWidth;
                field_324 = ((float)*(int*)((long)&field_248 + 4) - arg2) / (float)m_pickerHeight + 1.0;
                UpdateRGB();
                UpdateSaturationGradient();
                local_30.shared_from_this();
                local_48 = Event(local_30, 3);
                DoCallback(local_48);
                uVar2 = (((uint64_t)((int64_t)((unsigned long)in_RCX >> 8)) << 8) | (uint8_t)1);
                goto LAB_100a4ed90;
            }
        }
        uVar2 = 0;
    LAB_100a4ed90:
        return uVar2 & 4294967295;
    }

    // 0x100a4edc0
    unsigned long Swatch::OnMouseOver(float arg1, float arg2) {
        unsigned int uVar2;
        long* plVar3;
        unsigned long uVar4;
        uint8_t* this_01;

        bool cVar1 = field_232.IsInside((int)arg1, (int)arg2);
        if (!cVar1) {
            field_265 = '\0';
            this_01 = &field_216;
            cVar1 = ((Control*)(*this_01).operator->())->BoundsCheck(arg1, arg2);
            plVar3 = (long*)(*this_01).operator->();
            if (!cVar1) {
                uVar4 = 0;
                (**(void (**)(...))(*plVar3 + 224))(plVar3, 0);
            } else {
                (**(void (**)(...))(*plVar3 + 224))(plVar3, 1);
                plVar3 = (long*)(*this_01).operator->();
                uVar2 = (**(void (**)(...))(*plVar3 + 64))(arg1, arg2, plVar3);
                uVar4 = (unsigned long)uVar2;
            }
        } else {
            field_265 = '\x01';
            plVar3 = (long*)field_216.operator->();
            (**(void (**)(...))(*plVar3 + 224))(plVar3, 0);
            uVar4 = (((uint64_t)((int64_t)((unsigned long)&field_216 >> 8)) << 8) | (uint8_t)1);
        }
        return uVar4 & 4294967295;
    }

    // 0x100a4eea0
    void Swatch::DoOnShown() {
        auto plVar1 = field_216.operator->();
        (**(void (**)(...))(*plVar1 + 80))(plVar1);
        DoOnShown();
    }

    // 0x100a4eed0
    void Swatch::SetTweaky(weak_ptr<Tweaky> tweaky) {
        field_104 = *tweaky;
        Initialise();
    }

    // 0x100a4ef00
    void Swatch::ResetToDefault() {
        enable_shared_from_this<PathingEntity> local_28;

        UpdateHSL();
        UpdateSaturationGradient();
        ((Slider*)field_216.operator->())->SetSliderDiscrete<float>(field_320);
        local_28.shared_from_this();
        Event local_40(local_28, 3);
        DoCallback(local_40);
    }

    // 0x100a518e0
    void Swatch::OnMouseWheel(float arg1, float arg2, float arg3) {
        auto plVar1 = field_216.operator->();
        (**(void (**)(...))(*plVar1 + 72))(arg1, arg2, arg3, plVar1);
    }

    // 0x100a52cf0
    Swatch::~Swatch() {
        field_216.~shared_ptr();
    }

    // 0x100a65480
    void Swatch::Initialise()::$_23::operator()(const Event& event) const {
        Event local_48;
        enable_shared_from_this<PathingEntity> local_30;

        Swatch* this_00 = field_0;
        auto this_01 = event.end();
        if (event.field_16 == 1) {
            this_01->SetSliderDiscrete<float>(this_00->field_320);
        }
        if (event.field_16 == 3) {
            this_00->field_320 = (float)this_01->GetCurrentValue();
            UpdateRGB(this_00);
            local_30.shared_from_this();
            local_48 = Event(local_30, 3);
            this_00->DoCallback(local_48);
        }
    }

} // namespace jag::tweak

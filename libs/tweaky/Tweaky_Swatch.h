// libs/tweaky/Tweaky_Swatch.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.tweaky

namespace jag::tweak {
    class Swatch : public Label // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~Swatch();
        virtual void Draw(int, int);
        virtual ulong GetControlSize(int&, int&);
        virtual ulong OnClick(float, float, bool);
        virtual ulong OnMouseMove(float, float);
        virtual ulong OnMouseOver(float, float);
        virtual void OnMouseWheel(float, float, float);
        virtual void DoOnShown();
        virtual void ResetToDefault();
        virtual void SetTweaky(weak_ptr<Tweaky>);
        Swatch(float*, float*, float*, float*);
        void Initialise();
        void UpdateHSL();
        void DrawAlphaBackground(shared_ptr<Tweaky>, int, int);
        void DrawTriangle(shared_ptr<Tweaky>, int, int);
        void DrawPicker(shared_ptr<Tweaky>, int, int);
        void CreatePicker();
        void UpdateSaturationGradient();
        void UpdateRGB();
        static /* 4 bytes */ m_pickerWidth; // = 250
        static /* 8 bytes */ m_createdPicker;
        static Array<unsigned int, eastl::allocator> /* 24 bytes */
            m_pickerData;                            // = Array<unsigned int,eastl::allocator>()
        static /* 8 bytes */ m_pickerHeight;         // = m_pickerWidth / 2

        // data members, from how the methods use this: 360 bytes, the first 220 are Label
        char _unknown_220[12];
        undefined8 field_232; // offset 232
        long field_240;       // offset 240
        undefined8 field_248; // offset 248
        long field_256;       // offset 256
        char field_264;       // offset 264
        char field_265;       // offset 265
        char _unknown_266[2];
        uint field_268; // offset 268
        int field_272;  // offset 272
        char _unknown_276[4];
        float* field_280;     // offset 280
        float* field_288;     // offset 288
        float* field_296;     // offset 296
        float* field_304;     // offset 304
        undefined4 field_312; // offset 312
        float field_316;      // offset 316
        float field_320;      // offset 320
        float field_324;      // offset 324
        char _unknown_328[4];
        Callstack field_332; // offset 332
        char _unknown_348[12];
    };

    // 0x100f460cc, 4 bytes, __data
    Swatch::m_pickerWidth = 250;

    // 0x103bc21f0, 8 bytes, __common; zero-initialised
    Swatch::m_createdPicker;

    // 0x103bc21f8, 24 bytes, __common; set at startup by ___cxx_global_var_init.60
    Array<unsigned int, eastl::allocator> Swatch::m_pickerData = Array<unsigned int, eastl::allocator>();

    // 0x103bc2210, 8 bytes, __common; set at startup by ___cxx_global_var_init.61
    Swatch::m_pickerHeight = Swatch::m_pickerWidth / 2;

    // 0x100a4d9f0, 272 bytes, base-object constructor, placed by class name
    // Swatch::Swatch(float*, float*, float*, float*)
    void Swatch::Swatch(float* param_1, float* param_2, float* param_3, float* param_4) {
        float* pfVar1;

        new (this) Control(0, 0, 11, "");
        field_0 = &PTR__Swatch_100f1d7e0;
        new (&field_216, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_232, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_248, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_264 = '\0';
        field_265 = '\0';
        field_268 = 15;
        field_312 = 1132396544;
        new (&field_316) math::Vector3T<int>();
        new (&field_328) callstack::Callstack();
        new (field_332) callstack::Callstack();
        field_280 = param_1;
        field_288 = param_2;
        field_296 = param_3;
        pfVar1 = (float*)&field_312;
        if (param_4 != (float*)0) {
            pfVar1 = param_4;
        }
        field_304 = pfVar1;
    }

    // 0x100a4db00, 16 bytes, complete-object constructor, placed by class name
    // Swatch::Swatch(float*, float*, float*, float*): jumps straight to the base-object constructor

    // 0x100a4db10, 320 bytes, placed by class name
    // Swatch::Initialise()
    void Swatch::Initialise() {
        undefined1* this_00;
        long* plVar1;
        Control* this_01;
        weak_ptr<oldscape::dash3d::Decor> local_88[20];
        float local_74;
        float local_70;
        float local_6c;
        shared_ptr local_68[3];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_74 = 0.0;
        local_70 = 1.0;
        local_6c = 0.01;
        make_shared<GradientSlider, char const(&)[11], float, float, float>((jag*)local_68, "Saturation", &local_74,
                                                                            &local_70, &local_6c);
        this_00 = &field_216;
        shared_ptr<GradientSlider>::operator=((shared_ptr<GradientSlider>*)this_00, local_68);
        local_68->~shared_ptr();
        plVar1 = (long*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)this_00);
        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_88, (weak_ptr*)&field_104);
        (**(code**)(*plVar1 + 232))(plVar1, local_88);
        local_88->~weak_ptr();
        this_01 = (Control*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)this_00);
        std::function<void(Event_const&)>::function<Swatch::Initialise()::__23, void>(local_68, this);
        this_01->SetHandler(local_68);
        std::function<void(Event_const&)>::~function((function<void(Event_const&)>*)local_68);
        UpdateHSL(this);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100a4dc60, 448 bytes, placed by class name
    // Swatch::UpdateHSL()
    void Swatch::UpdateHSL() {
        undefined8 uVar1;
        Slider* this_00;
        uint uVar2;
        float fVar3;
        float fVar4;
        ColourHSL local_38;
        float local_28;
        float local_24;
        float local_20;
        float local_1c;

        local_24 = field_316;
        local_20 = field_320;
        fVar3 = *field_288;
        new (&local_38) math::ColourHSL(*field_280, fVar3, *field_296);
        math::Vector3T<float>::operator/=((Vector3T<float>*)&local_38, 255.0);
        uVar1 = math::RGBToHSL((Vector3T*)&local_38);
        field_316 = (float)(int)uVar1;
        field_320 = (float)(int)((ulong)uVar1 >> 32);
        field_324 = fVar3;
        local_1c = *field_296 * 0.003921569;
        fVar3 = (float)eastl::max_alt(*field_280 * 0.003921569, *field_288 * 0.003921569);
        local_1c = (float)eastl::max_alt(local_1c, fVar3);
        local_28 = *field_296 * 0.003921569;
        fVar3 = (float)eastl::min<float>(*field_280 * 0.003921569, *field_288 * 0.003921569);
        fVar3 = (float)eastl::min<float>(local_28, fVar3);
        fVar4 = fVar3 + local_1c;
        uVar2 = -(uint)(0.5 < fVar4 * 0.5);
        fVar3 = (local_1c - fVar3) / (float)(~uVar2 & (uint)fVar4 | (uint)(2.0 - fVar4) & uVar2);
        if ((fVar3 <= 0.0) || (1.0 <= fVar3)) {
            field_320 = local_20;
        }
        if (field_320 == 0.0) {
            field_316 = local_24;
        }
        this_00 = (Slider*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)&field_216);
        Slider::SetSliderDiscrete<float>(this_00, field_320);
        UpdateSaturationGradient(this);
    }

    // 0x100a4de20, 736 bytes, placed by class name
    // Swatch::Draw(int, int)
    void Swatch::Draw(int param_1, int param_2) {
        undefined1* this_00;
        uint uVar3;
        Tweaky* pTVar4;
        long* plVar5;
        int iVar6;
        int iVar7;
        shared_ptr in_stack_ffffffffffffff78;
        shared_ptr<oldscape::dash3d::Decor> local_78[2];
        shared_ptr<oldscape::dash3d::Decor> asStack_76[14];
        shared_ptr<oldscape::dash3d::Decor> local_68[16];
        shared_ptr<oldscape::dash3d::Decor> local_58[16];
        undefined1 local_48[4];
        undefined1 local_44[4];
        shared_ptr local_40;

        iVar7 = field_24 + param_1;
        iVar6 = field_28 + param_2;
        new ((local_44 + 4)) oldscape::dash3d::GridRect(iVar7, iVar6, field_36 + iVar7, field_40 + iVar6);
        field_136 = local_40._0_8_;
        field_144 = local_40.field_8;
        iVar7 = field_24 + param_1;
        iVar6 = field_28 + param_2;
        new ((local_44 + 4)) oldscape::dash3d::GridRect(iVar7, iVar6, field_36 + iVar7, field_268 + iVar6);
        field_232 = local_40._0_8_;
        field_240 = local_40.field_8;
        iVar7 = field_24 + param_1;
        iVar6 = field_268 + field_28 + param_2 + field_272 + 2;
        new ((local_44 + 4)) oldscape::dash3d::GridRect(iVar7, iVar6, m_pickerWidth + iVar7, m_pickerHeight + iVar6);
        field_248 = local_40._0_8_;
        field_256 = local_40.field_8;
        weak_ptr<oldscape::rs2lib::IfType>::lock();
        if (((local_44 + 4))->operator_cast_to_bool()) {
            new (local_44) math::ColourStorage8888<math::RGBA8StorageLayout>(
                (uint)(long)*field_280, (uint)(long)*field_288, (uint)(long)*field_296, (uint)(long)*field_304);
            iVar6 = local_44->GetX();
            this_00 = &field_328;
            iVar7 = this_00->GetX();
            if (iVar6 != iVar7) {
                *(undefined1(*)[4]) & field_328 = local_44;
                UpdateHSL(this);
            }
            SetColour(1886417151, false);
            pTVar4 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)(local_44 + 4));
            pTVar4->DrawRect(param_1, param_2, field_36, field_268, false);
            if (this_00->GetShape() != -1) {
                shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_78, (shared_ptr*)(local_44 + 4));
                DrawAlphaBackground(this, in_stack_ffffffffffffff78, (int)local_78, param_1 + 1);
                local_78->~shared_ptr();
            }
            uVar3 = this_00->GetX();
            SetColour(uVar3, false);
            pTVar4 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)(local_44 + 4));
            pTVar4->FillRect(param_1, param_2, field_36, field_268);
            shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_68, (shared_ptr*)(local_44 + 4));
            DrawTriangle(this, in_stack_ffffffffffffff78, (int)local_68, param_1);
            local_68->~shared_ptr();
            if (field_264 != '\0') {
                uVar3 = field_268;
                plVar5 = (long*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)&field_216);
                (**(code**)(*plVar5 + 32))(plVar5, param_1, param_2 + uVar3 + 1);
                plVar5 = (long*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)&field_216);
                (**(code**)(*plVar5 + 40))(plVar5, local_78 + -4, local_48);
                shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_58, (shared_ptr*)(local_44 + 4));
                DrawPicker(this, in_stack_ffffffffffffff78, (int)local_58, param_1 + 2);
                local_58->~shared_ptr();
            }
        }
        ((local_44 + 4))->~shared_ptr();
    }

    // 0x100a4e100, 416 bytes, placed by class name
    // Swatch::DrawAlphaBackground(shared_ptr<Tweaky>, int, int)
    void Swatch::DrawAlphaBackground(shared_ptr param_1, int param_2, int param_3) {
        Tweaky* this_00;
        int in_ECX;
        uint uVar1;
        uint uVar2;
        int iVar3;
        uint uVar4;
        int iVar5;
        int iVar6;
        undefined4 in_register_00000034;
        int iVar7;
        int iVar8;
        int iVar9;
        uint uVar10;
        bool bVar11;

        uVar4 = field_36 / 7;
        uVar1 = field_268 / 7;
        SetColour(2425393407, false);
        uVar2 = 0;
        do {
            iVar3 = ~(uVar2 * 8) + uVar2;
            iVar8 = -8;
            uVar10 = 0;
            iVar9 = param_3;
            do {
                if ((uVar2 & 1) == 0) {
                    iVar7 = 7;
                    iVar5 = 7;
                    if (uVar2 == uVar1) {
                        iVar5 = field_268 + iVar3;
                    }
                    if (uVar10 == uVar4) {
                        iVar7 = field_36 + iVar8 + 7;
                    }
                    this_00 = (Tweaky*)shared_ptr<Tweaky>::operator->(
                        (shared_ptr<Tweaky>*)CONCAT44(in_register_00000034, param_2));
                    iVar6 = iVar9;
                } else {
                    iVar7 = 7;
                    iVar5 = 7;
                    if (uVar2 == uVar1) {
                        iVar5 = field_268 + iVar3;
                    }
                    if (uVar10 - uVar4 == -1) {
                        iVar7 = field_36 + iVar8;
                    }
                    this_00 = (Tweaky*)shared_ptr<Tweaky>::operator->(
                        (shared_ptr<Tweaky>*)CONCAT44(in_register_00000034, param_2));
                    iVar6 = iVar9 + 7;
                }
                this_00->FillRect(iVar6, uVar2 * 7 + in_ECX, iVar7, iVar5);
                uVar10 = uVar10 + 2;
                iVar9 = iVar9 + 14;
                iVar8 = iVar8 + -14;
            } while (uVar10 <= uVar4);
            bVar11 = uVar2 != uVar1;
            uVar2 = uVar2 + 1;
        } while (bVar11);
    }

    // 0x100a4e2a0, 416 bytes, placed by class name
    // Swatch::DrawTriangle(shared_ptr<Tweaky>, int, int)
    void Swatch::DrawTriangle(shared_ptr param_1, int param_2, int param_3) {
        uint uVar1;
        bool bVar2;
        Tweaky* pTVar3;
        int in_ECX;
        int iVar4;
        undefined4 in_register_00000034;
        int iVar5;
        int iVar6;
        int iVar7;

        SetColour((int)(long)(255.0 - *field_296) << 8 | (int)(long)(255.0 - *field_288) << 16 |
                      (int)(long)(255.0 - *field_280) << 24 | 255,
                  false);
        if (field_208 == false) {
            iVar7 = 4;
        } else {
            iVar7 = (uint)(field_265 == '\0') * 2 + 2;
        }
        uVar1 = field_268;
        iVar6 = uVar1 + iVar7 * -2;
        if (field_264 == '\0') {
            if (0 < iVar6) {
                iVar4 = iVar6 / 2 + param_3;
                iVar5 = (uVar1 + in_ECX) - iVar7;
                iVar7 = iVar7 + in_ECX;
                do {
                    pTVar3 = (Tweaky*)shared_ptr<Tweaky>::operator->(
                        (shared_ptr<Tweaky>*)CONCAT44(in_register_00000034, param_2));
                    pTVar3->DrawLine(iVar4, iVar7, iVar4, iVar5, true);
                    iVar4 = iVar4 + 1;
                    iVar5 = iVar5 + -1;
                    iVar7 = iVar7 + 1;
                    bVar2 = 2 < iVar6;
                    iVar6 = iVar6 + -2;
                } while (bVar2);
            }
        } else if (0 < iVar6) {
            iVar5 = (uVar1 + param_3) - iVar7;
            iVar7 = iVar7 + param_3;
            iVar4 = iVar6 / 2 + in_ECX;
            do {
                pTVar3 = (Tweaky*)shared_ptr<Tweaky>::operator->(
                    (shared_ptr<Tweaky>*)CONCAT44(in_register_00000034, param_2));
                pTVar3->DrawLine(iVar7, iVar4, iVar5, iVar4, true);
                iVar5 = iVar5 + -1;
                iVar7 = iVar7 + 1;
                iVar4 = iVar4 + 1;
                bVar2 = 2 < iVar6;
                iVar6 = iVar6 + -2;
            } while (bVar2);
        }
    }

    // 0x100a4e440, 720 bytes, placed by class name
    // Swatch::DrawPicker(shared_ptr<Tweaky>, int, int)
    void Swatch::DrawPicker(shared_ptr param_1, int param_2, int param_3) {
        uint uVar1;
        uint uVar2;
        uint uVar3;
        ulong uVar4;
        Tweaky* this_00;
        LoginManager* this_01;
        RT7Core* this_02;
        undefined8 uVar5;
        undefined4* puVar6;
        int in_ECX;
        uint uVar7;
        uint uVar8;
        ulong uVar9;
        uint uVar10;
        undefined4 in_register_00000034;
        ulong uVar11;
        int iVar12;
        int local_4c;
        int local_48;
        uint local_44;
        uint local_40[3];
        uint local_34;

        m_pickerWidth = field_36;
        m_pickerHeight = (int)m_pickerWidth / 2;
        if (m_createdPicker == '\0') {
            CreatePicker();
        }
        uVar7 = m_pickerHeight;
        uVar1 = m_pickerWidth;
        uVar4 = (ulong)m_pickerWidth / 3;
        uVar2 = m_pickerHeight / 3;
        this_00 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)CONCAT44(in_register_00000034, param_2));
        this_00->GetScroll(&local_4c, &local_48);
        this_01 =
            (LoginManager*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)CONCAT44(in_register_00000034, param_2));
        this_02 = (RT7Core*)this_01->GetAuthWrapper();
        uVar5 = this_02->GetGUIManager();
        uVar3 = (uint)uVar4;
        if (2 < uVar7) {
            uVar9 = 1;
            if (1 < uVar3) {
                uVar9 = uVar4;
            }
            uVar7 = 1;
            if (1 < uVar2) {
                uVar7 = uVar2;
            }
            local_34 = 0;
            uVar8 = 0;
            do {
                if (2 < uVar1) {
                    uVar11 = uVar9;
                    uVar10 = local_34;
                    iVar12 = param_3;
                    do {
                        puVar6 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](
                            (Array<unsigned int, eastl::allocator>*)&m_pickerData, (ulong)uVar10);
                        uVar5->AddColouredRectangle(iVar12 - local_4c, (uVar8 * 3 + in_ECX) - local_48, 3, 3, *puVar6,
                                                    0);
                        iVar12 = iVar12 + 3;
                        uVar10 = uVar10 + 1;
                        uVar11 = uVar11 - 1;
                    } while (uVar11 != 0);
                }
                uVar8 = uVar8 + 1;
                local_34 = local_34 + uVar3;
            } while (uVar8 != uVar7);
        }
        local_44 = (uint)((float)uVar2 * field_324);
        local_40[0] = (uint)((ulong)(uVar1 / 6 + (int)((float)uVar3 * field_316)) % uVar4);
        local_40[1] = 0;
        local_40[2] = uVar3 - 1;
        local_40[0] = math::Clamp<unsigned int>(local_40, local_40 + 1, local_40 + 2);
        local_40[1] = 0;
        local_40[2] = uVar2 - 1;
        local_44 = math::Clamp<unsigned int>(&local_44, local_40 + 1, local_40 + 2);
        puVar6 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](
            (Array<unsigned int, eastl::allocator>*)&m_pickerData, (ulong)(uVar3 * local_44 + local_40[0]));
        uVar5->AddColouredRectangle((param_3 - local_4c) + (int)((float)(int)m_pickerWidth * field_316) + -2,
                                    (in_ECX - local_48) + (int)((float)(int)m_pickerHeight * (1.0 - field_324)) + -2, 4,
                                    4, *puVar6, 0);
    }

    // 0x100a4e710, 384 bytes, placed by class name
    // Swatch::CreatePicker()
    void Swatch::CreatePicker() {
        undefined4* puVar1;
        ulong uVar2;
        uint uVar3;
        undefined8 uVar4;
        undefined4 uVar5;
        ColourHSL local_88;
        undefined8 local_78;
        undefined4 uStack_70;
        undefined4 uStack_6c;
        ulong local_68;
        ulong local_60;
        ulong local_58;
        float local_4c;
        float local_48;
        uint local_44;
        float local_40;
        uint local_3c;
        float local_38;
        uint local_34;

        uVar3 = m_pickerHeight;
        local_68 = (ulong)m_pickerWidth;
        local_58 = local_68 / 3;
        local_34 = 0;
        m_pickerData.set_max_size((ulong)(uint)((int)local_58 * (int)local_58), 0);
        if (2 < uVar3) {
            uVar3 = uVar3 / 3;
            local_48 = 1.0 / (float)(int)(uint)local_58;
            local_40 = 1.0 / (float)uVar3;
            local_60 = 1;
            if (1 < (uint)local_58) {
                local_60 = local_58 & 4294967295;
            }
            local_3c = 1;
            if (1 < uVar3) {
                local_3c = uVar3;
            }
            local_44 = 0;
            local_4c = 1.0;
            do {
                if (2 < (uint)local_68) {
                    local_38 = 0.0;
                    uVar2 = local_60;
                    uVar3 = local_34;
                    do {
                        uVar5 = 1065353216;
                        new (&local_88) math::ColourHSL(local_38, 1.0, local_4c);
                        uVar4 = math::HSLToRGB(&local_88, 1.0);
                        uStack_70 = uVar5;
                        uStack_6c = 0;
                        local_78 = uVar4;
                        uVar5 = math::R8G8B8A8FromColour4((Vector4T*)&local_78);
                        puVar1 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](
                            (Array<unsigned int, eastl::allocator>*)&m_pickerData, (ulong)uVar3);
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

    // 0x100a4e890, 272 bytes, placed by class name
    // Swatch::GetControlSize(int&, int&)
    ulong Swatch::GetControlSize(int* param_1, int* param_2) {
        uint uVar2;
        Tweaky* this_00;
        long* plVar3;
        uint uVar4;
        undefined1 local_44[4];
        shared_ptr local_40;
        int local_2c;

        weak_ptr<oldscape::rs2lib::IfType>::lock();
        if (shared_ptr::operator_cast_to_bool(&local_40)) {
            this_00 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
            uVar2 = this_00->GetMinControlHeight();
            field_268 = uVar2;
        }
        field_36 = 250;
        field_40 = field_268;
        if (field_264 != '\0') {
            field_40 = field_268 + m_pickerHeight;
            plVar3 = (long*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)&field_216);
            (**(code**)(*plVar3 + 40))(plVar3, local_44, &local_2c);
            field_40 = field_40 + local_2c;
            field_272 = local_2c;
        }
        uVar2 = field_36;
        uVar4 = field_40 + 2;
        field_40 = uVar4;
        if (0 < (int)uVar4 && 0 < (int)uVar2) {
            *param_1 = uVar2;
            *param_2 = field_40;
        }
        local_40.~shared_ptr();
        return CONCAT71((int7)((ulong)&local_40 >> 8), 0 < (int)uVar4 && 0 < (int)uVar2) & 4294967295;
    }

    // 0x100a4e9a0, 176 bytes, placed by class name
    // Swatch::UpdateSaturationGradient()
    void Swatch::UpdateSaturationGradient() {
        GradientSlider* this_00;
        ColourHSL local_58;
        ColourHSL local_48;
        undefined8 local_38;
        undefined4 uStack_30;
        undefined4 uStack_2c;
        undefined8 local_28;
        undefined4 uStack_20;
        undefined4 uStack_1c;

        new (&local_58) math::ColourHSL(field_316, 0.0, field_324);
        local_38 = math::HSLToRGB(&local_58, 1.0);
        uStack_30 = 0;
        uStack_2c = 0;
        new (&local_48) math::ColourHSL(field_316, 1.0, field_324);
        local_28 = math::HSLToRGB(&local_48, 1.0);
        uStack_20 = 1065353216;
        uStack_1c = 0;
        this_00 = (GradientSlider*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)&field_216);
        this_00->SetGradient((Vector4T*)&local_38, (Vector4T*)&local_28);
    }

    // 0x100a4ea50, 160 bytes, placed by class name
    // Swatch::UpdateRGB()
    void Swatch::UpdateRGB() {
        uint uVar1;
        float in_XMM1_Da;
        undefined8 local_28;
        float fStack_20;
        undefined4 local_14;

        local_28 = math::HSLToRGB((ColourHSL*)&field_316, *field_304 * 0.003921569);
        fStack_20 = in_XMM1_Da;
        uVar1 = math::R8G8B8A8FromColour4((Vector4T*)&local_28);
        new (&local_14) math::ColourStorage8888<math::RGBA8StorageLayout>(uVar1);
        *(undefined4*)&field_328 = local_14;
        *field_280 = (float)local_28 * 255.0;
        *field_288 = local_28._4_4_ * 255.0;
        *field_296 = fStack_20 * 255.0;
    }

    // 0x100a4eb00, 416 bytes, placed by class name
    // Swatch::OnClick(float, float, bool)
    ulong Swatch::OnClick(float param_1, float param_2, bool param_3) {
        char cVar1;
        long* plVar2;
        undefined7 in_register_00000031;
        undefined8 unaff_R14;
        undefined7 uVar4;
        ulong uVar3;
        Event local_50;
        enable_shared_from_this<PathingEntity> local_38[16];

        uVar4 = (undefined7)((ulong)unaff_R14 >> 8);
        if (((int)CONCAT71(in_register_00000031, param_3) == 0) ||
            (cVar1 = (&field_232, (int)param_1, (int)param_2)->IsInside(), cVar1 == '\0')) {
            if (field_264 != '\0') {
                plVar2 = (long*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)&field_216);
                cVar1 = (**(code**)(*plVar2 + 48))(param_1, param_2, plVar2, param_3);
                uVar3 = CONCAT71(uVar4, 1);
                if (cVar1 != '\0')
                    goto LAB_100a4ec6f;
                if (param_3) {
                    cVar1 = (&field_248, (int)param_1, (int)param_2)->IsInside();
                    if (cVar1 != '\0') {
                        Control::SetFocus();
                        field_316 = (param_1 - (float)*(int*)&field_248) / (float)m_pickerWidth;
                        field_324 = ((float)*(int*)((long)&field_248 + 4) - param_2) / (float)m_pickerHeight + 1.0;
                        UpdateRGB(this);
                        UpdateSaturationGradient(this);
                        local_38->shared_from_this();
                        new (&local_50) Event(local_38, 3);
                        DoCallback(&local_50);
                        local_50.~LRUHashCacheWrapper();
                        local_38->~shared_ptr();
                        goto LAB_100a4ec6f;
                    }
                } else {
                    Control::ClearFocus();
                }
            }
            uVar3 = 0;
        } else {
            field_264 = field_264 ^ 1;
            uVar3 = CONCAT71(uVar4, 1);
        }
    LAB_100a4ec6f:
        return uVar3 & 4294967295;
    }

    // 0x100a4eca0, 288 bytes, placed by class name
    // Swatch::OnMouseMove(float, float)
    ulong Swatch::OnMouseMove(float param_1, float param_2) {
        undefined8 in_RCX;
        ulong uVar2;
        Event local_48;
        enable_shared_from_this<PathingEntity> local_30[16];

        if (field_264 != '\0') {
            if ((&field_248, (int)param_1, (int)param_2)->IsInside() != '\0') {
                field_316 = (param_1 - (float)*(int*)&field_248) / (float)m_pickerWidth;
                field_324 = ((float)*(int*)((long)&field_248 + 4) - param_2) / (float)m_pickerHeight + 1.0;
                UpdateRGB(this);
                UpdateSaturationGradient(this);
                local_30->shared_from_this();
                new (&local_48) Event(local_30, 3);
                DoCallback(&local_48);
                local_48.~LRUHashCacheWrapper();
                local_30->~shared_ptr();
                uVar2 = CONCAT71((int7)((ulong)in_RCX >> 8), 1);
                goto LAB_100a4ed90;
            }
        }
        uVar2 = 0;
    LAB_100a4ed90:
        return uVar2 & 4294967295;
    }

    // 0x100a4edc0, 224 bytes, placed by class name
    // Swatch::OnMouseOver(float, float)
    ulong Swatch::OnMouseOver(float param_1, float param_2) {
        char cVar1;
        uint uVar2;
        long* plVar3;
        Control* this_00;
        ulong uVar4;
        undefined1* this_01;

        cVar1 = (&field_232, (int)param_1, (int)param_2)->IsInside();
        if (cVar1 == '\0') {
            field_265 = '\0';
            this_01 = &field_216;
            this_00 = (Control*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)this_01);
            cVar1 = this_00->BoundsCheck(param_1, param_2);
            plVar3 = (long*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)this_01);
            if (cVar1 == '\0') {
                uVar4 = 0;
                (**(code**)(*plVar3 + 224))(plVar3, 0);
            } else {
                (**(code**)(*plVar3 + 224))(plVar3, 1);
                plVar3 = (long*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)this_01);
                uVar2 = (**(code**)(*plVar3 + 64))(param_1, param_2, plVar3);
                uVar4 = (ulong)uVar2;
            }
        } else {
            field_265 = '\x01';
            plVar3 = (long*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)&field_216);
            (**(code**)(*plVar3 + 224))(plVar3, 0);
            uVar4 = CONCAT71((int7)((ulong)&field_216 >> 8), 1);
        }
        return uVar4 & 4294967295;
    }

    // 0x100a4eea0, 48 bytes, placed by class name
    // Swatch::DoOnShown()
    void Swatch::DoOnShown() {
        long* plVar1;

        plVar1 = (long*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)&field_216);
        (**(code**)(*plVar1 + 80))(plVar1);
        DoOnShown();
    }

    // 0x100a4eed0, 48 bytes, placed by class name
    // Swatch::SetTweaky(weak_ptr<Tweaky>)
    void Swatch::SetTweaky(weak_ptr* param_2) {
        weak_ptr<Tweaky>::operator=((weak_ptr<Tweaky>*)&field_104, param_2);
        Initialise(this);
    }

    // 0x100a4ef00, 176 bytes, placed by class name
    // Swatch::ResetToDefault()
    void Swatch::ResetToDefault() {
        Slider* this_00;
        Event local_40;
        enable_shared_from_this<PathingEntity> local_28[16];

        UpdateHSL(this);
        UpdateSaturationGradient(this);
        this_00 = (Slider*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)&field_216);
        Slider::SetSliderDiscrete<float>(this_00, field_320);
        local_28->shared_from_this();
        new (&local_40) Event(local_28, 3);
        DoCallback(&local_40);
        local_40.~LRUHashCacheWrapper();
        local_28->~shared_ptr();
    }

    // 0x100a518b0, 16 bytes, complete-object destructor, inline, placed by class name
    // Swatch::~Swatch(): jumps straight to the base-object destructor

    // 0x100a518c0, 32 bytes, deleting destructor, inline, placed by class name
    // Swatch::~Swatch()
    void Swatch::~Swatch() {
        ~Swatch(this);
        operator_delete(this);
    }

    // 0x100a518e0, 80 bytes, inline, placed by class name
    // Swatch::OnMouseWheel(float, float, float)
    void Swatch::OnMouseWheel(float param_1, float param_2, float param_3) {
        long* plVar1;

        plVar1 = (long*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)&field_216);
        (**(code**)(*plVar1 + 72))(param_1, param_2, param_3, plVar1);
    }

    // 0x100a52cf0, 48 bytes, base-object destructor, inline, placed by class name
    // Swatch::~Swatch()
    void Swatch::~Swatch() {
        field_0 = &PTR__Swatch_100f1d7e0;
        (&field_216)->~shared_ptr();
        ~Control();
    }

    // 0x100a65480, 192 bytes, placed by class name
    // Swatch::Initialise()::$_23::operator()(Event const&) const
    /* Swatch::Initialise()::$_23::TEMPNAMEPLACEHOLDERVALUE(Event const&) const
    */

    void Swatch::Initialise()::$_23::operator()(Event* param_1) {
        Swatch* this_00;
        Slider* this_01;
        Event local_48;
        enable_shared_from_this<PathingEntity> local_30[16];

        this_00 = *(Swatch**)this;
        this_01 = (Slider*)param_1->end();
        if (param_1->field_16 == 1) {
            Slider::SetSliderDiscrete<float>(this_01, this_00->field_320);
        }
        if (param_1->field_16 == 3) {
            this_00->field_320 = (float)this_01->GetCurrentValue();
            UpdateRGB(this_00);
            local_30->shared_from_this();
            new (&local_48) Event(local_30, 3);
            this_00->DoCallback(&local_48);
            local_48.~LRUHashCacheWrapper();
            local_30->~shared_ptr();
        }
    }

    // 0x100a68c70, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.60
    void ___cxx_global_var_init_60() {
        new (&Swatch::m_pickerData) Array<unsigned int, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee6808, &Swatch::m_pickerData, 4294967296);
    }

    // 0x100a68cb0, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.61
    void ___cxx_global_var_init_61() {
        Swatch::m_pickerHeight = Swatch::m_pickerWidth / 2;
    }

} // namespace jag::tweak

namespace jag::math {
    // 0x100a4eaf0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ColourStorage8888<RGBA8StorageLayout>::ColourStorage8888(unsigned int): jumps straight to the base-object constructor

} // namespace jag::math

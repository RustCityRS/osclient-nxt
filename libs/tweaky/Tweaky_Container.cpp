// libs/tweaky/Tweaky_Container.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.tweaky

#include "Tweaky_Container.h"
#include "Tweaky.h"

namespace jag::tweak {
    // 0x100f460c8, 4 bytes, __data
    Tweaky::m_controlMinHeight = 15;

    // 0x103bc2180, 16 bytes, __common; set at startup by ___cxx_global_var_init.8
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> Tweaky::NullTweaky;

    // 0x100a3b9d0, 352 bytes, placed by class name and debug map
    // Container::Add(shared_ptr<Control> const&)
    void Container::Add(shared_ptr* param_1) {
        char cVar1;
        long* plVar2;
        Control* pCVar3;
        shared_ptr* extraout_RDX;
        weak_ptr<oldscape::dash3d::Decor> local_68[16];
        enable_shared_from_this<PathingEntity> local_58[16];
        weak_ptr<oldscape::dash3d::Decor> local_48[16];
        shared_ptr local_38;

        shared_ptr<Control>::operator->((shared_ptr<Control>*)param_1);
        local_38.GetTweaky();
        cVar1 = local_38.expired();
        local_38.~weak_ptr();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "control->GetTweaky().expired()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/tweaky/Tweaky_Container.cpp", 58,
                "Attempted to add same control to Tweaky twice");
        }
        plVar2 = (long*)shared_ptr<Control>::operator->((shared_ptr<Control>*)param_1);
        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_68, (weak_ptr*)&field_104);
        (**(code**)(*plVar2 + 232))(plVar2, local_68);
        local_68->~weak_ptr();
        pCVar3 = (Control*)shared_ptr<Control>::operator->((shared_ptr<Control>*)param_1);
        local_58->shared_from_this();
        static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_38, (jag*)local_58,
                                                                                     extraout_RDX);
        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_48, (weak_ptr*)&local_38);
        pCVar3->SetParent(local_48);
        local_48->~weak_ptr();
        local_38.~shared_ptr();
        local_58->~shared_ptr();
        (&field_216, param_1)->push_back();
    }

    // 0x100a3bc10, 224 bytes, placed by class name and debug map
    // Tweaky::AddCheckBox(char const*, bool&)
    void Tweaky::AddCheckBox(char* param_1, bool* param_2) {
        Control* this_00;
        char* local_70;
        shared_ptr local_68;
        shared_ptr local_58[3];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_70 = param_1;
        make_shared<CheckBox, char const*&, bool&>((jag*)&local_68, &local_70, param_2);
        new (local_58) shared_ptr<oldscape::dash3d::Decor>(&local_68);
        Add(this, local_58);
        local_58->~shared_ptr();
        this_00 = (Control*)shared_ptr<CheckBox>::operator->((shared_ptr<CheckBox>*)&local_68);
        std::function<void(Event_const&)>::function<Tweaky::AddCheckBox(char const*, bool&)::__2, void>(local_58,
                                                                                                        param_2);
        this_00->SetHandler(local_58);
        std::function<void(Event_const&)>::~function((function<void(Event_const&)>*)local_58);
        local_68.~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100a3bdf0, 160 bytes, placed by class name and debug map
    // Tweaky::AddCheckBox(char const*, std::function<void (Event const&)> const&)
    /* Tweaky::AddCheckBox(char const*, std::function<void (Event const&)>
   const&) */

    void Tweaky::AddCheckBox(char* param_1, function* param_2) {
        Control* this_00;
        char* local_48;
        shared_ptr local_40;
        shared_ptr local_30;

        local_48 = param_1;
        make_shared<CheckBox, char const*&>((jag*)&local_40, &local_48);
        new (&local_30) shared_ptr<oldscape::dash3d::Decor>(&local_40);
        Add(this, &local_30);
        local_30.~shared_ptr();
        this_00 = (Control*)shared_ptr<CheckBox>::operator->((shared_ptr<CheckBox>*)&local_40);
        this_00->SetHandler(param_2);
        local_40.~shared_ptr();
    }

    // 0x100a3bf30, 160 bytes, placed by class name and debug map
    // Tweaky::AddEditField(char const*, int, std::function<void (Event const&)> const&)
    /* Tweaky::AddEditField(char const*, int, std::function<void (Event const&)>
   const&) */

    void Tweaky::AddEditField(char* param_1, int param_2, function* param_3) {
        Control* this_00;
        char* local_50;
        shared_ptr local_48;
        shared_ptr local_38;
        int local_24;

        local_50 = param_1;
        local_24 = param_2;
        make_shared<EditField, char const*&, int&>((jag*)&local_48, &local_50, &local_24);
        new (&local_38) shared_ptr<oldscape::dash3d::Decor>(&local_48);
        Add(this, &local_38);
        local_38.~shared_ptr();
        this_00 = (Control*)shared_ptr<EditField>::operator->((shared_ptr<EditField>*)&local_48);
        this_00->SetHandler(param_3);
        local_48.~shared_ptr();
    }

    // 0x100a3c0c0, 144 bytes, placed by class name and debug map
    // Tweaky::AddEnum(char const*, StringEnum const*, int*)
    void Tweaky::AddEnum(char* param_1, StringEnum* param_2, int* param_3) {
        shared_ptr local_50;
        char* local_40;
        StringEnum* local_38;
        int* local_30;
        shared_ptr local_28;

        local_40 = param_1;
        local_38 = param_2;
        local_30 = param_3;
        make_shared<Enum, char const*&, StringEnum_const*&, int*&>((jag*)&local_50, &local_40, &local_38, &local_30);
        new (&local_28) shared_ptr<oldscape::dash3d::Decor>(&local_50);
        Add(this, &local_28);
        local_28.~shared_ptr();
        local_50.~shared_ptr();
    }

    // 0x100a3c200, 176 bytes, placed by class name and debug map
    // Tweaky::AddEnum(char const*, StringEnum const*, int*, std::function<void (Event const&)> const&)
    /* Tweaky::AddEnum(char const*, StringEnum const*, int*, std::function<void
   (Event const&)> const&) */

    void Tweaky::AddEnum(char* param_1, StringEnum* param_2, int* param_3, function* param_4) {
        Control* this_00;
        char* local_58;
        StringEnum* local_50;
        int* local_48;
        shared_ptr local_40;
        shared_ptr local_30;

        local_58 = param_1;
        local_50 = param_2;
        local_48 = param_3;
        make_shared<Enum, char const*&, StringEnum_const*&, int*&>((jag*)&local_40, &local_58, &local_50, &local_48);
        new (&local_30) shared_ptr<oldscape::dash3d::Decor>(&local_40);
        Add(this, &local_30);
        local_30.~shared_ptr();
        this_00 = (Control*)shared_ptr<Enum>::operator->((shared_ptr<Enum>*)&local_40);
        this_00->SetHandler(param_4);
        local_40.~shared_ptr();
    }

    // 0x100a3c2f0, 256 bytes, placed by class name and debug map
    // Tweaky::AddSlider(char const*, float, float, float, int*)
    void Tweaky::AddSlider(char* param_1, float param_2, float param_3, float param_4, int* param_5) {
        Control* this_00;
        char* local_80;
        shared_ptr local_78;
        float local_64;
        float local_60;
        float local_5c;
        shared_ptr local_58[3];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_80 = param_1;
        local_64 = param_2;
        local_60 = param_3;
        local_5c = param_4;
        make_shared<Slider, char const*&, float&, float&, float&>((jag*)&local_78, &local_80, &local_64, &local_60,
                                                                  &local_5c);
        new (local_58) shared_ptr<oldscape::dash3d::Decor>(&local_78);
        Add(this, local_58);
        local_58->~shared_ptr();
        this_00 = (Control*)shared_ptr<Slider>::operator->((shared_ptr<Slider>*)&local_78);
        std::function<void(Event_const&)>::function<Tweaky::AddSlider(char const*, float, float, float, int*)::__3,
                                                    void>(local_58, param_5);
        this_00->SetHandler(local_58);
        std::function<void(Event_const&)>::~function((function<void(Event_const&)>*)local_58);
        local_78.~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100a3c400, 256 bytes, placed by class name and debug map
    // Tweaky::AddSlider(char const*, float, float, float, unsigned int*)
    void Tweaky::AddSlider(char* param_1, float param_2, float param_3, float param_4, uint* param_5) {
        Control* this_00;
        char* local_80;
        shared_ptr local_78;
        float local_64;
        float local_60;
        float local_5c;
        shared_ptr local_58[3];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_80 = param_1;
        local_64 = param_2;
        local_60 = param_3;
        local_5c = param_4;
        make_shared<Slider, char const*&, float&, float&, float&>((jag*)&local_78, &local_80, &local_64, &local_60,
                                                                  &local_5c);
        new (local_58) shared_ptr<oldscape::dash3d::Decor>(&local_78);
        Add(this, local_58);
        local_58->~shared_ptr();
        this_00 = (Control*)shared_ptr<Slider>::operator->((shared_ptr<Slider>*)&local_78);
        std::function<void(Event_const&)>::function<
            Tweaky::AddSlider(char const*, float, float, float, unsigned int*)::__4, void>(local_58, param_5);
        this_00->SetHandler(local_58);
        std::function<void(Event_const&)>::~function((function<void(Event_const&)>*)local_58);
        local_78.~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100a3c510, 256 bytes, placed by class name and debug map
    // Tweaky::AddSlider(char const*, float, float, float, float*)
    void Tweaky::AddSlider(char* param_1, float param_2, float param_3, float param_4, float* param_5) {
        Control* this_00;
        char* local_80;
        shared_ptr local_78;
        float local_64;
        float local_60;
        float local_5c;
        shared_ptr local_58[3];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_80 = param_1;
        local_64 = param_2;
        local_60 = param_3;
        local_5c = param_4;
        make_shared<Slider, char const*&, float&, float&, float&>((jag*)&local_78, &local_80, &local_64, &local_60,
                                                                  &local_5c);
        new (local_58) shared_ptr<oldscape::dash3d::Decor>(&local_78);
        Add(this, local_58);
        local_58->~shared_ptr();
        this_00 = (Control*)shared_ptr<Slider>::operator->((shared_ptr<Slider>*)&local_78);
        std::function<void(Event_const&)>::function<Tweaky::AddSlider(char const*, float, float, float, float*)::__5,
                                                    void>(local_58, param_5);
        this_00->SetHandler(local_58);
        std::function<void(Event_const&)>::~function((function<void(Event_const&)>*)local_58);
        local_78.~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100a3c620, 176 bytes, placed by class name and debug map
    // Tweaky::AddSlider(char const*, float, float, float, std::function<void (Event const&)> const&)
    /* Tweaky::AddSlider(char const*, float, float, float, std::function<void
   (Event const&)> const&) */

    void Tweaky::AddSlider(char* param_1, float param_2, float param_3, float param_4, function* param_5) {
        Control* this_00;
        char* local_58;
        shared_ptr local_50;
        shared_ptr local_40;
        float local_2c;
        float local_28;
        float local_24;

        local_58 = param_1;
        local_2c = param_2;
        local_28 = param_3;
        local_24 = param_4;
        make_shared<Slider, char const*&, float&, float&, float&>((jag*)&local_50, &local_58, &local_2c, &local_28,
                                                                  &local_24);
        new (&local_40) shared_ptr<oldscape::dash3d::Decor>(&local_50);
        Add(this, &local_40);
        local_40.~shared_ptr();
        this_00 = (Control*)shared_ptr<Slider>::operator->((shared_ptr<Slider>*)&local_50);
        this_00->SetHandler(param_5);
        local_50.~shared_ptr();
    }

    // 0x100a3c6d0, 160 bytes, placed by class name and debug map
    // Tweaky::AddSwatch(float*, float*, float*)
    void Tweaky::AddSwatch(float* param_1, float* param_2, float* param_3) {
        shared_ptr local_50;
        float* local_40;
        float* local_38;
        float* local_30;
        shared_ptr local_28;

        local_28._0_8_ = 0;
        local_40 = param_1;
        local_38 = param_2;
        local_30 = param_3;
        make_shared<Swatch, float*&, float*&, float*&, decltype(nullptr)>(
            (jag*)&local_50, &local_40, &local_38, &local_30, (_func_decltype_nullptr**)&local_28);
        new (&local_28) shared_ptr<oldscape::dash3d::Decor>(&local_50);
        Add(this, &local_28);
        local_28.~shared_ptr();
        local_50.~shared_ptr();
    }

    // 0x100a3c830, 144 bytes, placed by class name and debug map
    // Tweaky::AddSwatch(float*, float*, float*, float*)
    void Tweaky::AddSwatch(float* param_1, float* param_2, float* param_3, float* param_4) {
        shared_ptr local_58;
        float* local_48;
        float* local_40;
        float* local_38;
        float* local_30;
        shared_ptr local_28;

        local_48 = param_1;
        local_40 = param_2;
        local_38 = param_3;
        local_30 = param_4;
        make_shared<Swatch, float*, float*, float*, float*>((jag*)&local_58, &local_48, &local_40, &local_38,
                                                            &local_30);
        new (&local_28) shared_ptr<oldscape::dash3d::Decor>(&local_58);
        Add(this, &local_28);
        local_28.~shared_ptr();
        local_58.~shared_ptr();
    }

    // 0x100a3c980, 112 bytes, placed by class name and debug map
    // Tweaky::AddGroup(char const*)
    Tweaky* Tweaky::AddGroup(char* param_1) {
        char* local_30;
        shared_ptr local_28;

        make_shared<Container, char const*&>((jag*)this, &local_30);
        new (&local_28) shared_ptr<oldscape::dash3d::Decor>(this);
        Add((Tweaky*)param_1, &local_28);
        local_28.~shared_ptr();
        return this;
    }

    // 0x100a3ca90, 672 bytes, placed by class name and debug map
    // Tweaky::Draw(int, int, int, int)
    void Tweaky::Draw(int param_1, int param_2, int param_3, int param_4) {
        int iVar1;
        RT7Core* this_00;
        Placement PVar2;
        Placement PVar3;
        undefined4 uVar4;
        char cVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        long* plVar11;
        undefined4 in_stack_ffffffffffffff6c;
        undefined8 in_stack_ffffffffffffff74;
        enable_shared_from_this<PathingEntity> local_70[4];
        undefined1 auStack_6c[20];
        int local_58;
        int local_50;
        int local_4c;
        int local_48;
        int local_44;
        shared_ptr<Container>* local_40;
        int local_38;
        int local_34;

        if (m_font->operator_cast_to_bool()) {
            local_70->shared_from_this();
            DetectTweakyShown(this);
            m_placement = param_1;
            field_108 = param_2;
            field_112 = param_3 + param_1;
            field_116 = param_4 + param_2;
            plVar11 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)m_root);
            cVar6 = (**(code**)(*plVar11 + 40))(plVar11, &local_38, &local_34);
            if (cVar6 != '\0') {
                field_112 = local_38 + param_1;
                field_116 = local_34 + param_2;
                local_40 = (shared_ptr<Container>*)m_root;
                local_48 = GetVisibleX(this);
                local_44 = local_38;
                local_50 = GetVisibleY(this);
                local_4c = local_34;
                new ((local_70 + -24)) graphics::ClippingState(m_pRT7Core);
                this_00 = m_pRT7Core;
                iVar7 = GetVisibleX(this);
                iVar8 = GetVisibleY(this);
                this_00->SetClippingRectangle(param_1, param_2, iVar7, iVar8, true);
                plVar11 = (long*)shared_ptr<Container>::operator->(local_40);
                (**(code**)(*plVar11 + 32))(plVar11, param_1, param_2);
                if (local_50 < local_4c) {
                    cVar6 = IsAttached(this);
                    if (cVar6 != '\0') {
                        local_40 = (shared_ptr<Container>*)CONCAT44(local_40._4_4_, param_1);
                        iVar7 = m_placement;
                        iVar8 = field_112;
                        iVar9 = GetVisibleX(this);
                        iVar1 = field_108;
                        iVar10 = GetVisibleY(this);
                        new ((auStack_6c + 12))
                            oldscape::dash3d::GridRect(iVar8 + -1, param_2, iVar7 + iVar9 + -1, iVar1 + iVar10);
                        iVar7 = local_58;
                        uVar4 = auStack_6c._12_4_;
                        GetVisibleY(this);
                        PVar2.field_4 = in_stack_ffffffffffffff6c;
                        PVar2.field_0 = field_132;
                        PVar2.field_8 = 0;
                        PVar2._12_8_ = in_stack_ffffffffffffff74;
                        DrawScrollBar(PVar2, SUB81(this, 0), uVar4, iVar7, 1, (bool)(undefined1)local_34);
                        param_1 = (int)local_40;
                    }
                }
                if (local_48 < local_44) {
                    cVar6 = IsAttached(this);
                    if (cVar6 != '\0') {
                        iVar7 = m_placement;
                        iVar8 = field_116;
                        iVar9 = GetVisibleX(this);
                        iVar1 = field_108;
                        iVar10 = GetVisibleY(this);
                        new ((auStack_6c + 12))
                            oldscape::dash3d::GridRect(param_1, iVar8 + -1, iVar7 + iVar9, iVar1 + iVar10 + -1);
                        GetVisibleX(this);
                        PVar3.field_4 = in_stack_ffffffffffffff6c;
                        PVar3.field_0 = field_136;
                        PVar3.field_8 = 0;
                        PVar3._12_8_ = in_stack_ffffffffffffff74;
                        DrawScrollBar(PVar3, SUB81(this, 0), auStack_6c._12_4_, local_58, 0,
                                      (bool)(undefined1)local_38);
                    }
                }
                ((local_70 + -24))->~ClippingState();
            }
            local_70->~shared_ptr();
        }
    }

    // 0x100a3cd30, 112 bytes, placed by class name and debug map
    // Tweaky::DetectTweakyShown()
    void Tweaky::DetectTweakyShown() {
        GraphicsApp* this_00;
        ulong uVar1;
        long* plVar2;

        this_00 = (GraphicsApp*)BaseApp::GetAppInstance();
        uVar1 = this_00->GetUniqueLoopID();
        if (field_96 + 1 < uVar1) {
            plVar2 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)m_root);
            (**(code**)(*plVar2 + 80))(plVar2);
        }
        if (field_159 != '\0') {
            plVar2 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)m_root);
            (**(code**)(*plVar2 + 88))(plVar2);
            field_159 = '\0';
        }
        field_96 = this_00->GetUniqueLoopID();
    }

    // 0x100a3cdf0, 304 bytes, placed by class name and debug map
    // Tweaky::DrawScrollBar(Placement, bool, int, int, int, bool)
    void Tweaky::DrawScrollBar(Placement param_1, bool param_2, int param_3, int param_4, int param_5, bool param_6) {
        int iVar1;
        int iVar2;
        undefined8 uVar3;
        int in_register_00000014;
        int in_register_00000034;
        int iVar4;
        undefined7 in_register_00000039;
        long lVar5;
        undefined7 in_register_00000081;
        int in_R9D;

        lVar5 = CONCAT71(in_register_00000039, param_2);
        iVar2 = (int)CONCAT71(in_register_00000081, param_6);
        if (iVar2 - in_R9D != 0 && in_R9D <= iVar2) {
            iVar4 = param_4 - param_3;
            if ((char)param_5 != '\0') {
                iVar4 = in_register_00000014 - in_register_00000034;
            }
            iVar1 = (in_R9D * iVar4) / iVar2;
            iVar2 = ((iVar4 - iVar1) * param_1.field_0) / (iVar2 - in_R9D);
            uVar3 = (*(RT7Core**)(lVar5 + 48))->GetGUIManager();
            if ((char)param_1.field_8 != '\0') {
                param_3 = param_3 - *(int*)(lVar5 + 136);
                in_register_00000034 = in_register_00000034 - *(int*)(lVar5 + 132);
                param_4 = param_4 - *(int*)(lVar5 + 136);
                in_register_00000014 = in_register_00000014 - *(int*)(lVar5 + 132);
            }
            0->AddElement(0, 0, 0, uVar3, param_3, in_register_00000034, param_4, in_register_00000014, 255, 0, 0);
            if ((char)param_5 == '\0') {
                param_3 = param_3 + iVar2;
                param_4 = iVar1 + param_3;
            } else {
                in_register_00000034 = in_register_00000034 + iVar2;
                in_register_00000014 = iVar1 + in_register_00000034;
            }
            0->AddElement(0, 0, 0, uVar3, param_3, in_register_00000034, param_4, in_register_00000014, 4294967295, 0,
                          0);
        }
    }

    // 0x100a3cf40, 64 bytes, placed by class name and debug map
    // Tweaky::Clear()
    void Tweaky::Clear() {
        long* plVar2;

        if (m_root->operator_cast_to_bool()) {
            plVar2 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)m_root);
            (**(code**)(*plVar2 + 16))(plVar2);
        }
    }

    // 0x100a3cf80, 128 bytes, placed by class name and debug map
    // Tweaky::DrawLine(int, int, int, int, bool)
    void Tweaky::DrawLine(int param_1, int param_2, int param_3, int param_4, bool param_5) {
        undefined8 uVar1;
        undefined7 in_register_00000089;

        if ((int)CONCAT71(in_register_00000089, param_5) != 0) {
            param_1 = param_1 - field_136;
            param_3 = param_3 - field_136;
            param_2 = param_2 - field_132;
            param_4 = param_4 - field_132;
        }
        uVar1 = m_pRT7Core->GetGUIManager();
        1065353216->AddGeneralLine(uVar1, param_1, param_2, param_3, param_4, m_colour, 1, 0);
    }

    // 0x100a3d030, 384 bytes, placed by class name and debug map
    // Tweaky::DrawRect(int, int, int, int, bool)
    void Tweaky::DrawRect(int param_1, int param_2, int param_3, int param_4, bool param_5) {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined8 uVar3;
        undefined4 in_register_00000084;
        undefined7 in_register_00000089;
        double dVar4;
        double local_40;

        uVar3 = m_pRT7Core->GetGUIManager();
        dVar4 = 0.6;
        if ((int)CONCAT71(in_register_00000089, param_5) == 0) {
            local_40 = 0.6;
            dVar4 = 1.2;
        } else {
            local_40 = 1.2;
        }
        uVar1 = math::Multiply(m_colour, dVar4);
        uVar2 = math::Multiply(m_colour, local_40);
        uVar3->AddColouredRectangle(param_1 - field_136, param_2 - field_132, param_3, 1, uVar1, 1);
        uVar3->AddColouredRectangle(param_1 - field_136, param_2 - field_132, 1, param_4, uVar1, 1);
        uVar3->AddColouredRectangle(param_1 - field_136, (param_4 + param_2) - field_132, param_3 + 1, 1, uVar2, 1);
        uVar3->AddColouredRectangle((param_3 + param_1) - field_136, param_2 - field_132, 1,
                                    CONCAT44(in_register_00000084, param_4), uVar2, 1);
    }

    // 0x100a3d1c0, 112 bytes, placed by class name and debug map
    // Tweaky::FillRect(int, int, int, int)
    void Tweaky::FillRect(int param_1, int param_2, int param_3, int param_4) {
        undefined8 in_RAX;
        undefined4 uVar2;
        undefined8 uVar1;

        uVar2 = (undefined4)((ulong)in_RAX >> 32);
        uVar1 = m_pRT7Core->GetGUIManager();
        uVar1->AddColouredRectangle(param_1 - field_136, param_2 - field_132, param_3, param_4, m_colour,
                                    CONCAT44(uVar2, 1));
    }

    // 0x100a3d230, 48 bytes, placed by class name and debug map
    // Tweaky::GetSize(int&, int&) const
    void Tweaky::GetSize(int* param_1, int* param_2) {
        long* plVar1;

        plVar1 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)m_root);
        (**(code**)(*plVar1 + 40))(plVar1, param_1, param_2);
    }

    // 0x100a3d260, 304 bytes, placed by class name and debug map
    // Tweaky::GetTextSize(int&, int&, StringView, int)
    undefined1 Tweaky::GetTextSize(int* param_1, int* param_2, StringView param_3, int param_4) {
        int* piVar1;
        int* piVar2;
        byte bVar3;
        byte bVar4;
        int iVar5;
        int iVar6;
        Layout* this_00;
        vector* this_01;
        FontMetrics* this_02;
        TextProperties* pTVar7;
        TextProperties* pTVar8;
        int iVar10;
        undefined1* this_03;
        StringView SVar11;
        StringView SVar12;
        TextFlags in_stack_ffffffffffffff58;
        TextProperties local_a0;
        StringView local_78;
        StringView local_68;
        TextProperties* local_58;
        undefined4 local_40;
        undefined1 local_39;
        TextFlags local_38[8];

        pTVar7 = (TextProperties*)param_3.field_0;
        iVar10 = (int)param_3.field_8;
        this_03 = m_font;
        pTVar8 = pTVar7;
        local_39 = this_03->operator_cast_to_bool();
        if ((bool)local_39) {
            this_00 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)this_03);
            this_01 = eastl::string::Layout::SSOBeginPtr(this_00, (type*)param_1);
            this_02 =
                (FontMetrics*)shared_ptr<graphics::FontMetrics>::operator*((shared_ptr<graphics::FontMetrics>*)this_01);
            local_58 = pTVar7;
            new (&local_78) StringView(pTVar7);
            SVar11.field_8 = (uchar*)this_02;
            SVar11.field_0 = (ulong)&local_78;
            iVar5 = graphics::FontHelpers::GetStringWidth(SVar11, (FontMetrics*)&DAT_00000001, SUB81(pTVar8, 0));
            bVar3 = this_02->GetMaxAscent();
            bVar4 = this_02->GetMaxDescent();
            piVar2 = param_2;
            piVar1 = param_1;
            iVar6 = (uint)bVar4 + (uint)bVar3;
            if ((0 < iVar10) && (iVar10 < iVar5)) {
                local_40 = 1;
                graphics::TextFlags::TextFlags(local_38, &local_40, 1);
                new (&local_a0) graphics::TextProperties(this_03, in_stack_ffffffffffffff58);
                new (&local_68) StringView(local_58);
                SVar12.field_8._0_4_ = iVar10;
                SVar12.field_0 = (ulong)&local_68;
                SVar12.field_8._4_4_ = 0;
                iVar6 = graphics::FontHelpers::PredictHeightAndLines(SVar12, (int)&local_a0, pTVar8);
                iVar5 = iVar10;
            }
            *piVar1 = iVar5;
            *piVar2 = iVar6;
        }
        return local_39;
    }

    // 0x100a3d390, 128 bytes, placed by class name and debug map
    // Tweaky::GetMinControlHeight()
    uint Tweaky::GetMinControlHeight() {
        byte bVar1;
        byte bVar2;
        Layout* pLVar3;
        vector* pvVar4;
        FontMetrics* pFVar5;
        uint* puVar6;
        type* in_RSI;
        uint local_1c;

        pLVar3 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)m_font);
        pvVar4 = eastl::string::Layout::SSOBeginPtr(pLVar3, in_RSI);
        pFVar5 =
            (FontMetrics*)shared_ptr<graphics::FontMetrics>::operator->((shared_ptr<graphics::FontMetrics>*)pvVar4);
        bVar1 = pFVar5->GetMaxAscent();
        pLVar3 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)m_font);
        pvVar4 = eastl::string::Layout::SSOBeginPtr(pLVar3, in_RSI);
        pFVar5 =
            (FontMetrics*)shared_ptr<graphics::FontMetrics>::operator->((shared_ptr<graphics::FontMetrics>*)pvVar4);
        bVar2 = pFVar5->GetMaxDescent();
        local_1c = (uint)bVar2 + (uint)bVar1;
        puVar6 = std::max<unsigned int>(&local_1c, &m_controlMinHeight);
        return *puVar6;
    }

    // 0x100a3d420, 64 bytes, placed by class name and debug map
    // Tweaky::GetTextCenterYOffset(unsigned int)
    int Tweaky::GetTextCenterYOffset(uint param_1) {
        byte bVar1;
        Layout* this_00;
        vector* this_01;
        FontMetrics* this_02;
        uint uVar2;
        undefined4 in_register_00000034;

        uVar2 = param_1 >> 1;
        this_00 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)m_font);
        this_01 = eastl::string::Layout::SSOBeginPtr(this_00, (type*)CONCAT44(in_register_00000034, param_1));
        this_02 =
            (FontMetrics*)shared_ptr<graphics::FontMetrics>::operator->((shared_ptr<graphics::FontMetrics>*)this_01);
        bVar1 = this_02->GetUpperCaseAscent();
        return (uVar2 - bVar1) + 2;
    }

    // 0x100a3d460, 160 bytes, placed by class name and debug map
    // Tweaky::HandleMouseDown(float, float)
    undefined8 Tweaky::HandleMouseDown(float param_1, float param_2) {
        char cVar1;
        long* plVar2;
        undefined8 uVar3;

        field_120 = 0;
        cVar1 = IsInsideVisibleArea(this, (int)param_1, (int)param_2);
        if (cVar1 == '\0') {
            ClearFocus(this);
            uVar3 = 0;
        } else {
            plVar2 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)m_root);
            cVar1 = (**(code**)(*plVar2 + 48))((float)field_136 + param_1, (float)field_132 + param_2, plVar2, 1);
            uVar3 = 1;
            if (cVar1 == '\0') {
                field_124 = param_1;
                field_128 = param_2;
                field_120 = 1;
            }
        }
        return uVar3;
    }

    // 0x100a3d570, 112 bytes, placed by class name and debug map
    // Tweaky::ClearFocus()
    void Tweaky::ClearFocus() {
        long* plVar2;
        shared_ptr<Control> local_28[16];

        GetFocus((Tweaky*)local_28);
        if (local_28->operator_cast_to_bool()) {
            plVar2 = (long*)shared_ptr<Control>::operator->(local_28);
            (**(code**)(*plVar2 + 24))(plVar2, 0);
            weak_ptr<Control>::reset();
        }
        local_28->~shared_ptr();
    }

    // 0x100a3d5e0, 416 bytes, placed by class name and debug map
    // Tweaky::HandleMouseMove(float, float)
    ulong Tweaky::HandleMouseMove(float param_1, float param_2) {
        char cVar2;
        int iVar3;
        int iVar4;
        long* plVar5;
        undefined7 uVar7;
        ulong uVar6;
        float fVar8;
        float fVar9;
        enable_shared_from_this<PathingEntity> local_60[16];
        shared_ptr local_50;
        int local_3c;
        float local_38;
        float local_34;

        local_60->shared_from_this();
        uVar7 = (undefined7)((ulong)this >> 8);
        if (field_120 != '\0') {
            local_34 = field_124;
            local_38 = field_128;
            plVar5 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)m_root);
            (**(code**)(*plVar5 + 40))(plVar5, &local_50, &local_3c);
            fVar8 = local_34 - param_1;
            fVar9 = local_38 - param_2;
            iVar3 = GetVisibleX(this);
            iVar4 = GetVisibleY(this);
            iVar3 = eastl::min<graphics::GraphicsQuality>(local_50._0_4_ - iVar3, (int)fVar8 + field_136);
            iVar3 = eastl::max<int>(0, iVar3);
            field_136 = iVar3;
            iVar3 = eastl::min<graphics::GraphicsQuality>(local_3c - iVar4, (int)fVar9 + field_132);
            iVar3 = eastl::max<int>(0, iVar3);
            field_132 = iVar3;
            field_124 = param_1;
            field_128 = param_2;
            uVar6 = CONCAT71(uVar7, 1);
            goto LAB_100a3d738;
        }
        weak_ptr<oldscape::rs2lib::IfType>::lock();
        if (shared_ptr::operator_cast_to_bool(&local_50)) {
            plVar5 = (long*)shared_ptr<Control>::operator->((shared_ptr<Control>*)&local_50);
            cVar2 = (**(code**)(*plVar5 + 56))((float)field_136 + param_1, (float)field_132 + param_2, plVar5);
            uVar6 = CONCAT71(uVar7, 1);
            if (cVar2 == '\0')
                goto LAB_100a3d72d;
        } else {
        LAB_100a3d72d:
            uVar6 = 0;
        }
        local_50.~shared_ptr();
    LAB_100a3d738:
        local_60->~shared_ptr();
        return uVar6 & 4294967295;
    }

    // 0x100a3d780, 256 bytes, placed by class name and debug map
    // Tweaky::HandleMouseOver(float, float)
    undefined8 Tweaky::HandleMouseOver(float param_1, float param_2) {
        undefined1* this_00;
        char cVar1;
        Control* this_01;
        long* plVar2;

        cVar1 = input::InputState::IsMouseDown(0);
        if (cVar1 == '\0') {
            cVar1 = IsInsideVisibleArea(this, (int)param_1, (int)param_2);
            if (cVar1 != '\0') {
                this_00 = m_root;
                this_01 = (Control*)shared_ptr<Container>::operator->((shared_ptr<Container>*)this_00);
                cVar1 = this_01->BoundsCheck((float)field_136 + param_1, (float)field_132 + param_2);
                if (cVar1 != '\0') {
                    plVar2 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)this_00);
                    (**(code**)(*plVar2 + 224))(plVar2, 1);
                    plVar2 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)this_00);
                    (**(code**)(*plVar2 + 64))((float)field_136 + param_1, (float)field_132 + param_2, plVar2);
                    return 1;
                }
            }
            plVar2 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)m_root);
            (**(code**)(*plVar2 + 224))(plVar2, 0);
        }
        return 0;
    }

    // 0x100a3d8d0, 224 bytes, placed by class name and debug map
    // Tweaky::HandleMouseUp(float, float)
    undefined8 Tweaky::HandleMouseUp(float param_1, float param_2) {
        char cVar2;
        long* plVar3;
        enable_shared_from_this<PathingEntity> local_38[16];
        shared_ptr local_28;

        if (field_120 == '\0') {
            local_38->shared_from_this();
            weak_ptr<oldscape::rs2lib::IfType>::lock();
            if (shared_ptr::operator_cast_to_bool(&local_28)) {
                plVar3 = (long*)shared_ptr<Control>::operator->((shared_ptr<Control>*)&local_28);
                cVar2 = (**(code**)(*plVar3 + 48))((float)field_136 + param_1, (float)field_132 + param_2, plVar3, 0);
                if (cVar2 != '\0') {
                    local_28.~shared_ptr();
                    local_38->~shared_ptr();
                    return 1;
                }
            }
            ClearFocus(this);
            local_28.~shared_ptr();
            local_38->~shared_ptr();
        } else {
            field_120 = 0;
        }
        return 0;
    }

    // 0x100a3d9b0, 256 bytes, placed by class name and debug map
    // Tweaky::HandleMouseWheel(float, float, float)
    undefined4 Tweaky::HandleMouseWheel(float param_1, float param_2, float param_3) {
        char cVar2;
        undefined4 uVar3;
        Control* this_00;
        long* plVar4;
        enable_shared_from_this<PathingEntity> local_48[16];
        shared_ptr local_38;

        uVar3 = IsInsideVisibleArea(this, (int)param_1, (int)param_2);
        if ((char)uVar3 == '\0') {
            return uVar3;
        }
        local_48->shared_from_this();
        weak_ptr<oldscape::rs2lib::IfType>::lock();
        if (shared_ptr::operator_cast_to_bool(&local_38)) {
            this_00 = (Control*)shared_ptr<Control>::operator->((shared_ptr<Control>*)&local_38);
            cVar2 = this_00->BoundsCheck(param_1, param_2);
            if (cVar2 != '\0') {
                plVar4 = (long*)shared_ptr<Control>::operator->((shared_ptr<Control>*)&local_38);
                cVar2 = (**(code**)(*plVar4 + 72))(param_1, param_2, param_3, plVar4);
                if (cVar2 != '\0')
                    goto LAB_100a3da68;
            }
        }
        field_132 = field_132 + (int)param_3 * -20;
        ValidateScroll(this);
    LAB_100a3da68:
        local_38.~shared_ptr();
        local_48->~shared_ptr();
        return uVar3;
    }

    // 0x100a3dab0, 144 bytes, placed by class name and debug map
    // Tweaky::ValidateScroll()
    void Tweaky::ValidateScroll() {
        int iVar1;
        int iVar2;
        long* plVar3;
        int local_20;
        int local_1c;

        plVar3 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)m_root);
        (**(code**)(*plVar3 + 40))(plVar3, &local_20, &local_1c);
        iVar1 = GetVisibleX(this);
        iVar2 = GetVisibleY(this);
        iVar1 = eastl::min<graphics::GraphicsQuality>(local_20 - iVar1, field_136);
        iVar1 = eastl::max<int>(0, iVar1);
        field_136 = iVar1;
        iVar1 = eastl::min<graphics::GraphicsQuality>(local_1c - iVar2, field_132);
        iVar1 = eastl::max<int>(0, iVar1);
        field_132 = iVar1;
    }

    // 0x100a3db40, 112 bytes, placed by class name and debug map
    // Tweaky::HasInputFocus() const
    undefined4 Tweaky::HasInputFocus() {
        undefined4 uVar2;
        long* plVar3;
        shared_ptr<Control> local_20[16];

        GetFocus((Tweaky*)local_20);
        if (local_20->operator_cast_to_bool()) {
            plVar3 = (long*)shared_ptr<Control>::operator->(local_20);
            uVar2 = (**(code**)(*plVar3 + 216))(plVar3);
        } else {
            uVar2 = 0;
        }
        local_20->~shared_ptr();
        return uVar2;
    }

    // 0x100a3dbb0, 144 bytes, placed by class name and debug map
    // Tweaky::SetFont(shared_ptr<graphics::Font> const&)
    void Tweaky::SetFont(shared_ptr* param_1) {
        undefined1* this_00;
        byte bVar2;
        uint uVar3;
        long* plVar4;
        Layout* this_01;
        vector* this_02;
        FontMetrics* this_03;

        this_00 = m_font;
        if (operator!=((shared_ptr*)this_00, param_1)) {
            shared_ptr<graphics::Font>::operator=((shared_ptr<graphics::Font>*)this_00, param_1);
            plVar4 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)m_root);
            (**(code**)(*plVar4 + 112))(plVar4);
            this_01 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)this_00);
            this_02 = eastl::string::Layout::SSOBeginPtr(this_01, (type*)param_1);
            this_03 = (FontMetrics*)this_02->end();
            bVar2 = this_03->GetMaxAscent();
            uVar3 = this_03->GetVerticalSpacing();
            field_80 = ~uVar3 + (uint)bVar2;
            field_132 = 0;
            field_136 = 0;
        }
    }

    // 0x100a3dc40, 16 bytes, placed by class name and debug map
    // Tweaky::SetControlMinHeight(unsigned int)
    void Tweaky::SetControlMinHeight(uint param_1) {
        m_controlMinHeight = param_1;
    }

    // 0x100a3dc50, 32 bytes, placed by class name and debug map
    // Tweaky::ToggleControlMinHeight()
    void Tweaky::ToggleControlMinHeight() {
        uint uVar1;

        uVar1 = 30;
        if (m_controlMinHeight == 30) {
            uVar1 = 15;
        }
        SetControlMinHeight(this, uVar1);
    }

    // 0x100a3dc70, 176 bytes, placed by class name and debug map
    // Tweaky::SetFocus(shared_ptr<Control> const&)
    void Tweaky::SetFocus(shared_ptr* param_1) {
        bool bVar1;
        long* plVar2;
        shared_ptr* extraout_RDX;
        jag local_30[16];

        GetFocus((Tweaky*)local_30);
        bVar1 = local_30->operator_cast_to_bool();
        if (bVar1) {
            bVar1 = operator==(local_30, param_1, extraout_RDX);
            if (bVar1)
                goto LAB_100a3dcef;
            plVar2 = (long*)shared_ptr<Control>::operator->((shared_ptr<Control>*)local_30);
            (**(code**)(*plVar2 + 24))(plVar2, 0);
        }
        weak_ptr<Control>::operator=((weak_ptr<Control>*)&field_32, param_1);
        plVar2 = (long*)shared_ptr<Control>::operator->((shared_ptr<Control>*)param_1);
        (**(code**)(*plVar2 + 24))(plVar2, 1);
        EnsureVisible(this, param_1);
    LAB_100a3dcef:
        local_30->~shared_ptr();
    }

    // 0x100a3dd20, 176 bytes, placed by class name and debug map
    // Tweaky::EnsureVisible(shared_ptr<Control> const&)
    void Tweaky::EnsureVisible(shared_ptr* param_1) {
        int iVar1;
        int iVar2;
        RT7Core* this_00;
        int* piVar3;

        this_00 = (RT7Core*)shared_ptr<Control>::operator->((shared_ptr<Control>*)param_1);
        piVar3 = (int*)this_00->GetMSAASampleCount();
        iVar1 = *piVar3;
        iVar2 = piVar3[2];
        if (iVar2 != 0 || iVar1 != 0) {
            if (field_112 + -4 < iVar2 - field_136) {
                field_136 = (iVar2 - field_112) + 14;
            }
            if (iVar1 - field_136 < m_placement + 4) {
                field_136 = iVar1 + -14;
            }
            if (field_116 + -4 < piVar3[3] - field_132) {
                field_132 = (piVar3[3] - field_116) + 14;
            }
            if (piVar3[1] - field_132 < field_108 + 4) {
                field_132 = piVar3[1] + -14;
            }
            ValidateScroll(this);
        }
    }

    // 0x100a3e260, 160 bytes, placed by class name and debug map
    // Tweaky::HandleChar(int)
    undefined4 Tweaky::HandleChar(int param_1) {
        undefined4 uVar2;
        long* plVar3;
        enable_shared_from_this<PathingEntity> local_38[16];
        shared_ptr local_28;

        local_38->shared_from_this();
        GetFocus((Tweaky*)&local_28);
        if (shared_ptr::operator_cast_to_bool(&local_28)) {
            plVar3 = (long*)shared_ptr<Control>::operator->((shared_ptr<Control>*)&local_28);
            uVar2 = (**(code**)(*plVar3 + 192))(plVar3, param_1);
        } else {
            uVar2 = 0;
        }
        local_28.~shared_ptr();
        local_38->~shared_ptr();
        return uVar2;
    }

    // 0x100a3e300, 224 bytes, placed by class name and debug map
    // Tweaky::HandleKeyDown(int)
    undefined4 Tweaky::HandleKeyDown(int param_1) {
        char cVar1;
        undefined4 uVar3;
        long* plVar4;
        enable_shared_from_this<PathingEntity> local_38[16];
        shared_ptr local_28;

        local_38->shared_from_this();
        if (param_1 == 48) {
            cVar1 = input::InputState::IsKeyDown(56);
            uVar3 = 1;
            if (cVar1 == '\0') {
                SetFocusNext(this);
            } else {
                SetFocusPrevious(this);
            }
        } else if (param_1 == 53) {
            uVar3 = 1;
            ClearFocus(this);
        } else {
            GetFocus((Tweaky*)&local_28);
            if (shared_ptr::operator_cast_to_bool(&local_28)) {
                plVar4 = (long*)shared_ptr<Control>::operator->((shared_ptr<Control>*)&local_28);
                uVar3 = (**(code**)(*plVar4 + 200))(plVar4, param_1);
            } else {
                uVar3 = 0;
            }
            local_28.~shared_ptr();
        }
        local_38->~shared_ptr();
        return uVar3;
    }

    // 0x100a3e3e0, 160 bytes, placed by class name and debug map
    // Tweaky::HandleKeyUp(int)
    undefined4 Tweaky::HandleKeyUp(int param_1) {
        undefined4 uVar2;
        long* plVar3;
        enable_shared_from_this<PathingEntity> local_38[16];
        shared_ptr local_28;

        local_38->shared_from_this();
        GetFocus((Tweaky*)&local_28);
        if (shared_ptr::operator_cast_to_bool(&local_28)) {
            plVar3 = (long*)shared_ptr<Control>::operator->((shared_ptr<Control>*)&local_28);
            uVar2 = (**(code**)(*plVar3 + 208))(plVar3, param_1);
        } else {
            uVar2 = 0;
        }
        local_28.~shared_ptr();
        local_38->~shared_ptr();
        return uVar2;
    }

    // 0x100a41230, 816 bytes, placed by class name
    // Container::OnClick(float, float, bool)
    ulong Container::OnClick(float param_1, float param_2, bool param_3) {
        undefined1* this_00;
        Container* pCVar1;
        undefined1 uVar2;
        char cVar3;
        bool bVar4;
        Control* pCVar5;
        long* plVar6;
        shared_ptr<Control>* this_01;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        undefined7 in_register_00000031;
        undefined8 unaff_R12;
        ulong uVar7;
        ListIterator<console::Line, console::Line*, console::Line&>* this_02;
        list<console::Line, eastl::allocator> local_80[8];
        list<console::Line, eastl::allocator> local_78[8];
        undefined4 local_64;
        Event local_60;
        enable_shared_from_this<PathingEntity> local_48[16];

        cVar3 = BoundsCheck(param_1, param_2);
        if (cVar3 != '\0') {
            this_00 = field_272;
            bVar4 = this_00->operator_cast_to_bool();
            if (bVar4) {
                pCVar5 = (Control*)shared_ptr<Button>::operator->((shared_ptr<Button>*)this_00);
                cVar3 = pCVar5->BoundsCheck(param_1, param_2);
                if (cVar3 != '\0') {
                    plVar6 = (long*)shared_ptr<Button>::operator->((shared_ptr<Button>*)this_00);
                    cVar3 = (**(code**)(*plVar6 + 48))(param_1, param_2, plVar6, param_3);
                    if (cVar3 != '\0') {
                        uVar7 = CONCAT71((int7)((ulong)unaff_R12 >> 8), 1);
                        if (!param_3) {
                            pCVar5 = (Control*)shared_ptr<Button>::operator->((shared_ptr<Button>*)this_00);
                            local_48->shared_from_this();
                            new (&local_60) Event(local_48, 2);
                            pCVar5->DoCallback(&local_60);
                            local_60.~LRUHashCacheWrapper();
                            local_48->~shared_ptr();
                            local_48->shared_from_this();
                            new (&local_60) Event(local_48, 2);
                            DoCallback(&local_60);
                            local_60.~LRUHashCacheWrapper();
                            local_48->~shared_ptr();
                        }
                        goto LAB_100a41519;
                    }
                }
            }
            if (field_294 != '\0') {
                local_64 = (undefined4)CONCAT71(in_register_00000031, param_3);
                eastl::list<console::Line, eastl::allocator>::begin(local_80);
                eastl::list<console::Line, eastl::allocator>::end(local_78);
                bVar4 = eastl::operator!=((eastl*)local_80, (hashtable_iterator_base*)local_78, extraout_RDX);
                if (bVar4) {
                    this_02 = (ListIterator<console::Line, console::Line*, console::Line&>*)local_80;
                    uVar2 = (char)local_64;
                    do {
                        this_01 = (shared_ptr<Control>*)
                            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(this_02);
                        pCVar5 = (Control*)shared_ptr<Control>::operator->(this_01);
                        cVar3 = pCVar5->BoundsCheck(param_1, param_2);
                        if (cVar3 != '\0') {
                            plVar6 = (long*)shared_ptr<Control>::operator->(this_01);
                            cVar3 = (**(code**)(*plVar6 + 48))(param_1, param_2, plVar6, uVar2);
                            pCVar1 = (Container*)this;
                            if (cVar3 != '\0') {
                                if ((char)local_64 == '\0') {
                                    pCVar5 = (Control*)shared_ptr<Control>::operator->(this_01);
                                    this_02 = (ListIterator<console::Line, console::Line*, console::Line&>*)local_48;
                                    this_02->shared_from_this();
                                    new (&local_60) Event(this_02, 2);
                                    pCVar5->DoCallback(&local_60);
                                    local_60.~LRUHashCacheWrapper();
                                    local_48->~shared_ptr();
                                    local_48->shared_from_this();
                                    new (&local_60) Event(local_48, 2);
                                    pCVar1->DoCallback(&local_60);
                                    local_60.~LRUHashCacheWrapper();
                                    local_48->~shared_ptr();
                                }
                                uVar7 = CONCAT71((int7)((ulong)this_02 >> 8), 1);
                                goto LAB_100a41519;
                            }
                        }
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(this_02);
                        bVar4 = eastl::operator!=((eastl*)this_02, (hashtable_iterator_base*)local_78, extraout_RDX_00);
                    } while (bVar4);
                }
                pCVar1 = (Container*)this;
                local_48->shared_from_this();
                new (&local_60) Event(local_48, 2);
                pCVar1->DoCallback(&local_60);
                local_60.~LRUHashCacheWrapper();
                local_48->~shared_ptr();
            }
        }
        Control::ClearFocus();
        uVar7 = 0;
    LAB_100a41519:
        return uVar7 & 4294967295;
    }

    // 0x100a41670, 144 bytes, placed by class name
    // Container::InitDefault()
    void Container::InitDefault() {
        shared_ptr<Control>* this_00;
        bool bVar1;
        long* plVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        list<console::Line, eastl::allocator> local_30[8];
        list<console::Line, eastl::allocator> local_28[8];

        eastl::list<console::Line, eastl::allocator>::begin(local_30);
        eastl::list<console::Line, eastl::allocator>::end(local_28);
        bVar1 = eastl::operator!=((eastl*)local_30, (hashtable_iterator_base*)local_28, extraout_RDX);
        if (bVar1) {
            do {
                this_00 =
                    (shared_ptr<Control>*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)local_30);
                plVar2 = (long*)shared_ptr<Control>::operator->(this_00);
                (**(code**)(*plVar2 + 88))(plVar2);
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_30);
                bVar1 = eastl::operator!=((eastl*)local_30, (hashtable_iterator_base*)local_28, extraout_RDX_00);
            } while (bVar1);
        }
    }

    // 0x100a417c0, 160 bytes, placed by class name
    // Container::ResetToDefault()
    void Container::ResetToDefault() {
        shared_ptr<Control>* this_00;
        bool bVar1;
        long* plVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        list<console::Line, eastl::allocator> local_38[8];
        list<console::Line, eastl::allocator> local_30[8];

        eastl::list<console::Line, eastl::allocator>::begin(local_38);
        eastl::list<console::Line, eastl::allocator>::end(local_30);
        bVar1 = eastl::operator!=((eastl*)local_38, (hashtable_iterator_base*)local_30, extraout_RDX);
        if (bVar1) {
            do {
                this_00 =
                    (shared_ptr<Control>*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                plVar2 = (long*)shared_ptr<Control>::operator->(this_00);
                (**(code**)(*plVar2 + 96))(plVar2);
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                bVar1 = eastl::operator!=((eastl*)local_38, (hashtable_iterator_base*)local_30, extraout_RDX_00);
            } while (bVar1);
        }
        ~AutoSingleton();
    }

    // 0x100a41ba0, 448 bytes, placed by class name
    // Container::MakeCollapsable()
    void Container::MakeCollapsable() {
        undefined1* this_00;
        long* plVar1;
        Control* pCVar2;
        shared_ptr* extraout_RDX;
        weak_ptr<oldscape::dash3d::Decor> local_98[16];
        enable_shared_from_this<PathingEntity> local_88[16];
        weak_ptr<oldscape::dash3d::Decor> local_78[16];
        shared_ptr local_68[3];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        field_293 = 1;
        make_shared<Button, char const(&)[2]>((jag*)local_68, "+");
        this_00 = field_272;
        shared_ptr<Button>::operator=((shared_ptr<Button>*)this_00, local_68);
        local_68->~shared_ptr();
        plVar1 = (long*)shared_ptr<Button>::operator->((shared_ptr<Button>*)this_00);
        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_98, (weak_ptr*)&field_104);
        (**(code**)(*plVar1 + 232))(plVar1, local_98);
        local_98->~weak_ptr();
        pCVar2 = (Control*)shared_ptr<Button>::operator->((shared_ptr<Button>*)this_00);
        local_88->shared_from_this();
        static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(local_68, (jag*)local_88,
                                                                                     extraout_RDX);
        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_78, (weak_ptr*)local_68);
        pCVar2->SetParent(local_78);
        local_78->~weak_ptr();
        local_68->~shared_ptr();
        local_88->~shared_ptr();
        pCVar2 = (Control*)shared_ptr<Button>::operator->((shared_ptr<Button>*)this_00);
        std::function<void(Event_const&)>::function<Container::MakeCollapsable()::__9, void>(local_68, this);
        pCVar2->SetHandler(local_68);
        std::function<void(Event_const&)>::~function((function<void(Event_const&)>*)local_68);
        field_294 = '\0';
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100a41e60, 128 bytes, placed by class name
    // Container::SetTweaky(weak_ptr<Tweaky>)
    void Container::SetTweaky(weak_ptr* param_2) {
        long* plVar2;
        weak_ptr<oldscape::dash3d::Decor> local_30[16];

        weak_ptr<Tweaky>::operator=((weak_ptr<Tweaky>*)&field_104, param_2);
        if (field_272->operator_cast_to_bool()) {
            plVar2 = (long*)shared_ptr<Button>::operator->((shared_ptr<Button>*)field_272);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_30, param_2);
            (**(code**)(*plVar2 + 232))(plVar2, local_30);
            local_30->~weak_ptr();
        }
    }

    // 0x100a41f30, 272 bytes, placed by class name
    // Container::operator+=(shared_ptr<Control> const&)
    /* Container::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<Control> const&) */

    Container* Container::operator+=(shared_ptr* param_1) {
        long* plVar1;
        Control* pCVar2;
        shared_ptr* extraout_RDX;
        weak_ptr<oldscape::dash3d::Decor> local_68[16];
        enable_shared_from_this<PathingEntity> local_58[16];
        weak_ptr<oldscape::dash3d::Decor> local_48[16];
        shared_ptr local_38;

        plVar1 = (long*)shared_ptr<Control>::operator->((shared_ptr<Control>*)param_1);
        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_68, (weak_ptr*)&field_104);
        (**(code**)(*plVar1 + 232))(plVar1, local_68);
        local_68->~weak_ptr();
        pCVar2 = (Control*)shared_ptr<Control>::operator->((shared_ptr<Control>*)param_1);
        local_58->shared_from_this();
        static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_38, (jag*)local_58,
                                                                                     extraout_RDX);
        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_48, (weak_ptr*)&local_38);
        pCVar2->SetParent(local_48);
        local_48->~weak_ptr();
        local_38.~shared_ptr();
        local_58->~shared_ptr();
        (&field_216, param_1)->push_back();
        return this;
    }

    // 0x100a42040, 912 bytes, placed by class name
    // Container::Draw(int, int)
    void Container::Draw(int param_1, int param_2) {
        undefined1* this_00;
        char cVar1;
        bool bVar2;
        long* plVar3;
        Tweaky* pTVar4;
        shared_ptr<Control>* this_01;
        int iVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        int iVar6;
        undefined1 local_60[4];
        undefined1 local_5c[4];
        list<console::Line, eastl::allocator> local_58[8];
        int local_50;
        int local_4c;
        int local_48[2];
        shared_ptr local_40;

        cVar1 = (*(code*)field_0[5])(this, local_60, local_5c);
        if (cVar1 != '\0') {
            iVar6 = field_24 + param_1;
            iVar5 = field_28 + param_2;
            new (&local_40) oldscape::dash3d::GridRect(iVar6, iVar5, field_36 + iVar6, field_40 + iVar5);
            field_136 = local_40._0_4_;
            field_140 = local_40._4_4_;
            field_144 = (undefined4)local_40.field_8;
            field_148 = local_40.field_8._4_4_;
            weak_ptr<oldscape::rs2lib::IfType>::lock();
            bVar2 = shared_ptr::operator_cast_to_bool(&local_40);
            if (bVar2) {
                if (field_292 != false) {
                    if (field_268 < 1) {
                        iVar5 = 0;
                        cVar1 = field_294;
                    } else {
                        iVar5 = field_268 / 2;
                        cVar1 = field_294;
                    }
                    if (cVar1 != '\0') {
                        pTVar4 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                        pTVar4->SetColour(808464639);
                        pTVar4 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                        pTVar4->FillRect(param_1, iVar5 + param_2, (field_144 - field_136) + -2,
                                         (field_148 - (field_140 + iVar5)) + -2);
                        pTVar4 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                        pTVar4->SetColour(1886417151);
                        pTVar4 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                        pTVar4->DrawRect(param_1, iVar5 + param_2, (field_144 - field_136) + -2,
                                         (field_148 - (iVar5 + field_140)) + -2, false);
                    }
                    this_00 = field_272;
                    bVar2 = this_00->operator_cast_to_bool();
                    if (bVar2) {
                        plVar3 = (long*)shared_ptr<Button>::operator->((shared_ptr<Button>*)this_00);
                        (**(code**)(*plVar3 + 32))(plVar3, param_1, param_2);
                        plVar3 = (long*)shared_ptr<Button>::operator->((shared_ptr<Button>*)this_00);
                        cVar1 = (**(code**)(*plVar3 + 40))(plVar3, local_48, local_58);
                        iVar5 = 0;
                        if (cVar1 != '\0') {
                            iVar5 = local_48[0];
                        }
                        param_1 = iVar5 + param_1;
                    }
                    if (field_264 < 1) {
                        iVar5 = 4;
                    } else {
                        pTVar4 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                        pTVar4->SetColour(808464639);
                        pTVar4 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                        pTVar4->FillRect(param_1 + 6, param_2, field_264 + 4, field_268);
                        pTVar4 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                        pTVar4->SetColour(3772834047);
                        pTVar4 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                        Tweaky::TextDraw<eastl::string>(pTVar4, param_1 + 6, param_2, (basic_string*)&field_48, -1, -1,
                                                        false);
                        iVar5 = field_268;
                    }
                    param_2 = iVar5 + param_2;
                    param_1 = param_1 + 4;
                }
                if (field_294 != '\0') {
                    local_48->begin();
                    eastl::list<console::Line, eastl::allocator>::end(local_58);
                    bVar2 = eastl::operator!=((eastl*)local_48, (hashtable_iterator_base*)local_58, extraout_RDX);
                    if (bVar2) {
                        do {
                            this_01 = (shared_ptr<Control>*)
                                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_48);
                            plVar3 = (long*)shared_ptr<Control>::operator->(this_01);
                            (**(code**)(*plVar3 + 32))(plVar3, param_1, param_2);
                            plVar3 = (long*)shared_ptr<Control>::operator->(this_01);
                            cVar1 = (**(code**)(*plVar3 + 40))(plVar3, &local_50, &local_4c);
                            if (cVar1 != '\0') {
                                if (m_direction == 1) {
                                    param_1 = param_1 + local_50 + 2;
                                } else {
                                    param_2 = param_2 + local_4c + 2;
                                }
                            }
                            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)local_48);
                            bVar2 = eastl::operator!=((eastl*)local_48, (hashtable_iterator_base*)local_58,
                                                      extraout_RDX_00);
                        } while (bVar2);
                    }
                }
            }
            local_40.~shared_ptr();
        }
    }

    // 0x100a423e0, 720 bytes, placed by class name
    // Container::GetControlSize(int&, int&)
    undefined8 Container::GetControlSize(int* param_1, int* param_2) {
        undefined1* this_00;
        int iVar1;
        bool bVar2;
        char cVar3;
        int iVar4;
        shared_ptr<Control>* this_01;
        long* plVar5;
        Tweaky* this_02;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        int iVar6;
        int in_R9D;
        StringView SVar7;
        StringView local_80;
        int* local_70;
        int* local_68;
        shared_ptr local_60;
        int local_4c;
        int local_48[3];
        int local_3c;
        ulong local_38;

        local_70 = param_1;
        if (field_294 == '\0') {
            local_38 = 0;
            iVar6 = 0;
        } else {
            local_68 = param_2;
            local_60.begin();
            local_48->end();
            bVar2 = eastl::operator!=((eastl*)&local_60, (hashtable_iterator_base*)local_48, extraout_RDX);
            if (bVar2) {
                iVar6 = 0;
                local_38 = 0;
                do {
                    this_01 = (shared_ptr<Control>*)
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_60);
                    plVar5 = (long*)shared_ptr<Control>::operator->(this_01);
                    cVar3 = (**(code**)(*plVar5 + 40))(plVar5, &local_3c, &local_4c);
                    if (cVar3 != '\0') {
                        if (m_direction == 1) {
                            iVar6 = iVar6 + local_3c + 2;
                            local_38 = eastl::max<int>((int)local_38, local_4c);
                        } else {
                            iVar6 = eastl::max<int>(iVar6, local_3c);
                            local_38 = (ulong)((int)local_38 + local_4c + 2);
                        }
                    }
                    if (cVar3 == '\0')
                        break;
                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)&local_60);
                    bVar2 = eastl::operator!=((eastl*)&local_60, (hashtable_iterator_base*)local_48, extraout_RDX_00);
                } while (bVar2);
            } else {
                local_38 = 0;
                iVar6 = 0;
            }
            param_2 = local_68;
            if (bVar2 != false) {
                return 0;
            }
        }
        this_00 = field_272;
        bVar2 = this_00->operator_cast_to_bool();
        if ((bVar2) && (bVar2 = this_00->operator_cast_to_bool(), bVar2)) {
            plVar5 = (long*)shared_ptr<Button>::operator->((shared_ptr<Button>*)this_00);
            cVar3 = (**(code**)(*plVar5 + 40))(plVar5, &local_60, local_48);
            if (cVar3 != '\0') {
                iVar6 = iVar6 + local_60._0_4_;
                local_38 = eastl::max<int>((int)local_38, local_48[0]);
            }
        }
        local_48[0] = 0;
        local_3c = 0;
        cVar3 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar3 == '\0') {
            weak_ptr<oldscape::rs2lib::IfType>::lock();
            bVar2 = shared_ptr::operator_cast_to_bool(&local_60);
            if (bVar2) {
                this_02 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_60);
                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_80,
                                                                                              (fixed_string*)&field_48);
                SVar7.field_8 = (uchar*)4294967295;
                SVar7.field_0 = (ulong)&local_80;
                this_02->GetTextSize(local_48, &local_3c, SVar7, in_R9D);
            }
            local_60.~shared_ptr();
        }
        iVar1 = local_3c;
        field_264 = local_48[0];
        field_268 = local_3c;
        iVar4 = (int)local_38;
        if ((field_292 != false) && (field_294 != '\0')) {
            iVar6 = iVar6 + 8;
            iVar4 = iVar4 + 8;
        }
        field_36 = iVar6;
        field_40 = iVar4;
        if (0 < local_48[0]) {
            iVar6 = eastl::max<int>(local_48[0] + 24, iVar6);
            field_36 = iVar6;
            if (field_294 != '\0') {
                field_40 = iVar1 / 2 + field_40 + 4;
            }
        }
        if ((field_36 < 1) || (field_40 < 1)) {
            return 0;
        }
        *local_70 = field_36;
        iVar6 = field_40;
        *param_2 = iVar6;
        return CONCAT71((uint7)(uint3)((uint)iVar6 >> 8), 1);
    }

    // 0x100a426b0, 160 bytes, placed by class name
    // Container::ClearControlSize()
    void Container::ClearControlSize() {
        shared_ptr<Control>* this_00;
        bool bVar1;
        long* plVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        list<console::Line, eastl::allocator> local_38[8];
        list<console::Line, eastl::allocator> local_30[8];

        eastl::list<console::Line, eastl::allocator>::begin(local_38);
        eastl::list<console::Line, eastl::allocator>::end(local_30);
        bVar1 = eastl::operator!=((eastl*)local_38, (hashtable_iterator_base*)local_30, extraout_RDX);
        if (bVar1) {
            do {
                this_00 =
                    (shared_ptr<Control>*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                plVar2 = (long*)shared_ptr<Control>::operator->(this_00);
                (**(code**)(*plVar2 + 112))(plVar2);
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                bVar1 = eastl::operator!=((eastl*)local_38, (hashtable_iterator_base*)local_30, extraout_RDX_00);
            } while (bVar1);
        }
        ClearControlSize();
    }

    // 0x100a42780, 160 bytes, placed by class name
    // Container::Clear()
    void Container::Clear() {
        shared_ptr<Control>* this_00;
        bool bVar1;
        long* plVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        list<console::Line, eastl::allocator> local_38[8];
        list<console::Line, eastl::allocator> local_30[8];

        eastl::list<console::Line, eastl::allocator>::begin(local_38);
        eastl::list<console::Line, eastl::allocator>::end(local_30);
        bVar1 = eastl::operator!=((eastl*)local_38, (hashtable_iterator_base*)local_30, extraout_RDX);
        if (bVar1) {
            do {
                this_00 =
                    (shared_ptr<Control>*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                plVar2 = (long*)shared_ptr<Control>::operator->(this_00);
                (**(code**)(*plVar2 + 16))(plVar2);
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                bVar1 = eastl::operator!=((eastl*)local_38, (hashtable_iterator_base*)local_30, extraout_RDX_00);
            } while (bVar1);
        }
        (&field_216)->clear();
        Clear();
    }

    // 0x100a42840, 160 bytes, placed by class name
    // Container::ResetAllToDefault()
    void Container::ResetAllToDefault() {
        shared_ptr<Control>* this_00;
        bool bVar1;
        long* plVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        list<console::Line, eastl::allocator> local_38[8];
        list<console::Line, eastl::allocator> local_30[8];

        eastl::list<console::Line, eastl::allocator>::begin(local_38);
        eastl::list<console::Line, eastl::allocator>::end(local_30);
        bVar1 = eastl::operator!=((eastl*)local_38, (hashtable_iterator_base*)local_30, extraout_RDX);
        if (bVar1) {
            do {
                this_00 =
                    (shared_ptr<Control>*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                plVar2 = (long*)shared_ptr<Control>::operator->(this_00);
                (**(code**)(*plVar2 + 104))(plVar2);
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                bVar1 = eastl::operator!=((eastl*)local_38, (hashtable_iterator_base*)local_30, extraout_RDX_00);
            } while (bVar1);
        }
        ~AutoSingleton();
    }

    // 0x100a42940, 720 bytes, placed by class name
    // Container::OnMouseOver(float, float)
    uint Container::OnMouseOver(float param_1, float param_2) {
        undefined1* this_00;
        shared_ptr* this_01;
        char cVar1;
        bool bVar2;
        bool bVar3;
        Control* pCVar4;
        long* plVar5;
        shared_ptr* this_02;
        hashtable_iterator_base* extraout_RDX;
        shared_ptr* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        undefined1* this_03;
        uint unaff_R13D;
        shared_ptr local_68;
        list<console::Line, eastl::allocator> local_58[8];
        list<console::Line, eastl::allocator> local_48[8];
        shared_ptr* local_40;

        cVar1 = BoundsCheck(param_1, param_2);
        if (cVar1 != '\0') {
            this_00 = field_272;
            bVar2 = this_00->operator_cast_to_bool();
            if (bVar2) {
                pCVar4 = (Control*)shared_ptr<Button>::operator->((shared_ptr<Button>*)this_00);
                cVar1 = pCVar4->BoundsCheck(param_1, param_2);
                if (cVar1 != '\0') {
                    this_03 = field_248;
                    bVar2 = this_03->operator_cast_to_bool();
                    if ((bVar2) && (bVar2 = operator!=((shared_ptr*)this_00, (shared_ptr*)this_03), bVar2)) {
                        plVar5 = (long*)shared_ptr<Control>::operator->((shared_ptr<Control>*)this_03);
                        (**(code**)(*plVar5 + 224))(plVar5, 0);
                    }
                    shared_ptr<Control>::operator=((shared_ptr<Control>*)this_03, (shared_ptr*)this_00);
                    plVar5 = (long*)shared_ptr<Control>::operator->((shared_ptr<Control>*)this_03);
                    (**(code**)(*plVar5 + 224))(plVar5, 1);
                    plVar5 = (long*)shared_ptr<Button>::operator->((shared_ptr<Button>*)this_00);
                    unaff_R13D = (**(code**)(*plVar5 + 64))(param_1, param_2, plVar5);
                    goto LAB_100a42bdf;
                }
            }
            if (field_294 != '\0') {
                eastl::list<console::Line, eastl::allocator>::begin(local_48);
                eastl::list<console::Line, eastl::allocator>::end(local_58);
                bVar2 = eastl::operator!=((eastl*)local_48, (hashtable_iterator_base*)local_58, extraout_RDX);
                if (bVar2) {
                    local_40 = (shared_ptr*)field_248;
                    do {
                        this_02 =
                            (shared_ptr*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)local_48);
                        pCVar4 = (Control*)shared_ptr<Control>::operator->((shared_ptr<Control>*)this_02);
                        cVar1 = pCVar4->BoundsCheck(param_1, param_2);
                        this_01 = local_40;
                        if (cVar1 == '\0') {
                            bVar3 = operator==((jag*)local_40, this_02, extraout_RDX_00);
                            if (bVar3) {
                                plVar5 = (long*)shared_ptr<Control>::operator->((shared_ptr<Control>*)this_01);
                                (**(code**)(*plVar5 + 224))(plVar5);
                                new (&local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                                shared_ptr<Control>::operator=((shared_ptr<Control>*)this_01, &local_68);
                                local_68.~shared_ptr();
                            }
                        } else {
                            bVar3 = shared_ptr::operator_cast_to_bool(local_40);
                            if ((bVar3) && (bVar3 = operator!=(this_02, this_01), bVar3)) {
                                plVar5 = (long*)shared_ptr<Control>::operator->((shared_ptr<Control>*)this_01);
                                (**(code**)(*plVar5 + 224))(plVar5, 0);
                            }
                            shared_ptr<Control>::operator=((shared_ptr<Control>*)this_01, this_02);
                            plVar5 = (long*)shared_ptr<Control>::operator->((shared_ptr<Control>*)this_01);
                            (**(code**)(*plVar5 + 224))(plVar5, 1);
                            plVar5 = (long*)shared_ptr<Control>::operator->((shared_ptr<Control>*)this_02);
                            unaff_R13D = (**(code**)(*plVar5 + 64))(param_1, param_2, plVar5);
                        }
                        if (cVar1 != '\0')
                            break;
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)local_48);
                        bVar2 =
                            eastl::operator!=((eastl*)local_48, (hashtable_iterator_base*)local_58, extraout_RDX_01);
                    } while (bVar2);
                }
                this = (Container*)this;
                if (bVar2 != false)
                    goto LAB_100a42bdf;
            }
            bVar2 = field_248->operator_cast_to_bool();
            if (bVar2) {
                plVar5 = (long*)shared_ptr<Control>::operator->((shared_ptr<Control>*)field_248);
                unaff_R13D = 0;
                (**(code**)(*plVar5 + 224))(plVar5, 0);
                goto LAB_100a42bdf;
            }
        }
        unaff_R13D = 0;
    LAB_100a42bdf:
        return unaff_R13D & 4294967041;
    }

    // 0x100a42d30, 160 bytes, placed by class name
    // Container::SetMouseOver(bool)
    void Container::SetMouseOver(bool param_1) {
        shared_ptr<Control>* this_00;
        bool bVar1;
        long* plVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        undefined7 in_register_00000031;
        list<console::Line, eastl::allocator> local_30[8];
        list<console::Line, eastl::allocator> local_28[8];

        field_208 = param_1;
        if (((int)CONCAT71(in_register_00000031, param_1) == 0) && (field_294 != '\0')) {
            eastl::list<console::Line, eastl::allocator>::begin(local_30);
            eastl::list<console::Line, eastl::allocator>::end(local_28);
            bVar1 = eastl::operator!=((eastl*)local_30, (hashtable_iterator_base*)local_28, extraout_RDX);
            if (bVar1) {
                do {
                    this_00 = (shared_ptr<Control>*)
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)local_30);
                    plVar2 = (long*)shared_ptr<Control>::operator->(this_00);
                    (**(code**)(*plVar2 + 224))(plVar2, 0);
                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)local_30);
                    bVar1 = eastl::operator!=((eastl*)local_30, (hashtable_iterator_base*)local_28, extraout_RDX_00);
                } while (bVar1);
            }
        }
    }

    // 0x100a42dd0, 160 bytes, placed by class name
    // Container::DoOnShown()
    void Container::DoOnShown() {
        shared_ptr<Control>* this_00;
        bool bVar1;
        long* plVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        list<console::Line, eastl::allocator> local_38[8];
        list<console::Line, eastl::allocator> local_30[8];

        eastl::list<console::Line, eastl::allocator>::begin(local_38);
        eastl::list<console::Line, eastl::allocator>::end(local_30);
        bVar1 = eastl::operator!=((eastl*)local_38, (hashtable_iterator_base*)local_30, extraout_RDX);
        if (bVar1) {
            do {
                this_00 =
                    (shared_ptr<Control>*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                plVar2 = (long*)shared_ptr<Control>::operator->(this_00);
                (**(code**)(*plVar2 + 80))(plVar2);
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                bVar1 = eastl::operator!=((eastl*)local_38, (hashtable_iterator_base*)local_30, extraout_RDX_00);
            } while (bVar1);
        }
        DoOnShown();
    }

    // 0x100a42f10, 160 bytes, placed by class name
    // Container::AddButton(char const*, std::function<void (Event const&)> const&)
    /* Container::AddButton(char const*, std::function<void (Event const&)>
   const&) */

    void Container::AddButton(char* param_1, function* param_2) {
        Control* this_00;
        char* local_48;
        shared_ptr local_40;
        shared_ptr local_30;

        local_48 = param_1;
        make_shared<Button, char const*&>((jag*)&local_40, &local_48);
        new (&local_30) shared_ptr<oldscape::dash3d::Decor>(&local_40);
        Add(this, &local_30);
        local_30.~shared_ptr();
        this_00 = (Control*)shared_ptr<Button>::operator->((shared_ptr<Button>*)&local_40);
        this_00->SetHandler(param_2);
        local_40.~shared_ptr();
    }

    // 0x100a42fb0, 160 bytes, placed by class name
    // Container::AddButton(char const*, int, std::function<void (Event const&)> const&)
    /* Container::AddButton(char const*, int, std::function<void (Event const&)>
   const&) */

    void Container::AddButton(char* param_1, int param_2, function* param_3) {
        Control* this_00;
        char* local_50;
        shared_ptr local_48;
        shared_ptr local_38;
        int local_24;

        local_50 = param_1;
        local_24 = param_2;
        make_shared<Button, char const*&, int&>((jag*)&local_48, &local_50, &local_24);
        new (&local_38) shared_ptr<oldscape::dash3d::Decor>(&local_48);
        Add(this, &local_38);
        local_38.~shared_ptr();
        this_00 = (Control*)shared_ptr<Button>::operator->((shared_ptr<Button>*)&local_48);
        this_00->SetHandler(param_3);
        local_48.~shared_ptr();
    }

    // 0x100a43100, 224 bytes, placed by class name
    // Container::AddCheckBox(char const*, bool&)
    void Container::AddCheckBox(char* param_1, bool* param_2) {
        Control* this_00;
        char* local_70;
        shared_ptr local_68;
        shared_ptr local_58[3];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_70 = param_1;
        make_shared<CheckBox, char const*&, bool&>((jag*)&local_68, &local_70, param_2);
        new (local_58) shared_ptr<oldscape::dash3d::Decor>(&local_68);
        Add(this, local_58);
        local_58->~shared_ptr();
        this_00 = (Control*)shared_ptr<CheckBox>::operator->((shared_ptr<CheckBox>*)&local_68);
        std::function<void(Event_const&)>::function<Container::AddCheckBox(char const*, bool&)::__10, void>(local_58,
                                                                                                            param_2);
        this_00->SetHandler(local_58);
        std::function<void(Event_const&)>::~function((function<void(Event_const&)>*)local_58);
        local_68.~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100a431f0, 192 bytes, placed by class name
    // Container::AddCheckBox(char const*, std::function<void (Event const&)> const&, bool)
    /* Container::AddCheckBox(char const*, std::function<void (Event const&)>
   const&, bool) */

    void Container::AddCheckBox(char* param_1, function* param_2, bool param_3) {
        Control* this_00;
        long* plVar1;
        char* local_50;
        shared_ptr local_48;
        shared_ptr local_38;

        local_50 = param_1;
        make_shared<CheckBox, char const*&>((jag*)&local_38, &local_50);
        new (&local_48) shared_ptr<oldscape::dash3d::Decor>(&local_38);
        Add(this, &local_48);
        local_48.~shared_ptr();
        this_00 = (Control*)shared_ptr<CheckBox>::operator->((shared_ptr<CheckBox>*)&local_38);
        this_00->SetHandler(param_2);
        plVar1 = (long*)shared_ptr<CheckBox>::operator->((shared_ptr<CheckBox>*)&local_38);
        (**(code**)(*plVar1 + 128))(plVar1, param_3);
        local_38.~shared_ptr();
    }

    // 0x100a432b0, 160 bytes, placed by class name
    // Container::AddEditField(char const*, int, std::function<void (Event const&)> const&)
    /* Container::AddEditField(char const*, int, std::function<void (Event
   const&)> const&) */

    void Container::AddEditField(char* param_1, int param_2, function* param_3) {
        Control* this_00;
        char* local_50;
        shared_ptr local_48;
        shared_ptr local_38;
        int local_24;

        local_50 = param_1;
        local_24 = param_2;
        make_shared<EditField, char const*&, int&>((jag*)&local_48, &local_50, &local_24);
        new (&local_38) shared_ptr<oldscape::dash3d::Decor>(&local_48);
        Add(this, &local_38);
        local_38.~shared_ptr();
        this_00 = (Control*)shared_ptr<EditField>::operator->((shared_ptr<EditField>*)&local_48);
        this_00->SetHandler(param_3);
        local_48.~shared_ptr();
    }

    // 0x100a43350, 144 bytes, placed by class name
    // Container::AddEnum(char const*, StringEnum const*, int*)
    void Container::AddEnum(char* param_1, StringEnum* param_2, int* param_3) {
        shared_ptr local_50;
        char* local_40;
        StringEnum* local_38;
        int* local_30;
        shared_ptr local_28;

        local_40 = param_1;
        local_38 = param_2;
        local_30 = param_3;
        make_shared<Enum, char const*&, StringEnum_const*&, int*&>((jag*)&local_50, &local_40, &local_38, &local_30);
        new (&local_28) shared_ptr<oldscape::dash3d::Decor>(&local_50);
        Add(this, &local_28);
        local_28.~shared_ptr();
        local_50.~shared_ptr();
    }

    // 0x100a433e0, 176 bytes, placed by class name
    // Container::AddEnum(char const*, StringEnum const*, int*, std::function<void (Event const&)> const&)
    /* Container::AddEnum(char const*, StringEnum const*, int*, std::function<void
   (Event const&)> const&) */

    void Container::AddEnum(char* param_1, StringEnum* param_2, int* param_3, function* param_4) {
        Control* this_00;
        char* local_58;
        StringEnum* local_50;
        int* local_48;
        shared_ptr local_40;
        shared_ptr local_30;

        local_58 = param_1;
        local_50 = param_2;
        local_48 = param_3;
        make_shared<Enum, char const*&, StringEnum_const*&, int*&>((jag*)&local_40, &local_58, &local_50, &local_48);
        new (&local_30) shared_ptr<oldscape::dash3d::Decor>(&local_40);
        Add(this, &local_30);
        local_30.~shared_ptr();
        this_00 = (Control*)shared_ptr<Enum>::operator->((shared_ptr<Enum>*)&local_40);
        this_00->SetHandler(param_4);
        local_40.~shared_ptr();
    }

    // 0x100a43490, 176 bytes, placed by class name
    // Container::AddSlider(char const*, float, float, float, std::function<void (Event const&)> const&)
    /* Container::AddSlider(char const*, float, float, float, std::function<void
   (Event const&)> const&) */

    void Container::AddSlider(char* param_1, float param_2, float param_3, float param_4, function* param_5) {
        Control* this_00;
        char* local_58;
        shared_ptr local_50;
        shared_ptr local_40;
        float local_2c;
        float local_28;
        float local_24;

        local_58 = param_1;
        local_2c = param_2;
        local_28 = param_3;
        local_24 = param_4;
        make_shared<Slider, char const*&, float&, float&, float&>((jag*)&local_50, &local_58, &local_2c, &local_28,
                                                                  &local_24);
        new (&local_40) shared_ptr<oldscape::dash3d::Decor>(&local_50);
        Add(this, &local_40);
        local_40.~shared_ptr();
        this_00 = (Control*)shared_ptr<Slider>::operator->((shared_ptr<Slider>*)&local_50);
        this_00->SetHandler(param_5);
        local_50.~shared_ptr();
    }

    // 0x100a43540, 176 bytes, placed by class name
    // Container::AddGradientSlider(char const*, float, float, float, std::function<void (Event const&)> const&)
    /* Container::AddGradientSlider(char const*, float, float, float, std::function<void
   (Event const&)> const&) */

    void Container::AddGradientSlider(char* param_1, float param_2, float param_3, float param_4, function* param_5) {
        Control* this_00;
        char* local_58;
        shared_ptr local_50;
        shared_ptr local_40;
        float local_2c;
        float local_28;
        float local_24;

        local_58 = param_1;
        local_2c = param_2;
        local_28 = param_3;
        local_24 = param_4;
        make_shared<GradientSlider, char const*&, float&, float&, float&>((jag*)&local_50, &local_58, &local_2c,
                                                                          &local_28, &local_24);
        new (&local_40) shared_ptr<oldscape::dash3d::Decor>(&local_50);
        Add(this, &local_40);
        local_40.~shared_ptr();
        this_00 = (Control*)shared_ptr<GradientSlider>::operator->((shared_ptr<GradientSlider>*)&local_50);
        this_00->SetHandler(param_5);
        local_50.~shared_ptr();
    }

    // 0x100a435f0, 240 bytes, placed by class name
    // Container::AddColourPicker(char const*, math::Vector3T<float>*, math::Range<float>)
    void Container::AddColourPicker(undefined8 param_1_00, Container* this, char* param_1, undefined8 param_2) {
        Control* this_00;
        undefined8 local_78;
        char* local_70;
        shared_ptr local_68;
        shared_ptr local_58[3];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_58[0]._0_1_ = 0;
        local_78 = param_1_00;
        local_70 = param_1;
        make_shared<ColourPicker, char const*&, bool&, math::Range<float>&>((jag*)&local_68, &local_70, (bool*)local_58,
                                                                            (Range*)&local_78);
        new (local_58) shared_ptr<oldscape::dash3d::Decor>(&local_68);
        Add(this, local_58);
        local_58->~shared_ptr();
        this_00 = (Control*)shared_ptr<ColourPicker>::operator->((shared_ptr<ColourPicker>*)&local_68);
        std::function<void(Event_const&)>::function<
            Container::AddColourPicker(char const*, math::Vector3T<float>*, math::Range<float>)::__11, void>(local_58,
                                                                                                             param_2);
        this_00->SetHandler(local_58);
        std::function<void(Event_const&)>::~function((function<void(Event_const&)>*)local_58);
        local_68.~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100a437e0, 240 bytes, placed by class name
    // Container::AddColourPicker(char const*, math::Vector4T<float>*, math::Range<float>)
    void Container::AddColourPicker(undefined8 param_1_00, Container* this, char* param_1, undefined8 param_2) {
        Control* this_00;
        undefined8 local_78;
        char* local_70;
        shared_ptr local_68;
        shared_ptr local_58[3];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_58[0]._0_1_ = 1;
        local_78 = param_1_00;
        local_70 = param_1;
        make_shared<ColourPicker, char const*&, bool&, math::Range<float>&>((jag*)&local_68, &local_70, (bool*)local_58,
                                                                            (Range*)&local_78);
        new (local_58) shared_ptr<oldscape::dash3d::Decor>(&local_68);
        Add(this, local_58);
        local_58->~shared_ptr();
        this_00 = (Control*)shared_ptr<ColourPicker>::operator->((shared_ptr<ColourPicker>*)&local_68);
        std::function<void(Event_const&)>::function<
            Container::AddColourPicker(char const*, math::Vector4T<float>*, math::Range<float>)::__12, void>(local_58,
                                                                                                             param_2);
        this_00->SetHandler(local_58);
        std::function<void(Event_const&)>::~function((function<void(Event_const&)>*)local_58);
        local_68.~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100a438e0, 176 bytes, placed by class name
    // Container::AddColourPicker(char const*, bool, math::Range<float>, std::function<void (Event const&)> const&)
    /* Container::AddColourPicker(char const*, bool, math::Range<float>,
   std::function<void (Event const&)> const&) */

    void Container::AddColourPicker(undefined8 param_1_00, Container* this, char* param_1, undefined1 param_2,
                                    function* param_5) {
        Control* this_00;
        undefined8 local_58;
        char* local_50;
        shared_ptr local_48;
        shared_ptr local_38;
        bool local_21;

        local_58 = param_1_00;
        local_50 = param_1;
        local_21 = (bool)param_2;
        make_shared<ColourPicker, char const*&, bool&, math::Range<float>&>((jag*)&local_48, &local_50, &local_21,
                                                                            (Range*)&local_58);
        new (&local_38) shared_ptr<oldscape::dash3d::Decor>(&local_48);
        Add(this, &local_38);
        local_38.~shared_ptr();
        this_00 = (Control*)shared_ptr<ColourPicker>::operator->((shared_ptr<ColourPicker>*)&local_48);
        this_00->SetHandler(param_5);
        local_48.~shared_ptr();
    }

    // 0x100a43990, 272 bytes, placed by class name
    // Container::AddColourPickerHDR(char const*, math::Vector3T<float>*, float*, math::Range<float>, math::Range<float>)
    void Container::AddColourPickerHDR(undefined8 param_1_00, undefined8 param_2_00, Container* this, char* param_1,
                                       undefined8 param_2, undefined8 param_3) {
        Control* this_00;
        undefined8 local_90;
        undefined8 local_88;
        char* local_80;
        shared_ptr local_78;
        shared_ptr local_68[3];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_68[0]._0_1_ = 0;
        local_90 = param_1_00;
        local_88 = param_2_00;
        local_80 = param_1;
        make_shared<ColourPicker, char const*&, bool&, math::Range<float>&, math::Range<float>&>(
            (jag*)&local_78, &local_80, (bool*)local_68, (Range*)&local_90, (Range*)&local_88);
        new (local_68) shared_ptr<oldscape::dash3d::Decor>(&local_78);
        Add(this, local_68);
        local_68->~shared_ptr();
        this_00 = (Control*)shared_ptr<ColourPicker>::operator->((shared_ptr<ColourPicker>*)&local_78);
        std::function<void(Event_const&)>::function<Container::AddColourPickerHDR(char const*, math::Vector3T<float>*,
                                                                                  float*, math::Range<float>,
                                                                                  math::Range<float>)::__13,
                                                    void>(local_68, param_2, param_3);
        this_00->SetHandler(local_68);
        std::function<void(Event_const&)>::~function((function<void(Event_const&)>*)local_68);
        local_78.~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100a43b70, 272 bytes, placed by class name
    // Container::AddColourPickerHDR(char const*, math::Vector4T<float>*, float*, math::Range<float>, math::Range<float>)
    void Container::AddColourPickerHDR(undefined8 param_1_00, undefined8 param_2_00, Container* this, char* param_1,
                                       undefined8 param_2, undefined8 param_3) {
        Control* this_00;
        undefined8 local_90;
        undefined8 local_88;
        char* local_80;
        shared_ptr local_78;
        shared_ptr local_68[3];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_68[0]._0_1_ = 1;
        local_90 = param_1_00;
        local_88 = param_2_00;
        local_80 = param_1;
        make_shared<ColourPicker, char const*&, bool&, math::Range<float>&, math::Range<float>&>(
            (jag*)&local_78, &local_80, (bool*)local_68, (Range*)&local_90, (Range*)&local_88);
        new (local_68) shared_ptr<oldscape::dash3d::Decor>(&local_78);
        Add(this, local_68);
        local_68->~shared_ptr();
        this_00 = (Control*)shared_ptr<ColourPicker>::operator->((shared_ptr<ColourPicker>*)&local_78);
        std::function<void(Event_const&)>::function<Container::AddColourPickerHDR(char const*, math::Vector4T<float>*,
                                                                                  float*, math::Range<float>,
                                                                                  math::Range<float>)::__14,
                                                    void>(local_68, param_2, param_3);
        this_00->SetHandler(local_68);
        std::function<void(Event_const&)>::~function((function<void(Event_const&)>*)local_68);
        local_78.~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100a43c90, 176 bytes, placed by class name
    // Container::AddColourPickerHDR(char const*, bool, math::Range<float>, math::Range<float>, std::function<void (Event const&)> const&)
    /* Container::AddColourPickerHDR(char const*, bool, math::Range<float>,
   math::Range<float>, std::function<void (Event const&)> const&) */

    void Container::AddColourPickerHDR(undefined8 param_1_00, undefined8 param_2_00, Container* this, char* param_1,
                                       undefined1 param_2, function* param_6) {
        Control* this_00;
        undefined8 local_60;
        undefined8 local_58;
        char* local_50;
        shared_ptr local_48;
        shared_ptr local_38;
        bool local_21;

        local_60 = param_1_00;
        local_58 = param_2_00;
        local_50 = param_1;
        local_21 = (bool)param_2;
        make_shared<ColourPicker, char const*&, bool&, math::Range<float>&, math::Range<float>&>(
            (jag*)&local_48, &local_50, &local_21, (Range*)&local_60, (Range*)&local_58);
        new (&local_38) shared_ptr<oldscape::dash3d::Decor>(&local_48);
        Add(this, &local_38);
        local_38.~shared_ptr();
        this_00 = (Control*)shared_ptr<ColourPicker>::operator->((shared_ptr<ColourPicker>*)&local_48);
        this_00->SetHandler(param_6);
        local_48.~shared_ptr();
    }

    // 0x100a43d40, 128 bytes, placed by class name
    // Container::AddLabel(char const*)
    void Container::AddLabel(char* param_1) {
        shared_ptr local_40;
        char* local_30;
        shared_ptr local_28;

        local_30 = param_1;
        make_shared<Label, char const*&>((jag*)&local_40, &local_30);
        new (&local_28) shared_ptr<oldscape::dash3d::Decor>(&local_40);
        Add(this, &local_28);
        local_28.~shared_ptr();
        local_40.~shared_ptr();
    }

    // 0x100a43e60, 160 bytes, placed by class name
    // Container::AddSwatch(float*, float*, float*)
    void Container::AddSwatch(float* param_1, float* param_2, float* param_3) {
        shared_ptr local_50;
        float* local_40;
        float* local_38;
        float* local_30;
        shared_ptr local_28;

        local_28._0_8_ = 0;
        local_40 = param_1;
        local_38 = param_2;
        local_30 = param_3;
        make_shared<Swatch, float*&, float*&, float*&, decltype(nullptr)>(
            (jag*)&local_50, &local_40, &local_38, &local_30, (_func_decltype_nullptr**)&local_28);
        new (&local_28) shared_ptr<oldscape::dash3d::Decor>(&local_50);
        Add(this, &local_28);
        local_28.~shared_ptr();
        local_50.~shared_ptr();
    }

    // 0x100a43f00, 176 bytes, placed by class name
    // Container::AddSwatch(float*, float*, float*, std::function<void (Event const&)> const&)
    /* Container::AddSwatch(float*, float*, float*, std::function<void (Event
   const&)> const&) */

    void Container::AddSwatch(float* param_1, float* param_2, float* param_3, function* param_4) {
        Control* this_00;
        float* local_58;
        float* local_50;
        float* local_48;
        shared_ptr local_40;
        shared_ptr local_30;

        local_30._0_8_ = 0;
        local_58 = param_1;
        local_50 = param_2;
        local_48 = param_3;
        make_shared<Swatch, float*&, float*&, float*&, decltype(nullptr)>(
            (jag*)&local_40, &local_58, &local_50, &local_48, (_func_decltype_nullptr**)&local_30);
        new (&local_30) shared_ptr<oldscape::dash3d::Decor>(&local_40);
        Add(this, &local_30);
        local_30.~shared_ptr();
        this_00 = (Control*)shared_ptr<Swatch>::operator->((shared_ptr<Swatch>*)&local_40);
        this_00->SetHandler(param_4);
        local_40.~shared_ptr();
    }

    // 0x100a43fb0, 144 bytes, placed by class name
    // Container::AddSwatch(float*, float*, float*, float*)
    void Container::AddSwatch(float* param_1, float* param_2, float* param_3, float* param_4) {
        shared_ptr local_58;
        float* local_48;
        float* local_40;
        float* local_38;
        float* local_30;
        shared_ptr local_28;

        local_48 = param_1;
        local_40 = param_2;
        local_38 = param_3;
        local_30 = param_4;
        make_shared<Swatch, float*, float*, float*, float*>((jag*)&local_58, &local_48, &local_40, &local_38,
                                                            &local_30);
        new (&local_28) shared_ptr<oldscape::dash3d::Decor>(&local_58);
        Add(this, &local_28);
        local_28.~shared_ptr();
        local_58.~shared_ptr();
    }

    // 0x100a44040, 176 bytes, placed by class name
    // Container::AddSwatch(float*, float*, float*, float*, std::function<void (Event const&)> const&)
    /* Container::AddSwatch(float*, float*, float*, float*, std::function<void
   (Event const&)> const&) */

    void Container::AddSwatch(float* param_1, float* param_2, float* param_3, float* param_4, function* param_5) {
        Control* this_00;
        float* local_60;
        float* local_58;
        float* local_50;
        float* local_48;
        shared_ptr local_40;
        shared_ptr local_30;

        local_60 = param_1;
        local_58 = param_2;
        local_50 = param_3;
        local_48 = param_4;
        make_shared<Swatch, float*, float*, float*, float*>((jag*)&local_40, &local_60, &local_58, &local_50,
                                                            &local_48);
        new (&local_30) shared_ptr<oldscape::dash3d::Decor>(&local_40);
        Add(this, &local_30);
        local_30.~shared_ptr();
        this_00 = (Control*)shared_ptr<Swatch>::operator->((shared_ptr<Swatch>*)&local_40);
        this_00->SetHandler(param_5);
        local_40.~shared_ptr();
    }

    // 0x100a440f0, 32 bytes, placed by class name
    // Container::AddGroup(char const*)
    Container* Container::AddGroup(char* param_1) {
        AddGroup((char*)this, SUB81(param_1, 0));
        return this;
    }

    // 0x100a44110, 128 bytes, placed by class name
    // Container::AddGroup(char const*, bool)
    char* Container::AddGroup(char* param_1, bool param_2) {
        undefined7 in_register_00000031;
        char* local_38;
        shared_ptr local_30;
        bool local_19;

        make_shared<Container, char const*&, bool&>((jag*)param_1, &local_38, &local_19);
        new (&local_30) shared_ptr<oldscape::dash3d::Decor>(param_1);
        Add((Container*)CONCAT71(in_register_00000031, param_2), &local_30);
        local_30.~shared_ptr();
        return param_1;
    }

    // 0x100a44240, 272 bytes, placed by class name
    // Container::SaveSettings(TweakSettingsValue&)
    void Container::SaveSettings(TweakSettingsValue* param_1) {
        Control* this_00;
        char* pcVar1;
        undefined8 uVar2;
        bool bVar3;
        shared_ptr<Control>* this_01;
        long* plVar4;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        eastl::string local_70[32];
        allocator local_50[8];
        list<console::Line, eastl::allocator> local_48[8];
        list<console::Line, eastl::allocator> local_40[8];
        TweakSettingsValue* local_38;

        local_38 = param_1;
        eastl::list<console::Line, eastl::allocator>::begin(local_48);
        eastl::list<console::Line, eastl::allocator>::end(local_40);
        bVar3 = eastl::operator!=((eastl*)local_48, (hashtable_iterator_base*)local_40, extraout_RDX);
        if (bVar3) {
            local_38 = (TweakSettingsValue*)&local_38->field_32;
            do {
                this_01 =
                    (shared_ptr<Control>*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)local_48);
                this_00 = (Control*)shared_ptr<Control>::operator->(this_01);
                pcVar1 = (char*)this_00->GetValue();
                eastl::allocator::allocator(local_50, "EASTL basic_string");
                eastl::string::basic_string(local_70, pcVar1, local_50);
                uVar2 = eastl::map<eastl::string, TweakSettingsValue, eastl::less<eastl::string>, eastl::allocator>::
                operator[](
                    (map<eastl::string, TweakSettingsValue, eastl::less<eastl::string>, eastl::allocator>*)local_38,
                    (basic_string*)local_70);
                eastl::string::~basic_string(local_70);
                plVar4 = (long*)shared_ptr<Control>::operator->(this_01);
                (**(code**)(*plVar4 + 184))(plVar4, uVar2);
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_48);
                bVar3 = eastl::operator!=((eastl*)local_48, (hashtable_iterator_base*)local_40, extraout_RDX_00);
            } while (bVar3);
        }
    }

    // 0x100a44420, 352 bytes, placed by class name
    // Container::LoadSettings(TweakSettingsValue const&)
    undefined8 Container::LoadSettings(TweakSettingsValue* param_1) {
        bool bVar1;
        basic_string* pbVar3;
        shared_ptr<Control>* this_00;
        Control* this_01;
        value_type* pvVar4;
        long* plVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        undefined8 uVar6;
        undefined1 auVar7[16];
        list<console::Line, eastl::allocator> local_58[8];
        list<console::Line, eastl::allocator> local_50[8];
        undefined1* local_48;
        undefined8 local_40;
        undefined8 local_38;

        local_38 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                 eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                 true>::begin();
        auVar7 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        local_40 = auVar7._0_8_;
        bVar1 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)&local_40, auVar7._8_8_);
        if (bVar1) {
            local_48 = &field_216;
            uVar6 = 0;
            do {
                pbVar3 = (basic_string*)eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_38);
                eastl::list<console::Line, eastl::allocator>::begin(local_58);
                eastl::list<console::Line, eastl::allocator>::end(local_50);
                bVar1 = eastl::operator!=((eastl*)local_58, (hashtable_iterator_base*)local_50, extraout_RDX_00);
                if (bVar1) {
                    do {
                        this_00 = (shared_ptr<Control>*)
                            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)local_58);
                        this_01 = (Control*)shared_ptr<Control>::operator->(this_00);
                        pvVar4 = (value_type*)this_01->GetValue();
                        bVar1 = eastl::operator==(pvVar4, pbVar3);
                        if (bVar1) {
                            plVar5 = (long*)shared_ptr<Control>::operator->(this_00);
                            if ((**(code**)(*plVar5 + 176))(plVar5, pbVar3 + 32) != '\0') {
                                uVar6 = 1;
                            }
                        }
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)local_58);
                        bVar1 =
                            eastl::operator!=((eastl*)local_58, (hashtable_iterator_base*)local_50, extraout_RDX_01);
                    } while (bVar1);
                }
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_38);
                bVar1 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)&local_40, extraout_RDX);
            } while (bVar1);
        } else {
            uVar6 = 0;
        }
        return uVar6;
    }

    // 0x100a5ab20, 96 bytes, placed by class name
    // Container::MakeCollapsable()::$_9::operator()(Event const&) const
    /* Container::MakeCollapsable()::$_9::TEMPNAMEPLACEHOLDERVALUE(Event const&)
   const */

    void Container::MakeCollapsable()::$_9::operator()(Event* param_1) {
        int iVar1;
        long lVar2;
        Control* this_00;
        char* pcVar3;

        lVar2 = *(long*)this;
        iVar1 = param_1->field_16;
        if (iVar1 == 2) {
            *(byte*)(lVar2 + 294) = *(byte*)(lVar2 + 294) ^ 1;
        }
        if (iVar1 - 1U < 2) {
            pcVar3 = "-";
            if (*(char*)(lVar2 + 294) == '\0') {
                pcVar3 = "+";
            }
            this_00 = (Control*)shared_ptr<Button>::operator->((shared_ptr<Button>*)(lVar2 + 272));
            this_00->SetText(pcVar3);
        }
    }

    // 0x100a5b610, 80 bytes, placed by class name
    // Container::AddCheckBox(char const*, bool&)::$_10::operator()(Event const&) const
    /* Container::AddCheckBox(char const*,
   bool&)::$_10::TEMPNAMEPLACEHOLDERVALUE(Event const&) const */

    void Container::AddCheckBox(char const*, bool&)::$_10::operator()(Event* param_1) {
        undefined1 uVar1;
        long* plVar2;

        if (param_1->field_16 == 3) {
            plVar2 = (long*)shared_ptr<Control>::operator->((shared_ptr<Control>*)param_1);
            uVar1 = (**(code**)(*plVar2 + 120))(plVar2);
            **(undefined1**)this = uVar1;
        } else if (param_1->field_16 == 1) {
            plVar2 = (long*)shared_ptr<Control>::operator->((shared_ptr<Control>*)param_1);
            (**(code**)(*plVar2 + 128))(plVar2, **(undefined1**)this);
        }
    }

    // 0x100a68b10, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.8
    void ___cxx_global_var_init_8(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&Tweaky::NullTweaky) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5308, &Tweaky::NullTweaky, 4294967296);
    }

} // namespace jag::tweak

namespace jag {
    // 0x100a3bb30, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<tweak::Button>::type make_shared<tweak::Button, char const*&>(char const*&)
    jag* make_shared<tweak::Button, char const*&>(char** param_1) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_34;
        Button* local_30[2];

        pvVar1 = (void*)aligned_alloc(256, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_30[0] = placement_new<tweak::Button, char const*&>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = (ref_counter_base*)placement_new<ref_counter_shared<tweak::Button>, int, tweak::Button*&>(
                pvVar1, &local_34, local_30);
            shared_ptr_do_enable_shared_from_this<tweak::Button>(prVar2, local_30[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x100a3bcf0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<tweak::CheckBox>::type make_shared<tweak::CheckBox, char const*&, bool&>(char const*&, bool&)
    jag* make_shared<tweak::CheckBox, char const*&, bool&>(char** param_1, bool* param_2) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_3c;
        CheckBox* local_38[2];

        pvVar1 = (void*)aligned_alloc(256, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_38[0] =
                placement_new<tweak::CheckBox, char const*&, bool&>((void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = (ref_counter_base*)placement_new<ref_counter_shared<tweak::CheckBox>, int, tweak::CheckBox*&>(
                pvVar1, &local_3c, local_38);
            shared_ptr_do_enable_shared_from_this<tweak::CheckBox>(prVar2, local_38[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x100a3be90, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<tweak::CheckBox>::type make_shared<tweak::CheckBox, char const*&>(char const*&)
    jag* make_shared<tweak::CheckBox, char const*&>(char** param_1) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_34;
        CheckBox* local_30[2];

        pvVar1 = (void*)aligned_alloc(256, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_30[0] = placement_new<tweak::CheckBox, char const*&>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = (ref_counter_base*)placement_new<ref_counter_shared<tweak::CheckBox>, int, tweak::CheckBox*&>(
                pvVar1, &local_34, local_30);
            shared_ptr_do_enable_shared_from_this<tweak::CheckBox>(prVar2, local_30[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x100a3bfd0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<tweak::EditField>::type make_shared<tweak::EditField, char const*&, int&>(char const*&, int&)
    jag* make_shared<tweak::EditField, char const*&, int&>(char** param_1, int* param_2) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_3c;
        EditField* local_38[2];

        pvVar1 = (void*)aligned_alloc(592, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_38[0] =
                placement_new<tweak::EditField, char const*&, int&>((void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = (ref_counter_base*)placement_new<ref_counter_shared<tweak::EditField>, int, tweak::EditField*&>(
                pvVar1, &local_3c, local_38);
            shared_ptr_do_enable_shared_from_this<tweak::EditField>(prVar2, local_38[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x100a3c150, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<tweak::Enum>::type make_shared<tweak::Enum, char const*&, StringEnum const*&, int*&>(char const*&, StringEnum const*&, int*&)
    jag* make_shared<tweak::Enum, char const*&, StringEnum_const*&, int*&>(char** param_1, StringEnum** param_2,
                                                                           int** param_3) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_44;
        Enum* local_40[2];

        pvVar1 = (void*)aligned_alloc(368, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_40[0] = placement_new<tweak::Enum, char const*&, StringEnum_const*&, int*&>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3);
            local_44 = 1;
            prVar2 = (ref_counter_base*)placement_new<ref_counter_shared<tweak::Enum>, int, tweak::Enum*&>(
                pvVar1, &local_44, local_40);
            shared_ptr_do_enable_shared_from_this<tweak::Enum>(prVar2, local_40[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100a3c770, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<tweak::Swatch>::type make_shared<tweak::Swatch, float*&, float*&, float*&, decltype(nullptr)>(float*&, float*&, float*&, decltype(nullptr)&&)
    jag* make_shared<tweak::Swatch, float*&, float*&, float*&, decltype(nullptr)>(float** param_1, float** param_2,
                                                                                  float** param_3,
                                                                                  _func_decltype_nullptr** param_4) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_44;
        Swatch* local_40[2];

        pvVar1 = (void*)aligned_alloc(368, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_40[0] = placement_new<tweak::Swatch, float*&, float*&, float*&, decltype(nullptr)>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4);
            local_44 = 1;
            prVar2 = (ref_counter_base*)placement_new<ref_counter_shared<tweak::Swatch>, int, tweak::Swatch*&>(
                pvVar1, &local_44, local_40);
            shared_ptr_do_enable_shared_from_this<tweak::Swatch>(prVar2, local_40[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100a3c8c0, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<tweak::Swatch>::type make_shared<tweak::Swatch, float*&, float*&, float*&, float*&>(float*&, float*&, float*&, float*&)
    /* shared_ptr_if_not_array<tweak::Swatch>::type make_shared<tweak::Swatch,
   float*, float*, float*, float*>(float*&&, float*&&, float*&&, float*&&) */

    jag* make_shared<tweak::Swatch, float*, float*, float*, float*>(float** param_1, float** param_2, float** param_3,
                                                                    float** param_4) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_44;
        Swatch* local_40[2];

        pvVar1 = (void*)aligned_alloc(368, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_40[0] = placement_new<tweak::Swatch, float*, float*, float*, float*>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4);
            local_44 = 1;
            prVar2 = (ref_counter_base*)placement_new<ref_counter_shared<tweak::Swatch>, int, tweak::Swatch*&>(
                pvVar1, &local_44, local_40);
            shared_ptr_do_enable_shared_from_this<tweak::Swatch>(prVar2, local_40[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100a3c9f0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<tweak::Container>::type make_shared<tweak::Container, char const*&>(char const*&)
    jag* make_shared<tweak::Container, char const*&>(char** param_1) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_34;
        Container* local_30[2];

        pvVar1 = (void*)aligned_alloc(336, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_30[0] = placement_new<tweak::Container, char const*&>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = (ref_counter_base*)placement_new<ref_counter_shared<tweak::Container>, int, tweak::Container*&>(
                pvVar1, &local_34, local_30);
            shared_ptr_do_enable_shared_from_this<tweak::Container>(prVar2, local_30[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag

namespace jag::math {
    // 0x100a3d1b0, 16 bytes, inline, placed by debug map only (low confidence)
    // Multiply(unsigned int, double)
    void Multiply(uint param_1, double param_2) {
        Multiply(param_1, (float)param_2);
    }

} // namespace jag::math

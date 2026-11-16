// libs/tweaky/Tweaky_Container.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.tweaky

#include "Tweaky_Container.h"
#include "Tweaky.h"

namespace jag::tweak {
    // 0x100f460c8
    int32_t Tweaky::m_controlMinHeight = 15;

    // 0x103bc2180, set at startup by ___cxx_global_var_init.8
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> Tweaky::NullTweaky =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100a3b9d0
    void Container::Add(const shared_ptr<Control>& control) {
        enable_shared_from_this<PathingEntity> local_58;

        auto pCVar2 = control.operator->();
        auto local_38 = pCVar2->GetTweaky();
        bool cVar1 = local_38.expired();
        if (!cVar1) {
            LogAssert(
                "control.GetTweaky().expired()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/tweaky/Tweaky_Container.cpp", 58,
                "Attempted to add same control to Tweaky twice");
        }
        auto plVar3 = control.operator->();
        weak_ptr<oldscape::dash3d::Decor> local_68(field_104);
        (**(void (**)(...))(*plVar3 + 232))(plVar3, &local_68);
        pCVar2 = (Control*)control.operator->();
        local_58.shared_from_this();
        static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_38);
        weak_ptr<oldscape::dash3d::Decor> local_48(local_38);
        pCVar2->SetParent(&local_48);
        field_216.push_back(control);
    }

    // 0x100a3bc10
    void Tweaky::AddCheckBox(const char* str, bool& arg2) {
        ReturnValue local_68;

        char* local_70 = str;
        make_shared<CheckBox, char const*&, bool&>(&local_68, &local_70, arg2);
        shared_ptr<oldscape::dash3d::Decor> local_58(&local_68);
        Add(local_58);
        auto this_00 = local_68.operator->();
        std::function<void(Event const&)>::function<Tweaky::AddCheckBox(char const*, bool&)::__2, void>(
            (function<void(Event const&)>*)&local_58, (__2*)arg2);
        this_00->SetHandler(local_58);
    }

    // 0x100a3bdf0
    void Tweaky::AddCheckBox(const char* str, std::function<void(Event const&)> const& callback) {
        ReturnValue local_40;

        char* local_48 = str;
        make_shared<CheckBox, char const*&>(&local_40, &local_48);
        shared_ptr<oldscape::dash3d::Decor> local_30(&local_40);
        Add(local_30);
        ((Control*)local_40.operator->())->SetHandler(callback);
    }

    // 0x100a3bf30
    void Tweaky::AddEditField(const char* str, int arg2, std::function<void(Event const&)> const& callback) {
        ReturnValue local_48;

        char* local_50 = str;
        int local_24 = arg2;
        make_shared<EditField, char const*&, int&>(&local_48, &local_50, &local_24);
        shared_ptr<oldscape::dash3d::Decor> local_38(&local_48);
        Add(local_38);
        ((Control*)local_48.operator->())->SetHandler(callback);
    }

    // 0x100a3c0c0
    void Tweaky::AddEnum(const char* str, const StringEnum* stringEnum, int* arg3) {
        ReturnValue local_50;

        char* local_40 = str;
        StringEnum* local_38 = stringEnum;
        int* local_30 = arg3;
        make_shared<Enum, char const*&, StringEnum const*&, int*&>(&local_50, &local_40, &local_38, &local_30);
        shared_ptr<oldscape::dash3d::Decor> local_28(&local_50);
        Add(local_28);
    }

    // 0x100a3c200
    void Tweaky::AddEnum(const char* str, const StringEnum* stringEnum, int* arg3,
                         std::function<void(Event const&)> const& callback) {
        ReturnValue local_40;

        char* local_58 = str;
        StringEnum* local_50 = stringEnum;
        int* local_48 = arg3;
        make_shared<Enum, char const*&, StringEnum const*&, int*&>(&local_40, &local_58, &local_50, &local_48);
        shared_ptr<oldscape::dash3d::Decor> local_30(&local_40);
        Add(local_30);
        ((Control*)local_40.operator->())->SetHandler(callback);
    }

    // 0x100a3c2f0
    void Tweaky::AddSlider(const char* str, float arg2, float arg3, float arg4, int* arg5) {
        ReturnValue local_78;

        char* local_80 = str;
        float local_64 = arg2;
        float local_60 = arg3;
        float local_5c = arg4;
        make_shared<Slider, char const*&, float&, float&, float&>(&local_78, &local_80, &local_64, &local_60,
                                                                  &local_5c);
        shared_ptr<oldscape::dash3d::Decor> local_58(&local_78);
        Add(local_58);
        auto this_00 = local_78.operator->();
        std::function<void(Event const&)>::function<Tweaky::AddSlider(char const*, float, float, float, int*)::__3,
                                                    void>((function<void(Event const&)>*)&local_58, (__3*)arg5);
        this_00->SetHandler(local_58);
    }

    // 0x100a3c400
    void Tweaky::AddSlider(const char* str, float arg2, float arg3, float arg4, unsigned int* arg5) {
        ReturnValue local_78;

        char* local_80 = str;
        float local_64 = arg2;
        float local_60 = arg3;
        float local_5c = arg4;
        make_shared<Slider, char const*&, float&, float&, float&>(&local_78, &local_80, &local_64, &local_60,
                                                                  &local_5c);
        shared_ptr<oldscape::dash3d::Decor> local_58(&local_78);
        Add(local_58);
        auto this_00 = local_78.operator->();
        std::function<void(Event const&)>::function<
            Tweaky::AddSlider(char const*, float, float, float, unsigned int*)::__4, void>(
            (function<void(Event const&)>*)&local_58, (__4*)arg5);
        this_00->SetHandler(local_58);
    }

    // 0x100a3c510
    void Tweaky::AddSlider(const char* str, float arg2, float arg3, float arg4, float* arg5) {
        ReturnValue local_78;

        char* local_80 = str;
        float local_64 = arg2;
        float local_60 = arg3;
        float local_5c = arg4;
        make_shared<Slider, char const*&, float&, float&, float&>(&local_78, &local_80, &local_64, &local_60,
                                                                  &local_5c);
        shared_ptr<oldscape::dash3d::Decor> local_58(&local_78);
        Add(local_58);
        auto this_00 = local_78.operator->();
        std::function<void(Event const&)>::function<Tweaky::AddSlider(char const*, float, float, float, float*)::__5,
                                                    void>((function<void(Event const&)>*)&local_58, (__5*)arg5);
        this_00->SetHandler(local_58);
    }

    // 0x100a3c620
    void Tweaky::AddSlider(const char* str, float arg2, float arg3, float arg4,
                           std::function<void(Event const&)> const& callback) {
        ReturnValue local_50;

        char* local_58 = str;
        float local_2c = arg2;
        float local_28 = arg3;
        float local_24 = arg4;
        make_shared<Slider, char const*&, float&, float&, float&>(&local_50, &local_58, &local_2c, &local_28,
                                                                  &local_24);
        shared_ptr<oldscape::dash3d::Decor> local_40(&local_50);
        Add(local_40);
        ((Control*)local_50.operator->())->SetHandler(callback);
    }

    // 0x100a3c6d0
    void Tweaky::AddSwatch(float* arg1, float* arg2, float* arg3) {
        ReturnValue local_50;
        void* local_28[2];

        local_28[0] = nullptr;
        float* local_40 = arg1;
        float* local_38 = arg2;
        float* local_30 = arg3;
        make_shared<Swatch, float*&, float*&, float*&, decltype(nullptr)>(&local_50, &local_40, &local_38, &local_30,
                                                                          local_28);
        new (local_28) shared_ptr(&local_50);
        Add(*local_28);
    }

    // 0x100a3c830
    void Tweaky::AddSwatch(float* arg1, float* arg2, float* arg3, float* arg4) {
        ReturnValue local_58;

        float* local_48 = arg1;
        float* local_40 = arg2;
        float* local_38 = arg3;
        float* local_30 = arg4;
        make_shared<Swatch, float*, float*, float*, float*>(&local_58, &local_48, &local_40, &local_38, &local_30);
        shared_ptr<oldscape::dash3d::Decor> local_28(&local_58);
        Add(local_28);
    }

    // 0x100a3c980
    auto Tweaky::AddGroup(const char* str) {
        auto result;

        char* local_30 = str;
        make_shared<Container, char const*&>(&result, &local_30);
        shared_ptr<oldscape::dash3d::Decor> local_28(&result);
        Add(local_28);
        return result;
    }

    // 0x100a3ca90
    void Tweaky::Draw(int arg1, int arg2, int arg3, int arg4) {
        int iVar1;
        RT7Core* this_00;
        Placement placement;
        Placement placement_00;
        bool arg6;
        bool bVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        long* plVar8;
        uint32_t in_stack_ffffffffffffff6c;
        uint64_t in_stack_ffffffffffffff74;
        enable_shared_from_this<PathingEntity> local_70;
        uint8_t auStack_6c[20];
        int local_58;
        int local_50;
        int local_4c;
        int local_48;
        int local_44;
        shared_ptr<Container>* local_40;
        int local_38;
        int local_34;

        if (m_font->operator_cast_to_bool()) {
            local_70.shared_from_this();
            DetectTweakyShown();
            m_placement = arg1;
            field_108 = arg2;
            field_112 = arg3 + arg1;
            field_116 = arg4 + arg2;
            plVar8 = (long*)(*m_root).operator->();
            if ((**(void (**)(...))(*plVar8 + 40))(plVar8, &local_38, &local_34)) {
                field_112 = local_38 + arg1;
                field_116 = local_34 + arg2;
                local_40 = (shared_ptr<Container>*)m_root;
                local_48 = GetVisibleX();
                local_44 = local_38;
                local_50 = GetVisibleY();
                local_4c = local_34;
                new ((&local_70 - 24)) graphics::ClippingState(m_pRT7Core);
                this_00 = m_pRT7Core;
                iVar4 = GetVisibleX();
                iVar5 = GetVisibleY();
                this_00->SetClippingRectangle(arg1, arg2, iVar4, iVar5, true);
                plVar8 = (long*)(*local_40).operator->();
                (**(void (**)(...))(*plVar8 + 32))(plVar8, arg1, arg2);
                if (local_50 < local_4c) {
                    if (IsAttached()) {
                        local_40 = (shared_ptr<Container>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)arg1);
                        iVar4 = m_placement;
                        iVar5 = field_112;
                        iVar6 = GetVisibleX();
                        iVar1 = field_108;
                        iVar7 = GetVisibleY();
                        new ((auStack_6c + 12))
                            oldscape::dash3d::GridRect(iVar5 - 1, arg2, iVar4 + iVar6 - 1, iVar1 + iVar7);
                        iVar4 = local_58;
                        bVar3 = (bool)auStack_6c[12];
                        arg6 = (bool)GetVisibleY();
                        placement.field_4 = in_stack_ffffffffffffff6c;
                        placement.field_0 = field_132;
                        placement.field_8 = 0;
                        placement._12_8_ = in_stack_ffffffffffffff74;
                        DrawScrollBar(placement, bVar3, iVar4, 1, local_34, arg6);
                        arg1 = (int)local_40;
                    }
                }
                if (local_48 < local_44) {
                    if (IsAttached()) {
                        iVar4 = m_placement;
                        iVar5 = field_116;
                        iVar6 = GetVisibleX();
                        iVar1 = field_108;
                        iVar7 = GetVisibleY();
                        new ((auStack_6c + 12))
                            oldscape::dash3d::GridRect(arg1, iVar5 - 1, iVar4 + iVar6, iVar1 + iVar7 - 1);
                        bVar3 = (bool)GetVisibleX();
                        placement_00.field_4 = in_stack_ffffffffffffff6c;
                        placement_00.field_0 = field_136;
                        placement_00.field_8 = 0;
                        placement_00._12_8_ = in_stack_ffffffffffffff74;
                        DrawScrollBar(placement_00, (bool)auStack_6c[12], local_58, 0, local_38, bVar3);
                    }
                }
                ((&local_70 - 24))->~ClippingState();
            }
        }
    }

    // 0x100a3cd30
    void Tweaky::DetectTweakyShown() {
        long* plVar2;

        auto this_00 = BaseApp::GetAppInstance();
        unsigned long uVar1 = this_00->GetUniqueLoopID();
        if (field_96 + 1 < uVar1) {
            plVar2 = (long*)(*m_root).operator->();
            (**(void (**)(...))(*plVar2 + 80))(plVar2);
        }
        if (field_159 != '\0') {
            plVar2 = (long*)(*m_root).operator->();
            (**(void (**)(...))(*plVar2 + 88))(plVar2);
            field_159 = '\0';
        }
        field_96 = this_00->GetUniqueLoopID();
    }

    // 0x100a3cdf0
    void Tweaky::DrawScrollBar(Placement placement, bool arg2, int arg3, int arg4, int arg5, bool arg6) {
        int iVar1;
        GUIManager* this_00;
        int in_register_00000014;
        int arg2_00;
        uint64_t in_register_00000031;
        int iVar3;
        uint64_t in_register_00000089;

        int arg1 = (int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg2);
        int iVar2 = (int)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg6);
        if (arg5 - iVar2 != 0 && iVar2 <= arg5) {
            arg2_00 = (int)((uint64_t)in_register_00000031 >> 24);
            iVar3 = arg3 - arg1;
            if ((char)arg4 != '\0') {
                iVar3 = in_register_00000014 - arg2_00;
            }
            iVar1 = (iVar2 * iVar3) / arg5;
            iVar2 = ((iVar3 - iVar1) * placement.field_0) / (arg5 - iVar2);
            this_00 = m_pRT7Core->GetGUIManager();
            if ((char)placement.field_8 != '\0') {
                arg1 = arg1 - field_136;
                arg2_00 = arg2_00 - field_132;
                arg3 = arg3 - field_136;
                in_register_00000014 = in_register_00000014 - field_132;
            }
            this_00->AddElement(arg1, arg2_00, arg3, in_register_00000014, 255, 0.0, 0.0, 0.0, 0.0, nullptr, 0);
            if ((char)arg4 == '\0') {
                arg1 = arg1 + iVar2;
                arg3 = iVar1 + arg1;
            } else {
                arg2_00 = arg2_00 + iVar2;
                in_register_00000014 = iVar1 + arg2_00;
            }
            this_00->AddElement(arg1, arg2_00, arg3, in_register_00000014, 4294967295, 0.0, 0.0, 0.0, 0.0, nullptr, 0);
        }
    }

    // 0x100a3cf40
    void Tweaky::Clear() {
        long* plVar2;

        if (m_root->operator_cast_to_bool() != '\0') {
            plVar2 = (long*)(*m_root).operator->();
            (**(void (**)(...))(*plVar2 + 16))(plVar2);
        }
    }

    // 0x100a3cf80
    void Tweaky::DrawLine(int arg1, int arg2, int arg3, int arg4, bool arg5) {
        uint64_t in_register_00000089;

        if ((int)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg5) != 0) {
            arg1 = arg1 - field_136;
            arg3 = arg3 - field_136;
            arg2 = arg2 - field_132;
            arg4 = arg4 - field_132;
        }
        m_pRT7Core->GetGUIManager()->AddGeneralLine(arg1, arg2, arg3, arg4, 1.0, m_colour, 1, false);
    }

    // 0x100a3d030
    void Tweaky::DrawRect(int arg1, int arg2, int arg3, int arg4, bool arg5) {
        uint64_t in_register_00000089;
        double local_40;

        auto this_00 = m_pRT7Core->GetGUIManager();
        double arg2_00 = 0.6;
        if ((int)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg5) == 0) {
            local_40 = 0.6;
            arg2_00 = 1.2;
        } else {
            local_40 = 1.2;
        }
        unsigned int arg5_00 = math::Multiply(m_colour, arg2_00);
        unsigned int arg5_01 = math::Multiply(m_colour, local_40);
        this_00->AddColouredRectangle(arg1 - field_136, arg2 - field_132, arg3, 1, arg5_00, 1);
        this_00->AddColouredRectangle(arg1 - field_136, arg2 - field_132, 1, arg4, arg5_00, 1);
        this_00->AddColouredRectangle(arg1 - field_136, (arg4 + arg2) - field_132, arg3 + 1, 1, arg5_01, 1);
        this_00->AddColouredRectangle((arg3 + arg1) - field_136, arg2 - field_132, 1, arg4, arg5_01, 1);
    }

    // 0x100a3d1c0
    void Tweaky::FillRect(int arg1, int arg2, int arg3, int arg4) {
        m_pRT7Core->GetGUIManager()->AddColouredRectangle(arg1 - field_136, arg2 - field_132, arg3, arg4, m_colour, 1);
    }

    // 0x100a3d230
    void Tweaky::GetSize(int& arg1, int& arg2) const {
        long* plVar1 = (long*)(*m_root).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1, arg2);
    }

    // 0x100a3d260
    char Tweaky::GetTextSize(int& arg1, int& arg2, StringView stringView, int arg4) {
        int* piVar1;
        int* piVar2;
        uint8_t bVar3;
        uint8_t bVar4;
        int iVar5;
        int iVar6;
        Layout* this_00;
        shared_ptr<graphics::FontMetrics>* this_01;
        FontMetrics* fontMetrics;
        TextProperties local_a0;
        StringView local_78;
        StringView local_68;
        uint32_t local_40;
        TextFlags local_38;

        uint8_t* this_02 = m_font;
        return local_39 = this_02->operator_cast_to_bool();
        if (local_39 != '\0') {
            this_00 = (Layout*)(*this_02).operator->();
            this_01 = (shared_ptr<graphics::FontMetrics>*)this_00->SSOBeginPtr();
            fontMetrics = (FontMetrics*)**this_01;
            local_78 = StringView(*stringView);
            iVar5 = graphics::FontHelpers::GetStringWidth(&local_78, *fontMetrics, true);
            bVar3 = fontMetrics->GetMaxAscent();
            bVar4 = fontMetrics->GetMaxDescent();
            piVar2 = arg2;
            piVar1 = arg1;
            iVar6 = (unsigned int)bVar4 + (unsigned int)bVar3;
            if ((0 < arg4) && (arg4 < iVar5)) {
                local_40 = 1;
                local_38 = graphics::TextFlags(&local_40);
                local_a0 = graphics::TextProperties(*this_02, local_38[0]);
                local_68 = StringView(*stringView);
                iVar6 = graphics::FontHelpers::PredictHeightAndLines(&local_68, arg4, local_a0);
                iVar5 = arg4;
            }
            *piVar1 = iVar5;
            *piVar2 = iVar6;
        }
        return local_39;
    }

    // 0x100a3d390
    unsigned int Tweaky::GetMinControlHeight() {
        Layout* pLVar3 = (Layout*)(*m_font).operator->();
        auto psVar4 = pLVar3->SSOBeginPtr();
        FontMetrics* pFVar5 = (FontMetrics*)(*psVar4).operator->();
        uint8_t bVar1 = pFVar5->GetMaxAscent();
        pLVar3 = (Layout*)(*m_font).operator->();
        psVar4 = (shared_ptr<graphics::FontMetrics>*)pLVar3->SSOBeginPtr();
        pFVar5 = (FontMetrics*)(*psVar4).operator->();
        uint8_t bVar2 = pFVar5->GetMaxDescent();
        unsigned int local_1c = (unsigned int)bVar2 + (unsigned int)bVar1;
        auto puVar6 = std::max<unsigned int>(local_1c, m_controlMinHeight);
        return *puVar6;
    }

    // 0x100a3d420
    int Tweaky::GetTextCenterYOffset(unsigned int arg1) {
        Layout* this_00 = (Layout*)(*m_font).operator->();
        auto this_01 = this_00->SSOBeginPtr();
        uint8_t bVar1 = ((FontMetrics*)(*this_01).operator->())->GetUpperCaseAscent();
        return ((arg1 >> 1) - (unsigned int)bVar1) + 2;
    }

    // 0x100a3d460
    uint64_t Tweaky::HandleMouseDown(float arg1, float arg2) {
        long* plVar2;
        uint64_t uVar3;

        field_120 = 0;
        bool cVar1 = IsInsideVisibleArea((int)arg1, (int)arg2);
        if (!cVar1) {
            ClearFocus();
            uVar3 = 0;
        } else {
            plVar2 = (long*)(*m_root).operator->();
            cVar1 = (**(void (**)(...))(*plVar2 + 48))((float)field_136 + arg1, (float)field_132 + arg2, plVar2, 1);
            uVar3 = 1;
            if (!cVar1) {
                field_124 = arg1;
                field_128 = arg2;
                field_120 = 1;
            }
        }
        return uVar3;
    }

    // 0x100a3d570
    void Tweaky::ClearFocus() {
        long* plVar2;
        shared_ptr local_28;

        GetFocus((ReturnValue*)&local_28, this);
        if (shared_ptr::operator_cast_to_bool(&local_28) != '\0') {
            plVar2 = (long*)local_28.operator->();
            (**(void (**)(...))(*plVar2 + 24))(plVar2, 0);
            field_32.reset();
        }
    }

    // 0x100a3d5e0
    unsigned long Tweaky::HandleMouseMove(float arg1, float arg2) {
        int iVar2;
        int iVar3;
        ShaderVariablePrecision SVar4;
        long* plVar5;
        unsigned long uVar6;
        float fVar8;
        float fVar9;
        enable_shared_from_this<PathingEntity> local_60;
        int local_3c;
        float local_38;
        float local_34;

        local_60.shared_from_this();
        uint64_t uVar7 = (uint64_t)((unsigned long)this >> 8);
        if (field_120 != '\0') {
            local_34 = field_124;
            local_38 = field_128;
            plVar5 = (long*)(*m_root).operator->();
            (**(void (**)(...))(*plVar5 + 40))(plVar5, &local_50, &local_3c);
            fVar8 = local_34 - arg1;
            fVar9 = local_38 - arg2;
            iVar2 = GetVisibleX();
            iVar3 = GetVisibleY();
            SVar4 = eastl::min<graphics::GraphicsQuality>(local_50._0_4_ - iVar2, (int)fVar8 + field_136);
            iVar2 = eastl::max<int>(0, SVar4);
            field_136 = iVar2;
            SVar4 = eastl::min<graphics::GraphicsQuality>(local_3c - iVar3, (int)fVar9 + field_132);
            iVar2 = eastl::max<int>(0, SVar4);
            field_132 = iVar2;
            field_124 = arg1;
            field_128 = arg2;
            uVar6 = (((uint64_t)uVar7 << 8) | (uint8_t)1);
            goto LAB_100a3d738;
        }
        shared_ptr local_50 = field_32.lock();
        bool cVar1 = shared_ptr::operator_cast_to_bool(&local_50);
        if (!cVar1) {
        LAB_100a3d72d:
            uVar6 = 0;
        } else {
            plVar5 = (long*)local_50.operator->();
            cVar1 = (**(void (**)(...))(*plVar5 + 56))((float)field_136 + arg1, (float)field_132 + arg2, plVar5);
            uVar6 = (((uint64_t)uVar7 << 8) | (uint8_t)1);
            if (!cVar1)
                goto LAB_100a3d72d;
        }
    LAB_100a3d738:
        return uVar6 & 4294967295;
    }

    // 0x100a3d780
    uint64_t Tweaky::HandleMouseOver(float arg1, float arg2) {
        uint8_t* this_00;
        long* plVar2;
        MouseButton in_ESI;

        if (!(nullptr->IsMouseDown(in_ESI))) {
            if (IsInsideVisibleArea((int)arg1, (int)arg2)) {
                this_00 = m_root;
                if (((Control*)(*this_00).operator->())
                        ->BoundsCheck((float)field_136 + arg1, (float)field_132 + arg2)) {
                    plVar2 = (long*)(*this_00).operator->();
                    (**(void (**)(...))(*plVar2 + 224))(plVar2, 1);
                    plVar2 = (long*)(*this_00).operator->();
                    (**(void (**)(...))(*plVar2 + 64))((float)field_136 + arg1, (float)field_132 + arg2, plVar2);
                    return 1;
                }
            }
            plVar2 = (long*)(*m_root).operator->();
            (**(void (**)(...))(*plVar2 + 224))(plVar2, 0);
        }
        return 0;
    }

    // 0x100a3d8d0
    uint64_t Tweaky::HandleMouseUp(float arg1, float arg2) {
        long* plVar2;
        enable_shared_from_this<PathingEntity> local_38;
        shared_ptr local_28;

        if (field_120 == '\0') {
            local_38.shared_from_this();
            local_28 = field_32.lock();
            if (shared_ptr::operator_cast_to_bool(&local_28)) {
                plVar2 = (long*)local_28.operator->();
                if ((**(void (**)(...))(*plVar2 + 48))((float)field_136 + arg1, (float)field_132 + arg2, plVar2, 0)) {
                    return 1;
                }
            }
            ClearFocus();
        } else {
            field_120 = 0;
        }
        return 0;
    }

    // 0x100a3d9b0
    uint32_t Tweaky::HandleMouseWheel(float arg1, float arg2, float arg3) {
        long* plVar3;
        enable_shared_from_this<PathingEntity> local_48;

        uint32_t uVar2 = IsInsideVisibleArea((int)arg1, (int)arg2);
        if ((char)uVar2 == '\0') {
            return uVar2;
        }
        local_48.shared_from_this();
        shared_ptr local_38 = field_32.lock();
        bool cVar1 = shared_ptr::operator_cast_to_bool(&local_38);
        if (cVar1) {
            cVar1 = ((Control*)local_38.operator->())->BoundsCheck(arg1, arg2);
            if (cVar1) {
                plVar3 = (long*)local_38.operator->();
                cVar1 = (**(void (**)(...))(*plVar3 + 72))(arg1, arg2, arg3, plVar3);
                if (cVar1)
                    goto LAB_100a3da68;
            }
        }
        field_132 = field_132 + (int)arg3 * -20;
        ValidateScroll();
    LAB_100a3da68:
        return uVar2;
    }

    // 0x100a3dab0
    void Tweaky::ValidateScroll() {
        int local_20;
        int local_1c;

        long* plVar4 = (long*)(*m_root).operator->();
        (**(void (**)(...))(*plVar4 + 40))(plVar4, &local_20, &local_1c);
        int iVar1 = GetVisibleX();
        int iVar2 = GetVisibleY();
        auto SVar3 = eastl::min<graphics::GraphicsQuality>(local_20 - iVar1, field_136);
        iVar1 = eastl::max<int>(0, SVar3);
        field_136 = iVar1;
        SVar3 = eastl::min<graphics::GraphicsQuality>(local_1c - iVar2, field_132);
        iVar1 = eastl::max<int>(0, SVar3);
        field_132 = iVar1;
    }

    // 0x100a3db40
    bool Tweaky::HasInputFocus() const {
        uint32_t uVar2;
        long* plVar3;
        shared_ptr local_20;

        GetFocus((ReturnValue*)&local_20, this);
        if (shared_ptr::operator_cast_to_bool(&local_20) == '\0') {
            uVar2 = 0;
        } else {
            plVar3 = (long*)local_20.operator->();
            uVar2 = (**(void (**)(...))(*plVar3 + 216))(plVar3);
        }
        return uVar2;
    }

    // 0x100a3dbb0
    void Tweaky::SetFont(const shared_ptr<graphics::Font>& font) {
        uint8_t bVar2;
        unsigned int uVar3;
        long* plVar4;
        Layout* this_00;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        FontMetrics* this_02;

        uint8_t* clientScript1 = m_font;
        if (*clientScript1 != font) {
            *clientScript1 = font;
            plVar4 = (long*)(*m_root).operator->();
            (**(void (**)(...))(*plVar4 + 112))(plVar4);
            this_00 = (Layout*)(*clientScript1).operator->();
            this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_00->SSOBeginPtr();
            this_02 = (FontMetrics*)this_01->end();
            bVar2 = this_02->GetMaxAscent();
            uVar3 = this_02->GetVerticalSpacing();
            field_80 = ~uVar3 + (unsigned int)bVar2;
            field_132 = 0;
            field_136 = 0;
        }
    }

    // 0x100a3dc40
    void Tweaky::SetControlMinHeight(unsigned int arg1) {
        m_controlMinHeight = arg1;
    }

    // 0x100a3dc50
    void Tweaky::ToggleControlMinHeight() {
        unsigned int arg1 = 30;
        if (m_controlMinHeight == 30) {
            arg1 = 15;
        }
        SetControlMinHeight(arg1);
    }

    // 0x100a3dc70
    void Tweaky::SetFocus(const shared_ptr<Control>& control) {
        long* plVar3;
        shared_ptr local_30;

        GetFocus((ReturnValue*)&local_30, this);
        if (shared_ptr::operator_cast_to_bool(&local_30) != '\0') {
            if (local_30 == control)
                goto LAB_100a3dcef;
            plVar3 = (long*)local_30.operator->();
            (**(void (**)(...))(*plVar3 + 24))(plVar3, 0);
        }
        field_32 = control;
        plVar3 = (long*)control.operator->();
        (**(void (**)(...))(*plVar3 + 24))(plVar3, 1);
        EnsureVisible(control);
    LAB_100a3dcef:
    }

    // 0x100a3dd20
    void Tweaky::EnsureVisible(const shared_ptr<Control>& control) {
        auto this_00 = control.operator->();
        auto piVar3 = this_00->GetMSAASampleCount();
        int iVar1 = *piVar3;
        int iVar2 = piVar3[2];
        if (iVar2 != 0 || iVar1 != 0) {
            if (field_112 - 4 < iVar2 - field_136) {
                field_136 = (iVar2 - field_112) + 14;
            }
            if (iVar1 - field_136 < m_placement + 4) {
                field_136 = iVar1 - 14;
            }
            if (field_116 - 4 < piVar3[3] - field_132) {
                field_132 = (piVar3[3] - field_116) + 14;
            }
            if (piVar3[1] - field_132 < field_108 + 4) {
                field_132 = piVar3[1] - 14;
            }
            ValidateScroll();
        }
    }

    // 0x100a3e260
    uint32_t Tweaky::HandleChar(int arg1) {
        uint32_t uVar2;
        long* plVar3;
        enable_shared_from_this<PathingEntity> local_38;
        shared_ptr local_28;

        local_38.shared_from_this();
        GetFocus((ReturnValue*)&local_28, this);
        if (shared_ptr::operator_cast_to_bool(&local_28) == '\0') {
            uVar2 = 0;
        } else {
            plVar3 = (long*)local_28.operator->();
            uVar2 = (**(void (**)(...))(*plVar3 + 192))(plVar3, arg1);
        }
        return uVar2;
    }

    // 0x100a3e300
    uint32_t Tweaky::HandleKeyDown(int arg1) {
        bool cVar1;
        uint32_t uVar2;
        long* plVar3;
        enable_shared_from_this<PathingEntity> local_38;
        shared_ptr local_28;

        local_38.shared_from_this();
        if (arg1 == 48) {
            cVar1 = input::InputState::IsKeyDown(56);
            uVar2 = 1;
            if (!cVar1) {
                SetFocusNext();
            } else {
                SetFocusPrevious();
            }
        } else if (arg1 == 53) {
            uVar2 = 1;
            ClearFocus();
        } else {
            GetFocus((ReturnValue*)&local_28, this);
            cVar1 = shared_ptr::operator_cast_to_bool(&local_28);
            if (!cVar1) {
                uVar2 = 0;
            } else {
                plVar3 = (long*)local_28.operator->();
                uVar2 = (**(void (**)(...))(*plVar3 + 200))(plVar3, arg1);
            }
        }
        return uVar2;
    }

    // 0x100a3e3e0
    uint32_t Tweaky::HandleKeyUp(int arg1) {
        uint32_t uVar2;
        long* plVar3;
        enable_shared_from_this<PathingEntity> local_38;
        shared_ptr local_28;

        local_38.shared_from_this();
        GetFocus((ReturnValue*)&local_28, this);
        if (shared_ptr::operator_cast_to_bool(&local_28) == '\0') {
            uVar2 = 0;
        } else {
            plVar3 = (long*)local_28.operator->();
            uVar2 = (**(void (**)(...))(*plVar3 + 208))(plVar3, arg1);
        }
        return uVar2;
    }

    // 0x100a41230
    unsigned long Container::OnClick(float arg1, float arg2, bool arg3) {
        uint8_t* this_00;
        uint8_t uVar1;
        uint8_t bVar3;
        Control* pCVar4;
        long* plVar5;
        shared_ptr<Control>* this_01;
        uint64_t in_register_00000031;
        uint64_t unaff_R12;
        unsigned long uVar6;
        ReturnValue* this_02;
        ReturnValue local_80;
        ReturnValue local_78;
        uint32_t local_64;
        Event local_60;
        ReturnValue local_48;

        bool cVar2 = BoundsCheck(arg1, arg2);
        if (cVar2) {
            this_00 = field_272;
            cVar2 = this_00->operator_cast_to_bool();
            if (cVar2) {
                pCVar4 = (Control*)(*this_00).operator->();
                cVar2 = pCVar4->BoundsCheck(arg1, arg2);
                if (cVar2) {
                    plVar5 = (long*)(*this_00).operator->();
                    cVar2 = (**(void (**)(...))(*plVar5 + 48))(arg1, arg2, plVar5, arg3);
                    if (cVar2) {
                        uVar6 = (((uint64_t)((int64_t)((unsigned long)unaff_R12 >> 8)) << 8) | (uint8_t)1);
                        if (!arg3) {
                            pCVar4 = (Control*)(*this_00).operator->();
                            local_48.shared_from_this();
                            local_60 = Event(local_48, 2);
                            pCVar4->DoCallback(local_60);
                            local_48.shared_from_this();
                            local_60 = Event(local_48, 2);
                            DoCallback(local_60);
                        }
                        goto LAB_100a41519;
                    }
                }
            }
            if (field_294 != '\0') {
                local_64 = (uint32_t)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg3);
                local_80 = field_216.begin();
                local_78 = field_216.end();
                bVar3 = local_80 != local_78;
                if (bVar3 != 0) {
                    this_02 = &local_80;
                    uVar1 = (char)local_64;
                    do {
                        this_01 = (shared_ptr<Control>*)**this_02;
                        pCVar4 = (Control*)(*this_01).operator->();
                        cVar2 = pCVar4->BoundsCheck(arg1, arg2);
                        if (cVar2) {
                            plVar5 = (long*)(*this_01).operator->();
                            cVar2 = (**(void (**)(...))(*plVar5 + 48))(arg1, arg2, plVar5, uVar1);
                            this = this;
                            if (cVar2) {
                                if ((char)local_64 == '\0') {
                                    pCVar4 = (Control*)(*this_01).operator->();
                                    this_02 = &local_48;
                                    this_02->shared_from_this();
                                    local_60 = Event(*this_02, 2);
                                    pCVar4->DoCallback(local_60);
                                    local_48.shared_from_this();
                                    local_60 = Event(local_48, 2);
                                    DoCallback(local_60);
                                }
                                uVar6 = (((uint64_t)((int64_t)((unsigned long)this_02 >> 8)) << 8) | (uint8_t)1);
                                if ((bVar3 & 1) != 0)
                                    goto LAB_100a41519;
                                goto LAB_100a414cf;
                            }
                        }
                        ++*this_02;
                        bVar3 = *this_02 != local_78;
                    } while (bVar3 != 0);
                }
                this = this;
            LAB_100a414cf:
                local_48.shared_from_this();
                local_60 = Event(local_48, 2);
                DoCallback(local_60);
            }
        }
        ClearFocus();
        uVar6 = 0;
    LAB_100a41519:
        return uVar6 & 4294967295;
    }

    // 0x100a41670
    void Container::InitDefault() {
        shared_ptr<Control>* this_00;
        long* plVar2;

        auto local_30 = field_216.begin();
        auto local_28 = field_216.end();
        bool cVar1 = local_30 != local_28;
        if (cVar1) {
            do {
                this_00 = (shared_ptr<Control>*)*local_30;
                plVar2 = (long*)(*this_00).operator->();
                (**(void (**)(...))(*plVar2 + 88))(plVar2);
                ++local_30;
                cVar1 = local_30 != local_28;
            } while (cVar1);
        }
    }

    // 0x100a417c0
    void Container::ResetToDefault() {
        shared_ptr<Control>* this_00;
        long* plVar2;

        auto local_38 = field_216.begin();
        auto local_30 = field_216.end();
        bool cVar1 = local_38 != local_30;
        if (cVar1) {
            do {
                this_00 = (shared_ptr<Control>*)*local_38;
                plVar2 = (long*)(*this_00).operator->();
                (**(void (**)(...))(*plVar2 + 96))(plVar2);
                ++local_38;
                cVar1 = local_38 != local_30;
            } while (cVar1);
        }
        ~AutoSingleton();
    }

    // 0x100a41ba0
    void Container::MakeCollapsable() {
        enable_shared_from_this<PathingEntity> local_88;
        ReturnValue local_68;

        field_293 = 1;
        make_shared<Button, char const(&)[2]>(&local_68, "+");
        uint8_t* this_00 = field_272;
        *this_00 = local_68;
        long* plVar1 = (long*)(*this_00).operator->();
        weak_ptr<oldscape::dash3d::Decor> local_98(field_104);
        (**(void (**)(...))(*plVar1 + 232))(plVar1, &local_98);
        Control* pCVar2 = (Control*)(*this_00).operator->();
        local_88.shared_from_this();
        static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_68);
        weak_ptr<oldscape::dash3d::Decor> local_78(local_68);
        pCVar2->SetParent(&local_78);
        pCVar2 = (Control*)(*this_00).operator->();
        std::function<void(Event const&)>::function<Container::MakeCollapsable()::__9, void>(
            (function<void(Event const&)>*)&local_68, (__9*)this);
        pCVar2->SetHandler(local_68);
        field_294 = '\0';
    }

    // 0x100a41e60
    void Container::SetTweaky(weak_ptr<Tweaky> tweaky) {
        long* plVar2;
        weak_ptr<oldscape::dash3d::Decor> local_30;

        field_104 = *tweaky;
        if (field_272->operator_cast_to_bool() != '\0') {
            plVar2 = (long*)(*field_272).operator->();
            local_30 = weak_ptr(*tweaky);
            (**(void (**)(...))(*plVar2 + 232))(plVar2, &local_30);
        }
    }

    // 0x100a41f30
    Container* Container::operator+=(const shared_ptr<Control>& control) {
        enable_shared_from_this<PathingEntity> local_58;
        shared_ptr<oldscape::ClientNpc> local_38;

        auto plVar1 = control.operator->();
        weak_ptr<oldscape::dash3d::Decor> local_68(field_104);
        (**(void (**)(...))(*plVar1 + 232))(plVar1, &local_68);
        auto this_00 = control.operator->();
        local_58.shared_from_this();
        static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_38);
        weak_ptr<oldscape::dash3d::Decor> local_48(local_38);
        this_00->SetParent(&local_48);
        field_216.push_back(control);
        return this;
    }

    // 0x100a42040
    void Container::Draw(int arg1, int arg2) {
        uint8_t* this_00;
        ShaderVariablePrecision SVar2;
        long* plVar3;
        Tweaky* pTVar4;
        shared_ptr<Control>* this_01;
        int iVar5;
        int arg1_00;
        int local_60[2];
        ReturnValue local_58;
        int local_50;
        int local_4c;
        ReturnValue local_48;
        shared_ptr local_40;

        bool cVar1 = GetControlSize(local_60);
        if (cVar1) {
            arg1_00 = field_24 + arg1;
            iVar5 = field_28 + arg2;
            local_40 = oldscape::dash3d::GridRect(arg1_00, iVar5, field_36 + arg1_00, field_40 + iVar5);
            field_136 = local_40._0_4_;
            field_140 = local_40._4_4_;
            field_144 = (uint32_t)local_40.field_8;
            field_148 = local_40.field_8._4_4_;
            local_40 = field_104.lock();
            cVar1 = shared_ptr::operator_cast_to_bool(&local_40);
            if (cVar1) {
                if (field_292 != false) {
                    if ((int)field_268 < 1) {
                        iVar5 = 0;
                        cVar1 = field_294;
                    } else {
                        iVar5 = (int)field_268 / 2;
                        cVar1 = field_294;
                    }
                    if (cVar1) {
                        pTVar4 = (Tweaky*)local_40.operator->();
                        pTVar4->SetColour(808464639);
                        pTVar4 = (Tweaky*)local_40.operator->();
                        pTVar4->FillRect(arg1, iVar5 + arg2, (field_144 - field_136) - 2,
                                         (field_148 - (field_140 + iVar5)) - 2);
                        pTVar4 = (Tweaky*)local_40.operator->();
                        pTVar4->SetColour(1886417151);
                        pTVar4 = (Tweaky*)local_40.operator->();
                        pTVar4->DrawRect(arg1, iVar5 + arg2, (field_144 - field_136) - 2,
                                         (field_148 - (iVar5 + field_140)) - 2, false);
                    }
                    this_00 = field_272;
                    cVar1 = this_00->operator_cast_to_bool();
                    if (cVar1) {
                        plVar3 = (long*)(*this_00).operator->();
                        (**(void (**)(...))(*plVar3 + 32))(plVar3, arg1, arg2);
                        plVar3 = (long*)(*this_00).operator->();
                        cVar1 = (**(void (**)(...))(*plVar3 + 40))(plVar3, &local_48, &local_58);
                        iVar5 = 0;
                        if (cVar1) {
                            iVar5 = local_48._0_4_;
                        }
                        arg1 = iVar5 + arg1;
                    }
                    if (field_264 < 1) {
                        SVar2 = 4;
                    } else {
                        pTVar4 = (Tweaky*)local_40.operator->();
                        pTVar4->SetColour(808464639);
                        pTVar4 = (Tweaky*)local_40.operator->();
                        pTVar4->FillRect(arg1 + 6, arg2, field_264 + 4, field_268);
                        pTVar4 = (Tweaky*)local_40.operator->();
                        pTVar4->SetColour(3772834047);
                        iVar5 = local_40.operator->();
                        Tweaky::TextDraw<eastl::string>(iVar5, arg1 + 6,
                                                        *((fixed_string<char, _16>*)(unsigned long)(unsigned int)arg2),
                                                        (int)this + 48, -1, true);
                        SVar2 = field_268;
                    }
                    arg2 = SVar2 + arg2;
                    arg1 = arg1 + 4;
                }
                if (field_294 != '\0') {
                    local_48 = field_216.begin();
                    local_58 = field_216.end();
                    cVar1 = local_48 != local_58;
                    if (cVar1) {
                        do {
                            this_01 = (shared_ptr<Control>*)*local_48;
                            plVar3 = (long*)(*this_01).operator->();
                            (**(void (**)(...))(*plVar3 + 32))(plVar3, arg1, arg2);
                            plVar3 = (long*)(*this_01).operator->();
                            cVar1 = (**(void (**)(...))(*plVar3 + 40))(plVar3, &local_50, &local_4c);
                            if (cVar1) {
                                if (m_direction == 1) {
                                    arg1 = arg1 + local_50 + 2;
                                } else {
                                    arg2 = arg2 + local_4c + 2;
                                }
                            }
                            ++local_48;
                            cVar1 = local_48 != local_58;
                        } while (cVar1);
                    }
                }
            }
        }
    }

    // 0x100a423e0
    uint64_t Container::GetControlSize(int& arg1, int& arg2) {
        uint8_t bVar2;
        bool cVar3;
        shared_ptr<Control>* this_01;
        long* plVar5;
        Tweaky* this_02;
        ShaderVariablePrecision SVar6;
        StringView local_80;
        int* local_68;
        shared_ptr local_60;
        ShaderVariablePrecision local_4c;
        ReturnValue local_48;
        unsigned long local_38;

        ShaderVariablePrecision* local_70 = (ShaderVariablePrecision*)arg1;
        if (field_294 == '\0') {
            local_38 = 0;
            SVar6 = 0;
        } else {
            local_68 = arg2;
            local_60 = field_216.begin();
            local_48 = field_216.end();
            bVar2 = local_60 != local_48;
            if (bVar2 == 0) {
                local_38 = 0;
                SVar6 = 0;
            } else {
                SVar6 = 0;
                local_38 = 0;
                do {
                    this_01 = (shared_ptr<Control>*)*local_60;
                    plVar5 = (long*)(*this_01).operator->();
                    cVar3 = (**(void (**)(...))(*plVar5 + 40))(plVar5, &local_3c, &local_4c);
                    if (cVar3) {
                        if (m_direction == 1) {
                            SVar6 = SVar6 + local_3c + 2;
                            local_38 = eastl::max<int>((ShaderVariablePrecision)local_38, local_4c);
                        } else {
                            SVar6 = eastl::max<int>(SVar6, local_3c);
                            local_38 = (unsigned long)((int)local_38 + local_4c + 2);
                        }
                    }
                    if (!cVar3)
                        break;
                    ++local_60;
                    bVar2 = local_60 != local_48;
                } while (bVar2 != 0);
            }
            arg2 = local_68;
            if ((bVar2 & 1) != 0) {
                return 0;
            }
        }
        uint8_t* this_00 = field_272;
        cVar3 = this_00->operator_cast_to_bool();
        if ((cVar3) && (cVar3 = this_00->operator_cast_to_bool(), cVar3)) {
            plVar5 = (long*)(*this_00).operator->();
            cVar3 = (**(void (**)(...))(*plVar5 + 40))(plVar5, &local_60, &local_48);
            if (cVar3) {
                SVar6 = SVar6 + local_60._0_4_;
                local_38 = eastl::max<int>((ShaderVariablePrecision)local_38, local_48._0_4_);
            }
        }
        local_48._0_4_ = 0;
        ShaderVariablePrecision local_3c = 0;
        cVar3 = field_48.empty();
        if (!cVar3) {
            local_60 = field_104.lock();
            cVar3 = shared_ptr::operator_cast_to_bool(&local_60);
            if (cVar3) {
                this_02 = (Tweaky*)local_60.operator->();
                local_80.StringView<eastl::fixed_string<char, 40>>(field_48);
                this_02->GetTextSize(local_48, local_3c, &local_80, -1);
            }
        }
        ShaderVariablePrecision SVar1 = local_3c;
        field_264 = local_48._0_4_;
        field_268 = local_3c;
        int iVar4 = (int)local_38;
        if ((field_292 != false) && (field_294 != '\0')) {
            SVar6 = SVar6 + 8;
            iVar4 = iVar4 + 8;
        }
        field_36 = SVar6;
        field_40 = iVar4;
        if (0 < (int)local_48._0_4_) {
            SVar6 = eastl::max<int>(local_48._0_4_ + 24, SVar6);
            field_36 = SVar6;
            if (field_294 != '\0') {
                field_40 = (int)SVar1 / 2 + field_40 + 4;
            }
        }
        if (((int)field_36 < 1) || (field_40 < 1)) {
            return 0;
        }
        *local_70 = field_36;
        iVar4 = field_40;
        arg2 = iVar4;
        return 1;
    }

    // 0x100a426b0
    void Container::ClearControlSize() {
        shared_ptr<Control>* this_00;
        long* plVar2;

        auto local_38 = field_216.begin();
        auto local_30 = field_216.end();
        bool cVar1 = local_38 != local_30;
        if (cVar1) {
            do {
                this_00 = (shared_ptr<Control>*)*local_38;
                plVar2 = (long*)(*this_00).operator->();
                (**(void (**)(...))(*plVar2 + 112))(plVar2);
                ++local_38;
                cVar1 = local_38 != local_30;
            } while (cVar1);
        }
        ClearControlSize();
    }

    // 0x100a42780
    void Container::Clear() {
        shared_ptr<Control>* this_01;
        long* plVar2;

        uint8_t* this_00 = &field_216;
        auto local_38 = this_00->begin();
        auto local_30 = this_00->end();
        bool cVar1 = local_38 != local_30;
        if (cVar1) {
            do {
                this_01 = (shared_ptr<Control>*)*local_38;
                plVar2 = (long*)(*this_01).operator->();
                (**(void (**)(...))(*plVar2 + 16))(plVar2);
                ++local_38;
                cVar1 = local_38 != local_30;
            } while (cVar1);
        }
        this_00->clear();
        Clear();
    }

    // 0x100a42840
    void Container::ResetAllToDefault() {
        shared_ptr<Control>* this_00;
        long* plVar2;

        auto local_38 = field_216.begin();
        auto local_30 = field_216.end();
        bool cVar1 = local_38 != local_30;
        if (cVar1) {
            do {
                this_00 = (shared_ptr<Control>*)*local_38;
                plVar2 = (long*)(*this_00).operator->();
                (**(void (**)(...))(*plVar2 + 104))(plVar2);
                ++local_38;
                cVar1 = local_38 != local_30;
            } while (cVar1);
        }
        ~AutoSingleton();
    }

    // 0x100a42940
    unsigned int Container::OnMouseOver(float arg1, float arg2) {
        uint8_t* this_00;
        shared_ptr* this_01;
        bool bVar2;
        uint8_t bVar3;
        Control* pCVar5;
        long* plVar6;
        shared_ptr<Control>* this_02;
        uint8_t* this_03;
        unsigned int unaff_R13D;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_68;
        ReturnValue local_58;
        ReturnValue local_48;
        shared_ptr* local_40;

        bool cVar1 = BoundsCheck(arg1, arg2);
        if (cVar1) {
            this_00 = field_272;
            cVar1 = this_00->operator_cast_to_bool();
            if (cVar1) {
                pCVar5 = (Control*)(*this_00).operator->();
                cVar1 = pCVar5->BoundsCheck(arg1, arg2);
                if (cVar1) {
                    this_03 = field_248;
                    cVar1 = this_03->operator_cast_to_bool();
                    if ((cVar1) && (bVar2 = *this_00 != *this_03, bVar2)) {
                        plVar6 = (long*)(*this_03).operator->();
                        (**(void (**)(...))(*plVar6 + 224))(plVar6, 0);
                    }
                    *this_03 = *this_00;
                    plVar6 = (long*)(*this_03).operator->();
                    (**(void (**)(...))(*plVar6 + 224))(plVar6, 1);
                    plVar6 = (long*)(*this_00).operator->();
                    unaff_R13D = (**(void (**)(...))(*plVar6 + 64))(arg1, arg2, plVar6);
                    goto LAB_100a42bdf;
                }
            }
            if (field_294 != '\0') {
                local_48 = field_216.begin();
                local_58 = field_216.end();
                bVar3 = local_48 != local_58;
                if (bVar3 != 0) {
                    local_40 = (shared_ptr*)field_248;
                    do {
                        this_02 = (shared_ptr<Control>*)*local_48;
                        pCVar5 = (Control*)(*this_02).operator->();
                        cVar1 = pCVar5->BoundsCheck(arg1, arg2);
                        this_01 = local_40;
                        if (!cVar1) {
                            bVar2 = *local_40 == *this_02;
                            if (bVar2) {
                                plVar6 = (long*)(*this_01).operator->();
                                (**(void (**)(...))(*plVar6 + 224))(plVar6, 0);
                                local_68 = shared_ptr();
                                *this_01 = local_68;
                            }
                        } else {
                            if ((shared_ptr::operator_cast_to_bool(local_40) != '\0') &&
                                (bVar2 = *this_02 != *this_01, bVar2)) {
                                plVar6 = (long*)(*this_01).operator->();
                                (**(void (**)(...))(*plVar6 + 224))(plVar6, 0);
                            }
                            *this_01 = *this_02;
                            plVar6 = (long*)(*this_01).operator->();
                            (**(void (**)(...))(*plVar6 + 224))(plVar6, 1);
                            plVar6 = (long*)(*this_02).operator->();
                            unaff_R13D = (**(void (**)(...))(*plVar6 + 64))(arg1, arg2, plVar6);
                        }
                        if (cVar1)
                            break;
                        ++local_48;
                        bVar3 = local_48 != local_58;
                    } while (bVar3 != 0);
                }
                this = this;
                if ((bVar3 & 1) != 0)
                    goto LAB_100a42bdf;
            }
            cVar1 = field_248->operator_cast_to_bool();
            if (cVar1) {
                plVar6 = (long*)(*field_248).operator->();
                unaff_R13D = 0;
                (**(void (**)(...))(*plVar6 + 224))(plVar6, 0);
                goto LAB_100a42bdf;
            }
        }
        unaff_R13D = 0;
    LAB_100a42bdf:
        return unaff_R13D & 4294967041;
    }

    // 0x100a42d30
    void Container::SetMouseOver(bool arg1) {
        bool cVar1;
        shared_ptr<Control>* this_00;
        long* plVar2;
        uint64_t in_register_00000031;
        ReturnValue local_30;
        ReturnValue local_28;

        field_208 = arg1;
        if (((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0) && (field_294 != '\0')) {
            local_30 = field_216.begin();
            local_28 = field_216.end();
            cVar1 = local_30 != local_28;
            if (cVar1) {
                do {
                    this_00 = (shared_ptr<Control>*)*local_30;
                    plVar2 = (long*)(*this_00).operator->();
                    (**(void (**)(...))(*plVar2 + 224))(plVar2, 0);
                    ++local_30;
                    cVar1 = local_30 != local_28;
                } while (cVar1);
            }
        }
    }

    // 0x100a42dd0
    void Container::DoOnShown() {
        shared_ptr<Control>* this_00;
        long* plVar2;

        auto local_38 = field_216.begin();
        auto local_30 = field_216.end();
        bool cVar1 = local_38 != local_30;
        if (cVar1) {
            do {
                this_00 = (shared_ptr<Control>*)*local_38;
                plVar2 = (long*)(*this_00).operator->();
                (**(void (**)(...))(*plVar2 + 80))(plVar2);
                ++local_38;
                cVar1 = local_38 != local_30;
            } while (cVar1);
        }
        DoOnShown();
    }

    // 0x100a42f10
    void Container::AddButton(const char* str, std::function<void(Event const&)> const& callback) {
        ReturnValue local_40;

        char* local_48 = str;
        make_shared<Button, char const*&>(&local_40, &local_48);
        shared_ptr<oldscape::dash3d::Decor> local_30(&local_40);
        Add(local_30);
        ((Control*)local_40.operator->())->SetHandler(callback);
    }

    // 0x100a42fb0
    void Container::AddButton(const char* str, int arg2, std::function<void(Event const&)> const& callback) {
        ReturnValue local_48;

        char* local_50 = str;
        int local_24 = arg2;
        make_shared<Button, char const*&, int&>(&local_48, &local_50, &local_24);
        shared_ptr<oldscape::dash3d::Decor> local_38(&local_48);
        Add(local_38);
        ((Control*)local_48.operator->())->SetHandler(callback);
    }

    // 0x100a43100
    void Container::AddCheckBox(const char* str, bool& arg2) {
        ReturnValue local_68;

        char* local_70 = str;
        make_shared<CheckBox, char const*&, bool&>(&local_68, &local_70, arg2);
        shared_ptr<oldscape::dash3d::Decor> local_58(&local_68);
        Add(local_58);
        auto this_00 = local_68.operator->();
        std::function<void(Event const&)>::function<Container::AddCheckBox(char const*, bool&)::__10, void>(
            (function<void(Event const&)>*)&local_58, (__10*)arg2);
        this_00->SetHandler(local_58);
    }

    // 0x100a431f0
    void Container::AddCheckBox(const char* str, std::function<void(Event const&)> const& callback, bool arg3) {
        ReturnValue local_38;

        char* local_50 = str;
        make_shared<CheckBox, char const*&>(&local_38, &local_50);
        shared_ptr<oldscape::dash3d::Decor> local_48(&local_38);
        Add(local_48);
        ((Control*)local_38.operator->())->SetHandler(callback);
        auto plVar1 = local_38.operator->();
        (**(void (**)(...))(*plVar1 + 128))(plVar1, arg3);
    }

    // 0x100a432b0
    void Container::AddEditField(const char* str, int arg2, std::function<void(Event const&)> const& callback) {
        ReturnValue local_48;

        char* local_50 = str;
        int local_24 = arg2;
        make_shared<EditField, char const*&, int&>(&local_48, &local_50, &local_24);
        shared_ptr<oldscape::dash3d::Decor> local_38(&local_48);
        Add(local_38);
        ((Control*)local_48.operator->())->SetHandler(callback);
    }

    // 0x100a43350
    void Container::AddEnum(const char* str, const StringEnum* stringEnum, int* arg3) {
        ReturnValue local_50;

        char* local_40 = str;
        StringEnum* local_38 = stringEnum;
        int* local_30 = arg3;
        make_shared<Enum, char const*&, StringEnum const*&, int*&>(&local_50, &local_40, &local_38, &local_30);
        shared_ptr<oldscape::dash3d::Decor> local_28(&local_50);
        Add(local_28);
    }

    // 0x100a433e0
    void Container::AddEnum(const char* str, const StringEnum* stringEnum, int* arg3,
                            std::function<void(Event const&)> const& callback) {
        ReturnValue local_40;

        char* local_58 = str;
        StringEnum* local_50 = stringEnum;
        int* local_48 = arg3;
        make_shared<Enum, char const*&, StringEnum const*&, int*&>(&local_40, &local_58, &local_50, &local_48);
        shared_ptr<oldscape::dash3d::Decor> local_30(&local_40);
        Add(local_30);
        ((Control*)local_40.operator->())->SetHandler(callback);
    }

    // 0x100a43490
    void Container::AddSlider(const char* str, float arg2, float arg3, float arg4,
                              std::function<void(Event const&)> const& callback) {
        ReturnValue local_50;

        char* local_58 = str;
        float local_2c = arg2;
        float local_28 = arg3;
        float local_24 = arg4;
        make_shared<Slider, char const*&, float&, float&, float&>(&local_50, &local_58, &local_2c, &local_28,
                                                                  &local_24);
        shared_ptr<oldscape::dash3d::Decor> local_40(&local_50);
        Add(local_40);
        ((Control*)local_50.operator->())->SetHandler(callback);
    }

    // 0x100a43540
    void Container::AddGradientSlider(const char* str, float arg2, float arg3, float arg4,
                                      std::function<void(Event const&)> const& callback) {
        ReturnValue local_50;

        char* local_58 = str;
        float local_2c = arg2;
        float local_28 = arg3;
        float local_24 = arg4;
        make_shared<GradientSlider, char const*&, float&, float&, float&>(&local_50, &local_58, &local_2c, &local_28,
                                                                          &local_24);
        shared_ptr<oldscape::dash3d::Decor> local_40(&local_50);
        Add(local_40);
        ((Control*)local_50.operator->())->SetHandler(callback);
    }

    // 0x100a435f0
    void Container::AddColourPicker(const char* str, math::Vector3T<float>* vector3, math::Range<float> range) {
        Range<float> local_78;
        ReturnValue local_68;

        local_58[0] = (shared_ptr<oldscape::dash3d::Decor>)0;
        Vector3T<float>* local_70 = vector3;
        make_shared<ColourPicker, char const*&, bool&, math::Range<float>&>(&local_68, (char**)&local_70, &local_58,
                                                                            &local_78);
        shared_ptr<oldscape::dash3d::Decor> local_58(&local_68);
        Add((Container*)str, &local_58);
        auto control = local_68.operator->();
        std::function<void(Event const&)>::function<
            Container::AddColourPicker(char const*, math::Vector3T<float>*, math::Range<float>)::__11, void>(
            (function<void(Event const&)>*)&local_58, (__11*)range);
        control->SetHandler(local_58);
    }

    // 0x100a437e0
    void Container::AddColourPicker(const char* str, math::Vector4T<float>* vector4, math::Range<float> range) {
        Range<float> local_78;
        ReturnValue local_68;

        local_58[0] = (shared_ptr<oldscape::dash3d::Decor>)1;
        Vector4T<float>* local_70 = vector4;
        make_shared<ColourPicker, char const*&, bool&, math::Range<float>&>(&local_68, (char**)&local_70, &local_58,
                                                                            &local_78);
        shared_ptr<oldscape::dash3d::Decor> local_58(&local_68);
        Add((Container*)str, &local_58);
        auto control = local_68.operator->();
        std::function<void(Event const&)>::function<
            Container::AddColourPicker(char const*, math::Vector4T<float>*, math::Range<float>)::__12, void>(
            (function<void(Event const&)>*)&local_58, (__12*)range);
        control->SetHandler(local_58);
    }

    // 0x100a438e0
    void Container::AddColourPicker(const char* str, bool arg2, math::Range<float> range,
                                    std::function<void(Event const&)> const& callback) {
        uint64_t in_register_00000031;
        Range<float> local_58;
        ReturnValue local_48;

        char* local_50 = (char*)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg2);
        bool local_21 = (uint8_t)range;
        make_shared<ColourPicker, char const*&, bool&, math::Range<float>&>(&local_48, &local_50, &local_21, &local_58);
        shared_ptr<oldscape::dash3d::Decor> local_38(&local_48);
        Add((Container*)str, &local_38);
        ((Control*)local_48.operator->())->SetHandler(callback);
    }

    // 0x100a43990
    void Container::AddColourPickerHDR(const char* str, math::Vector3T<float>* vector3, float* arg3,
                                       math::Range<float> range1, math::Range<float> range2) {
        Range<float> local_90;
        Range<float> local_88;
        ReturnValue local_78;

        local_68[0] = (shared_ptr<oldscape::dash3d::Decor>)0;
        char* local_80 = str;
        make_shared<ColourPicker, char const*&, bool&, math::Range<float>&, math::Range<float>&>(
            &local_78, &local_80, &local_68, &local_90, &local_88);
        shared_ptr<oldscape::dash3d::Decor> local_68(&local_78);
        Add(local_68);
        auto this_00 = local_78.operator->();
        std::function<void(Event const&)>::function<Container::AddColourPickerHDR(char const*, math::Vector3T<float>*,
                                                                                  float*, math::Range<float>,
                                                                                  math::Range<float>)::__13,
                                                    void>((function<void(Event const&)>*)&local_68, (__13*)vector3);
        this_00->SetHandler(local_68);
    }

    // 0x100a43b70
    void Container::AddColourPickerHDR(const char* str, math::Vector4T<float>* vector4, float* arg3,
                                       math::Range<float> range1, math::Range<float> range2) {
        Range<float> local_90;
        Range<float> local_88;
        ReturnValue local_78;

        local_68[0] = (shared_ptr<oldscape::dash3d::Decor>)1;
        char* local_80 = str;
        make_shared<ColourPicker, char const*&, bool&, math::Range<float>&, math::Range<float>&>(
            &local_78, &local_80, &local_68, &local_90, &local_88);
        shared_ptr<oldscape::dash3d::Decor> local_68(&local_78);
        Add(local_68);
        auto this_00 = local_78.operator->();
        std::function<void(Event const&)>::function<Container::AddColourPickerHDR(char const*, math::Vector4T<float>*,
                                                                                  float*, math::Range<float>,
                                                                                  math::Range<float>)::__14,
                                                    void>((function<void(Event const&)>*)&local_68, (__14*)vector4);
        this_00->SetHandler(local_68);
    }

    // 0x100a43c90
    void Container::AddColourPickerHDR(const char* str, bool arg2, math::Range<float> range1, math::Range<float> range2,
                                       std::function<void(Event const&)> const& callback) {
        Range<float> local_60;
        Range<float> local_58;
        ReturnValue local_48;

        char* local_50 = str;
        bool local_21 = arg2;
        make_shared<ColourPicker, char const*&, bool&, math::Range<float>&, math::Range<float>&>(
            &local_48, &local_50, &local_21, &local_60, &local_58);
        shared_ptr<oldscape::dash3d::Decor> local_38(&local_48);
        Add(local_38);
        ((Control*)local_48.operator->())->SetHandler(*range1);
    }

    // 0x100a43d40
    void Container::AddLabel(const char* str) {
        ReturnValue local_40;

        char* local_30 = str;
        make_shared<Label, char const*&>(&local_40, &local_30);
        shared_ptr<oldscape::dash3d::Decor> local_28(&local_40);
        Add(local_28);
    }

    // 0x100a43e60
    void Container::AddSwatch(float* arg1, float* arg2, float* arg3) {
        ReturnValue local_50;
        void* local_28[2];

        local_28[0] = nullptr;
        float* local_40 = arg1;
        float* local_38 = arg2;
        float* local_30 = arg3;
        make_shared<Swatch, float*&, float*&, float*&, decltype(nullptr)>(&local_50, &local_40, &local_38, &local_30,
                                                                          local_28);
        new (local_28) shared_ptr(&local_50);
        Add(*local_28);
    }

    // 0x100a43f00
    void Container::AddSwatch(float* arg1, float* arg2, float* arg3,
                              std::function<void(Event const&)> const& callback) {
        ReturnValue local_40;
        void* local_30[2];

        local_30[0] = nullptr;
        float* local_58 = arg1;
        float* local_50 = arg2;
        float* local_48 = arg3;
        make_shared<Swatch, float*&, float*&, float*&, decltype(nullptr)>(&local_40, &local_58, &local_50, &local_48,
                                                                          local_30);
        new (local_30) shared_ptr(&local_40);
        Add(*local_30);
        ((Control*)local_40.operator->())->SetHandler(callback);
    }

    // 0x100a43fb0
    void Container::AddSwatch(float* arg1, float* arg2, float* arg3, float* arg4) {
        ReturnValue local_58;

        float* local_48 = arg1;
        float* local_40 = arg2;
        float* local_38 = arg3;
        float* local_30 = arg4;
        make_shared<Swatch, float*, float*, float*, float*>(&local_58, &local_48, &local_40, &local_38, &local_30);
        shared_ptr<oldscape::dash3d::Decor> local_28(&local_58);
        Add(local_28);
    }

    // 0x100a44040
    void Container::AddSwatch(float* arg1, float* arg2, float* arg3, float* arg4,
                              std::function<void(Event const&)> const& callback) {
        ReturnValue local_40;

        float* local_60 = arg1;
        float* local_58 = arg2;
        float* local_50 = arg3;
        float* local_48 = arg4;
        make_shared<Swatch, float*, float*, float*, float*>(&local_40, &local_60, &local_58, &local_50, &local_48);
        shared_ptr<oldscape::dash3d::Decor> local_30(&local_40);
        Add(local_30);
        ((Control*)local_40.operator->())->SetHandler(callback);
    }

    // 0x100a440f0
    Container* Container::AddGroup(const char* str) {
        char* in_RDX;

        *this = str->AddGroup(in_RDX, true);
        return this;
    }

    // 0x100a44110
    auto Container::AddGroup(const char* str, bool arg2) {
        auto result;

        char* local_38 = str;
        bool local_19 = arg2;
        make_shared<Container, char const*&, bool&>(&result, &local_38, &local_19);
        shared_ptr<oldscape::dash3d::Decor> local_30(&result);
        Add(local_30);
        return result;
    }

    // 0x100a44240
    void Container::SaveSettings(TweakSettingsValue& tweakSettingsValue) {
        shared_ptr<Control>* this_00;
        Control* this_01;
        char* str;
        uint64_t uVar2;
        long* plVar3;
        eastl::string local_70;

        TweakSettingsValue* local_38 = tweakSettingsValue;
        auto local_48 = field_216.begin();
        auto local_40 = field_216.end();
        bool cVar1 = local_48 != local_40;
        if (cVar1) {
            local_38 = (TweakSettingsValue*)&local_38->field_32;
            do {
                this_00 = (shared_ptr<Control>*)*local_48;
                this_01 = (Control*)(*this_00).operator->();
                str = (char*)this_01->GetValue();
                local_70 = eastl::string(str);
                uVar2 = (*local_38)[local_70];
                plVar3 = (long*)(*this_00).operator->();
                (**(void (**)(...))(*plVar3 + 184))(plVar3, uVar2);
                ++local_48;
                cVar1 = local_48 != local_40;
            } while (cVar1);
        }
    }

    // 0x100a44420
    uint64_t Container::LoadSettings(const TweakSettingsValue& tweakSettingsValue) {
        list<console::Line>* this_00;
        eastl::string* str;
        shared_ptr<Control>* this_01;
        Control* this_02;
        value_type* value_type;
        long* plVar3;
        uint64_t uVar4;
        ReturnValue local_58;
        ReturnValue local_50;
        list<console::Line>* local_48;

        uint64_t local_38 = tweakSettingsValue.field_32.begin();
        uint64_t local_40 = tweakSettingsValue.field_32.end();
        bool cVar1 = local_38 != local_40;
        if (!cVar1) {
            uVar4 = 0;
        } else {
            local_48 = (list<console::Line>*)&field_216;
            uVar4 = 0;
            do {
                this_00 = local_48;
                str = (eastl::string*)*local_38;
                local_58 = this_00->begin();
                local_50 = this_00->end();
                cVar1 = local_58 != local_50;
                if (cVar1) {
                    do {
                        this_01 = (shared_ptr<Control>*)*local_58;
                        this_02 = (Control*)(*this_01).operator->();
                        value_type = (value_type*)this_02->GetValue();
                        if (*value_type == *str) {
                            plVar3 = (long*)(*this_01).operator->();
                            cVar1 = (**(void (**)(...))(*plVar3 + 176))(plVar3, str + 32);
                            if (cVar1) {
                                uVar4 = 1;
                            }
                        }
                        ++local_58;
                        cVar1 = local_58 != local_50;
                    } while (cVar1);
                }
                ++local_38;
                cVar1 = local_38 != local_40;
            } while (cVar1);
        }
        return uVar4;
    }

    // 0x100a5ab20
    void Container::MakeCollapsable()::$_9::operator()(const Event& event) const {
        char* str;

        long lVar2 = field_0;
        Name NVar1 = event.field_16;
        if (NVar1 == 2) {
            *(uint8_t*)(lVar2 + 294) = *(uint8_t*)(lVar2 + 294) ^ 1;
        }
        if (NVar1 - 1 < 2) {
            str = "-";
            if (*(char*)(lVar2 + 294) == '\0') {
                str = "+";
            }
            ((Control*)(*((lVar2 + 272))).operator->())->SetText(str);
        }
    }

    // 0x100a5b610
    void Container::AddCheckBox(char const*, bool&)::$_10::operator()(const Event& event) const {
        uint8_t uVar1;
        long* plVar2;

        if (event.field_16 == 3) {
            plVar2 = (long*)event.operator->();
            uVar1 = (**(void (**)(...))(*plVar2 + 120))(plVar2);
            **(uint8_t**)this = uVar1;
        } else if (event.field_16 == 1) {
            plVar2 = (long*)event.operator->();
            (**(void (**)(...))(*plVar2 + 128))(plVar2, **(uint8_t**)this);
        }
    }

} // namespace jag::tweak

namespace jag {
    // 0x100a3bb30
    shared_ptr_if_not_array<tweak::Button>::type make_shared<tweak::Button, char const*&>(const char*& arg1) {
        ref_counter_base* ref_counter_base;
        int local_34;
        Button* local_30[2];

        auto arg1_00 = aligned_alloc(256, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<tweak::Button>::type result;
        } else {
            local_30[0] = placement_new<tweak::Button, char const*&>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_base =
                (ref_counter_base*)placement_new<ref_counter_shared<tweak::Button>, int, tweak::Button*&>(
                    arg1_00, &local_34, local_30);
            shared_ptr_do_enable_shared_from_this<tweak::Button>(ref_counter_base, local_30[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x100a3bcf0
    shared_ptr_if_not_array<tweak::CheckBox>::type make_shared<tweak::CheckBox, char const*&, bool&>(const char*& arg1,
                                                                                                     bool& arg2) {
        ref_counter_base* ref_counter_base;
        int local_3c;
        CheckBox* local_38[2];

        auto arg1_00 = aligned_alloc(256, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<tweak::CheckBox>::type result;
        } else {
            local_38[0] = placement_new<tweak::CheckBox, char const*&, bool&>((void*)((long)arg1_00 + 32), arg1, arg2);
            local_3c = 1;
            ref_counter_base =
                (ref_counter_base*)placement_new<ref_counter_shared<tweak::CheckBox>, int, tweak::CheckBox*&>(
                    arg1_00, &local_3c, local_38);
            shared_ptr_do_enable_shared_from_this<tweak::CheckBox>(ref_counter_base, local_38[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x100a3be90
    shared_ptr_if_not_array<tweak::CheckBox>::type make_shared<tweak::CheckBox, char const*&>(const char*& arg1) {
        ref_counter_base* ref_counter_base;
        int local_34;
        CheckBox* local_30[2];

        auto arg1_00 = aligned_alloc(256, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<tweak::CheckBox>::type result;
        } else {
            local_30[0] = placement_new<tweak::CheckBox, char const*&>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_base =
                (ref_counter_base*)placement_new<ref_counter_shared<tweak::CheckBox>, int, tweak::CheckBox*&>(
                    arg1_00, &local_34, local_30);
            shared_ptr_do_enable_shared_from_this<tweak::CheckBox>(ref_counter_base, local_30[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x100a3bfd0
    shared_ptr_if_not_array<tweak::EditField>::type make_shared<tweak::EditField, char const*&, int&>(const char*& arg1,
                                                                                                      int& arg2) {
        ref_counter_base* ref_counter_base;
        int local_3c;
        EditField* local_38[2];

        auto arg1_00 = aligned_alloc(592, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<tweak::EditField>::type result;
        } else {
            local_38[0] = placement_new<tweak::EditField, char const*&, int&>((void*)((long)arg1_00 + 32), arg1, arg2);
            local_3c = 1;
            ref_counter_base =
                (ref_counter_base*)placement_new<ref_counter_shared<tweak::EditField>, int, tweak::EditField*&>(
                    arg1_00, &local_3c, local_38);
            shared_ptr_do_enable_shared_from_this<tweak::EditField>(ref_counter_base, local_38[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x100a3c150
    shared_ptr_if_not_array<tweak::Enum>::type
    make_shared<tweak::Enum, char const*&, StringEnum const*&, int*&>(const char*& arg1, const StringEnum*& arg2,
                                                                      int*& arg3) {
        ref_counter_base* ref_counter_base;
        int local_44;
        Enum* local_40[2];

        auto arg1_00 = aligned_alloc(368, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<tweak::Enum>::type result;
        } else {
            local_40[0] = placement_new<tweak::Enum, char const*&, StringEnum const*&, int*&>(
                (void*)((long)arg1_00 + 32), arg1, arg2, arg3);
            local_44 = 1;
            ref_counter_base = (ref_counter_base*)placement_new<ref_counter_shared<tweak::Enum>, int, tweak::Enum*&>(
                arg1_00, &local_44, local_40);
            shared_ptr_do_enable_shared_from_this<tweak::Enum>(ref_counter_base, local_40[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x100a3c770
    shared_ptr_if_not_array<tweak::Swatch>::type
    make_shared<tweak::Swatch, float*&, float*&, float*&, decltype(nullptr)>(float*& arg1, float*& arg2, float*& arg3,
                                                                             decltype(nullptr)&& arg4) {
        ref_counter_base* ref_counter_base;
        int local_44;
        Swatch* local_40[2];

        auto arg1_00 = aligned_alloc(368, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<tweak::Swatch>::type result;
        } else {
            local_40[0] = placement_new<tweak::Swatch, float*&, float*&, float*&, decltype(nullptr)>(
                (void*)((long)arg1_00 + 32), arg1, arg2, arg3, arg4);
            local_44 = 1;
            ref_counter_base =
                (ref_counter_base*)placement_new<ref_counter_shared<tweak::Swatch>, int, tweak::Swatch*&>(
                    arg1_00, &local_44, local_40);
            shared_ptr_do_enable_shared_from_this<tweak::Swatch>(ref_counter_base, local_40[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x100a3c8c0
    shared_ptr_if_not_array<tweak::Swatch>::type
    make_shared<tweak::Swatch, float*&, float*&, float*&, float*&>(float*& arg1, float*& arg2, float*& arg3,
                                                                   float*& arg4) {
        ref_counter_base* ref_counter_base;
        int local_44;
        Swatch* local_40[2];

        auto arg1_00 = aligned_alloc(368, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<tweak::Swatch>::type result;
        } else {
            local_40[0] = placement_new<tweak::Swatch, float*, float*, float*, float*>((void*)((long)arg1_00 + 32),
                                                                                       arg1, arg2, arg3, arg4);
            local_44 = 1;
            ref_counter_base =
                (ref_counter_base*)placement_new<ref_counter_shared<tweak::Swatch>, int, tweak::Swatch*&>(
                    arg1_00, &local_44, local_40);
            shared_ptr_do_enable_shared_from_this<tweak::Swatch>(ref_counter_base, local_40[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x100a3c9f0
    shared_ptr_if_not_array<tweak::Container>::type make_shared<tweak::Container, char const*&>(const char*& arg1) {
        ref_counter_base* ref_counter_base;
        int local_34;
        Container* local_30[2];

        auto arg1_00 = aligned_alloc(336, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<tweak::Container>::type result;
        } else {
            local_30[0] = placement_new<tweak::Container, char const*&>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_base =
                (ref_counter_base*)placement_new<ref_counter_shared<tweak::Container>, int, tweak::Container*&>(
                    arg1_00, &local_34, local_30);
            shared_ptr_do_enable_shared_from_this<tweak::Container>(ref_counter_base, local_30[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag

namespace jag::math {
    // 0x100a3d1b0
    void Multiply(unsigned int arg1, double arg2) {
        Multiply(arg1, (float)arg2);
    }

} // namespace jag::math

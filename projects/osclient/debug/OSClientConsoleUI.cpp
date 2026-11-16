// projects/osclient/debug/OSClientConsoleUI.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "OSClientConsoleUI.h"
#include "libs/hal/render/Render.h"
#include "libs/ui/components/Grid.h"

namespace jag::oldscape {
    // 0x10005cfd0
    void OSClientConsoleUI::Home() {
        SetBottomLine(field_60);
    }

    // 0x10005cfe0
    void OSClientConsoleUI::PageUp() {
        int iVar1 = field_56;
        int iVar2 = GetOnScreenLines();
        SetBottomLine(iVar1 + iVar2);
    }

    // 0x10005d010
    void OSClientConsoleUI::End() {
        SetBottomLine(0);
    }

    // 0x10005d020
    void OSClientConsoleUI::PageDown() {
        int iVar1 = field_56;
        int iVar2 = GetOnScreenLines();
        SetBottomLine(iVar1 - iVar2);
    }

    // 0x10005d060
    void OSClientConsoleUI::CopyEntireBufferToClipboard() {
        long lVar3;
        char* str;
        unsigned long arg2;
        StringView local_4a8;
        ReturnValue local_498;

        fixed_string<char, 1024> local_460;
        eastl::string local_490;
        local_490.reserve(1024);
        list<eastl::string>* local_470 = (list<eastl::string>*)&field_24;
        auto local_468 = local_470->rbegin();
        while (true) {
            local_498 = local_470->rend();
            if (!local_468 != local_498)
                break;
            lVar3 = *local_468;
            local_4a8.StringView<eastl::fixed_string<char, 512>>(*((lVar3 + 8)));
            jag::graphics::FontHelpers::StripTags<eastl::fixed_string<char, 512>>(local_460, &local_4a8);
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            arg2 = local_460.size();
            eastl::string::append(&local_490, str, arg2);
            local_490 += "\n";
            ++local_468;
        }
        if (local_490.empty() == '\0') {
            new (&local_468) Clipboard();
            local_468.SetText<eastl::basic_string<char, BucketAllocatorEASTL>>(local_490);
        }
    }

    // 0x10005da10
    char OSClientConsoleUI::GetDragTypeAtPosition(const jag::math::Point<int>& point) const {
        int iVar2;
        int iVar3;
        GeometryBatch* this_02;
        CoordMapSquare* this_03;
        ImmediateRenderContext* this_04;
        bool bVar5;
        bool bVar6;

        char cVar1 = ((StaticPointLight*)field_96.operator->())->GetUseTerrainHeight();
        if (cVar1) {
            this_02 = (GeometryBatch*)field_96.operator->();
            this_03 = (CoordMapSquare*)this_02->GetBoneIDMap();
            iVar2 = point.GetX();
            iVar3 = this_03->GetX();
            if (iVar3 <= iVar2) {
                iVar2 = point.GetX();
                iVar3 = this_03->Right();
                if (iVar2 < iVar3) {
                    iVar2 = point.GetZ();
                    iVar3 = this_03->GetZ();
                    if (iVar3 <= iVar2) {
                        iVar2 = point.GetZ();
                        iVar3 = this_03->MaxZ();
                        if (iVar2 < iVar3) {
                            return '\x05';
                        }
                    }
                }
            }
        }
        iVar2 = point.GetX();
        uint8_t* this_00 = m_bounds;
        iVar3 = this_00->Right();
        unsigned int uVar4 = -(iVar2 - iVar3);
        if ((int)uVar4 < 0) {
            uVar4 = iVar2 - iVar3;
        }
        if (uVar4 < 16) {
            iVar2 = point.GetZ();
            iVar3 = this_00->GetZ();
            if (iVar2 < iVar3 - 16)
                goto LAB_10005daef;
            iVar2 = point.GetZ();
            iVar3 = this_00->MaxZ();
            bVar6 = iVar2 < iVar3 + 16;
        } else {
        LAB_10005daef:
            bVar6 = false;
        }
        iVar2 = point.GetZ();
        iVar3 = this_00->MaxZ();
        uVar4 = -(iVar2 - iVar3);
        if ((int)uVar4 < 0) {
            uVar4 = iVar2 - iVar3;
        }
        if (uVar4 < 16) {
            iVar2 = point.GetX();
            iVar3 = this_00->GetX();
            if (iVar3 - 16 <= iVar2) {
                iVar2 = point.GetX();
                iVar3 = this_00->Right();
                bVar5 = iVar2 < iVar3 + 16;
                goto LAB_10005db66;
            }
        }
        bVar5 = false;
    LAB_10005db66:
        cVar1 = '\x02';
        if (bVar6 != false) {
            cVar1 = (bVar6 & bVar5) + 3;
        }
        if (bVar5 == false && bVar6 == false) {
            this_04 = (ImmediateRenderContext*)field_80.operator->();
            cVar1 = ((Rect<int>*)this_04->GetStats())->IsInside<int>(point);
        }
        return cVar1;
    }

    // 0x10005dbc0
    void OSClientConsoleUI::HandlePointerDrag(ConsoleDragType consoleDragType, const jag::math::Point<int>& point) {
        int iVar1;
        int iVar2;
        ShaderVariablePrecision SVar3;
        ScrollBarWidget* pSVar4;
        ShaderVariablePrecision* pSVar5;
        Rect<int>* this_00;
        int* piVar6;
        float fVar7;
        ServerConnectionWorkItem local_40;

        if (consoleDragType == 5) {
            pSVar4 = (ScrollBarWidget*)field_96.operator->();
            iVar1 = point.GetZ();
            pSVar4->MoveThumb(iVar1);
            pSVar4 = (ScrollBarWidget*)field_96.operator->();
            fVar7 = (float)pSVar4->Value();
            iVar1 = field_60;
            iVar2 = GetOnScreenLines();
            iVar1 = eastl::max<int>(iVar1 - iVar2, 0);
            iVar1 = jag::math::RoundFloatToInt((float)iVar1 * (1.0 - fVar7));
            field_56 = iVar1;
        } else {
            new (&local_40) jag::math::Rect(*m_bounds);
            if (consoleDragType == 1) {
                iVar1 = point.GetX();
                iVar2 = point.GetZ();
                local_40.Translate(iVar1, iVar2);
                pSVar5 = (ShaderVariablePrecision*)local_40.SSOBeginPtr();
                iVar1 = eastl::max<int>(*pSVar5, 0);
                local_40 = std::__cxx_atomic_base_impl(iVar1);
                pSVar5 = (ShaderVariablePrecision*)local_40.y();
                iVar1 = eastl::max<int>(*pSVar5, 0);
                local_40.SetZ(iVar1);
                this_00 = (Rect<int>*)field_152->GetSafeArea();
                iVar1 = local_40.Right();
                iVar2 = this_00->Right();
                if (iVar2 < iVar1) {
                    iVar1 = this_00->Right();
                    piVar6 = (int*)local_40.second();
                    local_40 = std::__cxx_atomic_base_impl(iVar1 - *piVar6);
                }
                iVar1 = local_40.MaxZ();
                iVar2 = this_00->MaxZ();
                if (iVar2 < iVar1) {
                    iVar1 = this_00->MaxZ();
                    piVar6 = (int*)local_40.qw();
                    local_40.SetZ(iVar1 - *piVar6);
                }
            } else {
                if (consoleDragType - 3 < 2) {
                    piVar6 = (int*)local_40.second();
                    iVar1 = *piVar6;
                    iVar2 = point.GetX();
                    SVar3 = field_136.GetX();
                    iVar1 = eastl::max<int>(iVar1 + iVar2, SVar3);
                    local_40 = ServerConnectionWorkItem(iVar1);
                }
                if ((consoleDragType == 4) || (consoleDragType == 2)) {
                    piVar6 = (int*)local_40.qw();
                    iVar1 = *piVar6;
                    iVar2 = point.GetZ();
                    SVar3 = field_136.GetZ();
                    iVar1 = eastl::max<int>(iVar1 + iVar2, SVar3);
                    local_40.SetLevel(iVar1);
                }
            }
            SetBounds(local_40);
        }
    }

    // 0x10005de60
    void OSClientConsoleUI::ScrollLines(int arg1) {
        int iVar1 = GetOnScreenLines();
        auto shaderVariablePrecision2 =
            eastl::min<jag::graphics::GraphicsQuality>(arg1 + field_56, (field_60 - iVar1) + 1);
        iVar1 = eastl::max<int>(0, shaderVariablePrecision2);
        SetBottomLine(iVar1);
    }

    // 0x10005e580
    void OSClientConsoleUI::SetOpacity(bool arg1) {
        uint32_t in_register_00000031;
        float fVar1;

        if ((((uint32_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0) {
            fVar1 = 0.5;
        } else {
            fVar1 = 0.85;
        }
        field_144 = fVar1;
    }

    // 0x10005f110
    void OSClientConsoleUI::Draw(bool arg1) {
        bool arg1_00;

        ClipBoundsToUI();
        if (field_68 != '\0') {
            LayoutWidgets();
        }
        int iVar3 = GetConsoleHeight();
        int iVar1 = field_64;
        uint8_t* this_00 = &field_96;
        ScrollBarWidget* this_01 = (ScrollBarWidget*)(*this_00).operator->();
        if (iVar3 < iVar1) {
            this_01->SetThumbRelativeHeight((float)iVar3 / (float)iVar1);
            if (((StaticPointLight*)(*this_00).operator->())->GetUseTerrainHeight() != '\0')
                goto LAB_10005f1a5;
            OnBottomLineChanged();
            this_01 = (ScrollBarWidget*)(*this_00).operator->();
            arg1_00 = true;
        } else {
            arg1_00 = false;
        }
        this_01->SetThumbVisible(arg1_00);
    LAB_10005f1a5:
        ((OutputWidget*)field_80.operator->())->SetBottomLine(field_56);
        auto this_04 = GetDrawContext();
        this_04->SetOpacity((int)(field_144 * 255.0));
        unsigned int arg2 = 6710886;
        if (arg1) {
            arg2 = 10526975;
        }
        this_04->DrawRect(*m_bounds, arg2);
        auto pWVar4 = field_80.operator->();
        pWVar4->Draw(*this_04);
        pWVar4 = (Widget*)field_88.operator->();
        pWVar4->Draw(*this_04);
        pWVar4 = (Widget*)(*this_00).operator->();
        pWVar4->Draw(*this_04);
    }

    // 0x10005f260
    OSClientConsoleUI::OSClientConsoleUI(Client& client, game::console::CommandLine& commandLine)
        : console::Console::HistoryListener() {
        *(uint64_t*)((long)&field_60 + 1) = 0;
        field_56 = 0;
        field_60 = 0;
        field_72.unique_ptr<true, void>();
        field_80.unique_ptr<true, void>();
        field_88.unique_ptr<true, void>();
        field_96.unique_ptr<true, void>();
        new (m_bounds) shared_ptr();
        new (&field_120) dash3d::GridRect(0, 0, 500, 200);
        new (&field_136) sidebars::SideBarData(200, 100);
        field_144 = 0.85;
        field_152 = client;
        SetBounds(field_120);
        CreateWidgets(commandLine);
    }

    // 0x10005f400
    void OSClientConsoleUI::SetBounds(const jag::math::Rect<int>& rect) {
        if (*m_bounds != rect != '\0') {
            *m_bounds = rect;
            field_68 = 1;
        }
    }

    // 0x10005f440
    void OSClientConsoleUI::CreateWidgets(game::console::CommandLine& commandLine) {
        auto local_30 = std::make_unique<widgets::OutputWidget, eastl::list<console::Line>&>(field_24);
        uint8_t* puVar4 = &field_80;
        *puVar4 = local_30;
        ServerConnectionWorkItem* pSVar1 = (ServerConnectionWorkItem*)(*puVar4).operator->();
        new (pSVar1) ServerConnectionWorkItem(1973790);
        Widget* pWVar2 = (Widget*)(*puVar4).operator->();
        pWVar2->SetPadding((Padding*)&DrawOptions::OUTPUT_PADDING);
        local_30 = std::make_unique<widgets::CommandLineWidget, game::console::CommandLine&>(commandLine);
        puVar4 = &field_88;
        *puVar4 = local_30;
        StockPlayerOffer* pSVar3 = (StockPlayerOffer*)(*puVar4).operator->();
        pSVar3->SetCompletedCount(16777215);
        pSVar1 = (ServerConnectionWorkItem*)(*puVar4).operator->();
        new (pSVar1) ServerConnectionWorkItem(1973790);
        ((Minimap*)(*puVar4).operator->())->SetLevel(6710886);
        pWVar2 = (Widget*)(*puVar4).operator->();
        pWVar2->SetBorderTop(true);
        ((Component*)(*puVar4).operator->())->SetCurrentWidth(10526880);
        ((OutputWidget*)(*puVar4).operator->())->SetBottomLine(2236962);
        pWVar2 = (Widget*)(*puVar4).operator->();
        pWVar2->SetPadding(8, 4);
        local_30 = std::make_unique<widgets::ScrollBarWidget>();
        puVar4 = &field_96;
        *puVar4 = local_30;
        pSVar1 = (ServerConnectionWorkItem*)(*puVar4).operator->();
        new (pSVar1) ServerConnectionWorkItem(1973790);
        pSVar3 = (StockPlayerOffer*)(*puVar4).operator->();
        pSVar3->SetCompletedCount(6710886);
        pWVar2 = (Widget*)(*puVar4).operator->();
        pWVar2->SetBorderLeft(true);
        pWVar2 = (Widget*)(*puVar4).operator->();
        pWVar2->SetPadding(2);
    }

    // 0x10005f650
    OSClientConsoleUI::~OSClientConsoleUI() {
        field_80.reset(nullptr);
        field_72.reset(nullptr);
        field_88.reset(nullptr);
        field_96.reset(nullptr);
        field_96.~unique_ptr();
        field_88.~unique_ptr();
        field_80.~unique_ptr();
        field_72.~unique_ptr();
        field_24.~list();
        field_8->~shared_ptr();
    }

    // 0x10005f7e0
    void OSClientConsoleUI::OnHistoryEntryAdded(const console::Line& line, bool arg2) {
        MeasureLine(0, 0, line);
        field_24.push_front(line);
        field_60 = field_60 + 0;
        field_64 = field_64 + 0;
        if (0 < field_56) {
            ScrollLines(0);
        }
        if (arg2) {
            field_24.pop_back();
        }
    }

    // 0x10005f860
    void OSClientConsoleUI::MeasureLine(int& arg1, int& arg2, const console::Line& line) const {
        int iVar2;
        int iVar3;
        PixfontGeneric* this_00;
        char* str;
        eastl::string local_68;
        int* local_40;
        int* local_38;

        if (field_8->operator_cast_to_bool() != '\0') {
            local_40 = arg2;
            local_38 = arg1;
            this_00 = (PixfontGeneric*)(*field_8).operator->();
            str = (char*)line.field_8.begin();
            local_68 = eastl::string(str);
            iVar2 = GetTextExtentWidth();
            iVar2 = this_00->PredictLinesMultiline(local_68, iVar2);
            iVar3 = GetLineHeight();
            *local_38 = iVar3 * iVar2;
            *local_40 = iVar2;
        }
    }

    // 0x10005f9b0
    void OSClientConsoleUI::OnHistoryCleared() {
        field_24.clear();
        field_60 = 0;
    }

    // 0x10005fa00
    void OSClientConsoleUI::GetTextExtentWidth() const {
        auto this_00 = field_80.operator->();
        ((CommandLine*)this_00->GetPos())->GetPos();
    }

    // 0x10005fa20
    int OSClientConsoleUI::GetLineHeight() const {
        long lVar2 = (*field_8).operator->();
        int iVar1 = *(int*)(lVar2 + 4);
        lVar2 = (*field_8).operator->();
        return iVar1 + *(int*)(lVar2 + 8);
    }

    // 0x10005fa80
    void OSClientConsoleUI::SetBottomLine(int arg1) {
        int local_24[3];

        local_24[1] = 0;
        int iVar1 = field_60;
        local_24[0] = arg1;
        local_24[2] = GetOnScreenLines();
        local_24[2] = iVar1 - local_24[2];
        iVar1 = jag::math::Clamp<int>(*local_24, *(local_24 + 1), *(local_24 + 2));
        if (iVar1 != field_56) {
            field_56 = iVar1;
            OnBottomLineChanged();
        }
    }

    // 0x10005fae0
    void OSClientConsoleUI::OnBottomLineChanged() {
        int iVar1 = GetOnScreenLines();
        int iVar2 = field_60 - iVar1;
        if (iVar2 != 0 && iVar1 <= field_60) {
            iVar1 = field_56;
            ((ScrollBarWidget*)field_96.operator->())->Value(1.0 - (float)iVar1 / (float)iVar2);
        }
    }

    // 0x10005fba0
    int OSClientConsoleUI::GetCommandLineHeight() const {
        long lVar2 = ((Widget*)field_88.operator->())->GetPadding();
        return GetLineHeight() + *(int*)(lVar2 + 4) + *(int*)(lVar2 + 12);
    }

    // 0x10005fc00
    void OSClientConsoleUI::GetConsoleHeight() const {
        auto this_00 = field_80.operator->();
        ((Minimap*)this_00->GetStats())->GetLevel();
    }

    // 0x10005fc40
    void OSClientConsoleUI::RecalculateLinesLayout() {
        Line* line;

        auto local_48 = field_24.begin();
        auto local_40 = field_24.end();
        bool cVar1 = local_48 != local_40;
        if (cVar1) {
            do {
                line = (Line*)*local_48;
                MeasureLine(0, 0, *line);
                ++local_48;
                cVar1 = local_48 != local_40;
            } while (cVar1);
        }
        field_60 = 0;
        field_64 = 0;
    }

    // 0x10005ff80
    void OSClientConsoleUI::LayoutWidgets() {
        Rect<unsigned int> local_58(*m_bounds);
        local_58.Shrink(1, 1);
        int iVar2 = GetCommandLineHeight();
        int local_34 = iVar2;
        auto local_40 = field_80.operator->();
        auto piVar4 = local_58.SSOBeginPtr();
        int local_44 = *piVar4;
        piVar4 = (int*)local_58.y();
        int iVar1 = *piVar4;
        piVar4 = (int*)local_58.second();
        int iVar3 = *piVar4;
        piVar4 = (int*)local_58.qw();
        local_40->Layout(local_44, iVar1, iVar3 - 16, *piVar4 - iVar2);
        local_40 = (Widget*)field_88.operator->();
        piVar4 = (int*)local_58.SSOBeginPtr();
        iVar1 = *piVar4;
        iVar2 = local_58.MaxZ();
        iVar3 = local_34;
        iVar2 = iVar2 - local_34;
        piVar4 = (int*)local_58.second();
        local_40->Layout(iVar1, iVar2, *piVar4, iVar3);
        auto this_00 = field_96.operator->();
        iVar3 = local_58.Right();
        piVar4 = (int*)local_58.y();
        iVar1 = *piVar4;
        piVar4 = (int*)local_58.qw();
        this_00->Layout(iVar3 - 16, iVar1, 16, *piVar4 - local_34);
        RecalculateLinesLayout();
        field_68 = 0;
    }

    // 0x100060200
    void OSClientConsoleUI::ClipBoundsToUI() {

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        m_bounds->Clip(field_152->GetUISafeArea(), local_48);
        SetBounds(local_48);
    }

    // 0x1000602d0
    void OSClientConsoleUI::GetDrawContext() {
        uint64_t* puVar2;
        NXTPix2D* nxtPix2D;
        shared_ptr<jstring::PixfontGeneric>* pixfontGeneric;
        ReturnValue local_30;

        uint8_t* this_00 = &field_72;
        if (this_00->get() == 0) {
            puVar2 = (uint64_t*)field_152->GetMemoryCache();
            nxtPix2D = (NXTPix2D*)(**(void (**)(...))*puVar2)(puVar2);
            pixfontGeneric = (shared_ptr<jstring::PixfontGeneric>*)field_152->field_19128[3];
            local_30 =
                std::make_unique<widgets::DrawContext, graphics::NXTPix2D&, shared_ptr<jstring::PixfontGeneric>&>(
                    *nxtPix2D, *pixfontGeneric);
            *this_00 = local_30;
        }
        **this_00;
    }

} // namespace jag::oldscape

namespace jag::tweak {
    // 0x10005f250: Placement::Placement(int, int, int, int) has the same machine code as oldscape::widgets::Padding::Padding(int, int, int, int)

} // namespace jag::tweak

namespace jag::render {
    // 0x10005f250: GLFormat::GLFormat(int, unsigned int, unsigned int, unsigned int) has the same machine code as oldscape::widgets::Padding::Padding(int, int, int, int)

} // namespace jag::render

namespace jag::oldscape::dash3d {
    // 0x10005f250: GridRect::GridRect(int, int, int, int) has the same machine code as widgets::Padding::Padding(int, int, int, int)

} // namespace jag::oldscape::dash3d

// projects/osclient/debug/OSClientConsoleUI.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "OSClientConsoleUI.h"
#include "libs/hal/render/Render.h"
#include "libs/ui/components/Grid.h"

namespace jag::oldscape {
    // 0x10005cfd0, 16 bytes, placed by class name and debug map
    // OSClientConsoleUI::Home()
    void OSClientConsoleUI::Home() {
        SetBottomLine(this, field_60);
    }

    // 0x10005cfe0, 48 bytes, placed by class name and debug map
    // OSClientConsoleUI::PageUp()
    void OSClientConsoleUI::PageUp() {
        int iVar1;
        int iVar2;

        iVar1 = field_56;
        iVar2 = GetOnScreenLines(this);
        SetBottomLine(this, iVar1 + iVar2);
    }

    // 0x10005d010, 16 bytes, placed by class name and debug map
    // OSClientConsoleUI::End()
    void OSClientConsoleUI::End() {
        SetBottomLine(this, 0);
    }

    // 0x10005d020, 48 bytes, placed by class name and debug map
    // OSClientConsoleUI::PageDown()
    void OSClientConsoleUI::PageDown() {
        int iVar1;
        int iVar2;

        iVar1 = field_56;
        iVar2 = GetOnScreenLines(this);
        SetBottomLine(this, iVar1 - iVar2);
    }

    // 0x10005d060, 448 bytes, placed by class name
    // OSClientConsoleUI::CopyEntireBufferToClipboard()
    void OSClientConsoleUI::CopyEntireBufferToClipboard() {
        long lVar3;
        char* pcVar4;
        ulong uVar5;
        uchar* extraout_RDX;
        StringView SVar6;
        StringView local_4a8;
        list<eastl::string, eastl::allocator> local_498[8];
        eastl::string local_490[32];
        undefined1* local_470;
        list<eastl::string, eastl::allocator> local_468[8];
        fixed_string<char, 1024, true, eastl::allocator> local_460[1064];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 1024, true, eastl::allocator>::fixed_string(local_460);
        eastl::string::basic_string(local_490);
        eastl::string::reserve(local_490, 1024);
        local_470 = &field_24;
        eastl::list<eastl::string, eastl::allocator>::rbegin(local_468);
        while (true) {
            eastl::list<eastl::string, eastl::allocator>::rend(local_498);
            if (!eastl::operator!=((reverse_iterator*)local_468, (reverse_iterator*)local_498))
                break;
            lVar3 =
                eastl::reverse_iterator<eastl::ListIterator<eastl::string, eastl::string*, eastl::string&>>::operator*(
                    (reverse_iterator<eastl::ListIterator<eastl::string, eastl::string*, eastl::string&>>*)local_468);
            StringView::StringView<eastl::fixed_string<char, 512, true, eastl::allocator>>(&local_4a8,
                                                                                           (fixed_string*)(lVar3 + 8));
            SVar6.field_8 = extraout_RDX;
            SVar6.field_0 = (ulong)&local_4a8;
            jag::graphics::FontHelpers::StripTags<eastl::fixed_string<char, 512, true, eastl::allocator>>(
                (fixed_string*)local_460, SVar6);
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar5 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            eastl::string::append(local_490, pcVar4, uVar5);
            eastl::string::operator+=(local_490, "\n");
            eastl::reverse_iterator<eastl::ListIterator<eastl::string, eastl::string*, eastl::string&>>::operator++(
                (reverse_iterator<eastl::ListIterator<eastl::string, eastl::string*, eastl::string&>>*)local_468);
        }
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
            '\0') {
            new (local_468) Clipboard();
            Clipboard::SetText<eastl::basic_string<char, BucketAllocatorEASTL>>((basic_string*)local_468);
            local_468->~Clipboard();
        }
        eastl::string::~basic_string(local_490);
        /* WARNING: Subroutine does not return */
        local_460->~fixed_string();
    }

    // 0x10005da10, 432 bytes, placed by class name
    // OSClientConsoleUI::GetDragTypeAtPosition(jag::math::Point<int> const&) const
    char OSClientConsoleUI::GetDragTypeAtPosition(Point* param_1) {
        undefined1* this_00;
        char cVar1;
        int iVar2;
        int iVar3;
        uint uVar4;
        StaticPointLight* this_01;
        GeometryBatch* this_02;
        CoordMapSquare* this_03;
        ImmediateRenderContext* this_04;
        Rect<int>* this_05;
        bool bVar5;
        bool bVar6;

        this_01 =
            (StaticPointLight*)
                std::unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>::operator->(
                    (unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>*)&field_96);
        cVar1 = this_01->GetUseTerrainHeight();
        if (cVar1 != '\0') {
            this_02 =
                (GeometryBatch*)std::
                    unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>::operator->((
                        unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>*)&field_96);
            this_03 = (CoordMapSquare*)this_02->GetBoneIDMap();
            iVar2 = param_1->GetX();
            iVar3 = this_03->GetX();
            if (iVar3 <= iVar2) {
                iVar2 = param_1->GetX();
                iVar3 = this_03->Right();
                if (iVar2 < iVar3) {
                    iVar2 = param_1->GetZ();
                    iVar3 = this_03->GetZ();
                    if (iVar3 <= iVar2) {
                        iVar2 = param_1->GetZ();
                        iVar3 = this_03->MaxZ();
                        if (iVar2 < iVar3) {
                            return '\x05';
                        }
                    }
                }
            }
        }
        iVar2 = param_1->GetX();
        this_00 = field_104;
        iVar3 = this_00->Right();
        uVar4 = -(iVar2 - iVar3);
        if ((int)uVar4 < 0) {
            uVar4 = iVar2 - iVar3;
        }
        if (uVar4 < 16) {
            iVar2 = param_1->GetZ();
            iVar3 = this_00->GetZ();
            if (iVar2 < iVar3 + -16)
                goto LAB_10005daef;
            iVar2 = param_1->GetZ();
            iVar3 = this_00->MaxZ();
            bVar6 = iVar2 < iVar3 + 16;
        } else {
        LAB_10005daef:
            bVar6 = false;
        }
        iVar2 = param_1->GetZ();
        iVar3 = this_00->MaxZ();
        uVar4 = -(iVar2 - iVar3);
        if ((int)uVar4 < 0) {
            uVar4 = iVar2 - iVar3;
        }
        if (uVar4 < 16) {
            iVar2 = param_1->GetX();
            iVar3 = this_00->GetX();
            if (iVar3 + -16 <= iVar2) {
                iVar2 = param_1->GetX();
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
            this_04 =
                (ImmediateRenderContext*)
                    std::unique_ptr<widgets::OutputWidget, std::default_delete<widgets::OutputWidget>>::operator->(
                        (unique_ptr<widgets::OutputWidget, std::default_delete<widgets::OutputWidget>>*)&field_80);
            this_05 = (Rect<int>*)this_04->GetStats();
            cVar1 = jag::math::Rect<int>::IsInside<int>(this_05, param_1);
        }
        return cVar1;
    }

    // 0x10005dbc0, 560 bytes, placed by class name
    // OSClientConsoleUI::HandlePointerDrag(ConsoleDragType, jag::math::Point<int> const&)
    void OSClientConsoleUI::HandlePointerDrag(int param_2, CoordMapSquare* param_3) {
        int iVar1;
        int iVar2;
        uint uVar3;
        int iVar4;
        undefined4 uVar5;
        ScrollBarWidget* pSVar6;
        vector* pvVar7;
        int* piVar8;
        Rect<int>* this_00;
        type* ptVar9;
        float fVar10;
        ServerConnectionWorkItem local_40;

        if (param_2 == 5) {
            pSVar6 =
                (ScrollBarWidget*)std::
                    unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>::operator->((
                        unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>*)&field_96);
            iVar1 = param_3->GetZ();
            pSVar6->MoveThumb(iVar1);
            pSVar6 =
                (ScrollBarWidget*)std::
                    unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>::operator->((
                        unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>*)&field_96);
            fVar10 = (float)pSVar6->Value();
            iVar1 = field_60;
            iVar2 = GetOnScreenLines(this);
            iVar1 = eastl::max<int>(iVar1 - iVar2, 0);
            iVar1 = jag::math::RoundFloatToInt((float)iVar1 * (1.0 - fVar10));
            field_56 = iVar1;
        } else {
            new (&local_40) jag::math::Rect<unsigned int>(field_104);
            if (param_2 == 1) {
                uVar3 = param_3->GetX();
                iVar1 = param_3->GetZ();
                ptVar9 = (type*)(ulong)uVar3;
                local_40.Translate(uVar3, iVar1);
                pvVar7 = local_40.SSOBeginPtr(ptVar9);
                eastl::max<int>(*(int*)pvVar7, 0);
                new (&local_40) std::__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>();
                piVar8 = (int*)local_40.y();
                iVar1 = eastl::max<int>(*piVar8, 0);
                local_40.SetZ(iVar1);
                this_00 = (Rect<int>*)field_152->GetSafeArea();
                iVar1 = local_40.Right();
                iVar2 = this_00->Right();
                if (iVar2 < iVar1) {
                    iVar1 = this_00->Right();
                    piVar8 = (int*)local_40.second();
                    new (&local_40)
                        std::__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>(iVar1 - *piVar8);
                }
                iVar1 = local_40.MaxZ();
                iVar2 = jag::math::Rect<int>::MaxZ(this_00);
                if (iVar2 < iVar1) {
                    iVar1 = jag::math::Rect<int>::MaxZ(this_00);
                    piVar8 = (int*)local_40.qw();
                    local_40.SetZ(iVar1 - *piVar8);
                }
            } else {
                if (param_2 - 3U < 2) {
                    piVar8 = (int*)local_40.second();
                    iVar1 = *piVar8;
                    iVar2 = param_3->GetX();
                    iVar4 = (&field_136)->GetX();
                    uVar5 = eastl::max<int>(iVar1 + iVar2, iVar4);
                    new (&local_40) ServerConnectionWorkItem(uVar5);
                }
                if ((param_2 == 4) || (param_2 == 2)) {
                    piVar8 = (int*)local_40.qw();
                    iVar1 = *piVar8;
                    iVar2 = param_3->GetZ();
                    iVar4 = (&field_136)->GetZ();
                    iVar1 = eastl::max<int>(iVar1 + iVar2, iVar4);
                    local_40.SetLevel(iVar1);
                }
            }
            SetBounds(this, (Rect*)&local_40);
        }
    }

    // 0x10005de60, 64 bytes, placed by class name
    // OSClientConsoleUI::ScrollLines(int)
    void OSClientConsoleUI::ScrollLines(int param_1) {
        int iVar1;

        iVar1 = GetOnScreenLines(this);
        iVar1 = eastl::min<jag::graphics::GraphicsQuality>(param_1 + field_56, (field_60 - iVar1) + 1);
        iVar1 = eastl::max<int>(0, iVar1);
        SetBottomLine(this, iVar1);
    }

    // 0x10005e580, 48 bytes, placed by class name
    // OSClientConsoleUI::SetOpacity(bool)
    void OSClientConsoleUI::SetOpacity(bool param_1) {
        undefined3 in_register_00000031;
        float fVar1;

        if (CONCAT31(in_register_00000031, param_1) == 0) {
            fVar1 = 0.5;
        } else {
            fVar1 = 0.85;
        }
        field_144 = fVar1;
    }

    // 0x10005f110, 320 bytes, placed by class name
    // OSClientConsoleUI::Draw(bool)
    void OSClientConsoleUI::Draw(bool param_1) {
        undefined1* this_00;
        int iVar1;
        int iVar3;
        ScrollBarWidget* this_01;
        StaticPointLight* this_02;
        OutputWidget* this_03;
        DrawContext* this_04;
        Widget* pWVar4;
        uint uVar5;
        bool bVar6;

        ClipBoundsToUI(this);
        if (field_68 != '\0') {
            LayoutWidgets(this);
        }
        iVar3 = GetConsoleHeight(this);
        iVar1 = field_64;
        this_00 = &field_96;
        this_01 =
            (ScrollBarWidget*)
                std::unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>::operator->(
                    (unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>*)this_00);
        if (iVar3 < iVar1) {
            this_01->SetThumbRelativeHeight((float)iVar3 / (float)iVar1);
            this_02 =
                (StaticPointLight*)std::
                    unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>::operator->(
                        (unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>*)this_00);
            if (this_02->GetUseTerrainHeight() != '\0')
                goto LAB_10005f1a5;
            OnBottomLineChanged(this);
            this_01 =
                (ScrollBarWidget*)std::
                    unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>::operator->(
                        (unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>*)this_00);
            bVar6 = true;
        } else {
            bVar6 = false;
        }
        this_01->SetThumbVisible(bVar6);
    LAB_10005f1a5:
        this_03 = (OutputWidget*)
                      std::unique_ptr<widgets::OutputWidget, std::default_delete<widgets::OutputWidget>>::operator->(
                          (unique_ptr<widgets::OutputWidget, std::default_delete<widgets::OutputWidget>>*)&field_80);
        this_03->SetBottomLine(field_56);
        this_04 = (DrawContext*)GetDrawContext(this);
        this_04->SetOpacity((int)(field_144 * 255.0));
        uVar5 = 6710886;
        if (param_1) {
            uVar5 = 10526975;
        }
        this_04->DrawRect((Rect*)field_104, uVar5);
        pWVar4 =
            (Widget*)std::unique_ptr<widgets::OutputWidget, std::default_delete<widgets::OutputWidget>>::operator->(
                (unique_ptr<widgets::OutputWidget, std::default_delete<widgets::OutputWidget>>*)&field_80);
        pWVar4->Draw(this_04);
        pWVar4 =
            (Widget*)std::unique_ptr<widgets::CommandLineWidget, std::default_delete<widgets::CommandLineWidget>>::
            operator->(
                (unique_ptr<widgets::CommandLineWidget, std::default_delete<widgets::CommandLineWidget>>*)&field_88);
        pWVar4->Draw(this_04);
        pWVar4 =
            (Widget*)
                std::unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>::operator->(
                    (unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>*)this_00);
        pWVar4->Draw(this_04);
    }

    // 0x10005f260, 336 bytes, base-object constructor, placed by class name
    // OSClientConsoleUI::OSClientConsoleUI(Client&, game::console::CommandLine&)
    void OSClientConsoleUI::OSClientConsoleUI(Client* param_1, CommandLine* param_2) {
        new (this) console::Console::HistoryListener();
        field_0 = &PTR__OSClientConsoleUI_100ef2760;
        new (field_8, (_func_decltype_nullptr*)param_1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_24) eastl::list<console::Line, eastl::allocator>();
        *(undefined8*)((long)&field_60 + 1) = 0;
        field_56 = 0;
        field_60 = 0;
        std::unique_ptr<widgets::DrawContext, std::default_delete<widgets::DrawContext>>::unique_ptr<true, void>(
            (unique_ptr<widgets::DrawContext, std::default_delete<widgets::DrawContext>>*)&field_72);
        std::unique_ptr<widgets::OutputWidget, std::default_delete<widgets::OutputWidget>>::unique_ptr<true, void>(
            (unique_ptr<widgets::OutputWidget, std::default_delete<widgets::OutputWidget>>*)&field_80);
        std::unique_ptr<widgets::CommandLineWidget, std::default_delete<widgets::CommandLineWidget>>::unique_ptr<true,
                                                                                                                 void>(
            (unique_ptr<widgets::CommandLineWidget, std::default_delete<widgets::CommandLineWidget>>*)&field_88);
        std::unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>::unique_ptr<true,
                                                                                                             void>(
            (unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>*)&field_96);
        new (field_104, (_func_decltype_nullptr*)param_1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_120, 0, 0, 500, 200) dash3d::GridRect();
        new (&field_136, 200, 100) sidebars::SideBarData();
        field_144 = 0.85;
        field_152 = param_1;
        SetBounds(this, (Rect*)&field_120);
        CreateWidgets((CommandLine*)this);
    }

    // 0x10005f400, 64 bytes, placed by class name
    // OSClientConsoleUI::SetBounds(jag::math::Rect<int> const&)
    void OSClientConsoleUI::SetBounds(Rect* param_1) {
        if (jag::math::Rect<int>::operator!=((Rect<int>*)field_104, param_1) != '\0') {
            jag::math::Rect<unsigned int>::operator=((Rect<unsigned int>*)field_104, param_1);
            field_68 = 1;
        }
    }

    // 0x10005f440, 432 bytes, placed by class name
    // OSClientConsoleUI::CreateWidgets(game::console::CommandLine&)
    void OSClientConsoleUI::CreateWidgets(CommandLine* param_1) {
        ServerConnectionWorkItem* pSVar1;
        Widget* pWVar2;
        StockPlayerOffer* pSVar3;
        Minimap* this;
        Component* this_00;
        OutputWidget* this_01;
        undefined1* puVar4;
        list local_30[8];

        std::make_unique<widgets::OutputWidget, eastl::list<console::Line, eastl::allocator>&>(local_30);
        puVar4 = &param_1->field_80;
        std::unique_ptr<widgets::OutputWidget, std::default_delete<widgets::OutputWidget>>::operator=(
            (unique_ptr<widgets::OutputWidget, std::default_delete<widgets::OutputWidget>>*)puVar4,
            (unique_ptr*)local_30);
        local_30->~unique_ptr();
        pSVar1 = (ServerConnectionWorkItem*)
                     std::unique_ptr<widgets::OutputWidget, std::default_delete<widgets::OutputWidget>>::operator->(
                         (unique_ptr<widgets::OutputWidget, std::default_delete<widgets::OutputWidget>>*)puVar4);
        ServerConnectionWorkItem::ServerConnectionWorkItem(pSVar1, 1973790);
        pWVar2 =
            (Widget*)std::unique_ptr<widgets::OutputWidget, std::default_delete<widgets::OutputWidget>>::operator->(
                (unique_ptr<widgets::OutputWidget, std::default_delete<widgets::OutputWidget>>*)puVar4);
        pWVar2->SetPadding((Padding*)&DrawOptions::OUTPUT_PADDING);
        std::make_unique<widgets::CommandLineWidget, game::console::CommandLine&>((CommandLine*)local_30);
        puVar4 = &param_1->field_88;
        std::unique_ptr<widgets::CommandLineWidget, std::default_delete<widgets::CommandLineWidget>>::operator=(
            (unique_ptr<widgets::CommandLineWidget, std::default_delete<widgets::CommandLineWidget>>*)puVar4,
            (unique_ptr*)local_30);
        local_30->~unique_ptr();
        pSVar3 =
            (StockPlayerOffer*)std::
                unique_ptr<widgets::CommandLineWidget, std::default_delete<widgets::CommandLineWidget>>::operator->(
                    (unique_ptr<widgets::CommandLineWidget, std::default_delete<widgets::CommandLineWidget>>*)puVar4);
        pSVar3->SetCompletedCount(16777215);
        pSVar1 =
            (ServerConnectionWorkItem*)std::
                unique_ptr<widgets::CommandLineWidget, std::default_delete<widgets::CommandLineWidget>>::operator->(
                    (unique_ptr<widgets::CommandLineWidget, std::default_delete<widgets::CommandLineWidget>>*)puVar4);
        ServerConnectionWorkItem::ServerConnectionWorkItem(pSVar1, 1973790);
        this = (Minimap*)std::unique_ptr<widgets::CommandLineWidget, std::default_delete<widgets::CommandLineWidget>>::
               operator->(
                   (unique_ptr<widgets::CommandLineWidget, std::default_delete<widgets::CommandLineWidget>>*)puVar4);
        SetLevel(6710886);
        pWVar2 = (Widget*)std::unique_ptr<widgets::CommandLineWidget, std::default_delete<widgets::CommandLineWidget>>::
                 operator->(
                     (unique_ptr<widgets::CommandLineWidget, std::default_delete<widgets::CommandLineWidget>>*)puVar4);
        pWVar2->SetBorderTop(true);
        this_00 =
            (Component*)std::unique_ptr<widgets::CommandLineWidget, std::default_delete<widgets::CommandLineWidget>>::
            operator->(
                (unique_ptr<widgets::CommandLineWidget, std::default_delete<widgets::CommandLineWidget>>*)puVar4);
        this_00->SetCurrentWidth(10526880);
        this_01 =
            (OutputWidget*)std::
                unique_ptr<widgets::CommandLineWidget, std::default_delete<widgets::CommandLineWidget>>::operator->(
                    (unique_ptr<widgets::CommandLineWidget, std::default_delete<widgets::CommandLineWidget>>*)puVar4);
        this_01->SetBottomLine(2236962);
        pWVar2 = (Widget*)std::unique_ptr<widgets::CommandLineWidget, std::default_delete<widgets::CommandLineWidget>>::
                 operator->(
                     (unique_ptr<widgets::CommandLineWidget, std::default_delete<widgets::CommandLineWidget>>*)puVar4);
        pWVar2->SetPadding(8, 4);
        std::make_unique<widgets::ScrollBarWidget>();
        puVar4 = &param_1->field_96;
        std::unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>::operator=(
            (unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>*)puVar4,
            (unique_ptr*)local_30);
        local_30->~unique_ptr();
        pSVar1 =
            (ServerConnectionWorkItem*)
                std::unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>::operator->(
                    (unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>*)puVar4);
        ServerConnectionWorkItem::ServerConnectionWorkItem(pSVar1, 1973790);
        pSVar3 =
            (StockPlayerOffer*)
                std::unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>::operator->(
                    (unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>*)puVar4);
        pSVar3->SetCompletedCount(6710886);
        pWVar2 =
            (Widget*)
                std::unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>::operator->(
                    (unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>*)puVar4);
        pWVar2->SetBorderLeft(true);
        pWVar2 =
            (Widget*)
                std::unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>::operator->(
                    (unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>*)puVar4);
        pWVar2->SetPadding(2);
    }

    // 0x10005f640, 16 bytes, complete-object constructor, placed by class name
    // OSClientConsoleUI::OSClientConsoleUI(Client&, game::console::CommandLine&): jumps straight to the base-object constructor

    // 0x10005f650, 160 bytes, base-object destructor, placed by class name
    // OSClientConsoleUI::~OSClientConsoleUI()
    void OSClientConsoleUI::~OSClientConsoleUI() {
        field_0 = &PTR__OSClientConsoleUI_100ef2760;
        (&field_80, (OutputWidget*)0)->reset();
        (&field_72, (DrawContext*)0)->reset();
        (&field_88, (CommandLineWidget*)0)->reset();
        (&field_96, (ScrollBarWidget*)0)->reset();
        (&field_96)->~unique_ptr();
        (&field_88)->~unique_ptr();
        (&field_80)->~unique_ptr();
        (&field_72)->~unique_ptr();
        (&field_24)->~list();
        field_8->~shared_ptr();
        ~AutoSingleton();
    }

    // 0x10005f7b0, 16 bytes, complete-object destructor, placed by class name
    // OSClientConsoleUI::~OSClientConsoleUI(): jumps straight to the base-object destructor

    // 0x10005f7c0, 32 bytes, deleting destructor, placed by class name
    // OSClientConsoleUI::~OSClientConsoleUI()
    void OSClientConsoleUI::~OSClientConsoleUI() {
        ~OSClientConsoleUI(this);
        operator_delete(this);
    }

    // 0x10005f7e0, 128 bytes, placed by class name
    // OSClientConsoleUI::OnHistoryEntryAdded(console::Line const&, bool)
    void OSClientConsoleUI::OnHistoryEntryAdded(Line* param_1, bool param_2) {
        int local_30;
        int local_2c;

        local_30 = 0;
        local_2c = 0;
        MeasureLine(this, &local_30, &local_2c, param_1);
        (&field_24, param_1)->push_front();
        field_60 = field_60 + local_2c;
        field_64 = field_64 + local_30;
        if (0 < field_56) {
            ScrollLines(this, local_2c);
        }
        if (param_2) {
            (&field_24)->pop_back();
        }
    }

    // 0x10005f860, 208 bytes, placed by class name
    // OSClientConsoleUI::MeasureLine(int&, int&, console::Line const&) const
    void OSClientConsoleUI::MeasureLine(int* param_1, int* param_2, Line* param_3) {
        int iVar2;
        int iVar3;
        PixfontGeneric* this_00;
        char* pcVar4;
        eastl::string local_68[32];
        allocator local_48[8];
        int* local_40;
        int* local_38;

        if (field_8->operator_cast_to_bool()) {
            local_40 = param_2;
            local_38 = param_1;
            this_00 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
                (shared_ptr<jstring::PixfontGeneric>*)field_8);
            pcVar4 = (char*)eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
            eastl::allocator::allocator(local_48, "EASTL basic_string");
            eastl::string::basic_string(local_68, pcVar4, local_48);
            iVar2 = GetTextExtentWidth(this);
            iVar2 = this_00->PredictLinesMultiline(local_68, iVar2);
            eastl::string::~basic_string(local_68);
            iVar3 = GetLineHeight(this);
            *local_38 = iVar3 * iVar2;
            *local_40 = iVar2;
        }
    }

    // 0x10005f9b0, 32 bytes, placed by class name
    // OSClientConsoleUI::OnHistoryCleared()
    void OSClientConsoleUI::OnHistoryCleared() {
        (&field_24)->clear();
        field_60 = 0;
    }

    // 0x10005fa00, 32 bytes, placed by class name
    // OSClientConsoleUI::GetTextExtentWidth() const
    void OSClientConsoleUI::GetTextExtentWidth() {
        Camera* this_00;
        CommandLine* this_01;

        this_00 =
            (Camera*)std::unique_ptr<widgets::OutputWidget, std::default_delete<widgets::OutputWidget>>::operator->(
                (unique_ptr<widgets::OutputWidget, std::default_delete<widgets::OutputWidget>>*)&field_80);
        this_01 = (CommandLine*)this_00->GetPos();
        this_01->GetPos();
    }

    // 0x10005fa20, 48 bytes, placed by class name
    // OSClientConsoleUI::GetLineHeight() const
    int OSClientConsoleUI::GetLineHeight() {
        int iVar1;
        long lVar2;

        lVar2 = shared_ptr<jstring::PixfontGeneric>::operator->((shared_ptr<jstring::PixfontGeneric>*)field_8);
        iVar1 = *(int*)(lVar2 + 4);
        lVar2 = shared_ptr<jstring::PixfontGeneric>::operator->((shared_ptr<jstring::PixfontGeneric>*)field_8);
        return iVar1 + *(int*)(lVar2 + 8);
    }

    // 0x10005fa80, 96 bytes, placed by class name
    // OSClientConsoleUI::SetBottomLine(int)
    void OSClientConsoleUI::SetBottomLine(int param_1) {
        int iVar1;
        int local_24[3];

        local_24[1] = 0;
        iVar1 = field_60;
        local_24[0] = param_1;
        local_24[2] = GetOnScreenLines(this);
        local_24[2] = iVar1 - local_24[2];
        iVar1 = jag::math::Clamp<int>(local_24, local_24 + 1, local_24 + 2);
        if (iVar1 != field_56) {
            field_56 = iVar1;
            OnBottomLineChanged(this);
        }
    }

    // 0x10005fae0, 96 bytes, placed by class name
    // OSClientConsoleUI::OnBottomLineChanged()
    void OSClientConsoleUI::OnBottomLineChanged() {
        ScrollBarWidget* this_00;
        int iVar1;
        int iVar2;

        iVar1 = GetOnScreenLines(this);
        iVar2 = field_60 - iVar1;
        if (iVar2 != 0 && iVar1 <= field_60) {
            iVar1 = field_56;
            this_00 =
                (ScrollBarWidget*)std::
                    unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>::operator->((
                        unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>*)&field_96);
            this_00->Value(1.0 - (float)iVar1 / (float)iVar2);
        }
    }

    // 0x10005fba0, 64 bytes, placed by class name
    // OSClientConsoleUI::GetCommandLineHeight() const
    int OSClientConsoleUI::GetCommandLineHeight() {
        Widget* this_00;
        long lVar2;

        this_00 =
            (Widget*)std::unique_ptr<widgets::CommandLineWidget, std::default_delete<widgets::CommandLineWidget>>::
            operator->(
                (unique_ptr<widgets::CommandLineWidget, std::default_delete<widgets::CommandLineWidget>>*)&field_88);
        lVar2 = this_00->GetPadding();
        return GetLineHeight(this) + *(int*)(lVar2 + 4) + *(int*)(lVar2 + 12);
    }

    // 0x10005fc00, 32 bytes, placed by class name
    // OSClientConsoleUI::GetConsoleHeight() const
    void OSClientConsoleUI::GetConsoleHeight() {
        ImmediateRenderContext* this_00;
        Minimap* this_01;

        this_00 = (ImmediateRenderContext*)
                      std::unique_ptr<widgets::OutputWidget, std::default_delete<widgets::OutputWidget>>::operator->(
                          (unique_ptr<widgets::OutputWidget, std::default_delete<widgets::OutputWidget>>*)&field_80);
        this_01 = (Minimap*)this_00->GetStats();
        this_01->GetLevel();
    }

    // 0x10005fc40, 192 bytes, placed by class name
    // OSClientConsoleUI::RecalculateLinesLayout()
    void OSClientConsoleUI::RecalculateLinesLayout() {
        bool bVar1;
        Line* pLVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        list<console::Line, eastl::allocator> local_48[8];
        list<console::Line, eastl::allocator> local_40[8];
        int local_38;
        int local_34;

        local_38 = 0;
        local_34 = 0;
        eastl::list<console::Line, eastl::allocator>::begin(local_48);
        eastl::list<console::Line, eastl::allocator>::end(local_40);
        bVar1 = eastl::operator!=((eastl*)local_48, (hashtable_iterator_base*)local_40, extraout_RDX);
        if (bVar1) {
            do {
                pLVar2 = (Line*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_48);
                MeasureLine(this, &local_34, &local_38, pLVar2);
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_48);
                bVar1 = eastl::operator!=((eastl*)local_48, (hashtable_iterator_base*)local_40, extraout_RDX_00);
            } while (bVar1);
        }
        field_60 = local_38;
        field_64 = local_34;
    }

    // 0x10005ff80, 320 bytes, placed by class name
    // OSClientConsoleUI::LayoutWidgets()
    void OSClientConsoleUI::LayoutWidgets() {
        int iVar1;
        int iVar2;
        int iVar3;
        vector* pvVar4;
        int* piVar5;
        Widget* this_00;
        type* ptVar6;
        Rect<unsigned int> local_58[20];
        uint local_44;
        Widget* local_40;
        int local_34;

        jag::math::Rect<unsigned int>::Rect(local_58, (Rect*)field_104);
        ptVar6 = (type*)&DAT_00000001;
        local_58->Shrink(1, 1);
        iVar2 = GetCommandLineHeight(this);
        local_34 = iVar2;
        local_40 =
            (Widget*)std::unique_ptr<widgets::OutputWidget, std::default_delete<widgets::OutputWidget>>::operator->(
                (unique_ptr<widgets::OutputWidget, std::default_delete<widgets::OutputWidget>>*)&field_80);
        pvVar4 = local_58->SSOBeginPtr(ptVar6);
        local_44 = *(uint*)pvVar4;
        piVar5 = (int*)local_58->y();
        iVar1 = *piVar5;
        piVar5 = (int*)local_58->second();
        iVar3 = *piVar5;
        piVar5 = (int*)local_58->qw();
        ptVar6 = (type*)(ulong)local_44;
        local_40->Layout(local_44, iVar1, iVar3 + -16, *piVar5 - iVar2);
        local_40 =
            (Widget*)std::unique_ptr<widgets::CommandLineWidget, std::default_delete<widgets::CommandLineWidget>>::
            operator->(
                (unique_ptr<widgets::CommandLineWidget, std::default_delete<widgets::CommandLineWidget>>*)&field_88);
        pvVar4 = local_58->SSOBeginPtr(ptVar6);
        iVar1 = *(int*)pvVar4;
        iVar2 = local_58->MaxZ();
        iVar3 = local_34;
        iVar2 = iVar2 - local_34;
        piVar5 = (int*)local_58->second();
        local_40->Layout(iVar1, iVar2, *piVar5, iVar3);
        this_00 =
            (Widget*)
                std::unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>::operator->(
                    (unique_ptr<widgets::ScrollBarWidget, std::default_delete<widgets::ScrollBarWidget>>*)&field_96);
        iVar3 = local_58->Right();
        piVar5 = (int*)local_58->y();
        iVar1 = *piVar5;
        piVar5 = (int*)local_58->qw();
        this_00->Layout(iVar3 + -16, iVar1, 16, *piVar5 - local_34);
        RecalculateLinesLayout(this);
        field_68 = 0;
    }

    // 0x100060200, 96 bytes, placed by class name
    // OSClientConsoleUI::ClipBoundsToUI()
    void OSClientConsoleUI::ClipBoundsToUI() {
        _func_decltype_nullptr* in_RSI;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_48[16];
        undefined1 local_38[16];

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_48, in_RSI);
        local_38->GetUISafeArea();
        (field_104, (Rect*)local_38, (Rect*)local_48)->Clip();
        SetBounds(this, (Rect*)local_48);
    }

    // 0x1000602d0, 144 bytes, placed by class name
    // OSClientConsoleUI::GetDrawContext()
    void OSClientConsoleUI::GetDrawContext() {
        undefined1* this_00;
        long lVar1;
        undefined8* puVar2;
        shared_ptr* psVar3;
        undefined1 local_30[12];
        int local_24;

        this_00 = &field_72;
        lVar1 = this_00->get();
        if (lVar1 == 0) {
            puVar2 = (undefined8*)field_152->GetMemoryCache();
            psVar3 = (shared_ptr*)(**(code**)*puVar2)(puVar2);
            local_24 = 3;
            eastl::hash_map<
                Font, shared_ptr<jstring::PixfontGeneric>, FontHash, eastl::equal_to<Font>, eastl::allocator,
                false>::operator[]((hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash, eastl::equal_to<Font>,
                                             eastl::allocator, false>*)field_152->field_19128,
                                   (Font*)&local_24);
            std::make_unique<widgets::DrawContext, graphics::NXTPix2D&, shared_ptr<jstring::PixfontGeneric>&>(
                (NXTPix2D*)local_30, psVar3);
            std::unique_ptr<widgets::DrawContext, std::default_delete<widgets::DrawContext>>::operator=(
                (unique_ptr<widgets::DrawContext, std::default_delete<widgets::DrawContext>>*)this_00,
                (unique_ptr*)local_30);
            local_30->~unique_ptr();
        }
        std::unique_ptr<widgets::DrawContext, std::default_delete<widgets::DrawContext>>::operator*(
            (unique_ptr<widgets::DrawContext, std::default_delete<widgets::DrawContext>>*)this_00);
    }

} // namespace jag::oldscape

namespace jag::tweak {
    // 0x10005f250: the linker folded this into oldscape::widgets::Padding::Padding(int, int, int, int), which has identical code
    Placement::Placement(int, int, int, int);

} // namespace jag::tweak

namespace jag::render {
    // 0x10005f250: the linker folded this into oldscape::widgets::Padding::Padding(int, int, int, int), which has identical code
    GLFormat::GLFormat(int, unsigned int, unsigned int, unsigned int);

} // namespace jag::render

namespace jag::oldscape::dash3d {
    // 0x10005f250: the linker folded this into widgets::Padding::Padding(int, int, int, int), which has identical code
    GridRect::GridRect(int, int, int, int);

} // namespace jag::oldscape::dash3d

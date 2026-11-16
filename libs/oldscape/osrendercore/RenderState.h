// libs/oldscape/osrendercore/RenderState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag {
    class RenderState {
    public:
        class CameraPos;
        class LightSubmissionRSeven;
        class ModelSubmissionRSeven;
        class OverlayRSeven;
        class OverlayViewportState;
        class RSevenOptions;
        class WindowProperties;
        class WindowSetOptions;
        RenderState();
        ~RenderState();

        // data members, from how the methods use this: 19703912 bytes
        undefined8 field_0; // offset 0
        char _unknown_8[24];
        undefined4 field_32; // offset 32
        char _unknown_36[17432660];
        undefined1 field_17432696; // offset 17432696
        char _unknown_17432697[131135];
        undefined4 field_17563832; // offset 17563832
        char _unknown_17563836[4];
        undefined8 field_17563840; // offset 17563840
        char _unknown_17563848[2113656];
        undefined2 field_19677504; // offset 19677504
        char _unknown_19677506[2];
        WindowSetOptions field_19677508; // offset 19677508
        WindowProperties field_19677552; // offset 19677552
    };

    class RenderState::CameraPos {
    public:
        Set(int, int, int, int, int, int);
    };

    class RenderState::LightSubmissionRSeven {
    public:
        LightSubmissionRSeven();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    class RenderState::ModelSubmissionRSeven {
    public:
        ModelSubmissionRSeven();
        ~ModelSubmissionRSeven();

        // data members, from how the methods use this: 182 bytes
        char _unknown_0[16];
        ResolvedModel field_16; // offset 16
        char _unknown_128[38];
        EntityHighlight field_166; // offset 166
    };

    class RenderState::OverlayRSeven {
    public:
        ~OverlayRSeven();
        OverlayRSeven(OverlayRSeven&&);
        OverlayRSeven();
        OverlayRSeven(OverlayRSeven const&);

        // data members, from how the methods use this: 48 bytes
        char _unknown_0[16];
        OverlayViewportState field_16; // offset 16
    };

    class RenderState::OverlayViewportState {
    public:
        OverlayViewportState* operator=(OverlayViewportState const&);
        OverlayViewportState(OverlayViewportState&&);
        OverlayViewportState(OverlayViewportState const&);
        OverlayViewportState();

        // data members, from how the methods use this: 32 bytes
        undefined4 field_0;  // offset 0
        undefined4 field_4;  // offset 4
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        undefined8 field_16; // offset 16
        undefined4 field_24; // offset 24
        char _unknown_28[4];
    };

    class RenderState::RSevenOptions {
    public:
        RSevenOptions* operator=(RSevenOptions const&);
        RSevenOptions();
        ~RSevenOptions();

        // data members, from how the methods use this: 940 bytes
        undefined8 field_0;  // offset 0
        undefined8 field_8;  // offset 8
        undefined1 field_16; // offset 16
        char _unknown_17[7];
        undefined1 field_24; // offset 24
        char _unknown_25[623];
        undefined8 field_648; // offset 648
        undefined8 field_656; // offset 656
        undefined8 field_664; // offset 664
        undefined8 field_672; // offset 672
        undefined8 field_680; // offset 680
        undefined8 field_688; // offset 688
        char _unknown_696[168];
        undefined4 field_864;      // offset 864
        SunlightOptions field_868; // offset 868
        undefined2 field_932;      // offset 932
        char _unknown_934[6];
    };

    class RenderState::WindowProperties {
    public:
        GetWindowFrame(WindowSetOptions const&) const;
        GetClientRect(WindowSetOptions const&) const;
        void GetRightMostScreenPointForWindowExpansion(WindowSetOptions const&) const;
        GetIsMaximized() const;
        GetIsFullScreen(WindowSetOptions const&) const;
        IsEmpty() const;
        GetMonitorWithLargestWindowPortion(math::Rect<int> const&) const;
        WindowProperties();
        bool operator==(WindowProperties const&) const;
        ~WindowProperties();
        void OverrideWithSetOptions(WindowSetOptions const&);

        // data members, from how the methods use this: 26360 bytes
        undefined4 field_0; // offset 0
        undefined4 field_4; // offset 4
        undefined4 field_8; // offset 8
        int field_12;       // offset 12
        char _unknown_16[232];
        undefined1 m_isMaximized; // offset 248
        undefined1 field_249;     // offset 249
        char _unknown_250[26110];
    };

    class RenderState::WindowSetOptions {
    public:
        WindowSetOptions();

        // data members, from how the methods use this: 44 bytes
        char _unknown_0[25];
        undefined1 field_25; // offset 25
        char _unknown_26[6];
        undefined1 field_32; // offset 32
        char _unknown_33[3];
        undefined4 field_36; // offset 36
        char _unknown_40[4];
    };

    // 0x1000dc2a0, 256 bytes, inline, placed by class name and debug map
    // RenderState::WindowProperties::GetWindowFrame(RenderState::WindowSetOptions const&) const
    WindowProperties* RenderState::WindowProperties::GetWindowFrame(WindowSetOptions* param_1) {
        byte bVar1;
        int iVar2;
        int iVar3;
        undefined4 uVar4;
        WindowSetOptions* pWVar5;
        int iVar6;
        int iVar7;
        int* piVar8;
        vector* pvVar9;
        undefined4* puVar10;
        long in_RDX;
        type* ptVar11;
        uint uVar12;
        undefined1 local_48[16];
        WindowSetOptions* local_38;

        ptVar11 = (type*)&param_1[4].field_40;
        new (this) math::Rect<unsigned int>(ptVar11);
        if ((*(byte*)(in_RDX + 36) & 1) == 0) {
            bVar1 = *(byte*)(in_RDX + 36);
        } else {
            piVar8 = (int*)second();
            iVar2 = *piVar8;
            pWVar5 = param_1 + 5;
            local_38 = param_1;
            iVar6 = (&pWVar5->field_12)->GetPos();
            piVar8 = (int*)qw();
            param_1 = local_38;
            iVar3 = *piVar8;
            iVar7 = (&pWVar5->field_12)->GetLevel();
            new (this) oldscape::ServerConnectionWorkItem((iVar2 - iVar6) + *(int*)(in_RDX + 8));
            uVar12 = (iVar3 - iVar7) + *(int*)(in_RDX + 12);
            ptVar11 = (type*)(ulong)uVar12;
            SetLevel(uVar12);
            bVar1 = *(byte*)(in_RDX + 36);
        }
        if ((bVar1 & 32) == 0) {
            bVar1 = *(byte*)(in_RDX + 36);
        } else {
            uVar4 = *(undefined4*)(in_RDX + 16);
            pvVar9 = SSOBeginPtr(ptVar11);
            *(undefined4*)pvVar9 = uVar4;
            uVar4 = *(undefined4*)(in_RDX + 20);
            puVar10 = (undefined4*)y();
            *puVar10 = uVar4;
            bVar1 = *(byte*)(in_RDX + 36);
        }
        if (((bVar1 & 16) != 0) && (*(char*)(in_RDX + 26) != '\0')) {
            GetMonitorWithLargestWindowPortion((WindowProperties*)local_48, (Rect*)param_1);
            math::Rect<unsigned int>::operator=((Rect<unsigned int>*)this, (Rect*)local_48);
        }
        return this;
    }

    // 0x1000dc3a0, 176 bytes, inline, placed by class name and debug map
    // RenderState::WindowProperties::GetClientRect(RenderState::WindowSetOptions const&) const
    WindowProperties* RenderState::WindowProperties::GetClientRect(WindowSetOptions* param_1) {
        undefined4* puVar1;
        int* piVar2;
        long in_RDX;
        undefined1 local_48[16];
        undefined1 local_38[16];

        new (this) math::Rect<unsigned int>((Rect*)&param_1[5].field_12);
        if ((*(byte*)(in_RDX + 36) & 1) != 0) {
            new (this) oldscape::ServerConnectionWorkItem(*(undefined4*)(in_RDX + 8));
            SetLevel(*(int*)(in_RDX + 12));
        }
        if (((*(byte*)(in_RDX + 36) & 16) != 0) && (*(char*)(in_RDX + 26) != '\0')) {
            GetWindowFrame((WindowProperties*)local_38, param_1);
            GetMonitorWithLargestWindowPortion((WindowProperties*)local_48, (Rect*)param_1);
            puVar1 = (undefined4*)local_48->second();
            new (this) oldscape::ServerConnectionWorkItem(*puVar1);
            piVar2 = (int*)local_48->qw();
            SetLevel(*piVar2);
        }
        return this;
    }

    // 0x1000dc450, 544 bytes, inline, placed by class name and debug map
    // RenderState::WindowProperties::GetRightMostScreenPointForWindowExpansion(RenderState::WindowSetOptions const&) const
    void RenderState::WindowProperties::GetRightMostScreenPointForWindowExpansion(WindowSetOptions* param_1) {
        undefined4 uVar1;
        bool bVar2;
        char cVar3;
        int iVar4;
        int iVar5;
        vector* pvVar6;
        long lVar7;
        ulong uVar8;
        Rect* pRVar9;
        uint uVar10;
        WindowProperties* pWVar11;
        Rect<unsigned int>* this_00;
        type* ptVar12;
        ulong uVar13;
        WindowProperties* this_01;
        Rect<unsigned int> local_98[16];
        Rect<int> local_88[16];
        undefined1 local_78[16];
        Layout local_68[16];
        Rect<unsigned int> local_58[16];
        Rect<unsigned int> local_48[16];

        GetWindowFrame((WindowProperties*)local_78, (WindowSetOptions*)this);
        GetMonitorWithLargestWindowPortion((WindowProperties*)local_68, (Rect*)this);
        cVar3 = GetIsFullScreen(this, param_1);
        this_01 = (WindowProperties*)local_68;
        if (cVar3 == '\0') {
            cVar3 = GetIsMaximized(this);
            if (cVar3 == '\0') {
                pvVar6 = eastl::string::Layout::SSOBeginPtr(local_68, (type*)param_1);
                uVar1 = *(undefined4*)pvVar6;
                pvVar6 = local_78->SSOBeginPtr(param_1);
                *(undefined4*)pvVar6 = uVar1;
                iVar4 = local_68->Right();
                local_78->SetRight(iVar4);
                lVar7 = size();
                this_01 = (WindowProperties*)local_78;
                if (lVar7 != 0) {
                    this_01 = (WindowProperties*)local_78;
                    uVar8 = 0;
                    uVar13 = 1;
                    do {
                        pRVar9 = (Rect*)
                            eastl::vector<math::Rect<int>, eastl::fixed_vector_allocator<16ul, 12ul, 4ul, 0ul, false,
                                                                                         eastl::dummy_allocator>>::
                            operator[](
                                (vector<math::Rect<int>, eastl::fixed_vector_allocator<16ul, 12ul, 4ul, 0ul, false,
                                                                                       eastl::dummy_allocator>>*)this,
                                uVar8);
                        math::Rect<unsigned int>::Rect(local_98, pRVar9);
                        pvVar6 = local_98->SSOBeginPtr(pRVar9);
                        iVar4 = *(int*)pvVar6;
                        pvVar6 = this_01->SSOBeginPtr(pRVar9);
                        if (iVar4 < *(int*)pvVar6) {
                            this_00 = local_48;
                            pWVar11 = this_01;
                            math::Rect<unsigned int>::Rect(this_00, (Rect*)this_01);
                            pvVar6 = local_98->SSOBeginPtr(pWVar11);
                            uVar1 = *(undefined4*)pvVar6;
                            pvVar6 = this_00->SSOBeginPtr(pWVar11);
                            *(undefined4*)pvVar6 = uVar1;
                            cVar3 = local_98->Intersects(this_00);
                            if (cVar3 != '\0') {
                                iVar5 = this_01->Right();
                                pvVar6 = this_01->SSOBeginPtr(this_00);
                                iVar4 = *(int*)pvVar6;
                                pvVar6 = local_98->SSOBeginPtr(this_00);
                                uVar10 = (iVar5 + iVar4) - *(int*)pvVar6;
                                ptVar12 = (type*)(ulong)uVar10;
                                this_01->SetRight(uVar10);
                                pvVar6 = local_48->SSOBeginPtr(ptVar12);
                                uVar1 = *(undefined4*)pvVar6;
                                pvVar6 = this_01->SSOBeginPtr(ptVar12);
                                *(undefined4*)pvVar6 = uVar1;
                            }
                        }
                        iVar4 = local_98->Right();
                        iVar5 = this_01->Right();
                        this = (WindowProperties*)this;
                        if (iVar5 < iVar4) {
                            math::Rect<unsigned int>::Rect(local_48, (Rect*)this_01);
                            iVar4 = local_98->Right();
                            local_48->SetRight(iVar4);
                            cVar3 = local_98->Intersects(local_48);
                            if (cVar3 != '\0') {
                                math::Rect<unsigned int>::Rect(local_58, (Rect*)local_48);
                                local_88->Intersection(local_98, local_58);
                                iVar4 = local_48->Right();
                                this_01->SetRight(iVar4);
                            }
                        }
                        uVar8 = size();
                        bVar2 = uVar13 < uVar8;
                        uVar8 = uVar13;
                        uVar13 = (ulong)((int)uVar13 + 1);
                    } while (bVar2);
                }
            }
        }
        this_01->Right();
    }

    // 0x1000dcc30, 16 bytes, inline, placed by class name
    // RenderState::WindowProperties::GetIsMaximized() const
    undefined1 RenderState::WindowProperties::GetIsMaximized() {
        return m_isMaximized;
    }

    // 0x1000dcc40, 32 bytes, inline, placed by class name
    // RenderState::WindowProperties::GetIsFullScreen(RenderState::WindowSetOptions const&) const
    undefined8 RenderState::WindowProperties::GetIsFullScreen(WindowSetOptions* param_1) {
        undefined1* puVar1;

        puVar1 = &param_1->field_26;
        if ((*(byte*)&param_1->field_36 & 16) == 0) {
            puVar1 = &field_249;
        }
        return CONCAT71((int7)((ulong)puVar1 >> 8), *puVar1);
    }

    // 0x1000e10d0: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    RenderState::OverlayRSeven::~OverlayRSeven();

    // 0x10011f3f0, 240 bytes, inline, placed by class name
    // RenderState::WindowProperties::IsEmpty() const
    undefined4 RenderState::WindowProperties::IsEmpty() {
        undefined4 uVar1;
        undefined8 local_128;
        undefined8 uStack_120;
        undefined8 local_118;
        undefined8 uStack_110;
        undefined8 local_108;
        undefined8 uStack_100;
        undefined8 local_f8;
        undefined8 uStack_f0;
        undefined8 local_e8;
        undefined8 uStack_e0;
        undefined8 local_d8;
        undefined8 uStack_d0;
        undefined8 local_c8;
        undefined8 uStack_c0;
        undefined8 local_b8;
        undefined8 uStack_b0;
        undefined8 local_a8;
        undefined8 uStack_a0;
        undefined8 local_98;
        undefined8 uStack_90;
        undefined8 local_88;
        undefined8 uStack_80;
        undefined8 local_78;
        undefined8 uStack_70;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        undefined8 uStack_50;
        undefined8 local_48;
        undefined8 uStack_40;
        undefined8 local_38;
        undefined8 uStack_30;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_38 = 0;
        uStack_30._0_1_ = 0;
        uStack_30._1_1_ = 0;
        uStack_30._2_6_ = 0;
        local_48 = 0;
        uStack_40 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_118 = 0;
        uStack_110 = 0;
        local_128._0_4_ = 0;
        local_128._4_4_ = 0;
        uStack_120._0_4_ = 0;
        uStack_120._4_4_ = 0;
        WindowProperties((WindowProperties*)&local_128);
        uVar1 = operator==((WindowProperties*)&local_128, this);
        ~WindowProperties((WindowProperties*)&local_128);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar1;
    }

    // 0x10012c730, 240 bytes, inline, placed by class name
    // RenderState::WindowProperties::GetMonitorWithLargestWindowPortion(math::Rect<int> const&) const
    WindowProperties* RenderState::WindowProperties::GetMonitorWithLargestWindowPortion(Rect* param_1) {
        int iVar1;
        int iVar2;
        Rect* pRVar3;
        long lVar4;
        ulong uVar5;
        int* piVar6;
        Rect* in_RDX;
        uint uVar7;
        ulong uVar8;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>
            local_78[16];
        Rect<unsigned int> local_68[16];
        Rect<unsigned int> local_58[16];
        Rect* local_48;
        WindowProperties* local_40;
        int local_34;

        local_48 = in_RDX;
        pRVar3 =
            (Rect*)eastl::vector<math::Rect<int>,
                                 eastl::fixed_vector_allocator<16ul, 12ul, 4ul, 0ul, false, eastl::dummy_allocator>>::
            operator[](
                (vector<math::Rect<int>,
                        eastl::fixed_vector_allocator<16ul, 12ul, 4ul, 0ul, false, eastl::dummy_allocator>>*)param_1,
                0);
        local_40 = this;
        new (this) math::Rect<unsigned int>(pRVar3);
        lVar4 = param_1->size();
        if (lVar4 != 0) {
            local_34 = -2147483648;
            uVar7 = 1;
            uVar8 = 0;
            do {
                pRVar3 = (Rect*)
                    eastl::vector<math::Rect<int>,
                                  eastl::fixed_vector_allocator<16ul, 12ul, 4ul, 0ul, false, eastl::dummy_allocator>>::
                    operator[](
                        (vector<math::Rect<int>,
                                eastl::fixed_vector_allocator<16ul, 12ul, 4ul, 0ul, false, eastl::dummy_allocator>>*)
                            param_1,
                        uVar8);
                math::Rect<unsigned int>::Rect(local_58, pRVar3);
                math::Rect<unsigned int>::Rect(local_68, local_48);
                local_78->Intersection(local_58, local_68);
                piVar6 = (int*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(local_78);
                iVar1 = *piVar6;
                piVar6 = (int*)local_78->qw();
                iVar2 = *piVar6;
                if (local_34 < iVar1 * iVar2) {
                    math::Rect<unsigned int>::operator=((Rect<unsigned int>*)local_40, (Rect*)local_58);
                    local_34 = iVar1 * iVar2;
                }
                uVar8 = (ulong)uVar7;
                uVar5 = param_1->size();
                uVar7 = uVar7 + 1;
            } while (uVar8 < uVar5);
        }
        return local_40;
    }

    // 0x10012d160: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    RenderState::OverlayRSeven::~OverlayRSeven();

    // 0x10012dc10, 32 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // RenderState::CameraPos::Set(int, int, int, int, int, int)
    /* Hitmark::Hitmark(int, int, unsigned int, int, int, int) */

    void Hitmark::Hitmark(int param_1, int param_2, uint param_3, int param_4, int param_5, int param_6) {
        field_0 = param_1;
        field_4 = param_2;
        field_8 = param_3;
        field_12 = param_4;
        field_16 = param_5;
        field_20 = param_6;
    }

    // 0x1001313b0, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderState::WindowProperties::WindowProperties(): jumps straight to the base-object constructor

    // 0x1001313c0, 112 bytes, inline, placed by class name
    // RenderState::WindowProperties::operator==(RenderState::WindowProperties const&) const
    /* RenderState::WindowProperties::TEMPNAMEPLACEHOLDERVALUE(RenderState::WindowProperties
   const&) const */

    bool RenderState::WindowProperties::operator==(WindowProperties* param_1) {
        char cVar1;

        if ((((field_249 == param_1->field_249) && (m_isMaximized == param_1->m_isMaximized)) &&
             (cVar1 =
                  render::StencilOpDesc::operator==((StencilOpDesc*)&field_232, (StencilOpDesc*)&param_1->field_232),
              cVar1 != '\0')) &&
            (cVar1 = render::StencilOpDesc::operator==((StencilOpDesc*)&field_216, (StencilOpDesc*)&param_1->field_216),
             cVar1 != '\0')) {
            return eastl::operator==((vector*)this, (vector*)param_1);
        }
        return false;
    }

    // 0x100131430, 16 bytes, complete-object destructor, inline, placed by class name
    // RenderState::WindowProperties::~WindowProperties(): jumps straight to the base-object destructor

    // 0x100131440, 80 bytes, base-object constructor, inline, placed by class name
    // RenderState::WindowProperties::WindowProperties()
    void RenderState::WindowProperties::WindowProperties() {
        _func_decltype_nullptr* in_RSI;

        eastl::fixed_vector<math::Rect<int>, 12ul, false, eastl::dummy_allocator>::fixed_vector();
        new (&field_216, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_232, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        m_isMaximized = 0;
        field_249 = 0;
    }

    // 0x1001316d0, 16 bytes, base-object destructor, inline, placed by class name
    // RenderState::WindowProperties::~WindowProperties()
    void RenderState::WindowProperties::~WindowProperties() {
        ~fixed_vector();
    }

    // 0x1001c2c20, 128 bytes, inline, placed by class name and debug map
    // RenderState::WindowProperties::OverrideWithSetOptions(RenderState::WindowSetOptions const&)
    void RenderState::WindowProperties::OverrideWithSetOptions(WindowSetOptions* param_1) {
        undefined1 local_30[16];

        GetWindowFrame((WindowProperties*)local_30, (WindowSetOptions*)this);
        math::Rect<unsigned int>::operator=((Rect<unsigned int>*)&field_216, (Rect*)local_30);
        GetClientRect((WindowProperties*)local_30, (WindowSetOptions*)this);
        math::Rect<unsigned int>::operator=((Rect<unsigned int>*)&field_232, (Rect*)local_30);
        field_249 = GetIsFullScreen(this, param_1);
    }

    // 0x1001c2ca0, 192 bytes, inline, placed by class name and debug map
    // RenderState::RSevenOptions::operator=(RenderState::RSevenOptions const&)
    /* RenderState::RSevenOptions::TEMPNAMEPLACEHOLDERVALUE(RenderState::RSevenOptions const&)
    */

    RSevenOptions* RenderState::RSevenOptions::operator=(RSevenOptions* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;

        field_16 = param_1->field_16;
        uVar1 = param_1->field_8;
        field_0 = param_1->field_0;
        field_8 = uVar1;
        graphics::PostProcessController::Config::operator=((Config*)&field_24, (Config*)&param_1->field_24);
        uVar1 = param_1->field_656;
        uVar2 = param_1->field_664;
        uVar3 = param_1->field_672;
        uVar4 = param_1->field_680;
        uVar5 = param_1->field_688;
        field_648 = param_1->field_648;
        field_656 = uVar1;
        field_664 = uVar2;
        field_672 = uVar3;
        field_680 = uVar4;
        field_688 = uVar5;
        oldscape::MutationTracked<graphics::SimpleScatteringParams>::operator=(
            (MutationTracked<graphics::SimpleScatteringParams>*)&field_696, (MutationTracked*)&param_1->field_696);
        oldscape::MutationTracked<graphics::VolumetricScatteringParams>::operator=(
            (MutationTracked<graphics::VolumetricScatteringParams>*)&field_768, (MutationTracked*)&param_1->field_768);
        field_864 = param_1->field_864;
        graphics::SunlightOptions::operator=((SunlightOptions*)field_868, (SunlightOptions*)param_1->field_868);
        *(undefined4*)(field_868 + 60) = *(undefined4*)(param_1->field_868 + 60);
        field_932 = param_1->field_932;
        return this;
    }

    // 0x1001cc0a0, 64 bytes, inline, placed by class name
    // RenderState::OverlayViewportState::operator=(RenderState::OverlayViewportState const&)
    /* RenderState::OverlayViewportState::TEMPNAMEPLACEHOLDERVALUE(RenderState::OverlayViewportState
   const&) */

    OverlayViewportState* RenderState::OverlayViewportState::operator=(OverlayViewportState* param_1) {
        math::Rect<unsigned int>::operator=((Rect<unsigned int>*)this, (Rect*)param_1);
        eastl::pair<int, unsigned int>::operator=((pair<int, unsigned int>*)&field_16, (pair*)&param_1->field_16);
        field_24 = param_1->field_24;
        return this;
    }

    // 0x1001d2c80, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderState::RenderState(): jumps straight to the base-object constructor

    // 0x1001d2c90, 16 bytes, complete-object destructor, inline, placed by class name
    // RenderState::~RenderState(): jumps straight to the base-object destructor

    // 0x1001d2ca0, 480 bytes, base-object constructor, inline, placed by class name
    // RenderState::RenderState()
    void RenderState::RenderState() {
        allocator local_70[8];
        undefined1* local_68;
        undefined1* local_60;
        undefined1* local_58;
        undefined1* local_50;
        undefined1* local_48;
        undefined1* local_40;
        undefined1* local_38;

        field_0 = 0;
        field_32 = 0;
        local_68 = &field_40;
        new (local_68) eastl::fixed_vector<Renderable, 49152ul, true, eastl::allocator>();
        new (&field_3539024, 32768) eastl::fixed_vector<eastl::pair<int, Model>, 32768ul, true, eastl::allocator>();
        local_60 = &field_3539024;
        eastl::fixed_vector<int, 32768ul, true, eastl::allocator>::fixed_vector((ulong)&field_17432696);
        local_58 = &field_17432696;
        eastl::vector<RenderState::ModelOutline, BucketAllocatorEASTL>::vector();
        field_17563832 = 0;
        field_17563840 = 0;
        local_50 = &field_17563808;
        new (&field_17563848)
            eastl::fixed_vector<shared_ptr<RenderState::ModelSubmissionRSeven>, 32768ul, true, eastl::allocator>();
        local_48 = &field_17563848;
        new (&field_18088176) eastl::fixed_vector<RenderState::LightSubmissionRSeven, 255ul, true, eastl::allocator>();
        local_40 = &field_18088176;
        eastl::allocator::allocator(local_70, "EASTL hash_map");
        new (&field_18104544, local_70)
            eastl::hash_map<int, shared_ptr<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>,
                            eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        local_38 = &field_18104544;
        new (&field_18104600) eastl::fixed_vector<RenderState::OverlayRSeven, 32768ul, true, eastl::allocator>();
        field_19677504 = 1;
        new (field_19677508) WindowSetOptions();
        new (field_19677552) WindowProperties();
        new ((field_19677552 + 256)) RSevenOptions();
        eastl::fixed_vector<long long, 1000ul, true, eastl::allocator>::fixed_vector((ulong)(field_19677552 + 3248));
        field_19677552[11288] = 0;
        *(undefined8*)(field_19677552 + 11296) = 0;
        *(undefined8*)(field_19677552 + 11304) = 0;
    }

    // 0x1001d2f00, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderState::WindowSetOptions::WindowSetOptions(): jumps straight to the base-object constructor

    // 0x1001d2f10, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderState::RSevenOptions::RSevenOptions(): jumps straight to the base-object constructor

    // 0x1001d2f30, 16 bytes, complete-object destructor, inline, placed by class name
    // RenderState::RSevenOptions::~RSevenOptions(): jumps straight to the base-object destructor

    // 0x1001d4960, 32 bytes, base-object constructor, inline, placed by class name
    // RenderState::WindowSetOptions::WindowSetOptions()
    void RenderState::WindowSetOptions::WindowSetOptions() {
        field_25 = 0;
        field_32 = 0;
        field_36 = 0;
    }

    // 0x1001d4980, 176 bytes, base-object constructor, inline, placed by class name
    // RenderState::RSevenOptions::RSevenOptions()
    void RenderState::RSevenOptions::RSevenOptions() {
        oldscape::MutationTracked<graphics::EffectList>::MutationTracked<>(
            (MutationTracked<graphics::EffectList>*)this);
        ___bzero(&field_24, 624);
        new (&field_24) graphics::PostProcessController::Config();
        field_680 = 0;
        field_688 = 0;
        field_664 = 0;
        field_672 = 0;
        field_648 = 0;
        field_656 = 0;
        new (&field_648) graphics::SSAOParams();
        oldscape::MutationTracked<graphics::SimpleScatteringParams>::MutationTracked<>(
            (MutationTracked<graphics::SimpleScatteringParams>*)&field_696);
        oldscape::MutationTracked<graphics::VolumetricScatteringParams>::MutationTracked<>(
            (MutationTracked<graphics::VolumetricScatteringParams>*)&field_768);
        field_864 = 0;
        new (field_868) graphics::SunlightOptions();
        *(undefined4*)(field_868 + 60) = 0;
        field_932 = 0;
    }

    // 0x1001d5720, 16 bytes, base-object destructor, inline, placed by class name
    // RenderState::RSevenOptions::~RSevenOptions()
    void RenderState::RSevenOptions::~RSevenOptions() {
        (&field_24)->~Config();
    }

    // 0x1001d57d0, 160 bytes, base-object destructor, inline, placed by class name
    // RenderState::~RenderState()
    void RenderState::~RenderState() {
        ((field_19677552 + 3248))->~fixed_vector();
        ((field_19677552 + 256))->~RSevenOptions();
        field_19677552->~WindowProperties();
        (&field_18104600)->~fixed_vector();
        (&field_18104544)->~hash_map();
        (&field_18088176)->~fixed_vector();
        (&field_17563848)->~fixed_vector();
        (&field_17563808)->~vector();
        (&field_17432696)->~fixed_vector();
        (&field_3539024)->~fixed_vector();
        (&field_40)->~fixed_vector();
    }

    // 0x1001e2a30, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderState::LightSubmissionRSeven::LightSubmissionRSeven(): jumps straight to the base-object constructor

    // 0x1001e2a40, 16 bytes, base-object constructor, inline, placed by class name
    // RenderState::LightSubmissionRSeven::LightSubmissionRSeven()
    void RenderState::LightSubmissionRSeven::LightSubmissionRSeven() {
        new (this) graphics::PointLight();
    }

    // 0x1001e2df0, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderState::OverlayRSeven::OverlayRSeven(RenderState::OverlayRSeven&&): jumps straight to the base-object constructor

    // 0x1001e2e00, 64 bytes, base-object constructor, inline, placed by class name
    // RenderState::OverlayRSeven::OverlayRSeven(RenderState::OverlayRSeven&&)
    void RenderState::OverlayRSeven::OverlayRSeven(OverlayRSeven* param_1) {
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
        new (field_16, (OverlayViewportState*)param_1->field_16) OverlayViewportState();
    }

    // 0x1001e2e40, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderState::OverlayViewportState::OverlayViewportState(RenderState::OverlayViewportState&&): jumps straight to the base-object constructor

    // 0x1001e2e40: the linker folded this into RenderState::OverlayViewportState::OverlayViewportState(RenderState::OverlayViewportState&&), which has identical code
    RenderState::OverlayViewportState::OverlayViewportState(RenderState::OverlayViewportState const&);

    // 0x1001e2e50, 48 bytes, base-object constructor, inline, placed by class name
    // RenderState::OverlayViewportState::OverlayViewportState(RenderState::OverlayViewportState&&)
    /* RenderState::OverlayViewportState::OverlayViewportState(RenderState::OverlayViewportState
   const&) */

    void RenderState::OverlayViewportState::OverlayViewportState(OverlayViewportState* param_1) {
        new (this) math::Rect<unsigned int>(param_1);
        field_24 = param_1->field_24;
        field_16 = param_1->field_16;
    }

    // 0x1001e2e50: the linker folded this into RenderState::OverlayViewportState::OverlayViewportState(RenderState::OverlayViewportState&&), which has identical code
    RenderState::OverlayViewportState::OverlayViewportState(RenderState::OverlayViewportState const&);

    // 0x1001e2ed0, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderState::OverlayRSeven::OverlayRSeven(): jumps straight to the base-object constructor

    // 0x1001e2ee0, 48 bytes, base-object constructor, inline, placed by class name
    // RenderState::OverlayRSeven::OverlayRSeven()
    void RenderState::OverlayRSeven::OverlayRSeven() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        new (field_16) OverlayViewportState();
    }

    // 0x1001e2f10, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderState::OverlayViewportState::OverlayViewportState(): jumps straight to the base-object constructor

    // 0x1001e2f20, 48 bytes, base-object constructor, inline, placed by class name
    // RenderState::OverlayViewportState::OverlayViewportState()
    void RenderState::OverlayViewportState::OverlayViewportState() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        new (&field_16) math::Vector2T<int>();
    }

    // 0x10032c570, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderState::ModelSubmissionRSeven::ModelSubmissionRSeven(): jumps straight to the base-object constructor

    // 0x10032c580, 64 bytes, base-object constructor, inline, placed by class name
    // RenderState::ModelSubmissionRSeven::ModelSubmissionRSeven()
    void RenderState::ModelSubmissionRSeven::ModelSubmissionRSeven() {
        new (this) oldscape::dash3d::OperationBuffer();
        new (field_16) oldscape::dash3d::ResolvedModel();
        new (field_166) oldscape::dash3d::EntityHighlight();
    }

    // 0x10032c660, 16 bytes, complete-object destructor, inline, placed by class name
    // RenderState::ModelSubmissionRSeven::~ModelSubmissionRSeven(): jumps straight to the base-object destructor

    // 0x10032c670, 48 bytes, base-object destructor, inline, placed by class name
    // RenderState::ModelSubmissionRSeven::~ModelSubmissionRSeven()
    void RenderState::ModelSubmissionRSeven::~ModelSubmissionRSeven() {
        field_16->~ResolvedModel();
        ~LRUHashCacheWrapper();
    }

    // 0x10032da20, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderState::OverlayRSeven::OverlayRSeven(RenderState::OverlayRSeven const&): jumps straight to the base-object constructor

    // 0x10032db10, 64 bytes, base-object constructor, inline, placed by class name
    // RenderState::OverlayRSeven::OverlayRSeven(RenderState::OverlayRSeven const&)
    void RenderState::OverlayRSeven::OverlayRSeven(OverlayRSeven* param_1) {
        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
        new (field_16, (OverlayViewportState*)param_1->field_16) OverlayViewportState();
    }

} // namespace jag

namespace jag::oldscape {
    class OSRenderCore_AnyThread {
    public:
        OSRenderCore_AnyThread();
        void SetFpsLimit(int);
        InitAudio();
        void DestroyAudio();
        long Instance();

        // data members, from how the methods use this: 8 bytes
        undefined** field_0; // offset 0, vtable pointer
    };

    class OSRenderCore_LogicThread_Common {
    public:
        GetRenderStateJava();
        void SetFullScreen(bool);
        void SetAntialiasingSampleLevel(int);
        void SetUsingRSeven(bool);
        void SetWindowPos(int, int);
        void SetWindowTopmost(bool);
        void SetClientSize(int, int);
        void SetResizable(bool);
        bool IsLogicThread() const;
        void SetCameraPos(int, int, int, int, int, int);
        void SetMinClientSize(int, int);
        GetLastModelLitNXTTotal();
        GetLastNumNXTRenderables();
        OSRenderCore_LogicThread_Common();
        void SetZoom(int, int);
        void AddUISceneSettings(UISceneSettings const&);
        void SetThreadID();
        WasRenderContextReady() const;

        // data members, from how the methods use this: 49 bytes
        long field_0; // offset 0
        long field_8; // offset 8
        char _unknown_16[8];
        int m_zoom;   // offset 24
        int field_28; // offset 28
        char _unknown_32[16];
        undefined1 field_48; // offset 48
    };

    // 0x1000d2550, 16 bytes, inline, placed by class header (inline)
    // OSRenderCore_LogicThread_Common::SetUsingRSeven(bool)
    void OSRenderCore_LogicThread_Common::SetUsingRSeven(bool param_1) {
        undefined3 in_register_00000031;

        *(uint*)(field_0 + 17563832) = CONCAT31(in_register_00000031, param_1);
    }

    // 0x1000dc910, 128 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_Common::SetWindowPos(int, int)
    void OSRenderCore_LogicThread_Common::SetWindowPos(int param_1, int param_2) {
        long lVar1;
        vector* pvVar2;
        int* piVar3;
        WindowSetOptions* pWVar4;
        Vector2T<int> local_38[16];

        pWVar4 = (WindowSetOptions*)(field_0 + 19677552);
        local_38->GetWindowFrame(pWVar4);
        pvVar2 = local_38->SSOBeginPtr(pWVar4);
        if ((*(int*)pvVar2 == param_1) && (piVar3 = (int*)local_38->y(), *piVar3 == param_2)) {
            return;
        }
        lVar1 = field_0;
        *(int*)(lVar1 + 19677524) = param_1;
        *(int*)(lVar1 + 19677528) = param_2;
        *(byte*)(lVar1 + 19677544) = *(byte*)(lVar1 + 19677544) | 32;
    }

    // 0x1000fcf40, 32 bytes, inline, placed by class header (inline)
    // OSRenderCore_LogicThread_Common::SetMinClientSize(int, int)
    void OSRenderCore_LogicThread_Common::SetMinClientSize(int param_1, int param_2) {
        long lVar1;

        lVar1 = field_0;
        *(int*)(lVar1 + 19677508) = param_1;
        *(int*)(lVar1 + 19677512) = param_2;
        *(byte*)(lVar1 + 19677544) = *(byte*)(lVar1 + 19677544) | 8;
    }

    // 0x100101870, 16 bytes, inline, placed by class header (inline)
    // OSRenderCore_LogicThread_Common::GetLastModelLitNXTTotal()
    undefined8 OSRenderCore_LogicThread_Common::GetLastModelLitNXTTotal() {
        return *(undefined8*)(field_0 + 19688856);
    }

    // 0x100101880, 16 bytes, inline, placed by class header (inline)
    // OSRenderCore_LogicThread_Common::GetLastNumNXTRenderables()
    undefined8 OSRenderCore_LogicThread_Common::GetLastNumNXTRenderables() {
        return *(undefined8*)(field_0 + 19688848);
    }

    // 0x1001bb220, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // OSRenderCore_AnyThread::OSRenderCore_AnyThread()
    void OSRenderCore_AnyThread::OSRenderCore_AnyThread() {
        field_0 = (undefined**)(PTR_vtable_100ee8900 + 16);
    }

    // 0x1001bb460, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // OSRenderCore_LogicThread_Common::OSRenderCore_LogicThread_Common()
    void OSRenderCore_LogicThread_Common::OSRenderCore_LogicThread_Common() {
        field_8 = 0;
        new (&field_16) UISceneSettings();
        field_48 = 0;
    }

    // 0x1001c2d80, 16 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_JavaStyle::GetNxtUploadedModels()
    undefined1* OSRenderCore_RenderThread_JavaStyle::GetNxtUploadedModels() {
        return &field_8592;
    }

    // 0x1001c2d90, 32 bytes, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_Common::IsRenderContextReady()
    bool OSRenderCore_RenderThread_Common::IsRenderContextReady() {
        RenderDevice* this_00;

        this_00 = (RenderDevice*)Instance();
        return this_00->GetReadyState() == 0;
    }

    // 0x1001c2e30, 464 bytes, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread::ApplyWindowSetOptions()
    void OSRenderCore_RenderThread::ApplyWindowSetOptions() {
        bool bVar1;
        undefined1 uVar2;
        Window* pWVar3;

        if ((*(byte*)(*(long*)(field_32 + (long)(field_0[-3] + 56)) + 19677544) & 8) != 0) {
            pWVar3 = (Window*)(*(code*)field_16020136->field_0[12])();
            pWVar3->SetMinClientSize(*(int*)(*(long*)(field_32 + (long)(field_0[-3] + 56)) + 19677508),
                                     *(int*)(*(long*)(field_32 + (long)(field_0[-3] + 56)) + 19677512));
        }
        if ((*(byte*)(*(long*)(field_32 + (long)(field_0[-3] + 56)) + 19677544) & 1) != 0) {
            pWVar3 = (Window*)(*(code*)field_16020136->field_0[12])();
            pWVar3->SetSize((float)*(int*)(*(long*)(field_32 + (long)(field_0[-3] + 56)) + 19677516),
                            (float)*(int*)(*(long*)(field_32 + (long)(field_0[-3] + 56)) + 19677520));
        }
        if ((*(byte*)(*(long*)(field_32 + (long)(field_0[-3] + 56)) + 19677544) & 32) != 0) {
            pWVar3 = (Window*)(*(code*)field_16020136->field_0[12])();
            pWVar3->SetPosition(*(int*)(*(long*)(field_32 + (long)(field_0[-3] + 56)) + 19677524),
                                *(int*)(*(long*)(field_32 + (long)(field_0[-3] + 56)) + 19677528));
        }
        if ((*(byte*)(*(long*)(field_32 + (long)(field_0[-3] + 56)) + 19677544) & 2) != 0) {
            bVar1 = *(bool*)(*(long*)(field_32 + (long)(field_0[-3] + 56)) + 19677532);
            pWVar3 = (Window*)(*(code*)field_16020136->field_0[12])();
            pWVar3->SetResizable(bVar1);
        }
        if ((*(byte*)(*(long*)(field_32 + (long)(field_0[-3] + 56)) + 19677544) & 4) != 0) {
            pWVar3 = (Window*)(*(code*)field_16020136->field_0[12])();
            pWVar3->SetTopmost(*(bool*)(*(long*)(field_32 + (long)(field_0[-3] + 56)) + 19677533));
        }
        if ((*(byte*)(*(long*)(field_32 + (long)(field_0[-3] + 56)) + 19677544) & 16) != 0) {
            (field_16020136, *(bool*)(*(long*)(field_32 + (long)(field_0[-3] + 56)) + 19677534))->SetFullScreenMode();
        }
        if ((*(byte*)(*(long*)(field_32 + (long)(field_0[-3] + 56)) + 19677544) & 64) != 0) {
            *(int*)(field_32 + (long)(field_0[-3] + 16)) =
                1 << (*(byte*)(*(long*)(field_32 + (long)(field_0[-3] + 56)) + 19677536) & 31);
        }
        uVar2 = (&field_1580368)->ShouldUseRenderTargets();
        field_1580376 = uVar2;
        *(undefined4*)(*(long*)(field_32 + (long)(field_0[-3] + 56)) + 19677544) = 0;
    }

    // 0x1001c3000, 32 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_JavaStyle::ShouldUseRenderTargets()
    undefined8 OSRenderCore_RenderThread_JavaStyle::ShouldUseRenderTargets() {
        long lVar1;

        lVar1 = *(long*)(field_0 + -24);
        return CONCAT71((int7)((ulong)lVar1 >> 8), 1 < *(int*)(field_16 + lVar1 + 32));
    }

    // 0x1001c3020, 32 bytes, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_RSeven::GetEffectListMutable()
    void OSRenderCore_LogicThread_RSeven::GetEffectListMutable() {
        ((*(long*)((long)&field_0 + *(long*)(field_0 + -24)) + 19677808))->GetMutable();
    }

    // 0x1001c3050, 32 bytes, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_RSeven::GetEffectList() const
    void OSRenderCore_LogicThread_RSeven::GetEffectList() {
        type* in_RSI;

        ((*(long*)((long)&field_0 + *(long*)(field_0 + -24)) + 19677808), in_RSI)->SSOBeginPtr();
    }

    // 0x1001c3070, 128 bytes, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread::OnBeginFrame()
    void OSRenderCore_RenderThread::OnBeginFrame() {
        int iVar1;
        uint uVar2;
        undefined** ppuVar3;
        undefined* puVar4;
        vector* pvVar5;
        uint* puVar6;
        RT7Core* this_00;
        type* in_RSI;

        ppuVar3 = field_0;
        puVar4 = ppuVar3[-3];
        iVar1 = *(int*)(*(long*)(field_32 + (long)(puVar4 + 56)) + 17563832);
        if (*(int*)(field_112 + (long)(puVar4 + -8)) != iVar1) {
            *(int*)(field_112 + (long)(puVar4 + -8)) = iVar1;
            pvVar5 = ((field_32 + (long)(ppuVar3[-3] + 8)), in_RSI)->SSOBeginPtr();
            uVar2 = *(uint*)pvVar5;
            puVar6 = (uint*)((field_32 + (long)(field_0[-3] + 8)))->y();
            SetScreenSize(this, uVar2, *puVar6);
        }
        this_00 =
            (RT7Core*)std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::operator->(
                (unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>*)&field_8);
        this_00->BeginFrame();
    }

    // 0x1001c30f0, 32 bytes, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_UI::ClearPixelBuffer(unsigned int*, unsigned int)
    void OSRenderCore_RenderThread_UI::ClearPixelBuffer(uint* param_1, uint param_2) {
        ___bzero(param_1, (ulong)param_2 << 2);
    }

    // 0x1001c3110, 192 bytes, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread::GetUISize(unsigned int&, unsigned int&)
    void OSRenderCore_RenderThread::GetUISize(uint* param_1, uint* param_2) {
        long lVar1;
        vector* pvVar2;
        uint* puVar3;
        type* ptVar4;

        ptVar4 = (type*)param_1;
        lVar1 = ((field_32 + (long)(field_0[-3] + -32)))->GetRenderStateNXT();
        if (*(int*)(lVar1 + 17563832) == 0) {
            if (field_1580376 == '\0') {
                pvVar2 = ((field_32 + (long)(field_0[-3] + 8)), ptVar4)->SSOBeginPtr();
            } else {
                pvVar2 = (vector*)((field_1580384 + 48))->second();
            }
            *param_1 = *(uint*)pvVar2;
            if (field_1580376 != '\0') {
                lVar1 = ((field_1580384 + 48))->second();
                puVar3 = (uint*)(lVar1 + 4);
                goto LAB_1001c31b6;
            }
        } else {
            pvVar2 = ((field_32 + (long)(field_0[-3] + 8)), ptVar4)->SSOBeginPtr();
            *param_1 = *(uint*)pvVar2;
        }
        puVar3 = (uint*)((field_32 + (long)(field_0[-3] + 8)))->y();
    LAB_1001c31b6:
        *param_2 = *puVar3;
    }

    // 0x1001c31e0, 16 bytes, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_Common::SetZoom(int, int)
    void OSRenderCore_LogicThread_Common::SetZoom(int param_1, int param_2) {
        m_zoom = param_1;
        field_28 = param_2;
        field_48 = 1;
    }

    // 0x1001c31f0, 32 bytes, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_Common::AddUISceneSettings(UISceneSettings const&)
    void OSRenderCore_LogicThread_Common::AddUISceneSettings(UISceneSettings* param_1) {
        UISceneSettings::operator=((UISceneSettings*)&field_16, param_1);
        field_48 = 1;
    }

    // 0x1001c3210, 400 bytes, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_JavaStyle::RenderTriangle(short, short, short, short, short, short, short, short, short, short, short, short, short, short, short, short, short, short, short, short, short, short, short, short)
    void OSRenderCore_LogicThread_JavaStyle::RenderTriangle(
        short param_1, short param_2, short param_3, short param_4, short param_5, short param_6, short param_7,
        short param_8, short param_9, short param_10, short param_11, short param_12, short param_13, short param_14,
        short param_15, short param_16, short param_17, short param_18, short param_19, short param_20, short param_21,
        short param_22, short param_23, short param_24) {
        long lVar1;
        Renderable* pRVar2;
        UISceneSettings* this_00;
        long lVar3;
        array<TriangleVertexData, 3ul>* this_01;
        short* psVar4;
        RenderableType local_32;
        RenderableType local_31;

        lVar3 = field_0;
        lVar1 = *(long*)(lVar3 + -24);
        if (*(char*)((long)&this[1].field_0 + lVar1) != '\0') {
            *(undefined1*)((long)&this[1].field_0 + lVar1) = 0;
            lVar3 = *(long*)(lVar3 + -24);
            lVar1 = (((long)&field_0 + lVar3))->HeapBeginPtr();
            local_32 = (RenderableType)2;
            pRVar2 = eastl::vector<Renderable,
                                   eastl::fixed_vector_allocator<72ul, 49152ul, 4ul, 0ul, true, eastl::allocator>>::
                emplace_back<RenderableType>(
                    (vector<Renderable,
                            eastl::fixed_vector_allocator<72ul, 49152ul, 4ul, 0ul, true, eastl::allocator>>*)(lVar1 +
                                                                                                              40),
                    &local_32);
            this_00 = (UISceneSettings*)pRVar2->y();
            UISceneSettings::operator=(this_00, (UISceneSettings*)(&field_16 + lVar3));
        }
        lVar3 = (((long)&field_0 + *(long*)(field_0 + -24)))->HeapBeginPtr();
        local_31 = (RenderableType)1;
        pRVar2 =
            eastl::vector<Renderable, eastl::fixed_vector_allocator<72ul, 49152ul, 4ul, 0ul, true, eastl::allocator>>::
                emplace_back<RenderableType>(
                    (vector<Renderable,
                            eastl::fixed_vector_allocator<72ul, 49152ul, 4ul, 0ul, true, eastl::allocator>>*)(lVar3 +
                                                                                                              40),
                    &local_31);
        this_01 = (array<TriangleVertexData, 3ul>*)pRVar2->y();
        psVar4 = (short*)std::array<TriangleVertexData, 3ul>::operator[](this_01, 0);
        *psVar4 = param_1;
        psVar4[1] = param_2;
        psVar4[2] = param_3;
        psVar4[3] = param_4;
        psVar4[4] = param_5;
        psVar4[5] = param_6;
        psVar4[6] = param_7;
        psVar4[7] = param_8;
        psVar4[8] = param_9;
        psVar4[9] = param_10;
        psVar4[10] = param_11;
        psVar4[11] = param_12;
        psVar4[12] = param_13;
        psVar4[13] = param_14;
        psVar4[14] = param_15;
        psVar4[15] = param_16;
        psVar4[16] = param_17;
        psVar4[17] = param_18;
        psVar4[18] = param_19;
        psVar4[19] = param_20;
        psVar4[20] = param_21;
        psVar4[21] = param_22;
        psVar4[22] = param_23;
        psVar4[23] = param_24;
    }

    // 0x1001c3410, 64 bytes, placed by debug map only (low confidence)
    // OSRenderCore_AnyThread::SetFpsLimit(int)
    void OSRenderCore_AnyThread::SetFpsLimit(int param_1) {
        GraphicsApp* this_00;

        this_00 = (GraphicsApp*)Instance();
        if (this_00 != (GraphicsApp*)0) {
            this_00->SetMaxForegroundFps(param_1);
            this_00->SetMaxBackgroundFps(param_1);
        }
    }

    // 0x1001c3450, 224 bytes, placed by debug map only (low confidence)
    // OSRenderCore_AnyThread::InitAudio()
    undefined8 OSRenderCore_AnyThread::InitAudio() {
        bool bVar1;
        Layout* this_00;
        shared_ptr* this_01;
        undefined7 extraout_var;
        TaskRunner* this_02;
        AudioAPI* this_03;
        undefined8 uVar2;
        type* in_RSI;
        AudioSystemStartParams local_58[3];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (Layout*)(*(code*)*field_0)();
        this_01 = (shared_ptr*)eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
        bVar1 = shared_ptr::operator_cast_to_bool(this_01);
        uVar2 = CONCAT71(extraout_var, 1);
        if (!bVar1) {
            this_02 = (TaskRunner*)getTaskRunner();
            std::function<Task*()>::function<OSRenderCore_AnyThread::InitAudio()::__0, void>(local_58);
            this_02->DeclareTask("MixerWorker", "", local_58);
            std::function<Task*()>::~function((function<Task*()>*)local_58);
            hal::audio::AudioSystemStartParams::AudioSystemStartParams(local_58);
            local_58[0]._4_8_ = 17592186066466;
            this_03 = (AudioAPI*)(*(code*)*field_0)(this);
            uVar2 = this_03->StartAudioSystem(local_58, 0);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar2;
    }

    // 0x100365fb0, 16 bytes, inline, placed by class header (inline)
    // OSRenderCore_LogicThread_Common::WasRenderContextReady() const
    undefined8 OSRenderCore_LogicThread_Common::WasRenderContextReady() {
        return CONCAT71((int7)((ulong)field_0 >> 8), *(undefined1*)(field_0 + 19688840));
    }

} // namespace jag::oldscape

namespace jag::render {
    class RenderState {
    public:
        RenderState();

        // data members, from how the methods use this: 77 bytes
        undefined8 field_0; // offset 0
        char _unknown_8[48];
        undefined1 field_56; // offset 56
        char _unknown_57[19];
        undefined1 field_76; // offset 76
    };

    // 0x10012dc10: the linker folded this into jag::RenderState::CameraPos::Set(int, int, int, int, int, int), which has identical code
    ShaderPrecisionProfile::ShaderPrecisionProfile(ShaderVariablePrecision, ShaderVariablePrecision,
                                                   ShaderVariablePrecision, ShaderVariablePrecision,
                                                   ShaderVariablePrecision, ShaderVariablePrecision);

    // 0x100c199b0, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderState::RenderState(): jumps straight to the base-object constructor

    // 0x100c32b50, 64 bytes, base-object constructor, inline, placed by class name
    // RenderState::RenderState()
    void RenderState::RenderState() {
        _func_decltype_nullptr* in_RSI;

        field_0 = 0;
        new (&field_8) std::array<Viewport, 2ul>();
        field_56 = 0;
        new (&field_60, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_76 = 0;
    }

} // namespace jag::render

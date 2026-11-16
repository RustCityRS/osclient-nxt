// libs/graphics/runetek7/gui/debug/sections/DebugOverlayFPS.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag {
    class DebugOverlayFPS {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayFPS();
        virtual void RegisterTweakyVars(tweak::Container&);
        virtual void SetHeight(int);
        virtual void DrawImpl(int, int);
        virtual UpdateImpl(unsigned long long);
        DebugOverlayFPS(DebugOverlay&, bool, bool);

        // data members, from how the methods use this: 98700 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[104];
        int field_112;  // offset 112
        int field_116;  // offset 116
        bool field_120; // offset 120
        bool field_121; // offset 121
        char _unknown_122[6];
        TimedGraph field_128; // offset 128
        char _unknown_98600[56];
        bool field_98656; // offset 98656
        char _unknown_98657[7];
        long field_98664;       // offset 98664
        undefined8 field_98672; // offset 98672
        float field_98680;      // offset 98680
        float field_98684;      // offset 98684
        float field_98688;      // offset 98688
        float field_98692;      // offset 98692
        char _unknown_98696[4];
    };

    // 0x1008cfe90: the linker folded this into DebugOverlayLPS::~DebugOverlayLPS(), which has identical code
    DebugOverlayFPS::~DebugOverlayFPS();

    // 0x1008fca40, 96 bytes, base-object constructor, placed by class name
    // DebugOverlayFPS::DebugOverlayFPS(DebugOverlay&, bool, bool)
    void DebugOverlayFPS::DebugOverlayFPS(DebugOverlay* param_1, bool param_2, bool param_3) {
        new (1065353216) DebugOverlayGraphSection(this, param_1, 1, param_3, 0);
        field_0 = &PTR__OptionStore_100f188c0;
        field_98656 = param_2;
        field_98664 = 0;
        field_98672 = 250000000;
        field_128->SetHighIsGood();
    }

    // 0x1008fcab0, 32 bytes, placed by debug map only (low confidence)
    // DebugOverlayMainFPS::GetFPSCounter() const
    void DebugOverlayMainFPS::GetFPSCounter() {
        GraphicsApp* this_00;

        this_00 = (GraphicsApp*)Instance();
        this_00->GetFPSCounter();
    }

    // 0x1008fcaf0, 96 bytes, placed by debug map only (low confidence)
    // DebugOverlayRenderFPS::GetFPSCounter() const
    undefined8 DebugOverlayRenderFPS::GetFPSCounter() {
        long lVar1;
        RenderDevice* pRVar2;
        RenderContext* pRVar3;

        lVar1 = Singleton<render::RenderDevice>::InstancePtr();
        if (lVar1 != 0) {
            pRVar2 = (RenderDevice*)Instance();
            lVar1 = pRVar2->GetPrimaryRenderContext();
            if (lVar1 != 0) {
                pRVar2 = (RenderDevice*)pRVar2->Instance();
                pRVar3 = (RenderContext*)pRVar2->GetPrimaryRenderContext();
                lVar1 = pRVar3->GetFPSCounter();
                if (lVar1 != 0) {
                    pRVar2 = (RenderDevice*)pRVar3->Instance();
                    pRVar3 = (RenderContext*)pRVar2->GetPrimaryRenderContext();
                    return pRVar3->GetFPSCounter();
                }
            }
        }
        return 0;
    }

    // 0x1008fcb70, 1664 bytes, placed by class name
    // DebugOverlayFPS::DrawImpl(int, int)
    void DebugOverlayFPS::DrawImpl(int param_1, int param_2) {
        undefined1* this_00;
        float fVar1;
        uint uVar2;
        int iVar3;
        uint uVar4;
        uint uVar5;
        uint uVar6;
        uint uVar7;
        undefined4 uVar8;
        undefined4 uVar9;
        int iVar10;
        int iVar11;
        FPSCounter* this_01;
        long lVar12;
        undefined8 uVar13;
        float fVar14;
        Callstack local_268[35];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        new (&local_268[0].field_8) eastl::fixed_string<char, 512, true, eastl::allocator>();
        this_01 = (FPSCounter*)(*(code*)field_0[12])(this);
        if (this_01 == (FPSCounter*)0) {
            uVar13 = (*(code*)field_0[11])(this);
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf(&local_268[0].field_8, "%s FPS: N/A", uVar13);
            (*(code*)field_0[7])(this, &local_268[0].field_8, param_1, param_2, 1090470143, 255, 2);
        } else {
            lVar12 = this_01->GetLastFrameDurationNS();
            lVar12 = field_98664 - lVar12;
            field_98664 = lVar12;
            if (lVar12 < 1) {
                fVar14 = (float)this_01->GetOverbright();
                field_98680 = fVar14;
                field_98684 = 1000.0 / fVar14;
                fVar14 = (float)this_01->GetAvgFrameDurationMS();
                field_98688 = fVar14;
                fVar14 = (float)this_01->GetAvgStarvationDurationMS();
                field_98692 = fVar14;
                field_98664 = field_98672;
            }
            callstack::Callstack::Callstack(local_268);
            local_268->SetRedGreenGradient((int)field_98680, 0, 60);
            uVar2 = local_268->GetX();
            iVar3 = this_01->GetLevel();
            if (iVar3 == 0) {
                uVar13 = (*(code*)field_0[11])(this);
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                    sprintf(&local_268[0].field_8, (double)field_98680, (double)field_98684,
                            "%s FPS: <col=%X>%.1f (%.2fms)", uVar13, (ulong)(uVar2 | 16777216));
            } else {
                iVar3 = this_01->GetLevel();
                local_268->SetRedGreenGradient(iVar3, 0, 60);
                uVar4 = local_268->GetX();
                iVar3 = this_01->GetCompletedGold();
                local_268->SetRedGreenGradient(iVar3, 0, 60);
                uVar5 = local_268->GetX();
                iVar3 = this_01->GetMaxLineWidth();
                local_268->SetRedGreenGradient(iVar3, 0, 60);
                uVar6 = local_268->GetX();
                uVar13 = (*(code*)field_0[11])(this);
                fVar14 = field_98680;
                fVar1 = field_98684;
                uVar7 = this_01->GetLevel();
                uVar8 = this_01->GetCompletedGold();
                uVar9 = this_01->GetMaxLineWidth();
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                    sprintf(&local_268[0].field_8, (double)fVar14, (double)fVar1,
                            "%s FPS: <col=%X>%.1f (%.2fms)</col> [Mean:<col=%X>%u</col>, Best:<col=%X>%u</col>, "
                            "Worst:<col=%X>%u</col>]",
                            uVar13, (ulong)(uVar2 | 16777216), (ulong)(uVar4 | 16777216), (ulong)uVar7,
                            uVar5 | 16777216, uVar8, uVar6 | 16777216, uVar9);
            }
            (*(code*)field_0[7])(this, &local_268[0].field_8, param_1, param_2, 1090470143, 255, 2);
            iVar3 = param_2 - field_112;
            uVar2 = (*(code*)field_0[8])(this, 1);
            local_268->SetRedGreenGradient((int)field_98680, 0, 60);
            uVar4 = local_268->GetX();
            uVar13 = (*(code*)field_0[11])(this);
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf(&local_268[0].field_8, (double)field_98688, "%s duration: %.2fms", uVar13);
            (*(code*)field_0[7])(this, &local_268[0].field_8, param_1, iVar3, uVar4 & 4294967040 | uVar2, uVar2, 2);
            iVar3 = iVar3 - field_112;
            uVar2 = (*(code*)field_0[8])(this, 2);
            local_268->SetRedGreenGradient((int)field_98692, 10, 0);
            uVar4 = local_268->GetX();
            uVar13 = (*(code*)field_0[11])(this);
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf(&local_268[0].field_8, (double)field_98692, "%s starvation: %.2fms", uVar13);
            (*(code*)field_0[7])(this, &local_268[0].field_8, param_1, iVar3, uVar4 & 4294967040 | uVar2, uVar2, 2);
            iVar3 = iVar3 - field_112;
            uVar2 = (*(code*)field_0[8])(this, 3);
            if (uVar2 != 0) {
                this_00 = field_128;
                iVar10 = this_00->GetMin();
                local_268->SetRedGreenGradient(iVar10, 0, 60);
                uVar4 = local_268->GetX();
                uVar13 = (*(code*)field_0[11])(this);
                uVar5 = this_00->GetMin();
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                    sprintf(&local_268[0].field_8, "Lowest %s FPS: %d", uVar13, (ulong)uVar5);
                (*(code*)field_0[7])(this, &local_268[0].field_8, param_1, iVar3, uVar4 & 4294967040 | uVar2, uVar2, 2);
                iVar10 = field_112;
                uVar2 = (*(code*)field_0[8])(this, 4);
                if (uVar2 != 0) {
                    iVar11 = this_00->GetMax();
                    local_268->SetRedGreenGradient(iVar11, 0, 60);
                    uVar4 = local_268->GetX();
                    uVar13 = (*(code*)field_0[11])(this);
                    uVar5 = this_00->GetMax();
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                        sprintf(&local_268[0].field_8, "Peak %s FPS: %d", uVar13, (ulong)uVar5);
                    (*(code*)field_0[7])(this, &local_268[0].field_8, param_1, iVar3 - iVar10,
                                         uVar4 & 4294967040 | uVar2, uVar2, 2);
                }
            }
        }
        /* WARNING: Subroutine does not return */
        local_268[0].field_8.~fixed_string();
    }

    // 0x1008fd230, 112 bytes, placed by class name
    // DebugOverlayFPS::UpdateImpl(unsigned long long)
    undefined8 DebugOverlayFPS::UpdateImpl(ulonglong param_1) {
        undefined1* this_00;
        int iVar1;
        FPSCounter* this_01;

        this_01 = (FPSCounter*)(*(code*)field_0[12])();
        this_00 = field_128;
        if (this_01 == (FPSCounter*)0) {
            this_00->Reset();
            Hide();
        } else {
            iVar1 = this_01->GetImmediateFPS();
            this_00->RecordValue(param_1, iVar1);
            this_00->SetMaximum(80);
            Show();
        }
        return 1;
    }

    // 0x1008fd2a0, 64 bytes, placed by class name
    // DebugOverlayFPS::SetHeight(int)
    void DebugOverlayFPS::SetHeight(int param_1) {
        float local_14;

        field_112 = param_1 + 2;
        (&field_56, &local_14, 0, 0)->SetValue();
        field_116 = field_112 * 4 + 2;
    }

    // 0x1008fd2e0, 608 bytes, placed by class name
    // DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)
    void DebugOverlayFPS::RegisterTweakyVars(Container* param_1) {
        undefined8 uVar1;
        Container* pCVar2;
        shared_ptr<tweak::Container> local_a8[16];
        function local_98[56];
        fixed_string<char, 16, true, eastl::allocator> local_60[64];

        local_60._56_8_ = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 16, true, eastl::allocator>::fixed_string(local_60);
        uVar1 = (*(code*)field_0[11])(this);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 16ul, 1ul, 0ul, true, eastl::allocator>>::
            append_sprintf((char*)local_60, "%s FPS", uVar1);
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_a8->AddGroup(param_1);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->(local_a8);
        pCVar2->AddCheckBox("Display FPS Counter", &field_120);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->(local_a8);
        pCVar2->AddCheckBox("Keep FPS counter expanded", &field_121);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->(local_a8);
        std::function<void(tweak::Event_const&)>::function<DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::__8,
                                                           void>(local_98, this);
        pCVar2->AddSlider("FPS Sample Count", 1.0, 100.0, 1.0, local_98);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_98);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->(local_a8);
        std::function<void(tweak::Event_const&)>::function<DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::__9,
                                                           void>(local_98, this);
        pCVar2->AddSlider("FPS Mean Sample Time MS", 100.0, 60000.0, 100.0, local_98);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_98);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->(local_a8);
        std::function<void(tweak::Event_const&)>::function<DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::__10,
                                                           void>(local_98, this);
        pCVar2->AddSlider("FPS Update Delay (s)", 0.0, 1.0, 0.01, local_98);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_98);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->(local_a8);
        std::function<void(tweak::Event_const&)>::function<DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::__11,
                                                           void>(local_98, this);
        pCVar2->AddButton("Reset FPS Counter", local_98);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_98);
        local_a8->~shared_ptr();
        /* WARNING: Subroutine does not return */
        local_60->~fixed_string();
    }

    // 0x100914870, 272 bytes, placed by class name
    // DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const
    /* DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const */

    void DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(Event* param_1) {
        long* plVar1;
        uint uVar2;
        FPSCounter* this_00;
        Slider* this_01;
        RenderDevice* this_02;
        float fVar3;
        FPSCounter* local_e8;
        uint local_e0;
        function local_d8;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        plVar1 = *(long**)this;
        this_00 = (FPSCounter*)(**(code**)(*plVar1 + 96))(plVar1);
        if (this_00 != (FPSCounter*)0) {
            this_01 = (Slider*)param_1->end();
            if (param_1->field_16 == 1) {
                uVar2 = this_00->GetFPSSampleCount();
                tweak::Slider::SetSlider<float>(this_01, (float)uVar2);
            }
            if (param_1->field_16 == 3) {
                fVar3 = (float)this_01->GetCurrentValue();
                if ((char)plVar1[12332] == '\0') {
                    this_00->SetFPSSampleCount((uint)(long)fVar3);
                } else {
                    this_02 = (RenderDevice*)this_01->Instance();
                    local_e8 = this_00;
                    local_e0 = (uint)(long)fVar3;
                    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::
                    operator()(
                        (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                        (_lambda_jag__render__RenderContext___1_*)&local_e8);
                    this_02->RunOnRenderThread(&local_d8);
                    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::
                        ~function(
                            (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
                }
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100914a20, 32 bytes, placed by class name
    // DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}::operator()(render::RenderContext&) const
    /* DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&)
   const::{lambda(render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&)
   const */

    _func_TEMPNAMEPLACEHOLDERVALUE_Event_const_ptr* const ::{
        lambda(render::RenderContext&) #1
    }
    ::operator()(RenderContext * param_1) {
        _func_TEMPNAMEPLACEHOLDERVALUE_Event_const_ptr* p_Var1;

        p_Var1 = (_func_TEMPNAMEPLACEHOLDERVALUE_Event_const_ptr*)(*(FPSCounter**)this)
                     ->SetFPSSampleCount(*(uint*)(this + 8));
        return p_Var1;
    }

    // 0x100915340, 112 bytes, placed by class name
    // DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_9::operator()(tweak::Event const&) const
    /* DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_9::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const */

    void DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_9::operator()(Event* param_1) {
        uint uVar1;
        FPSCounter* this_00;
        Slider* this_01;
        float fVar2;

        this_00 = (FPSCounter*)(**(code**)(**(long**)this + 96))();
        if (this_00 != (FPSCounter*)0) {
            this_01 = (Slider*)param_1->end();
            if (param_1->field_16 == 1) {
                uVar1 = this_00->GetRollingMeanSampleDurationMS();
                tweak::Slider::SetSlider<float>(this_01, (float)uVar1);
            }
            if (param_1->field_16 == 3) {
                fVar2 = (float)this_01->GetCurrentValue();
                this_00->SetRollingMeanDurationMS((uint)(long)fVar2);
            }
        }
    }

    // 0x100915cc0, 144 bytes, placed by class name
    // DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_10::operator()(tweak::Event const&) const
    /* DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_10::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const */

    void DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_10::operator()(Event* param_1) {
        long lVar1;
        Slider* this_00;
        ulong uVar2;
        float fVar3;

        lVar1 = *(long*)this;
        this_00 = (Slider*)param_1->end();
        if (param_1->field_16 == 1) {
            tweak::Slider::SetSlider<float>(this_00, (float)*(ulong*)(lVar1 + 98672) * 1e-09);
        }
        if (param_1->field_16 == 3) {
            fVar3 = (float)this_00->GetCurrentValue();
            uVar2 = (long)(fVar3 * 1e+09) & 4294967295;
            *(ulong*)(lVar1 + 98664) = uVar2;
            *(ulong*)(lVar1 + 98672) = uVar2;
        }
    }

    // 0x100916640, 224 bytes, placed by class name
    // DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const
    /* DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const */

    void DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(Event* param_1) {
        Singleton<render::RenderDevice>* pSVar1;
        FPSCounter* this_00;
        RenderDevice* this_01;
        Singleton<render::RenderDevice>* this_02;
        FPSCounter* local_d0;
        function local_c8;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pSVar1 = *(Singleton<render::RenderDevice>**)this;
        this_02 = pSVar1;
        this_00 = (FPSCounter*)(**(code**)(*(long*)pSVar1 + 96))();
        if ((this_00 != (FPSCounter*)0) && (param_1->field_16 == 2)) {
            if (pSVar1[98656] == (Singleton<render::RenderDevice>)0) {
                this_00->Reset();
            } else {
                this_01 = (RenderDevice*)this_02->Instance();
                local_d0 = this_00;
                fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::
                operator()((function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8,
                           (_lambda_jag__render__RenderContext___1_*)&local_d0);
                this_01->RunOnRenderThread(&local_c8);
                fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::
                    ~function(
                        (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
            }
            ((pSVar1 + 128))->Reset();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1009167b0, 16 bytes, placed by class name
    // DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}::operator()(render::RenderContext&) const
    /* DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&)
   const::{lambda(render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&)
   const */

    _func_TEMPNAMEPLACEHOLDERVALUE_Event_const_ptr* const ::{
        lambda(render::RenderContext&) #1
    }
    ::operator()(RenderContext * param_1) {
        _func_TEMPNAMEPLACEHOLDERVALUE_Event_const_ptr* p_Var1;

        p_Var1 = (_func_TEMPNAMEPLACEHOLDERVALUE_Event_const_ptr*)(*(FPSCounter**)this)->Reset();
        return p_Var1;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    DebugOverlayFPS::~DebugOverlayFPS();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    DebugOverlayFPS::~DebugOverlayFPS();

} // namespace jag

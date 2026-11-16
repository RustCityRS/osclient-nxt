// libs/graphics/runetek7/gui/debug/sections/DebugOverlayFPS.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag {
    class DebugOverlayFPS {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayFPS();
        virtual void RegisterTweakyVars(tweak::Container& container);
        virtual void SetHeight(int arg1);
        virtual void DrawImpl(int arg1, int arg2);
        virtual void UpdateImpl(unsigned long long arg1);
        DebugOverlayFPS(DebugOverlay& debugOverlay, bool arg2, bool arg3);

    private:
        uint8_t _unknown_8[104];
        int field_112;
        int field_116;
        bool field_120;
        bool field_121;
        uint8_t _unknown_122[6];
        TimedGraph field_128;
        uint8_t _unknown_98600[56];
        bool field_98656;
        uint8_t _unknown_98657[7];
        long field_98664;
        uint64_t field_98672;
        float field_98680;
        float field_98684;
        float field_98688;
        float field_98692;
        uint8_t _unknown_98696[4];
    };

    // 0x1008cfe90: DebugOverlayFPS::~DebugOverlayFPS() has the same machine code as DebugOverlayLPS::~DebugOverlayLPS()

    // 0x1008fca40
    DebugOverlayFPS::DebugOverlayFPS(DebugOverlay& debugOverlay, bool arg2, bool arg3)
        : DebugOverlayGraphSection(debugOverlay, 1, arg3, 0, 1.0), field_98656(arg2), field_98664(0),
          field_98672(250000000) {
        field_128->SetHighIsGood();
    }

    // 0x1008fcab0
    void DebugOverlayMainFPS::GetFPSCounter() const {
        ((GraphicsApp*)GraphicsApp::Instance())->GetFPSCounter();
    }

    // 0x1008fcaf0
    uint64_t DebugOverlayRenderFPS::GetFPSCounter() const {
        long lVar2;
        RenderContext* pRVar3;

        auto pRVar1 = InstancePtr();
        if (pRVar1 != nullptr) {
            pRVar1 = (RenderDevice*)Instance();
            lVar2 = pRVar1->GetPrimaryRenderContext();
            if (lVar2 != 0) {
                pRVar1 = (RenderDevice*)pRVar1->Instance();
                pRVar3 = (RenderContext*)pRVar1->GetPrimaryRenderContext();
                lVar2 = pRVar3->GetFPSCounter();
                if (lVar2 != 0) {
                    pRVar1 = (RenderDevice*)pRVar3->Instance();
                    pRVar3 = (RenderContext*)pRVar1->GetPrimaryRenderContext();
                    return pRVar3->GetFPSCounter();
                }
            }
        }
        return 0;
    }

    // 0x1008fcb70
    void DebugOverlayFPS::DrawImpl(int arg1, int arg2) {

        fixed_string<char, 512> local_260;
        (*this->_vptr[1]._x7e___2)(this);
    }

    // 0x1008fd230
    void DebugOverlayFPS::UpdateImpl(unsigned long long arg1) {
        (*this->_vptr[1]._x7e___2)();
    }

    // 0x1008fd2a0
    void DebugOverlayFPS::SetHeight(int arg1) {
        float local_14;

        field_112 = arg1 + 2;
        field_56.SetValue(local_14, 0, 0);
        field_116 = field_112 * 4 + 2;
    }

    // 0x1008fd2e0
    void DebugOverlayFPS::RegisterTweakyVars(tweak::Container& container) {

        fixed_string<char, 16> local_60;
        (*this->_vptr[1]._dtor)(this);
    }

    // 0x100914870
    void DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(const tweak::Event& event) const {
        unsigned int uVar2;
        Slider* this_01;
        RenderDevice* this_02;
        float fVar3;
        FPSCounter* local_e8;
        unsigned int local_e0;
        function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[168];
        long local_30;

        long* plVar1 = field_0;
        FPSCounter* this_00 = (FPSCounter*)(**(void (**)(...))(*plVar1 + 96))(plVar1);
        if (this_00 != nullptr) {
            this_01 = (Slider*)event.end();
            if (event.field_16 == 1) {
                uVar2 = this_00->GetFPSSampleCount();
                this_01->SetSlider<float>((float)uVar2);
            }
            if (event.field_16 == 3) {
                fVar3 = (float)this_01->GetCurrentValue();
                if ((char)plVar1[12332] == '\0') {
                    this_00->SetFPSSampleCount((unsigned int)(long)fVar3);
                } else {
                    this_02 = (RenderDevice*)this_01->Instance();
                    local_e8 = this_00;
                    local_e0 = (unsigned int)(long)fVar3;
                    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::
                    operator()(local_d8, (_lambda_jag__render__RenderContext___1_*)&local_e8);
                    this_02->RunOnRenderThread(*local_d8);
                }
            }
        }
    }

    // 0x100914a20
    void DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const ::{
        lambda(render::RenderContext&) #1
    }
    ::operator()(render::RenderContext & renderContext) const {
        (*(FPSCounter**)this)->SetFPSSampleCount(*(unsigned int*)(this + 8));
    }

    // 0x100915340
    void DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_9::operator()(const tweak::Event& event) const {
        unsigned int uVar1;
        Slider* this_01;
        float fVar2;

        FPSCounter* this_00 = (FPSCounter*)(**(void (**)(...))(*field_0 + 96))();
        if (this_00 != nullptr) {
            this_01 = (Slider*)event.end();
            if (event.field_16 == 1) {
                uVar1 = this_00->GetRollingMeanSampleDurationMS();
                this_01->SetSlider<float>((float)uVar1);
            }
            if (event.field_16 == 3) {
                fVar2 = (float)this_01->GetCurrentValue();
                this_00->SetRollingMeanDurationMS((unsigned int)(long)fVar2);
            }
        }
    }

    // 0x100915cc0
    void DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_10::operator()(const tweak::Event& event) const {
        unsigned long uVar2;
        float fVar3;

        long lVar1 = field_0;
        auto this_00 = event.end();
        if (event.field_16 == 1) {
            this_00->SetSlider<float>((float)*(unsigned long*)(lVar1 + 98672) * 1e-09);
        }
        if (event.field_16 == 3) {
            fVar3 = (float)this_00->GetCurrentValue();
            uVar2 = (long)(fVar3 * 1e+09) & 4294967295;
            *(unsigned long*)(lVar1 + 98664) = uVar2;
            *(unsigned long*)(lVar1 + 98672) = uVar2;
        }
    }

    // 0x100916640
    void DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(const tweak::Event& event) const {
        RenderDevice* this_01;
        FPSCounter* local_d0;
        function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[160];
        long local_28;

        Singleton<render::RenderDevice>* pSVar1 = field_0;
        Singleton<render::RenderDevice>* this_02 = pSVar1;
        FPSCounter* this_00 = (FPSCounter*)(**(void (**)(...))(*(long*)pSVar1 + 96))();
        if ((this_00 != nullptr) && (event.field_16 == 2)) {
            if (pSVar1[98656] == (Singleton<render::RenderDevice>)0) {
                this_00->Reset();
            } else {
                this_01 = (RenderDevice*)this_02->Instance();
                local_d0 = this_00;
                fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::
                operator()(local_c8, (_lambda_jag__render__RenderContext___1_*)&local_d0);
                this_01->RunOnRenderThread(*local_c8);
            }
            ((pSVar1 + 128))->Reset();
        }
    }

    // 0x1009167b0
    void DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const ::{
        lambda(render::RenderContext&) #1
    }
    ::operator()(render::RenderContext & renderContext) const {
        (*(FPSCounter**)this)->Reset();
    }

} // namespace jag

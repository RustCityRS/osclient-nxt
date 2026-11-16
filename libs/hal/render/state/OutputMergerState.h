// libs/hal/render/state/OutputMergerState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::render {
    class OutputMergerState {
    public:
        void GetViewports() const;
        uint8_t* GetScissorRects() const;
        void SetScissorRects(const math::Rect<unsigned int>* rect, unsigned int arg2);
        void PushScissorRect(const math::Rect<unsigned int>& rect);
        unsigned int GetClearFlags() const;
        void PushViewport(const Viewport& viewport);
        OutputMergerState();
        void SetViewports(const Viewport* viewport, unsigned int arg2);
        void SetRenderTargets(const RenderTargets* renderTargets);
        void Clear();
        auto GetClearColours() const;
        float GetDepthClear() const;
        unsigned char GetStencilClear() const;
        void SetClearColours(const math::Vector4T<float>* vector4, unsigned int arg2);
        void SetDepthStencilClear(float arg1, unsigned char arg2);
        void SetClearFlags(unsigned int arg1);
        RenderTargets* GetRenderTargets() const;
        ~OutputMergerState();
        OutputMergerState(const OutputMergerState& outputMergerState);

    private:
        eastl* field_0;
        Viewport* field_8;
        uint8_t _unknown_16[104];
        RenderTargets* m_pRenderTargets;
        uint8_t _unknown_128[64];
        float m_depthClear;
        unsigned char m_stencilClear;
        uint8_t field_197[3];
        unsigned int m_clearFlags;
        uint8_t _unknown_204[4];
    };

    // 0x1001c29d0
    void OutputMergerState::SetScissorRects(const math::Rect<unsigned int>* rect, unsigned int arg2) {
        field_64.assign<math::Rect<unsigned int> const*>(rect, rect + (unsigned long)arg2 * 16);
    }

    // 0x1003c5050
    void OutputMergerState::PushScissorRect(const math::Rect<unsigned int>& rect) {
        field_64.push_back(rect);
    }

    // 0x100a50c50
    void OutputMergerState::PushViewport(const Viewport& viewport) {
        push_back(viewport);
    }

    // 0x100bdf550
    void OutputMergerState::SetViewports(const Viewport* viewport, unsigned int arg2) {
        assign<Viewport const*>(viewport, (Viewport*)(&viewport->field_0 + (unsigned long)arg2 * 6));
    }

    // 0x100bf6c40
    OutputMergerState::OutputMergerState()
        : eastl::fixed_vector<Viewport, 1ul>(), m_pRenderTargets(nullptr), m_depthClear(1.0) {
        m_stencilClear = '\0';
        m_clearFlags = 0;
    }

    // 0x100c181a0
    auto OutputMergerState::GetClearColours() const {
        return auto(field_128);
    }

    // 0x100c181d0
    float OutputMergerState::GetDepthClear() const {
        return m_depthClear;
    }

    // 0x100c181e0
    unsigned char OutputMergerState::GetStencilClear() const {
        return m_stencilClear;
    }

    // 0x100c18270
    void OutputMergerState::SetClearColours(const math::Vector4T<float>* vector4, unsigned int arg2) {
        field_128.assign<math::Vector4T<float> const*>(vector4, vector4 + (unsigned long)arg2 * 16);
    }

    // 0x100c18290
    void OutputMergerState::SetDepthStencilClear(float arg1, unsigned char arg2) {
        m_depthClear = arg1;
        m_stencilClear = arg2;
    }

    // 0x100c182b0
    void OutputMergerState::SetClearFlags(unsigned int arg1) {
        m_clearFlags = arg1;
    }

    // 0x100c1d340
    RenderTargets* OutputMergerState::GetRenderTargets() const {
        if (m_pRenderTargets == nullptr) {
            LogAssert("m_pRenderTargets",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                      "OutputMergerState.h",
                      84, nullptr);
        }
        return m_pRenderTargets;
    }

    // 0x100c323b0
    OutputMergerState::~OutputMergerState() {
        field_128.~fixed_vector();
        field_64.~fixed_vector();
    }

    // 0x100c43f90
    OutputMergerState::OutputMergerState(const OutputMergerState& outputMergerState)
        : eastl::fixed_vector<Viewport, 1ul>(outputMergerState), field_64(outputMergerState.field_64),
          m_pRenderTargets(outputMergerState.m_pRenderTargets), field_128(outputMergerState.field_128),
          m_clearFlags(outputMergerState.m_clearFlags) {
        unsigned char uVar1 = outputMergerState.m_stencilClear;
        uint32_t uVar2 = outputMergerState.field_197;
        m_depthClear = outputMergerState.m_depthClear;
        m_stencilClear = uVar1;
        field_197 = uVar2;
    }

} // namespace jag::render

namespace jag::oldscape {
    // 0x1001c2a10
    void OSRenderCore_RenderThread::UpdateWindowProperties() {
        uint64_t extraout_var;
        uint8_t local_40[16];

        uint8_t uVar2 = field_16020136->GetWindow();
        Window* this_00 = (Window*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2);
        long lVar1 = *(long*)(field_32 + (long)(this->_vptr[-3].GetUISize + 56));
        *local_40 = this_00->GetWindowFrame();
        (*((lVar1 + 19677768))) = *local_40;
        float fVar4 = (float)this_00->GetWidth();
        int arg3 = jag::math::RoundFloatToInt(fVar4);
        fVar4 = (float)this_00->GetHeight();
        int arg4 = jag::math::RoundFloatToInt(fVar4);
        new (local_40) dash3d::GridRect(0, 0, arg3, arg4);
        (*((lVar1 + 19677784))) = *local_40;
        uint8_t uVar3 = this_00->IsMaximized();
        *(uint8_t*)(lVar1 + 19677800) = uVar3;
        uVar3 = this_00->IsFullScreen();
        *(uint8_t*)(lVar1 + 19677801) = uVar3;
        ((lVar1 + 19677552))->clear();
        this_00->GetMonitors(*((lVar1 + 19677552)));
    }

    // 0x1001c2af0
    void OSRenderCore_Impl::FlipThreadRenderStates() {
        uint64_t uVar3;

        ((WindowProperties*)(*(long*)(field_16 + (long)(this->_vptr[-1].TexturesUploaded + 72)) + 19677552))
            ->OverrideWithSetOptions(
                *((WindowSetOptions*)(*(long*)(field_16 + (long)(this->_vptr[-1].GetAudioAPI - 16)) + 19677508)));
        eastl::swap<graphics::Pix8*>(*((Pix32**)(field_16 + (long)(this->_vptr[-1].TexturesUploaded + 72))),
                                     *((Pix32**)(field_16 + (long)(this->_vptr[-1].GetAudioAPI - 16))));
        field_704->ApplyRSevenOptions(
            *((RSevenOptions*)(*(long*)(field_16 + (long)(this->_vptr[-1].TexturesUploaded + 72)) + 19677808)));
        (*((RSevenOptions*)(*(long*)(field_16 + (long)(this->_vptr[-1].GetAudioAPI - 16)) + 19677808))) =
            (*((RSevenOptions*)(*(long*)(field_16 + (long)(this->_vptr[-1].TexturesUploaded + 72)) + 19677808)));
        OSRenderCore_RenderThread_Common* this_00 =
            *(OSRenderCore_RenderThread_Common**)(field_16 + (long)(this->_vptr[-1].TexturesUploaded + 72));
        if (*(int*)((long)&this_00[141643].field_96 + 4) == 1) {
            *(uint32_t*)(field_704 + 104) = *(uint32_t*)(field_16 + (long)(this->_vptr[-1].GetAudioAPI + 12));
        } else {
            uVar3 = this_00->field_40.size();
            *(uint64_t*)(*(long*)(field_16 + (long)(this->_vptr[-1].GetAudioAPI - 16)) + 19688848) = uVar3;
            this_00 = (OSRenderCore_RenderThread_Common*)((field_704 + 1580368))->GetNxtUploadedModels();
            uVar3 = this_00->size();
            *(uint64_t*)(*(long*)(field_16 + (long)(this->_vptr[-1].GetAudioAPI - 16)) + 19688856) = uVar3;
        }
        uint8_t uVar2 = this_00->IsRenderContextReady();
        OSRenderCore_Impl_vtbl* pOVar1 = this->_vptr;
        *(uint8_t*)(*(long*)(field_16 + (long)(pOVar1[-1].GetAudioAPI - 16)) + 19688840) = uVar2;
        ((fixed_vector<Renderable, 49152ul>*)(*(long*)(field_16 + (long)(pOVar1[-1].GetAudioAPI - 16)) + 40))
            ->reset_lose_memory();
        ((fixed_vector<long long, 1000ul>*)(*(long*)(field_16 + (long)(this->_vptr[-1].TexturesUploaded + 72)) +
                                            19680800))
            ->reset_lose_memory();
    }

} // namespace jag::oldscape

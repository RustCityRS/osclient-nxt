// libs/hal/render/state/OutputMergerState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::render {
    class OutputMergerState {
    public:
        GetViewports() const;
        GetScissorRects() const;
        void SetScissorRects(math::Rect<unsigned int> const*, unsigned int);
        void PushScissorRect(math::Rect<unsigned int> const&);
        uint GetClearFlags() const;
        void PushViewport(Viewport const&);
        OutputMergerState();
        void SetViewports(Viewport const*, unsigned int);
        void SetRenderTargets(RenderTargets const*);
        void Clear();
        GetClearColours() const;
        float GetDepthClear() const;
        uchar GetStencilClear() const;
        void SetClearColours(math::Vector4T<float> const*, unsigned int);
        void SetDepthStencilClear(float, unsigned char);
        void SetClearFlags(unsigned int);
        RenderTargets* GetRenderTargets() const;
        ~OutputMergerState();
        OutputMergerState(OutputMergerState const&);

        // data members, from how the methods use this: 208 bytes
        long field_0;      // offset 0
        Viewport* field_8; // offset 8
        char _unknown_16[104];
        RenderTargets* m_pRenderTargets; // offset 120
        char _unknown_128[64];
        float m_depthClear;   // offset 192
        uchar m_stencilClear; // offset 196
        undefined3 field_197; // offset 197
        uint m_clearFlags;    // offset 200
        char _unknown_204[4];
    };

    // 0x1001c29d0, 32 bytes, inline, placed by class name and debug map
    // OutputMergerState::SetScissorRects(math::Rect<unsigned int> const*, unsigned int)
    void OutputMergerState::SetScissorRects(Rect* param_1, uint param_2) {
        undefined4 in_register_00000034;

        eastl::vector<math::Rect<unsigned int>,
                      eastl::fixed_vector_allocator<16ul, 1ul, 4ul, 0ul, true, eastl::allocator>>::
            assign<math::Rect<unsigned int> const*>(param_1 + 64, (Rect*)CONCAT44(in_register_00000034, param_2));
    }

    // 0x1003c5050, 16 bytes, inline, placed by class name
    // OutputMergerState::PushScissorRect(math::Rect<unsigned int> const&)
    void OutputMergerState::PushScissorRect(Rect* param_1) {
        eastl::fixed_vector<math::Rect<unsigned int>, 1ul, true, eastl::allocator>::push_back(param_1 + 64);
    }

    // 0x100a50c50, 16 bytes, inline, placed by class name
    // OutputMergerState::PushViewport(Viewport const&)
    void OutputMergerState::PushViewport(Viewport* param_1) {
        eastl::fixed_vector<Viewport, 1ul, true, eastl::allocator>::push_back(param_1);
    }

    // 0x100bdf450, 16 bytes, complete-object constructor, inline, placed by class name
    // OutputMergerState::OutputMergerState(): jumps straight to the base-object constructor

    // 0x100bdf550, 32 bytes, inline, placed by class name
    // OutputMergerState::SetViewports(Viewport const*, unsigned int)
    void OutputMergerState::SetViewports(Viewport* param_1, uint param_2) {
        undefined4 in_register_00000034;

        eastl::vector<Viewport, eastl::fixed_vector_allocator<24ul, 1ul, 4ul, 0ul, true, eastl::allocator>>::assign<
            Viewport_const*>(param_1, (Viewport*)CONCAT44(in_register_00000034, param_2));
    }

    // 0x100bf6c40, 128 bytes, base-object constructor, inline, placed by class name
    // OutputMergerState::OutputMergerState()
    void OutputMergerState::OutputMergerState() {
        new (this) eastl::fixed_vector<Viewport, 1ul, true, eastl::allocator>();
        new (&field_64) eastl::fixed_vector<math::Rect<unsigned int>, 1ul, true, eastl::allocator>();
        m_pRenderTargets = (RenderTargets*)0;
        new (&field_128) eastl::fixed_vector<math::Vector4T<float>, 1ul, true, eastl::allocator>();
        m_depthClear = 1.0;
        m_stencilClear = '\0';
        m_clearFlags = 0;
    }

    // 0x100c181a0, 32 bytes, inline, placed by class name
    // OutputMergerState::GetClearColours() const
    OutputMergerState* OutputMergerState::GetClearColours() {
        long in_RSI;

        new (this)
            eastl::fixed_vector<math::Vector4T<float>, 1ul, true, eastl::allocator>((fixed_vector*)(in_RSI + 128));
        return this;
    }

    // 0x100c181d0, 16 bytes, inline, placed by class name
    // OutputMergerState::GetDepthClear() const
    float OutputMergerState::GetDepthClear() {
        return m_depthClear;
    }

    // 0x100c181e0, 16 bytes, inline, placed by class name
    // OutputMergerState::GetStencilClear() const
    uchar OutputMergerState::GetStencilClear() {
        return m_stencilClear;
    }

    // 0x100c18270, 32 bytes, inline, placed by class name
    // OutputMergerState::SetClearColours(math::Vector4T<float> const*, unsigned int)
    void OutputMergerState::SetClearColours(Vector4T* param_1, uint param_2) {
        undefined4 in_register_00000034;

        eastl::vector<math::Vector4T<float>,
                      eastl::fixed_vector_allocator<16ul, 1ul, 16ul, 0ul, true, eastl::allocator>>::
            assign<math::Vector4T<float> const*>(param_1 + 128, (Vector4T*)CONCAT44(in_register_00000034, param_2));
    }

    // 0x100c18290, 32 bytes, inline, placed by class name
    // OutputMergerState::SetDepthStencilClear(float, unsigned char)
    void OutputMergerState::SetDepthStencilClear(float param_1, uchar param_2) {
        m_depthClear = param_1;
        m_stencilClear = param_2;
    }

    // 0x100c182b0, 16 bytes, inline, placed by class name
    // OutputMergerState::SetClearFlags(unsigned int)
    void OutputMergerState::SetClearFlags(uint param_1) {
        m_clearFlags = param_1;
    }

    // 0x100c1d340, 64 bytes, inline, placed by class name
    // OutputMergerState::GetRenderTargets() const
    RenderTargets* OutputMergerState::GetRenderTargets() {
        if (m_pRenderTargets == (RenderTargets*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pRenderTargets",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                      "OutputMergerState.h",
                      84, (char*)0);
        }
        return m_pRenderTargets;
    }

    // 0x100c323a0, 16 bytes, complete-object destructor, inline, placed by class name
    // OutputMergerState::~OutputMergerState(): jumps straight to the base-object destructor

    // 0x100c323b0, 48 bytes, base-object destructor, inline, placed by class name
    // OutputMergerState::~OutputMergerState()
    void OutputMergerState::~OutputMergerState() {
        (&field_128)->~fixed_vector();
        (&field_64)->~fixed_vector();
        ~fixed_vector();
    }

    // 0x100c43f80, 16 bytes, complete-object constructor, inline, placed by class name
    // OutputMergerState::OutputMergerState(OutputMergerState const&): jumps straight to the base-object constructor

    // 0x100c43f90, 144 bytes, base-object constructor, inline, placed by class name
    // OutputMergerState::OutputMergerState(OutputMergerState const&)
    void OutputMergerState::OutputMergerState(OutputMergerState* param_1) {
        uchar uVar1;
        undefined3 uVar2;

        new (this) eastl::fixed_vector<Viewport, 1ul, true, eastl::allocator>(param_1);
        new (&field_64, (fixed_vector*)&param_1->field_64)
            eastl::fixed_vector<math::Rect<unsigned int>, 1ul, true, eastl::allocator>();
        m_pRenderTargets = param_1->m_pRenderTargets;
        new (&field_128, (fixed_vector*)&param_1->field_128)
            eastl::fixed_vector<math::Vector4T<float>, 1ul, true, eastl::allocator>();
        m_clearFlags = param_1->m_clearFlags;
        uVar1 = param_1->m_stencilClear;
        uVar2 = param_1->field_197;
        m_depthClear = param_1->m_depthClear;
        m_stencilClear = uVar1;
        field_197 = uVar2;
    }

} // namespace jag::render

namespace jag::oldscape {
    // 0x1001c2a10, 224 bytes, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread::UpdateWindowProperties()
    void OSRenderCore_RenderThread::UpdateWindowProperties() {
        long lVar1;
        undefined1 uVar2;
        int iVar3;
        int iVar4;
        Window* this_00;
        float fVar5;
        undefined1 local_40[16];

        this_00 = (Window*)(*(code*)field_16020136->field_0[12])();
        lVar1 = *(long*)(field_32 + (long)(field_0[-3] + 56));
        local_40->GetWindowFrame();
        jag::math::Rect<unsigned int>::operator=((Rect<unsigned int>*)(lVar1 + 19677768), (Rect*)local_40);
        fVar5 = (float)this_00->GetWidth();
        iVar3 = jag::math::RoundFloatToInt(fVar5);
        fVar5 = (float)this_00->GetHeight();
        iVar4 = jag::math::RoundFloatToInt(fVar5);
        new (local_40) dash3d::GridRect(0, 0, iVar3, iVar4);
        jag::math::Rect<unsigned int>::operator=((Rect<unsigned int>*)(lVar1 + 19677784), (Rect*)local_40);
        uVar2 = this_00->IsMaximized();
        *(undefined1*)(lVar1 + 19677800) = uVar2;
        uVar2 = this_00->IsFullScreen();
        *(undefined1*)(lVar1 + 19677801) = uVar2;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        this_00->GetMonitors((fixed_vector*)(lVar1 + 19677552));
    }

    // 0x1001c2af0, 304 bytes, placed by debug map only (low confidence)
    // OSRenderCore_Impl::FlipThreadRenderStates()
    void OSRenderCore_Impl::FlipThreadRenderStates() {
        NpcUID* pNVar1;
        undefined1 uVar2;
        undefined8 uVar3;
        OSRenderCore_RenderThread_Common* this_00;

        ((*(long*)(field_16 + *(long*)(field_0 + -8) + 72) + 19677552),
         (WindowSetOptions*)(*(long*)(field_16 + *(long*)(field_0 + -6) + -16) + 19677508))
            ->OverrideWithSetOptions();
        eastl::swap<graphics::Pix8*>((Pix8**)(field_16 + *(long*)(field_0 + -8) + 72),
                                     (Pix8**)(field_16 + *(long*)(field_0 + -6) + -16));
        (&field_704, (RSevenOptions*)(*(long*)(field_16 + *(long*)(field_0 + -8) + 72) + 19677808))
            ->ApplyRSevenOptions();
        RenderState::RSevenOptions::operator=(
            (RSevenOptions*)(*(long*)(field_16 + *(long*)(field_0 + -6) + -16) + 19677808),
            (RSevenOptions*)(*(long*)(field_16 + *(long*)(field_0 + -8) + 72) + 19677808));
        this_00 = *(OSRenderCore_RenderThread_Common**)(field_16 + *(long*)(field_0 + -8) + 72);
        if (*(int*)((long)&this_00[141643].field_96 + 4) == 1) {
            *(undefined4*)&field_808 = *(undefined4*)(field_16 + *(long*)(field_0 + -6) + 12);
        } else {
            uVar3 = (&this_00->field_40)->size();
            *(undefined8*)(*(long*)(field_16 + *(long*)(field_0 + -6) + -16) + 19688848) = uVar3;
            this_00 = (OSRenderCore_RenderThread_Common*)(&field_1581072)->GetNxtUploadedModels();
            uVar3 = this_00->size();
            *(undefined8*)(*(long*)(field_16 + *(long*)(field_0 + -6) + -16) + 19688856) = uVar3;
        }
        uVar2 = this_00->IsRenderContextReady();
        pNVar1 = field_0;
        *(undefined1*)(*(long*)(field_16 + *(long*)(pNVar1 + -6) + -16) + 19688840) = uVar2;
        ((*(long*)(field_16 + *(long*)(pNVar1 + -6) + -16) + 40))->reset_lose_memory();
        ((*(long*)(field_16 + *(long*)(field_0 + -8) + 72) + 19680800))->reset_lose_memory();
    }

} // namespace jag::oldscape

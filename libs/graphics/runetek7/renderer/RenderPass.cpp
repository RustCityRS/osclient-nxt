// libs/graphics/runetek7/renderer/RenderPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class RenderPass {
    public:
        // virtual methods in vtable order
        virtual ~RenderPass();
        virtual void PreparePass(RT7Core& arg1, EffectManager& arg2, const SceneViewData& arg3, DrawableQueue& arg4);
        virtual uint8_t BeginPass(render::DrawCallState& arg1, render::RenderContext& arg2, EffectManager& arg3,
                                  const SceneViewData& arg4, const DrawableQueue& arg5);
        virtual void __pure_slot_5() = 0;
        void RenderDebug(EffectManager& arg1, DrawableQueue& arg2);
        void RegisterTweakVarsOcclusion(tweak::Container& arg1);
        void EndPass(render::DrawCallState& arg1, render::RenderContext& arg2, EffectManager& arg3,
                     const DrawableQueue& arg4);
        RenderPassType GetRenderPassType() const;
        RenderPass(RenderPassType renderPassType);
        void RegisterTweakVars(tweak::Container& container);
        static int32_t m_useAsyncReprojection; // = 1
        static bool m_useAsyncRasterisation;
        static eastl::vector<RenderPass*> m_renderPassList; // = vector<RenderPass*>()

    private:
        RenderPassType m_renderPassType;
        uint8_t _unknown_12[4];
    };

    class RenderPassBitSet {
    public:
        void SetBits(unsigned int arg1);
        TextureFormatBitSet GetBits() const;
        RenderPassBitSet();
        void Clear();
        void AddRenderPass(unsigned int arg1);
        bool HasShadowMapPass() const;
        bool HasRenderPass(unsigned int arg1) const;
        void RemoveRenderPass(unsigned int arg1);

    private:
        TextureFormatBitSet m_bits;
    };

    // 0x100f43a1c
    int32_t RenderPass::m_useAsyncReprojection = 1;

    // 0x103bbd3e8
    bool RenderPass::m_useAsyncRasterisation;

    // 0x103bbd3f0, set at startup by ___cxx_global_var_init.247
    eastl::vector<RenderPass*> RenderPass::m_renderPassList = vector<RenderPass*>();

    // 0x100009e70: RenderPass::PreparePass(RT7Core&, EffectManager&, SceneViewData const&, DrawableQueue&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: RenderPass::RenderDebug(EffectManager&, DrawableQueue&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: RenderPass::RegisterTweakVarsOcclusion(tweak::Container&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: RenderPass::EndPass(render::DrawCallState&, render::RenderContext&, EffectManager&, DrawableQueue const&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100024170: RenderPass::GetRenderPassType() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x10002d860: RenderPass::BeginPass(render::DrawCallState&, render::RenderContext&, EffectManager&, SceneViewData const&, DrawableQueue const&) has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x1007e3e20
    RenderPass::RenderPass(RenderPassType renderPassType) : m_renderPassType(renderPassType) {
        m_renderPassList.push_back(this);
    }

    // 0x1007e3eb0
    RenderPass::~RenderPass() {
        function<bool_(int, int, int, int)>** arg1;
        function<bool_(int, int, int, int)>** arg2;

        arg1 = (function<bool_(int, int, int, int)>**)m_renderPassList.HeapBeginPtr();
        arg2 = (function<bool_(int, int, int, int)>**)m_renderPassList.end();
        RenderPass* local_28 = this;
        RenderPass** arg1_00 = (RenderPass**)
            eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(arg1, arg2,
                                                                                                             local_28);
        auto ppRVar1 = m_renderPassList.end();
        if (arg1_00 != ppRVar1) {
            m_renderPassList.erase(arg1_00);
        }
    }

    // 0x1007e3f90
    void RenderPass::RegisterTweakVars(tweak::Container& container) {
        container.AddCheckBox("Use Async Rasterisation", m_useAsyncRasterisation);
        container.AddCheckBox("Use Async Reprojection", m_useAsyncReprojection);
        auto plVar1 = m_renderPassList.HeapBeginPtr();
        auto plVar2 = m_renderPassList.end();
        while (true) {
            if (plVar1 == plVar2) {
                return;
            }
            if (*plVar1 == 0)
                break;
            (**(void (**)(...))(*(long*)*plVar1 + 56))((long*)*plVar1, container);
            plVar1 = plVar1 + 1;
        }
        LogAssert("renderPass != nullptr",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/renderer/"
                  "RenderPass.cpp",
                  38, nullptr);
    }

} // namespace jag::graphics

// libs/graphics/runetek7/renderer/RenderPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class RenderPass {
    public:
        // virtual methods in vtable order
        virtual ~RenderPass();
        virtual PreparePass(RT7Core&, EffectManager&, SceneViewData const&, DrawableQueue&);
        virtual BeginPass(render::DrawCallState&, render::RenderContext&, EffectManager&, SceneViewData const&,
                          DrawableQueue const&);
        virtual void __pure_slot_5() = 0;
        RenderDebug(EffectManager&, DrawableQueue&);
        RegisterTweakVarsOcclusion(tweak::Container&);
        EndPass(render::DrawCallState&, render::RenderContext&, EffectManager&, DrawableQueue const&);
        GetRenderPassType() const;
        RenderPass(RenderPassType);
        void RegisterTweakVars(tweak::Container&);
        static /* 4 bytes */ m_useAsyncReprojection; // = 1
        static /* 8 bytes */ m_useAsyncRasterisation;
        static eastl::vector<RenderPass*, eastl::allocator> /* 32 bytes */
            m_renderPassList;                               // = vector<RenderPass*,eastl::allocator>()

        // data members, from how the methods use this: 16 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined4 field_8;  // offset 8
        char _unknown_12[4];
    };

    class RenderPassBitSet {
    public:
        SetBits(unsigned int);
        GetBits() const;
        RenderPassBitSet();
        Clear();
        AddRenderPass(unsigned int);
        HasShadowMapPass() const;
        HasRenderPass(unsigned int) const;
        void RemoveRenderPass(unsigned int);

        // data members, from how the methods use this: 4 bytes
        uint field_0; // offset 0
    };

    // 0x100f43a1c, 4 bytes, __data
    RenderPass::m_useAsyncReprojection = 1;

    // 0x103bbd3e8, 8 bytes, __common; zero-initialised
    RenderPass::m_useAsyncRasterisation;

    // 0x103bbd3f0, 32 bytes, __common; set at startup by ___cxx_global_var_init.247
    eastl::vector<RenderPass*, eastl::allocator> RenderPass::m_renderPassList = vector<RenderPass*, eastl::allocator>();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    RenderPass::PreparePass(RT7Core&, EffectManager&, SceneViewData const&, DrawableQueue&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    RenderPass::RenderDebug(EffectManager&, DrawableQueue&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    RenderPass::RegisterTweakVarsOcclusion(tweak::Container&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    RenderPass::EndPass(render::DrawCallState&, render::RenderContext&, EffectManager&, DrawableQueue const&);

    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    RenderPass::GetRenderPassType() const;

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    RenderPass::BeginPass(render::DrawCallState&, render::RenderContext&, EffectManager&, SceneViewData const&,
                          DrawableQueue const&);

    // 0x1007e3e20, 48 bytes, base-object constructor, placed by class name and debug map
    // RenderPass::RenderPass(RenderPassType)
    void RenderPass::RenderPass(undefined4 param_2) {
        RenderPass* local_10;

        field_0 = &PTR__RenderPass_100f14d40;
        field_8 = param_2;
        local_10 = this;
        m_renderPassList.push_back(&local_10);
    }

    // 0x1007e3eb0, 112 bytes, base-object destructor, placed by class name and debug map
    // RenderPass::~RenderPass()
    void RenderPass::~RenderPass() {
        function** ppfVar1;
        function** ppfVar2;
        RenderPass** ppRVar3;
        RenderPass** ppRVar4;
        RenderPass* local_28;

        field_0 = &PTR__RenderPass_100f14d40;
        ppfVar1 = (function**)m_renderPassList.HeapBeginPtr();
        ppfVar2 = (function**)m_renderPassList.end();
        local_28 = this;
        ppRVar3 = (RenderPass**)
            eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
                ppfVar1, ppfVar2, (function**)&local_28);
        ppRVar4 = (RenderPass**)m_renderPassList.end();
        if (ppRVar3 != ppRVar4) {
            m_renderPassList.erase(ppRVar3);
        }
    }

    // 0x1007e3f70, 16 bytes, complete-object destructor, placed by class name and debug map
    // RenderPass::~RenderPass(): jumps straight to the base-object destructor

    // 0x1007e3f80, 16 bytes, deleting destructor, placed by class name and debug map
    // RenderPass::~RenderPass()
    void RenderPass::~RenderPass() {
        code* pcVar1;

        /* WARNING: Does not return */
        pcVar1 = (code*)invalidInstructionException();
        (*pcVar1)();
    }

    // 0x1007e3f90, 192 bytes, placed by class name and debug map
    // RenderPass::RegisterTweakVars(tweak::Container&)
    void RenderPass::RegisterTweakVars(Container* param_1) {
        long* plVar1;
        long* plVar2;

        param_1->AddCheckBox("Use Async Rasterisation", (bool*)&m_useAsyncRasterisation);
        param_1->AddCheckBox("Use Async Reprojection", (bool*)&m_useAsyncReprojection);
        plVar1 = (long*)m_renderPassList.HeapBeginPtr();
        plVar2 = (long*)m_renderPassList.end();
        while (true) {
            if (plVar1 == plVar2) {
                return;
            }
            if (*plVar1 == 0)
                break;
            (**(code**)(*(long*)*plVar1 + 56))((long*)*plVar1, param_1);
            plVar1 = plVar1 + 1;
        }
        /* WARNING: Subroutine does not return */
        LogAssert("renderPass != nullptr",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/renderer/"
                  "RenderPass.cpp",
                  38, (char*)0);
    }

    // 0x100804670, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.247
    void ___cxx_global_var_init_247() {
        new (&RenderPass::m_renderPassList) eastl::vector<RenderPass*, eastl::allocator>();
        ___cxa_atexit(PTR__vector_100ee6d68, &RenderPass::m_renderPassList, 4294967296);
    }

} // namespace jag::graphics

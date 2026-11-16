// libs/hal/render/state/OGL/VertexArrayObject_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "VertexArrayObject_OGL.h"
#include "VAOManager_OGL.h"

namespace jag::render {
    // 0x100bc7320
    void VertexArrayObject::Create(ImmediateRenderContext& immediateRenderContext) {

        if (!(((RenderDevice*)Instance())->IsRenderThread())) {
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "VertexArrayObject_OGL.cpp",
                      17, nullptr);
        }
        if (!(immediateRenderContext.IsContextThread())) {
            LogAssert("immediateContext.IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "VertexArrayObject_OGL.cpp",
                      18, nullptr);
        }
        (*___glewGenVertexArrays)(1, this);
        CheckGlErrorInternal("glGenVertexArrays",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                             "OGL/VertexArrayObject_OGL.cpp",
                             20);
        (*___glewBindVertexArray)(m_nativeVAO);
        CheckGlErrorInternal("glBindVertexArray",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                             "OGL/VertexArrayObject_OGL.cpp",
                             23);
        Bind(immediateRenderContext);
    }

    // 0x100bc73f0
    auto VAOManager::Get(const InputAssemblerState& inputAssemblerState) {
        Key local_f0(inputAssemblerState);
        auto groundDecor = field_16->FindResource(local_f0);
        auto result(groundDecor);
        return result;
    }

    // 0x100bc7c80
    void VAOManager::OnEndFrame() {
        __4 local_d0;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[168];
        long local_20;

        auto this_00 = Instance();
        local_d0.field_0 = this;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                (fixedfunction::Methods)0>::function<VAOManager::OnEndFrame()::__4, void>(local_c8,
                                                                                                          &local_d0);
        this_00->RunOnRenderThread(*local_c8);
    }

    // 0x100bc7f00
    void VertexArrayObject::Bind(ImmediateRenderContext& immediateRenderContext) const {
        unsigned int uVar1;

        if (!(((RenderDevice*)Instance())->IsRenderThread())) {
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "VertexArrayObject_OGL.cpp",
                      63, nullptr);
        }
        if (!(immediateRenderContext.IsContextThread())) {
            LogAssert("immediateContext.IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "VertexArrayObject_OGL.cpp",
                      64, nullptr);
        }
        if (!(IsValid())) {
            LogAssert("IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "VertexArrayObject_OGL.cpp",
                      65, nullptr);
        }
        m_lastUsageSeconds = (float)FrameTime::GetSecondsSinceProgramStart();
        auto pRVar3 = immediateRenderContext.GetStateCache();
        if (pRVar3->field_932 != m_nativeVAO) {
            SafeGLBindVertexArray(m_nativeVAO);
            uVar1 = m_nativeVAO;
            pRVar3 = immediateRenderContext.GetStateCache();
            pRVar3->field_932 = uVar1;
        }
    }

    // 0x100bc7fd0
    VertexArrayObject::~VertexArrayObject() {
        Destroy();
    }

    // 0x100bc7fe0
    void VertexArrayObject::Destroy() {
        uint64_t in_RAX;
        RenderDevice* pRVar2;
        ImmediateRenderContext* this_01;
        char* this_04;

        uint32_t uVar4 = (uint32_t)((unsigned long)in_RAX >> 32);
        bool cVar1 = IsValid();
        if (cVar1) {
            pRVar2 = (RenderDevice*)Instance();
            cVar1 = pRVar2->IsRenderThread();
            if (!cVar1) {
                LogAssert("RenderDevice::Instance().IsRenderThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                          "VertexArrayObject_OGL.cpp",
                          39, nullptr);
            }
            cVar1 = (*___glewIsVertexArray)(m_nativeVAO);
            this_04 = "glIsVertexArray";
            CheckGlErrorInternal("glIsVertexArray",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "state/OGL/VertexArrayObject_OGL.cpp",
                                 40);
            if (cVar1) {
                pRVar2 = (RenderDevice*)this_04->Instance();
                this_01 = pRVar2->GetCurrentThreadRenderContext()->GetImmediateContext();
                if ((this_01->GetStateCache()->field_932 == m_nativeVAO) && (m_nativeVAO != 1)) {
                    (logger::default_logger())
                        ->Log(false, 3,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                              "OGL/VertexArrayObject_OGL.cpp",
                              51, "Deleting VAO %u while bound!", (((uint64_t)uVar4 << 32) | (uint32_t)m_nativeVAO));
                    this_01->SetDefaultVAO();
                }
            }
            (*___glewDeleteVertexArrays)(1, this);
            CheckGlErrorInternal("glDeleteVertexArrays",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "state/OGL/VertexArrayObject_OGL.cpp",
                                 56);
            m_nativeVAO = 0;
        }
    }

} // namespace jag::render

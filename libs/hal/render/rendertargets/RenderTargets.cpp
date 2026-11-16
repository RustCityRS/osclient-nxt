// libs/hal/render/rendertargets/RenderTargets.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "RenderTargets.h"

namespace jag::render {
    // 0x100bdf670
    uint64_t RenderTargets::GetDepthStencilTargetTexture() const {
        KeepAlive();
        uint8_t bVar1 = ((RenderDevice*)Instance())->IsRenderThread();
        return *(uint64_t*)(field_4 + (unsigned long)bVar1 * 8 + 188);
    }

    // 0x100bdf7a0
    RenderTargets::RenderTargets() : RenderResource(), field_192(nullptr), field_200(nullptr) {
        field_208.unique_ptr<true, void>();
        field_216 = 0;
        new (&field_224) eastl::fixed_string<char, 64>();
        field_328 = 0;
        field_332 = 0;
        new (&field_336) eastl::fixed_vector<unsigned long, 2ul, false, eastl::dummy_allocator>();
        field_376 = 4294967295;
        DisableMarkAsDead(2);
    }

    // 0x100bdfaa0
    RenderTargets::~RenderTargets() {
        RenderDevice* pRVar3;

        bool cVar1 = IsBackBuffer();
        if (!cVar1) {
            if ((field_216 & 2) != 0) {
                LogAssert("(m_flags & NO_KEEP_ALIVE) == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/RenderTargets.cpp",
                          27, nullptr);
            }
            pRVar3 = InstancePtr();
            if (pRVar3 != nullptr) {
                pRVar3 = (RenderDevice*)Instance();
                cVar1 = pRVar3->IsRenderThread();
                if (!cVar1) {
                    cVar1 = HasColourTargets();
                    if (!cVar1) {
                        cVar1 = HasDepthTarget();
                        if (!cVar1) {
                            cVar1 = field_136.empty();
                            if (cVar1) {
                                if (&field_208 == vtt) {
                                    cVar1 = IsCreated();
                                    if (!cVar1)
                                        goto LAB_100bdfb5b;
                                }
                            }
                        }
                    }
                    LogAssert("!RenderDevice::InstancePtr() || RenderDevice::Instance().IsRenderThread() || "
                              "(!HasColourTargets() && !HasDepthTarget() && m_ownedColourTargetTextures.empty() && "
                              "m_pOwnedDepthStencilTargetTexture == nullptr && !IsCreated())",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "rendertargets/RenderTargets.cpp",
                              34, nullptr);
                }
            }
        }
    LAB_100bdfb5b:
        Destroy();
        field_336.~fixed_vector();
        field_224.~fixed_string();
    }

    // 0x100bdfc40
    unsigned long RenderTargets::HasColourTargets() const {
        uint64_t* puVar3;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_00;

        auto pRVar2 = InstancePtr();
        if (pRVar2 != nullptr) {
            pRVar2 = (RenderDevice*)Instance();
            if (pRVar2->IsRenderThread()) {
                this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)&field_80;
                goto LAB_100bdfc6e;
            }
        }
        this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)&field_24;
    LAB_100bdfc6e:
        if (!(this_00->empty())) {
            puVar3 = (uint64_t*)(*this_00)[0];
            if (!((*puVar3)->IsCreated())) {
                LogAssert("colourTargets.empty() || colourTargets[0]->IsCreated()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/RenderTargets.cpp",
                          95, nullptr);
            }
        }
        return this_00->empty() ^ 1;
    }

    // 0x100bdfcc0
    bool RenderTargets::HasDepthTarget() const {
        Texture** ppTVar3;

        auto pRVar2 = InstancePtr();
        if (pRVar2 != nullptr) {
            pRVar2 = (RenderDevice*)Instance();
            if (pRVar2->IsRenderThread()) {
                ppTVar3 = &field_200;
                goto LAB_100bdfcf4;
            }
        }
        ppTVar3 = &field_192;
    LAB_100bdfcf4:
        Texture* this_00 = *ppTVar3;
        if (this_00 != nullptr) {
            if (!(this_00->IsCreated())) {
                LogAssert("!depthTexture || depthTexture->IsCreated()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/RenderTargets.cpp",
                          102, nullptr);
            }
        }
        return this_00 != nullptr;
    }

    // 0x100bdfdc0
    void RenderTargets::Destroy() {
        __0 local_d8;
        AutoSingleton<ShaderThreadPoolSingleton> local_d0;
        scoped_lock<std::mutex> local_c8;

        RenderDevice* pRVar3 = (RenderDevice*)this;
        auto pRVar2 = InstancePtr();
        local_d8.field_0 = this;
        if (pRVar2 != nullptr) {
            pRVar3 = (RenderDevice*)pRVar3->Instance();
            if (pRVar3->IsRenderThread() != '\0') {
                ReleaseNativeResources();
                field_200 = nullptr;
                field_208.reset(nullptr);
                field_136.clear();
                field_80.clear();
                new (&local_c8) std::scoped_lock(m_renderTargetsToInvalidateMutex);
                eastl::set<RenderTargets const*, eastl::less<RenderTargets const*>,
                           eastl::fixed_node_allocator<40ul, 64ul, 8ul, 0ul, true>>::erase(m_renderTargetsToInvalidate);
                goto LAB_100bdff0b;
            }
        }
        pRVar3 = pRVar3->InstancePtr();
        if (pRVar3 == nullptr) {
            LogAssert("RenderDevice::InstancePtr()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargets.cpp",
                      149, nullptr);
        }
        KeepAlive();
        field_192 = nullptr;
        Singleton<RenderDevice>* this_00 = (Singleton<RenderDevice>*)&field_24;
        this_00->clear();
        pRVar3 = (RenderDevice*)this_00->Instance();
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            RenderTargets::Destroy()::__0, void>(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, &local_d8);
        pRVar3->RunOnRenderThread(local_c8);
    LAB_100bdff0b:
    }

    // 0x100be0340
    uint64_t RenderTargets::CheckTexturesAlive(const RenderContext& renderContext) const {
        long* plVar2;
        long* plVar3;
        uint64_t uVar4;

        bool cVar1 = ((RenderDevice*)Instance())->IsRenderThread();
        if (!cVar1) {
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargets.cpp",
                      62, nullptr);
        }
        cVar1 = HasColourTargets();
        if (cVar1) {
            plVar2 = (long*)field_80.HeapBeginPtr();
            plVar3 = (long*)field_80.end();
            for (; plVar2 != plVar3; plVar2 = plVar2 + 1) {
                if (((*plVar2 == 0) || (cVar1 = renderContext.IsObjectAlive((*plVar2 + 8)), !cVar1)) ||
                    (cVar1 = (*plVar2)->IsCreated(), !cVar1))
                    goto LAB_100be0419;
            }
        }
        cVar1 = HasDepthTarget();
        if ((!cVar1) || (((field_200 != nullptr && (cVar1 = renderContext.IsObjectAlive(&field_200->field_8), cVar1)) &&
                          (cVar1 = field_200->IsCreated(), cVar1)))) {
            uVar4 = 1;
        } else {
        LAB_100be0419:
            uVar4 = 0;
        }
        return uVar4;
    }

    // 0x100be04c0
    bool RenderTargets::HasStencilTarget() const {
        long lVar3;
        uint64_t uVar4;
        Texture** ppTVar5;

        auto pRVar2 = InstancePtr();
        if (pRVar2 != nullptr) {
            pRVar2 = (RenderDevice*)Instance();
            if (pRVar2->IsRenderThread()) {
                ppTVar5 = &field_200;
                goto LAB_100be04f4;
            }
        }
        ppTVar5 = &field_192;
    LAB_100be04f4:
        Texture* this_00 = *ppTVar5;
        if (this_00 == nullptr) {
            uVar4 = 0;
        } else {
            if (!(this_00->IsCreated())) {
                LogAssert("!depthTexture || depthTexture->IsCreated()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/RenderTargets.cpp",
                          109, nullptr);
            }
            lVar3 = this_00->second();
            uVar4 = HasStencilBits(*(Format*)(lVar3 + 12));
        }
        return uVar4;
    }

    // 0x100be0550
    void RenderTargets::KeepAlive() const {
        RenderDevice* pRVar2;
        shared_ptr local_38;
        enable_shared_from_this<PathingEntity> local_28;

        if ((field_216 & 2) == 0) {
            pRVar2 = (RenderDevice*)Instance();
            if (!(pRVar2->IsRenderThread())) {
                local_28.shared_from_this();
                local_38.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_28);
                if (!(shared_ptr::operator_cast_to_bool(&local_38))) {
                    LogAssert("sharedThis",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "rendertargets/RenderTargets.cpp",
                              121, nullptr);
                }
                pRVar2 = (RenderDevice*)local_38.Instance();
                local_28 = shared_ptr(&local_38);
                pRVar2->KeepAliveSharedPtr(local_28, 0);
            }
        }
    }

    // 0x100be0890
    uint64_t RenderTargets::BindDepthStencilTargetTexture(RenderTargets* renderTargets) {
        if (renderTargets == nullptr) {
            LogAssert("pDepthStencilRT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargets.cpp",
                      165, nullptr);
        }
        KeepAlive();
        BindDepthStencilTargetTexture((Texture*)GetDepthStencilTargetTexture(renderTargets));
        return 1;
    }

    // 0x100bfc010: PixelBuffer::PixelBuffer(PixelBuffer&&) has the same machine code as ShaderStorageBuffer::ShaderStorageBuffer(ShaderStorageBuffer&&)

    // 0x100bfc010: PixelUnpackBuffer::PixelUnpackBuffer(PixelUnpackBuffer&&) has the same machine code as ShaderStorageBuffer::ShaderStorageBuffer(ShaderStorageBuffer&&)

} // namespace jag::render

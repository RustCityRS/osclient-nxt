// libs/hal/render/rendertargets/OGL/RenderTargets_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "libs/hal/render/rendertargets/RenderTargets.h"

namespace jag::render {
    // 0x100f48760
    int32_t RenderTargets::m_renderTargetsToInvalidateMutex[16] = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x103bd9e90, set at startup by ___cxx_global_var_init
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> RenderTargets::NullRenderTargets =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x103bd9ea0
    eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>, eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>
        RenderTargets::m_renderTargetsToInvalidate;

    // 0x100bdfd50
    bool RenderTargets::IsCreated() const {
        bool cVar1;

        if ((field_216 & 8) == 0) {
            cVar1 = ((RenderDevice*)Instance())->IsRenderThread();
            if (!cVar1) {
                LogAssert("(m_flags & FORCE_SYNCHRONOUS_ALLOW_CREATION_FAILURE) == "
                          "FORCE_SYNCHRONOUS_ALLOW_CREATION_FAILURE || RenderDevice::Instance().IsRenderThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/OGL/RenderTargets_OGL.cpp",
                          981, nullptr);
            }
        }
        cVar1 = IsBackBuffer();
        bool bVar3 = true;
        if (!cVar1) {
            bVar3 = (&field_380)->operator_cast_to_unsigned_int() != 0;
        }
        return bVar3;
    }

    // 0x100bdff70
    uint64_t RenderTargets::BindColourTargetTexture(Texture* texture, int arg2, int arg3, CubeFace cubeFace) {
        fixed_vector<Texture*, 2ul> local_68[56];

        new (local_68) eastl::fixed_vector<Texture*, 2ul>();
        if (texture != nullptr) {
            local_68->push_back(texture);
        }
        BindColourTargetTextures(*local_68, arg2, arg3, cubeFace);
        return 1;
    }

    // 0x100be0020
    uint64_t RenderTargets::BindColourTargetTextures(eastl::fixed_vector<Texture*, 2ul> const& textures, int arg2,
                                                     int arg3, CubeFace cubeFace) {
        int iVar1;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* this_00;
        long lVar4;
        unsigned long uVar5;
        uint64_t* puVar6;
        int* piVar7;
        RenderDevice* this_01;
        Singleton<RenderDevice>* this_02;
        unsigned long uVar8;
        RenderTargets* local_128;
        int local_120;
        int local_11c;
        CubeFace local_118;
        fixed_vector<Texture*, 2ul> local_110[56];
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        if (!(field_136.empty())) {
            LogAssert("m_ownedColourTargetTextures.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      588,
                      "Setting of external colour target textures only supported when RenderTargets is created without "
                      "ownership of its own");
        }
        if ((field_216 & 4) != 0) {
            LogAssert("(m_flags & IMMUTABLE_RENDER_TARGET) == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      589,
                      "Setting of external colour target textures is not supported on RenderTargets created via "
                      "RenderTargetsManager. Use a standalone RenderTargets object instead.");
        }
        KeepAlive();
        uint8_t* arg2_00 = &field_24;
        bool bVar3 = textures != *arg2_00;
        if (bVar3) {
            *arg2_00 = textures;
            this_02 = (Singleton<RenderDevice>*)arg2_00;
            lVar4 = arg2_00->size();
            if (lVar4 != 0) {
                uVar5 = 0;
                uVar8 = 1;
                do {
                    puVar6 = (uint64_t*)(*arg2_00)[uVar5];
                    this_00 =
                        (compressed_pair_imp<
                            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)*puVar6;
                    if (this_00 == nullptr) {
                        LogAssert("pTexture != nullptr",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "rendertargets/OGL/RenderTargets_OGL.cpp",
                                  603, nullptr);
                    }
                    if (field_192 != nullptr) {
                        piVar7 = (int*)this_00->second();
                        iVar1 = *piVar7;
                        piVar7 = (int*)field_192->second();
                        if (iVar1 != *piVar7) {
                        LAB_100be0110:
                            LogAssert("!m_pMainThreadDepthStencilTargetTexture || (pTexture->GetDesc().m_Width == "
                                      "m_pMainThreadDepthStencilTargetTexture->GetDesc().m_Width && "
                                      "pTexture->GetDesc().m_Height == "
                                      "m_pMainThreadDepthStencilTargetTexture->GetDesc().m_Height)",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                      "render/rendertargets/OGL/RenderTargets_OGL.cpp",
                                      608,
                                      "Supplied colour texture must have same dimensions as existing depth texture");
                        }
                        lVar4 = this_00->second();
                        iVar1 = *(int*)(lVar4 + 4);
                        lVar4 = field_192->second();
                        if (iVar1 != *(int*)(lVar4 + 4))
                            goto LAB_100be0110;
                    }
                    this_02 = (Singleton<RenderDevice>*)arg2_00;
                    uVar5 = arg2_00->size();
                    bVar3 = uVar8 < uVar5;
                    uVar5 = uVar8;
                    uVar8 = (unsigned long)((int)uVar8 + 1);
                } while (bVar3);
            }
            this_01 = (RenderDevice*)this_02->Instance();
            local_128 = this;
            local_120 = arg2;
            local_11c = arg3;
            local_118 = cubeFace;
            new (local_110) eastl::fixed_vector<Texture*, 2ul>(textures);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                RenderTargets::BindColourTargetTextures(eastl::fixed_vector<Texture*, 2ul> const&, int, int,
                                                        CubeFace)::__11,
                void>(local_d8, (__11*)&local_128);
            this_01->RunOnRenderThread(*local_d8);
            BindColourTargetTextures(eastl::fixed_vector<Texture*, 2ul> const&, int, int,
                                     CubeFace)::$_11::~__11((__11*)&local_128);
        }
        return 1;
    }

    // 0x100be02b0
    void RenderTargets::SetNeedsInvalidated() const {
        scoped_lock<std::mutex> local_18;

        if ((field_216 & 1) == 0) {
            local_18 = std::scoped_lock(m_renderTargetsToInvalidateMutex);
            m_renderTargetsToInvalidate.insert<RenderTargets const*, void>(this);
        }
    }

    // 0x100be0430
    void RenderTargets::SafeReset(shared_ptr<RenderTargets>& renderTargets) {
        if (renderTargets.operator_cast_to_bool() != '\0') {
            Destroy((RenderTargets*)renderTargets.operator->());
        }
        renderTargets.reset();
    }

    // 0x100be0680
    void RenderTargets::ReleaseNativeResources() {
        void* pcVar1;
        bool cVar2;
        uint32_t uVar4;
        int iVar5;
        RenderDevice* pRVar6;
        RenderContext* this_00;
        RenderTargets* pRVar8;
        memory_order extraout_EDX;
        memory_order extraout_EDX_00;
        memory_order extraout_EDX_01;
        memory_order memory_order;
        char* this_03;
        uint32_t local_2c;

        uint8_t* this_04 = &field_380;
        Singleton<RenderDevice>* this_02 = (Singleton<RenderDevice>*)this_04;
        int iVar3 = this_04->operator_cast_to_unsigned_int();
        if (iVar3 != 0) {
            pRVar6 = (RenderDevice*)this_02->Instance();
            cVar2 = pRVar6->IsRenderThread();
            pcVar1 = ___glewIsFramebuffer;
            if (!cVar2) {
                LogAssert("RenderDevice::Instance().IsRenderThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/OGL/RenderTargets_OGL.cpp",
                          845, nullptr);
            }
            uVar4 = this_04->operator_cast_to_unsigned_int();
            cVar2 = (*pcVar1)(uVar4);
            this_03 = "glIsFramebuffer";
            CheckGlErrorInternal("glIsFramebuffer",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "rendertargets/OGL/RenderTargets_OGL.cpp",
                                 846);
            if (cVar2) {
                pRVar6 = (RenderDevice*)this_03->Instance();
                this_00 = (RenderContext*)pRVar6->GetPrimaryRenderContext();
                iVar3 = this_00->GetImmediateContext()->GetStateCache()->field_8;
                iVar5 = this_04->operator_cast_to_unsigned_int();
                memory_order = extraout_EDX;
                if (iVar3 == iVar5) {
                    iVar3 = this_04->operator_cast_to_unsigned_int();
                    pRVar8 = this_00->GetBackBuffer();
                    iVar5 = GetNativeFBOId(pRVar8);
                    memory_order = extraout_EDX_00;
                    if (iVar3 != iVar5) {
                        pRVar8 = this_00->GetBackBuffer();
                        this_00->SetRenderTargets(pRVar8);
                        memory_order = extraout_EDX_01;
                    }
                }
                local_2c = 0;
                local_2c = this_04->exchange(0, memory_order);
                (*___glewDeleteFramebuffers)(1, &local_2c);
                CheckGlErrorInternal("glDeleteFramebuffers",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "rendertargets/OGL/RenderTargets_OGL.cpp",
                                     858);
            }
        }
    }

    // 0x100be08f0
    uint64_t RenderTargets::BindDepthStencilTargetTexture(Texture* texture) {
        int iVar1;
        long* plVar3;
        int* piVar4;
        uint64_t* puVar5;
        long lVar6;
        RenderDevice* this_01;
        __12 local_e8;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[168];
        long local_30;

        if (texture == nullptr) {
            LogAssert("pDepthStencilTargetTexture != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      654, nullptr);
        }
        if ((&field_208)->operator_cast_to_bool()) {
            LogAssert("!m_pOwnedDepthStencilTargetTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      655,
                      "Setting of external depth resources only supported when RenderTargets is created will no depth "
                      "resources");
        }
        uint8_t* this_00 = &field_24;
        if (!(this_00->empty())) {
            plVar3 = (long*)(*this_00)[0];
            if (*plVar3 != 0) {
                piVar4 = (int*)texture->second();
                iVar1 = *piVar4;
                puVar5 = (uint64_t*)(*this_00)[0];
                piVar4 = (int*)(*puVar5)->second();
                if (iVar1 == *piVar4) {
                    lVar6 = texture->second();
                    iVar1 = *(int*)(lVar6 + 4);
                    puVar5 = (uint64_t*)(*this_00)[0];
                    lVar6 = (*puVar5)->second();
                    if (iVar1 == *(int*)(lVar6 + 4))
                        goto LAB_100be09f5;
                }
                LogAssert("m_mainThreadColourTargetTextures.empty() || !m_mainThreadColourTargetTextures[0] || "
                          "(pDepthStencilTargetTexture->GetDesc().m_Width == "
                          "m_mainThreadColourTargetTextures[0]->GetDesc().m_Width && "
                          "pDepthStencilTargetTexture->GetDesc().m_Height == "
                          "m_mainThreadColourTargetTextures[0]->GetDesc().m_Height)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/OGL/RenderTargets_OGL.cpp",
                          659, "Supplied depth texture must have same dimensions as existing colour texture");
            }
        }
    LAB_100be09f5:
        if ((field_216 & 4) != 0) {
            LogAssert("(m_flags & IMMUTABLE_RENDER_TARGET) == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      660,
                      "Setting of external depth resources is not supported on RenderTargets created via "
                      "RenderTargetsManager. Use a standalone RenderTargets object instead.");
        }
        RenderTargets* this_02 = this;
        KeepAlive();
        if (field_192 != texture) {
            field_192 = texture;
            this_01 = (RenderDevice*)this_02->Instance();
            local_e8.field_0 = this;
            local_e8.field_8 = texture;
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                RenderTargets::BindDepthStencilTargetTexture(Texture*)::__12, void>(local_d8, &local_e8);
            this_01->RunOnRenderThread(*local_d8);
        }
        return 1;
    }

    // 0x100be0ac0
    uint64_t RenderTargets::GetDepthStencilTargetTexture() {
        KeepAlive();
        uint8_t bVar1 = ((RenderDevice*)Instance())->IsRenderThread();
        return *(uint64_t*)(field_4 + (unsigned long)bVar1 * 8 + 188);
    }

    // 0x100be0af0
    uint8_t* RenderTargets::GetColourTargetTextures() {
        KeepAlive();
        bool cVar1 = ((RenderDevice*)Instance())->IsRenderThread();
        uint8_t* puVar2 = &field_24;
        if (cVar1) {
            puVar2 = &field_80;
        }
        return puVar2;
    }

    // 0x100be0b30
    uint8_t* RenderTargets::GetColourTargetTextures() const {
        KeepAlive();
        bool cVar1 = ((RenderDevice*)Instance())->IsRenderThread();
        uint8_t* puVar2 = &field_24;
        if (cVar1) {
            puVar2 = &field_80;
        }
        return puVar2;
    }

    // 0x100be2370
    bool RenderTargets::Create(const char* str, TextureType textureType, const std::array<Texture::Desc, 2ul>& descs,
                               int arg4, const Texture::Desc& desc, unsigned int arg6) {
        unique_ptr* unique_ptr;
        uint8_t bVar2;
        uint64_t uVar6;
        Texture2D* pTVar7;
        Logger* pLVar8;
        uint64_t uVar9;
        Texture* pTVar10;
        RenderDevice* pRVar11;
        uint32_t in_register_0000000c;
        uint32_t in_register_00000034;
        uint32_t in_register_0000008c;
        unsigned int in_stack_00000008;
        char* local_1b0;
        char* local_1a8;
        ReturnValue local_190;
        ReturnValue local_188;

        Desc* pDVar5 = (Desc*)(((uint64_t)in_register_0000008c << 32) | (uint32_t)arg6);
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_04 =
            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(str + 24);
        if (!(this_04->empty())) {
            LogAssert("m_mainThreadColourTargetTextures.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      280, nullptr);
        }
        if (*(long*)(str + 192) != 0) {
            LogAssert("!m_pMainThreadDepthStencilTargetTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      281, nullptr);
        }
        unique_ptr = (unique_ptr*)(str + 208);
        if (std::unique_ptr::operator_cast_to_bool(unique_ptr)) {
            LogAssert("!m_pOwnedDepthStencilTargetTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      282, nullptr);
        }
        if (!(((str + 136))->empty())) {
            LogAssert("m_ownedColourTargetTextures.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      283, nullptr);
        }
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_05 =
            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(str + 80);
        if (!(this_05->empty())) {
            LogAssert("m_renderThreadColourTargetTextures.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      284, nullptr);
        }
        if (*(long*)(str + 200) != 0) {
            LogAssert("!m_pRenderThreadDepthStencilTargetTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      285, nullptr);
        }
        int iVar3 = (int)descs;
        uint8_t local_191 = 1;
        if ((str[216] & 4U) != 0) {
            LogAssert("(m_flags & IMMUTABLE_RENDER_TARGET) == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      288, nullptr);
        }
        *(unsigned int*)(str + 216) = in_stack_00000008;
        (*((str + 224))) = ((char*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)textureType));
        if ((int)desc < 1) {
            iVar3 = GetFormatDepthBits(pDVar5->field_12);
            if (GetFormatStencilBits(pDVar5->field_12) != 0 || iVar3 != 0) {
                *(int*)((long)(ReturnValue)str + 328) = pDVar5->field_0;
                *(int*)((long)(ReturnValue)str + 332) = pDVar5->field_4;
                local_e8 = eastl::fixed_string<char, 128>();
                uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_e8.sprintf("%s//DepthStencilTargetTexture", uVar6);
                local_1b0 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_190 = std::make_unique<Texture2D, char const*>(local_1b0);
                unique_ptr->operator=(&local_190);
                pTVar7 = (Texture2D*)unique_ptr->get();
                bVar2 = pTVar7->Create(*pDVar5, nullptr, 0);
                local_191 = local_191 & bVar2;
            }
            if (local_191 == 0) {
                pLVar8 = logger::default_logger();
                GetInfoString(&local_e8, (RenderTargets*)(ReturnValue)str);
                uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pLVar8->Log(false, 3,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                            "rendertargets/OGL/RenderTargets_OGL.cpp",
                            379, "Failed to create depth stencil target for %s", uVar6);
            }
            pTVar10 = (Texture*)unique_ptr->get();
            *(Texture**)((long)(ReturnValue)str + 192) = pTVar10;
            *this_05 = *this_04;
            *(Texture**)((long)(ReturnValue)str + 200) = *(Texture**)((long)(ReturnValue)str + 192);
            if ((in_stack_00000008 & 8) == 0) {
                KeepAlive((RenderTargets*)(ReturnValue)str);
                pRVar11 = (RenderDevice*)((Singleton<RenderDevice>*)(ReturnValue)str)->Instance();
                local_190 = (ReturnValue)str;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    RenderTargets::Create(char const*, TextureType, std::array<Texture::Desc, 2ul> const&, int,
                                          Texture::Desc const&, unsigned int)::__7,
                    void>((function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_e8,
                          (__7*)&local_190);
                pRVar11->RunOnRenderThread(local_e8);
            } else {
                pRVar11 = (RenderDevice*)this_05->Instance();
                local_190 = (ReturnValue)&local_191;
                local_188 = (ReturnValue)str;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    RenderTargets::Create(char const*, TextureType, std::array<Texture::Desc, 2ul> const&, int,
                                          Texture::Desc const&, unsigned int)::__6,
                    void>((function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_e8,
                          (__6*)&local_190);
                pRVar11->RunSynchronouslyOnRenderThread(local_e8, true);
            }
            return local_191 != 0;
        }
        pDVar5 = (Desc*)(*((array<Texture::Desc, 2ul>*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)arg4)))[0];
        local_1b0.unique_ptr<true, void>();
        eastl::fixed_string<char, 128> local_e8;
        uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_e8.sprintf("%s//ColourTargetTexture%d", uVar6, 0);
        *(int*)((long)(ReturnValue)str + 328) = pDVar5->field_0;
        *(int*)((long)(ReturnValue)str + 332) = pDVar5->field_4;
        if (iVar3 < 35866) {
            if (iVar3 != 3553) {
                if (iVar3 == 32879) {
                    local_1a8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    local_190 = std::make_unique<Texture3D, char const*>(local_1a8);
                    local_1b0.operator=(&local_190);
                    bVar2 = ((Texture3D*)local_1b0.get())->Create(*pDVar5, nullptr);
                } else {
                    if (iVar3 != 34067) {
                    LAB_100be2857:
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "render/rendertargets/OGL/RenderTargets_OGL.cpp",
                                        336, "RenderTargetsManager attempting to create an unsupported texture type!");
                    }
                    local_1a8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    local_190 = std::make_unique<TextureCube, char const*>(local_1a8);
                    local_1b0.operator=(&local_190);
                    bVar2 = ((TextureCube*)local_1b0.get())->Create(*pDVar5);
                }
                goto LAB_100be2740;
            }
        LAB_100be26b0:
            local_1a8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_190 = std::make_unique<Texture2D, char const*>(local_1a8);
            local_1b0.operator=(&local_190);
            pTVar7 = (Texture2D*)local_1b0.get();
            bVar2 = pTVar7->Create(*pDVar5, nullptr, 0);
        } else {
            if (iVar3 != 35866) {
                if (iVar3 == 37120)
                    goto LAB_100be26b0;
                if (iVar3 != 37122)
                    goto LAB_100be2857;
            }
            local_1a8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_190 = std::make_unique<Texture2DArray, char const*>(local_1a8);
            local_1b0.operator=(&local_190);
            bVar2 = ((Texture2DArray*)local_1b0.get())->Create(*pDVar5, nullptr);
        }
    LAB_100be2740:
        local_191 = local_191 & bVar2;
        if (local_191 == 0) {
            pLVar8 = logger::default_logger();
            uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            GetInfoString(&local_190, (RenderTargets*)(ReturnValue)str);
            uVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar8->Log(false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                        "rendertargets/OGL/RenderTargets_OGL.cpp",
                        347, "Failed to create colour target %s for %s", uVar6, uVar9);
        }
        local_190 = (ReturnValue)local_1b0.get();
        this_04->push_back(local_190);
        ((str + 136))->emplace_back<std::unique_ptr<Texture>>(local_1b0);
    }

    // 0x100be6bf0
    void AttachColourTargetToFBO(const Texture* texture, int arg2, int arg3, int arg4, CubeFace cubeFace) {
        uint32_t uVar1;
        uint32_t uVar8;
        uint32_t uVar9;
        uint32_t* puVar10;
        uint32_t in_register_00000034;
        char* str1;

        unsigned long arg1 = (((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        if (texture == nullptr) {
            LogAssert("pTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      32, nullptr);
        }
        Texture* pTVar11 = texture;
        if (!(texture->IsCreated())) {
            LogAssert("pTexture->IsCreated()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      33, nullptr);
        }
        if (!(((RenderDevice*)pTVar11->Instance())->IsRenderThread())) {
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      34, nullptr);
        }
        int iVar7 = texture->GetMaxLineWidth();
        if (iVar7 == 37120) {
        LAB_100be6ca7:
            if (arg3 != 0) {
                LogAssert("targetMipLevel == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/OGL/RenderTargets_OGL.cpp",
                          46, nullptr);
            }
            arg3 = 0;
        } else {
            iVar7 = texture->GetMaxLineWidth();
            if (iVar7 == 37122)
                goto LAB_100be6ca7;
        }
        iVar7 = texture->GetMaxLineWidth();
        void* pcVar5 = ___glewFramebufferTextureLayer;
        void* pcVar4 = ___glewFramebufferTexture3D;
        void* pcVar3 = ___glewFramebufferTexture2D;
        void* pcVar2 = ___glewFramebufferRenderbuffer;
        if (iVar7 < 35866) {
            if (iVar7 < 34037) {
                if (iVar7 != 3553) {
                    if (iVar7 != 32879)
                        goto LAB_100be6f0a;
                    puVar10 = (uint32_t*)(*((array<unsigned int, 2ul>*)(long)arg2))[arg1];
                    uVar1 = *puVar10;
                    uVar8 = texture->GetMaxLineWidth();
                    pTVar11 = texture->GetNativeTextureId();
                    (*pcVar4)(36160, uVar1, uVar8, (unsigned long)pTVar11 & 4294967295, arg3, arg4);
                    str1 = "glFramebufferTexture3D";
                    iVar7 = 101;
                    goto LAB_100be6ef4;
                }
            } else if (iVar7 != 34037) {
                if (iVar7 != 34067)
                    goto LAB_100be6f0a;
                if (cubeFace == 4294967295) {
                    LogAssert("targetCubeMapFace != CubeFace::CUBEFACE_UNKNOWN",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "rendertargets/OGL/RenderTargets_OGL.cpp",
                              80, nullptr);
                }
                puVar10 = (uint32_t*)(*((array<unsigned int, 2ul>*)(long)arg2))[arg1];
                uVar1 = *puVar10;
                pTVar11 = texture->GetNativeTextureId();
                (*pcVar3)(36160, uVar1, cubeFace, (unsigned long)pTVar11 & 4294967295, arg3);
                str1 = "glFramebufferTexture2D";
                iVar7 = 89;
                goto LAB_100be6ef4;
            }
        LAB_100be6e61:
            puVar10 = (uint32_t*)(*((array<unsigned int, 2ul>*)(long)arg2))[arg1];
            uVar1 = *puVar10;
            uVar8 = texture->GetMaxLineWidth();
            pTVar11 = texture->GetNativeTextureId();
            (*pcVar3)(36160, uVar1, uVar8, (unsigned long)pTVar11 & 4294967295, arg3);
            str1 = "glFramebufferTexture2D";
            iVar7 = 63;
        } else {
            if (iVar7 < 37120) {
                if (iVar7 != 35866) {
                    if (iVar7 == 36161) {
                        puVar10 = (uint32_t*)(*((array<unsigned int, 2ul>*)(long)arg2))[arg1];
                        uVar1 = *puVar10;
                        uVar8 = texture->GetMaxLineWidth();
                        uVar9 = texture->GetNativeRenderBufferId();
                        (*pcVar2)(36160, uVar1, uVar8, uVar9);
                        str1 = "glFramebufferRenderbuffer";
                        iVar7 = 111;
                        goto LAB_100be6ef4;
                    }
                LAB_100be6f0a:
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "rendertargets/OGL/RenderTargets_OGL.cpp",
                                    115, nullptr);
                }
            } else if (iVar7 != 37122) {
                if (iVar7 != 37120)
                    goto LAB_100be6f0a;
                goto LAB_100be6e61;
            }
            puVar10 = (uint32_t*)(*((array<unsigned int, 2ul>*)(long)arg2))[arg1];
            uVar1 = *puVar10;
            pTVar11 = texture->GetNativeTextureId();
            (*pcVar5)(36160, uVar1, (unsigned long)pTVar11 & 4294967295, arg3, arg4);
            str1 = "glFramebufferTextureLayer";
            iVar7 = 75;
        }
    LAB_100be6ef4:
        CheckGlErrorInternal(str1,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "rendertargets/OGL/RenderTargets_OGL.cpp",
                             iVar7);
    }

    // 0x100be6f60
    void AttachDepthStencilToFBO(Texture* texture, bool arg2) {
        uint32_t uVar5;
        uint32_t uVar6;
        char* str1;

        if (texture == nullptr) {
            LogAssert("pDepthStencilTargetTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      123, nullptr);
        }
        Texture* pTVar7 = texture;
        if (!(texture->IsCreated())) {
            LogAssert("pDepthStencilTargetTexture->IsCreated()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      124, nullptr);
        }
        if (!(((RenderDevice*)pTVar7->Instance())->IsRenderThread())) {
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      125, nullptr);
        }
        int iVar4 = texture->GetMaxLineWidth();
        void* pcVar2 = ___glewFramebufferTexture2D;
        void* pcVar1 = ___glewFramebufferRenderbuffer;
        if (iVar4 == 36161) {
            uVar5 = texture->GetMaxLineWidth();
            uVar6 = texture->GetNativeRenderBufferId();
            (*pcVar1)(36160, 36096, uVar5, uVar6);
            CheckGlErrorInternal("glFramebufferRenderbuffer",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "rendertargets/OGL/RenderTargets_OGL.cpp",
                                 134);
            pcVar1 = ___glewFramebufferRenderbuffer;
            if (!arg2) {
                return;
            }
            uVar5 = texture->GetMaxLineWidth();
            uVar6 = texture->GetNativeRenderBufferId();
            (*pcVar1)(36160, 36128, uVar5, uVar6);
            str1 = "glFramebufferRenderbuffer";
            iVar4 = 143;
        } else {
            uVar5 = texture->GetMaxLineWidth();
            pTVar7 = texture->GetNativeTextureId();
            (*pcVar2)(36160, 36096, uVar5, (unsigned long)pTVar7 & 4294967295, 0);
            CheckGlErrorInternal("glFramebufferTexture2D",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "rendertargets/OGL/RenderTargets_OGL.cpp",
                                 154);
            pcVar1 = ___glewFramebufferTexture2D;
            if (!arg2) {
                return;
            }
            uVar5 = texture->GetMaxLineWidth();
            pTVar7 = texture->GetNativeTextureId();
            (*pcVar1)(36160, 36128, uVar5, (unsigned long)pTVar7 & 4294967295, 0);
            str1 = "glFramebufferTexture2D";
            iVar4 = 164;
        }
        CheckGlErrorInternal(str1,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "rendertargets/OGL/RenderTargets_OGL.cpp",
                             iVar4);
    }

    // 0x100be7140
    bool IsFBOValid() {
        uint64_t in_RAX;
        int arg4;
        char* str2;

        uint32_t uVar4 = (uint32_t)((unsigned long)in_RAX >> 32);
        int iVar1 = (*___glewCheckFramebufferStatus)(36160);
        CheckGlErrorInternal("glCheckFramebufferStatus",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "rendertargets/OGL/RenderTargets_OGL.cpp",
                             172);
        if (iVar1 == 36053)
            goto switchD_100be71ca_caseD_2;
        auto pLVar2 = logger::default_logger();
        uint64_t uVar3 = (((uint64_t)uVar4 << 32) | (uint32_t)iVar1);
        pLVar2->Log(false, 3,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                    "OGL/RenderTargets_OGL.cpp",
                    175, "FBO is incomplete with status: %u", uVar3);
        if (iVar1 < 36182) {
            switch (iVar1 - 36054) {
            case 0:
                pLVar2 = logger::default_logger();
                str2 = "\tGL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT";
                arg4 = 182;
                break;
            case 1:
                pLVar2 = logger::default_logger();
                str2 = "\tGL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT";
                arg4 = 185;
                break;
            case 2:
            case 3:
            case 4:
                goto switchD_100be71ca_caseD_2;
            case 5:
                pLVar2 = logger::default_logger();
                str2 = "\tGL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER";
                arg4 = 188;
                break;
            case 6:
                pLVar2 = logger::default_logger();
                str2 = "\tGL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER";
                arg4 = 191;
                break;
            case 7:
                pLVar2 = logger::default_logger();
                str2 = "\tGL_FRAMEBUFFER_UNSUPPORTED";
                arg4 = 194;
                break;
            default:
                if (iVar1 != 33305)
                    goto switchD_100be71ca_caseD_2;
                pLVar2 = logger::default_logger();
                str2 = "\tGL_FRAMEBUFFER_UNDEFINED";
                arg4 = 179;
            }
        } else if (iVar1 == 36182) {
            pLVar2 = logger::default_logger();
            str2 = "\tGL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE";
            arg4 = 197;
        } else {
            if (iVar1 != 36264)
                goto switchD_100be71ca_caseD_2;
            pLVar2 = logger::default_logger();
            str2 = "\tGL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS";
            arg4 = 200;
        }
        pLVar2->Log(false, 3,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                    "OGL/RenderTargets_OGL.cpp",
                    arg4, str2, uVar3);
    switchD_100be71ca_caseD_2:
        return iVar1 == 36053;
    }

    // 0x100be7360
    void RenderTargets::RestorePreviousFrameBuffer(RenderContext& renderContext) const {
        if (renderContext.IsContextThread() == '\0') {
            LogAssert("renderContext.IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      213, nullptr);
        }
        RenderContextStateCache* pRVar4 = renderContext.GetImmediateContext()->GetStateCache();
        int iVar3 = pRVar4->field_8;
        int iVar2 = (&field_380)->operator_cast_to_unsigned_int();
        if ((iVar3 == iVar2) && (iVar3 = (&field_380)->operator_cast_to_unsigned_int(), iVar3 != 0)) {
            return;
        }
        (*___glewBindFramebuffer)(36160, pRVar4->field_8);
        CheckGlErrorInternal("glBindFramebuffer",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "rendertargets/OGL/RenderTargets_OGL.cpp",
                             219);
    }

    // 0x100be7420
    void RenderTargets::BindFrameBufferWithoutStateCache(RenderContext& renderContext) const {
        uint32_t uVar5;

        uint8_t* this_01 = &field_380;
        int iVar3 = this_01->operator_cast_to_unsigned_int();
        if (iVar3 == 0) {
            LogAssert("m_FBO != 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      225, nullptr);
        }
        if (renderContext.IsContextThread() == '\0') {
            LogAssert("renderContext.IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      226, nullptr);
        }
        iVar3 = renderContext.GetImmediateContext()->GetStateCache()->field_8;
        int iVar4 = this_01->operator_cast_to_unsigned_int();
        void* pcVar1 = ___glewBindFramebuffer;
        if (iVar3 != iVar4) {
            uVar5 = this_01->operator_cast_to_unsigned_int();
            (*pcVar1)(36160, uVar5);
            CheckGlErrorInternal("glBindFramebuffer",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "rendertargets/OGL/RenderTargets_OGL.cpp",
                                 231);
        }
    }

    // 0x100be74f0
    uint8_t RenderTargets::Create(const char* str, unsigned int arg2) {
        RenderDevice* pRVar2;
        RenderTargets* local_e0;
        RenderTargets* local_d8;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[160];
        long local_28;

        if (!(field_24.empty())) {
            LogAssert("m_mainThreadColourTargetTextures.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      239, nullptr);
        }
        if (field_192 != nullptr) {
            LogAssert("!m_pMainThreadDepthStencilTargetTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      240, nullptr);
        }
        if ((field_216 & 4) != 0) {
            LogAssert("(m_flags & IMMUTABLE_RENDER_TARGET) == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      242, nullptr);
        }
        field_216 = arg2;
        field_224 = str;
        return local_c9 = 1;
        RenderTargets* pRVar3 = this;
        if (!(IsBackBuffer())) {
            if ((arg2 & 8) == 0) {
                pRVar3 = this;
                KeepAlive();
                pRVar2 = (RenderDevice*)pRVar3->Instance();
                local_e0 = this;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    RenderTargets::Create(char const*, unsigned int)::__5, void>(local_c8, (__5*)&local_e0);
                pRVar2->RunOnRenderThread(*local_c8);
            } else {
                pRVar2 = (RenderDevice*)pRVar3->Instance();
                local_e0 = (RenderTargets*)&local_c9;
                local_d8 = this;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    RenderTargets::Create(char const*, unsigned int)::__4, void>(local_c8, (__4*)&local_e0);
                pRVar2->RunSynchronouslyOnRenderThread(*local_c8, true);
            }
        }
        return local_c9;
    }

    // 0x100be7a90
    uint32_t RenderTargets::CreateInternal(RenderContext& renderContext) {
        Texture* pTVar1;
        uint8_t bVar3;
        bool arg2;
        Logger* pLVar6;
        unsigned long uVar7;
        uint64_t* puVar8;
        int* piVar9;
        memory_order memory_order;
        unsigned long arg1;
        AutoSingleton<ShaderThreadPoolSingleton> local_e8;
        ReturnValue local_e0;

        bool cVar2 = ((RenderDevice*)Instance())->IsRenderThread();
        if (!cVar2) {
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      415, nullptr);
        }
        uint8_t* this_01 = &field_380;
        int iVar4 = this_01->operator_cast_to_unsigned_int();
        if (iVar4 != 0) {
            LogAssert("m_FBO == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      416, nullptr);
        }
        iVar4 = this_01->operator_cast_to_unsigned_int();
        if (iVar4 != 0) {
            LogAssert("m_FBO == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      420, nullptr);
        }
        unsigned int local_ec = 0;
        (*___glewGenFramebuffers)(1, &local_ec);
        CheckGlErrorInternal("glGenFramebuffers",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "rendertargets/OGL/RenderTargets_OGL.cpp",
                             426);
        this_01->exchange(local_ec, memory_order);
        uint8_t* this_00 = &field_80;
        cVar2 = this_00->empty();
        char local_e1 = true;
        if (cVar2) {
            local_e1 = field_200 != nullptr;
        }
        if (local_e1 != false) {
            if ((field_216 & 8) == 0) {
                renderContext.SetRenderTargets(this);
            } else {
                BindFrameBufferWithoutStateCache(renderContext);
            }
        }
        long lVar5 = this_00->size();
        uint64_t uVar10 = (((uint64_t)((int64_t)((unsigned long)this_01 >> 8)) << 8) | (uint8_t)1);
        if (lVar5 != 0) {
            arg1 = 0;
            do {
                puVar8 = (uint64_t*)(*this_00)[arg1];
                pTVar1 = (Texture*)*puVar8;
                if (pTVar1 == nullptr) {
                    LogAssert("pTexture != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "rendertargets/OGL/RenderTargets_OGL.cpp",
                              446, nullptr);
                }
                piVar9 = (int*)pTVar1->second();
                if ((*piVar9 == 0) || (lVar5 = pTVar1->second(), *(int*)(lVar5 + 4) == 0)) {
                    pLVar6 = logger::default_logger();
                    pLVar6->Log(false, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "rendertargets/OGL/RenderTargets_OGL.cpp",
                                447, "Attempting to create zero-sized render target");
                }
                AttachColourTargetToFBO(pTVar1, (int)arg1, 0, 0, 34069);
                bVar3 = IsFBOValid();
                uVar10 =
                    (((uint64_t)((int64_t)((unsigned long)uVar10 >> 8)) << 8) | (uint8_t)((uint8_t)uVar10 & bVar3));
                arg1 = (unsigned long)((int)arg1 + 1);
                uVar7 = this_00->size();
            } while (arg1 < uVar7);
        }
        uint32_t uVar11 = (uint32_t)uVar10;
        if (field_200 != nullptr) {
            cVar2 = this_00->empty();
            if (cVar2) {
                _glDrawBuffer(0);
                CheckGlErrorInternal("glDrawBuffer",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "rendertargets/OGL/RenderTargets_OGL.cpp",
                                     461);
                _glReadBuffer(0);
                CheckGlErrorInternal("glReadBuffer",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "rendertargets/OGL/RenderTargets_OGL.cpp",
                                     462);
            }
            piVar9 = (int*)field_200->second();
            if ((*piVar9 == 0) || (lVar5 = field_200->second(), *(int*)(lVar5 + 4) == 0)) {
                pLVar6 = logger::default_logger();
                pLVar6->Log(false, 3,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                            "rendertargets/OGL/RenderTargets_OGL.cpp",
                            466, "Attempting to create zero-sized render target");
            }
            pTVar1 = field_200;
            lVar5 = pTVar1->second();
            arg2 = (bool)HasStencilBits(*(Format*)(lVar5 + 12));
            AttachDepthStencilToFBO(pTVar1, arg2);
            bVar3 = IsFBOValid();
            uVar11 = (uint32_t)(((uint64_t)((int64_t)((unsigned long)uVar10 >> 8)) << 8) |
                                (uint8_t)((uint8_t)uVar10 & bVar3));
        }
        if ((local_e1 != '\0') && ((field_216 & 8) != 0)) {
            RestorePreviousFrameBuffer(renderContext);
        }
        if ((char)uVar11 == '\0') {
            pLVar6 = logger::default_logger();
            GetInfoString(&local_e0, this);
            uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar6->Log(false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                        "rendertargets/OGL/RenderTargets_OGL.cpp",
                        481, "Failed to create render target %s", uVar10);
        }
        return uVar11;
    }

    // 0x100be7eb0
    void RenderTargets::SetEnabledRenderTargets(unsigned long arg1, const unsigned long* arg2) {
        RenderDevice* this_00;
        RenderTargets* local_110;
        unsigned long local_108;
        unsigned long* local_100;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_f8[160];
        long local_30;

        fixed_vector<unsigned long, 2ul, false, eastl::dummy_allocator> local_58;
        local_58.assign<unsigned long const*>(arg2, arg2 + arg1);
        Singleton<RenderDevice>* arg2_00 = (Singleton<RenderDevice>*)&field_336;
        if (local_58 != *arg2_00) {
            *arg2_00 = local_58;
            this_00 = (RenderDevice*)arg2_00->Instance();
            local_110 = this;
            local_108 = arg1;
            local_100 = arg2;
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::__8, void>(
                local_f8, (__8*)&local_110);
            this_00->RunOnRenderThread(*local_f8);
        }
    }

    // 0x100be80a0
    void RenderTargets::SetTargetCubeMapFace(int arg1, CubeFace cubeFace) {
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[168];
        long local_30;

        RenderTargets* this_01 = this;
        KeepAlive();
        auto this_00 = this_01->Instance();
        RenderTargets* local_e8 = this;
        int local_e0 = arg1;
        CubeFace local_dc = cubeFace;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            RenderTargets::SetTargetCubeMapFace(int, CubeFace)::__9, void>(local_d8, (__9*)&local_e8);
        this_00->RunOnRenderThread(*local_d8);
        field_376 = cubeFace;
    }

    // 0x100be8170
    void RenderTargets::SetTargetMipLayerLevel(int arg1, int arg2, int arg3) {
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        RenderTargets* this_01 = this;
        KeepAlive();
        auto this_00 = this_01->Instance();
        RenderTargets* local_f0 = this;
        int local_e8 = arg1;
        int local_e4 = arg2;
        int local_e0 = arg3;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            RenderTargets::SetTargetMipLayerLevel(int, int, int)::__10, void>(local_d8, (__10*)&local_f0);
        this_00->RunOnRenderThread(*local_d8);
    }

    // 0x100be8290
    void RenderTargets::Unbind() {
        __13 local_d0;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[168];
        long local_20;

        KeepAlive();
        Singleton<RenderDevice>* this_01 = (Singleton<RenderDevice>*)&field_24;
        this_01->clear();
        field_192 = nullptr;
        auto this_00 = this_01->Instance();
        local_d0.field_0 = this;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                (fixedfunction::Methods)0>::function<RenderTargets::Unbind()::__13, void>(local_c8,
                                                                                                          &local_d0);
        this_00->RunOnRenderThread(*local_c8);
    }

    // 0x100be8350
    void RenderTargets::UnbindDepthStencilTargetTexture() {
        __14 local_d0;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[168];
        long local_20;

        RenderTargets* this_01 = this;
        KeepAlive();
        field_192 = nullptr;
        auto this_00 = this_01->Instance();
        local_d0.field_0 = this;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            RenderTargets::UnbindDepthStencilTargetTexture()::__14, void>(local_c8, &local_d0);
        this_00->RunOnRenderThread(*local_c8);
    }

    // 0x100be8410
    void RenderTargets::GetNativeFBOId() const {
        uint64_t uVar2;
        ReturnValue local_c8;

        if ((field_216 & 8) == 0) {
            if (!(((RenderDevice*)Instance())->IsRenderThread())) {
                LogAssert("(m_flags & FORCE_SYNCHRONOUS_ALLOW_CREATION_FAILURE) == "
                          "FORCE_SYNCHRONOUS_ALLOW_CREATION_FAILURE || RenderDevice::Instance().IsRenderThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/OGL/RenderTargets_OGL.cpp",
                          971, nullptr);
            }
        }
        if (!(IsCreated())) {
            GetInfoString(&local_c8, this);
            uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            LogAssert("IsCreated()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      972, "Dead render target bound (%s)", uVar2);
        }
        KeepAlive();
        (&field_380)->operator_cast_to_unsigned_int();
    }

    // 0x100be8510
    void RenderTargets::Invalidate() const {
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[168];
        long local_20;

        RenderTargets* this_01 = this;
        KeepAlive();
        auto this_00 = this_01->Instance();
        RenderTargets* local_d0 = this;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            RenderTargets::Invalidate() const ::__15, void>(local_c8, (__15*)&local_d0);
        this_00->RunOnRenderThread(*local_c8);
    }

    // 0x100be85c0
    void RenderTargets::InvalidateAllRenderTargets() {
        RenderTargets* this_00;
        uint64_t* puVar5;
        uint64_t local_38;
        uint64_t local_30;
        scoped_lock<std::mutex> local_28;

        auto pRVar3 = Instance();
        bool cVar1 = pRVar3->IsRenderThread();
        if (!cVar1) {
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      951, nullptr);
        }
        pRVar3 = (RenderDevice*)pRVar3->Instance();
        if (pRVar3->GetPrimaryRenderContext() != 0) {
            local_28 = std::scoped_lock(m_renderTargetsToInvalidateMutex);
            local_38 = m_renderTargetsToInvalidate.begin();
            local_30 = m_renderTargetsToInvalidate.end();
            while (true) {
                cVar1 = local_38 != local_30;
                if (!cVar1)
                    break;
                puVar5 = (uint64_t*)*local_38;
                this_00 = (RenderTargets*)*puVar5;
                if (this_00 != nullptr) {
                    if ((&this_00->field_380)->operator_cast_to_unsigned_int() != 0) {
                        Invalidate(this_00);
                    }
                }
                ++local_38;
            }
            m_renderTargetsToInvalidate.clear();
        }
    }

    // 0x100bfac40
    void RenderTargets::Destroy()::$_0::operator()(RenderContext& renderContext) const {
        field_0->Destroy();
    }

    // 0x100bfc360
    void RenderTargets::Create(char const*, unsigned int)::$_4::operator()(RenderContext& renderContext) const {
        uint8_t uVar1 = CreateInternal(field_8, renderContext);
        *field_0 = uVar1;
    }

    // 0x100bfc410
    void RenderTargets::Create(char const*, unsigned int)::$_5::operator()(RenderContext& renderContext) const {
        CreateInternal(field_0, renderContext);
    }

    // 0x100bfd090
    void
    RenderTargets::SetEnabledRenderTargets(unsigned long,
                                           unsigned long const*)::$_8::operator()(RenderContext& renderContext) const {
        unsigned long uVar1;
        unsigned int* puVar4;
        unsigned int* puVar5;
        unsigned int* arg2;
        unsigned long uVar7;
        unsigned long local_80;

        RenderTargets* local_70 = field_0;
        BindFrameBufferWithoutStateCache(local_70, renderContext);
        fixed_vector<unsigned int, 2ul, false, eastl::dummy_allocator> local_58;
        if (field_8 != 0) {
            uVar7 = 0;
            do {
                uVar1 = *(unsigned long*)(field_16 + uVar7 * 8);
                local_80 = uVar1;
                puVar4 = (unsigned int*)local_58.end();
                puVar5 = (unsigned int*)local_58.HeapBeginPtr();
                arg2 = (unsigned int*)local_58.end();
                puVar5 = std::find<unsigned int*, unsigned long>(puVar5, arg2, local_80);
                if (puVar4 != puVar5) {
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "rendertargets/OGL/RenderTargets_OGL.cpp",
                                    515, "Attempted to attach the same texture index %d to multiple draw buffers.",
                                    uVar1 & 4294967295);
                }
                local_58.push_back((int)uVar1 + 36064);
                uVar7 = uVar7 + 1;
            } while (uVar7 < (unsigned long)field_8);
        }
        void* pcVar2 = ___glewDrawBuffers;
        uint32_t uVar3 = local_58.size();
        uint64_t uVar6 = local_58.HeapBeginPtr();
        (*pcVar2)(uVar3, uVar6);
        CheckGlErrorInternal("glDrawBuffers",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "rendertargets/OGL/RenderTargets_OGL.cpp",
                             519);
        RestorePreviousFrameBuffer(local_70, renderContext);
    }

    // 0x100bfd430
    void RenderTargets::SetTargetCubeMapFace(int, CubeFace)::$_9::operator()(RenderContext& renderContext) const {
        uint32_t uVar1;
        uint32_t uVar2;
        void* pcVar3;
        uint64_t* puVar7;
        uint32_t* puVar8;
        Texture* pTVar9;

        RenderTargets* renderTargets = field_0;
        int iVar5 = (&renderTargets->field_380)->operator_cast_to_unsigned_int();
        if (iVar5 == 0) {
            LogAssert("m_FBO",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      533, nullptr);
        }
        if (field_8 != 0) {
            LogAssert("iColourTarget == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      534, nullptr);
        }
        uint8_t* this_00 = &renderTargets->field_80;
        long* plVar6 = (long*)(*this_00)[(long)field_8];
        if (*plVar6 != 0) {
            puVar7 = (uint64_t*)(*this_00)[(long)field_8];
            iVar5 = (*puVar7)->GetMaxLineWidth();
            if (iVar5 == 34067) {
                plVar6 = (long*)(*this_00)[(long)field_8];
                if (*plVar6 != 0) {
                    puVar7 = (uint64_t*)(*this_00)[(long)field_8];
                    iVar5 = (*puVar7)->GetMaxLineWidth();
                    if (iVar5 == 34067) {
                        puVar7 = (uint64_t*)(*this_00)[(long)field_8];
                        if (!((*puVar7)->IsCreated())) {
                            (logger::default_logger())
                                ->Log(false, 3,
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                      "render/rendertargets/OGL/RenderTargets_OGL.cpp",
                                      556, "Attempted to bind invalid texture to cube map face");
                        } else {
                            renderContext.SetRenderTargets(renderTargets);
                            pcVar3 = ___glewFramebufferTexture2D;
                            iVar5 = field_8;
                            puVar8 =
                                (uint32_t*)(*((array<unsigned int, 2ul>*)(long)iVar5))[(unsigned long)renderTargets];
                            uVar1 = *puVar8;
                            uVar2 = field_12;
                            puVar7 = (uint64_t*)(*this_00)[(unsigned long)(long)iVar5];
                            pTVar9 = (*puVar7)->GetNativeTextureId();
                            (*pcVar3)(36160, uVar1, uVar2, (unsigned long)pTVar9 & 4294967295, 0);
                            CheckGlErrorInternal("glFramebufferTexture2D",
                                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                 "libs/hal/render/rendertargets/OGL/RenderTargets_OGL.cpp",
                                                 550);
                            if (!(IsFBOValid())) {
                                LogAssert("IsFBOValid()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                          "render/rendertargets/OGL/RenderTargets_OGL.cpp",
                                          552, nullptr);
                            }
                        }
                    }
                }
                return;
            }
        }
        LogAssert("m_renderThreadColourTargetTextures[iColourTarget] && "
                  "m_renderThreadColourTargetTextures[iColourTarget]->GetType() == TEXTURE_TYPE_CUBE",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/OGL/"
                  "RenderTargets_OGL.cpp",
                  535, nullptr);
    }

    // 0x100bfd6c0
    void RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10::operator()(RenderContext& renderContext) const {
        uint64_t* puVar4;

        RenderTargets* renderTargets = field_0;
        int iVar2 = (&renderTargets->field_380)->operator_cast_to_unsigned_int();
        if (iVar2 == 0) {
            LogAssert("m_FBO",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      571, nullptr);
        }
        if (field_8 != 0) {
            LogAssert("iColourTarget == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      572, nullptr);
        }
        uint8_t* this_00 = &renderTargets->field_80;
        long* plVar3 = (long*)(*this_00)[(long)field_8];
        if (*plVar3 != 0) {
            puVar4 = (uint64_t*)(*this_00)[(long)field_8];
            iVar2 = (*puVar4)->GetMaxLineWidth();
            if (iVar2 != 34067) {
                puVar4 = (uint64_t*)(*this_00)[(long)field_8];
                if ((*puVar4)->IsCreated() == '\0') {
                    LogAssert("m_renderThreadColourTargetTextures[iColourTarget]->IsCreated()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "rendertargets/OGL/RenderTargets_OGL.cpp",
                              574, nullptr);
                }
                plVar3 = (long*)(*this_00)[(long)field_8];
                if (*plVar3 != 0) {
                    puVar4 = (uint64_t*)(*this_00)[(long)field_8];
                    iVar2 = (*puVar4)->GetMaxLineWidth();
                    if (iVar2 != 34067) {
                        renderContext.SetRenderTargets(renderTargets);
                        puVar4 = (uint64_t*)(*this_00)[(long)field_8];
                        AttachColourTargetToFBO((Texture*)*puVar4, field_8, field_12, field_16, 4294967295);
                    }
                }
                return;
            }
        }
        LogAssert("m_renderThreadColourTargetTextures[iColourTarget] && "
                  "m_renderThreadColourTargetTextures[iColourTarget]->GetType() != TEXTURE_TYPE_CUBE",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/OGL/"
                  "RenderTargets_OGL.cpp",
                  573, nullptr);
    }

    // 0x100bfdcc0
    void RenderTargets::BindDepthStencilTargetTexture(Texture*)::$_12::operator()(RenderContext& renderContext) const {
        bool cVar1;
        unsigned int uVar3;
        Logger* pLVar5;
        memory_order memory_order;

        RenderTargets* this_00 = field_0;
        if (((&this_00->field_380)->operator_cast_to_unsigned_int() == 0) && (cVar1 = IsBackBuffer(this_00), !cVar1)) {
            LogAssert("m_FBO != 0 || IsBackBuffer()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      673, nullptr);
        }
        cVar1 = (&this_00->field_208)->operator_cast_to_bool();
        if (cVar1) {
            LogAssert("!m_pOwnedDepthStencilTargetTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      674,
                      "Setting of external depth resources only supported when RenderTargets is created will no depth "
                      "resources");
        }
        Texture* pTVar6 = field_8;
        this_00->field_200 = pTVar6;
        RenderResource* renderResource = (RenderResource*)&pTVar6->field_8;
        if (pTVar6 == nullptr) {
            renderResource = nullptr;
        }
        cVar1 = renderContext.IsObjectAlive(renderResource);
        if ((!cVar1) || (cVar1 = this_00->field_200->IsCreated(), !cVar1)) {
            pLVar5 = logger::default_logger();
            pLVar5->Log(false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                        "rendertargets/OGL/RenderTargets_OGL.cpp",
                        694, "Depth texture to be bound to render target was destroyed before deferred binding");
            return;
        }
        cVar1 = IsBackBuffer(this_00);
        if (cVar1) {
            return;
        }
        renderContext.SetRenderTargets(this_00);
        pTVar6 = this_00->field_200;
        long lVar4 = pTVar6->second();
        bool arg2 = (bool)HasStencilBits(*(Format*)(lVar4 + 12));
        memory_order = (memory_order)arg2;
        AttachDepthStencilToFBO(pTVar6, arg2);
        cVar1 = IsFBOValid();
        if (!cVar1) {
            pLVar5 = logger::default_logger();
            pTVar6 = this_00->field_200->GetNativeTextureId();
            uVar3 = this_00->field_380.load(memory_order);
            pLVar5->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                        "rendertargets/OGL/RenderTargets_OGL.cpp",
                        688, "Failed to bind depth texture %u to FBO %u", (unsigned long)pTVar6 & 4294967295,
                        (unsigned long)uVar3);
            return;
        }
    }

    // 0x100bfdee0
    void RenderTargets::Unbind()::$_13::operator()(RenderContext& renderContext) const {
        void* pcVar1;
        void* pcVar2;
        bool cVar3;
        int iVar4;
        uint32_t uVar5;
        uint32_t uVar6;
        uint32_t* puVar9;
        RenderResource* renderResource;
        char* str1;
        array<unsigned int, 2ul>* this_01;

        RenderTargets* renderTargets = field_0;
        renderContext.SetRenderTargets(renderTargets);
        uint8_t* this_00 = &renderTargets->field_80;
        auto plVar7 = this_00->HeapBeginPtr();
        auto plVar8 = this_00->end();
        if (plVar7 != plVar8) {
            this_01 = nullptr;
            do {
                renderResource = (RenderResource*)(*plVar7 + 8);
                if (*plVar7 == 0) {
                    renderResource = nullptr;
                }
                cVar3 = renderContext.IsObjectAlive(renderResource);
                if (cVar3) {
                    iVar4 = (*plVar7)->GetMaxLineWidth();
                    pcVar2 = ___glewFramebufferTexture3D;
                    pcVar1 = ___glewFramebufferTexture2D;
                    if (iVar4 < 35866) {
                        if (iVar4 == 3553) {
                        LAB_100bfe041:
                            puVar9 = (uint32_t*)(*this_01)[(unsigned long)renderResource];
                            uVar6 = *puVar9;
                            uVar5 = (*plVar7)->GetMaxLineWidth();
                            (*pcVar1)(36160, uVar6, uVar5);
                            str1 = "glFramebufferTexture2D";
                            iVar4 = 731;
                        } else if (iVar4 == 32879) {
                            puVar9 = (uint32_t*)(*this_01)[(unsigned long)renderResource];
                            uVar6 = *puVar9;
                            uVar5 = (*plVar7)->GetMaxLineWidth();
                            (*pcVar2)(36160, uVar6, uVar5);
                            str1 = "glFramebufferTexture3D";
                            iVar4 = 767;
                        } else {
                            if (iVar4 != 34067)
                                goto LAB_100bfdf86;
                            puVar9 = (uint32_t*)(*this_01)[(unsigned long)renderResource];
                            (*pcVar1)(36160, *puVar9, 34069);
                            str1 = "glFramebufferTexture2D";
                            iVar4 = 755;
                        }
                    } else {
                        if ((iVar4 != 35866) && (iVar4 != 37122)) {
                            if (iVar4 == 37120)
                                goto LAB_100bfe041;
                            goto LAB_100bfdf86;
                        }
                        puVar9 = (uint32_t*)(*this_01)[(unsigned long)renderResource];
                        uVar6 = *puVar9;
                        uVar5 = (*plVar7)->GetMaxLineWidth();
                        (*pcVar2)(36160, uVar6, uVar5, 0, 0, 0);
                        str1 = "glFramebufferTexture3D";
                        iVar4 = 744;
                    }
                    CheckGlErrorInternal(str1,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/rendertargets/OGL/RenderTargets_OGL.cpp",
                                         iVar4);
                }
            LAB_100bfdf86:
                this_01 = this_01 + 1;
                plVar7 = plVar7 + 1;
            } while (plVar7 != plVar8);
        }
        this_00->clear();
        renderTargets->field_136.clear();
        if (renderTargets->field_200 != nullptr) {
            cVar3 = renderContext.IsObjectAlive(&renderTargets->field_200->field_8);
            pcVar1 = ___glewFramebufferTexture2D;
            if (cVar3) {
                uVar6 = renderTargets->field_200->GetMaxLineWidth();
                (*pcVar1)(36160, 36096, uVar6, 0, 0);
                CheckGlErrorInternal("glFramebufferTexture2D",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "rendertargets/OGL/RenderTargets_OGL.cpp",
                                     788);
                pcVar1 = ___glewFramebufferTexture2D;
                uVar6 = renderTargets->field_200->GetMaxLineWidth();
                (*pcVar1)(36160, 36128, uVar6, 0, 0);
                CheckGlErrorInternal("glFramebufferTexture2D",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "rendertargets/OGL/RenderTargets_OGL.cpp",
                                     796);
                renderTargets->field_200 = nullptr;
                renderTargets->field_208.reset(nullptr);
            }
        }
    }

    // 0x100bfe260
    void RenderTargets::UnbindDepthStencilTargetTexture()::$_14::operator()(RenderContext& renderContext) const {
        void* pcVar1;
        bool cVar2;
        uint32_t uVar3;

        RenderTargets* renderTargets = field_0;
        renderContext.SetRenderTargets(renderTargets);
        if (renderTargets->field_200 != nullptr) {
            cVar2 = renderContext.IsObjectAlive(&renderTargets->field_200->field_8);
            pcVar1 = ___glewFramebufferTexture2D;
            if (cVar2) {
                uVar3 = renderTargets->field_200->GetMaxLineWidth();
                (*pcVar1)(36160, 36096, uVar3, 0, 0);
                CheckGlErrorInternal("glFramebufferTexture2D",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "rendertargets/OGL/RenderTargets_OGL.cpp",
                                     824);
                pcVar1 = ___glewFramebufferTexture2D;
                uVar3 = renderTargets->field_200->GetMaxLineWidth();
                (*pcVar1)(36160, 36128, uVar3, 0, 0);
                CheckGlErrorInternal("glFramebufferTexture2D",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "rendertargets/OGL/RenderTargets_OGL.cpp",
                                     832);
                renderTargets->field_200 = nullptr;
                renderTargets->field_208.reset(nullptr);
            }
        }
    }

    // 0x100bfe3e0
    void RenderTargets::Invalidate() const ::$_15::operator()(RenderContext& renderContext) const {
        Texture* this_01;
        bool cVar1;
        RenderContextStateCache* this_03;
        MapArea* pMVar3;
        long lVar4;
        uint64_t* puVar5;
        uint64_t* puVar6;
        uint32_t local_34;
        uint32_t local_30;
        uint32_t local_2c;

        RenderTargets* this_00 = *(RenderTargets**)this;
        Singleton<RenderDevice>* this_04 = (Singleton<RenderDevice>*)&this_00->field_380;
        int iVar2 = this_04->operator_cast_to_unsigned_int();
        if ((iVar2 != 0) && (cVar1 = this_00->CheckTexturesAlive(renderContext), cVar1)) {
            this_03 = renderContext.GetImmediateContext()->GetStateCache();
            iVar2 = this_04->operator_cast_to_unsigned_int();
            if (iVar2 == this_03->field_8) {
                this_03->ValidateBoundFBO();
                pMVar3 = (MapArea*)this_03->Instance();
                lVar4 = pMVar3->GetOrigin();
                if (*(char*)(lVar4 + 329) != '\0') {
                    cVar1 = this_00->HasColourTargets();
                    if (cVar1) {
                        local_34 = 36064;
                        (*___glewInvalidateFramebuffer)(36160, 1, &local_34);
                        CheckGlErrorInternal("glInvalidateFramebuffer",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/rendertargets/OGL/RenderTargets_OGL.cpp",
                                             888);
                    }
                    cVar1 = this_00->HasDepthTarget();
                    if (cVar1) {
                        local_30 = 36096;
                        (*___glewInvalidateFramebuffer)(36160, 1, &local_30);
                        CheckGlErrorInternal("glInvalidateFramebuffer",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/rendertargets/OGL/RenderTargets_OGL.cpp",
                                             893);
                    }
                    cVar1 = this_00->HasStencilTarget();
                    if (cVar1) {
                        local_2c = 36128;
                        (*___glewInvalidateFramebuffer)(36160, 1, &local_2c);
                        CheckGlErrorInternal("glInvalidateFramebuffer",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/rendertargets/OGL/RenderTargets_OGL.cpp",
                                             898);
                    }
                }
            } else {
                pMVar3 = (MapArea*)this_04->Instance();
                lVar4 = pMVar3->GetOrigin();
                if (*(char*)(lVar4 + 328) != '\0') {
                    cVar1 = this_00->HasColourTargets();
                    if (cVar1) {
                        puVar5 = (uint64_t*)this_00->field_80.HeapBeginPtr();
                        puVar6 = (uint64_t*)this_00->field_80.end();
                        for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
                            this_01 = (Texture*)*puVar5;
                            if ((this_01 != nullptr) && (cVar1 = this_01->IsCreated(), cVar1)) {
                                this_01->Invalidate();
                            }
                        }
                    }
                    cVar1 = this_00->HasDepthTarget();
                    if ((((cVar1) && (cVar1 = (&this_00->field_208)->operator_cast_to_bool(), cVar1)) &&
                         (this_00->field_200 != nullptr)) &&
                        (cVar1 = this_00->field_200->IsCreated(), cVar1)) {
                        this_00->field_200->Invalidate();
                    }
                }
            }
        }
    }

} // namespace jag::render

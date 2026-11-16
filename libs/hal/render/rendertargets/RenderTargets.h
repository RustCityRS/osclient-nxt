// libs/hal/render/rendertargets/RenderTargets.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class RenderTargets {
    public:
        uint64_t GetDepthStencilTargetTexture() const;
        RenderTargets();
        ~RenderTargets();
        bool IsBackBuffer() const;
        unsigned long HasColourTargets() const;
        bool HasDepthTarget() const;
        bool IsCreated() const;
        void Destroy();
        uint64_t BindColourTargetTexture(Texture* texture, int arg2, int arg3, CubeFace cubeFace);
        uint64_t BindColourTargetTextures(eastl::fixed_vector<Texture*, 2ul> const& textures, int arg2, int arg3,
                                          CubeFace cubeFace);
        void SetNeedsInvalidated() const;
        uint64_t CheckTexturesAlive(const RenderContext& renderContext) const;
        void SafeReset(shared_ptr<RenderTargets>& renderTargets);
        bool HasStencilTarget() const;
        void KeepAlive() const;
        void ReleaseNativeResources();
        uint64_t BindDepthStencilTargetTexture(RenderTargets* renderTargets);
        uint64_t BindDepthStencilTargetTexture(Texture* texture);
        uint64_t GetDepthStencilTargetTexture();
        uint8_t* GetColourTargetTextures();
        uint8_t* GetColourTargetTextures() const;
        void SetName(const char* str);
        bool Create(const char* str, TextureType textureType, const std::array<Texture::Desc, 2ul>& descs, int arg4,
                    const Texture::Desc& desc, unsigned int arg6);
        void RestorePreviousFrameBuffer(RenderContext& renderContext) const;
        void BindFrameBufferWithoutStateCache(RenderContext& renderContext) const;
        uint8_t Create(const char* str, unsigned int arg2);
        void GetName() const;
        uint32_t CreateInternal(RenderContext& renderContext);
        void SetEnabledRenderTargets(unsigned long arg1, const unsigned long* arg2);
        void SetTargetCubeMapFace(int arg1, CubeFace cubeFace);
        void SetTargetMipLayerLevel(int arg1, int arg2, int arg3);
        void Unbind();
        void UnbindDepthStencilTargetTexture();
        void GetNativeFBOId() const;
        void Invalidate() const;
        void InvalidateAllRenderTargets();
        void EnableKeepAlive();
        auto GetInfoString() const;
        static int32_t m_renderTargetsToInvalidateMutex[16]; // initialised in its definition
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullRenderTargets; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                             eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>
            m_renderTargetsToInvalidate;

    private:
        RenderResourceLivenessMethod field_0;
        RenderResource field_4;
        uint8_t _unknown_5[187];
        Texture* field_192;
        Texture* field_200;
        uint8_t _unknown_208[8];
        unsigned int field_216;
        uint8_t _unknown_220[108];
        unsigned int field_328;
        unsigned int field_332;
        uint8_t _unknown_336[40];
        CubeFace field_376;
        uint8_t _unknown_380[8];
    };

    // 0x100bdfc20
    bool RenderTargets::IsBackBuffer() const {
        return ((uint8_t)field_216 & 16) >> 4;
    }

    // 0x100be1cf0
    void RenderTargets::SetName(const char* str) {
        field_224 = str;
    }

    // 0x100be7a00
    void RenderTargets::GetName() const {
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x100bf76e0
    RenderTargets::BindColourTargetTextures(eastl::fixed_vector<Texture*, 2ul> const&, int, int,
                                            CubeFace)::$_11::~$_11() {
        ((this + 24))->~fixed_vector();
    }

    // 0x100bfcc70
    void RenderTargets::Create(char const*, TextureType, std::array<Texture::Desc, 2ul> const&, int,
                               Texture::Desc const&,
                               unsigned int)::$_6::operator()(RenderContext& renderContext) const {
        uint8_t uVar1 = CreateInternal(*(RenderTargets**)(this + 8), renderContext);
        **(uint8_t**)this = uVar1;
    }

    // 0x100bfcd20
    void RenderTargets::Create(char const*, TextureType, std::array<Texture::Desc, 2ul> const&, int,
                               Texture::Desc const&,
                               unsigned int)::$_7::operator()(RenderContext& renderContext) const {
        CreateInternal(*(RenderTargets**)this, renderContext);
    }

    // 0x100bfd950
    RenderTargets::BindColourTargetTextures(eastl::fixed_vector<Texture*, 2ul> const&, int, int,
                                            CubeFace)::$_11::$_11($_11&& arg1) {
        *(uint32_t*)(this + 16) = *(uint32_t*)(arg1 + 16);
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)this = *(uint64_t*)arg1;
        *(uint64_t*)(this + 8) = uVar1;
        new ((this + 24)) eastl::fixed_vector<Texture*, 2ul>(*((arg1 + 24)));
    }

    // 0x100bfd9b0
    RenderTargets::BindColourTargetTextures(eastl::fixed_vector<Texture*, 2ul> const&, int, int,
                                            CubeFace)::$_11::$_11(const $_11& arg1) {
        *(uint32_t*)(this + 16) = *(uint32_t*)(arg1 + 16);
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)this = *(uint64_t*)arg1;
        *(uint64_t*)(this + 8) = uVar1;
        new ((this + 24)) eastl::fixed_vector<Texture*, 2ul>(*((arg1 + 24)));
    }

    // 0x100bfd9f0
    void RenderTargets::BindColourTargetTextures(eastl::fixed_vector<Texture*, 2ul> const&, int, int,
                                                 CubeFace)::$_11::operator()(RenderContext& renderContext) const {
        bool cVar1;
        unsigned int uVar3;
        Logger* pLVar6;
        unsigned long uVar8;
        uint64_t* puVar9;
        Texture* pTVar10;
        memory_order memory_order;
        unsigned long arg1;

        RenderTargets* this_01 = *(RenderTargets**)this;
        int iVar2 = (&this_01->field_380)->operator_cast_to_unsigned_int();
        if ((iVar2 == 0) && (cVar1 = IsBackBuffer(this_01), !cVar1)) {
            LogAssert("m_FBO != 0 || IsBackBuffer()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      614, nullptr);
        }
        cVar1 = this_01->field_136.empty();
        if (!cVar1) {
            LogAssert("m_ownedColourTargetTextures.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      615,
                      "Setting of external colour target textures only supported when RenderTargets is created without "
                      "ownership of its own");
        }
        uint8_t* this_00 = &this_01->field_80;
        *this_00 = (*((this + 24)));
        auto plVar4 = this_00->HeapBeginPtr();
        auto plVar5 = this_00->end();
        while (true) {
            if (plVar4 == plVar5) {
                cVar1 = IsBackBuffer(this_01);
                if (!cVar1) {
                    renderContext.SetRenderTargets(this_01);
                    if (this_00->size() != 0) {
                        arg1 = 0;
                        do {
                            puVar9 = (uint64_t*)(*this_00)[arg1];
                            pTVar10 = (Texture*)*puVar9;
                            if (pTVar10 == nullptr) {
                                LogAssert("pTexture != nullptr",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                          "render/rendertargets/OGL/RenderTargets_OGL.cpp",
                                          636, nullptr);
                            }
                            iVar2 = (int)arg1;
                            AttachColourTargetToFBO(pTVar10, iVar2, *(int*)(this + 8), *(int*)(this + 12),
                                                    *(CubeFace*)(this + 16));
                            memory_order = (memory_order)arg1;
                            cVar1 = IsFBOValid();
                            if (!cVar1) {
                                pLVar6 = logger::default_logger();
                                pTVar10 = pTVar10->GetNativeTextureId();
                                uVar3 = this_01->field_380.load(memory_order);
                                pLVar6->Log(false, 2,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "render/rendertargets/OGL/RenderTargets_OGL.cpp",
                                            642, "Failed to bind colour target texture %u to FBO %u",
                                            (unsigned long)pTVar10 & 4294967295, (unsigned long)uVar3);
                            }
                            arg1 = (unsigned long)(iVar2 + 1);
                            uVar8 = this_00->size();
                        } while (arg1 < uVar8);
                    }
                }
                return;
            }
            if ((*plVar4 != 0) && ((cVar1 = renderContext.IsObjectAlive((*plVar4 + 8)),
                                    !cVar1 || (cVar1 = (*plVar4)->IsCreated(), !cVar1))))
                break;
            plVar4 = plVar4 + 1;
        }
        pLVar6 = logger::default_logger();
        pLVar6->Log(false, 3,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                    "OGL/RenderTargets_OGL.cpp",
                    624, "Colour texture to be bound to render target was destroyed before deferred binding");
    }

    // 0x100c275b0
    void RenderTargets::EnableKeepAlive() {
        *(uint8_t*)&field_216 = (uint8_t)field_216 & 253;
    }

    // 0x100c27660
    auto RenderTargets::GetInfoString() const {
        uint64_t in_RAX;
        memory_order memory_order;
        uint8_t* puVar6;

        uint32_t uVar7 = (uint32_t)((unsigned long)in_RAX >> 32);
        bool cVar3 = field_224.empty();
        memory_order = (memory_order)this;
        if (!cVar3) {
            puVar6 = (uint8_t*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        } else {
            puVar6 = &DAT_100e3802c;
        }
        unsigned int uVar1 = field_328;
        unsigned int uVar2 = field_332;
        uint32_t uVar4 = field_380.load(memory_order);
        return auto((CtorSprintf*)"%x %s (%i x %i) (FBO %i)", this, puVar6, (unsigned long)uVar1, (unsigned long)uVar2,
                    (((uint64_t)uVar7 << 32) | (uint32_t)uVar4));
    }

} // namespace jag::render

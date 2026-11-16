// libs/hal/render/rendertargets/RenderTargets.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class RenderTargets {
    public:
        GetDepthStencilTargetTexture() const;
        RenderTargets();
        ~RenderTargets();
        byte IsBackBuffer() const;
        ulong HasColourTargets() const;
        bool HasDepthTarget() const;
        bool IsCreated() const;
        void Destroy();
        BindColourTargetTexture(Texture*, int, int, CubeFace);
        BindColourTargetTextures(eastl::fixed_vector<Texture*, 2ul, true, eastl::allocator> const&, int, int, CubeFace);
        void SetNeedsInvalidated() const;
        CheckTexturesAlive(RenderContext const&) const;
        void SafeReset(shared_ptr<RenderTargets>&);
        HasStencilTarget() const;
        void KeepAlive() const;
        void ReleaseNativeResources();
        BindDepthStencilTargetTexture(RenderTargets*);
        BindDepthStencilTargetTexture(Texture*);
        GetDepthStencilTargetTexture();
        GetColourTargetTextures();
        GetColourTargetTextures() const;
        void SetName(char const*);
        bool Create(char const*, TextureType, std::array<Texture::Desc, 2ul> const&, int, Texture::Desc const&,
                    unsigned int);
        void RestorePreviousFrameBuffer(RenderContext&) const;
        void BindFrameBufferWithoutStateCache(RenderContext&) const;
        Create(char const*, unsigned int);
        void GetName() const;
        CreateInternal(RenderContext&);
        void SetEnabledRenderTargets(unsigned long, unsigned long const*);
        void SetTargetCubeMapFace(int, CubeFace);
        void SetTargetMipLayerLevel(int, int, int);
        void Unbind();
        void UnbindDepthStencilTargetTexture();
        void GetNativeFBOId() const;
        void Invalidate() const;
        void InvalidateAllRenderTargets();
        void EnableKeepAlive();
        GetInfoString() const;
        static /* 64 bytes */ m_renderTargetsToInvalidateMutex; // initialised in its definition
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullRenderTargets;
        static /* 2704 bytes */ m_renderTargetsToInvalidate;

        // data members, from how the methods use this: 388 bytes
        int field_0;            // offset 0
        RenderResource field_4; // offset 4
        char _unknown_5[187];
        Texture* field_192; // offset 192
        Texture* field_200; // offset 200
        char _unknown_208[8];
        uint field_216; // offset 216
        char _unknown_220[108];
        undefined8 field_328; // offset 328
        char _unknown_336[40];
        undefined4 field_376; // offset 376
        undefined1 field_380; // offset 380
        char _unknown_381[7];
    };

    // 0x1001d06f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // RenderTargetData::RenderTargetData(RenderTargets*, math::Vector4T<float> const&, unsigned int, float, unsigned int): jumps straight to the base-object constructor

    // 0x100bdfc20, 32 bytes, inline, placed by class name and debug map
    // RenderTargets::IsBackBuffer() const
    byte RenderTargets::IsBackBuffer() {
        return ((byte)field_216 & 16) >> 4;
    }

    // 0x100be1cf0, 32 bytes, inline, placed by class name
    // RenderTargets::SetName(char const*)
    void RenderTargets::SetName(char* param_1) {
        eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(
            (fixed_string<char, 16, true, eastl::allocator>*)&field_224, param_1);
    }

    // 0x100be7a00, 32 bytes, inline, placed by class name
    // RenderTargets::GetName() const
    void RenderTargets::GetName() {
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x100be8270, 16 bytes, complete-object destructor, inline, placed by class name
    // RenderTargets::BindColourTargetTextures(eastl::fixed_vector<Texture*, 2ul, true, eastl::allocator> const&, int, int, CubeFace)::$_11::~$_11(): jumps straight to the base-object destructor

    // 0x100bf76e0, 16 bytes, base-object destructor, inline, placed by class name
    // RenderTargets::BindColourTargetTextures(eastl::fixed_vector<Texture*, 2ul, true, eastl::allocator> const&, int, int, CubeFace)::$_11::~$_11()
    /* ~$_11() */

    void RenderTargets::BindColourTargetTextures(eastl::fixed_vector<Texture*, 2ul, true, eastl::allocator> const&, int,
                                                 int, CubeFace)::$_11::~__11() {
        ((this + 24))->~fixed_vector();
    }

    // 0x100bfcc70, 32 bytes, inline, placed by class name
    // RenderTargets::Create(char const*, TextureType, std::array<Texture::Desc, 2ul> const&, int, Texture::Desc const&, unsigned int)::$_6::operator()(RenderContext&) const
    /* RenderTargets::Create(char const*, TextureType,
   std::array<Texture::Desc, 2ul> const&, int, Texture::Desc const&,
   unsigned int)::$_6::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderTargets::Create(char const*, TextureType, std::array<Texture::Desc, 2ul> const&, int,
                               Texture::Desc_const&, unsigned int)::$_6::operator()(RenderContext* param_1) {
        undefined1 uVar1;

        uVar1 = CreateInternal(*(RenderTargets**)(this + 8), param_1);
        **(undefined1**)this = uVar1;
    }

    // 0x100bfcd20, 16 bytes, inline, placed by class name
    // RenderTargets::Create(char const*, TextureType, std::array<Texture::Desc, 2ul> const&, int, Texture::Desc const&, unsigned int)::$_7::operator()(RenderContext&) const
    /* RenderTargets::Create(char const*, TextureType,
   std::array<Texture::Desc, 2ul> const&, int, Texture::Desc const&,
   unsigned int)::$_7::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderTargets::Create(char const*, TextureType, std::array<Texture::Desc, 2ul> const&, int,
                               Texture::Desc_const&, unsigned int)::$_7::operator()(RenderContext* param_1) {
        CreateInternal(*(RenderTargets**)this, param_1);
    }

    // 0x100bfd940, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderTargets::BindColourTargetTextures(eastl::fixed_vector<Texture*, 2ul, true, eastl::allocator> const&, int, int, CubeFace)::$_11::$_11($_11&&): jumps straight to the base-object constructor

    // 0x100bfd950, 32 bytes, base-object constructor, inline, placed by class name
    // RenderTargets::BindColourTargetTextures(eastl::fixed_vector<Texture*, 2ul, true, eastl::allocator> const&, int, int, CubeFace)::$_11::$_11($_11&&)
    /* $_11($_11&&) */

    void RenderTargets::BindColourTargetTextures(eastl::fixed_vector<Texture*, 2ul, true, eastl::allocator> const&, int,
                                                 int, CubeFace)::$_11::__11(__11* param_1) {
        undefined8 uVar1;

        *(undefined4*)(this + 16) = *(undefined4*)(param_1 + 16);
        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)(this + 8) = uVar1;
        new ((this + 24)) eastl::fixed_vector<Texture*, 2ul, true, eastl::allocator>((fixed_vector*)(param_1 + 24));
    }

    // 0x100bfd9a0, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderTargets::BindColourTargetTextures(eastl::fixed_vector<Texture*, 2ul, true, eastl::allocator> const&, int, int, CubeFace)::$_11::$_11($_11 const&): jumps straight to the base-object constructor

    // 0x100bfd9b0, 32 bytes, base-object constructor, inline, placed by class name
    // RenderTargets::BindColourTargetTextures(eastl::fixed_vector<Texture*, 2ul, true, eastl::allocator> const&, int, int, CubeFace)::$_11::$_11($_11 const&)
    /* $_11($_11 const&) */

    void RenderTargets::BindColourTargetTextures(eastl::fixed_vector<Texture*, 2ul, true, eastl::allocator> const&, int,
                                                 int, CubeFace)::$_11::__11(__11* param_1) {
        undefined8 uVar1;

        *(undefined4*)(this + 16) = *(undefined4*)(param_1 + 16);
        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)(this + 8) = uVar1;
        new ((this + 24)) eastl::fixed_vector<Texture*, 2ul, true, eastl::allocator>((fixed_vector*)(param_1 + 24));
    }

    // 0x100bfd9f0, 560 bytes, inline, placed by class name
    // RenderTargets::BindColourTargetTextures(eastl::fixed_vector<Texture*, 2ul, true, eastl::allocator> const&, int, int, CubeFace)::$_11::operator()(RenderContext&) const
    /* RenderTargets::BindColourTargetTextures(eastl::fixed_vector<Texture*,
   2ul, true, eastl::allocator> const&, int, int,
   CubeFace)::$_11::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderTargets::BindColourTargetTextures(eastl::fixed_vector<Texture*, 2ul, true, eastl::allocator> const&, int,
                                                 int, CubeFace)::$_11::operator()(RenderContext* param_1) {
        undefined1* this_00;
        RenderTargets* this_01;
        Texture* this_02;
        char cVar1;
        uint uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        long* plVar5;
        long* plVar6;
        undefined8 uVar7;
        long lVar8;
        ulong uVar9;
        undefined8* puVar10;
        ulong uVar11;

        this_01 = *(RenderTargets**)this;
        uVar2 = (&this_01->field_380)->operator_cast_to_unsigned_int();
        if ((uVar2 == 0) && (cVar1 = IsBackBuffer(this_01), cVar1 == '\0')) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_FBO != 0 || IsBackBuffer()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      614, (char*)0);
        }
        cVar1 = (&this_01->field_136)->empty();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_ownedColourTargetTextures.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      615,
                      "Setting of external colour target textures only supported when RenderTargets is created without "
                      "ownership of its own");
        }
        this_00 = &this_01->field_80;
        eastl::fixed_vector<Texture*, 2ul, true, eastl::allocator>::operator=(
            (fixed_vector<Texture*, 2ul, true, eastl::allocator>*)this_00, (fixed_vector*)(this + 24));
        plVar5 = (long*)this_00->HeapBeginPtr();
        plVar6 = (long*)this_00->end();
        while (true) {
            if (plVar5 == plVar6) {
                cVar1 = IsBackBuffer(this_01);
                if (cVar1 == '\0') {
                    param_1->SetRenderTargets(this_01);
                    lVar8 = this_00->size();
                    if (lVar8 != 0) {
                        uVar11 = 0;
                        do {
                            puVar10 = (undefined8*)eastl::vector<
                                Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<Texture*,
                                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    this_00,
                                uVar11);
                            this_02 = (Texture*)*puVar10;
                            if (this_02 == (Texture*)0) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("pTexture != nullptr",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                          "render/rendertargets/OGL/RenderTargets_OGL.cpp",
                                          636, (char*)0);
                            }
                            AttachColourTargetToFBO(this_02, uVar11, *(undefined4*)(this + 8),
                                                    *(undefined4*)(this + 12), *(undefined4*)(this + 16));
                            cVar1 = IsFBOValid();
                            if (cVar1 == '\0') {
                                uVar7 = logger::default_logger();
                                uVar3 = this_02->GetNativeTextureId();
                                uVar4 = std::__atomic_base<unsigned int, false>::load(&this_01->field_380);
                                logger::Logger::Log(uVar7, 0, 2,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/hal/render/rendertargets/OGL/RenderTargets_OGL.cpp",
                                                    642, "Failed to bind colour target texture %u to FBO %u", uVar3,
                                                    uVar4);
                            }
                            uVar11 = (ulong)((int)uVar11 + 1);
                            uVar9 = this_00->size();
                        } while (uVar11 < uVar9);
                    }
                }
                return;
            }
            if ((*plVar5 != 0) && ((cVar1 = param_1->IsObjectAlive((RenderResource*)(*plVar5 + 8)),
                                    cVar1 == '\0' || (cVar1 = (*plVar5)->IsCreated(), cVar1 == '\0'))))
                break;
            plVar5 = plVar5 + 1;
        }
        uVar7 = logger::default_logger();
        logger::Logger::Log(uVar7, 0, 3,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                            "rendertargets/OGL/RenderTargets_OGL.cpp",
                            624, "Colour texture to be bound to render target was destroyed before deferred binding");
    }

    // 0x100c275b0, 16 bytes, inline, placed by class name
    // RenderTargets::EnableKeepAlive()
    void RenderTargets::EnableKeepAlive() {
        *(byte*)&field_216 = (byte)field_216 & 253;
    }

    // 0x100c27660, 144 bytes, inline, placed by class name
    // RenderTargets::GetInfoString() const
    RenderTargets* RenderTargets::GetInfoString() {
        long in_RSI;

        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
            '\0') {
            eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        }
        std::__atomic_base<unsigned int, false>::load(in_RSI + 380);
        eastl::fixed_string<char, 128, true, eastl::allocator>::fixed_string(this, "%x %s (%i x %i) (FBO %i)");
        return this;
    }

} // namespace jag::render

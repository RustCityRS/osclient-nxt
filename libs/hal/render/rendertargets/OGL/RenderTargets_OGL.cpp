// libs/hal/render/rendertargets/OGL/RenderTargets_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "libs/hal/render/rendertargets/RenderTargets.h"

namespace jag::render {
    // 0x100f48760, 64 bytes, __data
    RenderTargets::m_renderTargetsToInvalidateMutex = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x103bd9e90, 16 bytes, __common; set at startup by ___cxx_global_var_init
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> RenderTargets::NullRenderTargets;

    // 0x103bd9ea0, 2704 bytes, __common; zero-initialised
    RenderTargets::m_renderTargetsToInvalidate;

    // 0x100bdfd50, 112 bytes, placed by class name and debug map
    // RenderTargets::IsCreated() const
    bool RenderTargets::IsCreated() {
        char cVar1;
        uint uVar2;
        RenderDevice* this_00;
        bool bVar3;

        if ((field_216 & 8) == 0) {
            this_00 = (RenderDevice*)Instance();
            cVar1 = this_00->IsRenderThread();
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("(m_flags & FORCE_SYNCHRONOUS_ALLOW_CREATION_FAILURE) == "
                          "FORCE_SYNCHRONOUS_ALLOW_CREATION_FAILURE || RenderDevice::Instance().IsRenderThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/OGL/RenderTargets_OGL.cpp",
                          981, (char*)0);
            }
        }
        cVar1 = IsBackBuffer(this);
        bVar3 = true;
        if (cVar1 == '\0') {
            uVar2 = (&field_380)->operator_cast_to_unsigned_int();
            bVar3 = uVar2 != 0;
        }
        return bVar3;
    }

    // 0x100bdff60, 16 bytes, complete-object destructor, placed by class name and debug map
    // RenderTargets::~RenderTargets(): jumps straight to the base-object destructor

    // 0x100bdff70, 160 bytes, placed by class name and debug map
    // RenderTargets::BindColourTargetTexture(Texture*, int, int, CubeFace)
    undefined8 RenderTargets::BindColourTargetTexture(long param_1, undefined4 param_2, undefined4 param_3,
                                                      undefined4 param_5) {
        fixed_vector<Texture*, 2ul, true, eastl::allocator> local_68[56];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_vector<Texture*, 2ul, true, eastl::allocator>::fixed_vector(local_68);
        if (param_1 != 0) {
            eastl::fixed_vector<Texture*, 2ul, true, eastl::allocator>::push_back((Texture**)local_68);
        }
        BindColourTargetTextures(this, local_68, param_2, param_3, param_5);
        eastl::fixed_vector<Texture*, 2ul, true, eastl::allocator>::~fixed_vector(local_68);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return CONCAT71((int7)((ulong) * (long*)PTR____stack_chk_guard_100ee9d98 >> 8), 1);
    }

    // 0x100be0020, 656 bytes, placed by class name and debug map
    // RenderTargets::BindColourTargetTextures(eastl::fixed_vector<Texture*, 2ul, true, eastl::allocator> const&, int, int, CubeFace)
    undefined8 RenderTargets::BindColourTargetTextures(vector* param_1, undefined4 param_2, undefined4 param_3,
                                                       undefined4 param_5) {
        undefined1* this_00;
        int iVar1;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_01;
        char cVar2;
        bool bVar3;
        long lVar4;
        ulong uVar5;
        undefined8* puVar6;
        int* piVar7;
        RenderDevice* this_02;
        Singleton<RenderDevice>* this_03;
        ulong uVar8;
        RenderTargets* local_128;
        undefined4 local_120;
        undefined4 local_11c;
        undefined4 local_118;
        fixed_vector<Texture*, 2ul, true, eastl::allocator> local_110[56];
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar2 = (&field_136)->empty();
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_ownedColourTargetTextures.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      588,
                      "Setting of external colour target textures only supported when RenderTargets is created without "
                      "ownership of its own");
        }
        if ((field_216 & 4) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("(m_flags & IMMUTABLE_RENDER_TARGET) == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      589,
                      "Setting of external colour target textures is not supported on RenderTargets created via "
                      "RenderTargetsManager. Use a standalone RenderTargets object instead.");
        }
        KeepAlive(this);
        this_00 = &field_24;
        bVar3 = eastl::operator!=(param_1, (vector*)this_00);
        if (bVar3) {
            eastl::fixed_vector<Texture*, 2ul, true, eastl::allocator>::operator=(
                (fixed_vector<Texture*, 2ul, true, eastl::allocator>*)this_00, (fixed_vector*)param_1);
            this_03 = (Singleton<RenderDevice>*)this_00;
            lVar4 = this_00->size();
            if (lVar4 != 0) {
                uVar5 = 0;
                uVar8 = 1;
                do {
                    puVar6 = (undefined8*)eastl::vector<
                        Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                            this_00,
                        uVar5);
                    this_01 = (compressed_pair_imp<
                               eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                       eastl::allocator>>::Layout,
                               eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)*puVar6;
                    if (this_01 ==
                        (compressed_pair_imp<
                            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("pTexture != nullptr",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "rendertargets/OGL/RenderTargets_OGL.cpp",
                                  603, (char*)0);
                    }
                    if (field_192 != (Texture*)0) {
                        piVar7 = (int*)eastl::compressed_pair_imp<
                            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>,
                            0>::second(this_01);
                        iVar1 = *piVar7;
                        piVar7 = (int*)field_192->second();
                        if (iVar1 != *piVar7) {
                        LAB_100be0110:
                            /* WARNING: Subroutine does not return */
                            LogAssert("!m_pMainThreadDepthStencilTargetTexture || (pTexture->GetDesc().m_Width == "
                                      "m_pMainThreadDepthStencilTargetTexture->GetDesc().m_Width && "
                                      "pTexture->GetDesc().m_Height == "
                                      "m_pMainThreadDepthStencilTargetTexture->GetDesc().m_Height)",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                      "render/rendertargets/OGL/RenderTargets_OGL.cpp",
                                      608,
                                      "Supplied colour texture must have same dimensions as existing depth texture");
                        }
                        lVar4 = eastl::compressed_pair_imp<
                            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>,
                            0>::second(this_01);
                        iVar1 = *(int*)(lVar4 + 4);
                        lVar4 = field_192->second();
                        if (iVar1 != *(int*)(lVar4 + 4))
                            goto LAB_100be0110;
                    }
                    this_03 = (Singleton<RenderDevice>*)this_00;
                    uVar5 = this_00->size();
                    bVar3 = uVar8 < uVar5;
                    uVar5 = uVar8;
                    uVar8 = (ulong)((int)uVar8 + 1);
                } while (bVar3);
            }
            this_02 = (RenderDevice*)this_03->Instance();
            local_128 = this;
            local_120 = param_2;
            local_11c = param_3;
            local_118 = param_5;
            eastl::fixed_vector<Texture*, 2ul, true, eastl::allocator>::fixed_vector(local_110, (fixed_vector*)param_1);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                RenderTargets::BindColourTargetTextures(
                    eastl::fixed_vector<Texture*, 2ul, true, eastl::allocator> const&, int, int, CubeFace)::__11,
                void>((function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                      (__11*)&local_128);
            this_02->RunOnRenderThread(&local_d8);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
            BindColourTargetTextures(eastl::fixed_vector<Texture*, 2ul, true, eastl::allocator> const&, int, int,
                                     CubeFace)::$_11::~__11((__11*)&local_128);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return CONCAT71((int7)((ulong) * (long*)PTR____stack_chk_guard_100ee9d98 >> 8), 1);
    }

    // 0x100be02b0, 96 bytes, placed by class name and debug map
    // RenderTargets::SetNeedsInvalidated() const
    void RenderTargets::SetNeedsInvalidated() {
        RenderTargets* local_20;
        scoped_lock<std::mutex> local_18[8];

        if ((field_216 & 1) == 0) {
            std::scoped_lock<std::mutex>::scoped_lock(local_18, (mutex*)&m_renderTargetsToInvalidateMutex);
            local_20 = this;
            eastl::rbtree<RenderTargets_const*, RenderTargets_const*, eastl::less<RenderTargets_const*>,
                          eastl::fixed_node_allocator<40ul, 64ul, 8ul, 0ul, true, eastl::allocator>,
                          eastl::use_self<RenderTargets_const*>, false, true>::insert<RenderTargets_const*,
                                                                                      void>(
                (rbtree<RenderTargets_const*, RenderTargets_const*, eastl::less<RenderTargets_const*>,
                        eastl::fixed_node_allocator<40ul, 64ul, 8ul, 0ul, true, eastl::allocator>,
                        eastl::use_self<RenderTargets_const*>, false, true>*)&m_renderTargetsToInvalidate,
                &local_20);
            std::scoped_lock<std::mutex>::~scoped_lock(local_18);
        }
    }

    // 0x100be0430, 64 bytes, placed by class name and debug map
    // RenderTargets::SafeReset(shared_ptr<RenderTargets>&)
    void RenderTargets::SafeReset(shared_ptr* param_1) {
        RenderTargets* this;

        if (shared_ptr::operator_cast_to_bool(param_1)) {
            this = (RenderTargets*)shared_ptr<RenderTargets>::operator->((shared_ptr<RenderTargets>*)param_1);
            Destroy(this);
        }
        shared_ptr<RenderTargets>::reset();
    }

    // 0x100be0680, 336 bytes, placed by class name and debug map
    // RenderTargets::ReleaseNativeResources()
    void RenderTargets::ReleaseNativeResources() {
        code* pcVar1;
        char cVar2;
        uint uVar3;
        uint uVar4;
        RenderDevice* pRVar5;
        RenderContext* this_00;
        ImmediateRenderContext* this_01;
        long lVar6;
        RenderTargets* pRVar7;
        Singleton<RenderDevice>* this_02;
        char* this_03;
        undefined1* this_04;
        undefined4 local_2c;

        this_04 = &field_380;
        this_02 = (Singleton<RenderDevice>*)this_04;
        uVar3 = this_04->operator_cast_to_unsigned_int();
        if (uVar3 != 0) {
            pRVar5 = (RenderDevice*)this_02->Instance();
            cVar2 = pRVar5->IsRenderThread();
            pcVar1 = ___glewIsFramebuffer;
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("RenderDevice::Instance().IsRenderThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/OGL/RenderTargets_OGL.cpp",
                          845, (char*)0);
            }
            uVar3 = this_04->operator_cast_to_unsigned_int();
            cVar2 = (*pcVar1)(uVar3);
            this_03 = "glIsFramebuffer";
            CheckGlErrorInternal("glIsFramebuffer",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "rendertargets/OGL/RenderTargets_OGL.cpp",
                                 846);
            if (cVar2 != '\0') {
                pRVar5 = (RenderDevice*)this_03->Instance();
                this_00 = (RenderContext*)pRVar5->GetPrimaryRenderContext();
                this_01 = (ImmediateRenderContext*)this_00->GetImmediateContext();
                lVar6 = this_01->GetStateCache();
                uVar3 = *(uint*)(lVar6 + 8);
                uVar4 = this_04->operator_cast_to_unsigned_int();
                if (uVar3 == uVar4) {
                    uVar3 = this_04->operator_cast_to_unsigned_int();
                    pRVar7 = (RenderTargets*)this_00->GetBackBuffer();
                    uVar4 = GetNativeFBOId(pRVar7);
                    if (uVar3 != uVar4) {
                        pRVar7 = (RenderTargets*)this_00->GetBackBuffer();
                        this_00->SetRenderTargets(pRVar7);
                    }
                }
                local_2c = 0;
                local_2c = std::__atomic_base<unsigned int, false>::exchange(this_04, 0);
                (*___glewDeleteFramebuffers)(1, &local_2c);
                CheckGlErrorInternal("glDeleteFramebuffers",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "rendertargets/OGL/RenderTargets_OGL.cpp",
                                     858);
            }
        }
    }

    // 0x100be08f0, 464 bytes, placed by class name and debug map
    // RenderTargets::BindDepthStencilTargetTexture(Texture*)
    undefined8 RenderTargets::BindDepthStencilTargetTexture(Texture* param_1) {
        undefined1* this_00;
        int iVar1;
        char cVar3;
        long* plVar4;
        int* piVar5;
        undefined8* puVar6;
        long lVar7;
        RenderDevice* this_01;
        __12 local_e8;
        function local_d8;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_1 == (Texture*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pDepthStencilTargetTexture != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      654, (char*)0);
        }
        if ((&field_208)->operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pOwnedDepthStencilTargetTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      655,
                      "Setting of external depth resources only supported when RenderTargets is created will no depth "
                      "resources");
        }
        this_00 = &field_24;
        cVar3 = this_00->empty();
        if (cVar3 == '\0') {
            plVar4 = (long*)eastl::
                vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                        this_00,
                    0);
            if (*plVar4 != 0) {
                piVar5 = (int*)param_1->second();
                iVar1 = *piVar5;
                puVar6 = (undefined8*)
                    eastl::vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                            this_00,
                        0);
                piVar5 = (int*)(*puVar6)->second();
                if (iVar1 == *piVar5) {
                    lVar7 = param_1->second();
                    iVar1 = *(int*)(lVar7 + 4);
                    puVar6 = (undefined8*)eastl::vector<
                        Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                            this_00,
                        0);
                    lVar7 = (*puVar6)->second();
                    if (iVar1 == *(int*)(lVar7 + 4))
                        goto LAB_100be09f5;
                }
                /* WARNING: Subroutine does not return */
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
            /* WARNING: Subroutine does not return */
            LogAssert("(m_flags & IMMUTABLE_RENDER_TARGET) == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      660,
                      "Setting of external depth resources is not supported on RenderTargets created via "
                      "RenderTargetsManager. Use a standalone RenderTargets object instead.");
        }
        KeepAlive(this);
        if (field_192 != param_1) {
            field_192 = param_1;
            this_01 = (RenderDevice*)((RenderTargets*)this)->Instance();
            local_e8.field_0 = this;
            local_e8.field_8 = param_1;
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                RenderTargets::BindDepthStencilTargetTexture(Texture*)::__12, void>(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8, &local_e8);
            this_01->RunOnRenderThread(&local_d8);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return CONCAT71((int7)((ulong) * (long*)PTR____stack_chk_guard_100ee9d98 >> 8), 1);
    }

    // 0x100be0ac0, 48 bytes, placed by class name and debug map
    // RenderTargets::GetDepthStencilTargetTexture()
    undefined8 RenderTargets::GetDepthStencilTargetTexture() {
        byte bVar1;
        RenderDevice* this_00;

        KeepAlive(this);
        this_00 = (RenderDevice*)((RenderTargets*)this)->Instance();
        bVar1 = this_00->IsRenderThread();
        return *(undefined8*)(field_4 + (ulong)bVar1 * 8 + 188);
    }

    // 0x100be0af0, 64 bytes, placed by class name and debug map
    // RenderTargets::GetColourTargetTextures()
    undefined1* RenderTargets::GetColourTargetTextures() {
        char cVar1;
        RenderDevice* this_00;
        undefined1* puVar2;

        KeepAlive(this);
        this_00 = (RenderDevice*)((RenderTargets*)this)->Instance();
        cVar1 = this_00->IsRenderThread();
        puVar2 = &field_24;
        if (cVar1 != '\0') {
            puVar2 = &field_80;
        }
        return puVar2;
    }

    // 0x100be0b30, 64 bytes, placed by class name and debug map
    // RenderTargets::GetColourTargetTextures() const
    undefined1* RenderTargets::GetColourTargetTextures() {
        char cVar1;
        RenderDevice* this_00;
        undefined1* puVar2;

        KeepAlive(this);
        this_00 = (RenderDevice*)((RenderTargets*)this)->Instance();
        cVar1 = this_00->IsRenderThread();
        puVar2 = &field_24;
        if (cVar1 != '\0') {
            puVar2 = &field_80;
        }
        return puVar2;
    }

    // 0x100be2370, 2112 bytes, placed by __FILE__ string
    // RenderTargets::Create(char const*, TextureType, std::array<Texture::Desc, 2ul> const&, int, Texture::Desc const&, unsigned int)
    /* RenderTargets::Create(char const*, TextureType,
   std::array<Texture::Desc, 2ul> const&, int, Texture::Desc const&,
   unsigned int) */

    bool RenderTargets::Create(char* param_1, int param_3, array<Texture::Desc, 2ul>* param_4, int param_5,
                               Desc* param_6, uint param_7) {
        undefined1* this_00;
        Texture* this_01;
        char cVar1;
        byte bVar3;
        int iVar4;
        int iVar5;
        Desc* pDVar6;
        undefined8 uVar7;
        TextureCube* this_02;
        Texture2DArray* this_03;
        Texture2D* pTVar8;
        Texture3D* this_04;
        undefined8 uVar9;
        undefined8 uVar10;
        Texture* pTVar11;
        RenderDevice* pRVar12;
        undefined1* this_05;
        Singleton<RenderDevice>* this_06;
        undefined8 local_1b0;
        undefined8 local_1a8;
        Texture* local_1a0;
        byte local_191;
        Texture* local_190;
        Texture* local_188;
        function local_e8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_05 = &field_24;
        cVar1 = this_05->empty();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_mainThreadColourTargetTextures.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      280, (char*)0);
        }
        if (field_192 != (Texture*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pMainThreadDepthStencilTargetTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      281, (char*)0);
        }
        this_00 = &field_208;
        if (this_00->operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pOwnedDepthStencilTargetTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      282, (char*)0);
        }
        cVar1 = (&field_136)->empty();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_ownedColourTargetTextures.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      283, (char*)0);
        }
        this_06 = (Singleton<RenderDevice>*)&field_80;
        cVar1 = this_06->empty();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_renderThreadColourTargetTextures.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      284, (char*)0);
        }
        if (field_200 != (Texture*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pRenderThreadDepthStencilTargetTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      285, (char*)0);
        }
        local_191 = 1;
        if ((field_216 & 4) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("(m_flags & IMMUTABLE_RENDER_TARGET) == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      288, (char*)0);
        }
        field_216 = param_7;
        local_1a0 = (Texture*)this;
        eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(
            (fixed_string<char, 16, true, eastl::allocator>*)&field_224, param_1);
        if (param_5 < 1) {
            iVar4 = GetFormatDepthBits(param_6->field_12);
            iVar5 = GetFormatStencilBits(param_6->field_12);
            this_01 = local_1a0;
            if (iVar5 != 0 || iVar4 != 0) {
                *(int*)&local_1a0->field_328 = param_6->field_0;
                *(int*)&local_1a0->field_332 = param_6->field_4;
                new (&local_e8) eastl::fixed_string<char, 128, true, eastl::allocator>();
                uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true, eastl::allocator>>::
                    sprintf((char*)&local_e8, "%s//DepthStencilTargetTexture", uVar7);
                local_1b0 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                std::make_unique<Texture2D, char const*>((char**)&local_190);
                std::unique_ptr<Texture, std::default_delete<Texture>>::operator=(
                    (unique_ptr<Texture, std::default_delete<Texture>>*)this_00, (unique_ptr*)&local_190);
                local_190.~unique_ptr();
                pTVar8 = (Texture2D*)this_00->get();
                bVar3 = pTVar8->Create(param_6, 0, 0);
                local_191 = local_191 & bVar3;
                /* WARNING: Subroutine does not return */
                local_e8.~fixed_string();
            }
            if (local_191 == 0) {
                uVar7 = logger::default_logger();
                GetInfoString((RenderTargets*)&local_e8);
                uVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(uVar7, 0, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "rendertargets/OGL/RenderTargets_OGL.cpp",
                                    379, "Failed to create depth stencil target for %s", uVar9);
                /* WARNING: Subroutine does not return */
                local_e8.~fixed_string();
            }
            pTVar11 = (Texture*)this_00->get();
            *(Texture**)&this_01->field_192 = pTVar11;
            eastl::fixed_vector<Texture*, 2ul, true, eastl::allocator>::operator=(
                (fixed_vector<Texture*, 2ul, true, eastl::allocator>*)this_06, (fixed_vector*)this_05);
            *(Texture**)&this_01->field_200 = *(Texture**)&this_01->field_192;
            if ((param_7 & 8) == 0) {
                pTVar11 = this_01;
                KeepAlive((RenderTargets*)this_01);
                pRVar12 = (RenderDevice*)pTVar11->Instance();
                local_190 = this_01;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    RenderTargets::Create(char const*, TextureType, std::array<Texture::Desc, 2ul> const&, int,
                                          Texture::Desc_const&, unsigned int)::__7,
                    void>((function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_e8,
                          (__7*)&local_190);
                pRVar12->RunOnRenderThread(&local_e8);
            } else {
                pRVar12 = (RenderDevice*)this_06->Instance();
                local_190 = (Texture*)&local_191;
                local_188 = this_01;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    RenderTargets::Create(char const*, TextureType, std::array<Texture::Desc, 2ul> const&, int,
                                          Texture::Desc_const&, unsigned int)::__6,
                    void>((function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_e8,
                          (__6*)&local_190);
                pRVar12->RunSynchronouslyOnRenderThread(&local_e8, true);
            }
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_e8);
            if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                /* WARNING: Subroutine does not return */
                ___stack_chk_fail();
            }
            return local_191 != 0;
        }
        pDVar6 = (Desc*)std::array<Texture::Desc, 2ul>::operator[](param_4, 0);
        std::unique_ptr<Texture, std::default_delete<Texture>>::unique_ptr<true, void>(
            (unique_ptr<Texture, std::default_delete<Texture>>*)&local_1b0);
        new (&local_e8) eastl::fixed_string<char, 128, true, eastl::allocator>();
        uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)&local_e8, "%s//ColourTargetTexture%d", uVar7, 0);
        *(int*)&local_1a0->field_328 = pDVar6->field_0;
        *(int*)&local_1a0->field_332 = pDVar6->field_4;
        if (param_3 < 35866) {
            if (param_3 != 3553) {
                if (param_3 == 32879) {
                    local_1a8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    std::make_unique<Texture3D, char const*>((char**)&local_190);
                    std::unique_ptr<Texture, std::default_delete<Texture>>::operator=(
                        (unique_ptr<Texture, std::default_delete<Texture>>*)&local_1b0, (unique_ptr*)&local_190);
                    local_190.~unique_ptr();
                    this_04 = (Texture3D*)local_1b0.get();
                    bVar3 = this_04->Create(pDVar6, 0);
                } else {
                    if (param_3 != 34067) {
                    LAB_100be2857:
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "render/rendertargets/OGL/RenderTargets_OGL.cpp",
                                        336, "RenderTargetsManager attempting to create an unsupported texture type!");
                    }
                    local_1a8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    std::make_unique<TextureCube, char const*>((char**)&local_190);
                    std::unique_ptr<Texture, std::default_delete<Texture>>::operator=(
                        (unique_ptr<Texture, std::default_delete<Texture>>*)&local_1b0, (unique_ptr*)&local_190);
                    local_190.~unique_ptr();
                    this_02 = (TextureCube*)local_1b0.get();
                    bVar3 = this_02->Create(pDVar6);
                }
                goto LAB_100be2740;
            }
        LAB_100be26b0:
            local_1a8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            std::make_unique<Texture2D, char const*>((char**)&local_190);
            std::unique_ptr<Texture, std::default_delete<Texture>>::operator=(
                (unique_ptr<Texture, std::default_delete<Texture>>*)&local_1b0, (unique_ptr*)&local_190);
            local_190.~unique_ptr();
            pTVar8 = (Texture2D*)local_1b0.get();
            bVar3 = pTVar8->Create(pDVar6, 0, 0);
        } else {
            if (param_3 != 35866) {
                if (param_3 == 37120)
                    goto LAB_100be26b0;
                if (param_3 != 37122)
                    goto LAB_100be2857;
            }
            local_1a8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            std::make_unique<Texture2DArray, char const*>((char**)&local_190);
            std::unique_ptr<Texture, std::default_delete<Texture>>::operator=(
                (unique_ptr<Texture, std::default_delete<Texture>>*)&local_1b0, (unique_ptr*)&local_190);
            local_190.~unique_ptr();
            this_03 = (Texture2DArray*)local_1b0.get();
            bVar3 = this_03->Create(pDVar6, 0);
        }
    LAB_100be2740:
        local_191 = local_191 & bVar3;
        if (local_191 == 0) {
            uVar7 = logger::default_logger();
            uVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            GetInfoString((RenderTargets*)&local_190);
            uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar7, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "rendertargets/OGL/RenderTargets_OGL.cpp",
                                347, "Failed to create colour target %s for %s", uVar9, uVar10);
            /* WARNING: Subroutine does not return */
            local_190.~fixed_string();
        }
        local_190 = (Texture*)local_1b0.get();
        this_05->push_back(&local_190);
        eastl::vector<std::unique_ptr<Texture, std::default_delete<Texture>>,
                      eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::
            emplace_back<std::unique_ptr<Texture, std::default_delete<Texture>>>(
                (vector<std::unique_ptr<Texture, std::default_delete<Texture>>,
                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)&field_136,
                (unique_ptr*)&local_1b0);
        /* WARNING: Subroutine does not return */
        local_e8.~fixed_string();
    }

    // 0x100be6bf0, 832 bytes, placed by __FILE__ string
    // AttachColourTargetToFBO(Texture const*, int, int, int, CubeFace)
    void AttachColourTargetToFBO(TextureRenderBuffer* param_1, int param_2, int param_3, undefined4 param_4,
                                 int param_5) {
        undefined4 uVar1;
        code* pcVar2;
        code* pcVar3;
        code* pcVar4;
        code* pcVar5;
        char cVar6;
        int iVar7;
        undefined4 uVar8;
        undefined4 uVar9;
        RenderDevice* this;
        undefined4* puVar10;
        char* pcVar11;

        if (param_1 == (TextureRenderBuffer*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      32, (char*)0);
        }
        cVar6 = param_1->IsCreated();
        if (cVar6 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("pTexture->IsCreated()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      33, (char*)0);
        }
        this = (RenderDevice*)param_1->Instance();
        cVar6 = IsRenderThread();
        if (cVar6 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      34, (char*)0);
        }
        iVar7 = param_1->GetMaxLineWidth();
        if (iVar7 == 37120) {
        LAB_100be6ca7:
            if (param_3 != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("targetMipLevel == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/OGL/RenderTargets_OGL.cpp",
                          46, (char*)0);
            }
            param_3 = 0;
        } else {
            iVar7 = param_1->GetMaxLineWidth();
            if (iVar7 == 37122)
                goto LAB_100be6ca7;
        }
        iVar7 = param_1->GetMaxLineWidth();
        pcVar5 = ___glewFramebufferTextureLayer;
        pcVar4 = ___glewFramebufferTexture3D;
        pcVar3 = ___glewFramebufferTexture2D;
        pcVar2 = ___glewFramebufferRenderbuffer;
        if (iVar7 < 35866) {
            if (iVar7 < 34037) {
                if (iVar7 != 3553) {
                    if (iVar7 != 32879)
                        goto LAB_100be6f0a;
                    puVar10 = (undefined4*)std::array<unsigned int, 2ul>::operator[]((long)param_2);
                    uVar1 = *puVar10;
                    uVar8 = param_1->GetMaxLineWidth();
                    uVar9 = param_1->GetNativeTextureId();
                    (*pcVar4)(36160, uVar1, uVar8, uVar9, param_3, param_4);
                    pcVar11 = "glFramebufferTexture3D";
                    iVar7 = 101;
                    goto LAB_100be6ef4;
                }
            } else if (iVar7 != 34037) {
                if (iVar7 != 34067)
                    goto LAB_100be6f0a;
                if (param_5 == -1) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("targetCubeMapFace != CubeFace::CUBEFACE_UNKNOWN",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "rendertargets/OGL/RenderTargets_OGL.cpp",
                              80, (char*)0);
                }
                puVar10 = (undefined4*)std::array<unsigned int, 2ul>::operator[]((long)param_2);
                uVar1 = *puVar10;
                uVar8 = param_1->GetNativeTextureId();
                (*pcVar3)(36160, uVar1, param_5, uVar8, param_3);
                pcVar11 = "glFramebufferTexture2D";
                iVar7 = 89;
                goto LAB_100be6ef4;
            }
        LAB_100be6e61:
            puVar10 = (undefined4*)std::array<unsigned int, 2ul>::operator[]((long)param_2);
            uVar1 = *puVar10;
            uVar8 = param_1->GetMaxLineWidth();
            uVar9 = param_1->GetNativeTextureId();
            (*pcVar3)(36160, uVar1, uVar8, uVar9, param_3);
            pcVar11 = "glFramebufferTexture2D";
            iVar7 = 63;
        } else {
            if (iVar7 < 37120) {
                if (iVar7 != 35866) {
                    if (iVar7 == 36161) {
                        puVar10 = (undefined4*)std::array<unsigned int, 2ul>::operator[]((long)param_2);
                        uVar1 = *puVar10;
                        uVar8 = param_1->GetMaxLineWidth();
                        uVar9 = param_1->GetNativeRenderBufferId();
                        (*pcVar2)(36160, uVar1, uVar8, uVar9);
                        pcVar11 = "glFramebufferRenderbuffer";
                        iVar7 = 111;
                        goto LAB_100be6ef4;
                    }
                LAB_100be6f0a:
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "rendertargets/OGL/RenderTargets_OGL.cpp",
                                    115, (char*)0);
                }
            } else if (iVar7 != 37122) {
                if (iVar7 != 37120)
                    goto LAB_100be6f0a;
                goto LAB_100be6e61;
            }
            puVar10 = (undefined4*)std::array<unsigned int, 2ul>::operator[]((long)param_2);
            uVar1 = *puVar10;
            uVar8 = param_1->GetNativeTextureId();
            (*pcVar5)(36160, uVar1, uVar8, param_3, param_4);
            pcVar11 = "glFramebufferTextureLayer";
            iVar7 = 75;
        }
    LAB_100be6ef4:
        CheckGlErrorInternal(pcVar11,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "rendertargets/OGL/RenderTargets_OGL.cpp",
                             iVar7);
    }

    // 0x100be6f60, 480 bytes, placed by __FILE__ string
    // AttachDepthStencilToFBO(Texture*, bool)
    void AttachDepthStencilToFBO(Texture* param_1, bool param_2) {
        code* pcVar1;
        code* pcVar2;
        char cVar3;
        int iVar4;
        undefined4 uVar5;
        undefined4 uVar6;
        RenderDevice* this;
        char* pcVar7;

        if (param_1 == (Texture*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pDepthStencilTargetTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      123, (char*)0);
        }
        cVar3 = param_1->IsCreated();
        if (cVar3 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("pDepthStencilTargetTexture->IsCreated()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      124, (char*)0);
        }
        this = (RenderDevice*)param_1->Instance();
        cVar3 = IsRenderThread();
        if (cVar3 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      125, (char*)0);
        }
        iVar4 = param_1->GetMaxLineWidth();
        pcVar2 = ___glewFramebufferTexture2D;
        pcVar1 = ___glewFramebufferRenderbuffer;
        if (iVar4 == 36161) {
            uVar5 = param_1->GetMaxLineWidth();
            uVar6 = param_1->GetNativeRenderBufferId();
            (*pcVar1)(36160, 36096, uVar5, uVar6);
            CheckGlErrorInternal("glFramebufferRenderbuffer",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "rendertargets/OGL/RenderTargets_OGL.cpp",
                                 134);
            pcVar1 = ___glewFramebufferRenderbuffer;
            if (!param_2) {
                return;
            }
            uVar5 = param_1->GetMaxLineWidth();
            uVar6 = param_1->GetNativeRenderBufferId();
            (*pcVar1)(36160, 36128, uVar5, uVar6);
            pcVar7 = "glFramebufferRenderbuffer";
            iVar4 = 143;
        } else {
            uVar5 = param_1->GetMaxLineWidth();
            uVar6 = param_1->GetNativeTextureId();
            (*pcVar2)(36160, 36096, uVar5, uVar6, 0);
            CheckGlErrorInternal("glFramebufferTexture2D",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "rendertargets/OGL/RenderTargets_OGL.cpp",
                                 154);
            pcVar1 = ___glewFramebufferTexture2D;
            if (!param_2) {
                return;
            }
            uVar5 = param_1->GetMaxLineWidth();
            uVar6 = param_1->GetNativeTextureId();
            (*pcVar1)(36160, 36128, uVar5, uVar6, 0);
            pcVar7 = "glFramebufferTexture2D";
            iVar4 = 164;
        }
        CheckGlErrorInternal(pcVar7,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "rendertargets/OGL/RenderTargets_OGL.cpp",
                             iVar4);
    }

    // 0x100be7140, 544 bytes, placed by __FILE__ string
    // IsFBOValid()
    bool IsFBOValid() {
        int iVar1;
        undefined8 in_RAX;
        undefined8 uVar2;
        undefined8 uVar3;
        char* pcVar4;
        undefined4 uVar6;
        undefined8 uVar5;

        uVar6 = (undefined4)((ulong)in_RAX >> 32);
        iVar1 = (*___glewCheckFramebufferStatus)(36160);
        CheckGlErrorInternal("glCheckFramebufferStatus",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "rendertargets/OGL/RenderTargets_OGL.cpp",
                             172);
        if (iVar1 == 36053)
            goto switchD_100be71ca_caseD_2;
        uVar2 = logger::default_logger();
        uVar5 = CONCAT44(uVar6, iVar1);
        logger::Logger::Log(uVar2, 0, 3,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                            "rendertargets/OGL/RenderTargets_OGL.cpp",
                            175, "FBO is incomplete with status: %u", uVar5);
        if (iVar1 < 36182) {
            switch (iVar1 + -36054) {
            case 0:
                uVar2 = logger::default_logger();
                pcVar4 = "\tGL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT";
                uVar3 = 182;
                break;
            case 1:
                uVar2 = logger::default_logger();
                pcVar4 = "\tGL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT";
                uVar3 = 185;
                break;
            case 2:
            case 3:
            case 4:
                goto switchD_100be71ca_caseD_2;
            case 5:
                uVar2 = logger::default_logger();
                pcVar4 = "\tGL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER";
                uVar3 = 188;
                break;
            case 6:
                uVar2 = logger::default_logger();
                pcVar4 = "\tGL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER";
                uVar3 = 191;
                break;
            case 7:
                uVar2 = logger::default_logger();
                pcVar4 = "\tGL_FRAMEBUFFER_UNSUPPORTED";
                uVar3 = 194;
                break;
            default:
                if (iVar1 != 33305)
                    goto switchD_100be71ca_caseD_2;
                uVar2 = logger::default_logger();
                pcVar4 = "\tGL_FRAMEBUFFER_UNDEFINED";
                uVar3 = 179;
            }
        } else if (iVar1 == 36182) {
            uVar2 = logger::default_logger();
            pcVar4 = "\tGL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE";
            uVar3 = 197;
        } else {
            if (iVar1 != 36264)
                goto switchD_100be71ca_caseD_2;
            uVar2 = logger::default_logger();
            pcVar4 = "\tGL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS";
            uVar3 = 200;
        }
        logger::Logger::Log(uVar2, 0, 3,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                            "rendertargets/OGL/RenderTargets_OGL.cpp",
                            uVar3, pcVar4, uVar5);
    switchD_100be71ca_caseD_2:
        return iVar1 == 36053;
    }

    // 0x100be7360, 176 bytes, placed by __FILE__ string
    // RenderTargets::RestorePreviousFrameBuffer(RenderContext&) const
    void RenderTargets::RestorePreviousFrameBuffer(RenderContext* param_1) {
        uint uVar2;
        uint uVar3;
        ImmediateRenderContext* this_00;
        long lVar4;

        if (param_1->IsContextThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("renderContext.IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      213, (char*)0);
        }
        this_00 = (ImmediateRenderContext*)param_1->GetImmediateContext();
        lVar4 = this_00->GetStateCache();
        uVar3 = *(uint*)(lVar4 + 8);
        uVar2 = (&field_380)->operator_cast_to_unsigned_int();
        if ((uVar3 == uVar2) && (uVar3 = (&field_380)->operator_cast_to_unsigned_int(), uVar3 != 0)) {
            return;
        }
        (*___glewBindFramebuffer)(36160, *(undefined4*)(lVar4 + 8));
        CheckGlErrorInternal("glBindFramebuffer",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "rendertargets/OGL/RenderTargets_OGL.cpp",
                             219);
    }

    // 0x100be7420, 208 bytes, placed by __FILE__ string
    // RenderTargets::BindFrameBufferWithoutStateCache(RenderContext&) const
    void RenderTargets::BindFrameBufferWithoutStateCache(RenderContext* param_1) {
        code* pcVar1;
        uint uVar3;
        uint uVar4;
        ImmediateRenderContext* this_00;
        long lVar5;
        undefined1* this_01;

        this_01 = &field_380;
        uVar3 = this_01->operator_cast_to_unsigned_int();
        if (uVar3 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_FBO != 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      225, (char*)0);
        }
        if (param_1->IsContextThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("renderContext.IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      226, (char*)0);
        }
        this_00 = (ImmediateRenderContext*)param_1->GetImmediateContext();
        lVar5 = this_00->GetStateCache();
        uVar3 = *(uint*)(lVar5 + 8);
        uVar4 = this_01->operator_cast_to_unsigned_int();
        pcVar1 = ___glewBindFramebuffer;
        if (uVar3 != uVar4) {
            uVar3 = this_01->operator_cast_to_unsigned_int();
            (*pcVar1)(36160, uVar3);
            CheckGlErrorInternal("glBindFramebuffer",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "rendertargets/OGL/RenderTargets_OGL.cpp",
                                 231);
        }
    }

    // 0x100be74f0, 416 bytes, placed by __FILE__ string
    // RenderTargets::Create(char const*, unsigned int)
    undefined1 RenderTargets::Create(char* param_1, uint param_2) {
        char cVar1;
        RenderDevice* pRVar2;
        RenderTargets* pRVar3;
        __4 local_e0;
        undefined1 local_c9;
        function local_c8;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar1 = (&field_24)->empty();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_mainThreadColourTargetTextures.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      239, (char*)0);
        }
        if (field_192 != (Texture*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pMainThreadDepthStencilTargetTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      240, (char*)0);
        }
        if ((field_216 & 4) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("(m_flags & IMMUTABLE_RENDER_TARGET) == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      242, (char*)0);
        }
        field_216 = param_2;
        eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(
            (fixed_string<char, 16, true, eastl::allocator>*)&field_224, param_1);
        local_c9 = 1;
        pRVar3 = this;
        cVar1 = IsBackBuffer(this);
        if (cVar1 == '\0') {
            if ((param_2 & 8) == 0) {
                pRVar3 = this;
                KeepAlive(this);
                pRVar2 = (RenderDevice*)pRVar3->Instance();
                local_e0.field_0 = (undefined1*)this;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    RenderTargets::Create(char const*, unsigned int)::__5, void>(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8,
                    (__5*)&local_e0);
                pRVar2->RunOnRenderThread(&local_c8);
            } else {
                pRVar2 = (RenderDevice*)pRVar3->Instance();
                local_e0.field_0 = &local_c9;
                local_e0.field_8 = this;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    RenderTargets::Create(char const*, unsigned int)::__4, void>(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, &local_e0);
                pRVar2->RunSynchronouslyOnRenderThread(&local_c8, true);
            }
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return local_c9;
    }

    // 0x100be7a90, 1040 bytes, placed by __FILE__ string
    // RenderTargets::CreateInternal(RenderContext&)
    undefined4 RenderTargets::CreateInternal(RenderContext* param_1) {
        undefined1* this_00;
        undefined1* this_01;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_02;
        Texture* this_03;
        char cVar1;
        byte bVar2;
        bool bVar3;
        uint uVar4;
        RenderDevice* this_04;
        long lVar5;
        undefined8 uVar6;
        ulong uVar7;
        undefined8* puVar8;
        int* piVar9;
        undefined8 uVar10;
        undefined4 uVar11;
        ulong uVar12;
        undefined4 local_ec;
        AutoSingleton<ShaderThreadPoolSingleton> local_e8[7];
        char local_e1;
        fixed_string<char, 40, true, eastl::allocator> local_e0[168];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_04 = (RenderDevice*)Instance();
        cVar1 = this_04->IsRenderThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      415, (char*)0);
        }
        this_01 = &field_380;
        uVar4 = this_01->operator_cast_to_unsigned_int();
        if (uVar4 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_FBO == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      416, (char*)0);
        }
        uVar4 = this_01->operator_cast_to_unsigned_int();
        if (uVar4 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_FBO == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      420, (char*)0);
        }
        local_e8->~AutoSingleton("Render_Targets");
        local_ec = 0;
        (*___glewGenFramebuffers)(1, &local_ec);
        CheckGlErrorInternal("glGenFramebuffers",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "rendertargets/OGL/RenderTargets_OGL.cpp",
                             426);
        std::__atomic_base<unsigned int, false>::exchange(this_01);
        this_00 = &field_80;
        cVar1 = this_00->empty();
        local_e1 = true;
        if (cVar1 != '\0') {
            local_e1 = field_200 != (Texture*)0;
        }
        if ((bool)local_e1 != false) {
            if ((field_216 & 8) == 0) {
                param_1->SetRenderTargets(this);
            } else {
                BindFrameBufferWithoutStateCache(this, param_1);
            }
        }
        lVar5 = this_00->size();
        uVar10 = CONCAT71((int7)((ulong)this_01 >> 8), 1);
        if (lVar5 != 0) {
            uVar12 = 0;
            do {
                puVar8 = (undefined8*)
                    eastl::vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                            this_00,
                        uVar12);
                this_02 =
                    (compressed_pair_imp<
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)*puVar8;
                if (this_02 ==
                    (compressed_pair_imp<
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("pTexture != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "rendertargets/OGL/RenderTargets_OGL.cpp",
                              446, (char*)0);
                }
                piVar9 = (int*)eastl::compressed_pair_imp<
                    eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_02);
                if ((*piVar9 == 0) ||
                    (lVar5 = eastl::compressed_pair_imp<
                         eastl::basic_string<
                             char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                         eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>,
                         0>::second(this_02),
                     *(int*)(lVar5 + 4) == 0)) {
                    uVar6 = logger::default_logger();
                    logger::Logger::Log(uVar6, 0, 3,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "render/rendertargets/OGL/RenderTargets_OGL.cpp",
                                        447, "Attempting to create zero-sized render target");
                }
                AttachColourTargetToFBO(this_02, uVar12, 0, 0, 34069);
                bVar2 = IsFBOValid();
                uVar10 = CONCAT71((int7)((ulong)uVar10 >> 8), (byte)uVar10 & bVar2);
                uVar12 = (ulong)((int)uVar12 + 1);
                uVar7 = this_00->size();
            } while (uVar12 < uVar7);
        }
        uVar11 = (undefined4)uVar10;
        if (field_200 != (Texture*)0) {
            cVar1 = this_00->empty();
            if (cVar1 != '\0') {
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
                uVar6 = logger::default_logger();
                logger::Logger::Log(uVar6, 0, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "rendertargets/OGL/RenderTargets_OGL.cpp",
                                    466, "Attempting to create zero-sized render target");
            }
            this_03 = field_200;
            lVar5 = this_03->second();
            bVar3 = (bool)HasStencilBits(*(undefined4*)(lVar5 + 12));
            AttachDepthStencilToFBO(this_03, bVar3);
            bVar2 = IsFBOValid();
            uVar11 = (undefined4)CONCAT71((int7)((ulong)uVar10 >> 8), (byte)uVar10 & bVar2);
        }
        if ((local_e1 != '\0') && ((field_216 & 8) != 0)) {
            RestorePreviousFrameBuffer(this, param_1);
        }
        if ((char)uVar11 == '\0') {
            uVar10 = logger::default_logger();
            GetInfoString((RenderTargets*)local_e0);
            uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar10, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "rendertargets/OGL/RenderTargets_OGL.cpp",
                                481, "Failed to create render target %s", uVar6);
            /* WARNING: Subroutine does not return */
            eastl::fixed_string<char, 40, true, eastl::allocator>::~fixed_string(local_e0);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar11;
    }

    // 0x100be7eb0, 272 bytes, placed by class name and neighbouring functions
    // RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)
    void RenderTargets::SetEnabledRenderTargets(ulong param_1, ulong* param_2) {
        RenderDevice* this_00;
        Singleton<RenderDevice>* this_01;
        __8 local_110;
        function local_f8;
        vector local_58[40];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_vector<unsigned long, 2ul, false, eastl::dummy_allocator>::fixed_vector();
        eastl::vector<unsigned long, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, false, eastl::dummy_allocator>>::
            assign<unsigned long const*>((ulong*)local_58, param_2);
        this_01 = (Singleton<RenderDevice>*)&field_336;
        if (eastl::operator!=(local_58, (vector*)this_01)) {
            eastl::fixed_vector<unsigned long, 2ul, false, eastl::dummy_allocator>::operator=(
                (fixed_vector<unsigned long, 2ul, false, eastl::dummy_allocator>*)this_01, (fixed_vector*)local_58);
            this_00 = (RenderDevice*)this_01->Instance();
            local_110.field_0 = this;
            local_110.field_8 = param_1;
            local_110.field_16 = (long)param_2;
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::__8, void>(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_f8, &local_110);
            this_00->RunOnRenderThread(&local_f8);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_f8);
        }
        local_58->~fixed_vector();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100be80a0, 192 bytes, placed by class name and neighbouring functions
    // RenderTargets::SetTargetCubeMapFace(int, CubeFace)
    void RenderTargets::SetTargetCubeMapFace(int param_1, undefined4 param_3) {
        RenderDevice* this_00;
        __9 local_e8;
        function local_d8;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        KeepAlive(this);
        this_00 = (RenderDevice*)((RenderTargets*)this)->Instance();
        local_e8.field_0 = this;
        local_e8.field_8 = param_1;
        local_e8.field_12 = param_3;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            RenderTargets::SetTargetCubeMapFace(int, CubeFace)::__9, void>(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8, &local_e8);
        this_00->RunOnRenderThread(&local_d8);
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
        field_376 = param_3;
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100be8170, 208 bytes, placed by class name and neighbouring functions
    // RenderTargets::SetTargetMipLayerLevel(int, int, int)
    void RenderTargets::SetTargetMipLayerLevel(int param_1, int param_2, int param_3) {
        RenderDevice* this_00;
        __10 local_f0;
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        KeepAlive(this);
        this_00 = (RenderDevice*)((RenderTargets*)this)->Instance();
        local_f0.field_0 = this;
        local_f0.field_8 = param_1;
        local_f0.field_12 = param_2;
        local_f0.field_16 = param_3;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            RenderTargets::SetTargetMipLayerLevel(int, int, int)::__10, void>(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8, &local_f0);
        this_00->RunOnRenderThread(&local_d8);
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100be8290, 176 bytes, placed by class name and neighbouring functions
    // RenderTargets::Unbind()
    void RenderTargets::Unbind() {
        RenderDevice* this_00;
        Singleton<RenderDevice>* this_01;
        __13 local_d0;
        function local_c8;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        KeepAlive(this);
        this_01 = (Singleton<RenderDevice>*)&field_24;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        field_192 = (Texture*)0;
        this_00 = (RenderDevice*)this_01->Instance();
        local_d0.field_0 = this;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            RenderTargets::Unbind()::__13, void>(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, &local_d0);
        this_00->RunOnRenderThread(&local_c8);
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100be8350, 176 bytes, placed by class name and neighbouring functions
    // RenderTargets::UnbindDepthStencilTargetTexture()
    void RenderTargets::UnbindDepthStencilTargetTexture() {
        RenderDevice* this_00;
        __14 local_d0;
        function local_c8;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        KeepAlive(this);
        field_192 = (Texture*)0;
        this_00 = (RenderDevice*)((RenderTargets*)this)->Instance();
        local_d0.field_0 = this;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            RenderTargets::UnbindDepthStencilTargetTexture()::__14, void>(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, &local_d0);
        this_00->RunOnRenderThread(&local_c8);
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100be8410, 256 bytes, placed by __FILE__ string
    // RenderTargets::GetNativeFBOId() const
    void RenderTargets::GetNativeFBOId() {
        char cVar1;
        RenderDevice* this_00;
        undefined8 uVar2;
        undefined1 local_c8[168];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((field_216 & 8) == 0) {
            this_00 = (RenderDevice*)Instance();
            cVar1 = this_00->IsRenderThread();
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("(m_flags & FORCE_SYNCHRONOUS_ALLOW_CREATION_FAILURE) == "
                          "FORCE_SYNCHRONOUS_ALLOW_CREATION_FAILURE || RenderDevice::Instance().IsRenderThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/OGL/RenderTargets_OGL.cpp",
                          971, (char*)0);
            }
        }
        cVar1 = IsCreated(this);
        if (cVar1 == '\0') {
            GetInfoString((RenderTargets*)local_c8);
            uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            /* WARNING: Subroutine does not return */
            LogAssert("IsCreated()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      972, "Dead render target bound (%s)", uVar2);
        }
        KeepAlive(this);
        (&field_380)->operator_cast_to_unsigned_int();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100be8510, 160 bytes, placed by class name and neighbouring functions
    // RenderTargets::Invalidate() const
    void RenderTargets::Invalidate() {
        RenderDevice* this_00;
        RenderTargets* local_d0;
        function local_c8;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        KeepAlive(this);
        this_00 = (RenderDevice*)((RenderTargets*)this)->Instance();
        local_d0 = this;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            RenderTargets::Invalidate() const ::__15, void>(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, (__15*)&local_d0);
        this_00->RunOnRenderThread(&local_c8);
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100be85c0, 272 bytes, placed by __FILE__ string
    // RenderTargets::InvalidateAllRenderTargets()
    void RenderTargets::InvalidateAllRenderTargets() {
        RenderTargets* this_00;
        bool bVar2;
        uint uVar3;
        RenderDevice* pRVar4;
        undefined8* puVar6;
        undefined8 extraout_RDX;
        undefined1 auVar7[16];
        undefined8 local_38;
        undefined8 local_30;
        scoped_lock<std::mutex> local_28[8];

        pRVar4 = (RenderDevice*)Instance();
        if (pRVar4->IsRenderThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      951, (char*)0);
        }
        pRVar4 = (RenderDevice*)pRVar4->Instance();
        if (pRVar4->GetPrimaryRenderContext() != 0) {
            std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)&m_renderTargetsToInvalidateMutex);
            local_38 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                     eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                     true>::begin();
            auVar7 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                   eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                   true>::end();
            while (true) {
                local_30 = auVar7._0_8_;
                bVar2 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)&local_30, auVar7._8_8_);
                if (!bVar2)
                    break;
                puVar6 = (undefined8*)eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_38);
                this_00 = (RenderTargets*)*puVar6;
                if (this_00 != (RenderTargets*)0) {
                    uVar3 = (&this_00->field_380)->operator_cast_to_unsigned_int();
                    if (uVar3 != 0) {
                        Invalidate(this_00);
                    }
                }
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_38);
                auVar7._8_8_ = extraout_RDX;
                auVar7._0_8_ = local_30;
            }
            m_renderTargetsToInvalidate.clear();
            std::scoped_lock<std::mutex>::~scoped_lock(local_28);
        }
    }

    // 0x100bfac40, 16 bytes, placed by class name and neighbouring functions
    // RenderTargets::Destroy()::$_0::operator()(RenderContext&) const
    /* RenderTargets::Destroy()::$_0::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderTargets::Destroy()::$_0::operator()(RenderContext* param_1) {
        field_0->Destroy();
    }

    // 0x100bfc360, 32 bytes, placed by class name and neighbouring functions
    // RenderTargets::Create(char const*, unsigned int)::$_4::operator()(RenderContext&) const
    /* RenderTargets::Create(char const*, unsigned
   int)::$_4::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderTargets::Create(char const*, unsigned int)::$_4::operator()(RenderContext* param_1) {
        undefined1 uVar1;

        uVar1 = CreateInternal(field_8, param_1);
        *field_0 = uVar1;
    }

    // 0x100bfc410, 16 bytes, placed by class name and neighbouring functions
    // RenderTargets::Create(char const*, unsigned int)::$_5::operator()(RenderContext&) const
    /* RenderTargets::Create(char const*, unsigned
   int)::$_5::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderTargets::Create(char const*, unsigned int)::$_5::operator()(RenderContext* param_1) {
        CreateInternal(field_0, param_1);
    }

    // 0x100bfd090, 384 bytes, placed by __FILE__ string
    // RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8::operator()(RenderContext&) const
    /* RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long
   const*)::$_8::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderTargets::SetEnabledRenderTargets(unsigned long,
                                                unsigned long const*)::$_8::operator()(RenderContext* param_1) {
        ulong uVar1;
        code* pcVar2;
        undefined4 uVar3;
        uint* puVar4;
        uint* puVar5;
        uint* puVar6;
        undefined8 uVar7;
        ulong uVar8;
        ulong local_80;
        RenderTargets* local_70;
        uint local_5c;
        fixed_vector<unsigned int, 2ul, false, eastl::dummy_allocator> local_58[32];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_70 = field_0;
        BindFrameBufferWithoutStateCache(local_70, param_1);
        eastl::fixed_vector<unsigned int, 2ul, false, eastl::dummy_allocator>::fixed_vector();
        if (field_8 != 0) {
            uVar8 = 0;
            do {
                uVar1 = *(ulong*)(((__8*)this)->field_16 + uVar8 * 8);
                local_80 = uVar1;
                puVar4 = (uint*)local_58->end();
                puVar5 = (uint*)local_58->HeapBeginPtr();
                puVar6 = (uint*)local_58->end();
                puVar5 = std::find<unsigned int*, unsigned long>(puVar5, puVar6, &local_80);
                if (puVar4 != puVar5) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "rendertargets/OGL/RenderTargets_OGL.cpp",
                                    515, "Attempted to attach the same texture index %d to multiple draw buffers.",
                                    uVar1 & 4294967295);
                }
                local_5c = (int)uVar1 + 36064;
                eastl::fixed_vector<unsigned int, 2ul, false, eastl::dummy_allocator>::push_back(local_58, &local_5c);
                uVar8 = uVar8 + 1;
            } while (uVar8 < (ulong)((__8*)this)->field_8);
        }
        pcVar2 = ___glewDrawBuffers;
        uVar3 = local_58->size();
        uVar7 = local_58->HeapBeginPtr();
        (*pcVar2)(uVar3, uVar7);
        CheckGlErrorInternal("glDrawBuffers",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "rendertargets/OGL/RenderTargets_OGL.cpp",
                             519);
        RestorePreviousFrameBuffer(local_70, param_1);
        eastl::fixed_vector<unsigned int, 2ul, false, eastl::dummy_allocator>::~fixed_vector(local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bfd430, 480 bytes, placed by __FILE__ string
    // RenderTargets::SetTargetCubeMapFace(int, CubeFace)::$_9::operator()(RenderContext&) const
    /* RenderTargets::SetTargetCubeMapFace(int,
   CubeFace)::$_9::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderTargets::SetTargetCubeMapFace(int, CubeFace)::$_9::operator()(RenderContext* param_1) {
        undefined1* this_00;
        undefined4 uVar1;
        undefined4 uVar2;
        RenderTargets* pRVar3;
        code* pcVar4;
        char cVar5;
        uint uVar6;
        int iVar7;
        undefined4 uVar8;
        long* plVar9;
        undefined8* puVar10;
        undefined4* puVar11;
        undefined8 uVar12;

        pRVar3 = field_0;
        uVar6 = (&pRVar3->field_380)->operator_cast_to_unsigned_int();
        if (uVar6 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_FBO",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      533, (char*)0);
        }
        if (field_8 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("iColourTarget == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      534, (char*)0);
        }
        this_00 = &pRVar3->field_80;
        plVar9 = (long*)eastl::
            vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                (long)field_8);
        if (*plVar9 != 0) {
            puVar10 = (undefined8*)eastl::
                vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                        this_00,
                    (long)field_8);
            iVar7 = (*puVar10)->GetMaxLineWidth();
            if (iVar7 == 34067) {
                plVar9 = (long*)
                    eastl::vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                            this_00,
                        (long)field_8);
                if (*plVar9 != 0) {
                    puVar10 = (undefined8*)eastl::vector<
                        Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                            this_00,
                        (long)field_8);
                    iVar7 = (*puVar10)->GetMaxLineWidth();
                    if (iVar7 == 34067) {
                        puVar10 = (undefined8*)eastl::vector<
                            Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<Texture*,
                                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                            (long)field_8);
                        cVar5 = (*puVar10)->IsCreated();
                        if (cVar5 == '\0') {
                            uVar12 = logger::default_logger();
                            logger::Logger::Log(uVar12, 0, 3,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "hal/render/rendertargets/OGL/RenderTargets_OGL.cpp",
                                                556, "Attempted to bind invalid texture to cube map face");
                        } else {
                            param_1->SetRenderTargets(pRVar3);
                            pcVar4 = ___glewFramebufferTexture2D;
                            iVar7 = field_8;
                            puVar11 = (undefined4*)std::array<unsigned int, 2ul>::operator[]((long)iVar7);
                            uVar1 = *puVar11;
                            uVar2 = field_12;
                            puVar10 = (undefined8*)eastl::vector<
                                Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<Texture*,
                                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    this_00,
                                (long)iVar7);
                            uVar8 = (*puVar10)->GetNativeTextureId();
                            (*pcVar4)(36160, uVar1, uVar2, uVar8, 0);
                            CheckGlErrorInternal("glFramebufferTexture2D",
                                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                 "libs/hal/render/rendertargets/OGL/RenderTargets_OGL.cpp",
                                                 550);
                            cVar5 = IsFBOValid();
                            if (cVar5 == '\0') {
                                /* WARNING: Subroutine does not return */
                                LogAssert("IsFBOValid()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                          "render/rendertargets/OGL/RenderTargets_OGL.cpp",
                                          552, (char*)0);
                            }
                        }
                    }
                }
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("m_renderThreadColourTargetTextures[iColourTarget] && "
                  "m_renderThreadColourTargetTextures[iColourTarget]->GetType() == TEXTURE_TYPE_CUBE",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/OGL/"
                  "RenderTargets_OGL.cpp",
                  535, (char*)0);
    }

    // 0x100bfd6c0, 336 bytes, placed by __FILE__ string
    // RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10::operator()(RenderContext&) const
    /* RenderTargets::SetTargetMipLayerLevel(int, int,
   int)::$_10::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10::operator()(RenderContext* param_1) {
        undefined1* this_00;
        RenderTargets* pRVar1;
        uint uVar3;
        int iVar4;
        long* plVar5;
        undefined8* puVar6;

        pRVar1 = field_0;
        uVar3 = (&pRVar1->field_380)->operator_cast_to_unsigned_int();
        if (uVar3 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_FBO",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      571, (char*)0);
        }
        if (field_8 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("iColourTarget == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      572, (char*)0);
        }
        this_00 = &pRVar1->field_80;
        plVar5 = (long*)eastl::
            vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                (long)field_8);
        if (*plVar5 != 0) {
            puVar6 = (undefined8*)eastl::
                vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                        this_00,
                    (long)field_8);
            iVar4 = (*puVar6)->GetMaxLineWidth();
            if (iVar4 != 34067) {
                puVar6 = (undefined8*)
                    eastl::vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                            this_00,
                        (long)field_8);
                if ((*puVar6)->IsCreated() == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_renderThreadColourTargetTextures[iColourTarget]->IsCreated()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "rendertargets/OGL/RenderTargets_OGL.cpp",
                              574, (char*)0);
                }
                plVar5 = (long*)
                    eastl::vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                            this_00,
                        (long)field_8);
                if (*plVar5 != 0) {
                    puVar6 = (undefined8*)eastl::vector<
                        Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                            this_00,
                        (long)field_8);
                    iVar4 = (*puVar6)->GetMaxLineWidth();
                    if (iVar4 != 34067) {
                        param_1->SetRenderTargets(pRVar1);
                        puVar6 = (undefined8*)eastl::vector<
                            Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<Texture*,
                                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                            (long)field_8);
                        AttachColourTargetToFBO(*puVar6, field_8, field_12, field_16, 4294967295);
                    }
                }
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("m_renderThreadColourTargetTextures[iColourTarget] && "
                  "m_renderThreadColourTargetTextures[iColourTarget]->GetType() != TEXTURE_TYPE_CUBE",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/OGL/"
                  "RenderTargets_OGL.cpp",
                  573, (char*)0);
    }

    // 0x100bfdcc0, 400 bytes, placed by __FILE__ string
    // RenderTargets::BindDepthStencilTargetTexture(Texture*)::$_12::operator()(RenderContext&) const
    /* RenderTargets::BindDepthStencilTargetTexture(Texture*)::$_12::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderTargets::BindDepthStencilTargetTexture(Texture*)::$_12::operator()(RenderContext* param_1) {
        RenderTargets* this_00;
        Texture* pTVar1;
        char cVar2;
        bool bVar3;
        uint uVar4;
        undefined4 uVar5;
        undefined4 uVar6;
        long lVar7;
        undefined8 uVar8;
        RenderResource* pRVar9;

        this_00 = field_0;
        uVar4 = (&this_00->field_380)->operator_cast_to_unsigned_int();
        if ((uVar4 == 0) && (cVar2 = IsBackBuffer(this_00), cVar2 == '\0')) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_FBO != 0 || IsBackBuffer()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      673, (char*)0);
        }
        bVar3 = (&this_00->field_208)->operator_cast_to_bool();
        if (bVar3) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pOwnedDepthStencilTargetTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/RenderTargets_OGL.cpp",
                      674,
                      "Setting of external depth resources only supported when RenderTargets is created will no depth "
                      "resources");
        }
        pTVar1 = field_8;
        this_00->field_200 = pTVar1;
        pRVar9 = (RenderResource*)&pTVar1->field_8;
        if (pTVar1 == (Texture*)0) {
            pRVar9 = (RenderResource*)0;
        }
        cVar2 = param_1->IsObjectAlive(pRVar9);
        if ((cVar2 == '\0') || (cVar2 = this_00->field_200->IsCreated(), cVar2 == '\0')) {
            uVar8 = logger::default_logger();
            logger::Logger::Log(uVar8, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "rendertargets/OGL/RenderTargets_OGL.cpp",
                                694,
                                "Depth texture to be bound to render target was destroyed before deferred binding");
            return;
        }
        cVar2 = IsBackBuffer(this_00);
        if (cVar2 != '\0') {
            return;
        }
        param_1->SetRenderTargets(this_00);
        pTVar1 = this_00->field_200;
        lVar7 = pTVar1->second();
        bVar3 = (bool)HasStencilBits(*(undefined4*)(lVar7 + 12));
        AttachDepthStencilToFBO(pTVar1, bVar3);
        cVar2 = IsFBOValid();
        if (cVar2 == '\0') {
            uVar8 = logger::default_logger();
            uVar5 = this_00->field_200->GetNativeTextureId();
            uVar6 = std::__atomic_base<unsigned int, false>::load(&this_00->field_380);
            logger::Logger::Log(uVar8, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "rendertargets/OGL/RenderTargets_OGL.cpp",
                                688, "Failed to bind depth texture %u to FBO %u", uVar5, uVar6);
            return;
        }
    }

    // 0x100bfdee0, 752 bytes, placed by __FILE__ string
    // RenderTargets::Unbind()::$_13::operator()(RenderContext&) const
    /* RenderTargets::Unbind()::$_13::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderTargets::Unbind()::$_13::operator()(RenderContext* param_1) {
        RenderTargets* pRVar1;
        code* pcVar2;
        code* pcVar3;
        char cVar4;
        int iVar5;
        undefined4 uVar6;
        undefined4 uVar7;
        long* plVar8;
        long* plVar9;
        undefined4* puVar10;
        RenderResource* pRVar11;
        char* pcVar12;
        ulong uVar13;

        pRVar1 = field_0;
        param_1->SetRenderTargets(pRVar1);
        plVar8 = (long*)(&pRVar1->field_80)->HeapBeginPtr();
        plVar9 = (long*)(&pRVar1->field_80)->end();
        if (plVar8 != plVar9) {
            uVar13 = 0;
            do {
                pRVar11 = (RenderResource*)(*plVar8 + 8);
                if (*plVar8 == 0) {
                    pRVar11 = (RenderResource*)0;
                }
                cVar4 = param_1->IsObjectAlive(pRVar11);
                if (cVar4 != '\0') {
                    iVar5 = (*plVar8)->GetMaxLineWidth();
                    pcVar3 = ___glewFramebufferTexture3D;
                    pcVar2 = ___glewFramebufferTexture2D;
                    if (iVar5 < 35866) {
                        if (iVar5 == 3553) {
                        LAB_100bfe041:
                            puVar10 = (undefined4*)std::array<unsigned int, 2ul>::operator[](uVar13);
                            uVar7 = *puVar10;
                            uVar6 = (*plVar8)->GetMaxLineWidth();
                            (*pcVar2)(36160, uVar7, uVar6);
                            pcVar12 = "glFramebufferTexture2D";
                            iVar5 = 731;
                        } else if (iVar5 == 32879) {
                            puVar10 = (undefined4*)std::array<unsigned int, 2ul>::operator[](uVar13);
                            uVar7 = *puVar10;
                            uVar6 = (*plVar8)->GetMaxLineWidth();
                            (*pcVar3)(36160, uVar7, uVar6);
                            pcVar12 = "glFramebufferTexture3D";
                            iVar5 = 767;
                        } else {
                            if (iVar5 != 34067)
                                goto LAB_100bfdf86;
                            puVar10 = (undefined4*)std::array<unsigned int, 2ul>::operator[](uVar13);
                            (*pcVar2)(36160, *puVar10, 34069);
                            pcVar12 = "glFramebufferTexture2D";
                            iVar5 = 755;
                        }
                    } else {
                        if ((iVar5 != 35866) && (iVar5 != 37122)) {
                            if (iVar5 == 37120)
                                goto LAB_100bfe041;
                            goto LAB_100bfdf86;
                        }
                        puVar10 = (undefined4*)std::array<unsigned int, 2ul>::operator[](uVar13);
                        uVar7 = *puVar10;
                        uVar6 = (*plVar8)->GetMaxLineWidth();
                        (*pcVar3)(36160, uVar7, uVar6, 0, 0, 0);
                        pcVar12 = "glFramebufferTexture3D";
                        iVar5 = 744;
                    }
                    CheckGlErrorInternal(pcVar12,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/rendertargets/OGL/RenderTargets_OGL.cpp",
                                         iVar5);
                }
            LAB_100bfdf86:
                uVar13 = uVar13 + 1;
                plVar8 = plVar8 + 1;
            } while (plVar8 != plVar9);
        }
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        (&pRVar1->field_136)->clear();
        if (pRVar1->field_200 != (Texture*)0) {
            cVar4 = param_1->IsObjectAlive((RenderResource*)&pRVar1->field_200->field_8);
            pcVar2 = ___glewFramebufferTexture2D;
            if (cVar4 != '\0') {
                uVar7 = pRVar1->field_200->GetMaxLineWidth();
                (*pcVar2)(36160, 36096, uVar7, 0, 0);
                CheckGlErrorInternal("glFramebufferTexture2D",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "rendertargets/OGL/RenderTargets_OGL.cpp",
                                     788);
                pcVar2 = ___glewFramebufferTexture2D;
                uVar7 = pRVar1->field_200->GetMaxLineWidth();
                (*pcVar2)(36160, 36128, uVar7, 0, 0);
                CheckGlErrorInternal("glFramebufferTexture2D",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "rendertargets/OGL/RenderTargets_OGL.cpp",
                                     796);
                pRVar1->field_200 = (Texture*)0;
                (&pRVar1->field_208, (Texture*)0)->reset();
            }
        }
    }

    // 0x100bfe260, 240 bytes, placed by __FILE__ string
    // RenderTargets::UnbindDepthStencilTargetTexture()::$_14::operator()(RenderContext&) const
    /* RenderTargets::UnbindDepthStencilTargetTexture()::$_14::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderTargets::UnbindDepthStencilTargetTexture()::$_14::operator()(RenderContext* param_1) {
        RenderTargets* pRVar1;
        code* pcVar2;
        char cVar3;
        undefined4 uVar4;

        pRVar1 = field_0;
        param_1->SetRenderTargets(pRVar1);
        if (pRVar1->field_200 != (Texture*)0) {
            cVar3 = param_1->IsObjectAlive((RenderResource*)&pRVar1->field_200->field_8);
            pcVar2 = ___glewFramebufferTexture2D;
            if (cVar3 != '\0') {
                uVar4 = pRVar1->field_200->GetMaxLineWidth();
                (*pcVar2)(36160, 36096, uVar4, 0, 0);
                CheckGlErrorInternal("glFramebufferTexture2D",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "rendertargets/OGL/RenderTargets_OGL.cpp",
                                     824);
                pcVar2 = ___glewFramebufferTexture2D;
                uVar4 = pRVar1->field_200->GetMaxLineWidth();
                (*pcVar2)(36160, 36128, uVar4, 0, 0);
                CheckGlErrorInternal("glFramebufferTexture2D",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "rendertargets/OGL/RenderTargets_OGL.cpp",
                                     832);
                pRVar1->field_200 = (Texture*)0;
                (&pRVar1->field_208, (Texture*)0)->reset();
            }
        }
    }

    // 0x100bfe3e0, 560 bytes, placed by __FILE__ string
    // RenderTargets::Invalidate() const::$_15::operator()(RenderContext&) const
    /* RenderTargets::Invalidate()
   const::$_15::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_Invalidate* const ::$_15::operator()(RenderContext * param_1) {
        RenderTargets* this_00;
        Texture* this_01;
        char cVar1;
        bool bVar2;
        uint uVar3;
        undefined4 extraout_var_00;
        _func_Invalidate* p_Var4;
        ImmediateRenderContext* this_02;
        RenderContextStateCache* this_03;
        MapArea* pMVar5;
        undefined8* puVar6;
        undefined8* puVar7;
        undefined7 extraout_var;
        Singleton<RenderDevice>* this_04;
        undefined4 local_34;
        undefined4 local_30;
        undefined4 local_2c;

        this_00 = *(RenderTargets**)this;
        this_04 = (Singleton<RenderDevice>*)&this_00->field_380;
        uVar3 = this_04->operator_cast_to_unsigned_int();
        p_Var4 = (_func_Invalidate*)CONCAT44(extraout_var_00, uVar3);
        if ((uVar3 != 0) && (p_Var4 = (_func_Invalidate*)this_00->CheckTexturesAlive(param_1), (char)p_Var4 != '\0')) {
            this_02 = (ImmediateRenderContext*)param_1->GetImmediateContext();
            this_03 = (RenderContextStateCache*)this_02->GetStateCache();
            uVar3 = this_04->operator_cast_to_unsigned_int();
            if (uVar3 == this_03->field_8) {
                this_03->ValidateBoundFBO();
                pMVar5 = (MapArea*)this_03->Instance();
                p_Var4 = (_func_Invalidate*)pMVar5->GetOrigin();
                if (p_Var4[329] != (_func_Invalidate)0) {
                    cVar1 = this_00->HasColourTargets();
                    if (cVar1 != '\0') {
                        local_34 = 36064;
                        (*___glewInvalidateFramebuffer)(36160, 1, &local_34);
                        CheckGlErrorInternal("glInvalidateFramebuffer",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/rendertargets/OGL/RenderTargets_OGL.cpp",
                                             888);
                    }
                    cVar1 = this_00->HasDepthTarget();
                    if (cVar1 != '\0') {
                        local_30 = 36096;
                        (*___glewInvalidateFramebuffer)(36160, 1, &local_30);
                        CheckGlErrorInternal("glInvalidateFramebuffer",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/rendertargets/OGL/RenderTargets_OGL.cpp",
                                             893);
                    }
                    p_Var4 = (_func_Invalidate*)this_00->HasStencilTarget();
                    if ((char)p_Var4 != '\0') {
                        local_2c = 36128;
                        (*___glewInvalidateFramebuffer)(36160, 1, &local_2c);
                        p_Var4 = (_func_Invalidate*)CheckGlErrorInternal(
                            "glInvalidateFramebuffer",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                            "rendertargets/OGL/RenderTargets_OGL.cpp",
                            898);
                    }
                }
            } else {
                pMVar5 = (MapArea*)this_04->Instance();
                p_Var4 = (_func_Invalidate*)pMVar5->GetOrigin();
                if (p_Var4[328] != (_func_Invalidate)0) {
                    cVar1 = this_00->HasColourTargets();
                    if (cVar1 != '\0') {
                        puVar6 = (undefined8*)(&this_00->field_80)->HeapBeginPtr();
                        puVar7 = (undefined8*)(&this_00->field_80)->end();
                        for (; puVar6 != puVar7; puVar6 = puVar6 + 1) {
                            this_01 = (Texture*)*puVar6;
                            if ((this_01 != (Texture*)0) && (cVar1 = this_01->IsCreated(), cVar1 != '\0')) {
                                this_01->Invalidate();
                            }
                        }
                    }
                    p_Var4 = (_func_Invalidate*)this_00->HasDepthTarget();
                    if ((char)p_Var4 != '\0') {
                        bVar2 = (&this_00->field_208)->operator_cast_to_bool();
                        p_Var4 = (_func_Invalidate*)CONCAT71(extraout_var, bVar2);
                        if (((bVar2) && (this_00->field_200 != (Texture*)0)) &&
                            (p_Var4 = (_func_Invalidate*)this_00->field_200->IsCreated(), (char)p_Var4 != '\0')) {
                            p_Var4 = (_func_Invalidate*)this_00->field_200->Invalidate();
                        }
                    }
                }
            }
        }
        return p_Var4;
    }

    // 0x100c0c310, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init
    void ___cxx_global_var_init(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&RenderTargets::NullRenderTargets) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5318, &RenderTargets::NullRenderTargets, 4294967296);
    }

} // namespace jag::render

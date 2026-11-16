// libs/hal/render/textures/OGL/Texture_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "libs/oldscape/jagex3/dash3d/Texture.h"

namespace jag::render {
    // 0x100bc9fb0, 256 bytes, placed by __FILE__ string
    // Texture::GenerateBindTextures(TextureType)
    void Texture::GenerateBindTextures(int param_2) {
        char cVar1;
        RenderDevice* pRVar2;
        RenderContext* pRVar3;
        ImmediateRenderContext* this_00;

        pRVar2 = (RenderDevice*)Instance();
        pRVar3 = (RenderContext*)pRVar2->GetCurrentThreadRenderContext();
        cVar1 = pRVar3->IsLocked();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().GetCurrentThreadRenderContext()->IsLocked()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture_OGL.cpp",
                      356, (char*)0);
        }
        pRVar2 = (RenderDevice*)pRVar3->Instance();
        pRVar3 = (RenderContext*)pRVar2->GetCurrentThreadRenderContext();
        this_00 = (ImmediateRenderContext*)pRVar3->GetImmediateContext();
        this_00->BindInvalidTexture();
        _glBindTexture(param_2, 0);
        CheckGlErrorInternal("glBindTexture",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "textures/OGL/Texture_OGL.cpp",
                             363);
        _glGenTextures(1, &m_nativeTextureId);
        CheckGlErrorInternal("glGenTextures",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "textures/OGL/Texture_OGL.cpp",
                             366);
        m_type = param_2;
        this_00->BindTexture(this, 0);
        cVar1 = (*(code*)field_0[4])(this);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsCreatedNative()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture_OGL.cpp",
                      372, (char*)0);
        }
    }

    // 0x100bca0d0, 128 bytes, placed by __FILE__ string
    // Texture::SetFaceMipLevels(Texture::Desc const&)
    void Texture::SetFaceMipLevels(Desc* param_1) {
        uint uVar2;

        uVar2 = 1;
        if ((param_1->field_32 != '\0') && ((uint)param_1->field_16 < 2)) {
            uVar2 = param_1->field_24;
            if (uVar2 < 2) {
                if (IsCompressedFormat(param_1->field_12) == '\0') {
                    uVar2 = ComputeMaxMipLevels(param_1->field_0, param_1->field_4);
                    goto LAB_100bca13a;
                }
            }
            if (uVar2 < 2) {
                /* WARNING: Subroutine does not return */
                LogAssert("textureDesc.m_DataMipLevels > 1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                          "OGL/Texture_OGL.cpp",
                          325, (char*)0);
            }
            uVar2 = param_1->field_24;
        }
    LAB_100bca13a:
        m_faceMipLevels = uVar2;
    }

    // 0x100bca6a0, 336 bytes, placed by __FILE__ string
    // Texture::FinaliseCreate(char const*, Texture::Desc const&)
    void Texture::FinaliseCreate(char* param_1, Desc* param_2) {
        uint uVar1;
        int iVar2;
        long lVar3;
        Singleton<BuiltinStates>* this_00;

        if (param_1 == (char*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pTextureTypeName != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture_OGL.cpp",
                      380, (char*)0);
        }
        if (m_faceMipLevels < (uint)param_2->field_28) {
            /* WARNING: Subroutine does not return */
            LogAssert("textureDesc.m_SampleMipLevels <= m_faceMipLevels",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture_OGL.cpp",
                      381, (char*)0);
        }
        SetBaseMipLevel(this, param_2->field_36);
        uVar1 = GetMaxLineWidth();
        if ((uVar1 & 4294967293) != 37120) {
            _glTexParameteri(uVar1, 33085, m_faceMipLevels);
            CheckGlErrorInternal("glTexParameteri",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/Texture_OGL.cpp",
                                 391);
        }
        field_264 = (float)FrameTime::GetSecondsSinceProgramStart();
        this_00 = (Singleton<BuiltinStates>*)(ulong)(uint)param_2->field_12;
        iVar2 = GetFormatDepthBits();
        lVar3 = this_00->Instance();
        (*(code*)field_0[3])(this, (ulong)(iVar2 != 0) * 64 + lVar3 + 16, 1);
        field_8 = 1;
        uVar1 = GetTextureImageDataSize(m_type, field_24, field_28, field_32, field_36, m_faceMipLevels);
        (field_272, param_1, uVar1)->Register();
        (&field_8)->UndoMarkAsDead();
        (*(code*)field_0[4])(this);
    }

    // 0x100bca7f0, 16 bytes, placed by class name and neighbouring functions
    // Texture::GetNativeTextureId() const
    undefined4 Texture::GetNativeTextureId() {
        return m_nativeTextureId;
    }

    // 0x100bca800, 32 bytes, placed by class name and neighbouring functions
    // Texture::UseGLWriteMutex()
    bool Texture::UseGLWriteMutex() {
        NXTPixScreen* this_00;

        this_00 = (NXTPixScreen*)Instance();
        return this_00->GetUIHeight() == 2;
    }

    // 0x100bccfd0, 224 bytes, base-object destructor, placed by __FILE__ string
    // Texture::~Texture()
    void Texture::~Texture() {
        field_0 = &PTR____cxa_pure_virtual_100f27d48;
        if (m_nativeTextureId == 0) {
            (&field_448)->~SamplerState();
            (&field_368)->~mutex();
            (&field_304)->~SamplerState();
            field_272->~GPUMemoryTrackingEntry();
            /* WARNING: Subroutine does not return */
            (&field_96)->~fixed_string();
        }
        /* WARNING: Subroutine does not return */
        LogAssert("!m_GLTexture",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                  "Texture_OGL.cpp",
                  38, (char*)0);
    }

    // 0x100bcdad0, 16 bytes, complete-object destructor, placed by class name and neighbouring functions
    // Texture::~Texture(): jumps straight to the base-object destructor

    // 0x100bcdae0, 16 bytes, deleting destructor, placed by class name and neighbouring functions
    // Texture::~Texture()
    void Texture::~Texture() {
        code* pcVar1;

        /* WARNING: Does not return */
        pcVar1 = (code*)invalidInstructionException();
        (*pcVar1)();
    }

    // 0x100bcdaf0, 80 bytes, placed by __FILE__ string
    // Texture::Lock(unsigned int, LockType, unsigned int)
    ResourceDataT<unsigned char const>* Texture::Lock(ResourceDataT<unsigned char const>* param_1, long param_2) {
        if (*(char*)(param_2 + 92) != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_Locked == false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture_OGL.cpp",
                      43, (char*)0);
        }
        *(undefined1*)(param_2 + 92) = 1;
        ResourceDataT<unsigned char const>::ResourceDataT(param_1, (uchar*)0, 0, 0, false);
        return param_1;
    }

    // 0x100bcdb40, 64 bytes, placed by __FILE__ string
    // Texture::Unlock(unsigned int)
    void Texture::Unlock(uint param_1) {
        undefined4 in_register_0000003c;

        if (*(char*)(CONCAT44(in_register_0000003c, param_1) + 92) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_Locked == true",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture_OGL.cpp",
                      51, (char*)0);
        }
        *(undefined1*)(CONCAT44(in_register_0000003c, param_1) + 92) = 0;
    }

    // 0x100bcdb80, 160 bytes, placed by class name and neighbouring functions
    // Texture::SetSamplerState(SamplerState const&, bool)
    void Texture::SetSamplerState(SamplerState* param_1, bool param_2) {
        scoped_lock<std::mutex> local_28[8];

        if (field_84 == 35001) {
            SamplerState::operator=((SamplerState*)&field_304, param_1);
        } else {
            std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)&field_368);
            if (field_432 == '\0') {
                SetSamplerStateInternal(this, param_1, param_2);
            } else {
                SamplerState::operator=((SamplerState*)&field_448, param_1);
            }
            std::scoped_lock<std::mutex>::~scoped_lock(local_28);
        }
    }

    // 0x100bcdc40, 944 bytes, placed by __FILE__ string
    // Texture::SetSamplerStateInternal(SamplerState const&, bool)
    void Texture::SetSamplerStateInternal(SamplerState* param_1, bool param_2) {
        char cVar1;
        int iVar2;
        undefined4 uVar3;
        RenderDevice* pRVar4;
        Desc* pDVar5;
        RenderContext* this_00;
        ImmediateRenderContext* this_01;
        MapArea* this_02;
        long lVar6;
        vector* pvVar7;
        float* pfVar8;
        uint uVar9;
        char* pcVar12;
        float fVar13;
        ActiveTextureSaveRestore local_58;
        SamplerState* local_48;
        GLMinMagFilter local_40;

        if (m_nativeTextureId == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_GLTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture_OGL.cpp",
                      81, "Texture has no native resources set up for it!");
        }
        iVar2 = GetNativeTextureId(this);
        if (iVar2 != 0) {
            iVar2 = GetMaxLineWidth();
            if (iVar2 != -1) {
                cVar1 = IsMultiSampleTextureType(m_type);
                if (cVar1 == '\0') {
                    local_48 = (SamplerState*)&field_304;
                    pRVar4 = (RenderDevice*)local_48->SSOBeginPtr(param_1);
                    pDVar5 = (Desc*)param_1->SSOBeginPtr(param_1);
                    cVar1 = SamplerState::Desc::operator!=((Desc*)pRVar4, pDVar5);
                    if ((cVar1 != '\0') || (param_2)) {
                        fVar13 = (float)FrameTime::GetSecondsSinceProgramStart();
                        if (field_264 + 1.0 < fVar13) {
                            pRVar4 = (RenderDevice*)pRVar4->Instance();
                            cVar1 = pRVar4->IsRenderThread();
                            if (cVar1 == '\0') {
                                pRVar4 = (RenderDevice*)logger::default_logger();
                                logger::Logger::Log(pRVar4, 0, 3,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/hal/render/textures/OGL/Texture_OGL.cpp",
                                                    97,
                                                    "Do not use SetSamplerState other than at creation time - instead "
                                                    "use the pSamplerState facility of RenderPipelineState");
                            }
                        }
                        pRVar4 = (RenderDevice*)pRVar4->Instance();
                        this_00 = (RenderContext*)pRVar4->GetCurrentThreadRenderContext();
                        this_01 = (ImmediateRenderContext*)this_00->GetImmediateContext();
                        new (&local_58) ActiveTextureSaveRestore(this_01);
                        this_01->BindTexture(this, 0);
                        this_02 = (MapArea*)this_01->Instance();
                        lVar6 = this_02->GetOrigin();
                        pvVar7 = param_1->SSOBeginPtr((type*)(Texture*)this);
                        new (&local_40) GLMinMagFilter(*(undefined4*)pvVar7);
                        local_40.DisableMipMapping(m_faceMipLevels);
                        uVar3 = GetMaxLineWidth();
                        _glTexParameteri(uVar3, 10241, local_40.field_0._0_4_);
                        CheckGlErrorInternal("glTexParameteri",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/textures/OGL/Texture_OGL.cpp",
                                             113);
                        uVar3 = GetMaxLineWidth();
                        _glTexParameteri(uVar3, 10240, local_40.field_0._4_4_);
                        CheckGlErrorInternal("glTexParameteri",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/textures/OGL/Texture_OGL.cpp",
                                             114);
                        if ((*(char*)(lVar6 + 166) != '\0') && (m_type == 3553)) {
                            pfVar8 = std::min<float>((float*)(lVar6 + 48), (float*)(pvVar7 + 20));
                            _glTexParameterf(*pfVar8, 3553, 34046);
                            CheckGlErrorInternal("glTexParameterf",
                                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                 "libs/hal/render/textures/OGL/Texture_OGL.cpp",
                                                 117);
                        }
                        uVar3 = GetMaxLineWidth();
                        _glTexParameteri(uVar3, 10242, *(undefined4*)(pvVar7 + 4));
                        CheckGlErrorInternal("glTexParameteri",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/textures/OGL/Texture_OGL.cpp",
                                             120);
                        uVar3 = GetMaxLineWidth();
                        _glTexParameteri(uVar3, 10243, *(undefined4*)(pvVar7 + 8));
                        CheckGlErrorInternal("glTexParameteri",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/textures/OGL/Texture_OGL.cpp",
                                             121);
                        if (*(char*)(lVar6 + 165) != '\0') {
                            uVar3 = GetMaxLineWidth();
                            _glTexParameteri(uVar3, 32882, *(undefined4*)(pvVar7 + 12));
                            CheckGlErrorInternal("glTexParameteri",
                                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                 "libs/hal/render/textures/OGL/Texture_OGL.cpp",
                                                 124);
                        }
                        iVar2 = GetMaxLineWidth();
                        if ((iVar2 == 3553) && (*(char*)(lVar6 + 182) != '\0')) {
                            _glTexParameteri(3553, 34892, local_40.field_0._8_4_);
                            pcVar12 = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                      "render/textures/OGL/Texture_OGL.cpp";
                            CheckGlErrorInternal("glTexParameteri",
                                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                 "libs/hal/render/textures/OGL/Texture_OGL.cpp",
                                                 131);
                            uVar3 = GetMaxLineWidth();
                            pvVar7 = param_1->SSOBeginPtr(pcVar12);
                            _glTexParameteri(uVar3, 34893, *(undefined4*)(pvVar7 + 24));
                            CheckGlErrorInternal("glTexParameteri",
                                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                 "libs/hal/render/textures/OGL/Texture_OGL.cpp",
                                                 132);
                        }
                        SamplerState::operator=(local_48, param_1);
                        uVar9 = field_52;
                        if (uVar9 == 0) {
                            uVar9 = m_faceMipLevels;
                        }
                        SetMaxMipLevel(this, uVar9);
                        local_58.~ActiveTextureSaveRestore();
                    }
                }
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("(GetNativeTextureId() > 0) && (GetType() != TEXTURE_TYPE_UNKNOWN)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                  "Texture_OGL.cpp",
                  82, (char*)0);
    }

    // 0x100bce090, 320 bytes, placed by __FILE__ string
    // Texture::SetMaxMipLevel(unsigned int)
    void Texture::SetMaxMipLevel(uint param_1) {
        int iVar1;
        undefined4 uVar2;
        MapArea* this_00;
        long lVar3;
        vector* pvVar4;
        float* pfVar5;
        uint* puVar6;
        undefined4 in_register_00000034;
        type* ptVar7;
        uint uVar8;
        uint local_2c;
        uint local_28;
        uint local_24;

        ptVar7 = (type*)CONCAT44(in_register_00000034, param_1);
        local_24 = param_1;
        if (param_1 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("faceMipLevels >= 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture_OGL.cpp",
                      279, (char*)0);
        }
        uVar8 = 1;
        if ((1 < param_1) && (m_type == 3553)) {
            this_00 = (MapArea*)Instance();
            lVar3 = this_00->GetOrigin();
            if (*(char*)(lVar3 + 166) != '\0') {
                pvVar4 = (&field_304, ptVar7)->SSOBeginPtr();
                pfVar5 = std::min<float>((float*)(lVar3 + 48), (float*)(pvVar4 + 20));
                if (1.0 < *pfVar5) {
                    iVar1 = math::GetPowerOf2((uint)(long)*pfVar5);
                    if (iVar1 < 1) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("pow2 > 0",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "textures/OGL/Texture_OGL.cpp",
                                  300, (char*)0);
                    }
                    local_2c = 1;
                    local_28 = iVar1 - 1;
                    puVar6 = std::min<unsigned int>(&local_24, &local_28);
                    puVar6 = std::max<unsigned int>(&local_2c, puVar6);
                    uVar8 = *puVar6;
                }
            }
        }
        uVar2 = GetMaxLineWidth();
        uVar2 = TextureTypeForMipLevel(uVar2);
        _glTexParameteri(uVar2, 33083, local_24 - uVar8);
        CheckGlErrorInternal("glTexParameteri",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "textures/OGL/Texture_OGL.cpp",
                             307);
    }

    // 0x100bce1d0, 240 bytes, placed by class name and neighbouring functions
    // Texture::SetTemporarySamplerState(SamplerState const*)
    void Texture::SetTemporarySamplerState(SamplerState* param_1) {
        Desc* this_00;
        Desc* pDVar2;
        SamplerState* pSVar3;
        type* ptVar4;
        scoped_lock<std::mutex> local_28[8];

        if ((param_1 != (SamplerState*)0) || (field_432 != '\0')) {
            ptVar4 = (type*)&field_368;
            std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)ptVar4);
            if (field_432 == '\0') {
                if (param_1 != (SamplerState*)0) {
                    pSVar3 = (SamplerState*)GetDefaultMaterial();
                    SamplerState::operator=((SamplerState*)&field_448, pSVar3);
                    field_432 = 1;
                    SetSamplerStateInternal(this, param_1, false);
                }
            } else if (param_1 == (SamplerState*)0) {
                SetSamplerStateInternal(this, (SamplerState*)&field_448, false);
                field_432 = 0;
            } else {
                this_00 = (Desc*)param_1->SSOBeginPtr(ptVar4);
                pDVar2 = (Desc*)(&field_448, ptVar4)->SSOBeginPtr();
                if (SamplerState::Desc::operator!=(this_00, pDVar2) != '\0') {
                    SetSamplerStateInternal(this, param_1, false);
                }
            }
            std::scoped_lock<std::mutex>::~scoped_lock(local_28);
        }
    }

    // 0x100bce2c0, 288 bytes, placed by __FILE__ string
    // Texture::ReleaseNativeResources(char const*)
    void Texture::ReleaseNativeResources(char* param_1) {
        __11 _Var1;
        char cVar2;
        RenderDevice* pRVar3;
        RenderResource* this_00;
        __11 local_d0[2];
        function local_c8;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        _Var1.field_0 = *(uint*)(param_1 + 296);
        if (_Var1.field_0 != 0) {
            cVar2 = this_thread::IsMainThread();
            if (cVar2 == '\0') {
                pRVar3 = (RenderDevice*)param_1->Instance();
                cVar2 = pRVar3->IsRenderThread();
                if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("this_thread::IsMainThread() || RenderDevice::Instance().IsRenderThread()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/Texture_OGL.cpp",
                              183, "Trying to destroy a valid texture outside of the main or render threads");
                }
            }
            ((param_1 + 272))->Unregister();
            this_00 = (RenderResource*)(param_1 + 8);
            this_00->MarkAsDead();
            param_1[296] = '\0';
            param_1[297] = '\0';
            param_1[298] = '\0';
            param_1[299] = '\0';
            pRVar3 = (RenderDevice*)this_00->Instance();
            local_d0[0].field_0 = _Var1.field_0;
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                Texture::ReleaseNativeResources(char const*)::__11, void>(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, local_d0);
            pRVar3->RunOnRenderThread(&local_c8);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        }
        ((param_1 + 24))->SetToDefault();
        param_1[88] = '\0';
        param_1[89] = '\0';
        param_1[90] = '\0';
        param_1[91] = '\0';
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bce3f0, 320 bytes, placed by __FILE__ string
    // Texture::GenerateMipMaps()
    void Texture::GenerateMipMaps() {
        int iVar1;
        MapArea* this_00;
        long lVar2;
        RenderDevice* this_01;
        undefined8 uVar3;
        __12 local_d0;
        function local_c8;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (MapArea*)Instance();
        lVar2 = this_00->GetOrigin();
        if (*(char*)(lVar2 + 336) == '\0') {
            uVar3 = logger::default_logger();
            logger::Logger::Log(uVar3, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "textures/OGL/Texture_OGL.cpp",
                                236, "Trying to generate mip maps without device support. No mips will be generated.");
        LAB_100bce4ed:
            if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
                /* WARNING: Subroutine does not return */
                ___stack_chk_fail();
            }
            return;
        }
        iVar1 = GetNativeTextureId(this);
        if (iVar1 != 0) {
            iVar1 = GetMaxLineWidth();
            if (iVar1 != -1) {
                if (field_56 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_Desc.m_GenerateMips",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/Texture_OGL.cpp",
                              220, (char*)0);
                }
                this_01 = (RenderDevice*)((Texture*)this)->Instance();
                local_d0.field_0 = this;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    Texture::GenerateMipMaps()::__12, void>(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, &local_d0);
                this_01->RunOnRenderThread(&local_c8);
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
                goto LAB_100bce4ed;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("(GetNativeTextureId() > 0) && (GetType() != TEXTURE_TYPE_UNKNOWN)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                  "Texture_OGL.cpp",
                  218, (char*)0);
    }

    // 0x100bce540, 80 bytes, placed by __FILE__ string
    // Texture::IsCreatedNative() const
    ulong Texture::IsCreatedNative() {
        char cVar1;
        ulong uVar2;

        cVar1 = IsCreated(this);
        if (cVar1 == '\0') {
            uVar2 = 0;
        } else {
            cVar1 = _glIsTexture(m_nativeTextureId);
            uVar2 = CONCAT71((int7)((ulong)this >> 8), cVar1 != '\0');
            CheckGlErrorInternal("glIsTexture",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/Texture_OGL.cpp",
                                 252);
        }
        return uVar2 & 4294967295;
    }

    // 0x100bce590, 80 bytes, placed by __FILE__ string
    // Texture::SetBaseMipLevel(unsigned int)
    void Texture::SetBaseMipLevel(uint param_1) {
        undefined4 uVar1;

        uVar1 = GetMaxLineWidth();
        uVar1 = TextureTypeForMipLevel(uVar1);
        _glTexParameteri(uVar1, 33084, param_1);
        CheckGlErrorInternal("glTexParameteri",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "textures/OGL/Texture_OGL.cpp",
                             270);
    }

    // 0x100bce670, 176 bytes, placed by class name and neighbouring functions
    // Texture::Invalidate() const
    void Texture::Invalidate() {
        MapArea* this_00;
        long lVar1;
        RenderDevice* this_01;
        Texture* local_d0;
        function local_c8;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (MapArea*)Instance();
        lVar1 = this_00->GetOrigin();
        if (*(char*)(lVar1 + 328) != '\0') {
            this_01 = (RenderDevice*)this_00->Instance();
            local_d0 = this;
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                Texture::Invalidate() const ::__13, void>(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, (__13*)&local_d0);
            this_01->RunOnRenderThread(&local_c8);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bd9510, 144 bytes, placed by __FILE__ string
    // Texture::ReleaseNativeResources(char const*)::$_11::operator()(RenderContext&) const
    /* Texture::ReleaseNativeResources(char
   const*)::$_11::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void Texture::ReleaseNativeResources(char const*)::$_11::operator()(RenderContext* param_1) {
        char cVar1;
        ImmediateRenderContext* this_00;
        RenderContextStateCache* this_01;

        cVar1 = _glIsTexture(field_0);
        CheckGlErrorInternal("glIsTexture",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "textures/OGL/Texture_OGL.cpp",
                             194);
        if (cVar1 != '\0') {
            _glDeleteTextures(1, this);
            CheckGlErrorInternal("glDeleteTextures",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/Texture_OGL.cpp",
                                 197);
        }
        this_00 = (ImmediateRenderContext*)param_1->GetImmediateContext();
        this_01 = (RenderContextStateCache*)this_00->GetStateCache();
        this_01->RemoveTexture(field_0);
    }

    // 0x100bd9630, 192 bytes, placed by __FILE__ string
    // Texture::GenerateMipMaps()::$_12::operator()(RenderContext&) const
    /* Texture::GenerateMipMaps()::$_12::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void Texture::GenerateMipMaps()::$_12::operator()(RenderContext* param_1) {
        Texture* this_00;
        code* pcVar1;
        char cVar2;
        undefined4 uVar3;
        RenderDevice* this_01;
        RenderContext* this_02;
        ImmediateRenderContext* this_03;
        Texture* this_04;
        ActiveTextureSaveRestore local_28;

        this_00 = field_0;
        cVar2 = param_1->IsObjectAlive((RenderResource*)&this_00->field_8);
        if (cVar2 != '\0') {
            this_04 = this_00;
            cVar2 = IsCreated(this_00);
            if (cVar2 != '\0') {
                this_01 = (RenderDevice*)this_04->Instance();
                this_02 = (RenderContext*)this_01->GetCurrentThreadRenderContext();
                this_03 = (ImmediateRenderContext*)this_02->GetImmediateContext();
                new (&local_28) ActiveTextureSaveRestore(this_03);
                this_03->BindTexture(this_00, 0);
                pcVar1 = ___glewGenerateMipmap;
                uVar3 = this_00->GetMaxLineWidth();
                (*pcVar1)(uVar3);
                CheckGlErrorInternal("glGenerateMipmap",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "textures/OGL/Texture_OGL.cpp",
                                     230);
                local_28.~ActiveTextureSaveRestore();
            }
        }
    }

    // 0x100bd9780, 160 bytes, placed by __FILE__ string
    // Texture::Invalidate() const::$_13::operator()(RenderContext&) const
    /* Texture::Invalidate()
   const::$_13::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_Invalidate* const ::$_13::operator()(RenderContext * param_1) {
        Texture* this_00;
        code* pcVar1;
        undefined4 uVar2;
        _func_Invalidate* p_Var3;
        uint uVar4;

        this_00 = *(Texture**)this;
        p_Var3 = (_func_Invalidate*)param_1->IsObjectAlive((RenderResource*)&this_00->field_8);
        if ((char)p_Var3 != '\0') {
            p_Var3 = (_func_Invalidate*)this_00->IsCreated();
            if ((char)p_Var3 != '\0') {
                p_Var3 = (_func_Invalidate*)this_00->GetStreamCountLastMix();
                if ((int)p_Var3 != 0) {
                    uVar4 = 0;
                    do {
                        pcVar1 = ___glewInvalidateTexImage;
                        uVar2 = this_00->GetNativeTextureId();
                        (*pcVar1)(uVar2, uVar4);
                        CheckGlErrorInternal("glInvalidateTexImage",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/textures/OGL/Texture_OGL.cpp",
                                             347);
                        uVar4 = uVar4 + 1;
                        p_Var3 = (_func_Invalidate*)this_00->GetStreamCountLastMix();
                    } while (uVar4 < (uint)p_Var3);
                }
            }
        }
        return p_Var3;
    }

} // namespace jag::render

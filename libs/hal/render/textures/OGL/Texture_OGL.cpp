// libs/hal/render/textures/OGL/Texture_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "libs/oldscape/jagex3/dash3d/Texture.h"

namespace jag::render {
    // 0x100bc9fb0
    void Texture::GenerateBindTextures(TextureType textureType) {
        auto pRVar2 = Instance();
        auto pRVar3 = pRVar2->GetCurrentThreadRenderContext();
        if (!(pRVar3->IsLocked())) {
            LogAssert("RenderDevice::Instance().GetCurrentThreadRenderContext()->IsLocked()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture_OGL.cpp",
                      356, nullptr);
        }
        pRVar2 = (RenderDevice*)pRVar3->Instance();
        pRVar3 = pRVar2->GetCurrentThreadRenderContext();
        auto this_00 = pRVar3->GetImmediateContext();
        this_00->BindInvalidTexture();
        _glBindTexture(textureType, 0);
        CheckGlErrorInternal("glBindTexture",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "textures/OGL/Texture_OGL.cpp",
                             363);
        _glGenTextures(1, &m_nativeTextureId);
        CheckGlErrorInternal("glGenTextures",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "textures/OGL/Texture_OGL.cpp",
                             366);
        m_type = textureType;
        this_00->BindTexture(*this, 0);
        if (!((*(void (*)(...))field_0[4])(this))) {
            LogAssert("IsCreatedNative()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture_OGL.cpp",
                      372, nullptr);
        }
    }

    // 0x100bca0d0
    void Texture::SetFaceMipLevels(const Texture::Desc& desc) {
        unsigned int uVar2 = 1;
        if ((desc.field_32 != '\0') && ((unsigned int)desc.field_16 < 2)) {
            uVar2 = desc.field_24;
            if (uVar2 < 2) {
                if (IsCompressedFormat(desc.field_12) == '\0') {
                    uVar2 = ComputeMaxMipLevels(desc.field_0, desc.field_4);
                    goto LAB_100bca13a;
                }
            }
            if (uVar2 < 2) {
                LogAssert("textureDesc.m_DataMipLevels > 1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                          "OGL/Texture_OGL.cpp",
                          325, nullptr);
            }
            uVar2 = desc.field_24;
        }
    LAB_100bca13a:
        m_faceMipLevels = uVar2;
    }

    // 0x100bca6a0
    void Texture::FinaliseCreate(const char* str, const Texture::Desc& desc) {
        if (str == nullptr) {
            LogAssert("pTextureTypeName != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture_OGL.cpp",
                      380, nullptr);
        }
        if (m_faceMipLevels < (unsigned int)desc.field_28) {
            LogAssert("textureDesc.m_SampleMipLevels <= m_faceMipLevels",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture_OGL.cpp",
                      381, nullptr);
        }
        SetBaseMipLevel(desc.field_36);
        unsigned int uVar1 = GetMaxLineWidth();
        if ((uVar1 & 4294967293) != 37120) {
            _glTexParameteri(uVar1, 33085, m_faceMipLevels);
            CheckGlErrorInternal("glTexParameteri",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/Texture_OGL.cpp",
                                 391);
        }
        field_264 = (float)FrameTime::GetSecondsSinceProgramStart();
        Singleton<BuiltinStates>* this_00 = (Singleton<BuiltinStates>*)(unsigned long)(unsigned int)desc.field_12;
        int iVar2 = GetFormatDepthBits(desc.field_12);
        long lVar3 = this_00->Instance();
        (*(void (*)(...))field_0[3])(this, (unsigned long)(iVar2 != 0) * 64 + lVar3 + 16, 1);
        field_8 = 1;
        uVar1 = GetTextureImageDataSize(m_type, field_24, field_28, field_32, field_36, m_faceMipLevels);
        field_272->Register(str, uVar1);
        field_8.UndoMarkAsDead();
        (*(void (*)(...))field_0[4])(this);
    }

    // 0x100bca7f0
    Texture* Texture::GetNativeTextureId() const {
        return (Texture*)(unsigned long)(unsigned int)m_nativeTextureId;
    }

    // 0x100bca800
    bool Texture::UseGLWriteMutex() {
        return ((NXTPixScreen*)Instance())->GetUIHeight() == 2;
    }

    // 0x100bccfd0
    Texture::~Texture() {
        field_0 = &PTR____cxa_pure_virtual_100f27d48;
        if (m_nativeTextureId == 0) {
            field_448.~SamplerState();
            (&field_368)->~mutex();
            field_304.~SamplerState();
            field_272->~GPUMemoryTrackingEntry();
            field_96.~fixed_string();
        }
        LogAssert("!m_GLTexture",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                  "Texture_OGL.cpp",
                  38, nullptr);
    }

    // 0x100bcdaf0
    Texture* Texture::Lock(unsigned int arg1, LockType lockType, unsigned int arg3) {
        uint32_t in_register_00000034;

        if (*(char*)((((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1) + 92) != '\0') {
            LogAssert("m_Locked == false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture_OGL.cpp",
                      43, nullptr);
        }
        *(uint8_t*)((((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1) + 92) = 1;
        new (this) ResourceDataT(nullptr, 0, 0, false);
        return this;
    }

    // 0x100bcdb40
    void Texture::Unlock(unsigned int arg1) {
        uint32_t in_register_0000003c;

        if (*(char*)((((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1) + 92) == '\0') {
            LogAssert("m_Locked == true",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture_OGL.cpp",
                      51, nullptr);
        }
        *(uint8_t*)((((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1) + 92) = 0;
    }

    // 0x100bcdb80
    void Texture::SetSamplerState(const SamplerState& samplerState, bool arg2) {
        scoped_lock<std::mutex> local_28;

        if (field_84 == 35001) {
            field_304 = samplerState;
        } else {
            local_28 = std::scoped_lock(field_368);
            if (field_432 == '\0') {
                SetSamplerStateInternal(samplerState, arg2);
            } else {
                field_448 = samplerState;
            }
        }
    }

    // 0x100bcdc40
    void Texture::SetSamplerStateInternal(const SamplerState& samplerState, bool arg2) {
        bool cVar1;
        int iVar2;
        uint32_t uVar3;
        RenderDevice* pRVar5;
        Desc* desc;
        ImmediateRenderContext* immediateRenderContext;
        long lVar6;
        Filter* pFVar7;
        float* pfVar8;
        unsigned int arg1;
        float fVar9;
        ActiveTextureSaveRestore local_58;
        SamplerState* local_48;
        GLMinMagFilter local_40;

        if (m_nativeTextureId == 0) {
            LogAssert("m_GLTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture_OGL.cpp",
                      81, "Texture has no native resources set up for it!");
        }
        auto pTVar4 = GetNativeTextureId();
        if ((int)pTVar4 != 0) {
            iVar2 = GetMaxLineWidth();
            if (iVar2 != -1) {
                cVar1 = IsMultiSampleTextureType(m_type);
                if (!cVar1) {
                    local_48 = (SamplerState*)&field_304;
                    pRVar5 = (RenderDevice*)local_48->SSOBeginPtr();
                    desc = (Desc*)samplerState.SSOBeginPtr();
                    cVar1 = *pRVar5 != *desc;
                    if ((cVar1) || (arg2)) {
                        fVar9 = (float)FrameTime::GetSecondsSinceProgramStart();
                        if (field_264 + 1.0 < fVar9) {
                            pRVar5 = (RenderDevice*)pRVar5->Instance();
                            cVar1 = pRVar5->IsRenderThread();
                            if (!cVar1) {
                                pRVar5 = (RenderDevice*)logger::default_logger();
                                pRVar5->Log(false, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "render/textures/OGL/Texture_OGL.cpp",
                                            97,
                                            "Do not use SetSamplerState other than at creation time - instead use the "
                                            "pSamplerState facility of RenderPipelineState");
                            }
                        }
                        pRVar5 = (RenderDevice*)pRVar5->Instance();
                        immediateRenderContext = pRVar5->GetCurrentThreadRenderContext()->GetImmediateContext();
                        local_58 = ActiveTextureSaveRestore(*immediateRenderContext);
                        immediateRenderContext->BindTexture(*this, 0);
                        lVar6 = ((MapArea*)immediateRenderContext->Instance())->GetOrigin();
                        pFVar7 = (Filter*)samplerState.SSOBeginPtr();
                        local_40 = GLMinMagFilter(*pFVar7);
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
                            pfVar8 = std::min<float>(*((lVar6 + 48)), *((pFVar7 + 5)));
                            _glTexParameterf(*pfVar8, 3553, 34046);
                            CheckGlErrorInternal("glTexParameterf",
                                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                 "libs/hal/render/textures/OGL/Texture_OGL.cpp",
                                                 117);
                        }
                        uVar3 = GetMaxLineWidth();
                        _glTexParameteri(uVar3, 10242, pFVar7[1]);
                        CheckGlErrorInternal("glTexParameteri",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/textures/OGL/Texture_OGL.cpp",
                                             120);
                        uVar3 = GetMaxLineWidth();
                        _glTexParameteri(uVar3, 10243, pFVar7[2]);
                        CheckGlErrorInternal("glTexParameteri",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/textures/OGL/Texture_OGL.cpp",
                                             121);
                        if (*(char*)(lVar6 + 165) != '\0') {
                            uVar3 = GetMaxLineWidth();
                            _glTexParameteri(uVar3, 32882, pFVar7[3]);
                            CheckGlErrorInternal("glTexParameteri",
                                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                 "libs/hal/render/textures/OGL/Texture_OGL.cpp",
                                                 124);
                        }
                        iVar2 = GetMaxLineWidth();
                        if ((iVar2 == 3553) && (*(char*)(lVar6 + 182) != '\0')) {
                            _glTexParameteri(3553, 34892, local_40.field_0._8_4_);
                            CheckGlErrorInternal("glTexParameteri",
                                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                 "libs/hal/render/textures/OGL/Texture_OGL.cpp",
                                                 131);
                            uVar3 = GetMaxLineWidth();
                            lVar6 = samplerState.SSOBeginPtr();
                            _glTexParameteri(uVar3, 34893, *(uint32_t*)(lVar6 + 24));
                            CheckGlErrorInternal("glTexParameteri",
                                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                 "libs/hal/render/textures/OGL/Texture_OGL.cpp",
                                                 132);
                        }
                        *local_48 = samplerState;
                        arg1 = field_52;
                        if (arg1 == 0) {
                            arg1 = m_faceMipLevels;
                        }
                        SetMaxMipLevel(arg1);
                    }
                }
                return;
            }
        }
        LogAssert("(GetNativeTextureId() > 0) && (GetType() != TEXTURE_TYPE_UNKNOWN)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                  "Texture_OGL.cpp",
                  82, nullptr);
    }

    // 0x100bce090
    void Texture::SetMaxMipLevel(unsigned int arg1) {
        int iVar1;
        long lVar3;
        long lVar4;
        float* pfVar5;
        unsigned int* puVar6;
        unsigned int local_28;

        if (arg1 == 0) {
            LogAssert("faceMipLevels >= 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture_OGL.cpp",
                      279, nullptr);
        }
        unsigned int uVar7 = 1;
        if ((1 < arg1) && (m_type == 3553)) {
            lVar3 = ((MapArea*)Instance())->GetOrigin();
            if (*(char*)(lVar3 + 166) != '\0') {
                lVar4 = field_304.SSOBeginPtr();
                pfVar5 = std::min<float>(*((lVar3 + 48)), *((lVar4 + 20)));
                if (1.0 < *pfVar5) {
                    iVar1 = math::GetPowerOf2((unsigned int)(long)*pfVar5);
                    if (iVar1 < 1) {
                        LogAssert("pow2 > 0",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "textures/OGL/Texture_OGL.cpp",
                                  300, nullptr);
                    }
                    local_28 = iVar1 - 1;
                    puVar6 = std::min<unsigned int>(arg1, local_28);
                    puVar6 = std::max<unsigned int>(1, *puVar6);
                    uVar7 = *puVar6;
                }
            }
        }
        _glTexParameteri(TextureTypeForMipLevel(GetMaxLineWidth()), 33083, arg1 - uVar7);
        CheckGlErrorInternal("glTexParameteri",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "textures/OGL/Texture_OGL.cpp",
                             307);
    }

    // 0x100bce1d0
    void Texture::SetTemporarySamplerState(const SamplerState* samplerState) {
        Desc* this_00;
        Desc* desc;
        SamplerState* samplerState_00;
        scoped_lock<std::mutex> local_28;

        if ((samplerState != nullptr) || (field_432 != '\0')) {
            local_28 = std::scoped_lock(field_368);
            if (field_432 == '\0') {
                if (samplerState != nullptr) {
                    samplerState_00 = (SamplerState*)GetDefaultMaterial();
                    field_448 = *samplerState_00;
                    field_432 = 1;
                    SetSamplerStateInternal(*samplerState, false);
                }
            } else if (samplerState == nullptr) {
                SetSamplerStateInternal(field_448, false);
                field_432 = 0;
            } else {
                this_00 = (Desc*)samplerState->SSOBeginPtr();
                desc = (Desc*)field_448.SSOBeginPtr();
                if (*this_00 != *desc != '\0') {
                    SetSamplerStateInternal(*samplerState, false);
                }
            }
        }
    }

    // 0x100bce2c0
    void Texture::ReleaseNativeResources(const char* str) {
        RenderDevice* pRVar3;
        Singleton<RenderDevice>* singleton;
        RenderResource* this_00;
        int local_d0[2];
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[160];
        long local_28;

        int iVar1 = *(int*)(str + 296);
        if (iVar1 != 0) {
            singleton = (Singleton<RenderDevice>*)str;
            if (!(this_thread::IsMainThread())) {
                pRVar3 = (RenderDevice*)singleton->Instance();
                if (!(pRVar3->IsRenderThread())) {
                    LogAssert("this_thread::IsMainThread() || RenderDevice::Instance().IsRenderThread()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/Texture_OGL.cpp",
                              183, "Trying to destroy a valid texture outside of the main or render threads");
                }
            }
            ((str + 272))->Unregister();
            this_00 = (RenderResource*)(str + 8);
            this_00->MarkAsDead();
            str[296] = '\0';
            str[297] = '\0';
            str[298] = '\0';
            str[299] = '\0';
            pRVar3 = (RenderDevice*)this_00->Instance();
            local_d0[0] = iVar1;
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                Texture::ReleaseNativeResources(char const*)::__11, void>(local_c8, (__11*)local_d0);
            pRVar3->RunOnRenderThread(*local_c8);
        }
        ((str + 24))->SetToDefault();
        str[88] = '\0';
        str[89] = '\0';
        str[90] = '\0';
        str[91] = '\0';
    }

    // 0x100bce3f0
    void Texture::GenerateMipMaps() {
        int iVar1;
        RenderDevice* this_01;
        Logger* this_02;
        __12 local_d0;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[168];
        long local_20;

        auto this_00 = Instance();
        long lVar2 = this_00->GetOrigin();
        if (*(char*)(lVar2 + 336) == '\0') {
            this_02 = logger::default_logger();
            this_02->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                         "OGL/Texture_OGL.cpp",
                         236, "Trying to generate mip maps without device support. No mips will be generated.");
        LAB_100bce4ed:
            return;
        }
        auto pTVar3 = GetNativeTextureId();
        if ((int)pTVar3 != 0) {
            pTVar3 = this;
            iVar1 = GetMaxLineWidth();
            if (iVar1 != -1) {
                if (field_56 == '\0') {
                    LogAssert("m_Desc.m_GenerateMips",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/Texture_OGL.cpp",
                              220, nullptr);
                }
                this_01 = (RenderDevice*)pTVar3->Instance();
                local_d0.field_0 = this;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    Texture::GenerateMipMaps()::__12, void>(local_c8, &local_d0);
                this_01->RunOnRenderThread(*local_c8);
                goto LAB_100bce4ed;
            }
        }
        LogAssert("(GetNativeTextureId() > 0) && (GetType() != TEXTURE_TYPE_UNKNOWN)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                  "Texture_OGL.cpp",
                  218, nullptr);
    }

    // 0x100bce540
    unsigned long Texture::IsCreatedNative() const {
        unsigned long uVar2;

        bool cVar1 = IsCreated();
        if (!cVar1) {
            uVar2 = 0;
        } else {
            cVar1 = _glIsTexture(m_nativeTextureId);
            uVar2 = (((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)(cVar1));
            CheckGlErrorInternal("glIsTexture",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/Texture_OGL.cpp",
                                 252);
        }
        return uVar2 & 4294967295;
    }

    // 0x100bce590
    void Texture::SetBaseMipLevel(unsigned int arg1) {
        _glTexParameteri(TextureTypeForMipLevel(GetMaxLineWidth()), 33084, arg1);
        CheckGlErrorInternal("glTexParameteri",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "textures/OGL/Texture_OGL.cpp",
                             270);
    }

    // 0x100bce670
    void Texture::Invalidate() const {
        RenderDevice* this_01;
        Texture* local_d0;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[168];
        long local_20;

        auto this_00 = Instance();
        long lVar1 = this_00->GetOrigin();
        if (*(char*)(lVar1 + 328) != '\0') {
            this_01 = (RenderDevice*)this_00->Instance();
            local_d0 = this;
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                Texture::Invalidate() const ::__13, void>(local_c8, (__13*)&local_d0);
            this_01->RunOnRenderThread(*local_c8);
        }
    }

    // 0x100bd9510
    void Texture::ReleaseNativeResources(char const*)::$_11::operator()(RenderContext& renderContext) const {
        bool cVar1 = _glIsTexture(field_0);
        CheckGlErrorInternal("glIsTexture",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "textures/OGL/Texture_OGL.cpp",
                             194);
        if (cVar1) {
            _glDeleteTextures(1, this);
            CheckGlErrorInternal("glDeleteTextures",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/Texture_OGL.cpp",
                                 197);
        }
        (renderContext.GetImmediateContext()->GetStateCache())->RemoveTexture(field_0);
    }

    // 0x100bd9630
    void Texture::GenerateMipMaps()::$_12::operator()(RenderContext& renderContext) const {
        void* pcVar1;
        uint32_t uVar3;
        ImmediateRenderContext* immediateRenderContext;
        Texture* this_03;
        ActiveTextureSaveRestore local_28;

        Texture* this_00 = field_0;
        if (renderContext.IsObjectAlive(&this_00->field_8)) {
            this_03 = this_00;
            if (IsCreated(this_00)) {
                immediateRenderContext =
                    (((RenderDevice*)this_03->Instance())->GetCurrentThreadRenderContext())->GetImmediateContext();
                local_28 = ActiveTextureSaveRestore(*immediateRenderContext);
                immediateRenderContext->BindTexture(*this_00, 0);
                pcVar1 = ___glewGenerateMipmap;
                uVar3 = this_00->GetMaxLineWidth();
                (*pcVar1)(uVar3);
                CheckGlErrorInternal("glGenerateMipmap",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "textures/OGL/Texture_OGL.cpp",
                                     230);
            }
        }
    }

    // 0x100bd9780
    void Texture::Invalidate() const ::$_13::operator()(RenderContext& renderContext) const {
        void* pcVar1;
        unsigned int uVar4;
        Texture* pTVar5;
        unsigned int uVar6;

        Texture* this_00 = *(Texture**)this;
        if (renderContext.IsObjectAlive(&this_00->field_8)) {
            if (this_00->IsCreated()) {
                if (this_00->GetStreamCountLastMix() != 0) {
                    uVar6 = 0;
                    do {
                        pcVar1 = ___glewInvalidateTexImage;
                        pTVar5 = this_00->GetNativeTextureId();
                        (*pcVar1)((unsigned long)pTVar5 & 4294967295, uVar6);
                        CheckGlErrorInternal("glInvalidateTexImage",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/textures/OGL/Texture_OGL.cpp",
                                             347);
                        uVar6 = uVar6 + 1;
                        uVar4 = this_00->GetStreamCountLastMix();
                    } while (uVar6 < uVar4);
                }
            }
        }
    }

} // namespace jag::render

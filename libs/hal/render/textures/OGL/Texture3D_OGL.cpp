// libs/hal/render/textures/OGL/Texture3D_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "libs/hal/render/textures/Texture3D.h"

namespace jag::render {
    // 0x100bcbc30
    Texture3D::Texture3D(const char* str) : Texture(str), field_16(32879) {}

    // 0x100bcbc70
    uint32_t Texture3D::Create(const Texture::Desc& desc, const ResourceDataT<unsigned char const>* resourceData) {
        char* str1;
        char* str2;
        uint64_t uVar19;
        long lVar20;
        Singleton<RenderDevice>* this_04;
        uint8_t local_a8[24];
        String local_90;

        local_a8._16_8_ = resourceData;
        if (field_296 != 0) {
            LogAssert("!m_GLTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture3D_OGL.cpp",
                      24, "Call Destroy() before calling Create() again");
        }
        ImmediateRenderContext* immediateRenderContext =
            (((RenderDevice*)Instance())->GetCurrentThreadRenderContext())->GetImmediateContext();
        ActiveTextureSaveRestore local_b8(*immediateRenderContext);
        GenerateBindTextures(32879);
        char cVar17 = field_96.empty();
        if (!cVar17) {
            str1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
            local_90 = Instrumentation::String(str1, str2);
            5890->~AutoSingleton();
        }
        int iVar13 = desc.field_0;
        int iVar14 = desc.field_4;
        int iVar15 = desc.field_8;
        int iVar16 = desc.field_12;
        uint32_t uVar9 = desc.field_16;
        int iVar10 = desc.field_20;
        int iVar11 = desc.field_24;
        int iVar12 = desc.field_28;
        uint8_t uVar4 = desc.field_32;
        uint32_t uVar5 = *(uint32_t*)&desc.field_33;
        uint32_t uVar6 = desc.field_36;
        uint8_t uVar7 = desc.field_40;
        uint64_t uVar8 = *(uint64_t*)&desc.field_41;
        cVar17 = desc.field_56;
        uint32_t uVar3 = *(uint32_t*)&desc.field_57;
        uint32_t uVar18 = desc.field_60;
        *(uint64_t*)&field_72 = desc.field_48;
        field_80 = cVar17;
        *(uint32_t*)&field_81 = uVar3;
        *(uint32_t*)&field_84 = uVar18;
        field_56 = uVar4;
        *(uint32_t*)&field_57 = uVar5;
        *(uint32_t*)&field_60 = uVar6;
        field_64 = uVar7;
        *(uint64_t*)&field_65 = uVar8;
        *(uint32_t*)&field_40 = uVar9;
        *(int*)&field_44 = iVar10;
        *(int*)&field_48 = iVar11;
        *(int*)&field_52 = iVar12;
        field_24 = iVar13;
        field_28 = iVar14;
        field_32 = iVar15;
        field_36 = iVar16;
        SetFaceMipLevels(desc);
        new (local_a8) GLFormat(desc.field_12);
        uint64_t resourceData_00 = local_a8._16_8_;
        if ((ResourceDataT<unsigned char const>*)local_a8._16_8_ == nullptr) {
            uVar19 = 0;
        } else {
            uVar19 = *(uint64_t*)local_a8._16_8_;
        }
        (*___glewTexImage3D)(32879, desc.field_36, local_a8._0_4_, desc.field_0, desc.field_4, desc.field_8, 0,
                             local_a8._4_4_, local_a8._8_4_, uVar19);
        CheckGlErrorInternal("glTexImage3D",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "textures/OGL/Texture3D_OGL.cpp",
                             56);
        unsigned int uVar1 = *(unsigned int*)&field_88;
        unsigned int uVar2 = desc.field_24;
        if ((1 < uVar1) && (uVar2 < 2)) {
            this_04 = (Singleton<RenderDevice>*)(unsigned long)(unsigned int)desc.field_12;
            cVar17 = IsCompressedFormat(desc.field_12);
            if (!cVar17) {
                lVar20 = ((MapArea*)this_04->Instance())->GetOrigin();
                if (*(char*)(lVar20 + 336) == '\0') {
                    (logger::default_logger())
                        ->Log(false, 3,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/Texture3D_OGL.cpp",
                              69, "Auto-generating mips isn\'t supported on this device. Disabling mips.");
                    *(uint32_t*)&field_88 = 1;
                } else {
                    (*___glewGenerateMipmap)(32879);
                    CheckGlErrorInternal("glGenerateMipmap",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/textures/OGL/Texture3D_OGL.cpp",
                                         65);
                }
                goto LAB_100bcbee0;
            }
        }
        if (1 < uVar1) {
            if (uVar2 < 2) {
                LogAssert("textureDesc.m_DataMipLevels > 1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                          "OGL/Texture3D_OGL.cpp",
                          75, nullptr);
            }
            CreateSubLevelMips(desc.field_24, resourceData_00);
        }
    LAB_100bcbee0:
        uVar18 = FinaliseCreate("Texture3D", desc);
        return uVar18;
    }

    // 0x100bcbf50
    void Texture3D::CreateSubLevelMips(unsigned int arg1, const ResourceDataT<unsigned char const>* resourceData) {
        unsigned int uVar2;
        uint8_t local_58[28];
        unsigned int local_3c;
        unsigned int local_38;
        uint32_t local_34;

        new (local_58) GLFormat(field_36);
        unsigned int uVar1 = 1;
        if (1 < arg1) {
            local_3c = field_24 >> 1;
            local_38 = field_28 >> 1;
            uVar1 = field_32;
            local_34 = local_58._0_4_;
            local_58._16_8_ = (uint64_t)((unsigned int)local_58._4_4_);
            uVar2 = 1;
            do {
                (*___glewTexImage3D)(32879, uVar2, local_34, local_3c, local_38, uVar1 >> 1, 0, local_58._16_8_,
                                     local_58._8_4_, resourceData);
                CheckGlErrorInternal("glTexImage3D",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "textures/OGL/Texture3D_OGL.cpp",
                                     162);
                uVar2 = uVar2 + 1;
            } while (arg1 != uVar2);
            uVar1 = arg1;
        }
        if (uVar1 != arg1) {
            LogAssert("iMip == maxLevels",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture3D_OGL.cpp",
                      166, nullptr);
        }
    }

    // 0x100bcc050
    void Texture3D::Update(unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4,
                           unsigned int arg5, unsigned int arg6, unsigned int arg7, Format format, const void* arg9) {
        bool cVar1;
        bool arg3_00;
        int iVar2;
        RenderDevice* pRVar4;
        Singleton<RenderDevice>* this_00;
        WrapArrayValueCopy<unsigned char>* this_01;
        WrapArrayValueCopy<unsigned char> local_178;
        uint8_t local_148[88];
        Texture* local_f0;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        unsigned int local_e4 = arg5;
        unsigned int local_e0 = arg4;
        unsigned int local_dc = arg3;
        if (arg9 == nullptr) {
            LogAssert("pSrcTexelData != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture3D_OGL.cpp",
                      94, nullptr);
        }
        auto pTVar3 = GetNativeTextureId();
        if ((int)pTVar3 != 0) {
            iVar2 = GetMaxLineWidth();
            if (iVar2 != -1) {
                cVar1 = IsCompressedFormat(field_36);
                local_148._24_4_ = local_e0;
                local_148._28_4_ = local_e4;
                if (cVar1) {
                    LogAssert("!IsCompressedFormat(m_Desc.m_Format)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/Texture3D_OGL.cpp",
                              96, nullptr);
                }
                local_f0 = (Texture*)this;
                ValidateUpdateParams(arg1, arg2, local_dc, local_e0, local_e4, arg6, arg7);
                this_00 = (Singleton<RenderDevice>*)(unsigned long)(unsigned int)local_148._28_4_;
                iVar2 = GetImageByteSize(local_148._28_4_, arg6, format, arg1);
                pRVar4 = (RenderDevice*)this_00->Instance();
                arg3_00 = (bool)pRVar4->ShouldDefer();
                this_01 = &local_178;
                new (this_01) WrapArrayValueCopy<unsigned char>(
                    arg9, (unsigned long)(unsigned int)(iVar2 * local_148._24_4_), arg3_00);
                pRVar4 = (RenderDevice*)this_01->Instance();
                local_148._0_8_ = local_f0;
                local_148._8_4_ = format;
                local_148._20_4_ = local_dc;
                local_148._32_4_ = arg6;
                local_148._36_4_ = arg7;
                local_148._12_4_ = arg1;
                local_148._16_4_ = arg2;
                new ((local_148 + 40)) WrapArrayValueCopy<unsigned char>(local_178);
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                      unsigned int, unsigned int, Format, void const*)::__8,
                    void>(local_d8, (__8*)local_148);
                pRVar4->RunOnRenderThread(*local_d8);
                Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                       Format, void const*)::$_8::~__8((__8*)local_148);
                return;
            }
        }
        LogAssert("(GetNativeTextureId() > 0) && (GetType() != TEXTURE_TYPE_UNKNOWN)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                  "Texture3D_OGL.cpp",
                  95, nullptr);
    }

    // 0x100bd8f60
    Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                      Format, void const*)::$_8::$_8($_8&& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 32);
        field_32 = (int)uVar1;
        field_36 = (int)((unsigned long)uVar1 >> 32);
        Texture* pTVar2 = *(Texture**)arg1;
        uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar4 = *(uint64_t*)(arg1 + 24);
        field_16 = (int)uVar3;
        field_20 = (int)((unsigned long)uVar3 >> 32);
        field_24 = (int)uVar4;
        field_28 = (int)((unsigned long)uVar4 >> 32);
        field_0 = pTVar2;
        field_8 = (int)uVar1;
        field_12 = (int)((unsigned long)uVar1 >> 32);
        new (&field_40) WrapArrayValueCopy<unsigned char>(*((arg1 + 40)));
    }

    // 0x100bd8fd0
    Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                      Format, void const*)::$_8::$_8(const $_8& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 32);
        field_32 = (int)uVar1;
        field_36 = (int)((unsigned long)uVar1 >> 32);
        Texture* pTVar2 = *(Texture**)arg1;
        uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar4 = *(uint64_t*)(arg1 + 24);
        field_16 = (int)uVar3;
        field_20 = (int)((unsigned long)uVar3 >> 32);
        field_24 = (int)uVar4;
        field_28 = (int)((unsigned long)uVar4 >> 32);
        field_0 = pTVar2;
        field_8 = (int)uVar1;
        field_12 = (int)((unsigned long)uVar1 >> 32);
        new (&field_40) WrapArrayValueCopy<unsigned char>(*((arg1 + 40)));
    }

    // 0x100bd9020
    void Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                           unsigned int, Format, void const*)::$_8::operator()(RenderContext& renderContext) const {
        uint32_t uVar1;
        uint32_t uVar2;
        ImmediateRenderContext* immediateRenderContext;
        uint64_t uVar4;
        Texture* this_01;
        uint8_t local_80[4];
        uint32_t local_7c;
        uint32_t local_78;
        ActiveTextureSaveRestore local_70;
        unique_lock<std::mutex> local_60;
        void* local_50;
        uint32_t local_44;
        uint32_t local_40;
        uint32_t local_3c;
        uint32_t local_38;
        uint32_t local_34;

        Texture* this_00 = field_0;
        if (renderContext.IsObjectAlive(&this_00->field_8)) {
            if (this_00->IsCreated()) {
                this_01 = (Texture*)local_80;
                new (this_01) GLFormat(field_8);
                if (!(this_01->UseGLWriteMutex())) {
                    local_60 = std::unique_lock<std::mutex>();
                } else {
                    local_60 = std::unique_lock<std::mutex>(this_00->field_368);
                }
                immediateRenderContext = renderContext.GetImmediateContext();
                local_70 = ActiveTextureSaveRestore(*immediateRenderContext);
                immediateRenderContext->BindTexture(*this_00, 0);
                local_50 = ___glewTexSubImage3D;
                local_44 = field_12;
                local_40 = field_16;
                local_3c = field_20;
                local_38 = field_24;
                local_34 = field_28;
                uVar1 = field_32;
                uVar2 = field_36;
                uVar4 = field_40.end();
                (*local_50)(32879, local_44, local_40, local_3c, local_38, local_34, uVar1, uVar2, local_7c, local_78,
                            uVar4);
                CheckGlErrorInternal("glTexSubImage3D",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "textures/OGL/Texture3D_OGL.cpp",
                                     124);
            }
        }
    }

} // namespace jag::render

// libs/hal/render/textures/OGL/TextureRenderBuffer_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "TextureRenderBuffer_OGL.h"

namespace jag::render {
    // 0x100bccf40
    TextureRenderBuffer::TextureRenderBuffer(const char* str) : Texture(str), field_16(36161) {}

    // 0x100bccf80
    TextureRenderBuffer::~TextureRenderBuffer() {
        Destroy();
        if (field_296 == -1) {
            field_296 = 0;
        }
    }

    // 0x100bcd0e0
    void TextureRenderBuffer::Create(const Texture::Desc& desc) {
        TextureType TVar1;
        uint64_t uVar2;
        uint64_t uVar4;
        unsigned int uVar15;
        char* str2;
        int iVar16;
        char* pcVar17;
        uint8_t local_b0[24];
        AutoSingleton<ShaderThreadPoolSingleton> local_98;
        String local_90;

        GetName();
        if (field_296 != 0) {
            LogAssert("!m_GLTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "TextureRenderBuffer_OGL.cpp",
                      36, "Call Destroy() before calling Create() again");
        }
        (*___glewGenRenderbuffers)(1, &field_296);
        CheckGlErrorInternal("glGenRenderbuffers",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "textures/OGL/TextureRenderBuffer_OGL.cpp",
                             38);
        (*___glewBindRenderbuffer)(field_16, field_296);
        CheckGlErrorInternal("glBindRenderbuffer",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "textures/OGL/TextureRenderBuffer_OGL.cpp",
                             39);
        void* pcVar13 = ___glewRenderbufferStorage;
        if ((desc.field_0 != 0) && (desc.field_4 != 0)) {
            uVar15 = desc.field_16;
            if (uVar15 < 2) {
                TVar1 = field_16;
                new (local_b0) GLFormat(desc.field_12);
                (*pcVar13)(TVar1, local_b0._0_4_, desc.field_0, desc.field_4);
                pcVar17 = "glRenderbufferStorage";
                iVar16 = 50;
            } else {
                local_b0._16_8_ = ___glewRenderbufferStorageMultisample;
                TVar1 = field_16;
                new (local_b0) GLFormat(desc.field_12);
                (*(void (*)(...))local_b0._16_8_)(TVar1, uVar15, local_b0._0_4_, desc.field_0, desc.field_4);
                pcVar17 = "glRenderbufferStorageMultisample";
                iVar16 = 46;
            }
            CheckGlErrorInternal(pcVar17,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/TextureRenderBuffer_OGL.cpp",
                                 iVar16);
        }
        if (field_96.empty() == '\0') {
            pcVar17 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
            local_90 = Instrumentation::String(pcVar17, str2);
            36161->~AutoSingleton();
        }
        iVar16 = desc.field_0;
        int iVar6 = desc.field_4;
        int iVar7 = desc.field_8;
        int iVar8 = desc.field_12;
        uint32_t uVar9 = desc.field_16;
        int iVar10 = desc.field_20;
        int iVar11 = desc.field_24;
        int iVar12 = desc.field_28;
        uVar2._0_1_ = desc.field_32;
        uVar2._1_3_ = *(uint32_t*)&desc.field_33;
        uVar2._4_4_ = desc.field_36;
        uint64_t uVar3 = *(uint64_t*)&desc.field_40;
        uint32_t uVar5 = *(uint32_t*)((long)&desc.field_48 + 4);
        uVar4._0_1_ = desc.field_56;
        uVar4._1_3_ = *(uint32_t*)&desc.field_57;
        uVar4._4_4_ = desc.field_60;
        field_72 = *(uint32_t*)&desc.field_48;
        field_76 = uVar5;
        field_80 = (int)uVar4;
        field_84 = (int)((unsigned long)uVar4 >> 32);
        field_24 = iVar16;
        field_28 = iVar6;
        field_32 = iVar7;
        field_36 = iVar8;
        field_56 = (int)uVar2;
        field_60 = (int)((unsigned long)uVar2 >> 32);
        field_64 = (int)uVar3;
        field_68 = (int)((unsigned long)uVar3 >> 32);
        field_40 = uVar9;
        field_44 = iVar10;
        field_48 = iVar11;
        field_52 = iVar12;
        field_84 = 35001;
        uVar15 = GetTextureImageDataSize(field_16, field_24, field_28, field_32, field_36, field_88);
        field_272->Register("TextureRenderBuffer", uVar15);
        field_8.UndoMarkAsDead();
        IsCreatedNative();
    }

    // 0x100bcd370
    void TextureRenderBuffer::BindNativeBackBuffer(unsigned int arg1) {
        uint8_t local_58[48];
        uint64_t local_28;
        uint64_t uStack_20;

        if (1 < field_296 + 1U) {
            LogAssert("!m_GLTexture || m_GLTexture == NATIVE_BACKBUFFER_RENDERBUFFER_ID",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "TextureRenderBuffer_OGL.cpp",
                      75, "Call Destroy() before calling Create() again");
        }
        field_296 = -1;
        new (local_58) Texture::Desc();
        field_72 = (uint32_t)local_28;
        field_76 = local_28._4_4_;
        *(uint64_t*)&field_80 = uStack_20;
        field_56 = local_58._32_4_;
        field_60 = local_58._36_4_;
        field_64 = local_58._40_4_;
        field_68 = local_58._44_4_;
        field_40 = local_58._16_4_;
        field_44 = local_58._20_4_;
        field_48 = local_58._24_4_;
        field_52 = local_58._28_4_;
        field_24 = local_58._0_4_;
        field_28 = local_58._4_4_;
        field_32 = local_58._8_4_;
        field_36 = local_58._12_4_;
        field_36 = GetBackBufferFormat(arg1);
        field_84 = 35001;
        field_8.DisableMarkAsDead(3);
    }

    // 0x100bcd420
    void TextureRenderBuffer::GetBackBufferFormat(unsigned int arg1) {
        uint32_t uVar1;
        Logger* logger;
        unsigned int uVar2;
        unsigned int uVar3;
        unsigned int uVar4;
        unsigned int uVar5;
        unsigned int local_4c;
        unsigned int local_48;
        unsigned int local_44;
        unsigned int local_40;
        unsigned int local_3c;
        unsigned int local_38;
        unsigned int local_34;

        int local_50 = 0;
        (*___glewGetFramebufferAttachmentParameteriv)(36009, arg1, 36048, &local_50);
        CheckGlErrorInternal("glGetFramebufferAttachmentParameteriv",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "textures/OGL/TextureRenderBuffer_OGL.cpp",
                             148);
        if (local_50 == 36161) {
            local_38 = 0;
            local_34 = 0;
            (*___glewGetFramebufferAttachmentParameteriv)(36009, arg1, 36049, &local_38);
            CheckGlErrorInternal("glGetFramebufferAttachmentParameteriv",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/TextureRenderBuffer_OGL.cpp",
                                 155);
            if (local_38 != 0) {
                (*___glewBindRenderbuffer)(36161);
                CheckGlErrorInternal("glBindRenderbuffer",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "textures/OGL/TextureRenderBuffer_OGL.cpp",
                                     158);
                (*___glewGetRenderbufferParameteriv)(36161, 36164, &local_34);
                CheckGlErrorInternal("glGetRenderbufferParameteriv",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "textures/OGL/TextureRenderBuffer_OGL.cpp",
                                     159);
            }
            uVar1 = GetFormatByRenderBufferFormat(local_34);
        } else if (arg1 - 6145 < 2) {
            local_38 = 0;
            local_34 = 0;
            (*___glewGetFramebufferAttachmentParameteriv)(36009, 6145, 33302, &local_38);
            CheckGlErrorInternal("glGetFramebufferAttachmentParameteriv(depth)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/TextureRenderBuffer_OGL.cpp",
                                 174);
            (*___glewGetFramebufferAttachmentParameteriv)(36009, 6145, 33303, &local_34);
            CheckGlErrorInternal("glGetFramebufferAttachmentParameteriv(stencil)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/TextureRenderBuffer_OGL.cpp",
                                 175);
            if ((((local_38 != 24) || (uVar1 = 14, local_34 != 8)) &&
                 (((local_38 != 24 || (uVar1 = 15, local_34 != 0)) &&
                   ((local_38 != 16 || (uVar1 = 22, local_34 != 0)))))) &&
                ((local_38 != 32 || (uVar1 = 12, local_34 != 0)))) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "textures/OGL/TextureRenderBuffer_OGL.cpp",
                                196,
                                "No existing depth format for %d depth bits and %d stencil bits. returning UNKNOWN");
            }
        } else {
            local_38 = 0;
            local_34 = 0;
            local_4c = 0;
            local_48 = 0;
            local_44 = 0;
            local_40 = 0;
            local_3c = 0;
            _glGetIntegerv(35739, &local_38);
            CheckGlErrorInternal("glGetIntv(format)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/TextureRenderBuffer_OGL.cpp",
                                 211);
            (*___glewGetFramebufferAttachmentParameteriv)(36009, arg1, 33296, &local_34);
            CheckGlErrorInternal("glGetIntv(encoding)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/TextureRenderBuffer_OGL.cpp",
                                 214);
            (*___glewGetFramebufferAttachmentParameteriv)(36009, arg1, 33297, &local_4c);
            CheckGlErrorInternal("glGetIntv(type)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/TextureRenderBuffer_OGL.cpp",
                                 215);
            (*___glewGetFramebufferAttachmentParameteriv)(36009, arg1, 33298, &local_48);
            CheckGlErrorInternal("glGetIntv(redBits)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/TextureRenderBuffer_OGL.cpp",
                                 216);
            (*___glewGetFramebufferAttachmentParameteriv)(36009, arg1, 33299, &local_44);
            CheckGlErrorInternal("glGetIntv(greenBits)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/TextureRenderBuffer_OGL.cpp",
                                 217);
            (*___glewGetFramebufferAttachmentParameteriv)(36009, arg1, 33300, &local_40);
            CheckGlErrorInternal("glGetIntv(blueBits)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/TextureRenderBuffer_OGL.cpp",
                                 218);
            (*___glewGetFramebufferAttachmentParameteriv)(36009, arg1, 33301, &local_3c);
            CheckGlErrorInternal("glGetIntv(alphaBits)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/TextureRenderBuffer_OGL.cpp",
                                 219);
            uVar2 = local_4c ^ 35863;
            uVar4 = local_48 ^ 8;
            uVar3 = local_44 ^ 8;
            uVar5 = local_40 ^ 8;
            if (((((local_38 != 6407 || uVar2 != 0) || (uVar3 != 0 || uVar4 != 0)) || uVar5 != 0) ||
                 (uVar1 = 16, local_34 != 9729)) &&
                (uVar1 = 17, (((local_38 != 6407 || uVar2 != 0) || (uVar3 != 0 || uVar4 != 0)) || uVar5 != 0) ||
                                 local_34 != 35904)) {
                if (((local_3c != 8 ||
                      (((local_38 != 6408 || uVar2 != 0) || (uVar3 != 0 || uVar4 != 0)) || uVar5 != 0)) ||
                     (uVar1 = 7, local_34 != 9729)) &&
                    (uVar1 = 8, (local_3c != 8 ||
                                 (((local_38 != 6408 || uVar2 != 0) || (uVar3 != 0 || uVar4 != 0)) || uVar5 != 0)) ||
                                    local_34 != 35904)) {
                    logger = logger::default_logger();
                    uVar1 = 0;
                    logger->Log(false, 5,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "textures/OGL/TextureRenderBuffer_OGL.cpp",
                                236,
                                "WARNING: Need a parameter -> format mapping for format %04X, encoding %04X, type "
                                "%04X, %d,%d,%d,%d",
                                (unsigned long)local_38, (unsigned long)local_34, (unsigned long)local_4c,
                                (unsigned long)local_48, (unsigned long)local_44, (unsigned long)local_40,
                                (unsigned long)local_3c);
                }
            }
        }
        return uVar1;
    }

    // 0x100bcd880
    void TextureRenderBuffer::Destroy() {
        __10 _Var1;
        RenderDevice* pRVar3;
        TextureRenderBuffer* this_00;
        Singleton<RenderDevice>* this_01;
        __10 local_d0;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[160];
        long local_28;

        _Var1.field_0 = field_296;
        if (1 < _Var1.field_0 + 1) {
            this_00 = this;
            if (!(this_thread::IsMainThread())) {
                pRVar3 = (RenderDevice*)this_00->Instance();
                if (!(pRVar3->IsRenderThread())) {
                    LogAssert("this_thread::IsMainThread() || RenderDevice::Instance().IsRenderThread()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/TextureRenderBuffer_OGL.cpp",
                              89, "Trying to destroy a valid renderbuffer outside of the main or render threads");
                }
            }
            field_272->Unregister();
            this_01 = (Singleton<RenderDevice>*)&field_8;
            this_01->MarkAsDead();
            field_296 = 0;
            pRVar3 = (RenderDevice*)this_01->Instance();
            local_d0[0].field_0 = _Var1.field_0;
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                TextureRenderBuffer::Destroy()::__10, void>(local_c8, &local_d0);
            pRVar3->RunOnRenderThread(*local_c8);
        }
        field_24.SetToDefault();
        field_88 = 0;
    }

    // 0x100bcd9b0
    unsigned long TextureRenderBuffer::IsCreatedNative() const {
        uint64_t uVar3;
        unsigned long uVar2;

        bool cVar1 = IsCreated();
        if (!cVar1) {
            uVar2 = 0;
        } else {
            uVar3 = (uint64_t)((unsigned long)this >> 8);
            if (field_296 == -1) {
                uVar2 = (((uint64_t)uVar3 << 8) | (uint8_t)1);
            } else {
                cVar1 = (*___glewIsRenderbuffer)();
                uVar2 = (((uint64_t)uVar3 << 8) | (uint8_t)(cVar1));
                CheckGlErrorInternal("glIsRenderbuffer",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "textures/OGL/TextureRenderBuffer_OGL.cpp",
                                     129);
            }
        }
        return uVar2 & 4294967295;
    }

    // 0x100bcda20
    bool TextureRenderBuffer::IsNativeBackBuffer() const {
        return field_296 == -1;
    }

    // 0x100bcda30
    void TextureRenderBuffer::SetNativeBackBufferSize(unsigned int arg1, unsigned int arg2) {
        if (IsNativeBackBuffer() == '\0') {
            LogAssert("IsNativeBackBuffer()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "TextureRenderBuffer_OGL.cpp",
                      140, nullptr);
        }
        field_24 = arg1;
        field_28 = arg2;
    }

    // 0x100bd9410
    void TextureRenderBuffer::Destroy()::$_10::operator()(RenderContext& renderContext) const {
        bool cVar1 = (*___glewIsRenderbuffer)(field_0);
        CheckGlErrorInternal("glIsRenderbuffer",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "textures/OGL/TextureRenderBuffer_OGL.cpp",
                             100);
        if (cVar1) {
            (*___glewDeleteRenderbuffers)(1, this);
            CheckGlErrorInternal("glDeleteRenderbuffers",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/TextureRenderBuffer_OGL.cpp",
                                 103);
        }
    }

} // namespace jag::render

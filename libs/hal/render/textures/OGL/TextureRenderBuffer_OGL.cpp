// libs/hal/render/textures/OGL/TextureRenderBuffer_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "TextureRenderBuffer_OGL.h"

namespace jag::render {
    // 0x100bccf40, 48 bytes, base-object constructor, placed by class name and debug map
    // TextureRenderBuffer::TextureRenderBuffer(char const*)
    void TextureRenderBuffer::TextureRenderBuffer(char* param_1) {
        new (this) Texture(param_1);
        field_0 = &PTR__TextureRenderBuffer_100f27d10;
        field_16 = 36161;
    }

    // 0x100bccf70, 16 bytes, complete-object constructor, placed by class name and debug map
    // TextureRenderBuffer::TextureRenderBuffer(char const*): jumps straight to the base-object constructor

    // 0x100bccf80, 80 bytes, base-object destructor, placed by class name and debug map
    // TextureRenderBuffer::~TextureRenderBuffer()
    void TextureRenderBuffer::~TextureRenderBuffer() {
        field_0 = &PTR__TextureRenderBuffer_100f27d10;
        Destroy(this);
        if (*(int*)field_296 == -1) {
            *(undefined4*)field_296 = 0;
        }
        ~Texture();
    }

    // 0x100bcd0b0, 16 bytes, complete-object destructor, placed by class name and debug map
    // TextureRenderBuffer::~TextureRenderBuffer(): jumps straight to the base-object destructor

    // 0x100bcd0c0, 32 bytes, deleting destructor, placed by class name and debug map
    // TextureRenderBuffer::~TextureRenderBuffer()
    void TextureRenderBuffer::~TextureRenderBuffer() {
        ~TextureRenderBuffer(this);
        operator_delete(this);
    }

    // 0x100bcd0e0, 656 bytes, placed by class name and debug map
    // TextureRenderBuffer::Create(Texture::Desc const&)
    void TextureRenderBuffer::Create(Desc* param_1) {
        int iVar1;
        undefined4 uVar2;
        uint uVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        undefined4 uVar7;
        undefined4 uVar8;
        undefined4 uVar9;
        undefined4 uVar10;
        undefined4 uVar11;
        undefined4 uVar12;
        undefined4 uVar13;
        code* pcVar14;
        uint uVar16;
        undefined8 uVar17;
        char* pcVar18;
        int iVar19;
        char* pcVar20;
        undefined1 local_b0[24];
        undefined1 local_98[8];
        String local_90[88];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        iVar19 = param_1->field_0;
        iVar1 = param_1->field_4;
        uVar17 = GetName();
        1077936128->~AutoSingleton(local_98, "TextureRenderBuffer Create (width: %i, height: %i, name: %s)", iVar19,
                                   iVar1, uVar17);
        if (*(int*)field_296 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_GLTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "TextureRenderBuffer_OGL.cpp",
                      36, "Call Destroy() before calling Create() again");
        }
        (*___glewGenRenderbuffers)(1, field_296);
        CheckGlErrorInternal("glGenRenderbuffers",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "textures/OGL/TextureRenderBuffer_OGL.cpp",
                             38);
        (*___glewBindRenderbuffer)(field_16, *(undefined4*)field_296);
        CheckGlErrorInternal("glBindRenderbuffer",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "textures/OGL/TextureRenderBuffer_OGL.cpp",
                             39);
        pcVar14 = ___glewRenderbufferStorage;
        if ((param_1->field_0 != 0) && (param_1->field_4 != 0)) {
            uVar16 = param_1->field_16;
            if (uVar16 < 2) {
                iVar19 = field_16;
                new (local_b0) GLFormat(param_1->field_12);
                (*pcVar14)(iVar19, local_b0._0_4_, param_1->field_0, param_1->field_4);
                pcVar20 = "glRenderbufferStorage";
                iVar19 = 50;
            } else {
                local_b0._16_8_ = ___glewRenderbufferStorageMultisample;
                iVar19 = field_16;
                new (local_b0) GLFormat(param_1->field_12);
                (*(code*)local_b0._16_8_)(iVar19, uVar16, local_b0._0_4_, param_1->field_0, param_1->field_4);
                pcVar20 = "glRenderbufferStorageMultisample";
                iVar19 = 46;
            }
            CheckGlErrorInternal(pcVar20,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/TextureRenderBuffer_OGL.cpp",
                                 iVar19);
        }
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
            '\0') {
            uVar2 = *(undefined4*)field_296;
            pcVar20 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pcVar18 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
            Instrumentation::String::String(local_90, pcVar20, pcVar18);
            36161->~AutoSingleton(uVar2, local_90);
            local_90->~String();
        }
        uVar16 = param_1->field_0;
        uVar3 = param_1->field_4;
        iVar19 = param_1->field_8;
        iVar1 = param_1->field_12;
        uVar2 = param_1->field_16;
        iVar4 = param_1->field_20;
        iVar5 = param_1->field_24;
        iVar6 = param_1->field_28;
        uVar7 = *(undefined4*)&param_1->field_32;
        uVar8 = param_1->field_36;
        uVar9 = *(undefined4*)&param_1->field_40;
        uVar10 = *(undefined4*)&param_1->field_44;
        uVar11 = *(undefined4*)((long)&param_1->field_48 + 4);
        uVar12 = *(undefined4*)&param_1->field_56;
        uVar13 = param_1->field_60;
        field_72 = *(undefined4*)&param_1->field_48;
        field_76 = uVar11;
        field_80 = uVar12;
        field_84 = uVar13;
        field_24 = uVar16;
        field_28 = uVar3;
        field_32 = iVar19;
        field_36 = iVar1;
        field_56 = uVar7;
        field_60 = uVar8;
        field_64 = uVar9;
        field_68 = uVar10;
        field_40 = uVar2;
        field_44 = iVar4;
        field_48 = iVar5;
        field_52 = iVar6;
        field_84 = 35001;
        uVar16 = GetTextureImageDataSize(field_16, field_24, field_28, field_32, field_36, field_88);
        (field_272, "TextureRenderBuffer", uVar16)->Register();
        (&field_8)->UndoMarkAsDead();
        (*(code*)field_0[4])(this);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bcd370, 176 bytes, placed by class name and debug map
    // TextureRenderBuffer::BindNativeBackBuffer(unsigned int)
    void TextureRenderBuffer::BindNativeBackBuffer(uint param_1) {
        undefined1 local_58[48];
        undefined8 local_28;
        undefined8 uStack_20;

        if (1 < *(int*)field_296 + 1U) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_GLTexture || m_GLTexture == NATIVE_BACKBUFFER_RENDERBUFFER_ID",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "TextureRenderBuffer_OGL.cpp",
                      75, "Call Destroy() before calling Create() again");
        }
        *(undefined4*)field_296 = 4294967295;
        new (local_58) Texture::Desc();
        field_72 = (undefined4)local_28;
        field_76 = local_28._4_4_;
        *(undefined8*)&field_80 = uStack_20;
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
        field_36 = GetBackBufferFormat(param_1);
        field_84 = 35001;
        (&field_8, 3)->DisableMarkAsDead();
    }

    // 0x100bcd420, 1120 bytes, placed by class name and debug map
    // TextureRenderBuffer::GetBackBufferFormat(unsigned int)
    undefined4 TextureRenderBuffer::GetBackBufferFormat(uint param_1) {
        undefined4 uVar1;
        undefined8 uVar2;
        uint uVar3;
        uint uVar4;
        uint uVar5;
        uint uVar6;
        int local_50;
        uint local_4c;
        uint local_48;
        uint local_44;
        uint local_40;
        int local_3c;
        int local_38;
        uint local_34;

        local_50 = 0;
        (*___glewGetFramebufferAttachmentParameteriv)(36009, param_1, 36048, &local_50);
        CheckGlErrorInternal("glGetFramebufferAttachmentParameteriv",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "textures/OGL/TextureRenderBuffer_OGL.cpp",
                             148);
        if (local_50 == 36161) {
            local_38 = 0;
            local_34 = 0;
            (*___glewGetFramebufferAttachmentParameteriv)(36009, param_1, 36049, &local_38);
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
        } else if (param_1 - 6145 < 2) {
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
                /* WARNING: Subroutine does not return */
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
            (*___glewGetFramebufferAttachmentParameteriv)(36009, param_1, 33296, &local_34);
            CheckGlErrorInternal("glGetIntv(encoding)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/TextureRenderBuffer_OGL.cpp",
                                 214);
            (*___glewGetFramebufferAttachmentParameteriv)(36009, param_1, 33297, &local_4c);
            CheckGlErrorInternal("glGetIntv(type)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/TextureRenderBuffer_OGL.cpp",
                                 215);
            (*___glewGetFramebufferAttachmentParameteriv)(36009, param_1, 33298, &local_48);
            CheckGlErrorInternal("glGetIntv(redBits)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/TextureRenderBuffer_OGL.cpp",
                                 216);
            (*___glewGetFramebufferAttachmentParameteriv)(36009, param_1, 33299, &local_44);
            CheckGlErrorInternal("glGetIntv(greenBits)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/TextureRenderBuffer_OGL.cpp",
                                 217);
            (*___glewGetFramebufferAttachmentParameteriv)(36009, param_1, 33300, &local_40);
            CheckGlErrorInternal("glGetIntv(blueBits)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/TextureRenderBuffer_OGL.cpp",
                                 218);
            (*___glewGetFramebufferAttachmentParameteriv)(36009, param_1, 33301, &local_3c);
            CheckGlErrorInternal("glGetIntv(alphaBits)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/TextureRenderBuffer_OGL.cpp",
                                 219);
            uVar3 = local_4c ^ 35863;
            uVar5 = local_48 ^ 8;
            uVar4 = local_44 ^ 8;
            uVar6 = local_40 ^ 8;
            if (((((local_38 != 6407 || uVar3 != 0) || (uVar4 != 0 || uVar5 != 0)) || uVar6 != 0) ||
                 (uVar1 = 16, local_34 != 9729)) &&
                (uVar1 = 17, (((local_38 != 6407 || uVar3 != 0) || (uVar4 != 0 || uVar5 != 0)) || uVar6 != 0) ||
                                 local_34 != 35904)) {
                if (((local_3c != 8 ||
                      (((local_38 != 6408 || uVar3 != 0) || (uVar4 != 0 || uVar5 != 0)) || uVar6 != 0)) ||
                     (uVar1 = 7, local_34 != 9729)) &&
                    (uVar1 = 8, (local_3c != 8 ||
                                 (((local_38 != 6408 || uVar3 != 0) || (uVar4 != 0 || uVar5 != 0)) || uVar6 != 0)) ||
                                    local_34 != 35904)) {
                    uVar2 = logger::default_logger();
                    uVar1 = 0;
                    logger::Logger::Log(uVar2, 0, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "render/textures/OGL/TextureRenderBuffer_OGL.cpp",
                                        236,
                                        "WARNING: Need a parameter -> format mapping for format %04X, encoding %04X, "
                                        "type %04X, %d,%d,%d,%d",
                                        local_38, local_34, local_4c, local_48, local_44, local_40, local_3c);
                }
            }
        }
        return uVar1;
    }

    // 0x100bcd880, 288 bytes, placed by class name and debug map
    // TextureRenderBuffer::Destroy()
    void TextureRenderBuffer::Destroy() {
        __10 _Var1;
        char cVar2;
        RenderDevice* pRVar3;
        Singleton<RenderDevice>* this_01;
        __10 local_d0[2];
        function local_c8;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        _Var1.field_0 = *(undefined4*)field_296;
        if (1 < _Var1.field_0 + 1) {
            cVar2 = this_thread::IsMainThread();
            if (cVar2 == '\0') {
                pRVar3 = (RenderDevice*)((TextureRenderBuffer*)this)->Instance();
                cVar2 = pRVar3->IsRenderThread();
                if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("this_thread::IsMainThread() || RenderDevice::Instance().IsRenderThread()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/TextureRenderBuffer_OGL.cpp",
                              89, "Trying to destroy a valid renderbuffer outside of the main or render threads");
                }
            }
            field_272->Unregister();
            this_01 = (Singleton<RenderDevice>*)&field_8;
            this_01->MarkAsDead();
            *(undefined4*)field_296 = 0;
            pRVar3 = (RenderDevice*)this_01->Instance();
            local_d0[0].field_0 = _Var1.field_0;
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                TextureRenderBuffer::Destroy()::__10, void>(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, local_d0);
            pRVar3->RunOnRenderThread(&local_c8);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        }
        (&field_24)->SetToDefault();
        field_88 = 0;
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bcd9b0, 96 bytes, placed by class name and debug map
    // TextureRenderBuffer::IsCreatedNative() const
    ulong TextureRenderBuffer::IsCreatedNative() {
        char cVar1;
        undefined7 uVar3;
        ulong uVar2;

        cVar1 = IsCreated();
        if (cVar1 == '\0') {
            uVar2 = 0;
        } else {
            uVar3 = (undefined7)((ulong)this >> 8);
            if (*(int*)field_296 == -1) {
                uVar2 = CONCAT71(uVar3, 1);
            } else {
                cVar1 = (*___glewIsRenderbuffer)();
                uVar2 = CONCAT71(uVar3, cVar1 != '\0');
                CheckGlErrorInternal("glIsRenderbuffer",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "textures/OGL/TextureRenderBuffer_OGL.cpp",
                                     129);
            }
        }
        return uVar2 & 4294967295;
    }

    // 0x100bcda20, 16 bytes, placed by class name and debug map
    // TextureRenderBuffer::IsNativeBackBuffer() const
    bool TextureRenderBuffer::IsNativeBackBuffer() {
        return *(int*)field_296 == -1;
    }

    // 0x100bcda30, 80 bytes, placed by class name and debug map
    // TextureRenderBuffer::SetNativeBackBufferSize(unsigned int, unsigned int)
    void TextureRenderBuffer::SetNativeBackBufferSize(uint param_1, uint param_2) {
        if (IsNativeBackBuffer(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsNativeBackBuffer()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "TextureRenderBuffer_OGL.cpp",
                      140, (char*)0);
        }
        field_24 = param_1;
        field_28 = param_2;
    }

    // 0x100bd9410, 112 bytes, placed by __FILE__ string
    // TextureRenderBuffer::Destroy()::$_10::operator()(RenderContext&) const
    /* TextureRenderBuffer::Destroy()::$_10::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void TextureRenderBuffer::Destroy()::$_10::operator()(RenderContext* param_1) {
        char cVar1;

        cVar1 = (*___glewIsRenderbuffer)(field_0);
        CheckGlErrorInternal("glIsRenderbuffer",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "textures/OGL/TextureRenderBuffer_OGL.cpp",
                             100);
        if (cVar1 != '\0') {
            (*___glewDeleteRenderbuffers)(1, this);
            CheckGlErrorInternal("glDeleteRenderbuffers",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/TextureRenderBuffer_OGL.cpp",
                                 103);
        }
    }

} // namespace jag::render

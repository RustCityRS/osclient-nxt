// libs/hal/render/utils/OGL/GLUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "GLUtils.h"
#include "libs/hal/render/state/OGL/VertexArrayObject_OGL.h"

namespace jag::render {
    // 0x100bc8100, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // VertexArrayObject::~VertexArrayObject(): jumps straight to the base-object destructor

    // 0x100bc8110, 144 bytes, placed by __FILE__ string
    // SafeGLBindVertexArray(unsigned int)
    void SafeGLBindVertexArray(uint param_1) {
        char cVar1;

        if (param_1 != 0) {
            cVar1 = (*___glewIsVertexArray)(param_1);
            CheckGlErrorInternal("glIsVertexArray",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "utils/OGL/GLUtils.cpp",
                                 953);
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("isValidVAO",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                          "GLUtils.cpp",
                          954, (char*)0);
            }
        }
        (*___glewBindVertexArray)(param_1);
        CheckGlErrorInternal(
            "glBindVertexArray",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            957);
    }

    // 0x100bce010, 112 bytes, placed by __FILE__ string
    // GLMinMagFilter::DisableMipMapping(unsigned int)
    void GLMinMagFilter::DisableMipMapping(uint param_1) {
        if (param_1 == 1) {
            switch (*(undefined4*)field_0) {
            case 9984:
            case 9986:
                *(undefined4*)field_0 = 9728;
                return;
            case 9985:
            case 9987:
                *(undefined4*)field_0 = 9729;
            }
        } else if (param_1 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("mipLevels >= 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "GLUtils.cpp",
                      310, (char*)0);
        }
    }

    // 0x100bcf290, 448 bytes, placed by __FILE__ string
    // ValidateGLShaderProgram(unsigned int)
    bool ValidateGLShaderProgram(uint param_1) {
        code* pcVar1;
        uint uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        int local_238;
        uint local_234;
        array<char, 512ul> local_230[512];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_1 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("GLProgramObject > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "GLUtils.cpp",
                      362, (char*)0);
        }
        (*___glewValidateProgram)(param_1);
        CheckGlErrorInternal(
            "glValidateProgram",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            364);
        local_238 = 0;
        (*___glewGetProgramiv)(param_1, 35715, &local_238);
        if (local_238 == 0) {
            local_234 = 0;
            (*___glewGetProgramiv)(param_1, 35716, &local_234);
            CheckGlErrorInternal("glGetProgramiv",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "utils/OGL/GLUtils.cpp",
                                 370);
            if (1 < (int)local_234) {
                if (511 < (int)local_234) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("infoLen < 512",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/"
                              "OGL/GLUtils.cpp",
                              375, "Increase size of infoLog string char array");
                }
                ___bzero(local_230, 512);
                uVar2 = local_234;
                pcVar1 = ___glewGetProgramInfoLog;
                uVar3 = std::array<char, 512ul>::data(local_230);
                (*pcVar1)(param_1, uVar2, 0, uVar3);
                CheckGlErrorInternal("glGetProgramInfoLog",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "utils/OGL/GLUtils.cpp",
                                     377);
                uVar4 = logger::default_logger();
                logger::Logger::Log(uVar4, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "utils/OGL/GLUtils.cpp",
                                    378, "Error linking shader program:\n%s\n", uVar3);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return local_238 == 1;
    }

    // 0x100bcf460, 544 bytes, placed by __FILE__ string
    // GetGLExtensions(eastl::fixed_vector<eastl::fixed_string<char, 32, true, eastl::allocator>, 64ul, true, eastl::allocator>&, int)
    void GetGLExtensions(fixed_vector* param_1, int param_2) {
        long lVar1;
        long lVar2;
        char* pcVar3;
        int iVar4;
        fixed_string<char, 32, true, eastl::allocator> local_810[72];
        int local_7c8[218];
        fixed_string<char, 1024, true, eastl::allocator> local_460[1064];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_2 < 3) {
            eastl::fixed_string<char, 1024, true, eastl::allocator>::fixed_string(local_460);
            GetGLString<eastl::fixed_string<char, 1024, true, eastl::allocator>>((fixed_string*)local_460, 7939);
            new (local_7c8) eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                                eastl::allocator>();
            tokenize<
                eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true, eastl::allocator>,
                eastl::fixed_string<char, 2048, true, eastl::allocator>>((fixed_vector*)local_7c8,
                                                                         (fixed_string*)local_460, " ", -1);
            lVar1 = local_7c8->HeapBeginPtr();
            lVar2 = local_7c8->end();
            if (lVar1 == lVar2) {
                local_7c8->~fixed_vector();
                /* WARNING: Subroutine does not return */
                local_460->~fixed_string();
            }
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_810, pcVar3);
            param_1->push_back(local_810);
            /* WARNING: Subroutine does not return */
            local_810->~fixed_string();
        }
        local_7c8[0] = 0;
        _glGetIntegerv(33309, local_7c8);
        CheckGlErrorInternal(
            "glGetIntegerv GL_NUM_EXTENSIONS",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            408);
        if (0 < local_7c8[0]) {
            iVar4 = 0;
            do {
                pcVar3 = (char*)(*___glewGetStringi)(7939, iVar4);
                CheckGlErrorInternal("glGetStringi GL_EXTENSIONS",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "utils/OGL/GLUtils.cpp",
                                     411);
                if (pcVar3 != (char*)0) {
                    new (local_460) eastl::fixed_string<char, 32, true, eastl::allocator>(pcVar3);
                    param_1->push_back(local_460);
                    /* WARNING: Subroutine does not return */
                    local_460->~fixed_string();
                }
                iVar4 = iVar4 + 1;
            } while (iVar4 < local_7c8[0]);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bcf840, 304 bytes, placed by __FILE__ string
    // PrintGLExtensions(int)
    void PrintGLExtensions(int param_1) {
        undefined8 uVar1;
        long lVar2;
        long lVar3;
        undefined8 uVar4;
        fixed_vector<eastl::fixed_string<char, 32, true, eastl::allocator>, 64ul, true, eastl::allocator>
            local_1260[4648];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_vector<eastl::fixed_string<char, 32, true, eastl::allocator>, 64ul, true,
                            eastl::allocator>::fixed_vector(local_1260);
        GetGLExtensions((fixed_vector*)local_1260, param_1);
        uVar1 = logger::default_logger();
        logger::Logger::Log(
            uVar1, 0, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            458, "\tGLExtensions:");
        lVar2 = local_1260->HeapBeginPtr();
        lVar3 = local_1260->end();
        for (; lVar2 != lVar3; lVar2 = lVar2 + 72) {
            uVar1 = logger::default_logger();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar1, 0, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "utils/OGL/GLUtils.cpp",
                                461, &DAT_100e4f81b, uVar4);
        }
        eastl::fixed_vector<eastl::fixed_string<char, 32, true, eastl::allocator>, 64ul, true,
                            eastl::allocator>::~fixed_vector(local_1260);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bcf970, 416 bytes, placed by __FILE__ string
    // PrintGLError(char const*, int, int, char const*, int)
    void PrintGLError(char* param_1, int param_2, int param_3, char* param_4, int param_5) {
        undefined8 uVar1;
        undefined8 uVar2;
        char* pcVar3;

        switch (param_2) {
        case 1280:
            uVar1 = logger::default_logger();
            pcVar3 = "GL_INVALID_ENUM";
            break;
        case 1281:
            uVar1 = logger::default_logger();
            pcVar3 = "GL_INVALID_VALUE";
            break;
        case 1282:
            uVar1 = logger::default_logger();
            pcVar3 = "GL_INVALID_OPERATION";
            break;
        case 1283:
            uVar1 = logger::default_logger();
            pcVar3 = "GL_STACK_OVERFLOW";
            break;
        case 1284:
            uVar1 = logger::default_logger();
            pcVar3 = "GL_STACK_UNDERFLOW";
            break;
        case 1285:
            uVar1 = logger::default_logger();
            pcVar3 = "GL_OUT_OF_MEMORY";
            break;
        case 1286:
            uVar1 = logger::default_logger();
            pcVar3 = "GL_INVALID_FRAMEBUFFER_OPERATION";
            break;
        default:
            if (param_2 != 0) {
                uVar1 = _gluErrorString(param_2);
                uVar2 = logger::default_logger();
                logger::Logger::Log(uVar2, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "utils/OGL/GLUtils.cpp",
                                    505, "Unknown gl error: %s", uVar1);
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "utils/OGL/GLUtils.cpp",
                                507, (char*)0);
            }
            uVar1 = logger::default_logger();
            pcVar3 = "GL_NO_ERROR";
        }
        logger::Logger::Log(uVar1, 0, 3, param_4, param_5, "after %s() glError (%s x%d)", param_1, pcVar3, param_3);
        uVar1 = logger::default_logger();
        logger::Logger::Log(
            uVar1, 0, 6,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            512, "glError");
    }

    // 0x100bcfb10, 192 bytes, placed by __FILE__ string
    // QueryGLExtensionStringLegacy(char const*)
    undefined1 QueryGLExtensionStringLegacy(char* param_1) {
        int iVar1;
        size_t sVar2;
        char* pcVar3;
        size_t sVar4;
        char* pcVar5;

        sVar2 = _strlen(param_1);
        pcVar3 = (char*)_glGetString(7939);
        CheckGlErrorInternal(
            "glGetString GL_EXTENSIONS",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            589);
        if (pcVar3 != (char*)0) {
            sVar4 = _strlen(pcVar3);
            pcVar5 = pcVar3 + sVar4;
            for (; pcVar3 < pcVar5; pcVar3 = pcVar3 + sVar4 + 1) {
                sVar4 = _strcspn(pcVar3, " ");
                if ((sVar2 == sVar4) && (iVar1 = _strncmp(param_1, pcVar3, sVar4), iVar1 == 0)) {
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x100bcfbd0, 256 bytes, placed by __FILE__ string
    // QueryGLExtension(char const*, int)
    undefined8 QueryGLExtension(char* param_1, int param_2) {
        uint in_EAX;
        char* pcVar3;
        int iVar4;
        undefined8 uStack_38;

        if (param_1 == (char*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("extName != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "GLUtils.cpp",
                      644, (char*)0);
        }
        if (param_2 < 3) {
            if (QueryGLExtensionStringLegacy(param_1) != '\0') {
                return 1;
            }
        } else {
            uStack_38 = (ulong)in_EAX;
            _glGetIntegerv(33309, (long)&uStack_38 + 4);
            CheckGlErrorInternal("glGetIntegerv GL_NUM_EXTENSIONS",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "utils/OGL/GLUtils.cpp",
                                 665);
            if (0 < uStack_38._4_4_) {
                iVar4 = 0;
                do {
                    pcVar3 = (char*)(*___glewGetStringi)(7939, iVar4);
                    CheckGlErrorInternal("glGetStringi GL_EXTENSIONS",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/utils/OGL/GLUtils.cpp",
                                         668);
                    if (_strcmp(pcVar3, param_1) == 0) {
                        return 1;
                    }
                    iVar4 = iVar4 + 1;
                } while (iVar4 < uStack_38._4_4_);
            }
        }
        return 0;
    }

    // 0x100bcfcd0, 208 bytes, placed by __FILE__ string
    // QueryGLVersion(int&, int&)
    void QueryGLVersion(int* param_1, int* param_2) {
        int iVar1;
        char* pcVar2;
        long lVar3;

        _glGetIntegerv(33307, param_1);
        CheckGlErrorInternal(
            "glGetIntegerv GL_MAJOR_VERSION",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            692);
        _glGetIntegerv(33308, param_2);
        CheckGlErrorInternal(
            "glGetIntegerv GL_MINOR_VERSION",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            693);
        if (*param_1 == 0) {
            pcVar2 = (char*)_glGetString(7938);
            CheckGlErrorInternal("glGetString",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "utils/OGL/GLUtils.cpp",
                                 698);
            if (pcVar2 != (char*)0) {
                iVar1 = eastl::stoi(pcVar2, 10);
                *param_1 = iVar1;
                lVar3 = __ZL6strchrUa9enable_ifIXLb1EEEPKci(pcVar2);
                iVar1 = eastl::stoi((char*)(lVar3 + 1), 10);
                *param_2 = iVar1;
            }
        }
    }

    // 0x100bcfdb0, 208 bytes, placed by __FILE__ string
    // QueryGLSLVersion(int&, int&, eastl::string&)
    void QueryGLSLVersion(int* param_1, int* param_2, basic_string* param_3) {
        int iVar1;
        char* param0;
        bool bVar2;

        param0 = (char*)_glGetString(35724);
        CheckGlErrorInternal(
            "glGetString",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            711);
        if (param0 == (char*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("glString != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "GLUtils.cpp",
                      711, (char*)0);
        }
        param_3->assign(param0);
        bVar2 = false;
        iVar1 = _sscanf(param0, "%d.%d", param_1, param_2);
        if (iVar1 != 2) {
            iVar1 = _sscanf(param0, "%*[^0-9]%d.%d", param_1, param_2);
            bVar2 = iVar1 != 2;
        }
        if ((bVar2) || (*param_1 == 0)) {
            *param_1 = 1;
            *param_2 = 10;
        }
    }

    // 0x100bcfe80, 112 bytes, placed by __FILE__ string
    // GetGLShaderTypeElementCount(unsigned int)
    undefined4 GetGLShaderTypeElementCount(uint param_1) {
        long lVar2;
        undefined1 auVar3[16];
        undefined8 local_28;
        undefined8 local_20;
        uint local_14;

        local_14 = param_1;
        local_20 = eastl::rbtree<unsigned int, eastl::pair<unsigned int const, unsigned int>, eastl::less<unsigned int>,
                                 eastl::fixed_node_allocator<40ul, 17ul, 4ul, 0ul, true, eastl::allocator>,
                                 eastl::use_first<eastl::pair<unsigned int const, unsigned int>>, true,
                                 true>::find((uint*)&g_GLShaderTypeElementSizeMap);
        auVar3 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        local_28 = auVar3._0_8_;
        if (eastl::operator!=((eastl*)&local_20, (hashtable_iterator_base*)&local_28, auVar3._8_8_)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*((rbtree_iterator<
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                       eastl::pair<unsigned int const,
                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_20);
            return *(undefined4*)(lVar2 + 4);
        }
        /* WARNING: Subroutine does not return */
        LogAssertAlways(
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            737, (char*)0);
    }

    // 0x100bcff30, 1008 bytes, placed by __FILE__ string
    // QueryCompressedTextureFormatsDXT(bool&)
    ulong QueryCompressedTextureFormatsDXT(bool* param_1) {
        int iVar1;
        int iVar2;
        uint uVar3;
        uint uVar4;
        undefined8 uVar5;
        undefined4* puVar6;
        ulong uVar7;
        array<unsigned int, 1ul> local_68[8];
        undefined4* local_60;
        undefined8 local_58;
        undefined8 uStack_50;
        bool* local_40;
        undefined1 local_31;

        local_40 = param_1;
        do {
            iVar1 = _glGetError();
        } while (iVar1 != 0);
        local_58 = 0;
        uStack_50 = 0;
        _glBindTexture(3553, 0);
        CheckGlErrorInternal(
            "glBindTexture",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            763);
        uVar5 = std::array<unsigned int, 1ul>::data(local_68);
        _glGenTextures(1, uVar5);
        CheckGlErrorInternal(
            "glGenTextures",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            764);
        puVar6 = (undefined4*)std::array<unsigned int, 1ul>::operator[]((ulong)local_68);
        _glBindTexture(3553, *puVar6);
        CheckGlErrorInternal(
            "glBindTexture",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            765);
        (*___glewCompressedTexImage2D)(3553, 0, 33777, 4, 4, 0, 8, &local_58);
        iVar1 = _glGetError();
        _glDeleteTextures(1, uVar5);
        CheckGlErrorInternal(
            "glDeleteTextures",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            772);
        _glBindTexture(3553, 0);
        CheckGlErrorInternal(
            "glBindTexture",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            775);
        _glGenTextures(1, uVar5);
        CheckGlErrorInternal(
            "glGenTextures",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            776);
        local_60 = puVar6;
        _glBindTexture(3553, *puVar6);
        CheckGlErrorInternal(
            "glBindTexture",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            777);
        (*___glewCompressedTexImage2D)(3553, 0, 33779, 4, 4, 0, 16, &local_58);
        iVar2 = _glGetError();
        _glDeleteTextures(1, uVar5);
        CheckGlErrorInternal(
            "glDeleteTextures",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            784);
        puVar6 = local_60;
        uVar7 = (ulong)CONCAT31((int3)((uint)iVar2 >> 8), iVar1 == 0 && iVar2 == 0);
        if (iVar1 == 0 && iVar2 == 0) {
            local_31 = iVar2 == 0;
            if (*local_40 != false) {
                _glBindTexture(3553, 0);
                CheckGlErrorInternal("glBindTexture",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "utils/OGL/GLUtils.cpp",
                                     793);
                _glGenTextures(1, uVar5);
                CheckGlErrorInternal("glGenTextures",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "utils/OGL/GLUtils.cpp",
                                     794);
                _glBindTexture(3553, *puVar6);
                CheckGlErrorInternal("glBindTexture",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "utils/OGL/GLUtils.cpp",
                                     795);
                (*___glewCompressedTexImage2D)(3553, 0, 35917, 4, 4, 0, 8, &local_58);
                uVar3 = _glGetError();
                _glDeleteTextures(1, uVar5);
                CheckGlErrorInternal("glDeleteTextures",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "utils/OGL/GLUtils.cpp",
                                     802);
                _glBindTexture(3553, 0);
                CheckGlErrorInternal("glBindTexture",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "utils/OGL/GLUtils.cpp",
                                     805);
                _glGenTextures(1, uVar5);
                CheckGlErrorInternal("glGenTextures",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "utils/OGL/GLUtils.cpp",
                                     806);
                _glBindTexture(3553, *puVar6);
                CheckGlErrorInternal("glBindTexture",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "utils/OGL/GLUtils.cpp",
                                     807);
                (*___glewCompressedTexImage2D)(3553, 0, 35919, 4, 4, 0, 16, &local_58);
                uVar4 = _glGetError();
                _glDeleteTextures(1, uVar5);
                CheckGlErrorInternal("glDeleteTextures",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "utils/OGL/GLUtils.cpp",
                                     814);
                puVar6 = (undefined4*)(ulong)(uVar4 | uVar3);
                if ((uVar4 | uVar3) != 0) {
                    uVar5 = logger::default_logger();
                    logger::Logger::Log(uVar5, 0, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "render/utils/OGL/GLUtils.cpp",
                                        819,
                                        "Compressed textures are supported but sRGB compressed formats are not. "
                                        "Disabling sRGB support in favour of compressed texture support");
                    *local_40 = false;
                }
            }
            uVar7 = CONCAT71((int7)((ulong)puVar6 >> 8), local_31);
        }
        _glBindTexture(3553, 0);
        CheckGlErrorInternal(
            "glBindTexture",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            825);
        return uVar7 & 4294967295;
    }

    // 0x100bd0340, 1072 bytes, placed by __FILE__ string
    // QueryCompressedTextureFormatsETC(bool&, bool&)
    undefined4 QueryCompressedTextureFormatsETC(bool* param_1, bool* param_2) {
        int iVar1;
        undefined8 uVar2;
        undefined4 uVar3;
        undefined8 local_a8;
        undefined8 uStack_a0;
        undefined8 local_98;
        undefined8 uStack_90;
        undefined8 local_88;
        undefined8 uStack_80;
        undefined8 local_78;
        undefined8 uStack_70;
        array<unsigned int, 1ul> local_68[8];
        bool* local_60;
        undefined8 local_58;
        undefined8 uStack_50;
        undefined4* local_40;
        undefined4 local_34;

        local_60 = param_2;
        do {
            iVar1 = _glGetError();
        } while (iVar1 != 0);
        local_58 = 0;
        uStack_50 = 0;
        _glBindTexture(3553, 0);
        CheckGlErrorInternal(
            "glBindTexture",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            851);
        uVar2 = std::array<unsigned int, 1ul>::data(local_68);
        _glGenTextures(1, uVar2);
        CheckGlErrorInternal(
            "glGenTextures",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            852);
        local_40 = (undefined4*)std::array<unsigned int, 1ul>::operator[]((ulong)local_68);
        _glBindTexture(3553, *local_40);
        CheckGlErrorInternal(
            "glBindTexture",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            853);
        (*___glewCompressedTexImage2D)(3553, 0, 37496, 4, 4, 0, 16, &local_58);
        iVar1 = _glGetError();
        if (iVar1 == 0) {
            uVar3 = 15005441;
        } else {
            PrintGLError("glCompressedTexSubImage2D", iVar1, 1,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                         "GLUtils.cpp",
                         859);
            uVar3 = 0;
        }
        _glDeleteTextures(1, uVar2);
        CheckGlErrorInternal(
            "glDeleteTextures",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            861);
        if (iVar1 != 0)
            goto LAB_100bd0624;
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_34 = uVar3;
        _glBindTexture(3553, 0);
        CheckGlErrorInternal(
            "glBindTexture",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            870);
        _glGenTextures(1, uVar2);
        CheckGlErrorInternal(
            "glGenTextures",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            871);
        _glBindTexture(3553, *local_40);
        CheckGlErrorInternal(
            "glBindTexture",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            872);
        (*___glewCompressedTexImage2D)(3553, 0, 37496, 8, 8, 0, 64, &local_a8);
        iVar1 = _glGetError();
        if (iVar1 == 0) {
            (*___glewCompressedTexSubImage2D)(3553, 0, 0, 4, 4, 4, 37496, 16, &local_58);
            iVar1 = _glGetError();
            if (iVar1 != 0) {
                (*___glewCompressedTexSubImage2D)(3553, 0, 0, 4, 4, 4, 37496, 32, &local_58);
                iVar1 = _glGetError();
                uVar3 = 0;
                if (iVar1 != 0)
                    goto LAB_100bd05fa;
                *local_60 = true;
            }
            uVar3 = local_34;
        } else {
            PrintGLError("glCompressedTexSubImage2D", iVar1, 1,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                         "GLUtils.cpp",
                         878);
            uVar3 = 0;
        }
    LAB_100bd05fa:
        _glDeleteTextures(1, uVar2);
        CheckGlErrorInternal(
            "glDeleteTextures",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            912);
    LAB_100bd0624:
        if (((char)uVar3 != '\0') && (*param_1 != false)) {
            _glBindTexture(3553, 0);
            CheckGlErrorInternal("glBindTexture",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "utils/OGL/GLUtils.cpp",
                                 922);
            _glGenTextures(1, uVar2);
            CheckGlErrorInternal("glGenTextures",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "utils/OGL/GLUtils.cpp",
                                 923);
            _glBindTexture(3553, *local_40);
            CheckGlErrorInternal("glBindTexture",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "utils/OGL/GLUtils.cpp",
                                 924);
            (*___glewCompressedTexImage2D)(3553, 0, 37497, 4, 4, 0, 16, &local_58);
            iVar1 = _glGetError();
            _glDeleteTextures(1, uVar2);
            CheckGlErrorInternal("glDeleteTextures",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "utils/OGL/GLUtils.cpp",
                                 931);
            if (iVar1 != 0) {
                uVar2 = logger::default_logger();
                logger::Logger::Log(uVar2, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "utils/OGL/GLUtils.cpp",
                                    936,
                                    "Compressed textures are supported but sRGB compressed formats are not. Disabling "
                                    "sRGB support in favour of compressed texture support");
                *param_1 = false;
            }
        }
        _glBindTexture(3553, 0);
        CheckGlErrorInternal(
            "glBindTexture",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            942);
        return uVar3;
    }

    // 0x100bd07d0, 192 bytes, placed by __FILE__ string
    // GetTextureTypeForSampler(unsigned int)
    undefined8 GetTextureTypeForSampler(uint param_1) {
        undefined8 uVar2;

        if (IsSamplerType(param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsSamplerType(samplerType)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "GLUtils.cpp",
                      1026, (char*)0);
        }
        if ((int)param_1 < 36289) {
            uVar2 = 32873;
            switch (param_1) {
            case 35678:
            case 35682:
                break;
            case 35679:
                uVar2 = 32874;
                break;
            case 35680:
                uVar2 = 34068;
                break;
            default:
                goto switchD_100bd0825_caseD_8b61;
            }
        } else {
            if (param_1 == 37131) {
                return 37125;
            }
            if (param_1 == 37128) {
                return 37124;
            }
            if (param_1 == 36289) {
                return 35869;
            }
        switchD_100bd0825_caseD_8b61:
            uVar2 = 1280;
        }
        return uVar2;
    }

    // 0x100bd0890, 64 bytes, placed by __FILE__ string
    // GetGLMapLockFlags(LockType)
    undefined4 GetGLMapLockFlags(int param_1) {
        if (7 < param_1 - 1U) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/"
                            "OGL/GLUtils.cpp",
                            1079, (char*)0);
        }
        return *(undefined4*)(&DAT_100d996a4 + (long)(int)(param_1 - 1U) * 4);
    }

    // 0x100bd08d0, 80 bytes, placed by __FILE__ string
    // GetGLMapAccessFlags(LockType)
    undefined4 GetGLMapAccessFlags(int param_1) {
        uint uVar1;

        uVar1 = param_1 - 1;
        if ((5 < uVar1) || ((47U >> (uVar1 & 31) & 1) == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/"
                            "OGL/GLUtils.cpp",
                            1103, "Unsupported access type");
        }
        return *(undefined4*)(&DAT_100d996c4 + (long)(int)uVar1 * 4);
    }

} // namespace jag::render

// 0x100bcfda0, 16 bytes, placed by neighbouring functions
// _ZL6strchrUa9enable_ifIXLb1EEEPKci
void __ZL6strchrUa9enable_ifIXLb1EEEPKci(char* param_1, int param_2) {
    __libcpp_strchr(param_1, param_2);
}

// libs/hal/render/utils/OGL/GLUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "GLUtils.h"
#include "libs/hal/render/state/OGL/VertexArrayObject_OGL.h"

namespace jag::render {
    // 0x100bc8110
    void SafeGLBindVertexArray(unsigned int arg1) {
        bool cVar1;

        if (arg1 != 0) {
            cVar1 = (*___glewIsVertexArray)(arg1);
            CheckGlErrorInternal("glIsVertexArray",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "utils/OGL/GLUtils.cpp",
                                 953);
            if (!cVar1) {
                LogAssert("isValidVAO",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                          "GLUtils.cpp",
                          954, nullptr);
            }
        }
        (*___glewBindVertexArray)(arg1);
        CheckGlErrorInternal(
            "glBindVertexArray",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            957);
    }

    // 0x100bce010
    void GLMinMagFilter::DisableMipMapping(unsigned int arg1) {
        if (arg1 == 1) {
            switch (*(uint32_t*)field_0) {
            case 9984:
            case 9986:
                *(uint32_t*)field_0 = 9728;
                return;
            case 9985:
            case 9987:
                *(uint32_t*)field_0 = 9729;
            }
        } else if (arg1 == 0) {
            LogAssert("mipLevels >= 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "GLUtils.cpp",
                      310, nullptr);
        }
    }

    // 0x100bcf290
    bool ValidateGLShaderProgram(unsigned int arg1) {
        void* pcVar1;
        unsigned int uVar2;
        uint64_t uVar3;
        unsigned int local_234;
        array<char, 512ul> local_230;

        if (arg1 == 0) {
            LogAssert("GLProgramObject > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "GLUtils.cpp",
                      362, nullptr);
        }
        (*___glewValidateProgram)(arg1);
        CheckGlErrorInternal(
            "glValidateProgram",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            364);
        int local_238 = 0;
        (*___glewGetProgramiv)(arg1, 35715, &local_238);
        if (local_238 == 0) {
            local_234 = 0;
            (*___glewGetProgramiv)(arg1, 35716, &local_234);
            CheckGlErrorInternal("glGetProgramiv",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "utils/OGL/GLUtils.cpp",
                                 370);
            if (1 < (int)local_234) {
                if (511 < (int)local_234) {
                    LogAssert("infoLen < 512",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/"
                              "OGL/GLUtils.cpp",
                              375, "Increase size of infoLog string char array");
                }
                ___bzero(&local_230, 512);
                uVar2 = local_234;
                pcVar1 = ___glewGetProgramInfoLog;
                uVar3 = local_230.data();
                (*pcVar1)(arg1, uVar2, 0, uVar3);
                CheckGlErrorInternal("glGetProgramInfoLog",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "utils/OGL/GLUtils.cpp",
                                     377);
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                          "GLUtils.cpp",
                          378, "Error linking shader program:\n%s\n", uVar3);
            }
        }
        return local_238 == 1;
    }

    // 0x100bcf460
    void GetGLExtensions(eastl::fixed_vector<eastl::fixed_string<char, 32>, 64ul>& strs, int arg2) {
        long lVar1;
        long lVar2;
        char* pcVar3;
        int iVar4;
        fixed_string<char, 32> local_810;
        int local_7c8[218];
        fixed_string<char, 1024> local_460;

        if (arg2 < 3) {
            local_460 = eastl::fixed_string<char, 1024>();
            GetGLString<eastl::fixed_string<char, 1024>>(&local_460, 7939);
            new (local_7c8) eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>();
            tokenize<eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>, eastl::fixed_string<char, 2048>>(
                (fixed_vector<eastl::fixed_string<char, _64>, _8ul>*)local_7c8, &local_460, " ", -1);
            lVar1 = local_7c8->HeapBeginPtr();
            lVar2 = local_7c8->end();
            if (lVar1 == lVar2) {
            }
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_810 = eastl::fixed_string<char, 32>(pcVar3);
            strs.push_back(local_810);
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
                if (pcVar3 != nullptr) {
                    local_460 = eastl::fixed_string<char, 32>(pcVar3);
                    strs.push_back(local_460);
                }
                iVar4 = iVar4 + 1;
            } while (iVar4 < local_7c8[0]);
        }
    }

    // 0x100bcf840
    void PrintGLExtensions(int arg1) {
        uint64_t uVar4;

        fixed_vector<eastl::fixed_string<char, 32>, 64ul> local_1260;
        GetGLExtensions(&local_1260, arg1);
        auto pLVar1 = logger::default_logger();
        pLVar1->Log(
            false, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            458, "\tGLExtensions:");
        long lVar2 = local_1260.HeapBeginPtr();
        long lVar3 = local_1260.end();
        for (; lVar2 != lVar3; lVar2 = lVar2 + 72) {
            pLVar1 = logger::default_logger();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar1->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                        "GLUtils.cpp",
                        461, "\t\t%s", uVar4);
        }
    }

    // 0x100bcf970
    void PrintGLError(const char* str1, int arg2, int arg3, const char* str2, int arg5) {
        Logger* pLVar1;
        uint64_t uVar2;
        char* pcVar3;

        switch (arg2) {
        case 1280:
            pLVar1 = logger::default_logger();
            pcVar3 = "GL_INVALID_ENUM";
            break;
        case 1281:
            pLVar1 = logger::default_logger();
            pcVar3 = "GL_INVALID_VALUE";
            break;
        case 1282:
            pLVar1 = logger::default_logger();
            pcVar3 = "GL_INVALID_OPERATION";
            break;
        case 1283:
            pLVar1 = logger::default_logger();
            pcVar3 = "GL_STACK_OVERFLOW";
            break;
        case 1284:
            pLVar1 = logger::default_logger();
            pcVar3 = "GL_STACK_UNDERFLOW";
            break;
        case 1285:
            pLVar1 = logger::default_logger();
            pcVar3 = "GL_OUT_OF_MEMORY";
            break;
        case 1286:
            pLVar1 = logger::default_logger();
            pcVar3 = "GL_INVALID_FRAMEBUFFER_OPERATION";
            break;
        default:
            if (arg2 != 0) {
                uVar2 = _gluErrorString(arg2);
                pLVar1 = logger::default_logger();
                pLVar1->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/"
                            "OGL/GLUtils.cpp",
                            505, "Unknown gl error: %s", uVar2);
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "utils/OGL/GLUtils.cpp",
                                507, nullptr);
            }
            pLVar1 = logger::default_logger();
            pcVar3 = "GL_NO_ERROR";
        }
        pLVar1->Log(false, 3, str2, arg5, "after %s() glError (%s x%d)", str1, pcVar3,
                    (unsigned long)(unsigned int)arg3);
        pLVar1 = logger::default_logger();
        pLVar1->Log(
            false, 6,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            512, "glError");
    }

    // 0x100bcfb10
    void QueryGLExtensionStringLegacy(const char* str) {
        int iVar1;
        size_t sVar4;
        char* pcVar5;

        size_t sVar2 = _strlen(str);
        auto pcVar3 = _glGetString(7939);
        CheckGlErrorInternal(
            "glGetString GL_EXTENSIONS",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            589);
        if (pcVar3 != nullptr) {
            sVar4 = _strlen(pcVar3);
            pcVar5 = pcVar3 + sVar4;
            for (; pcVar3 < pcVar5; pcVar3 = pcVar3 + sVar4 + 1) {
                sVar4 = _strcspn(pcVar3, " ");
                if ((sVar2 == sVar4) && (iVar1 = _strncmp(str, pcVar3, sVar4), iVar1 == 0)) {
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x100bcfbd0
    void QueryGLExtension(const char* str, int arg2) {
        unsigned int in_EAX;
        char* pcVar3;
        int iVar4;
        uint64_t uStack_38;

        if (str == nullptr) {
            LogAssert("extName != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "GLUtils.cpp",
                      644, nullptr);
        }
        if (arg2 < 3) {
            if (QueryGLExtensionStringLegacy(str) != '\0') {
                return 1;
            }
        } else {
            uStack_38 = (unsigned long)in_EAX;
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
                    if (_strcmp(pcVar3, str) == 0) {
                        return 1;
                    }
                    iVar4 = iVar4 + 1;
                } while (iVar4 < uStack_38._4_4_);
            }
        }
        return 0;
    }

    // 0x100bcfcd0
    void QueryGLVersion(int& arg1, int& arg2) {
        int iVar1;
        char* str;
        long lVar2;

        _glGetIntegerv(33307, arg1);
        CheckGlErrorInternal(
            "glGetIntegerv GL_MAJOR_VERSION",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            692);
        _glGetIntegerv(33308, arg2);
        CheckGlErrorInternal(
            "glGetIntegerv GL_MINOR_VERSION",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            693);
        if (arg1 == 0) {
            str = (char*)_glGetString(7938);
            CheckGlErrorInternal("glGetString",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "utils/OGL/GLUtils.cpp",
                                 698);
            if (str != nullptr) {
                iVar1 = eastl::stoi(str, 10);
                arg1 = iVar1;
                lVar2 = __ZL6strchrUa9enable_ifIXLb1EEEPKci(str);
                iVar1 = eastl::stoi((lVar2 + 1), 10);
                arg2 = iVar1;
            }
        }
    }

    // 0x100bcfdb0
    void QueryGLSLVersion(int& arg1, int& arg2, eastl::string& str) {
        auto str_00 = _glGetString(35724);
        CheckGlErrorInternal(
            "glGetString",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            711);
        if (str_00 == nullptr) {
            LogAssert("glString != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "GLUtils.cpp",
                      711, nullptr);
        }
        str.assign(str_00);
        bool bVar2 = false;
        int iVar1 = _sscanf(str_00, "%d.%d", arg1, arg2);
        if (iVar1 != 2) {
            iVar1 = _sscanf(str_00, "%*[^0-9]%d.%d", arg1, arg2);
            bVar2 = iVar1 != 2;
        }
        if ((bVar2) || (arg1 == 0)) {
            arg1 = 1;
            arg2 = 10;
        }
    }

    // 0x100bcfe80
    void GetGLShaderTypeElementCount(unsigned int arg1) {
        uint64_t local_20 = g_GLShaderTypeElementSizeMap.find(arg1);
        uint64_t local_28 = g_GLShaderTypeElementSizeMap.end();
        if (local_20 != local_28 == '\0') {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/"
                            "OGL/GLUtils.cpp",
                            737, nullptr);
        }
        long lVar2 = *local_20;
        return *(uint32_t*)(lVar2 + 4);
    }

    // 0x100bcff30
    unsigned long QueryCompressedTextureFormatsDXT(bool& arg1) {
        int iVar1;
        unsigned int uVar3;
        unsigned int uVar4;
        array<unsigned int, 1ul> local_68;
        uint8_t local_31;

        bool* local_40 = arg1;
        do {
            iVar1 = _glGetError();
        } while (iVar1 != 0);
        uint64_t local_58 = 0;
        uint64_t uStack_50 = 0;
        _glBindTexture(3553, 0);
        CheckGlErrorInternal(
            "glBindTexture",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            763);
        uint64_t uVar5 = local_68.data();
        _glGenTextures(1, uVar5);
        char* arg1_00 =
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp";
        CheckGlErrorInternal(
            "glGenTextures",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            764);
        uint32_t* puVar6 = &local_68[(unsigned long)arg1_00];
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
        uint32_t* local_60 = puVar6;
        _glBindTexture(3553, *puVar6);
        CheckGlErrorInternal(
            "glBindTexture",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            777);
        (*___glewCompressedTexImage2D)(3553, 0, 33779, 4, 4, 0, 16, &local_58);
        int iVar2 = _glGetError();
        _glDeleteTextures(1, uVar5);
        CheckGlErrorInternal(
            "glDeleteTextures",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            784);
        puVar6 = local_60;
        unsigned long uVar7 = (unsigned long)(((uint32_t)((int32_t)((unsigned int)iVar2 >> 8)) << 8) |
                                              (uint8_t)(iVar1 == 0 && iVar2 == 0));
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
                puVar6 = (uint32_t*)(unsigned long)(uVar4 | uVar3);
                if ((uVar4 | uVar3) != 0) {
                    (logger::default_logger())
                        ->Log(false, 8,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/"
                              "OGL/GLUtils.cpp",
                              819,
                              "Compressed textures are supported but sRGB compressed formats are not. Disabling sRGB "
                              "support in favour of compressed texture support");
                    *local_40 = false;
                }
            }
            uVar7 = (((uint64_t)((int64_t)((unsigned long)puVar6 >> 8)) << 8) | (uint8_t)local_31);
        }
        _glBindTexture(3553, 0);
        CheckGlErrorInternal(
            "glBindTexture",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            825);
        return uVar7 & 4294967295;
    }

    // 0x100bd0340
    void QueryCompressedTextureFormatsETC(bool& arg1, bool& arg2) {
        int iVar1;
        uint32_t uVar3;
        array<unsigned int, 1ul> local_68;

        bool* local_60 = arg2;
        do {
            iVar1 = _glGetError();
        } while (iVar1 != 0);
        uint64_t local_58 = 0;
        uint64_t uStack_50 = 0;
        _glBindTexture(3553, 0);
        CheckGlErrorInternal(
            "glBindTexture",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            851);
        uint64_t uVar2 = local_68.data();
        _glGenTextures(1, uVar2);
        char* arg1_00 =
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp";
        CheckGlErrorInternal(
            "glGenTextures",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            852);
        uint32_t* local_40 = &local_68[(unsigned long)arg1_00];
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
        uint64_t local_78 = 0;
        uint64_t uStack_70 = 0;
        uint64_t local_88 = 0;
        uint64_t uStack_80 = 0;
        uint64_t local_98 = 0;
        uint64_t uStack_90 = 0;
        uint64_t local_a8 = 0;
        uint64_t uStack_a0 = 0;
        uint32_t local_34 = uVar3;
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
        if (((char)uVar3 != '\0') && (arg1 != false)) {
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
                (logger::default_logger())
                    ->Log(false, 8,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                          "GLUtils.cpp",
                          936,
                          "Compressed textures are supported but sRGB compressed formats are not. Disabling sRGB "
                          "support in favour of compressed texture support");
                arg1 = false;
            }
        }
        _glBindTexture(3553, 0);
        CheckGlErrorInternal(
            "glBindTexture",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.cpp",
            942);
        return uVar3;
    }

    // 0x100bd07d0
    void GetTextureTypeForSampler(unsigned int arg1) {
        uint64_t uVar2;

        if (IsSamplerType(arg1) == '\0') {
            LogAssert("IsSamplerType(samplerType)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "GLUtils.cpp",
                      1026, nullptr);
        }
        if ((int)arg1 < 36289) {
            uVar2 = 32873;
            switch (arg1) {
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
            if (arg1 == 37131) {
                return 37125;
            }
            if (arg1 == 37128) {
                return 37124;
            }
            if (arg1 == 36289) {
                return 35869;
            }
        switchD_100bd0825_caseD_8b61:
            uVar2 = 1280;
        }
        return uVar2;
    }

    // 0x100bd0890
    void GetGLMapLockFlags(LockType lockType) {
        if (7 < lockType - 1) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/"
                            "OGL/GLUtils.cpp",
                            1079, nullptr);
        }
        return *(uint32_t*)(&DAT_100d996a4 + (long)(int)(lockType - 1) * 4);
    }

    // 0x100bd08d0
    void GetGLMapAccessFlags(LockType lockType) {
        unsigned int uVar1 = lockType - 1;
        if ((5 < uVar1) || ((47U >> (uVar1 & 31) & 1) == 0)) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/"
                            "OGL/GLUtils.cpp",
                            1103, "Unsupported access type");
        }
        return *(uint32_t*)(&DAT_100d996c4 + (long)(int)uVar1 * 4);
    }

} // namespace jag::render

// 0x100bcfda0
void __ZL6strchrUa9enable_ifIXLb1EEEPKci(char* param_1, int param_2) {
    __libcpp_strchr(param_1, param_2);
}

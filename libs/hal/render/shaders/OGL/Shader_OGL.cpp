// libs/hal/render/shaders/OGL/Shader_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "libs/hal/render/shaders/Shader.h"

namespace jag::render {
    // 0x100be8860
    Shader::~Shader() {
        if (m_nativeShader != 0) {
            LogAssert("m_GLShader == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "Shader_OGL.cpp",
                      20, nullptr);
        }
        (&field_80)->~mutex();
        field_48->~GPUMemoryTrackingEntry();
        field_8.~basic_string();
    }

    // 0x100be89d0
    bool Shader::IsReady() const {
        return (&field_40)->operator_cast_to_ShaderCompileState() == '\x03';
    }

    // 0x100be8a00
    uint32_t Shader::PrepareForReuse(const char* str1, const char* str2, unsigned char arg3) {
        uint32_t uVar2;

        scoped_lock<std::mutex> local_30(field_80);
        WaitForAsyncCompile();
        if (IsCreatedFromBinary()) {
            Destroy();
            CreateFromSourceString(str1, str2, arg3);
        }
        if (!(IsCreated())) {
            uVar2 = 0;
        } else {
            uVar2 = IsReady();
        }
        return uVar2;
    }

    // 0x100be8aa0
    void Shader::WaitForAsyncCompile() const {
        AutoSingleton<ShaderThreadPoolSingleton> local_18;

        GetWrapMode();
        char* pcVar2 = "%s %u (Flags=%u)";
        while (true) {
            if ((field_40.load((memory_order)pcVar2) & 254) == 2)
                break;
            this_thread::Sleep(1);
        }
    }

    // 0x100be8b20
    bool Shader::CreateFromSourceString(const char* str1, const char* str2, unsigned char arg3) {
        if (str2 == nullptr) {
            LogAssert("pShaderSourceStr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "Shader_OGL.cpp",
                      41, nullptr);
        }
        if (field_40.exchange(1, (memory_order)str2) != '\0') {
            LogAssert("compileState == ShaderCompileState::UNINITIALISED",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "Shader_OGL.cpp",
                      46, nullptr);
        }
        if (m_nativeShader != 0) {
            LogAssert("m_GLShader == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "Shader_OGL.cpp",
                      48, "Call destroy before calling create again");
        }
        field_41 = arg3;
        ShaderType shaderType = (*this->_vptr[1]._dtor)(this);
        m_nativeShader = CreateShaderFromSourceString(str2, shaderType, field_41);
        size_t sVar3 = _strlen(str2);
        field_48->Register(str1, (unsigned int)sVar3);
        field_40 = (3 - (m_nativeShader == 0));
        return m_nativeShader != 0;
    }

    // 0x100be8c30
    void Shader::ReleaseNativeResources() {
        bool cVar1;

        WaitForAsyncCompile();
        if (1 < m_nativeShader + 1) {
            cVar1 = (*___glewIsShader)();
            CheckGlErrorInternal("glIsProgram",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/Shader_OGL.cpp",
                                 29);
            if (cVar1) {
                (*___glewDeleteShader)(m_nativeShader);
                CheckGlErrorInternal("glDeleteShader",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/Shader_OGL.cpp",
                                     32);
            }
        }
        m_nativeShader = 0;
        field_40 = 0;
    }

    // 0x100bf2ac0
    uint64_t Shader::CreateFromBinary(const char* str, unsigned long arg2) {
        memory_order memory_order;

        if (m_nativeShader != 0) {
            LogAssert("m_GLShader == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "Shader_OGL.cpp",
                      67, "Call destroy before calling create again");
        }
        field_48->Register(str, (unsigned int)arg2);
        m_nativeShader = 4294967295;
        if (field_40.exchange(3, memory_order) == '\x03') {
            LogAssert("compileState != ShaderCompileState::READY",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "Shader_OGL.cpp",
                      76, nullptr);
        }
        return 1;
    }

} // namespace jag::render

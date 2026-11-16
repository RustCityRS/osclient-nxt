// libs/hal/render/shaders/OGL/Shader_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "libs/hal/render/shaders/Shader.h"

namespace jag::render {
    // 0x100be8860, 144 bytes, base-object destructor, placed by __FILE__ string
    // Shader::~Shader()
    void Shader::~Shader() {
        field_0 = &PTR__Shader_100f28280;
        if (m_nativeShader != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_GLShader == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "Shader_OGL.cpp",
                      20, (char*)0);
        }
        (&field_80)->~mutex();
        field_48->~GPUMemoryTrackingEntry();
        (&field_8)->~basic_string();
    }

    // 0x100be89d0, 32 bytes, placed by class name and neighbouring functions
    // Shader::IsReady() const
    bool Shader::IsReady() {
        char cVar1;

        cVar1 = (&field_40)->operator_cast_to_ShaderCompileState();
        return cVar1 == '\x03';
    }

    // 0x100be8a00, 160 bytes, placed by class name and neighbouring functions
    // Shader::PrepareForReuse(char const*, char const*, unsigned char)
    undefined4 Shader::PrepareForReuse(char* param_1, char* param_2, uchar param_3) {
        char cVar1;
        undefined4 uVar2;
        scoped_lock<std::mutex> local_30[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)&field_80);
        WaitForAsyncCompile(this);
        cVar1 = IsCreatedFromBinary(this);
        if (cVar1 != '\0') {
            Destroy(this);
            CreateFromSourceString(this, param_1, param_2, param_3);
        }
        cVar1 = IsCreated(this);
        if (cVar1 == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = IsReady(this);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        return uVar2;
    }

    // 0x100be8aa0, 112 bytes, placed by class name and neighbouring functions
    // Shader::WaitForAsyncCompile() const
    void Shader::WaitForAsyncCompile() {
        undefined4 uVar2;
        AutoSingleton<ShaderThreadPoolSingleton> local_18[8];

        uVar2 = GetWrapMode();
        local_18->~AutoSingleton("%s %u (Flags=%u)", "WaitForAsyncCompile", uVar2, field_41);
        while (true) {
            if ((std::__atomic_base<ShaderCompileState, false>::load(&field_40) & 254) == 2)
                break;
            this_thread::Sleep(1);
        }
    }

    // 0x100be8b20, 256 bytes, placed by __FILE__ string
    // Shader::CreateFromSourceString(char const*, char const*, unsigned char)
    bool Shader::CreateFromSourceString(char* param_1, char* param_2, uchar param_3) {
        char cVar1;
        undefined4 uVar2;
        size_t sVar4;

        if (param_2 == (char*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pShaderSourceStr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "Shader_OGL.cpp",
                      41, (char*)0);
        }
        cVar1 = std::__atomic_base<ShaderCompileState, false>::exchange(&field_40, 1);
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("compileState == ShaderCompileState::UNINITIALISED",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "Shader_OGL.cpp",
                      46, (char*)0);
        }
        if (m_nativeShader != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_GLShader == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "Shader_OGL.cpp",
                      48, "Call destroy before calling create again");
        }
        field_41 = param_3;
        uVar2 = (*(code*)field_0[2])(this);
        m_nativeShader = CreateShaderFromSourceString(param_2, uVar2, field_41);
        sVar4 = _strlen(param_2);
        (field_48, param_1, (uint)sVar4)->Register();
        std::atomic<ShaderCompileState>::operator=((atomic<ShaderCompileState>*)&field_40,
                                                   3 - (uint)(m_nativeShader == 0));
        return m_nativeShader != 0;
    }

    // 0x100be8c30, 144 bytes, placed by __FILE__ string
    // Shader::ReleaseNativeResources()
    void Shader::ReleaseNativeResources() {
        char cVar1;

        WaitForAsyncCompile(this);
        if (1 < m_nativeShader + 1U) {
            cVar1 = (*___glewIsShader)();
            CheckGlErrorInternal("glIsProgram",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/Shader_OGL.cpp",
                                 29);
            if (cVar1 != '\0') {
                (*___glewDeleteShader)(m_nativeShader);
                CheckGlErrorInternal("glDeleteShader",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/Shader_OGL.cpp",
                                     32);
            }
        }
        m_nativeShader = 0;
        std::atomic<ShaderCompileState>::operator=((atomic<ShaderCompileState>*)&field_40, 0);
    }

    // 0x100bf2a80, 16 bytes, complete-object destructor, placed by class name and neighbouring functions
    // Shader::~Shader(): jumps straight to the base-object destructor

    // 0x100bf2a90, 16 bytes, deleting destructor, placed by class name and neighbouring functions
    // Shader::~Shader()
    void Shader::~Shader() {
        code* pcVar1;

        /* WARNING: Does not return */
        pcVar1 = (code*)invalidInstructionException();
        (*pcVar1)();
    }

    // 0x100bf2ac0, 160 bytes, placed by __FILE__ string
    // Shader::CreateFromBinary(char const*, unsigned long)
    undefined8 Shader::CreateFromBinary(char* param_1, ulong param_2) {
        char cVar1;

        if (m_nativeShader != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_GLShader == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "Shader_OGL.cpp",
                      67, "Call destroy before calling create again");
        }
        (field_48, param_1, (uint)param_2)->Register();
        m_nativeShader = -1;
        cVar1 = std::__atomic_base<ShaderCompileState, false>::exchange(&field_40, 3);
        if (cVar1 == '\x03') {
            /* WARNING: Subroutine does not return */
            LogAssert("compileState != ShaderCompileState::READY",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "Shader_OGL.cpp",
                      76, (char*)0);
        }
        return 1;
    }

} // namespace jag::render

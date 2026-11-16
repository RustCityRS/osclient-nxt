// libs/hal/render/shaders/OGL/ShaderProgram_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "libs/hal/render/shaders/ShaderProgram.h"

namespace jag::render {
    // 0x100bde730
    void ShaderProgram::CreateFromSourceString(const char* str1, const char* str2,
                                               const VertexElementDesc* vertexElementDesc, unsigned int arg4,
                                               unsigned char arg5) {
        uint32_t in_register_00000084;

        m_compileFlags = arg5;
        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar1 + 226) == '\0') {
            m_compileFlags = m_compileFlags & 252;
        }
        field_24.Create(vertexElementDesc, (unsigned long)arg4, vertexElementDesc,
                        (((uint64_t)in_register_00000084 << 32) | (uint32_t)arg4));
        m_vertexShaderSource->SetSource(str1);
        m_pixelShaderSource->SetSource(str2);
        CreateFromSourceString();
    }

    // 0x100bde960
    void ShaderProgram::Destroy() {
        int iVar2;
        scoped_lock<std::mutex> local_20;

        if ((&field_369)->operator_cast_to_ShaderProgramLinkState() == '\0') {
            field_12.MarkAsDead();
            if (m_nativeShaderProgram != 0) {
                LogAssert("m_GLProgramObject == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "OGL/ShaderProgram_OGL.cpp",
                          562, nullptr);
            }
        } else {
            iVar2 = GetNativeShaderProgram();
            ReleaseNativeResources();
            field_320 = 0;
            *(uint32_t*)&field_321 = 0;
            field_324 = 0;
            *(uint32_t*)&field_325 = 0;
            field_328 = 0;
            if (iVar2 != 0) {
                field_376.Clear();
                field_496.clear();
                local_20 = std::scoped_lock(field_1768);
                field_552.clear();
            }
        }
    }

    // 0x100be6210
    uint32_t ShaderProgram::GetStorageBufferIndex(const HashedString& hashedString) const {
        unsigned int uVar1;
        void* pcVar2;
        bool cVar3;
        uint32_t uVar4;
        uint64_t uVar6;
        uint32_t* puVar7;
        unique_lock<std::mutex> local_50;

        long lVar5 = hashedString.HeapBeginPtr();
        if (lVar5 == 0) {
            LogAssert("storageBufferName.GetString() != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      1230, nullptr);
        }
        if (((m_compileFlags & 4) == 0) && (cVar3 = this_thread::IsMainThread(), !cVar3)) {
            LogAssert("(m_compileFlags & SHADER_THREAD_SAFE_CACHE) || this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      1231, nullptr);
        }
        if ((m_compileFlags & 4) == 0) {
            local_50 = std::unique_lock<std::mutex>();
        } else {
            local_50 = std::unique_lock<std::mutex>(field_1768);
        }
        uint8_t* this_00 = &field_552;
        local_40[0] = (ReturnValue)hashedString.end();
        auto local_60 = this_00->find(local_40);
        auto local_40 = this_00->end();
        cVar3 = local_60 != local_40;
        if (!cVar3) {
            WaitForAsyncCompile();
            pcVar2 = ___glewGetProgramResourceIndex;
            if (m_nativeShaderProgram == 0) {
                LogAssert("m_GLProgramObject",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "OGL/ShaderProgram_OGL.cpp",
                          1245, nullptr);
            }
            uVar1 = m_nativeShaderProgram;
            uVar6 = hashedString.HeapBeginPtr();
            uVar4 = (*pcVar2)(uVar1, 37606, uVar6);
            CheckGlErrorInternal("glGetProgramResourceIndex",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 1247);
            local_40[0] = (ReturnValue)hashedString.end();
            puVar7 = (uint32_t*)(*this_00)[local_40];
            *puVar7 = uVar4;
        } else {
            lVar5 = local_60.HeapBeginPtr();
            uVar4 = *(uint32_t*)(lVar5 + 8);
        }
        return uVar4;
    }

    // 0x100be8cd0
    void ShaderProgram::SetShaderConstMatrix4(const HashedString& hashedString, unsigned int arg2,
                                              const math::Matrix44T<float>* matrix44, unsigned int arg4) const {
        int arg1 = GetUniformLocationIndex(hashedString);
        if (-1 < arg1) {
            SetShaderConstMatrix4(arg1, arg2, matrix44, arg4);
        }
    }

    // 0x100be8d10
    uint32_t ShaderProgram::GetUniformLocationIndex(const HashedString& hashedString) const {
        unsigned int uVar1;
        void* pcVar2;
        bool cVar3;
        uint32_t uVar4;
        uint64_t uVar6;
        uint32_t* puVar7;
        unique_lock<std::mutex> local_50;

        long lVar5 = hashedString.HeapBeginPtr();
        if (lVar5 == 0) {
            LogAssert("constName.GetString() != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      1161, nullptr);
        }
        if (((m_compileFlags & 4) == 0) && (cVar3 = this_thread::IsMainThread(), !cVar3)) {
            LogAssert("(m_compileFlags & SHADER_THREAD_SAFE_CACHE) || this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      1162, nullptr);
        }
        if ((m_compileFlags & 4) == 0) {
            local_50 = std::unique_lock<std::mutex>();
        } else {
            local_50 = std::unique_lock<std::mutex>(field_1768);
        }
        uint8_t* this_00 = &field_552;
        local_40[0] = (ReturnValue)hashedString.end();
        auto local_60 = this_00->find(local_40);
        auto local_40 = this_00->end();
        cVar3 = local_60 != local_40;
        if (!cVar3) {
            WaitForAsyncCompile();
            pcVar2 = ___glewGetUniformLocation;
            if (m_nativeShaderProgram == 0) {
                LogAssert("m_GLProgramObject",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "OGL/ShaderProgram_OGL.cpp",
                          1176, nullptr);
            }
            uVar1 = m_nativeShaderProgram;
            uVar6 = hashedString.HeapBeginPtr();
            uVar4 = (*pcVar2)(uVar1, uVar6);
            CheckGlErrorInternal("glGetUniformLocation",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 1178);
            local_40[0] = (ReturnValue)hashedString.end();
            puVar7 = (uint32_t*)(*this_00)[local_40];
            *puVar7 = uVar4;
        } else {
            lVar5 = local_60.HeapBeginPtr();
            uVar4 = *(uint32_t*)(lVar5 + 8);
        }
        return uVar4;
    }

    // 0x100be8ed0
    void ShaderProgram::SetShaderConstMatrix4(int arg1, unsigned int arg2, const math::Matrix44T<float>* matrix44,
                                              unsigned int arg4) const {
        bool cVar1;
        RenderDevice* this_00;
        Matrix44T<float>* this_01;
        Matrix44T<float> local_108;
        ShaderProgram* local_f8;
        int local_f0;
        unsigned int local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        if ((matrix44 == nullptr) || (arg2 == 0)) {
            LogAssert("pMatrices && count >= 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      659, nullptr);
        }
        if (-1 < arg1) {
            if ((arg4 & 1) == 0) {
                if ((arg4 & 2) != 0) {
                    field_376.ClearShaderConst(arg1, arg2 << 4);
                }
            } else {
                cVar1 = field_376.SetShaderConstMatrix4(arg1, arg2, matrix44);
                if (!cVar1)
                    goto LAB_100be8fe0;
            }
            this_01 = &local_108;
            AllocateScratchArrayAndCopy<math::Matrix44T<float>>(&local_108, (unsigned long)matrix44);
            this_00 = (RenderDevice*)this_01->Instance();
            local_f8 = this;
            local_f0 = arg1;
            local_ec = arg2;
            local_e8 = WrapArray(local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int)
                    const ::__17,
                void>(local_d8, (__17*)&local_f8);
            this_00->RunOnRenderThread(*local_d8);
        }
    LAB_100be8fe0:
    }

    // 0x100be9020
    void ShaderProgram::SetShaderConstMatrix3(const HashedString& hashedString, unsigned int arg2,
                                              const math::Matrix33T<float>* matrix33, unsigned int arg4) const {
        int arg1 = GetUniformLocationIndex(hashedString);
        if (-1 < arg1) {
            SetShaderConstMatrix3(arg1, arg2, matrix33, arg4);
        }
    }

    // 0x100be9060
    void ShaderProgram::SetShaderConstMatrix3(int arg1, unsigned int arg2, const math::Matrix33T<float>* matrix33,
                                              unsigned int arg4) const {
        bool cVar1;
        RenderDevice* this_00;
        Matrix33T<float>* this_01;
        Matrix33T<float> local_108;
        ShaderProgram* local_f8;
        int local_f0;
        unsigned int local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        if ((matrix33 == nullptr) || (arg2 == 0)) {
            LogAssert("pMatrices && count >= 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      693, nullptr);
        }
        if (-1 < arg1) {
            if ((arg4 & 1) == 0) {
                if ((arg4 & 2) != 0) {
                    field_376.ClearShaderConst(arg1, arg2 * 9);
                }
            } else {
                cVar1 = field_376.SetShaderConstMatrix3(arg1, arg2, matrix33);
                if (!cVar1)
                    goto LAB_100be916e;
            }
            this_01 = &local_108;
            AllocateScratchArrayAndCopy<math::Matrix33T<float>>(&local_108, (unsigned long)matrix33);
            this_00 = (RenderDevice*)this_01->Instance();
            local_f8 = this;
            local_f0 = arg1;
            local_ec = arg2;
            local_e8 = WrapArray(local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int)
                    const ::__18,
                void>(local_d8, (__18*)&local_f8);
            this_00->RunOnRenderThread(*local_d8);
        }
    LAB_100be916e:
    }

    // 0x100be91b0
    void ShaderProgram::SetShaderConstMatrix2(const HashedString& hashedString, unsigned int arg2,
                                              const math::Matrix22T<float>* matrix22, unsigned int arg4) const {
        int arg1 = GetUniformLocationIndex(hashedString);
        if (-1 < arg1) {
            SetShaderConstMatrix2(arg1, arg2, matrix22, arg4);
        }
    }

    // 0x100be91f0
    void ShaderProgram::SetShaderConstMatrix2(int arg1, unsigned int arg2, const math::Matrix22T<float>* matrix22,
                                              unsigned int arg4) const {
        bool cVar1;
        RenderDevice* this_00;
        Matrix22T<float>* this_01;
        Matrix22T<float> local_108;
        ShaderProgram* local_f8;
        int local_f0;
        unsigned int local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        if ((matrix22 == nullptr) || (arg2 == 0)) {
            LogAssert("pMatrices && count >= 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      727, nullptr);
        }
        if (-1 < arg1) {
            if ((arg4 & 1) == 0) {
                if ((arg4 & 2) != 0) {
                    field_376.ClearShaderConst(arg1, arg2 * 4);
                }
            } else {
                cVar1 = field_376.SetShaderConstMatrix2(arg1, arg2, matrix22);
                if (!cVar1)
                    goto LAB_100be9302;
            }
            this_01 = &local_108;
            AllocateScratchArrayAndCopy<math::Matrix22T<float>>(&local_108, (unsigned long)matrix22);
            this_00 = (RenderDevice*)this_01->Instance();
            local_f8 = this;
            local_f0 = arg1;
            local_ec = arg2;
            local_e8 = WrapArray(local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int)
                    const ::__19,
                void>(local_d8, (__19*)&local_f8);
            this_00->RunOnRenderThread(*local_d8);
        }
    LAB_100be9302:
    }

    // 0x100be9340
    void ShaderProgram::SetShaderConstFloat4Array(const HashedString& hashedString, unsigned int arg2,
                                                  const float* arg3, unsigned int arg4) const {
        int arg1 = GetUniformLocationIndex(hashedString);
        if (-1 < arg1) {
            SetShaderConstFloat4Array(arg1, arg2, arg3, arg4);
        }
    }

    // 0x100be9380
    void ShaderProgram::SetShaderConstFloat4Array(int arg1, unsigned int arg2, const float* arg3,
                                                  unsigned int arg4) const {
        bool cVar1;
        RenderDevice* this_00;
        WrapArray<math::Matrix22T<float> const>* this_01;
        WrapArray<math::Matrix22T<float> const> local_108;
        ShaderProgram* local_f8;
        int local_f0;
        unsigned int local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        if ((arg2 == 0) || (arg3 == nullptr)) {
            LogAssert("count >= 1 && pFloatArray",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      762, nullptr);
        }
        if (-1 < arg1) {
            if ((arg4 & 1) == 0) {
                if ((arg4 & 2) != 0) {
                    field_376.ClearShaderConst(arg1, arg2);
                }
            } else {
                cVar1 = field_376.SetShaderConstInt4Array(arg1, arg2, arg3);
                if (!cVar1)
                    goto LAB_100be9492;
            }
            this_01 = &local_108;
            AllocateScratchArrayAndCopy<float>(&local_108, (unsigned long)arg3);
            this_00 = (RenderDevice*)this_01->Instance();
            local_f8 = this;
            local_f0 = arg1;
            local_ec = arg2;
            local_e8 = WrapArray(local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const ::__20,
                void>(local_d8, (__20*)&local_f8);
            this_00->RunOnRenderThread(*local_d8);
        }
    LAB_100be9492:
    }

    // 0x100be94d0
    void ShaderProgram::SetShaderConstUint4Array(const HashedString& hashedString, unsigned int arg2,
                                                 const unsigned int* arg3, unsigned int arg4) const {
        int arg1 = GetUniformLocationIndex(hashedString);
        if (-1 < arg1) {
            SetShaderConstUint4Array(arg1, arg2, arg3, arg4);
        }
    }

    // 0x100be9510
    void ShaderProgram::SetShaderConstUint4Array(int arg1, unsigned int arg2, const unsigned int* arg3,
                                                 unsigned int arg4) const {
        bool cVar1;
        RenderDevice* this_00;
        WrapArray<math::Matrix22T<float> const>* this_01;
        WrapArray<math::Matrix22T<float> const> local_108;
        ShaderProgram* local_f8;
        int local_f0;
        unsigned int local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        if ((arg2 == 0) || (arg3 == nullptr)) {
            LogAssert("count >= 1 && pUintArray",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      795, nullptr);
        }
        if (-1 < arg1) {
            if ((arg4 & 1) == 0) {
                if ((arg4 & 2) != 0) {
                    field_376.ClearShaderConst(arg1, arg2);
                }
            } else {
                cVar1 = field_376.SetShaderConstInt4Array(arg1, arg2, arg3);
                if (!cVar1)
                    goto LAB_100be9622;
            }
            this_01 = &local_108;
            AllocateScratchArrayAndCopy<unsigned int>(&local_108, (unsigned long)arg3);
            this_00 = (RenderDevice*)this_01->Instance();
            local_f8 = this;
            local_f0 = arg1;
            local_ec = arg2;
            local_e8 = WrapArray(local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int)
                    const ::__21,
                void>(local_d8, (__21*)&local_f8);
            this_00->RunOnRenderThread(*local_d8);
        }
    LAB_100be9622:
    }

    // 0x100be9660
    void ShaderProgram::SetShaderConstFloat3Array(const HashedString& hashedString, unsigned int arg2,
                                                  const float* arg3) const {
        int arg1 = GetUniformLocationIndex(hashedString);
        if (-1 < arg1) {
            SetShaderConstFloat3Array(arg1, arg2, arg3);
        }
    }

    // 0x100be96a0
    void ShaderProgram::SetShaderConstFloat3Array(int arg1, unsigned int arg2, const float* arg3) const {
        bool cVar1;
        RenderDevice* this_00;
        WrapArray<math::Matrix22T<float> const>* this_01;
        WrapArray<math::Matrix22T<float> const> local_108;
        ShaderProgram* local_f8;
        int local_f0;
        unsigned int local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        if ((arg2 == 0) || (arg3 == nullptr)) {
            LogAssert("count >= 1 && pFloatArray",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      828, nullptr);
        }
        if ((-1 < arg1) && (cVar1 = field_376.SetShaderConstInt3Array(arg1, arg2, arg3), cVar1)) {
            this_01 = &local_108;
            AllocateScratchArrayAndCopy<float>(&local_108, (unsigned long)arg3);
            this_00 = (RenderDevice*)this_01->Instance();
            local_f8 = this;
            local_f0 = arg1;
            local_ec = arg2;
            local_e8 = WrapArray(local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::__22, void>(
                local_d8, (__22*)&local_f8);
            this_00->RunOnRenderThread(*local_d8);
        }
    }

    // 0x100be97d0
    void ShaderProgram::SetShaderConstFloat2Array(const HashedString& hashedString, unsigned int arg2,
                                                  const float* arg3) const {
        int arg1 = GetUniformLocationIndex(hashedString);
        if (-1 < arg1) {
            SetShaderConstFloat2Array(arg1, arg2, arg3);
        }
    }

    // 0x100be9810
    void ShaderProgram::SetShaderConstFloat2Array(int arg1, unsigned int arg2, const float* arg3) const {
        bool cVar1;
        RenderDevice* this_00;
        WrapArray<math::Matrix22T<float> const>* this_01;
        WrapArray<math::Matrix22T<float> const> local_108;
        ShaderProgram* local_f8;
        int local_f0;
        unsigned int local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        if ((arg2 == 0) || (arg3 == nullptr)) {
            LogAssert("count >= 1 && pFloatArray",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      837, nullptr);
        }
        if ((-1 < arg1) && (cVar1 = field_376.SetShaderConstInt2Array(arg1, arg2, arg3), cVar1)) {
            this_01 = &local_108;
            AllocateScratchArrayAndCopy<float>(&local_108, (unsigned long)arg3);
            this_00 = (RenderDevice*)this_01->Instance();
            local_f8 = this;
            local_f0 = arg1;
            local_ec = arg2;
            local_e8 = WrapArray(local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::__23, void>(
                local_d8, (__23*)&local_f8);
            this_00->RunOnRenderThread(*local_d8);
        }
    }

    // 0x100be9940
    void ShaderProgram::SetShaderConstFloat1Array(const HashedString& hashedString, unsigned int arg2,
                                                  const float* arg3, unsigned int arg4) const {
        int arg1 = GetUniformLocationIndex(hashedString);
        if (-1 < arg1) {
            SetShaderConstFloat1Array(arg1, arg2, arg3, arg4);
        }
    }

    // 0x100be9980
    void ShaderProgram::SetShaderConstFloat1Array(int arg1, unsigned int arg2, const float* arg3,
                                                  unsigned int arg4) const {
        bool cVar1;
        RenderDevice* this_00;
        WrapArray<math::Matrix22T<float> const>* this_01;
        WrapArray<math::Matrix22T<float> const> local_108;
        ShaderProgram* local_f8;
        int local_f0;
        unsigned int local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        if ((arg2 == 0) || (arg3 == nullptr)) {
            LogAssert("count >= 1 && pFloatArray",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      846, nullptr);
        }
        if (-1 < arg1) {
            if ((arg4 & 1) == 0) {
                if ((arg4 & 2) != 0) {
                    field_376.ClearShaderConst(arg1, arg2);
                }
            } else {
                cVar1 = field_376.SetShaderConstInt1Array(arg1, arg2, arg3);
                if (!cVar1)
                    goto LAB_100be9a8d;
            }
            this_01 = &local_108;
            AllocateScratchArrayAndCopy<float>(&local_108, (unsigned long)arg3);
            this_00 = (RenderDevice*)this_01->Instance();
            local_f8 = this;
            local_f0 = arg1;
            local_ec = arg2;
            local_e8 = WrapArray(local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const ::__24,
                void>(local_d8, (__24*)&local_f8);
            this_00->RunOnRenderThread(*local_d8);
        }
    LAB_100be9a8d:
    }

    // 0x100be9ad0
    void ShaderProgram::SetShaderConstInt4Array(const HashedString& hashedString, unsigned int arg2,
                                                const int* arg3) const {
        int arg1 = GetUniformLocationIndex(hashedString);
        if (-1 < arg1) {
            SetShaderConstInt4Array(arg1, arg2, arg3);
        }
    }

    // 0x100be9b10
    void ShaderProgram::SetShaderConstInt4Array(int arg1, unsigned int arg2, const int* arg3) const {
        bool cVar1;
        RenderDevice* this_00;
        WrapArray<math::Matrix22T<float> const>* this_01;
        WrapArray<math::Matrix22T<float> const> local_108;
        ShaderProgram* local_f8;
        int local_f0;
        unsigned int local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        if ((arg2 == 0) || (arg3 == nullptr)) {
            LogAssert("count >= 1 && pIntArray",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      879, nullptr);
        }
        if ((-1 < arg1) && (cVar1 = field_376.SetShaderConstInt4Array(arg1, arg2, arg3), cVar1)) {
            this_01 = &local_108;
            AllocateScratchArrayAndCopy<int>(&local_108, (unsigned long)arg3);
            this_00 = (RenderDevice*)this_01->Instance();
            local_f8 = this;
            local_f0 = arg1;
            local_ec = arg2;
            local_e8 = WrapArray(local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::__25, void>(
                local_d8, (__25*)&local_f8);
            this_00->RunOnRenderThread(*local_d8);
        }
    }

    // 0x100be9c40
    void ShaderProgram::SetShaderConstInt3Array(const HashedString& hashedString, unsigned int arg2,
                                                const int* arg3) const {
        int arg1 = GetUniformLocationIndex(hashedString);
        if (-1 < arg1) {
            SetShaderConstInt3Array(arg1, arg2, arg3);
        }
    }

    // 0x100be9c80
    void ShaderProgram::SetShaderConstInt3Array(int arg1, unsigned int arg2, const int* arg3) const {
        bool cVar1;
        RenderDevice* this_00;
        WrapArray<math::Matrix22T<float> const>* this_01;
        WrapArray<math::Matrix22T<float> const> local_108;
        ShaderProgram* local_f8;
        int local_f0;
        unsigned int local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        if ((arg2 == 0) || (arg3 == nullptr)) {
            LogAssert("count >= 1 && pIntArray",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      888, nullptr);
        }
        if ((-1 < arg1) && (cVar1 = field_376.SetShaderConstInt3Array(arg1, arg2, arg3), cVar1)) {
            this_01 = &local_108;
            AllocateScratchArrayAndCopy<int>(&local_108, (unsigned long)arg3);
            this_00 = (RenderDevice*)this_01->Instance();
            local_f8 = this;
            local_f0 = arg1;
            local_ec = arg2;
            local_e8 = WrapArray(local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::__26, void>(
                local_d8, (__26*)&local_f8);
            this_00->RunOnRenderThread(*local_d8);
        }
    }

    // 0x100be9db0
    void ShaderProgram::SetShaderConstInt2Array(const HashedString& hashedString, unsigned int arg2,
                                                const int* arg3) const {
        int arg1 = GetUniformLocationIndex(hashedString);
        if (-1 < arg1) {
            SetShaderConstInt2Array(arg1, arg2, arg3);
        }
    }

    // 0x100be9df0
    void ShaderProgram::SetShaderConstInt2Array(int arg1, unsigned int arg2, const int* arg3) const {
        bool cVar1;
        RenderDevice* this_00;
        WrapArray<math::Matrix22T<float> const>* this_01;
        WrapArray<math::Matrix22T<float> const> local_108;
        ShaderProgram* local_f8;
        int local_f0;
        unsigned int local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        if ((arg2 == 0) || (arg3 == nullptr)) {
            LogAssert("count >= 1 && pIntArray",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      897, nullptr);
        }
        if ((-1 < arg1) && (cVar1 = field_376.SetShaderConstInt2Array(arg1, arg2, arg3), cVar1)) {
            this_01 = &local_108;
            AllocateScratchArrayAndCopy<int>(&local_108, (unsigned long)arg3);
            this_00 = (RenderDevice*)this_01->Instance();
            local_f8 = this;
            local_f0 = arg1;
            local_ec = arg2;
            local_e8 = WrapArray(local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::__27, void>(
                local_d8, (__27*)&local_f8);
            this_00->RunOnRenderThread(*local_d8);
        }
    }

    // 0x100be9f20
    void ShaderProgram::SetShaderConstInt1Array(const HashedString& hashedString, unsigned int arg2,
                                                const int* arg3) const {
        int arg1 = GetUniformLocationIndex(hashedString);
        if (-1 < arg1) {
            SetShaderConstInt1Array(arg1, arg2, arg3);
        }
    }

    // 0x100be9f60
    void ShaderProgram::SetShaderConstInt1Array(int arg1, unsigned int arg2, const int* arg3) const {
        bool cVar1;
        RenderDevice* this_00;
        WrapArray<math::Matrix22T<float> const>* this_01;
        WrapArray<math::Matrix22T<float> const> local_108;
        ShaderProgram* local_f8;
        int local_f0;
        unsigned int local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        if ((arg2 == 0) || (arg3 == nullptr)) {
            LogAssert("count >= 1 && pIntArray",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      906, nullptr);
        }
        if ((-1 < arg1) && (cVar1 = field_376.SetShaderConstInt1Array(arg1, arg2, arg3), cVar1)) {
            this_01 = &local_108;
            AllocateScratchArrayAndCopy<int>(&local_108, (unsigned long)arg3);
            this_00 = (RenderDevice*)this_01->Instance();
            local_f8 = this;
            local_f0 = arg1;
            local_ec = arg2;
            local_e8 = WrapArray(local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::__28, void>(
                local_d8, (__28*)&local_f8);
            this_00->RunOnRenderThread(*local_d8);
        }
    }

    // 0x100bea090
    void ShaderProgram::SetShaderConstUInt1Array(const HashedString& hashedString, unsigned int arg2,
                                                 const unsigned int* arg3, unsigned int arg4) const {
        int arg1 = GetUniformLocationIndex(hashedString);
        if (-1 < arg1) {
            SetShaderConstUInt1Array(arg1, arg2, arg3, arg4);
        }
    }

    // 0x100bea0d0
    void ShaderProgram::SetShaderConstUInt1Array(int arg1, unsigned int arg2, const unsigned int* arg3,
                                                 unsigned int arg4) const {
        bool cVar1;
        RenderDevice* this_00;
        WrapArray<math::Matrix22T<float> const>* this_01;
        WrapArray<math::Matrix22T<float> const> local_108;
        ShaderProgram* local_f8;
        int local_f0;
        unsigned int local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        if ((arg2 == 0) || (arg3 == nullptr)) {
            LogAssert("count >= 1 && pUIntArray",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      916, nullptr);
        }
        if (-1 < arg1) {
            if ((arg4 & 1) == 0) {
                if ((arg4 & 2) != 0) {
                    field_376.ClearShaderConst(arg1, arg2);
                }
            } else {
                cVar1 = field_376.SetShaderConstInt1Array(arg1, arg2, arg3);
                if (!cVar1)
                    goto LAB_100bea1dd;
            }
            this_01 = &local_108;
            AllocateScratchArrayAndCopy<unsigned int>(&local_108, (unsigned long)arg3);
            this_00 = (RenderDevice*)this_01->Instance();
            local_f8 = this;
            local_f0 = arg1;
            local_ec = arg2;
            local_e8 = WrapArray(local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int)
                    const ::__29,
                void>(local_d8, (__29*)&local_f8);
            this_00->RunOnRenderThread(*local_d8);
        }
    LAB_100bea1dd:
    }

    // 0x100bea220
    void ShaderProgram::SetShaderConstVector4(const HashedString& hashedString,
                                              const math::Vector4T<float>* vector4) const {
        int arg1 = GetUniformLocationIndex(hashedString);
        if (-1 < arg1) {
            SetShaderConstVector4(arg1, vector4);
        }
    }

    // 0x100bea250
    void ShaderProgram::SetShaderConstVector4(int arg1, const math::Vector4T<float>* vector4) const {
        RenderDevice* this_00;
        Singleton<RenderDevice>* this_01;
        ShaderProgram* local_f8;
        int local_f0;
        uint64_t local_e8;
        uint64_t uStack_e0;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[168];
        long local_30;

        if (vector4 == nullptr) {
            LogAssert("pVectors",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      950, nullptr);
        }
        if (-1 < arg1) {
            this_01 = (Singleton<RenderDevice>*)&field_376;
            if (this_01->SetShaderConstVector4(arg1, vector4)) {
                this_00 = (RenderDevice*)this_01->Instance();
                local_e8 = *(uint64_t*)vector4;
                uStack_e0 = *(uint64_t*)(vector4 + 8);
                local_f8 = this;
                local_f0 = arg1;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::__30, void>(
                    local_d8, (__30*)&local_f8);
                this_00->RunOnRenderThread(*local_d8);
            }
        }
    }

    // 0x100bea350
    void ShaderProgram::SetShaderConstVector3(const HashedString& hashedString,
                                              const math::Vector3T<float>* vector3) const {
        int arg1 = GetUniformLocationIndex(hashedString);
        if (-1 < arg1) {
            SetShaderConstVector3(arg1, vector3);
        }
    }

    // 0x100bea380
    void ShaderProgram::SetShaderConstVector3(int arg1, const math::Vector3T<float>* vector3) const {
        RenderDevice* this_00;
        Singleton<RenderDevice>* this_01;
        ShaderProgram* local_f0;
        int local_e8;
        uint64_t local_e4;
        uint32_t local_dc;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[168];
        long local_30;

        if (vector3 == nullptr) {
            LogAssert("pVectors",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      960, nullptr);
        }
        if (-1 < arg1) {
            this_01 = (Singleton<RenderDevice>*)&field_376;
            if (this_01->SetShaderConstVector3(arg1, vector3)) {
                this_00 = (RenderDevice*)this_01->Instance();
                local_e4 = *(uint64_t*)vector3;
                local_dc = *(uint32_t*)(vector3 + 8);
                local_f0 = this;
                local_e8 = arg1;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::__31, void>(
                    local_d8, (__31*)&local_f0);
                this_00->RunOnRenderThread(*local_d8);
            }
        }
    }

    // 0x100bea490
    void ShaderProgram::SetShaderConstVector4(int arg1, unsigned int arg2, const math::Vector4T<float>* vector4,
                                              unsigned int arg4) const {
        bool cVar1;
        RenderDevice* this_00;
        Vector4T<float>* this_01;
        Vector4T<float> local_108;
        ShaderProgram* local_f8;
        int local_f0;
        unsigned int local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        if ((arg2 == 0) || (vector4 == nullptr)) {
            LogAssert("count >= 1 && pVectors",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      970, nullptr);
        }
        if (-1 < arg1) {
            if ((arg4 & 1) == 0) {
                if ((arg4 & 2) != 0) {
                    field_376.ClearShaderConst(arg1, arg2);
                }
            } else {
                cVar1 = field_376.SetShaderConstVector4(arg1, arg2, vector4);
                if (!cVar1)
                    goto LAB_100bea59d;
            }
            this_01 = &local_108;
            AllocateScratchArrayAndCopy<math::Vector4T<float>>(&local_108, (unsigned long)vector4);
            this_00 = (RenderDevice*)this_01->Instance();
            local_f8 = this;
            local_f0 = arg1;
            local_ec = arg2;
            local_e8 = WrapArray(local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int)
                    const ::__32,
                void>(local_d8, (__32*)&local_f8);
            this_00->RunOnRenderThread(*local_d8);
        }
    LAB_100bea59d:
    }

    // 0x100bea5e0
    void ShaderProgram::SetShaderConstVector3(const HashedString& hashedString, unsigned int arg2,
                                              const math::Vector3T<float>* vector3) const {
        int arg1 = GetUniformLocationIndex(hashedString);
        if (-1 < arg1) {
            SetShaderConstVector3(arg1, arg2, vector3);
        }
    }

    // 0x100bea620
    void ShaderProgram::SetShaderConstVector3(int arg1, unsigned int arg2, const math::Vector3T<float>* vector3) const {
        bool cVar1;
        RenderDevice* this_00;
        Vector3T<float>* this_01;
        Vector3T<float> local_108;
        ShaderProgram* local_f8;
        int local_f0;
        unsigned int local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        if ((vector3 == nullptr) || (arg2 == 0)) {
            LogAssert("pVectors && count >= 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      1003, nullptr);
        }
        if ((-1 < arg1) && (cVar1 = field_376.SetShaderConstVector3(arg1, arg2, vector3), cVar1)) {
            this_01 = &local_108;
            AllocateScratchArrayAndCopy<math::Vector3T<float>>(&local_108, (unsigned long)vector3);
            this_00 = (RenderDevice*)this_01->Instance();
            local_f8 = this;
            local_f0 = arg1;
            local_ec = arg2;
            local_e8 = WrapArray(local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const ::__33,
                void>(local_d8, (__33*)&local_f8);
            this_00->RunOnRenderThread(*local_d8);
        }
    }

    // 0x100bea750
    void ShaderProgram::SetShaderConstVector2(const HashedString& hashedString, unsigned int arg2,
                                              const math::Vector2T<float>* vector2) const {
        int arg1 = GetUniformLocationIndex(hashedString);
        if (-1 < arg1) {
            SetShaderConstVector2(arg1, arg2, vector2);
        }
    }

    // 0x100bea790
    void ShaderProgram::SetShaderConstVector2(int arg1, unsigned int arg2, const math::Vector2T<float>* vector2) const {
        bool cVar1;
        RenderDevice* this_00;
        Vector2T<float>* this_01;
        Vector2T<float> local_108;
        ShaderProgram* local_f8;
        int local_f0;
        unsigned int local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        if ((vector2 == nullptr) || (arg2 == 0)) {
            LogAssert("pVectors && count >= 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      1012, nullptr);
        }
        if ((-1 < arg1) && (cVar1 = field_376.SetShaderConstVector2(arg1, arg2, vector2), cVar1)) {
            this_01 = &local_108;
            AllocateScratchArrayAndCopy<math::Vector2T<float>>(&local_108, (unsigned long)vector2);
            this_00 = (RenderDevice*)this_01->Instance();
            local_f8 = this;
            local_f0 = arg1;
            local_ec = arg2;
            local_e8 = WrapArray(local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const ::__34,
                void>(local_d8, (__34*)&local_f8);
            this_00->RunOnRenderThread(*local_d8);
        }
    }

    // 0x100bea8c0
    void ShaderProgram::SetShaderConstVector2(const HashedString& hashedString,
                                              const math::Vector2T<float>* vector2) const {
        SetShaderConstVector2(hashedString, 1, vector2);
    }

    // 0x100bea8e0
    void ShaderProgram::SetShaderConstFloat4(const HashedString& hashedString, float arg2, float arg3, float arg4,
                                             float arg5) const {
        int arg1 = GetUniformLocationIndex(hashedString);
        if (-1 < arg1) {
            SetShaderConstFloat4(arg1, arg2, arg3, arg4, arg5);
        }
    }

    // 0x100bea930
    void ShaderProgram::SetShaderConstFloat4(int arg1, float arg2, float arg3, float arg4, float arg5) const {
        RenderDevice* this_00;
        Singleton<RenderDevice>* this_01;
        ShaderProgram* local_f8;
        int local_f0;
        float local_ec;
        float local_e8;
        float local_e4;
        float local_e0;
        float local_d8;
        float local_d4;
        float local_d0;
        float local_cc;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[160];
        long local_28;

        if (-1 < arg1) {
            this_01 = (Singleton<RenderDevice>*)&field_376;
            local_d8 = arg3;
            local_d4 = arg2;
            local_d0 = arg5;
            local_cc = arg4;
            if (this_01->SetShaderConstFloat4(arg1, arg2, arg3, arg4, arg5)) {
                this_00 = (RenderDevice*)this_01->Instance();
                local_ec = local_d4;
                local_e8 = local_d8;
                local_e4 = local_cc;
                local_e0 = local_d0;
                local_f8 = this;
                local_f0 = arg1;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::__35, void>(
                    local_c8, (__35*)&local_f8);
                this_00->RunOnRenderThread(*local_c8);
            }
        }
    }

    // 0x100beaa60
    void ShaderProgram::SetShaderConstFloat3(const HashedString& hashedString, float arg2, float arg3,
                                             float arg4) const {
        int arg1 = GetUniformLocationIndex(hashedString);
        if (-1 < arg1) {
            SetShaderConstFloat3(arg1, arg2, arg3, arg4);
        }
    }

    // 0x100beaab0
    void ShaderProgram::SetShaderConstFloat3(int arg1, float arg2, float arg3, float arg4) const {
        RenderDevice* this_00;
        Singleton<RenderDevice>* this_01;
        ShaderProgram* local_f0;
        int local_e8;
        float local_e4;
        float local_e0;
        float local_dc;
        float local_d4;
        float local_d0;
        float local_cc;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[160];
        long local_28;

        if (-1 < arg1) {
            this_01 = (Singleton<RenderDevice>*)&field_376;
            local_d4 = arg2;
            local_d0 = arg4;
            local_cc = arg3;
            if (this_01->SetShaderConstFloat3(arg1, arg2, arg3, arg4)) {
                this_00 = (RenderDevice*)this_01->Instance();
                local_e4 = local_d4;
                local_e0 = local_cc;
                local_dc = local_d0;
                local_f0 = this;
                local_e8 = arg1;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::__36, void>(local_c8,
                                                                                                      (__36*)&local_f0);
                this_00->RunOnRenderThread(*local_c8);
            }
        }
    }

    // 0x100beabc0
    void ShaderProgram::SetShaderConstFloat2(const HashedString& hashedString, float arg2, float arg3) const {
        int arg1 = GetUniformLocationIndex(hashedString);
        if (-1 < arg1) {
            SetShaderConstFloat2(arg1, arg2, arg3);
        }
    }

    // 0x100beac00
    void ShaderProgram::SetShaderConstFloat2(int arg1, float arg2, float arg3) const {
        RenderDevice* this_00;
        Singleton<RenderDevice>* this_01;
        ShaderProgram* local_e8;
        int local_e0;
        float local_dc;
        float local_d8;
        float local_d0;
        float local_cc;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[160];
        long local_28;

        if (-1 < arg1) {
            this_01 = (Singleton<RenderDevice>*)&field_376;
            local_d0 = arg2;
            local_cc = arg3;
            if (this_01->SetShaderConstFloat2(arg1, arg2, arg3)) {
                this_00 = (RenderDevice*)this_01->Instance();
                local_dc = local_d0;
                local_d8 = local_cc;
                local_e8 = this;
                local_e0 = arg1;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    ShaderProgram::SetShaderConstFloat2(int, float, float) const ::__37, void>(local_c8,
                                                                                               (__37*)&local_e8);
                this_00->RunOnRenderThread(*local_c8);
            }
        }
    }

    // 0x100beacf0
    void ShaderProgram::SetShaderConstFloat1(const HashedString& hashedString, float arg2) const {
        int arg1 = GetUniformLocationIndex(hashedString);
        if (-1 < arg1) {
            SetShaderConstFloat1(arg1, arg2);
        }
    }

    // 0x100bead20
    void ShaderProgram::SetShaderConstFloat1(int arg1, float arg2) const {
        RenderDevice* this_00;
        Singleton<RenderDevice>* this_01;
        ShaderProgram* local_e0;
        int local_d8;
        float local_d4;
        float local_cc;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[160];
        long local_28;

        if (-1 < arg1) {
            this_01 = (Singleton<RenderDevice>*)&field_376;
            local_cc = arg2;
            if (this_01->SetShaderConstFloat1(arg1, arg2)) {
                this_00 = (RenderDevice*)this_01->Instance();
                local_d4 = local_cc;
                local_e0 = this;
                local_d8 = arg1;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    ShaderProgram::SetShaderConstFloat1(int, float) const ::__38, void>(local_c8, (__38*)&local_e0);
                this_00->RunOnRenderThread(*local_c8);
            }
        }
    }

    // 0x100beae00
    void ShaderProgram::SetShaderConstInt4(const HashedString& hashedString, int arg2, int arg3, int arg4,
                                           int arg5) const {
        int arg1 = GetUniformLocationIndex(hashedString);
        if (-1 < arg1) {
            SetShaderConstInt4(arg1, arg2, arg3, arg4, arg5);
        }
    }

    // 0x100beae50
    void ShaderProgram::SetShaderConstInt4(int arg1, int arg2, int arg3, int arg4, int arg5) const {
        ShaderProgram* pSVar1;
        bool cVar2;
        Singleton<RenderDevice>* this_00;
        ShaderProgram* local_110;
        int local_108;
        int local_104;
        int local_100;
        int local_fc;
        int local_f8;
        RenderDevice* local_f0;
        ShaderProgram* local_e8;
        int local_dc;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        if (-1 < arg1) {
            this_00 = (Singleton<RenderDevice>*)&field_376;
            local_e8 = this;
            cVar2 = this_00->SetShaderConstInt4(arg1, arg2, arg3, arg4, arg5);
            pSVar1 = local_e8;
            if (cVar2) {
                local_dc = arg5;
                local_f0 = (RenderDevice*)this_00->Instance();
                local_110 = pSVar1;
                local_f8 = local_dc;
                local_108 = arg1;
                local_104 = arg2;
                local_100 = arg3;
                local_fc = arg4;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::__39, void>(local_d8,
                                                                                                   (__39*)&local_110);
                local_f0->RunOnRenderThread(*local_d8);
            }
        }
    }

    // 0x100beaf60
    void ShaderProgram::SetShaderConstInt3(const HashedString& hashedString, int arg2, int arg3, int arg4) const {
        int arg1 = GetUniformLocationIndex(hashedString);
        if (-1 < arg1) {
            SetShaderConstInt3(arg1, arg2, arg3, arg4);
        }
    }

    // 0x100beafa0
    void ShaderProgram::SetShaderConstInt3(int arg1, int arg2, int arg3, int arg4) const {
        Singleton<RenderDevice>* this_00;
        ShaderProgram* local_f8;
        int local_f0;
        int local_ec;
        int local_e8;
        int local_e4;
        RenderDevice* local_e0;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        if (-1 < arg1) {
            this_00 = (Singleton<RenderDevice>*)&field_376;
            if (this_00->SetShaderConstInt3(arg1, arg2, arg3, arg4)) {
                local_e0 = (RenderDevice*)this_00->Instance();
                local_f8 = this;
                local_f0 = arg1;
                local_ec = arg2;
                local_e8 = arg3;
                local_e4 = arg4;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::__40, void>(local_d8,
                                                                                              (__40*)&local_f8);
                local_e0->RunOnRenderThread(*local_d8);
            }
        }
    }

    // 0x100beb090
    void ShaderProgram::SetShaderConstInt2(const HashedString& hashedString, int arg2, int arg3) const {
        int arg1 = GetUniformLocationIndex(hashedString);
        if (-1 < arg1) {
            SetShaderConstInt2(arg1, arg2, arg3);
        }
    }

    // 0x100beb0d0
    void ShaderProgram::SetShaderConstInt2(int arg1, int arg2, int arg3) const {
        RenderDevice* this_00;
        Singleton<RenderDevice>* this_01;
        ShaderProgram* local_f0;
        int local_e8;
        int local_e4;
        int local_e0;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        if (-1 < arg1) {
            this_01 = (Singleton<RenderDevice>*)&field_376;
            if (this_01->SetShaderConstInt2(arg1, arg2, arg3)) {
                this_00 = (RenderDevice*)this_01->Instance();
                local_f0 = this;
                local_e8 = arg1;
                local_e4 = arg2;
                local_e0 = arg3;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    ShaderProgram::SetShaderConstInt2(int, int, int) const ::__41, void>(local_d8, (__41*)&local_f0);
                this_00->RunOnRenderThread(*local_d8);
            }
        }
    }

    // 0x100beb1a0
    void ShaderProgram::SetShaderConstInt1(const HashedString& hashedString, int arg2) const {
        int arg1 = GetUniformLocationIndex(hashedString);
        if (-1 < arg1) {
            SetShaderConstInt1(arg1, arg2);
        }
    }

    // 0x100beb1d0
    void ShaderProgram::SetShaderConstInt1(int arg1, int arg2) const {
        RenderDevice* this_00;
        Singleton<RenderDevice>* this_01;
        ReturnValue local_f0;
        unsigned int local_e8;
        int local_e4;
        ReturnValue local_d8;

        if (-1 < arg1) {
            local_d8 = field_496.find((unsigned int)arg1);
            local_f0 = field_496.end();
            if (!(local_d8 == local_f0)) {
                LogAssert("index < 0 || m_samplerStateCache.find(index) == m_samplerStateCache.end()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "OGL/ShaderProgram_OGL.cpp",
                          1096, nullptr);
            }
        }
        if (-1 < (int)(unsigned int)arg1) {
            this_01 = (Singleton<RenderDevice>*)&field_376;
            if (this_01->SetShaderConstInt1((unsigned int)arg1, arg2)) {
                this_00 = (RenderDevice*)this_01->Instance();
                local_e8 = (unsigned int)arg1;
                local_f0 = (ReturnValue)this;
                local_e4 = arg2;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    ShaderProgram::SetShaderConstInt1(int, int) const ::__42, void>(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                    (__42*)&local_f0);
                this_00->RunOnRenderThread(local_d8);
            }
        }
    }

    // 0x100beb6f0
    void ShaderProgram::WaitForAsyncCompile() const {
        uint8_t bVar1;
        uint8_t* this_00;
        memory_order in_ESI;

        auto pRVar3 = InstancePtr();
        if (pRVar3 != nullptr) {
            pRVar3 = (RenderDevice*)Instance();
            if (pRVar3->GetCurrentThreadRenderContext() != nullptr) {
                if ((m_compileFlags & 1) != 0) {
                    bVar1 = field_369.load(in_ESI);
                    if ((6 < bVar1) || ((97U >> (bVar1 & 31) & 1) == 0)) {
                        if (field_1840.valid()) {
                            field_1840.wait();
                        }
                    }
                }
                this_00 = &field_1848;
                if (this_00->IsCreated()) {
                    this_00->WaitServer();
                    this_00->Destroy();
                }
                return;
            }
        }
        LogAssert("RenderDevice::InstancePtr() && RenderDevice::Instance().GetCurrentThreadRenderContext()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                  "ShaderProgram_OGL.cpp",
                  1382, nullptr);
    }

    // 0x100bee420
    ShaderProgram::ShaderProgram(const char* str) : RenderDeviceOnEndFrame(false) {
        equal_to<unsigned long> local_40;

        new (&field_160) shared_ptr();
        new (m_pixelShaderSource) ShaderSource();
        new (&field_216) shared_ptr();
        new (&field_232) ShaderSource();
        new (&field_272) shared_ptr();
        new (&field_288) eastl::vector<unsigned char>();
        field_320 = 0;
        *(uint32_t*)&field_321 = 0;
        field_324 = 0;
        *(uint32_t*)&field_325 = 0;
        field_328 = 0;
        m_lastUsedTimeSeconds = 0.0;
        new (&field_336) eastl::string(str);
        m_compileFlags = '\0';
        new (&field_369) std::atomic<ShaderProgramLinkState>((ShaderProgramLinkState)str);
        new (&field_376) ShaderProgramStateCache();
        new (&field_496) eastl::hash_map(local_48);
        new (&field_552) eastl::fixed_hash_map<unsigned long, int, 32ul, 33ul, true, eastl::hash<unsigned long>,
                                               eastl::equal_to<unsigned long>, false>(local_48, local_40);
        new (&field_1728) eastl::vector_map<unsigned long, int>();
        new (&field_1768) std::mutex();
        m_nativeShaderProgram = 0;
        field_1836 = 0;
        new (&field_1840) std::future<void>();
        new (&field_1848) SyncFence();
        field_1728.reserve(16);
        field_24.DisableMarkAsDead(3);
    }

    // 0x100bee7f0
    ShaderProgram::~ShaderProgram() {
        Destroy();
        field_1848.~SyncFence();
        (&field_1840)->~future();
        (&field_1768)->~mutex();
        field_552.~fixed_hash_map();
        field_496.~hash_map();
        field_376.~ShaderProgramStateCache();
        field_336.~basic_string();
        field_288.~vector();
        field_272.~shared_ptr();
        field_232.~hash_node();
        field_216.~shared_ptr();
        m_pixelShaderSource->~hash_node();
        field_160.~shared_ptr();
        m_vertexShaderSource->~hash_node();
        field_24.~VertexDeclaration();
        field_12.~RenderResource();
    }

    // 0x100beea20
    uint64_t ShaderProgram::CreateFromSourceString() {
        uint64_t uVar2;
        Layout* this_00;
        char* str;
        ReturnValue local_28;
        __16 local_20;

        if ((&field_369)->operator_cast_to_ShaderProgramLinkState() != '\0') {
            LogAssert("m_linkState == ShaderProgramLinkState::UNINITIALISED",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      132, nullptr);
        }
        field_369 = 1;
        field_12.UndoMarkAsDead();
        if ((m_compileFlags & 1) == 0) {
            uVar2 = CreateFromSourceStringInternal();
        } else {
            RegisterOnEndFrame();
            this_00 = (Layout*)Instance();
            str = (char*)this_00->SSOBeginPtr();
            local_20.field_0 = this;
            ThreadPool::AddTask<ShaderProgram::CreateFromSourceString()::__16>(&local_28, str, &local_20);
            field_1840 = local_28;
            uVar2 = 1;
        }
        return uVar2;
    }

    // 0x100beeae0
    void ShaderProgram::CreateFromSourceString(const char* str1, const char* str2,
                                               const VertexDeclaration* vertexDeclaration, unsigned char arg4) {
        VertexElementDesc* vertexElementDesc;

        auto this_00 = vertexDeclaration->second();
        vertexElementDesc = (VertexElementDesc*)(*this_00)[0];
        unsigned int arg4_00 =
            ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)vertexDeclaration->second())->end();
        CreateFromSourceString(str1, str2, vertexElementDesc, arg4_00, arg4);
    }

    // 0x100beeb50
    void ShaderProgram::RebuildFromInternalSource() {
        if (field_1836 == 0) {
            CreateFromSourceString();
            return;
        }
        CreateFromBinary();
    }

    // 0x100beeb70
    uint32_t ShaderProgram::CreateFromBinary() {
        int iVar2;
        uint8_t bVar5;
        uint32_t uVar7;
        ShaderManager<PixelShader>* this_02;
        uint64_t uVar10;
        Array<VertexElementDesc>* this_04;
        VertexElementDesc* vertexElementDesc;
        char* str1;
        char* str2;
        char* str3;
        Logger* this_06;
        AutoSingleton<ShaderThreadPoolSingleton> local_38;

        if (m_nativeShaderProgram != 0) {
            LogAssert("m_GLProgramObject == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      362, "Call Destroy() before calling Create() again");
        }
        if (field_1836 == 0) {
            LogAssert("m_BinaryFormat",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      363, nullptr);
        }
        uint8_t* puVar1 = &field_288;
        if (puVar1->empty()) {
            LogAssert("!m_Binary.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      364, nullptr);
        }
        Singleton<ShaderManager<VertexShader>>* this_07 = (Singleton<ShaderManager<VertexShader>>*)&field_12;
        this_07->UndoMarkAsDead();
        auto this_00 = this_07->Instance();
        unsigned long uVar8 = puVar1->size();
        auto local_48 = this_00->RegisterFromBinary(*m_vertexShaderSource, uVar8);
        field_160 = local_48;
        uint8_t* shaderSource = m_pixelShaderSource;
        auto this_01 = shaderSource->SSOBeginPtr();
        if (this_01->size() != 0) {
            this_02 = (ShaderManager<PixelShader>*)this_01->Instance();
            uVar8 = puVar1->size();
            local_48 = this_02->RegisterFromBinary(*shaderSource, uVar8);
            field_216 = local_48;
        }
        unsigned int uVar6 = (*___glewCreateProgram)();
        m_nativeShaderProgram = uVar6;
        void* pcVar3 = ___glewProgramBinary;
        if (uVar6 == 0) {
            this_06 = logger::default_logger();
            uVar7 = 0;
            this_06->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                         "ShaderProgram_OGL.cpp",
                         381, "Failed to create program object!");
            bVar5 = 5;
        } else {
            iVar2 = field_1836;
            uVar10 = (*puVar1)[0];
            uVar7 = puVar1->size();
            (*pcVar3)(uVar6, iVar2, uVar10, uVar7);
            CheckGlErrorInternal("glProgramBinary",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 387);
            puVar1 = &field_24;
            if (!(((Array<game::VarValue>*)puVar1->second())->empty())) {
                this_04 = (Array<VertexElementDesc>*)puVar1->second();
                vertexElementDesc = (VertexElementDesc*)(*this_04)[0];
                uVar6 = ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)puVar1->second())->end();
                BindVertexElementAttribs(vertexElementDesc, uVar6);
            }
            m_vertexShaderSource->SSOBeginPtr();
            str1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            shaderSource->SSOBeginPtr();
            str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            field_232.SSOBeginPtr();
            str3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar7 = CreateShaderInternal(str1, str2, str3);
            bVar5 = (char)uVar7 + 5;
        }
        field_369 = ((unsigned int)bVar5);
        return uVar7;
    }

    // 0x100beee60
    void ShaderProgram::DestroyBinary() {
        field_1836 = 0;
    }

    // 0x100bef060
    unsigned long ShaderProgram::CreateFromSourceStringInternal() {
        char cVar1;
        unsigned int uVar2;
        ShaderManager<VertexShader>* this_03;
        unsigned long uVar4;
        char* pcVar5;
        Shader* pSVar6;
        ShaderManager<PixelShader>* this_04;
        ShaderManager<ComputeShader>* this_05;
        Logger* this_06;
        uint64_t uVar8;
        int arg4;
        ReturnValue local_40;

        if (m_compileFlags == '\0') {
            cVar1 = this_thread::IsMainThread();
            if (!cVar1) {
                cVar1 = ((RenderDevice*)Instance())->IsRenderThread();
                if (!cVar1) {
                    LogAssert("m_compileFlags != 0 || this_thread::IsMainThread() || "
                              "RenderDevice::Instance().IsRenderThread()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "shaders/OGL/ShaderProgram_OGL.cpp",
                              159, nullptr);
                }
            }
        }
        uint8_t* this_00 = &field_369;
        cVar1 = this_00->operator_cast_to_ShaderProgramLinkState();
        if (cVar1 != '\x01') {
            LogAssert("m_linkState == ShaderProgramLinkState::COMPILING",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      160, nullptr);
        }
        if (m_nativeShaderProgram != 0) {
            LogAssert("m_GLProgramObject == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      161, "Call Destroy() before calling Create() again (program %u)");
        }
        uint8_t* this_01 = &field_232;
        auto pbVar3 = this_01->SSOBeginPtr();
        cVar1 = pbVar3->empty();
        if (cVar1) {
            pbVar3 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)
                         m_vertexShaderSource->SSOBeginPtr();
            cVar1 = pbVar3->empty();
            if (cVar1) {
                pbVar3 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)
                             m_vertexShaderSource->SSOBeginPtr();
                cVar1 = pbVar3->empty();
                if (cVar1) {
                LAB_100bef179:
                    LogAssert(
                        "!m_ComputeShaderSource.GetSource().empty() || !m_VertexShaderSource.GetSource().empty() || !( "
                        "m_VertexShaderSource.GetSource().empty() || m_PixelShaderSource.GetSource().empty() )",
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                        "ShaderProgram_OGL.cpp",
                        169, nullptr);
                }
                pbVar3 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)
                             m_pixelShaderSource->SSOBeginPtr();
                cVar1 = pbVar3->empty();
                if (cVar1)
                    goto LAB_100bef179;
            }
        }
        uint8_t* puVar7 = m_vertexShaderSource;
        pbVar3 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)puVar7->SSOBeginPtr();
        cVar1 = pbVar3->empty();
        if (!cVar1) {
            this_03 = (ShaderManager<VertexShader>*)pbVar3->Instance();
            uVar4 = puVar7->capacity();
            puVar7->SSOBeginPtr();
            pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_40 = this_03->RegisterFromSourceString(uVar4, pcVar5, m_compileFlags);
            field_160 = local_40;
            pSVar6 = (Shader*)field_160.operator->();
            cVar1 = pSVar6->IsReady();
            if (cVar1)
                goto LAB_100bef239;
            this_06 = logger::default_logger();
            pcVar5 = "Failed to compile vertex shader!";
            arg4 = 176;
        } else {
        LAB_100bef239:
            puVar7 = m_pixelShaderSource;
            pbVar3 =
                (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)puVar7->SSOBeginPtr();
            cVar1 = pbVar3->empty();
            if (!cVar1) {
                this_04 = (ShaderManager<PixelShader>*)pbVar3->Instance();
                uVar4 = puVar7->capacity();
                puVar7->SSOBeginPtr();
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_40 = this_04->RegisterFromSourceString(uVar4, pcVar5, m_compileFlags);
                puVar7 = &field_216;
                *puVar7 = local_40;
                pSVar6 = (Shader*)(*puVar7).operator->();
                cVar1 = pSVar6->IsReady();
                if (!cVar1) {
                    this_06 = logger::default_logger();
                    pcVar5 = "Failed to compile pixel shader!";
                    arg4 = 186;
                    goto LAB_100bef437;
                }
            }
            pbVar3 =
                (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)this_01->SSOBeginPtr();
            cVar1 = pbVar3->empty();
            if (!cVar1) {
                this_05 = (ShaderManager<ComputeShader>*)pbVar3->Instance();
                uVar4 = this_01->capacity();
                this_01->SSOBeginPtr();
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_40 = this_05->RegisterFromSourceString(uVar4, pcVar5, m_compileFlags);
                puVar7 = &field_272;
                *puVar7 = local_40;
                pSVar6 = (Shader*)(*puVar7).operator->();
                cVar1 = pSVar6->IsReady();
                if (!cVar1) {
                    this_06 = logger::default_logger();
                    pcVar5 = "Failed to compile compute shader!";
                    arg4 = 196;
                    goto LAB_100bef437;
                }
            }
            uVar2 = (*___glewCreateProgram)();
            m_nativeShaderProgram = uVar2;
            if (uVar2 != 0) {
                uVar8 = (uint64_t)((unsigned long)puVar7 >> 8);
                if ((~m_compileFlags & 3) == 0) {
                    LinkShaderAsync();
                    uVar4 = (((uint64_t)uVar8 << 8) | (uint8_t)1);
                } else {
                    LinkShader();
                    PostLinkShader();
                    cVar1 = this_00->operator_cast_to_ShaderProgramLinkState();
                    uVar4 = (((uint64_t)uVar8 << 8) | (uint8_t)(cVar1 == '\x06'));
                }
                goto LAB_100bef44b;
            }
            this_06 = logger::default_logger();
            pcVar5 = "Failed to create program object!";
            arg4 = 206;
        }
    LAB_100bef437:
        uVar4 = 0;
        this_06->Log(false, 2,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                     "ShaderProgram_OGL.cpp",
                     arg4, pcVar5);
        *this_00 = 5;
    LAB_100bef44b:
        return uVar4 & 4294967295;
    }

    // 0x100befa00
    void ShaderProgram::LinkShaderAsync() {
        bool cVar2;

        LinkShader();
        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        if ((*(char*)(lVar1 + 335) == '\0') || (cVar2 = IsReadyGL(), cVar2)) {
            PostLinkShader();
            return;
        }
        field_369 = 3;
    }

    // 0x100befa60
    void ShaderProgram::LinkShader() {
        void* pcVar2;
        int iVar5;
        uint32_t uVar6;
        unsigned int uVar7;
        TextRun* pTVar10;
        Array<VertexElementDesc>* this_01;
        VertexElementDesc* vertexElementDesc;
        memory_order memory_order;
        char* str1;
        uint32_t local_34;
        AutoSingleton<ShaderThreadPoolSingleton> local_30;

        Singleton<RenderDevice>* this_03 = (Singleton<RenderDevice>*)&field_369;
        char cVar3 = this_03->exchange(15036296, memory_order);
        if (cVar3 != '\x01') {
            LogAssert("prevLinkState == ShaderProgramLinkState::COMPILING",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      231, nullptr);
        }
        auto pMVar8 = this_03->Instance();
        long lVar9 = pMVar8->GetOrigin();
        if (*(char*)(lVar9 + 223) != '\0') {
            (*___glewProgramParameteri)(m_nativeShaderProgram, 33367, 1);
            CheckGlErrorInternal("glProgramParameteri",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 236);
        }
        uint8_t* puVar1 = &field_160;
        if (*puVar1 != nullptr) {
            pTVar10 = (TextRun*)(*puVar1).operator->();
            iVar5 = pTVar10->GetWrapMode();
            pcVar2 = ___glewAttachShader;
            if (iVar5 == 0) {
                LogAssert("m_VertexShader->GetNativeShader()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "OGL/ShaderProgram_OGL.cpp",
                          242, nullptr);
            }
            uVar7 = m_nativeShaderProgram;
            pTVar10 = (TextRun*)(*puVar1).operator->();
            uVar6 = pTVar10->GetWrapMode();
            (*pcVar2)(uVar7, uVar6);
            CheckGlErrorInternal("glAttachShader",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 243);
        }
        puVar1 = &field_216;
        if (*puVar1 != nullptr) {
            pTVar10 = (TextRun*)(*puVar1).operator->();
            iVar5 = pTVar10->GetWrapMode();
            pcVar2 = ___glewAttachShader;
            if (iVar5 == 0) {
                LogAssert("m_PixelShader->GetNativeShader()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "OGL/ShaderProgram_OGL.cpp",
                          247, nullptr);
            }
            uVar7 = m_nativeShaderProgram;
            pTVar10 = (TextRun*)(*puVar1).operator->();
            uVar6 = pTVar10->GetWrapMode();
            (*pcVar2)(uVar7, uVar6);
            CheckGlErrorInternal("glAttachShader",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 248);
        }
        puVar1 = &field_272;
        if (*puVar1 != nullptr) {
            pTVar10 = (TextRun*)(*puVar1).operator->();
            iVar5 = pTVar10->GetWrapMode();
            pcVar2 = ___glewAttachShader;
            if (iVar5 == 0) {
                LogAssert("m_ComputeShader->GetNativeShader()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "OGL/ShaderProgram_OGL.cpp",
                          252, nullptr);
            }
            uVar7 = m_nativeShaderProgram;
            pTVar10 = (TextRun*)(*puVar1).operator->();
            uVar6 = pTVar10->GetWrapMode();
            (*pcVar2)(uVar7, uVar6);
            CheckGlErrorInternal("glAttachShader",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 253);
        }
        puVar1 = &field_24;
        auto this_00 = puVar1->second();
        cVar3 = this_00->empty();
        if (!cVar3) {
            this_01 = (Array<VertexElementDesc>*)puVar1->second();
            vertexElementDesc = (VertexElementDesc*)(*this_01)[0];
            uVar7 = ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)puVar1->second())->end();
            this_00 = this;
            BindVertexElementAttribs(vertexElementDesc, uVar7);
        }
        pMVar8 = (MapArea*)this_00->Instance();
        lVar9 = pMVar8->GetOrigin();
        if (*(char*)(lVar9 + 335) == '\0') {
            local_34 = 0;
            (*___glewLinkProgram)(m_nativeShaderProgram);
            CheckGlErrorInternal("glLinkProgram",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 309);
            (*___glewGetProgramiv)(m_nativeShaderProgram, 35714, &local_34);
            str1 = "glGetProgramiv";
            iVar5 = 312;
        } else {
            (*___glewLinkProgram)(m_nativeShaderProgram);
            str1 = "glLinkProgram";
            iVar5 = 279;
        }
        CheckGlErrorInternal(str1,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                             "OGL/ShaderProgram_OGL.cpp",
                             iVar5);
    }

    // 0x100befdb0
    void ShaderProgram::PostLinkShader() {
        long lVar1;

        m_vertexShaderSource->SSOBeginPtr();
        char* str1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        m_pixelShaderSource->SSOBeginPtr();
        char* str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        field_232.SSOBeginPtr();
        char* str3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        bool cVar2 = CreateShaderInternal(str1, str2, str3);
        ShaderProgramLinkState shaderProgramLinkState = 5;
        if (cVar2) {
            lVar1 = ((MapArea*)Instance())->GetOrigin();
            if (*(char*)(lVar1 + 223) != '\0') {
                RetrieveShaderBinary();
            }
            if (cVar2) {
                field_1848.Create();
                m_vertexShaderSource->ClearSourceString();
                m_pixelShaderSource->ClearSourceString();
                field_232.ClearSourceString();
                shaderProgramLinkState = 6;
            }
        }
        field_369 = shaderProgramLinkState;
    }

    // 0x100befeb0
    void ShaderProgram::BindVertexElementAttribs(const VertexElementDesc* vertexElementDesc, unsigned int arg2) {
        unsigned long uVar1;
        char** ppcVar2;

        if (m_nativeShaderProgram == 0) {
            LogAssert("m_GLProgramObject",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      1258, nullptr);
        }
        if (arg2 != 0) {
            ppcVar2 = &vertexElementDesc->field_8;
            uVar1 = 0;
            do {
                (*___glewBindAttribLocation)(m_nativeShaderProgram, uVar1 & 4294967295, *ppcVar2);
                CheckGlErrorInternal("glBindAttribLocation",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     1262);
                uVar1 = uVar1 + 1;
                ppcVar2 = ppcVar2 + 5;
            } while (arg2 != uVar1);
        }
    }

    // 0x100beff60
    void ShaderProgram::RetrieveShaderBinary() {
        uint8_t* this_00;
        unsigned int uVar1;
        void* pcVar2;
        uint32_t uVar3;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* pbVar5;
        long lVar6;
        uint64_t uVar7;
        AutoSingleton<ShaderThreadPoolSingleton> local_38;

        long lVar4 = ((MapArea*)&local_38->Instance())->GetOrigin();
        if (*(char*)(lVar4 + 223) == '\0') {
            LogAssert("RenderDevice::Instance().GetDeviceCaps().m_ShaderBinary",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      332, nullptr);
        }
        if (m_nativeShaderProgram == 0) {
            LogAssert("m_GLProgramObject",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      333, nullptr);
        }
        int local_34 = -1;
        (*___glewGetProgramiv)(m_nativeShaderProgram, 34625, &local_34);
        CheckGlErrorInternal("glGetProgramiv",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                             "OGL/ShaderProgram_OGL.cpp",
                             335);
        unsigned long uVar8 = (unsigned long)local_34;
        if (0 < (long)uVar8) {
            pbVar5 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)
                         m_pixelShaderSource->SSOBeginPtr();
            lVar4 = pbVar5->size();
            pbVar5 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)
                         m_vertexShaderSource->SSOBeginPtr();
            lVar6 = pbVar5->size();
            if (uVar8 < (unsigned long)(lVar6 + lVar4)) {
                this_00 = &field_288;
                this_00->resize((long)local_34);
                pcVar2 = ___glewGetProgramBinary;
                uVar1 = m_nativeShaderProgram;
                uVar3 = this_00->capacity();
                uVar7 = (*this_00)[0];
                (*pcVar2)(uVar1, uVar3, &local_34, &field_1836, uVar7);
                CheckGlErrorInternal("glGetProgramBinary",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     344);
                if (local_34 < 1) {
                    field_1836 = 0;
                }
            }
        }
    }

    // 0x100bf02d0
    bool ShaderProgram::CreateShaderInternal(const char* str1, const char* str2, const char* str3) {
        bool bVar1;
        bool bVar2;
        bool bVar3;
        ShaderProgram* pSVar4;
        bool cVar5;
        int iVar6;
        int iVar7;
        unsigned int uVar8;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar9;
        Array<VertexElementDesc>* this_00;
        long lVar10;
        basic_istream<char, std::char_traits<char> _>* pbVar11;
        basic_ostream<char, std::char_traits<char> _>* pbVar12;
        unsigned char* puVar13;
        Logger* pLVar14;
        uint64_t uVar15;
        unsigned int arg2;
        unsigned int arg2_00;
        unsigned int arg2_01;
        unsigned long uVar16;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_01;
        bool bVar17;
        uint64_t in_stack_fffffffffffffad8;
        uint32_t uVar20;
        uint64_t uVar19;
        int local_510[70];
        unsigned int local_3f8[70];
        GLVertexElementFormat local_2e0;
        basic_ostream<char, std::char_traits<char> _> local_2d0;
        string local_1c8;
        int* local_1b0;
        unsigned char* local_1a8;
        int local_1a0;
        ReturnValue local_198;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* local_180;
        char* local_178;
        int local_16c;
        AutoSingleton<ShaderThreadPoolSingleton> local_168;
        uint64_t local_158;
        uint64_t uStack_150;
        uint64_t local_148;
        uint64_t uStack_140;
        uint64_t local_138;
        uint64_t uStack_130;
        uint64_t local_128;
        uint64_t uStack_120;
        uint64_t local_118;
        uint64_t uStack_110;
        uint64_t local_108;
        uint64_t uStack_100;
        uint64_t local_f8;
        uint64_t uStack_f0;
        uint64_t local_e8;
        uint64_t uStack_e0;
        uint64_t local_d8;
        uint64_t uStack_d0;
        uint64_t local_c8;
        uint64_t uStack_c0;
        uint64_t local_b8;
        uint64_t uStack_b0;
        uint64_t local_a8;
        uint64_t uStack_a0;
        uint64_t local_98;
        uint64_t uStack_90;
        uint64_t local_88;
        uint64_t uStack_80;
        uint64_t uStack_78;
        uint64_t uStack_70;
        uint8_t local_69;
        uint64_t uStack_68;
        uint64_t uStack_61;

        (*___glewGetProgramiv)(m_nativeShaderProgram, 35714, &local_1a0);
        CheckGlErrorInternal("glGetProgramiv",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                             "OGL/ShaderProgram_OGL.cpp",
                             406);
        int local_19c = local_1a0;
        ShaderProgram* local_160 = this;
        if (local_1a0 == 0) {
            local_180 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)str2;
            local_178 = str3;
            local_1c8 = std::string();
            local_2e0.string<decltype(nullptr)>(str1);
            new (&local_158) std::stringstream(&local_2e0, arg2);
            local_2e0 = std::stringstream();
            std::operator<<(&local_2d0, "\n-----VS-----\n\n");
            iVar7 = 1;
            while (true) {
                pbVar11 = std::getline<char>(local_158, local_1c8);
                cVar5 = ((pbVar11 + *(long*)(*(long*)pbVar11 - 24)))->operator_cast_to_bool();
                if (!cVar5)
                    break;
                pbVar12 = std::operator<<(&local_2d0, "Line ");
                pbVar12 =
                    (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar12, iVar7);
                pbVar12 = std::operator<<(pbVar12, ": ");
                pbVar12 = std::operator<<(pbVar12, &local_1c8);
                iVar7 = iVar7 + 1;
                std::operator<<(pbVar12, "\n");
            }
            local_3f8->string<decltype(nullptr)>(local_180);
            new (local_510) std::stringstream(local_3f8, arg2_00);
            std::operator<<(&local_2d0, "\n\n-----FS-----\n\n");
            iVar7 = 1;
            while (true) {
                pbVar11 = std::getline<char>(*local_510, local_1c8);
                cVar5 = ((pbVar11 + *(long*)(*(long*)pbVar11 - 24)))->operator_cast_to_bool();
                if (!cVar5)
                    break;
                pbVar12 = std::operator<<(&local_2d0, "Line ");
                pbVar12 =
                    (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar12, iVar7);
                pbVar12 = std::operator<<(pbVar12, ": ");
                pbVar12 = std::operator<<(pbVar12, &local_1c8);
                iVar7 = iVar7 + 1;
                std::operator<<(pbVar12, "\n");
            }
            std::string::string<decltype(nullptr)>(&local_198, local_178);
            new (local_3f8) std::stringstream(&local_198, arg2_01);
            std::string::~string(&local_198);
            std::operator<<(&local_2d0, "\n\n-----CS-----\n\n");
            iVar7 = 1;
            while (true) {
                pbVar11 = std::getline<char>(*local_3f8, local_1c8);
                cVar5 = ((pbVar11 + *(long*)(*(long*)pbVar11 - 24)))->operator_cast_to_bool();
                uVar20 = (uint32_t)((unsigned long)in_stack_fffffffffffffad8 >> 32);
                if (!cVar5)
                    break;
                pbVar12 = std::operator<<(&local_2d0, "Line ");
                pbVar12 =
                    (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar12, iVar7);
                pbVar12 = std::operator<<(pbVar12, ": ");
                pbVar12 = std::operator<<(pbVar12, &local_1c8);
                iVar7 = iVar7 + 1;
                std::operator<<(pbVar12, "\n");
            }
            local_16c = 0;
            (*___glewGetProgramiv)(local_160->m_nativeShaderProgram, 35716, &local_16c);
            CheckGlErrorInternal("glGetProgramiv",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 462);
            iVar7 = local_16c;
            if ((long)local_16c < 2) {
                pLVar14 = logger::default_logger();
                uVar8 = local_160->m_nativeShaderProgram;
                std::stringstream::str(&local_198, (stringstream*)&local_2e0);
                puVar13 = (unsigned char*)std::string::c_str(&local_198);
                uVar15 = (((uint64_t)uVar20 << 32) | (uint32_t)uVar8);
                pLVar14->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                             "OGL/ShaderProgram_OGL.cpp",
                             474, "Error linking shader program %u (no info log):\n%s\n", uVar15, puVar13);
                uVar20 = (uint32_t)((unsigned long)uVar15 >> 32);
                std::string::~string(&local_198);
            } else {
                uVar16 = (long)local_16c + 1;
                puVar13 = (unsigned char*)operator_new__(uVar16);
                local_1a8 = puVar13;
                ___bzero(puVar13, uVar16);
                (*___glewGetProgramInfoLog)(local_160->m_nativeShaderProgram, iVar7, 0, puVar13);
                CheckGlErrorInternal("glGetProgramInfoLog",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     468);
                pLVar14 = logger::default_logger();
                puVar13 = local_1a8;
                uVar8 = local_160->m_nativeShaderProgram;
                std::stringstream::str(&local_198, (stringstream*)&local_2e0);
                uVar15 = std::string::c_str(&local_198);
                uVar19 = (((uint64_t)uVar20 << 32) | (uint32_t)uVar8);
                pLVar14->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                             "OGL/ShaderProgram_OGL.cpp",
                             469, "Error linking shader program %u:\n%s\n\n%s\n", uVar19, puVar13, uVar15);
                uVar20 = (uint32_t)((unsigned long)uVar19 >> 32);
                std::string::~string(&local_198);
                safe_delete_array<float>(&local_1a8);
            }
            pLVar14 = logger::default_logger();
            pLVar14->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                         "ShaderProgram_OGL.cpp",
                         477, "Error linking shader program %u!",
                         (((uint64_t)uVar20 << 32) | (uint32_t)local_160->m_nativeShaderProgram), puVar13);
            if ((~local_160->m_compileFlags & 3) != 0) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "shaders/OGL/ShaderProgram_OGL.cpp",
                                481, nullptr);
            }
            Destroy(local_160);
            std::string::~string(&local_1c8);
        } else {
            (*___glewGetProgramiv)(m_nativeShaderProgram, 35717, &field_320);
            CheckGlErrorInternal("glGetProgramiv",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 490);
            (*___glewGetProgramiv)(m_nativeShaderProgram, 35718, &field_324);
            CheckGlErrorInternal("glGetProgramiv",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 491);
            local_1b0 = &field_328;
            (*___glewGetProgramiv)(m_nativeShaderProgram, 35721);
            CheckGlErrorInternal("glGetProgramiv",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 492);
            if (0 < field_328) {
                this_01 =
                    (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)&local_160->field_24;
                iVar7 = 0;
                local_180 = this_01;
                do {
                    uStack_68 = 0;
                    uStack_61 = 0;
                    uStack_78 = 0;
                    uStack_70 = 0;
                    local_69 = 0;
                    local_88 = 0;
                    uStack_80 = 0;
                    local_98 = 0;
                    uStack_90 = 0;
                    local_a8 = 0;
                    uStack_a0 = 0;
                    local_b8 = 0;
                    uStack_b0 = 0;
                    local_c8 = 0;
                    uStack_c0 = 0;
                    local_d8 = 0;
                    uStack_d0 = 0;
                    local_e8 = 0;
                    uStack_e0 = 0;
                    local_f8 = 0;
                    uStack_f0 = 0;
                    local_108 = 0;
                    uStack_100 = 0;
                    local_118 = 0;
                    uStack_110 = 0;
                    local_128 = 0;
                    uStack_120 = 0;
                    local_138 = 0;
                    uStack_130 = 0;
                    local_148 = 0;
                    uStack_140 = 0;
                    local_158 = 0;
                    uStack_150 = 0;
                    local_510[0] = 0;
                    local_3f8[0] = 0;
                    (*___glewGetActiveAttrib)(local_160->m_nativeShaderProgram, iVar7, 255, 0, local_510, local_3f8,
                                              &local_158);
                    CheckGlErrorInternal("glGetActiveAttrib",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/shaders/OGL/ShaderProgram_OGL.cpp",
                                         501);
                    bVar1 = local_158._2_1_ == '_';
                    bVar2 = local_158._1_1_ == 'l';
                    bVar3 = local_158._0_1_ == (stringstream)103;
                    bVar17 = bVar1 && (bVar2 && bVar3);
                    pvVar9 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_01->second();
                    iVar6 = pvVar9->end();
                    local_178 = (char*)(((uint64_t)local_178._4_4_ << 32) | (uint32_t)iVar7);
                    if ((0 < iVar6) && (!bVar1 || (!bVar2 || !bVar3))) {
                        uVar16 = 0;
                        while (true) {
                            this_00 = (Array<VertexElementDesc>*)this_01->second();
                            lVar10 = (*this_00)[uVar16];
                            iVar7 = _strcmp(*(char**)(lVar10 + 8), (char*)&local_158);
                            if (iVar7 == 0) {
                                local_2e0 = GLVertexElementFormat(*(ShaderInputFormat*)(lVar10 + 16));
                                if (local_510[0] != 1) {
                                    LogAssert("attribSize == 1",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "hal/render/shaders/OGL/ShaderProgram_OGL.cpp",
                                              518, nullptr);
                                }
                                if (local_3f8[0] != local_2e0.field_0._8_4_) {
                                    LogAssert("attribType == vertexFormat.m_ShaderType",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "hal/render/shaders/OGL/ShaderProgram_OGL.cpp",
                                              519, "Type mismatch on vertex attribute \'%s\' (%i != %i)",
                                              *(uint64_t*)(lVar10 + 8), (unsigned long)local_3f8[0],
                                              (((uint64_t)((int)((unsigned long)&local_158 >> 32)) << 32) |
                                               (uint32_t)local_2e0.field_0._8_4_));
                                }
                                uVar8 = (*___glewGetAttribLocation)(local_160->m_nativeShaderProgram,
                                                                    *(uint64_t*)(lVar10 + 8));
                                CheckGlErrorInternal("glGetAttribLocation",
                                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                     "libs/hal/render/shaders/OGL/ShaderProgram_OGL.cpp",
                                                     520);
                                if (uVar16 != uVar8) {
                                    LogAssert(
                                        "attribLocation == j",
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "render/shaders/OGL/ShaderProgram_OGL.cpp",
                                        521, "Vertex attribute \'%s\' at wrong index (C++: %i, Shader: %i)",
                                        *(uint64_t*)(lVar10 + 8), uVar16 & 4294967295,
                                        (((uint64_t)((int)((unsigned long)&local_158 >> 32)) << 32) | (uint32_t)uVar8));
                                }
                                bVar17 = true;
                                this_01 = local_180;
                            }
                            if (iVar7 == 0)
                                break;
                            uVar16 = uVar16 + 1;
                            pvVar9 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_01->second();
                            iVar7 = pvVar9->end();
                            if (((long)iVar7 <= (long)uVar16) || (bVar17))
                                break;
                        }
                    }
                    if (!bVar17) {
                        LogAssert("existsInVertexDecl",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "shaders/OGL/ShaderProgram_OGL.cpp",
                                  526,
                                  "Vertex attribute \'%s\' (%i) present and active in shader but not found in C++-side "
                                  "vertex declaration, this will result in undefined behaviour!",
                                  &local_158, (unsigned long)local_178 & 4294967295);
                    }
                    iVar7 = (int)local_178 + 1;
                } while (iVar7 < *local_1b0);
            }
            pSVar4 = local_160;
            local_160->field_376.Initialise(*local_160);
            pSVar4->field_496.clear();
        }
        return local_19c != 0;
    }

    // 0x100bf0e60
    void ShaderProgram::ReleaseNativeResources() {
        bool cVar1;
        unsigned long uVar3;
        ShaderManager<VertexShader>* this_01;
        char* this_03;

        WaitForAsyncCompile();
        ShaderManager<PixelShader>* this_00 = (ShaderManager<PixelShader>*)&field_12;
        this_00->MarkAsDead();
        long lVar2 = this_00->InstancePtr();
        if (lVar2 != 0) {
            this_00 = (ShaderManager<PixelShader>*)this_00->Instance();
            uVar3 = field_232.capacity();
            this_00->Unregister(uVar3, field_272);
        }
        lVar2 = this_00->InstancePtr();
        if (lVar2 != 0) {
            this_00 = (ShaderManager<PixelShader>*)this_00->Instance();
            uVar3 = m_pixelShaderSource->capacity();
            this_00->Unregister(uVar3, field_216);
        }
        lVar2 = this_00->InstancePtr();
        if (lVar2 != 0) {
            this_01 = (ShaderManager<VertexShader>*)this_00->Instance();
            uVar3 = m_vertexShaderSource->capacity();
            this_01->Unregister(uVar3, field_160);
        }
        lVar2 = field_216.end();
        if (lVar2 == 0) {
            lVar2 = field_160.end();
            if (lVar2 == 0) {
                lVar2 = field_272.end();
                if (lVar2 == 0) {
                    this_03 = (char*)(unsigned long)m_nativeShaderProgram;
                    if (m_nativeShaderProgram != 0) {
                        cVar1 = (*___glewIsProgram)();
                        this_03 = "glIsProgram";
                        CheckGlErrorInternal("glIsProgram",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/shaders/OGL/ShaderProgram_OGL.cpp",
                                             611);
                        if (cVar1) {
                            (*___glewDeleteProgram)(m_nativeShaderProgram);
                            this_03 = "glDeleteProgram";
                            CheckGlErrorInternal("glDeleteProgram",
                                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                 "libs/hal/render/shaders/OGL/ShaderProgram_OGL.cpp",
                                                 614);
                        }
                        m_nativeShaderProgram = 0;
                    }
                    if (this_03->InstancePtr() != nullptr) {
                        lVar2 = ((MapArea*)this_03->Instance())->GetOrigin();
                        if (*(char*)(lVar2 + 187) != '\0') {
                            cVar1 = field_1848.IsCreated();
                            if (cVar1) {
                                LogAssert("!RenderDevice::InstancePtr() || "
                                          "!RenderDevice::Instance().GetDeviceCaps().m_SyncFenceObjectsSync || "
                                          "!m_syncFence.IsCreated()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                          "render/shaders/OGL/ShaderProgram_OGL.cpp",
                                          619, nullptr);
                            }
                        }
                    }
                    field_369 = 0;
                    return;
                }
            }
        }
        LogAssert(
            "m_PixelShader.get() == nullptr && m_VertexShader.get() == nullptr && m_ComputeShader.get() == nullptr",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
            "ShaderProgram_OGL.cpp",
            607, nullptr);
    }

    // 0x100bf10f0
    void ShaderProgram::BindConstBufferSlot(unsigned int arg1, const HashedString& hashedString,
                                            unsigned int arg3) const {
        int iVar1 = GetConstBlockIndex(hashedString);
        if (iVar1 != -1) {
            (*___glewUniformBlockBinding)(m_nativeShaderProgram, iVar1, arg1);
            CheckGlErrorInternal("glUniformBlockBinding",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 631);
        }
        if (GetConstBlockSize(hashedString) != arg3) {
            iVar1 = GetConstBlockSize(hashedString);
            if (iVar1 != -1) {
                LogAssert("GetConstBlockSize(constBlockName) == (int)constBufferSizeBytes || "
                          "GetConstBlockSize(constBlockName) == -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "OGL/ShaderProgram_OGL.cpp",
                          637, nullptr);
            }
        }
    }

    // 0x100bf1190
    uint32_t ShaderProgram::GetConstBlockIndex(const HashedString& hashedString) const {
        unsigned int uVar1;
        void* pcVar2;
        bool cVar3;
        uint32_t uVar4;
        uint64_t uVar6;
        uint32_t* puVar7;
        unique_lock<std::mutex> local_50;

        long lVar5 = hashedString.HeapBeginPtr();
        if (lVar5 == 0) {
            LogAssert("constBlockName.GetString() != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      1190, nullptr);
        }
        if (((m_compileFlags & 4) == 0) && (cVar3 = this_thread::IsMainThread(), !cVar3)) {
            LogAssert("(m_compileFlags & SHADER_THREAD_SAFE_CACHE) || this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      1191, nullptr);
        }
        if ((m_compileFlags & 4) == 0) {
            local_50 = std::unique_lock<std::mutex>();
        } else {
            local_50 = std::unique_lock<std::mutex>(field_1768);
        }
        uint8_t* this_00 = &field_552;
        local_40[0] = (ReturnValue)hashedString.end();
        auto local_60 = this_00->find(local_40);
        auto local_40 = this_00->end();
        cVar3 = local_60 != local_40;
        if (!cVar3) {
            WaitForAsyncCompile();
            pcVar2 = ___glewGetUniformBlockIndex;
            if (m_nativeShaderProgram == 0) {
                LogAssert("m_GLProgramObject",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "OGL/ShaderProgram_OGL.cpp",
                          1205, nullptr);
            }
            uVar1 = m_nativeShaderProgram;
            uVar6 = hashedString.HeapBeginPtr();
            uVar4 = (*pcVar2)(uVar1, uVar6);
            CheckGlErrorInternal("glGetUniformBlockIndex",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 1207);
            local_40[0] = (ReturnValue)hashedString.end();
            puVar7 = (uint32_t*)(*this_00)[local_40];
            *puVar7 = uVar4;
        } else {
            lVar5 = local_60.HeapBeginPtr();
            uVar4 = *(uint32_t*)(lVar5 + 8);
        }
        return uVar4;
    }

    // 0x100bf1350
    uint32_t ShaderProgram::GetConstBlockSize(const HashedString& hashedString) const {
        int iVar1 = GetConstBlockIndex(hashedString);
        return local_14 = 4294967295;
        if (iVar1 != -1) {
            (*___glewGetActiveUniformBlockiv)(m_nativeShaderProgram, iVar1, 35392, &local_14);
            CheckGlErrorInternal("glGetActiveUniformBlockiv",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 1222);
        }
        return local_14;
    }

    // 0x100bf1c80
    void ShaderProgram::SetShaderConstSampler(int arg1, int arg2) const {
        uint8_t* this_00;
        long lVar2;
        ReturnValue local_68;
        pair<int, int> local_58;
        ReturnValue local_50;
        hashtable_iterator<eastl::pair<int const, int>, true, false>* local_40;
        pair<int const, int>* local_38;

        bool cVar1 = ((RenderDevice*)Instance())->IsRenderThread();
        if (!cVar1) {
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      1077, nullptr);
        }
        if (-1 < arg1) {
            this_00 = &field_496;
            local_50 = this_00->find(arg1);
            local_68 = this_00->end();
            cVar1 = local_50 == local_68;
            if ((!cVar1) && (lVar2 = local_50.HeapBeginPtr(), *(int*)(lVar2 + 4) == arg2)) {
                return;
            }
            new (&local_40) eastl::hashtable_iterator(&local_50);
            local_58.pair<int, int&, void>(arg1, arg2);
            local_68 = this_00->insert(local_40, *local_38);
            SetProgramActive();
            (*___glewUniform1i)(arg1, arg2);
            CheckGlErrorInternal("glUniform1i",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 1088);
        }
    }

    // 0x100bf1e20
    uint32_t ShaderProgram::GetUniformBindingIndex(const HashedString& hashedString) const {
        uint32_t uVar1;
        bool cVar2;
        int iVar3;
        uint32_t* puVar6;
        unique_lock<std::mutex> local_48;
        uint32_t local_2c;

        long lVar4 = hashedString.HeapBeginPtr();
        if (lVar4 == 0) {
            LogAssert("constName.GetString() != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      1106, nullptr);
        }
        if (((m_compileFlags & 4) == 0) && (cVar2 = this_thread::IsMainThread(), !cVar2)) {
            LogAssert("(m_compileFlags & SHADER_THREAD_SAFE_CACHE) || this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      1107, nullptr);
        }
        if ((m_compileFlags & 4) == 0) {
            local_48 = std::unique_lock<std::mutex>();
        } else {
            local_48 = std::unique_lock<std::mutex>(field_1768);
        }
        unsigned long* this_00 = &field_1728;
        unsigned long local_38 = hashedString.end();
        lVar4 = eastl::vector_map<unsigned long, int>::find(*this_00);
        long lVar5 = this_00->end();
        if (lVar4 == lVar5) {
            WaitForAsyncCompile();
            if (m_nativeShaderProgram == 0) {
                LogAssert("m_GLProgramObject",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "OGL/ShaderProgram_OGL.cpp",
                          1121, nullptr);
            }
            iVar3 = GetUniformLocationIndex(hashedString);
            if (iVar3 == -1) {
                local_2c = 4294967295;
            } else {
                (*___glewGetUniformiv)(m_nativeShaderProgram, iVar3, &local_2c);
                CheckGlErrorInternal("glGetUniformiv",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     1149);
                uVar1 = local_2c;
                local_38 = hashedString.end();
                puVar6 = (uint32_t*)(*this_00)[local_38];
                *puVar6 = uVar1;
            }
        } else {
            local_2c = *(uint32_t*)(lVar4 + 8);
        }
        return local_2c;
    }

    // 0x100bf20d0
    bool ShaderProgram::IsReady() const {
        memory_order in_ESI;

        char cVar1 = field_369.load(in_ESI);
        if (!cVar1) {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      1280, "%s called on uninitialised shader", "IsReady");
        }
        return cVar1 == '\x06';
    }

    // 0x100bf2140
    void ShaderProgram::PreRender() {
        Layout* this_00;
        char* str;
        ReturnValue local_28;
        __43 local_20;

        AutoSingleton<ThreadPoolSingleton>* this_01 = (AutoSingleton<ThreadPoolSingleton>*)&field_369;
        char cVar1 = this_01->operator_cast_to_ShaderProgramLinkState();
        if (cVar1 == '\x03') {
            if ((~m_compileFlags & 3) != 0) {
                LogAssert("(m_compileFlags & SHADER_COMPILE_THREADED_ASYNC) == SHADER_COMPILE_THREADED_ASYNC",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "OGL/ShaderProgram_OGL.cpp",
                          1296, nullptr);
            }
            cVar1 = IsReadyGL();
            if (cVar1) {
                *this_01 = 4;
                this_00 = (Layout*)this_01->Instance();
                str = (char*)this_00->SSOBeginPtr();
                local_20.field_0 = this;
                ThreadPool::AddTask<ShaderProgram::PreRender()::__43>(&local_28, str, &local_20);
                field_1840 = local_28;
            }
        }
    }

    // 0x100bf21f0
    bool ShaderProgram::IsReadyGL() const {
        unsigned int in_EAX;
        uint64_t uStack_18;

        uStack_18._0_4_ = in_EAX;
        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar1 + 335) == '\0') {
            LogAssert("RenderDevice::Instance().GetDeviceCaps().m_GLParallelShaderCompile",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      1347, nullptr);
        }
        uStack_18 = (unsigned long)(unsigned int)uStack_18;
        (*___glewGetProgramiv)(m_nativeShaderProgram, 37297, (long)&uStack_18 + 4);
        CheckGlErrorInternal("glGetProgramiv",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                             "OGL/ShaderProgram_OGL.cpp",
                             1349);
        return uStack_18._4_4_ != 0;
    }

    // 0x100bf2440
    void ShaderProgram::OnEndFrame() {
        __44 local_d0;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[168];
        long local_20;

        auto this_00 = Instance();
        local_d0.field_0 = (long)this;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            ShaderProgram::OnEndFrame()::__44, void>(local_c8, &local_d0);
        this_00->RunOnRenderThread(*local_c8);
    }

    // 0x100c01b00
    void ShaderProgram::CreateFromSourceString()::$_16::operator()() const {
        ShaderProgram* this_00 = field_0;
        RenderContext* renderContext = ((RenderDevice*)Instance())->GetCurrentThreadRenderContext();
        lock_guard<RenderContext> local_18(*renderContext);
        CreateFromSourceStringInternal(this_00);
    }

    // 0x100c06af0
    ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*,
                                             unsigned int) const ::$_20::$_20($_20&& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(uint64_t*)arg1;
        field_8 = uVar1;
        new (&field_16) WrapArray(*((arg1 + 16)));
    }

    // 0x100c06b50
    ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*,
                                             unsigned int) const ::$_20::$_20(const $_20& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(uint64_t*)arg1;
        field_8 = uVar1;
        new (&field_16) WrapArray(*((arg1 + 16)));
    }

    // 0x100c06b90
    void ShaderProgram::SetShaderConstFloat4Array(
        int, unsigned int, float const*, unsigned int) const ::$_20::operator()(RenderContext& renderContext) const {
        uint32_t uVar1;
        uint32_t uVar2;
        void* pcVar3;
        uint64_t uVar5;

        ShaderProgram* this_00 = *(ShaderProgram**)this;
        if (renderContext.IsObjectAlive(&this_00->field_12)) {
            if (this_00->IsReady()) {
                this_00->SetProgramActive(renderContext);
                pcVar3 = ___glewUniform4fv;
                uVar1 = *(uint32_t*)(this + 8);
                uVar2 = *(uint32_t*)(this + 12);
                uVar5 = ((this + 16))->end();
                (*pcVar3)(uVar1, uVar2, uVar5);
                CheckGlErrorInternal("__glewUniform4fv",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     788);
            }
        }
    }

    // 0x100c06d40
    ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*,
                                            unsigned int) const ::$_21::$_21($_21&& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(uint64_t*)arg1;
        field_8 = uVar1;
        new (&field_16) WrapArray(*((arg1 + 16)));
    }

    // 0x100c06da0
    ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*,
                                            unsigned int) const ::$_21::$_21(const $_21& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(uint64_t*)arg1;
        field_8 = uVar1;
        new (&field_16) WrapArray(*((arg1 + 16)));
    }

    // 0x100c06de0
    void
    ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*,
                                            unsigned int) const ::$_21::operator()(RenderContext& renderContext) const {
        uint32_t uVar1;
        uint32_t uVar2;
        void* pcVar3;
        uint64_t uVar5;

        ShaderProgram* this_00 = *(ShaderProgram**)this;
        if (renderContext.IsObjectAlive(&this_00->field_12)) {
            if (this_00->IsReady()) {
                this_00->SetProgramActive(renderContext);
                pcVar3 = ___glewUniform4uiv;
                uVar1 = *(uint32_t*)(this + 8);
                uVar2 = *(uint32_t*)(this + 12);
                uVar5 = ((this + 16))->end();
                (*pcVar3)(uVar1, uVar2, uVar5);
                CheckGlErrorInternal("__glewUniform4uiv",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     821);
            }
        }
    }

    // 0x100c06ee0
    ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22::$_22($_22&& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(uint64_t*)arg1;
        field_8 = uVar1;
        new (&field_16) WrapArray(*((arg1 + 16)));
    }

    // 0x100c06f40
    ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22::$_22(const $_22& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(uint64_t*)arg1;
        field_8 = uVar1;
        new (&field_16) WrapArray(*((arg1 + 16)));
    }

    // 0x100c06f80
    void ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22::operator()(
        RenderContext& renderContext) const {
        uint32_t uVar1;
        uint32_t uVar2;
        void* pcVar3;
        uint64_t uVar5;

        ShaderProgram* this_00 = *(ShaderProgram**)this;
        if (renderContext.IsObjectAlive(&this_00->field_12)) {
            if (this_00->IsReady()) {
                this_00->SetProgramActive(renderContext);
                pcVar3 = ___glewUniform3fv;
                uVar1 = *(uint32_t*)(this + 8);
                uVar2 = *(uint32_t*)(this + 12);
                uVar5 = ((this + 16))->end();
                (*pcVar3)(uVar1, uVar2, uVar5);
                CheckGlErrorInternal("__glewUniform3fv",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     831);
            }
        }
    }

    // 0x100c07080
    ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23::$_23($_23&& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(uint64_t*)arg1;
        field_8 = uVar1;
        new (&field_16) WrapArray(*((arg1 + 16)));
    }

    // 0x100c070e0
    ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23::$_23(const $_23& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(uint64_t*)arg1;
        field_8 = uVar1;
        new (&field_16) WrapArray(*((arg1 + 16)));
    }

    // 0x100c07120
    void ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23::operator()(
        RenderContext& renderContext) const {
        uint32_t uVar1;
        uint32_t uVar2;
        void* pcVar3;
        uint64_t uVar5;

        ShaderProgram* this_00 = *(ShaderProgram**)this;
        if (renderContext.IsObjectAlive(&this_00->field_12)) {
            if (this_00->IsReady()) {
                this_00->SetProgramActive(renderContext);
                pcVar3 = ___glewUniform2fv;
                uVar1 = *(uint32_t*)(this + 8);
                uVar2 = *(uint32_t*)(this + 12);
                uVar5 = ((this + 16))->end();
                (*pcVar3)(uVar1, uVar2, uVar5);
                CheckGlErrorInternal("__glewUniform2fv",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     840);
            }
        }
    }

    // 0x100c07220
    ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*,
                                             unsigned int) const ::$_24::$_24($_24&& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(uint64_t*)arg1;
        field_8 = uVar1;
        new (&field_16) WrapArray(*((arg1 + 16)));
    }

    // 0x100c07280
    ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*,
                                             unsigned int) const ::$_24::$_24(const $_24& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(uint64_t*)arg1;
        field_8 = uVar1;
        new (&field_16) WrapArray(*((arg1 + 16)));
    }

    // 0x100c072c0
    void ShaderProgram::SetShaderConstFloat1Array(
        int, unsigned int, float const*, unsigned int) const ::$_24::operator()(RenderContext& renderContext) const {
        uint32_t uVar1;
        uint32_t uVar2;
        void* pcVar3;
        uint64_t uVar5;

        ShaderProgram* this_00 = *(ShaderProgram**)this;
        if (renderContext.IsObjectAlive(&this_00->field_12)) {
            if (this_00->IsReady()) {
                this_00->SetProgramActive(renderContext);
                pcVar3 = ___glewUniform1fv;
                uVar1 = *(uint32_t*)(this + 8);
                uVar2 = *(uint32_t*)(this + 12);
                uVar5 = ((this + 16))->end();
                (*pcVar3)(uVar1, uVar2, uVar5);
                CheckGlErrorInternal("__glewUniform1fv",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     872);
            }
        }
    }

    // 0x100c073c0
    ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25::$_25($_25&& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(uint64_t*)arg1;
        field_8 = uVar1;
        new (&field_16) WrapArray(*((arg1 + 16)));
    }

    // 0x100c07420
    ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25::$_25(const $_25& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(uint64_t*)arg1;
        field_8 = uVar1;
        new (&field_16) WrapArray(*((arg1 + 16)));
    }

    // 0x100c07460
    void
    ShaderProgram::SetShaderConstInt4Array(int, unsigned int,
                                           int const*) const ::$_25::operator()(RenderContext& renderContext) const {
        uint32_t uVar1;
        uint32_t uVar2;
        void* pcVar3;
        uint64_t uVar5;

        ShaderProgram* this_00 = *(ShaderProgram**)this;
        if (renderContext.IsObjectAlive(&this_00->field_12)) {
            if (this_00->IsReady()) {
                this_00->SetProgramActive(renderContext);
                pcVar3 = ___glewUniform4iv;
                uVar1 = *(uint32_t*)(this + 8);
                uVar2 = *(uint32_t*)(this + 12);
                uVar5 = ((this + 16))->end();
                (*pcVar3)(uVar1, uVar2, uVar5);
                CheckGlErrorInternal("__glewUniform4iv",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     882);
            }
        }
    }

    // 0x100c07560
    ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26::$_26($_26&& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(uint64_t*)arg1;
        field_8 = uVar1;
        new (&field_16) WrapArray(*((arg1 + 16)));
    }

    // 0x100c075c0
    ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26::$_26(const $_26& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(uint64_t*)arg1;
        field_8 = uVar1;
        new (&field_16) WrapArray(*((arg1 + 16)));
    }

    // 0x100c07600
    void
    ShaderProgram::SetShaderConstInt3Array(int, unsigned int,
                                           int const*) const ::$_26::operator()(RenderContext& renderContext) const {
        uint32_t uVar1;
        uint32_t uVar2;
        void* pcVar3;
        uint64_t uVar5;

        ShaderProgram* this_00 = *(ShaderProgram**)this;
        if (renderContext.IsObjectAlive(&this_00->field_12)) {
            if (this_00->IsReady()) {
                this_00->SetProgramActive(renderContext);
                pcVar3 = ___glewUniform3iv;
                uVar1 = *(uint32_t*)(this + 8);
                uVar2 = *(uint32_t*)(this + 12);
                uVar5 = ((this + 16))->end();
                (*pcVar3)(uVar1, uVar2, uVar5);
                CheckGlErrorInternal("__glewUniform3iv",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     891);
            }
        }
    }

    // 0x100c07700
    ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27::$_27($_27&& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(uint64_t*)arg1;
        field_8 = uVar1;
        new (&field_16) WrapArray(*((arg1 + 16)));
    }

    // 0x100c07760
    ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27::$_27(const $_27& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(uint64_t*)arg1;
        field_8 = uVar1;
        new (&field_16) WrapArray(*((arg1 + 16)));
    }

    // 0x100c077a0
    void
    ShaderProgram::SetShaderConstInt2Array(int, unsigned int,
                                           int const*) const ::$_27::operator()(RenderContext& renderContext) const {
        uint32_t uVar1;
        uint32_t uVar2;
        void* pcVar3;
        uint64_t uVar5;

        ShaderProgram* this_00 = *(ShaderProgram**)this;
        if (renderContext.IsObjectAlive(&this_00->field_12)) {
            if (this_00->IsReady()) {
                this_00->SetProgramActive(renderContext);
                pcVar3 = ___glewUniform2iv;
                uVar1 = *(uint32_t*)(this + 8);
                uVar2 = *(uint32_t*)(this + 12);
                uVar5 = ((this + 16))->end();
                (*pcVar3)(uVar1, uVar2, uVar5);
                CheckGlErrorInternal("__glewUniform2iv",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     900);
            }
        }
    }

    // 0x100c078a0
    ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28::$_28($_28&& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(uint64_t*)arg1;
        field_8 = uVar1;
        new (&field_16) WrapArray(*((arg1 + 16)));
    }

    // 0x100c07900
    ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28::$_28(const $_28& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(uint64_t*)arg1;
        field_8 = uVar1;
        new (&field_16) WrapArray(*((arg1 + 16)));
    }

    // 0x100c07940
    void
    ShaderProgram::SetShaderConstInt1Array(int, unsigned int,
                                           int const*) const ::$_28::operator()(RenderContext& renderContext) const {
        uint32_t uVar1;
        uint32_t uVar2;
        void* pcVar3;
        uint64_t uVar5;

        ShaderProgram* this_00 = *(ShaderProgram**)this;
        if (renderContext.IsObjectAlive(&this_00->field_12)) {
            if (this_00->IsReady()) {
                this_00->SetProgramActive(renderContext);
                pcVar3 = ___glewUniform1iv;
                uVar1 = *(uint32_t*)(this + 8);
                uVar2 = *(uint32_t*)(this + 12);
                uVar5 = ((this + 16))->end();
                (*pcVar3)(uVar1, uVar2, uVar5);
                CheckGlErrorInternal("__glewUniform1iv",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     909);
            }
        }
    }

    // 0x100c07a40
    ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*,
                                            unsigned int) const ::$_29::$_29($_29&& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(uint64_t*)arg1;
        field_8 = uVar1;
        new (&field_16) WrapArray(*((arg1 + 16)));
    }

    // 0x100c07aa0
    ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*,
                                            unsigned int) const ::$_29::$_29(const $_29& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        field_0 = *(uint64_t*)arg1;
        field_8 = uVar1;
        new (&field_16) WrapArray(*((arg1 + 16)));
    }

    // 0x100c07ae0
    void
    ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*,
                                            unsigned int) const ::$_29::operator()(RenderContext& renderContext) const {
        uint32_t uVar1;
        uint32_t uVar2;
        void* pcVar3;
        uint64_t uVar5;

        ShaderProgram* this_00 = *(ShaderProgram**)this;
        if (renderContext.IsObjectAlive(&this_00->field_12)) {
            if (this_00->IsReady()) {
                this_00->SetProgramActive(renderContext);
                pcVar3 = ___glewUniform1uiv;
                uVar1 = *(uint32_t*)(this + 8);
                uVar2 = *(uint32_t*)(this + 12);
                uVar5 = ((this + 16))->end();
                (*pcVar3)(uVar1, uVar2, uVar5);
                CheckGlErrorInternal("__glewUniform1uiv",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     942);
            }
        }
    }

    // 0x100c08790
    void ShaderProgram::SetShaderConstFloat4(int, float, float, float,
                                             float) const ::$_35::operator()(RenderContext& renderContext) const {
        ShaderProgram* this_00 = *(ShaderProgram**)this;
        if (renderContext.IsObjectAlive(&this_00->field_12)) {
            if (this_00->IsReady()) {
                this_00->SetProgramActive(renderContext);
                (*___glewUniform4f)(*(uint32_t*)(this + 12), *(uint32_t*)(this + 16), *(uint32_t*)(this + 20),
                                    *(uint32_t*)(this + 24), *(uint32_t*)(this + 8));
                CheckGlErrorInternal("__glewUniform4f",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     1023);
            }
        }
    }

    // 0x100c088d0
    void ShaderProgram::SetShaderConstFloat3(int, float, float,
                                             float) const ::$_36::operator()(RenderContext& renderContext) const {
        ShaderProgram* this_00 = *(ShaderProgram**)this;
        if (renderContext.IsObjectAlive(&this_00->field_12)) {
            if (this_00->IsReady()) {
                this_00->SetProgramActive(renderContext);
                (*___glewUniform3f)(*(uint32_t*)(this + 12), *(uint32_t*)(this + 16), *(uint32_t*)(this + 20),
                                    *(uint32_t*)(this + 8));
                CheckGlErrorInternal("__glewUniform3f",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     1031);
            }
        }
    }

    // 0x100c08a00
    void ShaderProgram::SetShaderConstFloat2(int, float,
                                             float) const ::$_37::operator()(RenderContext& renderContext) const {
        ShaderProgram* this_00 = *(ShaderProgram**)this;
        if (renderContext.IsObjectAlive(&this_00->field_12)) {
            if (this_00->IsReady()) {
                this_00->SetProgramActive(renderContext);
                (*___glewUniform2f)(*(uint32_t*)(this + 12), *(uint32_t*)(this + 16), *(uint32_t*)(this + 8));
                CheckGlErrorInternal("__glewUniform2f",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     1039);
            }
        }
    }

    // 0x100c08b10
    void ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38::operator()(RenderContext& renderContext) const {
        ShaderProgram* this_00 = *(ShaderProgram**)this;
        if (renderContext.IsObjectAlive(&this_00->field_12)) {
            if (this_00->IsReady()) {
                this_00->SetProgramActive(renderContext);
                (*___glewUniform1f)(*(uint32_t*)(this + 12), *(uint32_t*)(this + 8));
                CheckGlErrorInternal("__glewUniform1f",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     1047);
            }
        }
    }

    // 0x100c08c40
    void ShaderProgram::SetShaderConstInt4(int, int, int, int,
                                           int) const ::$_39::operator()(RenderContext& renderContext) const {
        ShaderProgram* this_00 = *(ShaderProgram**)this;
        if (renderContext.IsObjectAlive(&this_00->field_12)) {
            if (this_00->IsReady()) {
                this_00->SetProgramActive(renderContext);
                (*___glewUniform4i)(*(uint32_t*)(this + 8), *(uint32_t*)(this + 12), *(uint32_t*)(this + 16),
                                    *(uint32_t*)(this + 20), *(uint32_t*)(this + 24));
                CheckGlErrorInternal("__glewUniform4i",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     1055);
            }
        }
    }

    // 0x100c08d70
    void ShaderProgram::SetShaderConstInt3(int, int, int,
                                           int) const ::$_40::operator()(RenderContext& renderContext) const {
        ShaderProgram* this_00 = *(ShaderProgram**)this;
        if (renderContext.IsObjectAlive(&this_00->field_12)) {
            if (this_00->IsReady()) {
                this_00->SetProgramActive(renderContext);
                (*___glewUniform3i)(*(uint32_t*)(this + 8), *(uint32_t*)(this + 12), *(uint32_t*)(this + 16),
                                    *(uint32_t*)(this + 20));
                CheckGlErrorInternal("__glewUniform3i",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     1063);
            }
        }
    }

    // 0x100c08ea0
    void ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41::operator()(RenderContext& renderContext) const {
        ShaderProgram* this_00 = *(ShaderProgram**)this;
        if (renderContext.IsObjectAlive(&this_00->field_12)) {
            if (this_00->IsReady()) {
                this_00->SetProgramActive(renderContext);
                (*___glewUniform2i)(*(uint32_t*)(this + 8), *(uint32_t*)(this + 12), *(uint32_t*)(this + 16));
                CheckGlErrorInternal("__glewUniform2i",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     1071);
            }
        }
    }

    // 0x100c09220
    void ShaderProgram::SetShaderConstInt1(int, int) const ::$_42::operator()(RenderContext& renderContext) const {
        ShaderProgram* this_00 = *(ShaderProgram**)this;
        if (renderContext.IsObjectAlive(&this_00->field_12)) {
            if (this_00->IsReady()) {
                this_00->SetProgramActive(renderContext);
                (*___glewUniform1i)(*(uint32_t*)(this + 8), *(uint32_t*)(this + 12));
                CheckGlErrorInternal("__glewUniform1i",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     1100);
            }
        }
    }

    // 0x100c0a110
    void ShaderProgram::PreRender()::$_43::operator()() const {
        PostLinkShader(field_0);
    }

    // 0x100c0ac90
    void ShaderProgram::OnEndFrame()::$_44::operator()(RenderContext& renderContext) const {
        SyncFence* this_00;

        long lVar1 = field_0;
        if (renderContext.IsObjectAlive((lVar1 + 12))) {
            this_00 = (SyncFence*)(lVar1 + 1848);
            if (this_00->IsCreated()) {
                this_00->WaitServer();
                this_00->Destroy();
            }
        }
    }

} // namespace jag::render

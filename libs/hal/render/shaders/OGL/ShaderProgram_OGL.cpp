// libs/hal/render/shaders/OGL/ShaderProgram_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "libs/hal/render/shaders/ShaderProgram.h"

namespace jag::render {
    // 0x100bde730, 144 bytes, placed by class name and debug map
    // ShaderProgram::CreateFromSourceString(char const*, char const*, VertexElementDesc const*, unsigned int, unsigned char)
    void ShaderProgram::CreateFromSourceString(char* param_1, char* param_2, VertexElementDesc* param_3, uint param_4,
                                               uchar param_5) {
        MapArea* this_00;
        long lVar1;

        m_compileFlags = param_5;
        this_00 = (MapArea*)Instance();
        lVar1 = this_00->GetOrigin();
        if (*(char*)(lVar1 + 226) == '\0') {
            m_compileFlags = m_compileFlags & 252;
        }
        VertexDeclaration::Create((VertexElementDesc*)&field_24, (ulong)param_3, (void*)(ulong)param_4, (ulong)param_3);
        (&m_vertexShaderSource, param_1)->SetSource();
        (&m_pixelShaderSource, param_2)->SetSource();
        CreateFromSourceString(this);
    }

    // 0x100bde960, 224 bytes, placed by __FILE__ string
    // ShaderProgram::Destroy()
    void ShaderProgram::Destroy() {
        char cVar1;
        int iVar2;
        scoped_lock<std::mutex> local_20[8];

        cVar1 = (&field_369)->operator_cast_to_ShaderProgramLinkState();
        if (cVar1 == '\0') {
            (&field_12)->MarkAsDead();
            if (m_nativeShaderProgram != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_GLProgramObject == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "OGL/ShaderProgram_OGL.cpp",
                          562, (char*)0);
            }
        } else {
            iVar2 = GetNativeShaderProgram(this);
            ReleaseNativeResources(this);
            field_320 = 0;
            *(undefined3*)&field_321 = 0;
            field_324 = 0;
            *(undefined3*)&field_325 = 0;
            field_328 = 0;
            if (iVar2 != 0) {
                (&field_376)->Clear();
                (&field_496)->clear();
                std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)&field_1768);
                (&field_552)->clear();
                std::scoped_lock<std::mutex>::~scoped_lock(local_20);
            }
        }
    }

    // 0x100be6210, 448 bytes, placed by __FILE__ string
    // ShaderProgram::GetStorageBufferIndex(HashedString const&) const
    undefined4 ShaderProgram::GetStorageBufferIndex(HashedString* param_1) {
        uint uVar1;
        code* pcVar2;
        char cVar3;
        undefined4 uVar5;
        long lVar6;
        undefined8 uVar7;
        undefined4* puVar8;
        hashtable_iterator_base* extraout_RDX;
        eastl local_60[16];
        unique_lock<std::mutex> local_50[16];
        ulong local_40[2];

        lVar6 = param_1->HeapBeginPtr();
        if (lVar6 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("storageBufferName.GetString() != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      1230, (char*)0);
        }
        if (((m_compileFlags & 4) == 0) && (cVar3 = this_thread::IsMainThread(), cVar3 == '\0')) {
            /* WARNING: Subroutine does not return */
            LogAssert("(m_compileFlags & SHADER_THREAD_SAFE_CACHE) || this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      1231, (char*)0);
        }
        if ((m_compileFlags & 4) == 0) {
            std::unique_lock<std::mutex>::unique_lock(local_50);
        } else {
            std::unique_lock<std::mutex>::unique_lock(local_50, (mutex*)&field_1768);
        }
        local_40[0] = param_1->end();
        eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                         eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((longlong*)local_60);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_60, (hashtable_iterator_base*)local_40, extraout_RDX)) {
            lVar6 = local_60->HeapBeginPtr();
            uVar5 = *(undefined4*)(lVar6 + 8);
        } else {
            WaitForAsyncCompile(this);
            pcVar2 = ___glewGetProgramResourceIndex;
            if (m_nativeShaderProgram == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_GLProgramObject",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "OGL/ShaderProgram_OGL.cpp",
                          1245, (char*)0);
            }
            uVar1 = m_nativeShaderProgram;
            uVar7 = param_1->HeapBeginPtr();
            uVar5 = (*pcVar2)(uVar1, 37606, uVar7);
            CheckGlErrorInternal("glGetProgramResourceIndex",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 1247);
            local_40[0] = param_1->end();
            puVar8 = (undefined4*)eastl::hash_map<
                unsigned long, int, eastl::hash<unsigned long>, eastl::equal_to<unsigned long>,
                eastl::fixed_hashtable_allocator<34ul, 24ul, 32ul, 8ul, 0ul, true, eastl::allocator>, false>::
            operator[]((hash_map<unsigned long, int, eastl::hash<unsigned long>, eastl::equal_to<unsigned long>,
                                 eastl::fixed_hashtable_allocator<34ul, 24ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                                 false>*)&field_552,
                       local_40);
            *puVar8 = uVar5;
        }
        std::unique_lock<std::mutex>::~unique_lock(local_50);
        return uVar5;
    }

    // 0x100be8cd0, 64 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstMatrix4(HashedString const&, unsigned int, math::Matrix44T<float> const*, unsigned int) const
    void ShaderProgram::SetShaderConstMatrix4(HashedString* param_1, uint param_2, Matrix44T* param_3, uint param_4) {
        int iVar1;

        iVar1 = GetUniformLocationIndex(this, param_1);
        if (-1 < iVar1) {
            SetShaderConstMatrix4(this, iVar1, param_2, param_3, param_4);
        }
    }

    // 0x100be8d10, 448 bytes, placed by __FILE__ string
    // ShaderProgram::GetUniformLocationIndex(HashedString const&) const
    undefined4 ShaderProgram::GetUniformLocationIndex(HashedString* param_1) {
        uint uVar1;
        code* pcVar2;
        char cVar3;
        undefined4 uVar5;
        long lVar6;
        undefined8 uVar7;
        undefined4* puVar8;
        hashtable_iterator_base* extraout_RDX;
        eastl local_60[16];
        unique_lock<std::mutex> local_50[16];
        ulong local_40[2];

        lVar6 = param_1->HeapBeginPtr();
        if (lVar6 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("constName.GetString() != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      1161, (char*)0);
        }
        if (((m_compileFlags & 4) == 0) && (cVar3 = this_thread::IsMainThread(), cVar3 == '\0')) {
            /* WARNING: Subroutine does not return */
            LogAssert("(m_compileFlags & SHADER_THREAD_SAFE_CACHE) || this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      1162, (char*)0);
        }
        if ((m_compileFlags & 4) == 0) {
            std::unique_lock<std::mutex>::unique_lock(local_50);
        } else {
            std::unique_lock<std::mutex>::unique_lock(local_50, (mutex*)&field_1768);
        }
        local_40[0] = param_1->end();
        eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                         eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((longlong*)local_60);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_60, (hashtable_iterator_base*)local_40, extraout_RDX)) {
            lVar6 = local_60->HeapBeginPtr();
            uVar5 = *(undefined4*)(lVar6 + 8);
        } else {
            WaitForAsyncCompile(this);
            pcVar2 = ___glewGetUniformLocation;
            if (m_nativeShaderProgram == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_GLProgramObject",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "OGL/ShaderProgram_OGL.cpp",
                          1176, (char*)0);
            }
            uVar1 = m_nativeShaderProgram;
            uVar7 = param_1->HeapBeginPtr();
            uVar5 = (*pcVar2)(uVar1, uVar7);
            CheckGlErrorInternal("glGetUniformLocation",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 1178);
            local_40[0] = param_1->end();
            puVar8 = (undefined4*)eastl::hash_map<
                unsigned long, int, eastl::hash<unsigned long>, eastl::equal_to<unsigned long>,
                eastl::fixed_hashtable_allocator<34ul, 24ul, 32ul, 8ul, 0ul, true, eastl::allocator>, false>::
            operator[]((hash_map<unsigned long, int, eastl::hash<unsigned long>, eastl::equal_to<unsigned long>,
                                 eastl::fixed_hashtable_allocator<34ul, 24ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                                 false>*)&field_552,
                       local_40);
            *puVar8 = uVar5;
        }
        std::unique_lock<std::mutex>::~unique_lock(local_50);
        return uVar5;
    }

    // 0x100be8ed0, 336 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int) const
    void ShaderProgram::SetShaderConstMatrix4(int param_1, uint param_2, Matrix44T* param_3, uint param_4) {
        char cVar1;
        RenderDevice* this_00;
        render local_108;
        ShaderProgram* local_f8;
        int local_f0;
        uint local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8[16];
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((param_3 == (Matrix44T*)0) || (param_2 == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("pMatrices && count >= 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      659, (char*)0);
        }
        if (-1 < param_1) {
            if ((param_4 & 1) == 0) {
                if ((param_4 & 2) != 0) {
                    (&field_376, param_1, param_2 << 4)->ClearShaderConst();
                }
            } else {
                cVar1 = (&field_376, param_1, param_2, param_3)->SetShaderConstMatrix4();
                if (cVar1 == '\0')
                    goto LAB_100be8fe0;
            }
            AllocateScratchArrayAndCopy<math::Matrix44T<float>>(&local_108, param_3, (ulong)param_2);
            this_00 = (RenderDevice*)local_108.Instance();
            local_f8 = this;
            local_f0 = param_1;
            local_ec = param_2;
            WrapArray<math::Matrix44T<float> const>::WrapArray(local_e8, (WrapArray*)&local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int)
                    const ::__17,
                void>((function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                      (__17*)&local_f8);
            this_00->RunOnRenderThread(&local_d8);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
        }
    LAB_100be8fe0:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100be9020, 64 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstMatrix3(HashedString const&, unsigned int, math::Matrix33T<float> const*, unsigned int) const
    void ShaderProgram::SetShaderConstMatrix3(HashedString* param_1, uint param_2, Matrix33T* param_3, uint param_4) {
        int iVar1;

        iVar1 = GetUniformLocationIndex(this, param_1);
        if (-1 < iVar1) {
            SetShaderConstMatrix3(this, iVar1, param_2, param_3, param_4);
        }
    }

    // 0x100be9060, 336 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int) const
    void ShaderProgram::SetShaderConstMatrix3(int param_1, uint param_2, Matrix33T* param_3, uint param_4) {
        char cVar1;
        RenderDevice* this_00;
        render local_108;
        ShaderProgram* local_f8;
        int local_f0;
        uint local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8[16];
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((param_3 == (Matrix33T*)0) || (param_2 == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("pMatrices && count >= 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      693, (char*)0);
        }
        if (-1 < param_1) {
            if ((param_4 & 1) == 0) {
                if ((param_4 & 2) != 0) {
                    (&field_376, param_1, param_2 * 9)->ClearShaderConst();
                }
            } else {
                cVar1 = (&field_376, param_1, param_2, param_3)->SetShaderConstMatrix3();
                if (cVar1 == '\0')
                    goto LAB_100be916e;
            }
            AllocateScratchArrayAndCopy<math::Matrix33T<float>>(&local_108, param_3, (ulong)param_2);
            this_00 = (RenderDevice*)local_108.Instance();
            local_f8 = this;
            local_f0 = param_1;
            local_ec = param_2;
            WrapArray<math::Matrix44T<float> const>::WrapArray(local_e8, (WrapArray*)&local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int)
                    const ::__18,
                void>((function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                      (__18*)&local_f8);
            this_00->RunOnRenderThread(&local_d8);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
        }
    LAB_100be916e:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100be91b0, 64 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstMatrix2(HashedString const&, unsigned int, math::Matrix22T<float> const*, unsigned int) const
    void ShaderProgram::SetShaderConstMatrix2(HashedString* param_1, uint param_2, Matrix22T* param_3, uint param_4) {
        int iVar1;

        iVar1 = GetUniformLocationIndex(this, param_1);
        if (-1 < iVar1) {
            SetShaderConstMatrix2(this, iVar1, param_2, param_3, param_4);
        }
    }

    // 0x100be91f0, 336 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int) const
    void ShaderProgram::SetShaderConstMatrix2(int param_1, uint param_2, Matrix22T* param_3, uint param_4) {
        char cVar1;
        RenderDevice* this_00;
        render local_108;
        ShaderProgram* local_f8;
        int local_f0;
        uint local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8[16];
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((param_3 == (Matrix22T*)0) || (param_2 == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("pMatrices && count >= 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      727, (char*)0);
        }
        if (-1 < param_1) {
            if ((param_4 & 1) == 0) {
                if ((param_4 & 2) != 0) {
                    (&field_376, param_1, param_2 * 4)->ClearShaderConst();
                }
            } else {
                cVar1 = (&field_376, param_1, param_2, param_3)->SetShaderConstMatrix2();
                if (cVar1 == '\0')
                    goto LAB_100be9302;
            }
            AllocateScratchArrayAndCopy<math::Matrix22T<float>>(&local_108, param_3, (ulong)param_2);
            this_00 = (RenderDevice*)local_108.Instance();
            local_f8 = this;
            local_f0 = param_1;
            local_ec = param_2;
            WrapArray<math::Matrix44T<float> const>::WrapArray(local_e8, (WrapArray*)&local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int)
                    const ::__19,
                void>((function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                      (__19*)&local_f8);
            this_00->RunOnRenderThread(&local_d8);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
        }
    LAB_100be9302:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100be9340, 64 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat4Array(HashedString const&, unsigned int, float const*, unsigned int) const
    void ShaderProgram::SetShaderConstFloat4Array(HashedString* param_1, uint param_2, float* param_3, uint param_4) {
        int iVar1;

        iVar1 = GetUniformLocationIndex(this, param_1);
        if (-1 < iVar1) {
            SetShaderConstFloat4Array(this, iVar1, param_2, param_3, param_4);
        }
    }

    // 0x100be9380, 336 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const
    void ShaderProgram::SetShaderConstFloat4Array(int param_1, uint param_2, float* param_3, uint param_4) {
        char cVar1;
        RenderDevice* this_00;
        render local_108;
        ShaderProgram* local_f8;
        int local_f0;
        uint local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8[16];
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((param_2 == 0) || (param_3 == (float*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("count >= 1 && pFloatArray",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      762, (char*)0);
        }
        if (-1 < param_1) {
            if ((param_4 & 1) == 0) {
                if ((param_4 & 2) != 0) {
                    (&field_376, param_1, param_2)->ClearShaderConst();
                }
            } else {
                cVar1 = (&field_376, param_1, param_2, (int*)param_3)->SetShaderConstInt4Array();
                if (cVar1 == '\0')
                    goto LAB_100be9492;
            }
            AllocateScratchArrayAndCopy<float>(&local_108, param_3, (ulong)(param_2 * 4));
            this_00 = (RenderDevice*)local_108.Instance();
            local_f8 = this;
            local_f0 = param_1;
            local_ec = param_2;
            WrapArray<math::Matrix44T<float> const>::WrapArray(local_e8, (WrapArray*)&local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const ::__20,
                void>((function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                      (__20*)&local_f8);
            this_00->RunOnRenderThread(&local_d8);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
        }
    LAB_100be9492:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100be94d0, 64 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstUint4Array(HashedString const&, unsigned int, unsigned int const*, unsigned int) const
    void ShaderProgram::SetShaderConstUint4Array(HashedString* param_1, uint param_2, uint* param_3, uint param_4) {
        int iVar1;

        iVar1 = GetUniformLocationIndex(this, param_1);
        if (-1 < iVar1) {
            SetShaderConstUint4Array(this, iVar1, param_2, param_3, param_4);
        }
    }

    // 0x100be9510, 336 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int) const
    void ShaderProgram::SetShaderConstUint4Array(int param_1, uint param_2, uint* param_3, uint param_4) {
        char cVar1;
        RenderDevice* this_00;
        render local_108;
        ShaderProgram* local_f8;
        int local_f0;
        uint local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8[16];
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((param_2 == 0) || (param_3 == (uint*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("count >= 1 && pUintArray",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      795, (char*)0);
        }
        if (-1 < param_1) {
            if ((param_4 & 1) == 0) {
                if ((param_4 & 2) != 0) {
                    (&field_376, param_1, param_2)->ClearShaderConst();
                }
            } else {
                cVar1 = (&field_376, param_1, param_2, (int*)param_3)->SetShaderConstInt4Array();
                if (cVar1 == '\0')
                    goto LAB_100be9622;
            }
            AllocateScratchArrayAndCopy<unsigned int>(&local_108, param_3, (ulong)(param_2 * 4));
            this_00 = (RenderDevice*)local_108.Instance();
            local_f8 = this;
            local_f0 = param_1;
            local_ec = param_2;
            WrapArray<math::Matrix44T<float> const>::WrapArray(local_e8, (WrapArray*)&local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int)
                    const ::__21,
                void>((function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                      (__21*)&local_f8);
            this_00->RunOnRenderThread(&local_d8);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
        }
    LAB_100be9622:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100be9660, 64 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat3Array(HashedString const&, unsigned int, float const*) const
    void ShaderProgram::SetShaderConstFloat3Array(HashedString* param_1, uint param_2, float* param_3) {
        int iVar1;

        iVar1 = GetUniformLocationIndex(this, param_1);
        if (-1 < iVar1) {
            SetShaderConstFloat3Array(this, iVar1, param_2, param_3);
        }
    }

    // 0x100be96a0, 304 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const
    void ShaderProgram::SetShaderConstFloat3Array(int param_1, uint param_2, float* param_3) {
        char cVar1;
        RenderDevice* this_00;
        render local_108;
        ShaderProgram* local_f8;
        int local_f0;
        uint local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8[16];
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((param_2 == 0) || (param_3 == (float*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("count >= 1 && pFloatArray",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      828, (char*)0);
        }
        if ((-1 < param_1) &&
            (cVar1 = (&field_376, param_1, param_2, (int*)param_3)->SetShaderConstInt3Array(), cVar1 != '\0')) {
            AllocateScratchArrayAndCopy<float>(&local_108, param_3, (ulong)(param_2 * 3));
            this_00 = (RenderDevice*)local_108.Instance();
            local_f8 = this;
            local_f0 = param_1;
            local_ec = param_2;
            WrapArray<math::Matrix44T<float> const>::WrapArray(local_e8, (WrapArray*)&local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::__22, void>(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8, (__22*)&local_f8);
            this_00->RunOnRenderThread(&local_d8);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100be97d0, 64 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat2Array(HashedString const&, unsigned int, float const*) const
    void ShaderProgram::SetShaderConstFloat2Array(HashedString* param_1, uint param_2, float* param_3) {
        int iVar1;

        iVar1 = GetUniformLocationIndex(this, param_1);
        if (-1 < iVar1) {
            SetShaderConstFloat2Array(this, iVar1, param_2, param_3);
        }
    }

    // 0x100be9810, 304 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const
    void ShaderProgram::SetShaderConstFloat2Array(int param_1, uint param_2, float* param_3) {
        char cVar1;
        RenderDevice* this_00;
        render local_108;
        ShaderProgram* local_f8;
        int local_f0;
        uint local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8[16];
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((param_2 == 0) || (param_3 == (float*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("count >= 1 && pFloatArray",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      837, (char*)0);
        }
        if ((-1 < param_1) &&
            (cVar1 = (&field_376, param_1, param_2, (int*)param_3)->SetShaderConstInt2Array(), cVar1 != '\0')) {
            AllocateScratchArrayAndCopy<float>(&local_108, param_3, (ulong)(param_2 * 2));
            this_00 = (RenderDevice*)local_108.Instance();
            local_f8 = this;
            local_f0 = param_1;
            local_ec = param_2;
            WrapArray<math::Matrix44T<float> const>::WrapArray(local_e8, (WrapArray*)&local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::__23, void>(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8, (__23*)&local_f8);
            this_00->RunOnRenderThread(&local_d8);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100be9940, 64 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat1Array(HashedString const&, unsigned int, float const*, unsigned int) const
    void ShaderProgram::SetShaderConstFloat1Array(HashedString* param_1, uint param_2, float* param_3, uint param_4) {
        int iVar1;

        iVar1 = GetUniformLocationIndex(this, param_1);
        if (-1 < iVar1) {
            SetShaderConstFloat1Array(this, iVar1, param_2, param_3, param_4);
        }
    }

    // 0x100be9980, 336 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const
    void ShaderProgram::SetShaderConstFloat1Array(int param_1, uint param_2, float* param_3, uint param_4) {
        char cVar1;
        RenderDevice* this_00;
        render local_108;
        ShaderProgram* local_f8;
        int local_f0;
        uint local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8[16];
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((param_2 == 0) || (param_3 == (float*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("count >= 1 && pFloatArray",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      846, (char*)0);
        }
        if (-1 < param_1) {
            if ((param_4 & 1) == 0) {
                if ((param_4 & 2) != 0) {
                    (&field_376, param_1, param_2)->ClearShaderConst();
                }
            } else {
                cVar1 = (&field_376, param_1, param_2, (int*)param_3)->SetShaderConstInt1Array();
                if (cVar1 == '\0')
                    goto LAB_100be9a8d;
            }
            AllocateScratchArrayAndCopy<float>(&local_108, param_3, (ulong)param_2);
            this_00 = (RenderDevice*)local_108.Instance();
            local_f8 = this;
            local_f0 = param_1;
            local_ec = param_2;
            WrapArray<math::Matrix44T<float> const>::WrapArray(local_e8, (WrapArray*)&local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const ::__24,
                void>((function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                      (__24*)&local_f8);
            this_00->RunOnRenderThread(&local_d8);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
        }
    LAB_100be9a8d:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100be9ad0, 64 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstInt4Array(HashedString const&, unsigned int, int const*) const
    void ShaderProgram::SetShaderConstInt4Array(HashedString* param_1, uint param_2, int* param_3) {
        int iVar1;

        iVar1 = GetUniformLocationIndex(this, param_1);
        if (-1 < iVar1) {
            SetShaderConstInt4Array(this, iVar1, param_2, param_3);
        }
    }

    // 0x100be9b10, 304 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const
    void ShaderProgram::SetShaderConstInt4Array(int param_1, uint param_2, int* param_3) {
        char cVar1;
        RenderDevice* this_00;
        render local_108;
        ShaderProgram* local_f8;
        int local_f0;
        uint local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8[16];
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((param_2 == 0) || (param_3 == (int*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("count >= 1 && pIntArray",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      879, (char*)0);
        }
        if ((-1 < param_1) &&
            (cVar1 = (&field_376, param_1, param_2, param_3)->SetShaderConstInt4Array(), cVar1 != '\0')) {
            AllocateScratchArrayAndCopy<int>(&local_108, param_3, (ulong)(param_2 * 4));
            this_00 = (RenderDevice*)local_108.Instance();
            local_f8 = this;
            local_f0 = param_1;
            local_ec = param_2;
            WrapArray<math::Matrix44T<float> const>::WrapArray(local_e8, (WrapArray*)&local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::__25, void>(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8, (__25*)&local_f8);
            this_00->RunOnRenderThread(&local_d8);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100be9c40, 64 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstInt3Array(HashedString const&, unsigned int, int const*) const
    void ShaderProgram::SetShaderConstInt3Array(HashedString* param_1, uint param_2, int* param_3) {
        int iVar1;

        iVar1 = GetUniformLocationIndex(this, param_1);
        if (-1 < iVar1) {
            SetShaderConstInt3Array(this, iVar1, param_2, param_3);
        }
    }

    // 0x100be9c80, 304 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const
    void ShaderProgram::SetShaderConstInt3Array(int param_1, uint param_2, int* param_3) {
        char cVar1;
        RenderDevice* this_00;
        render local_108;
        ShaderProgram* local_f8;
        int local_f0;
        uint local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8[16];
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((param_2 == 0) || (param_3 == (int*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("count >= 1 && pIntArray",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      888, (char*)0);
        }
        if ((-1 < param_1) &&
            (cVar1 = (&field_376, param_1, param_2, param_3)->SetShaderConstInt3Array(), cVar1 != '\0')) {
            AllocateScratchArrayAndCopy<int>(&local_108, param_3, (ulong)(param_2 * 3));
            this_00 = (RenderDevice*)local_108.Instance();
            local_f8 = this;
            local_f0 = param_1;
            local_ec = param_2;
            WrapArray<math::Matrix44T<float> const>::WrapArray(local_e8, (WrapArray*)&local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::__26, void>(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8, (__26*)&local_f8);
            this_00->RunOnRenderThread(&local_d8);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100be9db0, 64 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstInt2Array(HashedString const&, unsigned int, int const*) const
    void ShaderProgram::SetShaderConstInt2Array(HashedString* param_1, uint param_2, int* param_3) {
        int iVar1;

        iVar1 = GetUniformLocationIndex(this, param_1);
        if (-1 < iVar1) {
            SetShaderConstInt2Array(this, iVar1, param_2, param_3);
        }
    }

    // 0x100be9df0, 304 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const
    void ShaderProgram::SetShaderConstInt2Array(int param_1, uint param_2, int* param_3) {
        char cVar1;
        RenderDevice* this_00;
        render local_108;
        ShaderProgram* local_f8;
        int local_f0;
        uint local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8[16];
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((param_2 == 0) || (param_3 == (int*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("count >= 1 && pIntArray",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      897, (char*)0);
        }
        if ((-1 < param_1) &&
            (cVar1 = (&field_376, param_1, param_2, param_3)->SetShaderConstInt2Array(), cVar1 != '\0')) {
            AllocateScratchArrayAndCopy<int>(&local_108, param_3, (ulong)(param_2 * 2));
            this_00 = (RenderDevice*)local_108.Instance();
            local_f8 = this;
            local_f0 = param_1;
            local_ec = param_2;
            WrapArray<math::Matrix44T<float> const>::WrapArray(local_e8, (WrapArray*)&local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::__27, void>(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8, (__27*)&local_f8);
            this_00->RunOnRenderThread(&local_d8);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100be9f20, 64 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstInt1Array(HashedString const&, unsigned int, int const*) const
    void ShaderProgram::SetShaderConstInt1Array(HashedString* param_1, uint param_2, int* param_3) {
        int iVar1;

        iVar1 = GetUniformLocationIndex(this, param_1);
        if (-1 < iVar1) {
            SetShaderConstInt1Array(this, iVar1, param_2, param_3);
        }
    }

    // 0x100be9f60, 304 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const
    void ShaderProgram::SetShaderConstInt1Array(int param_1, uint param_2, int* param_3) {
        char cVar1;
        RenderDevice* this_00;
        render local_108;
        ShaderProgram* local_f8;
        int local_f0;
        uint local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8[16];
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((param_2 == 0) || (param_3 == (int*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("count >= 1 && pIntArray",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      906, (char*)0);
        }
        if ((-1 < param_1) &&
            (cVar1 = (&field_376, param_1, param_2, param_3)->SetShaderConstInt1Array(), cVar1 != '\0')) {
            AllocateScratchArrayAndCopy<int>(&local_108, param_3, (ulong)param_2);
            this_00 = (RenderDevice*)local_108.Instance();
            local_f8 = this;
            local_f0 = param_1;
            local_ec = param_2;
            WrapArray<math::Matrix44T<float> const>::WrapArray(local_e8, (WrapArray*)&local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::__28, void>(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8, (__28*)&local_f8);
            this_00->RunOnRenderThread(&local_d8);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bea090, 64 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstUInt1Array(HashedString const&, unsigned int, unsigned int const*, unsigned int) const
    void ShaderProgram::SetShaderConstUInt1Array(HashedString* param_1, uint param_2, uint* param_3, uint param_4) {
        int iVar1;

        iVar1 = GetUniformLocationIndex(this, param_1);
        if (-1 < iVar1) {
            SetShaderConstUInt1Array(this, iVar1, param_2, param_3, param_4);
        }
    }

    // 0x100bea0d0, 336 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int) const
    void ShaderProgram::SetShaderConstUInt1Array(int param_1, uint param_2, uint* param_3, uint param_4) {
        char cVar1;
        RenderDevice* this_00;
        render local_108;
        ShaderProgram* local_f8;
        int local_f0;
        uint local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8[16];
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((param_2 == 0) || (param_3 == (uint*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("count >= 1 && pUIntArray",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      916, (char*)0);
        }
        if (-1 < param_1) {
            if ((param_4 & 1) == 0) {
                if ((param_4 & 2) != 0) {
                    (&field_376, param_1, param_2)->ClearShaderConst();
                }
            } else {
                cVar1 = (&field_376, param_1, param_2, (int*)param_3)->SetShaderConstInt1Array();
                if (cVar1 == '\0')
                    goto LAB_100bea1dd;
            }
            AllocateScratchArrayAndCopy<unsigned int>(&local_108, param_3, (ulong)param_2);
            this_00 = (RenderDevice*)local_108.Instance();
            local_f8 = this;
            local_f0 = param_1;
            local_ec = param_2;
            WrapArray<math::Matrix44T<float> const>::WrapArray(local_e8, (WrapArray*)&local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int)
                    const ::__29,
                void>((function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                      (__29*)&local_f8);
            this_00->RunOnRenderThread(&local_d8);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
        }
    LAB_100bea1dd:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bea220, 48 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstVector4(HashedString const&, math::Vector4T<float> const*) const
    void ShaderProgram::SetShaderConstVector4(HashedString* param_1, Vector4T* param_2) {
        int iVar1;

        iVar1 = GetUniformLocationIndex(this, param_1);
        if (-1 < iVar1) {
            SetShaderConstVector4(this, iVar1, param_2);
        }
    }

    // 0x100bea250, 256 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const
    void ShaderProgram::SetShaderConstVector4(int param_1, Vector4T* param_2) {
        char cVar1;
        RenderDevice* this_00;
        Singleton<RenderDevice>* this_01;
        ShaderProgram* local_f8;
        int local_f0;
        undefined8 local_e8;
        undefined8 uStack_e0;
        function local_d8;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_2 == (Vector4T*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pVectors",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      950, (char*)0);
        }
        if (-1 < param_1) {
            this_01 = (Singleton<RenderDevice>*)&field_376;
            cVar1 = this_01->SetShaderConstVector4(param_1, param_2);
            if (cVar1 != '\0') {
                this_00 = (RenderDevice*)this_01->Instance();
                local_e8 = *(undefined8*)param_2;
                uStack_e0 = *(undefined8*)(param_2 + 8);
                local_f8 = this;
                local_f0 = param_1;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::__30, void>(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                    (__30*)&local_f8);
                this_00->RunOnRenderThread(&local_d8);
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bea350, 48 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstVector3(HashedString const&, math::Vector3T<float> const*) const
    void ShaderProgram::SetShaderConstVector3(HashedString* param_1, Vector3T* param_2) {
        int iVar1;

        iVar1 = GetUniformLocationIndex(this, param_1);
        if (-1 < iVar1) {
            SetShaderConstVector3(this, iVar1, param_2);
        }
    }

    // 0x100bea380, 272 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const
    void ShaderProgram::SetShaderConstVector3(int param_1, Vector3T* param_2) {
        char cVar1;
        RenderDevice* this_00;
        Singleton<RenderDevice>* this_01;
        ShaderProgram* local_f0;
        int local_e8;
        undefined8 local_e4;
        undefined4 local_dc;
        function local_d8;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_2 == (Vector3T*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pVectors",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      960, (char*)0);
        }
        if (-1 < param_1) {
            this_01 = (Singleton<RenderDevice>*)&field_376;
            cVar1 = this_01->SetShaderConstVector3(param_1, param_2);
            if (cVar1 != '\0') {
                this_00 = (RenderDevice*)this_01->Instance();
                local_e4 = *(undefined8*)param_2;
                local_dc = *(undefined4*)(param_2 + 8);
                local_f0 = this;
                local_e8 = param_1;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::__31, void>(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                    (__31*)&local_f0);
                this_00->RunOnRenderThread(&local_d8);
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bea490, 336 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int) const
    void ShaderProgram::SetShaderConstVector4(int param_1, uint param_2, Vector4T* param_3, uint param_4) {
        char cVar1;
        RenderDevice* this_00;
        render local_108;
        ShaderProgram* local_f8;
        int local_f0;
        uint local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8[16];
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((param_2 == 0) || (param_3 == (Vector4T*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("count >= 1 && pVectors",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      970, (char*)0);
        }
        if (-1 < param_1) {
            if ((param_4 & 1) == 0) {
                if ((param_4 & 2) != 0) {
                    (&field_376, param_1, param_2)->ClearShaderConst();
                }
            } else {
                cVar1 = (&field_376, param_1, param_2, param_3)->SetShaderConstVector4();
                if (cVar1 == '\0')
                    goto LAB_100bea59d;
            }
            AllocateScratchArrayAndCopy<math::Vector4T<float>>(&local_108, param_3, (ulong)param_2);
            this_00 = (RenderDevice*)local_108.Instance();
            local_f8 = this;
            local_f0 = param_1;
            local_ec = param_2;
            WrapArray<math::Matrix44T<float> const>::WrapArray(local_e8, (WrapArray*)&local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int)
                    const ::__32,
                void>((function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                      (__32*)&local_f8);
            this_00->RunOnRenderThread(&local_d8);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
        }
    LAB_100bea59d:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bea5e0, 64 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstVector3(HashedString const&, unsigned int, math::Vector3T<float> const*) const
    void ShaderProgram::SetShaderConstVector3(HashedString* param_1, uint param_2, Vector3T* param_3) {
        int iVar1;

        iVar1 = GetUniformLocationIndex(this, param_1);
        if (-1 < iVar1) {
            SetShaderConstVector3(this, iVar1, param_2, param_3);
        }
    }

    // 0x100bea620, 304 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const
    void ShaderProgram::SetShaderConstVector3(int param_1, uint param_2, Vector3T* param_3) {
        char cVar1;
        RenderDevice* this_00;
        render local_108;
        ShaderProgram* local_f8;
        int local_f0;
        uint local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8[16];
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((param_3 == (Vector3T*)0) || (param_2 == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("pVectors && count >= 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      1003, (char*)0);
        }
        if ((-1 < param_1) &&
            (cVar1 = (&field_376, param_1, param_2, param_3)->SetShaderConstVector3(), cVar1 != '\0')) {
            AllocateScratchArrayAndCopy<math::Vector3T<float>>(&local_108, param_3, (ulong)param_2);
            this_00 = (RenderDevice*)local_108.Instance();
            local_f8 = this;
            local_f0 = param_1;
            local_ec = param_2;
            WrapArray<math::Matrix44T<float> const>::WrapArray(local_e8, (WrapArray*)&local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const ::__33,
                void>((function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                      (__33*)&local_f8);
            this_00->RunOnRenderThread(&local_d8);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bea750, 64 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstVector2(HashedString const&, unsigned int, math::Vector2T<float> const*) const
    void ShaderProgram::SetShaderConstVector2(HashedString* param_1, uint param_2, Vector2T* param_3) {
        int iVar1;

        iVar1 = GetUniformLocationIndex(this, param_1);
        if (-1 < iVar1) {
            SetShaderConstVector2(this, iVar1, param_2, param_3);
        }
    }

    // 0x100bea790, 304 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const
    void ShaderProgram::SetShaderConstVector2(int param_1, uint param_2, Vector2T* param_3) {
        char cVar1;
        RenderDevice* this_00;
        render local_108;
        ShaderProgram* local_f8;
        int local_f0;
        uint local_ec;
        WrapArray<math::Matrix44T<float> const> local_e8[16];
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((param_3 == (Vector2T*)0) || (param_2 == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("pVectors && count >= 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      1012, (char*)0);
        }
        if ((-1 < param_1) &&
            (cVar1 = (&field_376, param_1, param_2, param_3)->SetShaderConstVector2(), cVar1 != '\0')) {
            AllocateScratchArrayAndCopy<math::Vector2T<float>>(&local_108, param_3, (ulong)param_2);
            this_00 = (RenderDevice*)local_108.Instance();
            local_f8 = this;
            local_f0 = param_1;
            local_ec = param_2;
            WrapArray<math::Matrix44T<float> const>::WrapArray(local_e8, (WrapArray*)&local_108);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const ::__34,
                void>((function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                      (__34*)&local_f8);
            this_00->RunOnRenderThread(&local_d8);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bea8c0, 32 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstVector2(HashedString const&, math::Vector2T<float> const*) const
    void ShaderProgram::SetShaderConstVector2(HashedString* param_1, Vector2T* param_2) {
        SetShaderConstVector2(this, param_1, 1, param_2);
    }

    // 0x100bea8e0, 80 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat4(HashedString const&, float, float, float, float) const
    void ShaderProgram::SetShaderConstFloat4(HashedString* param_1, float param_2, float param_3, float param_4,
                                             float param_5) {
        int iVar1;

        iVar1 = GetUniformLocationIndex(this, param_1);
        if (-1 < iVar1) {
            SetShaderConstFloat4(this, iVar1, param_2, param_3, param_4, param_5);
        }
    }

    // 0x100bea930, 304 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const
    void ShaderProgram::SetShaderConstFloat4(int param_1, float param_2, float param_3, float param_4, float param_5) {
        char cVar1;
        RenderDevice* this_00;
        Singleton<RenderDevice>* this_01;
        ShaderProgram* local_f8;
        int local_f0;
        float local_ec;
        float local_e8;
        float local_e4;
        float local_e0;
        function local_c8;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (-1 < param_1) {
            this_01 = (Singleton<RenderDevice>*)&field_376;
            cVar1 = this_01->SetShaderConstFloat4(param_1, param_2, param_3, param_4, param_5);
            if (cVar1 != '\0') {
                this_00 = (RenderDevice*)this_01->Instance();
                local_ec = param_2;
                local_e8 = param_3;
                local_e4 = param_4;
                local_e0 = param_5;
                local_f8 = this;
                local_f0 = param_1;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::__35, void>(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8,
                    (__35*)&local_f8);
                this_00->RunOnRenderThread(&local_c8);
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100beaa60, 80 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat3(HashedString const&, float, float, float) const
    void ShaderProgram::SetShaderConstFloat3(HashedString* param_1, float param_2, float param_3, float param_4) {
        int iVar1;

        iVar1 = GetUniformLocationIndex(this, param_1);
        if (-1 < iVar1) {
            SetShaderConstFloat3(this, iVar1, param_2, param_3, param_4);
        }
    }

    // 0x100beaab0, 272 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat3(int, float, float, float) const
    void ShaderProgram::SetShaderConstFloat3(int param_1, float param_2, float param_3, float param_4) {
        char cVar1;
        RenderDevice* this_00;
        Singleton<RenderDevice>* this_01;
        ShaderProgram* local_f0;
        int local_e8;
        float local_e4;
        float local_e0;
        float local_dc;
        function local_c8;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (-1 < param_1) {
            this_01 = (Singleton<RenderDevice>*)&field_376;
            cVar1 = this_01->SetShaderConstFloat3(param_1, param_2, param_3, param_4);
            if (cVar1 != '\0') {
                this_00 = (RenderDevice*)this_01->Instance();
                local_e4 = param_2;
                local_e0 = param_3;
                local_dc = param_4;
                local_f0 = this;
                local_e8 = param_1;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::__36, void>(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8,
                    (__36*)&local_f0);
                this_00->RunOnRenderThread(&local_c8);
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100beabc0, 64 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat2(HashedString const&, float, float) const
    void ShaderProgram::SetShaderConstFloat2(HashedString* param_1, float param_2, float param_3) {
        int iVar1;

        iVar1 = GetUniformLocationIndex(this, param_1);
        if (-1 < iVar1) {
            SetShaderConstFloat2(this, iVar1, param_2, param_3);
        }
    }

    // 0x100beac00, 240 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat2(int, float, float) const
    void ShaderProgram::SetShaderConstFloat2(int param_1, float param_2, float param_3) {
        char cVar1;
        RenderDevice* this_00;
        Singleton<RenderDevice>* this_01;
        ShaderProgram* local_e8;
        int local_e0;
        float local_dc;
        float local_d8;
        function local_c8;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (-1 < param_1) {
            this_01 = (Singleton<RenderDevice>*)&field_376;
            cVar1 = this_01->SetShaderConstFloat2(param_1, param_2, param_3);
            if (cVar1 != '\0') {
                this_00 = (RenderDevice*)this_01->Instance();
                local_dc = param_2;
                local_d8 = param_3;
                local_e8 = this;
                local_e0 = param_1;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    ShaderProgram::SetShaderConstFloat2(int, float, float) const ::__37, void>(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8,
                    (__37*)&local_e8);
                this_00->RunOnRenderThread(&local_c8);
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100beacf0, 48 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat1(HashedString const&, float) const
    void ShaderProgram::SetShaderConstFloat1(HashedString* param_1, float param_2) {
        int iVar1;

        iVar1 = GetUniformLocationIndex(this, param_1);
        if (-1 < iVar1) {
            SetShaderConstFloat1(this, iVar1, param_2);
        }
    }

    // 0x100bead20, 224 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat1(int, float) const
    void ShaderProgram::SetShaderConstFloat1(int param_1, float param_2) {
        char cVar1;
        RenderDevice* this_00;
        Singleton<RenderDevice>* this_01;
        ShaderProgram* local_e0;
        int local_d8;
        float local_d4;
        function local_c8;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (-1 < param_1) {
            this_01 = (Singleton<RenderDevice>*)&field_376;
            cVar1 = this_01->SetShaderConstFloat1(param_1, param_2);
            if (cVar1 != '\0') {
                this_00 = (RenderDevice*)this_01->Instance();
                local_d4 = param_2;
                local_e0 = this;
                local_d8 = param_1;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    ShaderProgram::SetShaderConstFloat1(int, float) const ::__38, void>(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8,
                    (__38*)&local_e0);
                this_00->RunOnRenderThread(&local_c8);
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100beae00, 80 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstInt4(HashedString const&, int, int, int, int) const
    void ShaderProgram::SetShaderConstInt4(HashedString* param_1, int param_2, int param_3, int param_4, int param_5) {
        int iVar1;

        iVar1 = GetUniformLocationIndex(this, param_1);
        if (-1 < iVar1) {
            SetShaderConstInt4(this, iVar1, param_2, param_3, param_4, param_5);
        }
    }

    // 0x100beae50, 272 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const
    void ShaderProgram::SetShaderConstInt4(int param_1, int param_2, int param_3, int param_4, int param_5) {
        char cVar2;
        Singleton<RenderDevice>* this_00;
        ShaderProgram* local_110;
        int local_108;
        int local_104;
        int local_100;
        int local_fc;
        int local_f8;
        RenderDevice* local_f0;
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (-1 < param_1) {
            this_00 = (Singleton<RenderDevice>*)&field_376;
            cVar2 = this_00->SetShaderConstInt4(param_1, param_2, param_3, param_4, param_5);
            if (cVar2 != '\0') {
                local_f0 = (RenderDevice*)this_00->Instance();
                local_110 = (ShaderProgram*)this;
                local_f8 = param_5;
                local_108 = param_1;
                local_104 = param_2;
                local_100 = param_3;
                local_fc = param_4;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::__39, void>(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                    (__39*)&local_110);
                local_f0->RunOnRenderThread(&local_d8);
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100beaf60, 64 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstInt3(HashedString const&, int, int, int) const
    void ShaderProgram::SetShaderConstInt3(HashedString* param_1, int param_2, int param_3, int param_4) {
        int iVar1;

        iVar1 = GetUniformLocationIndex(this, param_1);
        if (-1 < iVar1) {
            SetShaderConstInt3(this, iVar1, param_2, param_3, param_4);
        }
    }

    // 0x100beafa0, 240 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstInt3(int, int, int, int) const
    void ShaderProgram::SetShaderConstInt3(int param_1, int param_2, int param_3, int param_4) {
        char cVar1;
        Singleton<RenderDevice>* this_00;
        ShaderProgram* local_f8;
        int local_f0;
        int local_ec;
        int local_e8;
        int local_e4;
        RenderDevice* local_e0;
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (-1 < param_1) {
            this_00 = (Singleton<RenderDevice>*)&field_376;
            cVar1 = this_00->SetShaderConstInt3(param_1, param_2, param_3, param_4);
            if (cVar1 != '\0') {
                local_e0 = (RenderDevice*)this_00->Instance();
                local_f8 = this;
                local_f0 = param_1;
                local_ec = param_2;
                local_e8 = param_3;
                local_e4 = param_4;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::__40, void>(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                    (__40*)&local_f8);
                local_e0->RunOnRenderThread(&local_d8);
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100beb090, 64 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstInt2(HashedString const&, int, int) const
    void ShaderProgram::SetShaderConstInt2(HashedString* param_1, int param_2, int param_3) {
        int iVar1;

        iVar1 = GetUniformLocationIndex(this, param_1);
        if (-1 < iVar1) {
            SetShaderConstInt2(this, iVar1, param_2, param_3);
        }
    }

    // 0x100beb0d0, 208 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstInt2(int, int, int) const
    void ShaderProgram::SetShaderConstInt2(int param_1, int param_2, int param_3) {
        char cVar1;
        RenderDevice* this_00;
        Singleton<RenderDevice>* this_01;
        ShaderProgram* local_f0;
        int local_e8;
        int local_e4;
        int local_e0;
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (-1 < param_1) {
            this_01 = (Singleton<RenderDevice>*)&field_376;
            cVar1 = this_01->SetShaderConstInt2(param_1, param_2, param_3);
            if (cVar1 != '\0') {
                this_00 = (RenderDevice*)this_01->Instance();
                local_f0 = this;
                local_e8 = param_1;
                local_e4 = param_2;
                local_e0 = param_3;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    ShaderProgram::SetShaderConstInt2(int, int, int) const ::__41, void>(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                    (__41*)&local_f0);
                this_00->RunOnRenderThread(&local_d8);
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100beb1a0, 48 bytes, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstInt1(HashedString const&, int) const
    void ShaderProgram::SetShaderConstInt1(HashedString* param_1, int param_2) {
        int iVar1;

        iVar1 = GetUniformLocationIndex(this, param_1);
        if (-1 < iVar1) {
            SetShaderConstInt1(this, iVar1, param_2);
        }
    }

    // 0x100beb1d0, 320 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstInt1(int, int) const
    void ShaderProgram::SetShaderConstInt1(int param_1, int param_2) {
        char cVar2;
        RenderDevice* this_00;
        hashtable_iterator_base* extraout_RDX;
        Singleton<RenderDevice>* this_01;
        ShaderProgram* local_f0;
        uint local_e8;
        int local_e4;
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (-1 < param_1) {
            eastl::hashtable<int, eastl::pair<int const, int>, BucketAllocatorEASTL,
                             eastl::use_first<eastl::pair<int const, int>>, eastl::equal_to<int>, eastl::hash<int>,
                             eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
                             true, true>::find((int*)&local_d8);
            eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            if (!eastl::operator==((eastl*)&local_d8, (hashtable_iterator_base*)&local_f0, extraout_RDX)) {
                /* WARNING: Subroutine does not return */
                LogAssert("index < 0 || m_samplerStateCache.find(index) == m_samplerStateCache.end()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "OGL/ShaderProgram_OGL.cpp",
                          1096, (char*)0);
            }
        }
        if (-1 < (int)(uint)param_1) {
            this_01 = (Singleton<RenderDevice>*)&field_376;
            cVar2 = this_01->SetShaderConstInt1((uint)param_1, param_2);
            if (cVar2 != '\0') {
                this_00 = (RenderDevice*)this_01->Instance();
                local_e8 = (uint)param_1;
                local_f0 = this;
                local_e4 = param_2;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    ShaderProgram::SetShaderConstInt1(int, int) const ::__42, void>(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                    (__42*)&local_f0);
                this_00->RunOnRenderThread(&local_d8);
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100beb6f0, 176 bytes, placed by __FILE__ string
    // ShaderProgram::WaitForAsyncCompile() const
    void ShaderProgram::WaitForAsyncCompile() {
        byte bVar1;
        char cVar2;
        long lVar3;
        RenderDevice* this_00;
        undefined1* this_01;

        lVar3 = Singleton<RenderDevice>::InstancePtr();
        if (lVar3 != 0) {
            this_00 = (RenderDevice*)((ShaderProgram*)this)->Instance();
            lVar3 = this_00->GetCurrentThreadRenderContext();
            if (lVar3 != 0) {
                if ((m_compileFlags & 1) != 0) {
                    bVar1 = std::__atomic_base<ShaderProgramLinkState, false>::load(&field_369);
                    if ((6 < bVar1) || ((97U >> (bVar1 & 31) & 1) == 0)) {
                        cVar2 = (&field_1840)->valid();
                        if (cVar2 != '\0') {
                            std::future<void>::wait();
                        }
                    }
                }
                this_01 = &field_1848;
                cVar2 = this_01->IsCreated();
                if (cVar2 != '\0') {
                    this_01->WaitServer();
                    this_01->Destroy();
                }
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("RenderDevice::InstancePtr() && RenderDevice::Instance().GetCurrentThreadRenderContext()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                  "ShaderProgram_OGL.cpp",
                  1382, (char*)0);
    }

    // 0x100bee420, 784 bytes, base-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::ShaderProgram(char const*)
    void ShaderProgram::ShaderProgram(char* param_1) {
        allocator local_48[8];
        equal_to local_40[16];

        new (&field_12) RenderResource();
        new (this) RenderDeviceOnEndFrame(false);
        field_0 = &PTR__ShaderProgram_100f28258;
        new (&field_24) VertexDeclaration();
        new (&m_vertexShaderSource) ShaderSource();
        new (field_160, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&m_pixelShaderSource) ShaderSource();
        new (field_216, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_232) ShaderSource();
        new (field_272, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_288) eastl::vector<unsigned char, eastl::allocator>();
        field_320 = 0;
        *(undefined3*)&field_321 = 0;
        field_324 = 0;
        *(undefined3*)&field_325 = 0;
        field_328 = 0;
        m_lastUsedTimeSeconds = 0.0;
        eastl::allocator::allocator(local_48, "EASTL basic_string");
        new (&field_336, param_1, local_48) eastl::string();
        m_compileFlags = '\0';
        new (&field_369) std::atomic<ShaderProgramLinkState>();
        new (&field_376) ShaderProgramStateCache();
        eastl::allocator::allocator(local_48, "EASTL hash_map");
        new (&field_496, local_48)
            eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        new (&field_552, (hash*)local_48, local_40)
            eastl::fixed_hash_map<unsigned long, int, 32ul, 33ul, true, eastl::hash<unsigned long>,
                                  eastl::equal_to<unsigned long>, false, eastl::allocator>();
        new (&field_1728) eastl::vector_map<unsigned long, int, eastl::less<unsigned long>, eastl::allocator,
                                            eastl::vector<eastl::pair<unsigned long, int>, eastl::allocator>>();
        new (&field_1768) std::mutex();
        m_nativeShaderProgram = 0;
        field_1836 = 0;
        new (&field_1840) std::future<void>();
        new (&field_1848) SyncFence();
        (&field_1728, 16)->reserve();
        (&field_24, 3)->DisableMarkAsDead();
    }

    // 0x100bee7f0, 464 bytes, base-object destructor, placed by class name and neighbouring functions
    // ShaderProgram::~ShaderProgram()
    void ShaderProgram::~ShaderProgram() {
        field_0 = &PTR__ShaderProgram_100f28258;
        Destroy(this);
        (&field_1848)->~SyncFence();
        (&field_1840)->~future();
        (&field_1768)->~mutex();
        (&field_1728)->~vector_map();
        (&field_552)->~fixed_hash_map();
        (&field_496)->~hash_map();
        (&field_376)->~ShaderProgramStateCache();
        (&field_336)->~basic_string();
        (&field_288)->~vector();
        field_272->~shared_ptr();
        (&field_232)->~hash_node();
        field_216->~shared_ptr();
        (&m_pixelShaderSource)->~hash_node();
        field_160->~shared_ptr();
        (&m_vertexShaderSource)->~hash_node();
        (&field_24)->~VertexDeclaration();
        ~RenderDeviceOnEndFrame();
        (&field_12)->~RenderResource();
    }

    // 0x100bee9c0, 32 bytes, deleting destructor, placed by class name and neighbouring functions
    // ShaderProgram::~ShaderProgram()
    void ShaderProgram::~ShaderProgram() {
        ~ShaderProgram(this);
        operator_delete(this);
    }

    // 0x100beea20, 192 bytes, placed by __FILE__ string
    // ShaderProgram::CreateFromSourceString()
    undefined8 ShaderProgram::CreateFromSourceString() {
        char cVar1;
        undefined8 uVar2;
        Layout* this_00;
        vector* pvVar3;
        type* ptVar4;
        undefined1 local_28[8];
        __16 local_20;

        cVar1 = (&field_369)->operator_cast_to_ShaderProgramLinkState();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_linkState == ShaderProgramLinkState::UNINITIALISED",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      132, (char*)0);
        }
        ptVar4 = (type*)&DAT_00000001;
        std::atomic<ShaderProgramLinkState>::operator=((atomic<ShaderProgramLinkState>*)&field_369);
        (&field_12)->UndoMarkAsDead();
        if ((m_compileFlags & 1) == 0) {
            uVar2 = CreateFromSourceStringInternal(this);
        } else {
            RegisterOnEndFrame();
            this_00 = (Layout*)((ShaderProgram*)this)->Instance();
            pvVar3 = eastl::string::Layout::SSOBeginPtr(this_00, ptVar4);
            local_20.field_0 = this;
            ThreadPool::AddTask<ShaderProgram::CreateFromSourceString()::__16>((ThreadPool*)local_28, (char*)pvVar3,
                                                                               &local_20);
            std::future<void>::operator=((future<void>*)&field_1840, (future*)local_28);
            local_28->~future();
            uVar2 = 1;
        }
        return uVar2;
    }

    // 0x100beeae0, 112 bytes, placed by class name and neighbouring functions
    // ShaderProgram::CreateFromSourceString(char const*, char const*, VertexDeclaration const*, unsigned char)
    void ShaderProgram::CreateFromSourceString(char* param_1, char* param_2, VertexDeclaration* param_3,
                                               uchar param_4) {
        Array<VertexElementDesc, eastl::allocator>* this_00;
        VertexElementDesc* pVVar1;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        uint uVar2;

        this_00 = (Array<VertexElementDesc, eastl::allocator>*)param_3->second();
        pVVar1 = (VertexElementDesc*)Array<VertexElementDesc, eastl::allocator>::operator[](this_00, 0);
        this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)param_3->second();
        uVar2 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
        CreateFromSourceString(this, param_1, param_2, pVVar1, uVar2, param_4);
    }

    // 0x100beeb50, 32 bytes, placed by class name and neighbouring functions
    // ShaderProgram::RebuildFromInternalSource()
    void ShaderProgram::RebuildFromInternalSource() {
        if (field_1836 == 0) {
            CreateFromSourceString(this);
            return;
        }
        CreateFromBinary(this);
    }

    // 0x100beeb70, 752 bytes, placed by __FILE__ string
    // ShaderProgram::CreateFromBinary()
    undefined4 ShaderProgram::CreateFromBinary() {
        undefined1* puVar1;
        undefined1* this_00;
        int iVar2;
        code* pcVar3;
        char cVar4;
        uint uVar5;
        undefined4 uVar6;
        ShaderSource* pSVar7;
        vector* this_01;
        undefined8 uVar9;
        Array<game::VarValue, eastl::allocator>* this_02;
        Array<VertexElementDesc, eastl::allocator>* this_03;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        char* pcVar10;
        char* pcVar11;
        char* pcVar12;
        Singleton<ShaderManager<VertexShader>>* this_06;
        shared_ptr local_48;
        AutoSingleton<ShaderThreadPoolSingleton> local_38[8];

        if (m_nativeShaderProgram != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_GLProgramObject == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      362, "Call Destroy() before calling Create() again");
        }
        if (field_1836 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_BinaryFormat",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      363, (char*)0);
        }
        puVar1 = &field_288;
        cVar4 = puVar1->empty();
        if (cVar4 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_Binary.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      364, (char*)0);
        }
        local_38->~AutoSingleton("%s (Flags=%u)", "CreateFromBinary", m_compileFlags);
        this_06 = (Singleton<ShaderManager<VertexShader>>*)&field_12;
        this_06->UndoMarkAsDead();
        pSVar7 = (ShaderSource*)this_06->Instance();
        puVar1->size();
        local_48.RegisterFromBinary(pSVar7, (ulong)&m_vertexShaderSource);
        shared_ptr<VertexShader>::operator=((shared_ptr<VertexShader>*)field_160, &local_48);
        local_48.~shared_ptr();
        this_00 = &m_pixelShaderSource;
        this_01 = this_00->SSOBeginPtr((type*)&local_48);
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() !=
            0) {
            pSVar7 = (ShaderSource*)this_01->Instance();
            puVar1->size();
            local_48.RegisterFromBinary(pSVar7, (ulong)this_00);
            shared_ptr<PixelShader>::operator=((shared_ptr<PixelShader>*)field_216, &local_48);
            local_48.~shared_ptr();
        }
        uVar5 = (*___glewCreateProgram)();
        m_nativeShaderProgram = uVar5;
        pcVar3 = ___glewProgramBinary;
        if (uVar5 == 0) {
            uVar9 = logger::default_logger();
            uVar6 = 0;
            logger::Logger::Log(uVar9, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "shaders/OGL/ShaderProgram_OGL.cpp",
                                381, "Failed to create program object!");
            cVar4 = '\x05';
        } else {
            iVar2 = field_1836;
            uVar9 = eastl::vector<unsigned char, eastl::allocator>::operator[](
                (vector<unsigned char, eastl::allocator>*)puVar1, 0);
            uVar6 = puVar1->size();
            (*pcVar3)(uVar5, iVar2, uVar9, uVar6);
            pcVar12 = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp";
            CheckGlErrorInternal("glProgramBinary",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 387);
            puVar1 = &field_24;
            this_02 = (Array<game::VarValue, eastl::allocator>*)puVar1->second();
            cVar4 = this_02->empty();
            if (cVar4 == '\0') {
                this_03 = (Array<VertexElementDesc, eastl::allocator>*)puVar1->second();
                pcVar12 = (char*)Array<VertexElementDesc, eastl::allocator>::operator[](this_03, 0);
                this_04 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)puVar1->second();
                uVar5 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_04);
                BindVertexElementAttribs(this, (VertexElementDesc*)pcVar12, uVar5);
            }
            (&m_vertexShaderSource, (type*)pcVar12)->SSOBeginPtr();
            pcVar10 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            this_00->SSOBeginPtr(pcVar12);
            pcVar11 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            (&field_232, (type*)pcVar12)->SSOBeginPtr();
            pcVar12 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar6 = CreateShaderInternal(this, pcVar10, pcVar11, pcVar12);
            cVar4 = (char)uVar6 + '\x05';
        }
        std::atomic<ShaderProgramLinkState>::operator=((atomic<ShaderProgramLinkState>*)&field_369, cVar4);
        return uVar6;
    }

    // 0x100beee60, 16 bytes, placed by class name and neighbouring functions
    // ShaderProgram::DestroyBinary()
    void ShaderProgram::DestroyBinary() {
        field_1836 = 0;
    }

    // 0x100bef060, 1120 bytes, placed by __FILE__ string
    // ShaderProgram::CreateFromSourceStringInternal()
    ulong ShaderProgram::CreateFromSourceStringInternal() {
        undefined1* this_00;
        undefined1* this_01;
        char cVar1;
        uchar uVar2;
        uint uVar3;
        RenderDevice* this_02;
        vector* pvVar4;
        ulong uVar5;
        char* pcVar6;
        Shader* pSVar7;
        undefined8 uVar8;
        undefined1* puVar9;
        undefined7 uVar10;
        shared_ptr* in_RSI;
        undefined8 uVar11;
        shared_ptr local_40;

        if (m_compileFlags == '\0') {
            cVar1 = this_thread::IsMainThread();
            if (cVar1 == '\0') {
                this_02 = (RenderDevice*)((ShaderProgram*)this)->Instance();
                cVar1 = this_02->IsRenderThread();
                if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_compileFlags != 0 || this_thread::IsMainThread() || "
                              "RenderDevice::Instance().IsRenderThread()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "shaders/OGL/ShaderProgram_OGL.cpp",
                              159, (char*)0);
                }
            }
        }
        this_00 = &field_369;
        cVar1 = this_00->operator_cast_to_ShaderProgramLinkState();
        if (cVar1 != '\x01') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_linkState == ShaderProgramLinkState::COMPILING",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      160, (char*)0);
        }
        if (m_nativeShaderProgram != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_GLProgramObject == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      161, "Call Destroy() before calling Create() again (program %u)");
        }
        this_01 = &field_232;
        this_01->SSOBeginPtr(in_RSI);
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 != '\0') {
            (&m_vertexShaderSource, (type*)in_RSI)->SSOBeginPtr();
            cVar1 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar1 != '\0') {
                (&m_vertexShaderSource, (type*)in_RSI)->SSOBeginPtr();
                cVar1 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                if (cVar1 != '\0') {
                LAB_100bef179:
                    /* WARNING: Subroutine does not return */
                    LogAssert(
                        "!m_ComputeShaderSource.GetSource().empty() || !m_VertexShaderSource.GetSource().empty() || !( "
                        "m_VertexShaderSource.GetSource().empty() || m_PixelShaderSource.GetSource().empty() )",
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                        "ShaderProgram_OGL.cpp",
                        169, (char*)0);
                }
                (&m_pixelShaderSource, (type*)in_RSI)->SSOBeginPtr();
                cVar1 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                if (cVar1 != '\0')
                    goto LAB_100bef179;
            }
        }
        puVar9 = &m_vertexShaderSource;
        pvVar4 = puVar9->SSOBeginPtr(in_RSI);
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            uVar5 = pvVar4->Instance();
            pcVar6 = (char*)puVar9->capacity();
            puVar9->SSOBeginPtr(in_RSI);
            uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            in_RSI = &local_40;
            in_RSI->RegisterFromSourceString(uVar5, pcVar6, uVar2);
            shared_ptr<VertexShader>::operator=((shared_ptr<VertexShader>*)field_160, in_RSI);
            local_40.~shared_ptr();
            pSVar7 = (Shader*)shared_ptr<VertexShader>::operator->((shared_ptr<VertexShader>*)field_160);
            cVar1 = pSVar7->IsReady();
            if (cVar1 != '\0')
                goto LAB_100bef239;
            uVar8 = logger::default_logger();
            pcVar6 = "Failed to compile vertex shader!";
            uVar11 = 176;
        } else {
        LAB_100bef239:
            puVar9 = &m_pixelShaderSource;
            pvVar4 = puVar9->SSOBeginPtr(in_RSI);
            cVar1 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar1 == '\0') {
                uVar5 = pvVar4->Instance();
                pcVar6 = (char*)puVar9->capacity();
                puVar9->SSOBeginPtr(in_RSI);
                uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                in_RSI = &local_40;
                in_RSI->RegisterFromSourceString(uVar5, pcVar6, uVar2);
                puVar9 = field_216;
                shared_ptr<PixelShader>::operator=((shared_ptr<PixelShader>*)puVar9, in_RSI);
                local_40.~shared_ptr();
                pSVar7 = (Shader*)shared_ptr<PixelShader>::operator->((shared_ptr<PixelShader>*)puVar9);
                cVar1 = pSVar7->IsReady();
                if (cVar1 == '\0') {
                    uVar8 = logger::default_logger();
                    pcVar6 = "Failed to compile pixel shader!";
                    uVar11 = 186;
                    goto LAB_100bef437;
                }
            }
            pvVar4 = this_01->SSOBeginPtr(in_RSI);
            cVar1 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar1 == '\0') {
                uVar5 = pvVar4->Instance();
                pcVar6 = (char*)this_01->capacity();
                this_01->SSOBeginPtr(in_RSI);
                uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_40.RegisterFromSourceString(uVar5, pcVar6, uVar2);
                puVar9 = field_272;
                shared_ptr<ComputeShader>::operator=((shared_ptr<ComputeShader>*)puVar9, &local_40);
                local_40.~shared_ptr();
                pSVar7 = (Shader*)shared_ptr<ComputeShader>::operator->((shared_ptr<ComputeShader>*)puVar9);
                cVar1 = pSVar7->IsReady();
                if (cVar1 == '\0') {
                    uVar8 = logger::default_logger();
                    pcVar6 = "Failed to compile compute shader!";
                    uVar11 = 196;
                    goto LAB_100bef437;
                }
            }
            uVar3 = (*___glewCreateProgram)();
            m_nativeShaderProgram = uVar3;
            if (uVar3 != 0) {
                uVar10 = (undefined7)((ulong)puVar9 >> 8);
                if ((~m_compileFlags & 3) == 0) {
                    LinkShaderAsync(this);
                    uVar5 = CONCAT71(uVar10, 1);
                } else {
                    LinkShader(this);
                    PostLinkShader(this);
                    cVar1 = this_00->operator_cast_to_ShaderProgramLinkState();
                    uVar5 = CONCAT71(uVar10, cVar1 == '\x06');
                }
                goto LAB_100bef44b;
            }
            uVar8 = logger::default_logger();
            pcVar6 = "Failed to create program object!";
            uVar11 = 206;
        }
    LAB_100bef437:
        uVar5 = 0;
        logger::Logger::Log(uVar8, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                            "OGL/ShaderProgram_OGL.cpp",
                            uVar11, pcVar6);
        std::atomic<ShaderProgramLinkState>::operator=((atomic<ShaderProgramLinkState>*)this_00, 5);
    LAB_100bef44b:
        return uVar5 & 4294967295;
    }

    // 0x100befa00, 96 bytes, placed by class name and neighbouring functions
    // ShaderProgram::LinkShaderAsync()
    void ShaderProgram::LinkShaderAsync() {
        MapArea* this_00;
        long lVar1;
        char cVar2;

        LinkShader(this);
        this_00 = (MapArea*)((ShaderProgram*)this)->Instance();
        lVar1 = this_00->GetOrigin();
        if ((*(char*)(lVar1 + 335) == '\0') || (cVar2 = IsReadyGL(this), cVar2 != '\0')) {
            PostLinkShader(this);
            return;
        }
        std::atomic<ShaderProgramLinkState>::operator=((atomic<ShaderProgramLinkState>*)&field_369, 3);
    }

    // 0x100befa60, 848 bytes, placed by __FILE__ string
    // ShaderProgram::LinkShader()
    void ShaderProgram::LinkShader() {
        undefined1* puVar1;
        code* pcVar2;
        char cVar3;
        bool bVar4;
        int iVar5;
        undefined4 uVar6;
        uint uVar7;
        MapArea* pMVar8;
        long lVar9;
        TextRun* pTVar10;
        ShaderProgram* this_00;
        Array<VertexElementDesc, eastl::allocator>* this_01;
        VertexElementDesc* pVVar11;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        Singleton<RenderDevice>* this_03;
        char* pcVar12;
        undefined4 local_34;
        AutoSingleton<ShaderThreadPoolSingleton> local_30[8];

        local_30->~AutoSingleton("%s %u (Flags=%u)", "LinkShader", m_nativeShaderProgram, m_compileFlags);
        this_03 = (Singleton<RenderDevice>*)&field_369;
        cVar3 = std::__atomic_base<ShaderProgramLinkState, false>::exchange();
        if (cVar3 != '\x01') {
            /* WARNING: Subroutine does not return */
            LogAssert("prevLinkState == ShaderProgramLinkState::COMPILING",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      231, (char*)0);
        }
        pMVar8 = (MapArea*)this_03->Instance();
        lVar9 = pMVar8->GetOrigin();
        if (*(char*)(lVar9 + 223) != '\0') {
            (*___glewProgramParameteri)(m_nativeShaderProgram, 33367, 1);
            CheckGlErrorInternal("glProgramParameteri",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 236);
        }
        puVar1 = field_160;
        bVar4 = operator!=((shared_ptr*)puVar1, (_func_decltype_nullptr*)0);
        if (bVar4) {
            pTVar10 = (TextRun*)shared_ptr<VertexShader>::operator->((shared_ptr<VertexShader>*)puVar1);
            iVar5 = pTVar10->GetWrapMode();
            pcVar2 = ___glewAttachShader;
            if (iVar5 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_VertexShader->GetNativeShader()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "OGL/ShaderProgram_OGL.cpp",
                          242, (char*)0);
            }
            uVar7 = m_nativeShaderProgram;
            pTVar10 = (TextRun*)shared_ptr<VertexShader>::operator->((shared_ptr<VertexShader>*)puVar1);
            uVar6 = pTVar10->GetWrapMode();
            (*pcVar2)(uVar7, uVar6);
            CheckGlErrorInternal("glAttachShader",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 243);
        }
        puVar1 = field_216;
        bVar4 = operator!=((shared_ptr*)puVar1, (_func_decltype_nullptr*)0);
        if (bVar4) {
            pTVar10 = (TextRun*)shared_ptr<PixelShader>::operator->((shared_ptr<PixelShader>*)puVar1);
            iVar5 = pTVar10->GetWrapMode();
            pcVar2 = ___glewAttachShader;
            if (iVar5 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_PixelShader->GetNativeShader()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "OGL/ShaderProgram_OGL.cpp",
                          247, (char*)0);
            }
            uVar7 = m_nativeShaderProgram;
            pTVar10 = (TextRun*)shared_ptr<PixelShader>::operator->((shared_ptr<PixelShader>*)puVar1);
            uVar6 = pTVar10->GetWrapMode();
            (*pcVar2)(uVar7, uVar6);
            CheckGlErrorInternal("glAttachShader",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 248);
        }
        puVar1 = field_272;
        bVar4 = operator!=((shared_ptr*)puVar1, (_func_decltype_nullptr*)0);
        if (bVar4) {
            pTVar10 = (TextRun*)shared_ptr<ComputeShader>::operator->((shared_ptr<ComputeShader>*)puVar1);
            iVar5 = pTVar10->GetWrapMode();
            pcVar2 = ___glewAttachShader;
            if (iVar5 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_ComputeShader->GetNativeShader()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "OGL/ShaderProgram_OGL.cpp",
                          252, (char*)0);
            }
            uVar7 = m_nativeShaderProgram;
            pTVar10 = (TextRun*)shared_ptr<ComputeShader>::operator->((shared_ptr<ComputeShader>*)puVar1);
            uVar6 = pTVar10->GetWrapMode();
            (*pcVar2)(uVar7, uVar6);
            CheckGlErrorInternal("glAttachShader",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 253);
        }
        puVar1 = &field_24;
        this_00 = (ShaderProgram*)puVar1->second();
        cVar3 = this_00->empty();
        if (cVar3 == '\0') {
            this_01 = (Array<VertexElementDesc, eastl::allocator>*)puVar1->second();
            pVVar11 = (VertexElementDesc*)Array<VertexElementDesc, eastl::allocator>::operator[](this_01, 0);
            this_02 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)puVar1->second();
            uVar7 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_02);
            this_00 = this;
            BindVertexElementAttribs(this, pVVar11, uVar7);
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
            pcVar12 = "glGetProgramiv";
            iVar5 = 312;
        } else {
            (*___glewLinkProgram)(m_nativeShaderProgram);
            pcVar12 = "glLinkProgram";
            iVar5 = 279;
        }
        CheckGlErrorInternal(pcVar12,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                             "OGL/ShaderProgram_OGL.cpp",
                             iVar5);
    }

    // 0x100befdb0, 240 bytes, placed by class name and neighbouring functions
    // ShaderProgram::PostLinkShader()
    void ShaderProgram::PostLinkShader() {
        char cVar1;
        char* pcVar2;
        char* pcVar3;
        char* pcVar4;
        MapArea* this_00;
        long lVar5;
        type* in_RSI;
        undefined8 uVar6;

        (&m_vertexShaderSource, in_RSI)->SSOBeginPtr();
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        (&m_pixelShaderSource, in_RSI)->SSOBeginPtr();
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        (&field_232, in_RSI)->SSOBeginPtr();
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        cVar1 = CreateShaderInternal(this, pcVar2, pcVar3, pcVar4);
        uVar6 = 5;
        if (cVar1 != '\0') {
            this_00 = (MapArea*)((ShaderProgram*)this)->Instance();
            lVar5 = this_00->GetOrigin();
            if (*(char*)(lVar5 + 223) != '\0') {
                RetrieveShaderBinary(this);
            }
            if (cVar1 != '\0') {
                (&field_1848)->Create();
                (&m_vertexShaderSource)->ClearSourceString();
                (&m_pixelShaderSource)->ClearSourceString();
                (&field_232)->ClearSourceString();
                uVar6 = 6;
            }
        }
        std::atomic<ShaderProgramLinkState>::operator=((atomic<ShaderProgramLinkState>*)&field_369, uVar6);
    }

    // 0x100befeb0, 176 bytes, placed by __FILE__ string
    // ShaderProgram::BindVertexElementAttribs(VertexElementDesc const*, unsigned int)
    void ShaderProgram::BindVertexElementAttribs(VertexElementDesc* param_1, uint param_2) {
        ulong uVar1;
        char** ppcVar2;

        if (m_nativeShaderProgram == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_GLProgramObject",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      1258, (char*)0);
        }
        if (param_2 != 0) {
            ppcVar2 = &param_1->field_8;
            uVar1 = 0;
            do {
                (*___glewBindAttribLocation)(m_nativeShaderProgram, uVar1 & 4294967295, *ppcVar2);
                CheckGlErrorInternal("glBindAttribLocation",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     1262);
                uVar1 = uVar1 + 1;
                ppcVar2 = ppcVar2 + 5;
            } while (param_2 != uVar1);
        }
    }

    // 0x100beff60, 432 bytes, placed by __FILE__ string
    // ShaderProgram::RetrieveShaderBinary()
    void ShaderProgram::RetrieveShaderBinary() {
        undefined1* this_00;
        uint uVar1;
        code* pcVar2;
        undefined4 uVar3;
        MapArea* this_01;
        long lVar4;
        long lVar5;
        undefined8 uVar6;
        ulong uVar7;
        char* pcVar8;
        AutoSingleton<ShaderThreadPoolSingleton>* this_02;
        AutoSingleton<ShaderThreadPoolSingleton> local_38[4];
        int local_34;

        this_02 = local_38;
        this_02->~AutoSingleton("%s %u (Flags=%u)", "RetrieveShaderBinary", m_nativeShaderProgram, m_compileFlags);
        this_01 = (MapArea*)this_02->Instance();
        lVar4 = this_01->GetOrigin();
        if (*(char*)(lVar4 + 223) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().GetDeviceCaps().m_ShaderBinary",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      332, (char*)0);
        }
        if (m_nativeShaderProgram == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_GLProgramObject",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      333, (char*)0);
        }
        local_34 = -1;
        (*___glewGetProgramiv)(m_nativeShaderProgram, 34625, &local_34);
        pcVar8 = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                 "ShaderProgram_OGL.cpp";
        CheckGlErrorInternal("glGetProgramiv",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                             "OGL/ShaderProgram_OGL.cpp",
                             335);
        uVar7 = (ulong)local_34;
        if (0 < (long)uVar7) {
            (&m_pixelShaderSource, (type*)pcVar8)->SSOBeginPtr();
            lVar4 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            (&m_vertexShaderSource, (type*)pcVar8)->SSOBeginPtr();
            lVar5 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (uVar7 < (ulong)(lVar5 + lVar4)) {
                this_00 = &field_288;
                eastl::vector<unsigned char, eastl::allocator>::resize((ulong)this_00);
                pcVar2 = ___glewGetProgramBinary;
                uVar1 = m_nativeShaderProgram;
                uVar3 = this_00->capacity();
                uVar6 = eastl::vector<unsigned char, eastl::allocator>::operator[](
                    (vector<unsigned char, eastl::allocator>*)this_00, 0);
                (*pcVar2)(uVar1, uVar3, &local_34, &field_1836, uVar6);
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

    // 0x100bf02d0, 2592 bytes, placed by __FILE__ string
    // ShaderProgram::CreateShaderInternal(char const*, char const*, char const*)
    bool ShaderProgram::CreateShaderInternal(char* param_1, char* param_2, char* param_3) {
        bool bVar1;
        bool bVar2;
        ShaderProgram* pSVar3;
        bool bVar4;
        int iVar5;
        int iVar6;
        uint uVar7;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar8;
        Array<VertexElementDesc, eastl::allocator>* this_00;
        long lVar9;
        istream* piVar10;
        ostream* poVar11;
        float* pfVar12;
        undefined8 uVar13;
        undefined8 uVar14;
        uint extraout_EDX;
        uint extraout_EDX_00;
        uint extraout_EDX_01;
        ulong uVar15;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_01;
        bool bVar16;
        undefined8 in_stack_fffffffffffffad8;
        undefined8* puVar17;
        undefined4 uVar19;
        undefined8 uVar18;
        int local_510[70];
        uint local_3f8[70];
        GLVertexElementFormat local_2e0;
        ostream local_2d0[264];
        string local_1c8[24];
        int* local_1b0;
        float* local_1a8;
        int local_1a0;
        int local_19c;
        string local_198[24];
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* local_180;
        char* local_178;
        int local_16c;
        AutoSingleton<ShaderThreadPoolSingleton> local_168[8];
        ShaderProgram* local_160;
        undefined8 local_158;
        undefined8 uStack_150;
        undefined8 local_148;
        undefined8 uStack_140;
        undefined8 local_138;
        undefined8 uStack_130;
        undefined8 local_128;
        undefined8 uStack_120;
        undefined8 local_118;
        undefined8 uStack_110;
        undefined8 local_108;
        undefined8 uStack_100;
        undefined8 local_f8;
        undefined8 uStack_f0;
        undefined8 local_e8;
        undefined8 uStack_e0;
        undefined8 local_d8;
        undefined8 uStack_d0;
        undefined8 local_c8;
        undefined8 uStack_c0;
        undefined8 local_b8;
        undefined8 uStack_b0;
        undefined8 local_a8;
        undefined8 uStack_a0;
        undefined8 local_98;
        undefined8 uStack_90;
        undefined8 local_88;
        undefined8 uStack_80;
        undefined8 uStack_78;
        undefined7 uStack_70;
        undefined1 local_69;
        undefined7 uStack_68;
        undefined8 uStack_61;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_168->~AutoSingleton("%s %u (Flags=%u)", "CreateShaderInternal", m_nativeShaderProgram, m_compileFlags);
        (*___glewGetProgramiv)(m_nativeShaderProgram, 35714, &local_1a0);
        CheckGlErrorInternal("glGetProgramiv",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                             "OGL/ShaderProgram_OGL.cpp",
                             406);
        local_19c = local_1a0;
        local_160 = this;
        if (local_1a0 == 0) {
            local_180 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                             eastl::allocator, 0>*)param_2;
            local_178 = param_3;
            std::string::string(local_1c8);
            std::string::string<decltype(nullptr)>((string*)&local_2e0, param_1);
            new (&local_158) std::stringstream((string*)&local_2e0, extraout_EDX);
            local_2e0.~string();
            new (&local_2e0) std::stringstream();
            std::operator<<(local_2d0, "\n-----VS-----\n\n");
            iVar6 = 1;
            while (true) {
                piVar10 =
                    std::getline<char, std::char_traits<char>, std::allocator<char>>((istream*)&local_158, local_1c8);
                bVar4 = ((piVar10 + *(long*)(*(long*)piVar10 + -24)))->operator_cast_to_bool();
                if (!bVar4)
                    break;
                poVar11 = std::operator<<(local_2d0, "Line ");
                poVar11 = (ostream*)std::ostream::operator<<(poVar11, iVar6);
                poVar11 = std::operator<<(poVar11, ": ");
                poVar11 = std::operator<<(poVar11, local_1c8);
                iVar6 = iVar6 + 1;
                std::operator<<(poVar11, "\n");
            }
            std::string::string<decltype(nullptr)>((string*)local_3f8, (char*)local_180);
            new (local_510) std::stringstream(local_3f8, extraout_EDX_00);
            local_3f8->~string();
            std::operator<<(local_2d0, "\n\n-----FS-----\n\n");
            iVar6 = 1;
            while (true) {
                piVar10 =
                    std::getline<char, std::char_traits<char>, std::allocator<char>>((istream*)local_510, local_1c8);
                bVar4 = ((piVar10 + *(long*)(*(long*)piVar10 + -24)))->operator_cast_to_bool();
                if (!bVar4)
                    break;
                poVar11 = std::operator<<(local_2d0, "Line ");
                poVar11 = (ostream*)std::ostream::operator<<(poVar11, iVar6);
                poVar11 = std::operator<<(poVar11, ": ");
                poVar11 = std::operator<<(poVar11, local_1c8);
                iVar6 = iVar6 + 1;
                std::operator<<(poVar11, "\n");
            }
            std::string::string<decltype(nullptr)>(local_198, local_178);
            new (local_3f8) std::stringstream(local_198, extraout_EDX_01);
            std::string::~string(local_198);
            std::operator<<(local_2d0, "\n\n-----CS-----\n\n");
            iVar6 = 1;
            while (true) {
                piVar10 =
                    std::getline<char, std::char_traits<char>, std::allocator<char>>((istream*)local_3f8, local_1c8);
                bVar4 = ((piVar10 + *(long*)(*(long*)piVar10 + -24)))->operator_cast_to_bool();
                uVar19 = (undefined4)((ulong)in_stack_fffffffffffffad8 >> 32);
                if (!bVar4)
                    break;
                poVar11 = std::operator<<(local_2d0, "Line ");
                poVar11 = (ostream*)std::ostream::operator<<(poVar11, iVar6);
                poVar11 = std::operator<<(poVar11, ": ");
                poVar11 = std::operator<<(poVar11, local_1c8);
                iVar6 = iVar6 + 1;
                std::operator<<(poVar11, "\n");
            }
            local_16c = 0;
            (*___glewGetProgramiv)(local_160->m_nativeShaderProgram, 35716, &local_16c);
            CheckGlErrorInternal("glGetProgramiv",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 462);
            iVar6 = local_16c;
            if ((long)local_16c < 2) {
                uVar13 = logger::default_logger();
                uVar7 = local_160->m_nativeShaderProgram;
                local_198->str();
                pfVar12 = (float*)std::string::c_str(local_198);
                uVar14 = CONCAT44(uVar19, uVar7);
                logger::Logger::Log(uVar13, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "shaders/OGL/ShaderProgram_OGL.cpp",
                                    474, "Error linking shader program %u (no info log):\n%s\n", uVar14, pfVar12);
                uVar19 = (undefined4)((ulong)uVar14 >> 32);
                std::string::~string(local_198);
            } else {
                uVar15 = (long)local_16c + 1;
                pfVar12 = operator_new__(uVar15);
                local_1a8 = pfVar12;
                ___bzero(pfVar12, uVar15);
                (*___glewGetProgramInfoLog)(local_160->m_nativeShaderProgram, iVar6, 0, pfVar12);
                CheckGlErrorInternal("glGetProgramInfoLog",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     468);
                uVar13 = logger::default_logger();
                pfVar12 = local_1a8;
                uVar7 = local_160->m_nativeShaderProgram;
                local_198->str();
                uVar14 = std::string::c_str(local_198);
                uVar18 = CONCAT44(uVar19, uVar7);
                logger::Logger::Log(uVar13, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "shaders/OGL/ShaderProgram_OGL.cpp",
                                    469, "Error linking shader program %u:\n%s\n\n%s\n", uVar18, pfVar12, uVar14);
                uVar19 = (undefined4)((ulong)uVar18 >> 32);
                std::string::~string(local_198);
                safe_delete_array<float>(&local_1a8);
            }
            uVar13 = logger::default_logger();
            logger::Logger::Log(uVar13, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "shaders/OGL/ShaderProgram_OGL.cpp",
                                477, "Error linking shader program %u!",
                                CONCAT44(uVar19, local_160->m_nativeShaderProgram), pfVar12);
            if ((~local_160->m_compileFlags & 3) != 0) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "shaders/OGL/ShaderProgram_OGL.cpp",
                                481, (char*)0);
            }
            Destroy(local_160);
            local_3f8->~stringstream();
            local_510->~stringstream();
            local_2e0.~stringstream();
            local_158.~stringstream();
            std::string::~string(local_1c8);
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
                this_01 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>*)&local_160->field_24;
                iVar6 = 0;
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
                    puVar17 = &local_158;
                    (*___glewGetActiveAttrib)(local_160->m_nativeShaderProgram, iVar6, 255, 0, local_510, local_3f8,
                                              puVar17);
                    CheckGlErrorInternal("glGetActiveAttrib",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/shaders/OGL/ShaderProgram_OGL.cpp",
                                         501);
                    bVar4 = local_158._2_1_ == '_';
                    bVar1 = local_158._1_1_ == 'l';
                    bVar2 = local_158._0_1_ == (stringstream)103;
                    bVar16 = bVar4 && (bVar1 && bVar2);
                    pvVar8 =
                        (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)eastl::compressed_pair_imp<
                            std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>::second(this_01);
                    iVar5 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar8);
                    local_178 = (char*)CONCAT44(local_178._4_4_, iVar6);
                    if ((0 < iVar5) && (!bVar4 || (!bVar1 || !bVar2))) {
                        uVar15 = 0;
                        while (true) {
                            this_00 = (Array<VertexElementDesc, eastl::allocator>*)eastl::compressed_pair_imp<
                                std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                eastl::allocator, 0>::second(this_01);
                            lVar9 = Array<VertexElementDesc, eastl::allocator>::operator[](this_00, uVar15);
                            iVar6 = _strcmp(*(char**)(lVar9 + 8), (char*)&local_158);
                            if (iVar6 == 0) {
                                new (&local_2e0) GLVertexElementFormat(*(undefined4*)(lVar9 + 16));
                                if (local_510[0] != 1) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("attribSize == 1",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "hal/render/shaders/OGL/ShaderProgram_OGL.cpp",
                                              518, (char*)0);
                                }
                                if (local_3f8[0] != local_2e0.field_0._8_4_) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("attribType == vertexFormat.m_ShaderType",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "hal/render/shaders/OGL/ShaderProgram_OGL.cpp",
                                              519, "Type mismatch on vertex attribute \'%s\' (%i != %i)",
                                              *(undefined8*)(lVar9 + 8), (ulong)local_3f8[0],
                                              CONCAT44((int)((ulong)puVar17 >> 32), local_2e0.field_0._8_4_));
                                }
                                uVar7 = (*___glewGetAttribLocation)(local_160->m_nativeShaderProgram,
                                                                    *(undefined8*)(lVar9 + 8));
                                CheckGlErrorInternal("glGetAttribLocation",
                                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                     "libs/hal/render/shaders/OGL/ShaderProgram_OGL.cpp",
                                                     520);
                                if (uVar15 != uVar7) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("attribLocation == j",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "hal/render/shaders/OGL/ShaderProgram_OGL.cpp",
                                              521, "Vertex attribute \'%s\' at wrong index (C++: %i, Shader: %i)",
                                              *(undefined8*)(lVar9 + 8), uVar15 & 4294967295,
                                              CONCAT44((int)((ulong)puVar17 >> 32), uVar7));
                                }
                                bVar16 = true;
                                this_01 = local_180;
                            }
                            if (iVar6 == 0)
                                break;
                            uVar15 = uVar15 + 1;
                            pvVar8 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                eastl::compressed_pair_imp<
                                    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                    eastl::allocator, 0>::second(this_01);
                            iVar6 =
                                eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar8);
                            if (((long)iVar6 <= (long)uVar15) || (bVar16))
                                break;
                        }
                    }
                    if (!bVar16) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("existsInVertexDecl",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "shaders/OGL/ShaderProgram_OGL.cpp",
                                  526,
                                  "Vertex attribute \'%s\' (%i) present and active in shader but not found in C++-side "
                                  "vertex declaration, this will result in undefined behaviour!",
                                  &local_158, (ulong)local_178 & 4294967295);
                    }
                    iVar6 = (int)local_178 + 1;
                } while (iVar6 < *local_1b0);
            }
            pSVar3 = local_160;
            (&local_160->field_376, local_160)->Initialise();
            (&pSVar3->field_496)->clear();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return local_19c != 0;
    }

    // 0x100bf0e60, 464 bytes, placed by __FILE__ string
    // ShaderProgram::ReleaseNativeResources()
    void ShaderProgram::ReleaseNativeResources() {
        char cVar1;
        long lVar2;
        ShaderManager<PixelShader>* this_00;
        ulong uVar3;
        ShaderManager<VertexShader>* this_01;
        MapArea* this_02;
        char* this_03;

        WaitForAsyncCompile(this);
        this_00 = (ShaderManager<PixelShader>*)&field_12;
        this_00->MarkAsDead();
        lVar2 = Singleton<ShaderManager<ComputeShader>>::InstancePtr();
        if (lVar2 != 0) {
            this_00 = (ShaderManager<PixelShader>*)this_00->Instance();
            uVar3 = (&field_232)->capacity();
            this_00->Unregister(uVar3, field_272);
        }
        lVar2 = Singleton<ShaderManager<PixelShader>>::InstancePtr();
        if (lVar2 != 0) {
            this_00 = (ShaderManager<PixelShader>*)this_00->Instance();
            uVar3 = (&m_pixelShaderSource)->capacity();
            this_00->Unregister(uVar3, field_216);
        }
        lVar2 = Singleton<ShaderManager<VertexShader>>::InstancePtr();
        if (lVar2 != 0) {
            this_01 = (ShaderManager<VertexShader>*)this_00->Instance();
            uVar3 = (&m_vertexShaderSource)->capacity();
            this_01->Unregister(uVar3, field_160);
        }
        lVar2 = field_216->end();
        if (lVar2 == 0) {
            lVar2 = field_160->end();
            if (lVar2 == 0) {
                lVar2 = field_272->end();
                if (lVar2 == 0) {
                    this_03 = (char*)(ulong)m_nativeShaderProgram;
                    if (m_nativeShaderProgram != 0) {
                        cVar1 = (*___glewIsProgram)();
                        this_03 = "glIsProgram";
                        CheckGlErrorInternal("glIsProgram",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/shaders/OGL/ShaderProgram_OGL.cpp",
                                             611);
                        if (cVar1 != '\0') {
                            (*___glewDeleteProgram)(m_nativeShaderProgram);
                            this_03 = "glDeleteProgram";
                            CheckGlErrorInternal("glDeleteProgram",
                                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                 "libs/hal/render/shaders/OGL/ShaderProgram_OGL.cpp",
                                                 614);
                        }
                        m_nativeShaderProgram = 0;
                    }
                    lVar2 = Singleton<RenderDevice>::InstancePtr();
                    if (lVar2 != 0) {
                        this_02 = (MapArea*)this_03->Instance();
                        lVar2 = this_02->GetOrigin();
                        if (*(char*)(lVar2 + 187) != '\0') {
                            cVar1 = (&field_1848)->IsCreated();
                            if (cVar1 != '\0') {
                                /* WARNING: Subroutine does not return */
                                LogAssert("!RenderDevice::InstancePtr() || "
                                          "!RenderDevice::Instance().GetDeviceCaps().m_SyncFenceObjectsSync || "
                                          "!m_syncFence.IsCreated()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                          "render/shaders/OGL/ShaderProgram_OGL.cpp",
                                          619, (char*)0);
                            }
                        }
                    }
                    std::atomic<ShaderProgramLinkState>::operator=((atomic<ShaderProgramLinkState>*)&field_369, 0);
                    return;
                }
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert(
            "m_PixelShader.get() == nullptr && m_VertexShader.get() == nullptr && m_ComputeShader.get() == nullptr",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
            "ShaderProgram_OGL.cpp",
            607, (char*)0);
    }

    // 0x100bf10f0, 160 bytes, placed by __FILE__ string
    // ShaderProgram::BindConstBufferSlot(unsigned int, HashedString const&, unsigned int) const
    void ShaderProgram::BindConstBufferSlot(uint param_1, HashedString* param_2, uint param_3) {
        int iVar1;

        iVar1 = GetConstBlockIndex(this, param_2);
        if (iVar1 != -1) {
            (*___glewUniformBlockBinding)(m_nativeShaderProgram, iVar1, param_1);
            CheckGlErrorInternal("glUniformBlockBinding",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 631);
        }
        if (GetConstBlockSize(this, param_2) != param_3) {
            iVar1 = GetConstBlockSize(this, param_2);
            if (iVar1 != -1) {
                /* WARNING: Subroutine does not return */
                LogAssert("GetConstBlockSize(constBlockName) == (int)constBufferSizeBytes || "
                          "GetConstBlockSize(constBlockName) == -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "OGL/ShaderProgram_OGL.cpp",
                          637, (char*)0);
            }
        }
    }

    // 0x100bf1190, 448 bytes, placed by __FILE__ string
    // ShaderProgram::GetConstBlockIndex(HashedString const&) const
    undefined4 ShaderProgram::GetConstBlockIndex(HashedString* param_1) {
        uint uVar1;
        code* pcVar2;
        char cVar3;
        undefined4 uVar5;
        long lVar6;
        undefined8 uVar7;
        undefined4* puVar8;
        hashtable_iterator_base* extraout_RDX;
        eastl local_60[16];
        unique_lock<std::mutex> local_50[16];
        ulong local_40[2];

        lVar6 = param_1->HeapBeginPtr();
        if (lVar6 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("constBlockName.GetString() != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      1190, (char*)0);
        }
        if (((m_compileFlags & 4) == 0) && (cVar3 = this_thread::IsMainThread(), cVar3 == '\0')) {
            /* WARNING: Subroutine does not return */
            LogAssert("(m_compileFlags & SHADER_THREAD_SAFE_CACHE) || this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      1191, (char*)0);
        }
        if ((m_compileFlags & 4) == 0) {
            std::unique_lock<std::mutex>::unique_lock(local_50);
        } else {
            std::unique_lock<std::mutex>::unique_lock(local_50, (mutex*)&field_1768);
        }
        local_40[0] = param_1->end();
        eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                         eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((longlong*)local_60);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_60, (hashtable_iterator_base*)local_40, extraout_RDX)) {
            lVar6 = local_60->HeapBeginPtr();
            uVar5 = *(undefined4*)(lVar6 + 8);
        } else {
            WaitForAsyncCompile(this);
            pcVar2 = ___glewGetUniformBlockIndex;
            if (m_nativeShaderProgram == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_GLProgramObject",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "OGL/ShaderProgram_OGL.cpp",
                          1205, (char*)0);
            }
            uVar1 = m_nativeShaderProgram;
            uVar7 = param_1->HeapBeginPtr();
            uVar5 = (*pcVar2)(uVar1, uVar7);
            CheckGlErrorInternal("glGetUniformBlockIndex",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 1207);
            local_40[0] = param_1->end();
            puVar8 = (undefined4*)eastl::hash_map<
                unsigned long, int, eastl::hash<unsigned long>, eastl::equal_to<unsigned long>,
                eastl::fixed_hashtable_allocator<34ul, 24ul, 32ul, 8ul, 0ul, true, eastl::allocator>, false>::
            operator[]((hash_map<unsigned long, int, eastl::hash<unsigned long>, eastl::equal_to<unsigned long>,
                                 eastl::fixed_hashtable_allocator<34ul, 24ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                                 false>*)&field_552,
                       local_40);
            *puVar8 = uVar5;
        }
        std::unique_lock<std::mutex>::~unique_lock(local_50);
        return uVar5;
    }

    // 0x100bf1350, 96 bytes, placed by __FILE__ string
    // ShaderProgram::GetConstBlockSize(HashedString const&) const
    undefined4 ShaderProgram::GetConstBlockSize(HashedString* param_1) {
        int iVar1;
        undefined4 local_14;

        iVar1 = GetConstBlockIndex(this, param_1);
        local_14 = 4294967295;
        if (iVar1 != -1) {
            (*___glewGetActiveUniformBlockiv)(m_nativeShaderProgram, iVar1, 35392, &local_14);
            CheckGlErrorInternal("glGetActiveUniformBlockiv",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 1222);
        }
        return local_14;
    }

    // 0x100bf1c80, 272 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstSampler(int, int) const
    void ShaderProgram::SetShaderConstSampler(int param_1, int param_2) {
        RenderDevice* this_00;
        long lVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_68[16];
        pair<int, int> local_58[8];
        eastl local_50[16];
        undefined8 local_40;
        undefined8 local_38;
        int local_30;
        int local_2c;

        local_30 = param_2;
        local_2c = param_1;
        this_00 = (RenderDevice*)Instance();
        if (this_00->IsRenderThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      1077, (char*)0);
        }
        if (-1 < local_2c) {
            eastl::hashtable<int, eastl::pair<int const, int>, BucketAllocatorEASTL,
                             eastl::use_first<eastl::pair<int const, int>>, eastl::equal_to<int>, eastl::hash<int>,
                             eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
                             true, true>::find((int*)local_50);
            eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            if ((!eastl::operator==(local_50, local_68, extraout_RDX)) &&
                (lVar3 = local_50->HeapBeginPtr(), *(int*)(lVar3 + 4) == local_30)) {
                return;
            }
            new (&local_40)
                eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(local_50);
            eastl::pair<int, int>::pair<int, int&, void>(local_58, &local_2c, &local_30);
            eastl::hashtable<int, eastl::pair<int const, int>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, int>>, eastl::equal_to<int>, eastl::hash<int>,
                             eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
                             true, true>::insert(local_68, &field_496, local_40, local_38, local_58);
            SetProgramActive(this);
            (*___glewUniform1i)(local_2c, local_30);
            CheckGlErrorInternal("glUniform1i",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderProgram_OGL.cpp",
                                 1088);
        }
    }

    // 0x100bf1e20, 432 bytes, placed by __FILE__ string
    // ShaderProgram::GetUniformBindingIndex(HashedString const&) const
    undefined4 ShaderProgram::GetUniformBindingIndex(HashedString* param_1) {
        undefined1* this_00;
        undefined4 uVar1;
        char cVar2;
        int iVar3;
        long lVar4;
        long lVar5;
        undefined4* puVar6;
        unique_lock<std::mutex> local_48[16];
        ulong local_38;
        undefined4 local_2c;

        lVar4 = param_1->HeapBeginPtr();
        if (lVar4 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("constName.GetString() != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      1106, (char*)0);
        }
        if (((m_compileFlags & 4) == 0) && (cVar2 = this_thread::IsMainThread(), cVar2 == '\0')) {
            /* WARNING: Subroutine does not return */
            LogAssert("(m_compileFlags & SHADER_THREAD_SAFE_CACHE) || this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      1107, (char*)0);
        }
        if ((m_compileFlags & 4) == 0) {
            std::unique_lock<std::mutex>::unique_lock(local_48);
        } else {
            std::unique_lock<std::mutex>::unique_lock(local_48, (mutex*)&field_1768);
        }
        this_00 = &field_1728;
        local_38 = param_1->end();
        lVar4 = this_00->find(&local_38);
        lVar5 = this_00->end();
        if (lVar4 == lVar5) {
            WaitForAsyncCompile(this);
            if (m_nativeShaderProgram == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_GLProgramObject",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "OGL/ShaderProgram_OGL.cpp",
                          1121, (char*)0);
            }
            iVar3 = GetUniformLocationIndex(this, param_1);
            if (iVar3 == -1) {
                local_2c = 4294967295;
            } else {
                (*___glewGetUniformiv)(m_nativeShaderProgram, iVar3, &local_2c);
                CheckGlErrorInternal("glGetUniformiv",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     1149);
                uVar1 = local_2c;
                local_38 = param_1->end();
                puVar6 =
                    (undefined4*)eastl::vector_map<unsigned long, int, eastl::less<unsigned long>, eastl::allocator,
                                                   eastl::vector<eastl::pair<unsigned long, int>, eastl::allocator>>::
                    operator[]((vector_map<unsigned long, int, eastl::less<unsigned long>, eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned long, int>, eastl::allocator>>*)this_00,
                               &local_38);
                *puVar6 = uVar1;
            }
        } else {
            local_2c = *(undefined4*)(lVar4 + 8);
        }
        std::unique_lock<std::mutex>::~unique_lock(local_48);
        return local_2c;
    }

    // 0x100bf20d0, 96 bytes, placed by __FILE__ string
    // ShaderProgram::IsReady() const
    bool ShaderProgram::IsReady() {
        char cVar1;
        undefined8 uVar2;

        cVar1 = std::__atomic_base<ShaderProgramLinkState, false>::load(&field_369);
        if (cVar1 == '\0') {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "shaders/OGL/ShaderProgram_OGL.cpp",
                                1280, "%s called on uninitialised shader", "IsReady");
        }
        return cVar1 == '\x06';
    }

    // 0x100bf2140, 176 bytes, placed by __FILE__ string
    // ShaderProgram::PreRender()
    void ShaderProgram::PreRender() {
        char cVar1;
        Layout* this_00;
        vector* pvVar2;
        AutoSingleton<ThreadPoolSingleton>* this_01;
        undefined1 local_28[8];
        __43 local_20;

        this_01 = (AutoSingleton<ThreadPoolSingleton>*)&field_369;
        cVar1 = this_01->operator_cast_to_ShaderProgramLinkState();
        if (cVar1 == '\x03') {
            if ((~m_compileFlags & 3) != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("(m_compileFlags & SHADER_COMPILE_THREADED_ASYNC) == SHADER_COMPILE_THREADED_ASYNC",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "OGL/ShaderProgram_OGL.cpp",
                          1296, (char*)0);
            }
            cVar1 = IsReadyGL(this);
            if (cVar1 != '\0') {
                std::atomic<ShaderProgramLinkState>::operator=();
                this_00 = (Layout*)this_01->Instance();
                pvVar2 = eastl::string::Layout::SSOBeginPtr(this_00, (type*)4);
                local_20.field_0 = this;
                ThreadPool::AddTask<ShaderProgram::PreRender()::__43>((ThreadPool*)local_28, (char*)pvVar2, &local_20);
                std::future<void>::operator=((future<void>*)&field_1840, (future*)local_28);
                local_28->~future();
            }
        }
    }

    // 0x100bf21f0, 144 bytes, placed by __FILE__ string
    // ShaderProgram::IsReadyGL() const
    bool ShaderProgram::IsReadyGL() {
        uint in_EAX;
        MapArea* this_00;
        long lVar1;
        undefined8 uStack_18;

        uStack_18._0_4_ = in_EAX;
        this_00 = (MapArea*)Instance();
        lVar1 = this_00->GetOrigin();
        if (*(char*)(lVar1 + 335) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().GetDeviceCaps().m_GLParallelShaderCompile",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderProgram_OGL.cpp",
                      1347, (char*)0);
        }
        uStack_18 = (ulong)(uint)uStack_18;
        (*___glewGetProgramiv)(m_nativeShaderProgram, 37297, (long)&uStack_18 + 4);
        CheckGlErrorInternal("glGetProgramiv",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                             "OGL/ShaderProgram_OGL.cpp",
                             1349);
        return uStack_18._4_4_ != 0;
    }

    // 0x100bf2440, 160 bytes, placed by class name and neighbouring functions
    // ShaderProgram::OnEndFrame()
    void ShaderProgram::OnEndFrame() {
        RenderDevice* this_00;
        __44 local_d0;
        function local_c8;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (RenderDevice*)Instance();
        local_d0.field_0 = (long)this;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            ShaderProgram::OnEndFrame()::__44, void>(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, &local_d0);
        this_00->RunOnRenderThread(&local_c8);
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c01b00, 80 bytes, placed by class name and neighbouring functions
    // ShaderProgram::CreateFromSourceString()::$_16::operator()() const
    /* ShaderProgram::CreateFromSourceString()::$_16::TEMPNAMEPLACEHOLDERVALUE() const */

    void ShaderProgram::CreateFromSourceString()::$_16::operator()() {
        ShaderProgram* this_00;
        RenderDevice* this_01;
        RenderContext* pRVar1;
        lock_guard<RenderContext> local_18[8];

        this_00 = field_0;
        this_01 = (RenderDevice*)Instance();
        pRVar1 = (RenderContext*)this_01->GetCurrentThreadRenderContext();
        lock_guard<RenderContext>::lock_guard(local_18, pRVar1);
        CreateFromSourceStringInternal(this_00);
        local_18->~lock_guard();
    }

    // 0x100c06ae0, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const::$_20::$_20($_20&&): jumps straight to the base-object constructor

    // 0x100c06af0, 32 bytes, base-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const::$_20::$_20($_20&&)
    /* $_20($_20&&) */

    void ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int)::__20(__20* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        field_0 = *(undefined8*)param_1;
        field_8 = uVar1;
        new (&field_16, param_1 + 16) WrapArray<math::Matrix44T<float> const>();
    }

    // 0x100c06b40, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const::$_20::$_20($_20 const&): jumps straight to the base-object constructor

    // 0x100c06b50, 32 bytes, base-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const::$_20::$_20($_20 const&)
    /* $_20($_20 const&) */

    void ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int)::__20(__20* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        field_0 = *(undefined8*)param_1;
        field_8 = uVar1;
        new (&field_16, param_1 + 16) WrapArray<math::Matrix44T<float> const>();
    }

    // 0x100c06b90, 144 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const::$_20::operator()(RenderContext&) const
    /* ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned
   int) const::$_20::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_SetShaderConstFloat4Array_int_unsigned_int_float_const_ptr_unsigned_int* const ::$_20::operator()(
        RenderContext * param_1) {
        undefined4 uVar1;
        undefined4 uVar2;
        ShaderProgram* this_00;
        code* pcVar3;
        _func_SetShaderConstFloat4Array_int_unsigned_int_float_const_ptr_unsigned_int* p_Var4;
        undefined8 uVar5;

        this_00 = *(ShaderProgram**)this;
        p_Var4 = (_func_SetShaderConstFloat4Array_int_unsigned_int_float_const_ptr_unsigned_int*)param_1->IsObjectAlive(
            (RenderResource*)&this_00->field_12);
        if ((char)p_Var4 != '\0') {
            p_Var4 = (_func_SetShaderConstFloat4Array_int_unsigned_int_float_const_ptr_unsigned_int*)this_00->IsReady();
            if ((char)p_Var4 != '\0') {
                this_00->SetProgramActive(param_1);
                pcVar3 = ___glewUniform4fv;
                uVar1 = *(undefined4*)(this + 8);
                uVar2 = *(undefined4*)(this + 12);
                uVar5 = ((this + 16))->end();
                (*pcVar3)(uVar1, uVar2, uVar5);
                p_Var4 = (_func_SetShaderConstFloat4Array_int_unsigned_int_float_const_ptr_unsigned_int*)
                    CheckGlErrorInternal("__glewUniform4fv",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/shaders/OGL/ShaderProgram_OGL.cpp",
                                         788);
            }
        }
        return p_Var4;
    }

    // 0x100c06d30, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int) const::$_21::$_21($_21&&): jumps straight to the base-object constructor

    // 0x100c06d40, 32 bytes, base-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int) const::$_21::$_21($_21&&)
    /* $_21($_21&&) */

    void ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*,
                                                 unsigned int)::__21(__21* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        field_0 = *(undefined8*)param_1;
        field_8 = uVar1;
        new (&field_16, param_1 + 16) WrapArray<math::Matrix44T<float> const>();
    }

    // 0x100c06d90, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int) const::$_21::$_21($_21 const&): jumps straight to the base-object constructor

    // 0x100c06da0, 32 bytes, base-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int) const::$_21::$_21($_21 const&)
    /* $_21($_21 const&) */

    void ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*,
                                                 unsigned int)::__21(__21* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        field_0 = *(undefined8*)param_1;
        field_8 = uVar1;
        new (&field_16, param_1 + 16) WrapArray<math::Matrix44T<float> const>();
    }

    // 0x100c06de0, 144 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int) const::$_21::operator()(RenderContext&) const
    /* ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*,
   unsigned int) const::$_21::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_SetShaderConstUint4Array_int_unsigned_int_unsigned_int_const_ptr_unsigned_int* const ::$_21::operator()(
        RenderContext * param_1) {
        undefined4 uVar1;
        undefined4 uVar2;
        ShaderProgram* this_00;
        code* pcVar3;
        _func_SetShaderConstUint4Array_int_unsigned_int_unsigned_int_const_ptr_unsigned_int* p_Var4;
        undefined8 uVar5;

        this_00 = *(ShaderProgram**)this;
        p_Var4 = (_func_SetShaderConstUint4Array_int_unsigned_int_unsigned_int_const_ptr_unsigned_int*)
                     param_1->IsObjectAlive((RenderResource*)&this_00->field_12);
        if ((char)p_Var4 != '\0') {
            p_Var4 = (_func_SetShaderConstUint4Array_int_unsigned_int_unsigned_int_const_ptr_unsigned_int*)
                         this_00->IsReady();
            if ((char)p_Var4 != '\0') {
                this_00->SetProgramActive(param_1);
                pcVar3 = ___glewUniform4uiv;
                uVar1 = *(undefined4*)(this + 8);
                uVar2 = *(undefined4*)(this + 12);
                uVar5 = ((this + 16))->end();
                (*pcVar3)(uVar1, uVar2, uVar5);
                p_Var4 = (_func_SetShaderConstUint4Array_int_unsigned_int_unsigned_int_const_ptr_unsigned_int*)
                    CheckGlErrorInternal("__glewUniform4uiv",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/shaders/OGL/ShaderProgram_OGL.cpp",
                                         821);
            }
        }
        return p_Var4;
    }

    // 0x100c06ed0, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const::$_22::$_22($_22&&): jumps straight to the base-object constructor

    // 0x100c06ee0, 32 bytes, base-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const::$_22::$_22($_22&&)
    /* $_22($_22&&) */

    void ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*)::__22(__22* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        field_0 = *(undefined8*)param_1;
        field_8 = uVar1;
        new (&field_16, param_1 + 16) WrapArray<math::Matrix44T<float> const>();
    }

    // 0x100c06f30, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const::$_22::$_22($_22 const&): jumps straight to the base-object constructor

    // 0x100c06f40, 32 bytes, base-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const::$_22::$_22($_22 const&)
    /* $_22($_22 const&) */

    void ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*)::__22(__22* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        field_0 = *(undefined8*)param_1;
        field_8 = uVar1;
        new (&field_16, param_1 + 16) WrapArray<math::Matrix44T<float> const>();
    }

    // 0x100c06f80, 144 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const::$_22::operator()(RenderContext&) const
    /* ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*)
   const::$_22::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_SetShaderConstFloat3Array_int_unsigned_int_float_const_ptr* const ::$_22::operator()(
        RenderContext * param_1) {
        undefined4 uVar1;
        undefined4 uVar2;
        ShaderProgram* this_00;
        code* pcVar3;
        _func_SetShaderConstFloat3Array_int_unsigned_int_float_const_ptr* p_Var4;
        undefined8 uVar5;

        this_00 = *(ShaderProgram**)this;
        p_Var4 = (_func_SetShaderConstFloat3Array_int_unsigned_int_float_const_ptr*)param_1->IsObjectAlive(
            (RenderResource*)&this_00->field_12);
        if ((char)p_Var4 != '\0') {
            p_Var4 = (_func_SetShaderConstFloat3Array_int_unsigned_int_float_const_ptr*)this_00->IsReady();
            if ((char)p_Var4 != '\0') {
                this_00->SetProgramActive(param_1);
                pcVar3 = ___glewUniform3fv;
                uVar1 = *(undefined4*)(this + 8);
                uVar2 = *(undefined4*)(this + 12);
                uVar5 = ((this + 16))->end();
                (*pcVar3)(uVar1, uVar2, uVar5);
                p_Var4 = (_func_SetShaderConstFloat3Array_int_unsigned_int_float_const_ptr*)CheckGlErrorInternal(
                    "__glewUniform3fv",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                    "ShaderProgram_OGL.cpp",
                    831);
            }
        }
        return p_Var4;
    }

    // 0x100c07070, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const::$_23::$_23($_23&&): jumps straight to the base-object constructor

    // 0x100c07080, 32 bytes, base-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const::$_23::$_23($_23&&)
    /* $_23($_23&&) */

    void ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*)::__23(__23* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        field_0 = *(undefined8*)param_1;
        field_8 = uVar1;
        new (&field_16, param_1 + 16) WrapArray<math::Matrix44T<float> const>();
    }

    // 0x100c070d0, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const::$_23::$_23($_23 const&): jumps straight to the base-object constructor

    // 0x100c070e0, 32 bytes, base-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const::$_23::$_23($_23 const&)
    /* $_23($_23 const&) */

    void ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*)::__23(__23* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        field_0 = *(undefined8*)param_1;
        field_8 = uVar1;
        new (&field_16, param_1 + 16) WrapArray<math::Matrix44T<float> const>();
    }

    // 0x100c07120, 144 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const::$_23::operator()(RenderContext&) const
    /* ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*)
   const::$_23::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_SetShaderConstFloat2Array_int_unsigned_int_float_const_ptr* const ::$_23::operator()(
        RenderContext * param_1) {
        undefined4 uVar1;
        undefined4 uVar2;
        ShaderProgram* this_00;
        code* pcVar3;
        _func_SetShaderConstFloat2Array_int_unsigned_int_float_const_ptr* p_Var4;
        undefined8 uVar5;

        this_00 = *(ShaderProgram**)this;
        p_Var4 = (_func_SetShaderConstFloat2Array_int_unsigned_int_float_const_ptr*)param_1->IsObjectAlive(
            (RenderResource*)&this_00->field_12);
        if ((char)p_Var4 != '\0') {
            p_Var4 = (_func_SetShaderConstFloat2Array_int_unsigned_int_float_const_ptr*)this_00->IsReady();
            if ((char)p_Var4 != '\0') {
                this_00->SetProgramActive(param_1);
                pcVar3 = ___glewUniform2fv;
                uVar1 = *(undefined4*)(this + 8);
                uVar2 = *(undefined4*)(this + 12);
                uVar5 = ((this + 16))->end();
                (*pcVar3)(uVar1, uVar2, uVar5);
                p_Var4 = (_func_SetShaderConstFloat2Array_int_unsigned_int_float_const_ptr*)CheckGlErrorInternal(
                    "__glewUniform2fv",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                    "ShaderProgram_OGL.cpp",
                    840);
            }
        }
        return p_Var4;
    }

    // 0x100c07210, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const::$_24::$_24($_24&&): jumps straight to the base-object constructor

    // 0x100c07220, 32 bytes, base-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const::$_24::$_24($_24&&)
    /* $_24($_24&&) */

    void ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int)::__24(__24* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        field_0 = *(undefined8*)param_1;
        field_8 = uVar1;
        new (&field_16, param_1 + 16) WrapArray<math::Matrix44T<float> const>();
    }

    // 0x100c07270, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const::$_24::$_24($_24 const&): jumps straight to the base-object constructor

    // 0x100c07280, 32 bytes, base-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const::$_24::$_24($_24 const&)
    /* $_24($_24 const&) */

    void ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int)::__24(__24* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        field_0 = *(undefined8*)param_1;
        field_8 = uVar1;
        new (&field_16, param_1 + 16) WrapArray<math::Matrix44T<float> const>();
    }

    // 0x100c072c0, 144 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const::$_24::operator()(RenderContext&) const
    /* ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned
   int) const::$_24::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_SetShaderConstFloat1Array_int_unsigned_int_float_const_ptr_unsigned_int* const ::$_24::operator()(
        RenderContext * param_1) {
        undefined4 uVar1;
        undefined4 uVar2;
        ShaderProgram* this_00;
        code* pcVar3;
        _func_SetShaderConstFloat1Array_int_unsigned_int_float_const_ptr_unsigned_int* p_Var4;
        undefined8 uVar5;

        this_00 = *(ShaderProgram**)this;
        p_Var4 = (_func_SetShaderConstFloat1Array_int_unsigned_int_float_const_ptr_unsigned_int*)param_1->IsObjectAlive(
            (RenderResource*)&this_00->field_12);
        if ((char)p_Var4 != '\0') {
            p_Var4 = (_func_SetShaderConstFloat1Array_int_unsigned_int_float_const_ptr_unsigned_int*)this_00->IsReady();
            if ((char)p_Var4 != '\0') {
                this_00->SetProgramActive(param_1);
                pcVar3 = ___glewUniform1fv;
                uVar1 = *(undefined4*)(this + 8);
                uVar2 = *(undefined4*)(this + 12);
                uVar5 = ((this + 16))->end();
                (*pcVar3)(uVar1, uVar2, uVar5);
                p_Var4 = (_func_SetShaderConstFloat1Array_int_unsigned_int_float_const_ptr_unsigned_int*)
                    CheckGlErrorInternal("__glewUniform1fv",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/shaders/OGL/ShaderProgram_OGL.cpp",
                                         872);
            }
        }
        return p_Var4;
    }

    // 0x100c073b0, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const::$_25::$_25($_25&&): jumps straight to the base-object constructor

    // 0x100c073c0, 32 bytes, base-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const::$_25::$_25($_25&&)
    /* $_25($_25&&) */

    void ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*)::__25(__25* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        field_0 = *(undefined8*)param_1;
        field_8 = uVar1;
        new (&field_16, param_1 + 16) WrapArray<math::Matrix44T<float> const>();
    }

    // 0x100c07410, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const::$_25::$_25($_25 const&): jumps straight to the base-object constructor

    // 0x100c07420, 32 bytes, base-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const::$_25::$_25($_25 const&)
    /* $_25($_25 const&) */

    void ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*)::__25(__25* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        field_0 = *(undefined8*)param_1;
        field_8 = uVar1;
        new (&field_16, param_1 + 16) WrapArray<math::Matrix44T<float> const>();
    }

    // 0x100c07460, 144 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const::$_25::operator()(RenderContext&) const
    /* ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*)
   const::$_25::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_SetShaderConstInt4Array_int_unsigned_int_int_const_ptr* const ::$_25::operator()(RenderContext * param_1) {
        undefined4 uVar1;
        undefined4 uVar2;
        ShaderProgram* this_00;
        code* pcVar3;
        _func_SetShaderConstInt4Array_int_unsigned_int_int_const_ptr* p_Var4;
        undefined8 uVar5;

        this_00 = *(ShaderProgram**)this;
        p_Var4 = (_func_SetShaderConstInt4Array_int_unsigned_int_int_const_ptr*)param_1->IsObjectAlive(
            (RenderResource*)&this_00->field_12);
        if ((char)p_Var4 != '\0') {
            p_Var4 = (_func_SetShaderConstInt4Array_int_unsigned_int_int_const_ptr*)this_00->IsReady();
            if ((char)p_Var4 != '\0') {
                this_00->SetProgramActive(param_1);
                pcVar3 = ___glewUniform4iv;
                uVar1 = *(undefined4*)(this + 8);
                uVar2 = *(undefined4*)(this + 12);
                uVar5 = ((this + 16))->end();
                (*pcVar3)(uVar1, uVar2, uVar5);
                p_Var4 = (_func_SetShaderConstInt4Array_int_unsigned_int_int_const_ptr*)CheckGlErrorInternal(
                    "__glewUniform4iv",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                    "ShaderProgram_OGL.cpp",
                    882);
            }
        }
        return p_Var4;
    }

    // 0x100c07550, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const::$_26::$_26($_26&&): jumps straight to the base-object constructor

    // 0x100c07560, 32 bytes, base-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const::$_26::$_26($_26&&)
    /* $_26($_26&&) */

    void ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*)::__26(__26* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        field_0 = *(undefined8*)param_1;
        field_8 = uVar1;
        new (&field_16, param_1 + 16) WrapArray<math::Matrix44T<float> const>();
    }

    // 0x100c075b0, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const::$_26::$_26($_26 const&): jumps straight to the base-object constructor

    // 0x100c075c0, 32 bytes, base-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const::$_26::$_26($_26 const&)
    /* $_26($_26 const&) */

    void ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*)::__26(__26* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        field_0 = *(undefined8*)param_1;
        field_8 = uVar1;
        new (&field_16, param_1 + 16) WrapArray<math::Matrix44T<float> const>();
    }

    // 0x100c07600, 144 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const::$_26::operator()(RenderContext&) const
    /* ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*)
   const::$_26::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_SetShaderConstInt3Array_int_unsigned_int_int_const_ptr* const ::$_26::operator()(RenderContext * param_1) {
        undefined4 uVar1;
        undefined4 uVar2;
        ShaderProgram* this_00;
        code* pcVar3;
        _func_SetShaderConstInt3Array_int_unsigned_int_int_const_ptr* p_Var4;
        undefined8 uVar5;

        this_00 = *(ShaderProgram**)this;
        p_Var4 = (_func_SetShaderConstInt3Array_int_unsigned_int_int_const_ptr*)param_1->IsObjectAlive(
            (RenderResource*)&this_00->field_12);
        if ((char)p_Var4 != '\0') {
            p_Var4 = (_func_SetShaderConstInt3Array_int_unsigned_int_int_const_ptr*)this_00->IsReady();
            if ((char)p_Var4 != '\0') {
                this_00->SetProgramActive(param_1);
                pcVar3 = ___glewUniform3iv;
                uVar1 = *(undefined4*)(this + 8);
                uVar2 = *(undefined4*)(this + 12);
                uVar5 = ((this + 16))->end();
                (*pcVar3)(uVar1, uVar2, uVar5);
                p_Var4 = (_func_SetShaderConstInt3Array_int_unsigned_int_int_const_ptr*)CheckGlErrorInternal(
                    "__glewUniform3iv",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                    "ShaderProgram_OGL.cpp",
                    891);
            }
        }
        return p_Var4;
    }

    // 0x100c076f0, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const::$_27::$_27($_27&&): jumps straight to the base-object constructor

    // 0x100c07700, 32 bytes, base-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const::$_27::$_27($_27&&)
    /* $_27($_27&&) */

    void ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*)::__27(__27* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        field_0 = *(undefined8*)param_1;
        field_8 = uVar1;
        new (&field_16, param_1 + 16) WrapArray<math::Matrix44T<float> const>();
    }

    // 0x100c07750, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const::$_27::$_27($_27 const&): jumps straight to the base-object constructor

    // 0x100c07760, 32 bytes, base-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const::$_27::$_27($_27 const&)
    /* $_27($_27 const&) */

    void ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*)::__27(__27* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        field_0 = *(undefined8*)param_1;
        field_8 = uVar1;
        new (&field_16, param_1 + 16) WrapArray<math::Matrix44T<float> const>();
    }

    // 0x100c077a0, 144 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const::$_27::operator()(RenderContext&) const
    /* ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*)
   const::$_27::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_SetShaderConstInt2Array_int_unsigned_int_int_const_ptr* const ::$_27::operator()(RenderContext * param_1) {
        undefined4 uVar1;
        undefined4 uVar2;
        ShaderProgram* this_00;
        code* pcVar3;
        _func_SetShaderConstInt2Array_int_unsigned_int_int_const_ptr* p_Var4;
        undefined8 uVar5;

        this_00 = *(ShaderProgram**)this;
        p_Var4 = (_func_SetShaderConstInt2Array_int_unsigned_int_int_const_ptr*)param_1->IsObjectAlive(
            (RenderResource*)&this_00->field_12);
        if ((char)p_Var4 != '\0') {
            p_Var4 = (_func_SetShaderConstInt2Array_int_unsigned_int_int_const_ptr*)this_00->IsReady();
            if ((char)p_Var4 != '\0') {
                this_00->SetProgramActive(param_1);
                pcVar3 = ___glewUniform2iv;
                uVar1 = *(undefined4*)(this + 8);
                uVar2 = *(undefined4*)(this + 12);
                uVar5 = ((this + 16))->end();
                (*pcVar3)(uVar1, uVar2, uVar5);
                p_Var4 = (_func_SetShaderConstInt2Array_int_unsigned_int_int_const_ptr*)CheckGlErrorInternal(
                    "__glewUniform2iv",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                    "ShaderProgram_OGL.cpp",
                    900);
            }
        }
        return p_Var4;
    }

    // 0x100c07890, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const::$_28::$_28($_28&&): jumps straight to the base-object constructor

    // 0x100c078a0, 32 bytes, base-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const::$_28::$_28($_28&&)
    /* $_28($_28&&) */

    void ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*)::__28(__28* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        field_0 = *(undefined8*)param_1;
        field_8 = uVar1;
        new (&field_16, param_1 + 16) WrapArray<math::Matrix44T<float> const>();
    }

    // 0x100c078f0, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const::$_28::$_28($_28 const&): jumps straight to the base-object constructor

    // 0x100c07900, 32 bytes, base-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const::$_28::$_28($_28 const&)
    /* $_28($_28 const&) */

    void ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*)::__28(__28* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        field_0 = *(undefined8*)param_1;
        field_8 = uVar1;
        new (&field_16, param_1 + 16) WrapArray<math::Matrix44T<float> const>();
    }

    // 0x100c07940, 144 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const::$_28::operator()(RenderContext&) const
    /* ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*)
   const::$_28::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_SetShaderConstInt1Array_int_unsigned_int_int_const_ptr* const ::$_28::operator()(RenderContext * param_1) {
        undefined4 uVar1;
        undefined4 uVar2;
        ShaderProgram* this_00;
        code* pcVar3;
        _func_SetShaderConstInt1Array_int_unsigned_int_int_const_ptr* p_Var4;
        undefined8 uVar5;

        this_00 = *(ShaderProgram**)this;
        p_Var4 = (_func_SetShaderConstInt1Array_int_unsigned_int_int_const_ptr*)param_1->IsObjectAlive(
            (RenderResource*)&this_00->field_12);
        if ((char)p_Var4 != '\0') {
            p_Var4 = (_func_SetShaderConstInt1Array_int_unsigned_int_int_const_ptr*)this_00->IsReady();
            if ((char)p_Var4 != '\0') {
                this_00->SetProgramActive(param_1);
                pcVar3 = ___glewUniform1iv;
                uVar1 = *(undefined4*)(this + 8);
                uVar2 = *(undefined4*)(this + 12);
                uVar5 = ((this + 16))->end();
                (*pcVar3)(uVar1, uVar2, uVar5);
                p_Var4 = (_func_SetShaderConstInt1Array_int_unsigned_int_int_const_ptr*)CheckGlErrorInternal(
                    "__glewUniform1iv",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                    "ShaderProgram_OGL.cpp",
                    909);
            }
        }
        return p_Var4;
    }

    // 0x100c07a30, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int) const::$_29::$_29($_29&&): jumps straight to the base-object constructor

    // 0x100c07a40, 32 bytes, base-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int) const::$_29::$_29($_29&&)
    /* $_29($_29&&) */

    void ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*,
                                                 unsigned int)::__29(__29* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        field_0 = *(undefined8*)param_1;
        field_8 = uVar1;
        new (&field_16, param_1 + 16) WrapArray<math::Matrix44T<float> const>();
    }

    // 0x100c07a90, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int) const::$_29::$_29($_29 const&): jumps straight to the base-object constructor

    // 0x100c07aa0, 32 bytes, base-object constructor, placed by class name and neighbouring functions
    // ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int) const::$_29::$_29($_29 const&)
    /* $_29($_29 const&) */

    void ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*,
                                                 unsigned int)::__29(__29* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        field_0 = *(undefined8*)param_1;
        field_8 = uVar1;
        new (&field_16, param_1 + 16) WrapArray<math::Matrix44T<float> const>();
    }

    // 0x100c07ae0, 144 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int) const::$_29::operator()(RenderContext&) const
    /* ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*,
   unsigned int) const::$_29::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_SetShaderConstUInt1Array_int_unsigned_int_unsigned_int_const_ptr_unsigned_int* const ::$_29::operator()(
        RenderContext * param_1) {
        undefined4 uVar1;
        undefined4 uVar2;
        ShaderProgram* this_00;
        code* pcVar3;
        _func_SetShaderConstUInt1Array_int_unsigned_int_unsigned_int_const_ptr_unsigned_int* p_Var4;
        undefined8 uVar5;

        this_00 = *(ShaderProgram**)this;
        p_Var4 = (_func_SetShaderConstUInt1Array_int_unsigned_int_unsigned_int_const_ptr_unsigned_int*)
                     param_1->IsObjectAlive((RenderResource*)&this_00->field_12);
        if ((char)p_Var4 != '\0') {
            p_Var4 = (_func_SetShaderConstUInt1Array_int_unsigned_int_unsigned_int_const_ptr_unsigned_int*)
                         this_00->IsReady();
            if ((char)p_Var4 != '\0') {
                this_00->SetProgramActive(param_1);
                pcVar3 = ___glewUniform1uiv;
                uVar1 = *(undefined4*)(this + 8);
                uVar2 = *(undefined4*)(this + 12);
                uVar5 = ((this + 16))->end();
                (*pcVar3)(uVar1, uVar2, uVar5);
                p_Var4 = (_func_SetShaderConstUInt1Array_int_unsigned_int_unsigned_int_const_ptr_unsigned_int*)
                    CheckGlErrorInternal("__glewUniform1uiv",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/shaders/OGL/ShaderProgram_OGL.cpp",
                                         942);
            }
        }
        return p_Var4;
    }

    // 0x100c08790, 144 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const::$_35::operator()(RenderContext&) const
    /* ShaderProgram::SetShaderConstFloat4(int, float, float, float, float)
   const::$_35::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_SetShaderConstFloat4_int_float_float_float_float* const ::$_35::operator()(RenderContext * param_1) {
        ShaderProgram* this_00;
        _func_SetShaderConstFloat4_int_float_float_float_float* p_Var1;

        this_00 = *(ShaderProgram**)this;
        p_Var1 = (_func_SetShaderConstFloat4_int_float_float_float_float*)param_1->IsObjectAlive(
            (RenderResource*)&this_00->field_12);
        if ((char)p_Var1 != '\0') {
            p_Var1 = (_func_SetShaderConstFloat4_int_float_float_float_float*)this_00->IsReady();
            if ((char)p_Var1 != '\0') {
                this_00->SetProgramActive(param_1);
                (*___glewUniform4f)(*(undefined4*)(this + 12), *(undefined4*)(this + 16), *(undefined4*)(this + 20),
                                    *(undefined4*)(this + 24), *(undefined4*)(this + 8));
                p_Var1 = (_func_SetShaderConstFloat4_int_float_float_float_float*)CheckGlErrorInternal(
                    "__glewUniform4f",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                    "ShaderProgram_OGL.cpp",
                    1023);
            }
        }
        return p_Var1;
    }

    // 0x100c088d0, 128 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstFloat3(int, float, float, float) const::$_36::operator()(RenderContext&) const
    /* ShaderProgram::SetShaderConstFloat3(int, float, float, float)
   const::$_36::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_SetShaderConstFloat3_int_float_float_float* const ::$_36::operator()(RenderContext * param_1) {
        ShaderProgram* this_00;
        _func_SetShaderConstFloat3_int_float_float_float* p_Var1;

        this_00 = *(ShaderProgram**)this;
        p_Var1 = (_func_SetShaderConstFloat3_int_float_float_float*)param_1->IsObjectAlive(
            (RenderResource*)&this_00->field_12);
        if ((char)p_Var1 != '\0') {
            p_Var1 = (_func_SetShaderConstFloat3_int_float_float_float*)this_00->IsReady();
            if ((char)p_Var1 != '\0') {
                this_00->SetProgramActive(param_1);
                (*___glewUniform3f)(*(undefined4*)(this + 12), *(undefined4*)(this + 16), *(undefined4*)(this + 20),
                                    *(undefined4*)(this + 8));
                p_Var1 = (_func_SetShaderConstFloat3_int_float_float_float*)CheckGlErrorInternal(
                    "__glewUniform3f",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                    "ShaderProgram_OGL.cpp",
                    1031);
            }
        }
        return p_Var1;
    }

    // 0x100c08a00, 128 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstFloat2(int, float, float) const::$_37::operator()(RenderContext&) const
    /* ShaderProgram::SetShaderConstFloat2(int, float, float)
   const::$_37::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_SetShaderConstFloat2_int_float_float* const ::$_37::operator()(RenderContext * param_1) {
        ShaderProgram* this_00;
        _func_SetShaderConstFloat2_int_float_float* p_Var1;

        this_00 = *(ShaderProgram**)this;
        p_Var1 =
            (_func_SetShaderConstFloat2_int_float_float*)param_1->IsObjectAlive((RenderResource*)&this_00->field_12);
        if ((char)p_Var1 != '\0') {
            p_Var1 = (_func_SetShaderConstFloat2_int_float_float*)this_00->IsReady();
            if ((char)p_Var1 != '\0') {
                this_00->SetProgramActive(param_1);
                (*___glewUniform2f)(*(undefined4*)(this + 12), *(undefined4*)(this + 16), *(undefined4*)(this + 8));
                p_Var1 = (_func_SetShaderConstFloat2_int_float_float*)CheckGlErrorInternal(
                    "__glewUniform2f",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                    "ShaderProgram_OGL.cpp",
                    1039);
            }
        }
        return p_Var1;
    }

    // 0x100c08b10, 128 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstFloat1(int, float) const::$_38::operator()(RenderContext&) const
    /* ShaderProgram::SetShaderConstFloat1(int, float)
   const::$_38::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_SetShaderConstFloat1_int_float* const ::$_38::operator()(RenderContext * param_1) {
        ShaderProgram* this_00;
        _func_SetShaderConstFloat1_int_float* p_Var1;

        this_00 = *(ShaderProgram**)this;
        p_Var1 = (_func_SetShaderConstFloat1_int_float*)param_1->IsObjectAlive((RenderResource*)&this_00->field_12);
        if ((char)p_Var1 != '\0') {
            p_Var1 = (_func_SetShaderConstFloat1_int_float*)this_00->IsReady();
            if ((char)p_Var1 != '\0') {
                this_00->SetProgramActive(param_1);
                (*___glewUniform1f)(*(undefined4*)(this + 12), *(undefined4*)(this + 8));
                p_Var1 = (_func_SetShaderConstFloat1_int_float*)CheckGlErrorInternal(
                    "__glewUniform1f",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                    "ShaderProgram_OGL.cpp",
                    1047);
            }
        }
        return p_Var1;
    }

    // 0x100c08c40, 128 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const::$_39::operator()(RenderContext&) const
    /* ShaderProgram::SetShaderConstInt4(int, int, int, int, int)
   const::$_39::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_SetShaderConstInt4_int_int_int_int_int* const ::$_39::operator()(RenderContext * param_1) {
        ShaderProgram* this_00;
        _func_SetShaderConstInt4_int_int_int_int_int* p_Var1;

        this_00 = *(ShaderProgram**)this;
        p_Var1 =
            (_func_SetShaderConstInt4_int_int_int_int_int*)param_1->IsObjectAlive((RenderResource*)&this_00->field_12);
        if ((char)p_Var1 != '\0') {
            p_Var1 = (_func_SetShaderConstInt4_int_int_int_int_int*)this_00->IsReady();
            if ((char)p_Var1 != '\0') {
                this_00->SetProgramActive(param_1);
                (*___glewUniform4i)(*(undefined4*)(this + 8), *(undefined4*)(this + 12), *(undefined4*)(this + 16),
                                    *(undefined4*)(this + 20), *(undefined4*)(this + 24));
                p_Var1 = (_func_SetShaderConstInt4_int_int_int_int_int*)CheckGlErrorInternal(
                    "__glewUniform4i",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                    "ShaderProgram_OGL.cpp",
                    1055);
            }
        }
        return p_Var1;
    }

    // 0x100c08d70, 128 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstInt3(int, int, int, int) const::$_40::operator()(RenderContext&) const
    /* ShaderProgram::SetShaderConstInt3(int, int, int, int)
   const::$_40::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_SetShaderConstInt3_int_int_int_int* const ::$_40::operator()(RenderContext * param_1) {
        ShaderProgram* this_00;
        _func_SetShaderConstInt3_int_int_int_int* p_Var1;

        this_00 = *(ShaderProgram**)this;
        p_Var1 = (_func_SetShaderConstInt3_int_int_int_int*)param_1->IsObjectAlive((RenderResource*)&this_00->field_12);
        if ((char)p_Var1 != '\0') {
            p_Var1 = (_func_SetShaderConstInt3_int_int_int_int*)this_00->IsReady();
            if ((char)p_Var1 != '\0') {
                this_00->SetProgramActive(param_1);
                (*___glewUniform3i)(*(undefined4*)(this + 8), *(undefined4*)(this + 12), *(undefined4*)(this + 16),
                                    *(undefined4*)(this + 20));
                p_Var1 = (_func_SetShaderConstInt3_int_int_int_int*)CheckGlErrorInternal(
                    "__glewUniform3i",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                    "ShaderProgram_OGL.cpp",
                    1063);
            }
        }
        return p_Var1;
    }

    // 0x100c08ea0, 128 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstInt2(int, int, int) const::$_41::operator()(RenderContext&) const
    /* ShaderProgram::SetShaderConstInt2(int, int, int)
   const::$_41::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_SetShaderConstInt2_int_int_int* const ::$_41::operator()(RenderContext * param_1) {
        ShaderProgram* this_00;
        _func_SetShaderConstInt2_int_int_int* p_Var1;

        this_00 = *(ShaderProgram**)this;
        p_Var1 = (_func_SetShaderConstInt2_int_int_int*)param_1->IsObjectAlive((RenderResource*)&this_00->field_12);
        if ((char)p_Var1 != '\0') {
            p_Var1 = (_func_SetShaderConstInt2_int_int_int*)this_00->IsReady();
            if ((char)p_Var1 != '\0') {
                this_00->SetProgramActive(param_1);
                (*___glewUniform2i)(*(undefined4*)(this + 8), *(undefined4*)(this + 12), *(undefined4*)(this + 16));
                p_Var1 = (_func_SetShaderConstInt2_int_int_int*)CheckGlErrorInternal(
                    "__glewUniform2i",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                    "ShaderProgram_OGL.cpp",
                    1071);
            }
        }
        return p_Var1;
    }

    // 0x100c09220, 112 bytes, placed by __FILE__ string
    // ShaderProgram::SetShaderConstInt1(int, int) const::$_42::operator()(RenderContext&) const
    /* ShaderProgram::SetShaderConstInt1(int, int)
   const::$_42::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_SetShaderConstInt1_int_int* const ::$_42::operator()(RenderContext * param_1) {
        ShaderProgram* this_00;
        _func_SetShaderConstInt1_int_int* p_Var1;

        this_00 = *(ShaderProgram**)this;
        p_Var1 = (_func_SetShaderConstInt1_int_int*)param_1->IsObjectAlive((RenderResource*)&this_00->field_12);
        if ((char)p_Var1 != '\0') {
            p_Var1 = (_func_SetShaderConstInt1_int_int*)this_00->IsReady();
            if ((char)p_Var1 != '\0') {
                this_00->SetProgramActive(param_1);
                (*___glewUniform1i)(*(undefined4*)(this + 8), *(undefined4*)(this + 12));
                p_Var1 = (_func_SetShaderConstInt1_int_int*)CheckGlErrorInternal(
                    "__glewUniform1i",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                    "ShaderProgram_OGL.cpp",
                    1100);
            }
        }
        return p_Var1;
    }

    // 0x100c0a110, 16 bytes, placed by class name and neighbouring functions
    // ShaderProgram::PreRender()::$_43::operator()() const
    /* ShaderProgram::PreRender()::$_43::TEMPNAMEPLACEHOLDERVALUE() const */

    void ShaderProgram::PreRender()::$_43::operator()() {
        PostLinkShader(field_0);
    }

    // 0x100c0ac90, 80 bytes, placed by class name and neighbouring functions
    // ShaderProgram::OnEndFrame()::$_44::operator()(RenderContext&) const
    /* ShaderProgram::OnEndFrame()::$_44::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void ShaderProgram::OnEndFrame()::$_44::operator()(RenderContext* param_1) {
        long lVar1;
        char cVar2;
        SyncFence* this_00;

        lVar1 = field_0;
        cVar2 = param_1->IsObjectAlive((RenderResource*)(lVar1 + 12));
        if (cVar2 != '\0') {
            this_00 = (SyncFence*)(lVar1 + 1848);
            cVar2 = this_00->IsCreated();
            if (cVar2 != '\0') {
                this_00->WaitServer();
                this_00->Destroy();
            }
        }
    }

} // namespace jag::render

// libs/hal/render/shaders/ShaderProgramStateCache.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "ShaderProgramStateCache.h"

namespace jag::render {
    // 0x100bebcf0
    ShaderProgramStateCache::ShaderProgramStateCache(const ShaderProgramStateCache& shaderProgramStateCache)
        : eastl::vector_map<unsigned int, ShaderProgramStateCache::ShaderConstMapValue>(),
          field_40(shaderProgramStateCache.field_40), field_112(shaderProgramStateCache.field_112) {
        unique_lock<std::mutex> local_30;

        if (shaderProgramStateCache.field_112 == 0) {
            if (IsOwnerThread() == '\0') {
                LogAssert("rhs.m_isThreadSafe || rhs.IsOwnerThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "ShaderProgramStateCache.cpp",
                          24, nullptr);
            }
        }
        if (shaderProgramStateCache.field_112 == 0) {
            local_30 = std::unique_lock<std::mutex>();
        } else {
            local_30 = std::unique_lock<std::mutex>(shaderProgramStateCache.field_48);
        }
        *this = shaderProgramStateCache;
    }

    // 0x100bebe60
    uint8_t ShaderProgramStateCache::Initialise(const ShaderProgram& shaderProgram) {
        field_40 = shaderProgram;
        field_112 = shaderProgram.GetCompileFlags() >> 2 & 1;
        clear();
        return 1;
    }

    // 0x100bebea0
    void ShaderProgramStateCache::Clear() {
        unique_lock<std::mutex> local_20;

        if (field_112 == 0) {
            if (IsOwnerThread() == '\0') {
                LogAssert("m_isThreadSafe || IsOwnerThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "ShaderProgramStateCache.cpp",
                          48, nullptr);
            }
        }
        if (field_112 == 0) {
            local_20 = std::unique_lock<std::mutex>();
        } else {
            local_20 = std::unique_lock<std::mutex>(field_48);
        }
        clear();
    }

    // 0x100bebf10
    void ShaderProgramStateCache::ClearShaderConst(unsigned int arg1, unsigned int arg2) {
        bool cVar1;
        unsigned int uVar2;
        unique_lock<std::mutex> local_48;
        unsigned int local_34;

        if ((field_112 == 0) && (cVar1 = IsOwnerThread(), !cVar1)) {
            LogAssert("m_isThreadSafe || IsOwnerThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                      "ShaderProgramStateCache.cpp",
                      55, nullptr);
        }
        if (field_112 == 0) {
            local_48 = std::unique_lock<std::mutex>();
        } else {
            local_48 = std::unique_lock<std::mutex>(field_48);
        }
        if (arg2 != 0) {
            uVar2 = 0;
            do {
                local_34 = (uVar2 >> 4) + arg1;
                ((ShaderConstMapValue*)(*this)[local_34])->Reset();
                uVar2 = uVar2 + 16;
            } while (uVar2 < arg2);
        }
    }

    // 0x100bec0f0
    unsigned long ShaderProgramStateCache::SetConstData1(unsigned int arg1, const float* arg2) {
        unique_lock<std::mutex> local_30;

        unsigned int local_1c = arg1;
        if (field_112 == 0) {
            if (IsOwnerThread() == '\0') {
                LogAssert("m_isThreadSafe || IsOwnerThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "ShaderProgramStateCache.cpp",
                          65, nullptr);
            }
        }
        if (field_112 == 0) {
            local_30 = std::unique_lock<std::mutex>();
        } else {
            local_30 = std::unique_lock<std::mutex>(field_48);
        }
        array<float, 16ul>* this_00 = (array<float, 16ul>*)(*this)[local_1c];
        float* pfVar4 = (float*)(*this_00)[(unsigned long)&local_1c];
        float fVar1 = *pfVar4;
        float fVar2 = *arg2;
        if (fVar1 != fVar2) {
            *pfVar4 = *arg2;
        }
        return fVar1 != fVar2 & 4294967295;
    }

    // 0x100bec280
    unsigned long ShaderProgramStateCache::SetConstData3(unsigned int arg1, const float* arg2) {
        unique_lock<std::mutex> local_38;

        unsigned int local_24 = arg1;
        if (field_112 == 0) {
            if (!(IsOwnerThread())) {
                LogAssert("m_isThreadSafe || IsOwnerThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "ShaderProgramStateCache.cpp",
                          81, nullptr);
            }
        }
        if (field_112 == 0) {
            local_38 = std::unique_lock<std::mutex>();
        } else {
            local_38 = std::unique_lock<std::mutex>(field_48);
        }
        array<float, 16ul>* this_00 = (array<float, 16ul>*)(*this)[local_24];
        long* plVar6 = (long*)(*this_00)[(unsigned long)&local_24];
        if (!(is_aligned<char>((unsigned long)arg2, 16))) {
            LogAssert("is_aligned(pSrcData)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                      "ShaderProgramStateCache.cpp",
                      95, "Non-scalar shader input data should be aligned 16.");
        }
        long lVar3 = *plVar6;
        long lVar4 = *(long*)arg2;
        float fVar1 = *(float*)(plVar6 + 1);
        float fVar2 = arg2[2];
        if (fVar1 != fVar2 || lVar3 != lVar4) {
            *(float*)(plVar6 + 1) = arg2[2];
            *plVar6 = *(long*)arg2;
        }
        return fVar1 != fVar2 || lVar3 != lVar4 & 4294967295;
    }

    // 0x100bec380
    unsigned long ShaderProgramStateCache::SetConstData4(unsigned int arg1, const float* arg2) {
        uint32_t in_ECX;
        uint8_t auVar7[16];
        unique_lock<std::mutex> local_30;

        unsigned int local_1c = arg1;
        if (field_112 == 0) {
            if (!(IsOwnerThread())) {
                LogAssert("m_isThreadSafe || IsOwnerThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "ShaderProgramStateCache.cpp",
                          87, nullptr);
            }
        }
        if (field_112 == 0) {
            local_30 = std::unique_lock<std::mutex>();
        } else {
            local_30 = std::unique_lock<std::mutex>(field_48);
        }
        array<float, 16ul>* this_00 = (array<float, 16ul>*)(*this)[local_1c];
        float* pfVar5 = (float*)(*this_00)[(unsigned long)&local_1c];
        if (!(is_aligned<char>((unsigned long)arg2, 16))) {
            LogAssert("is_aligned(pSrcData)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                      "ShaderProgramStateCache.cpp",
                      109, "Non-scalar shader input data should be aligned 16.");
        }
        float fVar1 = arg2[1];
        float fVar2 = arg2[2];
        float fVar3 = arg2[3];
        auVar7._0_4_ = -(unsigned int)(*pfVar5 == *arg2);
        auVar7._4_4_ = -(unsigned int)(pfVar5[1] == fVar1);
        auVar7._8_4_ = -(unsigned int)(pfVar5[2] == fVar2);
        auVar7._12_4_ = -(unsigned int)(pfVar5[3] == fVar3);
        if (movmskps(in_ECX, auVar7) != 15) {
            *pfVar5 = *arg2;
            pfVar5[1] = fVar1;
            pfVar5[2] = fVar2;
            pfVar5[3] = fVar3;
        }
        return (unsigned short)((unsigned short)((uint64_t)(auVar7 >> 7) & 1) |
                                (unsigned short)((uint64_t)(auVar7 >> 15) & 1) << 1 |
                                (unsigned short)((uint64_t)(auVar7 >> 23) & 1) << 2 |
                                (unsigned short)((uint64_t)(auVar7 >> 31) & 1) << 3 |
                                (unsigned short)((uint64_t)(auVar7 >> 39) & 1) << 4 |
                                (unsigned short)((uint64_t)(auVar7 >> 47) & 1) << 5 |
                                (unsigned short)((uint64_t)(auVar7 >> 55) & 1) << 6 |
                                (unsigned short)((uint64_t)(auVar7 >> 63) & 1) << 7 |
                                (unsigned short)((uint64_t)(auVar7 >> 71) & 1) << 8 |
                                (unsigned short)((uint64_t)(auVar7 >> 79) & 1) << 9 |
                                (unsigned short)((uint64_t)(auVar7 >> 87) & 1) << 10 |
                                (unsigned short)((uint64_t)(auVar7 >> 95) & 1) << 11 |
                                (unsigned short)((uint8_t)(auVar7._12_4_ >> 7) & 1) << 12 |
                                (unsigned short)((uint8_t)(auVar7._12_4_ >> 15) & 1) << 13 |
                                (unsigned short)((uint8_t)(auVar7._12_4_ >> 23) & 1) << 14 |
                                (unsigned short)(uint8_t)(auVar7._12_4_ >> 31) << 15) != 65535 &
               4294967295;
    }

    // 0x100bec480
    uint8_t ShaderProgramStateCache::SetConstData(unsigned int arg1, unsigned int arg2, const float* arg3, bool arg4) {
        long* plVar1;
        float* arg1_00;
        float* pfVar2;
        float fVar3;
        float fVar4;
        long lVar5;
        long lVar6;
        float fVar7;
        bool cVar8;
        uint32_t uVar9;
        int iVar10;
        array<float, 16ul>* paVar11;
        long lVar12;
        unsigned long uVar13;
        unsigned int* puVar14;
        uint8_t bVar15;
        unsigned int uVar16;
        bool bVar17;
        uint8_t auVar18[16];
        unique_lock<std::mutex> local_70;
        float* local_60;
        float* local_58;
        unsigned int local_4c;
        ShaderProgramStateCache* local_48;
        unsigned long local_40;
        unsigned int local_34;

        if ((field_112 == 0) && (cVar8 = IsOwnerThread(), !cVar8)) {
            LogAssert("m_isThreadSafe || IsOwnerThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                      "ShaderProgramStateCache.cpp",
                      142, nullptr);
        }
        if (field_112 == 0) {
            local_70 = std::unique_lock<std::mutex>();
        } else {
            local_70 = std::unique_lock<std::mutex>(field_48);
        }
        if (arg2 < 2) {
            LogAssert("floatCount > 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                      "ShaderProgramStateCache.cpp",
                      145, nullptr);
        }
        if (((arg4) || ((arg2 & 3) == 0)) || (arg2 % 3 != 0)) {
            if (arg2 != 0) {
                uVar16 = 0;
                local_40 = 0;
                bVar15 = 0;
                local_60 = arg3;
                local_4c = arg2;
                local_48 = this;
                do {
                    if ((uVar16 & 12) == 0) {
                        local_34 = (uVar16 >> 4) + arg1;
                        puVar14 = &local_34;
                        paVar11 = (array<float, 16ul>*)(*local_48)[*puVar14];
                        local_40 = (*paVar11)[(unsigned long)puVar14];
                    }
                    arg1_00 = local_60 + uVar16;
                    pfVar2 = (float*)(local_40 + (unsigned long)(uVar16 & 12) * 4);
                    if (arg2 < 4) {
                        local_58 = pfVar2;
                        iVar10 = _memcmp(pfVar2, arg1_00, (unsigned long)arg2 << 2);
                        bVar17 = iVar10 == 0;
                        if (!bVar17) {
                            _memcpy(local_58, arg1_00, (unsigned long)arg2 << 2);
                            goto LAB_100bec650;
                        }
                    } else {
                        uVar9 = is_aligned<char>((unsigned long)arg1_00, 16);
                        if ((char)uVar9 == '\0') {
                            LogAssert("is_aligned(pSrcData)",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                      "render/shaders/ShaderProgramStateCache.cpp",
                                      109, "Non-scalar shader input data should be aligned 16.");
                        }
                        fVar3 = arg1_00[1];
                        fVar4 = arg1_00[2];
                        fVar7 = arg1_00[3];
                        auVar18._0_4_ = -(unsigned int)(*pfVar2 == *arg1_00);
                        auVar18._4_4_ = -(unsigned int)(pfVar2[1] == fVar3);
                        auVar18._8_4_ = -(unsigned int)(pfVar2[2] == fVar4);
                        auVar18._12_4_ = -(unsigned int)(pfVar2[3] == fVar7);
                        iVar10 = movmskps(uVar9, auVar18);
                        bVar17 = iVar10 == 15;
                        if (!bVar17) {
                            *pfVar2 = *arg1_00;
                            pfVar2[1] = fVar3;
                            pfVar2[2] = fVar4;
                            pfVar2[3] = fVar7;
                        LAB_100bec650:
                            bVar17 = false;
                        }
                    }
                    bVar15 = bVar15 | bVar17 ^ 1U;
                    uVar16 = uVar16 + 4;
                    arg2 = arg2 - 4;
                } while (uVar16 < local_4c);
                goto LAB_100bec75b;
            }
        } else if (2 < arg2) {
            local_40 = 1;
            if (1 < arg2 / 3) {
                local_40 = (unsigned long)(arg2 / 3);
            }
            uVar13 = 0;
            lVar12 = 0;
            bVar15 = 0;
            local_48 = this;
            do {
                if ((uVar13 & 3) == 0) {
                    local_34 = ((unsigned int)(uVar13 >> 2) & 1073741823) + arg1;
                    puVar14 = &local_34;
                    paVar11 = (array<float, 16ul>*)(*local_48)[*puVar14];
                    lVar12 = (*paVar11)[(unsigned long)puVar14];
                }
                cVar8 = is_aligned<char>((unsigned long)arg3, 16);
                if (!cVar8) {
                    LogAssert("is_aligned(pSrcData)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "shaders/ShaderProgramStateCache.cpp",
                              95, "Non-scalar shader input data should be aligned 16.");
                }
                plVar1 = (long*)(lVar12 + (unsigned long)((unsigned int)uVar13 & 3) * 4);
                lVar5 = *plVar1;
                lVar6 = *(long*)arg3;
                fVar3 = *(float*)(plVar1 + 1);
                fVar4 = arg3[2];
                if (fVar3 != fVar4 || lVar5 != lVar6) {
                    *(float*)(plVar1 + 1) = arg3[2];
                    *plVar1 = *(long*)arg3;
                }
                bVar15 = bVar15 | (fVar3 != fVar4 || lVar5 != lVar6);
                uVar13 = uVar13 + 1;
                arg3 = arg3 + 1;
            } while (local_40 != uVar13);
            goto LAB_100bec75b;
        }
        bVar15 = 0;
    LAB_100bec75b:
        return bVar15;
    }

    // 0x100bf15f0: ShaderProgramStateCache::SetShaderConstInt4Array(unsigned int, unsigned int, int const*) has the same machine code as ShaderProgramStateCache::SetShaderConstFloat4Array(unsigned int, unsigned int, float const*)

    // 0x100bf16b0: ShaderProgramStateCache::SetShaderConstInt3Array(unsigned int, unsigned int, int const*) has the same machine code as ShaderProgramStateCache::SetShaderConstFloat3Array(unsigned int, unsigned int, float const*)

    // 0x100bf16e0: ShaderProgramStateCache::SetShaderConstInt2Array(unsigned int, unsigned int, int const*) has the same machine code as ShaderProgramStateCache::SetShaderConstFloat2Array(unsigned int, unsigned int, float const*)

    // 0x100bf1710: ShaderProgramStateCache::SetShaderConstInt1Array(unsigned int, unsigned int, int const*) has the same machine code as ShaderProgramStateCache::SetShaderConstFloat1Array(unsigned int, unsigned int, float const*)

    // 0x100bf1710: ShaderProgramStateCache::SetShaderConstUInt1Array(unsigned int, unsigned int, unsigned int const*) has the same machine code as ShaderProgramStateCache::SetShaderConstFloat1Array(unsigned int, unsigned int, float const*)

} // namespace jag::render

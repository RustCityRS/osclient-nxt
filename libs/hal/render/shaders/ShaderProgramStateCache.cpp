// libs/hal/render/shaders/ShaderProgramStateCache.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "ShaderProgramStateCache.h"

namespace jag::render {
    // 0x100bebcf0, 208 bytes, base-object constructor, placed by class name and debug map
    // ShaderProgramStateCache::ShaderProgramStateCache(ShaderProgramStateCache const&)
    void ShaderProgramStateCache::ShaderProgramStateCache(ShaderProgramStateCache* param_1) {
        unique_lock<std::mutex> local_30[16];

        new (this) eastl::vector_map<
            unsigned int, ShaderProgramStateCache::ShaderConstMapValue, eastl::less<unsigned int>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned int, ShaderProgramStateCache::ShaderConstMapValue>, eastl::allocator>>();
        field_40 = param_1->field_40;
        new (&field_48) std::mutex();
        field_112 = param_1->field_112;
        if (param_1->field_112 == 0) {
            if (IsOwnerThread() == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("rhs.m_isThreadSafe || rhs.IsOwnerThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "ShaderProgramStateCache.cpp",
                          24, (char*)0);
            }
        }
        if (param_1->field_112 == 0) {
            std::unique_lock<std::mutex>::unique_lock(local_30);
        } else {
            std::unique_lock<std::mutex>::unique_lock(local_30, (mutex*)&param_1->field_48);
        }
        eastl::vector_map<
            unsigned int, ShaderProgramStateCache::ShaderConstMapValue, eastl::less<unsigned int>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned int, ShaderProgramStateCache::ShaderConstMapValue>, eastl::allocator>>::
        operator=((vector_map<unsigned int, ShaderProgramStateCache::ShaderConstMapValue, eastl::less<unsigned int>,
                              eastl::allocator,
                              eastl::vector<eastl::pair<unsigned int, ShaderProgramStateCache::ShaderConstMapValue>,
                                            eastl::allocator>>*)this,
                  (vector_map*)param_1);
        std::unique_lock<std::mutex>::~unique_lock(local_30);
    }

    // 0x100bebe50, 16 bytes, complete-object constructor, placed by class name
    // ShaderProgramStateCache::ShaderProgramStateCache(ShaderProgramStateCache const&): jumps straight to the base-object constructor

    // 0x100bebe60, 48 bytes, placed by class name
    // ShaderProgramStateCache::Initialise(ShaderProgram const&)
    undefined1 ShaderProgramStateCache::Initialise(ShaderProgram* param_1) {
        field_40 = param_1;
        field_112 = param_1->GetCompileFlags() >> 2 & 1;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        return 1;
    }

    // 0x100bebea0, 112 bytes, placed by class name
    // ShaderProgramStateCache::Clear()
    void ShaderProgramStateCache::Clear() {
        unique_lock<std::mutex> local_20[16];

        if (field_112 == 0) {
            if (IsOwnerThread() == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("m_isThreadSafe || IsOwnerThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "ShaderProgramStateCache.cpp",
                          48, (char*)0);
            }
        }
        if (field_112 == 0) {
            std::unique_lock<std::mutex>::unique_lock(local_20);
        } else {
            std::unique_lock<std::mutex>::unique_lock(local_20, (mutex*)&field_48);
        }
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        std::unique_lock<std::mutex>::~unique_lock(local_20);
    }

    // 0x100bebf10, 224 bytes, placed by class name
    // ShaderProgramStateCache::ClearShaderConst(unsigned int, unsigned int)
    void ShaderProgramStateCache::ClearShaderConst(uint param_1, uint param_2) {
        char cVar1;
        ShaderConstMapValue* this_00;
        uint uVar2;
        unique_lock<std::mutex> local_48[20];
        uint local_34;

        if ((field_112 == 0) && (cVar1 = IsOwnerThread(), cVar1 == '\0')) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_isThreadSafe || IsOwnerThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                      "ShaderProgramStateCache.cpp",
                      55, (char*)0);
        }
        if (field_112 == 0) {
            std::unique_lock<std::mutex>::unique_lock(local_48);
        } else {
            std::unique_lock<std::mutex>::unique_lock(local_48, (mutex*)&field_48);
        }
        if (param_2 != 0) {
            uVar2 = 0;
            do {
                local_34 = (uVar2 >> 4) + param_1;
                this_00 = (ShaderConstMapValue*)eastl::vector_map<
                    unsigned int, ShaderProgramStateCache::ShaderConstMapValue, eastl::less<unsigned int>,
                    eastl::allocator,
                    eastl::vector<eastl::pair<unsigned int, ShaderProgramStateCache::ShaderConstMapValue>,
                                  eastl::allocator>>::
                operator[](
                    (vector_map<unsigned int, ShaderProgramStateCache::ShaderConstMapValue, eastl::less<unsigned int>,
                                eastl::allocator,
                                eastl::vector<eastl::pair<unsigned int, ShaderProgramStateCache::ShaderConstMapValue>,
                                              eastl::allocator>>*)this,
                    &local_34);
                this_00->Reset();
                uVar2 = uVar2 + 16;
            } while (uVar2 < param_2);
        }
        std::unique_lock<std::mutex>::~unique_lock(local_48);
    }

    // 0x100bec0f0, 192 bytes, placed by class name
    // ShaderProgramStateCache::SetConstData1(unsigned int, float const*)
    ulong ShaderProgramStateCache::SetConstData1(uint param_1, float* param_2) {
        float fVar1;
        float fVar2;
        ulong uVar4;
        float* pfVar5;
        unique_lock<std::mutex> local_30[20];
        uint local_1c;

        local_1c = param_1;
        if (field_112 == 0) {
            if (IsOwnerThread() == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("m_isThreadSafe || IsOwnerThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "ShaderProgramStateCache.cpp",
                          65, (char*)0);
            }
        }
        if (field_112 == 0) {
            std::unique_lock<std::mutex>::unique_lock(local_30);
        } else {
            std::unique_lock<std::mutex>::unique_lock(local_30, (mutex*)&field_48);
        }
        uVar4 = eastl::vector_map<
            unsigned int, ShaderProgramStateCache::ShaderConstMapValue, eastl::less<unsigned int>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned int, ShaderProgramStateCache::ShaderConstMapValue>, eastl::allocator>>::
        operator[]((vector_map<unsigned int, ShaderProgramStateCache::ShaderConstMapValue, eastl::less<unsigned int>,
                               eastl::allocator,
                               eastl::vector<eastl::pair<unsigned int, ShaderProgramStateCache::ShaderConstMapValue>,
                                             eastl::allocator>>*)this,
                   &local_1c);
        pfVar5 = (float*)std::array<float, 16ul>::operator[](uVar4);
        fVar1 = *pfVar5;
        fVar2 = *param_2;
        if (fVar1 != fVar2) {
            *pfVar5 = *param_2;
        }
        std::unique_lock<std::mutex>::~unique_lock(local_30);
        return CONCAT71((int7)((ulong)this >> 8), fVar1 != fVar2) & 4294967295;
    }

    // 0x100bec280, 256 bytes, placed by class name
    // ShaderProgramStateCache::SetConstData3(unsigned int, float const*)
    ulong ShaderProgramStateCache::SetConstData3(uint param_1, float* param_2) {
        float fVar1;
        float fVar2;
        long lVar3;
        long lVar4;
        ulong uVar7;
        long* plVar8;
        undefined8 unaff_R15;
        unique_lock<std::mutex> local_38[20];
        uint local_24;

        local_24 = param_1;
        if (field_112 == 0) {
            if (IsOwnerThread() == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("m_isThreadSafe || IsOwnerThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "ShaderProgramStateCache.cpp",
                          81, (char*)0);
            }
        }
        if (field_112 == 0) {
            std::unique_lock<std::mutex>::unique_lock(local_38);
        } else {
            std::unique_lock<std::mutex>::unique_lock(local_38, (mutex*)&field_48);
        }
        uVar7 = eastl::vector_map<
            unsigned int, ShaderProgramStateCache::ShaderConstMapValue, eastl::less<unsigned int>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned int, ShaderProgramStateCache::ShaderConstMapValue>, eastl::allocator>>::
        operator[]((vector_map<unsigned int, ShaderProgramStateCache::ShaderConstMapValue, eastl::less<unsigned int>,
                               eastl::allocator,
                               eastl::vector<eastl::pair<unsigned int, ShaderProgramStateCache::ShaderConstMapValue>,
                                             eastl::allocator>>*)this,
                   &local_24);
        plVar8 = (long*)std::array<float, 16ul>::operator[](uVar7);
        if (!is_aligned<char>((char*)param_2, 16)) {
            /* WARNING: Subroutine does not return */
            LogAssert("is_aligned(pSrcData)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                      "ShaderProgramStateCache.cpp",
                      95, "Non-scalar shader input data should be aligned 16.");
        }
        lVar3 = *plVar8;
        lVar4 = *(long*)param_2;
        fVar1 = *(float*)(plVar8 + 1);
        fVar2 = param_2[2];
        if (fVar1 != fVar2 || lVar3 != lVar4) {
            *(float*)(plVar8 + 1) = param_2[2];
            *plVar8 = *(long*)param_2;
        }
        std::unique_lock<std::mutex>::~unique_lock(local_38);
        return CONCAT71((int7)((ulong)unaff_R15 >> 8), fVar1 != fVar2 || lVar3 != lVar4) & 4294967295;
    }

    // 0x100bec380, 256 bytes, placed by class name
    // ShaderProgramStateCache::SetConstData4(unsigned int, float const*)
    ulong ShaderProgramStateCache::SetConstData4(uint param_1, float* param_2) {
        float fVar1;
        float fVar2;
        float fVar3;
        ulong uVar6;
        float* pfVar7;
        undefined4 in_ECX;
        undefined1 auVar9[16];
        unique_lock<std::mutex> local_30[20];
        uint local_1c;

        local_1c = param_1;
        if (field_112 == 0) {
            if (IsOwnerThread() == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("m_isThreadSafe || IsOwnerThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                          "ShaderProgramStateCache.cpp",
                          87, (char*)0);
            }
        }
        if (field_112 == 0) {
            std::unique_lock<std::mutex>::unique_lock(local_30);
        } else {
            std::unique_lock<std::mutex>::unique_lock(local_30, (mutex*)&field_48);
        }
        uVar6 = eastl::vector_map<
            unsigned int, ShaderProgramStateCache::ShaderConstMapValue, eastl::less<unsigned int>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned int, ShaderProgramStateCache::ShaderConstMapValue>, eastl::allocator>>::
        operator[]((vector_map<unsigned int, ShaderProgramStateCache::ShaderConstMapValue, eastl::less<unsigned int>,
                               eastl::allocator,
                               eastl::vector<eastl::pair<unsigned int, ShaderProgramStateCache::ShaderConstMapValue>,
                                             eastl::allocator>>*)this,
                   &local_1c);
        pfVar7 = (float*)std::array<float, 16ul>::operator[](uVar6);
        if (!is_aligned<char>((char*)param_2, 16)) {
            /* WARNING: Subroutine does not return */
            LogAssert("is_aligned(pSrcData)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                      "ShaderProgramStateCache.cpp",
                      109, "Non-scalar shader input data should be aligned 16.");
        }
        fVar1 = param_2[1];
        fVar2 = param_2[2];
        fVar3 = param_2[3];
        auVar9._0_4_ = -(uint)(*pfVar7 == *param_2);
        auVar9._4_4_ = -(uint)(pfVar7[1] == fVar1);
        auVar9._8_4_ = -(uint)(pfVar7[2] == fVar2);
        auVar9._12_4_ = -(uint)(pfVar7[3] == fVar3);
        if (movmskps(in_ECX, auVar9) != 15) {
            *pfVar7 = *param_2;
            pfVar7[1] = fVar1;
            pfVar7[2] = fVar2;
            pfVar7[3] = fVar3;
        }
        std::unique_lock<std::mutex>::~unique_lock(local_30);
        return CONCAT71(
                   (int7)((ulong)pfVar7 >> 8),
                   (ushort)((ushort)(SUB161(auVar9 >> 7, 0) & 1) | (ushort)(SUB161(auVar9 >> 15, 0) & 1) << 1 |
                            (ushort)(SUB161(auVar9 >> 23, 0) & 1) << 2 | (ushort)(SUB161(auVar9 >> 31, 0) & 1) << 3 |
                            (ushort)(SUB161(auVar9 >> 39, 0) & 1) << 4 | (ushort)(SUB161(auVar9 >> 47, 0) & 1) << 5 |
                            (ushort)(SUB161(auVar9 >> 55, 0) & 1) << 6 | (ushort)(SUB161(auVar9 >> 63, 0) & 1) << 7 |
                            (ushort)(SUB161(auVar9 >> 71, 0) & 1) << 8 | (ushort)(SUB161(auVar9 >> 79, 0) & 1) << 9 |
                            (ushort)(SUB161(auVar9 >> 87, 0) & 1) << 10 | (ushort)(SUB161(auVar9 >> 95, 0) & 1) << 11 |
                            (ushort)((byte)(auVar9._12_4_ >> 7) & 1) << 12 |
                            (ushort)((byte)(auVar9._12_4_ >> 15) & 1) << 13 |
                            (ushort)((byte)(auVar9._12_4_ >> 23) & 1) << 14 |
                            (ushort)(byte)(auVar9._12_4_ >> 31) << 15) != 65535) &
               4294967295;
    }

    // 0x100bec480, 800 bytes, placed by class name
    // ShaderProgramStateCache::SetConstData(unsigned int, unsigned int, float const*, bool)
    byte ShaderProgramStateCache::SetConstData(uint param_1, uint param_2, float* param_3, bool param_4) {
        long* plVar1;
        float* pfVar2;
        float* pfVar3;
        float fVar4;
        float fVar5;
        long lVar6;
        long lVar7;
        float fVar8;
        char cVar9;
        bool bVar10;
        int iVar11;
        ulong uVar12;
        long lVar13;
        undefined7 extraout_var;
        ulong uVar14;
        byte bVar15;
        uint uVar16;
        undefined1 auVar17[16];
        unique_lock<std::mutex> local_70[16];
        float* local_60;
        float* local_58;
        uint local_4c;
        ShaderProgramStateCache* local_48;
        ulong local_40;
        uint local_34;

        if ((field_112 == 0) && (cVar9 = IsOwnerThread(), cVar9 == '\0')) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_isThreadSafe || IsOwnerThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                      "ShaderProgramStateCache.cpp",
                      142, (char*)0);
        }
        if (field_112 == 0) {
            std::unique_lock<std::mutex>::unique_lock(local_70);
        } else {
            std::unique_lock<std::mutex>::unique_lock(local_70, (mutex*)&field_48);
        }
        if (param_2 < 2) {
            /* WARNING: Subroutine does not return */
            LogAssert("floatCount > 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                      "ShaderProgramStateCache.cpp",
                      145, (char*)0);
        }
        if (((param_4) || ((param_2 & 3) == 0)) || (param_2 % 3 != 0)) {
            if (param_2 != 0) {
                uVar16 = 0;
                local_40 = 0;
                bVar15 = 0;
                local_60 = param_3;
                local_4c = param_2;
                local_48 = this;
                do {
                    if ((uVar16 & 12) == 0) {
                        local_34 = (uVar16 >> 4) + param_1;
                        uVar14 = eastl::vector_map<
                            unsigned int, ShaderProgramStateCache::ShaderConstMapValue, eastl::less<unsigned int>,
                            eastl::allocator,
                            eastl::vector<eastl::pair<unsigned int, ShaderProgramStateCache::ShaderConstMapValue>,
                                          eastl::allocator>>::
                        operator[](
                            (vector_map<
                                unsigned int, ShaderProgramStateCache::ShaderConstMapValue, eastl::less<unsigned int>,
                                eastl::allocator,
                                eastl::vector<eastl::pair<unsigned int, ShaderProgramStateCache::ShaderConstMapValue>,
                                              eastl::allocator>>*)local_48,
                            &local_34);
                        local_40 = std::array<float, 16ul>::operator[](uVar14);
                    }
                    pfVar2 = local_60 + uVar16;
                    pfVar3 = (float*)(local_40 + (ulong)(uVar16 & 12) * 4);
                    if (param_2 < 4) {
                        local_58 = pfVar3;
                        iVar11 = _memcmp(pfVar3, pfVar2, (ulong)param_2 << 2);
                        bVar10 = iVar11 == 0;
                        if (!bVar10) {
                            _memcpy(local_58, pfVar2, (ulong)param_2 << 2);
                            goto LAB_100bec650;
                        }
                    } else {
                        bVar10 = is_aligned<char>((char*)pfVar2, 16);
                        if (!bVar10) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("is_aligned(pSrcData)",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                      "render/shaders/ShaderProgramStateCache.cpp",
                                      109, "Non-scalar shader input data should be aligned 16.");
                        }
                        fVar4 = pfVar2[1];
                        fVar5 = pfVar2[2];
                        fVar8 = pfVar2[3];
                        auVar17._0_4_ = -(uint)(*pfVar3 == *pfVar2);
                        auVar17._4_4_ = -(uint)(pfVar3[1] == fVar4);
                        auVar17._8_4_ = -(uint)(pfVar3[2] == fVar5);
                        auVar17._12_4_ = -(uint)(pfVar3[3] == fVar8);
                        iVar11 = movmskps((int)CONCAT71(extraout_var, bVar10), auVar17);
                        bVar10 = iVar11 == 15;
                        if (!bVar10) {
                            *pfVar3 = *pfVar2;
                            pfVar3[1] = fVar4;
                            pfVar3[2] = fVar5;
                            pfVar3[3] = fVar8;
                        LAB_100bec650:
                            bVar10 = false;
                        }
                    }
                    bVar15 = bVar15 | bVar10 ^ 1U;
                    uVar16 = uVar16 + 4;
                    param_2 = param_2 - 4;
                } while (uVar16 < local_4c);
                goto LAB_100bec75b;
            }
        } else if (2 < param_2) {
            local_40 = 1;
            if (1 < param_2 / 3) {
                local_40 = (ulong)(param_2 / 3);
            }
            uVar14 = 0;
            lVar13 = 0;
            bVar15 = 0;
            local_48 = this;
            do {
                if ((uVar14 & 3) == 0) {
                    local_34 = ((uint)(uVar14 >> 2) & 1073741823) + param_1;
                    uVar12 = eastl::vector_map<
                        unsigned int, ShaderProgramStateCache::ShaderConstMapValue, eastl::less<unsigned int>,
                        eastl::allocator,
                        eastl::vector<eastl::pair<unsigned int, ShaderProgramStateCache::ShaderConstMapValue>,
                                      eastl::allocator>>::
                    operator[](
                        (vector_map<
                            unsigned int, ShaderProgramStateCache::ShaderConstMapValue, eastl::less<unsigned int>,
                            eastl::allocator,
                            eastl::vector<eastl::pair<unsigned int, ShaderProgramStateCache::ShaderConstMapValue>,
                                          eastl::allocator>>*)local_48,
                        &local_34);
                    lVar13 = std::array<float, 16ul>::operator[](uVar12);
                }
                bVar10 = is_aligned<char>((char*)param_3, 16);
                if (!bVar10) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("is_aligned(pSrcData)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "shaders/ShaderProgramStateCache.cpp",
                              95, "Non-scalar shader input data should be aligned 16.");
                }
                plVar1 = (long*)(lVar13 + (ulong)((uint)uVar14 & 3) * 4);
                lVar6 = *plVar1;
                lVar7 = *(long*)param_3;
                fVar4 = *(float*)(plVar1 + 1);
                fVar5 = param_3[2];
                if (fVar4 != fVar5 || lVar6 != lVar7) {
                    *(float*)(plVar1 + 1) = param_3[2];
                    *plVar1 = *(long*)param_3;
                }
                bVar15 = bVar15 | (fVar4 != fVar5 || lVar6 != lVar7);
                uVar14 = uVar14 + 1;
                param_3 = param_3 + 1;
            } while (local_40 != uVar14);
            goto LAB_100bec75b;
        }
        bVar15 = 0;
    LAB_100bec75b:
        std::unique_lock<std::mutex>::~unique_lock(local_70);
        return bVar15;
    }

    // 0x100bf15f0: the linker folded this into ShaderProgramStateCache::SetShaderConstFloat4Array(unsigned int, unsigned int, float const*), which has identical code
    ShaderProgramStateCache::SetShaderConstInt4Array(unsigned int, unsigned int, int const*);

    // 0x100bf16b0: the linker folded this into ShaderProgramStateCache::SetShaderConstFloat3Array(unsigned int, unsigned int, float const*), which has identical code
    ShaderProgramStateCache::SetShaderConstInt3Array(unsigned int, unsigned int, int const*);

    // 0x100bf16e0: the linker folded this into ShaderProgramStateCache::SetShaderConstFloat2Array(unsigned int, unsigned int, float const*), which has identical code
    ShaderProgramStateCache::SetShaderConstInt2Array(unsigned int, unsigned int, int const*);

    // 0x100bf1710: the linker folded this into ShaderProgramStateCache::SetShaderConstFloat1Array(unsigned int, unsigned int, float const*), which has identical code
    ShaderProgramStateCache::SetShaderConstInt1Array(unsigned int, unsigned int, int const*);

    // 0x100bf1710: the linker folded this into ShaderProgramStateCache::SetShaderConstFloat1Array(unsigned int, unsigned int, float const*), which has identical code
    ShaderProgramStateCache::SetShaderConstUInt1Array(unsigned int, unsigned int, unsigned int const*);

} // namespace jag::render

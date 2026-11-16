// libs/oldscape/jagex3/graphics/pixloader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

namespace jag::oldscape::graphics::pixloader {
    // 0x10392aa2c
    int32_t m_count;

    // 0x10392aa30
    int32_t m_owi;

    // 0x10392aa34
    int32_t m_ohi;

    // 0x10392aa38, set at startup by ___cxx_global_var_init.95
    Array<int> m_xof = Array<int>();

    // 0x10392aa50, set at startup by ___cxx_global_var_init.96
    Array<int> m_yof = Array<int>();

    // 0x10392aa68, set at startup by ___cxx_global_var_init.97
    Array<int> m_wi = Array<int>();

    // 0x10392aa80, set at startup by ___cxx_global_var_init.98
    Array<int> m_hi = Array<int>();

    // 0x10392aa98, set at startup by ___cxx_global_var_init.99
    SharedArray<unsigned int> m_bpal = SharedArray<unsigned int>();

    // 0x10392aab0, set at startup by ___cxx_global_var_init.100
    SharedArray<unsigned int> m_bspr = SharedArray<unsigned int>();

    // 0x1003031c0
    auto Makepix8(jagex3::Js5& js5, int arg2) {
        auto result;

        void* arg1 = (void*)(unsigned long)(unsigned int)arg2;
        if (Depack(js5, arg2) == '\0') {
            result.unique_ptr<true, void>(arg1);
        } else {
            Makepix8(&result);
        }
        return result;
    }

    // 0x10031e430
    void Depack(PacketJ<Array<unsigned char>>& packetJ) {
        char cVar1;
        uint8_t uVar2;
        uint32_t uVar5;
        unsigned int* puVar7;
        int* piVar9;
        Array<unsigned char>* pAVar10;
        uint8_t* puVar11;
        unsigned long uVar12;
        unsigned long uVar14;
        unsigned long local_58;
        unsigned long local_50;
        unsigned long local_40;

        long lVar6 = packetJ.GetTextureAtlas();
        packetJ.SetPos(lVar6 - 2);
        unsigned short uVar3 = packetJ.g2();
        m_count = (unsigned int)uVar3;
        m_xof.set_max_size((unsigned long)uVar3, 3);
        m_yof.set_max_size((long)(int)m_count, 3);
        m_wi.set_max_size((long)(int)m_count, 3);
        m_hi.set_max_size((long)(int)m_count, 3);
        SharedArray<Array<unsigned char>> local_70(256);
        m_bspr = local_70;
        unsigned long local_48 = lVar6 - 7;
        packetJ.SetPos(local_48 + (long)(int)m_count * -8);
        uVar3 = packetJ.g2();
        m_owi = (unsigned int)uVar3;
        uVar3 = packetJ.g2();
        m_ohi = (unsigned int)uVar3;
        unsigned int uVar4 = packetJ.g1();
        if (0 < (int)m_count) {
            uVar12 = 0;
            do {
                uVar3 = packetJ.g2();
                puVar7 = &m_xof[uVar12];
                *puVar7 = (unsigned int)uVar3;
                uVar12 = uVar12 + 1;
            } while ((long)uVar12 < (long)(int)m_count);
        }
        if (0 < (int)m_count) {
            uVar12 = 0;
            do {
                uVar3 = packetJ.g2();
                puVar7 = &m_yof[uVar12];
                *puVar7 = (unsigned int)uVar3;
                uVar12 = uVar12 + 1;
            } while ((long)uVar12 < (long)(int)m_count);
        }
        unsigned long local_38 = (unsigned long)uVar4 & 255;
        if (0 < (int)m_count) {
            uVar12 = 0;
            do {
                uVar3 = packetJ.g2();
                puVar7 = &m_wi[uVar12];
                *puVar7 = (unsigned int)uVar3;
                uVar12 = uVar12 + 1;
            } while ((long)uVar12 < (long)(int)m_count);
        }
        int iVar13 = (int)local_38;
        uVar4 = iVar13 + 1U;
        if (0 < (int)m_count) {
            local_40 = (((uint64_t)local_40._4_4_ << 32) | (uint32_t)(iVar13 + 1U));
            uVar12 = 0;
            do {
                uVar3 = packetJ.g2();
                puVar7 = &m_hi[uVar12];
                *puVar7 = (unsigned int)uVar3;
                uVar12 = uVar12 + 1;
            } while ((long)uVar12 < (long)(int)m_count);
            iVar13 = (int)local_38;
            uVar4 = (unsigned int)local_40;
        }
        packetJ.SetPos(local_48 - ((unsigned long)(unsigned int)(iVar13 * 3) + (long)(int)(m_count << 3)));
        local_70 = SharedArray((unsigned long)uVar4);
        m_bpal = local_70;
        uint32_t* puVar8 = &m_bpal[0];
        *puVar8 = 0;
        if (iVar13 != 0) {
            uVar12 = 1;
            do {
                uVar5 = packetJ.g3();
                puVar8 = &m_bpal[uVar12];
                *puVar8 = uVar5;
                piVar9 = &m_bpal[uVar12];
                if (*piVar9 == 0) {
                    puVar8 = &m_bpal[uVar12];
                    *puVar8 = 1;
                }
                lVar6 = uVar12 - uVar4;
                uVar12 = uVar12 + 1;
            } while (lVar6 != -1);
        }
        packetJ.SetPos(0);
        if (0 < (int)m_count) {
            uVar12 = 0;
            do {
                piVar9 = &m_wi[uVar12];
                iVar13 = *piVar9;
                puVar7 = &m_hi[uVar12];
                local_40 = (unsigned long)*puVar7;
                uVar4 = *puVar7 * iVar13;
                local_38 = (long)iVar13;
                if (m_bspr <= uVar12) {
                    LogAssert("(index < m_Size)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                              299, "Index of %d outside range 0 to %d", uVar12, m_bspr - 1);
                }
                pAVar10 = (Array<unsigned char>*)(*(
                    (shared_ptr<Array<unsigned char>[]>*)&reinterpret_cast<const uint64_t*>(&m_bspr)[1]))[uVar12];
                pAVar10->set_max_size((long)(int)uVar4, 0);
                if (m_bspr <= uVar12) {
                    LogAssert("(index < m_Size)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                              299, "Index of %d outside range 0 to %d", uVar12, m_bspr - 1);
                }
                local_50 = uVar12;
                pAVar10 = (Array<unsigned char>*)(*(
                    (shared_ptr<Array<unsigned char>[]>*)&reinterpret_cast<const uint64_t*>(&m_bspr)[1]))[uVar12];
                cVar1 = packetJ.g1();
                if (!cVar1) {
                    if (0 < (int)uVar4) {
                        uVar12 = 0;
                        do {
                            uVar2 = packetJ.g1();
                            puVar11 = (uint8_t*)(*pAVar10)[uVar12];
                            *puVar11 = uVar2;
                            uVar12 = uVar12 + 1;
                        } while (uVar4 != uVar12);
                    }
                } else if ((cVar1 == '\x01') && (0 < (int)local_38)) {
                    local_58 = local_38 & 4294967295;
                    uVar12 = 0;
                    do {
                        uVar14 = local_40;
                        local_48 = uVar12;
                        if (0 < (int)local_40) {
                            do {
                                uVar2 = packetJ.g1();
                                puVar11 = (uint8_t*)(*pAVar10)[uVar12];
                                *puVar11 = uVar2;
                                uVar12 = uVar12 + local_38;
                                uVar14 = uVar14 - 1;
                            } while (uVar14 != 0);
                        }
                        uVar12 = local_48 + 1;
                    } while (uVar12 != local_58);
                }
                uVar12 = local_50 + 1;
            } while ((long)uVar12 < (long)(int)m_count);
        }
    }

    // 0x10031e950
    unsigned long Depack(jagex3::Js5& js5, int arg2) {
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_30;
        js5.GetFile(local_30, arg2);
        bool bVar1 = local_30 == nullptr;
        if (!bVar1) {
            Depack((PacketJ<Array<unsigned char> _>*)*local_30);
        }
        return bVar1 & 4294967295 ^ 1;
    }

    // 0x10031e9d0
    unsigned long Depack(jagex3::Js5& js5, int arg2, int arg3) {
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_38;
        js5.GetFile(local_38, arg2, arg3, nullptr);
        bool bVar1 = local_38 == nullptr;
        if (!bVar1) {
            Depack((PacketJ<Array<unsigned char> _>*)*local_38);
        }
        return bVar1 & 4294967295 ^ 1;
    }

    // 0x10031ea60
    void Cleanup() {
        m_xof.clear();
        m_yof.clear();
        m_wi.clear();
        m_hi.clear();
        m_bpal.clear();
        m_bspr.clear();
    }

    // 0x10031eaf0
    void AddAlphaToPalette() {
        unsigned long uVar2;
        int* piVar3;
        unsigned long arg1;

        long lVar1 = m_bpal.HeapBeginPtr();
        if (lVar1 != 0) {
            arg1 = 0;
            do {
                piVar3 = &m_bpal[arg1];
                if (*piVar3 != 0) {
                    lVar1 = m_bpal[arg1];
                    *(uint8_t*)(lVar1 + 3) = 255;
                }
                arg1 = arg1 + 1;
                uVar2 = m_bpal.HeapBeginPtr();
            } while (arg1 < uVar2);
        }
    }

    // 0x10031eb60
    auto Makepix32() {
        auto result;
        uint8_t* pbVar5;
        unsigned long arg1_00;

        int* arg1 = &m_wi[0];
        int* arg2 = &m_hi[0];
        make_shared<Pix32, int&, int&>(&result, arg1, arg2);
        uint32_t uVar1 = m_owi;
        long lVar3 = (result).operator->();
        *(uint32_t*)(lVar3 + 40) = uVar1;
        uVar1 = m_ohi;
        lVar3 = (result).operator->();
        *(uint32_t*)(lVar3 + 44) = uVar1;
        uint32_t* puVar4 = &m_xof[0];
        uVar1 = *puVar4;
        lVar3 = (result).operator->();
        *(uint32_t*)(lVar3 + 32) = uVar1;
        puVar4 = &m_yof[0];
        uVar1 = *puVar4;
        lVar3 = (result).operator->();
        *(uint32_t*)(lVar3 + 36) = uVar1;
        lVar3 = (result).operator->();
        int iVar2 = *(int*)(lVar3 + 24);
        lVar3 = (result).operator->();
        unsigned int uVar6 = iVar2 * *(int*)(lVar3 + 28);
        if (m_bspr == 0) {
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/SharedArray.h", 299,
                      "Index of %d outside range 0 to %d", 0, 18446744073709551615);
        }
        Array<unsigned char>* array = (Array<unsigned char>*)(*(
            (shared_ptr<Array<unsigned char>[]>*)&reinterpret_cast<const uint64_t*>(&m_bspr)[1]))[0];
        AddAlphaToPalette();
        SharedArray<unsigned int>* this_00 = (SharedArray<unsigned int>*)(result).operator->();
        if (0 < (int)uVar6) {
            arg1_00 = 0;
            do {
                pbVar5 = (uint8_t*)(*array)[arg1_00];
                puVar4 = &m_bpal[(unsigned long)*pbVar5];
                uVar1 = *puVar4;
                puVar4 = (uint32_t*)(*this_00)[arg1_00];
                *puVar4 = uVar1;
                arg1_00 = arg1_00 + 1;
            } while (uVar6 != arg1_00);
        }
        Cleanup();
        return result;
    }

    // 0x10031ecf0
    unsigned long ExportpixfontGeneric(const char* str1, jagex3::Js5& js51, jagex3::Js5& js52, const char* str2) {
        unsigned int uVar3;
        PacketT<Array<unsigned char>>* pPVar5;
        unsigned char* puVar7;
        TextureAtlasReference* pTVar8;
        unsigned long uVar9;
        eastl::string local_2e0;
        Filename local_2a0;
        File local_170;

        int arg1 = js51.GetGroupId(str2);
        int arg3 = js51.GetFileId(arg1, "");
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_2c0;
        shared_ptr local_2b0;
        js51.GetFile(local_2c0, arg1, arg3, nullptr);
        if (!local_2c0 == nullptr) {
            if ((uint8_t*)js52.GetFile(local_2b0, arg1, arg3, nullptr) == DataStatus::READY) {
                if (shared_ptr::operator_cast_to_bool(&local_2b0) != '\0') {
                    pPVar5 = (PacketT<Array<unsigned char>>*)local_2b0.operator->();
                    if (pPVar5->GetDataPtr() != 0) {
                        local_2e0 = eastl::string((CtorSprintf*)"%s_sprite.raw", str1);
                        local_2a0 = Filename(&local_2e0);
                        local_170 = File(&local_2a0, 1538, nullptr);
                        pPVar5 = (PacketT<Array<unsigned char>>*)local_2c0.operator->();
                        puVar7 = (unsigned char*)pPVar5->GetDataPtr();
                        pTVar8 = (TextureAtlasReference*)local_2c0.operator->();
                        uVar3 = pTVar8->GetTextureAtlas();
                        local_170.write(puVar7, uVar3, nullptr);
                        local_2e0 = eastl::string((CtorSprintf*)"%s_metrics.raw", str1);
                        local_2a0 = Filename(&local_2e0);
                        local_170 = File(&local_2a0, 1538, nullptr);
                        pPVar5 = (PacketT<Array<unsigned char>>*)local_2b0.operator->();
                        puVar7 = (unsigned char*)pPVar5->GetDataPtr();
                        pTVar8 = (TextureAtlasReference*)local_2b0.operator->();
                        uVar3 = pTVar8->GetTextureAtlas();
                        local_170.write(puVar7, uVar3, nullptr);
                        uVar9 = (((uint64_t)((int64_t)((unsigned long)puVar7 >> 8)) << 8) | (uint8_t)1);
                        goto LAB_10031ef36;
                    }
                }
            }
        }
        uVar9 = 0;
    LAB_10031ef36:
        return uVar9 & 4294967295;
    }

    // 0x10031eff0
    auto MakepixfontGeneric(PacketJ<Array<unsigned char>>& packetJ1, PacketJ<Array<unsigned char>>& packetJ2) {
        auto result;
        Depack(packetJ1);
        MakePixfontGeneric(&result, packetJ2);
        return result;
    }

    // 0x10031f020
    auto MakePixfontGeneric(PacketJ<Array<unsigned char>>& packetJ) {
        auto result;

        long lVar1 = packetJ.GetTextureAtlas();
        auto arg1 = packetJ.GetDataPtr();
        Array<signed char> local_38(arg1, arg1 + lVar1);
        make_shared<jstring::PixfontGeneric, Array<signed char>, Array<int>, Array<int>, Array<int>, Array<int>,
                    SharedArray<unsigned int>, SharedArray<Array<unsigned char>>>(
            &result, &local_38, (Array<int>*)&m_xof, (Array<int>*)&m_yof, (Array<int>*)&m_wi,
            (SharedArray<unsigned int>*)&m_hi, (SharedArray<Array<unsigned char> _>*)&m_bpal);
        Cleanup();
        return result;
    }

    // 0x10031f1b0
    Array<Pix32>* Makepix32Array() {
        int iVar1;
        uint32_t uVar2;
        SharedArray<unsigned int>* sharedArray;
        uint32_t* puVar3;
        int* piVar4;
        Array<unsigned char>* this_00;
        uint8_t* pbVar5;
        Array<Pix32>* in_RDI;
        unsigned int uVar6;
        unsigned long uVar7;
        SharedArray<unsigned int> local_58;
        unsigned long local_40;
        Array<Pix32>* local_38;

        return local_38 = in_RDI;
        new (in_RDI) Array<Pix32>((long)m_count);
        AddAlphaToPalette();
        if (0 < m_count) {
            uVar7 = 0;
            do {
                sharedArray = (SharedArray<unsigned int>*)(*local_38)[uVar7];
                *(uint32_t*)(sharedArray + 40) = m_owi;
                *(uint32_t*)(sharedArray + 44) = m_ohi;
                puVar3 = &m_xof[uVar7];
                *(uint32_t*)(sharedArray + 32) = *puVar3;
                puVar3 = &m_yof[uVar7];
                *(uint32_t*)(sharedArray + 36) = *puVar3;
                puVar3 = &m_wi[uVar7];
                *(uint32_t*)(sharedArray + 24) = *puVar3;
                piVar4 = &m_hi[uVar7];
                iVar1 = *piVar4;
                *(int*)(sharedArray + 28) = iVar1;
                uVar6 = iVar1 * *(int*)(sharedArray + 24);
                if (m_bspr <= uVar7) {
                    LogAssert("(index < m_Size)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                              299, "Index of %d outside range 0 to %d", uVar7, m_bspr - 1);
                }
                this_00 = (Array<unsigned char>*)(*(
                    (shared_ptr<Array<unsigned char>[]>*)&reinterpret_cast<const uint64_t*>(&m_bspr)[1]))[uVar7];
                local_58 = SharedArray((long)(int)uVar6);
                local_40 = uVar7;
                *sharedArray = local_58;
                if (0 < (int)uVar6) {
                    uVar7 = 0;
                    do {
                        pbVar5 = (uint8_t*)(*this_00)[uVar7];
                        puVar3 = &m_bpal[(unsigned long)*pbVar5];
                        uVar2 = *puVar3;
                        puVar3 = (uint32_t*)(*sharedArray)[uVar7];
                        *puVar3 = uVar2;
                        uVar7 = uVar7 + 1;
                    } while (uVar6 != uVar7);
                }
                uVar7 = local_40 + 1;
            } while ((long)uVar7 < (long)m_count);
        }
        Cleanup();
    }

    // 0x10031f3a0
    auto Makepix8() {
        auto result;

        Pix8* pix8 = (Pix8*)operator new(72);
        new (pix8) Pix8();
        result.unique_ptr<true, void>(pix8);
        AddAlphaToPalette();
        uint32_t uVar1 = m_owi;
        long lVar2 = (result).operator->();
        *(uint32_t*)(lVar2 + 64) = uVar1;
        uVar1 = m_ohi;
        lVar2 = (result).operator->();
        *(uint32_t*)(lVar2 + 68) = uVar1;
        uint32_t* puVar3 = &m_xof[0];
        uVar1 = *puVar3;
        lVar2 = (result).operator->();
        *(uint32_t*)(lVar2 + 56) = uVar1;
        puVar3 = &m_yof[0];
        uVar1 = *puVar3;
        lVar2 = (result).operator->();
        *(uint32_t*)(lVar2 + 60) = uVar1;
        puVar3 = &m_wi[0];
        uVar1 = *puVar3;
        lVar2 = (result).operator->();
        *(uint32_t*)(lVar2 + 48) = uVar1;
        puVar3 = &m_hi[0];
        uVar1 = *puVar3;
        lVar2 = (result).operator->();
        *(uint32_t*)(lVar2 + 52) = uVar1;
        lVar2 = (result).operator->();
        (*((lVar2 + 24))) = m_bpal;
        if (m_bspr == 0) {
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/SharedArray.h", 299,
                      "Index of %d outside range 0 to %d", 0, 18446744073709551615);
        }
        Array<unsigned char>* arg1 = (Array<unsigned char>*)(*(
            (shared_ptr<Array<unsigned char>[]>*)&reinterpret_cast<const uint64_t*>(&m_bspr)[1]))[0];
        Array<unsigned char>* this_00 = (Array<unsigned char>*)(result).operator->();
        *this_00 = *arg1;
        Cleanup();
        return result;
    }

    // 0x10031f520
    auto Pix8Array() {
        Array<unsigned char>* array;
        uint32_t* puVar1;
        Array<unsigned char>* arg1;
        unsigned long arg1_00;

        auto result((long)m_count);
        AddAlphaToPalette();
        if (0 < m_count) {
            arg1_00 = 0;
            do {
                array = (Array<unsigned char>*)(result)[arg1_00];
                *(uint32_t*)(array + 64) = m_owi;
                *(uint32_t*)(array + 68) = m_ohi;
                puVar1 = &m_xof[arg1_00];
                *(uint32_t*)(array + 56) = *puVar1;
                puVar1 = &m_yof[arg1_00];
                *(uint32_t*)(array + 60) = *puVar1;
                puVar1 = (uint32_t*)m_wi[arg1_00];
                *(uint32_t*)(array + 48) = *puVar1;
                puVar1 = (uint32_t*)m_hi[arg1_00];
                *(uint32_t*)(array + 52) = *puVar1;
                ((array + 24))->ref_assign(m_bpal);
                if (m_bspr <= arg1_00) {
                    LogAssert("(index < m_Size)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                              299, "Index of %d outside range 0 to %d", arg1_00, m_bspr - 1);
                }
                arg1 = (Array<unsigned char>*)(*(
                    (shared_ptr<Array<unsigned char>[]>*)&reinterpret_cast<const uint64_t*>(&m_bspr)[1]))[arg1_00];
                *array = *arg1;
                arg1_00 = arg1_00 + 1;
            } while ((long)arg1_00 < (long)m_count);
        }
        Cleanup();
        return result;
    }

    // 0x10031f690
    auto Makepix8Array(PacketJ<Array<unsigned char>>& packetJ) {
        auto result;
        Depack(packetJ);
        Pix8Array(&result);
        return result;
    }

    // 0x10031f6c0
    auto Makepix8Array(jagex3::Js5& js5, int arg2) {
        if (Depack(js5, arg2) == '\0') {
            auto result;
        } else {
            Pix8Array(&result);
        }
        return result;
    }

    // 0x10031f6f0
    auto Makepix8Multi(jagex3::Js5& js5, int arg2) {
        auto result;
        ReturnValue local_30;

        Makepix8Array(&local_30, js5, arg2);
        if (local_30.empty() == '\0') {
            result = std::make_unique<pix8multi, Array<Pix8>>(local_30);
        } else {
            result.unique_ptr<true, void>(js5);
        }
        return result;
    }

    // 0x10031f7e0
    auto Makepix32Multi(jagex3::Js5& js5, int arg2) {
        ReturnValue local_38;
        ReturnValue local_20;

        Makepix32Array(&local_38, js5, arg2);
        if (local_38.empty() == '\0') {
            local_20 = std::make_unique<pix32multi, Array<Pix32>>(local_38);
            auto result(local_20);
        } else {
            result.unique_ptr<true, void>(js5);
        }
        return result;
    }

    // 0x10031f860
    auto Makepix32Array(jagex3::Js5& js5, int arg2) {
        if (Depack(js5, arg2) == '\0') {
            auto result;
        } else {
            Makepix32Array();
        }
        return result;
    }

    // 0x10031f920
    auto Makepix32(jagex3::Js5& js5, int arg2) {
        if (Depack(js5, arg2) == '\0') {
            auto result;
        } else {
            Makepix32(&result);
        }
        return result;
    }

    // 0x10031f960
    auto Makepix8Multi(jagex3::Js5& js5, const char* str1, const char* str2) {
        auto result;

        int arg1 = js5.GetGroupId(str1);
        int arg3 = js5.GetFileId(arg1, str2);
        Makepix8Multi(&result, js5, arg1, arg3);
        return result;
    }

    // 0x10031f9b0
    auto Makepix8Multi(jagex3::Js5& js5, int arg2, int arg3) {
        ReturnValue local_38;
        ReturnValue local_20;

        Makepix8Array(&local_38, js5, arg2, arg3);
        if (local_38.empty() == '\0') {
            local_20 = std::make_unique<pix8multi, Array<Pix8>>(local_38);
            auto result(local_20);
        } else {
            result.unique_ptr<true, void>(js5);
        }
        return result;
    }

    // 0x10031fa30
    auto Makepix8Array(jagex3::Js5& js5, const char* str1, const char* str2) {
        auto result;

        int arg1 = js5.GetGroupId(str1);
        int arg3 = js5.GetFileId(arg1, str2);
        Makepix8Array(&result, js5, arg1, arg3);
        return result;
    }

    // 0x10031fa80
    auto Makepix8Array(jagex3::Js5& js5, int arg2, int arg3) {
        if (Depack(js5, arg2, arg3) == '\0') {
            auto result;
        } else {
            Pix8Array(&result);
        }
        return result;
    }

    // 0x10031fac0
    auto Makepix8(jagex3::Js5& js5, const char* str1, const char* str2) {
        auto result;

        int arg1 = js5.GetGroupId(str1);
        int arg3 = js5.GetFileId(arg1, str2);
        Makepix8(&result, js5, arg1, arg3);
        return result;
    }

    // 0x10031fb10
    auto Makepix8(jagex3::Js5& js5, int arg2, int arg3) {
        auto result;

        void* arg1 = (void*)(unsigned long)(unsigned int)arg2;
        if (Depack(js5, arg2, arg3) == '\0') {
            result.unique_ptr<true, void>(arg1);
        } else {
            Makepix8(&result);
        }
        return result;
    }

    // 0x10031fb50
    auto Makepix32Multi(jagex3::Js5& js5, const char* str1, const char* str2) {
        auto result;

        int arg1 = js5.GetGroupId(str1);
        int arg3 = js5.GetFileId(arg1, str2);
        Makepix32Multi(&result, js5, arg1, arg3);
        return result;
    }

    // 0x10031fba0
    auto Makepix32Multi(jagex3::Js5& js5, int arg2, int arg3) {
        ReturnValue local_38;
        ReturnValue local_20;

        Makepix32Array(&local_38, js5, arg2, arg3);
        if (local_38.empty() == '\0') {
            local_20 = std::make_unique<pix32multi, Array<Pix32>>(local_38);
            auto result(local_20);
        } else {
            result.unique_ptr<true, void>(js5);
        }
        return result;
    }

    // 0x10031fc20
    auto Makepix32Array(jagex3::Js5& js5, const char* str1, const char* str2) {
        auto result;

        int arg1 = js5.GetGroupId(str1);
        int arg3 = js5.GetFileId(arg1, str2);
        Makepix32Array(&result, js5, arg1, arg3);
        return result;
    }

    // 0x10031fc70
    auto Makepix32Array(jagex3::Js5& js5, int arg2, int arg3) {
        if (Depack(js5, arg2, arg3) == '\0') {
            auto result;
        } else {
            Makepix32Array();
        }
        return result;
    }

    // 0x10031fcb0
    auto Makepix32(jagex3::Js5& js5, const char* str1, const char* str2) {
        auto result;

        int arg1 = js5.GetGroupId(str1);
        int arg3 = js5.GetFileId(arg1, str2);
        Makepix32(&result, js5, arg1, arg3);
        return result;
    }

    // 0x10031fd00
    auto Makepix32(jagex3::Js5& js5, int arg2, int arg3) {
        if (Depack(js5, arg2, arg3) == '\0') {
            auto result;
        } else {
            Makepix32(&result);
        }
        return result;
    }

    // 0x10031fd40
    auto MakepixfontGeneric(jagex3::Js5& js51, jagex3::Js5& js52, const char* str1, const char* str2) {
        auto result;

        int arg1 = js51.GetGroupId(str1);
        int arg4 = js51.GetFileId(arg1, str2);
        MakepixfontGeneric(&result, js51, js52, arg1, arg4);
        return result;
    }

    // 0x10031fda0
    auto MakepixfontGeneric(jagex3::Js5& js51, jagex3::Js5& js52, int arg3, int arg4) {
        PacketJ<Array<unsigned char> _>* packetJ;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_40;

        if (Depack(js51, arg3, arg4) == '\0') {
            auto result;
        } else {
            local_40 = shared_ptr();
            if ((uint8_t*)js52.GetFile(local_40, arg3, arg4, nullptr) == DataStatus::READY) {
                if (((PacketT<Array<unsigned char>>*)local_40.operator->())->GetDataPtr() == 0) {
                    new (&result) shared_ptr();
                } else {
                    packetJ = (PacketJ<Array<unsigned char> _>*)*local_40;
                    MakePixfontGeneric(&result, packetJ);
                }
            } else {
                new (&result) shared_ptr();
            }
        }
        return result;
    }

    // 0x10031fea0
    auto Makepix8(PacketJ<Array<unsigned char>>& packetJ) {
        auto result;
        Depack(packetJ);
        Makepix8(&result);
        return result;
    }

    // 0x10031fed0
    auto Makepix32Array(PacketJ<Array<unsigned char>>& packetJ) {
        auto result;
        Depack(packetJ);
        Makepix32Array();
        return result;
    }

    // 0x10031ff00
    auto Makepix32(PacketJ<Array<unsigned char>>& packetJ) {
        auto result;
        Depack(packetJ);
        Makepix32(&result);
        return result;
    }

} // namespace jag::oldscape::graphics::pixloader

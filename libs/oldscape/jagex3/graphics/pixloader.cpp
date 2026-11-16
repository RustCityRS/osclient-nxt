// libs/oldscape/jagex3/graphics/pixloader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

namespace jag::oldscape::graphics::pixloader {
    // 0x10392aa2c, 4 bytes, __common; zero-initialised
    m_count;

    // 0x10392aa30, 4 bytes, __common; zero-initialised
    m_owi;

    // 0x10392aa34, 4 bytes, __common; zero-initialised
    m_ohi;

    // 0x10392aa38, 24 bytes, __common; set at startup by ___cxx_global_var_init.95
    Array<int, eastl::allocator> m_xof = Array<int, eastl::allocator>();

    // 0x10392aa50, 24 bytes, __common; set at startup by ___cxx_global_var_init.96
    Array<int, eastl::allocator> m_yof = Array<int, eastl::allocator>();

    // 0x10392aa68, 24 bytes, __common; set at startup by ___cxx_global_var_init.97
    Array<int, eastl::allocator> m_wi = Array<int, eastl::allocator>();

    // 0x10392aa80, 24 bytes, __common; set at startup by ___cxx_global_var_init.98
    Array<int, eastl::allocator> m_hi = Array<int, eastl::allocator>();

    // 0x10392aa98, 24 bytes, __common; set at startup by ___cxx_global_var_init.99
    SharedArray<unsigned int> m_bpal = SharedArray<unsigned int>();

    // 0x10392aab0, 24 bytes, __common; set at startup by ___cxx_global_var_init.100
    SharedArray<unsigned int> m_bspr = SharedArray<unsigned int>();

    // 0x1003031c0, 48 bytes, placed by class name and debug map
    // Makepix8(jagex3::Js5&, int)
    pixloader* Makepix8(Js5* param_1, int param_2) {
        if (Depack(param_1, param_2) == '\0') {
            std::unique_ptr<Pix8, std::default_delete<Pix8>>::unique_ptr<true, void>((_func_decltype_nullptr*)this);
        } else {
            Makepix8(this);
        }
        return this;
    }

    // 0x10031e430, 1296 bytes, placed by class name
    // Depack(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void Depack(PacketJ* param_1) {
        char cVar1;
        undefined1 uVar2;
        ushort uVar3;
        uint uVar4;
        undefined4 uVar5;
        long lVar6;
        uint* puVar7;
        undefined4* puVar8;
        int* piVar9;
        Array<unsigned char, eastl::allocator>* pAVar10;
        undefined1* puVar11;
        ulong uVar12;
        int iVar13;
        ulong uVar14;
        SharedArray<Array<unsigned char, eastl::allocator>> local_70[24];
        ulong local_58;
        ulong local_50;
        ulong local_48;
        ulong local_40;
        ulong local_38;

        lVar6 = param_1->GetTextureAtlas();
        param_1->SetPos(lVar6 - 2);
        uVar3 = param_1->g2();
        m_count = (uint)uVar3;
        m_xof.set_max_size((ulong)uVar3, 3);
        m_yof.set_max_size((long)(int)m_count, 3);
        m_wi.set_max_size((long)(int)m_count, 3);
        m_hi.set_max_size((long)(int)m_count, 3);
        SharedArray<Array<unsigned char, eastl::allocator>>::SharedArray(local_70, 256);
        SharedArray<Array<unsigned char, eastl::allocator>>::operator=(
            (SharedArray<Array<unsigned char, eastl::allocator>>*)&m_bspr, (SharedArray*)local_70);
        local_70->~SharedArray();
        local_48 = lVar6 - 7;
        param_1->SetPos(local_48 + (long)(int)m_count * -8);
        uVar3 = param_1->g2();
        m_owi = (uint)uVar3;
        uVar3 = param_1->g2();
        m_ohi = (uint)uVar3;
        uVar4 = param_1->g1();
        if (0 < (int)m_count) {
            uVar12 = 0;
            do {
                uVar3 = param_1->g2();
                puVar7 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_xof, uVar12);
                *puVar7 = (uint)uVar3;
                uVar12 = uVar12 + 1;
            } while ((long)uVar12 < (long)(int)m_count);
        }
        if (0 < (int)m_count) {
            uVar12 = 0;
            do {
                uVar3 = param_1->g2();
                puVar7 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_yof, uVar12);
                *puVar7 = (uint)uVar3;
                uVar12 = uVar12 + 1;
            } while ((long)uVar12 < (long)(int)m_count);
        }
        local_38 = (ulong)uVar4 & 255;
        if (0 < (int)m_count) {
            uVar12 = 0;
            do {
                uVar3 = param_1->g2();
                puVar7 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_wi, uVar12);
                *puVar7 = (uint)uVar3;
                uVar12 = uVar12 + 1;
            } while ((long)uVar12 < (long)(int)m_count);
        }
        iVar13 = (int)local_38;
        uVar4 = iVar13 + 1U;
        if (0 < (int)m_count) {
            local_40 = CONCAT44(local_40._4_4_, iVar13 + 1U);
            uVar12 = 0;
            do {
                uVar3 = param_1->g2();
                puVar7 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_hi, uVar12);
                *puVar7 = (uint)uVar3;
                uVar12 = uVar12 + 1;
            } while ((long)uVar12 < (long)(int)m_count);
            iVar13 = (int)local_38;
            uVar4 = (uint)local_40;
        }
        param_1->SetPos(local_48 - ((ulong)(uint)(iVar13 * 3) + (long)(int)(m_count << 3)));
        new (local_70) SharedArray<unsigned int>((ulong)uVar4);
        SharedArray<unsigned int>::operator=((SharedArray<unsigned int>*)&m_bpal, (SharedArray*)local_70);
        local_70->~SharedArray();
        puVar8 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)&m_bpal, 0);
        *puVar8 = 0;
        if (iVar13 != 0) {
            uVar12 = 1;
            do {
                uVar5 = param_1->g3();
                puVar8 =
                    (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)&m_bpal, uVar12);
                *puVar8 = uVar5;
                piVar9 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)&m_bpal, uVar12);
                if (*piVar9 == 0) {
                    puVar8 =
                        (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)&m_bpal, uVar12);
                    *puVar8 = 1;
                }
                lVar6 = uVar12 - uVar4;
                uVar12 = uVar12 + 1;
            } while (lVar6 != -1);
        }
        param_1->SetPos(0);
        if (0 < (int)m_count) {
            uVar12 = 0;
            do {
                piVar9 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_wi, uVar12);
                iVar13 = *piVar9;
                puVar7 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_hi, uVar12);
                local_40 = (ulong)*puVar7;
                uVar4 = *puVar7 * iVar13;
                local_38 = (long)iVar13;
                if (m_bspr <= uVar12) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("(index < m_Size)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                              299, "Index of %d outside range 0 to %d", uVar12, m_bspr - 1);
                }
                pAVar10 = (Array<unsigned char, eastl::allocator>*)
                    shared_ptr<Array<unsigned char, eastl::allocator>[]>::operator[](
                        (shared_ptr<Array<unsigned char, eastl::allocator>[]>*)&DAT_10392aab8, uVar12);
                pAVar10->set_max_size((long)(int)uVar4, 0);
                if (m_bspr <= uVar12) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("(index < m_Size)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                              299, "Index of %d outside range 0 to %d", uVar12, m_bspr - 1);
                }
                local_50 = uVar12;
                pAVar10 = (Array<unsigned char, eastl::allocator>*)
                    shared_ptr<Array<unsigned char, eastl::allocator>[]>::operator[](
                        (shared_ptr<Array<unsigned char, eastl::allocator>[]>*)&DAT_10392aab8, uVar12);
                cVar1 = param_1->g1();
                if (cVar1 == '\0') {
                    if (0 < (int)uVar4) {
                        uVar12 = 0;
                        do {
                            uVar2 = param_1->g1();
                            puVar11 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar10, uVar12);
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
                                uVar2 = param_1->g1();
                                puVar11 =
                                    (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar10, uVar12);
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

    // 0x10031e950, 128 bytes, placed by class name
    // Depack(jagex3::Js5&, int)
    ulong Depack(Js5* param_1, int param_2) {
        bool bVar1;
        undefined7 extraout_var;
        PacketJ* pPVar2;
        undefined4 in_register_00000034;
        shared_ptr local_30;

        new (&local_30) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(
            (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_2));
        param_1->GetFile(&local_30, param_2);
        bVar1 = operator==(&local_30, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            pPVar2 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_30);
            Depack(pPVar2);
        }
        local_30.~shared_ptr();
        return CONCAT71(extraout_var, bVar1) & 4294967295 ^ 1;
    }

    // 0x10031e9d0, 144 bytes, placed by class name
    // Depack(jagex3::Js5&, int, int)
    ulong Depack(Js5* param_1, int param_2, int param_3) {
        bool bVar1;
        undefined7 extraout_var;
        PacketJ* pPVar2;
        undefined4 in_register_00000034;
        shared_ptr local_38;

        new (&local_38) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(
            (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_2));
        ((shared_ptr*)param_1)->GetFile((int)&local_38, param_2, (array*)(ulong)(uint)param_3);
        bVar1 = operator==(&local_38, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            pPVar2 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_38);
            Depack(pPVar2);
        }
        local_38.~shared_ptr();
        return CONCAT71(extraout_var, bVar1) & 4294967295 ^ 1;
    }

    // 0x10031ea60, 80 bytes, placed by class name
    // Cleanup()
    void Cleanup() {
        m_xof.clear();
        m_yof.clear();
        m_wi.clear();
        m_hi.clear();
        m_bpal.clear();
        m_bspr.clear();
    }

    // 0x10031eaf0, 112 bytes, placed by class name
    // AddAlphaToPalette()
    void AddAlphaToPalette() {
        long lVar1;
        ulong uVar2;
        int* piVar3;
        ulong uVar4;

        lVar1 = m_bpal.HeapBeginPtr();
        if (lVar1 != 0) {
            uVar4 = 0;
            do {
                piVar3 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)&m_bpal, uVar4);
                if (*piVar3 != 0) {
                    lVar1 = SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)&m_bpal, uVar4);
                    *(undefined1*)(lVar1 + 3) = 255;
                }
                uVar4 = uVar4 + 1;
                uVar2 = m_bpal.HeapBeginPtr();
            } while (uVar4 < uVar2);
        }
    }

    // 0x10031eb60, 400 bytes, placed by class name
    // Makepix32()
    pixloader* Makepix32() {
        undefined4 uVar1;
        int iVar2;
        int* piVar3;
        int* piVar4;
        long lVar5;
        undefined4* puVar6;
        Array<unsigned char, eastl::allocator>* this_00;
        SharedArray<unsigned int>* this_01;
        byte* pbVar7;
        uint uVar8;
        ulong uVar9;

        piVar3 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_wi, 0);
        piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_hi, 0);
        make_shared<Pix32, int&, int&>((jag*)this, piVar3, piVar4);
        uVar1 = m_owi;
        lVar5 = shared_ptr<Pix32>::operator->((shared_ptr<Pix32>*)this);
        *(undefined4*)(lVar5 + 40) = uVar1;
        uVar1 = m_ohi;
        lVar5 = shared_ptr<Pix32>::operator->((shared_ptr<Pix32>*)this);
        *(undefined4*)(lVar5 + 44) = uVar1;
        puVar6 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_xof, 0);
        uVar1 = *puVar6;
        lVar5 = shared_ptr<Pix32>::operator->((shared_ptr<Pix32>*)this);
        *(undefined4*)(lVar5 + 32) = uVar1;
        puVar6 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_yof, 0);
        uVar1 = *puVar6;
        lVar5 = shared_ptr<Pix32>::operator->((shared_ptr<Pix32>*)this);
        *(undefined4*)(lVar5 + 36) = uVar1;
        lVar5 = shared_ptr<Pix32>::operator->((shared_ptr<Pix32>*)this);
        iVar2 = *(int*)(lVar5 + 24);
        lVar5 = shared_ptr<Pix32>::operator->((shared_ptr<Pix32>*)this);
        uVar8 = iVar2 * *(int*)(lVar5 + 28);
        if (m_bspr == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/SharedArray.h", 299,
                      "Index of %d outside range 0 to %d", 0, 18446744073709551615);
        }
        this_00 =
            (Array<unsigned char, eastl::allocator>*)shared_ptr<Array<unsigned char, eastl::allocator>[]>::operator[](
                (shared_ptr<Array<unsigned char, eastl::allocator>[]>*)&DAT_10392aab8, 0);
        AddAlphaToPalette();
        this_01 = (SharedArray<unsigned int>*)shared_ptr<Pix32>::operator->((shared_ptr<Pix32>*)this);
        if (0 < (int)uVar8) {
            uVar9 = 0;
            do {
                pbVar7 = (byte*)Array<unsigned char, eastl::allocator>::operator[](this_00, uVar9);
                puVar6 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)&m_bpal,
                                                                            (ulong)*pbVar7);
                uVar1 = *puVar6;
                puVar6 = (undefined4*)SharedArray<unsigned int>::operator[](this_01, uVar9);
                *puVar6 = uVar1;
                uVar9 = uVar9 + 1;
            } while (uVar8 != uVar9);
        }
        Cleanup();
        return this;
    }

    // 0x10031ecf0, 768 bytes, placed by class name
    // ExportpixfontGeneric(char const*, jagex3::Js5&, jagex3::Js5&, char const*)
    ulong ExportpixfontGeneric(char* param_1, Js5* param_2, Js5* param_3, char* param_4) {
        bool bVar1;
        uint uVar2;
        uint uVar3;
        undefined* puVar4;
        PacketT<Array<unsigned char, eastl::allocator>>* pPVar5;
        uchar* puVar7;
        TextureAtlasReference* pTVar8;
        ulong uVar9;
        _func_decltype_nullptr* p_Var10;
        basic_string local_2e0[32];
        shared_ptr local_2c0;
        shared_ptr local_2b0;
        Filename local_2a0[19];
        File local_170[13];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar2 = param_2->GetGroupId(param_4);
        p_Var10 = (_func_decltype_nullptr*)(ulong)uVar2;
        uVar3 = param_2->GetFileId(uVar2, "");
        new (&local_2c0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var10);
        new (&local_2b0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var10);
        ((shared_ptr*)param_2)->GetFile((int)&local_2c0, uVar2, (array*)(ulong)uVar3);
        bVar1 = operator==(&local_2c0, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            puVar4 = (undefined*)((shared_ptr*)param_3)->GetFile((int)&local_2b0, uVar2, (array*)(ulong)uVar3);
            if (puVar4 == DataStatus::READY) {
                bVar1 = shared_ptr::operator_cast_to_bool(&local_2b0);
                if (bVar1) {
                    pPVar5 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                     (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_2b0);
                    if (pPVar5->GetDataPtr() != 0) {
                        eastl::string::basic_string(local_2e0, "%s_sprite.raw", param_1);
                        Filename::Filename(local_2a0, local_2e0);
                        File::File(local_170, local_2a0, 1538, (Error*)0);
                        local_2a0->~pair();
                        pPVar5 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                     shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                         (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_2c0);
                        puVar7 = (uchar*)pPVar5->GetDataPtr();
                        pTVar8 = (TextureAtlasReference*)
                                     shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                         (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_2c0);
                        uVar2 = pTVar8->GetTextureAtlas();
                        local_170->write(puVar7, uVar2, 0);
                        local_170->~File();
                        local_2e0->~basic_string();
                        eastl::string::basic_string(local_2e0, "%s_metrics.raw", param_1);
                        Filename::Filename(local_2a0, local_2e0);
                        File::File(local_170, local_2a0, 1538, (Error*)0);
                        local_2a0->~pair();
                        pPVar5 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                     shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                         (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_2b0);
                        puVar7 = (uchar*)pPVar5->GetDataPtr();
                        pTVar8 = (TextureAtlasReference*)
                                     shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                         (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_2b0);
                        uVar2 = pTVar8->GetTextureAtlas();
                        local_170->write(puVar7, uVar2, 0);
                        local_170->~File();
                        local_2e0->~basic_string();
                        uVar9 = CONCAT71((int7)((ulong)puVar7 >> 8), 1);
                        goto LAB_10031ef36;
                    }
                }
            }
        }
        uVar9 = 0;
    LAB_10031ef36:
        local_2b0.~shared_ptr();
        local_2c0.~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar9 & 4294967295;
    }

    // 0x10031eff0, 48 bytes, placed by class name
    // MakepixfontGeneric(PacketJ<Array<unsigned char, eastl::allocator> >&, PacketJ<Array<unsigned char, eastl::allocator> >&)
    pixloader* MakepixfontGeneric(PacketJ* param_1, PacketJ* param_2) {
        Depack(param_1);
        MakePixfontGeneric(this, param_2);
        return this;
    }

    // 0x10031f020, 192 bytes, placed by class name
    // MakePixfontGeneric(PacketJ<Array<unsigned char, eastl::allocator> >&)
    pixloader* MakePixfontGeneric(PacketJ* param_1) {
        long lVar1;
        signed* psVar2;
        Array<signed char, eastl::allocator> local_38[24];

        lVar1 = param_1->GetTextureAtlas();
        psVar2 = (signed*)param_1->GetDataPtr();
        Array<signed char, eastl::allocator>::Array(local_38, psVar2, psVar2 + lVar1);
        make_shared<jstring::PixfontGeneric, Array<signed char, eastl::allocator>, Array<int, eastl::allocator>,
                    Array<int, eastl::allocator>, Array<int, eastl::allocator>, Array<int, eastl::allocator>,
                    SharedArray<unsigned int>, SharedArray<Array<unsigned char, eastl::allocator>>>(
            (jag*)this, (Array*)local_38, (Array*)&m_xof, (Array*)&m_yof, (Array*)&m_wi, (Array*)&m_hi,
            (SharedArray*)&m_bpal, (SharedArray*)&m_bspr);
        Cleanup();
        local_38->~Array();
        return this;
    }

    // 0x10031f1b0, 480 bytes, placed by class name
    // Makepix32Array()
    pixloader* Makepix32Array() {
        int iVar1;
        undefined4 uVar2;
        SharedArray<unsigned int>* this_00;
        undefined4* puVar3;
        int* piVar4;
        Array<unsigned char, eastl::allocator>* this_01;
        byte* pbVar5;
        uint uVar6;
        ulong uVar7;
        SharedArray<unsigned int> local_58[24];
        ulong local_40;

        new (this) Array<Pix32, eastl::allocator>((long)m_count);
        AddAlphaToPalette();
        if (0 < m_count) {
            uVar7 = 0;
            do {
                this_00 = (SharedArray<unsigned int>*)Array<Pix32, eastl::allocator>::operator[](
                    (Array<Pix32, eastl::allocator>*)(pixloader*)this, uVar7);
                *(undefined4*)(this_00 + 40) = m_owi;
                *(undefined4*)(this_00 + 44) = m_ohi;
                puVar3 =
                    (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_xof, uVar7);
                *(undefined4*)(this_00 + 32) = *puVar3;
                puVar3 =
                    (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_yof, uVar7);
                *(undefined4*)(this_00 + 36) = *puVar3;
                puVar3 =
                    (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_wi, uVar7);
                *(undefined4*)(this_00 + 24) = *puVar3;
                piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_hi, uVar7);
                iVar1 = *piVar4;
                *(int*)(this_00 + 28) = iVar1;
                uVar6 = iVar1 * *(int*)(this_00 + 24);
                if (m_bspr <= uVar7) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("(index < m_Size)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                              299, "Index of %d outside range 0 to %d", uVar7, m_bspr - 1);
                }
                this_01 = (Array<unsigned char, eastl::allocator>*)
                    shared_ptr<Array<unsigned char, eastl::allocator>[]>::operator[](
                        (shared_ptr<Array<unsigned char, eastl::allocator>[]>*)&DAT_10392aab8, uVar7);
                SharedArray<unsigned int>::SharedArray(local_58, (long)(int)uVar6);
                local_40 = uVar7;
                SharedArray<unsigned int>::operator=(this_00, (SharedArray*)local_58);
                local_58->~SharedArray();
                if (0 < (int)uVar6) {
                    uVar7 = 0;
                    do {
                        pbVar5 = (byte*)Array<unsigned char, eastl::allocator>::operator[](this_01, uVar7);
                        puVar3 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)&m_bpal,
                                                                                    (ulong)*pbVar5);
                        uVar2 = *puVar3;
                        puVar3 = (undefined4*)SharedArray<unsigned int>::operator[](this_00, uVar7);
                        *puVar3 = uVar2;
                        uVar7 = uVar7 + 1;
                    } while (uVar6 != uVar7);
                }
                uVar7 = local_40 + 1;
            } while ((long)uVar7 < (long)m_count);
        }
        Cleanup();
        return (pixloader*)this;
    }

    // 0x10031f3a0, 368 bytes, placed by class name
    // Makepix8()
    pixloader* Makepix8() {
        undefined4 uVar1;
        Pix8* this_00;
        long lVar2;
        undefined4* puVar3;
        Array* pAVar4;
        Array<unsigned char, eastl::allocator>* this_01;

        this_00 = operator_new(72);
        Pix8::Pix8(this_00);
        std::unique_ptr<Pix8, std::default_delete<Pix8>>::unique_ptr<true, void>(
            (unique_ptr<Pix8, std::default_delete<Pix8>>*)this, this_00);
        AddAlphaToPalette();
        uVar1 = m_owi;
        lVar2 = std::unique_ptr<Pix8, std::default_delete<Pix8>>::operator->(
            (unique_ptr<Pix8, std::default_delete<Pix8>>*)this);
        *(undefined4*)(lVar2 + 64) = uVar1;
        uVar1 = m_ohi;
        lVar2 = std::unique_ptr<Pix8, std::default_delete<Pix8>>::operator->(
            (unique_ptr<Pix8, std::default_delete<Pix8>>*)this);
        *(undefined4*)(lVar2 + 68) = uVar1;
        puVar3 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_xof, 0);
        uVar1 = *puVar3;
        lVar2 = std::unique_ptr<Pix8, std::default_delete<Pix8>>::operator->(
            (unique_ptr<Pix8, std::default_delete<Pix8>>*)this);
        *(undefined4*)(lVar2 + 56) = uVar1;
        puVar3 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_yof, 0);
        uVar1 = *puVar3;
        lVar2 = std::unique_ptr<Pix8, std::default_delete<Pix8>>::operator->(
            (unique_ptr<Pix8, std::default_delete<Pix8>>*)this);
        *(undefined4*)(lVar2 + 60) = uVar1;
        puVar3 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_wi, 0);
        uVar1 = *puVar3;
        lVar2 = std::unique_ptr<Pix8, std::default_delete<Pix8>>::operator->(
            (unique_ptr<Pix8, std::default_delete<Pix8>>*)this);
        *(undefined4*)(lVar2 + 48) = uVar1;
        puVar3 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_hi, 0);
        uVar1 = *puVar3;
        lVar2 = std::unique_ptr<Pix8, std::default_delete<Pix8>>::operator->(
            (unique_ptr<Pix8, std::default_delete<Pix8>>*)this);
        *(undefined4*)(lVar2 + 52) = uVar1;
        lVar2 = std::unique_ptr<Pix8, std::default_delete<Pix8>>::operator->(
            (unique_ptr<Pix8, std::default_delete<Pix8>>*)this);
        SharedArray<unsigned int>::operator=((SharedArray<unsigned int>*)(lVar2 + 24), (SharedArray*)&m_bpal);
        if (m_bspr == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/SharedArray.h", 299,
                      "Index of %d outside range 0 to %d", 0, 18446744073709551615);
        }
        pAVar4 = (Array*)shared_ptr<Array<unsigned char, eastl::allocator>[]>::operator[](
            (shared_ptr<Array<unsigned char, eastl::allocator>[]>*)&DAT_10392aab8, 0);
        this_01 = (Array<unsigned char, eastl::allocator>*)std::unique_ptr<Pix8, std::default_delete<Pix8>>::operator->(
            (unique_ptr<Pix8, std::default_delete<Pix8>>*)this);
        Array<unsigned char, eastl::allocator>::operator=(this_01, pAVar4);
        Cleanup();
        return this;
    }

    // 0x10031f520, 352 bytes, placed by class name
    // Pix8Array()
    pixloader* Pix8Array() {
        Array<unsigned char, eastl::allocator>* this_00;
        undefined4* puVar1;
        Array* pAVar2;
        ulong uVar3;

        new (this) Array<Pix8, eastl::allocator>((long)m_count);
        AddAlphaToPalette();
        if (0 < m_count) {
            uVar3 = 0;
            do {
                this_00 = (Array<unsigned char, eastl::allocator>*)Array<Pix8, eastl::allocator>::operator[](
                    (Array<Pix8, eastl::allocator>*)this, uVar3);
                *(undefined4*)(this_00 + 64) = m_owi;
                *(undefined4*)(this_00 + 68) = m_ohi;
                puVar1 =
                    (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_xof, uVar3);
                *(undefined4*)(this_00 + 56) = *puVar1;
                puVar1 =
                    (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_yof, uVar3);
                *(undefined4*)(this_00 + 60) = *puVar1;
                puVar1 =
                    (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_wi, uVar3);
                *(undefined4*)(this_00 + 48) = *puVar1;
                puVar1 =
                    (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_hi, uVar3);
                *(undefined4*)(this_00 + 52) = *puVar1;
                ((this_00 + 24))->ref_assign((SharedArray*)&m_bpal);
                if (m_bspr <= uVar3) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("(index < m_Size)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                              299, "Index of %d outside range 0 to %d", uVar3, m_bspr - 1);
                }
                pAVar2 = (Array*)shared_ptr<Array<unsigned char, eastl::allocator>[]>::operator[](
                    (shared_ptr<Array<unsigned char, eastl::allocator>[]>*)&DAT_10392aab8, uVar3);
                Array<unsigned char, eastl::allocator>::operator=(this_00, pAVar2);
                uVar3 = uVar3 + 1;
            } while ((long)uVar3 < (long)m_count);
        }
        Cleanup();
        return this;
    }

    // 0x10031f690, 48 bytes, placed by class name
    // Makepix8Array(PacketJ<Array<unsigned char, eastl::allocator> >&)
    pixloader* Makepix8Array(PacketJ* param_1) {
        Depack(param_1);
        Pix8Array(this);
        return this;
    }

    // 0x10031f6c0, 48 bytes, placed by class name
    // Makepix8Array(jagex3::Js5&, int)
    pixloader* Makepix8Array(Js5* param_1, int param_2) {
        if (Depack(param_1, param_2) == '\0') {
            new (this) Array<Pix8, eastl::allocator>();
        } else {
            Pix8Array(this);
        }
        return this;
    }

    // 0x10031f6f0, 112 bytes, placed by class name
    // Makepix8Multi(jagex3::Js5&, int)
    pixloader* Makepix8Multi(Js5* param_1, int param_2) {
        char cVar1;
        pixloader local_30;

        Makepix8Array(&local_30, param_1, param_2);
        cVar1 = local_30.empty();
        if (cVar1 == '\0') {
            std::make_unique<pix8multi, Array<Pix8, eastl::allocator>>((Array*)this);
        } else {
            std::unique_ptr<pix8multi, std::default_delete<pix8multi>>::unique_ptr<true, void>(
                (_func_decltype_nullptr*)this);
        }
        local_30.~Array();
        return this;
    }

    // 0x10031f7e0, 128 bytes, placed by class name
    // Makepix32Multi(jagex3::Js5&, int)
    pixloader* Makepix32Multi(Js5* param_1, int param_2) {
        char cVar1;
        pixloader local_38;
        Array local_20[8];

        Makepix32Array(&local_38, param_1, param_2);
        cVar1 = local_38.empty();
        if (cVar1 == '\0') {
            std::make_unique<pix32multi, Array<Pix32, eastl::allocator>>(local_20);
            new (this) std::unique_ptr<pix32multi, std::default_delete<pix32multi>>(local_20);
            local_20->~unique_ptr();
        } else {
            std::unique_ptr<pix32multi, std::default_delete<pix32multi>>::unique_ptr<true, void>(
                (_func_decltype_nullptr*)this);
        }
        local_38.~Array();
        return this;
    }

    // 0x10031f860, 48 bytes, placed by class name
    // Makepix32Array(jagex3::Js5&, int)
    pixloader* Makepix32Array(Js5* param_1, int param_2) {
        if (Depack(param_1, param_2) == '\0') {
            new (this) Array<Pix32, eastl::allocator>();
        } else {
            Makepix32Array(this);
        }
        return this;
    }

    // 0x10031f920, 64 bytes, placed by class name
    // Makepix32(jagex3::Js5&, int)
    pixloader* Makepix32(Js5* param_1, int param_2) {
        if (Depack(param_1, param_2) == '\0') {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            Makepix32(this);
        }
        return this;
    }

    // 0x10031f960, 80 bytes, placed by class name
    // Makepix8Multi(jagex3::Js5&, char const*, char const*)
    pixloader* Makepix8Multi(Js5* param_1, char* param_2, char* param_3) {
        int iVar1;
        int iVar2;

        iVar1 = param_1->GetGroupId(param_2);
        iVar2 = param_1->GetFileId(iVar1, param_3);
        Makepix8Multi(this, param_1, iVar1, iVar2);
        return this;
    }

    // 0x10031f9b0, 128 bytes, placed by class name
    // Makepix8Multi(jagex3::Js5&, int, int)
    pixloader* Makepix8Multi(Js5* param_1, int param_2, int param_3) {
        char cVar1;
        pixloader local_38;
        Array local_20[8];

        Makepix8Array(&local_38, param_1, param_2, param_3);
        cVar1 = local_38.empty();
        if (cVar1 == '\0') {
            std::make_unique<pix8multi, Array<Pix8, eastl::allocator>>(local_20);
            new (this) std::unique_ptr<pix8multi, std::default_delete<pix8multi>>(local_20);
            local_20->~unique_ptr();
        } else {
            std::unique_ptr<pix8multi, std::default_delete<pix8multi>>::unique_ptr<true, void>(
                (_func_decltype_nullptr*)this);
        }
        local_38.~Array();
        return this;
    }

    // 0x10031fa30, 80 bytes, placed by class name
    // Makepix8Array(jagex3::Js5&, char const*, char const*)
    pixloader* Makepix8Array(Js5* param_1, char* param_2, char* param_3) {
        int iVar1;
        int iVar2;

        iVar1 = param_1->GetGroupId(param_2);
        iVar2 = param_1->GetFileId(iVar1, param_3);
        Makepix8Array(this, param_1, iVar1, iVar2);
        return this;
    }

    // 0x10031fa80, 64 bytes, placed by class name
    // Makepix8Array(jagex3::Js5&, int, int)
    pixloader* Makepix8Array(Js5* param_1, int param_2, int param_3) {
        if (Depack(param_1, param_2, param_3) == '\0') {
            new (this) Array<Pix8, eastl::allocator>();
        } else {
            Pix8Array(this);
        }
        return this;
    }

    // 0x10031fac0, 80 bytes, placed by class name
    // Makepix8(jagex3::Js5&, char const*, char const*)
    pixloader* Makepix8(Js5* param_1, char* param_2, char* param_3) {
        int iVar1;
        int iVar2;

        iVar1 = param_1->GetGroupId(param_2);
        iVar2 = param_1->GetFileId(iVar1, param_3);
        Makepix8(this, param_1, iVar1, iVar2);
        return this;
    }

    // 0x10031fb10, 64 bytes, placed by class name
    // Makepix8(jagex3::Js5&, int, int)
    pixloader* Makepix8(Js5* param_1, int param_2, int param_3) {
        if (Depack(param_1, param_2, param_3) == '\0') {
            std::unique_ptr<Pix8, std::default_delete<Pix8>>::unique_ptr<true, void>((_func_decltype_nullptr*)this);
        } else {
            Makepix8(this);
        }
        return this;
    }

    // 0x10031fb50, 80 bytes, placed by class name
    // Makepix32Multi(jagex3::Js5&, char const*, char const*)
    pixloader* Makepix32Multi(Js5* param_1, char* param_2, char* param_3) {
        int iVar1;
        int iVar2;

        iVar1 = param_1->GetGroupId(param_2);
        iVar2 = param_1->GetFileId(iVar1, param_3);
        Makepix32Multi(this, param_1, iVar1, iVar2);
        return this;
    }

    // 0x10031fba0, 128 bytes, placed by class name
    // Makepix32Multi(jagex3::Js5&, int, int)
    pixloader* Makepix32Multi(Js5* param_1, int param_2, int param_3) {
        char cVar1;
        pixloader local_38;
        Array local_20[8];

        Makepix32Array(&local_38, param_1, param_2, param_3);
        cVar1 = local_38.empty();
        if (cVar1 == '\0') {
            std::make_unique<pix32multi, Array<Pix32, eastl::allocator>>(local_20);
            new (this) std::unique_ptr<pix32multi, std::default_delete<pix32multi>>(local_20);
            local_20->~unique_ptr();
        } else {
            std::unique_ptr<pix32multi, std::default_delete<pix32multi>>::unique_ptr<true, void>(
                (_func_decltype_nullptr*)this);
        }
        local_38.~Array();
        return this;
    }

    // 0x10031fc20, 80 bytes, placed by class name
    // Makepix32Array(jagex3::Js5&, char const*, char const*)
    pixloader* Makepix32Array(Js5* param_1, char* param_2, char* param_3) {
        int iVar1;
        int iVar2;

        iVar1 = param_1->GetGroupId(param_2);
        iVar2 = param_1->GetFileId(iVar1, param_3);
        Makepix32Array(this, param_1, iVar1, iVar2);
        return this;
    }

    // 0x10031fc70, 64 bytes, placed by class name
    // Makepix32Array(jagex3::Js5&, int, int)
    pixloader* Makepix32Array(Js5* param_1, int param_2, int param_3) {
        if (Depack(param_1, param_2, param_3) == '\0') {
            new (this) Array<Pix32, eastl::allocator>();
        } else {
            Makepix32Array(this);
        }
        return this;
    }

    // 0x10031fcb0, 80 bytes, placed by class name
    // Makepix32(jagex3::Js5&, char const*, char const*)
    pixloader* Makepix32(Js5* param_1, char* param_2, char* param_3) {
        int iVar1;
        int iVar2;

        iVar1 = param_1->GetGroupId(param_2);
        iVar2 = param_1->GetFileId(iVar1, param_3);
        Makepix32(this, param_1, iVar1, iVar2);
        return this;
    }

    // 0x10031fd00, 64 bytes, placed by class name
    // Makepix32(jagex3::Js5&, int, int)
    pixloader* Makepix32(Js5* param_1, int param_2, int param_3) {
        if (Depack(param_1, param_2, param_3) == '\0') {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            Makepix32(this);
        }
        return this;
    }

    // 0x10031fd40, 96 bytes, placed by class name
    // MakepixfontGeneric(jagex3::Js5&, jagex3::Js5&, char const*, char const*)
    pixloader* MakepixfontGeneric(Js5* param_1, Js5* param_2, char* param_3, char* param_4) {
        int iVar1;
        int iVar2;

        iVar1 = param_1->GetGroupId(param_3);
        iVar2 = param_1->GetFileId(iVar1, param_4);
        MakepixfontGeneric(this, param_1, param_2, iVar1, iVar2);
        return this;
    }

    // 0x10031fda0, 224 bytes, placed by class name
    // MakepixfontGeneric(jagex3::Js5&, jagex3::Js5&, int, int)
    pixloader* MakepixfontGeneric(Js5* param_1, Js5* param_2, int param_3, int param_4) {
        undefined* puVar2;
        PacketT<Array<unsigned char, eastl::allocator>>* this_00;
        PacketJ* pPVar4;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_40[16];

        if (Depack(param_1, param_3, param_4) == '\0') {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_40, (_func_decltype_nullptr*)0);
            puVar2 = (undefined*)((shared_ptr*)param_2)->GetFile((int)local_40, param_3, (array*)(ulong)(uint)param_4);
            if (puVar2 == DataStatus::READY) {
                this_00 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                              shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                  (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_40);
                if (this_00->GetDataPtr() == 0) {
                    new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                } else {
                    pPVar4 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                        (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_40);
                    MakePixfontGeneric(this, pPVar4);
                }
            } else {
                new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            }
            local_40->~shared_ptr();
        }
        return this;
    }

    // 0x10031fea0, 48 bytes, placed by class name
    // Makepix8(PacketJ<Array<unsigned char, eastl::allocator> >&)
    pixloader* Makepix8(PacketJ* param_1) {
        Depack(param_1);
        Makepix8(this);
        return this;
    }

    // 0x10031fed0, 48 bytes, placed by class name
    // Makepix32Array(PacketJ<Array<unsigned char, eastl::allocator> >&)
    pixloader* Makepix32Array(PacketJ* param_1) {
        Depack(param_1);
        Makepix32Array(this);
        return this;
    }

    // 0x10031ff00, 48 bytes, placed by class name
    // Makepix32(PacketJ<Array<unsigned char, eastl::allocator> >&)
    pixloader* Makepix32(PacketJ* param_1) {
        Depack(param_1);
        Makepix32(this);
        return this;
    }

    // 0x10033e060, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.95
    void ___cxx_global_var_init_95() {
        new (&m_xof) Array<int, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee6800, &m_xof, 4294967296);
    }

    // 0x10033e0a0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.96
    void ___cxx_global_var_init_96() {
        new (&m_yof) Array<int, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee6800, &m_yof, 4294967296);
    }

    // 0x10033e0e0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.97
    void ___cxx_global_var_init_97() {
        new (&m_wi) Array<int, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee6800, &m_wi, 4294967296);
    }

    // 0x10033e120, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.98
    void ___cxx_global_var_init_98() {
        new (&m_hi) Array<int, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee6800, &m_hi, 4294967296);
    }

    // 0x10033e160, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.99
    void ___cxx_global_var_init_99() {
        new (&m_bpal) SharedArray<unsigned int>();
        ___cxa_atexit(PTR__SharedArray_100ee5568, &m_bpal, 4294967296);
    }

    // 0x10033e1a0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.100
    void ___cxx_global_var_init_100() {
        new (&m_bspr) SharedArray<unsigned int>();
        ___cxa_atexit(PTR__SharedArray_100ee5560, &m_bspr, 4294967296);
    }

} // namespace jag::oldscape::graphics::pixloader

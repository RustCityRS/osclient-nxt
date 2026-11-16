// libs/oldscape/rs2lib/util/iftype.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "iftype.h"

namespace jag::oldscape::rs2lib {
    // 0x100fc9250, 24 bytes, __common; zero-initialised
    IfType::m_list;

    // 0x100fc9268, 24 bytes, __common; set at startup by ___cxx_global_var_init.51
    Array<bool, eastl::allocator> IfType::m_open = Array<bool, eastl::allocator>();

    // 0x100fc9280, 8 bytes, __common; zero-initialised
    IfType::m_pInterfaces;

    // 0x100fc9288, 8 bytes, __common; zero-initialised
    IfType::m_pModels;

    // 0x100fc9290, 8 bytes, __common; zero-initialised
    IfType::m_pSprites;

    // 0x100fc9298, 8 bytes, __common; zero-initialised
    IfType::m_pFontMetrics;

    // 0x100fc92a0, 16256 bytes, __common; zero-initialised
    IfType::m_spriteCache;

    // 0x100fcd220, 4256 bytes, __common; zero-initialised
    IfType::m_modelCache;

    // 0x100fce2c0, 1856 bytes, __common; zero-initialised
    IfType::m_fontCache;

    // 0x100fcea00, 896 bytes, __common; zero-initialised
    IfType::m_maskCache;

    // 0x100fced80, 1608 bytes, __common; zero-initialised
    IfType::m_httpSpriteCacheRaw;

    // 0x100fcf3c8, 1424 bytes, __common; zero-initialised
    IfType::m_httpSpriteCacheProcessed;

    // 0x10015a200: the linker folded this into IfType::GetCRMViewHandler() const, which has identical code
    IfType::GetCRMViewHandler();

    // 0x1001ff640, 112 bytes, placed by class name and debug map
    // IfType::Init(jagex3::Js5*, jagex3::Js5*, jagex3::Js5*, jagex3::Js5*)
    void IfType::Init(Js5* param_1, Js5* param_2, Js5* param_3, Js5* param_4) {
        int iVar1;

        m_pInterfaces = param_1;
        m_pModels = param_2;
        m_pSprites = param_3;
        m_pFontMetrics = param_4;
        iVar1 = param_1->GetRT5FrameCount();
        m_list.set_max_size((long)iVar1, 3);
        iVar1 = param_1->GetRT5FrameCount();
        m_open.set_max_size((long)iVar1, 3);
    }

    // 0x1001ff800, 288 bytes, placed by class name and debug map
    // IfType::Get(int)
    undefined1* IfType::Get(int param_1) {
        uint uVar3;
        ulong uVar4;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this;
        long lVar5;
        shared_ptr* psVar6;
        undefined1* puVar7;
        ulong uVar8;
        int iVar9;

        if (param_1 < 0) {
        LAB_1001ff8aa:
            uVar3 = m_list.end();
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/iftype.cpp",
                54, "invalid group in combinedId passed to IfType::Get: %08X (max %d)", (ulong)(uint)param_1,
                (ulong)uVar3);
        }
        uVar8 = (ulong)(param_1 >> 16);
        uVar4 = m_list.end();
        if (uVar4 <= uVar8)
            goto LAB_1001ff8aa;
        this = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
            Array<Array<shared_ptr<IfType>, eastl::allocator>, eastl::allocator>::operator[](
                (Array<Array<shared_ptr<IfType>, eastl::allocator>, eastl::allocator>*)&m_list, uVar8);
        iVar9 = (int)uVar8;
        lVar5 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this);
        uVar4 = (ulong)(param_1 & 65535);
        if ((lVar5 != 0) &&
            (uVar8 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this), uVar8 <= uVar4)) {
            uVar3 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this);
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/iftype.cpp",
                60, "invalid component in combinedId passed to IfType::Get: %08X (max %d)", (ulong)(uint)param_1,
                (ulong)uVar3);
        }
        lVar5 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this);
        if (lVar5 != 0) {
            psVar6 = (shared_ptr*)Array<shared_ptr<IfType>, eastl::allocator>::operator[](
                (Array<shared_ptr<IfType>, eastl::allocator>*)this, uVar4);
            iVar9 = 0;
            if (!operator==(psVar6, (_func_decltype_nullptr*)0))
                goto LAB_1001ff89d;
        }
        if (OpenInterface((IfType*)(ulong)(uint)(param_1 >> 16), iVar9) == '\0') {
            return &NULL_IFTYPE;
        }
    LAB_1001ff89d:
        puVar7 = (undefined1*)Array<shared_ptr<IfType>, eastl::allocator>::operator[](
            (Array<shared_ptr<IfType>, eastl::allocator>*)this, uVar4);
        return puVar7;
    }

    // 0x1001ff920, 512 bytes, placed by class name and debug map
    // IfType::OpenInterface(int)
    ulong IfType::OpenInterface(int param_1) {
        uint uVar2;
        char* pcVar3;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        shared_ptr* psVar6;
        undefined* puVar7;
        shared_ptr<IfType>* this_01;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        IfType* this_03;
        PacketT<Array<unsigned char, eastl::allocator>>* this_04;
        PacketJ* pPVar8;
        undefined1* puVar9;
        undefined8 in_RCX;
        undefined** ppuVar10;
        undefined** ppuVar11;
        shared_ptr<RSevenDebugPresetProvider> local_70[16];
        shared_ptr local_60;
        undefined** local_50;
        ulong local_48;
        ulong local_40;
        int local_34;

        pcVar3 =
            (char*)Array<bool, eastl::allocator>::operator[]((Array<bool, eastl::allocator>*)&m_open, (long)(int)this);
        ppuVar10 = (undefined**)CONCAT71((int7)((ulong)in_RCX >> 8), 1);
        if (*pcVar3 == '\0') {
            if (m_pInterfaces->RequestGroupDownload((int)this) == 0) {
                ppuVar10 = (undefined**)0;
            } else {
                local_40 = (long)(int)this;
                uVar2 = m_pInterfaces->GetFileIdLimit((int)this);
                if (0 < (int)uVar2) {
                    this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                        Array<Array<shared_ptr<IfType>, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<shared_ptr<IfType>, eastl::allocator>, eastl::allocator>*)&m_list, local_40);
                    if (eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00) <
                        (ulong)(long)(int)uVar2) {
                        this_00->set_max_size((long)(int)uVar2, 3);
                    }
                    if (0 < (int)uVar2) {
                        ppuVar10 = (undefined**)(ulong)uVar2;
                        local_48 = (ulong)(uint)((int)this << 16);
                        ppuVar11 = (undefined**)0;
                        local_50 = ppuVar10;
                        do {
                            psVar6 = (shared_ptr*)Array<shared_ptr<IfType>, eastl::allocator>::operator[](
                                (Array<shared_ptr<IfType>, eastl::allocator>*)this_00, (ulong)ppuVar11);
                            if (operator==(psVar6, (_func_decltype_nullptr*)0)) {
                                new (local_70) shared_ptr<worldmap::WorldmapAreaMetadata>(0);
                                puVar7 =
                                    (undefined*)((shared_ptr*)m_pInterfaces)
                                        ->GetFile((int)local_70, (int)this, (array*)((ulong)ppuVar11 & 4294967295));
                                ppuVar10 = &DataStatus::READY;
                                if (puVar7 == DataStatus::READY) {
                                    local_34 = (int)local_48 + (int)ppuVar11;
                                    make_shared<IfType, int const&>((jag*)&local_60, &local_34);
                                    this_01 =
                                        (shared_ptr<IfType>*)Array<shared_ptr<IfType>, eastl::allocator>::operator[](
                                            (Array<shared_ptr<IfType>, eastl::allocator>*)this_00, (ulong)ppuVar11);
                                    this_01->swap(&local_60);
                                    this_02 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                        Array<shared_ptr<IfType>, eastl::allocator>::operator[](
                                            (Array<shared_ptr<IfType>, eastl::allocator>*)this_00, (ulong)ppuVar11);
                                    this_03 =
                                        (IfType*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                                            this_02);
                                    this_04 =
                                        (PacketT<Array<unsigned char, eastl::allocator>>*)
                                            shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                                (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_70);
                                    pcVar3 = (char*)this_04->GetDataPtr();
                                    if (*pcVar3 == -1) {
                                        pPVar8 = (PacketJ*)
                                            shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                                                (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_70);
                                        Decode3(this_03, pPVar8);
                                    } else {
                                        pPVar8 = (PacketJ*)
                                            shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                                                (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_70);
                                        Decode(this_03, pPVar8);
                                    }
                                    local_60.~shared_ptr();
                                }
                                local_70->~shared_ptr();
                            }
                            ppuVar11 = (undefined**)((long)ppuVar11 + 1);
                        } while (local_50 != ppuVar11);
                    }
                }
                puVar9 = (undefined1*)Array<bool, eastl::allocator>::operator[]((Array<bool, eastl::allocator>*)&m_open,
                                                                                local_40);
                *puVar9 = 1;
                ppuVar10 = (undefined**)CONCAT71((int7)((ulong)ppuVar10 >> 8), 1);
            }
        }
        return (ulong)ppuVar10 & 4294967295;
    }

    // 0x1001ffb20, 128 bytes, placed by class name and debug map
    // IfType::Get(int, int)
    shared_ptr* IfType::Get(int param_1, int param_2) {
        bool bVar1;
        shared_ptr* this;
        long lVar2;
        ulong uVar3;
        shared_ptr* psVar4;

        this = (shared_ptr*)Get(param_1);
        if (param_2 < 0) {
            psVar4 = this;
        } else {
            bVar1 = operator==(this, (_func_decltype_nullptr*)0);
            psVar4 = (shared_ptr*)&NULL_IFTYPE;
            if (!bVar1) {
                lVar2 = shared_ptr<IfType>::operator->((shared_ptr<IfType>*)this);
                uVar3 = ((lVar2 + 2000))->end();
                if ((ulong)(long)param_2 < uVar3) {
                    lVar2 = shared_ptr<IfType>::operator->((shared_ptr<IfType>*)this);
                    psVar4 = (shared_ptr*)Array<shared_ptr<IfType>, eastl::allocator>::operator[](
                        (Array<shared_ptr<IfType>, eastl::allocator>*)(lVar2 + 2000), (long)param_2);
                }
            }
        }
        return psVar4;
    }

    // 0x1001ffba0, 80 bytes, placed by class name and debug map
    // IfType::GetCC(int) const
    undefined1* IfType::GetCC(int param_1) {
        ulong uVar1;
        undefined1* puVar2;

        puVar2 = &NULL_IFTYPE;
        if (-1 < param_1) {
            uVar1 = (&field_2000)->end();
            if ((ulong)(long)param_1 < uVar1) {
                puVar2 = (undefined1*)Array<shared_ptr<IfType>, eastl::allocator>::operator[](
                    (Array<shared_ptr<IfType>, eastl::allocator>*)&field_2000, (long)param_1);
            }
        }
        return puVar2;
    }

    // 0x1001ffbf0, 224 bytes, placed by class name and debug map
    // IfType::GetServer(int)
    void IfType::GetServer(int param_1) {
        uint uVar1;
        ulong uVar2;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this;
        long lVar3;

        if (-1 < param_1) {
            uVar2 = m_list.end();
            if ((ulong)(long)(param_1 >> 16) < uVar2) {
                this = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    Array<Array<shared_ptr<IfType>, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<shared_ptr<IfType>, eastl::allocator>, eastl::allocator>*)&m_list,
                        (long)(param_1 >> 16));
                lVar3 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this);
                if (lVar3 != 0) {
                    uVar2 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this);
                    if (uVar2 <= (param_1 & 65535)) {
                        uVar1 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this);
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "oldscape/rs2lib/util/iftype.cpp",
                                        112,
                                        "invalid component in combinedId passed to IfType::GetServer: %08X (max %d)",
                                        (ulong)(uint)param_1, (ulong)uVar1);
                    }
                }
                Array<shared_ptr<IfType>, eastl::allocator>::operator[](
                    (Array<shared_ptr<IfType>, eastl::allocator>*)this, (ulong)(param_1 & 65535));
                return;
            }
        }
        uVar1 = m_list.end();
        /* WARNING: Subroutine does not return */
        LogAssertAlways(
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/iftype.cpp",
            106, "invalid group in combinedId passed to IfType::GetServer: %08X (max %d)", (ulong)(uint)param_1,
            (ulong)uVar1);
    }

    // 0x1001ffcd0, 1968 bytes, placed by class name and debug map
    // IfType::Decode3(PacketJ<Array<unsigned char, eastl::allocator> >&)
    /* WARNING: Type propagation algorithm not settling */
    /* IfType::Decode3(PacketJ<Array<unsigned char,
   eastl::allocator> >&) */

    bool IfType::Decode3(PacketJ* param_1) {
        undefined1* this_00;
        IfType* this_01;
        byte bVar1;
        char cVar2;
        char cVar3;
        char cVar4;
        char cVar5;
        ushort uVar6;
        short sVar7;
        uint uVar8;
        undefined4 uVar9;
        eastl::string* this_02;
        ulong uVar10;
        ulong uVar11;
        bool bVar12;
        IfType* this_03;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_70[32];
        IfType* local_50;
        char local_41;
        char local_40;
        char local_3f;
        char local_3e;
        char local_3d;
        char local_3c;
        char local_3b;
        char local_3a;
        char local_39;
        char local_38;
        char local_37;
        char local_36;
        char local_35;
        char local_34;
        char local_33;
        char local_32;
        char local_31;

        param_1->g1();
        field_0 = 1;
        bVar1 = param_1->g1();
        field_12 = (uint)bVar1;
        uVar6 = param_1->g2();
        field_20 = (uint)uVar6;
        sVar7 = param_1->g2s();
        field_48 = (int)sVar7;
        sVar7 = param_1->g2s();
        field_52 = (int)sVar7;
        uVar6 = param_1->g2();
        field_56 = (uint)uVar6;
        uVar6 = param_1->g2();
        field_60 = (uint)uVar6;
        cVar2 = param_1->g1s();
        field_40 = (int)cVar2;
        cVar2 = param_1->g1s();
        field_44 = (int)cVar2;
        cVar2 = param_1->g1s();
        field_32 = (int)cVar2;
        cVar2 = param_1->g1s();
        field_36 = (int)cVar2;
        uVar6 = param_1->g2();
        field_88 = (uint)uVar6;
        if (uVar6 == 65535) {
            uVar8 = 4294967295;
        } else {
            uVar8 = CONCAT22(*(undefined2*)((long)&field_4 + 2), uVar6);
        }
        field_88 = uVar8;
        cVar2 = param_1->g1();
        field_92 = cVar2 == '\x01';
        if (field_12 == 0) {
            uVar6 = param_1->g2();
            field_104 = (uint)uVar6;
            uVar6 = param_1->g2();
            field_108 = (uint)uVar6;
            cVar2 = param_1->g1();
            field_2080 = cVar2 == '\x01';
            uVar8 = field_12;
        } else {
            uVar8 = field_12;
        }
        if (uVar8 == 5) {
            uVar8 = param_1->g4s();
            field_164 = uVar8;
            uVar6 = param_1->g2();
            field_208 = (uint)uVar6;
            cVar2 = param_1->g1();
            field_212 = cVar2 == '\x01';
            bVar1 = param_1->g1();
            field_140 = (uint)bVar1;
            bVar1 = param_1->g1();
            field_216 = (uint)bVar1;
            uVar8 = param_1->g4s();
            field_220 = uVar8;
            cVar2 = param_1->g1();
            field_224 = cVar2 == '\x01';
            cVar2 = param_1->g1();
            field_225 = cVar2 == '\x01';
            uVar8 = field_12;
        } else {
            uVar8 = field_12;
        }
        if (uVar8 == 6) {
            field_228 = 1;
            uVar6 = param_1->g2();
            uVar8 = (uint)uVar6;
            if (uVar6 == 65535) {
                uVar8 = 4294967295;
            }
            field_232 = uVar8;
            sVar7 = param_1->g2s();
            field_252 = (int)sVar7;
            sVar7 = param_1->g2s();
            field_256 = (int)sVar7;
            uVar6 = param_1->g2();
            field_260 = (uint)uVar6;
            uVar6 = param_1->g2();
            field_264 = (uint)uVar6;
            uVar6 = param_1->g2();
            field_268 = (uint)uVar6;
            uVar6 = param_1->g2();
            field_272 = (uint)uVar6;
            uVar6 = param_1->g2();
            uVar8 = (uint)uVar6;
            if (uVar6 == 65535) {
                uVar8 = 4294967295;
            }
            field_244 = uVar8;
            cVar2 = param_1->g1();
            field_288 = cVar2 == '\x01';
            param_1->g2();
            if (field_40 != 0) {
                uVar6 = param_1->g2();
                field_276 = (uint)uVar6;
            }
            if (field_44 != 0) {
                uVar6 = param_1->g2();
                field_280 = (uint)uVar6;
            }
        }
        bVar12 = SUB81(param_1, 0);
        if (field_12 == 4) {
            uVar6 = param_1->g2();
            uVar8 = 4294967295;
            if (uVar6 != 65535) {
                uVar8 = (uint)uVar6;
            }
            field_312 = uVar8;
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                local_70, bVar12);
            eastl::string::operator=((eastl::string*)&field_320, (basic_string*)local_70);
            local_70->~basic_string();
            bVar1 = param_1->g1();
            field_384 = (uint)bVar1;
            bVar1 = param_1->g1();
            field_388 = (uint)bVar1;
            bVar1 = param_1->g1();
            field_392 = (uint)bVar1;
            cVar2 = param_1->g1();
            field_396 = cVar2 == '\x01';
            uVar9 = param_1->g4s();
            field_116 = uVar9;
        }
        if (field_12 == 3) {
            uVar9 = param_1->g4s();
            field_116 = uVar9;
            cVar2 = param_1->g1();
            field_132 = cVar2 == '\x01';
            bVar1 = param_1->g1();
            field_140 = (uint)bVar1;
            uVar8 = field_12;
        } else {
            uVar8 = field_12;
        }
        if (uVar8 == 9) {
            bVar1 = param_1->g1();
            field_148 = (uint)bVar1;
            uVar9 = param_1->g4s();
            field_116 = uVar9;
            cVar2 = param_1->g1();
            field_152 = cVar2 == '\x01';
            uVar8 = field_12;
        } else {
            uVar8 = field_12;
        }
        if (uVar8 == 10) {
            uVar9 = param_1->g4s();
            field_116 = uVar9;
            cVar2 = param_1->g1();
            field_132 = cVar2 == '\x01';
            bVar1 = param_1->g1();
            field_140 = (uint)bVar1;
            uVar6 = param_1->g2();
            field_156 = (uint)uVar6;
            uVar6 = param_1->g2();
            field_160 = (uint)uVar6;
            if (field_132 == false) {
                bVar1 = param_1->g1();
                field_148 = (uint)bVar1;
            }
        }
        uVar8 = param_1->g3();
        field_684 = uVar8;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(local_70,
                                                                                                               bVar12);
        local_50 = this;
        eastl::string::operator=((eastl::string*)&field_704, (basic_string*)local_70);
        local_70->~basic_string();
        bVar1 = param_1->g1();
        if (bVar1 != 0) {
            this_00 = &local_50->field_736;
            this_00->set_max_size((ulong)bVar1, 1);
            uVar11 = 0;
            do {
                PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                    local_70, bVar12);
                this_02 = (eastl::string*)Array<eastl::string, eastl::allocator>::operator[](
                    (Array<eastl::string, eastl::allocator>*)this_00, uVar11);
                eastl::string::operator=(this_02, (basic_string*)local_70);
                local_70->~basic_string();
                uVar11 = uVar11 + 1;
            } while (bVar1 != uVar11);
        }
        bVar1 = param_1->g1();
        this_01 = local_50;
        *(uint*)&local_50->field_776 = (uint)bVar1;
        bVar1 = param_1->g1();
        *(uint*)((long)&this_01->field_776 + 4) = (uint)bVar1;
        cVar2 = param_1->g1();
        *(bool*)&this_01->field_784 = cVar2 == '\x01';
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(local_70,
                                                                                                               bVar12);
        eastl::string::operator=((eastl::string*)&this_01->field_792, (basic_string*)local_70);
        local_70->~basic_string();
        local_41 = DecodeHook(this_01, (Array*)&this_01->field_832, param_1);
        local_40 = DecodeHook(this_01, (Array*)&this_01->field_952, param_1);
        local_3f = DecodeHook(this_01, (Array*)&this_01->field_1000, param_1);
        local_3e = DecodeHook(this_01, (Array*)&this_01->field_1096, param_1);
        local_3d = DecodeHook(this_01, (Array*)&this_01->field_1072, param_1);
        local_3c = DecodeHook(this_01, (Array*)&this_01->field_1120, param_1);
        local_3b = DecodeHook(this_01, (Array*)&this_01->field_1176, param_1);
        local_3a = DecodeHook(this_01, (Array*)&this_01->field_1232, param_1);
        local_39 = DecodeHook(this_01, (Array*)&this_01->field_1288, param_1);
        local_38 = DecodeHook(this_01, (Array*)&this_01->field_1312, param_1);
        local_37 = DecodeHook(this_01, (Array*)&this_01->field_976, param_1);
        local_36 = DecodeHook(this_01, (Array*)&this_01->field_856, param_1);
        local_35 = DecodeHook(this_01, (Array*)&this_01->field_880, param_1);
        local_34 = DecodeHook(this_01, (Array*)&this_01->field_904, param_1);
        local_33 = DecodeHook(this_01, (Array*)&this_01->field_928, param_1);
        local_32 = DecodeHook(this_01, (Array*)&this_01->field_1024, param_1);
        local_31 = DecodeHook(this_01, (Array*)&this_01->field_1048, param_1);
        this_03 = this_01;
        cVar2 = DecodeHook(this_01, (Array*)&this_01->field_1360, param_1);
        cVar3 = DecodeTransmitList(this_03, (vector*)&this_01->field_1144, param_1);
        cVar4 = DecodeTransmitList(this_03, (vector*)&this_01->field_1200, param_1);
        cVar5 = DecodeTransmitList(this_03, (vector*)&this_01->field_1256, param_1);
        bVar12 = false;
        if (((((((local_41 != '\0') && (local_40 != '\0')) && (local_3f != '\0')) &&
               (((local_3e != '\0' && (local_3d != '\0')) &&
                 ((local_3c != '\0' && ((local_3b != '\0' && (local_3a != '\0')))))))) &&
              ((local_39 != '\0' && (((local_38 != '\0' && (local_37 != '\0')) && (local_36 != '\0')))))) &&
             (((local_35 != '\0' && (local_34 != '\0')) &&
               (((local_33 != '\0' && ((local_32 != '\0' && (local_31 != '\0')))) && (cVar2 != '\0')))))) &&
            (((cVar3 != '\0' && (cVar4 != '\0')) && (cVar5 != '\0')))) {
            uVar11 = param_1->size();
            uVar10 = param_1->GetTextureAtlas();
            bVar12 = uVar11 <= uVar10;
        }
        return bVar12;
    }

    // 0x100200480, 1616 bytes, placed by class name and debug map
    // IfType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&)
    bool IfType::Decode(PacketJ* param_1) {
        byte* pbVar1;
        byte bVar2;
        char cVar3;
        ushort uVar4;
        short sVar5;
        ushort uVar6;
        undefined4 uVar7;
        uint* puVar8;
        Array<int, eastl::allocator>* this_00;
        int* piVar9;
        undefined4* puVar10;
        uint uVar12;
        ulong uVar13;
        bool bVar14;
        ulong uVar15;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_50[32];

        field_0 = 0;
        bVar2 = param_1->g1();
        field_12 = (uint)bVar2;
        bVar2 = param_1->g1();
        field_16 = (uint)bVar2;
        uVar4 = param_1->g2();
        field_20 = (uint)uVar4;
        sVar5 = param_1->g2s();
        field_48 = (int)sVar5;
        sVar5 = param_1->g2s();
        field_52 = (int)sVar5;
        uVar4 = param_1->g2();
        field_56 = (uint)uVar4;
        uVar4 = param_1->g2();
        field_60 = (uint)uVar4;
        bVar2 = param_1->g1();
        field_140 = (uint)bVar2;
        uVar4 = param_1->g2();
        field_88 = (uint)uVar4;
        uVar12 = 4294967295;
        if (uVar4 != 65535) {
            uVar12 = CONCAT22(*(undefined2*)((long)&field_4 + 2), uVar4);
        }
        field_88 = uVar12;
        uVar4 = param_1->g2();
        uVar12 = 4294967295;
        if (uVar4 != 65535) {
            uVar12 = (uint)uVar4;
        }
        field_1864 = uVar12;
        bVar2 = param_1->g1();
        if (bVar2 != 0) {
            uVar15 = (ulong)bVar2;
            (&field_1816, uVar15, 3)->set_max_size();
            (&field_1840, uVar15, 3)->set_max_size();
            uVar13 = 0;
            do {
                bVar2 = param_1->g1();
                puVar8 =
                    (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_1816, uVar13);
                *puVar8 = (uint)bVar2;
                uVar4 = param_1->g2();
                puVar8 =
                    (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_1840, uVar13);
                *puVar8 = (uint)uVar4;
                uVar13 = uVar13 + 1;
            } while (uVar15 != uVar13);
        }
        bVar2 = param_1->g1();
        if (bVar2 != 0) {
            (&field_1792, (ulong)bVar2, 3)->set_max_size();
            uVar13 = 0;
            do {
                this_00 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_1792, uVar13);
                uVar4 = param_1->g2();
                this_00->set_max_size((ulong)uVar4, 3);
                if (uVar4 != 0) {
                    uVar15 = 0;
                    do {
                        uVar6 = param_1->g2();
                        puVar8 = (uint*)Array<int, eastl::allocator>::operator[](this_00, uVar15);
                        *puVar8 = (uint)uVar6;
                        piVar9 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar15);
                        if (*piVar9 == 65535) {
                            puVar10 = (undefined4*)Array<int, eastl::allocator>::operator[](this_00, uVar15);
                            *puVar10 = 4294967295;
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar4 != uVar15);
                }
                uVar13 = uVar13 + 1;
            } while (uVar13 != bVar2);
        }
        if (field_12 == 0) {
            uVar4 = param_1->g2();
            field_108 = (uint)uVar4;
            cVar3 = param_1->g1();
            field_92 = cVar3 == '\x01';
            if (field_12 == 1)
                goto LAB_100200a89;
        LAB_1002006d7:
            uVar12 = field_12;
        } else {
            if (field_12 != 1)
                goto LAB_1002006d7;
        LAB_100200a89:
            param_1->g2();
            param_1->g1();
            uVar12 = field_12;
        }
        if (uVar12 == 3) {
            cVar3 = param_1->g1();
            field_132 = cVar3 == '\x01';
        }
        if ((field_12 == 4) || (field_12 == 1)) {
            bVar2 = param_1->g1();
            field_388 = (uint)bVar2;
            bVar2 = param_1->g1();
            field_392 = (uint)bVar2;
            bVar2 = param_1->g1();
            field_384 = (uint)bVar2;
            uVar4 = param_1->g2();
            uVar12 = 4294967295;
            if (uVar4 != 65535) {
                uVar12 = (uint)uVar4;
            }
            field_312 = uVar12;
            cVar3 = param_1->g1();
            field_396 = cVar3 == '\x01';
        }
        bVar14 = SUB81(param_1, 0);
        if (field_12 == 4) {
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                local_50, bVar14);
            eastl::string::operator=((eastl::string*)&field_320, (basic_string*)local_50);
            local_50->~basic_string();
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                local_50, bVar14);
            eastl::string::operator=((eastl::string*)&field_352, (basic_string*)local_50);
            local_50->~basic_string();
        }
        if ((field_12 < 5) && ((26U >> (field_12 & 31) & 1) != 0)) {
            uVar7 = param_1->g4s();
            field_116 = uVar7;
        }
        if (field_12 - 3 < 2) {
            uVar7 = param_1->g4s();
            field_120 = uVar7;
            uVar7 = param_1->g4s();
            field_124 = uVar7;
            uVar7 = param_1->g4s();
            field_128 = uVar7;
            if (field_12 == 5)
                goto LAB_10020082b;
        LAB_1002007e2:
            if (field_12 != 6)
                goto LAB_1002007e8;
        LAB_10020084d:
            field_228 = 1;
            uVar4 = param_1->g2();
            uVar12 = (uint)uVar4;
            if (uVar4 == 65535) {
                uVar12 = 4294967295;
            }
            field_232 = uVar12;
            field_236 = 1;
            uVar4 = param_1->g2();
            uVar12 = (uint)uVar4;
            if (uVar4 == 65535) {
                uVar12 = 4294967295;
            }
            field_240 = uVar12;
            uVar4 = param_1->g2();
            uVar12 = (uint)uVar4;
            if (uVar4 == 65535) {
                uVar12 = 4294967295;
            }
            field_244 = uVar12;
            uVar4 = param_1->g2();
            uVar12 = (uint)uVar4;
            if (uVar4 == 65535) {
                uVar12 = 4294967295;
            }
            field_248 = uVar12;
            uVar4 = param_1->g2();
            field_272 = (uint)uVar4;
            uVar4 = param_1->g2();
            field_260 = (uint)uVar4;
            uVar4 = param_1->g2();
            field_264 = (uint)uVar4;
            if (field_12 == 8)
                goto LAB_100200908;
        LAB_1002007f2:
            uVar12 = field_16;
        } else {
            if (field_12 != 5)
                goto LAB_1002007e2;
        LAB_10020082b:
            uVar12 = param_1->g4s();
            field_164 = uVar12;
            uVar12 = param_1->g4s();
            field_168 = uVar12;
            if (field_12 == 6)
                goto LAB_10020084d;
        LAB_1002007e8:
            if (field_12 != 8)
                goto LAB_1002007f2;
        LAB_100200908:
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                local_50, bVar14);
            eastl::string::operator=((eastl::string*)&field_320, (basic_string*)local_50);
            local_50->~basic_string();
            uVar12 = field_16;
        }
        if (uVar12 == 2) {
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                local_50, bVar14);
            eastl::string::operator=((eastl::string*)&field_792, (basic_string*)local_50);
            local_50->~basic_string();
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                local_50, bVar14);
            eastl::string::operator=((eastl::string*)&field_1872, (basic_string*)local_50);
            local_50->~basic_string();
            uVar12 = param_1->g2();
            field_684 = field_684 | (uVar12 & 63) << 11;
        }
        if ((field_16 < 7) && ((114U >> (field_16 & 31) & 1) != 0)) {
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                local_50, bVar14);
            eastl::string::operator=((eastl::string*)&field_1904, (basic_string*)local_50);
            local_50->~basic_string();
            if ((eastl::basic_string<
                     char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() == 0) &&
                ((uVar12 = field_16 - 1, uVar12 < 6 && ((57U >> (uVar12 & 31) & 1) != 0)))) {
                eastl::string::operator=((eastl::string*)&field_1904, (basic_string*)(&PTR_ok_100ef7c78)[(int)uVar12]);
            }
        }
        uVar12 = field_16;
        if (uVar12 - 4 < 2) {
        LAB_100200a28:
            pbVar1 = (byte*)((long)&field_684 + 2);
            *pbVar1 = *pbVar1 | 64;
            if (uVar12 != 6)
                goto LAB_100200a3b;
        } else if (uVar12 != 6) {
            if (uVar12 != 1)
                goto LAB_100200a3b;
            goto LAB_100200a28;
        }
        *(byte*)&field_684 = (byte)field_684 | 1;
    LAB_100200a3b:
        uVar13 = param_1->size();
        uVar15 = param_1->GetTextureAtlas();
        return uVar13 <= uVar15;
    }

    // 0x100200ad0, 240 bytes, placed by class name and debug map
    // IfType::CloseInterface(int)
    void IfType::CloseInterface(int param_1) {
        char* pcVar1;
        shared_ptr* psVar3;
        ulong uVar4;
        undefined1* puVar5;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this;
        ulong uVar7;

        if (-1 < param_1) {
            uVar7 = m_open.end();
            if ((ulong)param_1 < uVar7) {
                pcVar1 = (char*)Array<bool, eastl::allocator>::operator[]((Array<bool, eastl::allocator>*)&m_open,
                                                                          (ulong)param_1);
                if (*pcVar1 != '\0') {
                    m_pInterfaces->DiscardFiles(param_1);
                    this = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                        Array<Array<shared_ptr<IfType>, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<shared_ptr<IfType>, eastl::allocator>, eastl::allocator>*)&m_list,
                            (ulong)param_1);
                    if (eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this) != 0) {
                        uVar7 = 0;
                        do {
                            psVar3 = (shared_ptr*)Array<shared_ptr<IfType>, eastl::allocator>::operator[](
                                (Array<shared_ptr<IfType>, eastl::allocator>*)this, uVar7);
                            if (operator!=(psVar3, (_func_decltype_nullptr*)0)) {
                                Array<shared_ptr<IfType>, eastl::allocator>::operator[](
                                    (Array<shared_ptr<IfType>, eastl::allocator>*)this, uVar7);
                                shared_ptr<IfType>::reset();
                            }
                            uVar7 = uVar7 + 1;
                            uVar4 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this);
                        } while (uVar7 < uVar4);
                    }
                    set_max_size(0, 0);
                    puVar5 = (undefined1*)Array<bool, eastl::allocator>::operator[](
                        (Array<bool, eastl::allocator>*)&m_open, (ulong)param_1);
                    *puVar5 = 0;
                }
            }
        }
    }

    // 0x100200c50, 80 bytes, placed by class name and debug map
    // IfType::OpenAll()
    ulong IfType::OpenAll() {
        byte bVar1;
        uint uVar2;
        uint uVar3;
        int in_ESI;
        undefined8 unaff_R15;
        ulong uVar4;

        uVar2 = m_list.end();
        uVar4 = CONCAT71((int7)((ulong)unaff_R15 >> 8), 1);
        if (0 < (int)uVar2) {
            uVar3 = 0;
            do {
                bVar1 = OpenInterface((IfType*)(ulong)uVar3, in_ESI);
                uVar4 = CONCAT71((int7)(uVar4 >> 8), (byte)uVar4 & bVar1);
                uVar3 = uVar3 + 1;
            } while (uVar2 != uVar3);
        }
        return uVar4 & 4294967295;
    }

    // 0x100200ca0, 1600 bytes, base-object destructor, placed by class name and debug map
    // IfType::~IfType()
    void IfType::~IfType() {
        undefined1* this_00;

        this_00 = &field_2112;
        if (this_00->operator_cast_to_bool()) {
            std::function<void(IfType_const&)>::operator()((function<void(IfType_const&)>*)this_00, this);
        }
        std::function<void(IfType_const&)>::~function((function<void(IfType_const&)>*)this_00);
        (&field_2096)->~unique_ptr();
        (&field_2088)->~unique_ptr();
        (&field_2056)->~Array();
        (&field_2000)->~Array();
        (&field_1960)->~Array();
        (&field_1936)->~Array();
        (&field_1904)->~basic_string();
        (&field_1872)->~basic_string();
        (&field_1840)->~Array();
        (&field_1816)->~Array();
        (&field_1792)->~Array();
        (&field_1768)->~Array();
        (&field_1744)->~Array();
        (&field_1720)->~Array();
        (&field_1696)->~Array();
        (&field_1672)->~Array();
        (&field_1648)->~Array();
        (&field_1624)->~Array();
        (&field_1600)->~Array();
        (&field_1576)->~Array();
        (&field_1552)->~Array();
        (&field_1528)->~Array();
        (&field_1504)->~Array();
        (&field_1480)->~Array();
        (&field_1456)->~Array();
        (&field_1432)->~Array();
        (&field_1408)->~Array();
        (&field_1384)->~Array();
        (&field_1360)->~Array();
        (&field_1336)->~Array();
        (&field_1312)->~Array();
        (&field_1288)->~Array();
        (&field_1256)->~vector();
        (&field_1232)->~Array();
        (&field_1200)->~vector();
        (&field_1176)->~Array();
        (&field_1144)->~vector();
        (&field_1120)->~Array();
        (&field_1096)->~Array();
        (&field_1072)->~Array();
        (&field_1048)->~Array();
        (&field_1024)->~Array();
        (&field_1000)->~Array();
        (&field_976)->~Array();
        (&field_952)->~Array();
        (&field_928)->~Array();
        (&field_904)->~Array();
        (&field_880)->~Array();
        (&field_856)->~Array();
        (&field_832)->~Array();
        (&field_792)->~basic_string();
        (&field_760)->~shared_ptr();
        (&field_736)->~Array();
        (&field_704)->~basic_string();
        (&field_696)->~unique_ptr();
        (&field_480)->~fixed_vector();
        (&field_456)->~Array();
        (&field_432)->~Array();
        (&field_408)->~Array();
        (&field_352)->~basic_string();
        (&field_320)->~basic_string();
        (&field_296)->~shared_ptr();
        (&field_176)->~basic_string();
    }

    // 0x100201330, 16 bytes, complete-object destructor, placed by class name and debug map
    // IfType::~IfType(): jumps straight to the base-object destructor

    // 0x100201340, 432 bytes, placed by class name and debug map
    // IfType::DecodeHook(Array<HookArg, eastl::allocator>&, PacketJ<Array<unsigned char, eastl::allocator> >&)
    ulong IfType::DecodeHook(Array* param_1, PacketJ* param_2) {
        byte bVar1;
        int iVar2;
        ulong uVar3;
        ulong uVar4;
        HookArg* pHVar5;
        HookArg local_a8;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_60[32];
        ulong local_40;

        uVar3 = param_2->size();
        uVar4 = param_2->GetTextureAtlas();
        if (uVar3 < uVar4) {
            bVar1 = param_2->g1();
            if (bVar1 == 0) {
                param_1->clear();
                uVar3 = CONCAT71((int7)(uVar3 >> 8), 1);
            } else {
                local_40 = (ulong)bVar1;
                param_1->set_max_size(local_40, 1);
                uVar3 = 0;
                do {
                    bVar1 = param_2->g1();
                    if (bVar1 == 1) {
                        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                            eastl::string>(local_60, SUB81(param_2, 0));
                        new (&local_a8) HookArg(local_60);
                        pHVar5 = (HookArg*)Array<HookArg, eastl::allocator>::operator[](
                            (Array<HookArg, eastl::allocator>*)param_1, uVar3);
                        HookArg::operator=(pHVar5, &local_a8);
                        local_a8.~LanguageMessage();
                        local_60->~basic_string();
                    } else {
                        if (bVar1 != 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "oldscape/rs2lib/util/iftype.cpp",
                                            600, "Invalid hook argument type: %d", (ulong)bVar1);
                        }
                        iVar2 = param_2->g4s();
                        new (&local_a8) HookArg(iVar2);
                        pHVar5 = (HookArg*)Array<HookArg, eastl::allocator>::operator[](
                            (Array<HookArg, eastl::allocator>*)param_1, uVar3);
                        HookArg::operator=(pHVar5, &local_a8);
                        local_a8.~LanguageMessage();
                    }
                    uVar3 = uVar3 + 1;
                } while (local_40 != uVar3);
                ((IfType*)this)->field_824 = 1;
                uVar3 = CONCAT71((int7)(uVar3 >> 8), 1);
            }
        } else {
            uVar3 = 0;
        }
        return uVar3 & 4294967295;
    }

    // 0x1002014f0, 176 bytes, placed by class name and debug map
    // IfType::DecodeTransmitList(eastl::vector<int, eastl::allocator>&, PacketJ<Array<unsigned char, eastl::allocator> >&)
    bool IfType::DecodeTransmitList(vector* param_1, PacketJ* param_2) {
        byte bVar1;
        undefined4 uVar2;
        ulong uVar3;
        ulong uVar4;
        undefined4* puVar5;
        ulong uVar6;

        uVar3 = param_2->size();
        uVar4 = param_2->GetTextureAtlas();
        if (uVar3 < uVar4) {
            bVar1 = param_2->g1();
            if (bVar1 == 0) {
                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            } else {
                eastl::vector<int, eastl::allocator>::resize((ulong)param_1);
                uVar6 = 0;
                do {
                    uVar2 = param_2->g4s();
                    puVar5 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)param_1, uVar6);
                    *puVar5 = uVar2;
                    uVar6 = uVar6 + 1;
                } while (bVar1 != uVar6);
            }
        }
        return uVar3 < uVar4;
    }

    // 0x1002015a0, 128 bytes, placed by class name and debug map
    // IfType::SwapSlots(int, int)
    void IfType::SwapSlots(int param_1, int param_2) {
        int* piVar1;
        int* piVar2;

        piVar1 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_1936, (long)param_1);
        piVar2 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_1936, (long)param_2);
        std::swap<int>(piVar1, piVar2);
        piVar1 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_1960, (long)param_1);
        piVar2 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_1960, (long)param_2);
        std::swap<int>(piVar1, piVar2);
    }

    // 0x100201630, 48 bytes, placed by neighbouring functions
    // CalcSpriteHashId(int, int, bool, bool, int)
    long CalcSpriteHashId(int param_1, int param_2, bool param_3, bool param_4, int param_5) {
        undefined7 in_register_00000009;
        undefined7 in_register_00000011;

        return (long)param_1 + ((ulong)(uint)param_2 << 36) + (CONCAT71(in_register_00000011, param_3) << 38) +
               (CONCAT71(in_register_00000009, param_4) << 39) + ((ulong)(uint)param_5 << 40);
    }

    // 0x100201660, 336 bytes, placed by class name and debug map
    // IfType::GetGraphic(bool, bool&) const
    shared_ptr* IfType::GetGraphic(bool param_1, bool* param_2) {
        uint uVar1;
        bool bVar3;
        shared_ptr* psVar4;
        long lVar5;
        pixloader local_48;

        *param_2 = false;
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
            '\0') {
            psVar4 = (shared_ptr*)GetHttpGraphic(this);
            bVar3 = operator!=(psVar4, (_func_decltype_nullptr*)0);
            if (bVar3) {
                *param_2 = true;
                return psVar4;
            }
        }
        uVar1 = (&field_164)[param_1];
        if (uVar1 == 4294967295) {
            *param_2 = true;
            psVar4 = (shared_ptr*)&NULL_GRAPHIC;
        } else {
            local_48.field_16 = CalcSpriteHashId(uVar1, field_216, field_224, field_225, field_220);
            psVar4 = (shared_ptr*)LRUHashCache<graphics::Pix32, 200ul, 201ul, false, unsigned long long>::Find(
                (ulonglong*)&m_spriteCache);
            lVar5 = psVar4->end();
            if (lVar5 == 0) {
                local_48.Makepix32(m_pSprites, uVar1, 0);
                bVar3 = operator==((shared_ptr*)&local_48, (_func_decltype_nullptr*)0);
                if (bVar3) {
                    psVar4 = (shared_ptr*)&NULL_GRAPHIC;
                } else {
                    PrerenderProcessSprite(this, (shared_ptr*)&local_48);
                    *param_2 = true;
                    psVar4 = (shared_ptr*)m_spriteCache.Put((shared_ptr*)&local_48, 1, (ulonglong*)&local_48.field_16);
                }
                local_48.~shared_ptr();
            } else {
                *param_2 = true;
            }
        }
        return psVar4;
    }

    // 0x1002017b0, 384 bytes, placed by class name and debug map
    // IfType::GetHttpGraphic() const
    shared_ptr* IfType::GetHttpGraphic() {
        bool bVar2;
        shared_ptr* psVar3;
        undefined1 auVar4[16];
        basic_string local_60[24];
        shared_ptr local_48;
        shared_ptr local_38;

        if (NeedsPrerenderProcessing(this) == '\0') {
            psVar3 = (shared_ptr*)GetRawDownloadedGraphic(this);
        } else {
            auVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::destruct<highlight::NpcUID*>((eastl*)&local_38, (NpcUID*)"EASTL basic_string", auVar4._8_8_);
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, auVar4._0_8_);
            eastl::basic_string<char, BucketAllocatorEASTL>::append_sprintf(
                (char*)local_60, "%d%d%d%d", (ulong)field_224, (ulong)field_225, (ulong)field_216, (ulong)field_220);
            psVar3 = (shared_ptr*)
                LRUHashCache<graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL>>::Find(
                    (basic_string*)&m_httpSpriteCacheProcessed);
            bVar2 = shared_ptr::operator_cast_to_bool(psVar3);
            if (!bVar2) {
                psVar3 = (shared_ptr*)GetRawDownloadedGraphic(this);
                new (&local_38) shared_ptr<dash3d::Decor>(psVar3);
                bVar2 = shared_ptr::operator_cast_to_bool(&local_38);
                if (bVar2) {
                    shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)&local_38);
                    local_48.Copy();
                    PrerenderProcessSprite(this, &local_48);
                    psVar3 = (shared_ptr*)m_httpSpriteCacheProcessed.Put(&local_48, 1, local_60);
                    local_48.~shared_ptr();
                } else {
                    psVar3 = (shared_ptr*)&NULL_GRAPHIC;
                }
                local_38.~shared_ptr();
            }
            local_60->~basic_string();
        }
        return psVar3;
    }

    // 0x1002019d0, 192 bytes, placed by class name and debug map
    // IfType::PrerenderProcessSprite(shared_ptr<graphics::Pix32>&) const
    void IfType::PrerenderProcessSprite(shared_ptr* param_1) {
        Pix32* pPVar1;

        if (field_224 != false) {
            pPVar1 = (Pix32*)shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)param_1);
            pPVar1->VFlip();
        }
        if (field_225 != false) {
            pPVar1 = (Pix32*)shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)param_1);
            pPVar1->HFlip();
        }
        if (0 < (int)field_216) {
            pPVar1 = (Pix32*)shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)param_1);
            pPVar1->Untrim(field_216);
        }
        if (0 < (int)field_216) {
            pPVar1 = (Pix32*)shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)param_1);
            pPVar1->AddOutline(1);
        }
        if (1 < (int)field_216) {
            pPVar1 = (Pix32*)shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)param_1);
            pPVar1->AddOutline(16777215);
        }
        if (field_220 != 0) {
            pPVar1 = (Pix32*)shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)param_1);
            pPVar1->AddShadow(field_220);
        }
    }

    // 0x100201b80, 48 bytes, placed by class name and debug map
    // IfType::NeedsPrerenderProcessing() const
    bool IfType::NeedsPrerenderProcessing() {
        if (((field_224 == false) && (field_225 == false)) && (field_216 == 0)) {
            return field_220 != 0;
        }
        return true;
    }

    // 0x100201bb0, 224 bytes, placed by class name and debug map
    // IfType::GetRawDownloadedGraphic() const
    /* WARNING: Removing unreachable block (ram,4297071637) */
    /* IfType::GetRawDownloadedGraphic() const */

    undefined1* IfType::GetRawDownloadedGraphic() {
        char cVar1;
        bool bVar2;
        shared_ptr* this_00;
        HttpSpriteData* this_01;
        undefined* puVar3;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_02;
        undefined1* puVar4;
        shared_ptr local_28;

        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            this_00 = (shared_ptr*)LRUHashCache<HttpSpriteData, 10ul, 11ul, false, eastl::string>::Find(
                (basic_string*)&m_httpSpriteCacheRaw);
            bVar2 = shared_ptr::operator_cast_to_bool(this_00);
            if (!bVar2) {
                make_shared<HttpSpriteData, eastl::stringconst&>((jag*)&local_28, (basic_string*)&field_176);
                m_httpSpriteCacheRaw.Put(&local_28, 1, (basic_string*)&field_176);
                local_28.~shared_ptr();
                return &NULL_GRAPHIC;
            }
            this_01 = (HttpSpriteData*)shared_ptr<HttpSpriteData>::operator->((shared_ptr<HttpSpriteData>*)this_00);
            puVar3 = (undefined*)this_01->Service();
            if (puVar3 == DataStatus::READY) {
                this_02 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>*)
                              shared_ptr<HttpSpriteData>::operator->((shared_ptr<HttpSpriteData>*)this_00);
                puVar4 = (undefined1*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(this_02);
                return puVar4;
            }
        }
        return &NULL_GRAPHIC;
    }

    // 0x100202150, 336 bytes, placed by class name and debug map
    // IfType::GetFont(bool&) const
    vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* IfType::GetFont(bool* param_1) {
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        long lVar3;
        _func_decltype_nullptr* p_Var4;
        pixloader local_38;

        if (GetFont(bool&)::NULL_RESULT == '\0') {
            p_Var4 = (_func_decltype_nullptr*)param_1;
            if (___cxa_guard_acquire(&GetFont(bool&)::NULL_RESULT) != 0) {
                new (&GetFont(bool&)::NULL_RESULT) shared_ptr<worldmap::WorldmapAreaMetadata>(p_Var4);
                ___cxa_atexit(PTR__shared_ptr_100ee5520, &GetFont(bool&)::NULL_RESULT, 4294967296);
                ___cxa_guard_release(&GetFont(bool&)::NULL_RESULT);
            }
        }
        *param_1 = false;
        local_38.field_16 = (long)(int)field_312;
        if (local_38.field_16 < 0) {
            *param_1 = true;
            this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&GetFont(bool&)::NULL_RESULT;
        } else {
            this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                LRUHashCache<jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>::Find(
                    (ulonglong*)&m_fontCache);
            lVar3 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
            if (lVar3 == 0) {
                local_38.MakepixfontGeneric(m_pSprites, m_pFontMetrics, field_312, 0);
                if (operator==((shared_ptr*)&local_38, (_func_decltype_nullptr*)0)) {
                    this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&GetFont(bool&)::NULL_RESULT;
                } else {
                    *param_1 = true;
                    this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)m_fontCache.Put(
                        (shared_ptr*)&local_38, 1, (ulonglong*)&local_38.field_16);
                }
                local_38.~shared_ptr();
            } else {
                *param_1 = true;
            }
        }
        return this_00;
    }

    // 0x100202430, 368 bytes, placed by class name and debug map
    // IfType::GetInvBackground(int, bool&) const
    vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* IfType::GetInvBackground(int param_1, bool* param_2) {
        int iVar2;
        ulong uVar3;
        int* piVar4;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar5;
        undefined4 in_register_00000034;
        _func_decltype_nullptr* p_Var7;
        pixloader local_40;

        p_Var7 = (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_1);
        *param_2 = false;
        if ((GetInvBackground(int, bool&)::NULL_RESULT == '\0') &&
            (iVar2 = ___cxa_guard_acquire(&GetInvBackground(int, bool&)::NULL_RESULT), iVar2 != 0)) {
            new (&GetInvBackground(int, bool&)::NULL_RESULT) shared_ptr<worldmap::WorldmapAreaMetadata>(p_Var7);
            ___cxa_atexit(PTR__shared_ptr_100ee5530, &GetInvBackground(int, bool&)::NULL_RESULT, 4294967296);
            ___cxa_guard_release(&GetInvBackground(int, bool&)::NULL_RESULT);
        }
        if (-1 < param_1) {
            uVar3 = (&field_456)->end();
            if ((ulong)(long)param_1 < uVar3) {
                piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_456,
                                                                        (long)param_1);
                iVar2 = *piVar4;
                local_40.field_16 = (long)iVar2;
                if (-1 < local_40.field_16) {
                    pvVar5 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                        LRUHashCache<graphics::Pix32, 200ul, 201ul, false, unsigned long long>::Find(
                            (ulonglong*)&m_spriteCache);
                    if (eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar5) != 0) {
                        *param_2 = true;
                        return pvVar5;
                    }
                    local_40.Makepix32(m_pSprites, iVar2, 0);
                    if (operator==((shared_ptr*)&local_40, (_func_decltype_nullptr*)0)) {
                        pvVar5 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&GetInvBackground(
                            int, bool&)::NULL_RESULT;
                    } else {
                        *param_2 = true;
                        pvVar5 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)m_spriteCache.Put(
                            (shared_ptr*)&local_40, 1, (ulonglong*)&local_40.field_16);
                    }
                    local_40.~shared_ptr();
                    return pvVar5;
                }
            }
        }
        *param_2 = true;
        return (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&GetInvBackground(int, bool&)::NULL_RESULT;
    }

    // 0x1002025a0, 1168 bytes, placed by class name and debug map
    // IfType::GetTempModel(configdecoder::SeqType const*, int, bool, PlayerModel const*, bool&, configdecoder::NpcType*, configdecoder::NPCTypeCustomisation*) const
    IfType* IfType::GetTempModel(SeqType* param_1, int param_2, bool param_3, PlayerModel* param_4, bool* param_5,
                                 NpcType* param_6, NPCTypeCustomisation* param_7) {
        char cVar1;
        bool bVar2;
        int iVar3;
        shared_ptr* psVar4;
        long lVar5;
        NPCTypeCustomisation* pNVar6;
        long* plVar7;
        uint uVar8;
        undefined4 in_register_00000014;
        uint uVar9;
        int iVar10;
        MidiTask* in_stack_00000018;
        shared_ptr local_80;
        ulong local_70;
        shared_ptr local_68;
        shared_ptr local_58;
        uint local_44;
        shared_ptr local_40;

        *(undefined1*)&param_6->field_0 = 0;
        uVar9 = (&param_1->field_228)[((ulong)param_4 & 4294967295) * 2];
        if (uVar9 == 6) {
            if (param_7 == (NPCTypeCustomisation*)0)
                goto LAB_1002025ff;
        } else {
            param_7 = (NPCTypeCustomisation*)(&param_1->field_232 + ((ulong)param_4 & 4294967295) * 2);
        }
        if ((6 < uVar9 - 1) || ((local_44 = *(uint*)param_7, uVar9 == 1 && ((int)local_44 < 0)))) {
        LAB_1002025ff:
            *(undefined1*)&param_6->field_0 = 1;
            new (this) shared_ptr<worldmap::WorldmapAreaMetadata>(param_1);
            return this;
        }
        if (in_stack_00000018 != (MidiTask*)0) {
            cVar1 = in_stack_00000018->HasError();
            uVar8 = 3;
            if (uVar9 != 6) {
                uVar8 = uVar9;
            }
            if (cVar1 == '\0') {
                uVar8 = uVar9;
            }
            uVar9 = uVar8;
        }
        local_70 = (ulong)(int)(uVar9 * 65536 + local_44);
        if (in_stack_00000018 != (MidiTask*)0) {
            iVar3 = in_stack_00000018->GetZ();
            local_70 = local_70 | (long)iVar3 << 20;
        }
        if (dash3d::g_usingRSeven != '\0') {
            local_70 = local_70 | 4503599627370496;
        }
        psVar4 = (shared_ptr*)LRUHashCache<dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>::Find(
            (ulonglong*)&m_modelCache);
        new (&local_80) shared_ptr<dash3d::Decor>(psVar4);
        bVar2 = operator==(&local_80, (_func_decltype_nullptr*)0);
        if (!bVar2)
            goto LAB_100202912;
        new (&local_58) shared_ptr<worldmap::WorldmapAreaMetadata>(0);
        iVar10 = 768;
        iVar3 = 64;
        switch (uVar9) {
        case 1:
            local_40.Load(m_pModels, local_44, 0, false);
            shared_ptr<dash3d::ModelUnlit>::operator=((shared_ptr<dash3d::ModelUnlit>*)&local_58, &local_40);
            goto LAB_10020283d;
        case 2:
            local_68.List(local_44);
            pNVar6 = (NPCTypeCustomisation*)shared_ptr<configdecoder::NpcType>::operator->(
                (shared_ptr<configdecoder::NpcType>*)&local_68);
            local_40.GetHead(pNVar6);
            shared_ptr<dash3d::ModelUnlit>::operator=((shared_ptr<dash3d::ModelUnlit>*)&local_58, &local_40);
            goto LAB_100202811;
        case 3:
            if (param_5 == (bool*)0) {
                new (&local_40) shared_ptr<worldmap::WorldmapAreaMetadata>(0);
            } else {
                local_40.GetHeadModel();
            }
            shared_ptr<dash3d::ModelUnlit>::operator=((shared_ptr<dash3d::ModelUnlit>*)&local_58, &local_40);
        LAB_10020283d:
            local_40.~shared_ptr();
            break;
        case 4:
            local_40.List(local_44);
            iVar3 = shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)&local_40);
            local_68.GetModelUnlit(iVar3);
            shared_ptr<dash3d::ModelUnlit>::operator=((shared_ptr<dash3d::ModelUnlit>*)&local_58, &local_68);
            local_68.~shared_ptr();
            lVar5 = shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)&local_40);
            iVar3 = *(int*)(lVar5 + 748);
            lVar5 = shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)&local_40);
            iVar3 = iVar3 + 64;
            iVar10 = *(int*)(lVar5 + 752) + 768;
            local_40.~shared_ptr();
            break;
        case 6:
            local_68.List(local_44);
            pNVar6 = (NPCTypeCustomisation*)shared_ptr<configdecoder::NpcType>::operator->(
                (shared_ptr<configdecoder::NpcType>*)&local_68);
            local_40.GetHead(pNVar6);
            shared_ptr<dash3d::ModelUnlit>::operator=((shared_ptr<dash3d::ModelUnlit>*)&local_58, &local_40);
        LAB_100202811:
            local_40.~shared_ptr();
            local_68.~shared_ptr();
        }
        bVar2 = operator==(&local_58, (_func_decltype_nullptr*)0);
        if (bVar2) {
            new (this) shared_ptr<worldmap::WorldmapAreaMetadata>(0);
        } else {
            plVar7 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->((shared_ptr<dash3d::ModelUnlit>*)&local_58);
            (**(code**)(*plVar7 + 72))(&local_40, plVar7, iVar3, iVar10, 4294967246, 4294967286, 4294967246);
            shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)&local_80, &local_40);
            local_40.~shared_ptr();
            plVar7 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_80);
            cVar1 = (**(code**)(*plVar7 + 56))(plVar7);
            if (dash3d::g_usingRSeven != cVar1) {
                /* WARNING: Subroutine does not return */
                LogAssert("m->IsForRSeven() == dash3d::g_usingRSeven",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/"
                          "iftype.cpp",
                          961, (char*)0);
            }
            m_modelCache.Put(&local_80, 1, &local_70);
        }
        local_58.~shared_ptr();
        if (!bVar2) {
        LAB_100202912:
            if ((ModelLit*)CONCAT44(in_register_00000014, param_2) != (ModelLit*)0) {
                iVar3 = shared_ptr<dash3d::ModelLit>::operator*((shared_ptr<dash3d::ModelLit>*)&local_80);
                local_58.AnimateModelWithExtra((ModelLit*)CONCAT44(in_register_00000014, param_2), iVar3);
                shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)&local_80, &local_58);
                local_58.~shared_ptr();
            }
            *(undefined1*)&param_6->field_0 = 1;
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)this, &local_80);
        }
        local_80.~shared_ptr();
        return this;
    }

    // 0x100203110, 800 bytes, placed by class name and debug map
    // IfType::GetMask(bool, bool&) const
    vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* IfType::GetMask(bool param_1, bool* param_2) {
        long lVar1;
        bool bVar2;
        int iVar3;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        long lVar4;
        shared_ptr* this_01;
        SharedArray<unsigned int>* this_02;
        long lVar5;
        int* piVar6;
        ulong uVar7;
        undefined7 in_register_00000031;
        _func_decltype_nullptr* p_Var8;
        uint uVar9;
        ulong uVar10;
        Array<int, eastl::allocator> local_98[24];
        Array<int, eastl::allocator> local_80[24];
        shared_ptr local_68;
        shared_ptr<graphics::Pix32> local_58[16];
        ulonglong local_48;
        uint local_3c;
        uint local_38;
        uint local_34;

        p_Var8 = (_func_decltype_nullptr*)CONCAT71(in_register_00000031, param_1);
        *param_2 = false;
        if ((GetMask(bool, bool&)::NULL_RESULT == '\0') &&
            (iVar3 = ___cxa_guard_acquire(&GetMask(bool, bool&)::NULL_RESULT), iVar3 != 0)) {
            new (&GetMask(bool, bool&)::NULL_RESULT) shared_ptr<worldmap::WorldmapAreaMetadata>(p_Var8);
            ___cxa_atexit(PTR__shared_ptr_100ee5500, &GetMask(bool, bool&)::NULL_RESULT, 4294967296);
            ___cxa_guard_release(&GetMask(bool, bool&)::NULL_RESULT);
        }
        if ((!param_1) || (local_3c = field_168, (int)local_3c < 0)) {
            local_3c = field_164;
        }
        if ((int)local_3c < 0) {
            *param_2 = true;
            this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&GetMask(bool, bool&)::NULL_RESULT;
        } else {
            local_48 = CalcSpriteHashId(local_3c, field_216, field_224, field_225, field_220);
            this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                LRUHashCache<InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>::Find((ulonglong*)&m_maskCache);
            lVar4 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
            if (lVar4 == 0) {
                this_01 = (shared_ptr*)GetGraphic(this, param_1, param_2);
                this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&GetMask(bool, bool&)::NULL_RESULT;
                if ((*param_2 != false) && (bVar2 = operator==(this_01, (_func_decltype_nullptr*)0), !bVar2)) {
                    shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)this_01);
                    local_58->CopyUntrim();
                    lVar4 = shared_ptr<graphics::Pix32>::operator->(local_58);
                    local_38 = *(uint*)(lVar4 + 24);
                    lVar4 = shared_ptr<graphics::Pix32>::operator->(local_58);
                    local_34 = *(uint*)(lVar4 + 28);
                    Array<int, eastl::allocator>::Array(local_98, (long)(int)local_34);
                    Array<int, eastl::allocator>::Array(local_80, (long)(int)local_34);
                    this_02 = (SharedArray<unsigned int>*)shared_ptr<graphics::Pix32>::operator->(local_58);
                    lVar4 = this_02->data();
                    if (0 < (int)local_34) {
                        uVar7 = 0;
                        do {
                            lVar5 = (long)(int)local_38;
                            uVar10 = 0;
                            if (0 < lVar5) {
                                uVar10 = 0;
                                do {
                                    if (*(int*)(lVar4 + (long)(int)(local_38 * (int)uVar7) * 4 + uVar10 * 4) == 0)
                                        goto LAB_100203293;
                                    uVar10 = uVar10 + 1;
                                } while (local_38 != uVar10);
                                uVar10 = 0;
                            }
                        LAB_100203293:
                            iVar3 = (int)uVar10;
                            uVar9 = local_38 + 1;
                            do {
                                if (lVar5 <= iVar3) {
                                    uVar9 = local_38;
                                    break;
                                }
                                uVar9 = uVar9 - 1;
                                lVar1 = lVar5 * 4;
                                lVar5 = lVar5 + -1;
                            } while (*(int*)((long)(int)(local_38 * (int)uVar7) * 4 + lVar4 + -4 + lVar1) != 0);
                            piVar6 = (int*)Array<int, eastl::allocator>::operator[](local_98, uVar7);
                            *piVar6 = iVar3;
                            piVar6 = (int*)Array<int, eastl::allocator>::operator[](local_80, uVar7);
                            *piVar6 = uVar9 - iVar3;
                            uVar7 = uVar7 + 1;
                        } while ((long)uVar7 < (long)(int)local_34);
                    }
                    make_shared<InterfaceGraphicMask, int const&, int const&, Array<int, eastl::allocator>,
                                Array<int, eastl::allocator>, int const&>((jag*)&local_68, (int*)&local_38,
                                                                          (int*)&local_34, (Array*)local_80,
                                                                          (Array*)local_98, (int*)&local_3c);
                    this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)m_maskCache.Put(&local_68, 1,
                                                                                                       &local_48);
                    local_68.~shared_ptr();
                    local_80->~Array();
                    local_98->~Array();
                    local_58->~shared_ptr();
                }
            } else {
                *param_2 = true;
            }
        }
        return this_00;
    }

    // 0x100203690, 64 bytes, placed by class name and debug map
    // IfType::ResetCache()
    void IfType::ResetCache() {
        m_spriteCache.Reset();
        m_modelCache.Reset();
        m_fontCache.Reset();
        m_maskCache.Reset();
    }

    // 0x100203790, 96 bytes, placed by class name and debug map
    // IfType::SetOpName(int, eastl::string const&)
    void IfType::SetOpName(int param_1, basic_string* param_2) {
        eastl::string local_40[32];

        eastl::string::basic_string(local_40, param_2);
        SetOpName(this, param_1, (basic_string*)local_40);
        eastl::string::~basic_string(local_40);
    }

    // 0x1002037f0, 96 bytes, placed by class name and debug map
    // IfType::SetOpName(int, eastl::string&&)
    void IfType::SetOpName(int param_1, basic_string* param_2) {
        ulong uVar1;
        eastl::string* this_00;
        undefined1* this_01;

        this_01 = &field_736;
        uVar1 = this_01->end();
        if (uVar1 <= (ulong)(long)param_1) {
            this_01->set_max_size((long)(param_1 + 1), 3);
        }
        this_00 = (eastl::string*)Array<eastl::string, eastl::allocator>::operator[](
            (Array<eastl::string, eastl::allocator>*)this_01, (long)param_1);
        eastl::string::operator=(this_00, param_2);
    }

    // 0x100203850, 32 bytes, placed by class name and debug map
    // IfType::CanSkipLogicIfNotVisible()
    bool IfType::CanSkipLogicIfNotVisible() {
        if ((field_0 == '\0') || (field_24 != '\0')) {
            return false;
        }
        return field_12 != 12;
    }

    // 0x100203870, 64 bytes, placed by class name and debug map
    // IfType::IsActiveComponent()
    bool IfType::IsActiveComponent() {
        uint uVar1;

        if ((((field_0 == '\0') || (uVar1 = field_12, uVar1 == 0)) || (uVar1 == 11)) ||
            (((field_824 != '\0' || (field_20 == 1338)) || (uVar1 == 12)))) {
            return true;
        }
        return -1 < field_680;
    }

    // 0x1002038b0, 32 bytes, placed by class name and debug map
    // IfType::HasHardcodedMouseInputBehaviour()
    undefined4 IfType::HasHardcodedMouseInputBehaviour() {
        uint uVar1;

        uVar1 = field_12 - 11;
        return CONCAT31((int3)(uVar1 >> 8), uVar1 < 2);
    }

    // 0x1002038d0, 160 bytes, placed by class name and debug map
    // IfType::InitialiseCRM(eastl::string const&, http::CRMData::ClientDataProvider*)
    void IfType::InitialiseCRM(basic_string* param_1, ClientDataProvider* param_2) {
        CRMViewHandler* this_00;
        undefined1* this_01;
        unique_ptr local_30[8];

        if (field_12 != 11) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_type == IfTypes::CRMVIEW",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/iftype.cpp",
                1110, (char*)0);
        }
        std::make_unique<CRMViewHandler>();
        this_01 = &field_2088;
        std::unique_ptr<CRMViewHandler, std::default_delete<CRMViewHandler>>::operator=(
            (unique_ptr<CRMViewHandler, std::default_delete<CRMViewHandler>>*)this_01, local_30);
        local_30->~unique_ptr();
        this_00 = (CRMViewHandler*)std::unique_ptr<CRMViewHandler, std::default_delete<CRMViewHandler>>::operator->(
            (unique_ptr<CRMViewHandler, std::default_delete<CRMViewHandler>>*)this_01);
        if (this_00->SetURL(param_1, param_2) == '\0') {
            this_01->reset(0);
        }
    }

    // 0x100203a40, 128 bytes, placed by class name and debug map
    // IfType::InitialiseCRMFromJSON(eastl::string const&)
    void IfType::InitialiseCRMFromJSON(basic_string* param_1) {
        basic_string* pbVar1;
        unique_ptr local_28[8];

        if (*(int*)(param_1 + 12) != 11) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_type == IfTypes::CRMVIEW",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/iftype.cpp",
                1120, (char*)0);
        }
        std::make_unique<CRMViewHandler>();
        std::unique_ptr<CRMViewHandler, std::default_delete<CRMViewHandler>>::operator=(
            (unique_ptr<CRMViewHandler, std::default_delete<CRMViewHandler>>*)(param_1 + 2088), local_28);
        local_28->~unique_ptr();
        pbVar1 = (basic_string*)std::unique_ptr<CRMViewHandler, std::default_delete<CRMViewHandler>>::operator->(
            (unique_ptr<CRMViewHandler, std::default_delete<CRMViewHandler>>*)(param_1 + 2088));
        CRMViewHandler::SetFromJSON(pbVar1);
    }

    // 0x100203ac0, 128 bytes, placed by class name and debug map
    // IfType::ServiceCRMView()
    ulong IfType::ServiceCRMView() {
        undefined1* this_00;
        char cVar2;
        CRMViewHandler* pCVar3;
        ulong uVar4;

        if (field_12 != 11) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_type == IfTypes::CRMVIEW",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/iftype.cpp",
                1128, (char*)0);
        }
        this_00 = &field_2088;
        if (this_00->operator_cast_to_bool()) {
            pCVar3 = (CRMViewHandler*)std::unique_ptr<CRMViewHandler, std::default_delete<CRMViewHandler>>::operator->(
                (unique_ptr<CRMViewHandler, std::default_delete<CRMViewHandler>>*)this_00);
            cVar2 = pCVar3->Service();
            if (cVar2 != '\0') {
                pCVar3 =
                    (CRMViewHandler*)std::unique_ptr<CRMViewHandler, std::default_delete<CRMViewHandler>>::operator->(
                        (unique_ptr<CRMViewHandler, std::default_delete<CRMViewHandler>>*)this_00);
                cVar2 = pCVar3->HasSuccessfulResponse();
                uVar4 = CONCAT71((int7)((ulong)this_00 >> 8), 1);
                if (cVar2 != '\0') {
                    BuildCRMView(this);
                }
                goto LAB_100203b37;
            }
        }
        uVar4 = 0;
    LAB_100203b37:
        return uVar4 & 4294967295;
    }

    // 0x100203b60, 960 bytes, placed by class name and debug map
    // IfType::BuildCRMView()
    void IfType::BuildCRMView() {
        undefined1* this_00;
        undefined4 uVar1;
        Layout* this_01;
        long lVar2;
        long lVar3;
        unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>* puVar4;
        EditLine* this_02;
        char* pcVar5;
        HTTPRequest* pHVar6;
        shared_ptr<IfType>* psVar7;
        ulong uVar8;
        CRMViewHandler* this_03;
        ulong uVar9;
        type* in_RSI;
        ulong uVar10;
        WrapArray<http::CRMData::ImageElement_const> local_a8[16];
        Layout local_98[16];
        shared_ptr local_88[2];
        allocator local_68[8];
        unique_ptr<CRMViewHandler, std::default_delete<CRMViewHandler>>* local_60;
        rs2lib local_58;
        ulong local_48;
        IfType* local_40;
        Array<shared_ptr<IfType>, eastl::allocator>* local_38;

        field_2080 = true;
        local_60 = (unique_ptr<CRMViewHandler, std::default_delete<CRMViewHandler>>*)&field_2088;
        this_01 = (Layout*)std::unique_ptr<CRMViewHandler, std::default_delete<CRMViewHandler>>::operator->(local_60);
        eastl::string::Layout::SSOBeginPtr(this_01, in_RSI);
        local_a8->GetImageElements();
        local_98->GetLabelElements();
        lVar2 = local_a8->HeapBeginPtr();
        lVar3 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(local_98);
        this_00 = &field_2000;
        local_40 = this;
        this_00->clear();
        local_38 = (Array<shared_ptr<IfType>, eastl::allocator>*)this_00;
        this_00->set_max_size(lVar2 + lVar3, 1);
        lVar2 = local_a8->HeapBeginPtr();
        if (lVar2 == 0) {
            uVar10 = 0;
        } else {
            uVar10 = 0;
            do {
                lVar2 = WrapArray<http::CRMData::ImageElement_const>::operator[](local_a8, uVar10);
                MakeCRMSubComponent(&local_58, 5, local_40, uVar10 & 4294967295, 0, 0, 0, 0, lVar2 + 8);
                puVar4 = (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)
                    WrapArray<http::CRMData::ImageElement_const>::operator[](local_a8, uVar10);
                this_02 =
                    (EditLine*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                        puVar4);
                pcVar5 = (char*)this_02->GetText();
                eastl::allocator::allocator(local_68, "EASTL basic_string");
                new (local_88) eastl::string(pcVar5, local_68);
                lVar2 = shared_ptr<IfType>::operator->((shared_ptr<IfType>*)&local_58);
                eastl::string::operator=((eastl::string*)(lVar2 + 176), (basic_string*)local_88);
                local_88->~basic_string();
                puVar4 = (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)
                    WrapArray<http::CRMData::ImageElement_const>::operator[](local_a8, uVar10);
                pHVar6 =
                    (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator*(
                        puVar4);
                make_shared<HttpSpriteData, http::HTTPRequest&>((jag*)local_88, pHVar6);
                lVar2 = shared_ptr<IfType>::operator->((shared_ptr<IfType>*)&local_58);
                m_httpSpriteCacheRaw.Put(local_88, 1, (basic_string*)(lVar2 + 176));
                psVar7 = (shared_ptr<IfType>*)Array<shared_ptr<IfType>, eastl::allocator>::operator[](local_38, uVar10);
                shared_ptr<IfType>::operator=(psVar7, (shared_ptr*)&local_58);
                uVar10 = uVar10 + 1;
                local_88->~shared_ptr();
                local_58.~shared_ptr();
                uVar8 = local_a8->HeapBeginPtr();
            } while (uVar10 < uVar8);
            uVar10 = uVar10 & 4294967295;
        }
        lVar2 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(local_98);
        if (lVar2 != 0) {
            uVar8 = 0;
            do {
                lVar2 = WrapArray<http::CRMData::LabelElement_const>::operator[](
                    (WrapArray<http::CRMData::LabelElement_const>*)local_98, uVar8);
                local_48 = uVar10;
                MakeCRMSubComponent(&local_58, 4, local_40, uVar10 & 4294967295, 0, 0, 0, 0, lVar2 + 24);
                WrapArray<http::CRMData::LabelElement_const>::operator[](
                    (WrapArray<http::CRMData::LabelElement_const>*)local_98, uVar8);
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::allocator::allocator(local_68, "EASTL basic_string");
                new (local_88) eastl::string(pcVar5, local_68);
                lVar2 = shared_ptr<IfType>::operator->((shared_ptr<IfType>*)&local_58);
                eastl::string::operator=((eastl::string*)(lVar2 + 320), (basic_string*)local_88);
                local_88->~basic_string();
                this_03 =
                    (CRMViewHandler*)std::unique_ptr<CRMViewHandler, std::default_delete<CRMViewHandler>>::operator->(
                        local_60);
                lVar2 = WrapArray<http::CRMData::LabelElement_const>::operator[](
                    (WrapArray<http::CRMData::LabelElement_const>*)local_98, uVar8);
                uVar1 = this_03->GetFontID((uint) * (byte*)(lVar2 + 48));
                lVar2 = shared_ptr<IfType>::operator->((shared_ptr<IfType>*)&local_58);
                *(undefined4*)(lVar2 + 312) = uVar1;
                lVar2 = WrapArray<http::CRMData::LabelElement_const>::operator[](
                    (WrapArray<http::CRMData::LabelElement_const>*)local_98, uVar8);
                uVar1 = *(undefined4*)(lVar2 + 40);
                lVar2 = shared_ptr<IfType>::operator->((shared_ptr<IfType>*)&local_58);
                *(undefined4*)(lVar2 + 388) = uVar1;
                lVar2 = WrapArray<http::CRMData::LabelElement_const>::operator[](
                    (WrapArray<http::CRMData::LabelElement_const>*)local_98, uVar8);
                uVar1 = *(undefined4*)(lVar2 + 44);
                lVar2 = shared_ptr<IfType>::operator->((shared_ptr<IfType>*)&local_58);
                *(undefined4*)(lVar2 + 392) = uVar1;
                psVar7 =
                    (shared_ptr<IfType>*)Array<shared_ptr<IfType>, eastl::allocator>::operator[](local_38, local_48);
                shared_ptr<IfType>::operator=(psVar7, (shared_ptr*)&local_58);
                local_58.~shared_ptr();
                uVar8 = uVar8 + 1;
                uVar9 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                        Layout::HeapBeginPtr(local_98);
                uVar10 = local_48 + 1;
            } while (uVar8 < uVar9);
        }
    }

    // 0x100203f20, 432 bytes, placed by neighbouring functions
    // MakeCRMSubComponent(IfType::IfTypes, IfType const&, int, int, int, int, int, std::array<float, 4ul> const&)
    /* MakeCRMSubComponent(IfType::IfTypes,
   IfType const&, int, int, int, int, int, std::array<float, 4ul> const&) */

    rs2lib* MakeCRMSubComponent(undefined4 param_2, long param_3, undefined4 param_4, undefined4 param_5,
                                undefined4 param_6, undefined4 param_7, undefined4 param_8,
                                array<float, 4ul>* param_9) {
        float fVar1;
        int iVar2;
        long lVar3;
        undefined1* puVar4;
        float* pfVar5;

        make_shared<IfType, int const&>((jag*)this, (int*)(param_3 + 4));
        lVar3 = shared_ptr<IfType>::operator->((shared_ptr<IfType>*)this);
        *(undefined4*)(lVar3 + 12) = param_2;
        iVar2 = *(int*)(param_3 + 4);
        lVar3 = shared_ptr<IfType>::operator->((shared_ptr<IfType>*)this);
        *(int*)(lVar3 + 88) = iVar2;
        lVar3 = shared_ptr<IfType>::operator->((shared_ptr<IfType>*)this);
        *(undefined4*)(lVar3 + 8) = param_4;
        puVar4 = (undefined1*)shared_ptr<IfType>::operator->((shared_ptr<IfType>*)this);
        *puVar4 = 1;
        lVar3 = shared_ptr<IfType>::operator->((shared_ptr<IfType>*)this);
        *(undefined4*)(lVar3 + 32) = param_5;
        lVar3 = shared_ptr<IfType>::operator->((shared_ptr<IfType>*)this);
        *(undefined4*)(lVar3 + 36) = param_6;
        lVar3 = shared_ptr<IfType>::operator->((shared_ptr<IfType>*)this);
        *(undefined4*)(lVar3 + 40) = param_7;
        lVar3 = shared_ptr<IfType>::operator->((shared_ptr<IfType>*)this);
        *(undefined4*)(lVar3 + 44) = param_8;
        pfVar5 = (float*)std::array<float, 4ul>::operator[](param_9, 0);
        fVar1 = *pfVar5;
        iVar2 = *(int*)(param_3 + 72);
        lVar3 = shared_ptr<IfType>::operator->((shared_ptr<IfType>*)this);
        *(int*)(lVar3 + 48) = (int)(fVar1 * (float)iVar2);
        pfVar5 = (float*)std::array<float, 4ul>::operator[](param_9, 1);
        fVar1 = *pfVar5;
        iVar2 = *(int*)(param_3 + 76);
        lVar3 = shared_ptr<IfType>::operator->((shared_ptr<IfType>*)this);
        *(int*)(lVar3 + 52) = (int)(fVar1 * (float)iVar2);
        pfVar5 = (float*)std::array<float, 4ul>::operator[](param_9, 2);
        fVar1 = *pfVar5;
        iVar2 = *(int*)(param_3 + 72);
        lVar3 = shared_ptr<IfType>::operator->((shared_ptr<IfType>*)this);
        *(int*)(lVar3 + 56) = (int)(fVar1 * (float)iVar2);
        pfVar5 = (float*)std::array<float, 4ul>::operator[](param_9, 3);
        fVar1 = *pfVar5;
        iVar2 = *(int*)(param_3 + 76);
        lVar3 = shared_ptr<IfType>::operator->((shared_ptr<IfType>*)this);
        *(int*)(lVar3 + 60) = (int)(fVar1 * (float)iVar2);
        return this;
    }

    // 0x1002042f0, 320 bytes, placed by class name and debug map
    // IfType::IsInsideCRMClickBounds(int, int, int, int)
    bool IfType::IsInsideCRMClickBounds(int param_1, int param_2, int param_3, int param_4) {
        float fVar1;
        int iVar2;
        int iVar3;
        bool bVar4;
        CRMViewHandler* this_00;
        array<float, 4ul>* this_01;
        float* pfVar5;
        int iVar6;
        int iVar7;

        if (field_12 != 11) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_type == IfTypes::CRMVIEW",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/iftype.cpp",
                1200, (char*)0);
        }
        bVar4 = (&field_2088)->operator_cast_to_bool();
        if (bVar4) {
            this_00 = (CRMViewHandler*)std::unique_ptr<CRMViewHandler, std::default_delete<CRMViewHandler>>::operator->(
                (unique_ptr<CRMViewHandler, std::default_delete<CRMViewHandler>>*)&field_2088);
            this_01 = (array<float, 4ul>*)this_00->GetClickBounds();
            bVar4 = false;
            pfVar5 = (float*)std::array<float, 4ul>::operator[](this_01, 0);
            iVar2 = field_72;
            iVar6 = (int)(*pfVar5 * (float)iVar2);
            pfVar5 = (float*)std::array<float, 4ul>::operator[](this_01, 1);
            iVar3 = field_76;
            fVar1 = *pfVar5;
            pfVar5 = (float*)std::array<float, 4ul>::operator[](this_01, 2);
            if (iVar6 <= param_1 - param_3) {
                iVar7 = (int)(fVar1 * (float)iVar3);
                if ((iVar7 <= param_2 - param_4) && (param_1 - param_3 < (int)((float)iVar2 * *pfVar5) + iVar6)) {
                    pfVar5 = (float*)std::array<float, 4ul>::operator[](this_01, 3);
                    bVar4 = param_2 - param_4 < (int)((float)iVar3 * *pfVar5) + iVar7;
                }
            }
        } else {
            bVar4 = false;
        }
        return bVar4;
    }

    // 0x100204440, 288 bytes, placed by class name and debug map
    // IfType::InitialiseInputField()
    void IfType::InitialiseInputField() {
        long lVar1;
        short sVar2;
        int iVar3;
        undefined1* this_00;
        unique_ptr local_20[8];

        std::make_unique<InputFieldWrapper>();
        this_00 = &field_2096;
        std::unique_ptr<InputFieldWrapper, std::default_delete<InputFieldWrapper>>::operator=(
            (unique_ptr<InputFieldWrapper, std::default_delete<InputFieldWrapper>>*)this_00, local_20);
        local_20->~unique_ptr();
        iVar3 = 1;
        do {
            lVar1 = std::unique_ptr<InputFieldWrapper, std::default_delete<InputFieldWrapper>>::operator->(
                (unique_ptr<InputFieldWrapper, std::default_delete<InputFieldWrapper>>*)this_00);
            ((lVar1 + 364))->SetKey(iVar3, 0);
            iVar3 = iVar3 + 1;
        } while (iVar3 != 13);
        sVar2 = 0;
        do {
            lVar1 = std::unique_ptr<InputFieldWrapper, std::default_delete<InputFieldWrapper>>::operator->(
                (unique_ptr<InputFieldWrapper, std::default_delete<InputFieldWrapper>>*)this_00);
            ((lVar1 + 364))->SetChar(sVar2, 0);
            sVar2 = sVar2 + 1;
        } while (sVar2 != 32);
        lVar1 = std::unique_ptr<InputFieldWrapper, std::default_delete<InputFieldWrapper>>::operator->(
            (unique_ptr<InputFieldWrapper, std::default_delete<InputFieldWrapper>>*)this_00);
        ((lVar1 + 364))->SetChar(128, 0);
        lVar1 = std::unique_ptr<InputFieldWrapper, std::default_delete<InputFieldWrapper>>::operator->(
            (unique_ptr<InputFieldWrapper, std::default_delete<InputFieldWrapper>>*)this_00);
        ((lVar1 + 364))->SetKey(82, 2);
        lVar1 = std::unique_ptr<InputFieldWrapper, std::default_delete<InputFieldWrapper>>::operator->(
            (unique_ptr<InputFieldWrapper, std::default_delete<InputFieldWrapper>>*)this_00);
        ((lVar1 + 364))->SetKey(81, 2);
        lVar1 = std::unique_ptr<InputFieldWrapper, std::default_delete<InputFieldWrapper>>::operator->(
            (unique_ptr<InputFieldWrapper, std::default_delete<InputFieldWrapper>>*)this_00);
        ((lVar1 + 364))->SetKey(86, 2);
    }

    // 0x100204600, 192 bytes, placed by neighbouring functions
    // InputFieldApplyText(InputField*, eastl::string&, eastl::string&)
    ulong InputFieldApplyText(InputField* param_1, basic_string* param_2, basic_string* param_3) {
        char cVar1;
        uint uVar2;
        ulong uVar3;
        StringTools local_68[32];
        StringTools local_48[32];

        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            local_68->StripTags(param_2);
            uVar2 = param_1->SetText(local_68);
            uVar3 = (ulong)uVar2;
            local_68->~basic_string();
            eastl::string::clear();
        } else {
            uVar3 = 0;
        }
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            local_48->StripTags(param_3);
            InputField::SetPlaceholderText((basic_string*)param_1);
            local_48->~basic_string();
            eastl::string::clear();
            uVar3 = CONCAT71((int7)(uVar3 >> 8), 1);
        }
        return uVar3;
    }

    // 0x1002046c0, 368 bytes, placed by class name and debug map
    // IfType::ServiceInputField()
    byte IfType::ServiceInputField() {
        char cVar1;
        byte bVar3;
        byte bVar4;
        byte bVar5;
        byte bVar6;
        int iVar7;
        int iVar8;
        PostProcessManager* this_00;
        ulong uVar9;
        ulong uVar10;
        shared_ptr* this_01;
        PixfontGeneric* pPVar11;
        bool local_31;

        this_00 = (PostProcessManager*)GetInputField(this);
        if ((field_12 != 12) || (this_00 == (PostProcessManager*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_type == IfTypes::INPUTFIELD && inputField",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/iftype.cpp",
                1254, (char*)0);
        }
        cVar1 = this_00->Is64BitOS();
        if ((cVar1 == '\0') && (field_312 != 4294967295)) {
            iVar7 = this_00->GetFont11pxRegularID();
            iVar8 = this_00->GetUsageType();
            uVar9 = this_00->GetRenderTargetsManager();
            uVar10 = this_00->GetWrapV();
            local_31 = false;
            this_01 = (shared_ptr*)GetFont(this, &local_31);
            bVar6 = 0;
            if ((operator!=(this_01, (_func_decltype_nullptr*)0)) && (local_31 != false)) {
                pPVar11 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator*(
                    (shared_ptr<jstring::PixfontGeneric>*)this_01);
                bVar3 = this_00->SetFont(pPVar11);
                bVar4 = InputFieldApplyText((InputField*)this_00, (basic_string*)&field_320, (basic_string*)&field_352);
                bVar5 = this_00->SetScroll(iVar7, iVar8);
                bVar6 = this_00->SetSelection(uVar9, uVar10);
                bVar6 = bVar6 | bVar5 | bVar4 | bVar3;
            }
        } else {
            cVar1 = this_00->Is64BitOS();
            if (cVar1 == '\0') {
                bVar6 = 0;
            } else {
                bVar6 = InputFieldApplyText((InputField*)this_00, (basic_string*)&field_320, (basic_string*)&field_352);
            }
        }
        this_00->MainLogic();
        return bVar6;
    }

    // 0x100226ae0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.51
    void ___cxx_global_var_init_51() {
        new (&IfType::m_open) Array<bool, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee67e0, &IfType::m_open, 4294967296);
    }

} // namespace jag::oldscape::rs2lib

namespace jag {
    // 0x100202070, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::HttpSpriteData>::type make_shared<oldscape::rs2lib::HttpSpriteData, eastl::string const&>(eastl::string const&)
    jag* jag::make_shared<oldscape::rs2lib::HttpSpriteData, eastl::stringconst&>(basic_string* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        HttpSpriteData* local_30[2];

        pvVar1 = (void*)aligned_alloc(56, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::rs2lib::HttpSpriteData, eastl::stringconst&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::HttpSpriteData>, int,
                                   oldscape::rs2lib::HttpSpriteData*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x1002034e0, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::InterfaceGraphicMask>::type make_shared<oldscape::rs2lib::InterfaceGraphicMask, int const&, int const&, Array<int, eastl::allocator>, Array<int, eastl::allocator>, int const&>(int const&, int const&, Array<int, eastl::allocator>&&, Array<int, eastl::allocator>&&, int const&)
    jag* jag::make_shared<oldscape::rs2lib::InterfaceGraphicMask, int const&, int const&, Array<int, eastl::allocator>,
                          Array<int, eastl::allocator>, int const&>(int* param_1, int* param_2, Array* param_3,
                                                                    Array* param_4, int* param_5) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        InterfaceGraphicMask* local_40[2];

        pvVar1 = (void*)aligned_alloc(96, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::rs2lib::InterfaceGraphicMask, int const&, int const&,
                                        Array<int, eastl::allocator>, Array<int, eastl::allocator>, int const&>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::InterfaceGraphicMask>, int,
                                   oldscape::rs2lib::InterfaceGraphicMask*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x1002041a0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::HttpSpriteData>::type make_shared<oldscape::rs2lib::HttpSpriteData, http::HTTPRequest&>(http::HTTPRequest&)
    jag* make_shared<oldscape::rs2lib::HttpSpriteData, http::HTTPRequest&>(HTTPRequest* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        HttpSpriteData* local_30[2];

        pvVar1 = (void*)aligned_alloc(56, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::rs2lib::HttpSpriteData, http::HTTPRequest&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::HttpSpriteData>, int,
                                   oldscape::rs2lib::HttpSpriteData*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag

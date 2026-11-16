// libs/oldscape/rs2lib/util/iftype.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "iftype.h"

namespace jag::oldscape::rs2lib {
    // 0x100fc9250
    Array<Array<shared_ptr<IfType>>> IfType::m_list;

    // 0x100fc9268, set at startup by ___cxx_global_var_init.51
    Array<bool> IfType::m_open = Array<bool>();

    // 0x100fc9280
    int64_t IfType::m_pInterfaces;

    // 0x100fc9288
    int64_t IfType::m_pModels;

    // 0x100fc9290
    int64_t IfType::m_pSprites;

    // 0x100fc9298
    int64_t IfType::m_pFontMetrics;

    // 0x100fc92a0
    LRUHashCache<graphics::Pix32, 200ul, 201ul, false, unsigned long long> IfType::m_spriteCache;

    // 0x100fcd220
    LRUHashCache<dash3d::ModelLit, 50ul, 51ul, false, unsigned long long> IfType::m_modelCache;

    // 0x100fce2c0
    LRUHashCache<jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long> IfType::m_fontCache;

    // 0x100fcea00
    LRUHashCache<InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long> IfType::m_maskCache;

    // 0x100fced80
    LRUHashCache<HttpSpriteData, 10ul, 11ul, false, eastl::string> IfType::m_httpSpriteCacheRaw;

    // 0x100fcf3c8
    LRUHashCache<graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL>>
        IfType::m_httpSpriteCacheProcessed;

    // 0x10015a200: IfType::GetCRMViewHandler() has the same machine code as IfType::GetCRMViewHandler() const

    // 0x1001ff640
    void IfType::Init(jagex3::Js5* js51, jagex3::Js5* js52, jagex3::Js5* js53, jagex3::Js5* js54) {
        m_pInterfaces = js51;
        m_pModels = js52;
        m_pSprites = js53;
        m_pFontMetrics = js54;
        int iVar1 = js51->GetRT5FrameCount();
        m_list.set_max_size((long)iVar1, 3);
        iVar1 = js51->GetRT5FrameCount();
        m_open.set_max_size((long)iVar1, 3);
    }

    // 0x1001ff800
    void IfType::Get(int arg1) {
        unsigned int uVar3;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this;
        shared_ptr<configdecoder::ObjType>* objType;

        if (arg1 < 0) {
        LAB_1001ff8aa:
            uVar3 = m_list.end();
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/iftype.cpp",
                54, "invalid group in combinedId passed to IfType::Get: %08X (max %d)",
                (unsigned long)(unsigned int)arg1, (unsigned long)uVar3);
        }
        unsigned long uVar7 = (unsigned long)(arg1 >> 16);
        unsigned long uVar4 = m_list.end();
        if (uVar4 <= uVar7)
            goto LAB_1001ff8aa;
        this = &m_list[uVar7];
        int arg1_00 = (int)uVar7;
        long lVar5 = end();
        uVar4 = (unsigned long)(arg1 & 65535);
        if ((lVar5 != 0) && (uVar7 = end(), uVar7 <= uVar4)) {
            uVar3 = end();
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/iftype.cpp",
                60, "invalid component in combinedId passed to IfType::Get: %08X (max %d)",
                (unsigned long)(unsigned int)arg1, (unsigned long)uVar3);
        }
        lVar5 = end();
        if (lVar5 != 0) {
            objType = (shared_ptr<configdecoder::ObjType>*)(*this)[uVar4];
            arg1_00 = 0;
            if (!*objType == nullptr)
                goto LAB_1001ff89d;
        }
        if (OpenInterface((IfType*)(unsigned long)(unsigned int)(arg1 >> 16), arg1_00) == '\0') {
            return &NULL_IFTYPE;
        }
    LAB_1001ff89d:
        return (uint8_t*)(*this)[uVar4];
    }

    // 0x1001ff920
    unsigned long IfType::OpenInterface(int arg1) {
        unsigned int uVar2;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        shared_ptr<configdecoder::ObjType>* objType;
        uint8_t* puVar6;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        IfType* this_03;
        PacketT<Array<unsigned char>>* this_04;
        PacketJ<Array<unsigned char> _>* pPVar7;
        uint8_t* puVar8;
        uint64_t in_RCX;
        uint8_t** arg1_00;
        shared_ptr<RSevenDebugPresetProvider> local_70;
        ReturnValue local_60;
        uint8_t** local_50;
        unsigned long local_48;
        unsigned long local_40;
        int local_34;

        char* pcVar3 = &m_open[(long)(int)this];
        uint8_t** ppuVar9 = (uint8_t**)(((uint64_t)((int64_t)((unsigned long)in_RCX >> 8)) << 8) | (uint8_t)1);
        if (*pcVar3 == '\0') {
            if (m_pInterfaces->RequestGroupDownload((int)this) == 0) {
                ppuVar9 = nullptr;
            } else {
                local_40 = (long)(int)this;
                uVar2 = m_pInterfaces->GetFileIdLimit((int)this);
                if (0 < (int)uVar2) {
                    this_00 = &m_list[local_40];
                    if (this_00->end() < (unsigned long)(long)(int)uVar2) {
                        this_00->set_max_size((long)(int)uVar2, 3);
                    }
                    if (0 < (int)uVar2) {
                        ppuVar9 = (uint8_t**)(unsigned long)uVar2;
                        local_48 = (unsigned long)(unsigned int)((int)this << 16);
                        arg1_00 = nullptr;
                        local_50 = ppuVar9;
                        do {
                            objType = (shared_ptr<configdecoder::ObjType>*)(*this_00)[(unsigned long)arg1_00];
                            if (*objType == nullptr) {
                                local_70 = shared_ptr();
                                puVar6 = (uint8_t*)m_pInterfaces->GetFile(local_70, (int)this, (int)arg1_00, nullptr);
                                ppuVar9 = &DataStatus::READY;
                                if (puVar6 == DataStatus::READY) {
                                    local_34 = (int)local_48 + (int)arg1_00;
                                    make_shared<IfType, int const&>(&local_60, &local_34);
                                    ((shared_ptr<IfType>*)(*this_00)[(unsigned long)arg1_00])->swap(local_60);
                                    this_02 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_00)[(
                                        unsigned long)arg1_00];
                                    this_03 = (IfType*)this_02->end();
                                    this_04 = (PacketT<Array<unsigned char>>*)local_70.operator->();
                                    pcVar3 = (char*)this_04->GetDataPtr();
                                    if (*pcVar3 == -1) {
                                        pPVar7 = (PacketJ<Array<unsigned char> _>*)*local_70;
                                        Decode3(this_03, pPVar7);
                                    } else {
                                        pPVar7 = (PacketJ<Array<unsigned char> _>*)*local_70;
                                        Decode(this_03, pPVar7);
                                    }
                                }
                            }
                            arg1_00 = (uint8_t**)((long)arg1_00 + 1);
                        } while (local_50 != arg1_00);
                    }
                }
                puVar8 = &m_open[local_40];
                *puVar8 = 1;
                ppuVar9 = (uint8_t**)(((uint64_t)((int64_t)((unsigned long)ppuVar9 >> 8)) << 8) | (uint8_t)1);
            }
        }
        return (unsigned long)ppuVar9 & 4294967295;
    }

    // 0x1001ffb20
    shared_ptr<configdecoder::ObjType>* IfType::Get(int arg1, int arg2) {
        bool bVar1;
        long lVar2;
        unsigned long uVar3;
        shared_ptr<configdecoder::ObjType>* psVar4;

        auto objType = Get(arg1);
        if (arg2 < 0) {
            psVar4 = objType;
        } else {
            bVar1 = *objType == nullptr;
            psVar4 = (shared_ptr<configdecoder::ObjType>*)&NULL_IFTYPE;
            if (!bVar1) {
                lVar2 = (*objType).operator->();
                uVar3 = ((lVar2 + 2000))->end();
                if ((unsigned long)(long)arg2 < uVar3) {
                    lVar2 = (*objType).operator->();
                    psVar4 = (shared_ptr<configdecoder::ObjType>*)(*((lVar2 + 2000)))[(long)arg2];
                }
            }
        }
        return psVar4;
    }

    // 0x1001ffba0
    uint8_t* IfType::GetCC(int arg1) const {
        unsigned long uVar1;

        uint8_t* puVar2 = &NULL_IFTYPE;
        if (-1 < arg1) {
            uVar1 = field_2000.end();
            if ((unsigned long)(long)arg1 < uVar1) {
                puVar2 = &field_2000[(long)arg1];
            }
        }
        return puVar2;
    }

    // 0x1001ffbf0
    void IfType::GetServer(int arg1) {
        unsigned int uVar1;
        unsigned long uVar2;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this;

        if (-1 < arg1) {
            uVar2 = m_list.end();
            if ((unsigned long)(long)(arg1 >> 16) < uVar2) {
                this = &m_list[(long)(arg1 >> 16)];
                if (end() != 0) {
                    uVar2 = end();
                    if (uVar2 <= (arg1 & 65535)) {
                        uVar1 = end();
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "oldscape/rs2lib/util/iftype.cpp",
                                        112,
                                        "invalid component in combinedId passed to IfType::GetServer: %08X (max %d)",
                                        (unsigned long)(unsigned int)arg1, (unsigned long)uVar1);
                    }
                }
                (*this)[(unsigned long)(arg1 & 65535)];
                return;
            }
        }
        uVar1 = m_list.end();
        LogAssertAlways(
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/iftype.cpp",
            106, "invalid group in combinedId passed to IfType::GetServer: %08X (max %d)",
            (unsigned long)(unsigned int)arg1, (unsigned long)uVar1);
    }

    // 0x1001ffcd0
    bool IfType::Decode3(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t* this_00;
        unsigned int uVar8;
        uint32_t uVar10;
        eastl::string* this_02;
        unsigned long uVar11;
        unsigned long uVar12;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_70;

        packetJ.g1();
        field_0 = 1;
        uint8_t bVar1 = packetJ.g1();
        field_12 = (unsigned int)bVar1;
        unsigned short uVar6 = packetJ.g2();
        field_20 = (unsigned int)uVar6;
        short sVar7 = packetJ.g2s();
        field_48 = (int)sVar7;
        sVar7 = packetJ.g2s();
        field_52 = (int)sVar7;
        uVar6 = packetJ.g2();
        field_56 = (unsigned int)uVar6;
        uVar6 = packetJ.g2();
        field_60 = (unsigned int)uVar6;
        char cVar2 = packetJ.g1s();
        field_40 = (int)cVar2;
        cVar2 = packetJ.g1s();
        field_44 = (int)cVar2;
        cVar2 = packetJ.g1s();
        field_32 = (int)cVar2;
        cVar2 = packetJ.g1s();
        field_36 = (int)cVar2;
        uVar6 = packetJ.g2();
        field_88 = (unsigned int)uVar6;
        if (uVar6 == 65535) {
            uVar8 = 4294967295;
        } else {
            uVar8 = (((uint32_t)(*(uint16_t*)((long)&field_4 + 2)) << 16) | (uint16_t)uVar6);
        }
        field_88 = uVar8;
        cVar2 = packetJ.g1();
        field_92 = cVar2 == '\x01';
        if (field_12 == 0) {
            uVar6 = packetJ.g2();
            field_104 = (unsigned int)uVar6;
            uVar6 = packetJ.g2();
            field_108 = (unsigned int)uVar6;
            cVar2 = packetJ.g1();
            field_2080 = cVar2 == '\x01';
            uVar8 = field_12;
        } else {
            uVar8 = field_12;
        }
        if (uVar8 == 5) {
            field_164 = packetJ.g4s();
            uVar6 = packetJ.g2();
            field_208 = (unsigned int)uVar6;
            cVar2 = packetJ.g1();
            field_212 = cVar2 == '\x01';
            bVar1 = packetJ.g1();
            field_140 = (unsigned int)bVar1;
            bVar1 = packetJ.g1();
            field_216 = (unsigned int)bVar1;
            uVar8 = packetJ.g4s();
            field_220 = uVar8;
            cVar2 = packetJ.g1();
            field_224 = cVar2 == '\x01';
            cVar2 = packetJ.g1();
            field_225 = cVar2 == '\x01';
            uVar8 = field_12;
        } else {
            uVar8 = field_12;
        }
        if (uVar8 == 6) {
            field_228 = 1;
            uVar6 = packetJ.g2();
            uVar8 = (unsigned int)uVar6;
            if (uVar6 == 65535) {
                uVar8 = 4294967295;
            }
            field_232 = uVar8;
            sVar7 = packetJ.g2s();
            field_252 = (int)sVar7;
            sVar7 = packetJ.g2s();
            field_256 = (int)sVar7;
            uVar6 = packetJ.g2();
            field_260 = (unsigned int)uVar6;
            uVar6 = packetJ.g2();
            field_264 = (unsigned int)uVar6;
            uVar6 = packetJ.g2();
            field_268 = (unsigned int)uVar6;
            uVar6 = packetJ.g2();
            field_272 = (unsigned int)uVar6;
            uVar6 = packetJ.g2();
            uVar8 = (unsigned int)uVar6;
            if (uVar6 == 65535) {
                uVar8 = 4294967295;
            }
            field_244 = uVar8;
            cVar2 = packetJ.g1();
            field_288 = cVar2 == '\x01';
            packetJ.g2();
            if (field_40 != 0) {
                uVar6 = packetJ.g2();
                field_276 = (unsigned int)uVar6;
            }
            if (field_44 != 0) {
                uVar6 = packetJ.g2();
                field_280 = (unsigned int)uVar6;
            }
        }
        bool bVar13 = (uint8_t)packetJ;
        if (field_12 == 4) {
            uVar6 = packetJ.g2();
            uVar8 = 4294967295;
            if (uVar6 != 65535) {
                uVar8 = (unsigned int)uVar6;
            }
            field_312 = uVar8;
            PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_70, bVar13);
            field_320 = &local_70;
            bVar1 = packetJ.g1();
            field_384 = (unsigned int)bVar1;
            bVar1 = packetJ.g1();
            field_388 = (unsigned int)bVar1;
            bVar1 = packetJ.g1();
            field_392 = (unsigned int)bVar1;
            cVar2 = packetJ.g1();
            field_396 = cVar2 == '\x01';
            uVar10 = packetJ.g4s();
            field_116 = uVar10;
        }
        if (field_12 == 3) {
            uVar10 = packetJ.g4s();
            field_116 = uVar10;
            cVar2 = packetJ.g1();
            field_132 = cVar2 == '\x01';
            bVar1 = packetJ.g1();
            field_140 = (unsigned int)bVar1;
            uVar8 = field_12;
        } else {
            uVar8 = field_12;
        }
        if (uVar8 == 9) {
            bVar1 = packetJ.g1();
            field_148 = (unsigned int)bVar1;
            uVar10 = packetJ.g4s();
            field_116 = uVar10;
            cVar2 = packetJ.g1();
            field_152 = cVar2 == '\x01';
            uVar8 = field_12;
        } else {
            uVar8 = field_12;
        }
        if (uVar8 == 10) {
            uVar10 = packetJ.g4s();
            field_116 = uVar10;
            cVar2 = packetJ.g1();
            field_132 = cVar2 == '\x01';
            bVar1 = packetJ.g1();
            field_140 = (unsigned int)bVar1;
            uVar6 = packetJ.g2();
            field_156 = (unsigned int)uVar6;
            uVar6 = packetJ.g2();
            field_160 = (unsigned int)uVar6;
            if (field_132 == false) {
                bVar1 = packetJ.g1();
                field_148 = (unsigned int)bVar1;
            }
        }
        uVar8 = packetJ.g3();
        field_684 = uVar8;
        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_70, bVar13);
        IfType* local_50 = this;
        field_704 = &local_70;
        bVar1 = packetJ.g1();
        if (bVar1 != 0) {
            this_00 = &local_50->field_736;
            this_00->set_max_size((unsigned long)bVar1, 1);
            uVar12 = 0;
            do {
                PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_70, bVar13);
                this_02 = (eastl::string*)(*this_00)[uVar12];
                *this_02 = &local_70;
                uVar12 = uVar12 + 1;
            } while (bVar1 != uVar12);
        }
        bVar1 = packetJ.g1();
        IfType* this_01 = local_50;
        *(unsigned int*)&local_50->field_776 = (unsigned int)bVar1;
        bVar1 = packetJ.g1();
        *(unsigned int*)((long)&this_01->field_776 + 4) = (unsigned int)bVar1;
        cVar2 = packetJ.g1();
        *(bool*)&this_01->field_784 = cVar2 == '\x01';
        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_70, bVar13);
        this_01->field_792 = &local_70;
        char local_41 = DecodeHook(this_01, (Array<HookArg>*)&this_01->field_832, packetJ);
        char local_40 = DecodeHook(this_01, (Array<HookArg>*)&this_01->field_952, packetJ);
        char local_3f = DecodeHook(this_01, (Array<HookArg>*)&this_01->field_1000, packetJ);
        char local_3e = DecodeHook(this_01, (Array<HookArg>*)&this_01->field_1096, packetJ);
        char local_3d = DecodeHook(this_01, (Array<HookArg>*)&this_01->field_1072, packetJ);
        char local_3c = DecodeHook(this_01, (Array<HookArg>*)&this_01->field_1120, packetJ);
        char local_3b = DecodeHook(this_01, (Array<HookArg>*)&this_01->field_1176, packetJ);
        char local_3a = DecodeHook(this_01, (Array<HookArg>*)&this_01->field_1232, packetJ);
        char local_39 = DecodeHook(this_01, (Array<HookArg>*)&this_01->field_1288, packetJ);
        char local_38 = DecodeHook(this_01, (Array<HookArg>*)&this_01->field_1312, packetJ);
        char local_37 = DecodeHook(this_01, (Array<HookArg>*)&this_01->field_976, packetJ);
        char local_36 = DecodeHook(this_01, (Array<HookArg>*)&this_01->field_856, packetJ);
        char local_35 = DecodeHook(this_01, (Array<HookArg>*)&this_01->field_880, packetJ);
        char local_34 = DecodeHook(this_01, (Array<HookArg>*)&this_01->field_904, packetJ);
        char local_33 = DecodeHook(this_01, (Array<HookArg>*)&this_01->field_928, packetJ);
        char local_32 = DecodeHook(this_01, (Array<HookArg>*)&this_01->field_1024, packetJ);
        char local_31 = DecodeHook(this_01, (Array<HookArg>*)&this_01->field_1048, packetJ);
        IfType* this_03 = this_01;
        cVar2 = DecodeHook(this_01, (Array<HookArg>*)&this_01->field_1360, packetJ);
        bool cVar3 = DecodeTransmitList(this_03, (vector<int>*)&this_01->field_1144, packetJ);
        bool cVar4 = DecodeTransmitList(this_03, (vector<int>*)&this_01->field_1200, packetJ);
        bool cVar5 = DecodeTransmitList(this_03, (vector<int>*)&this_01->field_1256, packetJ);
        bVar13 = false;
        if (((((((local_41 != '\0') && (local_40 != '\0')) && (local_3f != '\0')) &&
               (((local_3e != '\0' && (local_3d != '\0')) &&
                 ((local_3c != '\0' && ((local_3b != '\0' && (local_3a != '\0')))))))) &&
              ((local_39 != '\0' && (((local_38 != '\0' && (local_37 != '\0')) && (local_36 != '\0')))))) &&
             (((local_35 != '\0' && (local_34 != '\0')) &&
               (((local_33 != '\0' && ((local_32 != '\0' && (local_31 != '\0')))) && (cVar2)))))) &&
            (((cVar3 && (cVar4)) && (cVar5)))) {
            uVar12 = packetJ.size();
            uVar11 = packetJ.GetTextureAtlas();
            bVar13 = uVar12 <= uVar11;
        }
        return bVar13;
    }

    // 0x100200480
    bool IfType::Decode(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t* this_00;
        uint8_t* pbVar1;
        char cVar3;
        unsigned short uVar6;
        uint32_t uVar7;
        int iVar8;
        unsigned int* puVar9;
        Array<int>* this_01;
        int* piVar10;
        uint32_t* puVar11;
        unsigned long uVar14;
        unsigned long uVar15;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_50;

        field_0 = 0;
        uint8_t bVar2 = packetJ.g1();
        field_12 = (unsigned int)bVar2;
        bVar2 = packetJ.g1();
        field_16 = (unsigned int)bVar2;
        unsigned short uVar4 = packetJ.g2();
        field_20 = (unsigned int)uVar4;
        short sVar5 = packetJ.g2s();
        field_48 = (int)sVar5;
        sVar5 = packetJ.g2s();
        field_52 = (int)sVar5;
        uVar4 = packetJ.g2();
        field_56 = (unsigned int)uVar4;
        uVar4 = packetJ.g2();
        field_60 = (unsigned int)uVar4;
        bVar2 = packetJ.g1();
        field_140 = (unsigned int)bVar2;
        uVar4 = packetJ.g2();
        field_88 = (unsigned int)uVar4;
        unsigned int uVar13 = 4294967295;
        if (uVar4 != 65535) {
            uVar13 = (((uint32_t)(*(uint16_t*)((long)&field_4 + 2)) << 16) | (uint16_t)uVar4);
        }
        field_88 = uVar13;
        uVar4 = packetJ.g2();
        uVar13 = 4294967295;
        if (uVar4 != 65535) {
            uVar13 = (unsigned int)uVar4;
        }
        field_1864 = uVar13;
        bVar2 = packetJ.g1();
        if (bVar2 != 0) {
            uVar15 = (unsigned long)bVar2;
            field_1816.set_max_size(uVar15, 3);
            field_1840.set_max_size(uVar15, 3);
            uVar14 = 0;
            do {
                bVar2 = packetJ.g1();
                puVar9 = &field_1816[uVar14];
                *puVar9 = (unsigned int)bVar2;
                uVar4 = packetJ.g2();
                puVar9 = &field_1840[uVar14];
                *puVar9 = (unsigned int)uVar4;
                uVar14 = uVar14 + 1;
            } while (uVar15 != uVar14);
        }
        bVar2 = packetJ.g1();
        if (bVar2 != 0) {
            field_1792.set_max_size((unsigned long)bVar2, 3);
            uVar14 = 0;
            do {
                this_01 = &field_1792[uVar14];
                uVar4 = packetJ.g2();
                this_01->set_max_size((unsigned long)uVar4, 3);
                if (uVar4 != 0) {
                    uVar15 = 0;
                    do {
                        uVar6 = packetJ.g2();
                        puVar9 = (unsigned int*)(*this_01)[uVar15];
                        *puVar9 = (unsigned int)uVar6;
                        piVar10 = (int*)(*this_01)[uVar15];
                        if (*piVar10 == 65535) {
                            puVar11 = (uint32_t*)(*this_01)[uVar15];
                            *puVar11 = 4294967295;
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar4 != uVar15);
                }
                uVar14 = uVar14 + 1;
            } while (uVar14 != bVar2);
        }
        if (field_12 == 0) {
            uVar4 = packetJ.g2();
            field_108 = (unsigned int)uVar4;
            cVar3 = packetJ.g1();
            field_92 = cVar3 == '\x01';
            if (field_12 == 1)
                goto LAB_100200a89;
        LAB_1002006d7:
            uVar13 = field_12;
        } else {
            if (field_12 != 1)
                goto LAB_1002006d7;
        LAB_100200a89:
            packetJ.g2();
            packetJ.g1();
            uVar13 = field_12;
        }
        if (uVar13 == 3) {
            cVar3 = packetJ.g1();
            field_132 = cVar3 == '\x01';
        }
        if ((field_12 == 4) || (field_12 == 1)) {
            bVar2 = packetJ.g1();
            field_388 = (unsigned int)bVar2;
            bVar2 = packetJ.g1();
            field_392 = (unsigned int)bVar2;
            bVar2 = packetJ.g1();
            field_384 = (unsigned int)bVar2;
            uVar4 = packetJ.g2();
            uVar13 = 4294967295;
            if (uVar4 != 65535) {
                uVar13 = (unsigned int)uVar4;
            }
            field_312 = uVar13;
            cVar3 = packetJ.g1();
            field_396 = cVar3 == '\x01';
        }
        if (field_12 == 4) {
            PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_50,
                                                                                                 (uint8_t)packetJ);
            field_320 = &local_50;
            PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_50,
                                                                                                 (uint8_t)packetJ);
            field_352 = &local_50;
        }
        if ((field_12 < 5) && ((26U >> (field_12 & 31) & 1) != 0)) {
            uVar7 = packetJ.g4s();
            field_116 = uVar7;
        }
        if (field_12 - 3 < 2) {
            uVar7 = packetJ.g4s();
            field_120 = uVar7;
            uVar7 = packetJ.g4s();
            field_124 = uVar7;
            uVar7 = packetJ.g4s();
            field_128 = uVar7;
            if (field_12 == 5)
                goto LAB_10020082b;
        LAB_1002007e2:
            if (field_12 != 6)
                goto LAB_1002007e8;
        LAB_10020084d:
            field_228 = 1;
            uVar4 = packetJ.g2();
            uVar13 = (unsigned int)uVar4;
            if (uVar4 == 65535) {
                uVar13 = 4294967295;
            }
            field_232 = uVar13;
            field_236 = 1;
            uVar4 = packetJ.g2();
            uVar13 = (unsigned int)uVar4;
            if (uVar4 == 65535) {
                uVar13 = 4294967295;
            }
            field_240 = uVar13;
            uVar4 = packetJ.g2();
            uVar13 = (unsigned int)uVar4;
            if (uVar4 == 65535) {
                uVar13 = 4294967295;
            }
            field_244 = uVar13;
            uVar4 = packetJ.g2();
            uVar13 = (unsigned int)uVar4;
            if (uVar4 == 65535) {
                uVar13 = 4294967295;
            }
            field_248 = uVar13;
            uVar4 = packetJ.g2();
            field_272 = (unsigned int)uVar4;
            uVar4 = packetJ.g2();
            field_260 = (unsigned int)uVar4;
            uVar4 = packetJ.g2();
            field_264 = (unsigned int)uVar4;
            if (field_12 == 8)
                goto LAB_100200908;
        LAB_1002007f2:
            uVar13 = field_16;
        } else {
            if (field_12 != 5)
                goto LAB_1002007e2;
        LAB_10020082b:
            iVar8 = packetJ.g4s();
            field_164 = iVar8;
            iVar8 = packetJ.g4s();
            field_168 = iVar8;
            if (field_12 == 6)
                goto LAB_10020084d;
        LAB_1002007e8:
            if (field_12 != 8)
                goto LAB_1002007f2;
        LAB_100200908:
            PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_50,
                                                                                                 (uint8_t)packetJ);
            field_320 = &local_50;
            uVar13 = field_16;
        }
        if (uVar13 == 2) {
            PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_50,
                                                                                                 (uint8_t)packetJ);
            field_792 = &local_50;
            PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_50,
                                                                                                 (uint8_t)packetJ);
            field_1872 = &local_50;
            uVar13 = packetJ.g2();
            field_684 = field_684 | (uVar13 & 63) << 11;
        }
        if ((field_16 < 7) && ((114U >> (field_16 & 31) & 1) != 0)) {
            PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_50,
                                                                                                 (uint8_t)packetJ);
            this_00 = &field_1904;
            *this_00 = &local_50;
            if ((this_00->size() == 0) && ((uVar13 = field_16 - 1, uVar13 < 6 && ((57U >> (uVar13 & 31) & 1) != 0)))) {
                *this_00 = ((eastl::string*)(&PTR_ok_100ef7c78)[uVar13]);
            }
        }
        uVar13 = field_16;
        if (uVar13 - 4 < 2) {
        LAB_100200a28:
            pbVar1 = (uint8_t*)((long)&field_684 + 2);
            *pbVar1 = *pbVar1 | 64;
            if (uVar13 != 6)
                goto LAB_100200a3b;
        } else if (uVar13 != 6) {
            if (uVar13 != 1)
                goto LAB_100200a3b;
            goto LAB_100200a28;
        }
        *(uint8_t*)&field_684 = (uint8_t)field_684 | 1;
    LAB_100200a3b:
        uVar14 = packetJ.size();
        uVar15 = packetJ.GetTextureAtlas();
        return uVar14 <= uVar15;
    }

    // 0x100200ad0
    void IfType::CloseInterface(int arg1) {
        char* pcVar1;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        shared_ptr<IfType>* shared_ptr;
        unsigned long uVar3;
        uint8_t* puVar4;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        unsigned long uVar6;

        if (-1 < arg1) {
            uVar6 = m_open.end();
            if ((unsigned long)arg1 < uVar6) {
                pcVar1 = &m_open[(unsigned long)arg1];
                if (*pcVar1 != '\0') {
                    m_pInterfaces->DiscardFiles(arg1);
                    this_00 = &m_list[(unsigned long)arg1];
                    if (this_00->end() != 0) {
                        uVar6 = 0;
                        do {
                            midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)(*this_00)[uVar6];
                            if (*midiPlayerMainThread != nullptr) {
                                shared_ptr = (shared_ptr<IfType>*)(*this_00)[uVar6];
                                shared_ptr->reset();
                            }
                            uVar6 = uVar6 + 1;
                            uVar3 = this_00->end();
                        } while (uVar6 < uVar3);
                    }
                    this_00->set_max_size(0, 0);
                    puVar4 = &m_open[(unsigned long)arg1];
                    *puVar4 = 0;
                }
            }
        }
    }

    // 0x100200c50
    unsigned long IfType::OpenAll() {
        uint8_t bVar1;
        unsigned int uVar3;
        int in_ESI;
        uint64_t unaff_R15;

        unsigned int uVar2 = m_list.end();
        unsigned long uVar4 = (((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)1);
        if (0 < (int)uVar2) {
            uVar3 = 0;
            do {
                bVar1 = OpenInterface((IfType*)(unsigned long)uVar3, in_ESI);
                uVar4 = (((uint64_t)((int64_t)(uVar4 >> 8)) << 8) | (uint8_t)((uint8_t)uVar4 & bVar1));
                uVar3 = uVar3 + 1;
            } while (uVar2 != uVar3);
        }
        return uVar4 & 4294967295;
    }

    // 0x100200ca0
    IfType::~IfType() {
        uint8_t* this_00 = &field_2112;
        if (this_00->operator_cast_to_bool() != '\0') {
            std::function<void(IfType const&)>::operator()((function<void(IfType const&)>*)this_00, this);
        }
        this_00->~function();
        field_2096.~unique_ptr();
        field_2088.~unique_ptr();
        field_2056.~Array();
        field_2000.~Array();
        field_1960.~Array();
        field_1936.~Array();
        field_1904.~basic_string();
        field_1872.~basic_string();
        field_1840.~Array();
        field_1816.~Array();
        field_1792.~Array();
        field_1768.~Array();
        field_1744.~Array();
        field_1720.~Array();
        field_1696.~Array();
        field_1672.~Array();
        field_1648.~Array();
        field_1624.~Array();
        field_1600.~Array();
        field_1576.~Array();
        field_1552.~Array();
        field_1528.~Array();
        field_1504.~Array();
        field_1480.~Array();
        field_1456.~Array();
        field_1432.~Array();
        field_1408.~Array();
        field_1384.~Array();
        field_1360.~Array();
        field_1336.~Array();
        field_1312.~Array();
        field_1288.~Array();
        field_1256.~vector();
        field_1232.~Array();
        field_1200.~vector();
        field_1176.~Array();
        field_1144.~vector();
        field_1120.~Array();
        field_1096.~Array();
        field_1072.~Array();
        field_1048.~Array();
        field_1024.~Array();
        field_1000.~Array();
        field_976.~Array();
        field_952.~Array();
        field_928.~Array();
        field_904.~Array();
        field_880.~Array();
        field_856.~Array();
        field_832.~Array();
        field_792.~basic_string();
        field_760.~shared_ptr();
        field_736.~Array();
        field_704.~basic_string();
        field_696.~unique_ptr();
        field_480.~fixed_vector();
        field_456.~Array();
        field_432.~Array();
        field_408.~Array();
        field_352.~basic_string();
        field_320.~basic_string();
        field_296.~shared_ptr();
        field_176.~basic_string();
    }

    // 0x100201340
    unsigned long IfType::DecodeHook(Array<HookArg>& hookArgs, PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1;
        int arg1;
        HookArg* pHVar4;
        HookArg local_a8;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_60;
        unsigned long local_40;

        unsigned long uVar2 = packetJ.size();
        unsigned long uVar3 = packetJ.GetTextureAtlas();
        if (uVar2 < uVar3) {
            bVar1 = packetJ.g1();
            if (bVar1 == 0) {
                hookArgs.clear();
                uVar2 = (((uint64_t)((int64_t)(uVar2 >> 8)) << 8) | (uint8_t)1);
            } else {
                local_40 = (unsigned long)bVar1;
                hookArgs.set_max_size(local_40, 1);
                uVar2 = 0;
                do {
                    bVar1 = packetJ.g1();
                    if (bVar1 == 1) {
                        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(
                            &local_60, (uint8_t)packetJ);
                        local_a8 = HookArg(&local_60);
                        pHVar4 = &hookArgs[uVar2];
                        *pHVar4 = local_a8;
                    } else {
                        if (bVar1 != 0) {
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "oldscape/rs2lib/util/iftype.cpp",
                                            600, "Invalid hook argument type: %d", (unsigned long)bVar1);
                        }
                        arg1 = packetJ.g4s();
                        local_a8 = HookArg(arg1);
                        pHVar4 = &hookArgs[uVar2];
                        *pHVar4 = local_a8;
                    }
                    uVar2 = uVar2 + 1;
                } while (local_40 != uVar2);
                field_824 = 1;
                uVar2 = (((uint64_t)((int64_t)(uVar2 >> 8)) << 8) | (uint8_t)1);
            }
        } else {
            uVar2 = 0;
        }
        return uVar2 & 4294967295;
    }

    // 0x1002014f0
    bool IfType::DecodeTransmitList(eastl::vector<int>& arg1, PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1;
        uint32_t uVar2;
        uint32_t* puVar5;
        unsigned long arg1_00;

        unsigned long uVar3 = packetJ.size();
        unsigned long uVar4 = packetJ.GetTextureAtlas();
        if (uVar3 < uVar4) {
            bVar1 = packetJ.g1();
            if (bVar1 == 0) {
                arg1.clear();
            } else {
                arg1.resize((unsigned long)bVar1);
                arg1_00 = 0;
                do {
                    uVar2 = packetJ.g4s();
                    puVar5 = &arg1[arg1_00];
                    *puVar5 = uVar2;
                    arg1_00 = arg1_00 + 1;
                } while (bVar1 != arg1_00);
            }
        }
        return uVar3 < uVar4;
    }

    // 0x1002015a0
    void IfType::SwapSlots(int arg1, int arg2) {
        int* piVar1 = &field_1936[(long)arg1];
        int* piVar2 = &field_1936[(long)arg2];
        std::swap<int>(*piVar1, *piVar2);
        piVar1 = &field_1960[(long)arg1];
        piVar2 = &field_1960[(long)arg2];
        std::swap<int>(*piVar1, *piVar2);
    }

    // 0x100201630
    long CalcSpriteHashId(int arg1, int arg2, bool arg3, bool arg4, int arg5) {
        uint64_t in_register_00000009;
        uint64_t in_register_00000011;

        return (long)arg1 + ((unsigned long)(unsigned int)arg2 << 36) +
               ((((uint64_t)in_register_00000011 << 8) | (uint8_t)arg3) << 38) +
               ((((uint64_t)in_register_00000009 << 8) | (uint8_t)arg4) << 39) +
               ((unsigned long)(unsigned int)arg5 << 40);
    }

    // 0x100201660
    vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* IfType::GetGraphic(bool arg1, bool& arg2) const {
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        ReturnValue local_48;
        unsigned long long local_38;

        arg2 = false;
        if (field_176.empty() == '\0') {
            midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)GetHttpGraphic();
            if (*midiPlayerMainThread != nullptr) {
                arg2 = true;
                return (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)midiPlayerMainThread;
            }
        }
        int arg1_00 = (&field_164)[arg1];
        if (arg1_00 == -1) {
            arg2 = true;
            this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&NULL_GRAPHIC;
        } else {
            local_38 = CalcSpriteHashId(arg1_00, field_216, field_224, field_225, field_220);
            this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)m_spriteCache.Find(local_38);
            if (this_00->end() == 0) {
                local_48 = graphics::pixloader::Makepix32(*m_pSprites, arg1_00, 0);
                if (local_48 == nullptr) {
                    this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&NULL_GRAPHIC;
                } else {
                    PrerenderProcessSprite(local_48);
                    arg2 = true;
                    this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)m_spriteCache.Put(local_48, 1,
                                                                                                         local_38);
                }
            } else {
                arg2 = true;
            }
        }
        return this_00;
    }

    // 0x1002017b0
    shared_ptr* IfType::GetHttpGraphic() const {
        char* str;
        shared_ptr* this_00;
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        basic_string<char, BucketAllocatorEASTL> local_60;
        ReturnValue local_48;
        shared_ptr local_38;

        if (!(NeedsPrerenderProcessing())) {
            this_00 = (shared_ptr*)GetRawDownloadedGraphic();
        } else {
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_38.destruct<highlight::NpcUID*>();
            local_60 = eastl::basic_string<char, BucketAllocatorEASTL>(str, &local_38);
            local_60.append_sprintf("%d%d%d%d", (unsigned long)field_224, (unsigned long)field_225,
                                    (unsigned long)field_216, (unsigned long)field_220);
            this_00 = (shared_ptr*)m_httpSpriteCacheProcessed.Find(local_60);
            if (!(shared_ptr::operator_cast_to_bool(this_00))) {
                groundDecor = (shared_ptr<dash3d::GroundDecor>*)GetRawDownloadedGraphic();
                local_38 = shared_ptr(groundDecor);
                if (!(shared_ptr::operator_cast_to_bool(&local_38))) {
                    this_00 = (shared_ptr*)&NULL_GRAPHIC;
                } else {
                    local_48 = ((Pix32*)local_38.operator->())->Copy();
                    PrerenderProcessSprite(local_48);
                    this_00 = (shared_ptr*)m_httpSpriteCacheProcessed.Put(local_48, 1, local_60);
                }
            }
        }
        return this_00;
    }

    // 0x1002019d0
    void IfType::PrerenderProcessSprite(shared_ptr<graphics::Pix32>& pix32) const {
        Pix32* pPVar1;

        if (field_224 != false) {
            pPVar1 = (Pix32*)pix32.operator->();
            pPVar1->VFlip();
        }
        if (field_225 != false) {
            pPVar1 = (Pix32*)pix32.operator->();
            pPVar1->HFlip();
        }
        if (0 < (int)field_216) {
            pPVar1 = (Pix32*)pix32.operator->();
            pPVar1->Untrim(field_216);
        }
        if (0 < (int)field_216) {
            pPVar1 = (Pix32*)pix32.operator->();
            pPVar1->AddOutline(1);
        }
        if (1 < (int)field_216) {
            pPVar1 = (Pix32*)pix32.operator->();
            pPVar1->AddOutline(16777215);
        }
        if (field_220 != 0) {
            pPVar1 = (Pix32*)pix32.operator->();
            pPVar1->AddShadow(field_220);
        }
    }

    // 0x100201b80
    bool IfType::NeedsPrerenderProcessing() const {
        if (((field_224 == false) && (field_225 == false)) && (field_216 == 0)) {
            return field_220 != 0;
        }
        return true;
    }

    // 0x100201bb0
    uint8_t* IfType::GetRawDownloadedGraphic() const {
        shared_ptr* this_00;
        HttpSpriteData* this_01;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_02;
        ReturnValue local_28;

        uint8_t* puVar3 = &field_176;
        if (!(puVar3->empty())) {
            this_00 = (shared_ptr*)m_httpSpriteCacheRaw.Find(*puVar3);
            if (!(shared_ptr::operator_cast_to_bool(this_00))) {
                make_shared<HttpSpriteData, eastl::stringconst&>(&local_28, (eastl::string*)puVar3);
                m_httpSpriteCacheRaw.Put(local_28, 1, *puVar3);
                return &NULL_GRAPHIC;
            }
            this_01 = (HttpSpriteData*)(*this_00).operator->();
            if ((uint8_t*)this_01->Service() == DataStatus::READY) {
                this_02 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_00)
                              .operator->();
                puVar3 = (uint8_t*)this_02->second();
                return puVar3;
            }
        }
        return &NULL_GRAPHIC;
    }

    // 0x100202150
    vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* IfType::GetFont(bool& arg1) const {
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        ReturnValue local_38;

        if (GetFont(bool&)::NULL_RESULT == '\0') {
            if (___cxa_guard_acquire(&GetFont(bool&)::NULL_RESULT) != 0) {
                new ((shared_ptr<worldmap::WorldmapAreaMetadata>*)&GetFont(bool&)::NULL_RESULT) shared_ptr();
                ___cxa_atexit(PTR__shared_ptr_100ee5520, &GetFont(bool&)::NULL_RESULT, 4294967296);
                ___cxa_guard_release(&GetFont(bool&)::NULL_RESULT);
            }
        }
        arg1 = false;
        unsigned long long local_28 = (unsigned long long)(int)field_312;
        if ((long)local_28 < 0) {
            arg1 = true;
            this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&GetFont(bool&)::NULL_RESULT;
        } else {
            this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)m_fontCache.Find(local_28);
            if (this_00->end() == 0) {
                local_38 = graphics::pixloader::MakepixfontGeneric(*m_pSprites, *m_pFontMetrics, field_312, 0);
                if (local_38 == nullptr) {
                    this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&GetFont(bool&)::NULL_RESULT;
                } else {
                    arg1 = true;
                    this_00 =
                        (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)m_fontCache.Put(local_38, 1, local_28);
                }
            } else {
                arg1 = true;
            }
        }
        return this_00;
    }

    // 0x100202430
    vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* IfType::GetInvBackground(int arg1, bool& arg2) const {
        int iVar2;
        unsigned long uVar3;
        int* piVar4;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar5;
        ReturnValue local_40;
        unsigned long long local_30;

        arg2 = false;
        if ((GetInvBackground(int, bool&)::NULL_RESULT == '\0') &&
            (iVar2 = ___cxa_guard_acquire(&GetInvBackground(int, bool&)::NULL_RESULT), iVar2 != 0)) {
            new ((shared_ptr<worldmap::WorldmapAreaMetadata>*)&GetInvBackground(int, bool&)::NULL_RESULT) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee5530, &GetInvBackground(int, bool&)::NULL_RESULT, 4294967296);
            ___cxa_guard_release(&GetInvBackground(int, bool&)::NULL_RESULT);
        }
        if (-1 < arg1) {
            uVar3 = field_456.end();
            if ((unsigned long)(long)arg1 < uVar3) {
                piVar4 = &field_456[(long)arg1];
                iVar2 = *piVar4;
                local_30 = (unsigned long long)iVar2;
                if (-1 < (long)local_30) {
                    pvVar5 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)m_spriteCache.Find(local_30);
                    if (pvVar5->end() != 0) {
                        arg2 = true;
                        return pvVar5;
                    }
                    local_40 = graphics::pixloader::Makepix32(*m_pSprites, iVar2, 0);
                    if (local_40 == nullptr) {
                        pvVar5 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&GetInvBackground(
                            int, bool&)::NULL_RESULT;
                    } else {
                        arg2 = true;
                        pvVar5 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)m_spriteCache.Put(local_40, 1,
                                                                                                            local_30);
                    }
                    return pvVar5;
                }
            }
        }
        arg2 = true;
        return (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&GetInvBackground(int, bool&)::NULL_RESULT;
    }

    // 0x1002025a0
    IfType* IfType::GetTempModel(const configdecoder::SeqType* seqType, int arg2, bool arg3,
                                 const PlayerModel* playerModel, bool& arg5, configdecoder::NpcType* npcType,
                                 configdecoder::NPCTypeCustomisation* npcTypeCustomisation) const {
        bool cVar1;
        int iVar3;
        long lVar4;
        NpcType* pNVar5;
        long* plVar6;
        ModelLit* modelLit;
        unsigned int uVar7;
        uint64_t in_register_00000009;
        uint32_t in_register_00000014;
        MidiTask* in_stack_00000018;
        ReturnValue local_68;
        unsigned int local_44;
        ReturnValue local_40;

        *(uint8_t*)&npcType->field_0 = 0;
        unsigned int uVar8 = (&seqType->field_228)[((unsigned long)playerModel & 4294967295) * 2];
        if (uVar8 == 6) {
            if (npcTypeCustomisation == nullptr)
                goto LAB_1002025ff;
        } else {
            npcTypeCustomisation =
                (NPCTypeCustomisation*)(&seqType->field_232 + ((unsigned long)playerModel & 4294967295) * 2);
        }
        if ((6 < uVar8 - 1) || ((local_44 = *(unsigned int*)npcTypeCustomisation, uVar8 == 1 && ((int)local_44 < 0)))) {
        LAB_1002025ff:
            *(uint8_t*)&npcType->field_0 = 1;
            new (this) shared_ptr();
            return this;
        }
        if (in_stack_00000018 != nullptr) {
            cVar1 = in_stack_00000018->HasError();
            uVar7 = 3;
            if (uVar8 != 6) {
                uVar7 = uVar8;
            }
            if (!cVar1) {
                uVar7 = uVar8;
            }
            uVar8 = uVar7;
        }
        unsigned long local_70 = (unsigned long)(int)(uVar8 * 65536 + local_44);
        if (in_stack_00000018 != nullptr) {
            iVar3 = in_stack_00000018->GetZ();
            local_70 = local_70 | (long)iVar3 << 20;
        }
        if (dash3d::g_usingRSeven != '\0') {
            local_70 = local_70 | 4503599627370496;
        }
        auto groundDecor = m_modelCache.Find(local_70);
        shared_ptr<dash3d::Decor> local_80(groundDecor);
        bool bVar2 = local_80 == nullptr;
        if (!bVar2)
            goto LAB_100202912;
        shared_ptr local_58;
        int iVar9 = 768;
        iVar3 = 64;
        switch (uVar8) {
        case 1:
            local_40.Load(*m_pModels, local_44, 0, false);
            local_58 = local_40;
            goto LAB_10020283d;
        case 2:
            local_68 = configdecoder::NpcType::List(local_44);
            pNVar5 = (NpcType*)local_68.operator->();
            local_40 = pNVar5->GetHead(nullptr);
            local_58 = local_40;
            goto LAB_100202811;
        case 3:
            if (arg5 == nullptr) {
                local_40 = shared_ptr();
            } else {
                local_40 = arg5.GetHeadModel();
            }
            local_58 = local_40;
        LAB_10020283d:
            break;
        case 4:
            local_40 = configdecoder::ObjType::List(local_44);
            local_68 = ((ObjType*)local_40.operator->())->GetModelUnlit(10);
            local_58 = local_68;
            lVar4 = local_40.operator->();
            iVar3 = *(int*)(lVar4 + 748);
            lVar4 = local_40.operator->();
            iVar3 = iVar3 + 64;
            iVar9 = *(int*)(lVar4 + 752) + 768;
            break;
        case 6:
            local_68 = configdecoder::NpcType::List(local_44);
            pNVar5 = (NpcType*)local_68.operator->();
            local_40 = pNVar5->GetHead(in_stack_00000018);
            local_58 = local_40;
        LAB_100202811:
        }
        bVar2 = local_58 == nullptr;
        if (bVar2) {
            new (this) shared_ptr();
        } else {
            plVar6 = (long*)local_58.operator->();
            (**(void (**)(...))(*plVar6 + 72))(&local_40, plVar6, iVar3, iVar9, 4294967246, 4294967286, 4294967246);
            local_80 = local_40;
            plVar6 = (long*)local_80.operator->();
            cVar1 = (**(void (**)(...))(*plVar6 + 56))(plVar6);
            if (dash3d::g_usingRSeven != cVar1) {
                LogAssert("m->IsForRSeven() == dash3d::g_usingRSeven",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/"
                          "iftype.cpp",
                          961, nullptr);
            }
            m_modelCache.Put(local_80, 1, local_70);
        }
        if (!bVar2) {
        LAB_100202912:
            if ((SeqType*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2) != nullptr) {
                modelLit = (ModelLit*)*local_80;
                local_58 = ((SeqType*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2))
                               ->AnimateModelWithExtra(*modelLit,
                                                       (int)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3));
                local_80 = local_58;
            }
            *(uint8_t*)&npcType->field_0 = 1;
            shared_ptr<FileRSevenDebugPresetProvider, void>(local_80);
        }
        return this;
    }

    // 0x100203110
    shared_ptr<configdecoder::ObjType>* IfType::GetMask(bool arg1, bool& arg2) const {
        long lVar1;
        bool bVar2;
        int iVar3;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        long lVar4;
        shared_ptr<configdecoder::ObjType>* objType;
        long lVar5;
        int* piVar6;
        unsigned long arg1_00;
        unsigned int uVar7;
        unsigned long uVar8;
        Array<int> local_98;
        Array<int> local_80;
        ReturnValue local_68;
        ReturnValue local_58;
        unsigned long long local_48;
        int local_3c;
        unsigned int local_38;
        int local_34;

        arg2 = false;
        if ((GetMask(bool, bool&)::NULL_RESULT == '\0') &&
            (iVar3 = ___cxa_guard_acquire(&GetMask(bool, bool&)::NULL_RESULT), iVar3 != 0)) {
            new ((shared_ptr<worldmap::WorldmapAreaMetadata>*)&GetMask(bool, bool&)::NULL_RESULT) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee5500, &GetMask(bool, bool&)::NULL_RESULT, 4294967296);
            ___cxa_guard_release(&GetMask(bool, bool&)::NULL_RESULT);
        }
        if ((!arg1) || (local_3c = field_168, local_3c < 0)) {
            local_3c = field_164;
        }
        if (local_3c < 0) {
            arg2 = true;
            this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&GetMask(bool, bool&)::NULL_RESULT;
        } else {
            local_48 = CalcSpriteHashId(local_3c, field_216, field_224, field_225, field_220);
            this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)m_maskCache.Find(local_48);
            lVar4 = this_00->end();
            if (lVar4 == 0) {
                objType = (shared_ptr<configdecoder::ObjType>*)GetGraphic(arg1, arg2);
                this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&GetMask(bool, bool&)::NULL_RESULT;
                if ((arg2 != false) && (bVar2 = *objType == nullptr, !bVar2)) {
                    local_58 = ((Pix32*)(*objType).operator->())->CopyUntrim();
                    lVar4 = local_58.operator->();
                    local_38 = *(unsigned int*)(lVar4 + 24);
                    lVar4 = local_58.operator->();
                    local_34 = *(int*)(lVar4 + 28);
                    local_98 = Array<int>((long)local_34);
                    local_80 = Array<int>((long)local_34);
                    lVar4 = ((SharedArray<unsigned int>*)local_58.operator->())->data();
                    if (0 < local_34) {
                        arg1_00 = 0;
                        do {
                            lVar5 = (long)(int)local_38;
                            uVar8 = 0;
                            if (0 < lVar5) {
                                uVar8 = 0;
                                do {
                                    if (*(int*)(lVar4 + (long)(int)(local_38 * (int)arg1_00) * 4 + uVar8 * 4) == 0)
                                        goto LAB_100203293;
                                    uVar8 = uVar8 + 1;
                                } while (local_38 != uVar8);
                                uVar8 = 0;
                            }
                        LAB_100203293:
                            iVar3 = (int)uVar8;
                            uVar7 = local_38 + 1;
                            do {
                                if (lVar5 <= iVar3) {
                                    uVar7 = local_38;
                                    break;
                                }
                                uVar7 = uVar7 - 1;
                                lVar1 = lVar5 * 4;
                                lVar5 = lVar5 - 1;
                            } while (*(int*)((long)(int)(local_38 * (int)arg1_00) * 4 + lVar4 - 4 + lVar1) != 0);
                            piVar6 = &local_98[arg1_00];
                            *piVar6 = iVar3;
                            piVar6 = &local_80[arg1_00];
                            *piVar6 = uVar7 - iVar3;
                            arg1_00 = arg1_00 + 1;
                        } while ((long)arg1_00 < (long)local_34);
                    }
                    make_shared<InterfaceGraphicMask, int const&, int const&, Array<int>, Array<int>, int const&>(
                        &local_68, (int*)&local_38, &local_34, &local_80, &local_98, &local_3c);
                    this_00 =
                        (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)m_maskCache.Put(local_68, 1, local_48);
                }
            } else {
                arg2 = true;
            }
        }
        return (shared_ptr<configdecoder::ObjType>*)this_00;
    }

    // 0x100203690
    void IfType::ResetCache() {
        m_spriteCache.Reset();
        m_modelCache.Reset();
        m_fontCache.Reset();
        m_maskCache.Reset();
    }

    // 0x100203790
    void IfType::SetOpName(int arg1, const eastl::string& str) {

        eastl::string local_40(str);
        SetOpName(arg1, local_40);
    }

    // 0x1002037f0
    void IfType::SetOpName(int arg1, eastl::string&& str) {
        uint8_t* this_01 = &field_736;
        if (this_01->end() <= (unsigned long)(long)arg1) {
            this_01->set_max_size((long)(arg1 + 1), 3);
        }
        eastl::string* this_00 = (eastl::string*)(*this_01)[(long)arg1];
        *this_00 = str;
    }

    // 0x100203850
    bool IfType::CanSkipLogicIfNotVisible() {
        if ((field_0 == '\0') || (field_24 != '\0')) {
            return false;
        }
        return field_12 != 12;
    }

    // 0x100203870
    bool IfType::IsActiveComponent() {
        unsigned int uVar1;

        if ((((field_0 == '\0') || (uVar1 = field_12, uVar1 == 0)) || (uVar1 == 11)) ||
            (((field_824 != '\0' || (field_20 == 1338)) || (uVar1 == 12)))) {
            return true;
        }
        return -1 < field_680;
    }

    // 0x1002038b0
    bool IfType::HasHardcodedMouseInputBehaviour() {
        return field_12 - 11 < 2;
    }

    // 0x1002038d0
    void IfType::InitialiseCRM(const eastl::string& str, http::CRMData::ClientDataProvider* clientDataProvider) {
        if (field_12 != 11) {
            LogAssert(
                "m_type == IfTypes::CRMVIEW",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/iftype.cpp",
                1110, nullptr);
        }
        auto local_30 = std::make_unique<CRMViewHandler>();
        uint8_t* this_01 = &field_2088;
        *this_01 = local_30;
        if (((CRMViewHandler*)(*this_01).operator->())->SetURL(str, clientDataProvider) == '\0') {
            this_01->reset(nullptr);
        }
    }

    // 0x100203a40
    void IfType::InitialiseCRMFromJSON(const eastl::string& str) {
        if (field_12 != 11) {
            LogAssert(
                "m_type == IfTypes::CRMVIEW",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/iftype.cpp",
                1120, nullptr);
        }
        auto local_28 = std::make_unique<CRMViewHandler>();
        field_2088 = local_28;
        ((CRMViewHandler*)field_2088.operator->())->SetFromJSON(str);
    }

    // 0x100203ac0
    unsigned long IfType::ServiceCRMView() {
        CRMViewHandler* pCVar2;
        unsigned long uVar3;

        if (field_12 != 11) {
            LogAssert(
                "m_type == IfTypes::CRMVIEW",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/iftype.cpp",
                1128, nullptr);
        }
        uint8_t* this_00 = &field_2088;
        bool cVar1 = this_00->operator_cast_to_bool();
        if (cVar1) {
            pCVar2 = (CRMViewHandler*)(*this_00).operator->();
            cVar1 = pCVar2->Service();
            if (cVar1) {
                pCVar2 = (CRMViewHandler*)(*this_00).operator->();
                cVar1 = pCVar2->HasSuccessfulResponse();
                uVar3 = (((uint64_t)((int64_t)((unsigned long)this_00 >> 8)) << 8) | (uint8_t)1);
                if (cVar1) {
                    BuildCRMView();
                }
                goto LAB_100203b37;
            }
        }
        uVar3 = 0;
    LAB_100203b37:
        return uVar3 & 4294967295;
    }

    // 0x100203b60
    void IfType::BuildCRMView() {
        uint32_t uVar1;
        unique_ptr<http::HTTPRequest>* puVar4;
        EditLine* this_03;
        char* pcVar5;
        HTTPRequest* httpRequest;
        shared_ptr<IfType>* psVar6;
        unsigned long uVar7;
        CRMViewHandler* this_04;
        unsigned long uVar8;
        unsigned long uVar9;
        unsigned int in_stack_ffffffffffffff44;
        ReturnValue local_88;
        shared_ptr<IfType> local_58;
        unsigned long local_48;

        field_2080 = true;
        unique_ptr<CRMViewHandler>* local_60 = (unique_ptr<CRMViewHandler>*)&field_2088;
        Layout* this_01 = (Layout*)(*local_60).operator->();
        auto this_02 = this_01->SSOBeginPtr();
        auto local_a8 = this_02->GetImageElements();
        auto local_98 = this_02->GetLabelElements();
        long lVar2 = local_a8.HeapBeginPtr();
        long lVar3 = local_98.HeapBeginPtr();
        uint8_t* this_00 = &field_2000;
        this_00->clear();
        Array<shared_ptr<IfType>>* local_38 = (Array<shared_ptr<IfType>>*)this_00;
        this_00->set_max_size(lVar2 + lVar3, 1);
        lVar2 = local_a8.HeapBeginPtr();
        if (lVar2 == 0) {
            uVar9 = 0;
        } else {
            uVar9 = 0;
            do {
                local_a8[uVar9];
                MakeCRMSubComponent((IfTypes)&local_58, (IfType*)5, (int)this, (int)uVar9, 0, 0, 0,
                                    (array<float, _4ul>*)((unsigned long)in_stack_ffffffffffffff44 << 32));
                puVar4 = &local_a8[uVar9];
                this_03 = (EditLine*)(*puVar4).operator->();
                pcVar5 = (char*)this_03->GetText();
                local_88 = eastl::string(pcVar5);
                lVar2 = local_58.operator->();
                (*((lVar2 + 176))) = &local_88;
                puVar4 = &local_a8[uVar9];
                httpRequest = (HTTPRequest*)**puVar4;
                make_shared<HttpSpriteData, http::HTTPRequest&>(&local_88, httpRequest);
                lVar2 = local_58.operator->();
                m_httpSpriteCacheRaw.Put(local_88, 1, *((lVar2 + 176)));
                psVar6 = (shared_ptr<IfType>*)(*local_38)[uVar9];
                *psVar6 = local_58;
                uVar9 = uVar9 + 1;
                uVar7 = local_a8.HeapBeginPtr();
            } while (uVar9 < uVar7);
            uVar9 = uVar9 & 4294967295;
        }
        lVar2 = local_98.HeapBeginPtr();
        if (lVar2 != 0) {
            uVar7 = 0;
            do {
                local_98[uVar7];
                local_48 = uVar9;
                MakeCRMSubComponent((IfTypes)&local_58, (IfType*)4, (int)this, (int)uVar9, 0, 0, 0,
                                    (array<float, _4ul>*)((unsigned long)in_stack_ffffffffffffff44 << 32));
                local_98[uVar7];
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_88 = eastl::string(pcVar5);
                lVar2 = local_58.operator->();
                (*((lVar2 + 320))) = &local_88;
                this_04 = (CRMViewHandler*)(*local_60).operator->();
                lVar2 = local_98[uVar7];
                uVar1 = this_04->GetFontID((unsigned int)*(uint8_t*)(lVar2 + 48));
                lVar2 = local_58.operator->();
                *(uint32_t*)(lVar2 + 312) = uVar1;
                lVar2 = local_98[uVar7];
                uVar1 = *(uint32_t*)(lVar2 + 40);
                lVar2 = local_58.operator->();
                *(uint32_t*)(lVar2 + 388) = uVar1;
                lVar2 = local_98[uVar7];
                uVar1 = *(uint32_t*)(lVar2 + 44);
                lVar2 = local_58.operator->();
                *(uint32_t*)(lVar2 + 392) = uVar1;
                psVar6 = (shared_ptr<IfType>*)(*local_38)[local_48];
                *psVar6 = local_58;
                uVar7 = uVar7 + 1;
                uVar8 = local_98.HeapBeginPtr();
                uVar9 = local_48 + 1;
            } while (uVar7 < uVar8);
        }
    }

    // 0x100203f20
    ReturnValue* MakeCRMSubComponent(IfType::IfTypes ifTypes, const IfType& ifType, int arg3, int arg4, int arg5,
                                     int arg6, int arg7, const std::array<float, 4ul>& arg8) {
        ReturnValue* result;
        uint32_t in_register_00000014;
        uint32_t in_register_0000003c;
        ReturnValue result;
        array<float, 4ul>* in_stack_00000018;

        &result = (ReturnValue*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)ifTypes);
        long lVar6 = (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg3);
        int* arg1 = (int*)((((uint64_t)in_register_00000014 << 32) | (uint32_t)arg3) + 4);
        make_shared<IfType, int const&>(&result, arg1);
        long lVar3 = (result).operator->();
        *(int*)(lVar3 + 12) = (int)ifType;
        int iVar2 = *arg1;
        lVar3 = (result).operator->();
        *(int*)(lVar3 + 88) = iVar2;
        lVar3 = (result).operator->();
        *(int*)(lVar3 + 8) = arg4;
        uint8_t* puVar4 = (uint8_t*)(result).operator->();
        *puVar4 = 1;
        lVar3 = (result).operator->();
        *(int*)(lVar3 + 32) = arg5;
        lVar3 = (result).operator->();
        *(int*)(lVar3 + 36) = arg6;
        lVar3 = (result).operator->();
        *(int*)(lVar3 + 40) = arg7;
        lVar3 = (result).operator->();
        *(uint32_t*)(lVar3 + 44) = arg8._0_4_;
        float* pfVar5 = (float*)(*in_stack_00000018)[0];
        float fVar1 = *pfVar5;
        iVar2 = *(int*)(lVar6 + 72);
        lVar3 = (result).operator->();
        *(int*)(lVar3 + 48) = (int)(fVar1 * (float)iVar2);
        pfVar5 = (float*)(*in_stack_00000018)[1];
        fVar1 = *pfVar5;
        iVar2 = *(int*)(lVar6 + 76);
        lVar3 = (result).operator->();
        *(int*)(lVar3 + 52) = (int)(fVar1 * (float)iVar2);
        pfVar5 = (float*)(*in_stack_00000018)[2];
        fVar1 = *pfVar5;
        iVar2 = *(int*)(lVar6 + 72);
        lVar3 = (result).operator->();
        *(int*)(lVar3 + 56) = (int)(fVar1 * (float)iVar2);
        pfVar5 = (float*)(*in_stack_00000018)[3];
        fVar1 = *pfVar5;
        iVar2 = *(int*)(lVar6 + 76);
        lVar6 = (result).operator->();
        *(int*)(lVar6 + 60) = (int)(fVar1 * (float)iVar2);
        return result;
    }

    // 0x1002042f0
    bool IfType::IsInsideCRMClickBounds(int arg1, int arg2, int arg3, int arg4) {
        float fVar1;
        int iVar2;
        int iVar3;
        CRMViewHandler* this_00;
        array<float, 4ul>* this_01;
        float* pfVar5;
        int iVar6;
        bool bVar7;
        int iVar8;

        if (field_12 != 11) {
            LogAssert(
                "m_type == IfTypes::CRMVIEW",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/iftype.cpp",
                1200, nullptr);
        }
        if ((&field_2088)->operator_cast_to_bool() == '\0') {
            bVar7 = false;
        } else {
            this_00 = (CRMViewHandler*)field_2088.operator->();
            this_01 = (array<float, 4ul>*)this_00->GetClickBounds();
            bVar7 = false;
            pfVar5 = (float*)(*this_01)[0];
            iVar2 = field_72;
            iVar6 = (int)(*pfVar5 * (float)iVar2);
            pfVar5 = (float*)(*this_01)[1];
            iVar3 = field_76;
            fVar1 = *pfVar5;
            pfVar5 = (float*)(*this_01)[2];
            if (iVar6 <= arg1 - arg3) {
                iVar8 = (int)(fVar1 * (float)iVar3);
                if ((iVar8 <= arg2 - arg4) && (arg1 - arg3 < (int)((float)iVar2 * *pfVar5) + iVar6)) {
                    pfVar5 = (float*)(*this_01)[3];
                    bVar7 = arg2 - arg4 < (int)((float)iVar3 * *pfVar5) + iVar8;
                }
            }
        }
        return bVar7;
    }

    // 0x100204440
    void IfType::InitialiseInputField() {
        long lVar1;

        auto local_20 = std::make_unique<InputFieldWrapper>();
        uint8_t* this_00 = &field_2096;
        *this_00 = local_20;
        int arg1_00 = 1;
        do {
            lVar1 = (*this_00).operator->();
            ((lVar1 + 364))->SetKey(arg1_00, 0);
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 13);
        char16_t arg1 = L'\0';
        do {
            lVar1 = (*this_00).operator->();
            ((lVar1 + 364))->SetChar(arg1, 0);
            arg1 = arg1 + L'\x01';
        } while (arg1 != L' ');
        lVar1 = (*this_00).operator->();
        ((lVar1 + 364))->SetChar(L'\x80', 0);
        lVar1 = (*this_00).operator->();
        ((lVar1 + 364))->SetKey(82, 2);
        lVar1 = (*this_00).operator->();
        ((lVar1 + 364))->SetKey(81, 2);
        lVar1 = (*this_00).operator->();
        ((lVar1 + 364))->SetKey(86, 2);
    }

    // 0x100204600
    unsigned long InputFieldApplyText(InputField* inputField, eastl::string& str1, eastl::string& str2) {
        unsigned int uVar2;
        unsigned long uVar3;
        eastl::string local_68;
        eastl::string local_48;

        if (!(str1.empty())) {
            local_68.StripTags(str1);
            uVar2 = inputField->SetText(&local_68);
            uVar3 = (unsigned long)uVar2;
            str1.clear();
        } else {
            uVar3 = 0;
        }
        if (!(str2.empty())) {
            local_48.StripTags(str2);
            inputField->SetPlaceholderText(local_48);
            str2.clear();
            uVar3 = (((uint64_t)((int64_t)(uVar3 >> 8)) << 8) | (uint8_t)1);
        }
        return uVar3;
    }

    // 0x1002046c0
    uint8_t IfType::ServiceInputField() {
        uint8_t bVar3;
        uint8_t bVar4;
        uint8_t bVar5;
        uint8_t bVar6;
        int arg1;
        int arg2;
        unsigned long arg1_00;
        unsigned long arg2_00;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        PixfontGeneric* pixfontGeneric;
        bool local_31;

        auto this_00 = GetInputField();
        if ((field_12 != 12) || (this_00 == nullptr)) {
            LogAssert(
                "m_type == IfTypes::INPUTFIELD && inputField",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/iftype.cpp",
                1254, nullptr);
        }
        bool cVar1 = this_00->Is64BitOS();
        if ((!cVar1) && (field_312 != 4294967295)) {
            arg1 = this_00->GetFont11pxRegularID();
            arg2 = this_00->GetUsageType();
            arg1_00 = this_00->GetRenderTargetsManager();
            arg2_00 = this_00->GetWrapV();
            local_31 = false;
            midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)GetFont(local_31);
            bVar6 = 0;
            if ((*midiPlayerMainThread != nullptr) && (local_31 != false)) {
                pixfontGeneric = (PixfontGeneric*)**midiPlayerMainThread;
                bVar3 = this_00->SetFont(*pixfontGeneric);
                bVar4 =
                    InputFieldApplyText((InputField*)this_00, (eastl::string*)&field_320, (eastl::string*)&field_352);
                bVar5 = this_00->SetScroll(arg1, arg2);
                bVar6 = this_00->SetSelection(arg1_00, arg2_00);
                bVar6 = bVar6 | bVar5 | bVar4 | bVar3;
            }
        } else {
            cVar1 = this_00->Is64BitOS();
            if (!cVar1) {
                bVar6 = 0;
            } else {
                bVar6 =
                    InputFieldApplyText((InputField*)this_00, (eastl::string*)&field_320, (eastl::string*)&field_352);
            }
        }
        this_00->MainLogic();
        return bVar6;
    }

} // namespace jag::oldscape::rs2lib

namespace jag {
    // 0x100202070
    shared_ptr_if_not_array<oldscape::rs2lib::HttpSpriteData>::type
    make_shared<oldscape::rs2lib::HttpSpriteData, eastl::string const&>(const eastl::string& str) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        HttpSpriteData* local_30[2];

        auto arg1 = aligned_alloc(56, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::HttpSpriteData>::type result;
        } else {
            local_30[0] =
                placement_new<oldscape::rs2lib::HttpSpriteData, eastl::stringconst&>((void*)((long)arg1 + 32), str);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::HttpSpriteData>, int,
                              oldscape::rs2lib::HttpSpriteData*&>(arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x1002034e0
    shared_ptr_if_not_array<oldscape::rs2lib::InterfaceGraphicMask>::type
    make_shared<oldscape::rs2lib::InterfaceGraphicMask, int const&, int const&, Array<int>, Array<int>, int const&>(
        const int& arg1, const int& arg2, Array<int>&& arg3, Array<int>&& arg4, const int& arg5) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        InterfaceGraphicMask* local_40[2];

        auto arg1_00 = aligned_alloc(96, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::InterfaceGraphicMask>::type result;
        } else {
            local_40[0] =
                placement_new<oldscape::rs2lib::InterfaceGraphicMask, int const&, int const&, Array<int>, Array<int>,
                              int const&>((void*)((long)arg1_00 + 32), arg1, arg2, arg3, arg4, arg5);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::InterfaceGraphicMask>, int,
                              oldscape::rs2lib::InterfaceGraphicMask*&>(arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x1002041a0
    shared_ptr_if_not_array<oldscape::rs2lib::HttpSpriteData>::type
    make_shared<oldscape::rs2lib::HttpSpriteData, http::HTTPRequest&>(http::HTTPRequest& httpRequest) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        HttpSpriteData* local_30[2];

        auto arg1 = aligned_alloc(56, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::HttpSpriteData>::type result;
        } else {
            local_30[0] = placement_new<oldscape::rs2lib::HttpSpriteData, http::HTTPRequest&>((void*)((long)arg1 + 32),
                                                                                              httpRequest);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::HttpSpriteData>, int,
                              oldscape::rs2lib::HttpSpriteData*&>(arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag

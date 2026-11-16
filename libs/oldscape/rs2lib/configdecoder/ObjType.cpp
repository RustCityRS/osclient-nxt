// libs/oldscape/rs2lib/configdecoder/ObjType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "ObjType.h"

namespace jag::oldscape::configdecoder {
    // 0x10104a2b0
    int64_t ObjType::m_pConfigClient;

    // 0x10104a2b8
    int64_t ObjType::m_pModels;

    // 0x10104a2c0
    int32_t ObjType::m_memServer;

    // 0x10104a2c4
    int32_t ObjType::m_numDefinitions;

    // 0x10104a2c8
    int64_t ObjType::m_countFont;

    // 0x10104a2d0, set at startup by ___cxx_global_var_init.36
    graphics::OffscreenSoftwarePixToolkit ObjType::m_objSpriteToolkit = OffscreenSoftwarePixToolkit();

    // 0x10022fbe0
    void ObjType::Init(jagex3::Js5* js51, jagex3::Js5* js52, bool arg3, jstring::PixfontGeneric* pixfontGeneric) {
        m_pConfigClient = js51;
        m_pModels = js52;
        m_memServer = arg3;
        m_numDefinitions = js51->GetFileIdLimit(10);
        m_countFont = pixfontGeneric;
    }

    // 0x10022fc20
    auto ObjType::List(int arg1) {
        ObjType* pOVar2;
        int* piVar3;
        long lVar4;
        eastl::string* pbVar5;
        eastl::string* pbVar6;
        eastl::string* str;
        unsigned long arg1_00;
        shared_ptr<dash3d::Decor> local_d8;
        ReturnValue local_c8;
        ReturnValue local_b8;
        ReturnValue local_a8;
        ReturnValue local_98;
        ReturnValue local_88;
        ReturnValue local_78;
        ReturnValue local_68;
        ReturnValue local_60;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_40;

        ReturnValue RVar8 = (ReturnValue)(long)arg1;
        local_60[0] = RVar8;
        auto groundDecor = g_objStatics.Find(local_60);
        auto result(groundDecor);
        if (!(result != nullptr)) {
            local_40 = shared_ptr();
            m_pConfigClient->GetFile(local_40, 10, arg1, nullptr);
            make_shared<ObjType>(&local_60);
            result = local_60;
            if (local_40 != nullptr) {
                pOVar2 = (ObjType*)(result).operator->();
                local_d8 = shared_ptr(&local_40);
                Decode(pOVar2, &local_d8);
                piVar3 = (int*)(result).operator->();
                *piVar3 = arg1;
            }
            pOVar2 = (ObjType*)(result).operator->();
            PostDecode(pOVar2);
            lVar4 = (result).operator->();
            if (*(int*)(lVar4 + 732) != -1) {
                pOVar2 = (ObjType*)(result).operator->();
                lVar4 = (result).operator->();
                List(&local_c8, *(int*)(lVar4 + 732));
                lVar4 = (result).operator->();
                List(&local_b8, *(int*)(lVar4 + 728));
                GenCert(pOVar2, &local_c8, &local_b8);
            }
            lVar4 = (result).operator->();
            if (*(int*)(lVar4 + 832) != -1) {
                pOVar2 = (ObjType*)(result).operator->();
                lVar4 = (result).operator->();
                List(&local_a8, *(int*)(lVar4 + 832));
                lVar4 = (result).operator->();
                List(&local_98, *(int*)(lVar4 + 828));
                GenBought(pOVar2, &local_a8, &local_98);
            }
            lVar4 = (result).operator->();
            if (*(int*)(lVar4 + 840) != -1) {
                pOVar2 = (ObjType*)(result).operator->();
                lVar4 = (result).operator->();
                List(&local_88, *(int*)(lVar4 + 840));
                lVar4 = (result).operator->();
                List(&local_78, *(int*)(lVar4 + 836));
                GenPlaceholder(pOVar2, &local_88, &local_78);
            }
            if ((m_memServer == '\0') && (lVar4 = (result).operator->(), *(char*)(lVar4 + 220) != '\0')) {
                lVar4 = (result).operator->();
                if ((*(int*)(lVar4 + 732) == -1) &&
                    ((lVar4 = (result).operator->(),
                      *(int*)(lVar4 + 832) == -1 && (lVar4 = (result).operator->(), *(int*)(lVar4 + 840) == -1)))) {
                    lVar4 = (result).operator->();
                    (*((lVar4 + 8))) += ((eastl::string*)&constants::text::members_object_suffix);
                }
                lVar4 = (result).operator->();
                *(uint8_t*)(lVar4 + 825) = 0;
                lVar4 = (result).operator->();
                ((lVar4 + 224))->clear();
                lVar4 = (result).operator->();
                pbVar5 = (eastl::string*)((lVar4 + 224))->HeapBeginPtr();
                pbVar6 = (eastl::string*)((lVar4 + 224))->end();
                for (; pbVar5 != pbVar6; pbVar5 = pbVar5 + 32) {
                    eastl::string::assign(pbVar5, "");
                }
                arg1_00 = 0;
                local_68 = RVar8;
                while (true) {
                    lVar4 = (result).operator->();
                    if (((lVar4 + 424))->size() <= arg1_00)
                        break;
                    if (arg1_00 == 4) {
                        lVar4 = (result).operator->();
                        str = (eastl::string*)(*((lVar4 + 424)))[4];
                        local_60 = eastl::string(*str);
                    } else {
                        local_60 = eastl::string("");
                    }
                    lVar4 = (result).operator->();
                    pbVar5 = (eastl::string*)(*((lVar4 + 424)))[arg1_00];
                    *pbVar5 = &local_60;
                    arg1_00 = arg1_00 + 1;
                }
                lVar4 = (result).operator->();
                RVar8 = local_68;
                *(uint32_t*)(lVar4 + 844) = 4294967294;
                lVar4 = (result).operator->();
                *(uint32_t*)(lVar4 + 756) = 0;
            }
            local_60[0] = RVar8;
            g_objStatics.Put(result, 1, local_60);
        }
        return result;
    }

    // 0x100230280
    void ObjType::Decode(shared_ptr<PacketJ<Array<unsigned char>>> packetJ) {
        shared_ptr<dash3d::Decor> local_38;

        PacketReaderMixin<PacketT<Array<unsigned char>>>* pPVar1 =
            (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
        uint8_t bVar2 = pPVar1->g1();
        if (bVar2 != 0) {
            do {
                local_38 = shared_ptr(packetJ);
                Decode(&local_38, (unsigned int)bVar2);
                pPVar1 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                bVar2 = pPVar1->g1();
            } while (bVar2 != 0);
        }
    }

    // 0x100230310
    void ObjType::PostDecode() {
        if (field_200 == 1) {
            field_760 = 0;
        }
    }

    // 0x100230330
    void ObjType::GenCert(shared_ptr<ObjType> objType1, shared_ptr<ObjType> objType2) {
        long lVar1 = (*objType1).operator->();
        field_4 = *(unsigned int*)(lVar1 + 4);
        lVar1 = (*objType1).operator->();
        field_176 = *(unsigned int*)(lVar1 + 176);
        lVar1 = (*objType1).operator->();
        field_180 = *(unsigned int*)(lVar1 + 180);
        lVar1 = (*objType1).operator->();
        field_184 = *(unsigned int*)(lVar1 + 184);
        lVar1 = (*objType1).operator->();
        field_188 = *(unsigned int*)(lVar1 + 188);
        lVar1 = (*objType1).operator->();
        field_192 = *(unsigned int*)(lVar1 + 192);
        lVar1 = (*objType1).operator->();
        field_196 = *(unsigned int*)(lVar1 + 196);
        lVar1 = (*objType1).operator->();
        field_80 = (*((lVar1 + 80)));
        lVar1 = (*objType1).operator->();
        field_104 = (*((lVar1 + 104)));
        lVar1 = (*objType1).operator->();
        field_128 = (*((lVar1 + 128)));
        lVar1 = (*objType1).operator->();
        field_152 = (*((lVar1 + 152)));
        lVar1 = (*objType2).operator->();
        field_8 = ((lVar1 + 8));
        lVar1 = (*objType2).operator->();
        field_220 = *(uint8_t*)(lVar1 + 220);
        lVar1 = (*objType2).operator->();
        field_204 = *(uint32_t*)(lVar1 + 204);
        lVar1 = (*objType2).operator->();
        field_40 = ((lVar1 + 40));
        field_200 = 1;
    }

    // 0x1002304a0
    void ObjType::GenBought(shared_ptr<ObjType> objType1, shared_ptr<ObjType> objType2) {
        eastl::string* str;
        unsigned long arg1;

        long lVar2 = (*objType1).operator->();
        field_4 = *(unsigned int*)(lVar2 + 4);
        lVar2 = (*objType1).operator->();
        field_176 = *(unsigned int*)(lVar2 + 176);
        lVar2 = (*objType1).operator->();
        field_180 = *(unsigned int*)(lVar2 + 180);
        lVar2 = (*objType1).operator->();
        field_184 = *(unsigned int*)(lVar2 + 184);
        lVar2 = (*objType1).operator->();
        field_188 = *(unsigned int*)(lVar2 + 188);
        lVar2 = (*objType1).operator->();
        field_192 = *(unsigned int*)(lVar2 + 192);
        lVar2 = (*objType1).operator->();
        field_196 = *(unsigned int*)(lVar2 + 196);
        lVar2 = (*objType2).operator->();
        field_80 = (*((lVar2 + 80)));
        lVar2 = (*objType2).operator->();
        field_104 = (*((lVar2 + 104)));
        lVar2 = (*objType2).operator->();
        field_128 = (*((lVar2 + 128)));
        lVar2 = (*objType2).operator->();
        field_152 = (*((lVar2 + 152)));
        lVar2 = (*objType2).operator->();
        field_8 = ((lVar2 + 8));
        lVar2 = (*objType2).operator->();
        field_220 = *(uint8_t*)(lVar2 + 220);
        lVar2 = (*objType2).operator->();
        field_200 = *(uint32_t*)(lVar2 + 200);
        lVar2 = (*objType2).operator->();
        field_40 = ((lVar2 + 40));
        lVar2 = (*objType2).operator->();
        field_624 = *(unsigned int*)(lVar2 + 624);
        lVar2 = (*objType2).operator->();
        field_628 = *(unsigned int*)(lVar2 + 628);
        lVar2 = (*objType2).operator->();
        field_648 = *(unsigned int*)(lVar2 + 648);
        lVar2 = (*objType2).operator->();
        field_636 = *(unsigned int*)(lVar2 + 636);
        lVar2 = (*objType2).operator->();
        field_640 = *(unsigned int*)(lVar2 + 640);
        lVar2 = (*objType2).operator->();
        field_652 = *(unsigned int*)(lVar2 + 652);
        lVar2 = (*objType2).operator->();
        field_208 = *(unsigned int*)(lVar2 + 208);
        lVar2 = (*objType2).operator->();
        field_212 = *(unsigned int*)(lVar2 + 212);
        lVar2 = (*objType2).operator->();
        field_216 = *(unsigned int*)(lVar2 + 216);
        lVar2 = (*objType2).operator->();
        field_656 = *(unsigned int*)(lVar2 + 656);
        lVar2 = (*objType2).operator->();
        field_660 = *(unsigned int*)(lVar2 + 660);
        lVar2 = (*objType2).operator->();
        field_664 = *(unsigned int*)(lVar2 + 664);
        lVar2 = (*objType2).operator->();
        field_668 = *(unsigned int*)(lVar2 + 668);
        lVar2 = (*objType2).operator->();
        field_756 = *(unsigned int*)(lVar2 + 756);
        lVar2 = (*objType2).operator->();
        field_224 = (*((lVar2 + 224)));
        lVar2 = (*objType2).operator->();
        field_760 = *(int*)(lVar2 + 760);
        uint8_t* this_00 = &field_424;
        this_00->clear();
        lVar2 = (*objType2).operator->();
        if (((lVar2 + 424))->empty() == '\0') {
            arg1 = 0;
            do {
                lVar2 = (*objType2).operator->();
                str = (eastl::string*)(*((lVar2 + 424)))[arg1];
                this_00->push_back(*str);
                arg1 = arg1 + 1;
            } while (arg1 != 4);
        }
        this_00->push_back(*((eastl::string*)&constants::text::discard));
        field_204 = 0;
    }

    // 0x1002307d0
    void ObjType::GenPlaceholder(shared_ptr<ObjType> objType1, shared_ptr<ObjType> objType2) {
        long lVar1 = (*objType1).operator->();
        field_4 = *(unsigned int*)(lVar1 + 4);
        lVar1 = (*objType1).operator->();
        field_176 = *(unsigned int*)(lVar1 + 176);
        lVar1 = (*objType1).operator->();
        field_180 = *(unsigned int*)(lVar1 + 180);
        lVar1 = (*objType1).operator->();
        field_184 = *(unsigned int*)(lVar1 + 184);
        lVar1 = (*objType1).operator->();
        field_188 = *(unsigned int*)(lVar1 + 188);
        lVar1 = (*objType1).operator->();
        field_192 = *(unsigned int*)(lVar1 + 192);
        lVar1 = (*objType1).operator->();
        field_196 = *(unsigned int*)(lVar1 + 196);
        lVar1 = (*objType1).operator->();
        field_80 = (*((lVar1 + 80)));
        lVar1 = (*objType1).operator->();
        field_104 = (*((lVar1 + 104)));
        lVar1 = (*objType1).operator->();
        field_128 = (*((lVar1 + 128)));
        lVar1 = (*objType1).operator->();
        field_152 = (*((lVar1 + 152)));
        lVar1 = (*objType1).operator->();
        field_200 = *(uint32_t*)(lVar1 + 200);
        lVar1 = (*objType2).operator->();
        field_8 = ((lVar1 + 8));
        lVar1 = (*objType2).operator->();
        field_40 = ((lVar1 + 40));
        field_204 = 0;
        field_220 = 0;
        field_824 = 0;
    }

    // 0x100230a30
    void ObjType::Decode(shared_ptr<PacketJ<Array<unsigned char>>> packetJ, int arg2) {
        unsigned int uVar1;
        bool bVar2;
        char cVar3;
        uint8_t bVar4;
        uint16_t uVar5;
        unsigned short uVar6;
        short sVar7;
        eastl::string* pbVar9;
        uint16_t* puVar10;
        PacketReaderMixin<PacketT<Array<unsigned char>>>* pPVar11;
        unsigned int* puVar12;
        unsigned long uVar13;
        unsigned long uVar14;
        uint8_t* puVar15;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_58;
        Array<short>* local_38;

        switch (arg2) {
        case 1:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            uVar6 = pPVar11->g2();
            field_4 = (unsigned int)uVar6;
            break;
        case 2:
            bVar2 = (bool)(*packetJ).operator->();
            PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_58, bVar2);
            field_8 = &local_58;
            goto LAB_100230cae;
        default:
            if (arg2 - 30U < 5) {
                bVar2 = (bool)(*packetJ).operator->();
                PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_58, bVar2);
                puVar15 = &field_224;
                uVar13 = (unsigned long)(arg2 - 30U);
                pbVar9 = (eastl::string*)(*puVar15)[uVar13];
                *pbVar9 = &local_58;
                cVar3 = core::stringtools::general::StringTools::EqualsIgnoreCase(
                    *((eastl::string*)(*puVar15)[uVar13]), *((eastl::string*)&constants::text::hidden));
                if (!cVar3) {
                    return;
                }
                pbVar9 = (eastl::string*)(*puVar15)[uVar13];
                eastl::string::assign(pbVar9, "");
                return;
            }
            if (4 < arg2 - 35U) {
                switch (arg2) {
                case 40:
                    goto switchD_100230ddc_caseD_28;
                case 41:
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    bVar4 = pPVar11->g1();
                    local_38 = (Array<short>*)&field_128;
                    uVar13 = (unsigned long)bVar4;
                    local_38->set_max_size(uVar13, 5);
                    field_152.set_max_size(uVar13, 5);
                    if (bVar4 == 0) {
                        return;
                    }
                    uVar14 = 0;
                    do {
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                        uVar5 = pPVar11->g2();
                        puVar10 = (uint16_t*)(*local_38)[uVar14];
                        *puVar10 = uVar5;
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                        uVar5 = pPVar11->g2();
                        puVar10 = &field_152[uVar14];
                        *puVar10 = uVar5;
                        uVar14 = uVar14 + 1;
                    } while (uVar13 != uVar14);
                    return;
                case 42:
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    cVar3 = pPVar11->g1s();
                    field_844 = (int)cVar3;
                    return;
                default:
                    uVar1 = arg2 - 100;
                    if (uVar1 < 10) {
                        puVar15 = &field_680;
                        cVar3 = puVar15->empty();
                        if (cVar3) {
                            puVar15->set_max_size(10, 1);
                            field_704.set_max_size(10, 1);
                        }
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                        uVar6 = pPVar11->g2();
                        puVar12 = (unsigned int*)(*puVar15)[(unsigned long)uVar1];
                        *puVar12 = (unsigned int)uVar6;
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                        uVar6 = pPVar11->g2();
                        puVar12 = &field_704[(unsigned long)uVar1];
                        *puVar12 = (unsigned int)uVar6;
                        return;
                    }
                    switch (arg2) {
                    case 110:
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                        uVar6 = pPVar11->g2();
                        field_736 = (unsigned int)uVar6;
                        return;
                    case 111:
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                        uVar6 = pPVar11->g2();
                        field_740 = (unsigned int)uVar6;
                        return;
                    case 112:
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                        uVar6 = pPVar11->g2();
                        field_744 = (unsigned int)uVar6;
                        return;
                    case 113:
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                        cVar3 = pPVar11->g1s();
                        field_748 = (int)cVar3;
                        return;
                    case 114:
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                        cVar3 = pPVar11->g1s();
                        field_752 = cVar3 * 5;
                        return;
                    case 115:
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                        bVar4 = pPVar11->g1();
                        field_756 = (unsigned int)bVar4;
                        return;
                    case 116:
                    case 117:
                    case 118:
                    case 119:
                    case 120:
                    case 121:
                    case 122:
                    case 123:
                    case 124:
                    case 125:
                    case 126:
                    case 127:
                    case 128:
                    case 129:
                    case 130:
                    case 131:
                    case 132:
                    case 133:
                    case 134:
                    case 135:
                    case 136:
                    case 137:
                    case 138:
                    case 141:
                    case 142:
                    case 143:
                    case 144:
                    case 145:
                    case 146:
                    case 147:
                        goto switchD_10023114d_caseD_74;
                    case 139:
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                        uVar6 = pPVar11->g2();
                        field_828 = (unsigned int)uVar6;
                        return;
                    case 140:
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                        uVar6 = pPVar11->g2();
                        field_832 = (unsigned int)uVar6;
                        return;
                    case 148:
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                        uVar6 = pPVar11->g2();
                        field_836 = (unsigned int)uVar6;
                        return;
                    case 149:
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                        uVar6 = pPVar11->g2();
                        field_840 = (unsigned int)uVar6;
                        return;
                    default:
                        if (arg2 == 249) {
                            ParamTypeHelper::UnpackClientParams(*((PacketJ<Array<unsigned char> _>*)**packetJ),
                                                                field_768);
                            return;
                        }
                    switchD_10023114d_caseD_74:
                        (logger::default_logger())
                            ->Log(false, 8,
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                  "rs2lib/configdecoder/ObjType.cpp",
                                  435, "Error unrecognised .obj config code: %i", arg2);
                        return;
                    }
                case 65:
                    field_824 = 257;
                    return;
                case 75:
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    sVar7 = pPVar11->g2s();
                    field_760 = (int)sVar7;
                    return;
                case 78:
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    uVar6 = pPVar11->g2();
                    field_648 = (unsigned int)uVar6;
                    return;
                case 79:
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    uVar6 = pPVar11->g2();
                    field_652 = (unsigned int)uVar6;
                    return;
                case 90:
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    uVar6 = pPVar11->g2();
                    field_656 = (unsigned int)uVar6;
                    return;
                case 91:
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    uVar6 = pPVar11->g2();
                    field_664 = (unsigned int)uVar6;
                    return;
                case 92:
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    uVar6 = pPVar11->g2();
                    field_660 = (unsigned int)uVar6;
                    return;
                case 93:
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    uVar6 = pPVar11->g2();
                    field_668 = (unsigned int)uVar6;
                    return;
                case 94:
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    uVar6 = pPVar11->g2();
                    field_672 = (unsigned int)uVar6;
                    return;
                case 95:
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    uVar6 = pPVar11->g2();
                    field_188 = (unsigned int)uVar6;
                    return;
                case 97:
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    uVar6 = pPVar11->g2();
                    field_728 = (unsigned int)uVar6;
                    return;
                case 98:
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    uVar6 = pPVar11->g2();
                    field_732 = (unsigned int)uVar6;
                    return;
                }
            }
            bVar2 = (bool)(*packetJ).operator->();
            PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_58, bVar2);
            pbVar9 = &field_424[(unsigned long)(arg2 - 35U)];
            *pbVar9 = &local_58;
            goto LAB_100230cae;
        case 4:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            uVar6 = pPVar11->g2();
            field_176 = (unsigned int)uVar6;
            break;
        case 5:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            uVar6 = pPVar11->g2();
            field_180 = (unsigned int)uVar6;
            break;
        case 6:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            uVar6 = pPVar11->g2();
            field_184 = (unsigned int)uVar6;
            break;
        case 7:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            uVar6 = pPVar11->g2();
            field_192 = (unsigned int)uVar6;
            if ((short)uVar6 < 0) {
                field_192 = uVar6 | 4294901760;
            }
            break;
        case 8:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            uVar6 = pPVar11->g2();
            field_196 = (unsigned int)uVar6;
            if ((short)uVar6 < 0) {
                field_196 = uVar6 | 4294901760;
            }
            break;
        case 9:
            bVar2 = (bool)(*packetJ).operator->();
            PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_58, bVar2);
            field_40 = &local_58;
        LAB_100230cae:
            break;
        case 11:
            field_200 = 1;
            break;
        case 12:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            field_204 = pPVar11->g4();
            break;
        case 13:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            bVar4 = pPVar11->g1();
            field_208 = (unsigned int)bVar4;
            break;
        case 14:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            bVar4 = pPVar11->g1();
            field_212 = (unsigned int)bVar4;
            break;
        case 16:
            field_220 = 1;
            break;
        case 23:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            uVar6 = pPVar11->g2();
            field_624 = (unsigned int)uVar6;
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            bVar4 = pPVar11->g1();
            field_632 = (unsigned int)bVar4;
            break;
        case 24:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            uVar6 = pPVar11->g2();
            field_628 = (unsigned int)uVar6;
            break;
        case 25:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            uVar6 = pPVar11->g2();
            field_636 = (unsigned int)uVar6;
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            bVar4 = pPVar11->g1();
            field_644 = (unsigned int)bVar4;
            break;
        case 26:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            uVar6 = pPVar11->g2();
            field_640 = (unsigned int)uVar6;
            break;
        case 27:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            bVar4 = pPVar11->g1();
            field_216 = (unsigned int)bVar4;
        }
        return;
    switchD_100230ddc_caseD_28:
        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
        bVar4 = pPVar11->g1();
        local_38 = (Array<short>*)&field_80;
        uVar13 = (unsigned long)bVar4;
        local_38->set_max_size(uVar13, 5);
        field_104.set_max_size(uVar13, 5);
        if (bVar4 == 0) {
            return;
        }
        uVar14 = 0;
        do {
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            uVar5 = pPVar11->g2();
            puVar10 = (uint16_t*)(*local_38)[uVar14];
            *puVar10 = uVar5;
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            uVar5 = pPVar11->g2();
            puVar10 = &field_104[uVar14];
            *puVar10 = uVar5;
            uVar14 = uVar14 + 1;
        } while (uVar13 != uVar14);
    }

    // 0x100231560
    auto ObjType::GetModelUnlit(int arg1) {
        uint8_t* this_00;
        uint8_t* puVar1;
        short sVar2;
        int* piVar5;
        ObjType* this_01;
        long* plVar6;
        long lVar7;
        short* psVar8;
        unsigned long uVar9;
        int arg1_00;
        unsigned long uVar10;
        ReturnValue local_48;

        ObjType* local_38 = this;
        bool cVar3 = field_680.empty();
        if ((!cVar3) && (1 < arg1)) {
            puVar1 = &local_38->field_704;
            arg1_00 = -1;
            uVar10 = 0;
            do {
                piVar5 = (int*)(*puVar1)[uVar10];
                if ((*piVar5 <= arg1) && (piVar5 = (int*)(*puVar1)[uVar10], *piVar5 != 0)) {
                    piVar5 = &field_680[uVar10];
                    arg1_00 = *piVar5;
                }
                uVar10 = uVar10 + 1;
            } while (uVar10 != 10);
            if (arg1_00 != -1) {
                List(&local_48, arg1_00);
                this_01 = (ObjType*)local_48.operator->();
                GetModelUnlit(&result, this_01, 1);
                return result;
            }
        }
        local_48.Load(*m_pModels, local_38->field_4, 0, false);
        if (local_48 == nullptr) {
            auto result;
        } else {
            if (((local_38->field_736 != 128) || (local_38->field_740 != 128)) || (local_38->field_744 != 128)) {
                plVar6 = (long*)local_48.operator->();
                (**(void (**)(...))(*plVar6 + 184))(plVar6, local_38->field_736, local_38->field_740,
                                                    local_38->field_744);
            }
            puVar1 = &local_38->field_80;
            cVar3 = puVar1->empty();
            if ((!cVar3) && (lVar7 = puVar1->end(), lVar7 != 0)) {
                this_00 = &local_38->field_104;
                uVar10 = 0;
                do {
                    plVar6 = (long*)local_48.operator->();
                    psVar8 = (short*)(*puVar1)[uVar10];
                    sVar2 = *psVar8;
                    psVar8 = (short*)(*this_00)[uVar10];
                    (**(void (**)(...))(*plVar6 + 160))(plVar6, (int)sVar2, (int)*psVar8);
                    uVar10 = uVar10 + 1;
                    uVar9 = puVar1->end();
                } while (uVar10 < uVar9);
            }
            puVar1 = &local_38->field_128;
            cVar3 = puVar1->empty();
            if ((!cVar3) && (lVar7 = puVar1->end(), lVar7 != 0)) {
                local_38 = (ObjType*)&local_38->field_152;
                uVar10 = 0;
                do {
                    plVar6 = (long*)local_48.operator->();
                    psVar8 = (short*)(*puVar1)[uVar10];
                    sVar2 = *psVar8;
                    psVar8 = (short*)(*local_38)[uVar10];
                    (**(void (**)(...))(*plVar6 + 168))(plVar6, (int)sVar2, (int)*psVar8);
                    uVar10 = uVar10 + 1;
                    uVar9 = puVar1->end();
                } while (uVar10 < uVar9);
            }
            result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_48);
        }
        return result;
    }

    // 0x100231830
    ObjType* ObjType::GetModelLit(int arg1) const {
        Array<short>* pAVar1;
        Array<int>* this_00;
        short sVar3;
        uint64_t uVar4;
        int iVar7;
        int* piVar8;
        long* plVar9;
        long lVar10;
        short* psVar11;
        unsigned long uVar12;
        int in_EDX;
        uint32_t in_register_00000034;
        unsigned long uVar13;
        shared_ptr<dash3d::ModelLit> local_78;
        uint8_t local_60[24];

        int* local_38 = (int*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        Array<game::VarValue>* pAVar2 = (Array<game::VarValue>*)(local_38 + 170);
        local_60._16_8_ = this;
        bool cVar5 = pAVar2->empty();
        if ((!cVar5) && (1 < in_EDX)) {
            this_00 = (Array<int>*)(local_38 + 176);
            iVar7 = -1;
            uVar13 = 0;
            do {
                piVar8 = (int*)(*this_00)[uVar13];
                if ((*piVar8 <= in_EDX) && (piVar8 = (int*)(*this_00)[uVar13], *piVar8 != 0)) {
                    piVar8 = (int*)(*pAVar2)[uVar13];
                    iVar7 = *piVar8;
                }
                uVar13 = uVar13 + 1;
            } while (uVar13 != 10);
            if (iVar7 != -1) {
                List(&local_48, iVar7);
                iVar7 = local_48.operator->();
                uVar4 = local_60._16_8_;
                GetModelLit((ObjType*)local_60._16_8_, iVar7);
                return (ObjType*)uVar4;
            }
        }
        piVar8 = local_38;
        unsigned long local_68 = (unsigned long)*local_38;
        if (dash3d::g_usingRSeven != '\0') {
            local_68 = local_68 | 4294967296;
        }
        shared_ptr<dash3d::GroundDecor>* groundDecor =
            (shared_ptr<
                dash3d::GroundDecor>*)((LRUHashCache<
                                           dash3d::ModelLit, 50ul, 51ul, false,
                                           unsigned long long>*)&reinterpret_cast<const uint64_t*>(&g_objStatics)[672])
                ->Find(local_68);
        shared_ptr local_48(groundDecor);
        bool bVar6 = local_48 != nullptr;
        ObjType* this_01 = (ObjType*)local_60._16_8_;
        if (bVar6) {
            local_60._16_8_->shared_ptr<FileRSevenDebugPresetProvider, void>(local_48);
        } else {
            local_60->Load(*m_pModels, piVar8[1], 0, false);
            bVar6 = *local_60 == nullptr;
            if (bVar6) {
                new (this_01) shared_ptr();
            } else {
                if (((piVar8[184] != 128) || (piVar8[185] != 128)) || (piVar8[186] != 128)) {
                    plVar9 = (long*)(*local_60).operator->();
                    (**(void (**)(...))(*plVar9 + 184))(plVar9, piVar8[184], piVar8[185], piVar8[186]);
                }
                pAVar2 = (Array<game::VarValue>*)(piVar8 + 20);
                cVar5 = pAVar2->empty();
                if ((!cVar5) && (lVar10 = pAVar2->end(), lVar10 != 0)) {
                    pAVar1 = (Array<short>*)(local_38 + 26);
                    uVar13 = 0;
                    do {
                        plVar9 = (long*)(*local_60).operator->();
                        psVar11 = (short*)(*pAVar2)[uVar13];
                        sVar3 = *psVar11;
                        psVar11 = (short*)(*pAVar1)[uVar13];
                        (**(void (**)(...))(*plVar9 + 160))(plVar9, (int)sVar3, (int)*psVar11);
                        uVar13 = uVar13 + 1;
                        uVar12 = pAVar2->end();
                    } while (uVar13 < uVar12);
                }
                pAVar2 = (Array<game::VarValue>*)(local_38 + 32);
                cVar5 = pAVar2->empty();
                if ((!cVar5) && (lVar10 = pAVar2->end(), lVar10 != 0)) {
                    pAVar1 = (Array<short>*)(local_38 + 38);
                    uVar13 = 0;
                    do {
                        plVar9 = (long*)(*local_60).operator->();
                        psVar11 = (short*)(*pAVar2)[uVar13];
                        sVar3 = *psVar11;
                        psVar11 = (short*)(*pAVar1)[uVar13];
                        (**(void (**)(...))(*plVar9 + 168))(plVar9, (int)sVar3, (int)*psVar11);
                        uVar13 = uVar13 + 1;
                        uVar12 = pAVar2->end();
                    } while (uVar13 < uVar12);
                }
                plVar9 = (long*)(*local_60).operator->();
                (**(void (**)(...))(*plVar9 + 72))(&local_78, plVar9, local_38[187] + 64, local_38[188] + 768,
                                                   4294967246, 4294967286, 4294967246);
                local_48 = local_78;
                this_01 = (ObjType*)local_60._16_8_;
                lVar10 = local_48.operator->();
                *(uint8_t*)(lVar10 + 16) = 1;
                ((LRUHashCache<dash3d::ModelLit, 50ul, 51ul, false,
                               unsigned long long>*)&reinterpret_cast<const uint64_t*>(&g_objStatics)[672])
                    ->Put(local_48, 1, local_68);
                this_01->shared_ptr<FileRSevenDebugPresetProvider, void>(local_48);
            }
        }
        return this_01;
    }

    // 0x100231c00
    auto ObjType::GetStackSizeAlt(const shared_ptr<ObjType>& objType, int arg2) {
        int* piVar3;
        unsigned long arg1;
        int arg1_00;

        long lVar2 = objType.operator->();
        if ((((lVar2 + 680))->empty() == '\0') && (1 < arg2)) {
            arg1_00 = -1;
            arg1 = 0;
            do {
                lVar2 = objType.operator->();
                piVar3 = (int*)(*((lVar2 + 704)))[arg1];
                if (*piVar3 <= arg2) {
                    lVar2 = objType.operator->();
                    piVar3 = (int*)(*((lVar2 + 704)))[arg1];
                    if (*piVar3 != 0) {
                        lVar2 = objType.operator->();
                        piVar3 = (int*)(*((lVar2 + 680)))[arg1];
                        arg1_00 = *piVar3;
                    }
                }
                arg1 = arg1 + 1;
            } while (arg1 != 10);
            if (arg1_00 != -1) {
                List(&result, arg1_00);
                return result;
            }
        }
        return auto(objType);
    }

    // 0x100231ce0
    ObjType* ObjType::GetSprite(int arg1, int arg2, int arg3, int arg4, ObjType::SpriteTextType spriteTextType,
                                bool arg6, const eastl::string& str) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        ObjType* pOVar5;
        bool bVar6;
        bool cVar7;
        int iVar8;
        unsigned int uVar9;
        shared_ptr<ObjSprite>* objSprite;
        long lVar10;
        int* piVar11;
        SharedArray<unsigned int>* pSVar12;
        Pix3D* this_00;
        SoftwareWorldRenderer* this_01;
        uint64_t* puVar13;
        uint64_t uVar14;
        array<int, _2048ul>* this_02;
        array<int, _2048ul>* this_03;
        long* plVar15;
        Pix32* pPVar16;
        SharedArray<unsigned int>* pSVar18;
        unsigned int* puVar19;
        unsigned long uVar20;
        double dVar21;
        uint64_t in_stack_fffffffffffffe90;
        ReturnValue* pRVar23;
        uint64_t* local_f8;
        uint64_t local_f0;
        shared_ptr<ObjType> local_e8;
        ReturnValue local_c8;
        Pix2D* local_a8;
        ReturnValue local_a0;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_78;
        uint32_t local_50[2];
        ReturnValue local_40;

        if (dash3d::g_usingRSeven != '\0') {
            LogAssert("dash3d::g_usingRSeven == false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/ObjType.cpp",
                      733, nullptr);
        }
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_60;
        eastl::string local_148(str);
        ObjSpriteCacheKey local_128(arg1, arg3, spriteTextType, arg2, (unsigned int)arg4, &local_148);
        if (!arg6) {
            objSprite = (shared_ptr<
                         ObjSprite>*)((LRUHashCache<
                                          ObjSprite, 200ul, 211ul, false,
                                          ObjSpriteCacheKey>*)&reinterpret_cast<const uint64_t*>(&g_objStatics)[1204])
                            ->Find(local_128);
            local_60 = *objSprite;
            bVar6 = local_60 != nullptr;
            if (bVar6) {
                shared_ptr<FileRSevenDebugPresetProvider, void>(local_60);
                goto LAB_100232632;
            }
        }
        List(&local_40, arg1);
        uint32_t uVar22 = (uint32_t)((unsigned long)&local_148 >> 32);
        uint32_t uVar24 = (uint32_t)((unsigned long)in_stack_fffffffffffffe90 >> 32);
        if (1 < arg2) {
            lVar10 = local_40.operator->();
            cVar7 = ((lVar10 + 680))->empty();
            uVar22 = (uint32_t)((unsigned long)&local_148 >> 32);
            uVar24 = (uint32_t)((unsigned long)in_stack_fffffffffffffe90 >> 32);
            if (!cVar7) {
                iVar8 = -1;
                uVar20 = 0;
                do {
                    lVar10 = local_40.operator->();
                    piVar11 = (int*)(*((lVar10 + 704)))[uVar20];
                    if (*piVar11 <= arg2) {
                        lVar10 = local_40.operator->();
                        piVar11 = (int*)(*((lVar10 + 704)))[uVar20];
                        if (*piVar11 != 0) {
                            lVar10 = local_40.operator->();
                            piVar11 = (int*)(*((lVar10 + 680)))[uVar20];
                            iVar8 = *piVar11;
                        }
                    }
                    uVar22 = (uint32_t)((unsigned long)&local_148 >> 32);
                    uVar24 = (uint32_t)((unsigned long)in_stack_fffffffffffffe90 >> 32);
                    uVar20 = uVar20 + 1;
                } while (uVar20 != 10);
                if (iVar8 != -1) {
                    List(&local_a0, iVar8);
                    local_40 = local_a0;
                }
            }
        }
        iVar8 = local_40.operator->();
        GetModelLit(&local_e8, iVar8);
        bVar6 = local_e8 == nullptr;
        if (bVar6) {
            new (this) shared_ptr();
        } else {
            local_78 = shared_ptr();
            lVar10 = local_40.operator->();
            if (*(int*)(lVar10 + 732) == -1) {
                lVar10 = local_40.operator->();
                if (*(int*)(lVar10 + 832) == -1) {
                    lVar10 = local_40.operator->();
                    pOVar5 = this;
                    if (*(int*)(lVar10 + 840) != -1) {
                        lVar10 = local_40.operator->();
                        iVar8 = *(int*)(lVar10 + 836);
                        new (local_50) eastl::allocator("EASTL basic_string");
                        pRVar23 = &local_a0;
                        new (pRVar23) eastl::string("", local_50);
                        GetSprite(&local_c8, iVar8, arg2, 0, 0, 0, false, (eastl::string*)pRVar23);
                        uVar24 = (uint32_t)((unsigned long)pRVar23 >> 32);
                        local_78 = local_c8;
                        bVar6 = local_78 == nullptr;
                        if (bVar6) {
                            new (pOVar5) shared_ptr();
                            goto LAB_100232610;
                        }
                    }
                } else {
                    lVar10 = local_40.operator->();
                    iVar8 = *(int*)(lVar10 + 828);
                    new (local_50) eastl::allocator("EASTL basic_string");
                    pRVar23 = &local_a0;
                    new (pRVar23) eastl::string("", local_50);
                    GetSprite(&local_c8, iVar8, arg2, arg3, (unsigned int)arg4, 0, false, (eastl::string*)pRVar23);
                    pOVar5 = this;
                    uVar24 = (uint32_t)((unsigned long)pRVar23 >> 32);
                    local_78 = local_c8;
                    bVar6 = local_78 == nullptr;
                    if (bVar6) {
                        new (pOVar5) shared_ptr();
                        goto LAB_100232610;
                    }
                }
            LAB_100232141:
                local_c8[0]._0_4_ = 36;
                local_50[0] = 32;
                make_shared<ObjSprite, int&, int&>(&local_a0, &local_c8, (ObjTypeConstants*)local_50);
                local_60 = local_a0;
                pSVar12 = (SharedArray<unsigned int>*)local_60.operator->();
                m_objSpriteToolkit.SetDestination(*pSVar12, 36, 32);
                local_a8 = (Pix2D*)m_objSpriteToolkit.second();
                this_00 = (Pix3D*)m_objSpriteToolkit.GetDevCredentialsOutputDirectory();
                this_01 = (SoftwareWorldRenderer*)m_objSpriteToolkit.GetTranslation();
                puVar13 = (uint64_t*)this_01->GetModelLitRenderer();
                this_00->SetRenderClipping();
                this_00->SetOrigin((int)this_00, 16);
                this_00->SetLowDetail(false);
                lVar10 = local_40.operator->();
                if (*(int*)(lVar10 + 840) != -1) {
                    uVar14 = *local_78;
                    (**(void (**)(...))(local_a8->field_0 + 176))(local_a8, uVar14, 0, 0);
                }
                lVar10 = local_40.operator->();
                iVar8 = *(int*)(lVar10 + 176);
                if (arg6) {
                    dVar21 = (double)iVar8 * 1.5;
                LAB_10023226a:
                    iVar8 = (int)dVar21;
                } else if (arg3 == 2) {
                    dVar21 = (double)iVar8 * 1.04;
                    goto LAB_10023226a;
                }
                this_02 = dash3d::Pix3D::GetSinTable();
                this_03 = dash3d::Pix3D::GetCosTable();
                local_f8 = puVar13;
                lVar10 = local_40.operator->();
                piVar11 = (int*)(*this_02)[(long)*(int*)(lVar10 + 180)];
                iVar1 = *piVar11;
                lVar10 = local_40.operator->();
                piVar11 = (int*)(*this_03)[(long)*(int*)(lVar10 + 180)];
                iVar2 = *piVar11;
                plVar15 = (long*)local_e8.operator->();
                (**(void (**)(...))(*plVar15 + 64))(plVar15);
                local_f0 = *local_e8;
                lVar10 = local_40.operator->();
                local_e8._16_4_ = *(uint32_t*)(lVar10 + 184);
                lVar10 = local_40.operator->();
                local_e8._20_4_ = *(uint32_t*)(lVar10 + 188);
                lVar10 = local_40.operator->();
                local_e8._24_4_ = *(uint32_t*)(lVar10 + 180);
                lVar10 = local_40.operator->();
                local_e8._28_4_ = *(uint32_t*)(lVar10 + 192);
                lVar10 = local_e8.operator->();
                iVar3 = *(int*)(lVar10 + 8);
                lVar10 = local_40.operator->();
                iVar4 = *(int*)(lVar10 + 196);
                lVar10 = local_40.operator->();
                (**(void (**)(...))*local_f8)(
                    local_f8, local_f0, 0, local_e8._16_4_, local_e8._20_4_, local_e8._24_4_,
                    (((uint64_t)uVar22 << 32) | (uint32_t)local_e8._28_4_),
                    (((uint64_t)uVar24 << 32) | (uint32_t)(iVar3 / 2 + (iVar1 * iVar8 >> 16) + iVar4)),
                    (iVar8 * iVar2 >> 16) + *(int*)(lVar10 + 196));
                lVar10 = local_40.operator->();
                if (*(int*)(lVar10 + 832) != -1) {
                    uVar14 = *local_78;
                    (**(void (**)(...))(local_a8->field_0 + 176))(local_a8, uVar14, 0, 0);
                }
                if (0 < arg3) {
                    pPVar16 = (Pix32*)local_60.operator->();
                    pPVar16->AddOutline(-16777216);
                }
                if (1 < arg3) {
                    pPVar16 = (Pix32*)local_60.operator->();
                    pPVar16->AddOutline(-1);
                }
                if ((unsigned int)arg4 != 0) {
                    pPVar16 = (Pix32*)local_60.operator->();
                    pPVar16->AddShadow((unsigned int)arg4 | 4278190080);
                }
                pSVar12 = (SharedArray<unsigned int>*)local_60.operator->();
                m_objSpriteToolkit.SetDestination(*pSVar12, 36, 32);
                lVar10 = local_40.operator->();
                if (*(int*)(lVar10 + 732) != -1) {
                    uVar14 = *local_78;
                    (**(void (**)(...))(local_a8->field_0 + 176))(local_a8, uVar14, 0, 0);
                }
                local_a0 = eastl::string();
                if (spriteTextType == 2) {
                joined_r0x0001002324f7:
                    if ((ReturnValue*)str != nullptr) {
                        m_countFont->DrawStringMultiline(str, 0, -1, 36, 32, 16776960, 1, 0, 0, 0, *local_a8);
                    }
                } else if (spriteTextType == 1) {
                    InvNumber(&local_c8, arg2);
                    str = &local_a0;
                    str = &local_c8;
                    goto joined_r0x0001002324f7;
                }
                uVar20 = 0;
                while (true) {
                    if (((Layout*)local_60.operator->())->HeapBeginPtr() <= uVar20)
                        break;
                    pSVar18 = (SharedArray<unsigned int>*)local_60.operator->();
                    puVar19 = (unsigned int*)(*pSVar18)[uVar20];
                    uVar9 = *puVar19;
                    pSVar18 = (SharedArray<unsigned int>*)local_60.operator->();
                    piVar11 = (int*)(*pSVar18)[uVar20];
                    if (*piVar11 != 0) {
                        uVar9 = graphics::ComputeCompositeRGB(uVar9, uVar9 >> 24);
                        pSVar18 = (SharedArray<unsigned int>*)local_60.operator->();
                        puVar19 = (unsigned int*)(*pSVar18)[uVar20];
                        *puVar19 = uVar9 | 4278190080;
                    }
                    uVar20 = uVar20 + 1;
                }
                if (!arg6) {
                    ((LRUHashCache<ObjSprite, 200ul, 211ul, false,
                                   ObjSpriteCacheKey>*)&reinterpret_cast<const uint64_t*>(&g_objStatics)[1204])
                        ->Put(local_60, 1, local_128);
                }
                shared_ptr<FileRSevenDebugPresetProvider, void>(local_60);
            } else {
                lVar10 = local_40.operator->();
                iVar8 = *(int*)(lVar10 + 728);
                new (local_50) eastl::allocator("EASTL basic_string");
                pRVar23 = &local_a0;
                new (pRVar23) eastl::string("", local_50);
                GetSprite(&local_c8, iVar8, 10, 1, 0, 0, true, (eastl::string*)pRVar23);
                pOVar5 = this;
                uVar24 = (uint32_t)((unsigned long)pRVar23 >> 32);
                local_78 = local_c8;
                bVar6 = local_78 == nullptr;
                if (!bVar6)
                    goto LAB_100232141;
                new (pOVar5) shared_ptr();
            }
        LAB_100232610:
            this = this;
        }
    LAB_100232632:
        return this;
    }

    // 0x1002329f0
    auto ObjType::InvNumber(int arg1) {
        basic_ostream<char, std::char_traits<char> _>* pbVar1;
        char* pcVar2;
        basic_ostream<char, std::char_traits<char> _> local_140;
        ReturnValue local_38;

        stringstream local_150;
        if (arg1 < 100000) {
            pbVar1 = std::operator<<(&local_140, "<col=ffff00>");
            pbVar1 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar1, arg1);
            std::operator<<(pbVar1, "</col>");
        } else if (arg1 < 10000000) {
            pbVar1 = std::operator<<(&local_140, "<col=ffffff>");
            pbVar1 =
                (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar1, arg1 / 1000);
            pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pbVar1 = std::operator<<(pbVar1, pcVar2);
            std::operator<<(pbVar1, "</col>");
        } else {
            pbVar1 = std::operator<<(&local_140, "<col=00ff80>");
            pbVar1 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar1,
                                                                                              arg1 / 1000000);
            pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pbVar1 = std::operator<<(pbVar1, pcVar2);
            std::operator<<(pbVar1, "</col>");
        }
        std::stringstream::str(&local_38, &local_150);
        pcVar2 = (char*)std::string::c_str(&local_38);
        auto result(pcVar2);
        std::string::~string(&local_38);
        std::stringstream::~stringstream(&local_150);
        return result;
    }

    // 0x100232ca0
    ObjType* ObjType::GetBaseSprite(const ObjType& objType, int arg2, int arg3, int arg4, int arg5, int arg6) {
        int iVar1;
        int iVar2;
        uint32_t uVar3;
        uint32_t uVar4;
        SharedArray<unsigned int>* sharedArray;
        Pix3D* pix3D;
        SoftwareWorldRenderer* this_00;
        uint64_t* puVar6;
        array<int, _2048ul>* this_01;
        array<int, _2048ul>* this_02;
        int* piVar7;
        long* plVar8;
        long lVar9;
        Pix32* pPVar10;
        int iVar11;
        uint32_t in_register_00000034;
        float fVar12;
        uint64_t uVar13;
        unsigned int in_stack_00000008;
        ReturnValue local_98;
        uint64_t* local_88;
        uint64_t local_80;
        shared_ptr<ObjType> local_78;

        int local_3c = arg3;
        int local_34 = arg4;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        long local_48 = (((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        GetModelLit(&local_78, arg2);
        if (local_78 == nullptr) {
            new (objType) shared_ptr();
        } else {
            make_shared<ObjSprite, int&, int&>(&local_98, (ObjTypeConstants*)&local_3c, (ObjTypeConstants*)&local_34);
            local_58 = local_98;
            sharedArray = (SharedArray<unsigned int>*)local_58.operator->();
            m_objSpriteToolkit.SetDestination(*sharedArray, local_3c, local_34);
            pix3D = (Pix3D*)m_objSpriteToolkit.GetDevCredentialsOutputDirectory();
            this_00 = (SoftwareWorldRenderer*)m_objSpriteToolkit.GetTranslation();
            puVar6 = (uint64_t*)this_00->GetModelLitRenderer();
            pix3D->SetRenderClipping();
            pix3D->SetOrigin((int)pix3D, local_34 / 2);
            pix3D->SetLowDetail(false);
            iVar11 = (int)((double)*(int*)(local_48 + 176) * 1.04);
            if (arg5 != 2) {
                iVar11 = *(int*)(local_48 + 176);
            }
            if ((local_3c != 36) || (local_34 != 32)) {
                uVar13 = eastl::max_alt(36.0 / (float)local_3c, 32.0 / (float)local_34);
                fVar12 = (float)_powf(uVar13, 1064178811);
                iVar11 = (int)((float)iVar11 * fVar12);
            }
            this_01 = dash3d::Pix3D::GetSinTable();
            local_88 = puVar6;
            this_02 = dash3d::Pix3D::GetCosTable();
            iVar1 = *(int*)(local_48 + 180);
            piVar7 = (int*)(*this_01)[(long)iVar1];
            iVar2 = *piVar7;
            piVar7 = (int*)(*this_02)[(long)iVar1];
            iVar1 = *piVar7;
            plVar8 = (long*)local_78.operator->();
            (**(void (**)(...))(*plVar8 + 64))(plVar8);
            local_80 = *local_78;
            local_78._16_4_ = *(uint32_t*)(local_48 + 180);
            uVar3 = *(uint32_t*)(local_48 + 184);
            local_78._20_4_ = *(uint32_t*)(local_48 + 188);
            uVar4 = *(uint32_t*)(local_48 + 192);
            lVar9 = local_78.operator->();
            (**(void (**)(...))*local_88)(local_88, local_80, 0, uVar3, local_78._20_4_, local_78._16_4_, uVar4,
                                          *(int*)(lVar9 + 8) / 2 + (iVar2 * iVar11 >> 16) + *(int*)(local_48 + 196),
                                          (iVar11 * iVar1 >> 16) + *(int*)(local_48 + 196));
            if ((0 < arg5) && (0 < arg6)) {
                iVar11 = arg6;
                do {
                    pPVar10 = (Pix32*)local_58.operator->();
                    pPVar10->AddOutline(-16777216);
                    iVar11 = iVar11 - 1;
                } while (iVar11 != 0);
            }
            if ((1 < arg5) && (0 < arg6)) {
                iVar11 = arg6;
                do {
                    pPVar10 = (Pix32*)local_58.operator->();
                    pPVar10->AddOutline(-1);
                    iVar11 = iVar11 - 1;
                } while (iVar11 != 0);
            }
            if ((in_stack_00000008 != 0) && (0 < arg6)) {
                do {
                    pPVar10 = (Pix32*)local_58.operator->();
                    pPVar10->AddShadow(in_stack_00000008);
                    arg6 = arg6 - 1;
                } while (arg6 != 0);
            }
            objType.shared_ptr<FileRSevenDebugPresetProvider, void>(local_58);
        }
        return objType;
    }

    // 0x1002330e0
    bool ObjType::CheckWearModel(int arg1) {
        unsigned int arg1_00;
        unsigned int arg1_01;
        char cVar2;
        bool cVar3;
        bool bVar5;

        unsigned int* puVar1 = &field_628;
        unsigned int* puVar4 = &field_624;
        if (arg1 == 1) {
            puVar4 = &field_636;
            puVar1 = &field_640;
        }
        if (*puVar4 == 4294967295) {
            bVar5 = true;
        } else {
            arg1_00 = (&field_648)[arg1 == 1];
            arg1_01 = *puVar1;
            cVar2 = m_pModels->RequestDownload(*puVar4, 0);
            if ((arg1_01 != 4294967295) && (cVar3 = m_pModels->RequestDownload(arg1_01, 0), !cVar3)) {
                cVar2 = '\0';
            }
            if ((arg1_00 != 4294967295) && (cVar3 = m_pModels->RequestDownload(arg1_00, 0), !cVar3)) {
                cVar2 = '\0';
            }
            bVar5 = cVar2;
        }
        return bVar5;
    }

    // 0x1002331a0
    auto ObjType::GetWearModelNoCheck(int arg1) {
        uint8_t* puVar1;
        uint8_t* this_00;
        short sVar2;
        unsigned int arg2;
        unsigned int arg2_00;
        uint64_t uVar3;
        long* plVar5;
        short* psVar6;
        unsigned long uVar7;
        long lVar10;
        unsigned long uVar11;
        uint8_t local_c0[40];
        uint8_t local_98[16];
        uint8_t local_88[24];
        eastl local_70;
        uint8_t local_68[32];
        shared_ptr<dash3d::Decor> local_48;

        bool bVar12 = arg1 == 1;
        unsigned int* puVar9 = &field_624;
        if (bVar12) {
            puVar9 = &field_636;
        }
        unsigned int* puVar8 = &field_640;
        if (!bVar12) {
            puVar8 = &field_628;
        }
        if (*puVar9 == 4294967295) {
            auto result;
        } else {
            arg2 = *puVar8;
            arg2_00 = (&field_648)[bVar12];
            local_88._16_8_ = this;
            local_88->Load(*m_pModels, *puVar9, 0, false);
            if (arg2 != 4294967295) {
                local_c0->Load(*m_pModels, arg2, 0, false);
                if (arg2_00 == 4294967295) {
                    new (local_68) shared_ptr(local_88);
                    new ((local_68 + 16)) shared_ptr(local_c0);
                    local_98->destruct<highlight::NpcUID*>();
                    new ((local_c0 + 16))
                        eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>(local_68, *2);
                    lVar10 = 16;
                    do {
                        ((local_68 + lVar10))->~shared_ptr();
                        lVar10 = lVar10 - 16;
                    } while (lVar10 != -16);
                    local_68->Combine(*((local_c0 + 16)));
                    *local_88 = *local_68;
                    ((local_c0 + 16))->~vector();
                } else {
                    local_98->Load(*m_pModels, arg2_00, 0, false);
                    new (local_68) shared_ptr(local_88);
                    new ((local_68 + 16)) shared_ptr(local_c0);
                    local_48 = shared_ptr(local_98);
                    eastl::destruct<highlight::NpcUID*>(&local_70);
                    new ((local_c0 + 16))
                        eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>(local_68, *3);
                    lVar10 = 32;
                    do {
                        ((local_68 + lVar10))->~shared_ptr();
                        lVar10 = lVar10 - 16;
                    } while (lVar10 != -16);
                    local_68->Combine(*((local_c0 + 16)));
                    *local_88 = *local_68;
                    ((local_c0 + 16))->~vector();
                }
            }
            uVar3 = local_88._16_8_;
            if ((arg1 == 0) && (*(unsigned int*)(local_88._16_8_ + 632) != 0)) {
                plVar5 = (long*)(*local_88).operator->();
                (**(void (**)(...))(*plVar5 + 152))(plVar5, 0, *(unsigned int*)(uVar3 + 632), 0);
            }
            if ((arg1 == 1) && (*(unsigned int*)(uVar3 + 644) != 0)) {
                plVar5 = (long*)(*local_88).operator->();
                (**(void (**)(...))(*plVar5 + 152))(plVar5, 0, *(unsigned int*)(uVar3 + 644), 0);
            }
            puVar1 = (uint8_t*)(uVar3 + 80);
            if (!(puVar1->empty())) {
                lVar10 = puVar1->end();
                if (lVar10 != 0) {
                    this_00 = (uint8_t*)(local_88._16_8_ + 104);
                    uVar11 = 0;
                    do {
                        plVar5 = (long*)(*local_88).operator->();
                        psVar6 = (short*)(*puVar1)[uVar11];
                        sVar2 = *psVar6;
                        psVar6 = (short*)(*this_00)[uVar11];
                        (**(void (**)(...))(*plVar5 + 160))(plVar5, (int)sVar2, (int)*psVar6);
                        uVar11 = uVar11 + 1;
                        uVar7 = puVar1->end();
                    } while (uVar11 < uVar7);
                }
            }
            puVar1 = (uint8_t*)(local_88._16_8_ + 128);
            if (!(puVar1->empty())) {
                lVar10 = puVar1->end();
                if (lVar10 != 0) {
                    local_88._16_8_ = local_88._16_8_ + 152;
                    uVar11 = 0;
                    do {
                        plVar5 = (long*)(*local_88).operator->();
                        psVar6 = (short*)(*puVar1)[uVar11];
                        sVar2 = *psVar6;
                        psVar6 = (short*)(*local_88._16_8_)[uVar11];
                        (**(void (**)(...))(*plVar5 + 168))(plVar5, (int)sVar2, (int)*psVar6);
                        uVar11 = uVar11 + 1;
                        uVar7 = puVar1->end();
                    } while (uVar11 < uVar7);
                }
            }
            result.shared_ptr<FileRSevenDebugPresetProvider, void>(*local_88);
        }
        return result;
    }

    // 0x1002336f0
    bool ObjType::CheckHeadModel(int arg1) {
        unsigned int arg1_00;
        char cVar1;
        bool bVar3;

        if ((&field_656)[(arg1 == 1) * 2] == 4294967295) {
            bVar3 = true;
        } else {
            arg1_00 = (&field_660)[(arg1 == 1) * 2];
            cVar1 = m_pModels->RequestDownload((&field_656)[(arg1 == 1) * 2], 0);
            if (arg1_00 != 4294967295) {
                if (m_pModels->RequestDownload(arg1_00, 0) == '\0') {
                    cVar1 = '\0';
                }
            }
            bVar3 = cVar1;
        }
        return bVar3;
    }

    // 0x100233760
    ObjType* ObjType::GetHeadModelNoCheck(int arg1) {
        Array<game::VarValue>* pAVar1;
        short sVar2;
        int arg2;
        long* plVar4;
        short* psVar5;
        unsigned long uVar6;
        int in_EDX;
        long lVar7;
        unsigned long uVar8;
        uint32_t in_register_00000034;
        vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL> local_a8[24];
        uint8_t local_90[24];
        uint8_t local_78[24];
        eastl local_60;
        uint8_t local_58[32];
        long local_38;

        Array<short>* pAVar9 = (Array<short>*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        local_90._16_8_ = this;
        if (*(int*)(pAVar9 + (unsigned long)(in_EDX == 1) * 8 + 656) == -1) {
            new (this) shared_ptr();
        } else {
            arg2 = *(int*)(pAVar9 + (unsigned long)(in_EDX == 1) * 8 + 660);
            local_78->Load(*m_pModels, *(int*)(pAVar9 + (unsigned long)(in_EDX == 1) * 8 + 656), 0, false);
            if (arg2 != -1) {
                local_90->Load(*m_pModels, arg2, 0, false);
                new (local_58) shared_ptr(local_78);
                new ((local_58 + 16)) shared_ptr(local_90);
                eastl::destruct<highlight::NpcUID*>(&local_60);
                new (local_a8) eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>(local_58, *2);
                lVar7 = 16;
                do {
                    ((local_58 + lVar7))->~shared_ptr();
                    lVar7 = lVar7 - 16;
                } while (lVar7 != -16);
                local_58->Combine(*local_a8);
                *local_78 = *local_58;
            }
            pAVar1 = (Array<game::VarValue>*)(pAVar9 + 80);
            local_78._16_8_ = pAVar9;
            if (!(pAVar1->empty())) {
                lVar7 = pAVar1->end();
                if (lVar7 != 0) {
                    pAVar9 = (Array<short>*)(local_78._16_8_ + 104);
                    uVar8 = 0;
                    do {
                        plVar4 = (long*)(*local_78).operator->();
                        psVar5 = (short*)(*pAVar1)[uVar8];
                        sVar2 = *psVar5;
                        psVar5 = (short*)(*pAVar9)[uVar8];
                        (**(void (**)(...))(*plVar4 + 160))(plVar4, (int)sVar2, (int)*psVar5);
                        uVar8 = uVar8 + 1;
                        uVar6 = pAVar1->end();
                    } while (uVar8 < uVar6);
                }
            }
            pAVar1 = (Array<game::VarValue>*)(local_78._16_8_ + 128);
            if (!(pAVar1->empty())) {
                lVar7 = pAVar1->end();
                if (lVar7 != 0) {
                    local_78._16_8_ = local_78._16_8_ + 152;
                    uVar8 = 0;
                    do {
                        plVar4 = (long*)(*local_78).operator->();
                        psVar5 = (short*)(*pAVar1)[uVar8];
                        sVar2 = *psVar5;
                        psVar5 = (short*)(*local_78._16_8_)[uVar8];
                        (**(void (**)(...))(*plVar4 + 168))(plVar4, (int)sVar2, (int)*psVar5);
                        uVar8 = uVar8 + 1;
                        uVar6 = pAVar1->end();
                    } while (uVar8 < uVar6);
                }
            }
            local_90._16_8_->shared_ptr<FileRSevenDebugPresetProvider, void>(*local_78);
        }
        return (ObjType*)local_90._16_8_;
    }

    // 0x100233a70
    auto ObjType::GetParam(int arg1, const eastl::string& str) {
        auto str_00 = ParamTypeHelper::GetParam(&field_768, arg1, str);
        return auto(*str_00);
    }

    // 0x100233aa0
    void ObjType::GetParam(int arg1, int arg2) {
        ParamTypeHelper::GetParam(&field_768, arg1, arg2);
    }

    // 0x100233ac0
    int ObjType::GetShiftClickIOp() {
        uint8_t* this_00;
        uint8_t bVar3;
        eastl::string* pbVar4;

        int iVar5 = -1;
        if (field_844 != -1) {
            this_00 = &field_424;
            if (this_00->empty() == '\0') {
                if ((long)field_844 < 0) {
                    pbVar4 = (eastl::string*)(*this_00)[4];
                    bVar3 = core::stringtools::general::StringTools::EqualsIgnoreCase(
                        *((eastl::string*)&constants::text::drop), *pbVar4);
                    iVar5 = (unsigned int)bVar3 * 5 - 1;
                } else {
                    pbVar4 = (eastl::string*)(*this_00)[(long)field_844];
                    if (*pbVar4 != (*((value_type*)""))) {
                        iVar5 = field_844;
                    }
                }
            }
        }
        return iVar5;
    }

    // 0x100233b60
    void ObjType::ResetCache() {
        g_objStatics.Reset();
        ((LRUHashCache<dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>*)&reinterpret_cast<const uint64_t*>(
             &g_objStatics)[672])
            ->Reset();
        ((LRUHashCache<ObjSprite, 200ul, 211ul, false, ObjSpriteCacheKey>*)&reinterpret_cast<const uint64_t*>(
             &g_objStatics)[1204])
            ->Reset();
    }

    // 0x100233bd0
    void ObjType::ResetSpriteCache() {
        ((LRUHashCache<ObjSprite, 200ul, 211ul, false, ObjSpriteCacheKey>*)&reinterpret_cast<const uint64_t*>(
             &g_objStatics)[1204])
            ->Reset();
    }

    // 0x100233bf0
    void ObjType::SwitchMembers(bool arg1) {
        if (m_memServer != arg1) {
            ResetCache();
            m_memServer = arg1;
        }
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x1002301f0
    shared_ptr_if_not_array<oldscape::configdecoder::ObjType>::type make_shared<oldscape::configdecoder::ObjType>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        ObjType* local_28[2];

        auto arg1 = aligned_alloc(880, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::configdecoder::ObjType>::type result;
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::ObjType>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::configdecoder::ObjType>, int,
                              oldscape::configdecoder::ObjType*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x1002328b0
    shared_ptr_if_not_array<oldscape::configdecoder::ObjSprite>::type
    make_shared<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjType::ObjTypeConstants,
                oldscape::configdecoder::ObjType::ObjTypeConstants>(
        oldscape::configdecoder::ObjType::ObjTypeConstants&& objTypeConstants1,
        oldscape::configdecoder::ObjType::ObjTypeConstants&& objTypeConstants2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        ObjSprite* local_38[2];

        auto arg1 = aligned_alloc(112, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::configdecoder::ObjSprite>::type result;
        } else {
            local_38[0] = placement_new<oldscape::configdecoder::ObjSprite, int&, int&>(
                (void*)((long)arg1 + 32), objTypeConstants1, objTypeConstants2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::configdecoder::ObjSprite>, int,
                              oldscape::configdecoder::ObjSprite*&>(arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

} // namespace jag

namespace jag::oldscape::graphics {
    // 0x100232b80
    unsigned int ComputeCompositeRGB(unsigned int arg1, unsigned int arg2) {
        return (arg1 & 16711935) * arg2 >> 8 & 16711935 | (arg1 & 65280) * arg2 >> 8 & 65280;
    }

} // namespace jag::oldscape::graphics

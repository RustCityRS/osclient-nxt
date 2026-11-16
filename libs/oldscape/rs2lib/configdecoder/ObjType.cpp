// libs/oldscape/rs2lib/configdecoder/ObjType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "ObjType.h"

namespace jag::oldscape::configdecoder {
    // 0x10104a2b0, 8 bytes, __common; zero-initialised
    ObjType::m_pConfigClient;

    // 0x10104a2b8, 8 bytes, __common; zero-initialised
    ObjType::m_pModels;

    // 0x10104a2c0, 4 bytes, __common; zero-initialised
    ObjType::m_memServer;

    // 0x10104a2c4, 4 bytes, __common; zero-initialised
    ObjType::m_numDefinitions;

    // 0x10104a2c8, 8 bytes, __common; zero-initialised
    ObjType::m_countFont;

    // 0x10104a2d0, 6437456 bytes, __common; set at startup by ___cxx_global_var_init.36
    graphics::OffscreenSoftwarePixToolkit ObjType::m_objSpriteToolkit = OffscreenSoftwarePixToolkit();

    // 0x10022fbe0, 64 bytes, placed by class name and debug map
    // ObjType::Init(jagex3::Js5*, jagex3::Js5*, bool, jstring::PixfontGeneric*)
    void ObjType::Init(Js5* param_1, Js5* param_2, bool param_3, PixfontGeneric* param_4) {
        m_pConfigClient = param_1;
        m_pModels = param_2;
        m_memServer = param_3;
        m_numDefinitions = param_1->GetFileIdLimit(10);
        m_countFont = param_4;
    }

    // 0x10022fc20, 1328 bytes, placed by class name and debug map
    // ObjType::List(int)
    ObjType* ObjType::List(int param_1) {
        bool bVar1;
        shared_ptr* psVar2;
        ObjType* pOVar3;
        int* piVar4;
        long lVar5;
        eastl::string* pbVar6;
        eastl::string* pbVar7;
        ulong uVar8;
        basic_string* pbVar9;
        ulong uVar10;
        long lVar11;
        allocator aaStackY_168[128];
        shared_ptr in_stack_ffffffffffffff18;
        shared_ptr in_stack_ffffffffffffff28;
        shared_ptr<RSevenDebugPresetProvider> local_c8[2];
        shared_ptr<dash3d::Decor> asStack_c6[14];
        shared_ptr<RSevenDebugPresetProvider> local_b8[16];
        shared_ptr<RSevenDebugPresetProvider> local_a8[16];
        shared_ptr<RSevenDebugPresetProvider> local_98[16];
        shared_ptr<RSevenDebugPresetProvider> local_88[16];
        shared_ptr<RSevenDebugPresetProvider> local_78[16];
        long local_68;
        shared_ptr local_60[2];
        shared_ptr local_40;

        lVar11 = (long)param_1;
        local_60[0]._0_8_ = lVar11;
        psVar2 =
            (shared_ptr*)LRUHashCache<ObjType, 64ul, 65ul, false, unsigned long long>::Find((ulonglong*)&g_objStatics);
        new (this) shared_ptr<dash3d::Decor>(psVar2);
        bVar1 = operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            new (&local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            m_pConfigClient->GetFile((int)&local_40, 10, (array*)(ulong)(uint)param_1);
            make_shared<ObjType>((jag*)local_60);
            shared_ptr<ObjType>::operator=((shared_ptr<ObjType>*)this, local_60);
            local_60->~shared_ptr();
            bVar1 = operator!=(&local_40, (_func_decltype_nullptr*)0);
            if (bVar1) {
                pOVar3 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this);
                new ((local_c8 + -16)) shared_ptr<dash3d::Decor>(&local_40);
                Decode(pOVar3, in_stack_ffffffffffffff18);
                (local_c8 + -16)->~shared_ptr();
                piVar4 = (int*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this);
                *piVar4 = param_1;
            }
            pOVar3 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this);
            PostDecode(pOVar3);
            lVar5 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this);
            if (*(int*)(lVar5 + 732) != -1) {
                pOVar3 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this);
                lVar5 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this);
                List((ObjType*)local_c8, *(int*)(lVar5 + 732));
                lVar5 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this);
                List((ObjType*)local_b8, *(int*)(lVar5 + 728));
                GenCert(pOVar3, in_stack_ffffffffffffff18, in_stack_ffffffffffffff28);
                local_b8->~shared_ptr();
                local_c8->~shared_ptr();
            }
            lVar5 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this);
            if (*(int*)(lVar5 + 832) != -1) {
                pOVar3 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this);
                lVar5 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this);
                List((ObjType*)local_a8, *(int*)(lVar5 + 832));
                lVar5 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this);
                List((ObjType*)local_98, *(int*)(lVar5 + 828));
                GenBought(pOVar3, in_stack_ffffffffffffff18, in_stack_ffffffffffffff28);
                local_98->~shared_ptr();
                local_a8->~shared_ptr();
            }
            lVar5 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this);
            if (*(int*)(lVar5 + 840) != -1) {
                pOVar3 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this);
                lVar5 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this);
                List((ObjType*)local_88, *(int*)(lVar5 + 840));
                lVar5 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this);
                List((ObjType*)local_78, *(int*)(lVar5 + 836));
                GenPlaceholder(pOVar3, in_stack_ffffffffffffff18, in_stack_ffffffffffffff28);
                local_78->~shared_ptr();
                local_88->~shared_ptr();
            }
            if ((m_memServer == '\0') &&
                (lVar5 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this), *(char*)(lVar5 + 220) != '\0')) {
                lVar5 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this);
                if ((*(int*)(lVar5 + 732) == -1) &&
                    ((lVar5 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this),
                      *(int*)(lVar5 + 832) == -1 &&
                          (lVar5 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this),
                           *(int*)(lVar5 + 840) == -1)))) {
                    lVar5 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this);
                    eastl::string::operator+=((eastl::string*)(lVar5 + 8),
                                              (basic_string*)&constants::text::members_object_suffix);
                }
                lVar5 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this);
                *(undefined1*)(lVar5 + 825) = 0;
                lVar5 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this);
                ((lVar5 + 224))->clear();
                lVar5 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this);
                pbVar6 = (eastl::string*)((lVar5 + 224))->HeapBeginPtr();
                pbVar7 = (eastl::string*)((lVar5 + 224))->end();
                for (; pbVar6 != pbVar7; pbVar6 = pbVar6 + 32) {
                    eastl::string::assign(pbVar6, "");
                }
                uVar10 = 0;
                local_68 = lVar11;
                while (true) {
                    lVar11 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this);
                    uVar8 = ((lVar11 + 424))->size();
                    if (uVar8 <= uVar10)
                        break;
                    if (uVar10 == 4) {
                        lVar11 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this);
                        pbVar9 = (basic_string*)eastl::vector<
                            eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true,
                                                                                 eastl::allocator>>*)(lVar11 + 424),
                            4);
                        new (local_60) eastl::string(pbVar9);
                    } else {
                        eastl::allocator::allocator(aaStackY_168 + 136, "EASTL basic_string");
                        new (local_60) eastl::string("", aaStackY_168 + 136);
                    }
                    lVar11 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this);
                    pbVar6 = (eastl::string*)eastl::vector<
                        eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<eastl::string,
                                eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)(lVar11 +
                                                                                                              424),
                        uVar10);
                    eastl::string::operator=(pbVar6, (basic_string*)local_60);
                    local_60->~basic_string();
                    uVar10 = uVar10 + 1;
                }
                lVar5 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this);
                lVar11 = local_68;
                *(undefined4*)(lVar5 + 844) = 4294967294;
                lVar5 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this);
                *(undefined4*)(lVar5 + 756) = 0;
            }
            local_60[0]._0_8_ = lVar11;
            g_objStatics.Put(this, 1, local_60);
            local_40.~shared_ptr();
        }
        return this;
    }

    // 0x100230280, 144 bytes, placed by class name and debug map
    // ObjType::Decode(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator> > >)
    void ObjType::Decode(shared_ptr param_1) {
        shared_ptr<dash3d::Decor>* this_00;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* pPVar1;
        char cVar2;
        shared_ptr* in_RSI;
        shared_ptr<dash3d::Decor> asStackY_b8[128];
        shared_ptr in_stack_ffffffffffffffc8;

        pPVar1 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                     shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                         (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)in_RSI);
        cVar2 = pPVar1->g1();
        if (cVar2 != '\0') {
            this_00 = asStackY_b8 + 128;
            do {
                shared_ptr<dash3d::Decor>::shared_ptr(this_00, in_RSI);
                Decode(this, in_stack_ffffffffffffffc8, (int)this_00);
                this_00->~shared_ptr();
                pPVar1 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                             shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                 (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)in_RSI);
                cVar2 = pPVar1->g1();
            } while (cVar2 != '\0');
        }
    }

    // 0x100230310, 32 bytes, placed by class name and debug map
    // ObjType::PostDecode()
    void ObjType::PostDecode() {
        if (field_200 == 1) {
            field_760 = 0;
        }
    }

    // 0x100230330, 368 bytes, placed by class name and debug map
    // ObjType::GenCert(shared_ptr<ObjType>, shared_ptr<ObjType>)
    void ObjType::GenCert(shared_ptr param_1, shared_ptr param_2) {
        long lVar1;
        shared_ptr<ObjType>* in_RDX;
        shared_ptr<ObjType>* in_RSI;

        lVar1 = shared_ptr<ObjType>::operator->(in_RSI);
        field_4 = *(uint*)(lVar1 + 4);
        lVar1 = shared_ptr<ObjType>::operator->(in_RSI);
        field_176 = *(uint*)(lVar1 + 176);
        lVar1 = shared_ptr<ObjType>::operator->(in_RSI);
        field_180 = *(uint*)(lVar1 + 180);
        lVar1 = shared_ptr<ObjType>::operator->(in_RSI);
        field_184 = *(uint*)(lVar1 + 184);
        lVar1 = shared_ptr<ObjType>::operator->(in_RSI);
        field_188 = *(uint*)(lVar1 + 188);
        lVar1 = shared_ptr<ObjType>::operator->(in_RSI);
        field_192 = *(uint*)(lVar1 + 192);
        lVar1 = shared_ptr<ObjType>::operator->(in_RSI);
        field_196 = *(uint*)(lVar1 + 196);
        lVar1 = shared_ptr<ObjType>::operator->(in_RSI);
        Array<short, eastl::allocator>::operator=((Array<short, eastl::allocator>*)&field_80, (Array*)(lVar1 + 80));
        lVar1 = shared_ptr<ObjType>::operator->(in_RSI);
        Array<short, eastl::allocator>::operator=((Array<short, eastl::allocator>*)&field_104, (Array*)(lVar1 + 104));
        lVar1 = shared_ptr<ObjType>::operator->(in_RSI);
        Array<short, eastl::allocator>::operator=((Array<short, eastl::allocator>*)&field_128, (Array*)(lVar1 + 128));
        lVar1 = shared_ptr<ObjType>::operator->(in_RSI);
        Array<short, eastl::allocator>::operator=((Array<short, eastl::allocator>*)&field_152, (Array*)(lVar1 + 152));
        lVar1 = shared_ptr<ObjType>::operator->(in_RDX);
        eastl::string::operator=((eastl::string*)&field_8, (basic_string*)(lVar1 + 8));
        lVar1 = shared_ptr<ObjType>::operator->(in_RDX);
        field_220 = *(undefined1*)(lVar1 + 220);
        lVar1 = shared_ptr<ObjType>::operator->(in_RDX);
        field_204 = *(undefined4*)(lVar1 + 204);
        lVar1 = shared_ptr<ObjType>::operator->(in_RDX);
        eastl::string::operator=((eastl::string*)&field_40, (basic_string*)(lVar1 + 40));
        field_200 = 1;
    }

    // 0x1002304a0, 816 bytes, placed by class name and debug map
    // ObjType::GenBought(shared_ptr<ObjType>, shared_ptr<ObjType>)
    void ObjType::GenBought(shared_ptr param_1, shared_ptr param_2) {
        undefined1* this_00;
        char cVar1;
        long lVar2;
        shared_ptr<ObjType>* in_RDX;
        ulong uVar3;
        shared_ptr<ObjType>* in_RSI;

        lVar2 = shared_ptr<ObjType>::operator->(in_RSI);
        field_4 = *(uint*)(lVar2 + 4);
        lVar2 = shared_ptr<ObjType>::operator->(in_RSI);
        field_176 = *(uint*)(lVar2 + 176);
        lVar2 = shared_ptr<ObjType>::operator->(in_RSI);
        field_180 = *(uint*)(lVar2 + 180);
        lVar2 = shared_ptr<ObjType>::operator->(in_RSI);
        field_184 = *(uint*)(lVar2 + 184);
        lVar2 = shared_ptr<ObjType>::operator->(in_RSI);
        field_188 = *(uint*)(lVar2 + 188);
        lVar2 = shared_ptr<ObjType>::operator->(in_RSI);
        field_192 = *(uint*)(lVar2 + 192);
        lVar2 = shared_ptr<ObjType>::operator->(in_RSI);
        field_196 = *(uint*)(lVar2 + 196);
        lVar2 = shared_ptr<ObjType>::operator->(in_RDX);
        Array<short, eastl::allocator>::operator=((Array<short, eastl::allocator>*)&field_80, (Array*)(lVar2 + 80));
        lVar2 = shared_ptr<ObjType>::operator->(in_RDX);
        Array<short, eastl::allocator>::operator=((Array<short, eastl::allocator>*)&field_104, (Array*)(lVar2 + 104));
        lVar2 = shared_ptr<ObjType>::operator->(in_RDX);
        Array<short, eastl::allocator>::operator=((Array<short, eastl::allocator>*)&field_128, (Array*)(lVar2 + 128));
        lVar2 = shared_ptr<ObjType>::operator->(in_RDX);
        Array<short, eastl::allocator>::operator=((Array<short, eastl::allocator>*)&field_152, (Array*)(lVar2 + 152));
        lVar2 = shared_ptr<ObjType>::operator->(in_RDX);
        eastl::string::operator=((eastl::string*)&field_8, (basic_string*)(lVar2 + 8));
        lVar2 = shared_ptr<ObjType>::operator->(in_RDX);
        field_220 = *(undefined1*)(lVar2 + 220);
        lVar2 = shared_ptr<ObjType>::operator->(in_RDX);
        field_200 = *(undefined4*)(lVar2 + 200);
        lVar2 = shared_ptr<ObjType>::operator->(in_RDX);
        eastl::string::operator=((eastl::string*)&field_40, (basic_string*)(lVar2 + 40));
        lVar2 = shared_ptr<ObjType>::operator->(in_RDX);
        field_624 = *(uint*)(lVar2 + 624);
        lVar2 = shared_ptr<ObjType>::operator->(in_RDX);
        field_628 = *(uint*)(lVar2 + 628);
        lVar2 = shared_ptr<ObjType>::operator->(in_RDX);
        field_648 = *(uint*)(lVar2 + 648);
        lVar2 = shared_ptr<ObjType>::operator->(in_RDX);
        field_636 = *(uint*)(lVar2 + 636);
        lVar2 = shared_ptr<ObjType>::operator->(in_RDX);
        field_640 = *(uint*)(lVar2 + 640);
        lVar2 = shared_ptr<ObjType>::operator->(in_RDX);
        field_652 = *(uint*)(lVar2 + 652);
        lVar2 = shared_ptr<ObjType>::operator->(in_RDX);
        field_208 = *(uint*)(lVar2 + 208);
        lVar2 = shared_ptr<ObjType>::operator->(in_RDX);
        field_212 = *(uint*)(lVar2 + 212);
        lVar2 = shared_ptr<ObjType>::operator->(in_RDX);
        field_216 = *(uint*)(lVar2 + 216);
        lVar2 = shared_ptr<ObjType>::operator->(in_RDX);
        field_656 = *(uint*)(lVar2 + 656);
        lVar2 = shared_ptr<ObjType>::operator->(in_RDX);
        field_660 = *(uint*)(lVar2 + 660);
        lVar2 = shared_ptr<ObjType>::operator->(in_RDX);
        field_664 = *(uint*)(lVar2 + 664);
        lVar2 = shared_ptr<ObjType>::operator->(in_RDX);
        field_668 = *(uint*)(lVar2 + 668);
        lVar2 = shared_ptr<ObjType>::operator->(in_RDX);
        field_756 = *(uint*)(lVar2 + 756);
        lVar2 = shared_ptr<ObjType>::operator->(in_RDX);
        eastl::fixed_vector<eastl::string, 5ul, true, eastl::allocator>::operator=(
            (fixed_vector<eastl::string, 5ul, true, eastl::allocator>*)&field_224, (fixed_vector*)(lVar2 + 224));
        lVar2 = shared_ptr<ObjType>::operator->(in_RDX);
        field_760 = *(int*)(lVar2 + 760);
        this_00 = &field_424;
        this_00->clear();
        lVar2 = shared_ptr<ObjType>::operator->(in_RDX);
        cVar1 = ((lVar2 + 424))->empty();
        if (cVar1 == '\0') {
            uVar3 = 0;
            do {
                lVar2 = shared_ptr<ObjType>::operator->(in_RDX);
                eastl::vector<eastl::string,
                              eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<eastl::string,
                            eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)(lVar2 + 424),
                    uVar3);
                eastl::fixed_vector<eastl::string, 5ul, true, eastl::allocator>::push_back((basic_string*)this_00);
                uVar3 = uVar3 + 1;
            } while (uVar3 != 4);
        }
        eastl::fixed_vector<eastl::string, 5ul, true, eastl::allocator>::push_back((basic_string*)this_00);
        field_204 = 0;
    }

    // 0x1002307d0, 352 bytes, placed by class name and debug map
    // ObjType::GenPlaceholder(shared_ptr<ObjType>, shared_ptr<ObjType>)
    void ObjType::GenPlaceholder(shared_ptr param_1, shared_ptr param_2) {
        long lVar1;
        shared_ptr<ObjType>* in_RDX;
        shared_ptr<ObjType>* in_RSI;

        lVar1 = shared_ptr<ObjType>::operator->(in_RSI);
        field_4 = *(uint*)(lVar1 + 4);
        lVar1 = shared_ptr<ObjType>::operator->(in_RSI);
        field_176 = *(uint*)(lVar1 + 176);
        lVar1 = shared_ptr<ObjType>::operator->(in_RSI);
        field_180 = *(uint*)(lVar1 + 180);
        lVar1 = shared_ptr<ObjType>::operator->(in_RSI);
        field_184 = *(uint*)(lVar1 + 184);
        lVar1 = shared_ptr<ObjType>::operator->(in_RSI);
        field_188 = *(uint*)(lVar1 + 188);
        lVar1 = shared_ptr<ObjType>::operator->(in_RSI);
        field_192 = *(uint*)(lVar1 + 192);
        lVar1 = shared_ptr<ObjType>::operator->(in_RSI);
        field_196 = *(uint*)(lVar1 + 196);
        lVar1 = shared_ptr<ObjType>::operator->(in_RSI);
        Array<short, eastl::allocator>::operator=((Array<short, eastl::allocator>*)&field_80, (Array*)(lVar1 + 80));
        lVar1 = shared_ptr<ObjType>::operator->(in_RSI);
        Array<short, eastl::allocator>::operator=((Array<short, eastl::allocator>*)&field_104, (Array*)(lVar1 + 104));
        lVar1 = shared_ptr<ObjType>::operator->(in_RSI);
        Array<short, eastl::allocator>::operator=((Array<short, eastl::allocator>*)&field_128, (Array*)(lVar1 + 128));
        lVar1 = shared_ptr<ObjType>::operator->(in_RSI);
        Array<short, eastl::allocator>::operator=((Array<short, eastl::allocator>*)&field_152, (Array*)(lVar1 + 152));
        lVar1 = shared_ptr<ObjType>::operator->(in_RSI);
        field_200 = *(undefined4*)(lVar1 + 200);
        lVar1 = shared_ptr<ObjType>::operator->(in_RDX);
        eastl::string::operator=((eastl::string*)&field_8, (basic_string*)(lVar1 + 8));
        lVar1 = shared_ptr<ObjType>::operator->(in_RDX);
        eastl::string::operator=((eastl::string*)&field_40, (basic_string*)(lVar1 + 40));
        field_204 = 0;
        field_220 = 0;
        field_824 = 0;
    }

    // 0x100230a30, 2768 bytes, placed by class name and debug map
    // ObjType::Decode(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator> > >, int)
    void ObjType::Decode(shared_ptr param_1, int param_2) {
        bool bVar1;
        char cVar2;
        byte bVar3;
        undefined2 uVar4;
        ushort uVar5;
        short sVar6;
        undefined4 uVar7;
        eastl::string* pbVar8;
        basic_string* pbVar9;
        undefined2* puVar10;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* pPVar11;
        uint* puVar12;
        PacketJ* pPVar13;
        undefined8 uVar14;
        int in_EDX;
        ulong uVar15;
        ulong uVar16;
        undefined4 in_register_00000034;
        shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>* this_00;
        uint uVar17;
        undefined1* puVar18;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_58[32];
        Array<short, eastl::allocator>* local_38;

        this_00 = (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)CONCAT44(in_register_00000034, param_2);
        switch (in_EDX) {
        case 1:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            uVar5 = pPVar11->g2();
            field_4 = (uint)uVar5;
            break;
        case 2:
            bVar1 = (bool)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                local_58, bVar1);
            eastl::string::operator=((eastl::string*)&field_8, (basic_string*)local_58);
            goto LAB_100230cae;
        default:
            if (in_EDX - 30U < 5) {
                bVar1 = (bool)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                    local_58, bVar1);
                puVar18 = &field_224;
                uVar15 = (ulong)(in_EDX - 30U);
                pbVar8 = (eastl::string*)eastl::vector<
                    eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)
                        puVar18,
                    uVar15);
                eastl::string::operator=(pbVar8, (basic_string*)local_58);
                local_58->~basic_string();
                pbVar9 = (basic_string*)eastl::vector<
                    eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)
                        puVar18,
                    uVar15);
                cVar2 = core::stringtools::general::StringTools::EqualsIgnoreCase(
                    pbVar9, (basic_string*)&constants::text::hidden);
                if (cVar2 == '\0') {
                    return;
                }
                pbVar8 = (eastl::string*)eastl::vector<
                    eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)
                        puVar18,
                    uVar15);
                eastl::string::assign(pbVar8, "");
                return;
            }
            if (4 < in_EDX - 35U) {
                switch (in_EDX) {
                case 40:
                    goto switchD_100230ddc_caseD_28;
                case 41:
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    bVar3 = pPVar11->g1();
                    local_38 = (Array<short, eastl::allocator>*)&field_128;
                    uVar15 = (ulong)bVar3;
                    local_38->set_max_size(uVar15, 5);
                    (&field_152, uVar15, 5)->set_max_size();
                    if (bVar3 == 0) {
                        return;
                    }
                    uVar16 = 0;
                    do {
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                      shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                        uVar4 = pPVar11->g2();
                        puVar10 = (undefined2*)Array<short, eastl::allocator>::operator[](local_38, uVar16);
                        *puVar10 = uVar4;
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                      shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                        uVar4 = pPVar11->g2();
                        puVar10 = (undefined2*)Array<short, eastl::allocator>::operator[](
                            (Array<short, eastl::allocator>*)&field_152, uVar16);
                        *puVar10 = uVar4;
                        uVar16 = uVar16 + 1;
                    } while (uVar15 != uVar16);
                    return;
                case 42:
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    cVar2 = pPVar11->g1s();
                    field_844 = (int)cVar2;
                    return;
                default:
                    uVar17 = in_EDX - 100;
                    if (uVar17 < 10) {
                        puVar18 = &field_680;
                        cVar2 = puVar18->empty();
                        if (cVar2 != '\0') {
                            puVar18->set_max_size(10, 1);
                            (&field_704, 10, 1)->set_max_size();
                        }
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                      shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                        uVar5 = pPVar11->g2();
                        puVar12 = (uint*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)puVar18, (ulong)uVar17);
                        *puVar12 = (uint)uVar5;
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                      shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                        uVar5 = pPVar11->g2();
                        puVar12 = (uint*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&field_704, (ulong)uVar17);
                        *puVar12 = (uint)uVar5;
                        return;
                    }
                    switch (in_EDX) {
                    case 110:
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                      shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                        uVar5 = pPVar11->g2();
                        field_736 = (uint)uVar5;
                        return;
                    case 111:
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                      shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                        uVar5 = pPVar11->g2();
                        field_740 = (uint)uVar5;
                        return;
                    case 112:
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                      shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                        uVar5 = pPVar11->g2();
                        field_744 = (uint)uVar5;
                        return;
                    case 113:
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                      shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                        cVar2 = pPVar11->g1s();
                        field_748 = (int)cVar2;
                        return;
                    case 114:
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                      shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                        cVar2 = pPVar11->g1s();
                        field_752 = cVar2 * 5;
                        return;
                    case 115:
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                      shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                        bVar3 = pPVar11->g1();
                        field_756 = (uint)bVar3;
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
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                      shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                        uVar5 = pPVar11->g2();
                        field_828 = (uint)uVar5;
                        return;
                    case 140:
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                      shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                        uVar5 = pPVar11->g2();
                        field_832 = (uint)uVar5;
                        return;
                    case 148:
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                      shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                        uVar5 = pPVar11->g2();
                        field_836 = (uint)uVar5;
                        return;
                    case 149:
                        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                      shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                        uVar5 = pPVar11->g2();
                        field_840 = (uint)uVar5;
                        return;
                    default:
                        if (in_EDX == 249) {
                            pPVar13 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                                this_00);
                            ParamTypeHelper::UnpackClientParams(pPVar13, (hash_map*)&field_768);
                            return;
                        }
                    switchD_10023114d_caseD_74:
                        uVar14 = logger::default_logger();
                        logger::Logger::Log(uVar14, 0, 8,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "oldscape/rs2lib/configdecoder/ObjType.cpp",
                                            435, "Error unrecognised .obj config code: %i");
                        return;
                    }
                case 65:
                    field_824 = 257;
                    return;
                case 75:
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    sVar6 = pPVar11->g2s();
                    field_760 = (int)sVar6;
                    return;
                case 78:
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    uVar5 = pPVar11->g2();
                    field_648 = (uint)uVar5;
                    return;
                case 79:
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    uVar5 = pPVar11->g2();
                    field_652 = (uint)uVar5;
                    return;
                case 90:
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    uVar5 = pPVar11->g2();
                    field_656 = (uint)uVar5;
                    return;
                case 91:
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    uVar5 = pPVar11->g2();
                    field_664 = (uint)uVar5;
                    return;
                case 92:
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    uVar5 = pPVar11->g2();
                    field_660 = (uint)uVar5;
                    return;
                case 93:
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    uVar5 = pPVar11->g2();
                    field_668 = (uint)uVar5;
                    return;
                case 94:
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    uVar5 = pPVar11->g2();
                    field_672 = (uint)uVar5;
                    return;
                case 95:
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    uVar5 = pPVar11->g2();
                    field_188 = (uint)uVar5;
                    return;
                case 97:
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    uVar5 = pPVar11->g2();
                    field_728 = (uint)uVar5;
                    return;
                case 98:
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
                    uVar5 = pPVar11->g2();
                    field_732 = (uint)uVar5;
                    return;
                }
            }
            bVar1 = (bool)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                local_58, bVar1);
            pbVar8 = (eastl::string*)eastl::vector<
                eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<eastl::string,
                               eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)&field_424,
                       (ulong)(in_EDX - 35U));
            eastl::string::operator=(pbVar8, (basic_string*)local_58);
            goto LAB_100230cae;
        case 4:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            uVar5 = pPVar11->g2();
            field_176 = (uint)uVar5;
            break;
        case 5:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            uVar5 = pPVar11->g2();
            field_180 = (uint)uVar5;
            break;
        case 6:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            uVar5 = pPVar11->g2();
            field_184 = (uint)uVar5;
            break;
        case 7:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            uVar5 = pPVar11->g2();
            field_192 = (uint)uVar5;
            if ((short)uVar5 < 0) {
                field_192 = uVar5 | 4294901760;
            }
            break;
        case 8:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            uVar5 = pPVar11->g2();
            field_196 = (uint)uVar5;
            if ((short)uVar5 < 0) {
                field_196 = uVar5 | 4294901760;
            }
            break;
        case 9:
            bVar1 = (bool)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                local_58, bVar1);
            eastl::string::operator=((eastl::string*)&field_40, (basic_string*)local_58);
        LAB_100230cae:
            local_58->~basic_string();
            break;
        case 11:
            field_200 = 1;
            break;
        case 12:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            uVar7 = pPVar11->g4();
            field_204 = uVar7;
            break;
        case 13:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            bVar3 = pPVar11->g1();
            field_208 = (uint)bVar3;
            break;
        case 14:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            bVar3 = pPVar11->g1();
            field_212 = (uint)bVar3;
            break;
        case 16:
            field_220 = 1;
            break;
        case 23:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            uVar5 = pPVar11->g2();
            field_624 = (uint)uVar5;
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            bVar3 = pPVar11->g1();
            field_632 = (uint)bVar3;
            break;
        case 24:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            uVar5 = pPVar11->g2();
            field_628 = (uint)uVar5;
            break;
        case 25:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            uVar5 = pPVar11->g2();
            field_636 = (uint)uVar5;
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            bVar3 = pPVar11->g1();
            field_644 = (uint)bVar3;
            break;
        case 26:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            uVar5 = pPVar11->g2();
            field_640 = (uint)uVar5;
            break;
        case 27:
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            bVar3 = pPVar11->g1();
            field_216 = (uint)bVar3;
        }
        return;
    switchD_100230ddc_caseD_28:
        pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                      shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
        bVar3 = pPVar11->g1();
        local_38 = (Array<short, eastl::allocator>*)&field_80;
        uVar15 = (ulong)bVar3;
        local_38->set_max_size(uVar15, 5);
        (&field_104, uVar15, 5)->set_max_size();
        if (bVar3 == 0) {
            return;
        }
        uVar16 = 0;
        do {
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            uVar4 = pPVar11->g2();
            puVar10 = (undefined2*)Array<short, eastl::allocator>::operator[](local_38, uVar16);
            *puVar10 = uVar4;
            pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(this_00);
            uVar4 = pPVar11->g2();
            puVar10 = (undefined2*)Array<short, eastl::allocator>::operator[](
                (Array<short, eastl::allocator>*)&field_104, uVar16);
            *puVar10 = uVar4;
            uVar16 = uVar16 + 1;
        } while (uVar15 != uVar16);
    }

    // 0x100231560, 720 bytes, placed by class name and debug map
    // ObjType::GetModelUnlit(int)
    ObjType* ObjType::GetModelUnlit(int param_1) {
        Array<short, eastl::allocator>* this_00;
        Array<game::VarValue, eastl::allocator>* pAVar1;
        Array<int, eastl::allocator>* this_01;
        short sVar2;
        char cVar3;
        int iVar5;
        int* piVar6;
        long* plVar7;
        long lVar8;
        short* psVar9;
        ulong uVar10;
        int in_EDX;
        undefined4 in_register_00000034;
        ulong uVar11;
        shared_ptr local_48;
        Array<short, eastl::allocator>* local_38;

        local_38 = (Array<short, eastl::allocator>*)CONCAT44(in_register_00000034, param_1);
        pAVar1 = (Array<game::VarValue, eastl::allocator>*)(local_38 + 680);
        cVar3 = pAVar1->empty();
        if ((cVar3 == '\0') && (1 < in_EDX)) {
            this_01 = (Array<int, eastl::allocator>*)(local_38 + 704);
            iVar5 = -1;
            uVar11 = 0;
            do {
                piVar6 = (int*)Array<int, eastl::allocator>::operator[](this_01, uVar11);
                if ((*piVar6 <= in_EDX) &&
                    (piVar6 = (int*)Array<int, eastl::allocator>::operator[](this_01, uVar11), *piVar6 != 0)) {
                    piVar6 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pAVar1, uVar11);
                    iVar5 = *piVar6;
                }
                uVar11 = uVar11 + 1;
            } while (uVar11 != 10);
            if (iVar5 != -1) {
                List((ObjType*)&local_48, iVar5);
                iVar5 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)&local_48);
                GetModelUnlit(this, iVar5);
                local_48.~shared_ptr();
                return this;
            }
        }
        local_48.Load(m_pModels, *(int*)(local_38 + 4), 0, false);
        if (operator==(&local_48, (_func_decltype_nullptr*)0)) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            if (((*(int*)(local_38 + 736) != 128) || (*(int*)(local_38 + 740) != 128)) ||
                (*(int*)(local_38 + 744) != 128)) {
                plVar7 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->((shared_ptr<dash3d::ModelUnlit>*)&local_48);
                (**(code**)(*plVar7 + 184))(plVar7, *(undefined4*)(local_38 + 736), *(undefined4*)(local_38 + 740),
                                            *(undefined4*)(local_38 + 744));
            }
            pAVar1 = (Array<game::VarValue, eastl::allocator>*)(local_38 + 80);
            cVar3 = pAVar1->empty();
            if ((cVar3 == '\0') && (lVar8 = pAVar1->end(), lVar8 != 0)) {
                this_00 = local_38 + 104;
                uVar11 = 0;
                do {
                    plVar7 =
                        (long*)shared_ptr<dash3d::ModelUnlit>::operator->((shared_ptr<dash3d::ModelUnlit>*)&local_48);
                    psVar9 = (short*)Array<short, eastl::allocator>::operator[]((Array<short, eastl::allocator>*)pAVar1,
                                                                                uVar11);
                    sVar2 = *psVar9;
                    psVar9 = (short*)Array<short, eastl::allocator>::operator[](this_00, uVar11);
                    (**(code**)(*plVar7 + 160))(plVar7, (int)sVar2, (int)*psVar9);
                    uVar11 = uVar11 + 1;
                    uVar10 = pAVar1->end();
                } while (uVar11 < uVar10);
            }
            pAVar1 = (Array<game::VarValue, eastl::allocator>*)(local_38 + 128);
            cVar3 = pAVar1->empty();
            if ((cVar3 == '\0') && (lVar8 = pAVar1->end(), lVar8 != 0)) {
                local_38 = local_38 + 152;
                uVar11 = 0;
                do {
                    plVar7 =
                        (long*)shared_ptr<dash3d::ModelUnlit>::operator->((shared_ptr<dash3d::ModelUnlit>*)&local_48);
                    psVar9 = (short*)Array<short, eastl::allocator>::operator[]((Array<short, eastl::allocator>*)pAVar1,
                                                                                uVar11);
                    sVar2 = *psVar9;
                    psVar9 = (short*)Array<short, eastl::allocator>::operator[](local_38, uVar11);
                    (**(code**)(*plVar7 + 168))(plVar7, (int)sVar2, (int)*psVar9);
                    uVar11 = uVar11 + 1;
                    uVar10 = pAVar1->end();
                } while (uVar11 < uVar10);
            }
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)this, &local_48);
        }
        local_48.~shared_ptr();
        return this;
    }

    // 0x100231830, 976 bytes, placed by class name and debug map
    // ObjType::GetModelLit(int) const
    ObjType* ObjType::GetModelLit(int param_1) {
        Array<short, eastl::allocator>* pAVar1;
        Array<game::VarValue, eastl::allocator>* pAVar2;
        Array<int, eastl::allocator>* this_00;
        short sVar3;
        undefined8 uVar4;
        char cVar5;
        bool bVar6;
        int iVar7;
        int* piVar8;
        shared_ptr* psVar9;
        long* plVar10;
        long lVar11;
        short* psVar12;
        ulong uVar13;
        int in_EDX;
        ObjType* this_01;
        undefined4 in_register_00000034;
        ulong uVar14;
        shared_ptr local_78;
        ulong local_68;
        undefined1 local_60[24];
        shared_ptr local_48;
        int* local_38;

        local_38 = (int*)CONCAT44(in_register_00000034, param_1);
        pAVar2 = (Array<game::VarValue, eastl::allocator>*)(local_38 + 170);
        local_60._16_8_ = this;
        cVar5 = pAVar2->empty();
        if ((cVar5 == '\0') && (1 < in_EDX)) {
            this_00 = (Array<int, eastl::allocator>*)(local_38 + 176);
            iVar7 = -1;
            uVar14 = 0;
            do {
                piVar8 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar14);
                if ((*piVar8 <= in_EDX) &&
                    (piVar8 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar14), *piVar8 != 0)) {
                    piVar8 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pAVar2, uVar14);
                    iVar7 = *piVar8;
                }
                uVar14 = uVar14 + 1;
            } while (uVar14 != 10);
            if (iVar7 != -1) {
                List((ObjType*)&local_48, iVar7);
                iVar7 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)&local_48);
                uVar4 = local_60._16_8_;
                GetModelLit((ObjType*)local_60._16_8_, iVar7);
                local_48.~shared_ptr();
                return (ObjType*)uVar4;
            }
        }
        piVar8 = local_38;
        local_68 = (ulong)*local_38;
        if (dash3d::g_usingRSeven != '\0') {
            local_68 = local_68 | 4294967296;
        }
        psVar9 = (shared_ptr*)LRUHashCache<dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>::Find(
            (ulonglong*)&DAT_101041348);
        new (&local_48) shared_ptr<dash3d::Decor>(psVar9);
        bVar6 = operator!=(&local_48, (_func_decltype_nullptr*)0);
        this_01 = (ObjType*)local_60._16_8_;
        if (bVar6) {
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)local_60._16_8_, &local_48);
        } else {
            local_60->Load(m_pModels, piVar8[1], 0, false);
            bVar6 = operator==((shared_ptr*)local_60, (_func_decltype_nullptr*)0);
            if (bVar6) {
                new (this_01) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            } else {
                if (((piVar8[184] != 128) || (piVar8[185] != 128)) || (piVar8[186] != 128)) {
                    plVar10 =
                        (long*)shared_ptr<dash3d::ModelUnlit>::operator->((shared_ptr<dash3d::ModelUnlit>*)local_60);
                    (**(code**)(*plVar10 + 184))(plVar10, piVar8[184], piVar8[185], piVar8[186]);
                }
                pAVar2 = (Array<game::VarValue, eastl::allocator>*)(piVar8 + 20);
                cVar5 = pAVar2->empty();
                if ((cVar5 == '\0') && (lVar11 = pAVar2->end(), lVar11 != 0)) {
                    pAVar1 = (Array<short, eastl::allocator>*)(local_38 + 26);
                    uVar14 = 0;
                    do {
                        plVar10 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->(
                            (shared_ptr<dash3d::ModelUnlit>*)local_60);
                        psVar12 = (short*)Array<short, eastl::allocator>::operator[](
                            (Array<short, eastl::allocator>*)pAVar2, uVar14);
                        sVar3 = *psVar12;
                        psVar12 = (short*)Array<short, eastl::allocator>::operator[](pAVar1, uVar14);
                        (**(code**)(*plVar10 + 160))(plVar10, (int)sVar3, (int)*psVar12);
                        uVar14 = uVar14 + 1;
                        uVar13 = pAVar2->end();
                    } while (uVar14 < uVar13);
                }
                pAVar2 = (Array<game::VarValue, eastl::allocator>*)(local_38 + 32);
                cVar5 = pAVar2->empty();
                if ((cVar5 == '\0') && (lVar11 = pAVar2->end(), lVar11 != 0)) {
                    pAVar1 = (Array<short, eastl::allocator>*)(local_38 + 38);
                    uVar14 = 0;
                    do {
                        plVar10 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->(
                            (shared_ptr<dash3d::ModelUnlit>*)local_60);
                        psVar12 = (short*)Array<short, eastl::allocator>::operator[](
                            (Array<short, eastl::allocator>*)pAVar2, uVar14);
                        sVar3 = *psVar12;
                        psVar12 = (short*)Array<short, eastl::allocator>::operator[](pAVar1, uVar14);
                        (**(code**)(*plVar10 + 168))(plVar10, (int)sVar3, (int)*psVar12);
                        uVar14 = uVar14 + 1;
                        uVar13 = pAVar2->end();
                    } while (uVar14 < uVar13);
                }
                plVar10 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->((shared_ptr<dash3d::ModelUnlit>*)local_60);
                (**(code**)(*plVar10 + 72))(&local_78, plVar10, local_38[187] + 64, local_38[188] + 768, 4294967246,
                                            4294967286, 4294967246);
                shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)&local_48, &local_78);
                this_01 = (ObjType*)local_60._16_8_;
                local_78.~shared_ptr();
                lVar11 = shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_48);
                *(undefined1*)(lVar11 + 16) = 1;
                DAT_101041348.Put(&local_48, 1, &local_68);
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)this_01, &local_48);
            }
            local_60->~shared_ptr();
        }
        local_48.~shared_ptr();
        return this_01;
    }

    // 0x100231c00, 224 bytes, placed by class name and debug map
    // ObjType::GetStackSizeAlt(shared_ptr<ObjType> const&, int)
    ObjType* ObjType::GetStackSizeAlt(shared_ptr* param_1, int param_2) {
        char cVar1;
        long lVar2;
        int* piVar3;
        ulong uVar4;
        int iVar5;

        lVar2 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
        cVar1 = ((lVar2 + 680))->empty();
        if ((cVar1 == '\0') && (1 < param_2)) {
            iVar5 = -1;
            uVar4 = 0;
            do {
                lVar2 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
                piVar3 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)(lVar2 + 704), uVar4);
                if (*piVar3 <= param_2) {
                    lVar2 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
                    piVar3 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)(lVar2 + 704), uVar4);
                    if (*piVar3 != 0) {
                        lVar2 = shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)param_1);
                        piVar3 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)(lVar2 + 680), uVar4);
                        iVar5 = *piVar3;
                    }
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 != 10);
            if (iVar5 != -1) {
                List(this, iVar5);
                return this;
            }
        }
        new (this) shared_ptr<dash3d::Decor>(param_1);
        return this;
    }

    // 0x100231ce0, 2704 bytes, placed by class name and debug map
    // ObjType::GetSprite(int, int, int, int, ObjType::SpriteTextType, bool, eastl::string const&)
    ObjType* ObjType::GetSprite(int param_1, int param_2, int param_3, uint param_4, int param_6, char param_7,
                                shared_ptr* param_8) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        ObjType* pOVar5;
        bool bVar6;
        char cVar7;
        int iVar8;
        uint uVar9;
        shared_ptr* psVar10;
        long lVar11;
        int* piVar12;
        SharedArray* pSVar13;
        Pix3D* this_00;
        SoftwareWorldRenderer* this_01;
        undefined8* puVar14;
        undefined8 uVar15;
        array<int, 2048ul>* this_02;
        array<int, 2048ul>* this_03;
        long* plVar16;
        Pix32* pPVar17;
        Layout* this_04;
        SharedArray<unsigned int>* pSVar19;
        uint* puVar20;
        ulong uVar21;
        double dVar22;
        eastl::string* this_05;
        undefined4 uVar23;
        undefined8 in_stack_fffffffffffffe90;
        undefined4 uVar24;
        eastl::string local_148[32];
        ObjSpriteCacheKey local_128[2];
        undefined8* local_f8;
        undefined8 local_f0;
        shared_ptr local_e8[2];
        shared_ptr local_c8[2];
        Pix2D* local_a8;
        shared_ptr local_a0[2];
        shared_ptr local_78;
        shared_ptr local_60;
        int local_50[2];
        shared_ptr<ObjType> local_40[16];

        if (dash3d::g_usingRSeven != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("dash3d::g_usingRSeven == false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/ObjType.cpp",
                      733, (char*)0);
        }
        new (&local_60) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        this_05 = local_148;
        eastl::string::basic_string(this_05, (basic_string*)param_8);
        ObjSpriteCacheKey::ObjSpriteCacheKey(local_128, param_1, param_3, param_6, param_2, param_4, this_05);
        eastl::string::~basic_string(local_148);
        if (param_7 == '\0') {
            psVar10 = (shared_ptr*)LRUHashCache<ObjSprite, 200ul, 211ul, false, ObjSpriteCacheKey>::Find(
                (ObjSpriteCacheKey*)&DAT_1010423e8);
            shared_ptr<ObjSprite>::operator=((shared_ptr<ObjSprite>*)&local_60, psVar10);
            bVar6 = operator!=(&local_60, (_func_decltype_nullptr*)0);
            if (bVar6) {
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)this, &local_60);
                goto LAB_100232632;
            }
        }
        List((ObjType*)local_40, param_1);
        uVar24 = (undefined4)((ulong)in_stack_fffffffffffffe90 >> 32);
        if (1 < param_2) {
            lVar11 = shared_ptr<ObjType>::operator->(local_40);
            cVar7 = ((lVar11 + 680))->empty();
            uVar24 = (undefined4)((ulong)in_stack_fffffffffffffe90 >> 32);
            if (cVar7 == '\0') {
                iVar8 = -1;
                uVar21 = 0;
                do {
                    lVar11 = shared_ptr<ObjType>::operator->(local_40);
                    piVar12 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)(lVar11 + 704), uVar21);
                    if (*piVar12 <= param_2) {
                        lVar11 = shared_ptr<ObjType>::operator->(local_40);
                        piVar12 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)(lVar11 + 704), uVar21);
                        if (*piVar12 != 0) {
                            lVar11 = shared_ptr<ObjType>::operator->(local_40);
                            piVar12 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)(lVar11 + 680), uVar21);
                            iVar8 = *piVar12;
                        }
                    }
                    uVar24 = (undefined4)((ulong)in_stack_fffffffffffffe90 >> 32);
                    uVar21 = uVar21 + 1;
                } while (uVar21 != 10);
                if (iVar8 != -1) {
                    List((ObjType*)local_a0, iVar8);
                    shared_ptr<ObjType>::operator=(local_40, local_a0);
                    local_a0->~shared_ptr();
                }
            }
        }
        iVar8 = shared_ptr<ObjType>::operator->(local_40);
        GetModelLit((ObjType*)local_e8, iVar8);
        bVar6 = operator==(local_e8, (_func_decltype_nullptr*)0);
        if (bVar6) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            new (&local_78) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            lVar11 = shared_ptr<ObjType>::operator->(local_40);
            uVar23 = (undefined4)((ulong)this_05 >> 32);
            if (*(int*)(lVar11 + 732) == -1) {
                lVar11 = shared_ptr<ObjType>::operator->(local_40);
                if (*(int*)(lVar11 + 832) == -1) {
                    lVar11 = shared_ptr<ObjType>::operator->(local_40);
                    pOVar5 = (ObjType*)this;
                    uVar23 = (undefined4)((ulong)this_05 >> 32);
                    if (*(int*)(lVar11 + 840) != -1) {
                        lVar11 = shared_ptr<ObjType>::operator->(local_40);
                        uVar24 = *(undefined4*)(lVar11 + 836);
                        new (local_50) eastl::allocator("EASTL basic_string");
                        psVar10 = local_a0;
                        new (psVar10) eastl::string("", local_50);
                        uVar21 = (ulong)this_05 & 18446744069414584320;
                        GetSprite((ObjType*)local_c8, uVar24, param_2, 0, 0, 0, uVar21, psVar10);
                        uVar23 = (undefined4)(uVar21 >> 32);
                        uVar24 = (undefined4)((ulong)psVar10 >> 32);
                        shared_ptr<ObjSprite>::operator=((shared_ptr<ObjSprite>*)&local_78, local_c8);
                        local_c8->~shared_ptr();
                        local_a0->~basic_string();
                        bVar6 = operator==(&local_78, (_func_decltype_nullptr*)0);
                        if (bVar6) {
                            new (pOVar5) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                            goto LAB_100232610;
                        }
                    }
                } else {
                    lVar11 = shared_ptr<ObjType>::operator->(local_40);
                    uVar24 = *(undefined4*)(lVar11 + 828);
                    new (local_50) eastl::allocator("EASTL basic_string");
                    psVar10 = local_a0;
                    new (psVar10) eastl::string("", local_50);
                    uVar21 = (ulong)this_05 & 18446744069414584320;
                    GetSprite((ObjType*)local_c8, uVar24, param_2, param_3, param_4, 0, uVar21, psVar10);
                    pOVar5 = (ObjType*)this;
                    uVar23 = (undefined4)(uVar21 >> 32);
                    uVar24 = (undefined4)((ulong)psVar10 >> 32);
                    shared_ptr<ObjSprite>::operator=((shared_ptr<ObjSprite>*)&local_78, local_c8);
                    local_c8->~shared_ptr();
                    local_a0->~basic_string();
                    bVar6 = operator==(&local_78, (_func_decltype_nullptr*)0);
                    if (bVar6) {
                        new (pOVar5) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                        goto LAB_100232610;
                    }
                }
            LAB_100232141:
                local_c8[0]._0_4_ = 36;
                local_50[0] = 32;
                make_shared<ObjSprite, int&, int&>((jag*)local_a0, (int*)local_c8, local_50);
                shared_ptr<ObjSprite>::operator=((shared_ptr<ObjSprite>*)&local_60, local_a0);
                local_a0->~shared_ptr();
                pSVar13 = (SharedArray*)shared_ptr<ObjSprite>::operator->((shared_ptr<ObjSprite>*)&local_60);
                m_objSpriteToolkit.SetDestination(pSVar13, 36, 32);
                local_a8 = (Pix2D*)m_objSpriteToolkit.second();
                this_00 = (Pix3D*)m_objSpriteToolkit.GetDevCredentialsOutputDirectory();
                this_01 = (SoftwareWorldRenderer*)m_objSpriteToolkit.GetTranslation();
                puVar14 = (undefined8*)this_01->GetModelLitRenderer();
                this_00->SetRenderClipping();
                (*(code*)this_00->field_0[5])(this_00, 16, 16);
                this_00->SetLowDetail(false);
                lVar11 = shared_ptr<ObjType>::operator->(local_40);
                if (*(int*)(lVar11 + 840) != -1) {
                    uVar15 = shared_ptr<ObjSprite>::operator*((shared_ptr<ObjSprite>*)&local_78);
                    (**(code**)(local_a8->field_0 + 176))(local_a8, uVar15, 0, 0);
                }
                lVar11 = shared_ptr<ObjType>::operator->(local_40);
                iVar8 = *(int*)(lVar11 + 176);
                if (param_7 == '\0') {
                    if (param_3 == 2) {
                        dVar22 = (double)iVar8 * 1.04;
                        goto LAB_10023226a;
                    }
                } else {
                    dVar22 = (double)iVar8 * 1.5;
                LAB_10023226a:
                    iVar8 = (int)dVar22;
                }
                this_02 = (array<int, 2048ul>*)dash3d::Pix3D::GetSinTable();
                this_03 = (array<int, 2048ul>*)dash3d::Pix3D::GetCosTable();
                local_f8 = puVar14;
                lVar11 = shared_ptr<ObjType>::operator->(local_40);
                piVar12 = (int*)std::array<int, 2048ul>::operator[](this_02, (long)*(int*)(lVar11 + 180));
                iVar1 = *piVar12;
                lVar11 = shared_ptr<ObjType>::operator->(local_40);
                piVar12 = (int*)std::array<int, 2048ul>::operator[](this_03, (long)*(int*)(lVar11 + 180));
                iVar2 = *piVar12;
                plVar16 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)local_e8);
                (**(code**)(*plVar16 + 64))(plVar16);
                local_f0 = shared_ptr<dash3d::ModelLit>::operator*((shared_ptr<dash3d::ModelLit>*)local_e8);
                lVar11 = shared_ptr<ObjType>::operator->(local_40);
                local_e8[1]._0_4_ = *(undefined4*)(lVar11 + 184);
                lVar11 = shared_ptr<ObjType>::operator->(local_40);
                local_e8[1]._4_4_ = *(undefined4*)(lVar11 + 188);
                lVar11 = shared_ptr<ObjType>::operator->(local_40);
                local_e8[1].field_8._0_4_ = *(undefined4*)(lVar11 + 180);
                lVar11 = shared_ptr<ObjType>::operator->(local_40);
                local_e8[1].field_8._4_4_ = *(undefined4*)(lVar11 + 192);
                lVar11 = shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)local_e8);
                iVar3 = *(int*)(lVar11 + 8);
                lVar11 = shared_ptr<ObjType>::operator->(local_40);
                iVar4 = *(int*)(lVar11 + 196);
                lVar11 = shared_ptr<ObjType>::operator->(local_40);
                (**(code**)*local_f8)(local_f8, local_f0, 0, local_e8[1]._0_4_, local_e8[1]._4_4_,
                                      (undefined4)local_e8[1].field_8, CONCAT44(uVar23, local_e8[1].field_8._4_4_),
                                      CONCAT44(uVar24, iVar3 / 2 + (iVar1 * iVar8 >> 16) + iVar4),
                                      (iVar8 * iVar2 >> 16) + *(int*)(lVar11 + 196));
                lVar11 = shared_ptr<ObjType>::operator->(local_40);
                if (*(int*)(lVar11 + 832) != -1) {
                    uVar15 = shared_ptr<ObjSprite>::operator*((shared_ptr<ObjSprite>*)&local_78);
                    (**(code**)(local_a8->field_0 + 176))(local_a8, uVar15, 0, 0);
                }
                if (0 < param_3) {
                    pPVar17 = (Pix32*)shared_ptr<ObjSprite>::operator->((shared_ptr<ObjSprite>*)&local_60);
                    pPVar17->AddOutline(-16777216);
                }
                if (1 < param_3) {
                    pPVar17 = (Pix32*)shared_ptr<ObjSprite>::operator->((shared_ptr<ObjSprite>*)&local_60);
                    pPVar17->AddOutline(-1);
                }
                if (param_4 != 0) {
                    pPVar17 = (Pix32*)shared_ptr<ObjSprite>::operator->((shared_ptr<ObjSprite>*)&local_60);
                    pPVar17->AddShadow(param_4 | 4278190080);
                }
                pSVar13 = (SharedArray*)shared_ptr<ObjSprite>::operator->((shared_ptr<ObjSprite>*)&local_60);
                m_objSpriteToolkit.SetDestination(pSVar13, 36, 32);
                lVar11 = shared_ptr<ObjType>::operator->(local_40);
                if (*(int*)(lVar11 + 732) != -1) {
                    uVar15 = shared_ptr<ObjSprite>::operator*((shared_ptr<ObjSprite>*)&local_78);
                    (**(code**)(local_a8->field_0 + 176))(local_a8, uVar15, 0, 0);
                }
                new (local_a0) eastl::string();
                if (param_6 == 2) {
                joined_r0x0001002324f7:
                    if (param_8 != (shared_ptr*)0) {
                        m_countFont->DrawStringMultiline(param_8, 0, -1, 36, 32, 16776960, 1, 0, 0, 0, local_a8);
                    }
                } else if (param_6 == 1) {
                    InvNumber((ObjType*)local_c8, param_2);
                    param_8 = local_a0;
                    eastl::string::operator=((eastl::string*)param_8, (basic_string*)local_c8);
                    local_c8->~basic_string();
                    goto joined_r0x0001002324f7;
                }
                local_a0->~basic_string();
                uVar21 = 0;
                while (true) {
                    this_04 = (Layout*)shared_ptr<ObjSprite>::operator->((shared_ptr<ObjSprite>*)&local_60);
                    if (eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
                            HeapBeginPtr(this_04) <= uVar21)
                        break;
                    pSVar19 = (SharedArray<unsigned int>*)shared_ptr<ObjSprite>::operator->(
                        (shared_ptr<ObjSprite>*)&local_60);
                    puVar20 = (uint*)SharedArray<unsigned int>::operator[](pSVar19, uVar21);
                    uVar9 = *puVar20;
                    pSVar19 = (SharedArray<unsigned int>*)shared_ptr<ObjSprite>::operator->(
                        (shared_ptr<ObjSprite>*)&local_60);
                    piVar12 = (int*)SharedArray<unsigned int>::operator[](pSVar19, uVar21);
                    if (*piVar12 != 0) {
                        uVar9 = graphics::ComputeCompositeRGB(uVar9, uVar9 >> 24);
                        pSVar19 = (SharedArray<unsigned int>*)shared_ptr<ObjSprite>::operator->(
                            (shared_ptr<ObjSprite>*)&local_60);
                        puVar20 = (uint*)SharedArray<unsigned int>::operator[](pSVar19, uVar21);
                        *puVar20 = uVar9 | 4278190080;
                    }
                    uVar21 = uVar21 + 1;
                }
                if (param_7 == '\0') {
                    DAT_1010423e8.Put(&local_60, 1, local_128);
                }
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)(ObjType*)this, &local_60);
            } else {
                lVar11 = shared_ptr<ObjType>::operator->(local_40);
                uVar24 = *(undefined4*)(lVar11 + 728);
                new (local_50) eastl::allocator("EASTL basic_string");
                psVar10 = local_a0;
                new (psVar10) eastl::string("", local_50);
                uVar15 = CONCAT44(uVar23, 1);
                GetSprite((ObjType*)local_c8, uVar24, 10, 1, 0, 0, uVar15, psVar10);
                pOVar5 = (ObjType*)this;
                uVar23 = (undefined4)((ulong)uVar15 >> 32);
                uVar24 = (undefined4)((ulong)psVar10 >> 32);
                shared_ptr<ObjSprite>::operator=((shared_ptr<ObjSprite>*)&local_78, local_c8);
                local_c8->~shared_ptr();
                local_a0->~basic_string();
                bVar6 = operator==(&local_78, (_func_decltype_nullptr*)0);
                if (!bVar6)
                    goto LAB_100232141;
                new (pOVar5) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            }
        LAB_100232610:
            local_78.~shared_ptr();
            this = (ObjType*)this;
        }
        local_e8->~shared_ptr();
        local_40->~shared_ptr();
    LAB_100232632:
        local_128->~ObjSpriteCacheKey();
        local_60.~shared_ptr();
        return this;
    }

    // 0x1002329f0, 400 bytes, placed by class name and debug map
    // ObjType::InvNumber(int)
    ObjType* ObjType::InvNumber(int param_1) {
        ostream* poVar1;
        char* pcVar2;
        stringstream local_150[16];
        ostream local_140[264];
        stringstream local_38[24];
        allocator local_20[8];

        std::stringstream::stringstream(local_150);
        if (param_1 < 100000) {
            poVar1 = std::operator<<(local_140, "<col=ffff00>");
            poVar1 = (ostream*)std::ostream::operator<<(poVar1, param_1);
            std::operator<<(poVar1, "</col>");
        } else if (param_1 < 10000000) {
            poVar1 = std::operator<<(local_140, "<col=ffffff>");
            poVar1 = (ostream*)std::ostream::operator<<(poVar1, param_1 / 1000);
            pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            poVar1 = std::operator<<(poVar1, pcVar2);
            std::operator<<(poVar1, "</col>");
        } else {
            poVar1 = std::operator<<(local_140, "<col=00ff80>");
            poVar1 = (ostream*)std::ostream::operator<<(poVar1, param_1 / 1000000);
            pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            poVar1 = std::operator<<(poVar1, pcVar2);
            std::operator<<(poVar1, "</col>");
        }
        std::stringstream::str(local_38);
        pcVar2 = (char*)local_38->c_str();
        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string(pcVar2, local_20);
        local_38->~string();
        std::stringstream::~stringstream(local_150);
        return this;
    }

    // 0x100232ca0, 864 bytes, placed by class name and debug map
    // ObjType::GetBaseSprite(ObjType const&, int, int, int, int, int)
    ObjType* ObjType::GetBaseSprite(ObjType* param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
        uint uVar1;
        int iVar2;
        uint uVar3;
        SharedArray* pSVar5;
        Pix3D* this_00;
        SoftwareWorldRenderer* this_01;
        undefined8* puVar6;
        array<int, 2048ul>* this_02;
        array<int, 2048ul>* this_03;
        int* piVar7;
        long* plVar8;
        long lVar9;
        Pix32* pPVar10;
        uint uVar11;
        int iVar12;
        float fVar13;
        undefined8 uVar14;
        shared_ptr local_98;
        undefined8* local_88;
        undefined8 local_80;
        shared_ptr local_78;
        uint local_68;
        uint local_64;
        shared_ptr local_58;
        int local_3c;
        int local_34;

        local_3c = param_2;
        local_34 = param_3;
        new (&local_58) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        GetModelLit((ObjType*)&local_78, (int)param_1);
        if (operator==(&local_78, (_func_decltype_nullptr*)0)) {
            new ((ObjType*)this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            make_shared<ObjSprite, int&, int&>((jag*)&local_98, &local_3c, &local_34);
            shared_ptr<ObjSprite>::operator=((shared_ptr<ObjSprite>*)&local_58, &local_98);
            local_98.~shared_ptr();
            pSVar5 = (SharedArray*)shared_ptr<ObjSprite>::operator->((shared_ptr<ObjSprite>*)&local_58);
            m_objSpriteToolkit.SetDestination(pSVar5, local_3c, local_34);
            this_00 = (Pix3D*)m_objSpriteToolkit.GetDevCredentialsOutputDirectory();
            this_01 = (SoftwareWorldRenderer*)m_objSpriteToolkit.GetTranslation();
            puVar6 = (undefined8*)this_01->GetModelLitRenderer();
            this_00->SetRenderClipping();
            (*(code*)this_00->field_0[5])(this_00);
            this_00->SetLowDetail(false);
            uVar11 = (int)((double)(int)param_1->field_176 * 1.04);
            if (param_4 != 2) {
                uVar11 = param_1->field_176;
            }
            if ((local_3c != 36) || (local_34 != 32)) {
                uVar14 = eastl::max_alt(36.0 / (float)local_3c, 32.0 / (float)local_34);
                fVar13 = (float)_powf(uVar14, 1064178811);
                uVar11 = (uint)((float)(int)uVar11 * fVar13);
            }
            this_02 = (array<int, 2048ul>*)dash3d::Pix3D::GetSinTable();
            local_88 = puVar6;
            this_03 = (array<int, 2048ul>*)dash3d::Pix3D::GetCosTable();
            uVar1 = param_1->field_180;
            piVar7 = (int*)std::array<int, 2048ul>::operator[](this_02, (long)(int)uVar1);
            iVar12 = *piVar7;
            piVar7 = (int*)std::array<int, 2048ul>::operator[](this_03, (long)(int)uVar1);
            iVar2 = *piVar7;
            plVar8 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_78);
            (**(code**)(*plVar8 + 64))(plVar8);
            local_80 = shared_ptr<dash3d::ModelLit>::operator*((shared_ptr<dash3d::ModelLit>*)&local_78);
            local_68 = param_1->field_180;
            uVar1 = param_1->field_184;
            local_64 = param_1->field_188;
            uVar3 = param_1->field_192;
            lVar9 = shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_78);
            (**(code**)*local_88)(local_88, local_80, 0, uVar1, local_64, local_68, uVar3,
                                  *(int*)(lVar9 + 8) / 2 + ((int)(iVar12 * uVar11) >> 16) + param_1->field_196,
                                  ((int)(uVar11 * iVar2) >> 16) + param_1->field_196);
            if ((0 < param_4) && (0 < param_5)) {
                iVar12 = param_5;
                do {
                    pPVar10 = (Pix32*)shared_ptr<ObjSprite>::operator->((shared_ptr<ObjSprite>*)&local_58);
                    pPVar10->AddOutline(-16777216);
                    iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
            }
            if ((1 < param_4) && (0 < param_5)) {
                iVar12 = param_5;
                do {
                    pPVar10 = (Pix32*)shared_ptr<ObjSprite>::operator->((shared_ptr<ObjSprite>*)&local_58);
                    pPVar10->AddOutline(-1);
                    iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
            }
            if ((param_6 != 0) && (0 < param_5)) {
                do {
                    pPVar10 = (Pix32*)shared_ptr<ObjSprite>::operator->((shared_ptr<ObjSprite>*)&local_58);
                    pPVar10->AddShadow(param_6);
                    param_5 = param_5 + -1;
                } while (param_5 != 0);
            }
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)(ObjType*)this, &local_58);
        }
        local_78.~shared_ptr();
        local_58.~shared_ptr();
        return (ObjType*)this;
    }

    // 0x1002330e0, 192 bytes, placed by class name and debug map
    // ObjType::CheckWearModel(int)
    bool ObjType::CheckWearModel(int param_1) {
        uint uVar1;
        uint uVar2;
        uint* puVar3;
        char cVar4;
        char cVar5;
        uint* puVar6;
        bool bVar7;

        puVar3 = &field_628;
        puVar6 = &field_624;
        if (param_1 == 1) {
            puVar6 = &field_636;
            puVar3 = &field_640;
        }
        if (*puVar6 == 4294967295) {
            bVar7 = true;
        } else {
            uVar1 = (&field_648)[param_1 == 1];
            uVar2 = *puVar3;
            cVar4 = ((int)m_pModels)->RequestDownload(*puVar6);
            if ((uVar2 != 4294967295) && (cVar5 = ((int)m_pModels)->RequestDownload(uVar2), cVar5 == '\0')) {
                cVar4 = '\0';
            }
            if ((uVar1 != 4294967295) && (cVar5 = ((int)m_pModels)->RequestDownload(uVar1), cVar5 == '\0')) {
                cVar4 = '\0';
            }
            bVar7 = cVar4 != '\0';
        }
        return bVar7;
    }

    // 0x1002331a0, 1344 bytes, placed by class name and debug map
    // ObjType::GetWearModelNoCheck(int)
    ObjType* ObjType::GetWearModelNoCheck(int param_1) {
        Array<game::VarValue, eastl::allocator>* pAVar1;
        short sVar2;
        int iVar3;
        int iVar4;
        undefined8 uVar5;
        char cVar6;
        long* plVar7;
        short* psVar8;
        ulong uVar9;
        Array<short, eastl::allocator>* pAVar10;
        int in_EDX;
        Array<short, eastl::allocator>* pAVar11;
        NpcUID* extraout_RDX;
        NpcUID* extraout_RDX_00;
        long lVar12;
        ulong uVar13;
        undefined4 in_register_00000034;
        Array<short, eastl::allocator>* pAVar14;
        bool bVar15;
        undefined1 local_c0[40];
        undefined1 local_98[16];
        undefined1 local_88[24];
        eastl local_70[8];
        undefined1 local_68[32];
        shared_ptr<dash3d::Decor> local_48[16];
        long local_38;

        pAVar14 = (Array<short, eastl::allocator>*)CONCAT44(in_register_00000034, param_1);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        bVar15 = in_EDX == 1;
        pAVar11 = pAVar14 + 624;
        if (bVar15) {
            pAVar11 = pAVar14 + 636;
        }
        pAVar10 = pAVar14 + 640;
        if (!bVar15) {
            pAVar10 = pAVar14 + 628;
        }
        if (*(int*)pAVar11 == -1) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            iVar3 = *(int*)pAVar10;
            iVar4 = *(int*)(pAVar14 + (ulong)bVar15 * 4 + 648);
            local_88._16_8_ = pAVar14;
            local_88->Load(m_pModels, *(int*)pAVar11, 0, false);
            if (iVar3 != -1) {
                local_c0->Load(m_pModels, iVar3, 0, false);
                if (iVar4 == -1) {
                    new (local_68) shared_ptr<dash3d::Decor>(local_88);
                    new ((local_68 + 16)) shared_ptr<dash3d::Decor>(local_c0);
                    eastl::destruct<highlight::NpcUID*>((eastl*)local_98, (NpcUID*)"EASTL vector", extraout_RDX_00);
                    eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>::vector(local_c0 + 16, local_68,
                                                                                                2, local_98);
                    lVar12 = 16;
                    do {
                        ((local_68 + lVar12))->~shared_ptr();
                        lVar12 = lVar12 + -16;
                    } while (lVar12 != -16);
                    local_68->Combine((vector*)(local_c0 + 16));
                    shared_ptr<dash3d::ModelUnlit>::operator=((shared_ptr<dash3d::ModelUnlit>*)local_88,
                                                              (shared_ptr*)local_68);
                    local_68->~shared_ptr();
                    ((local_c0 + 16))->~vector();
                } else {
                    local_98->Load(m_pModels, iVar4, 0, false);
                    new (local_68) shared_ptr<dash3d::Decor>(local_88);
                    new ((local_68 + 16)) shared_ptr<dash3d::Decor>(local_c0);
                    shared_ptr<dash3d::Decor>::shared_ptr(local_48, (shared_ptr*)local_98);
                    eastl::destruct<highlight::NpcUID*>(local_70, (NpcUID*)"EASTL vector", extraout_RDX);
                    eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>::vector(local_c0 + 16, local_68,
                                                                                                3, local_70);
                    lVar12 = 32;
                    do {
                        ((local_68 + lVar12))->~shared_ptr();
                        lVar12 = lVar12 + -16;
                    } while (lVar12 != -16);
                    local_68->Combine((vector*)(local_c0 + 16));
                    shared_ptr<dash3d::ModelUnlit>::operator=((shared_ptr<dash3d::ModelUnlit>*)local_88,
                                                              (shared_ptr*)local_68);
                    local_68->~shared_ptr();
                    ((local_c0 + 16))->~vector();
                    local_98->~shared_ptr();
                }
                local_c0->~shared_ptr();
            }
            uVar5 = local_88._16_8_;
            if ((in_EDX == 0) && (*(int*)(local_88._16_8_ + 632) != 0)) {
                plVar7 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->((shared_ptr<dash3d::ModelUnlit>*)local_88);
                (**(code**)(*plVar7 + 152))(plVar7, 0, *(undefined4*)(uVar5 + 632), 0);
            }
            if ((in_EDX == 1) && (*(int*)(uVar5 + 644) != 0)) {
                plVar7 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->((shared_ptr<dash3d::ModelUnlit>*)local_88);
                (**(code**)(*plVar7 + 152))(plVar7, 0, *(undefined4*)(uVar5 + 644), 0);
            }
            pAVar1 = (Array<game::VarValue, eastl::allocator>*)(uVar5 + 80);
            cVar6 = pAVar1->empty();
            if (cVar6 == '\0') {
                lVar12 = pAVar1->end();
                if (lVar12 != 0) {
                    pAVar11 = (Array<short, eastl::allocator>*)(local_88._16_8_ + 104);
                    uVar13 = 0;
                    do {
                        plVar7 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->(
                            (shared_ptr<dash3d::ModelUnlit>*)local_88);
                        psVar8 = (short*)Array<short, eastl::allocator>::operator[](
                            (Array<short, eastl::allocator>*)pAVar1, uVar13);
                        sVar2 = *psVar8;
                        psVar8 = (short*)Array<short, eastl::allocator>::operator[](pAVar11, uVar13);
                        (**(code**)(*plVar7 + 160))(plVar7, (int)sVar2, (int)*psVar8);
                        uVar13 = uVar13 + 1;
                        uVar9 = pAVar1->end();
                    } while (uVar13 < uVar9);
                }
            }
            pAVar1 = (Array<game::VarValue, eastl::allocator>*)(local_88._16_8_ + 128);
            cVar6 = pAVar1->empty();
            if (cVar6 == '\0') {
                lVar12 = pAVar1->end();
                if (lVar12 != 0) {
                    local_88._16_8_ = local_88._16_8_ + 152;
                    uVar13 = 0;
                    do {
                        plVar7 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->(
                            (shared_ptr<dash3d::ModelUnlit>*)local_88);
                        psVar8 = (short*)Array<short, eastl::allocator>::operator[](
                            (Array<short, eastl::allocator>*)pAVar1, uVar13);
                        sVar2 = *psVar8;
                        psVar8 = (short*)Array<short, eastl::allocator>::operator[](
                            (Array<short, eastl::allocator>*)local_88._16_8_, uVar13);
                        (**(code**)(*plVar7 + 168))(plVar7, (int)sVar2, (int)*psVar8);
                        uVar13 = uVar13 + 1;
                        uVar9 = pAVar1->end();
                    } while (uVar13 < uVar9);
                }
            }
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)this, (shared_ptr*)local_88);
            local_88->~shared_ptr();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x1002336f0, 112 bytes, placed by class name and debug map
    // ObjType::CheckHeadModel(int)
    bool ObjType::CheckHeadModel(int param_1) {
        uint uVar1;
        char cVar2;
        bool bVar4;

        if ((&field_656)[(ulong)(param_1 == 1) * 2] == 4294967295) {
            bVar4 = true;
        } else {
            uVar1 = (&field_660)[(ulong)(param_1 == 1) * 2];
            cVar2 = ((int)m_pModels)->RequestDownload((&field_656)[(ulong)(param_1 == 1) * 2]);
            if (uVar1 != 4294967295) {
                if (((int)m_pModels)->RequestDownload(uVar1) == '\0') {
                    cVar2 = '\0';
                }
            }
            bVar4 = cVar2 != '\0';
        }
        return bVar4;
    }

    // 0x100233760, 784 bytes, placed by class name and debug map
    // ObjType::GetHeadModelNoCheck(int)
    ObjType* ObjType::GetHeadModelNoCheck(int param_1) {
        Array<game::VarValue, eastl::allocator>* pAVar1;
        short sVar2;
        int iVar3;
        char cVar4;
        long* plVar5;
        short* psVar6;
        ulong uVar7;
        int in_EDX;
        NpcUID* extraout_RDX;
        long lVar8;
        ulong uVar9;
        undefined4 in_register_00000034;
        Array<short, eastl::allocator>* pAVar10;
        vector local_a8[24];
        undefined1 local_90[24];
        undefined1 local_78[24];
        eastl local_60[8];
        undefined1 local_58[32];
        long local_38;

        pAVar10 = (Array<short, eastl::allocator>*)CONCAT44(in_register_00000034, param_1);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_90._16_8_ = this;
        if (*(int*)(pAVar10 + (ulong)(in_EDX == 1) * 8 + 656) == -1) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            iVar3 = *(int*)(pAVar10 + (ulong)(in_EDX == 1) * 8 + 660);
            local_78->Load(m_pModels, *(int*)(pAVar10 + (ulong)(in_EDX == 1) * 8 + 656), 0, false);
            if (iVar3 != -1) {
                local_90->Load(m_pModels, iVar3, 0, false);
                new (local_58) shared_ptr<dash3d::Decor>(local_78);
                new ((local_58 + 16)) shared_ptr<dash3d::Decor>(local_90);
                eastl::destruct<highlight::NpcUID*>(local_60, (NpcUID*)"EASTL vector", extraout_RDX);
                eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>::vector(local_a8, local_58, 2,
                                                                                            local_60);
                lVar8 = 16;
                do {
                    ((local_58 + lVar8))->~shared_ptr();
                    lVar8 = lVar8 + -16;
                } while (lVar8 != -16);
                local_58->Combine(local_a8);
                shared_ptr<dash3d::ModelUnlit>::operator=((shared_ptr<dash3d::ModelUnlit>*)local_78,
                                                          (shared_ptr*)local_58);
                local_58->~shared_ptr();
                local_a8->~vector();
                local_90->~shared_ptr();
            }
            pAVar1 = (Array<game::VarValue, eastl::allocator>*)(pAVar10 + 80);
            local_78._16_8_ = pAVar10;
            cVar4 = pAVar1->empty();
            if (cVar4 == '\0') {
                lVar8 = pAVar1->end();
                if (lVar8 != 0) {
                    pAVar10 = (Array<short, eastl::allocator>*)(local_78._16_8_ + 104);
                    uVar9 = 0;
                    do {
                        plVar5 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->(
                            (shared_ptr<dash3d::ModelUnlit>*)local_78);
                        psVar6 = (short*)Array<short, eastl::allocator>::operator[](
                            (Array<short, eastl::allocator>*)pAVar1, uVar9);
                        sVar2 = *psVar6;
                        psVar6 = (short*)Array<short, eastl::allocator>::operator[](pAVar10, uVar9);
                        (**(code**)(*plVar5 + 160))(plVar5, (int)sVar2, (int)*psVar6);
                        uVar9 = uVar9 + 1;
                        uVar7 = pAVar1->end();
                    } while (uVar9 < uVar7);
                }
            }
            pAVar1 = (Array<game::VarValue, eastl::allocator>*)(local_78._16_8_ + 128);
            cVar4 = pAVar1->empty();
            if (cVar4 == '\0') {
                lVar8 = pAVar1->end();
                if (lVar8 != 0) {
                    local_78._16_8_ = local_78._16_8_ + 152;
                    uVar9 = 0;
                    do {
                        plVar5 = (long*)shared_ptr<dash3d::ModelUnlit>::operator->(
                            (shared_ptr<dash3d::ModelUnlit>*)local_78);
                        psVar6 = (short*)Array<short, eastl::allocator>::operator[](
                            (Array<short, eastl::allocator>*)pAVar1, uVar9);
                        sVar2 = *psVar6;
                        psVar6 = (short*)Array<short, eastl::allocator>::operator[](
                            (Array<short, eastl::allocator>*)local_78._16_8_, uVar9);
                        (**(code**)(*plVar5 + 168))(plVar5, (int)sVar2, (int)*psVar6);
                        uVar9 = uVar9 + 1;
                        uVar7 = pAVar1->end();
                    } while (uVar9 < uVar7);
                }
            }
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)local_90._16_8_, (shared_ptr*)local_78);
            local_78->~shared_ptr();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (ObjType*)local_90._16_8_;
    }

    // 0x100233a70, 48 bytes, placed by class name and debug map
    // ObjType::GetParam(int, eastl::string const&)
    ObjType* ObjType::GetParam(int param_1, basic_string* param_2) {
        basic_string* pbVar1;
        basic_string* in_RCX;
        undefined4 in_register_00000034;

        pbVar1 = (basic_string*)ParamTypeHelper::GetParam((hash_map*)(CONCAT44(in_register_00000034, param_1) + 768),
                                                          (int)param_2, in_RCX);
        new (this) eastl::string(pbVar1);
        return this;
    }

    // 0x100233aa0, 32 bytes, placed by class name and debug map
    // ObjType::GetParam(int, int)
    void ObjType::GetParam(int param_1, int param_2) {
        ParamTypeHelper::GetParam((hash_map*)&field_768, param_1, param_2);
    }

    // 0x100233ac0, 160 bytes, placed by class name and debug map
    // ObjType::GetShiftClickIOp()
    int ObjType::GetShiftClickIOp() {
        undefined1* this_00;
        char cVar1;
        byte bVar3;
        basic_string* pbVar4;
        int iVar5;

        iVar5 = -1;
        if (field_844 != -1) {
            this_00 = &field_424;
            cVar1 = this_00->empty();
            if (cVar1 == '\0') {
                if ((long)field_844 < 0) {
                    pbVar4 = (basic_string*)eastl::vector<
                        eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<eastl::string,
                                eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                        4);
                    bVar3 = core::stringtools::general::StringTools::EqualsIgnoreCase(
                        (basic_string*)&constants::text::drop, pbVar4);
                    iVar5 = (uint)bVar3 * 5 + -1;
                } else {
                    pbVar4 = (basic_string*)eastl::vector<
                        eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<eastl::string,
                                eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                        (long)field_844);
                    if (eastl::operator!=(pbVar4, (value_type*)"")) {
                        iVar5 = field_844;
                    }
                }
            }
        }
        return iVar5;
    }

    // 0x100233b60, 48 bytes, placed by class name and debug map
    // ObjType::ResetCache()
    void ObjType::ResetCache() {
        g_objStatics.Reset();
        DAT_101041348.Reset();
        DAT_1010423e8.Reset();
    }

    // 0x100233bd0, 32 bytes, placed by class name and debug map
    // ObjType::ResetSpriteCache()
    void ObjType::ResetSpriteCache() {
        DAT_1010423e8.Reset();
    }

    // 0x100233bf0, 48 bytes, placed by class name and debug map
    // ObjType::SwitchMembers(bool)
    void ObjType::SwitchMembers(bool param_1) {
        if ((bool)m_memServer != param_1) {
            ResetCache();
            m_memServer = param_1;
        }
    }

    // 0x100257d70, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.36
    void ___cxx_global_var_init_36() {
        new (&ObjType::m_objSpriteToolkit) graphics::OffscreenSoftwarePixToolkit();
        ___cxa_atexit(PTR__OffscreenSoftwarePixToolkit_100ee6b90, &ObjType::m_objSpriteToolkit, 4294967296);
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x1002301f0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::configdecoder::ObjType>::type make_shared<oldscape::configdecoder::ObjType>()
    jag* make_shared<oldscape::configdecoder::ObjType>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        ObjType* local_28[2];

        pvVar1 = (void*)aligned_alloc(880, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::ObjType>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::configdecoder::ObjType>, int,
                                   oldscape::configdecoder::ObjType*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x1002328b0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::configdecoder::ObjSprite>::type make_shared<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjType::ObjTypeConstants, oldscape::configdecoder::ObjType::ObjTypeConstants>(oldscape::configdecoder::ObjType::ObjTypeConstants&&, oldscape::configdecoder::ObjType::ObjTypeConstants&&)
    /* shared_ptr_if_not_array<oldscape::configdecoder::ObjSprite>::type
   make_shared<oldscape::configdecoder::ObjSprite, int&, int&>(int&, int&) */

    jag* make_shared<oldscape::configdecoder::ObjSprite, int&, int&>(int* param_1, int* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        ObjSprite* local_38[2];

        pvVar1 = (void*)aligned_alloc(112, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<oldscape::configdecoder::ObjSprite, int&, int&>((void*)((long)pvVar1 + 32),
                                                                                        param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::configdecoder::ObjSprite>, int,
                                   oldscape::configdecoder::ObjSprite*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

} // namespace jag

namespace jag::oldscape::graphics {
    // 0x100232b80, 48 bytes, inline, placed by debug map only (low confidence)
    // ComputeCompositeRGB(unsigned int, unsigned int)
    uint ComputeCompositeRGB(uint param_1, uint param_2) {
        return (param_1 & 16711935) * param_2 >> 8 & 16711935 | (param_1 & 65280) * param_2 >> 8 & 65280;
    }

} // namespace jag::oldscape::graphics

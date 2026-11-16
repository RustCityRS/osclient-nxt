// projects/osclient/worldmap/Worldmap.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "Worldmap.h"

namespace jag::oldscape::worldmap {
    // 0x100d3d2b8, 4 bytes, __const
    float Worldmap::SCALE_UPDATE_FACTOR = 30.0f;

    // 0x100d3d2bc, 4 bytes, __const
    Worldmap_SMALL_FONT = 3;

    // 0x100d3d2c0, 4 bytes, __const
    Worldmap_MEDIUM_FONT = 4;

    // 0x100d3d2c4, 240 bytes, __const
    Worldmap_LARGE_FONT = {
        5,          14,         0,          14,         0,  12,         0,          14,          0,
        22,         0,          23,         0,          28, 0,          29,         0,           1062836634,
        1139638272, 1141473280, 1135869952, 1113927392, 0,  1697350398, 1073157447, -1120952803, -1078791757,
        0,          1,          2,          3,          4,  5,          1751346241, 7957861,     1329676872,
        0,          44,         45,         46,         47, 48,         49,         50,          51,
        9,          10,         11,         12,         13, 18,         19,         20,          21,
        22,         3,          4,          5,          6,  1001,
    };

    // 0x100025b10, 976 bytes, placed by class name and debug map
    // Worldmap::Init(jagex3::Js5*, jagex3::Js5*, jagex3::Js5*, shared_ptr<jstring::PixfontGeneric>, eastl::hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash, eastl::equal_to<Font>, eastl::allocator, false>&, shared_ptr<Array<graphics::Pix8, eastl::allocator> >&)
    void Worldmap::Init(Js5* param_1, Js5* param_2, Js5* param_3, shared_ptr param_4, hash_map* param_5,
                        shared_ptr* param_6) {
        undefined1* this_00;
        Js5* pJVar1;
        Worldmap* pWVar2;
        char cVar3;
        int iVar4;
        shared_ptr* psVar5;
        shared_ptr<jstring::PixfontGeneric>* psVar6;
        long lVar7;
        ulong uVar8;
        uint* puVar9;
        PacketJ* pPVar10;
        undefined8 uVar11;
        undefined8 uVar12;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_01;
        basic_string* pbVar13;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>* this_02;
        WorldmapAreaMetadata* this_03;
        ulong uVar14;
        ErrorCapture local_3e0[17];
        shared_ptr<RSevenDebugPresetProvider> local_90[16];
        shared_ptr local_80;
        hash_map<eastl::string, shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>, eastl::hash<eastl::string>,
                 eastl::equal_to<eastl::string>, eastl::allocator, false>* local_70;
        shared_ptr local_68;
        Js5* local_50;
        shared_ptr* local_48;
        int local_3c;
        Worldmap* local_38;

        local_50 = param_1;
        shared_ptr<Array<graphics::Pix8, eastl::allocator>>::operator=(
            (shared_ptr<Array<graphics::Pix8, eastl::allocator>>*)&field_104, (shared_ptr*)param_4._0_8_);
        field_8 = local_50;
        field_16 = param_2;
        field_24 = param_3;
        shared_ptr<jstring::PixfontGeneric>::operator=((shared_ptr<jstring::PixfontGeneric>*)&field_32,
                                                       (shared_ptr*)param_5);
        this_00 = &field_48;
        this_00->clear();
        psVar5 = (shared_ptr*)eastl::hash_map<
            Font, shared_ptr<jstring::PixfontGeneric>, FontHash, eastl::equal_to<Font>, eastl::allocator,
            false>::operator[]((hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash, eastl::equal_to<Font>,
                                         eastl::allocator, false>*)param_6,
                               (Font*)&Worldmap_SMALL_FONT);
        local_3e0[0]._0_4_ = (&rs2lib::worldmap::MapLabelSize::SMALL)->GetSize();
        psVar6 = (shared_ptr<jstring::PixfontGeneric>*)eastl::hash_map<
            int, shared_ptr<jstring::PixfontGeneric>, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
            false>::operator[]((hash_map<int, shared_ptr<jstring::PixfontGeneric>, eastl::hash<int>,
                                         eastl::equal_to<int>, eastl::allocator, false>*)this_00,
                               (int*)local_3e0);
        shared_ptr<jstring::PixfontGeneric>::operator=(psVar6, psVar5);
        psVar5 = (shared_ptr*)eastl::hash_map<
            Font, shared_ptr<jstring::PixfontGeneric>, FontHash, eastl::equal_to<Font>, eastl::allocator,
            false>::operator[]((hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash, eastl::equal_to<Font>,
                                         eastl::allocator, false>*)param_6,
                               (Font*)&Worldmap_MEDIUM_FONT);
        local_3e0[0]._0_4_ = (&rs2lib::worldmap::MapLabelSize::MEDIUM)->GetSize();
        psVar6 = (shared_ptr<jstring::PixfontGeneric>*)eastl::hash_map<
            int, shared_ptr<jstring::PixfontGeneric>, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
            false>::operator[]((hash_map<int, shared_ptr<jstring::PixfontGeneric>, eastl::hash<int>,
                                         eastl::equal_to<int>, eastl::allocator, false>*)this_00,
                               (int*)local_3e0);
        shared_ptr<jstring::PixfontGeneric>::operator=(psVar6, psVar5);
        psVar5 = (shared_ptr*)eastl::hash_map<
            Font, shared_ptr<jstring::PixfontGeneric>, FontHash, eastl::equal_to<Font>, eastl::allocator,
            false>::operator[]((hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash, eastl::equal_to<Font>,
                                         eastl::allocator, false>*)param_6,
                               (Font*)&Worldmap_LARGE_FONT);
        local_3e0[0]._0_4_ = (&rs2lib::worldmap::MapLabelSize::LARGE)->GetSize();
        psVar6 = (shared_ptr<jstring::PixfontGeneric>*)eastl::hash_map<
            int, shared_ptr<jstring::PixfontGeneric>, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
            false>::operator[]((hash_map<int, shared_ptr<jstring::PixfontGeneric>, eastl::hash<int>,
                                         eastl::equal_to<int>, eastl::allocator, false>*)this_00,
                               (int*)local_3e0);
        shared_ptr<jstring::PixfontGeneric>::operator=(psVar6, psVar5);
        std::make_unique<WorldmapLoader, jagex3::Js5*&>((Js5**)local_3e0);
        std::unique_ptr<WorldmapLoader, std::default_delete<WorldmapLoader>>::operator=(
            (unique_ptr<WorldmapLoader, std::default_delete<WorldmapLoader>>*)&field_232, (unique_ptr*)local_3e0);
        local_3e0->~unique_ptr();
        iVar4 = (field_8, "details")->GetGroupId();
        psVar5 = &local_68;
        eastl::vector<int, BucketAllocatorEASTL>::vector();
        local_3c = iVar4;
        (field_8, (vector*)psVar5, iVar4)->GetFileList();
        local_48 = (shared_ptr*)&field_176;
        local_38 = this;
        lVar7 = local_68.size();
        if (lVar7 != 0) {
            local_70 =
                (hash_map<eastl::string, shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>, eastl::hash<eastl::string>,
                          eastl::equal_to<eastl::string>, eastl::allocator, false>*)&local_38->field_120;
            uVar14 = 0;
            do {
                new (local_90) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(psVar5);
                pJVar1 = local_38->field_8;
                puVar9 = (uint*)eastl::vector<int, BucketAllocatorEASTL>::operator[](
                    (vector<int, BucketAllocatorEASTL>*)&local_68, uVar14);
                ((shared_ptr*)pJVar1)->GetFile((int)local_90, local_3c, (array*)(ulong)*puVar9);
                make_shared<rs2lib::worldmap::WorldmapAreaMetadata>((jag*)&local_80);
                ErrorCapture::ErrorCapture(local_3e0, true);
                pPVar10 = (PacketJ*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                    (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)&local_80);
                iVar4 = shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                    (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_90);
                puVar9 = (uint*)eastl::vector<int, BucketAllocatorEASTL>::operator[](
                    (vector<int, BucketAllocatorEASTL>*)&local_68, uVar14);
                rs2lib::worldmap::WorldmapAreaMetadata::Unpack(pPVar10, iVar4, (ErrorCapture*)(ulong)*puVar9);
                cVar3 = local_3e0->IsRaised();
                if (cVar3 == '\0') {
                    this_01 =
                        (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                             eastl::allocator, 0>*)
                            shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                                (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)&local_80);
                    pbVar13 = (basic_string*)eastl::compressed_pair_imp<
                        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                        0>::second(this_01);
                    this_02 = (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)eastl::hash_map<
                        eastl::string, shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>, eastl::hash<eastl::string>,
                        eastl::equal_to<eastl::string>, eastl::allocator, false>::operator[](local_70, pbVar13);
                    psVar5 = &local_80;
                    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator=(this_02, &local_80);
                    this_03 = (WorldmapAreaMetadata*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                        (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)&local_80);
                    cVar3 = this_03->IsDefaultMap();
                    if (cVar3 != '\0') {
                        psVar5 = &local_80;
                        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator=(
                            (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)local_48, &local_80);
                    }
                } else {
                    uVar11 = logger::default_logger();
                    local_3e0->second();
                    uVar12 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    psVar5 = (shared_ptr*)0;
                    logger::Logger::Log(uVar11, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/worldmap/Worldmap.cpp",
                                        85, "Failed to unpack worldmap area metadata: %s", uVar12);
                }
                local_3e0->~LanguageMessage();
                local_80.~shared_ptr();
                local_90->~shared_ptr();
                uVar14 = uVar14 + 1;
                uVar8 = local_68.size();
            } while (uVar14 < uVar8);
        }
        pWVar2 = local_38;
        SwitchToMap(local_38, local_48);
        new (local_3e0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator=(
            (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)&pWVar2->field_208, (shared_ptr*)local_3e0);
        local_3e0->~shared_ptr();
        local_68.~vector_set();
    }

    // 0x100026110, 112 bytes, placed by class name
    // Worldmap::SwitchToMap(shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> const&)
    void Worldmap::SwitchToMap(shared_ptr* param_1) {
        bool bVar1;
        shared_ptr* extraout_RDX;

        bVar1 = operator!=((shared_ptr*)&field_192, (_func_decltype_nullptr*)0);
        if ((bVar1) && (bVar1 = operator==((jag*)&field_192, param_1, extraout_RDX), bVar1)) {
            return;
        }
        MapSwitch(this, param_1);
        Reset((int)this, -1, -1);
    }

    // 0x1000261d0, 160 bytes, placed by class name
    // Worldmap::PrefetchDefaultMapAreaData()
    undefined4 Worldmap::PrefetchDefaultMapAreaData() {
        Js5* pJVar1;
        char cVar2;
        undefined4 uVar3;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_00;
        basic_string* pbVar4;
        char* pcVar5;
        eastl::string local_40[32];

        this_00 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)
                      shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                          (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)&field_176);
        pbVar4 = (basic_string*)
            eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>::second(this_00);
        eastl::string::basic_string(local_40, pbVar4);
        pJVar1 = field_8;
        pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        cVar2 = pJVar1->RequestDownload(pcVar5, "area");
        uVar3 = 100;
        if (cVar2 == '\0') {
            pJVar1 = field_8;
            pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar3 = pJVar1->GetGroupLoadPercentage(pcVar5);
        }
        eastl::string::~basic_string(local_40);
        return uVar3;
    }

    // 0x100026270, 16 bytes, placed by class name
    // Worldmap::Service()
    void Worldmap::Service() {
        rs2lib::worldmap::RenderedMapSquare::CleanCaches();
    }

    // 0x100026280, 1712 bytes, placed by class name
    // Worldmap::LogicLoop(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>, bool, int, int, int, int)
    void Worldmap::LogicLoop(uint param_2, undefined4 param_3, char param_4, int param_5, int param_6, int param_7,
                             int param_8) {
        int iVar1;
        Worldmap* pWVar2;
        char cVar3;
        float extraout_EAX;
        int iVar4;
        WorldmapLoader* this_00;
        undefined4 extraout_var;
        shared_ptr* this_01;
        long* plVar5;
        shared_ptr<rs2lib::worldmap::MapElement>* psVar6;
        long lVar7;
        long lVar8;
        HookArg* pHVar9;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        hashtable_iterator_base* extraout_RDX_03;
        hashtable_iterator_base* phVar10;
        hashtable_iterator_base* extraout_RDX_04;
        int iVar11;
        bool bVar12;
        undefined4 uVar13;
        float fVar14;
        hash_map<int, shared_ptr<rs2lib::worldmap::MapElement>, eastl::hash<int>, eastl::equal_to<int>,
                 eastl::allocator, false>
            local_1c0[56];
        hashtable_iterator_base local_188[16];
        HookArg local_178;
        list<shared_ptr<rs2lib::worldmap::MapElement>, BucketAllocatorEASTL> local_130[24];
        MapElementPosition local_118;
        HookReq local_f8;
        list<console::Line, eastl::allocator> local_78[8];
        list<console::Line, eastl::allocator> local_70[16];
        int local_60;
        int local_5c;
        Worldmap* local_58;
        float local_50;
        undefined4 uStack_4c;
        float local_44;
        CoordMapSquare local_40;

        local_40.m_x = param_2;
        local_40._8_4_ = param_3;
        this_00 = (WorldmapLoader*)std::unique_ptr<WorldmapLoader, std::default_delete<WorldmapLoader>>::operator->(
            (unique_ptr<WorldmapLoader, std::default_delete<WorldmapLoader>>*)&field_232);
        cVar3 = this_00->IsLoadComplete();
        if (cVar3 != '\0') {
            Zoom(this);
            Move(this);
            if (param_4 != '\0') {
                cVar3 = Moving(this);
                bVar12 = true;
                if (cVar3 == '\0') {
                    bVar12 = field_384 != -1;
                }
                local_50 = field_264;
                local_58 = this;
                eastl::list<shared_ptr<rs2lib::worldmap::MapElement>, BucketAllocatorEASTL>::list();
                if (!bVar12) {
                    local_44 = 1.0 / local_50;
                    uVar13 = ceil((float)param_8 * local_44);
                    _local_50 = CONCAT44(uStack_4c, uVar13);
                    fVar14 = (float)ceil((float)param_7 * local_44);
                    pWVar2 = local_58;
                    iVar11 = (int)local_50;
                    std::unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                    std::default_delete<rs2lib::worldmap::WorldmapRenderer>>::
                    operator->(
                        (unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                    std::default_delete<rs2lib::worldmap::WorldmapRenderer>>*)&local_58->field_224);
                    iVar4 = pWVar2->field_240;
                    local_44 = (float)((int)fVar14 / 2 + iVar4 + 1);
                    iVar1 = pWVar2->field_244;
                    local_60 = iVar11 / 2 + iVar1 + 1;
                    local_50 = extraout_EAX;
                    uStack_4c = extraout_var;
                    local_40.GetX();
                    local_40.field_8.GetX();
                    rs2lib::worldmap::WorldmapRenderer::GetMapElementsAtScreenCoord(
                        (int)&local_f8, (int)local_50, ~((int)fVar14 / 2) + iVar4, ~(iVar11 / 2) + iVar1, (int)local_44,
                        local_60, param_5, param_6, param_7, param_8);
                    eastl::list<shared_ptr<rs2lib::worldmap::MapElement>, BucketAllocatorEASTL>::operator=(
                        local_130, (list*)&local_f8);
                    local_f8.~list();
                }
                new (&local_f8) eastl::allocator("EASTL hash_map");
                eastl::hash_map<int, shared_ptr<rs2lib::worldmap::MapElement>, eastl::hash<int>, eastl::equal_to<int>,
                                eastl::allocator, false>::hash_map(local_1c0, (allocator*)&local_f8);
                eastl::list<console::Line, eastl::allocator>::begin(local_70);
                eastl::list<console::Line, eastl::allocator>::end(local_78);
                local_58 = (Worldmap*)&local_58->field_712;
                bVar12 = eastl::operator!=((eastl*)local_70, (hashtable_iterator_base*)local_78, extraout_RDX);
                if (bVar12) {
                    do {
                        this_01 =
                            (shared_ptr*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)local_70);
                        plVar5 = (long*)shared_ptr<rs2lib::worldmap::MapElement>::operator->(
                            (shared_ptr<rs2lib::worldmap::MapElement>*)this_01);
                        local_5c = (**(code**)(*plVar5 + 8))(plVar5);
                        psVar6 = (shared_ptr<rs2lib::worldmap::MapElement>*)
                            eastl::hash_map<int, shared_ptr<rs2lib::worldmap::MapElement>, eastl::hash<int>,
                                            eastl::equal_to<int>, eastl::allocator, false>::operator[](local_1c0,
                                                                                                       &local_5c);
                        shared_ptr<rs2lib::worldmap::MapElement>::operator=(psVar6, this_01);
                        new (&local_f8) HookReq();
                        plVar5 = (long*)shared_ptr<rs2lib::worldmap::MapElement>::operator->(
                            (shared_ptr<rs2lib::worldmap::MapElement>*)this_01);
                        iVar4 = (**(code**)(*plVar5 + 8))(plVar5);
                        lVar7 = shared_ptr<rs2lib::worldmap::MapElement>::operator->(
                            (shared_ptr<rs2lib::worldmap::MapElement>*)this_01);
                        lVar8 = shared_ptr<rs2lib::worldmap::MapElement>::operator->(
                            (shared_ptr<rs2lib::worldmap::MapElement>*)this_01);
                        new (&local_118) rs2lib::worldmap::MapElementPosition(iVar4, (CoordGrid*)(lVar7 + 20),
                                                                              (CoordGrid*)(lVar8 + 8));
                        local_f8.clear();
                        local_f8.set_max_size(3, 3);
                        new (&local_178) HookArg(&local_118);
                        pHVar9 = (HookArg*)Array<HookArg, eastl::allocator>::operator[](
                            (Array<HookArg, eastl::allocator>*)&local_f8, 0);
                        HookArg::operator=(pHVar9, &local_178);
                        local_178.~LanguageMessage();
                        iVar4 = local_40.GetX();
                        new (&local_178) HookArg(iVar4);
                        pHVar9 = (HookArg*)Array<HookArg, eastl::allocator>::operator[](
                            (Array<HookArg, eastl::allocator>*)&local_f8, 1);
                        HookArg::operator=(pHVar9, &local_178);
                        local_178.~LanguageMessage();
                        iVar4 = local_40.field_8.GetX();
                        new (&local_178) HookArg(iVar4);
                        pHVar9 = (HookArg*)Array<HookArg, eastl::allocator>::operator[](
                            (Array<HookArg, eastl::allocator>*)&local_f8, 2);
                        HookArg::operator=(pHVar9, &local_178);
                        local_178.~LanguageMessage();
                        eastl::hashtable<int, eastl::pair<int const, shared_ptr<ChatLine>>, eastl::allocator,
                                         eastl::use_first<eastl::pair<int const, shared_ptr<ChatLine>>>,
                                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                         true>::find((int*)&local_178);
                        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                         true>::end();
                        bVar12 = eastl::operator!=((eastl*)&local_178, local_188, extraout_RDX_00);
                        local_f8.field_120._4_4_ = (uint)bVar12 * 2 + 15;
                        ScriptRunner::ExecuteScript(&local_f8, 500000);
                        local_f8.~HookReq();
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)local_70);
                        bVar12 =
                            eastl::operator!=((eastl*)local_70, (hashtable_iterator_base*)local_78, extraout_RDX_01);
                    } while (bVar12);
                }
                eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                                 eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                 eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
                eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                phVar10 = extraout_RDX_02;
                while (true) {
                    bVar12 = eastl::operator!=((eastl*)local_188, (hashtable_iterator_base*)local_70, phVar10);
                    if (!bVar12)
                        break;
                    lVar7 = local_188->HeapBeginPtr();
                    psVar6 = (shared_ptr<rs2lib::worldmap::MapElement>*)(lVar7 + 8);
                    plVar5 = (long*)shared_ptr<rs2lib::worldmap::MapElement>::operator->(psVar6);
                    local_118.field_0 = (**(code**)(*plVar5 + 8))(plVar5);
                    eastl::hashtable<int, eastl::pair<int const, shared_ptr<ChatLine>>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, shared_ptr<ChatLine>>>,
                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::find((int*)&local_f8);
                    eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                    bVar12 =
                        eastl::operator==((eastl*)&local_f8, (hashtable_iterator_base*)&local_178, extraout_RDX_04);
                    if (bVar12) {
                        new (&local_f8) HookReq();
                        plVar5 = (long*)shared_ptr<rs2lib::worldmap::MapElement>::operator->(psVar6);
                        iVar4 = (**(code**)(*plVar5 + 8))(plVar5);
                        lVar7 = shared_ptr<rs2lib::worldmap::MapElement>::operator->(psVar6);
                        lVar8 = shared_ptr<rs2lib::worldmap::MapElement>::operator->(psVar6);
                        new (&local_118) rs2lib::worldmap::MapElementPosition(iVar4, (CoordGrid*)(lVar7 + 20),
                                                                              (CoordGrid*)(lVar8 + 8));
                        local_f8.clear();
                        local_f8.set_max_size(3, 3);
                        new (&local_178) HookArg(&local_118);
                        pHVar9 = (HookArg*)Array<HookArg, eastl::allocator>::operator[](
                            (Array<HookArg, eastl::allocator>*)&local_f8, 0);
                        HookArg::operator=(pHVar9, &local_178);
                        local_178.~LanguageMessage();
                        iVar4 = local_40.GetX();
                        new (&local_178) HookArg(iVar4);
                        pHVar9 = (HookArg*)Array<HookArg, eastl::allocator>::operator[](
                            (Array<HookArg, eastl::allocator>*)&local_f8, 1);
                        HookArg::operator=(pHVar9, &local_178);
                        local_178.~LanguageMessage();
                        iVar4 = local_40.field_8.GetX();
                        new (&local_178) HookArg(iVar4);
                        pHVar9 = (HookArg*)Array<HookArg, eastl::allocator>::operator[](
                            (Array<HookArg, eastl::allocator>*)&local_f8, 2);
                        HookArg::operator=(pHVar9, &local_178);
                        local_178.~LanguageMessage();
                        local_f8.field_120._4_4_ = 16;
                        ScriptRunner::ExecuteScript(&local_f8, 500000);
                        local_f8.~HookReq();
                    }
                    eastl::hashtable_iterator<
                        eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>, true,
                        false>::
                    operator++((hashtable_iterator<
                                eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>,
                                true, false>*)local_188);
                    phVar10 = extraout_RDX_03;
                }
                eastl::hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash, eastl::equal_to<Font>,
                                eastl::allocator,
                                false>::operator=((hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash,
                                                            eastl::equal_to<Font>, eastl::allocator, false>*)local_58,
                                                  (hash_map*)local_1c0);
                eastl::hash_map<int, shared_ptr<rs2lib::worldmap::MapElement>, eastl::hash<int>, eastl::equal_to<int>,
                                eastl::allocator, false>::~hash_map(local_1c0);
                eastl::list<shared_ptr<rs2lib::worldmap::MapElement>, BucketAllocatorEASTL>::~list(local_130);
            }
        }
    }

    // 0x100026950, 144 bytes, placed by class name
    // Worldmap::Zoom()
    void Worldmap::Zoom() {
        int iVar2;
        long lVar3;
        ulonglong uVar4;
        _func_decltype_nullptr* in_RSI;
        unique_ptr* this_00;
        float fVar5;

        lVar3 = Client::Instance();
        this_00 = (unique_ptr*)(lVar3 + 52920);
        if (!std::operator!=(this_00, in_RSI)) {
            if (field_264 == field_268) {
                return;
            }
            uVar4 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this_00);
            iVar2 = (int)uVar4 - (int)field_280;
            if (iVar2 < 513) {
                fVar5 = (float)iVar2 * 0.001953125 * (field_268 - field_272) + field_272;
                goto LAB_1000269c6;
            }
        }
        fVar5 = field_268;
    LAB_1000269c6:
        field_264 = fVar5;
    }

    // 0x1000269e0, 256 bytes, placed by class name
    // Worldmap::Move()
    void Worldmap::Move() {
        int* piVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        if (Moving(this) != '\0') {
            local_34 = field_240;
            local_38 = field_244;
            iVar5 = field_260 - local_38;
            iVar6 = 0;
            iVar3 = 0;
            iVar4 = field_256 - local_34;
            if (iVar4 != 0) {
                local_40 = -iVar4;
                if (-iVar4 < 0) {
                    local_40 = iVar4;
                }
                piVar2 = std::min<int>(&field_4, &local_40);
                iVar3 = iVar4 / *piVar2;
            }
            if (iVar5 != 0) {
                local_3c = -iVar5;
                if (-iVar5 < 0) {
                    local_3c = iVar5;
                }
                piVar2 = std::min<int>(&field_4, &local_3c);
                iVar6 = iVar5 / *piVar2;
            }
            UpdateTile(this, iVar3 + local_34, iVar6 + local_38, true);
            if ((field_240 == field_256) && (field_244 == field_260)) {
                field_256 = -1;
                field_260 = -1;
            }
        }
    }

    // 0x100026ae0, 32 bytes, placed by class name
    // Worldmap::Moving()
    bool Worldmap::Moving() {
        if (field_256 == -1) {
            return false;
        }
        return field_260 != -1;
    }

    // 0x100026ce0, 400 bytes, placed by class name
    // Worldmap::HandleMouse(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>, bool, bool)
    void Worldmap::HandleMouse(undefined4 param_2, undefined4 param_3, char param_4, undefined4 param_5) {
        float fVar1;
        int iVar2;
        int iVar3;
        char cVar4;
        int iVar5;
        int iVar6;
        long lVar7;
        long lVar8;
        CoordType<UICoordSpecializer>* pCVar9;
        undefined4* puVar10;
        CoordMapSquare local_40;
        undefined4 local_34;

        lVar7 = CurrentTimeMillis();
        local_34 = param_3;
        HandleClickLogic(this, param_2, param_3, param_5, lVar7);
        lVar8 = Client::Instance();
        cVar4 = Moving(this);
        if ((cVar4 == '\0') && ((((char)param_5 != '\0' || (param_4 != '\0')) &&
                                 (cVar4 = ((lVar8 + 8496))->IsDragging(), cVar4 == '\0')))) {
            pCVar9 = (CoordType<UICoordSpecializer>*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](lVar8 +
                                                                                                                8560);
            local_34 = *(undefined4*)pCVar9;
            if ((char)param_5 != '\0') {
                field_384 = field_240;
                field_388 = field_244;
            }
            param_2 = local_34;
            if (field_384 != -1) {
                puVar10 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](lVar8 + 8528);
                local_40.m_x = CoordType<UICoordSpecializer>::operator-(pCVar9, *puVar10);
                pCVar9 = (CoordType<UICoordSpecializer>*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                    lVar8 + 8576);
                puVar10 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](lVar8 + 8544);
                local_40._8_4_ = CoordType<UICoordSpecializer>::operator-(pCVar9, *puVar10);
                iVar2 = field_384;
                iVar5 = local_40.GetX();
                fVar1 = field_268;
                iVar3 = field_388;
                iVar6 = local_40.field_8.GetX();
                UpdateTile(this, iVar2 - (int)((float)iVar5 / fVar1), (int)((float)iVar6 / field_268) + iVar3, false);
                param_2 = local_34;
            }
        } else {
            ResetDrag(this);
        }
        if ((char)param_5 != '\0') {
            field_392 = lVar7;
            field_400 = param_2;
            field_404 = local_34;
        }
    }

    // 0x100026e70, 912 bytes, placed by class name
    // Worldmap::HandleClickLogic(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>, bool, long long)
    void Worldmap::HandleClickLogic(uint param_2, uint param_3, undefined4 param_4, long param_5) {
        undefined1* puVar1;
        char cVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        WorldmapAreaMetadata* this_00;
        ChangeLocationRequest* this_01;
        Client* this_02;
        long lVar7;
        ServerConnection* pSVar8;
        undefined8 uVar9;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this_03;
        float fVar10;
        SuperShuffledPacketFactory local_a8;
        undefined1 local_98[64];
        undefined1 local_48[8];
        undefined1 local_40[12];
        float local_34;

        puVar1 = &field_192;
        local_48._0_4_ = param_2;
        local_40._0_4_ = param_3;
        if (operator!=((shared_ptr*)puVar1, (_func_decltype_nullptr*)0)) {
            local_40._8_4_ = (BADTYPE)field_240;
            iVar4 = local_48->GetX();
            iVar5 = (&field_296)->GetX();
            local_34 = (float)(iVar4 - iVar5);
            iVar4 = GetSpriteModIconsID();
            fVar10 = (local_34 - (float)iVar4 * 0.5 * field_264) / field_264 + (float)local_40._8_4_;
            local_40._8_4_ = (BADTYPE)field_244;
            iVar4 = local_40->GetX();
            iVar5 = (&field_300)->GetX();
            local_34 = (float)(iVar4 - iVar5);
            GetTileHeight(this);
            iVar4 = shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)puVar1);
            this_00 = (WorldmapAreaMetadata*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)puVar1);
            iVar5 = this_00->GetMinMapX();
            this_01 = (ChangeLocationRequest*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)puVar1);
            this_01->GetSeqDelay();
            local_98->TargetToSourceTile(iVar4, (int)fVar10 + iVar5 * 64);
            puVar1 = &field_768;
            *(undefined4*)&field_776 = local_98._8_4_;
            *(ulong*)&field_768 = CONCAT44(local_98._4_4_, local_98._0_4_);
            this_02 = (Client*)Client::Instance();
            cVar3 = puVar1->IsSet();
            if ((cVar3 != '\0') && ((char)param_4 != '\0')) {
                cVar3 = this_02->IsPlayerAdmin();
                if (cVar3 != '\0') {
                    cVar3 = (&this_02->field_8496, 107)->KeyHeld();
                    if ((cVar3 != '\0') && (cVar3 = (&this_02->field_8496, 81)->KeyHeld(), cVar3 != '\0')) {
                        iVar4 = puVar1->GetZ();
                        iVar5 = puVar1->GetPos();
                        iVar6 = puVar1->GetX();
                        this_02->TelePlayer(iVar4, iVar5, iVar6, false);
                        return;
                    }
                }
                if (field_408 != '\0') {
                    local_98._0_4_ =
                        CoordType<UICoordSpecializer>::operator-((CoordType<UICoordSpecializer>*)local_48, field_400);
                    iVar4 = local_98->GetX();
                    local_98._0_4_ =
                        CoordType<UICoordSpecializer>::operator-((CoordType<UICoordSpecializer>*)local_40, field_404);
                    iVar5 = local_98->GetX();
                    if (500 < param_5 - field_392) {
                        return;
                    }
                    if (iVar4 < -25) {
                        return;
                    }
                    if (25 < iVar4) {
                        return;
                    }
                    if (iVar5 < -25) {
                        return;
                    }
                    if (25 < iVar5) {
                        return;
                    }
                }
                lVar7 = Client::Instance();
                pSVar8 = (ServerConnection*)
                             std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                 (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)(lVar7 + 19120));
                uVar9 = pSVar8->GetOutgoingEncryption();
                local_98->MakeClientMessage(7, uVar9);
                new (&local_a8) SuperShuffledPacketFactory((SuperPacket*)(local_98 + 8));
                this_03 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_a8.p2_alt2();
                iVar4 = puVar1->ToBitPacked();
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(this_03, iVar4);
                lVar7 = Client::Instance();
                pSVar8 = (ServerConnection*)
                             std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                 (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)(lVar7 + 19120));
                pSVar8->SendClientMessage(local_98);
                field_392 = 0;
                local_98->~ClientMessage();
            }
        } else {
            *(undefined4*)&field_776 = DAT_100fc9248;
            *(undefined8*)&field_768 = rs2lib::CoordGrid::CoordGridNull;
        }
    }

    // 0x100027210, 64 bytes, placed by class name
    // Worldmap::UpdateTile(int, int, bool)
    void Worldmap::UpdateTile(int param_1, int param_2, bool param_3) {
        undefined8 uVar1;
        undefined3 in_register_00000009;

        field_240 = param_1;
        field_244 = param_2;
        uVar1 = CurrentTimeMillis();
        field_248 = (int)uVar1;
        field_252 = (int)((ulong)uVar1 >> 32);
        if (CONCAT31(in_register_00000009, param_3) != 0) {
            ResetDrag(this);
        }
    }

    // 0x100027250, 32 bytes, placed by class name
    // Worldmap::ResetDrag()
    void Worldmap::ResetDrag() {
        field_384 = -1;
        field_388 = -1;
    }

    // 0x100027270, 272 bytes, placed by class name
    // Worldmap::FindMapareaForSourceTile(int, int, int)
    Worldmap* Worldmap::FindMapareaForSourceTile(int param_1, int param_2, int param_3) {
        bool bVar1;
        char cVar2;
        long lVar3;
        WorldmapAreaMetadata* pWVar4;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        int in_R8D;
        shared_ptr* this_00;
        Worldmap* this_01;
        hashtable_iterator_base local_60[16];
        eastl local_50[16];
        int local_34;

        local_34 = in_R8D;
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator!=(local_50, local_60, extraout_RDX);
        if (bVar1) {
            lVar3 = local_50->HeapBeginPtr();
            this_00 = (shared_ptr*)(lVar3 + 32);
            pWVar4 = (WorldmapAreaMetadata*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)this_00);
            cVar2 = pWVar4->ContainsSourceTile(param_2, param_3, local_34);
            if (cVar2 == '\0') {
                do {
                    eastl::hashtable_iterator<
                        eastl::pair<eastl::stringconst, shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>>, false,
                        false>::
                    operator++((hashtable_iterator<
                                eastl::pair<eastl::stringconst, shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>>,
                                false, false>*)local_50);
                    bVar1 = eastl::operator!=(local_50, local_60, extraout_RDX_00);
                    if (!bVar1)
                        goto LAB_10002735b;
                    lVar3 = local_50->HeapBeginPtr();
                    this_00 = (shared_ptr*)(lVar3 + 32);
                    pWVar4 = (WorldmapAreaMetadata*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                        (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)this_00);
                    cVar2 = pWVar4->ContainsSourceTile(param_2, param_3, local_34);
                } while (cVar2 == '\0');
            }
            this_01 = (Worldmap*)this;
            new ((Worldmap*)this) shared_ptr<dash3d::Decor>(this_00);
            if (bVar1 != false) {
                return this_01;
            }
        } else {
        LAB_10002735b:
            this_01 = (Worldmap*)this;
        }
        new (this_01) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        return this_01;
    }

    // 0x1000273a0, 224 bytes, placed by class name
    // Worldmap::UpdateMaparea(int, int, int, bool)
    void Worldmap::UpdateMaparea(int param_1, int param_2, int param_3, bool param_4) {
        bool bVar1;
        shared_ptr local_48;
        int local_38;

        local_38 = param_3;
        FindMapareaForSourceTile((Worldmap*)&local_48, (int)this, param_1, param_2);
        bVar1 = operator==(&local_48, (_func_decltype_nullptr*)0);
        if (bVar1) {
            if (!param_4)
                goto LAB_100027445;
            shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator=(
                (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)&local_48, (shared_ptr*)&field_176);
        }
        bVar1 = operator!=(&local_48, (shared_ptr*)&field_208);
        if (bVar1 || param_4) {
            shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator=(
                (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)&field_208, &local_48);
            SwitchToMap(this, &local_48);
        } else if (!param_4)
            goto LAB_100027445;
        Reset((int)this, param_1, param_2);
    LAB_100027445:
        local_48.~shared_ptr();
    }

    // 0x1000274b0, 480 bytes, placed by class name
    // Worldmap::Reset(int, int, int)
    void Worldmap::Reset(int param_1, int param_2, int param_3) {
        undefined1* this;
        bool bVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        _func_decltype_nullptr* p_Var6;
        WorldmapAreaMetadata* pWVar7;
        array<int, 2ul>* this_00;
        int* piVar8;
        ChangeLocationRequest* this_01;
        Worldmap* this_02;
        WorldmapRenderer* this_03;
        undefined4 in_register_0000003c;
        Worldmap* this_04;
        float fVar9;
        unique_ptr local_40[8];
        unique_ptr local_38[8];

        this_04 = (Worldmap*)CONCAT44(in_register_0000003c, param_1);
        this = &this_04->field_192;
        bVar1 = operator==((shared_ptr*)this, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            p_Var6 = (_func_decltype_nullptr*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)this);
            local_38->SourceToTargetTile((int)p_Var6, param_2, param_3);
            bVar1 = std::operator==(local_38, p_Var6);
            if (bVar1) {
                iVar2 = shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                    (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)this);
                pWVar7 = (WorldmapAreaMetadata*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                    (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)this);
                iVar3 = pWVar7->GetOriginY();
                pWVar7 = (WorldmapAreaMetadata*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                    (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)this);
                iVar4 = pWVar7->GetOriginX();
                pWVar7 = (WorldmapAreaMetadata*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                    (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)this);
                pWVar7->GetOriginZ();
                local_40->SourceToTargetTile(iVar2, iVar3, iVar4);
                std::unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>>::operator=(
                    (unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>>*)local_38, local_40);
                local_40->~unique_ptr();
            }
            this_00 = (array<int, 2ul>*)
                std::unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>>::operator*(
                    (unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>>*)local_38);
            piVar8 = (int*)std::array<int, 2ul>::operator[](this_00, 0);
            iVar2 = *piVar8;
            pWVar7 = (WorldmapAreaMetadata*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)this);
            iVar4 = pWVar7->GetMinMapX();
            piVar8 = (int*)std::array<int, 2ul>::operator[](this_00, 1);
            iVar3 = *piVar8;
            this_01 = (ChangeLocationRequest*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)this);
            iVar5 = this_01->GetSeqDelay();
            UpdateTile(this_04, iVar2 + iVar4 * -64, iVar3 + iVar5 * -64, true);
            this_04->field_256 = -1;
            this_04->field_260 = -1;
            this_02 = (Worldmap*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)this);
            iVar2 = this_02->GetStickTime();
            fVar9 = (float)ZoomPercentToScale(this_02, iVar2);
            this_04->field_264 = fVar9;
            this_04->field_268 = fVar9;
            (&this_04->field_672)->clear();
            local_40->begin();
            this_04->field_704 = local_40[0];
            this_04->field_705 = local_40[1];
            this_04->field_706 = local_40[2];
            this_04->field_707 = local_40[3];
            this_04->field_708 = local_40[4];
            this_04->field_709 = local_40[5];
            this_04->field_710 = local_40[6];
            this_04->field_711 = local_40[7];
            this_03 =
                (WorldmapRenderer*)std::unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                                   std::default_delete<rs2lib::worldmap::WorldmapRenderer>>::
                operator->((unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                       std::default_delete<rs2lib::worldmap::WorldmapRenderer>>*)&this_04->field_224);
            this_03->Reset();
            local_38->~unique_ptr();
        }
    }

    // 0x100027690, 96 bytes, placed by class name
    // Worldmap::SwitchToMap(int)
    void Worldmap::SwitchToMap(int param_1) {
        undefined4 in_register_0000003c;
        shared_ptr local_28;

        GetMapareaById((Worldmap*)&local_28, param_1);
        if (operator!=(&local_28, (_func_decltype_nullptr*)0)) {
            SwitchToMap((Worldmap*)CONCAT44(in_register_0000003c, param_1), &local_28);
        }
        local_28.~shared_ptr();
    }

    // 0x1000276f0, 256 bytes, placed by class name
    // Worldmap::GetMapareaById(int)
    Worldmap* Worldmap::GetMapareaById(int param_1) {
        bool bVar1;
        int iVar2;
        long lVar3;
        CoordMapSquare* pCVar4;
        int in_EDX;
        undefined4 extraout_EDX;
        undefined4 extraout_EDX_00;
        undefined4 extraout_var;
        undefined4 extraout_var_00;
        shared_ptr* this_00;
        Worldmap* this_01;
        hashtable_iterator_base local_58[16];
        eastl local_48[16];

        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator!=(local_48, local_58, (hashtable_iterator_base*)CONCAT44(extraout_var, extraout_EDX));
        if (bVar1) {
            lVar3 = local_48->HeapBeginPtr();
            this_00 = (shared_ptr*)(lVar3 + 32);
            pCVar4 = (CoordMapSquare*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)this_00);
            iVar2 = pCVar4->GetX();
            if (iVar2 != in_EDX) {
                do {
                    eastl::hashtable_iterator<
                        eastl::pair<eastl::stringconst, shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>>, false,
                        false>::
                    operator++((hashtable_iterator<
                                eastl::pair<eastl::stringconst, shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>>,
                                false, false>*)local_48);
                    bVar1 = eastl::operator!=(local_48, local_58,
                                              (hashtable_iterator_base*)CONCAT44(extraout_var_00, extraout_EDX_00));
                    if (!bVar1)
                        goto LAB_1000277c4;
                    lVar3 = local_48->HeapBeginPtr();
                    this_00 = (shared_ptr*)(lVar3 + 32);
                    pCVar4 = (CoordMapSquare*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                        (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)this_00);
                    iVar2 = pCVar4->GetX();
                } while (iVar2 != in_EDX);
            }
            this_01 = (Worldmap*)this;
            new ((Worldmap*)this) shared_ptr<dash3d::Decor>(this_00);
            if (bVar1 != false) {
                return this_01;
            }
        } else {
        LAB_1000277c4:
            this_01 = (Worldmap*)this;
        }
        new (this_01) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        return this_01;
    }

    // 0x1000277f0, 64 bytes, placed by class name
    // Worldmap::GetCurrentMapareaId()
    undefined8 Worldmap::GetCurrentMapareaId() {
        bool bVar1;
        undefined8 uVar2;
        CoordMapSquare* this_00;

        bVar1 = operator==((shared_ptr*)&field_192, (_func_decltype_nullptr*)0);
        uVar2 = 4294967295;
        if (!bVar1) {
            this_00 = (CoordMapSquare*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)&field_192);
            uVar2 = this_00->GetX();
        }
        return uVar2;
    }

    // 0x100027830, 32 bytes, placed by class name
    // Worldmap::GetCurrentMaparea()
    Worldmap* Worldmap::GetCurrentMaparea() {
        long in_RSI;

        new (this) shared_ptr<dash3d::Decor>((shared_ptr*)(in_RSI + 192));
        return this;
    }

    // 0x100027850, 240 bytes, placed by class name
    // Worldmap::SwitchToMap(shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> const&, rs2lib::CoordGrid&, rs2lib::CoordGrid&, bool)
    void Worldmap::SwitchToMap(shared_ptr* param_1, CoordGrid* param_2, CoordGrid* param_3, bool param_4) {
        undefined1* this_00;
        WorldmapAreaMetadata* this_01;
        bool bVar1;
        int iVar3;
        int iVar4;
        int iVar5;

        bVar1 = operator==(param_1, (_func_decltype_nullptr*)0);
        if (bVar1) {
            return;
        }
        this_00 = &field_192;
        bVar1 = operator==((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
        if ((bVar1) || (bVar1 = operator!=((shared_ptr*)this_00, param_1), bVar1)) {
            MapSwitch(this, param_1);
        }
        if (!param_4) {
            this_01 = (WorldmapAreaMetadata*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)this_00);
            iVar3 = param_2->GetX();
            iVar4 = param_2->GetZ();
            iVar5 = param_2->GetPos();
            if (this_01->ContainsSourceTile(iVar3, iVar4, iVar5) != '\0') {
                param_3 = param_2;
            }
        }
        iVar3 = param_3->GetX();
        iVar4 = param_3->GetZ();
        param_3->GetPos();
        Reset((int)this, iVar3, iVar4);
    }

    // 0x100027940, 160 bytes, placed by class name
    // Worldmap::MapSwitch(shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> const&)
    void Worldmap::MapSwitch(shared_ptr* param_1) {
        WorldmapRenderer* this_00;
        WorldmapLoader* this_01;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_02;
        basic_string* pbVar1;

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator=(
            (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)&field_192, param_1);
        this_00 = operator_new(296);
        rs2lib::worldmap::WorldmapRenderer::WorldmapRenderer(this_00, (shared_ptr*)&field_104, (hash_map*)&field_48,
                                                             field_16, field_24);
        (&field_224, this_00)->reset();
        this_01 = (WorldmapLoader*)std::unique_ptr<WorldmapLoader, std::default_delete<WorldmapLoader>>::operator->(
            (unique_ptr<WorldmapLoader, std::default_delete<WorldmapLoader>>*)&field_232);
        this_02 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)
                      shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                          (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)&field_192);
        pbVar1 = (basic_string*)
            eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>::second(this_02);
        this_01->SwitchMapArea(pbVar1);
    }

    // 0x1000279e0, 1168 bytes, placed by class name
    // Worldmap::RenderWorldmap(int, int, int, int, int, graphics::Pix2D&)
    void Worldmap::RenderWorldmap(int param_1, int param_2, int param_3, int param_4, int param_5, Pix2D* param_6) {
        undefined1* this_00;
        undefined1* this_01;
        Worldmap* pWVar1;
        ulong uVar2;
        ulong uVar3;
        char cVar4;
        int iVar5;
        int iVar6;
        WorldmapLoader* this_02;
        WorldmapRenderer* pWVar7;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_03;
        basic_string* pbVar8;
        long lVar9;
        Client* this_04;
        PixfontGeneric* this_05;
        int iVar10;
        float fVar11;
        float fVar12;
        eastl::string local_e0[32];
        array local_c0[16];
        CoordGrid local_b0[2];
        hash_set* local_90;
        undefined4 local_88[9];
        int local_64;
        Worldmap* local_60;
        ulong local_58;
        ulong local_50;
        ulong local_48;
        int local_40;
        int local_3c;
        Js5* local_38;

        local_64 = param_5;
        local_60 = this;
        param_6->SaveClipping(local_c0);
        local_40 = param_3 + param_1;
        local_3c = param_2 + param_4;
        param_6->SetClipping(param_1, param_2, local_40, local_3c);
        (**(code**)(param_6->field_0 + 32))(param_6, param_1, param_2, param_3, (ulong)(uint)param_4, 0);
        this_02 = (WorldmapLoader*)std::unique_ptr<WorldmapLoader, std::default_delete<WorldmapLoader>>::operator->(
            (unique_ptr<WorldmapLoader, std::default_delete<WorldmapLoader>>*)&local_60->field_232);
        iVar5 = this_02->GetProgress();
        pWVar1 = local_60;
        if (iVar5 < 100) {
            RenderProgressBar(local_60, param_1, param_2, param_3, param_4, iVar5, param_6);
        } else {
            this_00 = &local_60->field_224;
            local_58 = (ulong)(uint)param_1;
            local_50 = (ulong)(uint)param_2;
            local_48 = (ulong)(uint)param_4;
            pWVar7 = (WorldmapRenderer*)std::unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                                        std::default_delete<rs2lib::worldmap::WorldmapRenderer>>::
                     operator->((unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                            std::default_delete<rs2lib::worldmap::WorldmapRenderer>>*)this_00);
            cVar4 = pWVar7->IsValid();
            if (cVar4 == '\0') {
                pWVar7 = (WorldmapRenderer*)std::unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                                            std::default_delete<rs2lib::worldmap::WorldmapRenderer>>::
                         operator->((unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                                std::default_delete<rs2lib::worldmap::WorldmapRenderer>>*)this_00);
                local_38 = pWVar1->field_8;
                this_03 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>*)
                              shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                                  (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)&pWVar1->field_192);
                pbVar8 = (basic_string*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(this_03);
                eastl::string::basic_string(local_e0, pbVar8);
                lVar9 = Client::Instance();
                pWVar7->ExtractData(local_38, local_e0, *(undefined1*)(lVar9 + 8424));
                eastl::string::~basic_string(local_e0);
                pWVar7 = (WorldmapRenderer*)std::unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                                            std::default_delete<rs2lib::worldmap::WorldmapRenderer>>::
                         operator->((unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                                std::default_delete<rs2lib::worldmap::WorldmapRenderer>>*)this_00);
                cVar4 = pWVar7->IsValid();
                if (cVar4 == '\0') {
                    return;
                }
            }
            this_01 = &pWVar1->field_320;
            cVar4 = this_01->empty();
            if (cVar4 == '\0') {
                iVar5 = pWVar1->field_380 + 1;
                pWVar1->field_380 = iVar5;
                if (iVar5 % pWVar1->m_flashTics == 0) {
                    pWVar1->field_380 = 0;
                    pWVar1->field_376 = pWVar1->field_376 + 1;
                }
                if ((pWVar1->m_flashCount <= (int)pWVar1->field_376) && (pWVar1->m_perpetualFlash == false)) {
                    this_01->clear();
                }
            }
            fVar12 = 1.0 / pWVar1->field_264;
            local_90 = (hash_set*)this_01;
            local_38._0_4_ = fVar12;
            fVar12 = (float)ceil((float)param_3 * fVar12);
            fVar11 = (float)ceil((float)(int)local_48 * local_38._0_4_);
            pWVar7 = (WorldmapRenderer*)std::unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                                        std::default_delete<rs2lib::worldmap::WorldmapRenderer>>::
                     operator->((unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                            std::default_delete<rs2lib::worldmap::WorldmapRenderer>>*)this_00);
            local_48 = CONCAT44(local_48._4_4_, (int)fVar12);
            iVar5 = (int)fVar12 / 2;
            local_38 = (Js5*)CONCAT44(local_38._4_4_, (int)fVar11);
            iVar10 = (int)fVar11 / 2;
            pWVar7->RenderMap(pWVar1->field_240 - iVar5, pWVar1->field_244 - iVar10, pWVar1->field_240 + iVar5,
                              pWVar1->field_244 + iVar10, (int)local_58, (int)local_50, local_40, local_3c, param_6);
            if (pWVar1->field_640 == false) {
                iVar6 = local_64 - pWVar1->field_644;
                if (100 < iVar6) {
                    pWVar1->field_644 = local_64;
                }
                pWVar7 = (WorldmapRenderer*)std::unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                                            std::default_delete<rs2lib::worldmap::WorldmapRenderer>>::
                         operator->((unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                                std::default_delete<rs2lib::worldmap::WorldmapRenderer>>*)this_00);
                pWVar7->RenderMapElements(pWVar1->field_240 - iVar5, pWVar1->field_244 - iVar10,
                                          pWVar1->field_240 + iVar5, pWVar1->field_244 + iVar10, (int)local_58,
                                          (int)local_50, local_40, local_3c, (hash_set*)&pWVar1->field_584, local_90,
                                          pWVar1->field_380, pWVar1->m_flashTics, 100 < iVar6, param_6);
            }
            this_04 = (Client*)Client::Instance();
            cVar4 = this_04->IsPlayerAdmin();
            uVar3 = local_50;
            uVar2 = local_58;
            if (((cVar4 != '\0') && (pWVar1->field_0 != '\0')) &&
                (cVar4 = (&pWVar1->field_768)->IsSet(), cVar4 != '\0')) {
                new (local_b0) eastl::allocator("EASTL basic_string");
                new (local_88) eastl::string("Coord: ", local_b0);
                local_b0->ToString();
                eastl::string::operator+=((eastl::string*)local_88, (basic_string*)local_b0);
                local_b0->~basic_string();
                this_05 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
                    (shared_ptr<jstring::PixfontGeneric>*)&pWVar1->field_32);
                this_05->DrawString(local_88, param_6->m_subClipping + 10, param_6->field_16 + 20, 16776960, -1,
                                    param_6);
                local_88->~basic_string();
            }
            pWVar1->field_288 = (int)local_48;
            pWVar1->m_tileHeight = local_38._0_4_;
            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_88, (int)uVar2);
            *(undefined4*)&pWVar1->field_296 = local_88[0];
            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_88, (int)uVar3);
            *(undefined4*)&pWVar1->field_300 = local_88[0];
            param_6->RestoreClipping(local_c0);
        }
    }

    // 0x100027e80, 256 bytes, placed by class name
    // Worldmap::RenderProgressBar(int, int, int, int, int, graphics::Pix2D&)
    void Worldmap::RenderProgressBar(int param_1, int param_2, int param_3, int param_4, int param_5, Pix2D* param_6) {
        PixfontGeneric* this_00;
        int iVar1;
        int iVar2;

        iVar2 = param_3 / 2;
        iVar1 = param_4 / 2;
        (**(code**)(param_6->field_0 + 32))();
        param_6->DrawRect(iVar2 + param_1 + -152, param_2 + iVar1 + -38, 304, 34, 4294901760);
        (**(code**)(param_6->field_0 + 32))(param_6, iVar2 + param_1 + -150, iVar1 + -36 + param_2, param_5 * 3, 30,
                                            4294901760);
        this_00 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
            (shared_ptr<jstring::PixfontGeneric>*)&field_32);
        this_00->CentreString((basic_string*)&constants::text::loadingdotdotdot, iVar2 + param_1, param_2 + iVar1 + -18,
                              -1, -1, param_6);
    }

    // 0x100027f80, 16 bytes, placed by class name
    // Worldmap::RenderHeatmap(int, int, int, int, int, int, graphics::Pix2D&)
    void Worldmap::RenderHeatmap(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                 Pix2D* param_7) {}

    // 0x100027f90, 304 bytes, placed by class name
    // Worldmap::RenderOverview(int, int, int, int, graphics::Pix2D&)
    void Worldmap::RenderOverview(int param_1, int param_2, int param_3, int param_4, Pix2D* param_5) {
        undefined1* this_00;
        char cVar1;
        WorldmapLoader* this_01;
        WorldmapRenderer* pWVar2;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_02;
        basic_string* pbVar3;
        long lVar4;
        eastl::string local_68[32];
        WorldmapRenderer* local_48;
        Js5* local_40;
        int local_38;
        int local_34;

        local_38 = param_4;
        local_34 = param_3;
        this_01 = (WorldmapLoader*)std::unique_ptr<WorldmapLoader, std::default_delete<WorldmapLoader>>::operator->(
            (unique_ptr<WorldmapLoader, std::default_delete<WorldmapLoader>>*)&field_232);
        cVar1 = this_01->IsLoadComplete();
        if (cVar1 != '\0') {
            this_00 = &field_224;
            pWVar2 = (WorldmapRenderer*)std::unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                                        std::default_delete<rs2lib::worldmap::WorldmapRenderer>>::
                     operator->((unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                            std::default_delete<rs2lib::worldmap::WorldmapRenderer>>*)this_00);
            cVar1 = pWVar2->IsValid();
            if (cVar1 == '\0') {
                local_48 = (WorldmapRenderer*)std::unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                                              std::default_delete<rs2lib::worldmap::WorldmapRenderer>>::
                           operator->((unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                                  std::default_delete<rs2lib::worldmap::WorldmapRenderer>>*)this_00);
                local_40 = field_8;
                this_02 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>*)
                              shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                                  (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)&field_192);
                pbVar3 = (basic_string*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(this_02);
                eastl::string::basic_string(local_68, pbVar3);
                lVar4 = Client::Instance();
                local_48->ExtractData(local_40, local_68, *(undefined1*)(lVar4 + 8424));
                eastl::string::~basic_string(local_68);
                pWVar2 = (WorldmapRenderer*)std::unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                                            std::default_delete<rs2lib::worldmap::WorldmapRenderer>>::
                         operator->((unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                                std::default_delete<rs2lib::worldmap::WorldmapRenderer>>*)this_00);
                cVar1 = pWVar2->IsValid();
                if (cVar1 == '\0') {
                    return;
                }
            }
            pWVar2 = (WorldmapRenderer*)std::unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                                        std::default_delete<rs2lib::worldmap::WorldmapRenderer>>::
                     operator->((unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                            std::default_delete<rs2lib::worldmap::WorldmapRenderer>>*)this_00);
            pWVar2->RenderOverview(param_1, param_2, local_34, local_38, (hash_set*)&field_320, field_380, m_flashTics,
                                   param_5);
        }
    }

    // 0x1000280c0, 80 bytes, placed by class name
    // Worldmap::SetZoomPercent(int)
    void Worldmap::SetZoomPercent(int param_1) {
        float fVar2;

        fVar2 = (float)ZoomPercentToScale(this, param_1);
        if (fVar2 != field_268) {
            field_268 = fVar2;
            field_280 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)(Worldmap*)this);
            field_272 = field_264;
        }
    }

    // 0x100028110, 96 bytes, placed by class name
    // Worldmap::ZoomPercentToScale(int)
    undefined8 Worldmap::ZoomPercentToScale(int param_1) {
        if (param_1 < 50) {
            if (param_1 == 25) {
                return 1065353216;
            }
            if (param_1 == 37) {
                return 1069547520;
            }
        } else {
            if (param_1 == 50) {
                return 1073741824;
            }
            if (param_1 == 75) {
                return 1077936128;
            }
            if (param_1 == 100) {
                return 1082130432;
            }
        }
        return 1090519040;
    }

    // 0x100028170, 96 bytes, placed by class name
    // Worldmap::GetZoomPercent()
    undefined8 Worldmap::GetZoomPercent() {
        float fVar1;
        undefined8 uVar2;

        fVar1 = field_268;
        uVar2 = 25;
        if ((((fVar1 == 1.0) || (uVar2 = 37, fVar1 == 1.5)) || (uVar2 = 50, fVar1 == 2.0)) ||
            (uVar2 = 75, fVar1 == 3.0)) {
            return uVar2;
        }
        uVar2 = 200;
        if (fVar1 == 4.0) {
            uVar2 = 100;
        }
        return uVar2;
    }

    // 0x1000281d0, 128 bytes, placed by class name
    // Worldmap::GetCurrentMapAreaName()
    Worldmap* Worldmap::GetCurrentMapAreaName() {
        bool bVar1;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_00;
        basic_string* pbVar2;
        long in_RSI;
        allocator local_20[8];

        bVar1 = operator==((shared_ptr*)(in_RSI + 192), (_func_decltype_nullptr*)0);
        if (bVar1) {
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            new (this) eastl::string("", local_20);
        } else {
            this_00 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>*)
                          shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                              (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)(in_RSI + 192));
            pbVar2 = (basic_string*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(this_00);
            new (this) eastl::string(pbVar2);
        }
        return this;
    }

    // 0x100028250, 32 bytes, placed by class name
    // Worldmap::Load()
    void Worldmap::Load() {
        WorldmapLoader* this_00;

        this_00 = (WorldmapLoader*)std::unique_ptr<WorldmapLoader, std::default_delete<WorldmapLoader>>::operator->(
            (unique_ptr<WorldmapLoader, std::default_delete<WorldmapLoader>>*)&field_232);
        this_00->Load();
    }

    // 0x100028340, 144 bytes, placed by class name
    // Worldmap::JumpToTargetTile(int, int)
    void Worldmap::JumpToTargetTile(int param_1, int param_2) {
        undefined1* this_00;
        int iVar3;
        WorldmapAreaMetadata* pWVar4;
        ChangeLocationRequest* this_01;

        this_00 = &field_192;
        if (!operator==((shared_ptr*)this_00, (_func_decltype_nullptr*)0)) {
            pWVar4 = (WorldmapAreaMetadata*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)this_00);
            if (pWVar4->ContainsTargetTile(param_1, param_2) != '\0') {
                pWVar4 = (WorldmapAreaMetadata*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                    (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)this_00);
                iVar3 = pWVar4->GetMinMapX();
                field_256 = param_1 + iVar3 * -64;
                this_01 = (ChangeLocationRequest*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                    (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)this_00);
                iVar3 = this_01->GetSeqDelay();
                field_260 = param_2 + iVar3 * -64;
            }
        }
    }

    // 0x1000283d0, 128 bytes, placed by class name
    // Worldmap::JumpToTargetTileInstant(int, int)
    void Worldmap::JumpToTargetTileInstant(int param_1, int param_2) {
        undefined1* this_00;
        int iVar2;
        int iVar3;
        WorldmapAreaMetadata* this_01;
        ChangeLocationRequest* this_02;

        this_00 = &field_192;
        if (!operator==((shared_ptr*)this_00, (_func_decltype_nullptr*)0)) {
            this_01 = (WorldmapAreaMetadata*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)this_00);
            iVar2 = this_01->GetMinMapX();
            this_02 = (ChangeLocationRequest*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)this_00);
            iVar3 = this_02->GetSeqDelay();
            UpdateTile(this, param_1 + iVar2 * -64, param_2 + iVar3 * -64, true);
            field_256 = -1;
            field_260 = -1;
        }
    }

    // 0x100028450, 192 bytes, placed by class name
    // Worldmap::JumpToSourceTile(int, int, int)
    void Worldmap::JumpToSourceTile(int param_1, int param_2, int param_3) {
        undefined1* this;
        int iVar1;
        int* piVar2;
        bool bVar3;
        array<int, 2ul>* this_00;
        _func_decltype_nullptr* p_Var4;
        undefined4 in_register_0000003c;
        unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>> local_38[8];

        this = &((Worldmap*)CONCAT44(in_register_0000003c, param_1))->field_192;
        bVar3 = operator==((shared_ptr*)this, (_func_decltype_nullptr*)0);
        if (!bVar3) {
            p_Var4 = (_func_decltype_nullptr*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)this);
            local_38->SourceToTargetTile((int)p_Var4, param_2, param_3);
            bVar3 = std::operator!=((unique_ptr*)local_38, p_Var4);
            if (bVar3) {
                this_00 = (array<int, 2ul>*)
                    std::unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>>::operator*(
                        local_38);
                piVar2 = (int*)std::array<int, 2ul>::operator[](this_00, 0);
                iVar1 = *piVar2;
                piVar2 = (int*)std::array<int, 2ul>::operator[](this_00, 1);
                JumpToTargetTile((Worldmap*)CONCAT44(in_register_0000003c, param_1), iVar1, *piVar2);
            }
            std::unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>>::~unique_ptr(local_38);
        }
    }

    // 0x100028550, 192 bytes, placed by class name
    // Worldmap::JumpToSourceTileInstant(int, int, int)
    void Worldmap::JumpToSourceTileInstant(int param_1, int param_2, int param_3) {
        undefined1* this;
        int iVar1;
        int* piVar2;
        bool bVar3;
        array<int, 2ul>* this_00;
        _func_decltype_nullptr* p_Var4;
        undefined4 in_register_0000003c;
        unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>> local_38[8];

        this = &((Worldmap*)CONCAT44(in_register_0000003c, param_1))->field_192;
        bVar3 = operator==((shared_ptr*)this, (_func_decltype_nullptr*)0);
        if (!bVar3) {
            p_Var4 = (_func_decltype_nullptr*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)this);
            local_38->SourceToTargetTile((int)p_Var4, param_2, param_3);
            bVar3 = std::operator!=((unique_ptr*)local_38, p_Var4);
            if (bVar3) {
                this_00 = (array<int, 2ul>*)
                    std::unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>>::operator*(
                        local_38);
                piVar2 = (int*)std::array<int, 2ul>::operator[](this_00, 0);
                iVar1 = *piVar2;
                piVar2 = (int*)std::array<int, 2ul>::operator[](this_00, 1);
                JumpToTargetTileInstant((Worldmap*)CONCAT44(in_register_0000003c, param_1), iVar1, *piVar2);
            }
            std::unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>>::~unique_ptr(local_38);
        }
    }

    // 0x100028610, 80 bytes, placed by class name
    // Worldmap::GetAbsoluteTileX() const
    int Worldmap::GetAbsoluteTileX() {
        bool bVar1;
        int iVar3;
        WorldmapAreaMetadata* this_00;

        bVar1 = operator==((shared_ptr*)&field_192, (_func_decltype_nullptr*)0);
        iVar3 = -1;
        if (!bVar1) {
            iVar3 = field_240;
            this_00 = (WorldmapAreaMetadata*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)&field_192);
            iVar3 = this_00->GetMinMapX() * 64 + iVar3;
        }
        return iVar3;
    }

    // 0x100028660, 80 bytes, placed by class name
    // Worldmap::GetAbsoluteTileZ() const
    int Worldmap::GetAbsoluteTileZ() {
        bool bVar1;
        int iVar3;
        ChangeLocationRequest* this_00;

        bVar1 = operator==((shared_ptr*)&field_192, (_func_decltype_nullptr*)0);
        iVar3 = -1;
        if (!bVar1) {
            iVar3 = field_244;
            this_00 = (ChangeLocationRequest*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)&field_192);
            iVar3 = this_00->GetSeqDelay() * 64 + iVar3;
        }
        return iVar3;
    }

    // 0x1000286b0, 112 bytes, placed by class name
    // Worldmap::GetSourcePosition() const
    Worldmap* Worldmap::GetSourcePosition() {
        int iVar2;
        int iVar3;
        Worldmap* in_RSI;

        if (operator==((shared_ptr*)&in_RSI->field_192, (_func_decltype_nullptr*)0)) {
            new (this) rs2lib::CoordGrid((CoordGrid*)&rs2lib::CoordGrid::CoordGridNull);
        } else {
            iVar2 = shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)&in_RSI->field_192);
            iVar3 = GetAbsoluteTileX(in_RSI);
            GetAbsoluteTileZ(in_RSI);
            TargetToSourceTile(iVar2, iVar3);
        }
        return this;
    }

    // 0x100028720, 16 bytes, placed by class name
    // Worldmap::SetFlashCount(int)
    void Worldmap::SetFlashCount(int param_1) {
        if (0 < param_1) {
            m_flashCount = param_1;
        }
    }

    // 0x100028730, 16 bytes, placed by class name
    // Worldmap::SetFlashCountDefault()
    void Worldmap::SetFlashCountDefault() {
        m_flashCount = 3;
    }

    // 0x100028740, 16 bytes, placed by class name
    // Worldmap::SetFlashTics(int)
    void Worldmap::SetFlashTics(int param_1) {
        if (0 < param_1) {
            m_flashTics = param_1;
        }
    }

    // 0x100028750, 16 bytes, placed by class name
    // Worldmap::SetFlashTicsDefault()
    void Worldmap::SetFlashTicsDefault() {
        m_flashTics = 50;
    }

    // 0x100028760, 16 bytes, placed by class name
    // Worldmap::SetPerpetualFlash(bool)
    void Worldmap::SetPerpetualFlash(bool param_1) {
        m_perpetualFlash = param_1;
    }

    // 0x100028770, 80 bytes, placed by class name
    // Worldmap::FlashElement(int)
    void Worldmap::FlashElement(int param_1) {
        int local_38[7];
        int local_1c;

        local_1c = param_1;
        (&field_320)->clear();
        eastl::hashtable<int, int, eastl::allocator, eastl::use_self<int>, eastl::equal_to<int>, eastl::hash<int>,
                         eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, false,
                         true>::insert(local_38);
        field_376 = 0;
        field_380 = 0;
    }

    // 0x1000287c0, 144 bytes, placed by class name
    // Worldmap::FlashElementCategory(int)
    void Worldmap::FlashElementCategory(int param_1) {
        long lVar1;
        int iVar2;
        int local_48[6];

        (&field_320)->clear();
        field_376 = 0;
        field_380 = 0;
        if (0 < configdecoder::MapElementType::m_num) {
            iVar2 = 0;
            do {
                lVar1 = configdecoder::MapElementType::List(iVar2);
                if (*(int*)(lVar1 + 440) == param_1) {
                    eastl::hashtable<int, int, eastl::allocator, eastl::use_self<int>, eastl::equal_to<int>,
                                     eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                     eastl::prime_rehash_policy, false, false, true>::insert(local_48);
                }
                iVar2 = iVar2 + 1;
            } while (iVar2 < configdecoder::MapElementType::m_num);
        }
    }

    // 0x100028850, 32 bytes, placed by class name
    // Worldmap::StopCurrentFlashes()
    void Worldmap::StopCurrentFlashes() {
        (&field_320)->clear();
    }

    // 0x100028870, 32 bytes, placed by class name
    // Worldmap::SetAllMapElementsVisibility(bool)
    void Worldmap::SetAllMapElementsVisibility(bool param_1) {
        field_640 = !param_1;
    }

    // 0x100028890, 80 bytes, placed by class name
    // Worldmap::SetMapElementVisibility(int, bool)
    void Worldmap::SetMapElementVisibility(int param_1, bool param_2) {
        undefined7 in_register_00000011;
        int local_30[7];
        int local_14;

        local_14 = param_1;
        if ((int)CONCAT71(in_register_00000011, param_2) == 0) {
            eastl::hashtable<int, int, eastl::allocator, eastl::use_self<int>, eastl::equal_to<int>, eastl::hash<int>,
                             eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
                             false, true>::insert(local_30);
        } else {
            (&field_416, &local_14)->erase();
        }
        RederiveExcludedMapElements(this);
    }

    // 0x1000289b0, 160 bytes, placed by class name
    // Worldmap::RederiveExcludedMapElements()
    void Worldmap::RederiveExcludedMapElements() {
        undefined1* this_00;
        undefined1 auVar1[16];
        undefined1 auVar2[16];

        this_00 = &field_584;
        this_00->clear();
        auVar1 = eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                  eastl::prime_rehash_policy, false, true, true>::begin();
        auVar2 = (&field_416)->end();
        eastl::hashtable<int, int, eastl::allocator, eastl::use_self<int>, eastl::equal_to<int>, eastl::hash<int>,
                         eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, false,
                         true>::insert<eastl::hashtable_iterator<int, true, false>>(this_00, auVar1._0_8_, auVar1._8_8_,
                                                                                    auVar2._0_8_, auVar2._8_8_);
        auVar1 = eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                  eastl::prime_rehash_policy, false, true, true>::begin();
        auVar2 = (&field_528)->end();
        eastl::hashtable<int, int, eastl::allocator, eastl::use_self<int>, eastl::equal_to<int>, eastl::hash<int>,
                         eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, false,
                         true>::insert<eastl::hashtable_iterator<int, true, false>>(this_00, auVar1._0_8_, auVar1._8_8_,
                                                                                    auVar2._0_8_, auVar2._8_8_);
    }

    // 0x100028a50, 208 bytes, placed by class name
    // Worldmap::SetMapElementCategoryVisibility(int, bool)
    void Worldmap::SetMapElementCategoryVisibility(int param_1, bool param_2) {
        undefined1* this_00;
        int* piVar1;
        undefined7 in_register_00000011;
        int iVar2;
        int local_58[6];
        Worldmap* local_40;
        int local_38;
        int local_34;

        local_40 = this;
        local_34 = param_1;
        if ((int)CONCAT71(in_register_00000011, param_2) == 0) {
            eastl::hashtable<int, int, eastl::allocator, eastl::use_self<int>, eastl::equal_to<int>, eastl::hash<int>,
                             eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
                             false, true>::insert(local_58);
        } else {
            (&field_472, &local_34)->erase();
        }
        if (0 < configdecoder::MapElementType::m_num) {
            this_00 = &local_40->field_528;
            iVar2 = 0;
            do {
                piVar1 = (int*)configdecoder::MapElementType::List(iVar2);
                if (piVar1[110] == local_34) {
                    local_38 = *piVar1;
                    if (param_2) {
                        this_00->erase(&local_38);
                    } else {
                        eastl::hashtable<int, int, eastl::allocator, eastl::use_self<int>, eastl::equal_to<int>,
                                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                         eastl::prime_rehash_policy, false, false, true>::insert(local_58);
                    }
                }
                iVar2 = iVar2 + 1;
            } while (iVar2 < configdecoder::MapElementType::m_num);
        }
        RederiveExcludedMapElements(local_40);
    }

    // 0x100028b20, 16 bytes, placed by class name
    // Worldmap::GetAllMapElementsVisibility()
    bool Worldmap::GetAllMapElementsVisibility() {
        return field_640 == false;
    }

    // 0x100028b30, 80 bytes, placed by class name
    // Worldmap::IsMapElementVisible(int)
    void Worldmap::IsMapElementVisible(int param_1) {
        undefined8 extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        undefined8 local_38;
        undefined8 local_30;
        undefined8 local_28;
        hashtable_iterator_base* local_20;
        int local_14;

        local_14 = param_1;
        local_38 = (&field_416, &local_14)->find();
        local_30 = extraout_RDX;
        local_28 = (&field_416)->end();
        local_20 = extraout_RDX_00;
        eastl::operator==((eastl*)&local_38, (hashtable_iterator_base*)&local_28, extraout_RDX_00);
    }

    // 0x100028c10, 80 bytes, placed by class name
    // Worldmap::IsMapElementCategoryVisible(int)
    void Worldmap::IsMapElementCategoryVisible(int param_1) {
        undefined8 extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        undefined8 local_38;
        undefined8 local_30;
        undefined8 local_28;
        hashtable_iterator_base* local_20;
        int local_14;

        local_14 = param_1;
        local_38 = (&field_472, &local_14)->find();
        local_30 = extraout_RDX;
        local_28 = (&field_472)->end();
        local_20 = extraout_RDX_00;
        eastl::operator==((eastl*)&local_38, (hashtable_iterator_base*)&local_28, extraout_RDX_00);
    }

    // 0x100028c60, 816 bytes, placed by class name
    // Worldmap::BuildMinimenu(int, int, int, int, int, int)
    void Worldmap::BuildMinimenu(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
        undefined4 uVar1;
        char cVar2;
        bool bVar3;
        int iVar4;
        undefined4 uVar5;
        undefined4 uVar6;
        undefined4 uVar7;
        WorldmapLoader* this;
        long* plVar8;
        long lVar9;
        undefined8 uVar10;
        undefined4* puVar11;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        undefined4 in_register_0000003c;
        ulong uVar12;
        bool bVar13;
        float fVar14;
        float fVar15;
        MinimenuSubject local_d0;
        list<filesystem::QueueItem, SafeBucketAllocatorEASTL> local_80[24];
        list<console::Line, eastl::allocator> local_68[8];
        array<minimenu::MinimenuOps::Value, 5ul>* local_60;
        list<console::Line, eastl::allocator> local_58[8];
        Minimenu* local_50;
        long local_48;
        vector<eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>* local_40;
        shared_ptr<rs2lib::worldmap::MapElement>* local_38;

        lVar9 = CONCAT44(in_register_0000003c, param_1);
        local_40 = (vector<eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)
            CONCAT44(local_40._4_4_, param_2);
        this = (WorldmapLoader*)std::unique_ptr<WorldmapLoader, std::default_delete<WorldmapLoader>>::operator->(
            (unique_ptr<WorldmapLoader, std::default_delete<WorldmapLoader>>*)(lVar9 + 232));
        cVar2 = IsLoadComplete();
        if (cVar2 != '\0') {
            fVar15 = 1.0 / *(float*)(lVar9 + 264);
            local_48 = CONCAT44(local_48._4_4_, fVar15);
            fVar15 = (float)ceil((float)param_4 * fVar15);
            local_38 = (shared_ptr<rs2lib::worldmap::MapElement>*)CONCAT44(local_38._4_4_, param_3);
            local_50 = (Minimenu*)CONCAT44(local_50._4_4_, param_4);
            fVar14 = (float)ceil((float)param_5 * (float)local_48);
            iVar4 = std::unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                    std::default_delete<rs2lib::worldmap::WorldmapRenderer>>::
                    operator->((unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                           std::default_delete<rs2lib::worldmap::WorldmapRenderer>>*)(lVar9 + 224));
            rs2lib::worldmap::WorldmapRenderer::GetMapElementsAtScreenCoord(
                (int)local_80, iVar4, ~((int)fVar15 / 2) + *(int*)(lVar9 + 240),
                ~((int)fVar14 / 2) + *(int*)(lVar9 + 244), (int)fVar15 / 2 + *(int*)(lVar9 + 240) + 1,
                (int)fVar14 / 2 + *(int*)(lVar9 + 244) + 1, (int)local_40, (int)local_38, (int)local_50, param_5);
            cVar2 = eastl::list<filesystem::QueueItem, SafeBucketAllocatorEASTL>::empty(local_80);
            if (cVar2 == '\0') {
                eastl::list<console::Line, eastl::allocator>::begin(local_58);
                eastl::list<console::Line, eastl::allocator>::end(local_68);
                bVar3 = eastl::operator!=((eastl*)local_58, (hashtable_iterator_base*)local_68, extraout_RDX);
                if (bVar3) {
                    local_60 = (array<minimenu::MinimenuOps::Value, 5ul>*)(lVar9 + 648);
                    do {
                        local_38 = (shared_ptr<rs2lib::worldmap::MapElement>*)
                            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)local_58);
                        plVar8 = (long*)shared_ptr<rs2lib::worldmap::MapElement>::operator->(local_38);
                        iVar4 = (**(code**)(*plVar8 + 8))(plVar8);
                        lVar9 = configdecoder::MapElementType::List(iVar4);
                        local_40 =
                            (vector<eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true,
                                                                                 eastl::allocator>>*)(lVar9 + 72);
                        lVar9 = lVar9 + 272;
                        uVar12 = 4;
                        bVar3 = false;
                        local_48 = lVar9;
                        do {
                            eastl::vector<eastl::string,
                                          eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](local_40, uVar12);
                            cVar2 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::empty();
                            if (cVar2 == '\0') {
                                local_d0.CreateSubject(lVar9, 8, 18446744073709551615, 0, 4294967295);
                                lVar9 = Client::Instance();
                                local_50 = *(Minimenu**)(lVar9 + 52344);
                                uVar10 =
                                    eastl::vector<eastl::string,
                                                  eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true,
                                                                                eastl::allocator>>::operator[](local_40,
                                                                                                               uVar12);
                                puVar11 = (undefined4*)std::array<minimenu::MinimenuOps::Value, 5ul>::operator[](
                                    local_60, uVar12);
                                uVar1 = *puVar11;
                                plVar8 = (long*)shared_ptr<rs2lib::worldmap::MapElement>::operator->(local_38);
                                uVar5 = (**(code**)(*plVar8 + 8))(plVar8);
                                lVar9 = shared_ptr<rs2lib::worldmap::MapElement>::operator->(local_38);
                                uVar6 = ((lVar9 + 20))->ToBitPacked();
                                lVar9 = shared_ptr<rs2lib::worldmap::MapElement>::operator->(local_38);
                                uVar7 = ((lVar9 + 8))->ToBitPacked();
                                local_50->AddEntry(uVar10, &local_d0, uVar1, 0, uVar5, uVar6, uVar7, 0);
                                local_d0.~MinimenuSubject();
                                bVar3 = true;
                                lVar9 = local_48;
                            }
                            bVar13 = uVar12 != 0;
                            uVar12 = uVar12 - 1;
                        } while (bVar13);
                        if (bVar3)
                            break;
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)local_58);
                        bVar3 =
                            eastl::operator!=((eastl*)local_58, (hashtable_iterator_base*)local_68, extraout_RDX_00);
                    } while (bVar3);
                }
            }
            local_80->~list();
        }
    }

    // 0x100028fc0, 640 bytes, placed by class name
    // Worldmap::FindNearestMapElement(int, rs2lib::CoordGrid&)
    Worldmap* Worldmap::FindNearestMapElement(int param_1, CoordGrid* param_2) {
        char cVar1;
        bool bVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        WorldmapLoader* this_00;
        WorldmapRenderer* pWVar7;
        WorldmapAreaMetadata* this_01;
        long lVar8;
        shared_ptr* this_02;
        CommandLine* in_RCX;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        undefined4 in_register_00000034;
        eastl local_78[16];
        list<console::Line, eastl::allocator> local_68[8];
        CommandLine* local_60;
        list<console::Line, eastl::allocator> local_58[8];
        shared_ptr local_50;
        undefined4 local_3c;
        int local_38;

        lVar8 = CONCAT44(in_register_00000034, param_1);
        local_3c = SUB84(param_2, 0);
        this_00 = (WorldmapLoader*)std::unique_ptr<WorldmapLoader, std::default_delete<WorldmapLoader>>::operator->(
            (unique_ptr<WorldmapLoader, std::default_delete<WorldmapLoader>>*)(lVar8 + 232));
        cVar1 = this_00->IsLoadComplete();
        if (cVar1 != '\0') {
            pWVar7 = (WorldmapRenderer*)std::unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                                        std::default_delete<rs2lib::worldmap::WorldmapRenderer>>::
                     operator->((unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                            std::default_delete<rs2lib::worldmap::WorldmapRenderer>>*)(lVar8 + 224));
            cVar1 = pWVar7->IsValid();
            if (cVar1 != '\0') {
                this_01 = (WorldmapAreaMetadata*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                    (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)(lVar8 + 192));
                iVar3 = in_RCX->GetZ();
                iVar4 = in_RCX->GetPos();
                cVar1 = this_01->ContainsTargetTile(iVar3, iVar4);
                if (cVar1 != '\0') {
                    pWVar7 =
                        (WorldmapRenderer*)std::unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                                           std::default_delete<rs2lib::worldmap::WorldmapRenderer>>::
                        operator->((unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                               std::default_delete<rs2lib::worldmap::WorldmapRenderer>>*)(lVar8 + 224));
                    pWVar7->GetMapElements();
                    eastl::hashtable<
                        int, eastl::pair<int const, eastl::vector<rseven::Mesh, eastl::allocator>>, eastl::allocator,
                        eastl::use_first<eastl::pair<int const, eastl::vector<rseven::Mesh, eastl::allocator>>>,
                        eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                        eastl::prime_rehash_policy, false, true, true>::find((int*)local_78);
                    eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                    bVar2 = eastl::operator==(local_78, (hashtable_iterator_base*)&local_50, extraout_RDX);
                    if (!bVar2) {
                        lVar8 = local_78->HeapBeginPtr();
                        cVar1 = ((lVar8 + 8))->empty();
                        if (cVar1 == '\0') {
                            local_60 = in_RCX;
                            local_78->HeapBeginPtr();
                            new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                            eastl::list<console::Line, eastl::allocator>::begin(local_58);
                            eastl::list<console::Line, eastl::allocator>::end(local_68);
                            bVar2 = eastl::operator!=((eastl*)local_58, (hashtable_iterator_base*)local_68,
                                                      extraout_RDX_00);
                            if (bVar2) {
                                local_38 = -1;
                                do {
                                    this_02 = (shared_ptr*)
                                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                            (ListIterator<console::Line, console::Line*, console::Line&>*)local_58);
                                    lVar8 = shared_ptr<rs2lib::worldmap::MapElement>::operator->(
                                        (shared_ptr<rs2lib::worldmap::MapElement>*)this_02);
                                    iVar3 = ((lVar8 + 8))->GetZ();
                                    iVar4 = local_60->GetZ();
                                    lVar8 = shared_ptr<rs2lib::worldmap::MapElement>::operator->(
                                        (shared_ptr<rs2lib::worldmap::MapElement>*)this_02);
                                    iVar5 = ((lVar8 + 8))->GetPos();
                                    iVar6 = local_60->GetPos();
                                    iVar3 = (iVar5 - iVar6) * (iVar5 - iVar6) + (iVar3 - iVar4) * (iVar3 - iVar4);
                                    if (iVar3 == 0) {
                                        lVar8 = shared_ptr<rs2lib::worldmap::MapElement>::operator->(
                                            (shared_ptr<rs2lib::worldmap::MapElement>*)this_02);
                                        new (this) rs2lib::CoordGrid((CoordGrid*)(lVar8 + 8));
                                    } else if ((iVar3 < local_38) ||
                                               (bVar2 = operator==(&local_50, (_func_decltype_nullptr*)0), bVar2)) {
                                        shared_ptr<rs2lib::worldmap::MapElement>::operator=(
                                            (shared_ptr<rs2lib::worldmap::MapElement>*)&local_50, this_02);
                                        local_38 = iVar3;
                                    }
                                    if (iVar3 == 0) {
                                        if ((1 & 1) != 0)
                                            goto LAB_100029213;
                                        break;
                                    }
                                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                                        (ListIterator<console::Line, console::Line*, console::Line&>*)local_58);
                                    bVar2 = eastl::operator!=((eastl*)local_58, (hashtable_iterator_base*)local_68,
                                                              extraout_RDX_01);
                                } while (bVar2);
                            }
                            lVar8 = shared_ptr<rs2lib::worldmap::MapElement>::operator->(
                                (shared_ptr<rs2lib::worldmap::MapElement>*)&local_50);
                            new (this) rs2lib::CoordGrid((CoordGrid*)(lVar8 + 8));
                        LAB_100029213:
                            local_50.~shared_ptr();
                            return this;
                        }
                    }
                }
            }
        }
        new (this) rs2lib::CoordGrid((CoordGrid*)&rs2lib::CoordGrid::CoordGridNull);
        return this;
    }

    // 0x1000292e0, 256 bytes, placed by class name
    // Worldmap::OpMapElement(int, int, rs2lib::CoordGrid&, rs2lib::CoordGrid&)
    void Worldmap::OpMapElement(int param_1, int param_2, CoordGrid* param_3, CoordGrid* param_4) {
        HookArg* this_00;
        HookReq local_110;
        HookArg local_90;
        MapElementPosition local_48;

        new (&local_110) HookReq();
        new (&local_48) rs2lib::worldmap::MapElementPosition(param_2, param_3, param_4);
        local_110.set_max_size(1, 3);
        new (&local_90) HookArg(&local_48);
        this_00 =
            (HookArg*)Array<HookArg, eastl::allocator>::operator[]((Array<HookArg, eastl::allocator>*)&local_110, 0);
        HookArg::operator=(this_00, &local_90);
        local_90.~LanguageMessage();
        if (param_1 - 1008U < 5) {
            local_110.field_120._4_4_ = param_1 + -998;
        }
        ScriptRunner::ExecuteScript(&local_110, 500000);
        local_110.~HookReq();
    }

    // 0x1000293e0, 352 bytes, placed by class name
    // Worldmap::IterateMapElementsStart()
    undefined8 Worldmap::IterateMapElementsStart() {
        char cVar1;
        bool bVar2;
        WorldmapLoader* this_00;
        WorldmapRenderer* pWVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base local_80[16];
        list<console::Line, eastl::allocator> local_70[8];
        list<console::Line, eastl::allocator> local_68[8];
        list<console::Line, eastl::allocator> local_60[8];
        undefined1 local_58[8];
        undefined8 local_50[2];
        undefined8 local_40;
        Worldmap* local_38;

        this_00 = (WorldmapLoader*)std::unique_ptr<WorldmapLoader, std::default_delete<WorldmapLoader>>::operator->(
            (unique_ptr<WorldmapLoader, std::default_delete<WorldmapLoader>>*)&field_232);
        cVar1 = this_00->IsLoadComplete();
        if (cVar1 != '\0') {
            pWVar3 = (WorldmapRenderer*)std::unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                                        std::default_delete<rs2lib::worldmap::WorldmapRenderer>>::
                     operator->((unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                            std::default_delete<rs2lib::worldmap::WorldmapRenderer>>*)&field_224);
            cVar1 = pWVar3->IsValid();
            if (cVar1 != '\0') {
                pWVar3 = (WorldmapRenderer*)std::unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                                            std::default_delete<rs2lib::worldmap::WorldmapRenderer>>::
                         operator->((unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                                std::default_delete<rs2lib::worldmap::WorldmapRenderer>>*)&field_224);
                pWVar3->GetMapElements();
                local_38 = this;
                (&field_672)->clear();
                eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                                 eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                 eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
                eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                bVar2 = eastl::operator!=((eastl*)local_50, local_80, extraout_RDX);
                if (bVar2) {
                    do {
                        local_50->HeapBeginPtr();
                        eastl::list<console::Line, eastl::allocator>::end(local_70);
                        new (&local_40) eastl::ListIterator<shared_ptr<rs2lib::worldmap::MapElement>,
                                                            shared_ptr<rs2lib::worldmap::MapElement> const*,
                                                            shared_ptr<rs2lib::worldmap::MapElement> const&>(local_70);
                        eastl::list<console::Line, eastl::allocator>::begin(local_68);
                        eastl::list<console::Line, eastl::allocator>::end(local_60);
                        eastl::list<shared_ptr<rs2lib::worldmap::MapElement>, eastl::allocator>::insert<
                            eastl::ListIterator<shared_ptr<rs2lib::worldmap::MapElement>,
                                                shared_ptr<rs2lib::worldmap::MapElement>*,
                                                shared_ptr<rs2lib::worldmap::MapElement>&>>(
                            local_58, &field_672, local_40, local_68, local_60);
                        eastl::hashtable_iterator<
                            eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>, false,
                            false>::
                        operator++((hashtable_iterator<
                                    eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>,
                                    false, false>*)local_50);
                        bVar2 = eastl::operator!=((eastl*)local_50, local_80, extraout_RDX_00);
                    } while (bVar2);
                }
                local_50->begin();
                *(undefined8*)&local_38->field_704 = local_50[0];
                return IterateMapElementsNext(local_38);
            }
        }
        return 0;
    }

    // 0x100029600, 192 bytes, placed by class name
    // Worldmap::IterateMapElementsNext()
    undefined8 Worldmap::IterateMapElementsNext() {
        undefined1* this_00;
        bool bVar1;
        int iVar2;
        shared_ptr<rs2lib::worldmap::MapElement>* this_01;
        long* plVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        list<console::Line, eastl::allocator> local_40[8];
        undefined8 local_38;

        this_00 = &field_704;
        eastl::list<console::Line, eastl::allocator>::end(local_40);
        bVar1 = eastl::operator==((eastl*)this_00, (hashtable_iterator_base*)local_40, extraout_RDX);
        if (bVar1) {
        LAB_100029640:
            local_38 = 0;
        } else {
            do {
                eastl::list<console::Line, eastl::allocator>::end(local_40);
                bVar1 = eastl::operator!=((eastl*)this_00, (hashtable_iterator_base*)local_40, extraout_RDX_00);
                if (!bVar1)
                    goto LAB_100029640;
                this_01 = (shared_ptr<rs2lib::worldmap::MapElement>*)
                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)this_00);
                eastl::ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>::operator++(
                    (ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>*)local_40,
                    (int)this_00);
                plVar3 = (long*)shared_ptr<rs2lib::worldmap::MapElement>::operator->(this_01);
                iVar2 = (**(code**)(*plVar3 + 8))(plVar3);
            } while (iVar2 == -1);
            local_38 = this_01->end();
        }
        return local_38;
    }

    // 0x100029800, 192 bytes, placed by class name
    // Worldmap::NeedNewHeatmapSprite(int, int, int, int, int, int)
    bool Worldmap::NeedNewHeatmapSprite(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
        undefined1* this_00;
        int iVar1;
        long lVar3;
        int* piVar4;

        this_00 = &field_784;
        if ((((operator==((shared_ptr*)this_00, (_func_decltype_nullptr*)0)) ||
              (lVar3 = shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)this_00),
               *(int*)(lVar3 + 24) != param_1)) ||
             (lVar3 = shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)this_00),
              *(int*)(lVar3 + 28) != param_2)) ||
            (((piVar4 = (int*)std::unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                              std::default_delete<rs2lib::worldmap::WorldmapRenderer>>::
                        operator->((unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                               std::default_delete<rs2lib::worldmap::WorldmapRenderer>>*)&field_224),
               *piVar4 != field_800 ||
                   (iVar1 = field_804, lVar3 = Client::Instance(), iVar1 != *(int*)(lVar3 + 52928))) ||
              (0 < param_3)))) {
            return true;
        }
        if (param_4 < 1) {
            return param_4 + param_2 < param_6 || param_3 + param_1 < param_5;
        }
        return true;
    }

    // 0x100165a30: the linker folded this into rs2lib::PlayerModel::GetPronoun() const, which has identical code
    Worldmap::GetTileHeight() const;

} // namespace jag::oldscape::worldmap

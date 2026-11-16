// libs/oldscape/jagex3/js5/Js5LocalLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "Js5LocalLoader.h"

namespace jag::oldscape::jagex3 {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Js5LocalLoader::Shutdown();

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    Js5LocalLoader::GetIndexPercentage(Js5ArchiveId) const;

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    Js5LocalLoader::GetGroupLoadPercentage(Js5ArchiveId, Js5GroupId) const;

    // 0x1002ba830, 208 bytes, placed by class name and debug map
    // Js5LocalLoader::Initialize(char const**, unsigned int, Filename const&)
    ulong Js5LocalLoader::Initialize(char** param_1, uint param_2, Filename* param_3) {
        char* pcVar1;
        ulong in_RAX;
        eastl::string* this_00;
        ulong uVar2;
        ulong local_38;

        local_38 = in_RAX;
        ((field_0 + 8), 22, 1)->set_max_size();
        Filename::operator=((Filename*)field_96, param_3);
        (&field_400, (ulong)param_2, 1)->set_max_size();
        if (param_2 != 22) {
            /* WARNING: Subroutine does not return */
            LogAssert("numNames == Js5ArchiveId::ID_LIMIT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/js5/"
                      "Js5LocalLoader.cpp",
                      172, (char*)0);
        }
        uVar2 = 0;
        do {
            pcVar1 = param_1[uVar2];
            if (pcVar1 != (char*)0) {
                this_00 = (eastl::string*)Array<eastl::string, eastl::allocator>::operator[](
                    (Array<eastl::string, eastl::allocator>*)&field_400, uVar2);
                eastl::string::assign(this_00, pcVar1);
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 != 22);
        new (&local_38) callstack::Callstack();
        return local_38 & 4294967295;
    }

    // 0x1002baa40, 800 bytes, placed by class name and debug map
    // Js5LocalLoader::OpenJs5(Js5ArchiveId, bool, bool, bool, bool, Error*)
    undefined8 Js5LocalLoader::OpenJs5(uint param_2, undefined1 param_3, undefined1 param_4, undefined8 param_5,
                                       undefined1 param_6, undefined4* param_7) {
        Array<shared_ptr<Js5>, eastl::allocator>* this_00;
        char cVar1;
        basic_string* pbVar2;
        fixed_string* pfVar3;
        shared_ptr<Js5>* psVar4;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        Js5Local* this_02;
        Js5* pJVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined1 local_2a0[13];
        bool local_293;
        bool local_292;
        bool local_291;
        uint local_290[2];
        Filename local_288[19];
        Filename local_158[19];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_293 = (bool)param_3;
        local_292 = (bool)param_4;
        local_291 = (bool)param_6;
        local_290[0] = param_2;
        Filename::Filename(local_158);
        cVar1 = field_96->IsEmpty();
        if (cVar1 == '\0') {
            pfVar3 = (fixed_string*)Array<eastl::string, eastl::allocator>::operator[](
                (Array<eastl::string, eastl::allocator>*)&field_400, (ulong)local_290[0]);
            Filename::operator/(local_288, (Filename*)field_96, pfVar3);
            Filename::operator=(local_158, local_288);
        } else {
            pbVar2 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                (Array<eastl::string, eastl::allocator>*)&field_400, (ulong)local_290[0]);
            Filename::Filename(local_288, pbVar2);
            Filename::operator=(local_158, local_288);
        }
        local_288->~pair();
        make_shared<Js5LocalLoader::Js5Local, Js5LocalLoader&, Js5ArchiveId&, bool&, bool&, bool&>(
            (jag*)local_288, this, (Js5ArchiveId*)local_290, &local_293, &local_292, &local_291);
        this_00 = (Array<shared_ptr<Js5>, eastl::allocator>*)(field_0 + 8);
        psVar4 = (shared_ptr<Js5>*)Array<shared_ptr<Js5>, eastl::allocator>::operator[](this_00, (ulong)local_290[0]);
        shared_ptr<Js5>::operator=(psVar4, (shared_ptr*)local_288);
        local_288->~shared_ptr();
        this_01 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
            Array<shared_ptr<Js5>, eastl::allocator>::operator[](this_00, (ulong)local_290[0]);
        this_02 = (Js5Local*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
        local_2a0._8_4_ = this_02->Open(local_158);
        if (param_7 != (undefined4*)0) {
            *param_7 = local_2a0._8_4_;
        }
        cVar1 = ((local_2a0 + 8))->IsValid();
        if (cVar1 == '\0') {
            local_2a0._0_4_ = 255;
            local_2a0._4_4_ = local_290[0];
            local_288[0].field_8._0_4_ = 0;
            local_288[0]._0_8_ = 1;
            QueueGroupKey(local_2a0, local_288);
        } else {
            psVar4 =
                (shared_ptr<Js5>*)Array<shared_ptr<Js5>, eastl::allocator>::operator[](this_00, (ulong)local_290[0]);
            pJVar5 = (Js5*)shared_ptr<Js5>::operator->(psVar4);
            cVar1 = pJVar5->IsOptional();
            if (cVar1 == '\0') {
                uVar6 = logger::default_logger();
                uVar7 = local_158->GetName();
                logger::Logger::Log(uVar6, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "jagex3/js5/Js5LocalLoader.cpp",
                                    212, "Could not open %s", uVar7);
                Array<shared_ptr<Js5>, eastl::allocator>::operator[](this_00, (ulong)local_290[0]);
                shared_ptr<Js5>::reset();
            } else {
                uVar6 = logger::default_logger();
                uVar7 = local_158->GetName();
                logger::Logger::Log(uVar6, 0, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "jagex3/js5/Js5LocalLoader.cpp",
                                    207, "Could not open optional JS5 %s", uVar7);
                psVar4 = (shared_ptr<Js5>*)Array<shared_ptr<Js5>, eastl::allocator>::operator[](this_00,
                                                                                                (ulong)local_290[0]);
                pJVar5 = (Js5*)shared_ptr<Js5>::operator->(psVar4);
                pJVar5->LoadEmpty();
            }
        }
        uVar6 = Array<shared_ptr<Js5>, eastl::allocator>::operator[](this_00, (ulong)local_290[0]);
        local_158->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar6;
    }

    // 0x1002baf80, 288 bytes, placed by class name and debug map
    // Js5LocalLoader::MainLogic()
    void Js5LocalLoader::MainLogic() {
        uint uVar1;
        uint uVar2;
        char cVar3;
        uint* puVar4;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        Js5Local* this_01;
        undefined8 uVar5;
        rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
               eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>,
               eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>* this_02;
        jag local_48[16];
        rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
               eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>,
               eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>* local_38;

        this_02 = (rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
                          eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>,
                          eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>*)(field_0 + 32);
        cVar3 = eastl::rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
                              eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>,
                              eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>::empty(this_02);
        if (cVar3 == '\0') {
            local_38 = this_02;
            do {
                puVar4 = (uint*)this_02->front();
                uVar1 = *puVar4;
                uVar2 = puVar4[1];
                if (uVar1 != 255) {
                    uVar2 = uVar1;
                }
                this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    Array<shared_ptr<Js5>, eastl::allocator>::operator[](
                        (Array<shared_ptr<Js5>, eastl::allocator>*)(field_0 + 8), (ulong)uVar2);
                this_01 = (Js5Local*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
                if (uVar1 == 255) {
                    this_01->LoadIndexDataFromFile();
                } else {
                    uVar1 = puVar4[1];
                    make_shared<PacketJ<Array<unsigned char, eastl::allocator>>>(local_48);
                    uVar5 = shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                        (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_48);
                    this_01->LoadGroupDataFromFile(uVar5, uVar1);
                    if ((puVar4[2] & 1) != 0) {
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "oldscape/jagex3/js5/Js5LocalLoader.cpp",
                                        255, "How did we get here, shouldn\'t blocking fetch have picked this up?");
                    }
                    local_48->~shared_ptr();
                    this_02 = local_38;
                }
                this_02->pop_front();
                cVar3 =
                    eastl::rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
                                  eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>,
                                  eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>::empty(this_02);
            } while (cVar3 == '\0');
        }
    }

    // 0x1002bb470, 288 bytes, placed by class name and debug map
    // Js5LocalLoader::BlockingFetch(Js5RequestKey const&, Js5RequestParameters const&)
    undefined* Js5LocalLoader::BlockingFetch(Js5RequestKey* param_1, Js5RequestParameters* param_2) {
        uint uVar1;
        int iVar2;
        char cVar3;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        Js5Local* this_01;
        undefined8 uVar4;
        undefined** ppuVar5;
        uint uVar6;
        jag local_40[16];
        int local_30[2];

        uVar1 = param_1->field_0;
        uVar6 = uVar1;
        if (uVar1 == 255) {
            uVar6 = param_1->field_4;
        }
        if (((byte)*param_2 & 1) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("(params.m_priority & Js5FetchPriority::URGENT) != 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/js5/"
                      "Js5LocalLoader.cpp",
                      268, (char*)0);
        }
        this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
            Array<shared_ptr<Js5>, eastl::allocator>::operator[](
                (Array<shared_ptr<Js5>, eastl::allocator>*)(field_0 + 8), (ulong)uVar6);
        this_01 = (Js5Local*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        new (local_30) callstack::Callstack();
        if (uVar1 == 255) {
            local_30[0] = this_01->LoadIndexDataFromFile();
        } else {
            iVar2 = param_1->field_4;
            make_shared<PacketJ<Array<unsigned char, eastl::allocator>>>(local_40);
            uVar4 = shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_40);
            local_30[0] = this_01->LoadGroupDataFromFile(uVar4, iVar2);
            cVar3 = local_30->IsValid();
            if (cVar3 == '\0') {
                this_01->SetGroupData(iVar2, local_40);
            }
            local_40->~shared_ptr();
        }
        cVar3 = local_30->IsValid();
        if (cVar3 == '\0') {
            ppuVar5 = &DataStatus::READY;
        } else {
            ppuVar5 = &DataStatus::MISSING;
        }
        return *ppuVar5;
    }

    // 0x1002bb590, 80 bytes, placed by class name and debug map
    // Js5LocalLoader::GetGroupCountInCache(Js5ArchiveId) const
    undefined8 Js5LocalLoader::GetGroupCountInCache(uint param_2) {
        int iVar1;
        shared_ptr<Js5>* this_00;
        Js5* this_01;
        undefined8 uVar2;

        iVar1 = ((field_0 + 8))->end();
        uVar2 = 0;
        if ((int)param_2 < iVar1) {
            this_00 = (shared_ptr<Js5>*)Array<shared_ptr<Js5>, eastl::allocator>::operator[](
                (Array<shared_ptr<Js5>, eastl::allocator>*)(field_0 + 8), (ulong)param_2);
            this_01 = (Js5*)shared_ptr<Js5>::operator->(this_00);
            uVar2 = this_01->GetGroupCount();
        }
        return uVar2;
    }

} // namespace jag::oldscape::jagex3

namespace jag {
    // 0x1002bad60, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::jagex3::Js5LocalLoader::Js5Local>::type make_shared<oldscape::jagex3::Js5LocalLoader::Js5Local, oldscape::jagex3::Js5LocalLoader&, oldscape::jagex3::Js5ArchiveId&, bool&, bool&, bool&>(oldscape::jagex3::Js5LocalLoader&, oldscape::jagex3::Js5ArchiveId&, bool&, bool&, bool&)
    jag* jag::make_shared<oldscape::jagex3::Js5LocalLoader::Js5Local, oldscape::jagex3::Js5LocalLoader&,
                          oldscape::jagex3::Js5ArchiveId&, bool&, bool&, bool&>(Js5LocalLoader* param_1,
                                                                                Js5ArchiveId* param_2, bool* param_3,
                                                                                bool* param_4, bool* param_5) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        Js5Local* local_40[2];

        pvVar1 = (void*)aligned_alloc(776, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::jagex3::Js5LocalLoader::Js5Local, oldscape::jagex3::Js5LocalLoader&,
                                        oldscape::jagex3::Js5ArchiveId&, bool&, bool&, bool&>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::jagex3::Js5LocalLoader::Js5Local>, int,
                                   oldscape::jagex3::Js5LocalLoader::Js5Local*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag

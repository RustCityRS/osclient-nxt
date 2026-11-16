// libs/oldscape/jagex3/js5/Js5RemoteLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "Js5RemoteLoader.h"

namespace jag::oldscape::jagex3 {
    // 0x1002bc700, 160 bytes, base-object constructor, placed by class name and debug map
    // Js5RemoteLoader::Js5RemoteLoader()
    void Js5RemoteLoader::Js5RemoteLoader() {
        hash local_28[8];
        equal_to local_20[8];

        new (this) Js5Loader();
        *(undefined***)field_0 = &PTR_MainLogic_100efa0f0;
        new (&field_96, local_28, local_20)
            eastl::fixed_hash_map<Js5RequestKey, Js5RemoteRequestData, 200ul, 600ul, false, eastl::hash<Js5RequestKey>,
                                  eastl::equal_to<Js5RequestKey>, false, eastl::allocator>();
        new (&field_24296) LockFreeStack<Js5RemoteRequestData>();
        field_24304 = 0;
        std::unique_ptr<Js5NetThread, std::default_delete<Js5NetThread>>::unique_ptr<true, void>(
            (unique_ptr<Js5NetThread, std::default_delete<Js5NetThread>>*)&field_24312);
        field_24320 = '\0';
        field_24321 = '\0';
        field_24322 = 0;
        std::unique_ptr<Js5LocalCache, std::default_delete<Js5LocalCache>>::unique_ptr<true, void>(
            (unique_ptr<Js5LocalCache, std::default_delete<Js5LocalCache>>*)&field_24328);
        field_24336 = 4294967295;
        field_24340 = 255;
    }

    // 0x1002bc860, 16 bytes, complete-object constructor, placed by class name and debug map
    // Js5RemoteLoader::Js5RemoteLoader(): jumps straight to the base-object constructor

    // 0x1002bc870, 80 bytes, base-object destructor, placed by class name and debug map
    // Js5RemoteLoader::~Js5RemoteLoader()
    void Js5RemoteLoader::~Js5RemoteLoader() {
        *(undefined***)field_0 = &PTR_MainLogic_100efa0f0;
        (&field_24328)->~unique_ptr();
        (&field_24312)->~unique_ptr();
        (&field_96)->~fixed_hash_map();
        ~Js5Loader();
    }

    // 0x1002bc8f0, 16 bytes, complete-object destructor, placed by class name and debug map
    // Js5RemoteLoader::~Js5RemoteLoader(): jumps straight to the base-object destructor

    // 0x1002bc900, 32 bytes, deleting destructor, placed by class name and debug map
    // Js5RemoteLoader::~Js5RemoteLoader()
    void Js5RemoteLoader::~Js5RemoteLoader() {
        ~Js5RemoteLoader(this);
        operator_delete(this);
    }

    // 0x1002bc920, 256 bytes, placed by class name and debug map
    // Js5RemoteLoader::Initialize(Filename const&, Js5RemoteServerInfo const*)
    int Js5RemoteLoader::Initialize(Filename* param_1, Js5RemoteServerInfo* param_2) {
        undefined1* this_00;
        Js5LocalCache* this_01;
        Js5NetThread* this_02;
        LockFreeStack local_50[8];
        Callstack local_40;

        std::make_unique<Js5LocalCache, LockFreeStack<Js5RemoteRequestData>&>(local_50);
        this_00 = &field_24328;
        std::unique_ptr<Js5LocalCache, std::default_delete<Js5LocalCache>>::operator=(
            (unique_ptr<Js5LocalCache, std::default_delete<Js5LocalCache>>*)this_00, (unique_ptr*)local_50);
        local_50->~unique_ptr();
        this_01 = (Js5LocalCache*)std::unique_ptr<Js5LocalCache, std::default_delete<Js5LocalCache>>::operator->(
            (unique_ptr<Js5LocalCache, std::default_delete<Js5LocalCache>>*)this_00);
        local_40._8_4_ = this_01->Initialize(param_1);
        if (local_40.field_8.IsValid() == '\0') {
            ((field_0 + 8), 22, 1)->set_max_size();
            std::unique_ptr<Js5LocalCache, std::default_delete<Js5LocalCache>>::operator*(
                (unique_ptr<Js5LocalCache, std::default_delete<Js5LocalCache>>*)this_00);
            std::make_unique<Js5NetThread, LockFreeStack<Js5RemoteRequestData>&, Js5LocalCache&>(
                local_50, (Js5LocalCache*)&field_24296);
            std::unique_ptr<Js5NetThread, std::default_delete<Js5NetThread>>::operator=(
                (unique_ptr<Js5NetThread, std::default_delete<Js5NetThread>>*)&field_24312, (unique_ptr*)local_50);
            local_50->~unique_ptr();
            field_24304 = 1;
            this_02 = (Js5NetThread*)std::unique_ptr<Js5NetThread, std::default_delete<Js5NetThread>>::operator->(
                (unique_ptr<Js5NetThread, std::default_delete<Js5NetThread>>*)&field_24312);
            this_02->Initialize(param_2, true);
            new (&local_40) callstack::Callstack();
        } else {
            local_40.field_0 = local_40._8_4_;
        }
        return local_40.field_0;
    }

    // 0x1002bcb70, 448 bytes, placed by class name and debug map
    // Js5RemoteLoader::OpenJs5(Js5ArchiveId, bool, bool, bool, bool, Error*)
    void Js5RemoteLoader::OpenJs5(uint param_2, undefined1 param_3, undefined1 param_4, undefined1 param_5,
                                  char param_6,
                                  __cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>* param_7) {
        Js5LocalCache* pJVar2;
        shared_ptr<Js5>* this_00;
        undefined1 local_40[8];
        shared_ptr local_38;
        undefined1 local_28[4];
        bool local_24;
        bool local_23;
        bool local_22;
        bool local_21;
        uint local_20[2];

        local_24 = (bool)param_3;
        local_23 = (bool)param_4;
        local_22 = (bool)param_5;
        local_21 = (bool)param_6;
        local_20[0] = param_2;
        if (field_24321 == '\0') {
            if (param_6 == '\0') {
                if ((int)field_24340 <= (int)param_2) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("js5Id < m_lowestOptionalArchiveID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                              "js5/Js5RemoteLoader.cpp",
                              99, "Non-optional archives must have IDs lower than all optional archives (ID: %d)",
                              (ulong)param_2);
                }
                if ((int)field_24336 < (int)param_2) {
                    field_24336 = param_2;
                }
            } else {
                if ((int)param_2 <= (int)field_24336) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("js5Id > m_highestNonOptionalArchiveID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                              "js5/Js5RemoteLoader.cpp",
                              91, "Optional archives must have IDs greater than all non-optional archives (ID: %d)",
                              (ulong)param_2);
                }
                if ((int)param_2 < (int)field_24340) {
                    field_24340 = param_2;
                }
            }
            pJVar2 = (Js5LocalCache*)std::unique_ptr<Js5LocalCache, std::default_delete<Js5LocalCache>>::operator->(
                (unique_ptr<Js5LocalCache, std::default_delete<Js5LocalCache>>*)&field_24328);
            local_28 = (undefined1[4])pJVar2->InitializeArchive(local_20[0]);
            if (param_7 != (__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>*)0) {
                *(undefined1(*)[4])param_7 = local_28;
            }
            if (local_28->IsValid() == '\0') {
                make_shared<Js5RemoteLoader::Js5Remote, Js5RemoteLoader&, Js5ArchiveId&, bool&, bool&, bool&, bool&>(
                    (jag*)&local_38, this, (Js5ArchiveId*)local_20, &local_24, &local_23, &local_22, &local_21);
                this_00 = (shared_ptr<Js5>*)Array<shared_ptr<Js5>, eastl::allocator>::operator[](
                    (Array<shared_ptr<Js5>, eastl::allocator>*)(field_0 + 8), (ulong)local_20[0]);
                shared_ptr<Js5>::operator=(this_00, &local_38);
                local_38.~shared_ptr();
                if (field_24320 == '\0') {
                    field_24320 = '\x01';
                    local_40._0_4_ = 255;
                    local_40._4_4_ = 255;
                    local_38.field_8._0_4_ = 0;
                    local_38._0_8_ = 1;
                    QueueGroupKey(local_40, (Js5RequestParameters*)&local_38);
                }
            }
        } else if (param_7 != (__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>*)0) {
            std::__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>::__cxx_atomic_base_impl(param_7, 22);
        }
        Array<shared_ptr<Js5>, eastl::allocator>::operator[]((Array<shared_ptr<Js5>, eastl::allocator>*)(field_0 + 8),
                                                             (ulong)local_20[0]);
    }

    // 0x1002bce00, 528 bytes, placed by class name and debug map
    // Js5RemoteLoader::ConsumeResults()
    void Js5RemoteLoader::ConsumeResults() {
        uint uVar1;
        bool bVar2;
        char cVar3;
        Js5RemoteRequestData* this_00;
        undefined8 uVar4;
        Js5RequestKey* pJVar5;
        long lVar6;
        Js5NetThread* this_01;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_68[8];
        undefined1 local_60[16];
        unique_ptr<Js5LocalCache, std::default_delete<Js5LocalCache>>* local_50;
        hashtable<Js5RequestKey, eastl::pair<Js5RequestKey_const, Js5RemoteRequestData>,
                  eastl::fixed_hashtable_allocator<601ul, 96ul, 200ul, 8ul, 0ul, false, eastl::allocator>,
                  eastl::use_first<eastl::pair<Js5RequestKey_const, Js5RemoteRequestData>>,
                  eastl::equal_to<Js5RequestKey>, eastl::hash<Js5RequestKey>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* local_48;
        Js5RemoteLoader* local_40;
        uint local_38;
        uint local_34;

        this_00 = (Js5RemoteRequestData*)(&field_24296)->TakeStack();
        local_48 = (hashtable<Js5RequestKey, eastl::pair<Js5RequestKey_const, Js5RemoteRequestData>,
                              eastl::fixed_hashtable_allocator<601ul, 96ul, 200ul, 8ul, 0ul, false, eastl::allocator>,
                              eastl::use_first<eastl::pair<Js5RequestKey_const, Js5RemoteRequestData>>,
                              eastl::equal_to<Js5RequestKey>, eastl::hash<Js5RequestKey>, eastl::mod_range_hashing,
                              eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)&field_96;
        local_40 = this;
        if (this_00 == (Js5RemoteRequestData*)0) {
            local_38 = 0;
            local_34 = 0;
        } else {
            local_60._8_8_ = field_0 + 32;
            local_50 = (unique_ptr<Js5LocalCache, std::default_delete<Js5LocalCache>>*)&field_24328;
            local_34 = 0;
            local_38 = 0;
            do {
                if (*(int*)(this_00->field_28 + 4) == 3) {
                    uVar4 = this_00->field_28->IsValid();
                    if ((char)uVar4 == '\0') {
                        local_34 = local_34 & 255;
                        if ((local_38 & 1) == 0) {
                            local_34 = 1;
                        }
                    } else {
                        local_38 = (uint)CONCAT71((int7)((ulong)uVar4 >> 8), 1);
                        local_34 = 0;
                    }
                } else {
                    eastl::list_map<Js5RequestKey, Js5RequestParameters, eastl::less<Js5RequestKey>,
                                    eastl::allocator>::find((Js5RequestKey*)local_60);
                    eastl::list_map<Js5RequestKey, Js5RequestParameters, eastl::less<Js5RequestKey>,
                                    eastl::allocator>::end();
                    bVar2 = eastl::operator!=((eastl*)local_60, local_68, extraout_RDX);
                    if (bVar2) {
                        lVar6 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)local_60);
                        uVar1 = *(uint*)(lVar6 + 8);
                        lVar6 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)local_60);
                        *(uint*)(lVar6 + 8) = uVar1 & 4294967039;
                        lVar6 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)local_60);
                        *(undefined4*)&this_00->field_16 = *(undefined4*)(lVar6 + 8);
                        cVar3 = this_00->field_28->IsValid();
                        if (cVar3 == '\0') {
                            OnDataRetrieved(local_40, this_00, (list_map_iterator*)local_60);
                            if (*(int*)(this_00->field_28 + 4) == 1) {
                                local_40->field_24322 = 1;
                            }
                        } else if (*(int*)(this_00->field_28 + 4) == 2) {
                            pJVar5 = (Js5RequestKey*)
                                         std::unique_ptr<Js5LocalCache, std::default_delete<Js5LocalCache>>::operator->(
                                             local_50);
                            Js5LocalCache::InvalidateFromMainThread(pJVar5);
                        }
                        eastl::hashtable<
                            Js5RequestKey, eastl::pair<Js5RequestKey_const, Js5RemoteRequestData>,
                            eastl::fixed_hashtable_allocator<601ul, 96ul, 200ul, 8ul, 0ul, false, eastl::allocator>,
                            eastl::use_first<eastl::pair<Js5RequestKey_const, Js5RemoteRequestData>>,
                            eastl::equal_to<Js5RequestKey>, eastl::hash<Js5RequestKey>, eastl::mod_range_hashing,
                            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                            true>::erase(local_48, (Js5RequestKey*)&this_00->field_8);
                    }
                }
                this_00 = (Js5RemoteRequestData*)this_00->HeapBeginPtr();
            } while (this_00 != (Js5RemoteRequestData*)0);
        }
        if ((local_34 & 1) == 0) {
            if (((local_38 & 1) != 0) && (lVar6 = local_48->size(), lVar6 != 0)) {
                local_40->field_24304 = 0;
                this_01 = (Js5NetThread*)std::unique_ptr<Js5NetThread, std::default_delete<Js5NetThread>>::operator->(
                    (unique_ptr<Js5NetThread, std::default_delete<Js5NetThread>>*)&local_40->field_24312);
                this_01->SetWantConnection(true);
            }
        } else {
            local_40->field_24304 = 2;
        }
    }

    // 0x1002bd010, 304 bytes, placed by class name and debug map
    // Js5RemoteLoader::OnDataRetrieved(Js5RemoteRequestData&, eastl::list_map_iterator<eastl::pair<Js5RequestKey const, Js5RequestParameters>, eastl::pair<Js5RequestKey const, Js5RequestParameters>*, eastl::pair<Js5RequestKey const, Js5RequestParameters>&> const&)
    void Js5RemoteLoader::OnDataRetrieved(Js5RemoteRequestData* param_1, list_map_iterator* param_2) {
        uint uVar1;
        PacketJ* pPVar2;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        int iVar5;
        Js5ForLoader* this_01;
        hashtable_iterator_base* extraout_RDX;
        uint uVar6;
        hashtable_iterator_base local_40[8];
        undefined8 local_38;

        eastl::list_map<Js5RequestKey, Js5RequestParameters, eastl::less<Js5RequestKey>, eastl::allocator>::end();
        if (eastl::operator!=((eastl*)param_2, local_40, extraout_RDX)) {
            new (&local_38) eastl::ListIterator<shared_ptr<rs2lib::worldmap::MapElement>,
                                                shared_ptr<rs2lib::worldmap::MapElement> const*,
                                                shared_ptr<rs2lib::worldmap::MapElement> const&>(param_2);
            eastl::list_map<Js5RequestKey, Js5RequestParameters, eastl::less<Js5RequestKey>, eastl::allocator>::erase(
                local_40, field_0 + 32, local_38);
        }
        uVar1 = *(uint*)&param_1->field_8;
        uVar6 = uVar1;
        if (uVar1 == 255) {
            uVar6 = *(uint*)((long)&param_1->field_8 + 4);
        }
        if (uVar6 == 255) {
            pPVar2 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)(param_1->field_28 + 12));
            OnMetaIndexRetrieved(this, pPVar2);
        } else {
            iVar5 = ((field_0 + 8))->end();
            if ((int)uVar6 < iVar5) {
                this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    Array<shared_ptr<Js5>, eastl::allocator>::operator[](
                        (Array<shared_ptr<Js5>, eastl::allocator>*)(field_0 + 8), (ulong)uVar6);
                this_01 = (Js5ForLoader*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
                if (this_01 != (Js5ForLoader*)0) {
                    if (uVar1 == 255) {
                        pPVar2 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                            (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)(param_1->field_28 + 12));
                        if ((this_01->LoadIndex(pPVar2) != '\0') && (this_01[1].field_35 != '\0')) {
                            PrefetchFile(uVar6);
                        }
                    } else if ((*(byte*)&param_1->field_16 & 1) != 0) {
                        this_01->SetGroupData(*(undefined4*)((long)&param_1->field_8 + 4), param_1->field_28 + 12);
                    }
                    shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::reset();
                }
            }
        }
    }

    // 0x1002bd210, 336 bytes, placed by class name and debug map
    // Js5RemoteLoader::OnMetaIndexRetrieved(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void Js5RemoteLoader::OnMetaIndexRetrieved(PacketJ* param_1) {
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        int iVar3;
        undefined4 uVar4;
        shared_ptr* psVar5;
        ulong uVar6;
        ulong uVar7;
        shared_ptr<Js5>* psVar8;
        Js5* pJVar9;
        ulong uVar10;
        uint uVar11;
        undefined4 local_48;
        undefined4 local_44;
        undefined4 local_40;
        int local_38;
        int local_34;

        field_24321 = '\x01';
        this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(field_0 + 8);
        iVar3 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        if (0 < iVar3) {
            uVar11 = 0;
            uVar10 = 0;
            do {
                psVar5 = (shared_ptr*)Array<shared_ptr<Js5>, eastl::allocator>::operator[](
                    (Array<shared_ptr<Js5>, eastl::allocator>*)this_00, uVar10);
                if (operator!=(psVar5, (_func_decltype_nullptr*)0)) {
                    param_1->SetPos((ulong)uVar11 | 5);
                    uVar6 = param_1->size();
                    uVar7 = param_1->GetTextureAtlas();
                    if (uVar6 < uVar7) {
                        uVar4 = param_1->g4();
                        local_40 = param_1->g4();
                        local_38 = 255;
                        local_34 = (int)uVar10;
                        local_48 = 1;
                        local_44 = uVar4;
                        QueueGroupKey((Js5RequestKey*)&local_38, (Js5RequestParameters*)&local_48);
                    } else {
                        psVar8 = (shared_ptr<Js5>*)Array<shared_ptr<Js5>, eastl::allocator>::operator[](
                            (Array<shared_ptr<Js5>, eastl::allocator>*)this_00, uVar10);
                        pJVar9 = (Js5*)shared_ptr<Js5>::operator->(psVar8);
                        if (pJVar9->IsOptional() == '\0') {
                            /* WARNING: Subroutine does not return */
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "oldscape/jagex3/js5/Js5RemoteLoader.cpp",
                                            287, "Fatal error - No index CRC received for non-optional archive");
                        }
                        psVar8 = (shared_ptr<Js5>*)Array<shared_ptr<Js5>, eastl::allocator>::operator[](
                            (Array<shared_ptr<Js5>, eastl::allocator>*)this_00, uVar10);
                        pJVar9 = (Js5*)shared_ptr<Js5>::operator->(psVar8);
                        pJVar9->LoadEmpty();
                    }
                }
                uVar10 = uVar10 + 1;
                iVar3 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
                uVar11 = uVar11 + 8;
            } while ((long)uVar10 < (long)iVar3);
        }
    }

    // 0x1002bd360, 16 bytes, placed by class name and debug map
    // Js5RemoteLoader::RequestCacheDirectoryPermissions(Filename const&)
    void Js5RemoteLoader::RequestCacheDirectoryPermissions(Filename* param_1) {}

    // 0x1002bd370, 960 bytes, placed by class name and debug map
    // Js5RemoteLoader::SendNewRequests()
    void Js5RemoteLoader::SendNewRequests() {
        uint uVar1;
        undefined8 uVar2;
        bool bVar3;
        char cVar4;
        long lVar5;
        ulong* puVar6;
        shared_ptr<Js5>* this_00;
        Js5* this_01;
        Js5LocalCache* this_02;
        undefined* puVar7;
        Js5NetThread* pJVar8;
        hashtable_iterator_base* phVar9;
        bool bVar10;
        undefined1 auVar11[16];
        Js5RequestKey local_e8[2];
        hashtable_iterator_base local_d0[8];
        ListIterator<shared_ptr<rs2lib::worldmap::MapElement>, shared_ptr<rs2lib::worldmap::MapElement> const*,
                     shared_ptr<rs2lib::worldmap::MapElement> const&>
            local_c8[8];
        Array<shared_ptr<Js5>, eastl::allocator>* local_c0;
        unique_ptr<Js5LocalCache, std::default_delete<Js5LocalCache>>* local_b8;
        eastl local_b0[8];
        Js5RemoteLoader* local_a8;
        unique_ptr<Js5NetThread, std::default_delete<Js5NetThread>>* local_a0;
        Js5RemoteRequestData* local_98;
        undefined1 local_90[8];
        Js5RemoteRequestData local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::list_map<Js5RequestKey, Js5RequestParameters, eastl::less<Js5RequestKey>, eastl::allocator>::begin();
        eastl::list_map<Js5RequestKey, Js5RequestParameters, eastl::less<Js5RequestKey>, eastl::allocator>::end();
        local_98 = (Js5RemoteRequestData*)&field_96;
        local_a0 = (unique_ptr<Js5NetThread, std::default_delete<Js5NetThread>>*)&field_24312;
        auVar11 = local_98->size();
        phVar9 = auVar11._8_8_;
        if (auVar11._0_8_ < 200) {
            local_c0 = (Array<shared_ptr<Js5>, eastl::allocator>*)(field_0 + 8);
            local_b8 = (unique_ptr<Js5LocalCache, std::default_delete<Js5LocalCache>>*)&field_24328;
            bVar10 = false;
            local_a8 = this;
            do {
                bVar3 = eastl::operator!=(local_b0, local_d0, phVar9);
                if (!bVar3)
                    break;
                lVar5 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_b0);
                uVar1 = *(uint*)(lVar5 + 8);
                uVar2 = *(undefined8*)(lVar5 + 12);
                puVar6 = (ulong*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_b0);
                local_90 = (undefined1[8]) * puVar6;
                eastl::ListIterator<
                    shared_ptr<rs2lib::worldmap::MapElement>, shared_ptr<rs2lib::worldmap::MapElement> const*,
                    shared_ptr<rs2lib::worldmap::MapElement> const&>::ListIterator(local_c8, (ListIterator*)local_b0);
                eastl::ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>::operator++(
                    (ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>*)&local_88,
                    (int)local_b0);
                if ((uVar1 & 256) == 0) {
                    if (((ulong)local_90 & 4294967295) == 255) {
                        if (local_90._4_4_ == 255 || field_24321 != '\0') {
                        LAB_1002bd514:
                            local_88.field_64 = 0;
                            local_88.field_72 = 0;
                            local_88.field_76 = 0;
                            local_88.field_77 = 0;
                            local_88.field_78 = 0;
                            local_88.field_79 = 0;
                            local_88._48_8_ = 0;
                            local_88.field_56 = 0;
                            local_88.field_28._4_8_ = 0;
                            local_88.field_28[12] = 0;
                            local_88.field_28[13] = 0;
                            local_88.field_28[14] = 0;
                            local_88.field_28[15] = 0;
                            local_88._44_4_ = 0;
                            local_88.field_16 = 0;
                            local_88._24_4_ = 0;
                            local_88.field_28[0] = 0;
                            local_88.field_28[1] = 0;
                            local_88.field_28[2] = 0;
                            local_88.field_28[3] = 0;
                            local_88.field_0 = 0;
                            local_88.field_8 = 0;
                            new (&local_88) Js5RemoteRequestData();
                            eastl::hashtable<
                                Js5RequestKey, eastl::pair<Js5RequestKey_const, Js5RemoteRequestData>,
                                eastl::fixed_hashtable_allocator<601ul, 96ul, 200ul, 8ul, 0ul, false, eastl::allocator>,
                                eastl::use_first<eastl::pair<Js5RequestKey_const, Js5RemoteRequestData>>,
                                eastl::equal_to<Js5RequestKey>, eastl::hash<Js5RequestKey>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                true>::emplace<Js5RequestKey_const&, Js5RemoteRequestData>(local_e8, local_98);
                            local_88.~QueueRequestItem();
                            lVar5 = local_e8->HeapBeginPtr();
                            *(undefined1(*)[8])(lVar5 + 16) = local_90;
                            *(uint*)(lVar5 + 24) = uVar1;
                            *(undefined8*)(lVar5 + 28) = uVar2;
                            make_shared<PacketJ<Array<unsigned char, eastl::allocator>>>((jag*)&local_88);
                            shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator=(
                                (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)(lVar5 + 48),
                                (shared_ptr*)&local_88);
                            local_88.~shared_ptr();
                            *(undefined8*)(lVar5 + 72) = 0;
                            *(undefined8*)(lVar5 + 80) = 0;
                            if ((uVar1 & 1) == 0) {
                                this_02 =
                                    (Js5LocalCache*)
                                        std::unique_ptr<Js5LocalCache, std::default_delete<Js5LocalCache>>::operator->(
                                            local_b8);
                                puVar7 = (undefined*)this_02->EnqueueRequestFromMainThread(
                                    (Js5RemoteRequestData*)(lVar5 + 8));
                            } else {
                                puVar7 = DataStatus::MISSING;
                            }
                            if (puVar7 == DataStatus::READY) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("fetchStatus != DataStatus::READY",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "oldscape/jagex3/js5/Js5RemoteLoader.cpp",
                                          356, (char*)0);
                            }
                            if (puVar7 == DataStatus::NOTLOADED) {
                            LAB_1002bd648:
                                lVar5 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_c8);
                                uVar1 = *(uint*)(lVar5 + 8);
                                lVar5 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_c8);
                                *(uint*)(lVar5 + 8) = uVar1 | 256;
                                this = local_a8;
                            } else if (local_a8->field_24304 == 0) {
                                bVar10 = true;
                                this = local_a8;
                            } else {
                                if (local_a8->field_24304 == 2) {
                                    pJVar8 = (Js5NetThread*)std::unique_ptr<
                                                 Js5NetThread, std::default_delete<Js5NetThread>>::operator->(local_a0);
                                    pJVar8->RequestGroup((Js5RemoteRequestData*)(lVar5 + 8));
                                    goto LAB_1002bd648;
                                }
                                local_98->erase(local_90);
                                this = local_a8;
                            }
                        }
                    } else {
                        this_00 = (shared_ptr<Js5>*)Array<shared_ptr<Js5>, eastl::allocator>::operator[](
                            local_c0, (ulong)local_90 & 4294967295);
                        this_01 = (Js5*)shared_ptr<Js5>::operator->(this_00);
                        cVar4 = this_01->GetIndexIsReady();
                        if (cVar4 != '\0')
                            goto LAB_1002bd514;
                    }
                } else if (field_24304 == 0) {
                    bVar10 = true;
                }
                auVar11 = local_98->size();
                phVar9 = auVar11._8_8_;
            } while (auVar11._0_8_ < 200);
        } else {
            bVar10 = false;
        }
        if (bVar10) {
            field_24304 = 1;
            pJVar8 =
                (Js5NetThread*)std::unique_ptr<Js5NetThread, std::default_delete<Js5NetThread>>::operator->(local_a0);
            pJVar8->SetWantConnection(true);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1002bd780, 112 bytes, placed by class name and debug map
    // Js5RemoteLoader::MainLogic()
    void Js5RemoteLoader::MainLogic() {
        Js5LocalCache* pJVar1;
        char cVar2;

        pJVar1 = (Js5LocalCache*)std::unique_ptr<Js5LocalCache, std::default_delete<Js5LocalCache>>::operator->(
            (unique_ptr<Js5LocalCache, std::default_delete<Js5LocalCache>>*)&field_24328);
        pJVar1->MainLogic();
        ConsumeResults(this);
        SendNewRequests(this);
        cVar2 = ((field_0 + 32))->empty();
        if ((cVar2 != '\0') && (field_24322 != 0)) {
            pJVar1 = (Js5LocalCache*)std::unique_ptr<Js5LocalCache, std::default_delete<Js5LocalCache>>::operator->(
                (unique_ptr<Js5LocalCache, std::default_delete<Js5LocalCache>>*)&field_24328);
            field_24322 = pJVar1->QueueFlushToDisk() ^ 1;
        }
    }

    // 0x1002bd7f0, 96 bytes, placed by class name and debug map
    // Js5RemoteLoader::Shutdown()
    void Js5RemoteLoader::Shutdown() {
        undefined1* this_00;
        Js5NetThread* this_01;
        Js5LocalCache* this_02;
        bool bVar1;
        _func_decltype_nullptr* in_RSI;

        this_00 = &field_24312;
        bVar1 = std::operator!=((unique_ptr*)this_00, in_RSI);
        if (bVar1) {
            this_01 = (Js5NetThread*)std::unique_ptr<Js5NetThread, std::default_delete<Js5NetThread>>::operator->(
                (unique_ptr<Js5NetThread, std::default_delete<Js5NetThread>>*)this_00);
            this_01->EndAndJoin();
        }
        bVar1 = std::operator!=((unique_ptr*)this_00, in_RSI);
        if (bVar1) {
            this_02 = (Js5LocalCache*)std::unique_ptr<Js5LocalCache, std::default_delete<Js5LocalCache>>::operator->(
                (unique_ptr<Js5LocalCache, std::default_delete<Js5LocalCache>>*)&field_24328);
            this_02->EndAndJoin();
        }
    }

    // 0x1002bd860, 80 bytes, placed by class name and debug map
    // Js5RemoteLoader::GetGroupLoadPercentage(Js5ArchiveId, Js5GroupId) const
    undefined8 Js5RemoteLoader::GetGroupLoadPercentage(int param_2, int param_3) {
        int iVar1;
        undefined8 uVar2;
        int local_28;
        int local_24;

        iVar1 = ((field_0 + 8))->end();
        uVar2 = 0;
        if ((param_2 < iVar1) && (param_3 != -1)) {
            local_24 = param_3;
            local_28 = param_2;
            uVar2 = GetDownloadPercentage(this, (Js5RequestKey*)&local_28);
        }
        return uVar2;
    }

    // 0x1002bd8b0, 128 bytes, placed by class name and debug map
    // Js5RemoteLoader::GetDownloadPercentage(Js5RequestKey const&) const
    ulong Js5RemoteLoader::GetDownloadPercentage(Js5RequestKey* param_1) {
        uint uVar1;
        long lVar3;
        hashtable_iterator_base local_30[16];
        eastl local_20[16];

        local_20 = (eastl[16])(&field_96, param_1)->find();
        local_30 = (hashtable_iterator_base[16])(&field_96)->end();
        if (eastl::operator!=(local_20, local_30, local_30._8_8_)) {
            lVar3 = local_20->HeapBeginPtr();
            uVar1 = *(uint*)(lVar3 + 68);
            if (uVar1 != 0) {
                lVar3 = local_20->HeapBeginPtr();
                if (uVar1 != 0) {
                    return (ulong)(uint)(*(int*)(lVar3 + 64) * 100) / (ulong)uVar1;
                }
            }
        }
        return 0;
    }

    // 0x1002bd930, 16 bytes, placed by class name and debug map
    // Js5RemoteLoader::GetGroupCountInCache(Js5ArchiveId) const
    undefined8 Js5RemoteLoader::GetGroupCountInCache() {
        return 4294967295;
    }

    // 0x1002bd9d0, 80 bytes, placed by class name and debug map
    // Js5RemoteLoader::GetIndexPercentage(Js5ArchiveId) const
    undefined8 Js5RemoteLoader::GetIndexPercentage(uint param_2) {
        ulong uVar1;
        undefined8 uVar2;
        uint local_28;
        int local_24;

        uVar1 = ((field_0 + 8))->end();
        uVar2 = 0;
        if (param_2 < uVar1) {
            local_24 = -1;
            local_28 = param_2;
            uVar2 = GetDownloadPercentage(this, (Js5RequestKey*)&local_28);
        }
        return uVar2;
    }

    // 0x1002bda20, 288 bytes, placed by class name and debug map
    // Js5RemoteLoader::BlockingFetch(Js5RequestKey const&, Js5RequestParameters const&)
    undefined* Js5RemoteLoader::BlockingFetch(Js5RequestKey* param_1, Js5RequestParameters* param_2) {
        Js5LocalCache* this_00;
        undefined* puVar1;
        shared_ptr local_88;
        Js5RemoteRequestData local_78;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_78) Js5RemoteRequestData();
        local_78.field_8._0_4_ = param_1->field_0;
        local_78.field_8._4_4_ = param_1->field_4;
        local_78.field_16 = *(undefined8*)param_2;
        local_78._24_4_ = *(undefined4*)(param_2 + 8);
        local_78.field_28._4_4_ = 2;
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&local_88, 0);
        local_78.field_28._0_4_ = local_88._0_4_;
        make_shared<PacketJ<Array<unsigned char, eastl::allocator>>>((jag*)&local_88);
        shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator=(
            (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)(local_78.field_28 + 12), &local_88);
        local_88.~shared_ptr();
        this_00 = (Js5LocalCache*)std::unique_ptr<Js5LocalCache, std::default_delete<Js5LocalCache>>::operator->(
            (unique_ptr<Js5LocalCache, std::default_delete<Js5LocalCache>>*)&field_24328);
        puVar1 = (undefined*)this_00->BlockingFetchFromMainThread(&local_78);
        if (puVar1 == DataStatus::READY) {
            eastl::list_map<Js5RequestKey, Js5RequestParameters, eastl::less<Js5RequestKey>, eastl::allocator>::end();
            OnDataRetrieved(this, &local_78, (list_map_iterator*)&local_88);
        }
        local_78.~QueueRequestItem();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return puVar1;
    }

    // 0x1002e0d60: the linker folded this into Js5Loader::Js5ForLoader::~Js5ForLoader(), which has identical code
    Js5RemoteLoader::Js5Remote::~Js5Remote();

} // namespace jag::oldscape::jagex3

namespace jag {
    // 0x1002bcd30, 208 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::jagex3::Js5RemoteLoader::Js5Remote>::type make_shared<oldscape::jagex3::Js5RemoteLoader::Js5Remote, oldscape::jagex3::Js5RemoteLoader&, oldscape::jagex3::Js5ArchiveId&, bool&, bool&, bool&, bool&>(oldscape::jagex3::Js5RemoteLoader&, oldscape::jagex3::Js5ArchiveId&, bool&, bool&, bool&, bool&)
    jag* jag::make_shared<oldscape::jagex3::Js5RemoteLoader::Js5Remote, oldscape::jagex3::Js5RemoteLoader&,
                          oldscape::jagex3::Js5ArchiveId&, bool&, bool&, bool&, bool&>(Js5RemoteLoader* param_1,
                                                                                       Js5ArchiveId* param_2,
                                                                                       bool* param_3, bool* param_4,
                                                                                       bool* param_5, bool* param_6) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        Js5Remote* local_40[2];

        pvVar1 = (void*)aligned_alloc(136, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] =
                placement_new<oldscape::jagex3::Js5RemoteLoader::Js5Remote, oldscape::jagex3::Js5RemoteLoader&,
                              oldscape::jagex3::Js5ArchiveId&, bool&, bool&, bool&, bool&>(
                    (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5, param_6);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::jagex3::Js5RemoteLoader::Js5Remote>, int,
                                   oldscape::jagex3::Js5RemoteLoader::Js5Remote*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag

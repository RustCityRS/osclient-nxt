// libs/ui/interfaces/Interface.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "Interface.h"

namespace jag::ui {
    // 0x100f3e990, 16 bytes, __data; set at startup by ___cxx_global_var_init.32
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> Interface::NullInterfaceShared;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    int Interface::GetInterfaceID() const;

    // 0x1003bb9b0, 128 bytes, placed by the data it initialises
    // ___cxx_global_var_init.32
    void ___cxx_global_var_init_32(undefined8 param_1, _func_decltype_nullptr* param_2) {
        if (*PTR_NullInterfaceShared_100ee4668 == '\0') {
            if (___cxa_guard_acquire(PTR_NullInterfaceShared_100ee4668) != 0) {
                new (PTR_NullInterfaceShared_100ee64a0)
                    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
                ___cxa_atexit(PTR__shared_ptr_100ee5180, PTR_NullInterfaceShared_100ee64a0, 4294967296);
                ___cxa_guard_release(PTR_NullInterfaceShared_100ee4668);
            }
        }
    }

    // 0x10067a260, 1728 bytes, base-object constructor, placed by class name and debug map
    // Interface::Interface(int, bool, eastl::vector<PacketT<Array<unsigned char, eastl::allocator> >, eastl::allocator>&, std::function<shared_ptr<Component> (unsigned char, unsigned short)>, void (*)(Component*, PacketT<Array<unsigned char, eastl::allocator> >&, int))
    /* Interface::Interface(int, bool, eastl::vector<PacketT<Array<unsigned char,
   eastl::allocator> >, eastl::allocator>&, std::function<shared_ptr<Component>
   (unsigned char, unsigned short)>, void (*)(Component*, PacketT<Array<unsigned
   char, eastl::allocator> >&, int)) */

    void
    Interface::Interface(int param_1, undefined1 param_2,
                         vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* param_3,
                         undefined8 param_5, _func_void_Component_ptr_PacketT_ptr_int* param_6) {
        byte bVar1;
        char cVar2;
        bool bVar3;
        undefined1 uVar4;
        undefined1 uVar5;
        int iVar6;
        undefined4 uVar7;
        undefined4 uVar8;
        undefined4 uVar9;
        ulong uVar10;
        long lVar11;
        ulong uVar12;
        TextureAtlasReference* this_00;
        Component* pCVar13;
        vector<ComponentContainer, eastl::allocator>* this_01;
        ComponentContainer* this_02;
        ushort* puVar14;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar15;
        SharedArray<unsigned int>* this_03;
        SharedArray<unsigned int>* pSVar16;
        long* plVar17;
        shared_ptr* this_04;
        undefined8 uVar18;
        NpcUID* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* phVar19;
        uint uVar20;
        shared_ptr<Component>* psVar21;
        undefined1 auVar22[16];
        char* in_stack_fffffffffffffe78;
        undefined4 uVar23;
        BucketAllocatorEASTL local_150[48];
        shared_ptr local_120;
        shared_ptr local_110;
        _func_void_Component_ptr_PacketT_ptr_int* local_100;
        undefined1* local_f8;
        basic_string local_f0[24];
        ComponentContainer local_d8;
        vector<ComponentContainer, eastl::allocator>* local_c0;
        int local_b4;
        ulong local_b0;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* local_a8;
        undefined8 local_a0;
        shared_ptr<Component>* local_98;
        Interface* local_90;
        vector<ComponentContainer, eastl::allocator>* local_88;
        shared_ptr local_80[4];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_100 = param_6;
        local_a0 = param_5;
        new (this) MakeSharedPool<Interface, 128>();
        m_interfaceID = param_1;
        local_88 = (vector<ComponentContainer, eastl::allocator>*)&field_8;
        local_b4 = param_1;
        eastl::vector<ComponentContainer, eastl::allocator>::vector(local_88);
        local_c0 = (vector<ComponentContainer, eastl::allocator>*)&field_40;
        eastl::vector<ComponentContainer, eastl::allocator>::vector(local_c0);
        local_f8 = &field_72;
        new (local_f8) eastl::vector<ComponentContainer, eastl::allocator>();
        field_104 = param_2;
        local_90 = this;
        uVar10 =
            eastl::vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                          eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(param_3);
        eastl::vector<ComponentContainer, eastl::allocator>::resize(local_88, uVar10);
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)local_80, (NpcUID*)"EASTL hash_map", extraout_RDX);
        eastl::hash_map<unsigned short, eastl::vector<ComponentContainer, eastl::allocator>,
                        eastl::hash<unsigned short>, eastl::equal_to<unsigned short>, BucketAllocatorEASTL,
                        false>::hash_map(local_150);
        new (local_80) eastl::fixed_vector<shared_ptr<Component>, 2ul, true, eastl::allocator>();
        lVar11 =
            eastl::vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                          eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(param_3);
        if (lVar11 != 0) {
            psVar21 = (shared_ptr<Component>*)1;
            uVar10 = 0;
            local_a8 = param_3;
            do {
                local_b0 = uVar10;
                this_00 = (TextureAtlasReference*)param_3->at(uVar10);
                lVar11 = this_00->GetTextureAtlas();
                if (lVar11 != 0) {
                    this_00->SetPos(0);
                    local_98 = psVar21;
                    bVar1 = this_00->g1();
                    uVar20 = (uint)bVar1;
                    if (bVar1 == 255) {
                        uVar20 = 4294967295;
                    }
                    cVar2 = this_00->g1();
                    eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
                    if (cVar2 < '\0') {
                        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                            eastl::basic_string<char, BucketAllocatorEASTL>>(
                            (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)this_00, local_f0,
                            false);
                    }
                    this_00->g2();
                    std::function<shared_ptr<Component>(unsigned char, unsigned short)>::operator()((uchar)&local_110,
                                                                                                    (ushort)local_a0);
                    pCVar13 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)&local_110);
                    iVar6 = (int)local_98;
                    in_stack_fffffffffffffe78 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    pCVar13->Initialise(local_100, local_b4, iVar6 + -1, uVar20, this_00, in_stack_fffffffffffffe78);
                    pCVar13 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)&local_110);
                    psVar21 = local_98;
                    iVar6 = pCVar13->GetLayerID();
                    if (iVar6 == -1) {
                        eastl::vector<ComponentContainer, eastl::allocator>::emplace_back<shared_ptr<Component>&>(
                            local_c0, &local_110);
                    } else {
                        local_d8._0_2_ = SUB42(iVar6, 0);
                        this_01 = (vector<ComponentContainer, eastl::allocator>*)eastl::hash_map<
                            unsigned short, eastl::vector<ComponentContainer, eastl::allocator>,
                            eastl::hash<unsigned short>, eastl::equal_to<unsigned short>, BucketAllocatorEASTL, false>::
                        operator[]((hash_map<unsigned short, eastl::vector<ComponentContainer, eastl::allocator>,
                                             eastl::hash<unsigned short>, eastl::equal_to<unsigned short>,
                                             BucketAllocatorEASTL, false>*)local_150,
                                   (ushort*)&local_d8);
                        eastl::vector<ComponentContainer, eastl::allocator>::emplace_back<shared_ptr<Component>&>(
                            this_01, &local_110);
                    }
                    pCVar13 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)&local_110);
                    cVar2 = pCVar13->NeedsStaticComponentLinking();
                    if (cVar2 != '\0') {
                        eastl::fixed_vector<shared_ptr<Component>, 2ul, true, eastl::allocator>::push_back(local_80);
                    }
                    new (&local_d8) ComponentContainer(&local_110);
                    this_02 = (ComponentContainer*)eastl::vector<ComponentContainer, eastl::allocator>::operator[](
                        local_88, local_b0);
                    ComponentContainer::operator=(this_02, &local_d8);
                    local_d8.~pair();
                    local_110.~shared_ptr();
                    local_f0->~basic_string();
                }
                param_3 = local_a8;
                uVar10 = (ulong)psVar21 & 4294967295;
                uVar12 = eastl::vector<
                    Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                    eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(local_a8);
                psVar21 = (shared_ptr<Component>*)(ulong)((int)psVar21 + 1);
            } while (uVar10 < uVar12);
        }
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        phVar19 = extraout_RDX_00;
        while (true) {
            bVar3 = eastl::operator!=((eastl*)local_f0, (hashtable_iterator_base*)&local_d8, phVar19);
            if (!bVar3)
                break;
            puVar14 = (ushort*)local_f0->HeapBeginPtr();
            pcVar15 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>*)
                eastl::vector<ComponentContainer, eastl::allocator>::operator[](local_88, (ulong)*puVar14);
            auVar22 =
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(pcVar15);
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_110, auVar22._0_8_,
                                                                                         auVar22._8_8_);
            this_03 = (SharedArray<unsigned int>*)((puVar14 + 4))->HeapBeginPtr();
            pSVar16 = (SharedArray<unsigned int>*)((puVar14 + 4))->end();
            for (; this_03 != pSVar16; this_03 = this_03 + 24) {
                plVar17 = (long*)shared_ptr<ComponentCollectionBase>::operator->(
                    (shared_ptr<ComponentCollectionBase>*)&local_110);
                (**(code**)(*plVar17 + 336))(plVar17, this_03);
                pCVar13 = (Component*)this_03->data();
                new (&local_120) shared_ptr<oldscape::dash3d::Decor>(&local_110);
                pCVar13->SetStaticParent(&local_120);
                local_120.~shared_ptr();
            }
            local_110.~shared_ptr();
            eastl::hashtable_iterator<eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>,
                                      false, false>::
            operator++(
                (hashtable_iterator<eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>,
                                    false, false>*)local_f0);
            phVar19 = extraout_RDX_01;
        }
        psVar21 = (shared_ptr<Component>*)local_80->HeapBeginPtr();
        local_98 = (shared_ptr<Component>*)local_80->end();
        if (psVar21 != local_98) {
            do {
                plVar17 = (long*)shared_ptr<Component>::operator->(psVar21);
                iVar6 = (**(code**)(*plVar17 + 160))(plVar17);
                pcVar15 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>*)
                    eastl::vector<ComponentContainer, eastl::allocator>::operator[](local_88, (long)iVar6);
                this_04 = (shared_ptr*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(pcVar15);
                bVar3 = shared_ptr::operator_cast_to_bool(this_04);
                uVar23 = (undefined4)((ulong)in_stack_fffffffffffffe78 >> 32);
                if (bVar3) {
                    plVar17 = (long*)shared_ptr<Component>::operator->(psVar21);
                    cVar2 = (**(code**)(*plVar17 + 168))(plVar17, this_04);
                    uVar23 = (undefined4)((ulong)in_stack_fffffffffffffe78 >> 32);
                    if (cVar2 == '\0') {
                        local_b0 = logger::default_logger();
                        uVar7 = local_90->GetX();
                        local_a8 =
                            (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                    eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
                                CONCAT44(local_a8._4_4_, uVar7);
                        pCVar13 = (Component*)shared_ptr<Component>::operator->(psVar21);
                        uVar7 = pCVar13->GetStaticID();
                        local_a0 = CONCAT44(local_a0._4_4_, uVar7);
                        plVar17 = (long*)shared_ptr<Component>::operator->(psVar21);
                        uVar4 = (**(code**)(*plVar17 + 16))(plVar17);
                        uVar7 = local_90->GetX();
                        plVar17 = (long*)shared_ptr<Component>::operator->((shared_ptr<Component>*)this_04);
                        uVar5 = (**(code**)(*plVar17 + 16))(plVar17);
                        in_stack_fffffffffffffe78 = (char*)CONCAT44(uVar23, local_a8._0_4_);
                        logger::Logger::Log(
                            local_b0, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/interfaces/"
                            "Interface.cpp",
                            105, "Could not link component %u:%d (type=%d) to component %u:%d (type=%d)",
                            in_stack_fffffffffffffe78, (undefined4)local_a0, uVar4, uVar7, iVar6, uVar5);
                    }
                } else {
                    uVar18 = logger::default_logger();
                    uVar7 = local_90->GetX();
                    pCVar13 = (Component*)shared_ptr<Component>::operator->(psVar21);
                    uVar8 = pCVar13->GetStaticID();
                    uVar9 = local_90->GetX();
                    in_stack_fffffffffffffe78 = (char*)CONCAT44(uVar23, uVar7);
                    logger::Logger::Log(uVar18, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                        "interfaces/Interface.cpp",
                                        100, "Attempting to link component %u:%d to missing component %u:%d",
                                        in_stack_fffffffffffffe78, uVar8, uVar9, iVar6);
                }
                psVar21 = psVar21 + 16;
            } while (psVar21 != local_98);
        }
        local_80->~fixed_vector();
        local_150->~hash_map();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10067ac10, 16 bytes, complete-object constructor, placed by class name and debug map
    // Interface::Interface(int, bool, eastl::vector<PacketT<Array<unsigned char, eastl::allocator> >, eastl::allocator>&, std::function<shared_ptr<Component> (unsigned char, unsigned short)>, void (*)(Component*, PacketT<Array<unsigned char, eastl::allocator> >&, int)): jumps straight to the base-object constructor

    // 0x10067ac20, 400 bytes, placed by class name and debug map
    // Interface::GetChildHiddenUnsafe(Component const*) const
    undefined4 Interface::GetChildHiddenUnsafe(Component* param_1) {
        bool bVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        undefined4 uVar5;
        long* plVar6;
        vector* pvVar7;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_00;
        shared_ptr* this_01;
        Skybox* this_02;
        shared_ptr<Component> local_40[16];

        if (param_1 == (Component*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "component",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/interfaces/Interface.cpp",
                112, (char*)0);
        }
        iVar3 = param_1->GetDynamicID();
        if (iVar3 == -1) {
            iVar3 = param_1->GetStaticID();
            this_02 = (Skybox*)eastl::vector<ComponentContainer, eastl::allocator>::operator[](
                (vector<ComponentContainer, eastl::allocator>*)&field_8, (long)iVar3);
            uVar5 = this_02->ShowSkybox();
            return uVar5;
        }
        iVar3 = param_1->GetStaticID();
        iVar4 = param_1->GetDynamicID();
        local_40->GetLookatEntity();
        bVar1 = local_40->operator_cast_to_bool();
        if (bVar1) {
            plVar6 = (long*)shared_ptr<Component>::operator->(local_40);
            cVar2 = (**(code**)(*plVar6 + 104))(plVar6);
            if (cVar2 != '\0') {
                plVar6 = (long*)local_40->end();
                pvVar7 = (vector*)(**(code**)(*plVar6 + 280))(plVar6);
                uVar5 = ComponentUtils::GetHiddenInDynamicList(iVar4, pvVar7);
                goto LAB_10067ad4c;
            }
        }
        this_00 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)
            eastl::vector<ComponentContainer, eastl::allocator>::operator[](
                (vector<ComponentContainer, eastl::allocator>*)&field_8, (long)iVar3);
        this_01 = (shared_ptr*)
            eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>::second(this_00);
        bVar1 = shared_ptr::operator_cast_to_bool(this_01);
        if (bVar1) {
            plVar6 = (long*)shared_ptr<Component>::operator->((shared_ptr<Component>*)this_01);
            cVar2 = (**(code**)(*plVar6 + 104))(plVar6);
            if (cVar2 != '\0') {
                plVar6 = (long*)this_01->end();
                pvVar7 = (vector*)(**(code**)(*plVar6 + 280))(plVar6);
                uVar5 = ComponentUtils::GetHiddenInDynamicList(iVar4, pvVar7);
            LAB_10067ad4c:
                local_40->~shared_ptr();
                return uVar5;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("parentComponent && parentComponent->IsComponentCollection()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/interfaces/Interface.cpp",
                  133, (char*)0);
    }

    // 0x10067adb0, 448 bytes, placed by class name and debug map
    // Interface::SetChildHiddenUnsafe(Component const*, bool)
    void Interface::SetChildHiddenUnsafe(Component* param_1, bool param_2) {
        bool bVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        long* plVar5;
        ulong uVar6;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_00;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        Component* pCVar7;
        shared_ptr<Component> local_40[16];

        if (param_1 == (Component*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "component",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/interfaces/Interface.cpp",
                142, (char*)0);
        }
        iVar3 = param_1->GetStaticID();
        local_40->GetLookatEntity();
        bVar1 = local_40->operator_cast_to_bool();
        if (bVar1) {
            plVar5 = (long*)shared_ptr<Component>::operator->(local_40);
            cVar2 = (**(code**)(*plVar5 + 104))(plVar5);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "parent->IsComponentCollection()",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/interfaces/Interface.cpp",
                    148, (char*)0);
            }
            plVar5 = (long*)local_40->end();
            (**(code**)(*plVar5 + 384))(plVar5, param_1, param_2);
        } else {
            iVar4 = param_1->GetDynamicID();
            if (iVar4 != -1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/interfaces/Interface.cpp",
                    163, (char*)0);
            }
            ComponentUtils::SetHiddenInStaticList(iVar3, (vector*)&field_40, param_2);
            ComponentUtils::SetHiddenInStaticList(iVar3, (vector*)&field_72, param_2);
        }
        iVar4 = param_1->GetDynamicID();
        if (iVar4 == -1) {
            uVar6 = (&field_8)->size();
            if (uVar6 <= (ulong)(long)iVar3) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "(size_t)staticID < m_staticComponents.size()",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/interfaces/Interface.cpp",
                    170, (char*)0);
            }
            this_00 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>*)
                eastl::vector<ComponentContainer, eastl::allocator>::operator[](
                    (vector<ComponentContainer, eastl::allocator>*)&field_8, (long)iVar3);
            this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(this_00);
            pCVar7 = (Component*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
            if (pCVar7 != param_1) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "componentContainer.GetComponent().get() == component",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/interfaces/Interface.cpp",
                    173, (char*)0);
            }
            new (this_00) std::__cxx_atomic_base_impl<bool>(param_2);
        }
        local_40->~shared_ptr();
    }

    // 0x10067af70, 288 bytes, placed by class name and debug map
    // Interface::GetChildCombinedIDs(eastl::vector<unsigned int, BucketAllocatorEASTL>&)
    void Interface::GetChildCombinedIDs(vector* param_1) {
        SharedArray<unsigned int>* this_00;
        SharedArray<unsigned int>* pSVar2;
        Component* this_01;
        uint* puVar3;
        uint* puVar4;
        shared_ptr<Component>* this_02;
        long* plVar5;
        ComponentCollectionBase* this_03;
        uint local_34;

        this_00 = (SharedArray<unsigned int>*)(&field_40)->HeapBeginPtr();
        pSVar2 = (SharedArray<unsigned int>*)(&field_40)->end();
        do {
            if (this_00 == pSVar2) {
                return;
            }
            this_01 = (Component*)this_00->data();
            local_34 = this_01->GetCombinedID();
            puVar3 = (uint*)param_1->HeapBeginPtr();
            puVar4 = (uint*)param_1->end();
            for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
                if (*puVar3 == local_34) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("id != combinedID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/interfaces/"
                              "Interface.cpp",
                              187, (char*)0);
                }
            }
            param_1->push_back(&local_34);
            this_02 = (shared_ptr<Component>*)this_00->second();
            plVar5 = (long*)shared_ptr<Component>::operator->(this_02);
            if ((**(code**)(*plVar5 + 104))(plVar5) != '\0') {
                this_03 = (ComponentCollectionBase*)this_00->data();
                this_03->GetChildCombinedIDs(param_1);
            }
            this_00 = this_00 + 24;
        } while (true);
    }

} // namespace jag::ui

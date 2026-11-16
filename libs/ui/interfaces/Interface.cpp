// libs/ui/interfaces/Interface.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "Interface.h"

namespace jag::ui {
    // 0x100f3e990, set at startup by ___cxx_global_var_init.32
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> Interface::NullInterfaceShared =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x1000b9960: Interface::GetInterfaceID() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x10067a260
    Interface::Interface(int arg1, bool arg2, eastl::vector<PacketT<Array<unsigned char>>>& arg3,
                         std::function<shared_ptr<Component>(unsigned char, unsigned short)> callback,
                         void (*arg5)(Component*, PacketT<Array<unsigned char>>&, int)) {
        uint8_t bVar1;
        bool cVar2;
        int iVar3;
        uint32_t uVar4;
        unsigned int uVar5;
        uint32_t uVar6;
        uint32_t uVar7;
        Logger* pLVar9;
        TextureAtlasReference* this_00;
        void* arg1_01;
        Component* pCVar10;
        vector<ComponentContainer>* this_01;
        ComponentContainer* this_02;
        unsigned short* puVar11;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* pcVar12;
        SharedArray<unsigned int>* this_03;
        SharedArray<unsigned int>* pSVar13;
        long* plVar14;
        shared_ptr* this_04;
        Logger* pLVar15;
        shared_ptr<Component>* psVar16;
        PacketT<Array<unsigned char> _>* arg5_00;
        uint64_t in_stack_fffffffffffffe78;
        uint32_t uVar17;
        shared_ptr<oldscape::dash3d::Decor> local_120;
        function<shared_ptr<Component>(unsigned char, unsigned short)> local_110[16];
        Logger* local_b0;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>* local_a8;
        function<shared_ptr<Component> _(unsigned char, unsigned short)>* local_a0;
        shared_ptr<Component>* local_98;
        long local_38;

        void* local_100 = arg5;
        local_a0 = callback;
        new (this) MakeSharedPool<Interface, 128>();
        m_interfaceID = arg1;
        vector<ComponentContainer>* local_88 = (vector<ComponentContainer>*)&field_8;
        int local_b4 = arg1;
        new (local_88) eastl::vector<ComponentContainer>();
        vector<ComponentContainer>* local_c0 = (vector<ComponentContainer>*)&field_40;
        new (local_c0) eastl::vector<ComponentContainer>();
        uint8_t* local_f8 = &field_72;
        new (local_f8) eastl::vector<ComponentContainer>();
        field_104 = arg2;
        Interface* local_90 = this;
        unsigned long arg1_00 = arg3.size();
        local_88->resize(arg1_00);
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_80);
        hash_map<unsigned short, eastl::vector<ComponentContainer>, eastl::hash<unsigned short>,
                 eastl::equal_to<unsigned short>, BucketAllocatorEASTL>
            local_150(local_80);
        eastl local_80;
        long lVar8 = arg3.size();
        if (lVar8 != 0) {
            psVar16 = (shared_ptr<Component>*)1;
            pLVar15 = nullptr;
            local_a8 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)arg3;
            do {
                local_b0 = pLVar15;
                this_00 = (TextureAtlasReference*)arg3.at((unsigned long)pLVar15);
                lVar8 = this_00->GetTextureAtlas();
                if (lVar8 != 0) {
                    this_00->SetPos(0);
                    local_98 = psVar16;
                    bVar1 = this_00->g1();
                    arg5_00 = (PacketT<Array<unsigned char> _>*)(unsigned long)bVar1;
                    if (bVar1 == 255) {
                        arg5_00 = (PacketT<Array<unsigned char> _>*)4294967295;
                    }
                    bVar1 = this_00->g1();
                    local_f0 = eastl::basic_string<char, BucketAllocatorEASTL>();
                    if ((char)bVar1 < '\0') {
                        this_00->gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(&local_f0, false);
                        bVar1 = bVar1 & 127;
                    }
                    this_00->g2();
                    std::function<shared_ptr<Component>(unsigned char, unsigned short)>::operator()(
                        local_110, (unsigned char)local_a0, (unsigned short)bVar1);
                    arg1_01 = (void*)(*local_110).operator->();
                    iVar3 = (int)local_98;
                    in_stack_fffffffffffffe78 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    Component::Initialise(arg1_01, (int)local_100, local_b4, iVar3 - 1, *arg5_00, this_00);
                    pCVar10 = (Component*)(*local_110).operator->();
                    psVar16 = local_98;
                    iVar3 = pCVar10->GetLayerID();
                    if (iVar3 == -1) {
                        local_c0->emplace_back<shared_ptr<Component>&>(*local_110);
                    } else {
                        local_d8._0_2_ = (uint16_t)iVar3;
                        this_01 = &local_150[local_d8];
                        this_01->emplace_back<shared_ptr<Component>&>(*local_110);
                    }
                    pCVar10 = (Component*)(*local_110).operator->();
                    cVar2 = pCVar10->NeedsStaticComponentLinking();
                    if (cVar2) {
                        local_80.push_back(*local_110);
                    }
                    local_d8 = ComponentContainer(*local_110);
                    this_02 = (ComponentContainer*)(*local_88)[(unsigned long)local_b0];
                    *this_02 = local_d8;
                }
                arg3 = (vector<PacketT<Array<unsigned char> _>>*)local_a8;
                pLVar15 = (Logger*)((unsigned long)psVar16 & 4294967295);
                pLVar9 = (Logger*)local_a8->size();
                psVar16 = (shared_ptr<Component>*)(unsigned long)((int)psVar16 + 1);
            } while (pLVar15 < pLVar9);
        }
        auto local_f0 = local_150.begin();
        ComponentContainer local_d8 = local_150.end();
        while (true) {
            cVar2 = local_f0 != local_d8;
            if (!cVar2)
                break;
            puVar11 = (unsigned short*)local_f0.HeapBeginPtr();
            pcVar12 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*local_88)[(
                unsigned long)*puVar11];
            pcVar12->second();
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(
                (shared_ptr<oldscape::ClientNpc>*)local_110);
            this_03 = (SharedArray<unsigned int>*)((puVar11 + 4))->HeapBeginPtr();
            pSVar13 = (SharedArray<unsigned int>*)((puVar11 + 4))->end();
            for (; this_03 != pSVar13; this_03 = this_03 + 24) {
                plVar14 = (long*)(*local_110).operator->();
                (**(void (**)(...))(*plVar14 + 336))(plVar14, this_03);
                pCVar10 = (Component*)this_03->data();
                local_120 = shared_ptr(local_110);
                pCVar10->SetStaticParent(local_120);
            }
            ++local_f0;
        }
        psVar16 = (shared_ptr<Component>*)local_80.HeapBeginPtr();
        local_98 = (shared_ptr<Component>*)local_80.end();
        if (psVar16 != local_98) {
            do {
                plVar14 = (long*)(*psVar16).operator->();
                iVar3 = (**(void (**)(...))(*plVar14 + 160))(plVar14);
                pcVar12 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*local_88)[(
                    long)iVar3];
                this_04 = (shared_ptr*)pcVar12->second();
                cVar2 = shared_ptr::operator_cast_to_bool(this_04);
                uVar17 = (uint32_t)((unsigned long)in_stack_fffffffffffffe78 >> 32);
                if (!cVar2) {
                    pLVar15 = logger::default_logger();
                    uVar4 = local_90->GetX();
                    pCVar10 = (Component*)(*psVar16).operator->();
                    uVar6 = pCVar10->GetStaticID();
                    uVar7 = local_90->GetX();
                    in_stack_fffffffffffffe78 = (((uint64_t)uVar17 << 32) | (uint32_t)uVar4);
                    pLVar15->Log(false, 2,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/interfaces/"
                                 "Interface.cpp",
                                 100, "Attempting to link component %u:%d to missing component %u:%d",
                                 in_stack_fffffffffffffe78, uVar6, uVar7, iVar3);
                } else {
                    plVar14 = (long*)(*psVar16).operator->();
                    cVar2 = (**(void (**)(...))(*plVar14 + 168))(plVar14);
                    uVar17 = (uint32_t)((unsigned long)in_stack_fffffffffffffe78 >> 32);
                    if (!cVar2) {
                        local_b0 = logger::default_logger();
                        uVar4 = local_90->GetX();
                        local_a8 =
                            (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                                    eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)(((uint64_t)
                                                                                                      local_a8._4_4_
                                                                                                  << 32) |
                                                                                                 (uint32_t)uVar4);
                        pCVar10 = (Component*)(*psVar16).operator->();
                        uVar4 = pCVar10->GetStaticID();
                        local_a0 =
                            (function<shared_ptr<Component> _(
                                 unsigned char, unsigned short)>*)(((uint64_t)local_a0._4_4_ << 32) | (uint32_t)uVar4);
                        plVar14 = (long*)(*psVar16).operator->();
                        uVar5 = (**(void (**)(...))(*plVar14 + 16))(plVar14);
                        uVar4 = local_90->GetX();
                        plVar14 = (long*)(*this_04).operator->();
                        bVar1 = (**(void (**)(...))(*plVar14 + 16))(plVar14);
                        in_stack_fffffffffffffe78 = (((uint64_t)uVar17 << 32) | (uint32_t)local_a8._0_4_);
                        local_b0->Log(false, 2,
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                      "interfaces/Interface.cpp",
                                      105, "Could not link component %u:%d (type=%d) to component %u:%d (type=%d)",
                                      in_stack_fffffffffffffe78, local_a0._0_4_, uVar5 & 255, uVar4, iVar3,
                                      (unsigned int)bVar1);
                    }
                }
                psVar16 = psVar16 + 16;
            } while (psVar16 != local_98);
        }
    }

    // 0x10067ac20
    uint32_t Interface::GetChildHiddenUnsafe(const Component* component) const {
        uint32_t uVar3;
        long* plVar4;
        vector<ComponentContainer>* pvVar5;

        if (component == nullptr) {
            LogAssert(
                "component",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/interfaces/Interface.cpp",
                112, nullptr);
        }
        int iVar2 = component->GetDynamicID();
        if (iVar2 == -1) {
            iVar2 = component->GetStaticID();
            uVar3 = ((Skybox*)field_8[(long)iVar2])->ShowSkybox();
            return uVar3;
        }
        iVar2 = component->GetStaticID();
        int arg1 = component->GetDynamicID();
        shared_ptr local_40 = component->GetLookatEntity();
        if (shared_ptr::operator_cast_to_bool(&local_40)) {
            plVar4 = (long*)local_40.operator->();
            if ((**(void (**)(...))(*plVar4 + 104))(plVar4)) {
                plVar4 = (long*)local_40.end();
                pvVar5 = (vector<ComponentContainer>*)(**(void (**)(...))(*plVar4 + 280))(plVar4);
                uVar3 = ComponentUtils::GetHiddenInDynamicList(arg1, *pvVar5);
                goto LAB_10067ad4c;
            }
        }
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_00 = &field_8[(long)iVar2];
        auto this_01 = this_00->second();
        if (shared_ptr::operator_cast_to_bool(this_01)) {
            plVar4 = (long*)(*this_01).operator->();
            if ((**(void (**)(...))(*plVar4 + 104))(plVar4)) {
                plVar4 = (long*)this_01->end();
                pvVar5 = (vector<ComponentContainer>*)(**(void (**)(...))(*plVar4 + 280))(plVar4);
                uVar3 = ComponentUtils::GetHiddenInDynamicList(arg1, *pvVar5);
            LAB_10067ad4c:
                return uVar3;
            }
        }
        LogAssert("parentComponent && parentComponent->IsComponentCollection()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/interfaces/Interface.cpp",
                  133, nullptr);
    }

    // 0x10067adb0
    void Interface::SetChildHiddenUnsafe(const Component* component, bool arg2) {
        int iVar2;
        long* plVar3;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_00;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;

        if (component == nullptr) {
            LogAssert(
                "component",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/interfaces/Interface.cpp",
                142, nullptr);
        }
        int arg1 = component->GetStaticID();
        shared_ptr local_40 = component->GetLookatEntity();
        if (!(shared_ptr::operator_cast_to_bool(&local_40))) {
            iVar2 = component->GetDynamicID();
            if (iVar2 != -1) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/interfaces/Interface.cpp",
                    163, nullptr);
            }
            ComponentUtils::SetHiddenInStaticList(arg1, field_40, arg2);
            ComponentUtils::SetHiddenInStaticList(arg1, field_72, arg2);
        } else {
            plVar3 = (long*)local_40.operator->();
            if (!((**(void (**)(...))(*plVar3 + 104))(plVar3))) {
                LogAssert(
                    "parent->IsComponentCollection()",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/interfaces/Interface.cpp",
                    148, nullptr);
            }
            plVar3 = (long*)local_40.end();
            (**(void (**)(...))(*plVar3 + 384))(plVar3, component, arg2);
        }
        iVar2 = component->GetDynamicID();
        if (iVar2 == -1) {
            if (field_8.size() <= (unsigned long)(long)arg1) {
                LogAssert(
                    "(size_t)staticID < m_staticComponents.size()",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/interfaces/Interface.cpp",
                    170, nullptr);
            }
            this_00 = &field_8[(long)arg1];
            this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_00->second();
            if ((Component*)this_01->end() != component) {
                LogAssert(
                    "componentContainer.GetComponent().get() == component",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/interfaces/Interface.cpp",
                    173, nullptr);
            }
            new (this_00) std::__cxx_atomic_base_impl(arg2);
        }
    }

    // 0x10067af70
    void Interface::GetChildCombinedIDs(eastl::vector<unsigned int, BucketAllocatorEASTL>& arg1) {
        unsigned int* puVar3;
        unsigned int* puVar4;
        shared_ptr<Component>* this_02;
        long* plVar5;
        unsigned int local_34;

        auto this_00 = field_40.HeapBeginPtr();
        auto pSVar2 = field_40.end();
        do {
            if (this_00 == pSVar2) {
                return;
            }
            local_34 = ((Component*)this_00->data())->GetCombinedID();
            puVar3 = (unsigned int*)arg1.HeapBeginPtr();
            puVar4 = (unsigned int*)arg1.end();
            for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
                if (*puVar3 == local_34) {
                    LogAssert("id != combinedID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/interfaces/"
                              "Interface.cpp",
                              187, nullptr);
                }
            }
            arg1.push_back(local_34);
            this_02 = (shared_ptr<Component>*)this_00->second();
            plVar5 = (long*)(*this_02).operator->();
            if ((**(void (**)(...))(*plVar5 + 104))(plVar5) != '\0') {
                ((ComponentCollectionBase*)this_00->data())->GetChildCombinedIDs(arg1);
            }
            this_00 = this_00 + 24;
        } while (true);
    }

} // namespace jag::ui

// libs/tweaky/Tweaky_ContainerGroup.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.tweaky

#include "Tweaky_ContainerGroup.h"

namespace jag::tweak {
    // 0x100a445d0, 192 bytes, placed by class name and debug map
    // ContainerGroup::OnMouseOver(float, float)
    undefined8 ContainerGroup::OnMouseOver(float param_1, float param_2) {
        undefined1* this_00;
        char cVar1;
        long lVar2;
        Control* this_01;
        long* plVar3;

        cVar1 = BoundsCheck(param_1, param_2);
        if (cVar1 != '\0') {
            this_00 = &field_248;
            lVar2 = eastl::vector<PageInfo, eastl::allocator>::operator[]((vector<PageInfo, eastl::allocator>*)this_00,
                                                                          (long)field_280);
            this_01 = (Control*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(lVar2 + 32));
            cVar1 = this_01->BoundsCheck(param_1, param_2);
            if (cVar1 != '\0') {
                lVar2 = eastl::vector<PageInfo, eastl::allocator>::operator[](
                    (vector<PageInfo, eastl::allocator>*)this_00, (long)field_280);
                plVar3 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(lVar2 + 32));
                (**(code**)(*plVar3 + 224))(plVar3, 1);
                lVar2 = eastl::vector<PageInfo, eastl::allocator>::operator[](
                    (vector<PageInfo, eastl::allocator>*)this_00, (long)field_280);
                plVar3 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(lVar2 + 32));
                return (**(code**)(*plVar3 + 64))(param_1, param_2, plVar3);
            }
        }
        return 0;
    }

    // 0x100a446e0, 112 bytes, placed by class name and debug map
    // ContainerGroup::SetMouseOver(bool)
    void ContainerGroup::SetMouseOver(bool param_1) {
        long lVar1;
        long lVar2;
        long* plVar3;
        undefined7 in_register_00000031;

        field_208 = param_1;
        if ((int)CONCAT71(in_register_00000031, param_1) == 0) {
            lVar1 = (&field_248)->HeapBeginPtr();
            lVar2 = (&field_248)->end();
            for (; lVar1 != lVar2; lVar1 = lVar1 + 80) {
                plVar3 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(lVar1 + 32));
                (**(code**)(*plVar3 + 224))(plVar3, 0);
            }
        }
    }

    // 0x100a44750, 192 bytes, placed by class name and debug map
    // ContainerGroup::SetTweaky(weak_ptr<Tweaky>)
    void ContainerGroup::SetTweaky(weak_ptr* param_2) {
        long* plVar1;
        shared_ptr local_40;
        weak_ptr<oldscape::dash3d::Decor> local_30[16];

        weak_ptr<Tweaky>::operator=((weak_ptr<Tweaky>*)&field_104, param_2);
        make_shared<Settings, eastl::stringconst&, ContainerGroup&>((jag*)&local_40, (basic_string*)&field_216, this);
        shared_ptr<Settings>::operator=((shared_ptr<Settings>*)&field_288, &local_40);
        local_40.~shared_ptr();
        plVar1 = (long*)shared_ptr<Settings>::operator->((shared_ptr<Settings>*)&field_288);
        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_30, param_2);
        (**(code**)(*plVar1 + 232))(plVar1, local_30);
        local_30->~weak_ptr();
    }

    // 0x100a44940, 624 bytes, placed by class name and debug map
    // ContainerGroup::AddPage(eastl::string const&)
    ContainerGroup* ContainerGroup::AddPage(basic_string* param_1) {
        Layout* this_00;
        long lVar2;
        basic_string* pbVar3;
        basic_string* pbVar4;
        long* plVar5;
        Control* pCVar6;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>* in_RDX;
        shared_ptr* extraout_RDX;
        undefined1 local_c8[48];
        undefined8 local_98;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_90[16];
        undefined2 local_80;
        weak_ptr<oldscape::dash3d::Decor> local_78[16];
        weak_ptr<oldscape::dash3d::Decor> local_68[16];
        enable_shared_from_this<PathingEntity> local_58[16];
        shared_ptr local_48;

        lVar2 = eastl::basic_string<
            char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::find(in_RDX, '=', 0);
        if (lVar2 != -1) {
            /* WARNING: Subroutine does not return */
            LogAssert("name.find(\'=\') == eastl::string::npos",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/tweaky/"
                      "Tweaky_ContainerGroup.cpp",
                      46, "Error: Tweaky page name cannot contain \'=\'");
        }
        this_00 = (Layout*)(param_1 + 248);
        pbVar3 = (basic_string*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_00);
        pbVar4 = (basic_string*)this_00->end();
        while (true) {
            if (pbVar3 == pbVar4) {
                make_shared<Container, eastl::stringconst&>((jag*)&local_48, (basic_string*)in_RDX);
                plVar5 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)&local_48);
                weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_78, (weak_ptr*)(param_1 + 104));
                (**(code**)(*plVar5 + 232))(plVar5, local_78);
                local_78->~weak_ptr();
                pCVar6 = (Control*)shared_ptr<Container>::operator->((shared_ptr<Container>*)&local_48);
                local_58->shared_from_this();
                static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(
                    (shared_ptr*)local_c8, (jag*)local_58, extraout_RDX);
                weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_68, (weak_ptr*)local_c8);
                pCVar6->SetParent(local_68);
                local_68->~weak_ptr();
                local_c8->~shared_ptr();
                local_58->~shared_ptr();
                new (local_c8) eastl::string(in_RDX);
                new ((local_c8 + 32)) shared_ptr<oldscape::dash3d::Decor>(&local_48);
                local_98 = 0;
                shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(
                    local_90, (_func_decltype_nullptr*)&local_48);
                local_80 = 0;
                this_00->push_back(local_c8);
                local_c8->~PageInfo();
                *(undefined8*)(param_1 + 36) = 0;
                lVar2 = this_00->back();
                new ((ContainerGroup*)this) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)(lVar2 + 32));
                local_48.~shared_ptr();
                return (ContainerGroup*)this;
            }
            if (eastl::operator==(pbVar3, (basic_string*)in_RDX))
                break;
            pbVar3 = pbVar3 + 80;
        }
        new ((ContainerGroup*)this) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)(pbVar3 + 32));
        return (ContainerGroup*)this;
    }

    // 0x100a44cf0, 160 bytes, placed by class name and debug map
    // ContainerGroup::GetPage(eastl::string const&)
    PageInfo* ContainerGroup::GetPage(basic_string* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        PageInfo* pPVar3;
        PageInfo* pPVar4;
        PageInfo* pPVar5;
        undefined1* this_00;
        eastl::string local_50[32];

        this_00 = &field_248;
        uVar1 = this_00->HeapBeginPtr();
        uVar2 = this_00->end();
        eastl::string::basic_string(local_50, param_1);
        pPVar3 = std::find_if<PageInfo*, (eastl::stringconst&)->GetPage()::__15>(uVar1, uVar2, local_50);
        GetPage(eastl::stringconst&)::$_15::~__15((__15*)local_50);
        pPVar4 = (PageInfo*)this_00->end();
        pPVar5 = (PageInfo*)0;
        if (pPVar3 != pPVar4) {
            pPVar5 = pPVar3;
        }
        return pPVar5;
    }

    // 0x100a44df0, 288 bytes, placed by class name and debug map
    // ContainerGroup::SetSelectedPage(int)
    void ContainerGroup::SetSelectedPage(int param_1) {
        int iVar1;
        Settings* this_00;
        long lVar2;
        long* plVar3;
        Event local_48;
        enable_shared_from_this<PathingEntity> local_30[16];

        if (-1 < param_1) {
            iVar1 = (&field_248)->size();
            if (param_1 < iVar1) {
                if (field_280 != param_1) {
                    field_280 = param_1;
                    this_00 = (Settings*)shared_ptr<Settings>::operator->((shared_ptr<Settings>*)&field_288);
                    lVar2 = eastl::vector<PageInfo, eastl::allocator>::operator[](
                        (vector<PageInfo, eastl::allocator>*)&field_248, (long)field_280);
                    this_00->SetCheckbox(*(bool*)(lVar2 + 73));
                    lVar2 = eastl::vector<PageInfo, eastl::allocator>::operator[](
                        (vector<PageInfo, eastl::allocator>*)&field_248, (long)field_280);
                    plVar3 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(lVar2 + 32));
                    (**(code**)(*plVar3 + 80))(plVar3);
                    local_30->shared_from_this();
                    new (&local_48) Event(local_30, 3);
                    DoCallback(&local_48);
                    local_48.~LRUHashCacheWrapper();
                    local_30->~shared_ptr();
                }
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert(
            "pageIndex >= 0 && pageIndex < (int)m_list.size()",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/tweaky/Tweaky_ContainerGroup.cpp",
            76, (char*)0);
    }

    // 0x100a44f40, 64 bytes, placed by class name
    // ContainerGroup::Sort()
    void ContainerGroup::Sort() {
        undefined8 uVar1;
        undefined8 uVar2;

        uVar1 = (&field_248)->HeapBeginPtr();
        uVar2 = (&field_248)->end();
        eastl::sort<PageInfo*, ContainerGroup::Sort()::__16>(uVar1, uVar2);
    }

    // 0x100a5f210, 16 bytes, placed by class name
    // ContainerGroup::Sort()::$_16::operator()(PageInfo const&, PageInfo const&) const
    /* ContainerGroup::Sort()::$_16::TEMPNAMEPLACEHOLDERVALUE(PageInfo const&,
   PageInfo const&) const */

    uint ContainerGroup::Sort()::$_16::operator()(PageInfo* param_1, PageInfo* param_2) {
        return param_1->compare() >> 31;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ContainerGroup::~ContainerGroup();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ContainerGroup::~ContainerGroup();

} // namespace jag::tweak

namespace jag {
    // 0x100a44810, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<tweak::Settings>::type make_shared<tweak::Settings, eastl::string const&, tweak::ContainerGroup&>(eastl::string const&, tweak::ContainerGroup&)
    jag* jag::make_shared<tweak::Settings, eastl::stringconst&, tweak::ContainerGroup&>(basic_string* param_1,
                                                                                        ContainerGroup* param_2) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_3c;
        Settings* local_38[2];

        pvVar1 = (void*)aligned_alloc(480, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_38[0] = placement_new<tweak::Settings, eastl::stringconst&, tweak::ContainerGroup&>(
                (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = (ref_counter_base*)placement_new<ref_counter_shared<tweak::Settings>, int, tweak::Settings*&>(
                pvVar1, &local_3c, local_38);
            shared_ptr_do_enable_shared_from_this<tweak::Settings>(prVar2, local_38[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x100a44bb0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<tweak::Container>::type make_shared<tweak::Container, eastl::string const&>(eastl::string const&)
    jag* make_shared<tweak::Container, eastl::stringconst&>(basic_string* param_1) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_34;
        Container* local_30[2];

        pvVar1 = (void*)aligned_alloc(336, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_30[0] = placement_new<tweak::Container, eastl::stringconst&>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = (ref_counter_base*)placement_new<ref_counter_shared<tweak::Container>, int, tweak::Container*&>(
                pvVar1, &local_34, local_30);
            shared_ptr_do_enable_shared_from_this<tweak::Container>(prVar2, local_30[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag

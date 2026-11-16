// libs/tweaky/Tweaky_ContainerGroup.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.tweaky

#include "Tweaky_ContainerGroup.h"

namespace jag::tweak {
    // 0x100a445d0
    uint64_t ContainerGroup::OnMouseOver(float arg1, float arg2) {
        uint8_t* this_00;
        long lVar2;
        long* plVar3;

        if (BoundsCheck(arg1, arg2)) {
            this_00 = &field_248;
            lVar2 = (*this_00)[(long)field_280];
            if (((Control*)(*((lVar2 + 32))).operator->())->BoundsCheck(arg1, arg2)) {
                lVar2 = (*this_00)[(long)field_280];
                plVar3 = (long*)(*((lVar2 + 32))).operator->();
                (**(void (**)(...))(*plVar3 + 224))(plVar3, 1);
                lVar2 = (*this_00)[(long)field_280];
                plVar3 = (long*)(*((lVar2 + 32))).operator->();
                return (**(void (**)(...))(*plVar3 + 64))(arg1, arg2, plVar3);
            }
        }
        return 0;
    }

    // 0x100a446e0
    void ContainerGroup::SetMouseOver(bool arg1) {
        long lVar1;
        long lVar2;
        long* plVar3;
        uint64_t in_register_00000031;

        field_208 = arg1;
        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0) {
            lVar1 = field_248.HeapBeginPtr();
            lVar2 = field_248.end();
            for (; lVar1 != lVar2; lVar1 = lVar1 + 80) {
                plVar3 = (long*)(*((lVar1 + 32))).operator->();
                (**(void (**)(...))(*plVar3 + 224))(plVar3, 0);
            }
        }
    }

    // 0x100a44750
    void ContainerGroup::SetTweaky(weak_ptr<Tweaky> tweaky) {
        ReturnValue local_40;

        field_104 = *tweaky;
        make_shared<Settings, eastl::stringconst&, ContainerGroup&>(&local_40, (eastl::string*)&field_216, this);
        field_288 = local_40;
        auto plVar1 = field_288.operator->();
        weak_ptr<oldscape::dash3d::Decor> local_30(*tweaky);
        (**(void (**)(...))(*plVar1 + 232))(plVar1, &local_30);
    }

    // 0x100a44940
    ContainerGroup* ContainerGroup::AddPage(const eastl::string& str) {
        long* plVar4;
        Control* this_01;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>* in_RDX;
        uint8_t local_c8[48];
        uint64_t local_98;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_90;
        uint16_t local_80;
        weak_ptr<oldscape::dash3d::Decor> local_78;
        weak_ptr<oldscape::dash3d::Decor> local_68;
        enable_shared_from_this<PathingEntity> local_58;
        ReturnValue local_48;

        long lVar2 = in_RDX->find('=', 0);
        if (lVar2 != -1) {
            LogAssert("name.find(\'=\') == eastl::string::npos",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/tweaky/"
                      "Tweaky_ContainerGroup.cpp",
                      46, "Error: Tweaky page name cannot contain \'=\'");
        }
        Layout* this_00 = (Layout*)(str + 248);
        auto str1 = this_00->HeapBeginPtr();
        auto pbVar3 = this_00->end();
        while (true) {
            if (str1 == pbVar3) {
                make_shared<Container, eastl::stringconst&>(&local_48, (eastl::string*)in_RDX);
                plVar4 = (long*)local_48.operator->();
                local_78 = weak_ptr(*((str + 104)));
                (**(void (**)(...))(*plVar4 + 232))(plVar4, &local_78);
                this_01 = (Control*)local_48.operator->();
                local_58.shared_from_this();
                static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(
                    (shared_ptr<oldscape::ClientNpc>*)local_c8);
                local_68 = weak_ptr(*local_c8);
                this_01->SetParent(&local_68);
                new (local_c8) eastl::string(*in_RDX);
                new ((local_c8 + 32)) shared_ptr(&local_48);
                local_98 = 0;
                local_90 = shared_ptr();
                local_80 = 0;
                this_00->push_back(*local_c8);
                *(uint64_t*)(str + 36) = 0;
                lVar2 = this_00->back();
                new (this) shared_ptr((lVar2 + 32));
                return this;
            }
            if (*str1 == *in_RDX)
                break;
            str1 = str1 + 80;
        }
        new (this) shared_ptr((str1 + 32));
        return this;
    }

    // 0x100a44cf0
    PageInfo* ContainerGroup::GetPage(const eastl::string& str) {
        uint8_t* this_00 = &field_248;
        auto pPVar1 = this_00->HeapBeginPtr();
        auto pPVar2 = this_00->end();
        eastl::string local_50(str);
        pPVar2 = std::find_if<PageInfo*, (eastl::stringconst&)->GetPage()::__15>(pPVar1, pPVar2, &local_50);
        GetPage(eastl::stringconst&)::$_15::~__15(&local_50);
        auto pPVar3 = this_00->end();
        pPVar1 = nullptr;
        if (pPVar2 != pPVar3) {
            pPVar1 = pPVar2;
        }
        return pPVar1;
    }

    // 0x100a44df0
    void ContainerGroup::SetSelectedPage(int arg1) {
        int iVar1;
        Settings* this_00;
        long lVar2;
        long* plVar3;
        Event local_48;
        enable_shared_from_this<PathingEntity> local_30;

        if (-1 < arg1) {
            iVar1 = field_248.size();
            if (arg1 < iVar1) {
                if (field_280 != arg1) {
                    field_280 = arg1;
                    this_00 = (Settings*)field_288.operator->();
                    lVar2 = field_248[(long)field_280];
                    this_00->SetCheckbox(*(bool*)(lVar2 + 73));
                    lVar2 = field_248[(long)field_280];
                    plVar3 = (long*)(*((lVar2 + 32))).operator->();
                    (**(void (**)(...))(*plVar3 + 80))(plVar3);
                    local_30.shared_from_this();
                    local_48 = Event(local_30, 3);
                    DoCallback(local_48);
                }
                return;
            }
        }
        LogAssert(
            "pageIndex >= 0 && pageIndex < (int)m_list.size()",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/tweaky/Tweaky_ContainerGroup.cpp",
            76, nullptr);
    }

    // 0x100a44f40
    void ContainerGroup::Sort() {
        uint8_t auVar1[16];

        auto pageInfo1 = field_248.HeapBeginPtr();
        auVar1 = field_248.end();
        eastl::sort<PageInfo*, ContainerGroup::Sort()::__16>(pageInfo1, auVar1._0_8_, auVar1._8_8_);
    }

    // 0x100a5f210
    unsigned int ContainerGroup::Sort()::$_16::operator()(const PageInfo& pageInfo1, const PageInfo& pageInfo2) const {
        return compare(pageInfo1) >> 31;
    }

    // 0x100c92b50: ContainerGroup::~ContainerGroup() has the same machine code as InlineFatalBreak()

} // namespace jag::tweak

namespace jag {
    // 0x100a44810
    shared_ptr_if_not_array<tweak::Settings>::type
    make_shared<tweak::Settings, eastl::string const&, tweak::ContainerGroup&>(const eastl::string& str,
                                                                               tweak::ContainerGroup& containerGroup) {
        ref_counter_base* ref_counter_base;
        int local_3c;
        Settings* local_38[2];

        auto arg1 = aligned_alloc(480, 16);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<tweak::Settings>::type result;
        } else {
            local_38[0] = placement_new<tweak::Settings, eastl::stringconst&, tweak::ContainerGroup&>(
                (void*)((long)arg1 + 32), str, containerGroup);
            local_3c = 1;
            ref_counter_base =
                (ref_counter_base*)placement_new<ref_counter_shared<tweak::Settings>, int, tweak::Settings*&>(
                    arg1, &local_3c, local_38);
            shared_ptr_do_enable_shared_from_this<tweak::Settings>(ref_counter_base, local_38[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x100a44bb0
    shared_ptr_if_not_array<tweak::Container>::type
    make_shared<tweak::Container, eastl::string const&>(const eastl::string& str) {
        ref_counter_base* ref_counter_base;
        int local_34;
        Container* local_30[2];

        auto arg1 = aligned_alloc(336, 16);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<tweak::Container>::type result;
        } else {
            local_30[0] = placement_new<tweak::Container, eastl::stringconst&>((void*)((long)arg1 + 32), str);
            local_34 = 1;
            ref_counter_base =
                (ref_counter_base*)placement_new<ref_counter_shared<tweak::Container>, int, tweak::Container*&>(
                    arg1, &local_34, local_30);
            shared_ptr_do_enable_shared_from_this<tweak::Container>(ref_counter_base, local_30[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag

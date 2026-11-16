// libs/tweaky/Tweaky_Settings.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.tweaky

#include "Tweaky_Settings.h"
#include "libs/hal/settings/Settings.h"

namespace jag::tweak {
    // 0x100a44f10, 48 bytes, placed by class name and debug map
    // Settings::SetCheckbox(bool)
    void Settings::SetCheckbox(bool param_1) {
        long* plVar1;
        undefined7 in_register_00000031;

        plVar1 = (long*)shared_ptr<CheckBox>::operator->((shared_ptr<CheckBox>*)&field_304);
        (**(code**)(*plVar1 + 128))(plVar1, CONCAT71(in_register_00000031, param_1) & 4294967295);
    }

    // 0x100a4bf00, 192 bytes, base-object constructor, placed by class name
    // Settings::Settings(eastl::string const&, ContainerGroup&)
    void Settings::Settings(basic_string* param_1, ContainerGroup* param_2) {
        new (this) Container();
        field_0 = &PTR__Settings_100f1d5d0;
        field_296 = param_2;
        new (&field_304, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_320) TweakSettingsValue();
        new (&field_408) eastl::string();
        eastl::string::operator=((eastl::string*)&field_408, param_1);
    }

    // 0x100a4c0a0, 16 bytes, complete-object constructor, placed by class name
    // Settings::Settings(eastl::string const&, ContainerGroup&): jumps straight to the base-object constructor

    // 0x100a4c0b0, 368 bytes, placed by class name
    // Settings::Initialise(weak_ptr<Tweaky>)
    void Settings::Initialise(Container* param_1) {
        shared_ptr* this;
        Control* this_00;
        shared_ptr local_68[3];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        (*(code*)param_1->field_0[30])(param_1, 1);
        std::function<void(Event_const&)>::function<Settings::Initialise(weak_ptr<Tweaky>)::__17, void>(local_68,
                                                                                                        param_1);
        param_1->AddButton("Save Page", local_68);
        std::function<void(Event_const&)>::~function((function<void(Event_const&)>*)local_68);
        std::function<void(Event_const&)>::function<Settings::Initialise(weak_ptr<Tweaky>)::__18, void>(local_68,
                                                                                                        param_1);
        param_1->AddButton("Load Page", local_68);
        std::function<void(Event_const&)>::~function((function<void(Event_const&)>*)local_68);
        make_shared<CheckBox, char const(&)[15]>((jag*)local_68, "Load on Launch");
        this = (shared_ptr*)((long)&param_1[1].field_0 + 3);
        shared_ptr<CheckBox>::operator=((shared_ptr<CheckBox>*)this, local_68);
        local_68->~shared_ptr();
        this_00 = (Control*)shared_ptr<CheckBox>::operator->((shared_ptr<CheckBox>*)this);
        std::function<void(Event_const&)>::function<Settings::Initialise(weak_ptr<Tweaky>)::__19, void>(local_68,
                                                                                                        param_1);
        this_00->SetHandler(local_68);
        std::function<void(Event_const&)>::~function((function<void(Event_const&)>*)local_68);
        new (local_68) shared_ptr<oldscape::dash3d::Decor>(this);
        param_1->Add(local_68);
        local_68->~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100a4c330, 96 bytes, placed by class name
    // Settings::SetTweaky(weak_ptr<Tweaky>)
    void Settings::SetTweaky(weak_ptr* param_2) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<Tweaky>::operator=((weak_ptr<Tweaky>*)&field_104, param_2);
        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_2);
        Initialise(this);
        local_28->~weak_ptr();
    }

    // 0x100a4c390, 128 bytes, placed by class name
    // Settings::SavePage(PageInfo const&)
    void Settings::SavePage(PageInfo* param_1) {
        eastl::string* this_00;
        long* plVar1;
        char* pcVar2;

        this_00 = (eastl::string*)
            eastl::map<eastl::string, TweakSettingsValue, eastl::less<eastl::string>, eastl::allocator>::operator[](
                (map<eastl::string, TweakSettingsValue, eastl::less<eastl::string>, eastl::allocator>*)(field_320 + 32),
                (basic_string*)param_1);
        pcVar2 = "1";
        if (*(char*)((long)&param_1->field_66 + 7) == '\0') {
            pcVar2 = "0";
        }
        eastl::string::assign(this_00, pcVar2);
        ((this_00 + 32))->clear();
        plVar1 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)&param_1->field_32);
        (**(code**)(*plVar1 + 184))(plVar1, this_00);
        WriteSettingsFile(this);
    }

    // 0x100a4c440, 624 bytes, placed by class name
    // Settings::WriteSettingsFile()
    void Settings::WriteSettingsFile() {
        long lVar3;
        char* pcVar4;
        ostream* poVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* phVar6;
        hashtable_iterator_base* extraout_RDX_00;
        TweakSettingsValue aTStackY_2f88[128];
        TweakSettingsValue in_stack_fffffffffffffcc8;
        eastl local_2d8[8];
        eastl::string local_2d0[32];
        hashtable_iterator_base local_2b0[8];
        Settings* local_2a8;
        Filename local_2a0;
        ostream local_290[288];
        ClientCompositeZone local_170[13];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_2a8 = this;
        new (&local_2a0) Filename((basic_string*)&field_408);
        new (local_170) File(&local_2a0, 1538, 0);
        local_2a0.~pair();
        if (local_170->IsValid() != '\0') {
            new (&local_2a0) std::stringstream();
            eastl::vector<unsigned long,
                          eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
            eastl::rbtree<
                unsigned int,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::less<unsigned int>, eastl::allocator,
                eastl::use_first<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                true, true>::end();
            phVar6 = extraout_RDX;
            while (true) {
                if (!eastl::operator!=(local_2d8, local_2b0, phVar6))
                    break;
                lVar3 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_2d8);
                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                poVar5 = std::operator<<(local_290, pcVar4);
                poVar5 = std::operator<<(poVar5, "=");
                new ((local_2d8 + -88)) TweakSettingsValue((TweakSettingsValue*)(lVar3 + 32));
                SerializeNode(in_stack_fffffffffffffcc8);
                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                std::operator<<(poVar5, pcVar4);
                eastl::string::~basic_string(local_2d0);
                ((local_2d8 + -88))->~TweakSettingsValue();
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_2d8);
                phVar6 = extraout_RDX_00;
            }
            local_2d0->str();
            pcVar4 = (char*)local_2d0->c_str();
            local_170->write(pcVar4, 0);
            local_2d0->~string();
            local_170->close(0);
            local_2a0.~stringstream();
        }
        local_170->~File();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100a4c6b0, 16 bytes, placed by class name
    // Settings::SetLoadPageOnLaunch(PageInfo&, bool)
    void Settings::SetLoadPageOnLaunch(PageInfo* param_1, bool param_2) {
        *(bool*)((long)&param_1->field_66 + 7) = param_2;
        SavePage(this, param_1);
    }

    // 0x100a4c6c0, 64 bytes, placed by class name
    // Settings::LoadPage(PageInfo&)
    void Settings::LoadPage(PageInfo* param_1) {
        undefined8 uVar1;
        long* plVar2;

        uVar1 = eastl::map<eastl::string, TweakSettingsValue, eastl::less<eastl::string>, eastl::allocator>::operator[](
            (map<eastl::string, TweakSettingsValue, eastl::less<eastl::string>, eastl::allocator>*)(field_320 + 32),
            (basic_string*)param_1);
        plVar2 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)&param_1->field_32);
        (**(code**)(*plVar2 + 176))(plVar2, uVar1);
    }

    // 0x100a4c700, 224 bytes, placed by class name
    // Settings::LoadOnLaunch()
    void Settings::LoadOnLaunch() {
        bool bVar1;
        basic_string* pbVar2;
        long lVar3;
        long* plVar4;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_40[8];
        hashtable_iterator_base local_38[8];

        ParseFile(this);
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar1 = eastl::operator!=(local_40, local_38, extraout_RDX);
        if (bVar1) {
            do {
                pbVar2 = (basic_string*)eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_40);
                bVar1 = eastl::operator==(pbVar2 + 32, (value_type*)&DAT_100e33d78);
                if (bVar1) {
                    lVar3 = (field_296, pbVar2)->GetPage();
                    if (lVar3 != 0) {
                        *(undefined1*)(lVar3 + 73) = 1;
                        plVar4 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(lVar3 + 32));
                        (**(code**)(*plVar4 + 176))(plVar4, pbVar2 + 32);
                    }
                }
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_40);
                bVar1 = eastl::operator!=(local_40, local_38, extraout_RDX_00);
            } while (bVar1);
        }
    }

    // 0x100a4c7e0, 752 bytes, placed by class name
    // Settings::ParseFile()
    void Settings::ParseFile() {
        eastl::string* pbVar1;
        bool bVar3;
        long lVar4;
        char* pcVar5;
        long lVar6;
        eastl::string* this_00;
        char* extraout_RDX;
        undefined1 auVar7[16];
        allocator local_2f0[32];
        allocator local_2d0[8];
        File local_2c8;
        eastl::string* local_2a8;
        File local_2a0[12];
        ClientCompositeZone local_170[13];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (local_2a0) Filename((basic_string*)&field_408);
        new (local_170) File(local_2a0, 2, 0);
        local_2a0->~pair();
        if (local_170->IsValid() != '\0') {
            local_2a0->readline();
            lVar4 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (lVar4 != 0) {
                this_00 = (eastl::string*)field_320;
                local_2a8 = this_00;
                do {
                    auVar7 = local_2a0->find("=", 1);
                    lVar4 = auVar7._0_8_;
                    if (lVar4 == -1) {
                        bVar3 = eastl::operator==((eastl*)local_2a0, (basic_string*)&DAT_100e35828, auVar7._8_8_);
                        if (bVar3) {
                            local_2a8 = this_00;
                        } else {
                            bVar3 = eastl::operator==((eastl*)local_2a0, (basic_string*)&DAT_100e3582e, extraout_RDX);
                            if (bVar3) {
                                local_2a8 = *(eastl::string**)(local_2a8 + 80);
                            }
                        }
                    } else {
                        pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        lVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        eastl::allocator::allocator(local_2f0, "EASTL basic_string");
                        new (&local_2c8) eastl::string(pcVar5, (char*)(lVar6 + lVar4), local_2f0);
                        lVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
                        eastl::allocator::allocator(local_2d0, "EASTL basic_string");
                        new (local_2f0) eastl::string((char*)(lVar6 + lVar4 + 1), pcVar5, local_2d0);
                        pbVar1 = local_2a8;
                        this_00 = (eastl::string*)
                            eastl::map<eastl::string, TweakSettingsValue, eastl::less<eastl::string>,
                                       eastl::allocator>::operator[]((map<eastl::string, TweakSettingsValue,
                                                                          eastl::less<eastl::string>,
                                                                          eastl::allocator>*)(local_2a8 + 32),
                                                                     (basic_string*)&local_2c8);
                        *(eastl::string**)(this_00 + 80) = pbVar1;
                        eastl::string::operator=(this_00, (basic_string*)local_2f0);
                        local_2f0->~basic_string();
                        local_2c8.~basic_string();
                    }
                    local_2c8.readline();
                    eastl::string::operator=((eastl::string*)local_2a0, (basic_string*)&local_2c8);
                    local_2c8.~basic_string();
                    lVar4 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                } while (lVar4 != 0);
            }
            local_170->close(0);
            local_2a0->~basic_string();
        }
        local_170->~File();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100a4cb80, 528 bytes, placed by class name
    // Settings::SerializeNode(TweakSettingsValue)
    eastl::string* Settings::SerializeNode(TweakSettingsValue param_1) {
        bool bVar1;
        char* pcVar2;
        ostream* poVar3;
        long lVar4;
        long in_RDX;
        undefined8 extraout_RDX;
        eastl::string* in_RDI;
        undefined1 auVar5[16];
        TweakSettingsValue aTStackY_2e38[128];
        TweakSettingsValue in_stack_fffffffffffffe18;
        stringstream local_188[16];
        ostream local_178[264];
        eastl::string local_70[32];
        undefined8 local_50[2];
        eastl::string* local_40;
        undefined8 local_38;

        std::stringstream::stringstream(local_188);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        poVar3 = std::operator<<(local_178, pcVar2);
        std::operator<<(poVar3, "\r\n");
        lVar4 = ((in_RDX + 32))->capacity();
        if (lVar4 != 0) {
            std::operator<<(local_178, "{\r\n");
            local_40 = in_RDI;
            local_38 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                     eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                     true>::begin();
            auVar5 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                   eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                   true>::end();
            while (true) {
                local_50[0] = auVar5._0_8_;
                bVar1 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)local_50, auVar5._8_8_);
                if (!bVar1)
                    break;
                lVar4 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_38);
                pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                poVar3 = std::operator<<(local_178, pcVar2);
                poVar3 = std::operator<<(poVar3, "=");
                new ((local_188 + -88)) TweakSettingsValue((TweakSettingsValue*)(lVar4 + 32));
                SerializeNode(in_stack_fffffffffffffe18);
                pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                std::operator<<(poVar3, pcVar2);
                eastl::string::~basic_string(local_70);
                ((local_188 + -88))->~TweakSettingsValue();
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_38);
                auVar5._8_8_ = extraout_RDX;
                auVar5._0_8_ = local_50[0];
            }
            std::operator<<(local_178, "}\r\n");
            in_RDI = local_40;
        }
        local_70->str();
        pcVar2 = (char*)local_70->c_str();
        new (&local_38) eastl::allocator("EASTL basic_string");
        eastl::string::basic_string(in_RDI, pcVar2, (allocator*)&local_38);
        local_70->~string();
        std::stringstream::~stringstream(local_188);
        return in_RDI;
    }

} // namespace jag::tweak

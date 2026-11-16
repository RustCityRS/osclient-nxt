// projects/osclient/loading/OsrsLoadingScript.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "OsrsLoadingScript.h"

namespace jag {
    // 0x100018a20, 1456 bytes, placed by class name and debug map
    // OsrsLoadingScript::Create_root_Resources(LoadingScreenScript::LoadingScreenAnimation&)
    void OsrsLoadingScript::Create_root_Resources(LoadingScreenAnimation* param_1) {
        undefined1* this_00;
        undefined1* this_01;
        vector<LoadingScreenScript::Keyframe, eastl::allocator>* pvVar1;
        undefined4* puVar2;
        long lVar3;
        unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>* puVar4;
        undefined1* this_02;
        undefined8 local_68;
        undefined8 uStack_60;
        long local_58;
        undefined8 uStack_50;
        uint local_48;
        undefined1 local_44;
        allocator local_40[8];
        ChildAnimData local_38[8];

        (&param_1->field_24, 1, 3)->set_max_size();
        param_1->DecodePng(0, &root_ns::x_imgdata, 1370);
        this_00 = &param_1->field_48;
        this_00->set_max_size(6, 3);
        this_02 = &field_120;
        local_68 = Array<LoadingScreenScript::LoadingScreenAnimation, eastl::allocator>::operator[](
            (Array<LoadingScreenScript::LoadingScreenAnimation, eastl::allocator>*)this_02, 1);
        uStack_60 = 224;
        local_58._0_1_ = 1;
        std::make_unique<LoadingScreenScript::ChildAnimLayer, LoadingScreenScript::ChildAnimData>(local_38);
        eastl::allocator::allocator(local_40, "EASTL basic_string");
        new (&local_68) eastl::string("BgLoaded", local_40);
        this_01 = &param_1->field_176;
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<eastl::string>, eastl::allocator>::
            operator[]((map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<eastl::string>, eastl::allocator>*)this_01,
                       (basic_string*)&local_68);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        local_68.~basic_string();
        *puVar2 = 0;
        lVar3 = std::unique_ptr<LoadingScreenScript::ChildAnimLayer,
                                std::default_delete<LoadingScreenScript::ChildAnimLayer>>::
                operator->((unique_ptr<LoadingScreenScript::ChildAnimLayer,
                                       std::default_delete<LoadingScreenScript::ChildAnimLayer>>*)local_38);
        *(long*)(puVar2 + 2) = lVar3 + 24;
        puVar2[4] = 0;
        eastl::allocator::allocator(local_40, "EASTL basic_string");
        new (&local_68) eastl::string("Error", local_40);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<eastl::string>, eastl::allocator>::
            operator[]((map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<eastl::string>, eastl::allocator>*)this_01,
                       (basic_string*)&local_68);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        local_68.~basic_string();
        *puVar2 = 0;
        lVar3 = std::unique_ptr<LoadingScreenScript::ChildAnimLayer,
                                std::default_delete<LoadingScreenScript::ChildAnimLayer>>::
                operator->((unique_ptr<LoadingScreenScript::ChildAnimLayer,
                                       std::default_delete<LoadingScreenScript::ChildAnimLayer>>*)local_38);
        *(long*)(puVar2 + 2) = lVar3 + 24;
        puVar2[4] = 0;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       0);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_38);
        local_38->~unique_ptr();
        local_68 = Array<LoadingScreenScript::LoadingScreenAnimation, eastl::allocator>::operator[](
            (Array<LoadingScreenScript::LoadingScreenAnimation, eastl::allocator>*)this_02, 2);
        uStack_60 = 1202590843234;
        local_58 = (ulong)local_58._1_7_ << 8;
        std::make_unique<LoadingScreenScript::ChildAnimLayer, LoadingScreenScript::ChildAnimData>(local_38);
        eastl::allocator::allocator(local_40, "EASTL basic_string");
        new (&local_68) eastl::string("Error", local_40);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<eastl::string>, eastl::allocator>::
            operator[]((map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<eastl::string>, eastl::allocator>*)this_01,
                       (basic_string*)&local_68);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        local_68.~basic_string();
        *puVar2 = 0;
        lVar3 = std::unique_ptr<LoadingScreenScript::ChildAnimLayer,
                                std::default_delete<LoadingScreenScript::ChildAnimLayer>>::
                operator->((unique_ptr<LoadingScreenScript::ChildAnimLayer,
                                       std::default_delete<LoadingScreenScript::ChildAnimLayer>>*)local_38);
        *(long*)(puVar2 + 2) = lVar3 + 24;
        puVar2[4] = 0;
        eastl::allocator::allocator(local_40, "EASTL basic_string");
        new (&local_68) eastl::string("showspin", local_40);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<eastl::string>, eastl::allocator>::
            operator[]((map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<eastl::string>, eastl::allocator>*)this_01,
                       (basic_string*)&local_68);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        local_68.~basic_string();
        *puVar2 = 0;
        lVar3 = std::unique_ptr<LoadingScreenScript::ChildAnimLayer,
                                std::default_delete<LoadingScreenScript::ChildAnimLayer>>::
                operator->((unique_ptr<LoadingScreenScript::ChildAnimLayer,
                                       std::default_delete<LoadingScreenScript::ChildAnimLayer>>*)local_38);
        *(long*)(puVar2 + 2) = lVar3 + 24;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       1);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_38);
        local_38->~unique_ptr();
        local_68 = 1520418422784;
        uStack_60 = 280;
        local_58 = 18446744069414584320;
        uStack_50 = 1099511627775;
        local_48 = 0;
        local_44 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>((SpriteData*)local_38);
        eastl::allocator::allocator(local_40, "EASTL basic_string");
        new (&local_68) eastl::string("Error", local_40);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<eastl::string>, eastl::allocator>::
            operator[]((map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<eastl::string>, eastl::allocator>*)this_01,
                       (basic_string*)&local_68);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        local_68.~basic_string();
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_38);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       2);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_38);
        local_38->~unique_ptr();
        local_68 = Array<LoadingScreenScript::LoadingScreenAnimation, eastl::allocator>::operator[](
            (Array<LoadingScreenScript::LoadingScreenAnimation, eastl::allocator>*)this_02, 3);
        uStack_60 = 1546188226694;
        local_58 = CONCAT71(local_58._1_7_, 1);
        std::make_unique<LoadingScreenScript::ChildAnimLayer, LoadingScreenScript::ChildAnimData>(local_38);
        eastl::allocator::allocator(local_40, "EASTL basic_string");
        new (&local_68) eastl::string("Error", local_40);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<eastl::string>, eastl::allocator>::
            operator[]((map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<eastl::string>, eastl::allocator>*)this_01,
                       (basic_string*)&local_68);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        local_68.~basic_string();
        *puVar2 = 0;
        lVar3 = std::unique_ptr<LoadingScreenScript::ChildAnimLayer,
                                std::default_delete<LoadingScreenScript::ChildAnimLayer>>::
                operator->((unique_ptr<LoadingScreenScript::ChildAnimLayer,
                                       std::default_delete<LoadingScreenScript::ChildAnimLayer>>*)local_38);
        *(long*)(puVar2 + 2) = lVar3 + 24;
        puVar2[4] = 0;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       3);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_38);
        local_38->~unique_ptr();
        local_68 = 601295421630;
        uStack_60 = 193273528720;
        local_58 = 18374686483966590975;
        uStack_50 = 4294967297;
        local_48 = local_48 & 4294967040;
        std::make_unique<LoadingScreenScript::TextLayer, LoadingScreenScript::TextData>((TextData*)local_38);
        eastl::allocator::allocator(local_40, "EASTL basic_string");
        new (&local_68) eastl::string("Error", local_40);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<eastl::string>, eastl::allocator>::
            operator[]((map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<eastl::string>, eastl::allocator>*)this_01,
                       (basic_string*)&local_68);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        local_68.~basic_string();
        *puVar2 = 0;
        lVar3 = std::unique_ptr<LoadingScreenScript::TextLayer, std::default_delete<LoadingScreenScript::TextLayer>>::
                operator->(
                    (unique_ptr<LoadingScreenScript::TextLayer, std::default_delete<LoadingScreenScript::TextLayer>>*)
                        local_38);
        *(long*)(puVar2 + 2) = lVar3 + 40;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       4);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_38);
        local_38->~unique_ptr();
        local_68 = 0;
        uStack_60 = 2160368550653;
        local_58 = 18374686479671623680;
        uStack_50 = CONCAT35(uStack_50._5_3_, 255);
        std::make_unique<LoadingScreenScript::RectLayer, LoadingScreenScript::RectData>((RectData*)local_38);
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       5);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_38);
        local_38->~unique_ptr();
        param_1->field_0 = 1;
        param_1->field_4 = 0;
        param_1->field_12 = 1;
        param_1->field_8 = '\0';
    }

    // 0x100019730, 10896 bytes, placed by class name
    // OsrsLoadingScript::Create_anim_Resources(LoadingScreenScript::LoadingScreenAnimation&)
    void OsrsLoadingScript::Create_anim_Resources(LoadingScreenAnimation* param_1) {
        undefined1* this_00;
        undefined1* this_01;
        vector<LoadingScreenScript::Keyframe, eastl::allocator>* pvVar1;
        undefined4* puVar2;
        long lVar3;
        unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>* puVar4;
        ulong local_58[4];
        undefined4 local_38;
        undefined1 local_34;
        SpriteData local_30[8];

        (&param_1->field_24, 6, 3)->set_max_size();
        param_1->DecodePng(0, &anim_ns::bend1_imgdata, 272);
        param_1->DecodePng(1, &anim_ns::ne32_imgdata, 377);
        param_1->DecodePng(2, &anim_ns::bend2_imgdata, 320);
        param_1->DecodePng(3, &anim_ns::bend2b_imgdata, 309);
        param_1->DecodePng(4, &anim_ns::we32_imgdata, 114);
        param_1->DecodePng(5, &anim_ns::fill_imgdata, 1750);
        this_00 = &param_1->field_48;
        this_00->set_max_size(69, 3);
        local_58[0] = 858993459200;
        local_58[1] = 14;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 3;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        this_01 = &param_1->field_128;
        local_58[0] = CONCAT44(local_58[0]._4_4_, 913);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       0);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 816043786241;
        local_58[1] = 17;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = local_58[0] & 18446744069414584320;
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       1);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 747324309505;
        local_58[1] = 49;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 13);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       2);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 678604832769;
        local_58[1] = 81;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 27);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       3);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 609885356033;
        local_58[1] = 113;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 40);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       4);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 541165879297;
        local_58[1] = 145;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 54);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       5);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 472446402561;
        local_58[1] = 177;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 68);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       6);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 403726925825;
        local_58[1] = 209;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 81);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       7);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 339302416384;
        local_58[1] = 233;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 95);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       8);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 219043332098;
        local_58[1] = 231;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 109);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       9);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 257698037761;
        local_58[1] = 208;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 122);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       10);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 326417514497;
        local_58[1] = 176;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 136);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       11);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 395136991233;
        local_58[1] = 144;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 150);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       12);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 395136991233;
        local_58[1] = 112;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 2;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 163);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       13);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 326417514497;
        local_58[1] = 80;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 2;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 177);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       14);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 257698037761;
        local_58[1] = 48;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 2;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 190);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       15);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 219043332099;
        local_58[1] = 40;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 1;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 204);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       16);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 335007449092;
        local_58[1] = 40;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 218);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       17);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 446676598786;
        local_58[1] = 28;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 2;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 231);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       18);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 412316860416;
        local_58[1] = 14;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 1;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 245);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       19);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 283467841540;
        local_58[1] = 14;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 1;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 259);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       20);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 154618822660;
        local_58[1] = 14;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 1;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 272);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       21);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 38654705666;
        local_58[1] = 14;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 1;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 286);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       22);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 94489280513;
        local_58[1] = 30;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 2;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 300);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       23);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 154618822657;
        local_58[1] = 58;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 2;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 313);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       24);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 219043332097;
        local_58[1] = 88;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 2;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 327);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       25);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 270582939649;
        local_58[1] = 112;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 2;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 340);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       26);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 270582939649;
        local_58[1] = 144;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 354);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       27);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 201863462913;
        local_58[1] = 176;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 368);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       28);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 137438953473;
        local_58[1] = 206;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 381);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       29);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 68719476737;
        local_58[1] = 238;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 395);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       30);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 38654705666;
        local_58[1] = 257;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 409);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       31);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 163208757252;
        local_58[1] = 269;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 422);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       32);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 292057776132;
        local_58[1] = 269;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 436);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       33);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 412316860416;
        local_58[1] = 259;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 450);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       34);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 485331304449;
        local_58[1] = 231;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 463);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       35);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 549755813889;
        local_58[1] = 201;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 477);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       36);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 614180323329;
        local_58[1] = 171;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 490);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       37);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 678604832769;
        local_58[1] = 141;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 504);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       38);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 743029342209;
        local_58[1] = 111;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 518);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       39);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 807453851649;
        local_58[1] = 81;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 531);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       40);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 871878361089;
        local_58[1] = 51;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 545);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       41);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 932007903232;
        local_58[1] = 40;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 3;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 559);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       42);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 1030792151042;
        local_58[1] = 40;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 3;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 572);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       43);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 1022202216449;
        local_58[1] = 50;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 586);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       44);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 953482739713;
        local_58[1] = 82;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 600);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       45);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 889058230273;
        local_58[1] = 112;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 613);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       46);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 889058230273;
        local_58[1] = 144;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 1;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 627);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       47);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 949187772417;
        local_58[1] = 172;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 1;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 640);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       48);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 1013612281857;
        local_58[1] = 202;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 1;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 654);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       49);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 1030792151042;
        local_58[1] = 230;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 2;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 668);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       50);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 901943132164;
        local_58[1] = 242;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 681);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       51);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 803158884355;
        local_58[1] = 242;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 1;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 695);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       52);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 858993459200;
        local_58[1] = 258;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 2;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 709);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       53);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 966367641604;
        local_58[1] = 268;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 722);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       54);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 1103806595076;
        local_58[1] = 268;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 736);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       55);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 1211180777474;
        local_58[1] = 256;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 2;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 750);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       56);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 1185410973697;
        local_58[1] = 224;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 1;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 763);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       57);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 1133871366145;
        local_58[1] = 200;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 1;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 777);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       58);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 1073741824001;
        local_58[1] = 172;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 1;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 790);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       59);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 1013612281857;
        local_58[1] = 144;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 1;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 804);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       60);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 1013612281857;
        local_58[1] = 112;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 818);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       61);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 1078036791297;
        local_58[1] = 82;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 831);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       62);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 1142461300737;
        local_58[1] = 52;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 845);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       63);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 1206885810177;
        local_58[1] = 22;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 859);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       64);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 1211180777474;
        local_58[1] = 14;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 3;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 872);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       65);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 1082331758596;
        local_58[1] = 14;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 1;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 886);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       66);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 953482739716;
        local_58[1] = 14;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 1;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = CONCAT44(local_58[0]._4_4_, 900);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       67);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 81604378629;
        local_58[1] = 17;
        local_58[2] = 18446744069414584320;
        local_58[3] = 1099511627775;
        local_38 = 0;
        local_34 = 0;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0]._0_4_ = 927;
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 0;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 44;
        puVar2[4] = 1;
        local_58[0]._0_4_ = 954;
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 2;
        puVar2[6] = 1909;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 36;
        puVar2[4] = 255;
        local_58[0]._0_4_ = 1909;
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 2;
        puVar2[6] = 2863;
        lVar3 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar2 + 2) = lVar3 + 36;
        puVar2[4] = 200;
        puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       68);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar4, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0]._0_4_ = 927;
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 4;
        *(char**)(puVar2 + 2) = "showspin";
        local_58[0] = CONCAT44(local_58[0]._4_4_, 2863);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       (uint*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        *puVar2 = 3;
        puVar2[4] = 954;
        new (local_30) eastl::allocator("EASTL basic_string");
        new (local_58) eastl::string("Error", local_30);
        pvVar1 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<eastl::string>, eastl::allocator>::
            operator[]((map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<eastl::string>, eastl::allocator>*)&param_1->field_176,
                       (basic_string*)local_58);
        puVar2 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar1);
        local_58->~basic_string();
        *puVar2 = 3;
        puVar2[4] = 954;
        param_1->field_0 = 3000;
        param_1->field_4 = 0;
        param_1->field_12 = 1;
        param_1->field_8 = '\0';
    }

    // 0x10001c280, 3152 bytes, placed by class name
    // OsrsLoadingScript::Create_spinner_Resources(LoadingScreenScript::LoadingScreenAnimation&)
    void OsrsLoadingScript::Create_spinner_Resources(LoadingScreenAnimation* param_1) {
        undefined1* this_00;
        undefined1* this_01;
        unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>* puVar1;
        vector<LoadingScreenScript::Keyframe, eastl::allocator>* pvVar2;
        undefined4* puVar3;
        long lVar4;
        uint local_58[9];
        undefined1 local_34;
        SpriteData local_30[8];

        (&param_1->field_24, 4, 3)->set_max_size();
        param_1->DecodePng(0, &spinner_ns::SpinBg_imgdata, 524);
        param_1->DecodePng(1, &spinner_ns::Spin1_imgdata, 254);
        param_1->DecodePng(2, &spinner_ns::Spin2_imgdata, 282);
        param_1->DecodePng(3, &spinner_ns::Spin3_imgdata, 253);
        this_00 = &param_1->field_48;
        this_00->set_max_size(16, 3);
        local_58[0] = 0;
        local_58[1] = 0;
        local_58[2] = 0;
        local_58[3] = 0;
        local_58[4] = 0;
        local_58[5] = 4294967295;
        local_58[6] = 4294967295;
        local_58[7] = 255;
        local_58[8] = 0;
        local_34 = 1;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        puVar1 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       0);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar1, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 0;
        local_58[1] = 0;
        local_58[2] = 0;
        local_58[3] = 0;
        local_58[4] = 0;
        local_58[5] = 4294967295;
        local_58[6] = 4294967295;
        local_58[7] = 255;
        local_58[8] = 1;
        local_34 = 1;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        puVar1 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       1);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar1, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 0;
        local_58[1] = 0;
        local_58[2] = 0;
        local_58[3] = 0;
        local_58[4] = 0;
        local_58[5] = 4294967295;
        local_58[6] = 4294967295;
        local_58[7] = 255;
        local_58[8] = 3;
        local_34 = 1;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        puVar1 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       2);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar1, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 0;
        local_58[1] = 0;
        local_58[2] = 0;
        local_58[3] = 0;
        local_58[4] = 0;
        local_58[5] = 4294967295;
        local_58[6] = 4294967295;
        local_58[7] = 255;
        local_58[8] = 2;
        local_34 = 1;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        puVar1 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       3);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar1, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 1;
        local_58[1] = 0;
        local_58[2] = 0;
        local_58[3] = 0;
        local_58[4] = 0;
        local_58[5] = 4294967295;
        local_58[6] = 4294967295;
        local_58[7] = 0;
        local_58[8] = 0;
        local_34 = 1;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        this_01 = &param_1->field_128;
        local_58[0] = 0;
        pvVar2 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       local_58);
        puVar3 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar2);
        *puVar3 = 2;
        puVar3[6] = 166;
        lVar4 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar3 + 2) = lVar4 + 36;
        puVar3[4] = 255;
        local_58[0] = 333;
        pvVar2 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       local_58);
        puVar3 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar2);
        *puVar3 = 2;
        puVar3[6] = 500;
        lVar4 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar3 + 2) = lVar4 + 36;
        puVar3[4] = 0;
        puVar1 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       4);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar1, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 2;
        local_58[1] = 0;
        local_58[2] = 0;
        local_58[3] = 0;
        local_58[4] = 0;
        local_58[5] = 4294967295;
        local_58[6] = 4294967295;
        local_58[7] = 0;
        local_58[8] = 0;
        local_34 = 1;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = 166;
        pvVar2 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       local_58);
        puVar3 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar2);
        *puVar3 = 2;
        puVar3[6] = 333;
        lVar4 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar3 + 2) = lVar4 + 36;
        puVar3[4] = 255;
        local_58[0] = 500;
        pvVar2 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       local_58);
        puVar3 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar2);
        *puVar3 = 2;
        puVar3[6] = 666;
        lVar4 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar3 + 2) = lVar4 + 36;
        puVar3[4] = 0;
        puVar1 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       5);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar1, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 3;
        local_58[1] = 0;
        local_58[2] = 0;
        local_58[3] = 0;
        local_58[4] = 0;
        local_58[5] = 4294967295;
        local_58[6] = 4294967295;
        local_58[7] = 0;
        local_58[8] = 0;
        local_34 = 1;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = 333;
        pvVar2 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       local_58);
        puVar3 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar2);
        *puVar3 = 2;
        puVar3[6] = 500;
        lVar4 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar3 + 2) = lVar4 + 36;
        puVar3[4] = 255;
        local_58[0] = 666;
        pvVar2 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       local_58);
        puVar3 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar2);
        *puVar3 = 2;
        puVar3[6] = 833;
        lVar4 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar3 + 2) = lVar4 + 36;
        puVar3[4] = 0;
        puVar1 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       6);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar1, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 3;
        local_58[1] = 0;
        local_58[2] = 0;
        local_58[3] = 0;
        local_58[4] = 0;
        local_58[5] = 4294967295;
        local_58[6] = 4294967295;
        local_58[7] = 0;
        local_58[8] = 1;
        local_34 = 1;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = 500;
        pvVar2 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       local_58);
        puVar3 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar2);
        *puVar3 = 2;
        puVar3[6] = 666;
        lVar4 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar3 + 2) = lVar4 + 36;
        puVar3[4] = 255;
        local_58[0] = 833;
        pvVar2 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       local_58);
        puVar3 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar2);
        *puVar3 = 2;
        puVar3[6] = 1000;
        lVar4 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar3 + 2) = lVar4 + 36;
        puVar3[4] = 0;
        puVar1 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       7);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar1, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 2;
        local_58[1] = 0;
        local_58[2] = 0;
        local_58[3] = 0;
        local_58[4] = 0;
        local_58[5] = 4294967295;
        local_58[6] = 4294967295;
        local_58[7] = 0;
        local_58[8] = 1;
        local_34 = 1;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = 666;
        pvVar2 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       local_58);
        puVar3 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar2);
        *puVar3 = 2;
        puVar3[6] = 833;
        lVar4 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar3 + 2) = lVar4 + 36;
        puVar3[4] = 255;
        local_58[0] = 1000;
        pvVar2 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       local_58);
        puVar3 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar2);
        *puVar3 = 2;
        puVar3[6] = 1166;
        lVar4 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar3 + 2) = lVar4 + 36;
        puVar3[4] = 0;
        puVar1 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       8);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar1, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 1;
        local_58[1] = 0;
        local_58[2] = 0;
        local_58[3] = 0;
        local_58[4] = 0;
        local_58[5] = 4294967295;
        local_58[6] = 4294967295;
        local_58[7] = 0;
        local_58[8] = 1;
        local_34 = 1;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = 833;
        pvVar2 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       local_58);
        puVar3 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar2);
        *puVar3 = 2;
        puVar3[6] = 1000;
        lVar4 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar3 + 2) = lVar4 + 36;
        puVar3[4] = 255;
        local_58[0] = 1166;
        pvVar2 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       local_58);
        puVar3 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar2);
        *puVar3 = 2;
        puVar3[6] = 1333;
        lVar4 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar3 + 2) = lVar4 + 36;
        puVar3[4] = 0;
        puVar1 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       9);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar1, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 1;
        local_58[1] = 0;
        local_58[2] = 0;
        local_58[3] = 0;
        local_58[4] = 0;
        local_58[5] = 4294967295;
        local_58[6] = 4294967295;
        local_58[7] = 0;
        local_58[8] = 3;
        local_34 = 1;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = 1000;
        pvVar2 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       local_58);
        puVar3 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar2);
        *puVar3 = 2;
        puVar3[6] = 1166;
        lVar4 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar3 + 2) = lVar4 + 36;
        puVar3[4] = 255;
        local_58[0] = 1333;
        pvVar2 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       local_58);
        puVar3 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar2);
        *puVar3 = 2;
        puVar3[6] = 1500;
        lVar4 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar3 + 2) = lVar4 + 36;
        puVar3[4] = 0;
        puVar1 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       10);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar1, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 2;
        local_58[1] = 0;
        local_58[2] = 0;
        local_58[3] = 0;
        local_58[4] = 0;
        local_58[5] = 4294967295;
        local_58[6] = 4294967295;
        local_58[7] = 0;
        local_58[8] = 3;
        local_34 = 1;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = 1166;
        pvVar2 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       local_58);
        puVar3 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar2);
        *puVar3 = 2;
        puVar3[6] = 1333;
        lVar4 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar3 + 2) = lVar4 + 36;
        puVar3[4] = 255;
        local_58[0] = 1500;
        pvVar2 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       local_58);
        puVar3 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar2);
        *puVar3 = 2;
        puVar3[6] = 1666;
        lVar4 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar3 + 2) = lVar4 + 36;
        puVar3[4] = 0;
        puVar1 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       11);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar1, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 3;
        local_58[1] = 0;
        local_58[2] = 0;
        local_58[3] = 0;
        local_58[4] = 0;
        local_58[5] = 4294967295;
        local_58[6] = 4294967295;
        local_58[7] = 0;
        local_58[8] = 3;
        local_34 = 1;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = 1333;
        pvVar2 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       local_58);
        puVar3 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar2);
        *puVar3 = 2;
        puVar3[6] = 1500;
        lVar4 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar3 + 2) = lVar4 + 36;
        puVar3[4] = 255;
        local_58[0] = 1666;
        pvVar2 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       local_58);
        puVar3 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar2);
        *puVar3 = 2;
        puVar3[6] = 1833;
        lVar4 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar3 + 2) = lVar4 + 36;
        puVar3[4] = 0;
        puVar1 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       12);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar1, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 3;
        local_58[1] = 0;
        local_58[2] = 0;
        local_58[3] = 0;
        local_58[4] = 0;
        local_58[5] = 4294967295;
        local_58[6] = 4294967295;
        local_58[7] = 0;
        local_58[8] = 2;
        local_34 = 1;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = 1500;
        pvVar2 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       local_58);
        puVar3 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar2);
        *puVar3 = 2;
        puVar3[6] = 1666;
        lVar4 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar3 + 2) = lVar4 + 36;
        puVar3[4] = 255;
        local_58[0] = 1833;
        pvVar2 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       local_58);
        puVar3 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar2);
        *puVar3 = 2;
        puVar3[6] = 2000;
        lVar4 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar3 + 2) = lVar4 + 36;
        puVar3[4] = 0;
        puVar1 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       13);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar1, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 2;
        local_58[1] = 0;
        local_58[2] = 0;
        local_58[3] = 0;
        local_58[4] = 0;
        local_58[5] = 4294967295;
        local_58[6] = 4294967295;
        local_58[7] = 0;
        local_58[8] = 2;
        local_34 = 1;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = 1666;
        pvVar2 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       local_58);
        puVar3 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar2);
        *puVar3 = 2;
        puVar3[6] = 1833;
        lVar4 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar3 + 2) = lVar4 + 36;
        puVar3[4] = 255;
        local_58[0] = 2000;
        pvVar2 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       local_58);
        puVar3 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar2);
        *puVar3 = 2;
        puVar3[6] = 2166;
        lVar4 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar3 + 2) = lVar4 + 36;
        puVar3[4] = 0;
        puVar1 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       14);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar1, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        local_58[0] = 1;
        local_58[1] = 0;
        local_58[2] = 0;
        local_58[3] = 0;
        local_58[4] = 0;
        local_58[5] = 4294967295;
        local_58[6] = 4294967295;
        local_58[7] = 255;
        local_58[8] = 2;
        local_34 = 1;
        std::make_unique<LoadingScreenScript::SpriteLayer, LoadingScreenScript::SpriteData>(local_30);
        local_58[0] = 1833;
        pvVar2 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       local_58);
        puVar3 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar2);
        *puVar3 = 2;
        puVar3[6] = 2000;
        lVar4 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar3 + 2) = lVar4 + 36;
        puVar3[4] = 255;
        local_58[0] = 166;
        pvVar2 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)this_01,
                       local_58);
        puVar3 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(pvVar2);
        *puVar3 = 2;
        puVar3[6] = 333;
        lVar4 =
            std::unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>::
            operator->(
                (unique_ptr<LoadingScreenScript::SpriteLayer, std::default_delete<LoadingScreenScript::SpriteLayer>>*)
                    local_30);
        *(long*)(puVar3 + 2) = lVar4 + 36;
        puVar3[4] = 0;
        puVar1 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       15);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar1, (unique_ptr*)local_30);
        local_30->~unique_ptr();
        param_1->field_0 = 2000;
        param_1->field_4 = 0;
        param_1->field_12 = 0;
        param_1->field_8 = '\0';
    }

    // 0x10001ced0, 528 bytes, placed by class name
    // OsrsLoadingScript::Create_bar_Resources(LoadingScreenScript::LoadingScreenAnimation&)
    void OsrsLoadingScript::Create_bar_Resources(LoadingScreenAnimation* param_1) {
        undefined1* this_00;
        vector<LoadingScreenScript::Keyframe, eastl::allocator>* this_01;
        undefined4* puVar1;
        long lVar2;
        unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>* puVar3;
        ulong local_50[4];
        undefined1 local_30;
        RectData local_28[8];

        (&param_1->field_24, 0, 3)->set_max_size();
        this_00 = &param_1->field_48;
        this_00->set_max_size(4, 3);
        local_50[0] = 8589934594;
        local_50[1] = 214748364810;
        local_50[2] = 4286578688;
        local_50[3]._0_5_ = 4294967551;
        std::make_unique<LoadingScreenScript::RectLayer, LoadingScreenScript::RectData>(local_28);
        local_50[0] = local_50[0] & 18446744069414584320;
        this_01 = (vector<LoadingScreenScript::Keyframe, eastl::allocator>*)
            eastl::map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<unsigned int>, eastl::allocator>::
            operator[]((map<unsigned int, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                            eastl::less<unsigned int>, eastl::allocator>*)&param_1->field_128,
                       (uint*)local_50);
        puVar1 = (undefined4*)eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>::push_back(this_01);
        *puVar1 = 2;
        puVar1[6] = 1000;
        lVar2 = std::unique_ptr<LoadingScreenScript::RectLayer, std::default_delete<LoadingScreenScript::RectLayer>>::
                operator->(
                    (unique_ptr<LoadingScreenScript::RectLayer, std::default_delete<LoadingScreenScript::RectLayer>>*)
                        local_28);
        *(long*)(puVar1 + 2) = lVar2 + 16;
        puVar1[4] = 500;
        puVar3 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       0);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar3, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        local_50[0] = 4294967297;
        local_50[1] = 214748365300;
        local_50[2] = 18428941606066323456;
        local_50[3]._0_5_ = 4294967551;
        std::make_unique<LoadingScreenScript::RectLayer, LoadingScreenScript::RectData>(local_28);
        puVar3 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       1);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar3, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        local_50[0] = 0;
        local_50[1] = 223338299894;
        local_50[2] = 18374686479671623680;
        local_50[3] = CONCAT35(local_50[3]._5_3_, 4294967551);
        std::make_unique<LoadingScreenScript::RectLayer, LoadingScreenScript::RectData>(local_28);
        puVar3 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       2);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar3, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        local_50[0] = 21474836530;
        local_50[1] = 193273528720;
        local_50[2] = 18374686483966590975;
        local_50[3] = 4294967297;
        local_30 = 1;
        std::make_unique<LoadingScreenScript::TextLayer, LoadingScreenScript::TextData>((TextData*)local_28);
        puVar3 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>::
            operator[]((Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)this_00,
                       3);
        std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>::operator=(
            puVar3, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        param_1->field_0 = 1000;
        param_1->field_4 = 0;
        param_1->field_12 = 1;
        param_1->field_8 = '\x01';
    }

    // 0x10001d0f0, 256 bytes, placed by class name
    // OsrsLoadingScript::CreateResources()
    undefined1 OsrsLoadingScript::CreateResources() {
        undefined1* this_00;
        long lVar1;
        LoadingScreenAnimation* pLVar2;
        undefined8 uVar3;
        OsrsLoadingScript* pOVar4;

        this_00 = &field_120;
        this_00->set_max_size(4, 3);
        lVar1 = Array<LoadingScreenScript::LoadingScreenAnimation, eastl::allocator>::operator[](
            (Array<LoadingScreenScript::LoadingScreenAnimation, eastl::allocator>*)this_00, 0);
        *(OsrsLoadingScript**)(lVar1 + 16) = this;
        lVar1 = Array<LoadingScreenScript::LoadingScreenAnimation, eastl::allocator>::operator[](
            (Array<LoadingScreenScript::LoadingScreenAnimation, eastl::allocator>*)this_00, 1);
        *(OsrsLoadingScript**)(lVar1 + 16) = this;
        lVar1 = Array<LoadingScreenScript::LoadingScreenAnimation, eastl::allocator>::operator[](
            (Array<LoadingScreenScript::LoadingScreenAnimation, eastl::allocator>*)this_00, 2);
        *(OsrsLoadingScript**)(lVar1 + 16) = this;
        lVar1 = Array<LoadingScreenScript::LoadingScreenAnimation, eastl::allocator>::operator[](
            (Array<LoadingScreenScript::LoadingScreenAnimation, eastl::allocator>*)this_00, 3);
        *(OsrsLoadingScript**)(lVar1 + 16) = this;
        pLVar2 =
            (LoadingScreenAnimation*)Array<LoadingScreenScript::LoadingScreenAnimation, eastl::allocator>::operator[](
                (Array<LoadingScreenScript::LoadingScreenAnimation, eastl::allocator>*)this_00, 0);
        Create_root_Resources(this, pLVar2);
        pOVar4 = (OsrsLoadingScript*)this_00;
        pLVar2 =
            (LoadingScreenAnimation*)Array<LoadingScreenScript::LoadingScreenAnimation, eastl::allocator>::operator[](
                (Array<LoadingScreenScript::LoadingScreenAnimation, eastl::allocator>*)this_00, 1);
        Create_anim_Resources(pOVar4, pLVar2);
        pOVar4 = (OsrsLoadingScript*)this_00;
        pLVar2 =
            (LoadingScreenAnimation*)Array<LoadingScreenScript::LoadingScreenAnimation, eastl::allocator>::operator[](
                (Array<LoadingScreenScript::LoadingScreenAnimation, eastl::allocator>*)this_00, 2);
        Create_spinner_Resources(pOVar4, pLVar2);
        pOVar4 = (OsrsLoadingScript*)this_00;
        pLVar2 =
            (LoadingScreenAnimation*)Array<LoadingScreenScript::LoadingScreenAnimation, eastl::allocator>::operator[](
                (Array<LoadingScreenScript::LoadingScreenAnimation, eastl::allocator>*)this_00, 3);
        Create_bar_Resources(pOVar4, pLVar2);
        CreateFont(&font_ns::font_sprite, 19728, &font_ns::font_metrics, 257);
        uVar3 = Array<LoadingScreenScript::LoadingScreenAnimation, eastl::allocator>::operator[](
            (Array<LoadingScreenScript::LoadingScreenAnimation, eastl::allocator>*)this_00, 0);
        *(undefined8*)(field_8 + 32) = uVar3;
        field_8[48] = 1;
        *(undefined8*)(field_8 + 40) = 0;
        field_8->Reset();
        return 1;
    }

} // namespace jag

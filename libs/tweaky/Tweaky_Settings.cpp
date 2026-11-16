// libs/tweaky/Tweaky_Settings.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.tweaky

#include "Tweaky_Settings.h"
#include "libs/hal/settings/Settings.h"

namespace jag::tweak {
    // 0x100a44f10
    void Settings::SetCheckbox(bool arg1) {
        uint64_t in_register_00000031;

        auto plVar1 = field_304.operator->();
        (**(void (**)(...))(*plVar1 + 128))(plVar1,
                                            (((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) & 4294967295);
    }

    // 0x100a4bf00
    Settings::Settings(const eastl::string& str, ContainerGroup& containerGroup)
        : Container(), field_296(containerGroup), field_408(str) {}

    // 0x100a4c0b0
    void Settings::Initialise(weak_ptr<Tweaky> tweaky) {
        shared_ptr<CheckBox>* shared_ptr;

        (**(void (**)(...))(*(long*)tweaky + 240))(tweaky, 1);
        std::function<void(Event const&)>::function<Settings::Initialise(weak_ptr<Tweaky>)::__17, void>(
            (function<void(Event const&)>*)&local_68, (__17*)tweaky);
        tweaky->AddButton("Save Page", local_68);
        std::function<void(Event const&)>::function<Settings::Initialise(weak_ptr<Tweaky>)::__18, void>(
            (function<void(Event const&)>*)&local_68, (__18*)tweaky);
        tweaky->AddButton("Load Page", local_68);
        make_shared<CheckBox, char const(&)[15]>(&local_68, "Load on Launch");
        shared_ptr = (shared_ptr<CheckBox>*)(tweaky + 304);
        *shared_ptr = local_68;
        Control* this_00 = (Control*)(*shared_ptr).operator->();
        std::function<void(Event const&)>::function<Settings::Initialise(weak_ptr<Tweaky>)::__19, void>(
            (function<void(Event const&)>*)&local_68, (__19*)tweaky);
        this_00->SetHandler(local_68);
        shared_ptr local_68(shared_ptr);
        tweaky->Add(local_68);
    }

    // 0x100a4c330
    void Settings::SetTweaky(weak_ptr<Tweaky> tweaky) {

        field_104 = *tweaky;
        weak_ptr<oldscape::dash3d::Decor> local_28(*tweaky);
        Initialise((weak_ptr<Tweaky>*)this);
    }

    // 0x100a4c390
    void Settings::SavePage(const PageInfo& pageInfo) {
        eastl::string* this_00 = (eastl::string*)(*((field_320 + 32)))[pageInfo];
        char* str = "1";
        if (*(char*)((long)&pageInfo.field_66 + 7) == '\0') {
            str = "0";
        }
        eastl::string::assign(this_00, str);
        ((this_00 + 32))->clear();
        auto plVar1 = pageInfo.field_32.operator->();
        (**(void (**)(...))(*plVar1 + 184))(plVar1, this_00);
        WriteSettingsFile();
    }

    // 0x100a4c440
    void Settings::WriteSettingsFile() {
        long lVar2;
        char* pcVar3;
        basic_ostream<char, std::char_traits<char> _>* pbVar4;
        TweakSettingsValue local_330;
        ReturnValue local_2d8;
        ReturnValue local_2d0;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_2b0;
        Filename local_2a0;
        basic_ostream<char, std::char_traits<char> _> local_290;

        new (&local_2a0) Filename(&field_408);
        ClientCompositeZone local_170(&local_2a0, 1538, nullptr);
        bool cVar1 = local_170.IsValid();
        if (cVar1) {
            local_2a0 = std::stringstream();
            local_2d8 = ((field_320 + 32))->rbegin();
            local_2b0.end();
            while (true) {
                cVar1 = local_2d8 != local_2b0;
                if (!cVar1)
                    break;
                lVar2 = *local_2d8;
                pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pbVar4 = std::operator<<(&local_290, pcVar3);
                pbVar4 = std::operator<<(pbVar4, "=");
                local_330 = TweakSettingsValue(*((lVar2 + 32)));
                SerializeNode(&local_2d0, this, &local_330);
                pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                std::operator<<(pbVar4, pcVar3);
                ++local_2d8;
            }
            std::stringstream::str(&local_2d0, &local_2a0);
            pcVar3 = (char*)std::string::c_str(&local_2d0);
            local_170.write(pcVar3, nullptr);
            std::string::~string(&local_2d0);
            local_170.close(nullptr);
            std::stringstream::~stringstream(&local_2a0);
        }
    }

    // 0x100a4c6b0
    void Settings::SetLoadPageOnLaunch(PageInfo& pageInfo, bool arg2) {
        *(bool*)((long)&pageInfo.field_66 + 7) = arg2;
        SavePage(pageInfo);
    }

    // 0x100a4c6c0
    void Settings::LoadPage(PageInfo& pageInfo) {
        uint64_t uVar1 = (*((field_320 + 32)))[pageInfo];
        auto plVar2 = pageInfo.field_32.operator->();
        (**(void (**)(...))(*plVar2 + 176))(plVar2, uVar1);
    }

    // 0x100a4c700
    void Settings::LoadOnLaunch() {
        eastl::string* str;
        long lVar3;
        long* plVar4;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_38;

        ParseFile();
        ReturnValue local_40 = ((field_320 + 32))->rbegin();
        local_38.end();
        bool cVar1 = local_40 != local_38;
        if (cVar1) {
            do {
                str = (eastl::string*)*local_40;
                if ((*((str + 32))) == DAT_100e33d78) {
                    lVar3 = field_296->GetPage(*str);
                    if (lVar3 != 0) {
                        *(uint8_t*)(lVar3 + 73) = 1;
                        plVar4 = (long*)(*((lVar3 + 32))).operator->();
                        (**(void (**)(...))(*plVar4 + 176))(plVar4,
                                                            (basic_string<char, BucketAllocatorEASTL>*)(str + 32));
                    }
                }
                ++local_40;
                cVar1 = local_40 != local_38;
            } while (cVar1);
        }
    }

    // 0x100a4c7e0
    void Settings::ParseFile() {
        eastl::string* pbVar1;
        long lVar3;
        char* pcVar4;
        long lVar5;
        eastl::string* this_00;
        ReturnValue local_2c8;
        eastl::string* local_2a8;

        Filename local_2a0(&field_408);
        ClientCompositeZone local_170(&local_2a0, 2, nullptr);
        if (local_170.IsValid()) {
            local_2a0 = local_170.readline();
            lVar3 = local_2a0.size();
            if (lVar3 != 0) {
                this_00 = (eastl::string*)field_320;
                local_2a8 = this_00;
                do {
                    lVar3 = local_2a0.find("=", 1);
                    if (lVar3 == -1) {
                        if (!(local_2a0 == "{")) {
                            if (local_2a0 == "}") {
                                local_2a8 = *(eastl::string**)(local_2a8 + 80);
                            }
                        } else {
                            local_2a8 = this_00;
                        }
                    } else {
                        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        lVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        local_2c8 = eastl::string(pcVar4, (lVar5 + lVar3));
                        lVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
                        local_2f0 = eastl::string((lVar5 + lVar3 + 1), pcVar4);
                        pbVar1 = local_2a8;
                        this_00 = (eastl::string*)(*((local_2a8 + 32)))[local_2c8];
                        *(eastl::string**)(this_00 + 80) = pbVar1;
                        *this_00 = &local_2f0;
                    }
                    local_2c8 = local_170.readline();
                    local_2a0 = &local_2c8;
                    lVar3 = local_2a0.size();
                } while (lVar3 != 0);
            }
            local_170.close(nullptr);
        }
    }

    // 0x100a4cb80
    auto Settings::SerializeNode(TweakSettingsValue tweakSettingsValue) {
        TweakSettingsValue local_1e0;
        basic_ostream<char, std::char_traits<char> _> local_178;
        ReturnValue local_70;
        uint64_t local_50;
        ReturnValue* local_40;
        uint64_t local_38;

        stringstream local_188;
        char* pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        basic_ostream<char, std::char_traits<char> _>* pbVar3 = std::operator<<(&local_178, pcVar2);
        std::operator<<(pbVar3, "\r\n");
        uint8_t* this_00 = &tweakSettingsValue->field_32;
        long lVar4 = this_00->capacity();
        if (lVar4 != 0) {
            std::operator<<(&local_178, "{\r\n");
            local_40 = &result;
            local_38 = this_00->begin();
            local_50 = this_00->end();
            while (true) {
                if (local_38 != local_50 == '\0')
                    break;
                lVar4 = *local_38;
                pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pbVar3 = std::operator<<(&local_178, pcVar2);
                pbVar3 = std::operator<<(pbVar3, "=");
                local_1e0 = TweakSettingsValue(*((lVar4 + 32)));
                SerializeNode(&local_70, this, &local_1e0);
                pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                std::operator<<(pbVar3, pcVar2);
                ++local_38;
            }
            std::operator<<(&local_178, "}\r\n");
            &result = local_40;
        }
        std::stringstream::str(&local_70, &local_188);
        pcVar2 = (char*)std::string::c_str(&local_70);
        auto result(pcVar2);
        std::string::~string(&local_70);
        std::stringstream::~stringstream(&local_188);
        return result;
    }

} // namespace jag::tweak

// projects/osclient/debug/ConsoleCommands.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape {
    class ConsoleCommands {
    public:
        ConsoleCommands(OSClientConsole& osClientConsole);
        void RegisterPublicCommands();
        void RegisterTestCommands();
        void RegisterAdminCommands();
        void RegisterDebugCommands();
        void RegisterExperimentalCommands();
        void RegisterCommand(const char* str1, const char* str2, const char* str3,
                             std::function<void(eastl::fixed_vector<StringView, 4ul> const&)> const& callback);
        void RegisterCommandHelp(const char* str1, const char* str2, const char* str3);
        void RegisterCommandPrivate(const char* str,
                                    std::function<void(eastl::fixed_vector<StringView, 4ul> const&)> const& callback);
        long GetCommandHelp(const char* str) const;
        void ForEachCommandHelp(std::function<void(eastl::string const&, ConsoleCommandHelp const&)>&& callback) const;
        ~ConsoleCommands();

    private:
        OSClientConsole* field_0;
        Client* field_8;
        uint8_t _unknown_16[8];
    };

    // 0x10007d630
    ConsoleCommands::~ConsoleCommands() {
        field_16.~vector_map();
    }

    // 0x100086e80
    void ConsoleCommands::RegisterAdminCommands()::$_4::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        ((DeviceOptions*)(*((field_0 + 8376))).operator->())->SetDisplayFps(true);
    }

    // 0x1000877c0
    void ConsoleCommands::RegisterAdminCommands()::$_5::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        ((DeviceOptions*)(*((field_0 + 8376))).operator->())->SetDisplayFps(false);
    }

    // 0x100089470
    void ConsoleCommands::RegisterAdminCommands()::$_6::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        eastl::string local_58;

        auto piVar1 = constants::ChatCrownType::FromId(7);
        auto local_38 = StringConstants::TAG_IMG(*piVar1);
        local_58 + local_38;
        auto this_00 = Client::Instance();
        local_38 = eastl::string("Group Ironman ChatCrown Test");
        this_00->AddChat(1, local_58, local_38);
    }

    // 0x100089ca0
    void ConsoleCommands::RegisterAdminCommands()::$_7::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        eastl::string local_58;

        auto piVar1 = constants::ChatCrownType::FromId(8);
        auto local_38 = StringConstants::TAG_IMG(*piVar1);
        local_58 + local_38;
        auto this_00 = Client::Instance();
        local_38 = eastl::string("Group Hardcore Ironman ChatCrown Test");
        this_00->AddChat(1, local_58, local_38);
    }

    // 0x10008aeb0
    void ConsoleCommands::RegisterAdminCommands()::$_8::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        LogAssert("false",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/commands/"
                  "ConsoleCommands_Admin.cpp",
                  132, "asserttest");
    }

    // 0x10008b640
    uint8_t ConsoleCommands::RegisterAdminCommands()::$_9::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        return DAT_00000001;
    }

    // 0x10008bf40
    void ConsoleCommands::RegisterAdminCommands()::$_10::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        ((OSClientConsole*)field_0->GetConsole())->ToggleConsole();
    }

    // 0x10008c850
    void ConsoleCommands::RegisterAdminCommands()::$_11::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        bool cVar2;
        Client* pCVar4;
        StringView* pSVar5;
        char* pcVar6;
        Console* pCVar7;
        ImpactStrength impactStrength;
        StringView local_a8;
        StringView local_98;
        StringView local_88;
        eastl::string local_78;
        ReturnValue local_58;
        uint64_t* local_38;

        uint64_t* puVar1 = field_0;
        if (stringViews.size() == 1) {
            local_38 = puVar1;
            pCVar4 = Client::Instance();
            impactStrength = 0;
            pSVar5 = &stringViews[0];
            local_a8.StringView<6ul>("light");
            cVar2 = *pSVar5 == &local_a8;
            if (!cVar2) {
                pSVar5 = &stringViews[0];
                local_98.StringView<4ul>("med");
                cVar2 = *pSVar5 == &local_98;
                impactStrength = 1;
                if (!cVar2) {
                    pSVar5 = &stringViews[0];
                    local_88.StringView<6ul>("heavy");
                    cVar2 = *pSVar5 == &local_88;
                    impactStrength = 2;
                    if (!cVar2) {
                        pCVar7 = (Console*)*local_38;
                        pcVar6 = "Unrecognized vibrate option. Use \"light\", \"med\", or \"heavy\".";
                        goto LAB_10008c9ce;
                    }
                }
            }
            ((DeviceOptions*)pCVar4->field_8376.operator->())->SetHapticFeedbackStrength(impactStrength);
            local_78 = eastl::string("Vibrate option updated to: ");
            pSVar5 = &stringViews[0];
            local_58 = pSVar5->to_owned_string<eastl::string>();
            local_78.append(&local_58);
            puVar1 = local_38;
            pCVar7 = (Console*)*puVar1;
            pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pCVar7->AddMessage(2, pcVar6);
        } else {
            pCVar7 = (Console*)*puVar1;
            pcVar6 = "Only use this command with one argument: \"light\", \"med\", or \"heavy\".";
        LAB_10008c9ce:
            pCVar7->AddMessage(5, pcVar6);
        }
    }

    // 0x10008d1b0
    void ConsoleCommands::RegisterAdminCommands()::$_12::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        uint64_t in_RAX;
        Client* pCVar2;
        uint8_t auVar3[16];
        StringTools local_14;

        local_14.field_0 = (int)((unsigned long)in_RAX >> 32);
        if (size() == 1) {
            auVar3 = (*this)[0];
            local_14.CheckedParseInt(*auVar3._0_8_, *auVar3._8_8_);
            pCVar2 = Client::Instance();
            pCVar2->SetSafeArea(local_14.field_0, local_14.field_0, local_14.field_0, local_14.field_0);
            pCVar2 = Client::Instance();
            pCVar2->InterfaceCalculateSizeAndPosAll(true, true);
        }
    }

    // 0x10008daf0
    void ConsoleCommands::RegisterDebugCommands()::$_13::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        (*(GameShell**)(field_0 + 8))->SwapRenderer();
    }

    // 0x10008e2a0
    void ConsoleCommands::RegisterDebugCommands()::$_14::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        dash3d::NXTRenderer::GetInstance()->FlipPermitRendering();
    }

    // 0x10008ea20
    void ConsoleCommands::RegisterDebugCommands()::$_15::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        dash3d::ModelLitRenderer_drawModels = dash3d::ModelLitRenderer_drawModels ^ 1;
    }

    // 0x10008f190
    void ConsoleCommands::RegisterDebugCommands()::$_16::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        dash3d::WorldRenderer_renderGround = dash3d::WorldRenderer_renderGround ^ 1;
    }

    // 0x10008f900
    void ConsoleCommands::RegisterDebugCommands()::$_17::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        auto pCVar2 = Client::Instance();
        uint8_t bVar1 = pCVar2->field_8161;
        pCVar2 = Client::Instance();
        pCVar2->field_8161 = bVar1 ^ 1;
    }

    // 0x100090090
    void ConsoleCommands::RegisterDebugCommands()::$_18::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        auto pCVar2 = Client::Instance();
        uint8_t bVar1 = pCVar2->field_8160;
        pCVar2 = Client::Instance();
        pCVar2->field_8160 = bVar1 ^ 1;
    }

    // 0x1000909a0
    void ConsoleCommands::RegisterDebugCommands()::$_19::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* pcVar1 = "Legacy";
        if (dash3d::ModelLit::m_useAABBMouseCheck == 0) {
            pcVar1 = "AABB";
        }
        dash3d::ModelLit::m_useAABBMouseCheck = dash3d::ModelLit::m_useAABBMouseCheck ^ 1;
        (*field_0)->AddMessage(2, "Clickbox Mode: %s", pcVar1);
    }

    // 0x100091890
    void ConsoleCommands::RegisterDebugCommands()::$_21::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        auto pCVar1 = Client::Instance();
        eastl::string local_70("");
        eastl::string local_48("C++PORT NYI");
        pCVar1->AddChat(99, local_70, local_48);
        pCVar1 = Client::Instance();
        shared_ptr<ApplicationContext>* this_00 =
            (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar1)(pCVar1);
        long* plVar2 = (long*)(*this_00).operator->();
        plVar2 = (long*)(**(void (**)(...))(*plVar2 + 72))(plVar2);
        if (plVar2 != nullptr) {
            (**(void (**)(...))(*plVar2 + 192))(plVar2);
        }
    }

    // 0x100092260
    void ConsoleCommands::RegisterDebugCommands()::$_22::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Client* pCVar3;
        uint8_t auVar4[16];
        StringTools local_1c;

        uint64_t* puVar1 = field_0;
        if (stringViews.size() == 1) {
            auVar4 = stringViews[0];
            local_1c.CheckedParseInt(*auVar4._0_8_, *auVar4._8_8_);
            pCVar3 = Client::Instance();
            ((NXTPixToolkit*)pCVar3->GetMemoryCache())->SetDepthBufferEnabled(local_1c.field_0 == 1);
            pCVar3 = Client::Instance();
            ((DeviceOptions*)pCVar3->field_8376.operator->())->SetAntialiasingSampleLevel(0);
        } else {
            (*puVar1)->AddMessage(5, "Missing arguments. Expected a 0 or 1.");
        }
    }

    // 0x100092bf0
    void ConsoleCommands::RegisterDebugCommands()::$_23::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        StringView* stringView;
        unsigned int local_1c;

        uint64_t* puVar1 = field_0;
        if (stringViews.size() == 1) {
            stringView = &stringViews[0];
            FromString<StringView, int>(stringView, (int*)&local_1c, 10);
            Client::Instance()->AddDeepLinkingID(local_1c);
            (*puVar1)->AddMessage(2, "Added deep link ID: %d", (unsigned long)local_1c);
        } else {
            (*puVar1)->AddMessage(4, "Usage: deeplink_add [id]");
        }
    }

    // 0x1000935a0
    void ConsoleCommands::RegisterDebugCommands()::$_24::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Layout* this_03;
        unsigned int* puVar3;
        unsigned int* puVar4;

        uint64_t* puVar1 = field_0;
        auto this_01 = Client::Instance();
        bool cVar2 =
            ((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)this_01->GetDeepLinkingIDs())
                ->empty();
        Console* this_00 = (Console*)*puVar1;
        if (!cVar2) {
            this_00->AddMessage(2, "Current deep links:");
            this_03 = (Layout*)this_01->GetDeepLinkingIDs();
            puVar3 = (unsigned int*)this_03->HeapBeginPtr();
            puVar4 = (unsigned int*)this_03->end();
            for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
                (*puVar1)->AddMessage(2, "%i", (unsigned long)*puVar3);
            }
        } else {
            this_00->AddMessage(4, "No deep link IDs have been set.");
        }
    }

    // 0x100093f50
    void ConsoleCommands::RegisterDebugCommands()::$_25::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        StringView* stringView;
        unsigned int local_1c;

        uint64_t* puVar1 = field_0;
        if (stringViews.size() == 1) {
            stringView = &stringViews[0];
            FromString<StringView, int>(stringView, (int*)&local_1c, 10);
            Client::Instance()->ClearDeepLinkingIndex(local_1c);
            (*puVar1)->AddMessage(2, "Cleared deep link at index: %d", (unsigned long)local_1c);
        } else {
            (*puVar1)->AddMessage(4, "Usage: deeplink_clear_index [id]");
        }
    }

    // 0x1000948d0
    void ConsoleCommands::RegisterExperimentalCommands()::$_26::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Client* this_00;
        char* str;
        Console* this_01;
        uint8_t auVar4[16];
        eastl::string local_78;
        eastl::string local_58;
        StringTools local_2c;
        StringTools local_28;
        StringTools local_24;

        uint64_t* puVar1 = field_0;
        if (stringViews.size() < 3) {
            this_01 = (Console*)*puVar1;
            str = "Missing argument for skybox colours";
        } else {
            local_2c.field_0 = 0;
            local_28.field_0 = 0;
            local_24.field_0 = 0;
            auVar4 = stringViews[0];
            if (local_2c.CheckedParseInt(*auVar4._0_8_, *auVar4._8_8_)) {
                auVar4 = stringViews[1];
                if (local_28.CheckedParseInt(*auVar4._0_8_, *auVar4._8_8_)) {
                    auVar4 = stringViews[2];
                    if (local_24.CheckedParseInt(*auVar4._0_8_, *auVar4._8_8_)) {
                        local_78 = eastl::string();
                        local_78.append_sprintf("Setting Skybox Colour to %i, %i, %i",
                                                (unsigned long)(unsigned int)local_2c.field_0,
                                                (unsigned long)(unsigned int)local_28.field_0,
                                                (unsigned long)(unsigned int)local_24.field_0);
                        puVar1[1]->SetSkyboxColour(local_2c.field_0, local_28.field_0, local_24.field_0);
                        this_00 = field_8;
                        local_58 = eastl::string("");
                        this_00->AddChat(99, local_58, local_78);
                        return;
                    }
                }
            }
            this_01 = (Console*)*puVar1;
            str = "Unable to parse argument for skybox colour";
        }
        this_01->AddMessage(5, str);
    }

    // 0x100095340
    void ConsoleCommands::RegisterExperimentalCommands()::$_27::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Client* this_00;
        char* str;
        Console* this_01;
        uint8_t auVar4[16];
        eastl::string local_70;
        eastl::string local_50;
        StringTools local_24;

        uint64_t* puVar1 = field_0;
        if (stringViews.size() == 0) {
            this_01 = (Console*)*puVar1;
            str = "Missing argument for fog intensity";
        } else {
            local_24.field_0 = 0;
            auVar4 = stringViews[0];
            if (local_24.CheckedParseInt(*auVar4._0_8_, *auVar4._8_8_) != '\0') {
                local_70 = eastl::string();
                local_70.append_sprintf("Setting Fog Intensity to %i", (unsigned long)(unsigned int)local_24.field_0);
                puVar1[1]->SetFogIntensity(local_24.field_0);
                this_00 = field_8;
                local_50 = eastl::string("");
                this_00->AddChat(99, local_50, local_70);
                return;
            }
            this_01 = (Console*)*puVar1;
            str = "Unable to parse argument for fog intensity";
        }
        this_01->AddMessage(5, str);
    }

    // 0x100095d50
    void ConsoleCommands::RegisterExperimentalCommands()::$_28::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Client* this_00;
        char* str;
        Console* this_01;
        uint8_t auVar4[16];
        eastl::string local_70;
        eastl::string local_50;
        StringTools local_24;

        uint64_t* puVar1 = field_0;
        if (stringViews.size() == 0) {
            this_01 = (Console*)*puVar1;
            str = "Missing argument for fog distance";
        } else {
            local_24.field_0 = 0;
            auVar4 = stringViews[0];
            if (local_24.CheckedParseInt(*auVar4._0_8_, *auVar4._8_8_) != '\0') {
                local_70 = eastl::string();
                local_70.append_sprintf("Setting Fog Distance to %i", (unsigned long)(unsigned int)local_24.field_0);
                puVar1[1]->SetFogDistance(local_24.field_0);
                this_00 = field_8;
                local_50 = eastl::string("");
                this_00->AddChat(99, local_50, local_70);
                return;
            }
            this_01 = (Console*)*puVar1;
            str = "Unable to parse argument for fog distance";
        }
        this_01->AddMessage(5, str);
    }

    // 0x100096760
    void ConsoleCommands::RegisterExperimentalCommands()::$_29::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Client* this_00;
        char* str;
        unsigned int arg2;
        Console* this_02;
        unsigned int arg3;
        uint8_t auVar4[16];
        eastl::string local_90;
        eastl::string local_70;
        StringTools local_48;
        StringTools local_44;
        StringTools local_40;
        StringTools local_3c;
        StringTools local_38;
        StringTools local_34;
        StringTools local_30;
        StringTools local_2c;

        uint64_t* puVar1 = field_0;
        if (stringViews.size() < 8) {
            this_02 = (Console*)*puVar1;
            str = "Missing argument for minimap outline, args are: {category: 0-6} {outline thickness} {outline r,g,b: "
                  "0-255} {dot r,g,b: 0-255}";
        } else {
            local_48.field_0 = 0;
            local_44.field_0 = 0;
            local_40.field_0 = 0;
            local_3c.field_0 = 0;
            local_38.field_0 = 0;
            local_34.field_0 = 0;
            local_30.field_0 = 0;
            local_2c.field_0 = 0;
            auVar4 = stringViews[0];
            if (local_48.CheckedParseInt(*auVar4._0_8_, *auVar4._8_8_)) {
                auVar4 = stringViews[1];
                if (local_44.CheckedParseInt(*auVar4._0_8_, *auVar4._8_8_)) {
                    auVar4 = stringViews[2];
                    if (local_40.CheckedParseInt(*auVar4._0_8_, *auVar4._8_8_)) {
                        auVar4 = stringViews[3];
                        if (local_3c.CheckedParseInt(*auVar4._0_8_, *auVar4._8_8_)) {
                            auVar4 = stringViews[4];
                            if (local_38.CheckedParseInt(*auVar4._0_8_, *auVar4._8_8_)) {
                                auVar4 = stringViews[5];
                                if (local_34.CheckedParseInt(*auVar4._0_8_, *auVar4._8_8_)) {
                                    auVar4 = stringViews[6];
                                    if (local_30.CheckedParseInt(*auVar4._0_8_, *auVar4._8_8_)) {
                                        auVar4 = stringViews[7];
                                        if (local_2c.CheckedParseInt(*auVar4._0_8_, *auVar4._8_8_)) {
                                            local_90 = eastl::string();
                                            local_90.append_sprintf(
                                                "Setting Minimap Dot Style for category: %i to thickness %i, outline "
                                                "color %i, %i, %i, and dot color %i, %i, %i",
                                                (unsigned long)(unsigned int)local_48.field_0,
                                                (unsigned long)(unsigned int)local_44.field_0,
                                                (unsigned long)(unsigned int)local_40.field_0,
                                                (unsigned long)(unsigned int)local_3c.field_0, local_38.field_0,
                                                local_34.field_0, local_30.field_0, local_2c.field_0);
                                            arg3 = local_3c.field_0 * 256 + local_40.field_0 * 65536 + local_38.field_0;
                                            arg2 = local_30.field_0 * 256 + local_34.field_0 * 65536 + local_2c.field_0;
                                            ((Minimap*)(*((puVar1[1] + 8152))).operator->())
                                                ->SetDotStyle(local_48.field_0, arg2, arg3, local_44.field_0);
                                            this_00 = field_8;
                                            local_70 = eastl::string("");
                                            this_00->AddChat(99, local_70, local_90);
                                            return;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            this_02 = (Console*)*puVar1;
            str = "Unable to parse arguments for minimap outline";
        }
        this_02->AddMessage(5, str);
    }

    // 0x100097330
    void ConsoleCommands::RegisterExperimentalCommands()::$_30::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        StringView* pSVar4;
        uint64_t uVar5;
        char* str;
        Console* pCVar6;
        Filename* in_R8;
        uint8_t auVar7[16];
        ReturnValue local_180;
        StringTools local_15c;
        Filename local_158;

        uint64_t* puVar1 = field_0;
        if (stringViews.size() < 2) {
            pCVar6 = (Console*)*puVar1;
            str = "Missing arguments. Expected <lt>objID<gt> <lt>outputDir<gt>";
        } else {
            local_15c.field_0 = 0;
            auVar7 = stringViews[0];
            if (local_15c.CheckedParseInt(*auVar7._0_8_, *auVar7._8_8_)) {
                pSVar4 = &stringViews[1];
                local_180 = pSVar4->to_owned_string<eastl::string>();
                local_158 = Filename(&local_180);
                if (!(local_158.IsDirectory())) {
                    pCVar6 = (Console*)*puVar1;
                    pSVar4 = &stringViews[0];
                    local_180 = pSVar4->to_owned_string<eastl::string>();
                    uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    pCVar6->AddMessage(5, "The directory %s does not exist", uVar5);
                } else {
                    ((ObjSpriteExporter*)(unsigned long)(unsigned int)local_15c.field_0)
                        ->ExportObjSprite(512, 512, (int)&local_158, *in_R8);
                }
                local_158.~pair();
                goto LAB_100097472;
            }
            pCVar6 = (Console*)*puVar1;
            str = "Unable to parse argument for Obj ID";
        }
        pCVar6->AddMessage(5, str);
    LAB_100097472:
    }

    // 0x100097dd0
    void ConsoleCommands::RegisterExperimentalCommands()::$_31::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Console* this_00;
        StringView* pSVar4;
        uint64_t uVar5;
        Filename* in_RCX;
        ReturnValue local_178;
        Filename local_158;

        uint64_t* puVar1 = field_0;
        if (stringViews.size() == 0) {
            (*puVar1)->AddMessage(5, "Missing output directory argument");
        } else {
            pSVar4 = &stringViews[0];
            local_178 = pSVar4->to_owned_string<eastl::string>();
            local_158 = Filename(&local_178);
            if (local_158.IsDirectory() == '\0') {
                this_00 = (Console*)*puVar1;
                pSVar4 = &stringViews[0];
                local_178 = pSVar4->to_owned_string<eastl::string>();
                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                this_00->AddMessage(5, "The directory %s does not exist", uVar5);
            } else {
                128->ExportAllObjSprites(128, (int)&local_158, *in_RCX);
            }
        }
    }

    // 0x100098830
    void ConsoleCommands::RegisterExperimentalCommands()::$_32::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Client* this_00;
        LootTrackerSaveHandler* pLVar3;
        char* str;
        eastl::string local_88;
        eastl::string local_68;
        ReturnValue local_48;

        uint64_t* puVar1 = field_0;
        if (stringViews.size() == 0) {
            (*puVar1)->AddMessage(5, "Unable to parse loot source, defaulting to \'Goblin (level-3)\'.");
            pLVar3 = puVar1[1]->GetLootTrackerSaveHandler();
            local_48 = eastl::string("Goblin");
            pLVar3->AddSource(local_48, 0, 3, 0);
        } else {
            local_48 = ((StringView*)stringViews[0])->to_owned_string<eastl::string>();
            pLVar3 = puVar1[1]->GetLootTrackerSaveHandler();
            pLVar3->AddSource(local_48, 0, 0, 0);
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_68 = eastl::string((CtorSprintf*)"Adding %s as Loot Source.", str);
            this_00 = &puVar1[1];
            local_88 = eastl::string("");
            this_00->AddChat(99, local_88, local_68);
        }
    }

    // 0x1000992a0
    void ConsoleCommands::RegisterExperimentalCommands()::$_33::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Client* this_00;
        char* str;
        ReturnValue local_80;
        eastl::string local_60;
        eastl::string local_40;

        uint64_t* puVar1 = field_0;
        if (stringViews.size() == 0) {
            (*puVar1)->AddMessage(5, "Unable to parse loot source, defaulting to \'Goblin (level-3)\'.");
        } else {
            local_80 = ((StringView*)stringViews[0])->to_owned_string<eastl::string>();
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_60 = eastl::string((CtorSprintf*)"Updating count for %s.", str);
            this_00 = &puVar1[1];
            local_40 = eastl::string("");
            this_00->AddChat(99, local_40, local_60);
        }
    }

    // 0x100099ca0
    void ConsoleCommands::RegisterExperimentalCommands()::$_34::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Client* this_00;
        LootTrackerSaveHandler* pLVar3;
        char* str;
        eastl::string local_88;
        eastl::string local_68;
        ReturnValue local_48;

        uint64_t* puVar1 = field_0;
        if (stringViews.size() == 0) {
            (*puVar1)->AddMessage(5, "Unable to parse loot source, defaulting to \'Goblin (level-3)\'.");
            pLVar3 = puVar1[1]->GetLootTrackerSaveHandler();
            local_48 = eastl::string("Goblin (level-3)");
            pLVar3->PerformStringBindedOperation(0, local_48);
        } else {
            local_48 = ((StringView*)stringViews[0])->to_owned_string<eastl::string>();
            pLVar3 = puVar1[1]->GetLootTrackerSaveHandler();
            pLVar3->PerformStringBindedOperation(0, local_48);
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_68 = eastl::string((CtorSprintf*)"Resetting %s count to 0.", str);
            this_00 = &puVar1[1];
            local_88 = eastl::string("");
            this_00->AddChat(99, local_88, local_68);
        }
    }

    // 0x10009a700
    void ConsoleCommands::RegisterExperimentalCommands()::$_35::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Client* this_00;
        unsigned int uVar2;
        char* str;
        ReturnValue local_80;
        eastl::string local_60;
        eastl::string local_40;

        uint64_t* puVar1 = field_0;
        if (stringViews.size() == 0) {
            (*puVar1)->AddMessage(5, "Missing argument for source name lookup");
        } else {
            local_80 = ((StringView*)stringViews[0])->to_owned_string<eastl::string>();
            uVar2 = (puVar1[1]->GetLootTrackerSaveHandler())->GetSourceCount(local_80);
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_60 = eastl::string((CtorSprintf*)"Source %s has %d number of kills.", str, (unsigned long)uVar2);
            this_00 = &puVar1[1];
            local_40 = eastl::string("");
            this_00->AddChat(99, local_40, local_60);
        }
    }

    // 0x10009b110
    void ConsoleCommands::RegisterExperimentalCommands()::$_36::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Client* this_00;
        char* pcVar4;
        Console* this_02;
        uint8_t auVar5[16];
        ReturnValue local_88;
        eastl::string local_68;
        eastl::string local_48;
        StringTools local_1c;

        uint64_t* puVar1 = field_0;
        if (stringViews.size() == 0) {
            this_02 = (Console*)*puVar1;
            pcVar4 = "Missing argument for source name lookup";
        } else {
            local_1c.field_0 = 0;
            auVar5 = stringViews[0];
            if (local_1c.CheckedParseInt(*auVar5._0_8_, *auVar5._8_8_) != '\0') {
                local_88 = puVar1[1]->GetLootTrackerSaveHandler()->GetSourceNameById(local_1c.field_0);
                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_68 = eastl::string((CtorSprintf*)"Source Name found: %s", pcVar4);
                this_00 = &puVar1[1];
                local_48 = eastl::string("");
                this_00->AddChat(99, local_48, local_68);
                return;
            }
            this_02 = (Console*)*puVar1;
            pcVar4 = "Unable to parse argument for source name lookup";
        }
        this_02->AddMessage(5, pcVar4);
    }

    // 0x10009bb40
    void ConsoleCommands::RegisterExperimentalCommands()::$_37::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        int arg1;
        Client* this_00;
        Console* this_01;
        bool cVar2;
        unsigned int uVar3;
        LootTrackerSaveHandler* pLVar5;
        int* piVar6;
        char* str;
        uint8_t auVar7[16];
        eastl::string local_a8;
        ReturnValue local_88;
        eastl::string local_68;
        int* local_48;
        StringTools local_40;
        LootOrder local_3c;
        StringTools local_38;
        StringTools local_34;

        uint64_t* puVar1 = field_0;
        if (stringViews.size() == 3) {
            auVar7 = stringViews[0];
            cVar2 = local_38.CheckedParseInt(*auVar7._0_8_, *auVar7._8_8_);
            if (cVar2) {
                auVar7 = stringViews[1];
                cVar2 = local_34.CheckedParseInt(*auVar7._0_8_, *auVar7._8_8_);
                if (cVar2) {
                    auVar7 = stringViews[2];
                    cVar2 = local_40.CheckedParseInt(*auVar7._0_8_, *auVar7._8_8_);
                    if ((((cVar2) && (-1 < local_38.field_0)) && (-1 < local_34.field_0)) &&
                        (cVar2 = loottracker::ParseIntAsLootOrder(local_40.field_0, local_3c), cVar2)) {
                        pLVar5 = puVar1[1]->GetLootTrackerSaveHandler();
                        uVar3 = pLVar5->GetCountOfSortedResultIds(local_38.field_0, local_34.field_0, &local_3c);
                        local_a8 = eastl::string((CtorSprintf*)"Sources orded: %i", (char*)(unsigned long)uVar3);
                        this_00 = &puVar1[1];
                        local_68 = eastl::string("");
                        this_00->AddChat(99, local_68, local_a8);
                        puVar1[1]->GetLootTrackerSaveHandler();
                        local_68.GetOrderedResultIds();
                        piVar6 = (int*)local_68.HeapBeginPtr();
                        local_48 = (int*)local_68.end();
                        if (piVar6 != local_48) {
                            do {
                                arg1 = *piVar6;
                                this_01 = (Console*)*puVar1;
                                pLVar5 = puVar1[1]->GetLootTrackerSaveHandler();
                                local_88 = pLVar5->GetSourceNameById(arg1);
                                str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                this_01->AddMessage(2, str);
                                piVar6 = piVar6 + 1;
                            } while (piVar6 != local_48);
                        }
                        return;
                    }
                }
            }
        }
        (*puVar1)->AddMessage(5, "Invalid arguments.");
    }

    // 0x10009c670
    void ConsoleCommands::RegisterExperimentalCommands()::$_38::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Client* this_00;
        LootTrackerSaveHandler* this_02;
        char* str;
        uint8_t auVar3[16];
        SourceItem local_e8;
        eastl::string local_b8;
        eastl::string local_98;
        SourceItem local_78;
        ReturnValue local_48;
        StringTools local_20;
        StringTools local_1c;

        uint64_t* puVar1 = field_0;
        if (stringViews.size() == 3) {
            local_48 = ((StringView*)stringViews[0])->to_owned_string<eastl::string>();
            auVar3 = stringViews[1];
            local_20.CheckedParseInt(*auVar3._0_8_, *auVar3._8_8_);
            auVar3 = stringViews[2];
            local_1c.CheckedParseInt(*auVar3._0_8_, *auVar3._8_8_);
            local_78 = loottracker::SourceItem();
            local_78 = &local_48;
            local_78.field_32._4_4_ = local_20.field_0;
            local_78.field_40 = local_1c.field_0;
            this_02 = puVar1[1]->GetLootTrackerSaveHandler();
            local_e8 = loottracker::SourceItem(local_78);
            this_02->UpsertLoot(&local_e8);
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_b8 = eastl::string(
                (CtorSprintf*)"Adding Item to Loot table with following params: Origin: %s, ObjectID: %d, Count: %d",
                str, (unsigned long)(unsigned int)local_20.field_0, (unsigned long)(unsigned int)local_1c.field_0);
            this_00 = &puVar1[1];
            local_98 = eastl::string("");
            this_00->AddChat(99, local_98, local_b8);
        } else {
            (*puVar1)->AddMessage(5, "Too few or too many arguments were passed. There needs to be [\"SourceName\"], "
                                     "[ObjectID], and [Count]");
        }
    }

    // 0x10009d140
    void ConsoleCommands::RegisterExperimentalCommands()::$_39::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Client* this_00;
        char* str_00;
        uint8_t auVar3[16];
        ReturnValue local_b8;
        hash_node<eastl::string, false> local_98;
        unsigned int local_74;
        unsigned int local_70;
        eastl::string local_68;
        eastl::string local_48;
        StringTools local_1c;

        uint64_t* puVar1 = field_0;
        if (stringViews.size() == 2) {
            local_b8 = ((StringView*)stringViews[0])->to_owned_string<eastl::string>();
            auVar3 = stringViews[1];
            local_1c.CheckedParseInt(*auVar3._0_8_, *auVar3._8_8_);
            local_98.GetSourceLootItemByName(puVar1[1]->GetLootTrackerSaveHandler(), (int)&local_b8);
            str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_68 = eastl::string((CtorSprintf*)"The source item you pull from %s, is objectId: %d, count: %d.",
                                     str_00, (unsigned long)local_74, (unsigned long)local_70);
            this_00 = &puVar1[1];
            local_48 = eastl::string("");
            this_00->AddChat(99, local_48, local_68);
        } else {
            (*puVar1)->AddMessage(5, "Too few or too many arguments were passed.");
        }
    }

    // 0x10009dbb0
    void ConsoleCommands::RegisterExperimentalCommands()::$_40::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Client* this_00;
        unsigned int uVar2;
        ReturnValue local_80;
        eastl::string local_60;
        eastl::string local_40;

        uint64_t* puVar1 = field_0;
        if (stringViews.size() == 0) {
            (*puVar1)->AddMessage(5, "Missing argument for loot count lookup.");
        } else {
            local_80 = ((StringView*)stringViews[0])->to_owned_string<eastl::string>();
            uVar2 = (puVar1[1]->GetLootTrackerSaveHandler())->GetLootItemsBySourceName(local_80);
            local_60 = eastl::string((CtorSprintf*)"The amount of distinct loot from this source: %d",
                                     (char*)(unsigned long)uVar2);
            this_00 = &puVar1[1];
            local_40 = eastl::string("");
            this_00->AddChat(99, local_40, local_60);
        }
    }

    // 0x10009e5c0
    void ConsoleCommands::RegisterExperimentalCommands()::$_41::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Client* this_00;
        char* str;
        ReturnValue local_80;
        eastl::string local_60;
        eastl::string local_40;

        uint64_t* puVar1 = field_0;
        if (stringViews.size() == 0) {
            (*puVar1)->AddMessage(5, "Missing argument for ignored item.");
        } else {
            local_80 = ((StringView*)stringViews[0])->to_owned_string<eastl::string>();
            (puVar1[1]->GetLootTrackerSaveHandler())->PerformStringBindedOperation(6, local_80);
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_60 = eastl::string((CtorSprintf*)"Added %s as an ignored item.", str);
            this_00 = &puVar1[1];
            local_40 = eastl::string("");
            this_00->AddChat(99, local_40, local_60);
        }
    }

    // 0x10009efd0
    void ConsoleCommands::RegisterExperimentalCommands()::$_42::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Client* this_00;
        char* str;
        ReturnValue local_80;
        eastl::string local_60;
        eastl::string local_40;

        uint64_t* puVar1 = field_0;
        if (stringViews.size() == 0) {
            (*puVar1)->AddMessage(5, "Missing argument for removing ignored item.");
        } else {
            local_80 = ((StringView*)stringViews[0])->to_owned_string<eastl::string>();
            (puVar1[1]->GetLootTrackerSaveHandler())->PerformStringBindedOperation(7, local_80);
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_60 = eastl::string((CtorSprintf*)"Removed %s as an ignored item.", str);
            this_00 = &puVar1[1];
            local_40 = eastl::string("");
            this_00->AddChat(99, local_40, local_60);
        }
    }

    // 0x10009f9e0
    void ConsoleCommands::RegisterExperimentalCommands()::$_43::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Client* this_00;
        StringView* pSVar3;
        LootTrackerSaveHandler* pLVar4;
        char* str;
        ReturnValue local_88;
        eastl::string local_68;
        ReturnValue local_40;

        uint64_t* puVar1 = field_0;
        if (stringViews.size() == 0) {
            (*puVar1)->AddMessage(5, "Missing argument for clear source.");
        } else {
            pSVar3 = &stringViews[0];
            local_88 = pSVar3->to_owned_string<eastl::string>();
            pLVar4 = puVar1[1]->GetLootTrackerSaveHandler();
            pSVar3 = &stringViews[0];
            local_40 = pSVar3->to_owned_string<eastl::string>();
            pLVar4->PerformStringBindedOperation(2, local_40);
            pLVar4 = puVar1[1]->GetLootTrackerSaveHandler();
            pSVar3 = &stringViews[0];
            local_40 = pSVar3->to_owned_string<eastl::string>();
            pLVar4->PerformStringBindedOperation(0, local_40);
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_40 = eastl::string((CtorSprintf*)"Resetting tracking for %s.", str);
            this_00 = &puVar1[1];
            local_68 = eastl::string("");
            this_00->AddChat(99, local_68, local_40);
        }
    }

    // 0x1000a0450
    void ConsoleCommands::RegisterExperimentalCommands()::$_44::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Console* pCVar2;
        int iVar3;
        unsigned int arg1;
        int iVar4;
        LootTrackerSaveHandler* pLVar6;
        char* pcVar7;
        unsigned long uVar8;
        eastl::string local_d8;
        uint8_t local_b8[36];
        unsigned int local_94;
        unsigned int local_90;
        eastl::string local_88;
        ReturnValue local_68;
        unsigned long local_48;
        unsigned int local_40;
        int local_3c;
        unsigned long local_38;

        uint64_t* puVar1 = field_0;
        if (stringViews.size() == 1) {
            local_68 = ((StringView*)stringViews[0])->to_owned_string<eastl::string>();
            pLVar6 = puVar1[1]->GetLootTrackerSaveHandler();
            iVar3 = pLVar6->GetSourceCount(local_68);
            if (iVar3 == -1) {
                (*puVar1)->AddMessage(5, "Cannot find source!");
            } else if (0 < iVar3) {
                uVar8 = 1;
                local_3c = iVar3;
                do {
                    pLVar6 = puVar1[1]->GetLootTrackerSaveHandler();
                    local_48 = uVar8;
                    arg1 = pLVar6->GetNextSourceId(local_68, (int)uVar8);
                    pLVar6 = puVar1[1]->GetLootTrackerSaveHandler();
                    local_38 = pLVar6->GetLootItemsBySourceId(arg1);
                    pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    local_88 = eastl::string((CtorSprintf*)"Source - %s, ID - %d:", pcVar7, (unsigned long)arg1);
                    pCVar2 = (Console*)*puVar1;
                    local_40 = arg1;
                    pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    pCVar2->AddMessage(1, pcVar7);
                    if (0 < (int)local_38) {
                        local_38 = (unsigned long)(unsigned int)-(int)local_38;
                        iVar3 = 1;
                        do {
                            pLVar6 = puVar1[1]->GetLootTrackerSaveHandler();
                            local_b8->GetSourceLootItemById((int)pLVar6, local_40);
                            local_d8 = eastl::string((CtorSprintf*)"Item - ObjId: %d, Count: %d",
                                                     (char*)(unsigned long)local_94, (unsigned long)local_90);
                            pCVar2 = (Console*)*puVar1;
                            pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            pCVar2->AddMessage(1, pcVar7);
                            iVar4 = (int)local_38 + iVar3;
                            iVar3 = iVar3 + 1;
                        } while (iVar4 != 0);
                    }
                    uVar8 = (unsigned long)((int)local_48 + 1);
                } while ((int)local_48 != local_3c);
            }
        } else {
            (*puVar1)->AddMessage(5, "Please specify only the source you want to list out");
        }
    }

    // 0x1000a0fb0
    void ConsoleCommands::RegisterExperimentalCommands()::$_45::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Console* pCVar2;
        StringView* pSVar5;
        uint64_t uVar6;
        OpGroup local_310;
        OpGroup local_1a8;
        ReturnValue local_40;

        uint64_t* puVar1 = field_0;
        if (stringViews.size() < 2) {
            (*puVar1)->AddMessage(5, "Missing arguments. Expected <lt>pattern string<gt> <lt>opgroup string<gt>");
        } else {
            pSVar5 = &stringViews[0];
            local_1a8 = pSVar5->to_owned_string<eastl::string>();
            local_310 = OpGroup::Create(local_1a8, false);
            pSVar5 = &stringViews[1];
            local_40 = pSVar5->to_owned_string<eastl::string>();
            local_1a8 = OpGroup::Create(local_40, true);
            pCVar2 = (Console*)*puVar1;
            local_40 = local_310.ToString();
            uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pCVar2->AddMessage(1, "Pattern was parsed as : [% s] ", uVar6);
            pCVar2 = (Console*)*puVar1;
            local_40 = local_1a8.ToString();
            uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pCVar2->AddMessage(1, "Value was parsed as: [%s]", uVar6);
            if (local_1a8.MatchPattern(local_310, false) == '\0') {
                (*puVar1)->AddMessage(4, "No match");
            } else {
                (*puVar1)->AddMessage(2, "Match!");
            }
        }
    }

    // 0x1000a1aa0
    void ConsoleCommands::RegisterExperimentalCommands()::$_46::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        HighlightManager* pHVar3;
        OpGroup local_1a8;
        ReturnValue local_40;

        uint64_t* puVar1 = field_8;
        if (stringViews.size() == 1) {
            local_40 = ((StringView*)stringViews[0])->to_owned_string<eastl::string>();
            local_1a8 = OpGroup::Create(local_40, false);
            pHVar3 = field_0->GetHighlightManager();
            highlight::HighlightManager::ConfigureChannel((HighlightCategory)pHVar3, 8, 0, 0, '\x03', 128);
            pHVar3 = field_0->GetHighlightManager();
            pHVar3->AddOpGroupHighlight(local_1a8, 0, false);
        } else {
            (*puVar1)->AddMessage(5, "Missing arguments. Expected <lt>opgroup string<gt>");
        }
    }

    // 0x1000a24a0
    void ConsoleCommands::RegisterExperimentalCommands()::$_47::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        int iVar2;
        int* piVar5;
        char* str;
        Console* this_00;
        uint8_t auVar6[16];
        StringTools local_48;
        StringTools local_44;
        StringTools local_40;
        StringTools local_3c;
        StringTools local_38;
        StringTools local_34;
        int local_30[2];

        uint64_t* puVar1 = field_8;
        long lVar4 = stringViews.size();
        if (lVar4 == 6) {
            auVar6 = stringViews[0];
            if (local_48.CheckedParseInt(*auVar6._0_8_, *auVar6._8_8_)) {
                auVar6 = stringViews[1];
                if (local_44.CheckedParseInt(*auVar6._0_8_, *auVar6._8_8_)) {
                    auVar6 = stringViews[2];
                    if (local_40.CheckedParseInt(*auVar6._0_8_, *auVar6._8_8_)) {
                        auVar6 = stringViews[3];
                        if (local_3c.CheckedParseInt(*auVar6._0_8_, *auVar6._8_8_)) {
                            auVar6 = stringViews[4];
                            if (local_38.CheckedParseInt(*auVar6._0_8_, *auVar6._8_8_)) {
                                auVar6 = stringViews[5];
                                if (local_34.CheckedParseInt(*auVar6._0_8_, *auVar6._8_8_)) {
                                    if (((field_0 + 52016))->operator_cast_to_bool()) {
                                        lVar4 = (*((field_0 + 52016))).operator->();
                                        *(int*)(lVar4 + 548) = local_48.field_0;
                                        lVar4 = (*((field_0 + 52016))).operator->();
                                        *(int*)(lVar4 + 552) = local_44.field_0;
                                        local_30[0] = -1;
                                        local_30[1] = 63;
                                        piVar5 = std::clamp<int>(local_40.field_0, *local_30, *(local_30 + 1));
                                        iVar2 = *piVar5;
                                        lVar4 = (*((field_0 + 52016))).operator->();
                                        *(char*)(lVar4 + 556) = (char)iVar2;
                                        local_30[0] = -1;
                                        local_30[1] = 7;
                                        piVar5 = std::clamp<int>(local_3c.field_0, *local_30, *(local_30 + 1));
                                        iVar2 = *piVar5;
                                        lVar4 = (*((field_0 + 52016))).operator->();
                                        *(char*)(lVar4 + 557) = (char)iVar2;
                                        local_30[0] = -1;
                                        local_30[1] = 127;
                                        piVar5 = std::clamp<int>(local_38.field_0, *local_30, *(local_30 + 1));
                                        iVar2 = *piVar5;
                                        lVar4 = (*((field_0 + 52016))).operator->();
                                        *(char*)(lVar4 + 558) = (char)iVar2;
                                        local_30[0] = 0;
                                        local_30[1] = 128;
                                        piVar5 = std::clamp<int>(local_34.field_0, *local_30, *(local_30 + 1));
                                        iVar2 = *piVar5;
                                        lVar4 = (*((field_0 + 52016))).operator->();
                                        *(char*)(lVar4 + 559) = (char)iVar2;
                                        return;
                                    }
                                    this_00 = (Console*)*puVar1;
                                    str = "Could not find player to tint.";
                                    goto LAB_1000a26b1;
                                }
                            }
                        }
                    }
                }
            }
            this_00 = (Console*)*puVar1;
            str = "Invalid arguments. Expected (start, end, hue, saturation, lightness, weight) as integers";
        } else {
            this_00 = (Console*)*puVar1;
            str = "Missing arguments. Expected (start, end, hue, saturation, lightness, weight) as integers";
        }
    LAB_1000a26b1:
        this_00->AddMessage(5, str);
    }

    // 0x1000a2e50
    void ConsoleCommands::RegisterPublicCommands()::$_48::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Client::Instance()->ToggleRenderSelf();
    }

    // 0x1000a35d0
    void ConsoleCommands::RegisterPublicCommands()::$_49::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Client::Instance()->ToggleMouseOverText();
    }

    // 0x1000a3d50
    void ConsoleCommands::RegisterPublicCommands()::$_50::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Client::Instance()->ToggleAntiDrag();
    }

    // 0x1000a4e30
    void ConsoleCommands::RegisterPublicCommands()::$_51::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        auto pCVar1 = Client::Instance();
        ((DeviceOptions*)pCVar1->field_8376.operator->())->ToggleDisplayFps();
    }

    // 0x1000a55f0
    void ConsoleCommands::RegisterPublicCommands()::$_52::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Client::Instance()->ReloadHighlights();
    }

    // 0x1000a5d70
    void ConsoleCommands::RegisterPublicCommands()::$_53::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Client::Instance()->RedrawMinimap();
    }

    // 0x1000a6670
    void ConsoleCommands::RegisterPublicCommands()::$_54::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Console* pCVar2;
        Client* pCVar6;
        char* pcVar7;
        uint64_t uVar8;
        StringView local_340;
        StringView local_330;
        StringView local_320;
        StringView local_310;
        ReturnValue local_300;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>> local_2e0;
        eastl::string local_2c0;
        Callstack local_2a0;
        ReturnValue local_168;

        uint64_t* puVar1 = field_0;
        long lVar4 = stringViews.size();
        if (lVar4 == 0) {
            pCVar6 = Client::Instance();
            ((DeviceOptions*)pCVar6->field_8376.operator->())->ToggleDisplayBuildInfo();
            goto LAB_1000a6ac0;
        }
        lVar4 = stringViews.size();
        if (lVar4 != 1) {
            (*puVar1)->AddMessage(5, "Unrecognized number of arguments. Type \"? buildinfo\" for more info.");
            goto LAB_1000a6ac0;
        }
        Client::Instance();
        local_2e0.GetBuildInfoPrettyPrint();
        StringView* pSVar5 = &stringViews[0];
        local_340.StringView<5ul>("copy");
        bool cVar3 = *pSVar5 == &local_340;
        if (!cVar3) {
            pSVar5 = &stringViews[0];
            local_330.StringView<7ul>("export");
            cVar3 = *pSVar5 == &local_330;
            if (cVar3)
                goto LAB_1000a6739;
            pSVar5 = &stringViews[0];
            local_310.StringView<6ul>("print");
            cVar3 = *pSVar5 == &local_310;
            pCVar2 = (Console*)*puVar1;
            if (!cVar3) {
                pSVar5 = &stringViews[0];
                local_168 = pSVar5->to_owned_string<eastl::string>();
                uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pCVar2->AddMessage(5, "Unrecognized argument: %s", uVar8);
            } else {
                pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pCVar2->AddMessage(2, pcVar7);
            }
        } else {
        LAB_1000a6739:
            while (true) {
                lVar4 = local_2e0.find("<br>", 0);
                if (lVar4 == -1)
                    break;
                local_2e0.replace(local_2e0.find("<br>", 0), 4, "\n");
            }
            pSVar5 = &stringViews[0];
            local_320.StringView<5ul>("copy");
            cVar3 = *pSVar5 == &local_320;
            if (!cVar3) {
                new (&local_2a0[0].field_8) Filename("logs");
                local_168 = local_2a0[0].field_8 / "buildinfo.txt";
                local_2a0[0].field_8.~pair();
                new (&local_2a0[0].field_8) Filename();
                local_2a0 = callstack::Callstack();
                pCVar6 = Client::Instance();
                pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                cVar3 = pCVar6->WriteToPublicStorage(local_168, local_2a0[0].field_8, pcVar7, local_2a0);
                if (!cVar3) {
                    local_2c0 = eastl::string();
                    pcVar7 = local_168.GetName();
                    local_300 = local_2a0.GetErrorString();
                    uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    local_2c0.append_sprintf("Cannot export build info to %s: %s", pcVar7, uVar8);
                    pCVar2 = (Console*)*puVar1;
                    pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    pCVar2->AddMessage(5, pcVar7);
                    (*puVar1)->AddMessage(5, "Verify that sufficient permission has been granted to write to external "
                                             "storage, then run the command again.");
                    (*puVar1)->AddMessage(5, "If this fails, verify that the listed directory path exists.");
                } else {
                    local_2c0 = eastl::string("Build info exported to: ");
                    pcVar7 = local_2a0[0].field_8.GetName();
                    local_2c0.append(pcVar7);
                    pCVar2 = (Console*)*puVar1;
                    pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    pCVar2->AddMessage(2, pcVar7);
                }
                local_2a0[0].field_8.~pair();
                local_168.~pair();
            } else {
                local_168 = Clipboard();
                local_168.SetText<eastl::basic_string<char, BucketAllocatorEASTL>>(local_2e0);
                (*puVar1)->AddMessage(2, "Build info copied to clipboard.");
            }
        }
    LAB_1000a6ac0:
    }

    // 0x1000a74e0
    void ConsoleCommands::RegisterPublicCommands()::$_55::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        unsigned int uVar2;
        ReturnValue local_38;

        uint64_t* puVar1 = field_0;
        if (stringViews.size() == 0) {
            (*puVar1)->AddMessage(5, "forceloginfailure takes one argument (enum of the error to force)");
        } else {
            local_38 = ((StringView*)stringViews[0])->to_owned_string<eastl::string>();
            uVar2 = eastl::stoi<eastl::string>(local_38, 10);
            Client::Instance()->field_54712 = uVar2;
        }
    }

    // 0x1000a7ce0
    void ConsoleCommands::RegisterPublicCommands()::$_56::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Client::Instance()->field_54716 = 1;
    }

    // 0x1000a85e0
    void ConsoleCommands::RegisterPublicCommands()::$_57::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Console* pCVar2;
        bool cVar3;
        unsigned int uVar4;
        StringView* pSVar6;
        long lVar9;
        uint64_t uVar10;
        unsigned int uVar11;
        StringView local_60;
        shared_ptr local_50;

        uint64_t* puVar1 = field_0;
        long lVar5 = stringViews.size();
        if (lVar5 == 0) {
            lVar5 = ((puVar1[1] + 52872))->StartDownloadIfNeeded();
            (*puVar1)->AddMessage(2, "price cache status %d", (unsigned long)*(unsigned int*)(lVar5 + 8));
        } else {
            pSVar6 = &stringViews[0];
            local_60.StringView<5ul>("load");
            cVar3 = *pSVar6 == &local_60;
            if (!cVar3) {
                pSVar6 = &stringViews[0];
                local_50 = pSVar6->to_owned_string<eastl::string>();
                uVar4 = _atoi((char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin());
                if (0 < (int)uVar4) {
                    lVar5 = ((puVar1[1] + 52872))->GetMarketPriceForObj(4294967295, uVar4);
                    local_50 = configdecoder::ObjType::List(uVar4);
                    cVar3 = shared_ptr::operator_cast_to_bool(&local_50);
                    uVar11 = 4294967295;
                    if (cVar3) {
                        lVar9 = local_50.operator->();
                        uVar11 = (unsigned int)*(uint8_t*)(lVar9 + 824);
                    }
                    (*puVar1)->AddMessage(2, "price cache for objId %d = %d (%d). Enabled = %d", (unsigned long)uVar4,
                                          (unsigned long)4294967295, (unsigned long)*(unsigned int*)(lVar5 + 8),
                                          uVar11);
                    return;
                }
                pCVar2 = (Console*)*puVar1;
                pSVar6 = &stringViews[0];
                local_50 = pSVar6->to_owned_string<eastl::string>();
                uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pCVar2->AddMessage(5, "Could not understand objid %s", uVar10);
            } else {
                if (stringViews.size() < 2) {
                    (*puVar1)->AddMessage(5, "Must specify file to load");
                    return;
                }
                lVar5 = puVar1[1];
                pSVar6 = &stringViews[1];
                local_50 = pSVar6->to_owned_string<eastl::string>();
                uVar4 = ((lVar5 + 52872))->Load(local_50);
                pCVar2 = (Console*)*puVar1;
                pSVar6 = &stringViews[1];
                local_50 = pSVar6->to_owned_string<eastl::string>();
                uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pCVar2->AddMessage(2, "Attempted to load %s: %d", uVar10, (unsigned long)uVar4 & 255);
            }
        }
    }

    // 0x1000a8fc0
    void ConsoleCommands::RegisterPublicCommands()::$_58::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        auto this_00 = Client::Instance();
        auto pbVar1 = this_00->field_19200.operator->();
        *pbVar1 = *pbVar1 ^ 1;
        eastl::string local_70("");
        eastl::string local_48("Toggling route highlighter");
        this_00->AddChat(99, local_70, local_48);
    }

    // 0x1000a99a0
    void ConsoleCommands::RegisterPublicCommands()::$_59::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char cVar2;
        char cVar3;
        bool cVar4;
        char* str;
        Console* this_01;
        uint8_t auVar8[16];
        eastl::string local_90;
        eastl::string local_70;
        StringTools local_48;
        StringTools local_44;
        StringTools local_40;
        StringTools local_3c;
        StringTools local_38;
        StringTools local_34;

        uint64_t* puVar1 = field_0;
        auto this_00 = Client::Instance();
        local_48.field_0 = 0;
        local_44.field_0 = 0;
        long lVar5 = this_00->field_52016.operator->();
        unsigned int* puVar6 = (unsigned int*)(*((lVar5 + 444)))[(unsigned long)stringViews];
        local_40.field_0 = *puVar6;
        lVar5 = this_00->field_52016.operator->();
        puVar6 = (unsigned int*)(*((lVar5 + 484)))[(unsigned long)stringViews];
        local_3c.field_0 = *puVar6;
        local_38.field_0 = this_00->field_51984;
        local_34.field_0 = 1;
        unsigned long uVar7 = stringViews.size();
        if (uVar7 < 2) {
            this_01 = (Console*)*puVar1;
            str = "Incorrect number of arguments.\nUSAGE: destination x, destination z, (OPTIONAL) source x, "
                  "(OPTIONAL) source z, (OPTIONAL) level, (OPTIONAL) size. If you only specify destination, the player "
                  "coord will be assumed for the source. Level must be included if you specify source coord. Size is "
                  "assumed to be 1 if not specified.";
        } else {
            uVar7 = stringViews.size();
            cVar3 = '\0';
            if (1 < uVar7) {
                auVar8 = stringViews[0];
                cVar2 = local_48.CheckedParseInt(*auVar8._0_8_, *auVar8._8_8_);
                if (cVar2) {
                    auVar8 = stringViews[1];
                    cVar3 = local_44.CheckedParseInt(*auVar8._0_8_, *auVar8._8_8_);
                }
            }
            uVar7 = stringViews.size();
            cVar2 = cVar3;
            if (4 < uVar7) {
                auVar8 = stringViews[2];
                cVar4 = local_40.CheckedParseInt(*auVar8._0_8_, *auVar8._8_8_);
                if (cVar4) {
                    auVar8 = stringViews[3];
                    cVar4 = local_3c.CheckedParseInt(*auVar8._0_8_, *auVar8._8_8_);
                    if (cVar4) {
                        auVar8 = stringViews[4];
                        cVar4 = local_38.CheckedParseInt(*auVar8._0_8_, *auVar8._8_8_);
                        cVar2 = '\x01';
                        if (!cVar4) {
                            cVar2 = cVar3;
                        }
                    }
                }
            }
            lVar5 = stringViews.size();
            cVar3 = cVar2;
            if (lVar5 == 6) {
                auVar8 = stringViews[5];
                cVar4 = local_34.CheckedParseInt(*auVar8._0_8_, *auVar8._8_8_);
                cVar3 = '\x01';
                if (!cVar4) {
                    cVar3 = cVar2;
                }
            }
            if (!cVar3) {
                this_01 = (Console*)*puVar1;
                str = "Error parsing args";
            } else {
                cVar3 = Client::HighlightRoute((int)this_00, local_38.field_0, local_40.field_0, local_3c.field_0,
                                               local_48.field_0, local_44.field_0);
                if (cVar3) {
                    local_90 = eastl::string(
                        (CtorSprintf*)"Highlighting route, SOURCE - X: %d, Z: %d, DESTINATION - X: %d, Z: %d, LEVEL: "
                                      "%d, SIZE: %d",
                        (char*)(unsigned long)(unsigned int)local_40.field_0,
                        (unsigned long)(unsigned int)local_3c.field_0, (unsigned long)(unsigned int)local_48.field_0,
                        (unsigned long)(unsigned int)local_44.field_0, local_38.field_0, local_34.field_0);
                    local_70 = eastl::string("");
                    this_00->AddChat(99, local_70, local_90);
                    return;
                }
                this_01 = (Console*)*puVar1;
                str = "Route is blocked!";
            }
        }
        this_01->AddMessage(5, str);
    }

    // 0x1000aa3b0
    void ConsoleCommands::RegisterPublicCommands()::$_60::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        auto this_00 = Client::Instance();
        ((RouteHighlighter*)this_00->field_19208.operator->())->ClearRoute();
        eastl::string local_70("");
        eastl::string local_48("Clearing route highlight...");
        this_00->AddChat(99, local_70, local_48);
    }

    // 0x1000aad60
    void ConsoleCommands::RegisterTestCommands()::$_61::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        uint64_t* puVar1 = field_0;
        highlight::HighlightManagerTest::RunTests();
        (*puVar1)->AddMessage(1, "Tests completed.");
    }

    // 0x1000ad750
    void ConsoleCommands::RegisterTestCommands()::$_62::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        uint64_t* puVar1 = field_0;
        OpGroupTest::RunTests();
        (*puVar1)->AddMessage(1, "Tests completed.");
    }

    // 0x1000af2d0
    void ConsoleCommands::RegisterTestCommands()::$_63::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        bool arg1;
        ReturnValue local_40;

        long lVar1 = field_0;
        long lVar3 = stringViews.size();
        if (lVar3 == 0) {
            arg1 = false;
        } else {
            local_40 = ((StringView*)stringViews[0])->to_owned_string<eastl::string>();
            arg1 = local_40.comparei("rt7") == 0;
            if (lVar3 != 0) {
            }
        }
        (*(Client**)(lVar1 + 8))->SetUsingRSeven(arg1, true);
    }

    // 0x1000afc60
    void ConsoleCommands::RegisterTestCommands()::$_64::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        int iVar1;
        ReturnValue local_30;

        if (stringViews.size() != 0) {
            local_30 = ((StringView*)stringViews[0])->to_owned_string<eastl::string>();
            iVar1 = local_30.comparei("zbias");
            if (iVar1 == 0) {
                (OSRenderCore_LogicThread_RSeven::Instance()->GetEffectListMutable())->Toggle(120);
            }
        }
    }

    // 0x1000b0510
    void ConsoleCommands::RegisterTestCommands()::$_65::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        DebugDisplay<RSevenDebugDisplay>::SetVisible(true);
    }

    // 0x1000b0f80
    void ConsoleCommands::RegisterTestCommands()::$_66::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        uint8_t bVar1 = ClientBuild::GetApplyBlobShadows();
        ClientBuild::SetApplyBlobShadows((bool)(bVar1 ^ 1));
        Client::Instance()->RebuildMap();
    }

} // namespace jag::oldscape

namespace jag::auth {
    // 0x10005c9a0: OAuth2TokenPair::~OAuth2TokenPair() has the same machine code as oldscape::ConsoleCommandHelp::~ConsoleCommandHelp()

    // 0x10005c9a0: FederatedLoginTokenPair::~FederatedLoginTokenPair() has the same machine code as oldscape::ConsoleCommandHelp::~ConsoleCommandHelp()

    // 0x10005c9a0: GameSessionTokenCredentials::~GameSessionTokenCredentials() has the same machine code as oldscape::ConsoleCommandHelp::~ConsoleCommandHelp()

} // namespace jag::auth

namespace jag::testframework {
    // 0x10005c9a0: TestAssertionResult::~TestAssertionResult() has the same machine code as oldscape::ConsoleCommandHelp::~ConsoleCommandHelp()

} // namespace jag::testframework

namespace jag {
    // 0x10005c9a0: SteamApp::~SteamApp() has the same machine code as oldscape::ConsoleCommandHelp::~ConsoleCommandHelp()

} // namespace jag

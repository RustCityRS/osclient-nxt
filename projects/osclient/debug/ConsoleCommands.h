// projects/osclient/debug/ConsoleCommands.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape {
    class ConsoleCommands {
    public:
        ConsoleCommands(OSClientConsole&);
        void RegisterPublicCommands();
        void RegisterTestCommands();
        void RegisterAdminCommands();
        void RegisterDebugCommands();
        void RegisterExperimentalCommands();
        void RegisterCommand(
            char const*, char const*, char const*,
            std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)> const&);
        void RegisterCommandHelp(char const*, char const*, char const*);
        void RegisterCommandPrivate(
            char const*,
            std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)> const&);
        long GetCommandHelp(char const*) const;
        void ForEachCommandHelp(std::function<void(eastl::string const&, ConsoleCommandHelp const&)>&&) const;
        ~ConsoleCommands();

        // data members, from how the methods use this: 24 bytes
        OSClientConsole* field_0; // offset 0
        Client* field_8;          // offset 8
        char _unknown_16[8];
    };

    // 0x10005c970, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ConsoleCommandHelp::ConsoleCommandHelp(char const*, char const*): jumps straight to the base-object constructor

    // 0x10005c9a0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ConsoleCommandHelp::~ConsoleCommandHelp(): jumps straight to the base-object destructor

    // 0x10007d620, 16 bytes, complete-object destructor, inline, placed by class name
    // ConsoleCommands::~ConsoleCommands(): jumps straight to the base-object destructor

    // 0x10007d630, 16 bytes, base-object destructor, inline, placed by class name
    // ConsoleCommands::~ConsoleCommands()
    void ConsoleCommands::~ConsoleCommands() {
        (&field_16)->~vector_map();
    }

    // 0x100086e80, 48 bytes, inline, placed by class name
    // ConsoleCommands::RegisterAdminCommands()::$_4::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterAdminCommands()::$_4::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterAdminCommands()::$_4::operator()(fixed_vector* param_1) {
        DeviceOptions* this_00;

        this_00 = (DeviceOptions*)
                      std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->((
                          unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)(*(long*)this +
                                                                                                          8376));
        this_00->SetDisplayFps(true);
    }

    // 0x1000877c0, 32 bytes, inline, placed by class name
    // ConsoleCommands::RegisterAdminCommands()::$_5::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterAdminCommands()::$_5::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterAdminCommands()::$_5::operator()(fixed_vector* param_1) {
        DeviceOptions* this_00;

        this_00 = (DeviceOptions*)
                      std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->((
                          unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)(*(long*)this +
                                                                                                          8376));
        this_00->SetDisplayFps(false);
    }

    // 0x100089470, 208 bytes, inline, placed by class name
    // ConsoleCommands::RegisterAdminCommands()::$_6::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterAdminCommands()::$_6::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterAdminCommands()::$_6::operator()(fixed_vector* param_1) {
        int* piVar1;
        Client* this_00;
        eastl local_58[32];
        StringConstants local_38[32];
        allocator local_18[8];

        piVar1 = (int*)constants::ChatCrownType::FromId(7);
        local_38->TAG_IMG(*piVar1);
        eastl::operator+(local_58, (basic_string*)local_38, (value_type*)"TEST GIM");
        local_38->~basic_string();
        this_00 = (Client*)Client::Instance();
        eastl::allocator::allocator(local_18, "EASTL basic_string");
        new (local_38) eastl::string("Group Ironman ChatCrown Test", local_18);
        this_00->AddChat(1, local_58, local_38);
        local_38->~basic_string();
        local_58->~basic_string();
    }

    // 0x100089ca0, 208 bytes, inline, placed by class name
    // ConsoleCommands::RegisterAdminCommands()::$_7::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterAdminCommands()::$_7::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterAdminCommands()::$_7::operator()(fixed_vector* param_1) {
        int* piVar1;
        Client* this_00;
        eastl local_58[32];
        StringConstants local_38[32];
        allocator local_18[8];

        piVar1 = (int*)constants::ChatCrownType::FromId(8);
        local_38->TAG_IMG(*piVar1);
        eastl::operator+(local_58, (basic_string*)local_38, (value_type*)"TEST GHIM");
        local_38->~basic_string();
        this_00 = (Client*)Client::Instance();
        eastl::allocator::allocator(local_18, "EASTL basic_string");
        new (local_38) eastl::string("Group Hardcore Ironman ChatCrown Test", local_18);
        this_00->AddChat(1, local_58, local_38);
        local_38->~basic_string();
        local_58->~basic_string();
    }

    // 0x10008aeb0, 48 bytes, inline, placed by class name
    // ConsoleCommands::RegisterAdminCommands()::$_8::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterAdminCommands()::$_8::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterAdminCommands()::$_8::operator()(fixed_vector* param_1) {
        /* WARNING: Subroutine does not return */
        LogAssert("false",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/commands/"
                  "ConsoleCommands_Admin.cpp",
                  132, "asserttest");
    }

    // 0x10008b640, 32 bytes, inline, placed by class name
    // ConsoleCommands::RegisterAdminCommands()::$_9::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterAdminCommands()::$_9::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    undefined1 ConsoleCommands::RegisterAdminCommands()::$_9::operator()(fixed_vector* param_1) {
        return DAT_00000001;
    }

    // 0x10008bf40, 32 bytes, inline, placed by class name
    // ConsoleCommands::RegisterAdminCommands()::$_10::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterAdminCommands()::$_10::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterAdminCommands()::$_10::operator()(fixed_vector* param_1) {
        OSClientConsole* this_00;

        this_00 = (OSClientConsole*)(*(Client**)this)->GetConsole();
        this_00->ToggleConsole();
    }

    // 0x10008c850, 464 bytes, inline, placed by class name
    // ConsoleCommands::RegisterAdminCommands()::$_11::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterAdminCommands()::$_11::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterAdminCommands()::$_11::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        char cVar2;
        long lVar3;
        StringView* pSVar4;
        DeviceOptions* pDVar5;
        undefined8 uVar6;
        uchar* extraout_RDX;
        uchar* extraout_RDX_00;
        uchar* extraout_RDX_01;
        char* pcVar7;
        undefined8 uVar8;
        StringView SVar9;
        StringView SVar10;
        StringView SVar11;
        StringView local_a8;
        StringView local_98;
        StringView local_88;
        eastl::string local_78[32];
        StringView local_58[2];
        undefined8* local_38;

        puVar1 = *(undefined8**)this;
        lVar3 = param_1->size();
        if (lVar3 == 1) {
            local_38 = puVar1;
            lVar3 = Client::Instance();
            uVar8 = 0;
            pSVar4 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
            StringView::StringView<6ul>(&local_a8, "light");
            SVar9.field_8 = extraout_RDX;
            SVar9.field_0 = (ulong)&local_a8;
            cVar2 = StringView::operator==(pSVar4, SVar9);
            if (cVar2 == '\0') {
                pSVar4 = (StringView*)eastl::vector<
                    StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
                StringView::StringView<4ul>(&local_98, "med");
                SVar10.field_8 = extraout_RDX_00;
                SVar10.field_0 = (ulong)&local_98;
                cVar2 = StringView::operator==(pSVar4, SVar10);
                uVar8 = 1;
                if (cVar2 == '\0') {
                    pSVar4 = (StringView*)eastl::vector<
                        StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<StringView,
                                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)param_1,
                        0);
                    StringView::StringView<6ul>(&local_88, "heavy");
                    SVar11.field_8 = extraout_RDX_01;
                    SVar11.field_0 = (ulong)&local_88;
                    cVar2 = StringView::operator==(pSVar4, SVar11);
                    uVar8 = 2;
                    if (cVar2 == '\0') {
                        uVar8 = *local_38;
                        pcVar7 = "Unrecognized vibrate option. Use \"light\", \"med\", or \"heavy\".";
                        goto LAB_10008c9ce;
                    }
                }
            }
            pDVar5 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)(lVar3 + 8376));
            pDVar5->SetHapticFeedbackStrength(uVar8);
            new (local_58) eastl::allocator("EASTL basic_string");
            eastl::string::basic_string(local_78, "Vibrate option updated to: ", (allocator*)local_58);
            eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                           param_1,
                       0);
            StringView::to_owned_string<eastl::string>(local_58);
            local_78->append();
            puVar1 = local_38;
            local_58->~basic_string();
            uVar8 = *puVar1;
            uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            console::Console::AddMessage(uVar8, 2, uVar6);
            eastl::string::~basic_string(local_78);
        } else {
            uVar8 = *puVar1;
            pcVar7 = "Only use this command with one argument: \"light\", \"med\", or \"heavy\".";
        LAB_10008c9ce:
            console::Console::AddMessage(uVar8, 5, pcVar7);
        }
    }

    // 0x10008d1b0, 96 bytes, inline, placed by class name
    // ConsoleCommands::RegisterAdminCommands()::$_12::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterAdminCommands()::$_12::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterAdminCommands()::$_12::operator()(fixed_vector* param_1) {
        undefined8 in_RAX;
        long lVar1;
        StringView* pSVar2;
        GameShell* this_00;
        Client* this_01;
        int local_14;

        local_14 = (int)((ulong)in_RAX >> 32);
        lVar1 = size();
        if (lVar1 == 1) {
            pSVar2 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<StringView,
                                   eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                           0);
            core::stringtools::general::StringTools::CheckedParseInt(&local_14, pSVar2);
            this_00 = (GameShell*)Client::Instance();
            this_00->SetSafeArea(local_14, local_14, local_14, local_14);
            this_01 = (Client*)Client::Instance();
            this_01->InterfaceCalculateSizeAndPosAll(true, true);
        }
    }

    // 0x10008daf0, 32 bytes, inline, placed by class name
    // ConsoleCommands::RegisterDebugCommands()::$_13::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterDebugCommands()::$_13::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterDebugCommands()::$_13::operator()(fixed_vector* param_1) {
        (*(GameShell**)(*(long*)this + 8))->SwapRenderer();
    }

    // 0x10008e2a0, 32 bytes, inline, placed by class name
    // ConsoleCommands::RegisterDebugCommands()::$_14::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterDebugCommands()::$_14::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterDebugCommands()::$_14::operator()(fixed_vector* param_1) {
        NXTRenderer* this_00;

        this_00 = (NXTRenderer*)dash3d::NXTRenderer::GetInstance();
        this_00->FlipPermitRendering();
    }

    // 0x10008ea20, 16 bytes, inline, placed by class name
    // ConsoleCommands::RegisterDebugCommands()::$_15::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterDebugCommands()::$_15::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterDebugCommands()::$_15::operator()(fixed_vector* param_1) {
        dash3d::ModelLitRenderer_drawModels = dash3d::ModelLitRenderer_drawModels ^ 1;
    }

    // 0x10008f190, 16 bytes, inline, placed by class name
    // ConsoleCommands::RegisterDebugCommands()::$_16::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterDebugCommands()::$_16::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterDebugCommands()::$_16::operator()(fixed_vector* param_1) {
        dash3d::WorldRenderer_renderGround = dash3d::WorldRenderer_renderGround ^ 1;
    }

    // 0x10008f900, 48 bytes, inline, placed by class name
    // ConsoleCommands::RegisterDebugCommands()::$_17::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterDebugCommands()::$_17::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterDebugCommands()::$_17::operator()(fixed_vector* param_1) {
        byte bVar1;
        long lVar2;

        lVar2 = Client::Instance();
        bVar1 = *(byte*)(lVar2 + 8161);
        lVar2 = Client::Instance();
        *(byte*)(lVar2 + 8161) = bVar1 ^ 1;
    }

    // 0x100090090, 48 bytes, inline, placed by class name
    // ConsoleCommands::RegisterDebugCommands()::$_18::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterDebugCommands()::$_18::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterDebugCommands()::$_18::operator()(fixed_vector* param_1) {
        byte bVar1;
        long lVar2;

        lVar2 = Client::Instance();
        bVar1 = *(byte*)(lVar2 + 8160);
        lVar2 = Client::Instance();
        *(byte*)(lVar2 + 8160) = bVar1 ^ 1;
    }

    // 0x1000909a0, 80 bytes, inline, placed by class name
    // ConsoleCommands::RegisterDebugCommands()::$_19::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterDebugCommands()::$_19::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterDebugCommands()::$_19::operator()(fixed_vector* param_1) {
        char* pcVar1;

        pcVar1 = "Legacy";
        if (dash3d::ModelLit::m_useAABBMouseCheck == 0) {
            pcVar1 = "AABB";
        }
        dash3d::ModelLit::m_useAABBMouseCheck = dash3d::ModelLit::m_useAABBMouseCheck ^ 1;
        console::Console::AddMessage(**(undefined8**)this, 2, "Clickbox Mode: %s", pcVar1);
    }

    // 0x100091890, 240 bytes, inline, placed by class name
    // ConsoleCommands::RegisterDebugCommands()::$_21::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterDebugCommands()::$_21::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterDebugCommands()::$_21::operator()(fixed_vector* param_1) {
        Client* this_00;
        undefined8* puVar1;
        shared_ptr<ApplicationContext>* this_01;
        long* plVar2;
        eastl::string local_70[32];
        allocator local_50[8];
        eastl::string local_48[32];
        allocator local_28[8];

        this_00 = (Client*)Client::Instance();
        eastl::allocator::allocator(local_50, "EASTL basic_string");
        eastl::string::basic_string(local_70, "", local_50);
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        eastl::string::basic_string(local_48, "C++PORT NYI", local_28);
        this_00->AddChat(99, local_70, local_48);
        eastl::string::~basic_string(local_48);
        eastl::string::~basic_string(local_70);
        puVar1 = (undefined8*)Client::Instance();
        this_01 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar1)(puVar1);
        plVar2 = (long*)shared_ptr<ApplicationContext>::operator->(this_01);
        plVar2 = (long*)(**(code**)(*plVar2 + 72))(plVar2);
        if (plVar2 != (long*)0) {
            (**(code**)(*plVar2 + 192))(plVar2);
        }
    }

    // 0x100092260, 144 bytes, inline, placed by class name
    // ConsoleCommands::RegisterDebugCommands()::$_22::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterDebugCommands()::$_22::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterDebugCommands()::$_22::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        long lVar2;
        StringView* pSVar3;
        Js5ResourceProvider* this_00;
        NXTPixToolkit* this_01;
        DeviceOptions* this_02;
        int local_1c;

        puVar1 = *(undefined8**)this;
        lVar2 = param_1->size();
        if (lVar2 == 1) {
            pSVar3 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
            core::stringtools::general::StringTools::CheckedParseInt(&local_1c, pSVar3);
            this_00 = (Js5ResourceProvider*)Client::Instance();
            this_01 = (NXTPixToolkit*)this_00->GetMemoryCache();
            this_01->SetDepthBufferEnabled(local_1c == 1);
            lVar2 = Client::Instance();
            this_02 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)(lVar2 + 8376));
            this_02->SetAntialiasingSampleLevel(0);
        } else {
            console::Console::AddMessage(*puVar1, 5, "Missing arguments. Expected a 0 or 1.");
        }
    }

    // 0x100092bf0, 144 bytes, inline, placed by class name
    // ConsoleCommands::RegisterDebugCommands()::$_23::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterDebugCommands()::$_23::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterDebugCommands()::$_23::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        long lVar2;
        StringView* pSVar3;
        Client* this_00;
        int local_1c;

        puVar1 = *(undefined8**)this;
        lVar2 = param_1->size();
        if (lVar2 == 1) {
            pSVar3 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
            FromString<StringView, int>(pSVar3, &local_1c, 10);
            this_00 = (Client*)Client::Instance();
            this_00->AddDeepLinkingID(local_1c);
            console::Console::AddMessage(*puVar1, 2, "Added deep link ID: %d", local_1c);
        } else {
            console::Console::AddMessage(*puVar1, 4, "Usage: deeplink_add [id]");
        }
    }

    // 0x1000935a0, 192 bytes, inline, placed by class name
    // ConsoleCommands::RegisterDebugCommands()::$_24::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterDebugCommands()::$_24::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterDebugCommands()::$_24::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        undefined8 uVar2;
        char cVar3;
        Client* this_00;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_01;
        Layout* this_02;
        undefined4* puVar4;
        undefined4* puVar5;

        puVar1 = *(undefined8**)this;
        this_00 = (Client*)Client::Instance();
        this_01 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                      this_00->GetDeepLinkingIDs();
        cVar3 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            this_01);
        uVar2 = *puVar1;
        if (cVar3 == '\0') {
            console::Console::AddMessage(uVar2, 2, "Current deep links:");
            this_02 = (Layout*)this_00->GetDeepLinkingIDs();
            puVar4 = (undefined4*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_02);
            puVar5 = (undefined4*)this_02->end();
            for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
                console::Console::AddMessage(*puVar1, 2, "%i", *puVar4);
            }
        } else {
            console::Console::AddMessage(uVar2, 4, "No deep link IDs have been set.");
        }
    }

    // 0x100093f50, 144 bytes, inline, placed by class name
    // ConsoleCommands::RegisterDebugCommands()::$_25::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterDebugCommands()::$_25::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterDebugCommands()::$_25::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        long lVar2;
        StringView* pSVar3;
        Client* this_00;
        int local_1c;

        puVar1 = *(undefined8**)this;
        lVar2 = param_1->size();
        if (lVar2 == 1) {
            pSVar3 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
            FromString<StringView, int>(pSVar3, &local_1c, 10);
            this_00 = (Client*)Client::Instance();
            this_00->ClearDeepLinkingIndex(local_1c);
            console::Console::AddMessage(*puVar1, 2, "Cleared deep link at index: %d", local_1c);
        } else {
            console::Console::AddMessage(*puVar1, 4, "Usage: deeplink_clear_index [id]");
        }
    }

    // 0x1000948d0, 384 bytes, inline, placed by class name
    // ConsoleCommands::RegisterExperimentalCommands()::$_26::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterExperimentalCommands()::$_26::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterExperimentalCommands()::$_26::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        Client* this_00;
        char cVar2;
        ulong uVar3;
        StringView* pSVar4;
        char* pcVar5;
        undefined8 uVar6;
        eastl::string local_78[32];
        eastl::string local_58[32];
        allocator local_38[12];
        uint local_2c;
        uint local_28;
        uint local_24;

        puVar1 = *(undefined8**)this;
        uVar3 = param_1->size();
        if (uVar3 < 3) {
            uVar6 = *puVar1;
            pcVar5 = "Missing argument for skybox colours";
        } else {
            local_2c = 0;
            local_28 = 0;
            local_24 = 0;
            pSVar4 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
            cVar2 = core::stringtools::general::StringTools::CheckedParseInt((int*)&local_2c, pSVar4);
            if (cVar2 != '\0') {
                pSVar4 = (StringView*)eastl::vector<
                    StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    1);
                cVar2 = core::stringtools::general::StringTools::CheckedParseInt((int*)&local_28, pSVar4);
                if (cVar2 != '\0') {
                    pSVar4 = (StringView*)eastl::vector<
                        StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<StringView,
                                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)param_1,
                        2);
                    cVar2 = core::stringtools::general::StringTools::CheckedParseInt((int*)&local_24, pSVar4);
                    if (cVar2 != '\0') {
                        eastl::string::basic_string(local_78);
                        eastl::string::append_sprintf((char*)local_78, "Setting Skybox Colour to %i, %i, %i",
                                                      (ulong)local_2c, (ulong)local_28, (ulong)local_24);
                        puVar1[1]->SetSkyboxColour(local_2c, local_28, local_24);
                        this_00 = *(Client**)(this + 8);
                        eastl::allocator::allocator(local_38, "EASTL basic_string");
                        eastl::string::basic_string(local_58, "", local_38);
                        this_00->AddChat(99, local_58, local_78);
                        eastl::string::~basic_string(local_58);
                        eastl::string::~basic_string(local_78);
                        return;
                    }
                }
            }
            uVar6 = *puVar1;
            pcVar5 = "Unable to parse argument for skybox colour";
        }
        console::Console::AddMessage(uVar6, 5, pcVar5);
    }

    // 0x100095340, 288 bytes, inline, placed by class name
    // ConsoleCommands::RegisterExperimentalCommands()::$_27::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterExperimentalCommands()::$_27::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterExperimentalCommands()::$_27::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        Client* this_00;
        long lVar3;
        StringView* pSVar4;
        char* pcVar5;
        undefined8 uVar6;
        eastl::string local_70[32];
        eastl::string local_50[32];
        allocator local_30[12];
        uint local_24;

        puVar1 = *(undefined8**)this;
        lVar3 = param_1->size();
        if (lVar3 == 0) {
            uVar6 = *puVar1;
            pcVar5 = "Missing argument for fog intensity";
        } else {
            local_24 = 0;
            pSVar4 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
            if (core::stringtools::general::StringTools::CheckedParseInt((int*)&local_24, pSVar4) != '\0') {
                eastl::string::basic_string(local_70);
                eastl::string::append_sprintf((char*)local_70, "Setting Fog Intensity to %i", (ulong)local_24);
                puVar1[1]->SetFogIntensity(local_24);
                this_00 = *(Client**)(this + 8);
                eastl::allocator::allocator(local_30, "EASTL basic_string");
                eastl::string::basic_string(local_50, "", local_30);
                this_00->AddChat(99, local_50, local_70);
                eastl::string::~basic_string(local_50);
                eastl::string::~basic_string(local_70);
                return;
            }
            uVar6 = *puVar1;
            pcVar5 = "Unable to parse argument for fog intensity";
        }
        console::Console::AddMessage(uVar6, 5, pcVar5);
    }

    // 0x100095d50, 288 bytes, inline, placed by class name
    // ConsoleCommands::RegisterExperimentalCommands()::$_28::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterExperimentalCommands()::$_28::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterExperimentalCommands()::$_28::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        Client* this_00;
        long lVar3;
        StringView* pSVar4;
        char* pcVar5;
        undefined8 uVar6;
        eastl::string local_70[32];
        eastl::string local_50[32];
        allocator local_30[12];
        uint local_24;

        puVar1 = *(undefined8**)this;
        lVar3 = param_1->size();
        if (lVar3 == 0) {
            uVar6 = *puVar1;
            pcVar5 = "Missing argument for fog distance";
        } else {
            local_24 = 0;
            pSVar4 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
            if (core::stringtools::general::StringTools::CheckedParseInt((int*)&local_24, pSVar4) != '\0') {
                eastl::string::basic_string(local_70);
                eastl::string::append_sprintf((char*)local_70, "Setting Fog Distance to %i", (ulong)local_24);
                puVar1[1]->SetFogDistance(local_24);
                this_00 = *(Client**)(this + 8);
                eastl::allocator::allocator(local_30, "EASTL basic_string");
                eastl::string::basic_string(local_50, "", local_30);
                this_00->AddChat(99, local_50, local_70);
                eastl::string::~basic_string(local_50);
                eastl::string::~basic_string(local_70);
                return;
            }
            uVar6 = *puVar1;
            pcVar5 = "Unable to parse argument for fog distance";
        }
        console::Console::AddMessage(uVar6, 5, pcVar5);
    }

    // 0x100096760, 688 bytes, inline, placed by class name
    // ConsoleCommands::RegisterExperimentalCommands()::$_29::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterExperimentalCommands()::$_29::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterExperimentalCommands()::$_29::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        Client* this_00;
        char cVar2;
        ulong uVar3;
        StringView* pSVar4;
        Minimap* pMVar5;
        char* pcVar6;
        int iVar7;
        undefined8 uVar8;
        int iVar9;
        eastl::string local_90[32];
        eastl::string local_70[32];
        allocator local_50[8];
        uint local_48;
        uint local_44;
        uint local_40;
        uint local_3c;
        int local_38;
        int local_34;
        int local_30;
        int local_2c;

        puVar1 = *(undefined8**)this;
        uVar3 = param_1->size();
        if (uVar3 < 8) {
            uVar8 = *puVar1;
            pcVar6 = "Missing argument for minimap outline, args are: {category: 0-6} {outline thickness} {outline "
                     "r,g,b: 0-255} {dot r,g,b: 0-255}";
        } else {
            local_48 = 0;
            local_44 = 0;
            local_40 = 0;
            local_3c = 0;
            local_38 = 0;
            local_34 = 0;
            local_30 = 0;
            local_2c = 0;
            pSVar4 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
            cVar2 = core::stringtools::general::StringTools::CheckedParseInt((int*)&local_48, pSVar4);
            if (cVar2 != '\0') {
                pSVar4 = (StringView*)eastl::vector<
                    StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    1);
                cVar2 = core::stringtools::general::StringTools::CheckedParseInt((int*)&local_44, pSVar4);
                if (cVar2 != '\0') {
                    pSVar4 = (StringView*)eastl::vector<
                        StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<StringView,
                                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)param_1,
                        2);
                    cVar2 = core::stringtools::general::StringTools::CheckedParseInt((int*)&local_40, pSVar4);
                    if (cVar2 != '\0') {
                        pSVar4 = (StringView*)eastl::vector<
                            StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<StringView,
                                           eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                       param_1,
                                   3);
                        cVar2 = core::stringtools::general::StringTools::CheckedParseInt((int*)&local_3c, pSVar4);
                        if (cVar2 != '\0') {
                            pSVar4 = (StringView*)eastl::vector<
                                StringView,
                                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<StringView,
                                        eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    param_1,
                                4);
                            cVar2 = core::stringtools::general::StringTools::CheckedParseInt(&local_38, pSVar4);
                            if (cVar2 != '\0') {
                                pSVar4 = (StringView*)
                                    eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                            eastl::allocator>>::
                                    operator[](
                                        (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                          eastl::allocator>>*)param_1,
                                        5);
                                cVar2 = core::stringtools::general::StringTools::CheckedParseInt(&local_34, pSVar4);
                                if (cVar2 != '\0') {
                                    pSVar4 = (StringView*)eastl::vector<
                                        StringView,
                                        eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                                    operator[](
                                        (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                          eastl::allocator>>*)param_1,
                                        6);
                                    cVar2 = core::stringtools::general::StringTools::CheckedParseInt(&local_30, pSVar4);
                                    if (cVar2 != '\0') {
                                        pSVar4 = (StringView*)eastl::vector<
                                            StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                      eastl::allocator>>::
                                        operator[](
                                            (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                              eastl::allocator>>*)
                                                param_1,
                                            7);
                                        cVar2 =
                                            core::stringtools::general::StringTools::CheckedParseInt(&local_2c, pSVar4);
                                        if (cVar2 != '\0') {
                                            eastl::string::basic_string(local_90);
                                            eastl::string::append_sprintf(
                                                (char*)local_90,
                                                "Setting Minimap Dot Style for category: %i to thickness %i, outline "
                                                "color %i, %i, %i, and dot color %i, %i, %i",
                                                (ulong)local_48, (ulong)local_44, (ulong)local_40, (ulong)local_3c,
                                                local_38, local_34, local_30, local_2c);
                                            iVar9 = local_3c * 256 + local_40 * 65536 + local_38;
                                            iVar7 = local_30 * 256 + local_34 * 65536 + local_2c;
                                            pMVar5 = (Minimap*)std::unique_ptr<minimap::Minimap,
                                                                               std::default_delete<minimap::Minimap>>::
                                                     operator->((
                                                         unique_ptr<minimap::Minimap,
                                                                    std::default_delete<minimap::Minimap>>*)(puVar1[1] +
                                                                                                             8152));
                                            pMVar5->SetDotStyle(local_48, iVar7, iVar9, local_44);
                                            this_00 = *(Client**)(this + 8);
                                            eastl::allocator::allocator(local_50, "EASTL basic_string");
                                            eastl::string::basic_string(local_70, "", local_50);
                                            this_00->AddChat(99, local_70, local_90);
                                            eastl::string::~basic_string(local_70);
                                            eastl::string::~basic_string(local_90);
                                            return;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            uVar8 = *puVar1;
            pcVar6 = "Unable to parse arguments for minimap outline";
        }
        console::Console::AddMessage(uVar8, 5, pcVar6);
    }

    // 0x100097330, 432 bytes, inline, placed by class name
    // ConsoleCommands::RegisterExperimentalCommands()::$_30::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterExperimentalCommands()::$_30::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterExperimentalCommands()::$_30::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        char cVar2;
        ulong uVar3;
        StringView* pSVar4;
        undefined8 uVar5;
        char* pcVar6;
        undefined8 uVar7;
        StringView local_180[2];
        int local_15c;
        Filename local_158[19];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        puVar1 = *(undefined8**)this;
        uVar3 = param_1->size();
        if (uVar3 < 2) {
            uVar7 = *puVar1;
            pcVar6 = "Missing arguments. Expected <lt>objID<gt> <lt>outputDir<gt>";
        } else {
            local_15c = 0;
            pSVar4 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
            cVar2 = core::stringtools::general::StringTools::CheckedParseInt(&local_15c, pSVar4);
            if (cVar2 != '\0') {
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    1);
                StringView::to_owned_string<eastl::string>(local_180);
                Filename::Filename(local_158, (basic_string*)local_180);
                local_180->~basic_string();
                cVar2 = local_158->IsDirectory();
                if (cVar2 == '\0') {
                    uVar7 = *puVar1;
                    eastl::vector<StringView,
                                  eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<StringView,
                                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)param_1,
                        0);
                    StringView::to_owned_string<eastl::string>(local_180);
                    uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    console::Console::AddMessage(uVar7, 5, "The directory %s does not exist", uVar5);
                    local_180->~basic_string();
                } else {
                    debug::ObjSpriteExporter::ExportObjSprite(local_15c, 512, 512, local_158);
                }
                local_158->~pair();
                goto LAB_100097472;
            }
            uVar7 = *puVar1;
            pcVar6 = "Unable to parse argument for Obj ID";
        }
        console::Console::AddMessage(uVar7, 5, pcVar6);
    LAB_100097472:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100097dd0, 368 bytes, inline, placed by class name
    // ConsoleCommands::RegisterExperimentalCommands()::$_31::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterExperimentalCommands()::$_31::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterExperimentalCommands()::$_31::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        undefined8 uVar2;
        long lVar4;
        undefined8 uVar5;
        StringView local_178[2];
        Filename local_158[19];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        puVar1 = *(undefined8**)this;
        lVar4 = param_1->size();
        if (lVar4 == 0) {
            console::Console::AddMessage(*puVar1, 5, "Missing output directory argument");
        } else {
            eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                           param_1,
                       0);
            StringView::to_owned_string<eastl::string>(local_178);
            Filename::Filename(local_158, (basic_string*)local_178);
            local_178->~basic_string();
            if (local_158->IsDirectory() == '\0') {
                uVar2 = *puVar1;
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
                StringView::to_owned_string<eastl::string>(local_178);
                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                console::Console::AddMessage(uVar2, 5, "The directory %s does not exist", uVar5);
                local_178->~basic_string();
            } else {
                debug::ObjSpriteExporter::ExportAllObjSprites(128, 128, local_158);
            }
            local_158->~pair();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100098830, 384 bytes, inline, placed by class name
    // ConsoleCommands::RegisterExperimentalCommands()::$_32::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterExperimentalCommands()::$_32::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterExperimentalCommands()::$_32::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        Client* this_00;
        long lVar2;
        LootTrackerSaveHandler* pLVar3;
        undefined8 uVar4;
        eastl::string local_88[32];
        basic_string local_68[32];
        StringView local_48[2];
        allocator local_28[8];

        puVar1 = *(undefined8**)this;
        lVar2 = param_1->size();
        if (lVar2 == 0) {
            console::Console::AddMessage(*puVar1, 5,
                                         "Unable to parse loot source, defaulting to \'Goblin (level-3)\'.");
            pLVar3 = (LootTrackerSaveHandler*)puVar1[1]->GetLootTrackerSaveHandler();
            new (local_68) eastl::allocator("EASTL basic_string");
            new (local_48) eastl::string("Goblin", local_68);
            pLVar3->AddSource(local_48, 0, 3, 0);
        } else {
            eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                           param_1,
                       0);
            StringView::to_owned_string<eastl::string>(local_48);
            pLVar3 = (LootTrackerSaveHandler*)puVar1[1]->GetLootTrackerSaveHandler();
            pLVar3->AddSource(local_48, 0, 0, 0);
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::string::basic_string(local_68, "Adding %s as Loot Source.", uVar4);
            this_00 = (Client*)puVar1[1];
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_88, "", local_28);
            this_00->AddChat(99, local_88, local_68);
            eastl::string::~basic_string(local_88);
            local_68->~basic_string();
        }
        local_48->~basic_string();
    }

    // 0x1000992a0, 272 bytes, inline, placed by class name
    // ConsoleCommands::RegisterExperimentalCommands()::$_33::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterExperimentalCommands()::$_33::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterExperimentalCommands()::$_33::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        Client* this_00;
        long lVar2;
        undefined8 uVar3;
        StringView local_80[2];
        basic_string local_60[32];
        eastl::string local_40[32];
        allocator local_20[8];

        puVar1 = *(undefined8**)this;
        lVar2 = param_1->size();
        if (lVar2 == 0) {
            console::Console::AddMessage(*puVar1, 5,
                                         "Unable to parse loot source, defaulting to \'Goblin (level-3)\'.");
        } else {
            eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                           param_1,
                       0);
            StringView::to_owned_string<eastl::string>(local_80);
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::string::basic_string(local_60, "Updating count for %s.", uVar3);
            this_00 = (Client*)puVar1[1];
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            eastl::string::basic_string(local_40, "", local_20);
            this_00->AddChat(99, local_40, local_60);
            eastl::string::~basic_string(local_40);
            local_60->~basic_string();
            local_80->~basic_string();
        }
    }

    // 0x100099ca0, 368 bytes, inline, placed by class name
    // ConsoleCommands::RegisterExperimentalCommands()::$_34::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterExperimentalCommands()::$_34::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterExperimentalCommands()::$_34::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        Client* this_00;
        long lVar2;
        undefined8 uVar3;
        eastl::string local_88[32];
        basic_string local_68[32];
        StringView local_48[2];
        allocator local_28[8];

        puVar1 = *(undefined8**)this;
        lVar2 = param_1->size();
        if (lVar2 == 0) {
            console::Console::AddMessage(*puVar1, 5,
                                         "Unable to parse loot source, defaulting to \'Goblin (level-3)\'.");
            uVar3 = puVar1[1]->GetLootTrackerSaveHandler();
            new (local_68) eastl::allocator("EASTL basic_string");
            new (local_48) eastl::string("Goblin (level-3)", local_68);
            loottracker::LootTrackerSaveHandler::PerformStringBindedOperation(uVar3, 0, local_48);
        } else {
            eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                           param_1,
                       0);
            StringView::to_owned_string<eastl::string>(local_48);
            uVar3 = puVar1[1]->GetLootTrackerSaveHandler();
            loottracker::LootTrackerSaveHandler::PerformStringBindedOperation(uVar3, 0, local_48);
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::string::basic_string(local_68, "Resetting %s count to 0.", uVar3);
            this_00 = (Client*)puVar1[1];
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_88, "", local_28);
            this_00->AddChat(99, local_88, local_68);
            eastl::string::~basic_string(local_88);
            local_68->~basic_string();
        }
        local_48->~basic_string();
    }

    // 0x10009a700, 288 bytes, inline, placed by class name
    // ConsoleCommands::RegisterExperimentalCommands()::$_35::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterExperimentalCommands()::$_35::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterExperimentalCommands()::$_35::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        Client* this_00;
        undefined4 uVar2;
        long lVar3;
        basic_string* pbVar4;
        undefined8 uVar5;
        StringView local_80[2];
        basic_string local_60[32];
        eastl::string local_40[32];
        allocator local_20[8];

        puVar1 = *(undefined8**)this;
        lVar3 = param_1->size();
        if (lVar3 == 0) {
            console::Console::AddMessage(*puVar1, 5, "Missing argument for source name lookup");
        } else {
            eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                           param_1,
                       0);
            StringView::to_owned_string<eastl::string>(local_80);
            pbVar4 = (basic_string*)puVar1[1]->GetLootTrackerSaveHandler();
            uVar2 = loottracker::LootTrackerSaveHandler::GetSourceCount(pbVar4);
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::string::basic_string(local_60, "Source %s has %d number of kills.", uVar5, uVar2);
            this_00 = (Client*)puVar1[1];
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            eastl::string::basic_string(local_40, "", local_20);
            this_00->AddChat(99, local_40, local_60);
            eastl::string::~basic_string(local_40);
            local_60->~basic_string();
            local_80->~basic_string();
        }
    }

    // 0x10009b110, 320 bytes, inline, placed by class name
    // ConsoleCommands::RegisterExperimentalCommands()::$_36::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterExperimentalCommands()::$_36::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterExperimentalCommands()::$_36::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        Client* this_00;
        int iVar3;
        long lVar4;
        StringView* pSVar5;
        undefined8 uVar6;
        char* pcVar7;
        eastl::string local_88[32];
        basic_string local_68[32];
        eastl::string local_48[32];
        allocator local_28[12];
        int local_1c;

        puVar1 = *(undefined8**)this;
        lVar4 = param_1->size();
        if (lVar4 == 0) {
            uVar6 = *puVar1;
            pcVar7 = "Missing argument for source name lookup";
        } else {
            local_1c = 0;
            pSVar5 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
            if (core::stringtools::general::StringTools::CheckedParseInt(&local_1c, pSVar5) != '\0') {
                iVar3 = puVar1[1]->GetLootTrackerSaveHandler();
                local_88->GetSourceNameById(iVar3);
                uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::string::basic_string(local_68, "Source Name found: %s", uVar6);
                this_00 = (Client*)puVar1[1];
                eastl::allocator::allocator(local_28, "EASTL basic_string");
                eastl::string::basic_string(local_48, "", local_28);
                this_00->AddChat(99, local_48, local_68);
                eastl::string::~basic_string(local_48);
                local_68->~basic_string();
                eastl::string::~basic_string(local_88);
                return;
            }
            uVar6 = *puVar1;
            pcVar7 = "Unable to parse argument for source name lookup";
        }
        console::Console::AddMessage(uVar6, 5, pcVar7);
    }

    // 0x10009bb40, 576 bytes, inline, placed by class name
    // ConsoleCommands::RegisterExperimentalCommands()::$_37::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterExperimentalCommands()::$_37::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterExperimentalCommands()::$_37::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        Client* this_00;
        undefined8 uVar2;
        char cVar3;
        undefined4 uVar4;
        int iVar5;
        long lVar6;
        StringView* pSVar7;
        LootTrackerSaveHandler* pLVar8;
        undefined8 uVar9;
        basic_string local_a8[32];
        allocator local_88[32];
        eastl::string local_68[32];
        long local_48;
        int local_40;
        LootOrder local_3c[4];
        int local_38;
        int local_34;

        puVar1 = *(undefined8**)this;
        lVar6 = param_1->size();
        if (lVar6 == 3) {
            pSVar7 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
            cVar3 = core::stringtools::general::StringTools::CheckedParseInt(&local_38, pSVar7);
            if (cVar3 != '\0') {
                pSVar7 = (StringView*)eastl::vector<
                    StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    1);
                cVar3 = core::stringtools::general::StringTools::CheckedParseInt(&local_34, pSVar7);
                if (cVar3 != '\0') {
                    pSVar7 = (StringView*)eastl::vector<
                        StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<StringView,
                                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)param_1,
                        2);
                    cVar3 = core::stringtools::general::StringTools::CheckedParseInt(&local_40, pSVar7);
                    if ((((cVar3 != '\0') && (-1 < local_38)) && (-1 < local_34)) &&
                        (cVar3 = loottracker::ParseIntAsLootOrder(local_40, local_3c), cVar3 != '\0')) {
                        pLVar8 = (LootTrackerSaveHandler*)puVar1[1]->GetLootTrackerSaveHandler();
                        uVar4 = pLVar8->GetCountOfSortedResultIds(local_38, local_34, local_3c);
                        eastl::string::basic_string(local_a8, "Sources orded: %i", uVar4);
                        this_00 = (Client*)puVar1[1];
                        eastl::allocator::allocator(local_88, "EASTL basic_string");
                        eastl::string::basic_string(local_68, "", local_88);
                        this_00->AddChat(99, local_68, local_a8);
                        eastl::string::~basic_string(local_68);
                        puVar1[1]->GetLootTrackerSaveHandler();
                        local_68->GetOrderedResultIds();
                        lVar6 = local_68->HeapBeginPtr();
                        local_48 = local_68->end();
                        if (lVar6 != local_48) {
                            do {
                                uVar2 = *puVar1;
                                iVar5 = puVar1[1]->GetLootTrackerSaveHandler();
                                local_88->GetSourceNameById(iVar5);
                                uVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                console::Console::AddMessage(uVar2, 2, uVar9);
                                local_88->~basic_string();
                                lVar6 = lVar6 + 4;
                            } while (lVar6 != local_48);
                        }
                        local_68->~vector();
                        local_a8->~basic_string();
                        return;
                    }
                }
            }
        }
        console::Console::AddMessage(*puVar1, 5, "Invalid arguments.");
    }

    // 0x10009c670, 480 bytes, inline, placed by class name
    // ConsoleCommands::RegisterExperimentalCommands()::$_38::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterExperimentalCommands()::$_38::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterExperimentalCommands()::$_38::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        Client* this_00;
        long lVar2;
        StringView* pSVar3;
        LootTrackerSaveHandler* pLVar4;
        undefined8 uVar5;
        SourceItem local_e8;
        basic_string local_b8[32];
        eastl::string local_98[32];
        SourceItem local_78;
        StringView local_48[2];
        allocator local_28[8];
        int local_20;
        int local_1c;

        puVar1 = *(undefined8**)this;
        lVar2 = param_1->size();
        if (lVar2 == 3) {
            eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                           param_1,
                       0);
            StringView::to_owned_string<eastl::string>(local_48);
            pSVar3 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    1);
            core::stringtools::general::StringTools::CheckedParseInt(&local_20, pSVar3);
            pSVar3 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    2);
            core::stringtools::general::StringTools::CheckedParseInt(&local_1c, pSVar3);
            new (&local_78) loottracker::SourceItem();
            eastl::string::operator=((eastl::string*)&local_78, (basic_string*)local_48);
            local_78.field_32._4_4_ = local_20;
            local_78.field_40 = local_1c;
            pLVar4 = (LootTrackerSaveHandler*)puVar1[1]->GetLootTrackerSaveHandler();
            new (&local_e8) loottracker::SourceItem(&local_78);
            pLVar4->UpsertLoot(&local_e8);
            local_e8.~hash_node();
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::string::basic_string(
                local_b8, "Adding Item to Loot table with following params: Origin: %s, ObjectID: %d, Count: %d", uVar5,
                local_20, local_1c);
            this_00 = (Client*)puVar1[1];
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_98, "", local_28);
            this_00->AddChat(99, local_98, local_b8);
            eastl::string::~basic_string(local_98);
            local_b8->~basic_string();
            local_78.~hash_node();
            local_48->~basic_string();
        } else {
            console::Console::AddMessage(*puVar1, 5,
                                         "Too few or too many arguments were passed. There needs to be "
                                         "[\"SourceName\"], [ObjectID], and [Count]");
        }
    }

    // 0x10009d140, 384 bytes, inline, placed by class name
    // ConsoleCommands::RegisterExperimentalCommands()::$_39::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterExperimentalCommands()::$_39::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterExperimentalCommands()::$_39::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        Client* this_00;
        long lVar2;
        StringView* pSVar3;
        basic_string* pbVar4;
        undefined8 uVar5;
        StringView local_b8[2];
        hash_node<eastl::string, false> local_98[36];
        undefined4 local_74;
        undefined4 local_70;
        basic_string local_68[32];
        eastl::string local_48[32];
        allocator local_28[12];
        int local_1c;

        puVar1 = *(undefined8**)this;
        lVar2 = param_1->size();
        if (lVar2 == 2) {
            eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                           param_1,
                       0);
            StringView::to_owned_string<eastl::string>(local_b8);
            pSVar3 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    1);
            core::stringtools::general::StringTools::CheckedParseInt(&local_1c, pSVar3);
            pbVar4 = (basic_string*)puVar1[1]->GetLootTrackerSaveHandler();
            local_98->GetSourceLootItemByName(pbVar4, (int)local_b8);
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::string::basic_string(local_68, "The source item you pull from %s, is objectId: %d, count: %d.",
                                        uVar5, local_74, local_70);
            this_00 = (Client*)puVar1[1];
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "", local_28);
            this_00->AddChat(99, local_48, local_68);
            eastl::string::~basic_string(local_48);
            local_68->~basic_string();
            eastl::hash_node<eastl::string, false>::~hash_node(local_98);
            local_b8->~basic_string();
        } else {
            console::Console::AddMessage(*puVar1, 5, "Too few or too many arguments were passed.");
        }
    }

    // 0x10009dbb0, 288 bytes, inline, placed by class name
    // ConsoleCommands::RegisterExperimentalCommands()::$_40::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterExperimentalCommands()::$_40::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterExperimentalCommands()::$_40::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        Client* this_00;
        undefined4 uVar2;
        long lVar3;
        basic_string* pbVar4;
        StringView local_80[2];
        basic_string local_60[32];
        eastl::string local_40[32];
        allocator local_20[8];

        puVar1 = *(undefined8**)this;
        lVar3 = param_1->size();
        if (lVar3 == 0) {
            console::Console::AddMessage(*puVar1, 5, "Missing argument for loot count lookup.");
        } else {
            eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                           param_1,
                       0);
            StringView::to_owned_string<eastl::string>(local_80);
            pbVar4 = (basic_string*)puVar1[1]->GetLootTrackerSaveHandler();
            uVar2 = loottracker::LootTrackerSaveHandler::GetLootItemsBySourceName(pbVar4);
            eastl::string::basic_string(local_60, "The amount of distinct loot from this source: %d", uVar2);
            this_00 = (Client*)puVar1[1];
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            eastl::string::basic_string(local_40, "", local_20);
            this_00->AddChat(99, local_40, local_60);
            eastl::string::~basic_string(local_40);
            local_60->~basic_string();
            local_80->~basic_string();
        }
    }

    // 0x10009e5c0, 288 bytes, inline, placed by class name
    // ConsoleCommands::RegisterExperimentalCommands()::$_41::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterExperimentalCommands()::$_41::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterExperimentalCommands()::$_41::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        Client* this_00;
        long lVar2;
        undefined8 uVar3;
        StringView local_80[2];
        basic_string local_60[32];
        eastl::string local_40[32];
        allocator local_20[8];

        puVar1 = *(undefined8**)this;
        lVar2 = param_1->size();
        if (lVar2 == 0) {
            console::Console::AddMessage(*puVar1, 5, "Missing argument for ignored item.");
        } else {
            eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                           param_1,
                       0);
            StringView::to_owned_string<eastl::string>(local_80);
            uVar3 = puVar1[1]->GetLootTrackerSaveHandler();
            loottracker::LootTrackerSaveHandler::PerformStringBindedOperation(uVar3, 6, local_80);
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::string::basic_string(local_60, "Added %s as an ignored item.", uVar3);
            this_00 = (Client*)puVar1[1];
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            eastl::string::basic_string(local_40, "", local_20);
            this_00->AddChat(99, local_40, local_60);
            eastl::string::~basic_string(local_40);
            local_60->~basic_string();
            local_80->~basic_string();
        }
    }

    // 0x10009efd0, 288 bytes, inline, placed by class name
    // ConsoleCommands::RegisterExperimentalCommands()::$_42::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterExperimentalCommands()::$_42::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterExperimentalCommands()::$_42::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        Client* this_00;
        long lVar2;
        undefined8 uVar3;
        StringView local_80[2];
        basic_string local_60[32];
        eastl::string local_40[32];
        allocator local_20[8];

        puVar1 = *(undefined8**)this;
        lVar2 = param_1->size();
        if (lVar2 == 0) {
            console::Console::AddMessage(*puVar1, 5, "Missing argument for removing ignored item.");
        } else {
            eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                           param_1,
                       0);
            StringView::to_owned_string<eastl::string>(local_80);
            uVar3 = puVar1[1]->GetLootTrackerSaveHandler();
            loottracker::LootTrackerSaveHandler::PerformStringBindedOperation(uVar3, 7, local_80);
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::string::basic_string(local_60, "Removed %s as an ignored item.", uVar3);
            this_00 = (Client*)puVar1[1];
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            eastl::string::basic_string(local_40, "", local_20);
            this_00->AddChat(99, local_40, local_60);
            eastl::string::~basic_string(local_40);
            local_60->~basic_string();
            local_80->~basic_string();
        }
    }

    // 0x10009f9e0, 384 bytes, inline, placed by class name
    // ConsoleCommands::RegisterExperimentalCommands()::$_43::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterExperimentalCommands()::$_43::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterExperimentalCommands()::$_43::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        Client* this_00;
        long lVar2;
        undefined8 uVar3;
        StringView local_88[2];
        eastl::string local_68[32];
        allocator local_48[8];
        StringView local_40[2];

        puVar1 = *(undefined8**)this;
        lVar2 = param_1->size();
        if (lVar2 == 0) {
            console::Console::AddMessage(*puVar1, 5, "Missing argument for clear source.");
        } else {
            eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                           param_1,
                       0);
            StringView::to_owned_string<eastl::string>(local_88);
            uVar3 = puVar1[1]->GetLootTrackerSaveHandler();
            eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                           param_1,
                       0);
            StringView::to_owned_string<eastl::string>(local_40);
            loottracker::LootTrackerSaveHandler::PerformStringBindedOperation(uVar3, 2, local_40);
            local_40->~basic_string();
            uVar3 = puVar1[1]->GetLootTrackerSaveHandler();
            eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                           param_1,
                       0);
            StringView::to_owned_string<eastl::string>(local_40);
            loottracker::LootTrackerSaveHandler::PerformStringBindedOperation(uVar3, 0, local_40);
            local_40->~basic_string();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::string::basic_string(local_40, "Resetting tracking for %s.", uVar3);
            this_00 = (Client*)puVar1[1];
            eastl::allocator::allocator(local_48, "EASTL basic_string");
            eastl::string::basic_string(local_68, "", local_48);
            this_00->AddChat(99, local_68, local_40);
            eastl::string::~basic_string(local_68);
            local_40->~basic_string();
            local_88->~basic_string();
        }
    }

    // 0x1000a0450, 624 bytes, inline, placed by class name
    // ConsoleCommands::RegisterExperimentalCommands()::$_44::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterExperimentalCommands()::$_44::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterExperimentalCommands()::$_44::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        int iVar2;
        int iVar3;
        long lVar4;
        basic_string* pbVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        ulong uVar8;
        eastl::string local_d8[32];
        undefined1 local_b8[36];
        undefined4 local_94;
        undefined4 local_90;
        eastl::string local_88[32];
        StringView local_68[2];
        ulong local_48;
        int local_40;
        int local_3c;
        ulong local_38;

        puVar1 = *(undefined8**)this;
        lVar4 = param_1->size();
        if (lVar4 == 1) {
            eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                           param_1,
                       0);
            StringView::to_owned_string<eastl::string>(local_68);
            pbVar5 = (basic_string*)puVar1[1]->GetLootTrackerSaveHandler();
            iVar2 = loottracker::LootTrackerSaveHandler::GetSourceCount(pbVar5);
            if (iVar2 == -1) {
                console::Console::AddMessage(*puVar1, 5, "Cannot find source!");
            } else if (0 < iVar2) {
                uVar8 = 1;
                local_3c = iVar2;
                do {
                    pbVar5 = (basic_string*)puVar1[1]->GetLootTrackerSaveHandler();
                    local_48 = uVar8;
                    iVar2 = loottracker::LootTrackerSaveHandler::GetNextSourceId(pbVar5, (int)local_68);
                    iVar3 = puVar1[1]->GetLootTrackerSaveHandler();
                    local_38 = loottracker::LootTrackerSaveHandler::GetLootItemsBySourceId(iVar3);
                    uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    eastl::string::basic_string(local_88, "Source - %s, ID - %d:", uVar6, iVar2);
                    uVar6 = *puVar1;
                    local_40 = iVar2;
                    uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    console::Console::AddMessage(uVar6, 1, uVar7);
                    if (0 < (int)local_38) {
                        local_38 = (ulong)(uint) - (int)local_38;
                        iVar2 = 1;
                        do {
                            iVar3 = puVar1[1]->GetLootTrackerSaveHandler();
                            local_b8->GetSourceLootItemById(iVar3, local_40);
                            eastl::string::basic_string(local_d8, "Item - ObjId: %d, Count: %d", local_94, local_90);
                            uVar6 = *puVar1;
                            uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            console::Console::AddMessage(uVar6, 1, uVar7);
                            eastl::string::~basic_string(local_d8);
                            local_b8->~hash_node();
                            iVar3 = (int)local_38 + iVar2;
                            iVar2 = iVar2 + 1;
                        } while (iVar3 != 0);
                    }
                    eastl::string::~basic_string(local_88);
                    uVar8 = (ulong)((int)local_48 + 1);
                } while ((int)local_48 != local_3c);
            }
            local_68->~basic_string();
        } else {
            console::Console::AddMessage(*puVar1, 5, "Please specify only the source you want to list out");
        }
    }

    // 0x1000a0fb0, 512 bytes, inline, placed by class name
    // ConsoleCommands::RegisterExperimentalCommands()::$_45::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterExperimentalCommands()::$_45::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterExperimentalCommands()::$_45::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        undefined8 uVar2;
        ulong uVar4;
        undefined8 uVar5;
        OpGroup local_310;
        OpGroup local_1a8;
        StringView local_40[2];

        puVar1 = *(undefined8**)this;
        uVar4 = param_1->size();
        if (uVar4 < 2) {
            console::Console::AddMessage(*puVar1, 5,
                                         "Missing arguments. Expected <lt>pattern string<gt> <lt>opgroup string<gt>");
        } else {
            eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                           param_1,
                       0);
            StringView::to_owned_string<eastl::string>((StringView*)&local_1a8);
            local_310.Create((basic_string*)&local_1a8, false);
            local_1a8.~basic_string();
            eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                           param_1,
                       1);
            StringView::to_owned_string<eastl::string>(local_40);
            local_1a8.Create(local_40, true);
            local_40->~basic_string();
            uVar2 = *puVar1;
            local_40->ToString();
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            console::Console::AddMessage(uVar2, 1, "Pattern was parsed as : [% s] ", uVar5);
            local_40->~basic_string();
            uVar2 = *puVar1;
            local_40->ToString();
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            console::Console::AddMessage(uVar2, 1, "Value was parsed as: [%s]", uVar5);
            local_40->~basic_string();
            if (local_1a8.MatchPattern(&local_310, false) == '\0') {
                console::Console::AddMessage(*puVar1, 4, "No match");
            } else {
                console::Console::AddMessage(*puVar1, 2, "Match!");
            }
            local_1a8.~OpGroup();
            local_310.~OpGroup();
        }
    }

    // 0x1000a1aa0, 272 bytes, inline, placed by class name
    // ConsoleCommands::RegisterExperimentalCommands()::$_46::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterExperimentalCommands()::$_46::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterExperimentalCommands()::$_46::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        long lVar2;
        HighlightManager* pHVar3;
        OpGroup local_1a8;
        StringView local_40[2];

        puVar1 = *(undefined8**)(this + 8);
        lVar2 = param_1->size();
        if (lVar2 == 1) {
            eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                           param_1,
                       0);
            StringView::to_owned_string<eastl::string>(local_40);
            local_1a8.Create(local_40, false);
            local_40->~basic_string();
            pHVar3 = (HighlightManager*)(*(Client**)this)->GetHighlightManager();
            pHVar3->ConfigureChannel(8, 0, 0, 3, 128, 69);
            pHVar3 = (HighlightManager*)(*(Client**)this)->GetHighlightManager();
            pHVar3->AddOpGroupHighlight(&local_1a8, 0, false);
            local_1a8.~OpGroup();
        } else {
            console::Console::AddMessage(*puVar1, 5, "Missing arguments. Expected <lt>opgroup string<gt>");
        }
    }

    // 0x1000a24a0, 576 bytes, inline, placed by class name
    // ConsoleCommands::RegisterExperimentalCommands()::$_47::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterExperimentalCommands()::$_47::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterExperimentalCommands()::$_47::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        int iVar2;
        char cVar3;
        bool bVar4;
        long lVar5;
        StringView* pSVar6;
        int* piVar7;
        char* pcVar8;
        undefined8 uVar9;
        int local_48;
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34[3];

        puVar1 = *(undefined8**)(this + 8);
        lVar5 = param_1->size();
        if (lVar5 == 6) {
            pSVar6 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
            cVar3 = core::stringtools::general::StringTools::CheckedParseInt(&local_48, pSVar6);
            if (cVar3 != '\0') {
                pSVar6 = (StringView*)eastl::vector<
                    StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    1);
                cVar3 = core::stringtools::general::StringTools::CheckedParseInt(&local_44, pSVar6);
                if (cVar3 != '\0') {
                    pSVar6 = (StringView*)eastl::vector<
                        StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<StringView,
                                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)param_1,
                        2);
                    cVar3 = core::stringtools::general::StringTools::CheckedParseInt(&local_40, pSVar6);
                    if (cVar3 != '\0') {
                        pSVar6 = (StringView*)eastl::vector<
                            StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<StringView,
                                           eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                       param_1,
                                   3);
                        cVar3 = core::stringtools::general::StringTools::CheckedParseInt(&local_3c, pSVar6);
                        if (cVar3 != '\0') {
                            pSVar6 = (StringView*)eastl::vector<
                                StringView,
                                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<StringView,
                                        eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    param_1,
                                4);
                            cVar3 = core::stringtools::general::StringTools::CheckedParseInt(&local_38, pSVar6);
                            if (cVar3 != '\0') {
                                pSVar6 = (StringView*)
                                    eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                            eastl::allocator>>::
                                    operator[](
                                        (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                          eastl::allocator>>*)param_1,
                                        5);
                                cVar3 = core::stringtools::general::StringTools::CheckedParseInt(local_34, pSVar6);
                                if (cVar3 != '\0') {
                                    bVar4 = ((*(long*)this + 52016))->operator_cast_to_bool();
                                    if (bVar4) {
                                        lVar5 = shared_ptr<ClientPlayer>::operator->(
                                            (shared_ptr<ClientPlayer>*)(*(long*)this + 52016));
                                        *(int*)(lVar5 + 548) = local_48;
                                        lVar5 = shared_ptr<ClientPlayer>::operator->(
                                            (shared_ptr<ClientPlayer>*)(*(long*)this + 52016));
                                        *(int*)(lVar5 + 552) = local_44;
                                        local_34[1] = 4294967295;
                                        local_34[2] = 63;
                                        piVar7 = std::clamp<int>(&local_40, local_34 + 1, local_34 + 2);
                                        iVar2 = *piVar7;
                                        lVar5 = shared_ptr<ClientPlayer>::operator->(
                                            (shared_ptr<ClientPlayer>*)(*(long*)this + 52016));
                                        *(char*)(lVar5 + 556) = (char)iVar2;
                                        local_34[1] = 4294967295;
                                        local_34[2] = 7;
                                        piVar7 = std::clamp<int>(&local_3c, local_34 + 1, local_34 + 2);
                                        iVar2 = *piVar7;
                                        lVar5 = shared_ptr<ClientPlayer>::operator->(
                                            (shared_ptr<ClientPlayer>*)(*(long*)this + 52016));
                                        *(char*)(lVar5 + 557) = (char)iVar2;
                                        local_34[1] = 4294967295;
                                        local_34[2] = 127;
                                        piVar7 = std::clamp<int>(&local_38, local_34 + 1, local_34 + 2);
                                        iVar2 = *piVar7;
                                        lVar5 = shared_ptr<ClientPlayer>::operator->(
                                            (shared_ptr<ClientPlayer>*)(*(long*)this + 52016));
                                        *(char*)(lVar5 + 558) = (char)iVar2;
                                        local_34[1] = 0;
                                        local_34[2] = 128;
                                        piVar7 = std::clamp<int>(local_34, local_34 + 1, local_34 + 2);
                                        iVar2 = *piVar7;
                                        lVar5 = shared_ptr<ClientPlayer>::operator->(
                                            (shared_ptr<ClientPlayer>*)(*(long*)this + 52016));
                                        *(char*)(lVar5 + 559) = (char)iVar2;
                                        return;
                                    }
                                    uVar9 = *puVar1;
                                    pcVar8 = "Could not find player to tint.";
                                    goto LAB_1000a26b1;
                                }
                            }
                        }
                    }
                }
            }
            uVar9 = *puVar1;
            pcVar8 = "Invalid arguments. Expected (start, end, hue, saturation, lightness, weight) as integers";
        } else {
            uVar9 = *puVar1;
            pcVar8 = "Missing arguments. Expected (start, end, hue, saturation, lightness, weight) as integers";
        }
    LAB_1000a26b1:
        console::Console::AddMessage(uVar9, 5, pcVar8);
    }

    // 0x1000a2e50, 32 bytes, inline, placed by class name
    // ConsoleCommands::RegisterPublicCommands()::$_48::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterPublicCommands()::$_48::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterPublicCommands()::$_48::operator()(fixed_vector* param_1) {
        Client* this_00;

        this_00 = (Client*)Client::Instance();
        this_00->ToggleRenderSelf();
    }

    // 0x1000a35d0, 32 bytes, inline, placed by class name
    // ConsoleCommands::RegisterPublicCommands()::$_49::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterPublicCommands()::$_49::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterPublicCommands()::$_49::operator()(fixed_vector* param_1) {
        Client* this_00;

        this_00 = (Client*)Client::Instance();
        this_00->ToggleMouseOverText();
    }

    // 0x1000a3d50, 32 bytes, inline, placed by class name
    // ConsoleCommands::RegisterPublicCommands()::$_50::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterPublicCommands()::$_50::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterPublicCommands()::$_50::operator()(fixed_vector* param_1) {
        Client* this_00;

        this_00 = (Client*)Client::Instance();
        this_00->ToggleAntiDrag();
    }

    // 0x1000a4e30, 32 bytes, inline, placed by class name
    // ConsoleCommands::RegisterPublicCommands()::$_51::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterPublicCommands()::$_51::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterPublicCommands()::$_51::operator()(fixed_vector* param_1) {
        long lVar1;
        DeviceOptions* this_00;

        lVar1 = Client::Instance();
        this_00 =
            (DeviceOptions*)
                std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                    (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)(lVar1 + 8376));
        this_00->ToggleDisplayFps();
    }

    // 0x1000a55f0, 32 bytes, inline, placed by class name
    // ConsoleCommands::RegisterPublicCommands()::$_52::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterPublicCommands()::$_52::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterPublicCommands()::$_52::operator()(fixed_vector* param_1) {
        Client* this_00;

        this_00 = (Client*)Client::Instance();
        this_00->ReloadHighlights();
    }

    // 0x1000a5d70, 32 bytes, inline, placed by class name
    // ConsoleCommands::RegisterPublicCommands()::$_53::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterPublicCommands()::$_53::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterPublicCommands()::$_53::operator()(fixed_vector* param_1) {
        Client* this_00;

        this_00 = (Client*)Client::Instance();
        this_00->RedrawMinimap();
    }

    // 0x1000a6670, 1312 bytes, inline, placed by class name
    // ConsoleCommands::RegisterPublicCommands()::$_54::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterPublicCommands()::$_54::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterPublicCommands()::$_54::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        char cVar2;
        long lVar3;
        StringView* pSVar4;
        ulong uVar5;
        DeviceOptions* this_00;
        Client* this_01;
        char* pcVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        uchar* extraout_RDX;
        uchar* extraout_RDX_00;
        uchar* extraout_RDX_01;
        uchar* extraout_RDX_02;
        StringView SVar9;
        StringView SVar10;
        StringView SVar11;
        StringView SVar12;
        StringView local_340;
        StringView local_330;
        StringView local_320;
        StringView local_310;
        Error local_300[8];
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>> local_2e0[32];
        eastl::string local_2c0[32];
        undefined1 local_2a0[312];
        StringView local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        puVar1 = *(undefined8**)this;
        lVar3 = param_1->size();
        if (lVar3 == 0) {
            lVar3 = Client::Instance();
            this_00 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)(lVar3 + 8376));
            this_00->ToggleDisplayBuildInfo();
            goto LAB_1000a6ac0;
        }
        lVar3 = param_1->size();
        if (lVar3 != 1) {
            console::Console::AddMessage(*puVar1, 5,
                                         "Unrecognized number of arguments. Type \"? buildinfo\" for more info.");
            goto LAB_1000a6ac0;
        }
        Client::Instance();
        local_2e0->GetBuildInfoPrettyPrint();
        pSVar4 = (StringView*)eastl::
            vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                    param_1,
                0);
        StringView::StringView<5ul>(&local_340, "copy");
        SVar9.field_8 = extraout_RDX;
        SVar9.field_0 = (ulong)&local_340;
        cVar2 = StringView::operator==(pSVar4, SVar9);
        if (cVar2 == '\0') {
            pSVar4 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
            StringView::StringView<7ul>(&local_330, "export");
            SVar10.field_8 = extraout_RDX_00;
            SVar10.field_0 = (ulong)&local_330;
            cVar2 = StringView::operator==(pSVar4, SVar10);
            if (cVar2 != '\0')
                goto LAB_1000a6739;
            pSVar4 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
            StringView::StringView<6ul>(&local_310, "print");
            SVar12.field_8 = extraout_RDX_02;
            SVar12.field_0 = (ulong)&local_310;
            cVar2 = StringView::operator==(pSVar4, SVar12);
            uVar8 = *puVar1;
            if (cVar2 == '\0') {
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
                StringView::to_owned_string<eastl::string>(local_168);
                uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                console::Console::AddMessage(uVar8, 5, "Unrecognized argument: %s", uVar7);
                local_168->~basic_string();
            } else {
                uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                console::Console::AddMessage(uVar8, 2, uVar7);
            }
        } else {
        LAB_1000a6739:
            while (true) {
                lVar3 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::find(local_2e0,
                                                                                                             "<br>", 0);
                if (lVar3 == -1)
                    break;
                uVar5 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::find(local_2e0,
                                                                                                             "<br>", 0);
                local_2e0->replace(uVar5, 4, "\n");
            }
            pSVar4 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
            StringView::StringView<5ul>(&local_320, "copy");
            SVar11.field_8 = extraout_RDX_01;
            SVar11.field_0 = (ulong)&local_320;
            cVar2 = StringView::operator==(pSVar4, SVar11);
            if (cVar2 == '\0') {
                new ((local_2a0 + 8)) Filename("logs");
                Filename::operator/((Filename*)local_168, local_2a0 + 8);
                ((local_2a0 + 8))->~pair();
                new ((local_2a0 + 8)) Filename();
                new (local_2a0) callstack::Callstack();
                this_01 = (Client*)Client::Instance();
                pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                cVar2 = this_01->WriteToPublicStorage(local_168, (Filename*)(local_2a0 + 8), pcVar6, local_2a0);
                if (cVar2 == '\0') {
                    eastl::string::basic_string(local_2c0);
                    uVar8 = local_168->GetName();
                    local_300->GetErrorString();
                    uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    eastl::string::append_sprintf((char*)local_2c0, "Cannot export build info to %s: %s", uVar8, uVar7);
                    local_300->~basic_string();
                    uVar8 = *puVar1;
                    uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    console::Console::AddMessage(uVar8, 5, uVar7);
                    console::Console::AddMessage(*puVar1, 5,
                                                 "Verify that sufficient permission has been granted to write to "
                                                 "external storage, then run the command again.");
                    console::Console::AddMessage(*puVar1, 5,
                                                 "If this fails, verify that the listed directory path exists.");
                } else {
                    new (local_300) eastl::allocator("EASTL basic_string");
                    eastl::string::basic_string(local_2c0, "Build info exported to: ", (allocator*)local_300);
                    pcVar6 = (char*)((local_2a0 + 8))->GetName();
                    eastl::string::append(local_2c0, pcVar6);
                    uVar8 = *puVar1;
                    uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    console::Console::AddMessage(uVar8, 2, uVar7);
                }
                eastl::string::~basic_string(local_2c0);
                ((local_2a0 + 8))->~pair();
                local_168->~pair();
            } else {
                new (local_168) Clipboard();
                Clipboard::SetText<eastl::basic_string<char, BucketAllocatorEASTL>>((basic_string*)local_168);
                console::Console::AddMessage(*puVar1, 2, "Build info copied to clipboard.");
                local_168->~Clipboard();
            }
        }
        local_2e0->~basic_string();
    LAB_1000a6ac0:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1000a74e0, 144 bytes, inline, placed by class name
    // ConsoleCommands::RegisterPublicCommands()::$_55::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterPublicCommands()::$_55::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterPublicCommands()::$_55::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        int iVar2;
        long lVar3;
        StringView local_38[2];

        puVar1 = *(undefined8**)this;
        lVar3 = param_1->size();
        if (lVar3 == 0) {
            console::Console::AddMessage(*puVar1, 5,
                                         "forceloginfailure takes one argument (enum of the error to force)");
        } else {
            eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                           param_1,
                       0);
            StringView::to_owned_string<eastl::string>(local_38);
            iVar2 = eastl::stoi<eastl::string>((basic_string*)local_38, 10);
            lVar3 = Client::Instance();
            *(int*)(lVar3 + 54712) = iVar2;
            local_38->~basic_string();
        }
    }

    // 0x1000a7ce0, 32 bytes, inline, placed by class name
    // ConsoleCommands::RegisterPublicCommands()::$_56::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterPublicCommands()::$_56::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterPublicCommands()::$_56::operator()(fixed_vector* param_1) {
        long lVar1;

        lVar1 = Client::Instance();
        *(undefined1*)(lVar1 + 54716) = 1;
    }

    // 0x1000a85e0, 624 bytes, inline, placed by class name
    // ConsoleCommands::RegisterPublicCommands()::$_57::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterPublicCommands()::$_57::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterPublicCommands()::$_57::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        undefined8 uVar2;
        bool bVar4;
        undefined1 uVar5;
        int iVar6;
        long lVar7;
        StringView* this_00;
        ulong uVar8;
        char* pcVar9;
        long lVar10;
        undefined8 uVar11;
        uchar* extraout_RDX;
        uint uVar12;
        StringView SVar13;
        StringView local_60;
        StringView local_50[2];
        int local_2c;

        puVar1 = *(undefined8**)this;
        lVar7 = param_1->size();
        if (lVar7 == 0) {
            lVar7 = ((puVar1[1] + 52872))->StartDownloadIfNeeded();
            console::Console::AddMessage(*puVar1, 2, "price cache status %d", *(undefined4*)(lVar7 + 8));
        } else {
            this_00 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
            StringView::StringView<5ul>(&local_60, "load");
            SVar13.field_8 = extraout_RDX;
            SVar13.field_0 = (ulong)&local_60;
            if (StringView::operator==(this_00, SVar13) == '\0') {
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
                StringView::to_owned_string<eastl::string>(local_50);
                pcVar9 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                iVar6 = _atoi(pcVar9);
                local_50->~basic_string();
                if (0 < iVar6) {
                    local_2c = -1;
                    lVar7 = ((puVar1[1] + 52872))->GetMarketPriceForObj(&local_2c, iVar6);
                    local_50->List(iVar6);
                    bVar4 = local_50->operator_cast_to_bool();
                    uVar12 = 4294967295;
                    if (bVar4) {
                        lVar10 = shared_ptr<configdecoder::ObjType>::operator->(
                            (shared_ptr<configdecoder::ObjType>*)local_50);
                        uVar12 = (uint) * (byte*)(lVar10 + 824);
                    }
                    local_50->~shared_ptr();
                    console::Console::AddMessage(*puVar1, 2, "price cache for objId %d = %d (%d). Enabled = %d", iVar6,
                                                 local_2c, *(undefined4*)(lVar7 + 8), uVar12);
                    return;
                }
                uVar2 = *puVar1;
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
                StringView::to_owned_string<eastl::string>(local_50);
                uVar11 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                console::Console::AddMessage(uVar2, 5, "Could not understand objid %s", uVar11);
            } else {
                uVar8 = param_1->size();
                if (uVar8 < 2) {
                    console::Console::AddMessage(*puVar1, 5, "Must specify file to load");
                    return;
                }
                lVar7 = puVar1[1];
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    1);
                StringView::to_owned_string<eastl::string>(local_50);
                uVar5 = ((lVar7 + 52872))->Load(local_50);
                local_50->~basic_string();
                uVar2 = *puVar1;
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    1);
                StringView::to_owned_string<eastl::string>(local_50);
                uVar11 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                console::Console::AddMessage(uVar2, 2, "Attempted to load %s: %d", uVar11, uVar5);
            }
            local_50->~basic_string();
        }
    }

    // 0x1000a8fc0, 208 bytes, inline, placed by class name
    // ConsoleCommands::RegisterPublicCommands()::$_58::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterPublicCommands()::$_58::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterPublicCommands()::$_58::operator()(fixed_vector* param_1) {
        Client* this_00;
        byte* pbVar1;
        eastl::string local_70[32];
        allocator local_50[8];
        eastl::string local_48[32];
        allocator local_28[8];

        this_00 = (Client*)Client::Instance();
        pbVar1 = (byte*)std::unique_ptr<RouteHighlighter, std::default_delete<RouteHighlighter>>::operator->(
            (unique_ptr<RouteHighlighter, std::default_delete<RouteHighlighter>>*)&this_00->field_19200);
        *pbVar1 = *pbVar1 ^ 1;
        eastl::allocator::allocator(local_50, "EASTL basic_string");
        eastl::string::basic_string(local_70, "", local_50);
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        eastl::string::basic_string(local_48, "Toggling route highlighter", local_28);
        this_00->AddChat(99, local_70, local_48);
        eastl::string::~basic_string(local_48);
        eastl::string::~basic_string(local_70);
    }

    // 0x1000a99a0, 656 bytes, inline, placed by class name
    // ConsoleCommands::RegisterPublicCommands()::$_59::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterPublicCommands()::$_59::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterPublicCommands()::$_59::operator()(fixed_vector* param_1) {
        undefined8* puVar1;
        char cVar2;
        char cVar3;
        char cVar4;
        Client* this_00;
        long lVar5;
        int* piVar6;
        ulong uVar7;
        StringView* pSVar8;
        char* pcVar9;
        undefined8 uVar10;
        basic_string local_90[32];
        eastl::string local_70[32];
        allocator local_50[8];
        int local_48;
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        puVar1 = *(undefined8**)this;
        this_00 = (Client*)Client::Instance();
        local_48 = 0;
        local_44 = 0;
        lVar5 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00->field_52016);
        piVar6 = (int*)std::array<int, 10ul>::operator[](lVar5 + 444);
        local_40 = *piVar6;
        lVar5 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00->field_52016);
        piVar6 = (int*)std::array<int, 10ul>::operator[](lVar5 + 484);
        local_3c = *piVar6;
        local_38 = this_00->m_playerLevel;
        local_34 = 1;
        uVar7 = param_1->size();
        if (uVar7 < 2) {
            uVar10 = *puVar1;
            pcVar9 = "Incorrect number of arguments.\nUSAGE: destination x, destination z, (OPTIONAL) source x, "
                     "(OPTIONAL) source z, (OPTIONAL) level, (OPTIONAL) size. If you only specify destination, the "
                     "player coord will be assumed for the source. Level must be included if you specify source coord. "
                     "Size is assumed to be 1 if not specified.";
        } else {
            uVar7 = param_1->size();
            cVar3 = '\0';
            if (1 < uVar7) {
                pSVar8 = (StringView*)eastl::vector<
                    StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
                cVar2 = core::stringtools::general::StringTools::CheckedParseInt(&local_48, pSVar8);
                if (cVar2 != '\0') {
                    pSVar8 = (StringView*)eastl::vector<
                        StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<StringView,
                                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)param_1,
                        1);
                    cVar3 = core::stringtools::general::StringTools::CheckedParseInt(&local_44, pSVar8);
                }
            }
            uVar7 = param_1->size();
            cVar2 = cVar3;
            if (4 < uVar7) {
                pSVar8 = (StringView*)eastl::vector<
                    StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    2);
                cVar4 = core::stringtools::general::StringTools::CheckedParseInt(&local_40, pSVar8);
                if (cVar4 != '\0') {
                    pSVar8 = (StringView*)eastl::vector<
                        StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<StringView,
                                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)param_1,
                        3);
                    cVar4 = core::stringtools::general::StringTools::CheckedParseInt(&local_3c, pSVar8);
                    if (cVar4 != '\0') {
                        pSVar8 = (StringView*)eastl::vector<
                            StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<StringView,
                                           eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                       param_1,
                                   4);
                        cVar4 = core::stringtools::general::StringTools::CheckedParseInt(&local_38, pSVar8);
                        cVar2 = '\x01';
                        if (cVar4 == '\0') {
                            cVar2 = cVar3;
                        }
                    }
                }
            }
            lVar5 = param_1->size();
            cVar3 = cVar2;
            if (lVar5 == 6) {
                pSVar8 = (StringView*)eastl::vector<
                    StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    5);
                cVar4 = core::stringtools::general::StringTools::CheckedParseInt(&local_34, pSVar8);
                cVar3 = '\x01';
                if (cVar4 == '\0') {
                    cVar3 = cVar2;
                }
            }
            if (cVar3 == '\0') {
                uVar10 = *puVar1;
                pcVar9 = "Error parsing args";
            } else {
                cVar3 = this_00->HighlightRoute(local_38, local_40, local_3c, local_48, local_44, local_34);
                if (cVar3 != '\0') {
                    eastl::string::basic_string(
                        local_90,
                        "Highlighting route, SOURCE - X: %d, Z: %d, DESTINATION - X: %d, Z: %d, LEVEL: %d, SIZE: %d",
                        local_40, local_3c, local_48, local_44, local_38, local_34);
                    eastl::allocator::allocator(local_50, "EASTL basic_string");
                    eastl::string::basic_string(local_70, "", local_50);
                    this_00->AddChat(99, local_70, local_90);
                    eastl::string::~basic_string(local_70);
                    local_90->~basic_string();
                    return;
                }
                uVar10 = *puVar1;
                pcVar9 = "Route is blocked!";
            }
        }
        console::Console::AddMessage(uVar10, 5, pcVar9);
    }

    // 0x1000aa3b0, 208 bytes, inline, placed by class name
    // ConsoleCommands::RegisterPublicCommands()::$_60::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterPublicCommands()::$_60::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterPublicCommands()::$_60::operator()(fixed_vector* param_1) {
        Client* this_00;
        RouteHighlighter* this_01;
        eastl::string local_70[32];
        allocator local_50[8];
        eastl::string local_48[32];
        allocator local_28[8];

        this_00 = (Client*)Client::Instance();
        this_01 =
            (RouteHighlighter*)std::unique_ptr<RouteHighlighter, std::default_delete<RouteHighlighter>>::operator->(
                (unique_ptr<RouteHighlighter, std::default_delete<RouteHighlighter>>*)&this_00->field_19208);
        this_01->ClearRoute();
        eastl::allocator::allocator(local_50, "EASTL basic_string");
        eastl::string::basic_string(local_70, "", local_50);
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        eastl::string::basic_string(local_48, "Clearing route highlight...", local_28);
        this_00->AddChat(99, local_70, local_48);
        eastl::string::~basic_string(local_48);
        eastl::string::~basic_string(local_70);
    }

    // 0x1000aad60, 48 bytes, inline, placed by class name
    // ConsoleCommands::RegisterTestCommands()::$_61::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterTestCommands()::$_61::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterTestCommands()::$_61::operator()(fixed_vector* param_1) {
        undefined8* puVar1;

        puVar1 = *(undefined8**)this;
        highlight::HighlightManagerTest::RunTests();
        console::Console::AddMessage(*puVar1, 1, "Tests completed.");
    }

    // 0x1000ad750, 48 bytes, inline, placed by class name
    // ConsoleCommands::RegisterTestCommands()::$_62::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterTestCommands()::$_62::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterTestCommands()::$_62::operator()(fixed_vector* param_1) {
        undefined8* puVar1;

        puVar1 = *(undefined8**)this;
        RunTests();
        console::Console::AddMessage(*puVar1, 1, "Tests completed.");
    }

    // 0x1000af2d0, 160 bytes, inline, placed by class name
    // ConsoleCommands::RegisterTestCommands()::$_63::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterTestCommands()::$_63::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterTestCommands()::$_63::operator()(fixed_vector* param_1) {
        long lVar1;
        int iVar2;
        long lVar3;
        bool bVar4;
        StringView local_40[2];

        lVar1 = *(long*)this;
        lVar3 = param_1->size();
        if (lVar3 == 0) {
            bVar4 = false;
        } else {
            eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                           param_1,
                       0);
            StringView::to_owned_string<eastl::string>(local_40);
            iVar2 = local_40->comparei("rt7");
            bVar4 = iVar2 == 0;
            local_40->~basic_string();
        }
        (*(Client**)(lVar1 + 8))->SetUsingRSeven(bVar4, true);
    }

    // 0x1000afc60, 144 bytes, inline, placed by class name
    // ConsoleCommands::RegisterTestCommands()::$_64::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterTestCommands()::$_64::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterTestCommands()::$_64::operator()(fixed_vector* param_1) {
        long lVar1;
        EffectList* pEVar2;
        int iVar3;
        OSRenderCore_LogicThread_RSeven* pOVar4;
        StringView local_30[2];

        lVar1 = param_1->size();
        if (lVar1 != 0) {
            eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                           param_1,
                       0);
            StringView::to_owned_string<eastl::string>(local_30);
            iVar3 = local_30->comparei("zbias");
            pOVar4 = (OSRenderCore_LogicThread_RSeven*)local_30;
            pOVar4->~basic_string();
            if (iVar3 == 0) {
                pOVar4 = (OSRenderCore_LogicThread_RSeven*)pOVar4->Instance();
                pEVar2 = (EffectList*)pOVar4->GetEffectListMutable();
                pEVar2->Toggle(120);
            }
        }
    }

    // 0x1000b0510, 16 bytes, inline, placed by class name
    // ConsoleCommands::RegisterTestCommands()::$_65::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterTestCommands()::$_65::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterTestCommands()::$_65::operator()(fixed_vector* param_1) {
        DebugDisplay<RSevenDebugDisplay>::SetVisible(true);
    }

    // 0x1000b0f80, 48 bytes, inline, placed by class name
    // ConsoleCommands::RegisterTestCommands()::$_66::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* ConsoleCommands::RegisterTestCommands()::$_66::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void ConsoleCommands::RegisterTestCommands()::$_66::operator()(fixed_vector* param_1) {
        Client* this_00;
        byte bVar1;

        bVar1 = ClientBuild::GetApplyBlobShadows();
        ClientBuild::SetApplyBlobShadows((bool)(bVar1 ^ 1));
        this_00 = (Client*)Client::Instance();
        this_00->RebuildMap();
    }

} // namespace jag::oldscape

namespace jag::auth {
    // 0x10005c9a0: the linker folded this into oldscape::ConsoleCommandHelp::~ConsoleCommandHelp(), which has identical code
    OAuth2TokenPair::~OAuth2TokenPair();

    // 0x10005c9a0: the linker folded this into oldscape::ConsoleCommandHelp::~ConsoleCommandHelp(), which has identical code
    FederatedLoginTokenPair::~FederatedLoginTokenPair();

    // 0x10005c9a0: the linker folded this into oldscape::ConsoleCommandHelp::~ConsoleCommandHelp(), which has identical code
    GameSessionTokenCredentials::~GameSessionTokenCredentials();

} // namespace jag::auth

namespace jag::testframework {
    // 0x10005c9a0: the linker folded this into oldscape::ConsoleCommandHelp::~ConsoleCommandHelp(), which has identical code
    TestAssertionResult::~TestAssertionResult();

} // namespace jag::testframework

namespace jag {
    // 0x10005c9a0: the linker folded this into oldscape::ConsoleCommandHelp::~ConsoleCommandHelp(), which has identical code
    SteamApp::~SteamApp();

} // namespace jag

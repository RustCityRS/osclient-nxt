// libs/testframework/gaia/GaiaConnection.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.testframework

#include "GaiaConnection.h"

namespace jag::testframework {
    // 0x100ba8bf0, 384 bytes, base-object constructor, placed by class name and debug map
    // GaiaConnection::GaiaConnection()
    void GaiaConnection::GaiaConnection() {
        undefined1* this_00;
        Logger* this_01;
        _func_decltype_nullptr* in_RSI;
        shared_ptr local_40;

        std::unique_ptr<ClientStream, std::default_delete<ClientStream>>::unique_ptr<true, void>(
            (unique_ptr<ClientStream, std::default_delete<ClientStream>>*)this);
        field_8 = (HistoryListener*)0;
        this_00 = field_16;
        new (this_00) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        std::unique_ptr<GaiaConsoleSink, std::default_delete<GaiaConsoleSink>>::unique_ptr<true, void>(
            (unique_ptr<GaiaConsoleSink, std::default_delete<GaiaConsoleSink>>*)&field_32);
        field_40 = 0;
        field_44[0] = 0;
        field_45 = '\0';
        field_48 = 0;
        field_52 = 0;
        std::function<void(char const*)>::function((function<void(char const*)>*)&field_64);
        std::function<void()>::function((function<void()>*)&field_112);
        field_160 = false;
        field_161 = 0;
        new (&field_168) eastl::vector<eastl::pair<eastl::string, logger::LogLevel>, eastl::allocator>();
        new (&field_200) eastl::vector<eastl::string, eastl::allocator>();
        new (&field_232) eastl::vector<eastl::string, eastl::allocator>();
        make_shared<GaiaLogSink, GaiaConnection&>((jag*)&local_40, this);
        shared_ptr<GaiaLogSink>::operator=((shared_ptr<GaiaLogSink>*)this_00, &local_40);
        local_40.~shared_ptr();
        this_01 = (Logger*)logger::default_logger();
        new (&local_40) shared_ptr<oldscape::dash3d::Decor>(this_00);
        this_01->AddSink(&local_40);
        local_40.~shared_ptr();
    }

    // 0x100ba8ee0, 16 bytes, complete-object constructor, placed by class name and debug map
    // GaiaConnection::GaiaConnection(): jumps straight to the base-object constructor

    // 0x100ba8ef0, 336 bytes, base-object destructor, placed by class name and debug map
    // GaiaConnection::~GaiaConnection()
    void GaiaConnection::~GaiaConnection() {
        undefined1* this_00;
        undefined1* this_01;
        HistoryListener* pHVar1;
        Logger* this_02;
        bool bVar2;
        shared_ptr local_38;

        MainLogic(this);
        this_00 = &field_32;
        bVar2 = this_00->operator_cast_to_bool();
        if (bVar2) {
            pHVar1 = field_8;
            this_00->get();
            console::Console::DetachHistoryListener(pHVar1);
            this_00->reset(0);
        }
        this_01 = field_16;
        bVar2 = this_01->operator_cast_to_bool();
        if (bVar2) {
            this_02 = (Logger*)logger::default_logger();
            new (&local_38) shared_ptr<oldscape::dash3d::Decor>(this_01);
            this_02->RemoveSink(&local_38);
            local_38.~shared_ptr();
            shared_ptr<GaiaLogSink>::reset();
        }
        (&field_232)->~vector();
        (&field_200)->~vector();
        (&field_168)->~vector();
        std::function<void()>::~function((function<void()>*)&field_112);
        std::function<void(char const*)>::~function((function<void(char const*)>*)&field_64);
        this_00->~unique_ptr();
        this_01->~shared_ptr();
        ~unique_ptr();
    }

    // 0x100ba9040, 64 bytes, placed by class name and debug map
    // GaiaConnection::MainLogic()
    void GaiaConnection::MainLogic() {
        CoordMapSquare* this_00;

        if (operator_cast_to_bool()) {
            this_00 = (CoordMapSquare*)std::unique_ptr<ClientStream, std::default_delete<ClientStream>>::operator->(
                (unique_ptr<ClientStream, std::default_delete<ClientStream>>*)this);
            if (this_00->GetX() == 2) {
                ProcessIncomingPackets(this);
                ProcessOutGoingPackets(this);
            }
        }
    }

    // 0x100ba9160, 16 bytes, complete-object destructor, placed by class name and debug map
    // GaiaConnection::~GaiaConnection(): jumps straight to the base-object destructor

    // 0x100ba9170, 608 bytes, placed by class name and debug map
    // GaiaConnection::Init(eastl::string const&, eastl::string const&, unsigned char)
    ulong GaiaConnection::Init(basic_string* param_1, basic_string* param_2, uchar param_3) {
        int iVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        int* piVar5;
        CoordMapSquare* this_00;
        TestRunner* pTVar6;
        function<void(eastl::stringconst&)>* this_01;
        int* piVar7;
        undefined4 uVar8;
        undefined1 auVar9[16];
        eastl::string local_90[32];
        undefined8 local_70;
        function local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        field_44[0] = param_3;
        field_160 = (param_3 & 4) == 0;
        uVar2 = logger::default_logger();
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        piVar7 = (int*)46;
        logger::Logger::Log(uVar2, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                            "GaiaConnection.cpp",
                            46, "Gaia Comms Init requested with IP:%s port:%s ", uVar3, uVar4);
        eastl::string::basic_string(local_90);
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        piVar5 = (int*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::string::append_sprintf((char*)local_90, "%s:%s", uVar2);
        auVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_70 = auVar9._0_8_;
        std::make_unique<ClientStream, char const*, int const&, int const&, int const&, int const&>(
            (char**)local_68, (int*)&local_70, auVar9._8_8_, piVar5, piVar7);
        pTVar6 = (TestRunner*)local_68;
        std::unique_ptr<ClientStream, std::default_delete<ClientStream>>::operator=(
            (unique_ptr<ClientStream, std::default_delete<ClientStream>>*)this, (unique_ptr*)pTVar6);
        pTVar6->~unique_ptr();
        this_00 = (CoordMapSquare*)std::unique_ptr<ClientStream, std::default_delete<ClientStream>>::operator->(
            (unique_ptr<ClientStream, std::default_delete<ClientStream>>*)this);
        iVar1 = this_00->GetX();
        if (iVar1 == 2) {
            if ((field_44[0] & 1) != 0) {
                pTVar6 = (TestRunner*)this_00->Instance();
                std::function<void(eastl::stringconst&)>::function<
                    GaiaConnection::Init(eastl::stringconst&, eastl::stringconst&, unsigned char)::__1, void>(local_68,
                                                                                                              this);
                pTVar6->RegisterTestsCompleteFunction(local_68);
                this_01 = (function<void(eastl::stringconst&)>*)local_68;
                std::function<void(eastl::stringconst&)>::~function(this_01);
                pTVar6 = (TestRunner*)this_01->Instance();
                std::function<void()>::function<
                    GaiaConnection::Init(eastl::stringconst&, eastl::stringconst&, unsigned char)::__2, void>(local_68,
                                                                                                              this);
                pTVar6->RegisterAppCrashedFunction(local_68);
                std::function<void()>::~function((function<void()>*)local_68);
            }
            if ((field_44[0] & 1) == 0) {
                uVar2 = logger::default_logger();
                logger::Logger::Log(
                    uVar2, 0, 3,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                    "GaiaConnection.cpp",
                    75, "Enabled Gaia Connection without TestRunner - Features using TestRunner will not be enabled");
            }
            uVar8 = 1;
            if ((field_44[0] & 2) == 0) {
                uVar2 = logger::default_logger();
                logger::Logger::Log(uVar2, 0, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                    "testframework/gaia/GaiaConnection.cpp",
                                    76,
                                    "Enabled Gaia Connection without Console - Features using console driven input "
                                    "will not be enabled");
            }
        } else {
            (&field_168)->clear();
            uVar8 = 2;
        }
        field_40 = uVar8;
        eastl::string::~basic_string(local_90);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return CONCAT71((int7)((ulong)pTVar6 >> 8), iVar1 == 2) & 4294967295;
    }

    // 0x100ba9520, 480 bytes, placed by class name and debug map
    // GaiaConnection::ProcessIncomingPackets()
    void GaiaConnection::ProcessIncomingPackets() {
        byte bVar1;
        ushort uVar2;
        int iVar3;
        ClientStream* pCVar4;
        ulong uVar5;
        VBOMapper local_38;

        if (field_45 == '\0') {
            if (field_48 == 0) {
                pCVar4 = (ClientStream*)std::unique_ptr<ClientStream, std::default_delete<ClientStream>>::operator->(
                    (unique_ptr<ClientStream, std::default_delete<ClientStream>>*)this);
                uVar5 = pCVar4->GetAvailable();
                if (1 < uVar5) {
                    new (&local_38) PacketT<Array<unsigned char, eastl::allocator>>(100);
                    pCVar4 =
                        (ClientStream*)std::unique_ptr<ClientStream, std::default_delete<ClientStream>>::operator->(
                            (unique_ptr<ClientStream, std::default_delete<ClientStream>>*)this);
                    ClientStream::Read<PacketT<Array<unsigned char, eastl::allocator>>>(pCVar4, (PacketT*)&local_38, 2);
                    local_38.SetPos(0);
                    uVar2 = local_38.g2();
                    field_52 = (uint)uVar2;
                    field_48 = 1;
                    local_38.~VBOMapper();
                }
            }
            if (field_48 == 1) {
                pCVar4 = (ClientStream*)std::unique_ptr<ClientStream, std::default_delete<ClientStream>>::operator->(
                    (unique_ptr<ClientStream, std::default_delete<ClientStream>>*)this);
                iVar3 = pCVar4->GetAvailable();
                if ((int)field_52 <= iVar3) {
                    new (&local_38) PacketT<Array<unsigned char, eastl::allocator>>(5000);
                    pCVar4 =
                        (ClientStream*)std::unique_ptr<ClientStream, std::default_delete<ClientStream>>::operator->(
                            (unique_ptr<ClientStream, std::default_delete<ClientStream>>*)this);
                    ClientStream::Read<PacketT<Array<unsigned char, eastl::allocator>>>(pCVar4, (PacketT*)&local_38,
                                                                                        (long)(int)field_52);
                    local_38.SetPos(0);
                    bVar1 = ((GaiaConnection*)&local_38)->g1();
                    if (6 < bVar1) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("commandType >= GaiaConnectionServerProt::WELCOME_PACKET && commandType < "
                                  "GaiaConnectionServerProt::COUNT",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/"
                                  "gaia/GaiaConnection.cpp",
                                  144, "Error - Received unexpected prot from server");
                    }
                    switch (bVar1) {
                    case 0:
                        HandleWelcomeProt((GaiaConnection*)&local_38, (PacketT*)&local_38);
                        break;
                    case 1:
                        HandleConsoleCommandProt((PacketT*)this);
                        break;
                    case 2:
                        HandleSetTestConfigProt((PacketT*)this);
                        break;
                    case 3:
                        HandleRunScriptProt((PacketT*)this);
                        break;
                    case 4:
                        break;
                    case 5:
                        HandleScreenshotProt((PacketT*)(GaiaConnection*)&local_38);
                        break;
                    case 6:
                        HandleShutdownProt(this);
                        break;
                    default:
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "testframework/gaia/GaiaConnection.cpp",
                                        170, (char*)0);
                    }
                    field_48 = 0;
                    local_38.~VBOMapper();
                }
            }
        }
    }

    // 0x100ba9700, 80 bytes, placed by class name and debug map
    // GaiaConnection::ProcessOutGoingPackets()
    void GaiaConnection::ProcessOutGoingPackets() {
        if ((field_161 == '\0') && (field_160 != false)) {
            SendApplicationReadyPacket(this);
        }
        WriteTestResultsPackets(this);
        WriteIngameConsoleOutputPackets(this);
        WriteConsoleLogPackets(this);
        WritePendingPNGScreenshots(this);
    }

    // 0x100ba9750, 160 bytes, placed by class name and debug map
    // GaiaConnection::SetupConsoleHandling(console::Console*, std::function<void (char const*)>)
    /* GaiaConnection::SetupConsoleHandling(console::Console*,
   std::function<void (char const*)>) */

    void GaiaConnection::SetupConsoleHandling(Console* param_1, function* param_3) {
        HistoryListener* pHVar1;
        undefined1 local_38[8];

        if (field_8 != (HistoryListener*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_console",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                      "GaiaConnection.cpp",
                      102, "Attempting to call GaiaConnection::SetupConsoleHandling multiple times");
        }
        std::make_unique<GaiaConsoleSink, GaiaConnection&>((GaiaConnection*)local_38);
        std::unique_ptr<GaiaConsoleSink, std::default_delete<GaiaConsoleSink>>::operator=(
            (unique_ptr<GaiaConsoleSink, std::default_delete<GaiaConsoleSink>>*)&field_32, (unique_ptr*)local_38);
        local_38->~unique_ptr();
        pHVar1 = (HistoryListener*)(&field_32)->get();
        param_1->AttachHistoryListener(pHVar1);
        std::function<void(char const*)>::operator=((function<void(char const*)>*)&field_64, param_3);
    }

    // 0x100ba9910, 208 bytes, placed by class name and debug map
    // GaiaConnection::HandleWelcomeProt(PacketT<Array<unsigned char, eastl::allocator> >&)
    void GaiaConnection::HandleWelcomeProt(PacketT* param_1) {
        undefined2 uVar1;
        undefined4 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined4 uVar5;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_38[32];

        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
            local_38, SUB81(param_1, 0));
        uVar3 = logger::default_logger();
        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(uVar3, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                            "GaiaConnection.cpp",
                            220, "Welcome Message: %s", uVar4);
        uVar5 = (undefined4)((ulong)uVar4 >> 32);
        uVar2 = param_1->g2();
        uVar1 = param_1->g2();
        uVar3 = logger::default_logger();
        logger::Logger::Log(uVar3, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                            "GaiaConnection.cpp",
                            226, "Extra listen ports are: %i // %i", CONCAT44(uVar5, uVar2) & 18446744069414649855,
                            uVar1);
        local_38->~basic_string();
    }

    // 0x100ba99e0, 208 bytes, placed by class name and debug map
    // GaiaConnection::HandleConsoleCommandProt(PacketT<Array<unsigned char, eastl::allocator> >&)
    void GaiaConnection::HandleConsoleCommandProt(PacketT* param_1) {
        undefined8 uVar2;
        undefined8 uVar3;
        char* pcVar4;
        bool in_SIL;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_38[32];

        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(local_38,
                                                                                                               in_SIL);
        uVar2 = logger::default_logger();
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(uVar2, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                            "GaiaConnection.cpp",
                            205, "Received console command: %s", uVar3);
        if (((param_1 + 64))->operator_cast_to_bool()) {
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            std::function<void(char const*)>::operator()((function<void(char const*)>*)(param_1 + 64), pcVar4);
        } else if (((byte)param_1[44] & 2) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("!(m_testConfigurationFlags & InitFlags::ENABLE_CONSOLE)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                      "GaiaConnection.cpp",
                      213, "OnConsoleCommandRequest has not been configured");
        }
        local_38->~basic_string();
    }

    // 0x100ba9ab0, 192 bytes, placed by class name and debug map
    // GaiaConnection::HandleSetTestConfigProt(PacketT<Array<unsigned char, eastl::allocator> >&)
    void GaiaConnection::HandleSetTestConfigProt(PacketT* param_1) {
        undefined8 uVar1;
        Singleton<TestRunner>* this;
        basic_string* pbVar2;
        bool in_SIL;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_30[32];

        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(local_30,
                                                                                                               in_SIL);
        if (((byte)param_1[44] & 1) == 0) {
            uVar1 = logger::default_logger();
            logger::Logger::Log(uVar1, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/"
                                "gaia/GaiaConnection.cpp",
                                243, "TestRunner is not enabled - discarding Meta Data packet");
        } else {
            this = (Singleton<TestRunner>*)logger::default_logger();
            uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(this, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/"
                                "gaia/GaiaConnection.cpp",
                                236, "Incoming Meta Data: \n%s", uVar1);
            pbVar2 = (basic_string*)Instance();
            TestRunner::LoadMetadataFromRawString(pbVar2);
        }
        local_30->~basic_string();
    }

    // 0x100ba9b70, 256 bytes, placed by class name and debug map
    // GaiaConnection::HandleRunScriptProt(PacketT<Array<unsigned char, eastl::allocator> >&)
    void GaiaConnection::HandleRunScriptProt(PacketT* param_1) {
        undefined8 uVar1;
        Singleton<TestRunner>* this;
        undefined8 uVar2;
        TestRunner* this_00;
        bool in_SIL;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_58[32];
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_38[32];

        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(local_58,
                                                                                                               in_SIL);
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(local_38,
                                                                                                               in_SIL);
        if (((byte)param_1[44] & 1) == 0) {
            uVar1 = logger::default_logger();
            logger::Logger::Log(uVar1, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/"
                                "gaia/GaiaConnection.cpp",
                                264, "TestRunner is not enabled - discarding RunScript Data packet");
        } else {
            this = (Singleton<TestRunner>*)logger::default_logger();
            uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(this, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/"
                                "gaia/GaiaConnection.cpp",
                                257, "Incoming RunScript (%s): \n%s", uVar1, uVar2);
            this_00 = (TestRunner*)Instance();
            this_00->LoadRunScriptFromRawString(local_58, local_38);
        }
        local_38->~basic_string();
        local_58->~basic_string();
    }

    // 0x100ba9c70, 80 bytes, placed by class name and debug map
    // GaiaConnection::HandleScreenshotProt(PacketT<Array<unsigned char, eastl::allocator> >&)
    void GaiaConnection::HandleScreenshotProt(PacketT* param_1) {
        Screengrabber* this;
        bool in_SIL;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this_00;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_30[32];

        this_00 = local_30;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(this_00,
                                                                                                               in_SIL);
        this = (Screengrabber*)this_00->Instance();
        RequestScreenshot(local_30);
        local_30->~basic_string();
    }

    // 0x100ba9ce0, 128 bytes, placed by class name and debug map
    // GaiaConnection::SendApplicationReadyPacket()
    void GaiaConnection::SendApplicationReadyPacket() {
        eastl::string local_48[32];
        allocator local_28[8];

        eastl::allocator::allocator(local_28, "EASTL basic_string");
        eastl::string::basic_string(local_48, "Application is ready for further processing!", local_28);
        WriteStringPacket(this, local_48, 0);
        field_161 = 1;
        eastl::string::~basic_string(local_48);
    }

    // 0x100ba9d60, 112 bytes, placed by class name and debug map
    // GaiaConnection::WriteTestResultsPackets()
    void GaiaConnection::WriteTestResultsPackets() {
        undefined1* this_00;
        char cVar1;
        long lVar2;
        long lVar3;

        this_00 = &field_232;
        cVar1 = this_00->empty();
        if (cVar1 == '\0') {
            lVar3 = this_00->HeapBeginPtr();
            lVar2 = this_00->end();
            for (; lVar3 != lVar2; lVar3 = lVar3 + 32) {
                WriteStringPacket(this, lVar3, 2);
            }
            this_00->clear();
        }
    }

    // 0x100ba9dd0, 112 bytes, placed by class name and debug map
    // GaiaConnection::WriteIngameConsoleOutputPackets()
    void GaiaConnection::WriteIngameConsoleOutputPackets() {
        undefined1* this_00;
        char cVar1;
        long lVar2;
        long lVar3;

        this_00 = &field_200;
        cVar1 = this_00->empty();
        if (cVar1 == '\0') {
            lVar3 = this_00->HeapBeginPtr();
            lVar2 = this_00->end();
            for (; lVar3 != lVar2; lVar3 = lVar3 + 32) {
                WriteStringPacket(this, lVar3, 1);
            }
            this_00->clear();
        }
    }

    // 0x100ba9e40, 336 bytes, placed by class name and debug map
    // GaiaConnection::WriteConsoleLogPackets()
    void GaiaConnection::WriteConsoleLogPackets() {
        undefined1* this_00;
        basic_string* pbVar1;
        basic_string* pbVar2;
        ulong uVar3;
        long lVar4;
        long lVar5;
        vector<eastl::string, eastl::allocator> local_58[32];
        vector<eastl::pair<eastl::string, logger::LogLevel>, eastl::allocator>* local_38;

        this_00 = &field_168;
        pbVar1 = (basic_string*)this_00->HeapBeginPtr();
        local_38 = (vector<eastl::pair<eastl::string, logger::LogLevel>, eastl::allocator>*)this_00;
        pbVar2 = (basic_string*)this_00->end();
        do {
            if (pbVar1 == pbVar2) {
                eastl::vector<eastl::pair<eastl::string, logger::LogLevel>, eastl::allocator>::clear(local_38);
                return;
            }
            uVar3 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (uVar3 < 5001) {
                WriteSingleConsoleLogPacket(this, pbVar1, *(undefined4*)(pbVar1 + 32));
            } else {
                eastl::vector<eastl::string, eastl::allocator>::vector(local_58);
                tokenize<eastl::vector<eastl::string, eastl::allocator>, eastl::string>((vector*)local_58, pbVar1, "\n",
                                                                                        -1);
                lVar4 = local_58->HeapBeginPtr();
                lVar5 = local_58->end();
                for (; lVar4 != lVar5; lVar4 = lVar4 + 32) {
                    uVar3 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    if (5000 < uVar3) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("line.size() <= Packet::SMALL",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/"
                                  "gaia/GaiaConnection.cpp",
                                  303, (char*)0);
                    }
                    WriteSingleConsoleLogPacket(this, lVar4, *(undefined4*)(pbVar1 + 32));
                }
                eastl::vector<eastl::string, eastl::allocator>::~vector(local_58);
            }
            pbVar1 = pbVar1 + 40;
        } while (true);
    }

    // 0x100ba9f90, 704 bytes, placed by class name and debug map
    // GaiaConnection::WritePendingPNGScreenshots()
    void GaiaConnection::WritePendingPNGScreenshots() {
        int iVar1;
        uint uVar2;
        Layout* this_00;
        VBOMapper* this_01;
        TextureAtlasReference* this_02;
        undefined8 uVar3;
        undefined8 uVar4;
        ClientStream* pCVar5;
        uchar* puVar6;
        ulong uVar7;
        long lVar8;
        long lVar9;
        Screengrabber* this_03;
        uint uVar10;
        ulong uVar11;
        type* in_RSI;
        int iVar12;
        VBOMapper local_78;
        int local_58;
        long local_50;
        TextureAtlasReference* local_48;
        ulong local_40;
        basic_string* local_38;

        this_00 = (Layout*)Instance();
        this_01 = (VBOMapper*)eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
        this_02 = (TextureAtlasReference*)this_01->HeapBeginPtr();
        local_48 = (TextureAtlasReference*)this_01->end();
        if (this_02 != local_48) {
            do {
                new (&local_78) PacketT<Array<unsigned char, eastl::allocator>>(5000);
                uVar3 = logger::default_logger();
                local_38 = (basic_string*)&this_02->field_32;
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(uVar3, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                    "testframework/gaia/GaiaConnection.cpp",
                                    374, "Sending screenshot %s ", uVar4);
                _local_58 = this_02->GetTextureAtlas();
                iVar1 = (int)_local_58;
                iVar12 = iVar1 + 8191;
                if (-1 < iVar1) {
                    iVar12 = iVar1;
                }
                local_40 = this_02->GetTextureAtlas();
                uVar2 = (uint)local_40;
                uVar10 = uVar2 + 8191;
                if (-1 < (int)uVar2) {
                    uVar10 = uVar2;
                }
                PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                    (PacketT<Array<unsigned char, eastl::allocator>>*)&local_78, 0);
                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                    (PacketT<Array<unsigned char, eastl::allocator>>*)&local_78, 4);
                PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                    (PacketT<Array<unsigned char, eastl::allocator>>*)&local_78, (ulong)(uint)(iVar12 >> 13));
                PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                    (PacketT<Array<unsigned char, eastl::allocator>>*)&local_78, 8192);
                local_40 = (ulong)((int)local_40 - (uVar10 & 4294959104));
                PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                    (PacketT<Array<unsigned char, eastl::allocator>>*)&local_78, local_40);
                PushString((GaiaConnection*)&local_78, (PacketT*)&local_78, local_38);
                local_38 = (basic_string*)CONCAT44(local_38._4_4_, iVar12 >> 13);
                local_50 = WritePacketLengthToHeader((GaiaConnection*)&local_78, (PacketT*)&local_78);
                pCVar5 = (ClientStream*)std::unique_ptr<ClientStream, std::default_delete<ClientStream>>::operator->(
                    (unique_ptr<ClientStream, std::default_delete<ClientStream>>*)this);
                puVar6 = (uchar*)local_78.GetDataPtr();
                uVar7 = local_78.size();
                lVar8 = pCVar5->Write(puVar6, uVar7);
                if (lVar8 != local_50) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("bytesWritten == packetLength",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/"
                              "gaia/GaiaConnection.cpp",
                              403, (char*)0);
                }
                if (8191 < local_58) {
                    uVar7 = (ulong)local_38 & 4294967295;
                    lVar8 = 0;
                    do {
                        pCVar5 =
                            (ClientStream*)std::unique_ptr<ClientStream, std::default_delete<ClientStream>>::operator->(
                                (unique_ptr<ClientStream, std::default_delete<ClientStream>>*)this);
                        lVar9 = this_02->GetDataPtr();
                        lVar9 = pCVar5->Write((uchar*)(lVar9 + lVar8), 8192);
                        if (lVar9 != 8192) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("bytesWritten == PNG_BUFFER_SIZE",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                      "testframework/gaia/GaiaConnection.cpp",
                                      412, (char*)0);
                        }
                        pCVar5 =
                            (ClientStream*)std::unique_ptr<ClientStream, std::default_delete<ClientStream>>::operator->(
                                (unique_ptr<ClientStream, std::default_delete<ClientStream>>*)this);
                        pCVar5->Flush();
                        lVar8 = lVar8 + 8192;
                        uVar7 = uVar7 - 1;
                    } while (uVar7 != 0);
                }
                pCVar5 = (ClientStream*)std::unique_ptr<ClientStream, std::default_delete<ClientStream>>::operator->(
                    (unique_ptr<ClientStream, std::default_delete<ClientStream>>*)this);
                lVar8 = this_02->GetDataPtr();
                this_01 = &local_78;
                uVar11 = (ulong)(int)local_40;
                uVar7 = pCVar5->Write((uchar*)(lVar8 + (long)(int)local_38 * 8192), uVar11);
                if (uVar7 != uVar11) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("bytesWritten == (size_t) remainder",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/"
                              "gaia/GaiaConnection.cpp",
                              421, (char*)0);
                }
                pCVar5 = (ClientStream*)std::unique_ptr<ClientStream, std::default_delete<ClientStream>>::operator->(
                    (unique_ptr<ClientStream, std::default_delete<ClientStream>>*)this);
                pCVar5->Flush();
                this_01->~VBOMapper();
                this_02 = (TextureAtlasReference*)&this_02[1].field_16;
            } while (this_02 != local_48);
        }
        this_03 = (Screengrabber*)this_01->Instance();
        this_03->ClearRecentScreenshotData();
    }

    // 0x100baa2e0, 256 bytes, placed by class name
    // GaiaConnection::WriteStringPacket(eastl::string const&, GaiaConnectionClientProt)
    void GaiaConnection::WriteStringPacket(basic_string* param_1, uint param_3) {
        long lVar1;
        ClientStream* pCVar2;
        uchar* puVar3;
        ulong uVar4;
        VBOMapper local_50;

        new (&local_50) PacketT<Array<unsigned char, eastl::allocator>>(5000);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)&local_50, 0);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)(GaiaConnection*)&local_50, (ulong)param_3);
        PushString((GaiaConnection*)&local_50, (PacketT*)&local_50, param_1);
        lVar1 = WritePacketLengthToHeader((GaiaConnection*)&local_50, (PacketT*)&local_50);
        pCVar2 = (ClientStream*)std::unique_ptr<ClientStream, std::default_delete<ClientStream>>::operator->(
            (unique_ptr<ClientStream, std::default_delete<ClientStream>>*)this);
        puVar3 = (uchar*)local_50.GetDataPtr();
        uVar4 = local_50.size();
        if (pCVar2->Write(puVar3, uVar4) != lVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("bytesWritten == packetLength",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                      "GaiaConnection.cpp",
                      449, "Failed to write to Gaia connection for prot: %i", (ulong)param_3);
        }
        pCVar2 = (ClientStream*)std::unique_ptr<ClientStream, std::default_delete<ClientStream>>::operator->(
            (unique_ptr<ClientStream, std::default_delete<ClientStream>>*)this);
        pCVar2->Flush();
        local_50.~VBOMapper();
    }

    // 0x100baa3e0, 256 bytes, placed by class name
    // GaiaConnection::WriteSingleConsoleLogPacket(eastl::string const&, logger::LogLevel)
    void GaiaConnection::WriteSingleConsoleLogPacket(basic_string* param_1, uint param_3) {
        long lVar1;
        ClientStream* pCVar2;
        uchar* puVar3;
        ulong uVar4;
        VBOMapper local_48;

        new (&local_48) PacketT<Array<unsigned char, eastl::allocator>>(5000);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)&local_48, 0);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)&local_48, 3);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)(GaiaConnection*)&local_48, (ulong)param_3);
        PushString((GaiaConnection*)&local_48, (PacketT*)&local_48, param_1);
        lVar1 = WritePacketLengthToHeader((GaiaConnection*)&local_48, (PacketT*)&local_48);
        pCVar2 = (ClientStream*)std::unique_ptr<ClientStream, std::default_delete<ClientStream>>::operator->(
            (unique_ptr<ClientStream, std::default_delete<ClientStream>>*)this);
        puVar3 = (uchar*)local_48.GetDataPtr();
        uVar4 = local_48.size();
        if (pCVar2->Write(puVar3, uVar4) != lVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("bytesWritten == packetLength",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                      "GaiaConnection.cpp",
                      332, "Failed to write to Gaia connection");
        }
        pCVar2 = (ClientStream*)std::unique_ptr<ClientStream, std::default_delete<ClientStream>>::operator->(
            (unique_ptr<ClientStream, std::default_delete<ClientStream>>*)this);
        pCVar2->Flush();
        local_48.~VBOMapper();
    }

    // 0x100baa620, 64 bytes, placed by class name
    // GaiaConnection::PushString(PacketT<Array<unsigned char, eastl::allocator> >&, eastl::string const&)
    void GaiaConnection::PushString(PacketT* param_1, basic_string* param_2) {
        char* pcVar1;
        uint uVar2;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringNoConversion(pcVar1, false);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)uVar2);
        PacketT<Array<unsigned char, eastl::allocator>>::pStringNoConversion<eastl::string>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, param_2, false);
    }

    // 0x100baa660, 128 bytes, placed by class name
    // GaiaConnection::WritePacketLengthToHeader(PacketT<Array<unsigned char, eastl::allocator> >&)
    ulong GaiaConnection::WritePacketLengthToHeader(PacketT* param_1) {
        ulong uVar1;

        uVar1 = param_1->size();
        if (32767 < (int)uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(int)bytesWritten < GAIA_CIRCULAR_SND_BUFFER_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                      "GaiaConnection.cpp",
                      461, "Tried to write more than %i bytes to a packet ", 32768);
        }
        param_1->SetPos(0);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, uVar1 - 2);
        param_1->SetPos(uVar1);
        return uVar1;
    }

} // namespace jag::testframework

namespace jag {
    // 0x100ba8dc0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<testframework::GaiaLogSink>::type make_shared<testframework::GaiaLogSink, testframework::GaiaConnection&>(testframework::GaiaConnection&)
    jag* make_shared<testframework::GaiaLogSink, testframework::GaiaConnection&>(GaiaConnection* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        GaiaLogSink* local_30[2];

        pvVar1 = (void*)aligned_alloc(112, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<testframework::GaiaLogSink, testframework::GaiaConnection&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<testframework::GaiaLogSink>, int, testframework::GaiaLogSink*&>(
                pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag

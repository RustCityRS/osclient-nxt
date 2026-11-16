// libs/testframework/gaia/GaiaConnection.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.testframework

#include "GaiaConnection.h"

namespace jag::testframework {
    // 0x100ba8bf0
    GaiaConnection::GaiaConnection() {
        unique_ptr<true, void>();
        field_8 = nullptr;
        uint8_t* this_00 = field_16;
        new (this_00) shared_ptr();
        field_32.unique_ptr<true, void>();
        field_40 = 0;
        field_44 = '\0';
        field_45 = '\0';
        field_48 = 0;
        field_52 = 0;
        new (&field_64) std::function<void(char const*)>();
        new (&field_112) std::function<void()>();
        field_160 = false;
        field_161 = 0;
        new (&field_168) eastl::vector<eastl::pair<eastl::string, logger::LogLevel>>();
        new (&field_200) eastl::vector<eastl::string>();
        new (&field_232) eastl::vector<eastl::string>();
        make_shared<GaiaLogSink, GaiaConnection&>(&local_40, this);
        *this_00 = local_40;
        auto this_01 = logger::default_logger();
        shared_ptr local_40(this_00);
        this_01->AddSink(local_40);
    }

    // 0x100ba8ef0
    GaiaConnection::~GaiaConnection() {
        Console* this_02;
        HistoryListener* historyListener;
        Logger* this_03;
        shared_ptr<oldscape::dash3d::Decor> local_38;

        MainLogic();
        uint8_t* this_00 = &field_32;
        if (this_00->operator_cast_to_bool()) {
            this_02 = field_8;
            historyListener = (HistoryListener*)this_00->get();
            this_02->DetachHistoryListener(historyListener);
            this_00->reset(nullptr);
        }
        uint8_t* this_01 = field_16;
        if (this_01->operator_cast_to_bool()) {
            this_03 = logger::default_logger();
            local_38 = shared_ptr(this_01);
            this_03->RemoveSink(local_38);
            this_01->reset();
        }
        field_232.~vector();
        field_200.~vector();
        field_168.~vector();
        field_112.~function();
        field_64.~function();
        this_00->~unique_ptr();
        this_01->~shared_ptr();
    }

    // 0x100ba9040
    void GaiaConnection::MainLogic() {
        if (operator_cast_to_bool() != '\0') {
            if (((CoordMapSquare*)(*this).operator->())->GetX() == 2) {
                ProcessIncomingPackets();
                ProcessOutGoingPackets();
            }
        }
    }

    // 0x100ba9170
    unsigned long GaiaConnection::Init(const eastl::string& str1, const eastl::string& str2, unsigned char arg3) {
        function<void(eastl::stringconst&)>* this_01;
        uint32_t uVar6;
        uint8_t auVar7[16];
        function<void(eastl::stringconst&)> local_68[48];
        long local_38;

        field_44 = arg3;
        field_160 = (arg3 & 4) == 0;
        auto pLVar2 = logger::default_logger();
        uint64_t uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uint64_t uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        int* arg5 = (int*)46;
        pLVar2->Log(false, 8,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                    "GaiaConnection.cpp",
                    46, "Gaia Comms Init requested with IP:%s port:%s ", uVar3, uVar4);
        eastl::string local_90;
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        int* arg4 = (int*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_90.append_sprintf("%s:%s", uVar3);
        auVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uint64_t local_70 = auVar7._0_8_;
        std::make_unique<ClientStream, char const*, int const&, int const&, int const&, int const&>(
            *local_68, local_70, *auVar7._8_8_, *arg4, *arg5);
        TestRunner* pTVar5 = (TestRunner*)local_68;
        *this = *pTVar5;
        pTVar5->~unique_ptr();
        CoordMapSquare* this_00 = (CoordMapSquare*)(*this).operator->();
        int iVar1 = this_00->GetX();
        if (iVar1 == 2) {
            if ((field_44 & 1) != 0) {
                pTVar5 = (TestRunner*)this_00->Instance();
                std::function<void(eastl::stringconst&)>::function<
                    GaiaConnection::Init(eastl::stringconst&, eastl::stringconst&, unsigned char)::__1, void>(
                    local_68, (__1*)this);
                pTVar5->RegisterTestsCompleteFunction(*local_68);
                this_01 = local_68;
                this_01->~function();
                pTVar5 = (TestRunner*)this_01->Instance();
                std::function<void()>::function<
                    GaiaConnection::Init(eastl::stringconst&, eastl::stringconst&, unsigned char)::__2, void>(
                    (function<void()>*)local_68, (__2*)this);
                pTVar5->RegisterAppCrashedFunction(*local_68);
            }
            if ((field_44 & 1) == 0) {
                pLVar2 = logger::default_logger();
                pLVar2->Log(
                    false, 3,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                    "GaiaConnection.cpp",
                    75, "Enabled Gaia Connection without TestRunner - Features using TestRunner will not be enabled");
            }
            uVar6 = 1;
            if ((field_44 & 2) == 0) {
                pLVar2 = logger::default_logger();
                pLVar2->Log(false, 3,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                            "GaiaConnection.cpp",
                            76,
                            "Enabled Gaia Connection without Console - Features using console driven input will not be "
                            "enabled");
            }
        } else {
            field_168.clear();
            uVar6 = 2;
        }
        field_40 = uVar6;
        return iVar1 == 2 & 4294967295;
    }

    // 0x100ba9520
    void GaiaConnection::ProcessIncomingPackets() {
        uint8_t bVar1;
        unsigned short uVar2;
        int iVar3;
        ClientStream* pCVar4;
        unsigned long uVar5;
        VBOMapper local_38;

        if (field_45 == '\0') {
            if (field_48 == 0) {
                pCVar4 = (ClientStream*)(*this).operator->();
                uVar5 = pCVar4->GetAvailable();
                if (1 < uVar5) {
                    local_38 = PacketT(100);
                    pCVar4 = (ClientStream*)(*this).operator->();
                    pCVar4->Read<PacketT<Array<unsigned char>>>(local_38, 2);
                    local_38.SetPos(0);
                    uVar2 = local_38.g2();
                    field_52 = (unsigned int)uVar2;
                    field_48 = 1;
                }
            }
            if (field_48 == 1) {
                pCVar4 = (ClientStream*)(*this).operator->();
                iVar3 = pCVar4->GetAvailable();
                if ((int)field_52 <= iVar3) {
                    local_38 = PacketT(5000);
                    pCVar4 = (ClientStream*)(*this).operator->();
                    pCVar4->Read<PacketT<Array<unsigned char>>>(local_38, (long)(int)field_52);
                    local_38.SetPos(0);
                    bVar1 = ((PacketReaderMixin<PacketT<Array<unsigned char>>>*)(GaiaConnection*)&local_38)->g1();
                    if (6 < bVar1) {
                        LogAssert("commandType >= GaiaConnectionServerProt::WELCOME_PACKET && commandType < "
                                  "GaiaConnectionServerProt::COUNT",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/"
                                  "gaia/GaiaConnection.cpp",
                                  144, "Error - Received unexpected prot from server");
                    }
                    switch (bVar1) {
                    case 0:
                        HandleWelcomeProt((GaiaConnection*)&local_38, (PacketT<Array<unsigned char> _>*)&local_38);
                        break;
                    case 1:
                        HandleConsoleCommandProt(local_38);
                        break;
                    case 2:
                        HandleSetTestConfigProt(local_38);
                        break;
                    case 3:
                        HandleRunScriptProt(local_38);
                        break;
                    case 4:
                        break;
                    case 5:
                        HandleScreenshotProt((GaiaConnection*)&local_38, (PacketT<Array<unsigned char> _>*)&local_38);
                        break;
                    case 6:
                        HandleShutdownProt();
                        break;
                    default:
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "testframework/gaia/GaiaConnection.cpp",
                                        170, nullptr);
                    }
                    field_48 = 0;
                }
            }
        }
    }

    // 0x100ba9700
    void GaiaConnection::ProcessOutGoingPackets() {
        if ((field_161 == '\0') && (field_160 != false)) {
            SendApplicationReadyPacket();
        }
        WriteTestResultsPackets();
        WriteIngameConsoleOutputPackets();
        WriteConsoleLogPackets();
        WritePendingPNGScreenshots();
    }

    // 0x100ba9750
    void GaiaConnection::SetupConsoleHandling(console::Console* console, std::function<void(char const*)> callback) {
        HistoryListener* historyListener;

        if (field_8 != nullptr) {
            LogAssert("!m_console",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                      "GaiaConnection.cpp",
                      102, "Attempting to call GaiaConnection::SetupConsoleHandling multiple times");
        }
        auto local_38 = std::make_unique<GaiaConsoleSink, GaiaConnection&>(*this);
        field_32 = local_38;
        historyListener = (HistoryListener*)field_32.get();
        console->AttachHistoryListener(historyListener);
        field_64 = *callback;
    }

    // 0x100ba9910
    void GaiaConnection::HandleWelcomeProt(PacketT<Array<unsigned char>>& arg1) {
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_38;

        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_38, (uint8_t)arg1);
        auto pLVar3 = logger::default_logger();
        uint64_t uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pLVar3->Log(false, 8,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                    "GaiaConnection.cpp",
                    220, "Welcome Message: %s", uVar4);
        uint32_t uVar5 = (uint32_t)((unsigned long)uVar4 >> 32);
        uint32_t uVar1 = arg1.g2();
        unsigned int uVar2 = arg1.g2();
        pLVar3 = logger::default_logger();
        pLVar3->Log(false, 8,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                    "GaiaConnection.cpp",
                    226, "Extra listen ports are: %i // %i",
                    (((uint64_t)uVar5 << 32) | (uint32_t)uVar1) & 18446744069414649855, uVar2 & 65535);
    }

    // 0x100ba99e0
    void GaiaConnection::HandleConsoleCommandProt(PacketT<Array<unsigned char>>& arg1) {
        char* str;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_38;

        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_38, (uint8_t)arg1);
        auto this_00 = logger::default_logger();
        uint64_t uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        this_00->Log(false, 8,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                     "GaiaConnection.cpp",
                     205, "Received console command: %s", uVar2);
        if ((&field_64)->operator_cast_to_bool() == '\0') {
            if ((field_44 & 2) != 0) {
                LogAssert("!(m_testConfigurationFlags & InitFlags::ENABLE_CONSOLE)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                          "GaiaConnection.cpp",
                          213, "OnConsoleCommandRequest has not been configured");
            }
        } else {
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            std::function<void(char const*)>::operator()((function<void(char const*)>*)&field_64, str);
        }
    }

    // 0x100ba9ab0
    void GaiaConnection::HandleSetTestConfigProt(PacketT<Array<unsigned char>>& arg1) {
        Logger* pLVar1;
        uint64_t uVar2;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_30;

        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_30, (uint8_t)arg1);
        if ((field_44 & 1) == 0) {
            pLVar1 = logger::default_logger();
            pLVar1->Log(false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                        "GaiaConnection.cpp",
                        243, "TestRunner is not enabled - discarding Meta Data packet");
        } else {
            pLVar1 = logger::default_logger();
            uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar1->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                        "GaiaConnection.cpp",
                        236, "Incoming Meta Data: \n%s", uVar2);
            ((TestRunner*)pLVar1->Instance())->LoadMetadataFromRawString(local_30);
        }
    }

    // 0x100ba9b70
    void GaiaConnection::HandleRunScriptProt(PacketT<Array<unsigned char>>& arg1) {
        Logger* pLVar1;
        uint64_t uVar2;
        uint64_t uVar3;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_58;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_38;

        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_58, (uint8_t)arg1);
        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_38, (uint8_t)arg1);
        if ((field_44 & 1) == 0) {
            pLVar1 = logger::default_logger();
            pLVar1->Log(false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                        "GaiaConnection.cpp",
                        264, "TestRunner is not enabled - discarding RunScript Data packet");
        } else {
            pLVar1 = logger::default_logger();
            uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar1->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                        "GaiaConnection.cpp",
                        257, "Incoming RunScript (%s): \n%s", uVar2, uVar3);
            ((TestRunner*)pLVar1->Instance())->LoadRunScriptFromRawString(local_58, local_38);
        }
    }

    // 0x100ba9c70
    void GaiaConnection::HandleScreenshotProt(PacketT<Array<unsigned char>>& arg1) {
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_30;

        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_30, (uint8_t)arg1);
        ((Screengrabber*)&local_30->Instance())->RequestScreenshot(local_30);
    }

    // 0x100ba9ce0
    void GaiaConnection::SendApplicationReadyPacket() {

        eastl::string local_48("Application is ready for further processing!");
        WriteStringPacket(local_48, 0);
        field_161 = 1;
    }

    // 0x100ba9d60
    void GaiaConnection::WriteTestResultsPackets() {
        eastl::string* pbVar2;
        eastl::string* str;

        uint8_t* this_00 = &field_232;
        if (this_00->empty() == '\0') {
            str = (eastl::string*)this_00->HeapBeginPtr();
            pbVar2 = (eastl::string*)this_00->end();
            for (; str != pbVar2; str = str + 32) {
                WriteStringPacket(*str, 2);
            }
            this_00->clear();
        }
    }

    // 0x100ba9dd0
    void GaiaConnection::WriteIngameConsoleOutputPackets() {
        eastl::string* pbVar2;
        eastl::string* str;

        uint8_t* this_00 = &field_200;
        if (this_00->empty() == '\0') {
            str = (eastl::string*)this_00->HeapBeginPtr();
            pbVar2 = (eastl::string*)this_00->end();
            for (; str != pbVar2; str = str + 32) {
                WriteStringPacket(*str, 1);
            }
            this_00->clear();
        }
    }

    // 0x100ba9e40
    void GaiaConnection::WriteConsoleLogPackets() {
        unsigned long uVar2;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* this_02;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* pbVar3;
        vector<eastl::string> local_58;

        uint8_t* this_00 = &field_168;
        auto this_01 = this_00->HeapBeginPtr();
        vector<eastl::pair<eastl::string, logger::LogLevel>>* local_38 =
            (vector<eastl::pair<eastl::string, logger::LogLevel>>*)this_00;
        auto pbVar1 = this_00->end();
        do {
            if (this_01 == pbVar1) {
                local_38->clear();
                return;
            }
            uVar2 = this_01->size();
            if (uVar2 < 5001) {
                WriteSingleConsoleLogPacket(*this_01, *(LogLevel*)(this_01 + 32));
            } else {
                local_58 = eastl::vector<eastl::string>();
                tokenize<eastl::vector<eastl::string>, eastl::string>(&local_58, this_01, "\n", -1);
                this_02 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)
                              local_58.HeapBeginPtr();
                pbVar3 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)local_58.end();
                for (; this_02 != pbVar3; this_02 = this_02 + 32) {
                    uVar2 = this_02->size();
                    if (5000 < uVar2) {
                        LogAssert("line.size() <= Packet::SMALL",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/"
                                  "gaia/GaiaConnection.cpp",
                                  303, nullptr);
                    }
                    WriteSingleConsoleLogPacket(*this_02, *(LogLevel*)(this_01 + 32));
                }
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100ba9f90
    void GaiaConnection::WritePendingPNGScreenshots() {
        int iVar1;
        Logger* this_03;
        uint64_t uVar2;
        ClientStream* pCVar3;
        unsigned char* arg1;
        unsigned long uVar4;
        long lVar5;
        long lVar6;
        unsigned int uVar7;
        unsigned long arg2;
        unsigned int uVar8;
        int iVar9;
        VBOMapper local_78;
        int local_58;
        long local_50;
        unsigned long local_40;
        eastl::string* local_38;

        auto this_00 = Instance();
        auto this_01 = this_00->SSOBeginPtr();
        auto this_02 = this_01->HeapBeginPtr();
        auto local_48 = this_01->end();
        if (this_02 != local_48) {
            do {
                local_78 = PacketT(5000);
                this_03 = logger::default_logger();
                local_38 = (eastl::string*)&this_02->field_32;
                uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                this_03->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                             "GaiaConnection.cpp",
                             374, "Sending screenshot %s ", uVar2);
                _local_58 = this_02->GetTextureAtlas();
                iVar1 = (int)_local_58;
                iVar9 = iVar1 + 8191;
                if (-1 < iVar1) {
                    iVar9 = iVar1;
                }
                local_40 = this_02->GetTextureAtlas();
                uVar8 = (unsigned int)local_40;
                uVar7 = uVar8 + 8191;
                if (-1 < (int)uVar8) {
                    uVar7 = uVar8;
                }
                local_78.p2<unsigned long>(0);
                local_78.p1<unsigned long>(4);
                local_78.p2<unsigned long>((unsigned short)(iVar9 >> 13));
                local_78.p2<unsigned long>(8192);
                uVar8 = (int)local_40 - (uVar7 & 4294959104);
                local_40 = (unsigned long)uVar8;
                local_78.p2<unsigned long>((unsigned short)uVar8);
                PushString((GaiaConnection*)&local_78, (PacketT<Array<unsigned char> _>*)&local_78, local_38);
                local_38 = (eastl::string*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)(iVar9 >> 13));
                local_50 =
                    WritePacketLengthToHeader((GaiaConnection*)&local_78, (PacketT<Array<unsigned char> _>*)&local_78);
                pCVar3 = (ClientStream*)(*this).operator->();
                arg1 = (unsigned char*)local_78.GetDataPtr();
                uVar4 = local_78.size();
                lVar5 = pCVar3->Write(arg1, uVar4);
                if (lVar5 != local_50) {
                    LogAssert("bytesWritten == packetLength",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/"
                              "gaia/GaiaConnection.cpp",
                              403, nullptr);
                }
                if (8191 < local_58) {
                    uVar4 = (unsigned long)local_38 & 4294967295;
                    lVar5 = 0;
                    do {
                        pCVar3 = (ClientStream*)(*this).operator->();
                        lVar6 = this_02->GetDataPtr();
                        lVar6 = pCVar3->Write((lVar6 + lVar5), 8192);
                        if (lVar6 != 8192) {
                            LogAssert("bytesWritten == PNG_BUFFER_SIZE",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                      "testframework/gaia/GaiaConnection.cpp",
                                      412, nullptr);
                        }
                        pCVar3 = (ClientStream*)(*this).operator->();
                        pCVar3->Flush();
                        lVar5 = lVar5 + 8192;
                        uVar4 = uVar4 - 1;
                    } while (uVar4 != 0);
                }
                pCVar3 = (ClientStream*)(*this).operator->();
                lVar5 = this_02->GetDataPtr();
                this_01 = &local_78;
                arg2 = (unsigned long)(int)local_40;
                uVar4 = pCVar3->Write((unsigned char*)(lVar5 + (long)(int)local_38 * 8192), arg2);
                if (uVar4 != arg2) {
                    LogAssert("bytesWritten == (size_t) remainder",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/"
                              "gaia/GaiaConnection.cpp",
                              421, nullptr);
                }
                pCVar3 = (ClientStream*)(*this).operator->();
                pCVar3->Flush();
                this_01->~VBOMapper();
                this_02 = (TextureAtlasReference*)&this_02[1].field_16;
            } while (this_02 != local_48);
        }
        ((Screengrabber*)this_01->Instance())->ClearRecentScreenshotData();
    }

    // 0x100baa2e0
    void GaiaConnection::WriteStringPacket(const eastl::string& str,
                                           GaiaConnectionClientProt gaiaConnectionClientProt) {
        VBOMapper local_50(5000);
        local_50.p2<unsigned long>(0);
        ((PacketT<Array<unsigned char>>*)(GaiaConnection*)&local_50)->p1<unsigned long>(gaiaConnectionClientProt);
        PushString((GaiaConnection*)&local_50, (PacketT<Array<unsigned char> _>*)&local_50, str);
        long lVar1 = WritePacketLengthToHeader((GaiaConnection*)&local_50, (PacketT<Array<unsigned char> _>*)&local_50);
        ClientStream* pCVar2 = (ClientStream*)(*this).operator->();
        auto arg1 = local_50.GetDataPtr();
        unsigned long arg2 = local_50.size();
        if (pCVar2->Write(arg1, arg2) != lVar1) {
            LogAssert("bytesWritten == packetLength",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                      "GaiaConnection.cpp",
                      449, "Failed to write to Gaia connection for prot: %i", (unsigned long)gaiaConnectionClientProt);
        }
        pCVar2 = (ClientStream*)(*this).operator->();
        pCVar2->Flush();
    }

    // 0x100baa3e0
    void GaiaConnection::WriteSingleConsoleLogPacket(const eastl::string& str, logger::LogLevel logLevel) {
        VBOMapper local_48(5000);
        local_48.p2<unsigned long>(0);
        local_48.p1<unsigned long>(3);
        ((PacketT<Array<unsigned char>>*)(GaiaConnection*)&local_48)->p1<unsigned long>(logLevel);
        PushString((GaiaConnection*)&local_48, (PacketT<Array<unsigned char> _>*)&local_48, str);
        long lVar1 = WritePacketLengthToHeader((GaiaConnection*)&local_48, (PacketT<Array<unsigned char> _>*)&local_48);
        ClientStream* pCVar2 = (ClientStream*)(*this).operator->();
        auto arg1 = local_48.GetDataPtr();
        unsigned long arg2 = local_48.size();
        if (pCVar2->Write(arg1, arg2) != lVar1) {
            LogAssert("bytesWritten == packetLength",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                      "GaiaConnection.cpp",
                      332, "Failed to write to Gaia connection");
        }
        pCVar2 = (ClientStream*)(*this).operator->();
        pCVar2->Flush();
    }

    // 0x100baa620
    void GaiaConnection::PushString(PacketT<Array<unsigned char>>& arg1, const eastl::string& str) {
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned short arg1_00 = PacketT<Array<unsigned char>>::predictLengthPStringNoConversion(str_00, false);
        arg1.p2<unsigned long>(arg1_00);
        arg1.pStringNoConversion<eastl::string>(str, false);
    }

    // 0x100baa660
    unsigned long GaiaConnection::WritePacketLengthToHeader(PacketT<Array<unsigned char>>& arg1) {
        unsigned long arg1_00 = arg1.size();
        if (32767 < (int)arg1_00) {
            LogAssert("(int)bytesWritten < GAIA_CIRCULAR_SND_BUFFER_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                      "GaiaConnection.cpp",
                      461, "Tried to write more than %i bytes to a packet ", 32768);
        }
        arg1.SetPos(0);
        arg1.p2<unsigned long>((short)arg1_00 - 2);
        arg1.SetPos(arg1_00);
        return arg1_00;
    }

} // namespace jag::testframework

namespace jag {
    // 0x100ba8dc0
    shared_ptr_if_not_array<testframework::GaiaLogSink>::type
    make_shared<testframework::GaiaLogSink, testframework::GaiaConnection&>(
        testframework::GaiaConnection& gaiaConnection) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        GaiaLogSink* local_30[2];

        auto arg1 = aligned_alloc(112, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<testframework::GaiaLogSink>::type result;
        } else {
            local_30[0] = placement_new<testframework::GaiaLogSink, testframework::GaiaConnection&>(
                (void*)((long)arg1 + 32), gaiaConnection);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<testframework::GaiaLogSink>, int, testframework::GaiaLogSink*&>(
                    arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag

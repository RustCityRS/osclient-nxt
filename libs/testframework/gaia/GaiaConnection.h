// libs/testframework/gaia/GaiaConnection.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::testframework {
    class GaiaConnection {
    public:
        void SetDoShutdown(std::function<void()>);
        void SetApplicationIsReady();
        GaiaConnection();
        ~GaiaConnection();
        void MainLogic();
        ulong Init(eastl::string const&, eastl::string const&, unsigned char);
        void ProcessIncomingPackets();
        void ProcessOutGoingPackets();
        void SetupConsoleHandling(console::Console*, std::function<void(char const*)>);
        void HandleWelcomeProt(PacketT<Array<unsigned char, eastl::allocator>>&);
        void HandleConsoleCommandProt(PacketT<Array<unsigned char, eastl::allocator>>&);
        void HandleSetTestConfigProt(PacketT<Array<unsigned char, eastl::allocator>>&);
        void HandleRunScriptProt(PacketT<Array<unsigned char, eastl::allocator>>&);
        void HandleScreenshotProt(PacketT<Array<unsigned char, eastl::allocator>>&);
        void HandleShutdownProt();
        void SendApplicationReadyPacket();
        void WriteTestResultsPackets();
        void WriteIngameConsoleOutputPackets();
        void WriteConsoleLogPackets();
        void WritePendingPNGScreenshots();
        void WriteStringPacket(eastl::string const&, GaiaConnectionClientProt);
        void WriteSingleConsoleLogPacket(eastl::string const&, logger::LogLevel);
        void PushString(PacketT<Array<unsigned char, eastl::allocator>>&, eastl::string const&);
        ulong WritePacketLengthToHeader(PacketT<Array<unsigned char, eastl::allocator>>&);
        void EnqueueApplicationConsoleResponse(eastl::string, logger::LogLevel);
        void EnqueueTestResultsResponse(eastl::string const&);
        void EnqueueIngameConsoleResponse(eastl::string);

        // data members, from how the methods use this: 240 bytes
        char _unknown_0[8];
        HistoryListener* field_8; // offset 8
        shared_ptr field_16;      // offset 16
        char _unknown_32[8];
        undefined4 field_40; // offset 40
        PacketT field_44;    // offset 44
        char field_45;       // offset 45
        char _unknown_46[2];
        int field_48;  // offset 48
        uint field_52; // offset 52
        char _unknown_56[104];
        bool field_160;       // offset 160
        undefined1 field_161; // offset 161
        char _unknown_162[78];
    };

    // 0x100b05330, 16 bytes, inline, placed by class name and debug map
    // GaiaConnection::SetDoShutdown(std::function<void ()>)
    /* GaiaConnection::SetDoShutdown(std::function<void ()>) */

    void GaiaConnection::SetDoShutdown(function* param_2) {
        std::function<void()>::operator=((function<void()>*)&field_112, param_2);
    }

    // 0x100b053f0, 16 bytes, inline, placed by class name and debug map
    // GaiaConnection::SetApplicationIsReady()
    void GaiaConnection::SetApplicationIsReady() {
        field_160 = true;
    }

    // 0x100ba9cc0, 32 bytes, inline, placed by class name
    // GaiaConnection::HandleShutdownProt()
    void GaiaConnection::HandleShutdownProt() {
        field_45 = '\x01';
        std::function<void()>::operator()((function<void()>*)&field_112);
    }

    // 0x100baa7b0, 128 bytes, inline, placed by class name
    // GaiaConnection::EnqueueApplicationConsoleResponse(eastl::string, logger::LogLevel)
    void GaiaConnection::EnqueueApplicationConsoleResponse(basic_string* param_2, int param_3) {
        pair<eastl::string, logger::LogLevel> local_50[44];
        int local_24;

        local_24 = param_3;
        eastl::pair<eastl::string, logger::LogLevel>::pair<eastl::string&, logger::LogLevel&, void>(
            local_50, param_2, (LogLevel*)&local_24);
        (&field_168, (pair*)local_50)->push_back();
        local_50->~hash_node();
        if ((local_24 - 1U < 2) && (field_40 == 1)) {
            WriteConsoleLogPackets(this);
        }
    }

    // 0x100bb11f0, 112 bytes, inline, placed by class name
    // GaiaConnection::Init(eastl::string const&, eastl::string const&, unsigned char)::$_1::operator()(eastl::string const&) const
    /* GaiaConnection::Init(eastl::string const&,
   eastl::string const&, unsigned
   char)::$_1::TEMPNAMEPLACEHOLDERVALUE(eastl::string const&) const */

    void GaiaConnection::Init(eastl::stringconst&, eastl::stringconst&,
                              unsigned char)::$_1::operator()(basic_string* param_1) {
        GaiaConnection* this_00;
        undefined8 uVar1;
        undefined8 uVar2;

        this_00 = *(GaiaConnection**)this;
        uVar1 = logger::default_logger();
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(uVar1, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                            "GaiaConnection.cpp",
                            60, "Sending test results back to server: %s", uVar2);
        EnqueueTestResultsResponse(this_00, param_1);
        ProcessOutGoingPackets(this_00);
    }

    // 0x100bb1260, 32 bytes, inline, placed by class name
    // GaiaConnection::EnqueueTestResultsResponse(eastl::string const&)
    void GaiaConnection::EnqueueTestResultsResponse(basic_string* param_1) {
        (&field_232, param_1)->push_back();
    }

    // 0x100bb1c00, 16 bytes, inline, placed by class name
    // GaiaConnection::Init(eastl::string const&, eastl::string const&, unsigned char)::$_2::operator()() const
    /* GaiaConnection::Init(eastl::string const&,
   eastl::string const&, unsigned
   char)::$_2::TEMPNAMEPLACEHOLDERVALUE() const */

    void GaiaConnection::Init(eastl::stringconst&, eastl::stringconst&, unsigned char)::$_2::operator()() {
        ProcessOutGoingPackets(*(GaiaConnection**)this);
    }

    // 0x100bb1d10, 32 bytes, inline, placed by class name
    // GaiaConnection::EnqueueIngameConsoleResponse(eastl::string)
    void GaiaConnection::EnqueueIngameConsoleResponse(basic_string* param_2) {
        (&field_200, param_2)->push_back();
    }

} // namespace jag::testframework

namespace jag::fixedfunction {
    // 0x100b05ae0, 32 bytes, inline, placed by debug map only (low confidence)
    // void function<void (BaseApp*), 128ul, 16ul, (Methods)0>::operator()<GraphicsApp*>(GraphicsApp*&&)
    /* void function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::TEMPNAMEPLACEHOLDERVALUE(BaseApp*&&) const */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::operator()(
        function<void(BaseApp*), 128ul, 16ul, (Methods)0>* this, BaseApp** param_1) {
        (**(code**)this)(this + 16, *param_1);
    }

    // 0x100b05dc0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2, void>(GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_2&&): jumps straight to the base-object constructor

    // 0x100b05dd0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3, void>(GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::$_3&&): jumps straight to the base-object constructor

} // namespace jag::fixedfunction

namespace jag::render {
    // 0x100b06550, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ResourceConfig::ResourceConfig()
    void ResourceConfig::ResourceConfig() {
        field_0 = 2199023256064;
        field_8 = 2199023255584;
        field_16 = 32;
    }

} // namespace jag::render

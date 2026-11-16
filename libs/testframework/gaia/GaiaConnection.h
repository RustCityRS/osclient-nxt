// libs/testframework/gaia/GaiaConnection.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::testframework {
    class GaiaConnection {
    public:
        void SetDoShutdown(std::function<void()> callback);
        void SetApplicationIsReady();
        GaiaConnection();
        ~GaiaConnection();
        void MainLogic();
        unsigned long Init(const eastl::string& str1, const eastl::string& str2, unsigned char arg3);
        void ProcessIncomingPackets();
        void ProcessOutGoingPackets();
        void SetupConsoleHandling(console::Console* console, std::function<void(char const*)> callback);
        void HandleWelcomeProt(PacketT<Array<unsigned char>>& arg1);
        void HandleConsoleCommandProt(PacketT<Array<unsigned char>>& arg1);
        void HandleSetTestConfigProt(PacketT<Array<unsigned char>>& arg1);
        void HandleRunScriptProt(PacketT<Array<unsigned char>>& arg1);
        void HandleScreenshotProt(PacketT<Array<unsigned char>>& arg1);
        void HandleShutdownProt();
        void SendApplicationReadyPacket();
        void WriteTestResultsPackets();
        void WriteIngameConsoleOutputPackets();
        void WriteConsoleLogPackets();
        void WritePendingPNGScreenshots();
        void WriteStringPacket(const eastl::string& str, GaiaConnectionClientProt gaiaConnectionClientProt);
        void WriteSingleConsoleLogPacket(const eastl::string& str, logger::LogLevel logLevel);
        void PushString(PacketT<Array<unsigned char>>& arg1, const eastl::string& str);
        unsigned long WritePacketLengthToHeader(PacketT<Array<unsigned char>>& arg1);
        void EnqueueApplicationConsoleResponse(eastl::string str, logger::LogLevel logLevel);
        void EnqueueTestResultsResponse(const eastl::string& str);
        void EnqueueIngameConsoleResponse(eastl::string str);

    private:
        uint8_t _unknown_0[8];
        Console* field_8;
        shared_ptr field_16;
        uint8_t _unknown_32[8];
        uint32_t field_40;
        unsigned char field_44;
        char field_45;
        uint8_t _unknown_46[2];
        int field_48;
        unsigned int field_52;
        uint8_t _unknown_56[104];
        bool field_160;
        uint8_t field_161;
        uint8_t _unknown_162[78];
    };

    // 0x100b05330
    void GaiaConnection::SetDoShutdown(std::function<void()> callback) {
        field_112 = *callback;
    }

    // 0x100b053f0
    void GaiaConnection::SetApplicationIsReady() {
        field_160 = true;
    }

    // 0x100ba9cc0
    void GaiaConnection::HandleShutdownProt() {
        field_45 = '\x01';
        std::function<void()>::operator()((function<void()>*)&field_112);
    }

    // 0x100baa7b0
    void GaiaConnection::EnqueueApplicationConsoleResponse(eastl::string str, logger::LogLevel logLevel) {
        pair<eastl::string, logger::LogLevel> local_50;

        local_50.pair<eastl::string&, logger::LogLevel&, void>(*str, logLevel);
        field_168.push_back(local_50);
        if ((logLevel - 1 < 2) && (field_40 == 1)) {
            WriteConsoleLogPackets();
        }
    }

    // 0x100bb11f0
    void GaiaConnection::Init(eastl::string const&, eastl::string const&,
                              unsigned char)::$_1::operator()(const eastl::string& str) const {
        GaiaConnection* this_00 = *(GaiaConnection**)this;
        auto this_01 = logger::default_logger();
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        this_01->Log(false, 8,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/gaia/"
                     "GaiaConnection.cpp",
                     60, "Sending test results back to server: %s", uVar1);
        EnqueueTestResultsResponse(this_00, str);
        ProcessOutGoingPackets(this_00);
    }

    // 0x100bb1260
    void GaiaConnection::EnqueueTestResultsResponse(const eastl::string& str) {
        field_232.push_back(str);
    }

    // 0x100bb1c00
    void GaiaConnection::Init(eastl::string const&, eastl::string const&, unsigned char)::$_2::operator()() const {
        ProcessOutGoingPackets(*(GaiaConnection**)this);
    }

    // 0x100bb1d10
    void GaiaConnection::EnqueueIngameConsoleResponse(eastl::string str) {
        field_200.push_back(*str);
    }

} // namespace jag::testframework

namespace jag::fixedfunction {
    // 0x100b05ae0
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::operator()<GraphicsApp*>(GraphicsApp*&& arg1) {
        (**(void (**)(...))this)(this + 16, arg1);
    }

} // namespace jag::fixedfunction

namespace jag::render {
    // 0x100b06550
    ResourceConfig::ResourceConfig() : field_0(2199023256064), field_8(2199023255584), field_16(32) {}

} // namespace jag::render

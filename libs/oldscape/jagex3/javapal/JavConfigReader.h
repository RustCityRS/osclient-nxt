// libs/oldscape/jagex3/javapal/JavConfigReader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class HardcodedMessages {
    public:
        void AddMessages(int arg1, eastl::hash_map<eastl::string, eastl::string> arg2);
    };

    class JavConfigReader {
    public:
        ~JavConfigReader();
        JavConfigReader(const eastl::string& str);
        unsigned long Process(int arg1);
        void ProcessData();
        uint64_t GetAppletConfig(const eastl::string& str) const;
        uint8_t* GetUniversalConfig() const;
        uint8_t* GetLanguageMessages();
        eastl::string* GetUrl() const;
        void ParseParam(const eastl::string& str, AppletConfig& appletConfig);
        void ParseMsg(const eastl::string& str, AppletConfig& appletConfig);
        void ParseOurConfig(const ConfigParameter& configParameter, AppletConfig& appletConfig);

        uint8_t _unknown_0[280];
    };

    // 0x100127340
    JavConfigReader::~JavConfigReader() {
        field_272.~list();
        field_240.~list();
        field_40.~AppletConfig();
        field_32.~unique_ptr();
    }

    // 0x100127520
    AppletConfig::~AppletConfig() {
        field_144.~hash_map();
        field_88.~hash_map();
        field_32.~hash_map();
    }

    // 0x1002dd4e0
    bool JavConfigReader::GetAppletConfig(eastl::string const&) const ::$_0::operator()(
        const AppletConfig& appletConfig) const {
        return appletConfig.compare(
                   *(basic_string<char, eastl::fixed_vector_allocator<1ul, _64ul, _1ul, _0ul, true> _>**)this) == 0;
    }

} // namespace jag::oldscape

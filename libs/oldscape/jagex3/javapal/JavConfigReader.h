// libs/oldscape/jagex3/javapal/JavConfigReader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class HardcodedMessages {
    public:
        void AddMessages(int, eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                              eastl::equal_to<eastl::string>, eastl::allocator, false>);
    };

    class JavConfigReader {
    public:
        ~JavConfigReader();
        JavConfigReader(eastl::string const&);
        ulong Process(int);
        void ProcessData();
        GetAppletConfig(eastl::string const&) const;
        GetUniversalConfig() const;
        GetLanguageMessages();
        JavConfigReader* GetUrl() const;
        void ParseParam(eastl::string const&, AppletConfig&);
        void ParseMsg(eastl::string const&, AppletConfig&);
        void ParseOurConfig(ConfigParameter const&, AppletConfig&);

        // data members, from how the methods use this: 280 bytes
        char _unknown_0[280];
    };

    // 0x100127330, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // JavConfigReader::~JavConfigReader(): jumps straight to the base-object destructor

    // 0x100127340, 80 bytes, base-object destructor, inline, placed by class name and debug map
    // JavConfigReader::~JavConfigReader()
    void JavConfigReader::~JavConfigReader() {
        (&field_272)->~list();
        (&field_240)->~list();
        (&field_40)->~AppletConfig();
        (&field_32)->~unique_ptr();
        ~basic_string();
    }

    // 0x1001273b0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // AppletConfig::~AppletConfig(): jumps straight to the base-object destructor

    // 0x100127520, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // AppletConfig::~AppletConfig()
    void AppletConfig::~AppletConfig() {
        (&field_144)->~hash_map();
        (&field_88)->~hash_map();
        (&field_32)->~hash_map();
        ~basic_string();
    }

    // 0x1002dd4e0, 32 bytes, inline, placed by class name
    // JavConfigReader::GetAppletConfig(eastl::string const&) const::$_0::operator()(AppletConfig const&) const
    /* JavConfigReader::GetAppletConfig(eastl::string
   const&) const::$_0::TEMPNAMEPLACEHOLDERVALUE(AppletConfig const&) const */

    _func_GetAppletConfig_basic_string_ptr* const ::$_0::operator()(AppletConfig * param_1) {
        undefined8 uVar1;

        uVar1 = param_1->compare();
        return (_func_GetAppletConfig_basic_string_ptr*)CONCAT71((int7)((ulong)uVar1 >> 8), (int)uVar1 == 0);
    }

} // namespace jag::oldscape

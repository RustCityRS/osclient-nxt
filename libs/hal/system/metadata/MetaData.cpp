// libs/hal/system/metadata/MetaData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.metadata

namespace jag {
    class MetaData {
    public:
        void SetKeyValue(MetaDataKey, char const*, ...);
        void AddLog(char const*, ...);
        void SetUserID(eastl::string const&);
        void SetKeyValue(MetaDataKey, eastl::string const&);
        void SetKeyValue(MetaDataKey, int);
        void SetKeyValue(MetaDataKey, long);
        void SetKeyValue(MetaDataKey, float);
        void SetKeyValue(MetaDataKey, double);
        void SetKeyValue(MetaDataKey, bool);
        void AddLog(eastl::string const&);
    };

    // 0x100c5f930, 16 bytes, placed by class name and debug map
    // MetaData::SetKeyValue(MetaData::MetaDataKey, char const*, ...)
    void MetaData::SetKeyValue(void...) {}

    // 0x100c5f940, 16 bytes, placed by class name and debug map
    // MetaData::AddLog(char const*, ...)
    void MetaData::AddLog(char* param_1, ...) {}

    // 0x100c5f950, 16 bytes, placed by class name and debug map
    // MetaData::SetUserID(eastl::string const&)
    void MetaData::SetUserID(basic_string* param_1) {}

    // 0x100c5f960, 16 bytes, placed by class name and debug map
    // MetaData::SetKeyValue(MetaData::MetaDataKey, eastl::string const&)
    void MetaData::SetKeyValue() {}

    // 0x100c5f970, 16 bytes, placed by class name and debug map
    // MetaData::SetKeyValue(MetaData::MetaDataKey, int)
    void MetaData::SetKeyValue() {}

    // 0x100c5f980, 16 bytes, placed by class name and debug map
    // MetaData::SetKeyValue(MetaData::MetaDataKey, long)
    void MetaData::SetKeyValue() {}

    // 0x100c5f990, 16 bytes, placed by class name and debug map
    // MetaData::SetKeyValue(MetaData::MetaDataKey, float)
    void MetaData::SetKeyValue() {}

    // 0x100c5f9a0, 16 bytes, placed by class name and debug map
    // MetaData::SetKeyValue(MetaData::MetaDataKey, double)
    void MetaData::SetKeyValue() {}

    // 0x100c5f9b0, 16 bytes, placed by class name and debug map
    // MetaData::SetKeyValue(MetaData::MetaDataKey, bool)
    void MetaData::SetKeyValue() {}

    // 0x100c5f9c0, 16 bytes, placed by class name and debug map
    // MetaData::AddLog(eastl::string const&)
    void MetaData::AddLog(basic_string* param_1) {}

} // namespace jag

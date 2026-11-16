// libs/hal/system/metadata/MetaData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.metadata

namespace jag {
    class MetaData {
    public:
        void SetKeyValue(MetaDataKey metaDataKey, const char* str, ...);
        void AddLog(const char* str, ...);
        void SetUserID(const eastl::string& str);
        void SetKeyValue(MetaDataKey metaDataKey, const eastl::string& str);
        void SetKeyValue(MetaDataKey metaDataKey, int arg2);
        void SetKeyValue(MetaDataKey metaDataKey, long arg2);
        void SetKeyValue(MetaDataKey metaDataKey, float arg2);
        void SetKeyValue(MetaDataKey metaDataKey, double arg2);
        void SetKeyValue(MetaDataKey metaDataKey, bool arg2);
        void AddLog(const eastl::string& str);

        uint8_t _unknown_0[1];
    };

    // 0x100c5f930
    void MetaData::SetKeyValue(MetaData::MetaDataKey metaDataKey, const char* str, ...) {}

    // 0x100c5f940
    void MetaData::AddLog(const char* str, ...) {}

    // 0x100c5f950
    void MetaData::SetUserID(const eastl::string& str) {}

    // 0x100c5f960
    void MetaData::SetKeyValue(MetaData::MetaDataKey metaDataKey, const eastl::string& str) {}

    // 0x100c5f970
    void MetaData::SetKeyValue(MetaData::MetaDataKey metaDataKey, int arg2) {}

    // 0x100c5f980
    void MetaData::SetKeyValue(MetaData::MetaDataKey metaDataKey, long arg2) {}

    // 0x100c5f990
    void MetaData::SetKeyValue(MetaData::MetaDataKey metaDataKey, float arg2) {}

    // 0x100c5f9a0
    void MetaData::SetKeyValue(MetaData::MetaDataKey metaDataKey, double arg2) {}

    // 0x100c5f9b0
    void MetaData::SetKeyValue(MetaData::MetaDataKey metaDataKey, bool arg2) {}

    // 0x100c5f9c0
    void MetaData::AddLog(const eastl::string& str) {}

} // namespace jag

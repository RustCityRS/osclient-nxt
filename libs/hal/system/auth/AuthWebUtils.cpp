// libs/hal/system/auth/AuthWebUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.auth

namespace jag::auth::web {
    class AuthWebUtils {
    public:
        void ConfigureBasicAuthHeader(std::unique_ptr<http::HTTPRequest>& httpRequest, const eastl::string& str);
        void ConfigureBasicHeader(std::unique_ptr<http::HTTPRequest>& httpRequest, const char* str1, const char* str2);
        void ConfigureBasicJsonHeader(std::unique_ptr<http::HTTPRequest>& httpRequest, const eastl::string& str);
        void DecodeJSONResponseFromPacket(Json::Value& value, PacketT<Array<unsigned char>>& arg2);
    };

    // 0x1003b03b0
    void AuthWebUtils::ConfigureBasicAuthHeader(std::unique_ptr<http::HTTPRequest>& httpRequest,
                                                const eastl::string& str) {
        auto hTTPRequest = httpRequest.operator->();
        char* str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        hTTPRequest->AddHTTPHeader("Authorization", str2);
        ConfigureBasicHeader(httpRequest, "application/x-www-form-urlencoded", "application/json");
    }

    // 0x1003b0410
    void AuthWebUtils::ConfigureBasicHeader(std::unique_ptr<http::HTTPRequest>& httpRequest, const char* str1,
                                            const char* str2) {
        auto pHVar1 = httpRequest.operator->();
        pHVar1->AddHTTPHeader("Content-Type", str1);
        pHVar1 = (HTTPRequest*)httpRequest.operator->();
        pHVar1->AddHTTPHeader("Accept", str2);
    }

    // 0x1003b0460
    void AuthWebUtils::ConfigureBasicJsonHeader(std::unique_ptr<http::HTTPRequest>& httpRequest,
                                                const eastl::string& str) {
        auto hTTPRequest = httpRequest.operator->();
        char* str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        hTTPRequest->AddHTTPHeader("Authorization", str2);
        ConfigureBasicHeader(httpRequest, "application/json", "application/json");
    }

    // 0x1003b04b0
    void AuthWebUtils::DecodeJSONResponseFromPacket(Json::Value& value, PacketT<Array<unsigned char>>& arg2) {
        uint64_t uVar3;
        unsigned int arg2_01;
        stringstream local_2b0;

        fixed_string<char, 256> local_150;
        auto pcVar2 = arg2.GetDataPtr();
        unsigned long arg2_00 = arg2.GetTextureAtlas();
        stringtools::CP1252ToUTF8<eastl::fixed_string<char, 256>>(pcVar2, arg2_00, local_150);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::string::string<decltype(nullptr)>(&local_198, pcVar2);
        new (&local_2b0) std::stringstream(&local_198, arg2_01);
        std::string::~string(&local_198);
        CharReaderBuilder local_198;
        string local_168;
        if (Json::parseFromStream(local_198, local_2b0, value, &local_168) == '\0') {
            uVar3 = std::string::c_str(&local_168);
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                            "AuthWebUtils.cpp",
                            45, "Error - Could not parse provided OAuth2Tokens: %s", uVar3);
        }
        std::string::~string(&local_168);
        std::stringstream::~stringstream(&local_2b0);
    }

} // namespace jag::auth::web

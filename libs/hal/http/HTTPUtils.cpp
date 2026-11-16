// libs/hal/http/HTTPUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.http

namespace jag::http {
    // 0x100ad9130
    void ConfigureBasicAuthHeader(std::unique_ptr<HTTPRequest>& httpRequest, const eastl::string& str) {
        auto hTTPRequest = httpRequest.operator->();
        char* str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        hTTPRequest->AddHTTPHeader("Authorization", str2);
        ConfigureBasicHeader(httpRequest, "application/x-www-form-urlencoded", "application/json");
    }

    // 0x100ad9190
    void ConfigureBasicHeader(std::unique_ptr<HTTPRequest>& httpRequest, const char* str1, const char* str2) {
        auto pHVar1 = httpRequest.operator->();
        pHVar1->AddHTTPHeader("Content-Type", str1);
        pHVar1 = (HTTPRequest*)httpRequest.operator->();
        pHVar1->AddHTTPHeader("Accept", str2);
    }

    // 0x100ad91e0
    void ConfigureBasicJsonHeader(std::unique_ptr<HTTPRequest>& httpRequest, const eastl::string& str) {
        auto hTTPRequest = httpRequest.operator->();
        char* str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        hTTPRequest->AddHTTPHeader("Authorization", str2);
        ConfigureBasicHeader(httpRequest, "application/json", "application/json");
    }

    // 0x100ad9230
    void DecodeJSONResponseFromArray(Json::Value& value, const Array<unsigned char>& arg2) {
        uint64_t uVar3;
        unsigned int arg2_01;
        stringstream local_2b8;

        fixed_string<char, 256> local_158;
        auto pcVar2 = arg2.data();
        unsigned long arg2_00 = arg2.end();
        stringtools::CP1252ToUTF8<eastl::fixed_string<char, 256>>(pcVar2, arg2_00, local_158);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::string::string<decltype(nullptr)>(&local_1a0, pcVar2);
        new (&local_2b8) std::stringstream(&local_1a0, arg2_01);
        std::string::~string(&local_1a0);
        CharReaderBuilder local_1a0;
        string local_170;
        if (Json::parseFromStream(local_1a0, local_2b8, value, &local_170) == '\0') {
            uVar3 = std::string::c_str(&local_170);
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/HTTPUtils.cpp", 42,
                "Error - Could not parse provided input: %s", uVar3);
        }
        std::string::~string(&local_170);
        std::stringstream::~stringstream(&local_2b8);
    }

} // namespace jag::http

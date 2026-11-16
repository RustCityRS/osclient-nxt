// libs/hal/system/auth/AuthWebUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.auth

namespace jag::auth::web {
    class AuthWebUtils {
    public:
        void ConfigureBasicAuthHeader(std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>&,
                                      eastl::string const&);
        void ConfigureBasicHeader(std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>&,
                                  char const*, char const*);
        void ConfigureBasicJsonHeader(std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>&,
                                      eastl::string const&);
        void DecodeJSONResponseFromPacket(Json::Value&, PacketT<Array<unsigned char, eastl::allocator>>&);
    };

    // 0x1003b03b0, 96 bytes, placed by class name and debug map
    // AuthWebUtils::ConfigureBasicAuthHeader(std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest> >&, eastl::string const&)
    /* AuthWebUtils::ConfigureBasicAuthHeader(std::unique_ptr<http::HTTPRequest,
   std::default_delete<http::HTTPRequest> >&, eastl::string
   const&) */

    void AuthWebUtils::ConfigureBasicAuthHeader(unique_ptr* param_1, basic_string* param_2) {
        HTTPRequest* this;
        char* pcVar1;

        this = (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)param_1);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        AddHTTPHeader("Authorization", pcVar1);
        ConfigureBasicHeader(param_1, "application/x-www-form-urlencoded", "application/json");
    }

    // 0x1003b0410, 80 bytes, placed by class name and debug map
    // AuthWebUtils::ConfigureBasicHeader(std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest> >&, char const*, char const*)
    /* AuthWebUtils::ConfigureBasicHeader(std::unique_ptr<http::HTTPRequest,
   std::default_delete<http::HTTPRequest> >&, char const*, char const*) */

    void AuthWebUtils::ConfigureBasicHeader(unique_ptr* param_1, char* param_2, char* param_3) {
        HTTPRequest* pHVar1;

        pHVar1 = (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)param_1);
        pHVar1->AddHTTPHeader("Content-Type", param_2);
        pHVar1 = (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)param_1);
        pHVar1->AddHTTPHeader("Accept", param_3);
    }

    // 0x1003b0460, 80 bytes, placed by class name and debug map
    // AuthWebUtils::ConfigureBasicJsonHeader(std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest> >&, eastl::string const&)
    /* AuthWebUtils::ConfigureBasicJsonHeader(std::unique_ptr<http::HTTPRequest,
   std::default_delete<http::HTTPRequest> >&, eastl::string
   const&) */

    void AuthWebUtils::ConfigureBasicJsonHeader(unique_ptr* param_1, basic_string* param_2) {
        HTTPRequest* this;
        char* pcVar1;

        this = (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)param_1);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        AddHTTPHeader("Authorization", pcVar1);
        ConfigureBasicHeader(param_1, "application/json", "application/json");
    }

    // 0x1003b04b0, 416 bytes, placed by class name and debug map
    // AuthWebUtils::DecodeJSONResponseFromPacket(Json::Value&, PacketT<Array<unsigned char, eastl::allocator> >&)
    void AuthWebUtils::DecodeJSONResponseFromPacket(Value* param_1, PacketT* param_2) {
        char* pcVar2;
        ulong uVar3;
        undefined8 uVar4;
        uint extraout_EDX;
        stringstream local_2b0[280];
        string local_198[48];
        string local_168[24];
        fixed_string<char, 256, true, eastl::allocator> local_150[296];
        undefined8 local_28;

        local_28 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_150);
        pcVar2 = (char*)param_2->GetDataPtr();
        uVar3 = param_2->GetTextureAtlas();
        stringtools::CP1252ToUTF8<eastl::fixed_string<char, 256, true, eastl::allocator>>(pcVar2, uVar3,
                                                                                          (fixed_string*)local_150);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::string::string<decltype(nullptr)>(local_198, pcVar2);
        std::stringstream::stringstream(local_2b0, local_198, extraout_EDX);
        std::string::~string(local_198);
        new (local_198) Json::CharReaderBuilder();
        std::string::string(local_168);
        if (Json::parseFromStream((Factory*)local_198, (istream*)local_2b0, param_1, local_168) == '\0') {
            uVar4 = std::string::c_str(local_168);
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                            "AuthWebUtils.cpp",
                            45, "Error - Could not parse provided OAuth2Tokens: %s", uVar4);
        }
        std::string::~string(local_168);
        local_198->~CharReaderBuilder();
        std::stringstream::~stringstream(local_2b0);
        /* WARNING: Subroutine does not return */
        local_150->~fixed_string();
    }

} // namespace jag::auth::web

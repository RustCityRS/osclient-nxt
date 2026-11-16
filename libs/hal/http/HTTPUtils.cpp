// libs/hal/http/HTTPUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.http

namespace jag::http {
    // 0x100ad9130, 96 bytes, placed by debug map only (low confidence)
    // ConfigureBasicAuthHeader(std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest> >&, eastl::string const&)
    /* ConfigureBasicAuthHeader(std::unique_ptr<HTTPRequest,
   std::default_delete<HTTPRequest> >&, eastl::string
   const&) */

    void ConfigureBasicAuthHeader(unique_ptr* param_1, basic_string* param_2) {
        HTTPRequest* this;
        char* pcVar1;

        this = (HTTPRequest*)std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>::operator->(
            (unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>*)param_1);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        AddHTTPHeader("Authorization", pcVar1);
        ConfigureBasicHeader(param_1, "application/x-www-form-urlencoded", "application/json");
    }

    // 0x100ad9190, 80 bytes, placed by debug map only (low confidence)
    // ConfigureBasicHeader(std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest> >&, char const*, char const*)
    /* ConfigureBasicHeader(std::unique_ptr<HTTPRequest,
   std::default_delete<HTTPRequest> >&, char const*, char const*) */

    void ConfigureBasicHeader(unique_ptr* param_1, char* param_2, char* param_3) {
        HTTPRequest* pHVar1;

        pHVar1 = (HTTPRequest*)std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>::operator->(
            (unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>*)param_1);
        pHVar1->AddHTTPHeader("Content-Type", param_2);
        pHVar1 = (HTTPRequest*)std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>::operator->(
            (unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>*)param_1);
        pHVar1->AddHTTPHeader("Accept", param_3);
    }

    // 0x100ad91e0, 80 bytes, placed by debug map only (low confidence)
    // ConfigureBasicJsonHeader(std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest> >&, eastl::string const&)
    /* ConfigureBasicJsonHeader(std::unique_ptr<HTTPRequest,
   std::default_delete<HTTPRequest> >&, eastl::string
   const&) */

    void ConfigureBasicJsonHeader(unique_ptr* param_1, basic_string* param_2) {
        HTTPRequest* this;
        char* pcVar1;

        this = (HTTPRequest*)std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>::operator->(
            (unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>*)param_1);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        AddHTTPHeader("Authorization", pcVar1);
        ConfigureBasicHeader(param_1, "application/json", "application/json");
    }

    // 0x100ad9230, 432 bytes, placed by debug map only (low confidence)
    // DecodeJSONResponseFromArray(Json::Value&, Array<unsigned char, eastl::allocator> const&)
    void DecodeJSONResponseFromArray(Value* param_1, Array* param_2) {
        char* pcVar2;
        ulong uVar3;
        undefined8 uVar4;
        uint extraout_EDX;
        stringstream local_2b8[280];
        string local_1a0[48];
        string local_170[24];
        fixed_string<char, 256, true, eastl::allocator> local_158[296];
        undefined8 local_30;

        local_30 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_158);
        pcVar2 = (char*)param_2->data();
        uVar3 = param_2->end();
        stringtools::CP1252ToUTF8<eastl::fixed_string<char, 256, true, eastl::allocator>>(pcVar2, uVar3,
                                                                                          (fixed_string*)local_158);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::string::string<decltype(nullptr)>(local_1a0, pcVar2);
        std::stringstream::stringstream(local_2b8, local_1a0, extraout_EDX);
        std::string::~string(local_1a0);
        new (local_1a0) Json::CharReaderBuilder();
        std::string::string(local_170);
        if (Json::parseFromStream((Factory*)local_1a0, (istream*)local_2b8, param_1, local_170) == '\0') {
            uVar4 = std::string::c_str(local_170);
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/HTTPUtils.cpp", 42,
                "Error - Could not parse provided input: %s", uVar4);
        }
        std::string::~string(local_170);
        local_1a0->~CharReaderBuilder();
        std::stringstream::~stringstream(local_2b8);
        /* WARNING: Subroutine does not return */
        local_158->~fixed_string();
    }

} // namespace jag::http

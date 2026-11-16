// libs/oldscape/rs2lib/util/HttpSpriteData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "HttpSpriteData.h"

namespace jag::oldscape::rs2lib {
    // 0x100009d50: HttpSpriteData::GetSprite() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x1001fc330
    HttpSpriteData::HttpSpriteData(const eastl::string& str) {
        *this = std::make_unique<http::HTTPRequest>();
        new (field_8) shared_ptr();
        if (str.empty() == '\0') {
            ((HTTPRequest*)(*this).operator->())->Get(str);
        }
    }

    // 0x1001fc420
    HttpSpriteData::HttpSpriteData(std::unique_ptr<http::HTTPRequest>&& httpRequest)
        : std::unique_ptr<http::HTTPRequest>(httpRequest) {}

    // 0x1001fc470
    HttpSpriteData::HttpSpriteData(const http::HTTPRequest& httpRequest) {
        unique_ptr<true, void>(httpRequest);
        new (field_8) shared_ptr();
        if ((uint8_t*)ServiceRequest(httpRequest) == DataStatus::NOTLOADED) {
            LogAssert("status != DataStatus::NOTLOADED",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/"
                      "HttpSpriteData.cpp",
                      28, "Passed an incomplete HTTPRequest to HttpSpriteData");
        }
    }

    // 0x1001fc510
    uint8_t* HttpSpriteData::ServiceRequest(const http::HTTPRequest& httpRequest) {
        Array<unsigned char>* arg1;
        Logger* this_01;
        uint64_t uVar4;
        ReturnValue local_38;

        unsigned int uVar2 = httpRequest.GetState();
        uint8_t** ppuVar5 = &DataStatus::MISSING;
        if ((uVar2 & 4294967293) != 0) {
            if (uVar2 == 1) {
                if (((basic_string<char, BucketAllocatorEASTL>*)httpRequest.GetContentType())->compare("image/png") ==
                    0) {
                    arg1 = (Array<unsigned char>*)httpRequest.GetMSAASampleCount();
                    local_38 = javapal::Pix32Tools::createPix32FromPNGData(*arg1);
                    *field_8 = local_38;
                }
                if (field_8->operator_cast_to_bool() == '\0') {
                    this_01 = logger::default_logger();
                    uVar4 = httpRequest.GetText();
                    this_01->Log(false, 8,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                 "rs2lib/util/HttpSpriteData.cpp",
                                 77, "Unable to load HTTP image received from \'%s\'", uVar4);
                } else {
                    ppuVar5 = &DataStatus::READY;
                }
            } else {
                ppuVar5 = &DataStatus::NOTLOADED;
            }
        }
        return *ppuVar5;
    }

    // 0x1001fc620
    uint8_t* HttpSpriteData::Service() {
        uint8_t** ppuVar2;
        HTTPRequest* httpRequest;
        uint8_t* puVar3;

        if (!(field_8->operator_cast_to_bool())) {
            if (operator_cast_to_bool()) {
                httpRequest = (HTTPRequest*)**this;
                puVar3 = (uint8_t*)ServiceRequest(*httpRequest);
                if ((puVar3 == DataStatus::MISSING) || (puVar3 == DataStatus::READY)) {
                    reset(httpRequest);
                    return puVar3;
                }
                return puVar3;
            }
            ppuVar2 = &DataStatus::MISSING;
        } else {
            ppuVar2 = &DataStatus::READY;
        }
        return *ppuVar2;
    }

} // namespace jag::oldscape::rs2lib

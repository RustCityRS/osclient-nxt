// libs/oldscape/rs2lib/util/HttpSpriteData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "HttpSpriteData.h"

namespace jag::oldscape::rs2lib {
    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    HttpSpriteData::GetSprite() const;

    // 0x1001fc330, 112 bytes, base-object constructor, placed by class name and debug map
    // HttpSpriteData::HttpSpriteData(eastl::string const&)
    void HttpSpriteData::HttpSpriteData(basic_string* param_1) {
        basic_string* pbVar1;

        std::make_unique<http::HTTPRequest>();
        new (field_8, (_func_decltype_nullptr*)param_1) shared_ptr<worldmap::WorldmapAreaMetadata>();
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
            '\0') {
            pbVar1 =
                (basic_string*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this);
            pbVar1->Get();
        }
    }

    // 0x1001fc410, 16 bytes, complete-object constructor, placed by class name and debug map
    // HttpSpriteData::HttpSpriteData(eastl::string const&): jumps straight to the base-object constructor

    // 0x1001fc420, 48 bytes, base-object constructor, placed by class name and debug map
    // HttpSpriteData::HttpSpriteData(std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest> >&&)
    /* HttpSpriteData::HttpSpriteData(std::unique_ptr<http::HTTPRequest,
   std::default_delete<http::HTTPRequest> >&&) */

    void HttpSpriteData::HttpSpriteData(unique_ptr* param_1) {
        new (this) std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>(param_1);
        new (field_8, (_func_decltype_nullptr*)param_1) shared_ptr<worldmap::WorldmapAreaMetadata>();
    }

    // 0x1001fc460, 16 bytes, complete-object constructor, placed by class name and debug map
    // HttpSpriteData::HttpSpriteData(std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest> >&&): jumps straight to the base-object constructor

    // 0x1001fc470, 144 bytes, base-object constructor, placed by class name and debug map
    // HttpSpriteData::HttpSpriteData(http::HTTPRequest const&)
    void HttpSpriteData::HttpSpriteData(HTTPRequest* param_1) {
        std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::unique_ptr<true, void>(
            (_func_decltype_nullptr*)this);
        new (field_8, (_func_decltype_nullptr*)param_1) shared_ptr<worldmap::WorldmapAreaMetadata>();
        if ((undefined*)ServiceRequest(this, param_1) == DataStatus::NOTLOADED) {
            /* WARNING: Subroutine does not return */
            LogAssert("status != DataStatus::NOTLOADED",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/"
                      "HttpSpriteData.cpp",
                      28, "Passed an incomplete HTTPRequest to HttpSpriteData");
        }
    }

    // 0x1001fc510, 256 bytes, placed by class name and debug map
    // HttpSpriteData::ServiceRequest(http::HTTPRequest const&)
    undefined* HttpSpriteData::ServiceRequest(HTTPRequest* param_1) {
        uint uVar2;
        basic_string<char, BucketAllocatorEASTL>* this_00;
        Array* pAVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined** ppuVar7;
        shared_ptr local_38;

        uVar2 = param_1->GetState();
        ppuVar7 = &DataStatus::MISSING;
        if ((uVar2 & 4294967293) != 0) {
            if (uVar2 == 1) {
                this_00 = (basic_string<char, BucketAllocatorEASTL>*)param_1->GetContentType();
                if (eastl::basic_string<char, BucketAllocatorEASTL>::compare(this_00, "image/png") == 0) {
                    pAVar4 = (Array*)param_1->GetMSAASampleCount();
                    local_38.createPix32FromPNGData(pAVar4);
                    shared_ptr<graphics::Pix32>::operator=((shared_ptr<graphics::Pix32>*)field_8, &local_38);
                    local_38.~shared_ptr();
                }
                if (field_8->operator_cast_to_bool()) {
                    ppuVar7 = &DataStatus::READY;
                } else {
                    uVar5 = logger::default_logger();
                    uVar6 = param_1->GetText();
                    logger::Logger::Log(uVar5, 0, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "oldscape/rs2lib/util/HttpSpriteData.cpp",
                                        77, "Unable to load HTTP image received from \'%s\'", uVar6);
                }
            } else {
                ppuVar7 = &DataStatus::NOTLOADED;
            }
        }
        return *ppuVar7;
    }

    // 0x1001fc610, 16 bytes, complete-object constructor, placed by class name and debug map
    // HttpSpriteData::HttpSpriteData(http::HTTPRequest const&): jumps straight to the base-object constructor

    // 0x1001fc620, 128 bytes, placed by class name and debug map
    // HttpSpriteData::Service()
    undefined* HttpSpriteData::Service() {
        bool bVar1;
        undefined** ppuVar2;
        HTTPRequest* pHVar3;
        undefined* puVar4;

        bVar1 = field_8->operator_cast_to_bool();
        if (bVar1) {
            ppuVar2 = &DataStatus::READY;
        } else {
            bVar1 = operator_cast_to_bool();
            if (bVar1) {
                pHVar3 =
                    (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator*(
                        (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this);
                puVar4 = (undefined*)ServiceRequest(this, pHVar3);
                if ((puVar4 == DataStatus::MISSING) || (puVar4 == DataStatus::READY)) {
                    reset(pHVar3);
                    return puVar4;
                }
                return puVar4;
            }
            ppuVar2 = &DataStatus::MISSING;
        }
        return *ppuVar2;
    }

} // namespace jag::oldscape::rs2lib

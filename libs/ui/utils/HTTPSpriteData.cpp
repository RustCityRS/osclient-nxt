// libs/ui/utils/HTTPSpriteData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "HTTPSpriteData.h"

namespace jag::ui {
    // 0x100f3e6c0, set at startup by ___cxx_global_var_init.625
    eastl::fixed_string<char, 512> HTTPSpriteData::m_defaultBaseURL = fixed_string<char, 512>();

    // 0x1000b7910: HTTPSpriteData::GetTexture() const has the same machine code as oldscape::minimenu::MinimenuEntry::GetSubjectName() const

    // 0x100676720
    HTTPSpriteData::HTTPSpriteData(int arg1)
        : eastl::basic_string<char, BucketAllocatorEASTL>(), field_24(arg1), field_32(0), field_40(0) {
        field_48.unique_ptr<true, void>();
        new (m_texture) shared_ptr();
    }

    // 0x1006767b0
    HTTPSpriteData::HTTPSpriteData(eastl::basic_string<char, BucketAllocatorEASTL>&& str)
        : eastl::basic_string<char, BucketAllocatorEASTL>(str), field_24(4294967295), field_32(0), field_40(0) {
        field_48.unique_ptr<true, void>();
        new (m_texture) shared_ptr();
    }

    // 0x100676820
    uint8_t* HTTPSpriteData::Service(StringView stringView) {
        uint8_t* this_01;
        bool cVar2;
        HTTPRequest* pHVar3;
        unsigned long uVar4;
        uint64_t uVar5;
        char* pcVar6;
        uint8_t** ppuVar7;
        ReturnValue local_460;

        uint8_t* this_00 = m_texture;
        bool cVar1 = this_00->operator_cast_to_bool();
        if (!cVar1) {
            this_01 = &field_48;
            cVar1 = this_01->operator_cast_to_bool();
            if (!cVar1) {
                bucket_make_unique<http::HTTPRequest>(&local_460);
                *this_01 = local_460;
                pcVar6 = (char*)field_32;
                if (pcVar6 != nullptr) {
                    pHVar3 = (HTTPRequest*)(*this_01).operator->();
                    pHVar3->SetProxyUserName(pcVar6);
                    pHVar3 = (HTTPRequest*)(*this_01).operator->();
                    pHVar3->SetProxyPassword(field_40);
                }
                cVar1 = empty();
                cVar2 = stringView->empty();
                if (cVar1) {
                    if (cVar2) {
                        LogAssert("!baseURL.empty()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/"
                                  "HTTPSpriteData.cpp",
                                  40, nullptr);
                    }
                    if (field_24 == 4294967295) {
                        LogAssert("m_imageID != -1",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/"
                                  "HTTPSpriteData.cpp",
                                  41, nullptr);
                    }
                    local_460 = eastl::fixed_string<char, 1024>();
                    uVar4 = stringView->HeapBeginPtr();
                    uVar5 = stringView->end();
                    local_460.sprintf("%.*s/img/image_%d.png", uVar4 & 4294967295, uVar5, (unsigned long)field_24);
                    pHVar3 = (HTTPRequest*)(*this_01).operator->();
                    pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    pHVar3->Get(pcVar6);
                }
                if (!cVar2) {
                    LogAssert("baseURL.empty()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/"
                              "HTTPSpriteData.cpp",
                              49, nullptr);
                }
                pHVar3 = (HTTPRequest*)(*this_01).operator->();
                pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pHVar3->Get(pcVar6);
            }
            pHVar3 = (HTTPRequest*)this_01->get();
            MakeTextureFromRequest(&local_460, pHVar3);
            *this_00 = local_460;
            cVar1 = this_00->operator_cast_to_bool();
            ppuVar7 = &DataStatus::NOTLOADED;
            if (cVar1) {
                this_01->reset(nullptr);
            }
        } else {
            ppuVar7 = &DataStatus::READY;
        }
        return *ppuVar7;
    }

    // 0x100676b40
    auto HTTPSpriteData::MakeTextureFromRequest(const http::HTTPRequest* httpRequest) {
        LoginManager* loginManager;
        bool cVar1;
        char cVar2;
        unsigned int arg2;
        unsigned int uVar4;
        unsigned int arg4;
        uint32_t uVar5;
        uint32_t uVar6;
        Logger* pLVar7;
        uint64_t uVar8;
        char* str2;
        uint8_t auVar9[16];
        uint64_t in_stack_ffffffffffffff38;
        uint64_t in_stack_ffffffffffffff40;
        uint8_t local_98[8];

        uint32_t uVar10 = (uint32_t)((unsigned long)in_stack_ffffffffffffff38 >> 32);
        uint32_t uVar11 = (uint32_t)((unsigned long)in_stack_ffffffffffffff40 >> 32);
        if (httpRequest == nullptr) {
            pLVar7 = logger::default_logger();
            pLVar7->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/HTTPSpriteData.cpp", 69,
                "Attempting to create a texture from a null request");
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/HTTPSpriteData.cpp", 70,
                nullptr);
        }
        int iVar3 = httpRequest->GetState();
        if (iVar3 == 2) {
            pLVar7 = logger::default_logger();
            uVar8 = httpRequest->GetText();
            str2 = "Failed to download image from \'%s\' over HTTP";
            iVar3 = 105;
        LAB_100676c6a:
            pLVar7->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/HTTPSpriteData.cpp",
                iVar3, str2, uVar8);
        } else if (iVar3 == 1) {
            iVar3 = ((basic_string<char, BucketAllocatorEASTL>*)httpRequest->GetContentType())->compare("image/png");
            if (iVar3 != 0) {
                pLVar7 = logger::default_logger();
                httpRequest->GetContentType();
                uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                httpRequest->GetText();
                str2 = "Received an unsupported content type (\'%s\') for HTTP image at \'%s\'";
                iVar3 = 99;
                goto LAB_100676c6a;
            }
            new ((local_98 + 8)) RGBAImage();
            auVar9 = httpRequest->GetMSAASampleCount();
            ((local_98 + 8))->LoadFromMemory(*auVar9._0_8_, *auVar9._8_8_);
            iVar3 = ((local_98 + 8))->GetX();
            if (iVar3 < 4097) {
                iVar3 = ((local_98 + 8))->GetZ();
                if (4096 < iVar3)
                    goto LAB_100676da6;
                cVar1 = ((local_98 + 8))->GetX();
                cVar2 = ((local_98 + 8))->GetZ();
                new (local_98) callstack::Callstack();
                local_98->AddFormatType(5);
                loginManager = (LoginManager*)(local_98 + 8);
                arg2 = loginManager->GetX();
                uVar4 = loginManager->GetZ();
                arg4 = ((Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)
                            loginManager->GetDevCredentialsOutputDirectory())
                           ->data();
                graphicutils::CreateHALTexture2D<render::Texture2D>(
                    (unsigned int)&result, arg2, (unsigned char*)(unsigned long)uVar4, arg4, 1,
                    (bool)(cVar1 * cVar2 * '\x04'), false, true, (TextureFormatBitSet)0, local_98._0_4_);
            } else {
            LAB_100676da6:
                pLVar7 = logger::default_logger();
                uVar5 = ((local_98 + 8))->GetX();
                uVar6 = ((local_98 + 8))->GetZ();
                uVar8 = httpRequest->GetText();
                pLVar7->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/HTTPSpriteData.cpp",
                    93, "Received an invalid/unsupported size (%dx%d) for HTTP image at \'%s\'",
                    (((uint64_t)uVar10 << 32) | (uint32_t)uVar5), (((uint64_t)uVar11 << 32) | (uint32_t)uVar6), uVar8);
                auto result;
            }
            ((local_98 + 8))->~RGBAImage();
            goto LAB_100676c7b;
        }
        new (&result) shared_ptr();
    LAB_100676c7b:
        return result;
    }

} // namespace jag::ui

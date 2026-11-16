// libs/ui/utils/HTTPSpriteData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "HTTPSpriteData.h"

namespace jag::ui {
    // 0x100f3e6c0, 560 bytes, __data; set at startup by ___cxx_global_var_init.625
    eastl::fixed_string<char, 512, true, eastl::allocator> HTTPSpriteData::m_defaultBaseURL =
        fixed_string<char, 512, true, eastl::allocator>();

    // 0x1000b7910: the linker folded this into oldscape::minimenu::MinimenuEntry::GetSubjectName() const, which has identical code
    shared_ptr HTTPSpriteData::GetTexture() const;

    // 0x100676720, 96 bytes, base-object constructor, placed by class name
    // HTTPSpriteData::HTTPSpriteData(int)
    void HTTPSpriteData::HTTPSpriteData(int param_1) {
        undefined4 in_register_00000034;

        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        field_24 = param_1;
        field_32 = (char*)0;
        field_40 = (char*)0;
        std::unique_ptr<http::HTTPRequest, BucketDeleter<http::HTTPRequest>>::unique_ptr<true, void>(
            (unique_ptr<http::HTTPRequest, BucketDeleter<http::HTTPRequest>>*)&field_48);
        new (m_texture, (_func_decltype_nullptr*)CONCAT44(in_register_00000034)
                            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1));
    }

    // 0x1006767a0, 16 bytes, complete-object constructor, placed by class name
    // HTTPSpriteData::HTTPSpriteData(int): jumps straight to the base-object constructor

    // 0x1006767b0, 96 bytes, base-object constructor, placed by class name
    // HTTPSpriteData::HTTPSpriteData(eastl::basic_string<char, BucketAllocatorEASTL>&&)
    void HTTPSpriteData::HTTPSpriteData(basic_string* param_1) {
        new (this) eastl::basic_string<char, BucketAllocatorEASTL>();
        field_24 = 4294967295;
        field_32 = (char*)0;
        field_40 = (char*)0;
        std::unique_ptr<http::HTTPRequest, BucketDeleter<http::HTTPRequest>>::unique_ptr<true, void>(
            (unique_ptr<http::HTTPRequest, BucketDeleter<http::HTTPRequest>>*)&field_48);
        new (m_texture, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x100676810, 16 bytes, complete-object constructor, placed by class name
    // HTTPSpriteData::HTTPSpriteData(eastl::basic_string<char, BucketAllocatorEASTL>&&): jumps straight to the base-object constructor

    // 0x100676820, 608 bytes, placed by class name
    // HTTPSpriteData::Service(StringView)
    undefined* HTTPSpriteData::Service(StringView param_1) {
        undefined1* this_00;
        undefined1* this_01;
        bool bVar1;
        char cVar2;
        char cVar3;
        HTTPRequest* pHVar4;
        ulong uVar5;
        undefined8 uVar6;
        char* pcVar7;
        undefined** ppuVar8;
        SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                    std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>* this_02;
        HTTPSpriteData local_460[14];
        long local_38;

        this_02 = (SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                               std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>*)
                      param_1.field_0;
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = m_texture;
        bVar1 = this_00->operator_cast_to_bool();
        if (bVar1) {
            ppuVar8 = &DataStatus::READY;
        } else {
            this_01 = &field_48;
            bVar1 = this_01->operator_cast_to_bool();
            if (!bVar1) {
                bucket_make_unique<http::HTTPRequest>((jag*)local_460);
                std::unique_ptr<http::HTTPRequest, BucketDeleter<http::HTTPRequest>>::operator=(
                    (unique_ptr<http::HTTPRequest, BucketDeleter<http::HTTPRequest>>*)this_01, (unique_ptr*)local_460);
                local_460->~unique_ptr();
                pcVar7 = field_32;
                if (pcVar7 != (char*)0) {
                    pHVar4 =
                        (HTTPRequest*)std::unique_ptr<http::HTTPRequest, BucketDeleter<http::HTTPRequest>>::operator->(
                            (unique_ptr<http::HTTPRequest, BucketDeleter<http::HTTPRequest>>*)this_01);
                    pHVar4->SetProxyUserName(pcVar7);
                    pHVar4 =
                        (HTTPRequest*)std::unique_ptr<http::HTTPRequest, BucketDeleter<http::HTTPRequest>>::operator->(
                            (unique_ptr<http::HTTPRequest, BucketDeleter<http::HTTPRequest>>*)this_01);
                    pHVar4->SetProxyPassword(field_40);
                }
                cVar2 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                cVar3 = this_02->empty();
                if (cVar2 != '\0') {
                    if (cVar3 != '\0') {
                        /* WARNING: Subroutine does not return */
                        LogAssert("!baseURL.empty()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/"
                                  "HTTPSpriteData.cpp",
                                  40, (char*)0);
                    }
                    if (field_24 == 4294967295) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("m_imageID != -1",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/"
                                  "HTTPSpriteData.cpp",
                                  41, (char*)0);
                    }
                    new (local_460) eastl::fixed_string<char, 1024, true, eastl::allocator>();
                    uVar5 = this_02->HeapBeginPtr();
                    uVar6 = this_02->end();
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 1024ul, 1ul, 0ul, true, eastl::allocator>>::
                        sprintf((char*)local_460, "%.*s/img/image_%d.png", uVar5 & 4294967295, uVar6, (ulong)field_24);
                    pHVar4 =
                        (HTTPRequest*)std::unique_ptr<http::HTTPRequest, BucketDeleter<http::HTTPRequest>>::operator->(
                            (unique_ptr<http::HTTPRequest, BucketDeleter<http::HTTPRequest>>*)this_01);
                    pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    pHVar4->Get(pcVar7);
                    /* WARNING: Subroutine does not return */
                    local_460->~fixed_string();
                }
                if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("baseURL.empty()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/"
                              "HTTPSpriteData.cpp",
                              49, (char*)0);
                }
                pHVar4 = (HTTPRequest*)std::unique_ptr<http::HTTPRequest, BucketDeleter<http::HTTPRequest>>::operator->(
                    (unique_ptr<http::HTTPRequest, BucketDeleter<http::HTTPRequest>>*)this_01);
                pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pHVar4->Get(pcVar7);
            }
            pHVar4 = (HTTPRequest*)this_01->get();
            MakeTextureFromRequest(local_460, pHVar4);
            shared_ptr<render::Texture2D>::operator=((shared_ptr<render::Texture2D>*)this_00, (shared_ptr*)local_460);
            local_460->~shared_ptr();
            bVar1 = this_00->operator_cast_to_bool();
            ppuVar8 = &DataStatus::NOTLOADED;
            if (bVar1) {
                this_01->reset(0);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return *ppuVar8;
    }

    // 0x100676b40, 768 bytes, placed by class name
    // HTTPSpriteData::MakeTextureFromRequest(http::HTTPRequest const*)
    HTTPSpriteData* HTTPSpriteData::MakeTextureFromRequest(HTTPRequest* param_1) {
        LoginManager* this_00;
        int iVar1;
        int iVar2;
        uint uVar3;
        uint uVar4;
        uint uVar5;
        undefined4 uVar6;
        undefined4 uVar7;
        basic_string<char, BucketAllocatorEASTL>* this_01;
        undefined8 uVar8;
        undefined8 uVar9;
        Array* pAVar10;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_02;
        undefined8 uVar11;
        char* pcVar12;
        undefined8 in_stack_ffffffffffffff38;
        undefined4 uVar13;
        undefined8 in_stack_ffffffffffffff40;
        undefined4 uVar14;
        uint in_stack_ffffffffffffff60;
        undefined1 local_98[8];
        RGBAImage local_90;
        long local_38;

        uVar13 = (undefined4)((ulong)in_stack_ffffffffffffff38 >> 32);
        uVar14 = (undefined4)((ulong)in_stack_ffffffffffffff40 >> 32);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_1 == (HTTPRequest*)0) {
            uVar8 = logger::default_logger();
            logger::Logger::Log(
                uVar8, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/HTTPSpriteData.cpp", 69,
                "Attempting to create a texture from a null request");
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/HTTPSpriteData.cpp", 70,
                (char*)0);
        }
        iVar1 = param_1->GetState();
        if (iVar1 == 2) {
            uVar8 = logger::default_logger();
            uVar9 = param_1->GetText();
            pcVar12 = "Failed to download image from \'%s\' over HTTP";
            uVar11 = 105;
        LAB_100676c6a:
            logger::Logger::Log(
                uVar8, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/HTTPSpriteData.cpp",
                uVar11, pcVar12, uVar9);
        } else if (iVar1 == 1) {
            this_01 = (basic_string<char, BucketAllocatorEASTL>*)param_1->GetContentType();
            iVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::compare(this_01, "image/png");
            if (iVar1 != 0) {
                uVar8 = logger::default_logger();
                param_1->GetContentType();
                uVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                param_1->GetText();
                pcVar12 = "Received an unsupported content type (\'%s\') for HTTP image at \'%s\'";
                uVar11 = 99;
                goto LAB_100676c6a;
            }
            new ((local_98 + 8)) RGBAImage();
            pAVar10 = (Array*)param_1->GetMSAASampleCount();
            PNGDecoder::LoadFromMemory((RGBAImage*)(local_98 + 8), pAVar10);
            iVar1 = ((local_98 + 8))->GetX();
            if (iVar1 < 4097) {
                iVar1 = ((local_98 + 8))->GetZ();
                if (4096 < iVar1)
                    goto LAB_100676da6;
                iVar1 = ((local_98 + 8))->GetX();
                iVar2 = ((local_98 + 8))->GetZ();
                new (local_98) callstack::Callstack();
                local_98->AddFormatType(5);
                this_00 = (LoginManager*)(local_98 + 8);
                uVar3 = this_00->GetX();
                uVar4 = this_00->GetZ();
                this_02 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                 std::default_delete<LoadingScreenScript::AnimLayer>>,
                                 eastl::allocator>*)this_00->GetDevCredentialsOutputDirectory();
                uVar5 = this_02->data();
                graphicutils::CreateHALTexture2D<render::Texture2D>(
                    (shared_ptr*)this, (graphicutils*)(ulong)uVar3, uVar4, uVar5, &DAT_00000001, iVar1 * iVar2 * 4, 0,
                    true, false, (bool)local_98[0], (TextureFormatBitSet)0, in_stack_ffffffffffffff60);
            } else {
            LAB_100676da6:
                uVar8 = logger::default_logger();
                uVar6 = ((local_98 + 8))->GetX();
                uVar7 = ((local_98 + 8))->GetZ();
                uVar9 = param_1->GetText();
                logger::Logger::Log(
                    uVar8, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/HTTPSpriteData.cpp",
                    93, "Received an invalid/unsupported size (%dx%d) for HTTP image at \'%s\'",
                    CONCAT44(uVar13, uVar6), CONCAT44(uVar14, uVar7), uVar9);
                new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
            }
            ((local_98 + 8))->~RGBAImage();
            goto LAB_100676c7b;
        }
        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
    LAB_100676c7b:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x100680bf0, 128 bytes, placed by the data it initialises
    // ___cxx_global_var_init.625
    void ___cxx_global_var_init_625() {
        if (*PTR_m_defaultBaseURL_100ee4650 == '\0') {
            if (___cxa_guard_acquire(PTR_m_defaultBaseURL_100ee4650) != 0) {
                new (PTR_m_defaultBaseURL_100ee6410) eastl::fixed_string<char, 512, true, eastl::allocator>();
                ___cxa_atexit(PTR__fixed_string_100ee6c98, PTR_m_defaultBaseURL_100ee6410, 4294967296);
                ___cxa_guard_release(PTR_m_defaultBaseURL_100ee4650);
            }
        }
    }

} // namespace jag::ui

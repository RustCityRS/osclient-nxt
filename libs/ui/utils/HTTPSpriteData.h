// libs/ui/utils/HTTPSpriteData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class HTTPSpriteData {
    public:
        GetTexture() const;
        HTTPSpriteData(int);
        HTTPSpriteData(eastl::basic_string<char, BucketAllocatorEASTL>&&);
        Service(StringView);
        HTTPSpriteData* MakeTextureFromRequest(http::HTTPRequest const*);
        ~HTTPSpriteData();
        static eastl::fixed_string<char, 512, true, eastl::allocator> /* 560 bytes */
            m_defaultBaseURL; // = fixed_string<char,512,true,eastl::allocator>()

        // data members, from how the methods use this: 72 bytes
        char _unknown_0[24];
        uint field_24; // offset 24
        char _unknown_28[4];
        char* field_32; // offset 32
        char* field_40; // offset 40
        char _unknown_48[8];
        shared_ptr field_56; // offset 56
    };

    // 0x1006db500, 16 bytes, complete-object destructor, inline, placed by class name
    // HTTPSpriteData::~HTTPSpriteData(): jumps straight to the base-object destructor

    // 0x1006db510, 48 bytes, base-object destructor, inline, placed by class name
    // HTTPSpriteData::~HTTPSpriteData()
    void HTTPSpriteData::~HTTPSpriteData() {
        field_56->~shared_ptr();
        (&field_48)->~unique_ptr();
        ~basic_string();
    }

} // namespace jag::ui

namespace jag {
    // 0x100676aa0, 96 bytes, inline, placed by debug map only (low confidence)
    // std::enable_if<!std::is_array<http::HTTPRequest>::value, std::unique_ptr<http::HTTPRequest, BucketDeleter<http::HTTPRequest> > >::type bucket_make_unique<http::HTTPRequest>()
    /* std::enable_if<!std::is_array<http::HTTPRequest>::value,
   std::unique_ptr<http::HTTPRequest, BucketDeleter<http::HTTPRequest> > >::type
   bucket_make_unique<http::HTTPRequest>() */

    jag* bucket_make_unique<http::HTTPRequest>() {
        HTTPRequest* this_00;

        this_00 = (HTTPRequest*)BucketManager::Allocate(664, 0, 16);
        if (this_00 == (HTTPRequest*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "ptr != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/make_unique.h",
                37, (char*)0);
        }
        http::HTTPRequest::HTTPRequest(this_00, 0);
        std::unique_ptr<http::HTTPRequest, BucketDeleter<http::HTTPRequest>>::unique_ptr<true, void>(this, this_00);
        return this;
    }

} // namespace jag

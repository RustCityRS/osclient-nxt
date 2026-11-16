// libs/ui/utils/HTTPSpriteData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class HTTPSpriteData {
    public:
        shared_ptr GetTexture() const;
        HTTPSpriteData(int arg1);
        HTTPSpriteData(eastl::string&& str);
        uint8_t* Service(StringView stringView);
        auto MakeTextureFromRequest(const http::HTTPRequest* httpRequest);
        ~HTTPSpriteData();
        static eastl::fixed_string<char, 512> m_defaultBaseURL; // = fixed_string<char, 512>()

    private:
        uint8_t _unknown_0[24];
        unsigned int field_24;
        uint8_t _unknown_28[4];
        uint64_t field_32;
        uint64_t field_40;
        uint8_t _unknown_48[8];
        shared_ptr m_texture;
    };

    // 0x1006db510
    HTTPSpriteData::~HTTPSpriteData() {
        m_texture->~shared_ptr();
        field_48.~unique_ptr();
    }

} // namespace jag::ui

namespace jag {
    // 0x100676aa0
    std::enable_if<!std::is_array<http::HTTPRequest>::value,
                   std::unique_ptr<http::HTTPRequest, BucketDeleter<http::HTTPRequest>>>::type
    bucket_make_unique<http::HTTPRequest>() {
        std::enable_if<!std::is_array<http::HTTPRequest>::value,
                       std::unique_ptr<http::HTTPRequest, BucketDeleter<http::HTTPRequest>>>::type result;
        __good_rval_ref_type* good_rval_ref_type;

        auto hTTPRequest = BucketManager::Allocate(664, 0, 16);
        if (hTTPRequest == nullptr) {
            LogAssert(
                "ptr != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/make_unique.h",
                37, nullptr);
        }
        new (hTTPRequest) http::HTTPRequest(0);
        result.unique_ptr<true, void>(hTTPRequest, good_rval_ref_type);
        return result;
    }

} // namespace jag

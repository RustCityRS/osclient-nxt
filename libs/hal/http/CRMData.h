// libs/hal/http/CRMData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.rs2lib

namespace jag::http {
    class CRMData {
    public:
        class ActionInfo;
        class ClientDataProvider;
        class ImageElement;
        class LabelElement;
        int GetCRMRequestState() const;
        uint8_t* GetActionInfo() const;
        auto GetImageElements() const;
        auto GetLabelElements() const;
        CRMData();
        ~CRMData();
        uint32_t Request(std::basic_string_view<char> str, ClientDataProvider* clientDataProvider);
        uint64_t RefreshRequest();
        void ResetData();
        unkbyte9 GetMetadataValue(const eastl::string& str) const;
        void ServiceRequests();
        void ExtractDataFromJSON(const Json::Value& value);
        void ExtractImageInfo(const Json::Value& value);
        void ExtractTextInfo(const Json::Value& value);
        void ExtractBehaviour(const Json::Value& value);
        void ExtractMetadata(const Json::Value& value);
        void ClearImageDataRequests();
        void ExtractBounds(const Json::Value& value, std::array<float, 4ul>& arg2, const char* str);
        unsigned long SetFromJSON(const eastl::string& str);
        static float m_debugSpamEndpointRequests[4]; // = { 0, 0, 0, 0 }

    private:
        int m_cRMRequestState;
        uint8_t _unknown_4[36];
        long* field_40;
        uint8_t _unknown_48[120];
        uint64_t field_168;
        uint64_t field_176;
        uint8_t _unknown_184[128];
    };

    class CRMData::ActionInfo {
    public:
        class PayloadEntry;
        ActionInfo();
        ~ActionInfo();

    private:
        uint8_t _unknown_0[56];
        uint64_t field_56;
        uint64_t field_64;
    };

    class CRMData::ActionInfo::PayloadEntry {
    public:
        ~PayloadEntry();
        PayloadEntry(PayloadEntry&& payloadEntry);

        uint8_t _unknown_0[32];
    };

    class CRMData::ClientDataProvider {
    public:
        // virtual methods in vtable order
        virtual ~ClientDataProvider();
        virtual uint64_t GetEndpointURL(eastl::string& str1, std::basic_string_view<char> str2) const;
        ClientDataProvider();
    };

    class CRMData::ImageElement {
    public:
        ~ImageElement();
        ImageElement(const eastl::string& str);
        ImageElement(ImageElement&& imageElement);

    private:
        uint8_t _unknown_0[8];
        uint64_t field_8;
        uint64_t field_16;
    };

    class CRMData::LabelElement {
    public:
        ~LabelElement();
        char GetAlign(const std::string& str);
        LabelElement(eastl::string&& str);
        LabelElement(LabelElement&& labelElement);

    private:
        uint8_t _unknown_0[24];
        uint64_t field_24;
        uint64_t field_32;
        uint64_t field_40;
        uint8_t field_48;
    };

    // 0x100128980
    CRMData::ClientDataProvider::ClientDataProvider() {}

    // 0x1001289a0
    uint64_t CRMData::ClientDataProvider::GetEndpointURL(eastl::string& str1, std::basic_string_view<char> str2) const {
        basic_string_view<char, std::char_traits<char> _>* local_30[2];

        local_30[0] = str2;
        unsigned long uVar1 = local_30->size();
        uint64_t uVar2 = local_30->data();
        str1.sprintf("%.*s", uVar1 & 4294967295, uVar2);
        return 1;
    }

    // 0x1001fb280
    uint8_t* CRMData::GetActionInfo() const {
        return &field_112;
    }

    // 0x1002040e0
    auto CRMData::GetImageElements() const {
        auto result;
        result.WrapArray<eastl::vector<CRMData::ImageElement>>(field_184);
        return result;
    }

    // 0x100204100
    auto CRMData::GetLabelElements() const {
        auto result;
        result.WrapArray<eastl::vector<CRMData::LabelElement>>(field_216);
        return result;
    }

    // 0x10021deb0
    CRMData::CRMData() : m_cRMRequestState(-1) {
        uint8_t* local_40 = &field_8;
        new (local_40) eastl::string();
        field_40 = nullptr;
        &field_48->unique_ptr<true, void>();
        new (&field_64) std::function<bool(WrapArray<unsigned char const>)>();
        new (&field_112) ActionInfo();
        new (&field_184) eastl::vector<CRMData::ImageElement>();
        new (&field_216) eastl::vector<CRMData::LabelElement>();
        new (&field_248) eastl::hash_map<eastl::basic_string<char, BucketAllocatorEASTL>,
                                         std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>>(local_48);
        new (&field_304) std::vector<std::unique_ptr<HTTPRequest>>();
    }

    // 0x10021e0b0
    CRMData::ActionInfo::ActionInfo()
        : eastl::basic_string<char, BucketAllocatorEASTL>(), field_56(0), field_64(4575657222473777152) {}

    // 0x10021e3e0
    CRMData::ActionInfo::~ActionInfo() {
        field_24.~vector();
    }

    // 0x10021e5e0
    CRMData::~CRMData() {
        field_304.~vector();
        field_248.~hash_map();
        field_216.~vector();
        field_184.~vector();
        field_112.~ActionInfo();
        field_64.~function();
        field_48.~unique_ptr();
        field_8.~basic_string();
    }

    // 0x100ada8c0
    CRMData::ActionInfo::PayloadEntry::~PayloadEntry() {
        ((this + 24))->~variant();
    }

    // 0x100adc250
    CRMData::ImageElement::~ImageElement() {
        ~unique_ptr();
    }

    // 0x100adc6e0
    CRMData::ImageElement::ImageElement(const eastl::string& str) {
        HTTPRequest* pHVar1 = (HTTPRequest*)operator new(664);
        new (pHVar1) HTTPRequest(0);
        unique_ptr<true, void>(pHVar1);
        field_8 = 0;
        field_16 = 4575657222473777152;
        pHVar1 = (HTTPRequest*)(*this).operator->();
        pHVar1->Get(str);
    }

    // 0x100adc910
    CRMData::ImageElement::ImageElement(CRMData::ImageElement&& imageElement)
        : std::unique_ptr<HTTPRequest>(imageElement) {
        uint64_t uVar1 = imageElement.field_16;
        field_8 = imageElement.field_8;
        field_16 = uVar1;
    }

    // 0x100adca60
    CRMData::LabelElement::LabelElement(eastl::basic_string<char, BucketAllocatorEASTL>&& str)
        : eastl::basic_string<char, BucketAllocatorEASTL>(str), field_24(0), field_32(4575657222473777152),
          field_40(4294967297), field_48(0) {}

    // 0x100adcc40
    CRMData::LabelElement::LabelElement(CRMData::LabelElement&& labelElement)
        : eastl::basic_string<char, BucketAllocatorEASTL>(labelElement) {
        uint64_t uVar1 = labelElement.field_24;
        uint64_t uVar2 = labelElement.field_32;
        uint64_t uVar3 = *(uint64_t*)((long)&labelElement.field_40 + 1);
        *(uint64_t*)((long)&field_32 + 1) = *(uint64_t*)((long)&labelElement.field_32 + 1);
        *(uint64_t*)((long)&field_40 + 1) = uVar3;
        field_24 = uVar1;
        field_32 = uVar2;
    }

    // 0x100adced0
    CRMData::ActionInfo::PayloadEntry::PayloadEntry(CRMData::ActionInfo::PayloadEntry&& payloadEntry)
        : eastl::basic_string<char, BucketAllocatorEASTL>(payloadEntry), field_24(payloadEntry.field_24) {}

} // namespace jag::http

namespace jag::graphics {
    // 0x1001fb280: LayeredAnimationStateMachineLayerDescriptor::GetBlendVar() const has the same machine code as http::CRMData::GetActionInfo() const

} // namespace jag::graphics

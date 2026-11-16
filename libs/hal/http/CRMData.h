// libs/hal/http/CRMData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.rs2lib

namespace jag::http {
    class CRMData {
    public:
        class ActionInfo;
        class ClientDataProvider;
        class ImageElement;
        class LabelElement;
        GetCRMRequestState() const;
        GetActionInfo() const;
        GetImageElements() const;
        GetLabelElements() const;
        CRMData();
        ~CRMData();
        Request(std::basic_string_view<char, std::char_traits<char>>, ClientDataProvider*);
        RefreshRequest();
        void ResetData();
        unkbyte9 GetMetadataValue(eastl::basic_string<char, BucketAllocatorEASTL> const&) const;
        void ServiceRequests();
        void ExtractDataFromJSON(Json::Value const&);
        void ExtractImageInfo(Json::Value const&);
        void ExtractTextInfo(Json::Value const&);
        void ExtractBehaviour(Json::Value const&);
        void ExtractMetadata(Json::Value const&);
        void ClearImageDataRequests();
        void ExtractBounds(Json::Value const&, std::array<float, 4ul>&, char const*);
        ulong SetFromJSON(eastl::string const&);
        static /* 16 bytes */ m_debugSpamEndpointRequests; // = { 0, 0, 0, 0 }

        // data members, from how the methods use this: 312 bytes
        int field_0; // offset 0
        char _unknown_4[36];
        undefined8 field_40; // offset 40
        char _unknown_48[120];
        undefined8 field_168; // offset 168
        undefined8 field_176; // offset 176
        char _unknown_184[128];
    };

    class CRMData::ActionInfo {
    public:
        class PayloadEntry;
        ActionInfo();
        ~ActionInfo();

        // data members, from how the methods use this: 72 bytes
        char _unknown_0[56];
        undefined8 field_56; // offset 56
        undefined8 field_64; // offset 64
    };

    class CRMData::ActionInfo::PayloadEntry {
    public:
        ~PayloadEntry();
        PayloadEntry(PayloadEntry&&);

        // data members, from how the methods use this: 32 bytes
        char _unknown_0[32];
    };

    class CRMData::ClientDataProvider {
    public:
        // virtual methods in vtable order
        virtual ~ClientDataProvider();
        virtual GetEndpointURL(eastl::string&, std::basic_string_view<char, std::char_traits<char>>) const;
        ClientDataProvider();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    class CRMData::ImageElement {
    public:
        ~ImageElement();
        ImageElement(eastl::string const&);
        ImageElement(ImageElement&&);

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[8];
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
    };

    class CRMData::LabelElement {
    public:
        ~LabelElement();
        char GetAlign(std::string const&);
        LabelElement(eastl::basic_string<char, BucketAllocatorEASTL>&&);
        LabelElement(LabelElement&&);

        // data members, from how the methods use this: 49 bytes
        char _unknown_0[24];
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        undefined8 field_40; // offset 40
        undefined1 field_48; // offset 48
    };

    // 0x100128980, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // CRMData::ClientDataProvider::ClientDataProvider()
    void CRMData::ClientDataProvider::ClientDataProvider() {
        field_0 = PTR_vtable_100ee8600 + 16;
    }

    // 0x1001289a0, 96 bytes, inline, placed by class name and debug map
    // CRMData::ClientDataProvider::GetEndpointURL(eastl::string&, std::basic_string_view<char, std::char_traits<char> >) const
    /* CRMData::ClientDataProvider::GetEndpointURL(eastl::basic_string<char,
   eastl::allocator>&, std::basic_string_view<char, std::char_traits<char> >) const */

    undefined8 CRMData::ClientDataProvider::GetEndpointURL(undefined8 param_1_00, char* param_1, undefined8 param_3,
                                                           undefined8 param_4) {
        ulong uVar1;
        undefined8 uVar2;
        undefined8 local_30;
        undefined8 local_28;

        local_30 = param_3;
        local_28 = param_4;
        uVar1 = local_30.size();
        uVar2 = local_30.data();
        eastl::string::sprintf(param_1, &DAT_100e4fcf3, uVar1 & 4294967295, uVar2);
        return 1;
    }

    // 0x1001fb280, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // CRMData::GetActionInfo() const
    /* oldscape::dash3d::NXTRenderCanvas::GetPixelBuffer() */

    undefined1* oldscape::dash3d::NXTRenderCanvas::GetPixelBuffer() {
        return &field_112;
    }

    // 0x1002040e0, 32 bytes, inline, placed by class name
    // CRMData::GetImageElements() const
    CRMData* CRMData::GetImageElements() {
        long in_RSI;

        WrapArray<CRMData::ImageElement_const>::WrapArray<eastl::vector<CRMData::ImageElement, eastl::allocator>>(
            (WrapArray<CRMData::ImageElement_const>*)this, (vector*)(in_RSI + 184));
        return this;
    }

    // 0x100204100, 32 bytes, inline, placed by class name
    // CRMData::GetLabelElements() const
    CRMData* CRMData::GetLabelElements() {
        long in_RSI;

        WrapArray<CRMData::LabelElement_const>::WrapArray<eastl::vector<CRMData::LabelElement, eastl::allocator>>(
            (WrapArray<CRMData::LabelElement_const>*)this, (vector*)(in_RSI + 216));
        return this;
    }

    // 0x10021de90, 16 bytes, complete-object constructor, inline, placed by class name
    // CRMData::CRMData(): jumps straight to the base-object constructor

    // 0x10021dea0, 16 bytes, complete-object destructor, inline, placed by class name
    // CRMData::~CRMData(): jumps straight to the base-object destructor

    // 0x10021deb0, 256 bytes, base-object constructor, inline, placed by class name
    // CRMData::CRMData()
    void CRMData::CRMData() {
        allocator local_48[8];
        undefined1* local_40;
        undefined1* local_38;

        field_0 = -1;
        local_40 = &field_8;
        new (local_40) eastl::string();
        field_40 = 0;
        local_38 = &field_48;
        std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>::unique_ptr<true, void>(
            (unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>*)local_38);
        std::function<bool(WrapArray<unsigned char const>)>::function(
            (function<bool(WrapArray<unsigned char const>)>*)&field_64);
        new (&field_112) ActionInfo();
        new (&field_184) eastl::vector<CRMData::ImageElement, eastl::allocator>();
        new (&field_216) eastl::vector<CRMData::LabelElement, eastl::allocator>();
        eastl::allocator::allocator(local_48, "EASTL hash_map");
        new (&field_248, local_48) eastl::hash_map<eastl::basic_string<char, BucketAllocatorEASTL>,
                                                   std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>,
                                                   eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>,
                                                   eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>,
                                                   eastl::allocator, false>();
        new (&field_304) std::vector<std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>,
                                     std::allocator<std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>>>();
    }

    // 0x10021dfd0, 16 bytes, complete-object constructor, inline, placed by class name
    // CRMData::ActionInfo::ActionInfo(): jumps straight to the base-object constructor

    // 0x10021e040, 16 bytes, complete-object destructor, inline, placed by class name
    // CRMData::ActionInfo::~ActionInfo(): jumps straight to the base-object destructor

    // 0x10021e0b0, 64 bytes, base-object constructor, inline, placed by class name
    // CRMData::ActionInfo::ActionInfo()
    void CRMData::ActionInfo::ActionInfo() {
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        new (&field_24) eastl::vector<CRMData::ActionInfo::PayloadEntry, eastl::allocator>();
        field_56 = 0;
        field_64 = 4575657222473777152;
    }

    // 0x10021e3e0, 48 bytes, base-object destructor, inline, placed by class name
    // CRMData::ActionInfo::~ActionInfo()
    void CRMData::ActionInfo::~ActionInfo() {
        (&field_24)->~vector();
        ~basic_string();
    }

    // 0x10021e5e0, 112 bytes, base-object destructor, inline, placed by class name
    // CRMData::~CRMData()
    void CRMData::~CRMData() {
        (&field_304)->~vector();
        (&field_248)->~hash_map();
        (&field_216)->~vector();
        (&field_184)->~vector();
        (&field_112)->~ActionInfo();
        std::function<bool(WrapArray<unsigned char const>)>::~function(
            (function<bool(WrapArray<unsigned char const>)>*)&field_64);
        (&field_48)->~unique_ptr();
        (&field_8)->~basic_string();
    }

    // 0x100ad8d60, 16 bytes, complete-object destructor, inline, placed by class name
    // CRMData::ActionInfo::PayloadEntry::~PayloadEntry(): jumps straight to the base-object destructor

    // 0x100ada8c0, 48 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // CRMData::ActionInfo::PayloadEntry::~PayloadEntry()
    /* eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
   std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int> >::~pair() */

    void eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
                     std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>>::
        ~pair(pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
                   std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>>* this) {
        ((this + 24))->~variant();
        ~basic_string();
    }

    // 0x100adc240, 16 bytes, complete-object destructor, inline, placed by class name
    // CRMData::ImageElement::~ImageElement(): jumps straight to the base-object destructor

    // 0x100adc250, 16 bytes, base-object destructor, inline, placed by class name
    // CRMData::ImageElement::~ImageElement()
    void CRMData::ImageElement::~ImageElement() {
        ~unique_ptr();
    }

    // 0x100adc5b0, 16 bytes, complete-object constructor, inline, placed by class name
    // CRMData::ImageElement::ImageElement(eastl::string const&): jumps straight to the base-object constructor

    // 0x100adc6e0, 144 bytes, base-object constructor, inline, placed by class name
    // CRMData::ImageElement::ImageElement(eastl::string const&)
    void CRMData::ImageElement::ImageElement(basic_string* param_1) {
        HTTPRequest* this_00;
        basic_string* pbVar1;

        this_00 = operator_new(664);
        HTTPRequest::HTTPRequest(this_00, 0);
        std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>::unique_ptr<true, void>(
            (unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>*)this, this_00);
        field_8 = 0;
        field_16 = 4575657222473777152;
        pbVar1 = (basic_string*)std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>::operator->(
            (unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>*)this);
        pbVar1->Get();
    }

    // 0x100adc900, 16 bytes, complete-object constructor, inline, placed by class name
    // CRMData::ImageElement::ImageElement(CRMData::ImageElement&&): jumps straight to the base-object constructor

    // 0x100adc910, 32 bytes, base-object constructor, inline, placed by class name
    // CRMData::ImageElement::ImageElement(CRMData::ImageElement&&)
    void CRMData::ImageElement::ImageElement(ImageElement* param_1) {
        undefined8 uVar1;

        new (this) std::unique_ptr<HTTPRequest, std::default_delete<HTTPRequest>>(param_1);
        uVar1 = param_1->field_16;
        field_8 = param_1->field_8;
        field_16 = uVar1;
    }

    // 0x100adc930, 16 bytes, complete-object constructor, inline, placed by class name
    // CRMData::LabelElement::LabelElement(eastl::basic_string<char, BucketAllocatorEASTL>&&): jumps straight to the base-object constructor

    // 0x100adca60, 64 bytes, base-object constructor, inline, placed by class name
    // CRMData::LabelElement::LabelElement(eastl::basic_string<char, BucketAllocatorEASTL>&&)
    void CRMData::LabelElement::LabelElement(basic_string* param_1) {
        new (this) eastl::basic_string<char, BucketAllocatorEASTL>();
        field_24 = 0;
        field_32 = 4575657222473777152;
        field_40 = 4294967297;
        field_48 = 0;
    }

    // 0x100adcc30, 16 bytes, complete-object constructor, inline, placed by class name
    // CRMData::LabelElement::LabelElement(CRMData::LabelElement&&): jumps straight to the base-object constructor

    // 0x100adcc40, 48 bytes, base-object constructor, inline, placed by class name
    // CRMData::LabelElement::LabelElement(CRMData::LabelElement&&)
    void CRMData::LabelElement::LabelElement(LabelElement* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        new (this) eastl::basic_string<char, BucketAllocatorEASTL>();
        uVar1 = param_1->field_24;
        uVar2 = param_1->field_32;
        uVar3 = *(undefined8*)((long)&param_1->field_40 + 1);
        *(undefined8*)((long)&field_32 + 1) = *(undefined8*)((long)&param_1->field_32 + 1);
        *(undefined8*)((long)&field_40 + 1) = uVar3;
        field_24 = uVar1;
        field_32 = uVar2;
    }

    // 0x100adcde0, 16 bytes, complete-object constructor, inline, placed by class name
    // CRMData::ActionInfo::PayloadEntry::PayloadEntry(CRMData::ActionInfo::PayloadEntry&&): jumps straight to the base-object constructor

    // 0x100adced0, 48 bytes, base-object constructor, inline, placed by class name
    // CRMData::ActionInfo::PayloadEntry::PayloadEntry(CRMData::ActionInfo::PayloadEntry&&)
    void CRMData::ActionInfo::PayloadEntry::PayloadEntry(PayloadEntry* param_1) {
        new (this) eastl::basic_string<char, BucketAllocatorEASTL>();
        new (&field_24, (variant*)&param_1->field_24)
            std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>();
    }

} // namespace jag::http

namespace jag::graphics {
    // 0x1001fb280: the linker folded this into http::CRMData::GetActionInfo() const, which has identical code
    LayeredAnimationStateMachineLayerDescriptor::GetBlendVar() const;

} // namespace jag::graphics

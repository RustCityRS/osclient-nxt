// libs/oldscape/rs2lib/util/CRMViewHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape {
    template <typename...> // 1 instantiations, e.g. <UICoordSpecializer>
    class CoordType {
    public:
        bool operator==(CoordType<UICoordSpecializer> coordType) const;
        uint32_t operator/(int arg1) const;
        CoordType<UICoordSpecializer>* operator-=(CoordType<UICoordSpecializer> coordType);
        CoordType<UICoordSpecializer>* operator+=(CoordType<UICoordSpecializer> coordType);
        uint32_t operator*(int arg1) const;
        bool operator>=(CoordType<UICoordSpecializer> coordType) const;
        uint32_t operator-() const;
        CoordType(int resultType);
        bool operator!=(CoordType<UICoordSpecializer> coordType) const;
        uint32_t operator-(CoordType<UICoordSpecializer> coordType) const;
        bool operator<(CoordType<UICoordSpecializer> coordType) const;
        bool operator>(CoordType<UICoordSpecializer> coordType) const;
        uint32_t operator+(CoordType<UICoordSpecializer> coordType) const;
    };

    // 0x1000f80d0
    uint32_t CoordType<UICoordSpecializer>::operator/(int arg1) const {
        return local_10;

        local_10.XPlotBlender<int>(*(int*)this / arg1);
        return local_10[0];
    }

    // 0x1001016b0
    CoordType<UICoordSpecializer>* CoordType<UICoordSpecializer>::operator-=(CoordType<UICoordSpecializer> coordType) {
        *(int*)this = *(int*)this - (int)coordType;
        return this;
    }

    // 0x100105aa0
    bool CoordType<UICoordSpecializer>::operator>=(CoordType<UICoordSpecializer> coordType) const {
        return (int)coordType <= *(int*)this;
    }

    // 0x100106910
    uint32_t CoordType<UICoordSpecializer>::operator-() const {
        return local_10;

        local_10.XPlotBlender<int>(-*(int*)this);
        return local_10[0];
    }

    // 0x10017ef00
    bool CoordType<UICoordSpecializer>::operator!=(CoordType<UICoordSpecializer> coordType) const {
        return *(int*)this != (int)coordType;
    }

    // 0x10017fe30
    uint32_t CoordType<UICoordSpecializer>::operator-(CoordType<UICoordSpecializer> coordType) const {
        return local_10;

        local_10.XPlotBlender<int>(*(int*)this - (int)coordType);
        return local_10[0];
    }

    // 0x100180580
    bool CoordType<UICoordSpecializer>::operator<(CoordType<UICoordSpecializer> coordType) const {
        return *(int*)this < (int)coordType;
    }

    // 0x100180590
    bool CoordType<UICoordSpecializer>::operator>(CoordType<UICoordSpecializer> coordType) const {
        return (int)coordType < *(int*)this;
    }

    // 0x1001805a0
    uint32_t CoordType<UICoordSpecializer>::operator+(CoordType<UICoordSpecializer> coordType) const {
        return local_10;

        local_10.XPlotBlender<int>((int)coordType + *(int*)this);
        return local_10[0];
    }

} // namespace jag::oldscape

namespace jag::oldscape::rs2lib {
    class CRMViewHandler {
    public:
        void GetCRMData() const;
        bool HasSuccessfulResponse() const;
        uint8_t GetActionType() const;
        void GetMetadata(const eastl::string& str) const;
        void SetURL(const eastl::string& str, http::CRMData::ClientDataProvider* clientDataProvider);
        uint64_t Service();
        unsigned long GeneratePayloadData();
        void AssignFont(int arg1, int arg2);
        void AssignServerTarget(eastl::string&& str, int arg2);
        uint32_t GetServerTarget();
        auto GetEndpointURL();
        uint32_t GetPayload(int arg1);
        bool SetFromJSON(const eastl::string& str);
        uint32_t GetFontID(int arg1);
        long GetClickBounds() const;
        CRMViewHandler();
        ~CRMViewHandler();

    private:
        unsigned int field_0;
        uint8_t _unknown_4[36];
        long* field_40;
        uint8_t _unknown_48[288];
        int field_336;
        uint8_t _unknown_340[124];
    };

    // 0x100105a90
    bool CRMViewHandler::HasSuccessfulResponse() const {
        return field_336 == 2;
    }

    // 0x1001066b0
    uint8_t CRMViewHandler::GetActionType() const {
        return field_400.empty() ^ 1;
    }

    // 0x10015a220
    void CRMViewHandler::GetMetadata(const eastl::basic_string<char, BucketAllocatorEASTL>& str) const {
        GetMetadataValue(str);
    }

    // 0x1002042c0
    uint32_t CRMViewHandler::GetFontID(int arg1) {
        uint32_t* puVar1 = &field_344[arg1];
        return *puVar1;
    }

    // 0x100204430
    long CRMViewHandler::GetClickBounds() const {
        return GetPixelBuffer() + 56;
    }

    // 0x10021de00
    CRMViewHandler::CRMViewHandler() : http::CRMData(), field_336(-1) {

        new (&field_344) eastl::hash_map(local_28);
        new (&field_400) eastl::hash_map<eastl::string, int>(local_28);
    }

    // 0x10021e8c0
    CRMViewHandler::~CRMViewHandler() {
        field_400.~hash_map();
        field_344.~hash_map();
    }

} // namespace jag::oldscape::rs2lib

namespace jag {
    // 0x100106490: UISceneSettings::UISceneSettings() has the same machine code as oldscape::InterfaceMouseEvent::InterfaceMouseEvent()

} // namespace jag

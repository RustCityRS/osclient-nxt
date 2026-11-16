// libs/oldscape/rs2lib/util/CRMViewHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape {
    template <typename...> // 1 instantiations, e.g. <UICoordSpecializer>
    class CoordType {
    public:
        bool operator==(CoordType<UICoordSpecializer>) const;
        operator/(int) const;
        CoordType<UICoordSpecializer>* operator-=(CoordType<UICoordSpecializer>);
        CoordType<UICoordSpecializer>* operator+=(CoordType<UICoordSpecializer>);
        operator*(int) const;
        bool operator>=(CoordType<UICoordSpecializer>) const;
        operator-() const;
        CoordType(int);
        bool operator!=(CoordType<UICoordSpecializer>) const;
        operator-(CoordType<UICoordSpecializer>) const;
        bool operator<(CoordType<UICoordSpecializer>) const;
        bool operator>(CoordType<UICoordSpecializer>) const;
        operator+(CoordType<UICoordSpecializer>) const;
    };

    // 0x1000f80d0, 48 bytes, inline, placed by class header (inline)
    // CoordType<UICoordSpecializer>::operator/(int) const
    /* CoordType<UICoordSpecializer>::TEMPNAMEPLACEHOLDERVALUE(int) const
    */

    undefined4 CoordType<UICoordSpecializer>::operator/(int param_1) {
        undefined4 local_10[2];

        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_10, *(int*)this / param_1);
        return local_10[0];
    }

    // 0x1001016b0, 16 bytes, inline, placed by class header (inline)
    // CoordType<UICoordSpecializer>::operator-=(CoordType<UICoordSpecializer>)
    /* CoordType<UICoordSpecializer>::TEMPNAMEPLACEHOLDERVALUE(CoordType<UICoordSpecializer>)
    */

    CoordType<UICoordSpecializer>* CoordType<UICoordSpecializer>::operator-=(int param_2) {
        *(int*)this = *(int*)this - param_2;
        return this;
    }

    // 0x100105aa0, 16 bytes, inline, placed by debug map only (low confidence)
    // CoordType<UICoordSpecializer>::operator>=(CoordType<UICoordSpecializer>) const
    /* CoordType<UICoordSpecializer>::TEMPNAMEPLACEHOLDERVALUE(CoordType<UICoordSpecializer>)
   const */

    bool CoordType<UICoordSpecializer>::operator>=(int param_2) {
        return param_2 <= *(int*)this;
    }

    // 0x100106490, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // InterfaceMouseEvent::InterfaceMouseEvent(): jumps straight to the base-object constructor

    // 0x1001064a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // InterfaceMouseEvent::InterfaceMouseEvent(InterfaceMouseEvent const&): jumps straight to the base-object constructor

    // 0x100106910, 32 bytes, inline, placed by debug map only (low confidence)
    // CoordType<UICoordSpecializer>::operator-() const
    /* CoordType<UICoordSpecializer>::TEMPNAMEPLACEHOLDERVALUE() const */

    undefined4 CoordType<UICoordSpecializer>::operator-() {
        undefined4 local_10[2];

        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_10, -*(int*)this);
        return local_10[0];
    }

    // 0x10017ebb0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // CoordType<UICoordSpecializer>::CoordType(int): jumps straight to the base-object constructor

    // 0x10017ef00, 16 bytes, inline, placed by class header (inline)
    // CoordType<UICoordSpecializer>::operator!=(CoordType<UICoordSpecializer>) const
    /* CoordType<UICoordSpecializer>::TEMPNAMEPLACEHOLDERVALUE(CoordType<UICoordSpecializer>)
   const */

    bool CoordType<UICoordSpecializer>::operator!=(int param_2) {
        return *(int*)this != param_2;
    }

    // 0x10017fe30, 32 bytes, inline, placed by class header (inline)
    // CoordType<UICoordSpecializer>::operator-(CoordType<UICoordSpecializer>) const
    /* CoordType<UICoordSpecializer>::TEMPNAMEPLACEHOLDERVALUE(CoordType<UICoordSpecializer>)
   const */

    undefined4 CoordType<UICoordSpecializer>::operator-(int param_2) {
        undefined4 local_10[2];

        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_10, *(int*)this - param_2);
        return local_10[0];
    }

    // 0x100180580, 16 bytes, inline, placed by class header (inline)
    // CoordType<UICoordSpecializer>::operator<(CoordType<UICoordSpecializer>) const
    /* CoordType<UICoordSpecializer>::TEMPNAMEPLACEHOLDERVALUE(CoordType<UICoordSpecializer>)
   const */

    bool CoordType<UICoordSpecializer>::operator<(int param_2) {
        return *(int*)this < param_2;
    }

    // 0x100180590, 16 bytes, inline, placed by class header (inline)
    // CoordType<UICoordSpecializer>::operator>(CoordType<UICoordSpecializer>) const
    /* CoordType<UICoordSpecializer>::TEMPNAMEPLACEHOLDERVALUE(CoordType<UICoordSpecializer>)
   const */

    bool CoordType<UICoordSpecializer>::operator>(int param_2) {
        return param_2 < *(int*)this;
    }

    // 0x1001805a0, 32 bytes, inline, placed by class header (inline)
    // CoordType<UICoordSpecializer>::operator+(CoordType<UICoordSpecializer>) const
    /* CoordType<UICoordSpecializer>::TEMPNAMEPLACEHOLDERVALUE(CoordType<UICoordSpecializer>)
   const */

    undefined4 CoordType<UICoordSpecializer>::operator+(int param_2) {
        undefined4 local_10[2];

        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_10, param_2 + *(int*)this);
        return local_10[0];
    }

} // namespace jag::oldscape

namespace jag::oldscape::rs2lib {
    class CRMViewHandler {
    public:
        GetCRMData() const;
        bool HasSuccessfulResponse() const;
        byte GetActionType() const;
        void GetMetadata(eastl::basic_string<char, BucketAllocatorEASTL> const&) const;
        void SetURL(eastl::string const&, http::CRMData::ClientDataProvider*);
        Service();
        ulong GeneratePayloadData();
        void AssignFont(int, int);
        void AssignServerTarget(eastl::string&&, int);
        GetServerTarget();
        GetEndpointURL();
        GetPayload(int);
        bool SetFromJSON(eastl::string const&);
        GetFontID(int);
        long GetClickBounds() const;
        CRMViewHandler();
        ~CRMViewHandler();

        // data members, from how the methods use this: 464 bytes
        uint field_0; // offset 0
        char _unknown_4[332];
        int field_336; // offset 336
        char _unknown_340[124];
    };

    // 0x100105a90, 16 bytes, inline, placed by class name and debug map
    // CRMViewHandler::HasSuccessfulResponse() const
    bool CRMViewHandler::HasSuccessfulResponse() {
        return field_336 == 2;
    }

    // 0x1001066b0, 32 bytes, inline, placed by class name and debug map
    // CRMViewHandler::GetActionType() const
    byte CRMViewHandler::GetActionType() {
        byte bVar1;

        bVar1 = (&field_400)->empty();
        return bVar1 ^ 1;
    }

    // 0x10015a220, 16 bytes, inline, placed by class name
    // CRMViewHandler::GetMetadata(eastl::basic_string<char, BucketAllocatorEASTL> const&) const
    void CRMViewHandler::GetMetadata(basic_string* param_1) {
        GetMetadataValue(param_1);
    }

    // 0x1002042c0, 48 bytes, inline, placed by class name
    // CRMViewHandler::GetFontID(int)
    undefined4 CRMViewHandler::GetFontID(int param_1) {
        undefined4* puVar1;
        int local_c;

        local_c = param_1;
        puVar1 = (undefined4*)
            eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)&field_344,
                &local_c);
        return *puVar1;
    }

    // 0x100204430, 16 bytes, inline, placed by class name
    // CRMViewHandler::GetClickBounds() const
    long CRMViewHandler::GetClickBounds() {
        return GetPixelBuffer() + 56;
    }

    // 0x10021dde0, 16 bytes, complete-object constructor, inline, placed by class name
    // CRMViewHandler::CRMViewHandler(): jumps straight to the base-object constructor

    // 0x10021de00, 144 bytes, base-object constructor, inline, placed by class name
    // CRMViewHandler::CRMViewHandler()
    void CRMViewHandler::CRMViewHandler() {
        allocator local_28[8];

        new (this) http::CRMData();
        field_336 = -1;
        eastl::allocator::allocator(local_28, "EASTL hash_map");
        new (&field_344, local_28)
            eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        eastl::allocator::allocator(local_28, "EASTL hash_map");
        new (&field_400, local_28) eastl::hash_map<eastl::string, int, eastl::hash<eastl::string>,
                                                   eastl::equal_to<eastl::string>, eastl::allocator, false>();
    }

    // 0x10021e8b0, 16 bytes, complete-object destructor, inline, placed by class name
    // CRMViewHandler::~CRMViewHandler(): jumps straight to the base-object destructor

    // 0x10021e8c0, 48 bytes, base-object destructor, inline, placed by class name
    // CRMViewHandler::~CRMViewHandler()
    void CRMViewHandler::~CRMViewHandler() {
        (&field_400)->~hash_map();
        (&field_344)->~hash_map();
        ~CRMData();
    }

} // namespace jag::oldscape::rs2lib

namespace jag {
    // 0x100106490: the linker folded this into oldscape::InterfaceMouseEvent::InterfaceMouseEvent(), which has identical code
    UISceneSettings::UISceneSettings();

} // namespace jag

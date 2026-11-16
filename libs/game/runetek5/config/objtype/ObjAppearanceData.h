// libs/game/runetek5/config/objtype/ObjAppearanceData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::game {
    class ObjAppearanceData {
    public:
        SetWearModel1(int);
        SetWearModel2(int);
        GetWearModel3() const;
        SetWearModel3(int);
        SetHeadModel2(int);
        SetHeadModel1(int);
        int GetHeadModel2() const;
        uint GetWearModel2() const;
        uint GetWearModel1() const;
        int GetHeadModel1() const;
        GetOffset() const;
        bool operator==(ObjAppearanceData const&) const;
        ObjAppearanceData();
        ObjAppearanceData* operator=(ObjAppearanceData const&);

        // data members, from how the methods use this: 28 bytes
        uint m_wearModel1;       // offset 0
        uint m_wearModel2;       // offset 4
        undefined4 m_wearModel3; // offset 8
        int m_headModel1;        // offset 12
        int m_headModel2;        // offset 16
        char _unknown_20[8];
    };

    // 0x10000c2f0: the linker folded this into math::Rect<int>::SetX(int), which has identical code
    ObjAppearanceData::SetWearModel1(int);

    // 0x10000c300: the linker folded this into math::Rect<int>::SetY(int), which has identical code
    ObjAppearanceData::SetWearModel2(int);

    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    ObjAppearanceData::GetWearModel3() const;

    // 0x10005fd90: the linker folded this into oldscape::widgets::Widget::SetBackgroundColour(unsigned int), which has identical code
    ObjAppearanceData::SetWearModel3(int);

    // 0x10005fe40: the linker folded this into oldscape::widgets::Widget::SetTextColour(unsigned int), which has identical code
    ObjAppearanceData::SetHeadModel2(int);

    // 0x10005fe50: the linker folded this into oldscape::widgets::Widget::SetBorderColour(unsigned int), which has identical code
    ObjAppearanceData::SetHeadModel1(int);

    // 0x100066b70: the linker folded this into oldscape::widgets::Widget::GetTextColour() const, which has identical code
    int ObjAppearanceData::GetHeadModel2() const;

    // 0x100073980: the linker folded this into math::Rect<int>::MinY() const, which has identical code
    uint ObjAppearanceData::GetWearModel2() const;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    uint ObjAppearanceData::GetWearModel1() const;

    // 0x1000e5d50: the linker folded this into oldscape::rs2lib::CoordZoneSource::GetRotation() const, which has identical code
    int ObjAppearanceData::GetHeadModel1() const;

    // 0x10042e380: the linker folded this into ChangeLocationRequest::GetLocData() const, which has identical code
    ObjAppearanceData::GetOffset() const;

    // 0x1004992c0, 64 bytes, inline, placed by class name and debug map
    // ObjAppearanceData::operator==(ObjAppearanceData const&) const
    /* ObjAppearanceData::TEMPNAMEPLACEHOLDERVALUE(ObjAppearanceData const&) const
    */

    bool ObjAppearanceData::operator==(ObjAppearanceData* param_1) {
        if ((((m_wearModel1 == param_1->m_wearModel1) && (m_wearModel2 == param_1->m_wearModel2)) &&
             (m_wearModel3 == param_1->m_wearModel3)) &&
            ((m_headModel1 == param_1->m_headModel1 && (m_headModel2 == param_1->m_headModel2)))) {
            return math::operator==((Vector3T*)&field_20, (Vector3T*)&param_1->field_20);
        }
        return false;
    }

    // 0x100506160, 16 bytes, complete-object constructor, inline, placed by class name
    // ObjAppearanceData::ObjAppearanceData(): jumps straight to the base-object constructor

    // 0x100509850, 48 bytes, inline, placed by class name
    // ObjAppearanceData::operator=(ObjAppearanceData const&)
    /* ObjAppearanceData::TEMPNAMEPLACEHOLDERVALUE(ObjAppearanceData const&) */

    ObjAppearanceData* ObjAppearanceData::operator=(ObjAppearanceData* param_1) {
        uint uVar1;
        undefined4 uVar2;
        int iVar3;

        m_headModel2 = param_1->m_headModel2;
        uVar1 = param_1->m_wearModel2;
        uVar2 = param_1->m_wearModel3;
        iVar3 = param_1->m_headModel1;
        m_wearModel1 = param_1->m_wearModel1;
        m_wearModel2 = uVar1;
        m_wearModel3 = uVar2;
        m_headModel1 = iVar3;
        (&field_20, (Vector3T*)&param_1->field_20)->SetXYZ();
        return this;
    }

    // 0x10050ae90, 48 bytes, base-object constructor, inline, placed by class name
    // ObjAppearanceData::ObjAppearanceData()
    void ObjAppearanceData::ObjAppearanceData() {
        m_wearModel1 = 4294967295;
        m_wearModel2 = 4294967295;
        m_wearModel3 = 4294967295;
        m_headModel1 = -1;
        m_headModel2 = -1;
        new (&field_20) math::Vector3T<int>();
    }

} // namespace jag::game

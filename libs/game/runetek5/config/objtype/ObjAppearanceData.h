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
        GetHeadModel2() const;
        GetWearModel2() const;
        GetWearModel1() const;
        GetHeadModel1() const;
        GetOffset() const;
        bool operator==(ObjAppearanceData const&) const;
        ObjAppearanceData();
        ObjAppearanceData* operator=(ObjAppearanceData const&);

        // data members, from how the methods use this: 28 bytes
        undefined4 field_0;  // offset 0
        undefined4 field_4;  // offset 4
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        undefined4 field_16; // offset 16
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
    ObjAppearanceData::GetHeadModel2() const;

    // 0x100073980: the linker folded this into math::Rect<int>::MinY() const, which has identical code
    ObjAppearanceData::GetWearModel2() const;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    ObjAppearanceData::GetWearModel1() const;

    // 0x1000e5d50: the linker folded this into oldscape::rs2lib::CoordZoneSource::GetRotation() const, which has identical code
    ObjAppearanceData::GetHeadModel1() const;

    // 0x10042e380: the linker folded this into ChangeLocationRequest::GetLocData() const, which has identical code
    ObjAppearanceData::GetOffset() const;

    // 0x1004992c0, 64 bytes, inline, placed by class name and debug map
    // ObjAppearanceData::operator==(ObjAppearanceData const&) const
    /* ObjAppearanceData::TEMPNAMEPLACEHOLDERVALUE(ObjAppearanceData const&) const
    */

    bool ObjAppearanceData::operator==(ObjAppearanceData* param_1) {
        if ((((field_0 == param_1->field_0) && (field_4 == param_1->field_4)) && (field_8 == param_1->field_8)) &&
            ((field_12 == param_1->field_12 && (field_16 == param_1->field_16)))) {
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
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;

        field_16 = param_1->field_16;
        uVar1 = param_1->field_4;
        uVar2 = param_1->field_8;
        uVar3 = param_1->field_12;
        field_0 = param_1->field_0;
        field_4 = uVar1;
        field_8 = uVar2;
        field_12 = uVar3;
        (&field_20, (Vector3T*)&param_1->field_20)->SetXYZ();
        return this;
    }

    // 0x10050ae90, 48 bytes, base-object constructor, inline, placed by class name
    // ObjAppearanceData::ObjAppearanceData()
    void ObjAppearanceData::ObjAppearanceData() {
        field_0 = 4294967295;
        field_4 = 4294967295;
        field_8 = 4294967295;
        field_12 = 4294967295;
        field_16 = 4294967295;
        new (&field_20) math::Vector3T<int>();
    }

} // namespace jag::game

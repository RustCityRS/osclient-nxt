// libs/game/runetek5/config/objtype/ObjAppearanceData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::game {
    class ObjAppearanceData {
    public:
        void SetWearModel1(int arg1);
        void SetWearModel2(int arg1);
        EnumOptionToggle GetWearModel3() const;
        void SetWearModel3(int arg1);
        void SetHeadModel2(int arg1);
        void SetHeadModel1(int arg1);
        int GetHeadModel2() const;
        unsigned int GetWearModel2() const;
        unsigned int GetWearModel1() const;
        uint32_t GetHeadModel1() const;
        uint8_t* GetOffset() const;
        bool operator==(const ObjAppearanceData& objAppearanceData) const;
        ObjAppearanceData();
        ObjAppearanceData* operator=(const ObjAppearanceData& objAppearanceData);

    private:
        unsigned int m_wearModel1;
        unsigned int m_wearModel2;
        uint32_t m_wearModel3;
        int m_headModel1;
        int m_headModel2;
        uint8_t _unknown_20[8];
    };

    // 0x10000c2f0: ObjAppearanceData::SetWearModel1(int) has the same machine code as math::Rect<int>::SetX(int)

    // 0x10000c300: ObjAppearanceData::SetWearModel2(int) has the same machine code as math::Rect<int>::SetY(int)

    // 0x100024170: ObjAppearanceData::GetWearModel3() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x10005fd90: ObjAppearanceData::SetWearModel3(int) has the same machine code as oldscape::widgets::Widget::SetBackgroundColour(unsigned int)

    // 0x10005fe40: ObjAppearanceData::SetHeadModel2(int) has the same machine code as oldscape::widgets::Widget::SetTextColour(unsigned int)

    // 0x10005fe50: ObjAppearanceData::SetHeadModel1(int) has the same machine code as oldscape::widgets::Widget::SetBorderColour(unsigned int)

    // 0x100066b70: ObjAppearanceData::GetHeadModel2() const has the same machine code as oldscape::widgets::Widget::GetTextColour() const

    // 0x100073980: ObjAppearanceData::GetWearModel2() const has the same machine code as math::Rect<int>::MinY() const

    // 0x1000b9960: ObjAppearanceData::GetWearModel1() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x1000e5d50, the same machine code as oldscape::rs2lib::CoordZoneSource::GetRotation() const
    uint32_t ObjAppearanceData::GetHeadModel1() const {
        return m_wearModel3;
    }

    // 0x10042e380: ObjAppearanceData::GetOffset() const has the same machine code as ChangeLocationRequest::GetLocData() const

    // 0x1004992c0
    bool ObjAppearanceData::operator==(const ObjAppearanceData& objAppearanceData) const {
        if ((((m_wearModel1 == objAppearanceData.m_wearModel1) && (m_wearModel2 == objAppearanceData.m_wearModel2)) &&
             (m_wearModel3 == objAppearanceData.m_wearModel3)) &&
            ((m_headModel1 == objAppearanceData.m_headModel1 && (m_headModel2 == objAppearanceData.m_headModel2)))) {
            return field_20 == objAppearanceData.field_20;
        }
        return false;
    }

    // 0x100509850
    ObjAppearanceData* ObjAppearanceData::operator=(const ObjAppearanceData& objAppearanceData) {
        m_headModel2 = objAppearanceData.m_headModel2;
        unsigned int uVar1 = objAppearanceData.m_wearModel2;
        uint32_t uVar2 = objAppearanceData.m_wearModel3;
        int iVar3 = objAppearanceData.m_headModel1;
        m_wearModel1 = objAppearanceData.m_wearModel1;
        m_wearModel2 = uVar1;
        m_wearModel3 = uVar2;
        m_headModel1 = iVar3;
        field_20.SetXYZ(objAppearanceData.field_20);
        return this;
    }

    // 0x10050ae90
    ObjAppearanceData::ObjAppearanceData()
        : m_wearModel1(4294967295), m_wearModel2(4294967295), m_wearModel3(4294967295), m_headModel1(-1),
          m_headModel2(-1) {}

} // namespace jag::game

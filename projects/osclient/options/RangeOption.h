// projects/osclient/options/RangeOption.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::option {
    template <typename...> // 2 instantiations, e.g. <float>, <int>
    class RangeOption {
    public:
        // virtual methods in vtable order
        virtual ~RangeOption();
        virtual void GetDescription(int arg1) const;
        virtual bool IsValidValue(const int& arg1) const;
        virtual void SetValue(int arg1, bool arg2);
        virtual uint32_t GetRange(int& arg1, int& arg2) const;
        RangeOption(OptionStore& optionStore, const char* str, jag::math::Range<int>&& range, int arg4);
        RangeOption(OptionStore& optionStore, const char* str, jag::math::Range<float>&& range, float arg4);
        RangeOption(OptionStore& optionStore, const char* str, jag::math::Range<int>&& range, int arg4,
                    OptionFlags optionFlags);
        RangeOption(OptionStore& optionStore, const char* str, jag::math::Range<float>&& range, float arg4,
                    OptionFlags optionFlags);
        bool IsValidValue(const float& arg1) const;
        void SetValue(float arg1, bool arg2);
        uint8_t GetRange(float& arg1, float& arg2) const;
    };

    // 0x10002e220
    RangeOption<float>::~RangeOption() {
        ~Option(this);
    }

    // 0x1000488d0
    RangeOption<int>::RangeOption(OptionStore& optionStore, const char* str, jag::math::Range<int>&& range, int arg4,
                                  OptionFlags optionFlags)
        : Option<int>(optionStore, str, arg4, optionFlags) {
        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[14]._vptr + 4);
        *(uint64_t*)((long)&this[14]._vptr + 4) = *(uint64_t*)range;
        int iVar1 = this_00->GetX();
        if (iVar1 <= arg4) {
            iVar1 = this_00->GetZ();
            if (arg4 <= iVar1) {
                return;
            }
        }
        LogAssert("defaultValue >= m_range.GetMin() && defaultValue <= m_range.GetMax()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/highlighting/../"
                  "options/RangeOption.h",
                  40, nullptr);
    }

    // 0x1000489d0
    void RangeOption<int>::GetDescription(int arg1) const {
        unsigned int in_EDX;
        uint32_t in_register_00000034;

        GetDescription(arg1);
        CoordMapSquare* this_00 = (CoordMapSquare*)((((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1) + 116);
        int iVar1 = this_00->GetX();
        auto local_158 = OptionValueSerialiser<int>::ValueToString(iVar1);
        uint64_t uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        iVar1 = this_00->GetZ();
        auto local_280 = OptionValueSerialiser<int>::ValueToString(iVar1);
        uint64_t uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        append_sprintf(" [min: <col=%06x>%s</col>, max: <col=%06x>%s</col>]", (unsigned long)in_EDX, uVar2,
                       (unsigned long)in_EDX, uVar3);
    }

    // 0x100048ae0
    bool RangeOption<int>::IsValidValue(const int& arg1) const {
        bool bVar2;

        int iVar1 = arg1;
        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[14]._vptr + 4);
        int iVar3 = this_00->GetX();
        if (iVar1 < iVar3) {
            bVar2 = false;
        } else {
            iVar1 = arg1;
            iVar3 = this_00->GetZ();
            bVar2 = iVar1 <= iVar3;
        }
        return bVar2;
    }

    // 0x100048b30
    uint32_t RangeOption<int>::GetRange(int& arg1, int& arg2) const {
        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[14]._vptr + 4);
        int iVar1 = this_00->GetX();
        arg1 = iVar1;
        iVar1 = this_00->GetZ();
        arg2 = iVar1;
        return 1;
    }

    // 0x1000515a0
    RangeOption<float>::RangeOption(OptionStore& optionStore, const char* str, jag::math::Range<float>&& range,
                                    float arg4, OptionFlags optionFlags)
        : Option<float>(optionStore, str, arg4, optionFlags) {
        EntityHighlightState* this_00 = (EntityHighlightState*)((long)&this[14]._vptr + 4);
        *(uint64_t*)((long)&this[14]._vptr + 4) = *(uint64_t*)range;
        float fVar1 = (float)this_00->GetOverbright();
        if (fVar1 <= arg4) {
            fVar1 = (float)this_00->GetAlpha();
            if (arg4 <= fVar1) {
                return;
            }
        }
        LogAssert("defaultValue >= m_range.GetMin() && defaultValue <= m_range.GetMax()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/highlighting/../"
                  "options/RangeOption.h",
                  40, nullptr);
    }

    // 0x1000516c0
    void RangeOption<float>::GetDescription(int arg1) const {
        unsigned int in_EDX;
        uint32_t in_register_00000034;
        OptionValueSerialiser<float> local_280;
        OptionValueSerialiser<float> local_158;

        GetDescription(arg1);
        EntityHighlightState* this_00 =
            (EntityHighlightState*)((((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1) + 116);
        float fVar3 = (float)this_00->GetOverbright();
        local_158.ValueToString(fVar3);
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        fVar3 = (float)this_00->GetAlpha();
        local_280.ValueToString(fVar3);
        uint64_t uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        append_sprintf(" [min: <col=%06x>%s</col>, max: <col=%06x>%s</col>]", (unsigned long)in_EDX, uVar1,
                       (unsigned long)in_EDX, uVar2);
    }

    // 0x1000517d0
    bool RangeOption<float>::IsValidValue(const float& arg1) const {
        bool bVar2;
        float extraout_XMM0_Da;

        float fVar1 = arg1;
        EntityHighlightState* this_00 = (EntityHighlightState*)((long)&this[14]._vptr + 4);
        if ((float)this_00->GetOverbright() <= fVar1) {
            fVar1 = arg1;
            this_00->GetAlpha();
            bVar2 = fVar1 <= extraout_XMM0_Da;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x100051830
    void RangeOption<float>::SetValue(float arg1, bool arg2) {
        EntityHighlightState* this_00 = (EntityHighlightState*)((long)&this[14]._vptr + 4);
        float local_24 = arg1;
        float local_2c = (float)this_00->GetOverbright();
        float local_28 = (float)this_00->GetAlpha();
        local_24 = jag::math::Clamp<float>(local_24, local_2c, local_28);
        SetValue(local_24, arg2);
    }

    // 0x1000518a0
    uint8_t RangeOption<float>::GetRange(float& arg1, float& arg2) const {
        EntityHighlightState* this_00 = (EntityHighlightState*)((long)&this[14]._vptr + 4);
        float fVar1 = (float)this_00->GetOverbright();
        arg1 = fVar1;
        fVar1 = (float)this_00->GetAlpha();
        arg2 = fVar1;
        return 1;
    }

    // 0x10012ca50
    void RangeOption<int>::SetValue(int arg1, bool arg2) {
        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[14]._vptr + 4);
        ClientWindowMode local_24 = arg1;
        int local_2c = this_00->GetX();
        int local_28 = this_00->GetZ();
        local_24 = jag::math::Clamp<int>(local_24, local_2c, local_28);
        SetValue(local_24, arg2);
    }

} // namespace jag::oldscape::option

namespace jag::oldscape::sidebars {
    class SideBarData {
    public:
        SideBarData(int arg1, int arg2);

    private:
        int field_0;
        int field_4;
        uint8_t _unknown_8[4];
    };

    // 0x10012cac0
    SideBarRequest::SideBarRequest() : SideBarData(0, 0), field_8(0) {}

    // 0x10012cae0
    SideBarData::SideBarData(int arg1, int arg2) : m_x(arg1), m_z(arg2) {}

} // namespace jag::oldscape::sidebars

namespace jag::ui {
    // 0x10012cae0: ServerActiveProperties::ServerActiveProperties(unsigned int, int) has the same machine code as oldscape::sidebars::SideBarData::SideBarData(int, int)

    // 0x10012cae0: ComponentMultiValueMixin::ValueChangeEvent::ValueChangeEvent(int, ComponentMultiValueMixin::ValueChangeEvent::Type) has the same machine code as oldscape::sidebars::SideBarData::SideBarData(int, int)

    // 0x10012cae0: ComponentMultiValueMixin::ValueChangeEvent::ValueChangeEvent(int, bool) has the same machine code as oldscape::sidebars::SideBarData::SideBarData(int, int)

} // namespace jag::ui

namespace jag {
    // 0x10012cae0: DebugDataBasic::DebugDataBasic(unsigned int, unsigned int) has the same machine code as oldscape::sidebars::SideBarData::SideBarData(int, int)

} // namespace jag

namespace jag::oldscape {
    // 0x10012cca0
    ClientEntityID::ClientEntityID(bool arg1, int arg2) {
        uint8_t in_register_00000031;

        field_0 = (((uint16_t)in_register_00000031 << 8) | (uint8_t)arg1);
        field_4 = arg2;
    }

} // namespace jag::oldscape

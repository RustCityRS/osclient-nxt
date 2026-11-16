// projects/osclient/options/RangeOption.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::option {
    template <typename...> // 2 instantiations, e.g. <float>, <int>
    class RangeOption {
    public:
        // virtual methods in vtable order
        virtual ~RangeOption();
        virtual void GetDescription(int) const;
        virtual bool IsValidValue(int const&) const;
        virtual void SetValue(int, bool);
        virtual GetRange(int&, int&) const;
        RangeOption(OptionStore&, char const*, jag::math::Range<int>&&, int);
        RangeOption(OptionStore&, char const*, jag::math::Range<float>&&, float);
        RangeOption(OptionStore&, char const*, jag::math::Range<int>&&, int, OptionFlags);
        RangeOption(OptionStore&, char const*, jag::math::Range<float>&&, float, OptionFlags);
        bool IsValidValue(float const&) const;
        void SetValue(float, bool);
        GetRange(float&, float&) const;
    };

    // 0x100021cc0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // RangeOption<int>::RangeOption(OptionStore&, char const*, jag::math::Range<int>&&, int): jumps straight to the base-object constructor

    // 0x100022b20, 16 bytes, complete-object destructor, inline, placed by class name
    // RangeOption<int>::~RangeOption(): jumps straight to the base-object destructor

    // 0x100023b40, 16 bytes, complete-object constructor, inline, placed by class name
    // RangeOption<float>::RangeOption(OptionStore&, char const*, jag::math::Range<float>&&, float): jumps straight to the base-object constructor

    // 0x100023b70, 16 bytes, complete-object destructor, inline, placed by class name
    // RangeOption<float>::~RangeOption(): jumps straight to the base-object destructor

    // 0x10002e220, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // RangeOption<float>::~RangeOption()
    /* Option<float>::~Option() */

    void Option<float>::~Option() {
        ~Option(this);
    }

    // 0x1000488c0, 16 bytes, complete-object constructor, inline, placed by class name
    // RangeOption<int>::RangeOption(OptionStore&, char const*, jag::math::Range<int>&&, int, OptionFlags): jumps straight to the base-object constructor

    // 0x1000488d0, 144 bytes, base-object constructor, inline, placed by class name
    // RangeOption<int>::RangeOption(OptionStore&, char const*, jag::math::Range<int>&&, int, OptionFlags)
    void RangeOption<int>::RangeOption(undefined8 param_2, undefined8 param_3_00, undefined8* param_3, int param_4) {
        int iVar1;

        Option<int>::Option();
        *(undefined**)this = PTR_vtable_100ee8a20 + 16;
        *(undefined8*)(this + 116) = *param_3;
        iVar1 = ((this + 116))->GetX();
        if (iVar1 <= param_4) {
            iVar1 = ((this + 116))->GetZ();
            if (param_4 <= iVar1) {
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("defaultValue >= m_range.GetMin() && defaultValue <= m_range.GetMax()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/highlighting/../"
                  "options/RangeOption.h",
                  40, (char*)0);
    }

    // 0x1000489b0, 32 bytes, deleting destructor, inline, placed by class name
    // RangeOption<int>::~RangeOption()
    void RangeOption<int>::~RangeOption() {
        ~RangeOption(this);
        operator_delete(this);
    }

    // 0x1000489d0, 272 bytes, inline, placed by class name
    // RangeOption<int>::GetDescription(int) const
    void RangeOption<int>::GetDescription(int param_1) {
        int iVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        uint in_EDX;
        CoordMapSquare* this_00;
        undefined4 in_register_00000034;
        OptionValueSerialiser<int> local_280[296];
        OptionValueSerialiser<int> local_158[296];
        undefined8 local_30;

        local_30 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        GetDescription(param_1);
        this_00 = (CoordMapSquare*)(CONCAT44(in_register_00000034, param_1) + 116);
        iVar1 = this_00->GetX();
        local_158->ValueToString(iVar1);
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        iVar1 = this_00->GetZ();
        local_280->ValueToString(iVar1);
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
            append_sprintf((char*)this, " [min: <col=%06x>%s</col>, max: <col=%06x>%s</col>]", (ulong)in_EDX, uVar2,
                           (ulong)in_EDX, uVar3);
        /* WARNING: Subroutine does not return */
        local_280->~fixed_string();
    }

    // 0x100048ae0, 80 bytes, inline, placed by class name
    // RangeOption<int>::IsValidValue(int const&) const
    bool RangeOption<int>::IsValidValue(int* param_1) {
        int iVar1;
        bool bVar2;
        int iVar3;

        iVar1 = *param_1;
        iVar3 = ((this + 116))->GetX();
        if (iVar1 < iVar3) {
            bVar2 = false;
        } else {
            iVar1 = *param_1;
            iVar3 = ((this + 116))->GetZ();
            bVar2 = iVar1 <= iVar3;
        }
        return bVar2;
    }

    // 0x100048b30, 64 bytes, inline, placed by class name
    // RangeOption<int>::GetRange(int&, int&) const
    undefined4 RangeOption<int>::GetRange(int* param_1, int* param_2) {
        int iVar1;

        iVar1 = ((this + 116))->GetX();
        *param_1 = iVar1;
        iVar1 = ((this + 116))->GetZ();
        *param_2 = iVar1;
        return 1;
    }

    // 0x100051590, 16 bytes, complete-object constructor, inline, placed by class name
    // RangeOption<float>::RangeOption(OptionStore&, char const*, jag::math::Range<float>&&, float, OptionFlags): jumps straight to the base-object constructor

    // 0x1000515a0, 144 bytes, base-object constructor, inline, placed by class name
    // RangeOption<float>::RangeOption(OptionStore&, char const*, jag::math::Range<float>&&, float, OptionFlags)
    void RangeOption<float>::RangeOption(float param_4, RangeOption<float>* this, undefined8 param_3_00,
                                         undefined8 param_4_00, undefined8* param_3) {
        float fVar1;

        Option<float>::Option();
        *(undefined**)this = PTR_vtable_100ee8a18 + 16;
        *(undefined8*)(this + 116) = *param_3;
        fVar1 = (float)((this + 116))->GetOverbright();
        if (fVar1 <= param_4) {
            fVar1 = (float)((this + 116))->GetAlpha();
            if (param_4 <= fVar1) {
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("defaultValue >= m_range.GetMin() && defaultValue <= m_range.GetMax()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/highlighting/../"
                  "options/RangeOption.h",
                  40, (char*)0);
    }

    // 0x1000516a0, 32 bytes, deleting destructor, inline, placed by class name
    // RangeOption<float>::~RangeOption()
    void RangeOption<float>::~RangeOption() {
        ~RangeOption(this);
        operator_delete(this);
    }

    // 0x1000516c0, 272 bytes, inline, placed by class name
    // RangeOption<float>::GetDescription(int) const
    void RangeOption<float>::GetDescription(int param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        uint in_EDX;
        EntityHighlightState* this_00;
        undefined4 in_register_00000034;
        float fVar3;
        OptionValueSerialiser<float> local_280[296];
        OptionValueSerialiser<float> local_158[296];
        undefined8 local_30;

        local_30 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        GetDescription(param_1);
        this_00 = (EntityHighlightState*)(CONCAT44(in_register_00000034, param_1) + 116);
        fVar3 = (float)this_00->GetOverbright();
        local_158->ValueToString(fVar3);
        uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        fVar3 = (float)this_00->GetAlpha();
        local_280->ValueToString(fVar3);
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
            append_sprintf((char*)this, " [min: <col=%06x>%s</col>, max: <col=%06x>%s</col>]", (ulong)in_EDX, uVar1,
                           (ulong)in_EDX, uVar2);
        /* WARNING: Subroutine does not return */
        local_280->~fixed_string();
    }

    // 0x1000517d0, 96 bytes, inline, placed by class name
    // RangeOption<float>::IsValidValue(float const&) const
    bool RangeOption<float>::IsValidValue(float* param_1) {
        float fVar1;
        bool bVar2;
        float extraout_XMM0_Da;

        fVar1 = *param_1;
        if ((float)((this + 116))->GetOverbright() <= fVar1) {
            fVar1 = *param_1;
            ((this + 116))->GetAlpha();
            bVar2 = fVar1 <= extraout_XMM0_Da;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x100051830, 112 bytes, inline, placed by class name
    // RangeOption<float>::SetValue(float, bool)
    void RangeOption<float>::SetValue(float param_1, bool param_2) {
        float local_2c;
        float local_28;
        float local_24;

        local_24 = param_1;
        local_2c = (float)((this + 116))->GetOverbright();
        local_28 = (float)((this + 116))->GetAlpha();
        local_24 = jag::math::Clamp<float>(&local_24, &local_2c, &local_28);
        SetValue(local_24, param_2);
    }

    // 0x1000518a0, 64 bytes, inline, placed by class name
    // RangeOption<float>::GetRange(float&, float&) const
    undefined1 RangeOption<float>::GetRange(float* param_1, float* param_2) {
        float fVar1;

        fVar1 = (float)((this + 116))->GetOverbright();
        *param_1 = fVar1;
        fVar1 = (float)((this + 116))->GetAlpha();
        *param_2 = fVar1;
        return 1;
    }

    // 0x10012ca50, 96 bytes, inline, placed by class name and debug map
    // RangeOption<int>::SetValue(int, bool)
    void RangeOption<int>::SetValue(int param_1, bool param_2) {
        int local_2c;
        int local_28;
        int local_24;

        local_24 = param_1;
        local_2c = ((this + 116))->GetX();
        local_28 = ((this + 116))->GetZ();
        local_24 = jag::math::Clamp<int>(&local_24, &local_2c, &local_28);
        SetValue(local_24, param_2);
    }

} // namespace jag::oldscape::option

namespace jag::oldscape::sidebars {
    class SideBarData {
    public:
        SideBarData(int, int);

        // data members, from how the methods use this: 12 bytes
        int field_0; // offset 0
        int field_4; // offset 4
        char _unknown_8[4];
    };

    // 0x10012cab0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // SideBarRequest::SideBarRequest(): jumps straight to the base-object constructor

    // 0x10012cac0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // SideBarRequest::SideBarRequest()
    void SideBarRequest::SideBarRequest() {
        new (this) SideBarData(0, 0);
        field_8 = 0;
    }

    // 0x10012cae0, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SideBarData::SideBarData(int, int)
    /* rs2lib::CoordMapSquare::CoordMapSquare(int, int) */

    void rs2lib::CoordMapSquare::CoordMapSquare(int param_1, int param_2) {
        m_x = param_1;
        m_z = param_2;
    }

} // namespace jag::oldscape::sidebars

namespace jag::ui {
    // 0x10012cae0: the linker folded this into oldscape::sidebars::SideBarData::SideBarData(int, int), which has identical code
    ServerActiveProperties::ServerActiveProperties(unsigned int, int);

    // 0x10012cae0: the linker folded this into oldscape::sidebars::SideBarData::SideBarData(int, int), which has identical code
    ComponentMultiValueMixin::ValueChangeEvent::ValueChangeEvent(int, ComponentMultiValueMixin::ValueChangeEvent::Type);

    // 0x10012cae0: the linker folded this into oldscape::sidebars::SideBarData::SideBarData(int, int), which has identical code
    ComponentMultiValueMixin::ValueChangeEvent::ValueChangeEvent(int, bool);

} // namespace jag::ui

namespace jag {
    // 0x10012cae0: the linker folded this into oldscape::sidebars::SideBarData::SideBarData(int, int), which has identical code
    DebugDataBasic::DebugDataBasic(unsigned int, unsigned int);

} // namespace jag

namespace jag::oldscape {
    // 0x10012cca0, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ClientEntityID::ClientEntityID(bool, int)
    /* game::LightProbeManager::MapSquareUpdateInfo::MapSquareUpdateInfo(game::MapSquare::MapSquarePos,
   render::CubeFace) */

    void game::LightProbeManager::MapSquareUpdateInfo::MapSquareUpdateInfo(undefined2 param_2, undefined4 param_3) {
        field_0 = param_2;
        field_4 = param_3;
    }

} // namespace jag::oldscape

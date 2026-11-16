// libs/oldscape/rs2lib/util/CoordZoneSource.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::rs2lib {
    class CoordZoneSource {
    public:
        GetLevel() const;
        GetZoneZ() const;
        GetZoneX() const;
        void SetFromPackedCode(int);
        Unset();
        bool IsSet() const;
        int GetMapSquareZ() const;
        GetRotation() const;
        CoordZoneSource();
        int GetMapSquareX() const;

        // data members, from how the methods use this: 20 bytes
        uint field_0;  // offset 0
        uint field_4;  // offset 4
        uint field_8;  // offset 8
        uint field_12; // offset 12
        char _unknown_16[4];
    };

    // 0x100024170: the linker folded this into option::IScriptOption::GetId() const, which has identical code
    CoordZoneSource::GetLevel() const;

    // 0x100073980: the linker folded this into jag::math::Rect<int>::MinY() const, which has identical code
    CoordZoneSource::GetZoneZ() const;

    // 0x1000b9960: the linker folded this into ScriptVarType::GetID() const, which has identical code
    CoordZoneSource::GetZoneX() const;

    // 0x1000e5aa0, 112 bytes, inline, placed by class name and debug map
    // CoordZoneSource::SetFromPackedCode(int)
    void CoordZoneSource::SetFromPackedCode(int param_1) {
        bool bVar1;
        int iVar2;

        bVar1 = false;
        if (param_1 != -1) {
            field_0 = (uint)param_1 >> 14 & 1023;
            field_4 = (uint)param_1 >> 3 & 2047;
            field_8 = (uint)param_1 >> 24 & 3;
            field_12 = (uint)param_1 >> 1 & 3;
            iVar2 = GetMapSquareX(this);
            if (99 < iVar2)
                goto LAB_1000e5afe;
            iVar2 = GetMapSquareZ(this);
            bVar1 = iVar2 < 256;
        }
        if (bVar1) {
            return;
        }
    LAB_1000e5afe:
        new (this) jag::graphics::ClippingRectangle();
    }

    // 0x1000e5b10, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // CoordZoneSource::Unset()
    /* jag::graphics::ClippingRectangle::ClippingRectangle() */

    void jag::graphics::ClippingRectangle::ClippingRectangle() {
        field_0 = 4294967295;
        field_4 = 4294967295;
        field_8 = 4294967295;
        field_12 = 4294967295;
    }

    // 0x1000e5b20, 48 bytes, inline, placed by class name and debug map
    // CoordZoneSource::IsSet() const
    bool CoordZoneSource::IsSet() {
        if (((field_0 == 4294967295) || (field_4 == 4294967295)) || (field_8 == 4294967295)) {
            return false;
        }
        return field_12 != 4294967295;
    }

    // 0x1000e5cf0: the linker folded this into CoordGrid::GetZoneX() const, which has identical code
    CoordZoneSource::GetMapSquareZ() const;

    // 0x1000e5d50, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // CoordZoneSource::GetRotation() const
    /* minimap::Minimap::GetLevel() */

    int minimap::Minimap::GetLevel() {
        return m_level;
    }

    // 0x100128b20, 16 bytes, complete-object constructor, inline, placed by class name
    // CoordZoneSource::CoordZoneSource(): jumps straight to the base-object constructor

    // 0x100128b30, 16 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // CoordZoneSource::CoordZoneSource()
    /* jag::graphics::ClippingRectangle::ClippingRectangle() */

    void jag::graphics::ClippingRectangle::ClippingRectangle() {
        ClippingRectangle(this);
    }

    // 0x10012d980, 16 bytes, inline, placed by class name
    // CoordZoneSource::GetMapSquareX() const
    int CoordZoneSource::GetMapSquareX() {
        return (int)field_0 >> 3;
    }

} // namespace jag::oldscape::rs2lib

namespace jag {
    // 0x1000e6b30, 16 bytes, inline, placed by debug map only (low confidence)
    // void ShuffledPacket4::p4<int>(int)
    /* void ShuffledPacket4::p4<unsigned int>(unsigned int) */

    void ShuffledPacket4::p4<unsigned int>(uint param_1) {
        p4_alt3(param_1);
    }

    // 0x1000e7440, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::midi2::MidiRequest>::type make_shared<oldscape::midi2::MidiRequest, oldscape::jagex3::Js5*, int&, int, int, bool>(oldscape::jagex3::Js5*&&, int&, int&&, int&&, bool&&)
    /* shared_ptr_if_not_array<oldscape::midi2::MidiRequest>::type
   make_shared<oldscape::midi2::MidiRequest, oldscape::jagex3::Js5*, int const&, int,
   int, bool>(oldscape::jagex3::Js5*&&, int const&, int&&, int&&, bool&&) */

    jag* jag::make_shared<oldscape::midi2::MidiRequest, oldscape::jagex3::Js5*, int const&, int, int, bool>(
        Js5** param_1, int* param_2, int* param_3, int* param_4, bool* param_5) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        MidiRequest* local_40[2];

        pvVar1 = (void*)aligned_alloc(112, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] =
                placement_new<oldscape::midi2::MidiRequest, oldscape::jagex3::Js5*, int const&, int, int, bool>(
                    (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5);
            local_44 = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::midi2::MidiRequest>, int, oldscape::midi2::MidiRequest*&>(
                    pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag

namespace jag::fixedfunction {
    // 0x1000e82e0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7, void>(oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7&&): jumps straight to the base-object constructor

} // namespace jag::fixedfunction

namespace jag::graphics {
    // 0x100128b30: the linker folded this into oldscape::rs2lib::CoordZoneSource::CoordZoneSource(), which has identical code
    ClippingRectangle::ClippingRectangle();

} // namespace jag::graphics

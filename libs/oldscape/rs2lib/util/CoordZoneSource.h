// libs/oldscape/rs2lib/util/CoordZoneSource.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::rs2lib {
    class CoordZoneSource {
    public:
        unsigned int GetLevel() const;
        unsigned int GetZoneZ() const;
        unsigned int GetZoneX() const;
        void SetFromPackedCode(int arg1);
        void Unset();
        bool IsSet() const;
        int GetMapSquareZ() const;
        unsigned int GetRotation() const;
        CoordZoneSource();
        int GetMapSquareX() const;

    private:
        unsigned int m_zoneX;
        unsigned int m_zoneZ;
        unsigned int m_level;
        unsigned int m_rotation;
        uint8_t _unknown_16[4];
    };

    // 0x100024170: CoordZoneSource::GetLevel() const has the same machine code as option::IScriptOption::GetId() const

    // 0x100073980: CoordZoneSource::GetZoneZ() const has the same machine code as jag::math::Rect<int>::MinY() const

    // 0x1000b9960: CoordZoneSource::GetZoneX() const has the same machine code as ScriptVarType::GetID() const

    // 0x1000e5aa0
    void CoordZoneSource::SetFromPackedCode(int arg1) {
        int iVar2;

        bool bVar1 = false;
        if (arg1 != -1) {
            m_zoneX = (unsigned int)arg1 >> 14 & 1023;
            m_zoneZ = (unsigned int)arg1 >> 3 & 2047;
            m_level = (unsigned int)arg1 >> 24 & 3;
            m_rotation = (unsigned int)arg1 >> 1 & 3;
            iVar2 = GetMapSquareX();
            if (99 < iVar2)
                goto LAB_1000e5afe;
            iVar2 = GetMapSquareZ();
            bVar1 = iVar2 < 256;
        }
        if (bVar1) {
            return;
        }
    LAB_1000e5afe:
        new (this) jag::graphics::ClippingRectangle();
    }

    // 0x1000e5b10
    void CoordZoneSource::Unset() {
        field_0 = 4294967295;
        field_4 = 4294967295;
        field_8 = 4294967295;
        field_12 = 4294967295;
    }

    // 0x1000e5b20
    bool CoordZoneSource::IsSet() const {
        if (((m_zoneX == 4294967295) || (m_zoneZ == 4294967295)) || (m_level == 4294967295)) {
            return false;
        }
        return m_rotation != 4294967295;
    }

    // 0x1000e5cf0: CoordZoneSource::GetMapSquareZ() const has the same machine code as CoordGrid::GetZoneX() const

    // 0x1000e5d50
    unsigned int CoordZoneSource::GetRotation() const {
        return m_level;
    }

    // 0x100128b30
    CoordZoneSource::CoordZoneSource() {
        ClippingRectangle(this);
    }

    // 0x10012d980
    int CoordZoneSource::GetMapSquareX() const {
        return (int)m_zoneX >> 3;
    }

} // namespace jag::oldscape::rs2lib

namespace jag {
    // 0x1000e6b30
    void ShuffledPacket4::p4<int>(int arg1) {
        p4_alt3(arg1);
    }

    // 0x1000e7440
    shared_ptr_if_not_array<oldscape::midi2::MidiRequest>::type
    make_shared<oldscape::midi2::MidiRequest, oldscape::jagex3::Js5*, int&, int, int, bool>(
        oldscape::jagex3::Js5*&& arg1, int& arg2, int&& arg3, int&& arg4, bool&& arg5) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        MidiRequest* local_40[2];

        auto arg1_00 = aligned_alloc(112, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::midi2::MidiRequest>::type result;
        } else {
            local_40[0] =
                placement_new<oldscape::midi2::MidiRequest, oldscape::jagex3::Js5*, int const&, int, int, bool>(
                    (void*)((long)arg1_00 + 32), arg1, arg2, arg3, arg4, arg5);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::midi2::MidiRequest>, int, oldscape::midi2::MidiRequest*&>(
                    arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

} // namespace jag

namespace jag::graphics {
    // 0x100128b30: ClippingRectangle::ClippingRectangle() has the same machine code as oldscape::rs2lib::CoordZoneSource::CoordZoneSource()

} // namespace jag::graphics

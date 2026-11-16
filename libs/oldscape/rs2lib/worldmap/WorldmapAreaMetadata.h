// libs/oldscape/rs2lib/worldmap/WorldmapAreaMetadata.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::rs2lib::worldmap {
    class WorldmapAreaMetadata {
    public:
        int GetMaxMapX() const;
        GetDebugName() const;
        IsDefaultMap() const;
        void GetOriginY() const;
        void GetOriginX() const;
        void GetOriginZ() const;
        WorldmapAreaMetadata();
        ~WorldmapAreaMetadata();
        SetMinMapX(int);
        GetNiceName() const;
        int GetMaxMapZ() const;
        uint GetId() const;
        int GetMinMapX() const;
        CoordMapSquare GetOrigin() const;
        GetBackgroundColour() const;
        GetMinMapZ() const;
        GetAdvisedZoom() const;
        void SetMaxMapX(int);
        void SetMinMapZ(int);
        SetMaxMapZ(int);
        void Unpack(PacketJ<Array<unsigned char, eastl::allocator>>&, int, ErrorCapture&);
        UnpackSubarea(PacketJ<Array<unsigned char, eastl::allocator>>&, ErrorCapture&);
        void CalcBounding();
        ulong ContainsSourceTile(int, int, int);
        ulong ContainsTargetTile(int, int);
        SourceToTargetTile(int, int, int);
        TargetToSourceTile(int, int);

        // data members, from how the methods use this: 404 bytes
        uint m_id; // offset 0
        char _unknown_4[68];
        undefined8 m_backgroundColour; // offset 72
        CoordMapSquare m_origin;       // offset 80
        int m_minMapX;                 // offset 92
        int m_maxMapX;                 // offset 96
        int m_minMapZ;                 // offset 100
        int m_maxMapZ;                 // offset 104
        undefined2 field_108;          // offset 108
        char _unknown_110[294];
    };

    // 0x100026100, 16 bytes, inline, placed by class name and debug map
    // WorldmapAreaMetadata::IsDefaultMap() const
    undefined1 WorldmapAreaMetadata::IsDefaultMap() {
        return *(undefined1*)((long)&field_108 + 1);
    }

    // 0x1000297a0, 16 bytes, inline, placed by class name
    // WorldmapAreaMetadata::GetOriginY() const
    void WorldmapAreaMetadata::GetOriginY() {
        m_origin->GetX();
    }

    // 0x1000297b0, 16 bytes, inline, placed by class name
    // WorldmapAreaMetadata::GetOriginX() const
    void WorldmapAreaMetadata::GetOriginX() {
        m_origin->GetZ();
    }

    // 0x1000297c0, 16 bytes, inline, placed by class name
    // WorldmapAreaMetadata::GetOriginZ() const
    void WorldmapAreaMetadata::GetOriginZ() {
        m_origin->GetPos();
    }

    // 0x100057a00, 16 bytes, complete-object constructor, inline, placed by class name
    // WorldmapAreaMetadata::WorldmapAreaMetadata(): jumps straight to the base-object constructor

    // 0x100057a10, 144 bytes, base-object constructor, inline, placed by class name
    // WorldmapAreaMetadata::WorldmapAreaMetadata()
    void WorldmapAreaMetadata::WorldmapAreaMetadata() {
        m_id = 4294967295;
        new (&field_8) eastl::string();
        new (&field_40) eastl::string();
        m_backgroundColour = 18446744073709551615;
        new (m_origin, (CoordGrid*)&rs2lib::CoordGrid::CoordGridNull) rs2lib::CoordGrid();
        m_minMapX = 2147483647;
        m_maxMapX = 0;
        m_minMapZ = 2147483647;
        m_maxMapZ = 0;
        field_108 = 1;
        new (&field_112)
            eastl::vector<std::unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>, eastl::allocator>();
    }

    // 0x100057bc0, 16 bytes, complete-object destructor, inline, placed by class name
    // WorldmapAreaMetadata::~WorldmapAreaMetadata(): jumps straight to the base-object destructor

    // 0x10012c430, 48 bytes, base-object destructor, inline, placed by class name
    // WorldmapAreaMetadata::~WorldmapAreaMetadata()
    void WorldmapAreaMetadata::~WorldmapAreaMetadata() {
        (&field_112)->~vector();
        (&field_40)->~basic_string();
        (&field_8)->~basic_string();
    }

    // 0x10016b490, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // WorldmapAreaMetadata::GetMinMapZ() const
    /* game::ChangeLocationRequest::GetSeqDelay() const */

    undefined4 game::ChangeLocationRequest::GetSeqDelay() {
        return m_seqDelay;
    }

    // 0x10016b4a0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // WorldmapAreaMetadata::GetAdvisedZoom() const
    /* game::HeadbarType::GetStickTime() const */

    uint game::HeadbarType::GetStickTime() {
        return m_stickTime;
    }

    // 0x1001f7250, 16 bytes, inline, placed by class name
    // WorldmapAreaMetadata::SetMaxMapX(int)
    void WorldmapAreaMetadata::SetMaxMapX(int param_1) {
        m_maxMapX = param_1;
    }

    // 0x1001f7260, 16 bytes, inline, placed by class name
    // WorldmapAreaMetadata::SetMinMapZ(int)
    void WorldmapAreaMetadata::SetMinMapZ(int param_1) {
        m_minMapZ = param_1;
    }

    // 0x1001f7270, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // WorldmapAreaMetadata::SetMaxMapZ(int)
    /* audio::SoundInstance::SetLevel(int) */

    void audio::SoundInstance::SetLevel(int param_1) {
        m_level = param_1;
    }

} // namespace jag::oldscape::rs2lib::worldmap

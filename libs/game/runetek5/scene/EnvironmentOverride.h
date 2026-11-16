// libs/game/runetek5/scene/EnvironmentOverride.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class BloomEnvironmentOverrides {
    public:
        BloomEnvironmentOverrides();
        void Decode(unsigned long long, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);

        // data members, from how the methods use this: 28 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[27];
    };

    class ColourGradingEnvironmentOverrides {
    public:
        ColourGradingEnvironmentOverrides();
        void Decode(unsigned long long, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);

        // data members, from how the methods use this: 12 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[11];
    };

    class EnvironmentOverride {
    public:
        GetLightingOverrides() const;
        GetColourGradingOverrides() const;
        HasAnyOverrides() const;
        uint GetTransitionTime() const;
        GetFogOverrides() const;
        GetLightProbeOverrides() const;
        EnvironmentOverride(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);
        GetScatteringOverrides() const;
        GetVolumetricOverrides() const;
        GetToneMapOverrides() const;
        GetBloomOverrides() const;
        GetMapOverrides() const;

        // data members, from how the methods use this: 472 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[7];
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined1 field_32; // offset 32
        char _unknown_33[3];
        undefined1 field_36; // offset 36
        char _unknown_37[15];
        undefined8 field_52; // offset 52
        undefined8 field_60; // offset 60
        char _unknown_68[8];
        undefined8 m_fogOverrides; // offset 76
        ulong field_84;            // offset 84
        ulong field_92;            // offset 92
        ulong field_100;           // offset 100
        undefined8 field_108;      // offset 108
        undefined8 field_116;      // offset 116
        undefined4 field_124;      // offset 124
        undefined8 field_128;      // offset 128
        char _unknown_136[4];
        ulong field_140;               // offset 140
        ulong field_148;               // offset 148
        undefined8 field_156;          // offset 156
        ulong field_164;               // offset 164
        undefined4 field_172;          // offset 172
        undefined8 field_176;          // offset 176
        ulong field_184;               // offset 184
        ulong field_192;               // offset 192
        ulong field_200;               // offset 200
        undefined8 field_208;          // offset 208
        undefined8 m_toneMapOverrides; // offset 216
        ulong field_224;               // offset 224
        ulong field_232;               // offset 232
        ulong field_240;               // offset 240
        undefined8 field_248;          // offset 248
        undefined8 field_256;          // offset 256
        undefined4 field_264;          // offset 264
        char _unknown_268[184];
        undefined8 m_lightProbeOverrides; // offset 452
        undefined4 field_460;             // offset 460
        uint m_transitionTime;            // offset 464
        undefined1 m_hasAnyOverrides;     // offset 468
        char _unknown_469[3];
    };

    class FogEnvironmentOverrides {
    public:
        FogEnvironmentOverrides();
        void Decode(unsigned long long, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);

        // data members, from how the methods use this: 52 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[51];
    };

    class LightProbeEnvironmentOverrides {
    public:
        LightProbeEnvironmentOverrides();
        void Decode(unsigned long long, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);

        // data members, from how the methods use this: 12 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[11];
    };

    class LightingEnvironmentOverrides {
    public:
        LightingEnvironmentOverrides();
        LightingEnvironmentOverrides* operator=(LightingEnvironmentOverrides&&);
        void Decode(unsigned long long, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);

        // data members, from how the methods use this: 76 bytes
        undefined1 field_0;  // offset 0
        undefined7 field_1;  // offset 1
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined1 field_32; // offset 32
        char _unknown_33[3];
        undefined1 field_36; // offset 36
        char _unknown_37[15];
        undefined8 field_52; // offset 52
        undefined8 field_60; // offset 60
        char _unknown_68[8];
    };

    class MapEnvironmentOverrides {
    public:
        MapEnvironmentOverrides();
        void Decode(unsigned long long, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);

        // data members, from how the methods use this: 20 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[19];
    };

    class ScatteringEnvironmentOverrides {
    public:
        ScatteringEnvironmentOverrides();
        ScatteringEnvironmentOverrides* operator=(ScatteringEnvironmentOverrides&&);
        void Decode(unsigned long long, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);

        // data members, from how the methods use this: 76 bytes
        undefined1 field_0;  // offset 0
        undefined7 field_1;  // offset 1
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined1 field_32; // offset 32
        char _unknown_33[3];
        undefined1 field_36; // offset 36
        char _unknown_37[15];
        undefined1 field_52; // offset 52
        char _unknown_53[15];
        undefined1 field_68; // offset 68
        char _unknown_69[7];
    };

    class ToneMapEnvironmentOverrides {
    public:
        ToneMapEnvironmentOverrides();
        void Decode(unsigned long long, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);

        // data members, from how the methods use this: 52 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[51];
    };

    class VolumetricEnvironmentOverrides {
    public:
        VolumetricEnvironmentOverrides();
        VolumetricEnvironmentOverrides* operator=(VolumetricEnvironmentOverrides&&);
        void Decode(unsigned long long, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);

        // data members, from how the methods use this: 92 bytes
        undefined1 field_0;  // offset 0
        undefined7 field_1;  // offset 1
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        undefined8 field_40; // offset 40
        undefined8 field_48; // offset 48
        undefined8 field_56; // offset 56
        undefined1 field_64; // offset 64
        char _unknown_65[3];
        undefined1 field_68; // offset 68
        char _unknown_69[15];
        undefined1 field_84; // offset 84
        char _unknown_85[7];
    };

    // 0x1004416f0, 16 bytes, inline, placed by class name and debug map
    // EnvironmentOverride::HasAnyOverrides() const
    undefined1 EnvironmentOverride::HasAnyOverrides() {
        return m_hasAnyOverrides;
    }

    // 0x1004417e0, 16 bytes, inline, placed by class name and debug map
    // EnvironmentOverride::GetTransitionTime() const
    uint EnvironmentOverride::GetTransitionTime() {
        return m_transitionTime;
    }

    // 0x1004797f0, 16 bytes, inline, placed by class name
    // EnvironmentOverride::GetLightProbeOverrides() const
    undefined8* EnvironmentOverride::GetLightProbeOverrides() {
        return &m_lightProbeOverrides;
    }

    // 0x1004ab500, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // EnvironmentOverride::GetScatteringOverrides() const
    /* ClientStream::GetError() const */

    undefined1* ClientStream::GetError() {
        return m_error;
    }

    // 0x1004ab8a0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // EnvironmentOverride::GetVolumetricOverrides() const
    /* WaterType::GetEmissiveUVScale() const */

    undefined4* WaterType::GetEmissiveUVScale() {
        return &m_emissiveUVScale;
    }

    // 0x1004aba90, 16 bytes, inline, placed by class name
    // EnvironmentOverride::GetToneMapOverrides() const
    undefined8* EnvironmentOverride::GetToneMapOverrides() {
        return &m_toneMapOverrides;
    }

    // 0x1004abeb0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // EnvironmentOverride::GetBloomOverrides() const
    /* ObjTypeList::GetModelCache() */

    undefined1* ObjTypeList::GetModelCache() {
        return &field_128;
    }

    // 0x1004b0c70, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // EnvironmentOverride::GetMapOverrides() const
    /* render::InputAssemblerState::GetGLVertexBuffers() const */

    undefined1* render::InputAssemblerState::GetGLVertexBuffers() {
        return &field_156;
    }

} // namespace jag::game

namespace jag {
    // 0x100441700, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::MapEnvironmentSettings>::type make_shared<game::MapEnvironmentSettings, game::MapEnvironmentSettings&>(game::MapEnvironmentSettings&)
    jag* make_shared<game::MapEnvironmentSettings, game::MapEnvironmentSettings&>(MapEnvironmentSettings* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        MapEnvironmentSettings* local_30[2];

        pvVar1 = (void*)aligned_alloc(704, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_30[0] = placement_new<game::MapEnvironmentSettings, game::MapEnvironmentSettings&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 =
                placement_new<ref_counter_shared<game::MapEnvironmentSettings>, int, game::MapEnvironmentSettings*&>(
                    pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x100441920, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::MapEnvironmentSettings>::type make_shared<game::MapEnvironmentSettings>()
    jag* make_shared<game::MapEnvironmentSettings>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        MapEnvironmentSettings* local_28[2];

        pvVar1 = (void*)aligned_alloc(704, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_28[0] = placement_new<game::MapEnvironmentSettings>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 =
                placement_new<ref_counter_shared<game::MapEnvironmentSettings>, int, game::MapEnvironmentSettings*&>(
                    pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag

namespace jag::graphics {
    // 0x1004abeb0: the linker folded this into game::EnvironmentOverride::GetBloomOverrides() const, which has identical code
    AnimState::GetName() const;

} // namespace jag::graphics

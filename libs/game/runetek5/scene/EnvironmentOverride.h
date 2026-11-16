// libs/game/runetek5/scene/EnvironmentOverride.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class BloomEnvironmentOverrides {
    public:
        BloomEnvironmentOverrides();
        void Decode(unsigned long long arg1, PacketT<Array<unsigned char>>& arg2);

    private:
        uint8_t field_0;
        uint8_t _unknown_1[27];
    };

    class ColourGradingEnvironmentOverrides {
    public:
        ColourGradingEnvironmentOverrides();
        void Decode(unsigned long long arg1, PacketT<Array<unsigned char>>& arg2);

    private:
        uint8_t field_0;
        uint8_t _unknown_1[11];
    };

    class EnvironmentOverride {
    public:
        void GetLightingOverrides() const;
        uint8_t* GetColourGradingOverrides() const;
        bool HasAnyOverrides() const;
        unsigned int GetTransitionTime() const;
        uint64_t* GetFogOverrides() const;
        char* GetLightProbeOverrides() const;
        EnvironmentOverride(PacketT<Array<unsigned char>>& arg1);
        uint8_t* GetScatteringOverrides() const;
        uint32_t* GetVolumetricOverrides() const;
        uint64_t* GetToneMapOverrides() const;
        uint8_t* GetBloomOverrides() const;
        uint8_t* GetMapOverrides() const;

    private:
        uint8_t field_0;
        uint8_t _unknown_1[7];
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint8_t field_32;
        uint8_t _unknown_33[19];
        uint64_t field_52;
        uint64_t field_60;
        uint8_t _unknown_68[8];
        uint64_t m_fogOverrides;
        unsigned long field_84;
        unsigned long field_92;
        unsigned long field_100;
        uint64_t field_108;
        uint64_t field_116;
        uint32_t field_124;
        uint64_t m_bloomOverrides;
        uint8_t _unknown_136[4];
        unsigned long field_140;
        unsigned long field_148;
        uint64_t m_mapOverrides;
        unsigned long field_164;
        uint32_t field_172;
        uint64_t m_colourGradingOverrides;
        unsigned long field_184;
        unsigned long field_192;
        unsigned long field_200;
        uint64_t field_208;
        uint64_t m_toneMapOverrides;
        unsigned long field_224;
        unsigned long field_232;
        unsigned long field_240;
        uint64_t field_248;
        uint64_t field_256;
        uint32_t field_264;
        uint8_t _unknown_268[184];
        uint64_t m_lightProbeOverrides;
        uint32_t field_460;
        unsigned int m_transitionTime;
        uint8_t m_hasAnyOverrides;
        uint8_t _unknown_469[3];
    };

    class FogEnvironmentOverrides {
    public:
        FogEnvironmentOverrides();
        void Decode(unsigned long long arg1, PacketT<Array<unsigned char>>& arg2);

    private:
        uint8_t field_0;
        uint8_t _unknown_1[51];
    };

    class LightProbeEnvironmentOverrides {
    public:
        LightProbeEnvironmentOverrides();
        void Decode(unsigned long long arg1, PacketT<Array<unsigned char>>& arg2);

    private:
        uint8_t field_0;
        uint8_t _unknown_1[11];
    };

    class LightingEnvironmentOverrides {
    public:
        LightingEnvironmentOverrides();
        LightingEnvironmentOverrides* operator=(LightingEnvironmentOverrides&& lightingEnvironmentOverrides);
        void Decode(unsigned long long arg1, PacketT<Array<unsigned char>>& arg2);

    private:
        uint8_t field_0;
        uint8_t field_1[7];
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint8_t field_32;
        uint8_t _unknown_33[19];
        uint64_t field_52;
        uint64_t field_60;
        uint8_t _unknown_68[8];
    };

    class MapEnvironmentOverrides {
    public:
        MapEnvironmentOverrides();
        void Decode(unsigned long long arg1, PacketT<Array<unsigned char>>& arg2);

    private:
        uint8_t field_0;
        uint8_t _unknown_1[19];
    };

    class ScatteringEnvironmentOverrides {
    public:
        ScatteringEnvironmentOverrides();
        ScatteringEnvironmentOverrides* operator=(ScatteringEnvironmentOverrides&& scatteringEnvironmentOverrides);
        void Decode(unsigned long long arg1, PacketT<Array<unsigned char>>& arg2);

    private:
        uint8_t field_0;
        uint8_t field_1[7];
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint8_t field_32;
        uint8_t _unknown_33[43];
    };

    class ToneMapEnvironmentOverrides {
    public:
        ToneMapEnvironmentOverrides();
        void Decode(unsigned long long arg1, PacketT<Array<unsigned char>>& arg2);

    private:
        uint8_t field_0;
        uint8_t _unknown_1[51];
    };

    class VolumetricEnvironmentOverrides {
    public:
        VolumetricEnvironmentOverrides();
        VolumetricEnvironmentOverrides* operator=(VolumetricEnvironmentOverrides&& volumetricEnvironmentOverrides);
        void Decode(unsigned long long arg1, PacketT<Array<unsigned char>>& arg2);

    private:
        uint8_t field_0;
        uint8_t field_1[7];
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint64_t field_40;
        uint64_t field_48;
        uint64_t field_56;
        uint8_t field_64;
        uint8_t _unknown_65[27];
    };

    // 0x1004416f0
    bool EnvironmentOverride::HasAnyOverrides() const {
        return m_hasAnyOverrides;
    }

    // 0x1004417e0
    unsigned int EnvironmentOverride::GetTransitionTime() const {
        return m_transitionTime;
    }

    // 0x1004797f0
    char* EnvironmentOverride::GetLightProbeOverrides() const {
        return (char*)&m_lightProbeOverrides;
    }

    // 0x1004ab500
    uint8_t* EnvironmentOverride::GetScatteringOverrides() const {
        return m_error;
    }

    // 0x1004ab8a0
    uint32_t* EnvironmentOverride::GetVolumetricOverrides() const {
        return &m_emissiveUVScale;
    }

    // 0x1004aba90
    uint64_t* EnvironmentOverride::GetToneMapOverrides() const {
        return &m_toneMapOverrides;
    }

    // 0x1004abeb0
    uint8_t* EnvironmentOverride::GetBloomOverrides() const {
        return &field_128;
    }

    // 0x1004b0c70
    uint8_t* EnvironmentOverride::GetMapOverrides() const {
        return &field_156;
    }

} // namespace jag::game

namespace jag {
    // 0x100441700
    shared_ptr_if_not_array<game::MapEnvironmentSettings>::type
    make_shared<game::MapEnvironmentSettings, game::MapEnvironmentSettings&>(
        game::MapEnvironmentSettings& mapEnvironmentSettings) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        MapEnvironmentSettings* local_30[2];

        auto arg1 = aligned_alloc(704, 16);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<game::MapEnvironmentSettings>::type result;
        } else {
            local_30[0] = placement_new<game::MapEnvironmentSettings, game::MapEnvironmentSettings&>(
                (void*)((long)arg1 + 32), mapEnvironmentSettings);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::MapEnvironmentSettings>, int, game::MapEnvironmentSettings*&>(
                    arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x100441920
    shared_ptr_if_not_array<game::MapEnvironmentSettings>::type make_shared<game::MapEnvironmentSettings>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        MapEnvironmentSettings* local_28[2];

        auto arg1 = aligned_alloc(704, 16);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<game::MapEnvironmentSettings>::type result;
        } else {
            local_28[0] = placement_new<game::MapEnvironmentSettings>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::MapEnvironmentSettings>, int, game::MapEnvironmentSettings*&>(
                    arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag

namespace jag::graphics {
    // 0x1004abeb0: AnimState::GetName() const has the same machine code as game::EnvironmentOverride::GetBloomOverrides() const

} // namespace jag::graphics

// libs/game/runetek5/scene/entities/components/visual/EntityHighlightVisualConfig.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class EntityHighlightVisualConfig {
    public:
        class Defaults;
        void GetDefaultHighlightMode();
        void GetDefault(EntityHighlightType entityHighlightType);
        bool Evaluate(const EntityHighlightState& entityHighlightState,
                      const EntityHighlightGlobalState& entityHighlightGlobalState,
                      EntityHighlightVisualData& entityHighlightVisualData, float arg4) const;
        unsigned long EvaluateAlpha(const EntityHighlightState& entityHighlightState,
                                    const EntityHighlightGlobalState& entityHighlightGlobalState, float arg3) const;
        uint8_t[16] GetDefaultColour() const;
        float GetDefaultAlpha(bool arg1);
        bool IsSilhouette() const;
        static int32_t m_entityHighlightModeNames__[16]; // initialised in its definition
        static float m_scaleIncreaseOnInteraction;       // = 1.0f
        static int32_t m_baseAlphaOutlines;              // = 1059145646
        static int32_t m_baseAlphaSilhouettes;           // = 1050253722
        static int32_t m_runtimeAlphaAdjustment;         // = 1045220557
        static int32_t m_interactionLuminosityTarget;    // = 1062836634
        static StringEnum
            m_entityHighlightModeNames;     // = StringEnum((StringEnumEntry *) &m_entityHighlightModeNames__, 4)
        static Defaults m_perTypeParams[8]; // initialised in its definition

    private:
        int field_0;
        float field_4;
        uint8_t _unknown_8[8];
    };

    class EntityHighlightVisualConfig::Defaults {
    public:
        Defaults(float arg1, const math::Vector3T<float>& vector3);

    private:
        float field_0;
        uint64_t field_4;
        uint32_t field_12;
        uint64_t field_16;
        uint32_t field_24;
        uint8_t _unknown_28[4];
    };

    // 0x1003eafd0
    EntityHighlightVisualConfig::Defaults::Defaults(float arg1, const math::Vector3T<float>& vector3) : field_0(arg1) {
        field_4 = *(uint64_t*)vector3;
        field_12 = *(uint32_t*)(vector3 + 8);
        field_16 = *(uint64_t*)vector3;
        field_24 = *(uint32_t*)(vector3 + 8);
    }

    // 0x1004497c0
    uint8_t[16] EntityHighlightVisualConfig::GetDefaultColour() const {
        uint8_t auVar1[16];

        bool arg1 = (bool)IsSilhouette();
        float arg2 = (float)GetDefaultAlpha(arg1);
        Vector4T<float> local_28(field_8, arg2);
        auVar1[0] = local_28[0];
        auVar1[1] = local_28[1];
        auVar1[2] = local_28[2];
        auVar1[3] = local_28[3];
        auVar1[4] = local_28[4];
        auVar1[5] = local_28[5];
        auVar1[6] = local_28[6];
        auVar1[7] = local_28[7];
        auVar1[8] = local_28[8];
        auVar1[9] = local_28[9];
        auVar1[10] = local_28[10];
        auVar1[11] = local_28[11];
        auVar1[12] = local_28[12];
        auVar1[13] = local_28[13];
        auVar1[14] = local_28[14];
        auVar1[15] = local_28[15];
        return auVar1;
    }

    // 0x100449800
    float EntityHighlightVisualConfig::GetDefaultAlpha(bool arg1) {
        float* pfVar1;
        uint32_t in_register_00000039;

        if ((((uint32_t)in_register_00000039 << 8) | (uint8_t)arg1) == 0) {
            pfVar1 = (float*)&m_baseAlphaOutlines;
        } else {
            pfVar1 = (float*)&m_baseAlphaSilhouettes;
        }
        return *pfVar1 + m_runtimeAlphaAdjustment;
    }

    // 0x100449830
    bool EntityHighlightVisualConfig::IsSilhouette() const {
        return field_4 == 0.0;
    }

} // namespace jag::game

namespace jag {
    // 0x1003eaeb0
    EntityWaypoint::EntityWaypoint() : game::CoordFine(-1, -1.0, -1.0), m_pMoveSpeed(nullptr) {}

    // 0x1003eaf40
    RouteMovement::RouteMovement(MoveType moveType, math::Vector3T<float> vector3, const MoveSpeed* moveSpeed,
                                 float arg4)
        : field_0(moveType) {
        uint32_t in_XMM0_Db;
        uint32_t in_XMM1_Da;
        uint32_t in_XMM2_Da;

        field_4 = (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg4);
        field_12 = in_XMM1_Da;
        field_16 = vector3;
        field_24 = in_XMM2_Da;
    }

} // namespace jag

// 0x1003eb9f0
void cos(float arg1) {
    _cosf();
}

// 0x1003eba00
void sin(float arg1) {
    _sinf();
}

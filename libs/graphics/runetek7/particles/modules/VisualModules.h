// libs/graphics/runetek7/particles/modules/VisualModules.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    // 0x1007e60b0
    ParticleVertexData<math::Vector2T<float>>::ParticleVertexData() {
        long lVar1 = 0;
        do {
            new ((this + lVar1)) math::Vector2T();
            lVar1 = lVar1 + 8;
        } while (lVar1 != 32);
    }

    // 0x1007e6410
    ParticleCommonMaterials::ParticleCommonMaterials()
        : field_0(nullptr), field_8(0), field_3376(4294967295), m_textureUnitAtlas(4294967295),
          m_textureUnitAtlasSettings(4294967295) {}

    // 0x1007e64d0
    ParticleData::ParticleData() : eastl::vector<float, SafeBucketAllocatorEASTL>() {}

    // 0x1007e6cd0
    ParticleData::~ParticleData() {
        field_240.~vector();
        field_216.~vector();
        field_192.~vector();
        field_168.~vector();
        field_144.~vector();
        field_120.~vector();
        field_96.~vector();
        field_72.~vector();
        field_48.~vector();
        field_24.~vector();
    }

    // 0x1007e6db0
    ParticleCommonMaterials::~ParticleCommonMaterials() {
        field_16.~array();
    }

} // namespace jag::graphics

namespace jag::graphics::particlemodules {
    class Colour {
    public:
        // virtual methods in vtable order
        virtual ~Colour();
        virtual uint64_t LoadFromPacket(unsigned char arg1, PacketT<Array<unsigned char>>& arg2);
        virtual float ProcessTick(float arg1, const ParticleModuleUpdateParams& particleModuleUpdateParams,
                                  ParticleModuleUpdateState& particleModuleUpdateState,
                                  ParticleData& particleData) const;
        Colour();

    private:
        uint8_t _unknown_8[384];
    };

    class Flipbook {
    public:
        // virtual methods in vtable order
        virtual ~Flipbook();
        virtual uint64_t LoadFromPacket(unsigned char arg1, PacketT<Array<unsigned char>>& arg2);
        virtual float ProcessTick(float arg1, const ParticleModuleUpdateParams& particleModuleUpdateParams,
                                  ParticleModuleUpdateState& particleModuleUpdateState,
                                  ParticleData& particleData) const;
        Flipbook();

    private:
        char field_8;
        uint8_t _unknown_9[7];
    };

    class Lighting {
    public:
        // virtual methods in vtable order
        virtual ~Lighting();
        virtual uint64_t LoadFromPacket(unsigned char arg1, PacketT<Array<unsigned char>>& arg2);
        virtual float ProcessTick(float arg1, const ParticleModuleUpdateParams& particleModuleUpdateParams,
                                  ParticleModuleUpdateState& particleModuleUpdateState,
                                  ParticleData& particleData) const;
        Lighting();
        static int32_t MODE_PARTICLE_DATA_FLAGS[3]; // = { 3, 4, 5 }

    private:
        unsigned int field_8;
        uint8_t field_12;
        uint8_t field_13;
        uint8_t _unknown_14[6];
    };

    class Scale {
    public:
        // virtual methods in vtable order
        virtual ~Scale();
        virtual uint64_t LoadFromPacket(unsigned char arg1, PacketT<Array<unsigned char>>& arg2);
        virtual uint64_t ProcessTick(float arg1, const ParticleModuleUpdateParams& particleModuleUpdateParams,
                                     ParticleModuleUpdateState& particleModuleUpdateState,
                                     ParticleData& particleData) const;
        virtual void RenderDebug(const math::Matrix44T<float>& matrix44, float arg2) const;
        Scale();

    private:
        bool field_8;
        uint8_t _unknown_9[3];
        uint32_t field_12;
        uint32_t field_16;
        uint32_t field_20;
        uint32_t field_24;
        uint8_t _unknown_28[356];
    };

} // namespace jag::graphics::particlemodules

namespace jag::math {
    // 0x1007e54b0
    void getMersenneTwistorEngine() {
        return &Random::mersenneTwisterEngine;
    }

} // namespace jag::math

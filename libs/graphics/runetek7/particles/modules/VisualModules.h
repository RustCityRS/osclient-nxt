// libs/graphics/runetek7/particles/modules/VisualModules.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics::particlemodules {
    class Colour {
    public:
        // virtual methods in vtable order
        virtual ~Colour();
        virtual LoadFromPacket(unsigned char, PacketT<Array<unsigned char, eastl::allocator>>&);
        virtual float ProcessTick(float, ParticleModuleUpdateParams const&, ParticleModuleUpdateState&,
                                  ParticleData&) const;
        Colour();

        // data members, from how the methods use this: 392 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[384];
    };

    class Flipbook {
    public:
        // virtual methods in vtable order
        virtual ~Flipbook();
        virtual LoadFromPacket(unsigned char, PacketT<Array<unsigned char, eastl::allocator>>&);
        virtual float ProcessTick(float, ParticleModuleUpdateParams const&, ParticleModuleUpdateState&,
                                  ParticleData&) const;
        Flipbook();

        // data members, from how the methods use this: 16 bytes
        undefined** field_0; // offset 0, vtable pointer
        char field_8;        // offset 8
        char _unknown_9[7];
    };

    class Lighting {
    public:
        // virtual methods in vtable order
        virtual ~Lighting();
        virtual LoadFromPacket(unsigned char, PacketT<Array<unsigned char, eastl::allocator>>&);
        virtual float ProcessTick(float, ParticleModuleUpdateParams const&, ParticleModuleUpdateState&,
                                  ParticleData&) const;
        Lighting();
        static /* 12 bytes */ MODE_PARTICLE_DATA_FLAGS; // = { 3, 4, 5 }

        // data members, from how the methods use this: 20 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        byte field_12;       // offset 12
        byte field_13;       // offset 13
        char _unknown_14[6];
    };

    class Scale {
    public:
        // virtual methods in vtable order
        virtual ~Scale();
        virtual LoadFromPacket(unsigned char, PacketT<Array<unsigned char, eastl::allocator>>&);
        virtual ProcessTick(float, ParticleModuleUpdateParams const&, ParticleModuleUpdateState&, ParticleData&) const;
        virtual void RenderDebug(math::Matrix44T<float> const&, float) const;
        Scale();

        // data members, from how the methods use this: 384 bytes
        undefined** field_0; // offset 0, vtable pointer
        bool field_8;        // offset 8
        char _unknown_9[3];
        undefined4 field_12; // offset 12
        undefined4 field_16; // offset 16
        undefined4 field_20; // offset 20
        undefined4 field_24; // offset 24
        char _unknown_28[356];
    };

    // 0x1007e5280, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // Colour::~Colour(): jumps straight to the base-object destructor

    // 0x1007e5290, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // Colour::~Colour()
    void Colour::~Colour() {
        ~Colour(this);
        operator_delete(this);
    }

    // 0x1007e52b0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // Scale::~Scale(): jumps straight to the base-object destructor

    // 0x1007e52c0, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // Scale::~Scale()
    void Scale::~Scale() {
        ~Scale(this);
        operator_delete(this);
    }

    // 0x100829de0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Colour::Colour(): jumps straight to the base-object constructor

    // 0x100829e30, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Scale::Scale(): jumps straight to the base-object constructor

    // 0x100829e50, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Flipbook::Flipbook(): jumps straight to the base-object constructor

    // 0x100829e70, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Lighting::Lighting(): jumps straight to the base-object constructor

} // namespace jag::graphics::particlemodules

namespace jag::graphics {
    // 0x1007e60b0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ParticleVertexData<math::Vector2T<float> >::ParticleVertexData()
    void ParticleVertexData<math::Vector2T<float>>::ParticleVertexData() {
        long lVar1;

        lVar1 = 0;
        do {
            new ((this + lVar1)) math::Vector2T<int>();
            lVar1 = lVar1 + 8;
        } while (lVar1 != 32);
    }

    // 0x1007e6410, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ParticleCommonMaterials::ParticleCommonMaterials()
    void ParticleCommonMaterials::ParticleCommonMaterials() {
        field_0 = (PostProcessController*)0;
        field_8 = 0;
        new (&field_16) std::array<ParticleMaterial, 6ul>();
        field_3376 = -1;
        m_textureUnitAtlas = 4294967295;
        m_textureUnitAtlasSettings = 4294967295;
    }

    // 0x1007e64d0, 352 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ParticleData::ParticleData()
    void ParticleData::ParticleData() {
        eastl::vector<float, SafeBucketAllocatorEASTL>::vector();
        eastl::vector<float, SafeBucketAllocatorEASTL>::vector();
        eastl::vector<float, SafeBucketAllocatorEASTL>::vector();
        eastl::vector<float, SafeBucketAllocatorEASTL>::vector();
        eastl::vector<float, SafeBucketAllocatorEASTL>::vector();
        eastl::vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>::vector();
        eastl::vector<ParticleVertexData<math::Vector2T<float>>, SafeBucketAllocatorEASTL>::vector();
        eastl::vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>::vector();
        eastl::vector<ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>,
                      SafeBucketAllocatorEASTL>::vector();
        eastl::vector<ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>,
                      SafeBucketAllocatorEASTL>::vector();
        eastl::vector<ParticleVertexDataProxy<ParticleData::UVAnimationData>, SafeBucketAllocatorEASTL>::vector();
    }

    // 0x1007e6cd0, 144 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // ParticleData::~ParticleData()
    void ParticleData::~ParticleData() {
        (&field_240)->~vector();
        (&field_216)->~vector();
        (&field_192)->~vector();
        (&field_168)->~vector();
        (&field_144)->~vector();
        (&field_120)->~vector();
        (&field_96)->~vector();
        (&field_72)->~vector();
        (&field_48)->~vector();
        (&field_24)->~vector();
        ~vector();
    }

    // 0x1007e6db0, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // ParticleCommonMaterials::~ParticleCommonMaterials()
    void ParticleCommonMaterials::~ParticleCommonMaterials() {
        (&field_16)->~array();
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x1007e54b0, 16 bytes, inline, placed by debug map only (low confidence)
    // getMersenneTwistorEngine()
    undefined1* getMersenneTwistorEngine() {
        return &Random::mersenneTwisterEngine;
    }

} // namespace jag::math

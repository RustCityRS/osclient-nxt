// libs/graphics/runetek7/terrain/TerrainMaterial.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class TerrainMaterial {
    public:
        // virtual methods in vtable order
        virtual ~TerrainMaterial();
        TerrainMaterial();
        TerrainMaterial(TerrainMaterial&&);
        TerrainMaterial(TerrainMaterial const&);
        void InitRenderPassEffects();
        void SetTextureAtlasReference(shared_ptr<TextureAtlasReference> const&);
        void GetTextureAtlasReference() const;

        // data members, from how the methods use this: 552 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined* field_16; // offset 16
        undefined* field_24; // offset 24
        uchar field_32;      // offset 32
        char _unknown_33[3];
        undefined4 field_36; // offset 36
        int field_40;        // offset 40
        char _unknown_44[492];
        shared_ptr field_536; // offset 536
    };

    // 0x1007b4db0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // TerrainMaterial::~TerrainMaterial(): jumps straight to the base-object destructor

    // 0x1007b51a0, 32 bytes, inline, placed by class name and debug map
    // TerrainMaterial::SetTextureAtlasReference(shared_ptr<TextureAtlasReference> const&)
    /* ParticleMaterial::SetTextureAtlasReference(shared_ptr<TextureAtlasReference>
   const&) */

    void ParticleMaterial::SetTextureAtlasReference(shared_ptr* param_1) {
        shared_ptr<TextureAtlasReference>::operator=((shared_ptr<TextureAtlasReference>*)(field_528 + 8), param_1);
    }

    // 0x1007b8920, 32 bytes, inline, placed by class name
    // TerrainMaterial::GetTextureAtlasReference() const
    /* ParticleMaterial::GetTextureAtlasReference() const */

    void ParticleMaterial::GetTextureAtlasReference() {
        ((field_528 + 8))->end();
    }

    // 0x1007bc240, 32 bytes, deleting destructor, inline, placed by class name
    // TerrainMaterial::~TerrainMaterial()
    void TerrainMaterial::~TerrainMaterial() {
        ~TerrainMaterial(this);
        operator_delete(this);
    }

    // 0x1007bcdc0, 64 bytes, base-object destructor, inline, placed by class name
    // TerrainMaterial::~TerrainMaterial()
    void TerrainMaterial::~TerrainMaterial() {
        field_0 = (undefined**)(PTR_vtable_100ee8780 + 16);
        field_536->~shared_ptr();
        ~RenderMaterial();
    }

} // namespace jag::graphics

namespace jag::fixedfunction {
    // 0x1007b51c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&, eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int, shared_ptr<graphics::TextureAtlasReference> const&, eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false, eastl::allocator>&, math::Matrix44T<float> const*, float const*)::$_8, void>(graphics::TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&, eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&, int, int, int, shared_ptr<graphics::TextureAtlasReference> const&, eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false, eastl::allocator>&, math::Matrix44T<float> const*, float const*)::$_8&&): jumps straight to the base-object constructor

} // namespace jag::fixedfunction

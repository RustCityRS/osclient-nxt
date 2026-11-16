// libs/graphics/runetek7/water/WaterMaterial.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class WaterMaterial {
    public:
        // virtual methods in vtable order
        virtual ~WaterMaterial();
        WaterParameters GetWaterParameters() const;
        WaterParameters GetWaterParameters();
        WaterMaterial();
        WaterMaterial(WaterMaterial&&);
        WaterMaterial(WaterMaterial const&);
        void Init(WaterPatchConfig const&, MaterialManager&, TextureManager&);
        void InitMaterials(WaterPatchConfig const&, MaterialManager&);
        void InitWaterParameters(WaterPatchConfig const&);
        LoadTextures(TextureManager&);
        void InitRenderPassEffects();
        float GetNormalMapScale(WaterPatchConfig const&, unsigned long);
        ulong HasNormalMaps() const;
        void HasFoamMaps() const;

        // data members, from how the methods use this: 1100 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined* field_16; // offset 16
        undefined* field_24; // offset 24
        uchar field_32;      // offset 32
        char _unknown_33[3];
        undefined4 field_36; // offset 36
        undefined4 field_40; // offset 40
        char _unknown_44[484];
        Callstack field_528;               // offset 528
        WaterParameters m_waterParameters; // offset 544
        char _unknown_1044[4];
        undefined8 field_1048; // offset 1048
        undefined8 field_1056; // offset 1056
        Material* field_1064;  // offset 1064
        Material* field_1072;  // offset 1072
        char _unknown_1080[20];
    };

    // 0x1007a2d90, 16 bytes, inline, placed by class name and debug map
    // WaterMaterial::GetWaterParameters() const
    /* WaterMaterial::GetWaterParameters() */

    undefined1* WaterMaterial::GetWaterParameters() {
        return m_waterParameters;
    }

    // 0x1007bac20, 16 bytes, complete-object destructor, inline, placed by class name
    // WaterMaterial::~WaterMaterial(): jumps straight to the base-object destructor

    // 0x1007bbf20, 32 bytes, inline, placed by class name
    // WaterMaterial::HasFoamMaps() const
    void WaterMaterial::HasFoamMaps() {
        shared_ptr* psVar1;

        psVar1 = (shared_ptr*)m_waterParameters->GetEmissiveUVScale();
        operator!=(psVar1, (_func_decltype_nullptr*)0);
    }

    // 0x1007bc260, 32 bytes, deleting destructor, inline, placed by class name
    // WaterMaterial::~WaterMaterial()
    void WaterMaterial::~WaterMaterial() {
        ~WaterMaterial(this);
        operator_delete(this);
    }

    // 0x1007bd3f0, 64 bytes, base-object destructor, inline, placed by class name
    // WaterMaterial::~WaterMaterial()
    void WaterMaterial::~WaterMaterial() {
        field_0 = (undefined**)(PTR_vtable_100ee8758 + 16);
        m_waterParameters->~WaterParameters();
        ~RenderMaterial();
    }

} // namespace jag::graphics

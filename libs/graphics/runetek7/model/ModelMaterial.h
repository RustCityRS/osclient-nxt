// libs/graphics/runetek7/model/ModelMaterial.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ModelMaterial : public render::RenderDeviceOnEndFrame // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ModelMaterial();
        virtual void DestroyRenderingResources();
        GetHideFacesMode() const;
        GetRefractionParams() const;
        void GetTextureAtlasReference() const;
        ModelMaterial();
        ModelMaterial(ModelMaterial&&);
        ModelMaterial(ModelMaterial const&);
        void Init(Material const&, bool);
        bool IsCombinable(ModelMaterial const&);
        ModelMaterial* operator=(ModelMaterial const&);
        void InitRenderPassEffects(bool);
        bool IsRefractionEnabled() const;
        void UpdateEnvironmentMap(TextureManager&);
        GetEnvironmentMap() const;
        void SetTextureAtlasReference(shared_ptr<TextureAtlasReference> const&);
        void DestroyEnvironmentMap();

        // data members, from how the methods use this: 600 bytes, the first 9 are RenderDeviceOnEndFrame
        char _unknown_9[7];
        RasteriserState* field_16; // offset 16
        ShaderProgram* field_24;   // offset 24
        uchar field_32;            // offset 32
        char _unknown_33[3];
        undefined4 field_36; // offset 36
        int field_40;        // offset 40
        char _unknown_44[492];
        shared_ptr field_536; // offset 536
        shared_ptr field_552; // offset 552
        char _unknown_568[8];
        undefined8 m_refractionParams; // offset 576
        undefined8 field_584;          // offset 584
        undefined* field_592;          // offset 592
    };

    // 0x10080d4f0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ModelMaterial::~ModelMaterial(): jumps straight to the base-object destructor

    // 0x10080f990, 352 bytes, inline, placed by class name
    // ModelMaterial::IsCombinable(ModelMaterial const&)
    bool ModelMaterial::IsCombinable(ModelMaterial* param_1) {
        char cVar1;
        char cVar2;
        int iVar4;
        int iVar5;
        Vector4T* pVVar6;

        cVar1 = GetOption(0);
        cVar2 = param_1->GetOption(0);
        if (cVar1 == cVar2) {
            iVar4 = GetAliveCount();
            iVar5 = param_1->GetAliveCount();
            if (((iVar4 == iVar5) && (field_16 == param_1->field_16)) && (field_24 == param_1->field_24)) {
                cVar1 = GetOption(7);
                cVar2 = param_1->GetOption(7);
                if (cVar1 == cVar2) {
                    cVar1 = GetOption(8);
                    cVar2 = param_1->GetOption(8);
                    if ((cVar1 == cVar2) && (field_592 == param_1->field_592)) {
                        cVar1 = GetOption(10);
                        cVar2 = param_1->GetOption(10);
                        if (cVar1 == cVar2) {
                            cVar1 = GetOption(13);
                            cVar2 = param_1->GetOption(13);
                            if (cVar1 == cVar2) {
                                pVVar6 = (Vector4T*)GetRefractionParams(param_1);
                                if ((math::operator==((Vector4T*)&m_refractionParams, pVVar6)) &&
                                    ((field_16 != (RasteriserState*)AlphaMode::ALPHA_TESTED ||
                                      (field_32 == param_1->field_32)))) {
                                    iVar4 = field_40;
                                    iVar5 = param_1->GetEndPosition();
                                    return iVar4 == iVar5;
                                }
                            }
                        }
                    }
                }
            }
        }
        return false;
    }

    // 0x1008112e0, 64 bytes, inline, placed by class name
    // ModelMaterial::IsRefractionEnabled() const
    bool ModelMaterial::IsRefractionEnabled() {
        bool bVar1;
        vector* pvVar2;
        float* pfVar3;
        type* in_RSI;

        pvVar2 = (&m_refractionParams, in_RSI)->SSOBeginPtr();
        bVar1 = true;
        if (*(float*)pvVar2 <= 0.0) {
            pfVar3 = (float*)(&m_refractionParams)->second();
            bVar1 = 0.0 < *pfVar3;
        }
        return bVar1;
    }

    // 0x100814930, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ModelMaterial::GetEnvironmentMap() const
    /* render::RenderPipelineState::GetPSTextureSamplerPairs() const */

    undefined1* render::RenderPipelineState::GetPSTextureSamplerPairs() {
        return &field_552;
    }

    // 0x10082d550, 32 bytes, deleting destructor, inline, placed by class name
    // ModelMaterial::~ModelMaterial()
    void ModelMaterial::~ModelMaterial() {
        ~ModelMaterial(this);
        operator_delete(this);
    }

    // 0x10082db60, 64 bytes, base-object destructor, inline, placed by class name
    // ModelMaterial::~ModelMaterial()
    void ModelMaterial::~ModelMaterial() {
        field_0 = &PTR__ModelMaterial_100f157d8;
        field_552->~shared_ptr();
        field_536->~shared_ptr();
        ~RenderMaterial();
    }

} // namespace jag::graphics

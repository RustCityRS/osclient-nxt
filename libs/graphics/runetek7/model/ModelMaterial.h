// libs/graphics/runetek7/model/ModelMaterial.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ModelMaterial : public render::RenderDeviceOnEndFrame // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ModelMaterial();
        virtual void DestroyRenderingResources();
        long GetHideFacesMode() const;
        uint64_t* GetRefractionParams() const;
        void GetTextureAtlasReference() const;
        ModelMaterial();
        ModelMaterial(ModelMaterial&& modelMaterial);
        ModelMaterial(const ModelMaterial& modelMaterial);
        void Init(const Material& material, bool arg2);
        bool IsCombinable(const ModelMaterial& modelMaterial);
        ModelMaterial* operator=(const ModelMaterial& modelMaterial);
        void InitRenderPassEffects(bool arg1);
        bool IsRefractionEnabled() const;
        void UpdateEnvironmentMap(TextureManager& textureManager);
        shared_ptr GetEnvironmentMap() const;
        void SetTextureAtlasReference(const shared_ptr<TextureAtlasReference>& textureAtlasReference);
        void DestroyEnvironmentMap();

    private:
        uint8_t _unknown_9[7];
        AlphaMode* field_16;
        BlendMode* field_24;
        unsigned char field_32;
        uint8_t _unknown_33[3];
        EnumOptionToggle field_36;
        int field_40;
        uint8_t _unknown_44[484];
        Callstack field_528;
        uint8_t _unknown_544[8];
        shared_ptr m_environmentMap;
        uint8_t _unknown_568[8];
        uint64_t m_refractionParams;
        uint64_t field_584;
        uint8_t* m_hideFacesMode;
    };

    // 0x10080f990
    bool ModelMaterial::IsCombinable(const ModelMaterial& modelMaterial) {
        int iVar4;
        int iVar5;
        Vector4T<float>* vector42;

        bool cVar1 = GetOption(0);
        char cVar2 = modelMaterial.GetOption(0);
        if (cVar1 == cVar2) {
            iVar4 = GetAliveCount();
            iVar5 = modelMaterial.GetAliveCount();
            if (((iVar4 == iVar5) && (field_16 == modelMaterial.field_16)) && (field_24 == modelMaterial.field_24)) {
                cVar1 = GetOption(7);
                cVar2 = modelMaterial.GetOption(7);
                if (cVar1 == cVar2) {
                    cVar1 = GetOption(8);
                    cVar2 = modelMaterial.GetOption(8);
                    if ((cVar1 == cVar2) && (m_hideFacesMode == modelMaterial.m_hideFacesMode)) {
                        cVar1 = GetOption(10);
                        cVar2 = modelMaterial.GetOption(10);
                        if (cVar1 == cVar2) {
                            cVar1 = GetOption(13);
                            cVar2 = modelMaterial.GetOption(13);
                            if (cVar1 == cVar2) {
                                vector42 = (Vector4T<float>*)GetRefractionParams(modelMaterial);
                                if ((m_refractionParams == *vector42) &&
                                    ((field_16 != (AlphaMode*)AlphaMode::ALPHA_TESTED ||
                                      (field_32 == modelMaterial.field_32)))) {
                                    iVar4 = field_40;
                                    iVar5 = modelMaterial.GetEndPosition();
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

    // 0x1008112e0
    bool ModelMaterial::IsRefractionEnabled() const {
        auto pfVar2 = m_refractionParams.SSOBeginPtr();
        bool bVar1 = true;
        if (*pfVar2 <= 0.0) {
            pfVar2 = (float*)m_refractionParams.second();
            bVar1 = 0.0 < *pfVar2;
        }
        return bVar1;
    }

    // 0x100814930
    shared_ptr ModelMaterial::GetEnvironmentMap() const {
        return &field_552;
    }

    // 0x10082db60
    ModelMaterial::~ModelMaterial() {
        m_environmentMap->~shared_ptr();
        ((field_528 + 8))->~shared_ptr();
    }

} // namespace jag::graphics

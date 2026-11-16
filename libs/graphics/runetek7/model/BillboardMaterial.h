// libs/graphics/runetek7/model/BillboardMaterial.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class BillboardMaterial {
    public:
        // virtual methods in vtable order
        virtual ~BillboardMaterial();
        void SetTextureAtlasReference(const shared_ptr<TextureAtlasReference>& textureAtlasReference);
        void GetTextureAtlasReference() const;
        BillboardMaterial();
        BillboardMaterial(BillboardMaterial&& billboardMaterial);
        BillboardMaterial(const BillboardMaterial& billboardMaterial);
        void Init(bool arg1, bool arg2, const Material& material);
        bool IsCombinable(const BillboardMaterial& billboardMaterial);
        BillboardMaterial* operator=(const BillboardMaterial& billboardMaterial);
        void SetLowPrecision(bool arg1);
        void InitRenderPassEffects(bool arg1, bool arg2);

    private:
        uint64_t field_8;
        uint8_t* field_16;
        uint8_t* field_24;
        unsigned char field_32;
        uint8_t _unknown_33[3];
        uint32_t field_36;
        uint32_t field_40;
        uint8_t _unknown_44[484];
        Callstack field_528;
        uint8_t _unknown_544[8];
        uint8_t* field_552;
        uint8_t* field_560;
    };

    // 0x100867b40
    bool BillboardMaterial::IsCombinable(const BillboardMaterial& billboardMaterial) {
        bool cVar1;
        char cVar2;
        uint8_t bVar3;
        uint32_t uVar4;
        unsigned int uVar5;

        if ((((field_16 == billboardMaterial.field_16) && (field_24 == billboardMaterial.field_24)) &&
             (field_32 == billboardMaterial.field_32)) &&
            ((field_552 == billboardMaterial.field_552 && (field_560 == billboardMaterial.field_560)))) {
            uVar5 = 0;
            cVar1 = GetOption(0);
            cVar2 = billboardMaterial.GetOption(0);
            if (cVar1 == cVar2) {
                bVar3 = GetOption(0);
                uVar4 = billboardMaterial.GetOption(0);
                uVar5 =
                    (((uint32_t)((int32_t)((unsigned int)uVar4 >> 8)) << 8) | (uint8_t)((uint8_t)uVar4 ^ bVar3)) ^ 1;
            }
        } else {
            uVar5 = 0;
        }
        return uVar5;
    }

    // 0x100868a40
    float DstFromCameraPlane(const math::AABB& aabb, const math::Matrix44T<float>& matrix441,
                             const math::Matrix44T<float>& matrix442) {
        uint32_t extraout_XMM0_Dd;
        float in_XMM1_Da;
        uint8_t local_68[32];

        new (local_68) math::AABB(aabb);
        local_68->Transform(matrix441);
        uint64_t local_48 = local_68->GetCentrePos();
        uint32_t uStack_3c = extraout_XMM0_Dd;
        float local_24 = in_XMM1_Da;
        float* pfVar1 = (float*)math::Matrix44T<float>::operator()(matrix442, 2);
        float local_28 = *pfVar1 * (float)local_48;
        pfVar1 = (float*)math::Matrix44T<float>::operator()(matrix442, 6);
        local_48._0_4_ = local_48._4_4_ * *pfVar1;
        uint32_t uStack_40 = uStack_3c;
        pfVar1 = (float*)math::Matrix44T<float>::operator()(matrix442, 10);
        local_24 = local_24 * *pfVar1 + local_28 + (float)local_48;
        pfVar1 = (float*)math::Matrix44T<float>::operator()(matrix442, 14);
        float local_2c = local_24 + *pfVar1;
        pfVar1 = std::max<float>(0.0, local_2c);
        return *pfVar1;
    }

    // 0x100868b40
    BillboardBatch_DE*
    DrawableElementPool<BillboardBatch_DE>::Create<float&, eastl::vector_map<int, FaceGroupRenderMasks> const*&,
                                                   BillboardBatchInstance&>(
        float& arg1, const eastl::vector_map<int, FaceGroupRenderMasks>*& arg2,
        BillboardBatchInstance& billboardBatchInstance) {
        uint32_t uVar3;
        BillboardBatch_DE* billboardBatch_DE;
        Logger* this_00;

        GetDrawableElementPool();
        int iVar1 = ((Option<game::option::EnumBrightness>*)&GetDrawableElementPool()::pool)->GetValue();
        int iVar2 = ((FastPool<audio::SoundInstance, int>*)&GetDrawableElementPool()::pool)->capacity();
        if (iVar1 < iVar2) {
            billboardBatch_DE =
                ((FastPool<BillboardBatch_DE, int>*)&GetDrawableElementPool()::pool)
                    ->Create<float&, eastl::vector_map<int, FaceGroupRenderMasks> const*&, BillboardBatchInstance&>(
                        arg1, arg2, billboardBatchInstance);
        } else {
            this_00 = logger::default_logger();
            uVar3 = ((Option<game::option::EnumBrightness>*)&GetDrawableElementPool()::pool)->GetValue();
            this_00->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                         "renderer/DrawableElement.h",
                         142, "%s requires more entries in pool, size: %d", "Create", uVar3);
            billboardBatch_DE = (BillboardBatch_DE*)operator new(128);
            new (billboardBatch_DE) BillboardBatch_DE(arg1, arg2, billboardBatchInstance);
        }
        return billboardBatch_DE;
    }

    // 0x10086afb0
    BillboardMaterial::~BillboardMaterial() {
        ((field_528 + 8))->~shared_ptr();
    }

} // namespace jag::graphics

// libs/graphics/runetek7/model/BillboardMaterial.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class BillboardMaterial {
    public:
        // virtual methods in vtable order
        virtual ~BillboardMaterial();
        void SetTextureAtlasReference(shared_ptr<TextureAtlasReference> const&);
        void GetTextureAtlasReference() const;
        BillboardMaterial();
        BillboardMaterial(BillboardMaterial&&);
        BillboardMaterial(BillboardMaterial const&);
        void Init(bool, bool, Material const&);
        uint IsCombinable(BillboardMaterial const&);
        BillboardMaterial* operator=(BillboardMaterial const&);
        void SetLowPrecision(bool);
        void InitRenderPassEffects(bool, bool);

        // data members, from how the methods use this: 568 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined* field_16; // offset 16
        undefined* field_24; // offset 24
        uchar field_32;      // offset 32
        char _unknown_33[3];
        undefined4 field_36; // offset 36
        undefined4 field_40; // offset 40
        char _unknown_44[484];
        Callstack field_528; // offset 528
        char _unknown_544[8];
        undefined* field_552; // offset 552
        undefined* field_560; // offset 560
    };

    // 0x100866360, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // BillboardMaterial::~BillboardMaterial(): jumps straight to the base-object destructor

    // 0x100867b40, 160 bytes, inline, placed by class name and debug map
    // BillboardMaterial::IsCombinable(BillboardMaterial const&)
    uint BillboardMaterial::IsCombinable(BillboardMaterial* param_1) {
        char cVar1;
        char cVar2;
        byte bVar3;
        undefined4 uVar4;
        uint uVar5;

        if ((((field_16 == param_1->field_16) && (field_24 == param_1->field_24)) && (field_32 == param_1->field_32)) &&
            ((field_552 == param_1->field_552 && (field_560 == param_1->field_560)))) {
            uVar5 = 0;
            cVar1 = GetOption(0);
            cVar2 = param_1->GetOption(0);
            if (cVar1 == cVar2) {
                bVar3 = GetOption(0);
                uVar4 = param_1->GetOption(0);
                uVar5 = CONCAT31((int3)((uint)uVar4 >> 8), (byte)uVar4 ^ bVar3) ^ 1;
            }
        } else {
            uVar5 = 0;
        }
        return uVar5;
    }

    // 0x100868a40, 224 bytes, inline, placed by debug map only (low confidence)
    // DstFromCameraPlane(math::AABB const&, math::Matrix44T<float> const&, math::Matrix44T<float> const&)
    float DstFromCameraPlane(AABB* param_1, Matrix44T* param_2, Matrix44T* param_3) {
        float* pfVar1;
        undefined4 extraout_XMM0_Dd;
        float in_XMM1_Da;
        undefined1 local_68[32];
        undefined8 local_48;
        undefined4 uStack_40;
        undefined4 uStack_3c;
        float local_30;
        float local_2c;
        float local_28;
        float local_24;

        new (local_68) math::AABB(param_1);
        local_68->Transform(param_2);
        local_48 = local_68->GetCentrePos();
        local_30 = 0.0;
        uStack_3c = extraout_XMM0_Dd;
        local_24 = in_XMM1_Da;
        pfVar1 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)param_3, 2);
        local_28 = *pfVar1 * (float)local_48;
        pfVar1 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)param_3, 6);
        local_48._0_4_ = local_48._4_4_ * *pfVar1;
        uStack_40 = uStack_3c;
        pfVar1 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)param_3, 10);
        local_24 = local_24 * *pfVar1 + local_28 + (float)local_48;
        pfVar1 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)param_3, 14);
        local_2c = local_24 + *pfVar1;
        pfVar1 = std::max<float>(&local_30, &local_2c);
        return *pfVar1;
    }

    // 0x100868b40, 240 bytes, inline, placed by debug map only (low confidence)
    // BillboardBatch_DE* DrawableElementPool<BillboardBatch_DE>::Create<float&, eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator> > const*&, BillboardBatchInstance&>(float&, eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator> > const*&, BillboardBatchInstance&)
    BillboardBatch_DE* DrawableElementPool<BillboardBatch_DE>::Create<
        float&,
        eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                          eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*&,
        BillboardBatchInstance&>(float* param_1, vector_map** param_2, BillboardBatchInstance* param_3) {
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        BillboardBatch_DE* this;
        undefined8 uVar4;

        GetDrawableElementPool();
        iVar1 = (&GetDrawableElementPool()::pool)->GetValue();
        iVar2 = (&GetDrawableElementPool()::pool)->capacity();
        if (iVar1 < iVar2) {
            this = FastPool<BillboardBatch_DE, int>::Create<
                float&,
                eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                                  eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*&,
                BillboardBatchInstance&>((FastPool<BillboardBatch_DE, int>*)&GetDrawableElementPool()::pool, param_1,
                                         param_2, param_3);
        } else {
            uVar4 = logger::default_logger();
            uVar3 = (&GetDrawableElementPool()::pool)->GetValue();
            logger::Logger::Log(uVar4, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/renderer/DrawableElement.h",
                                142, "%s requires more entries in pool, size: %d", "Create", uVar3);
            this = operator_new(128);
            BillboardBatch_DE::BillboardBatch_DE(this, *param_1, *param_2, param_3);
        }
        return this;
    }

    // 0x100869b30, 32 bytes, deleting destructor, inline, placed by class name
    // BillboardMaterial::~BillboardMaterial()
    void BillboardMaterial::~BillboardMaterial() {
        ~BillboardMaterial(this);
        operator_delete(this);
    }

    // 0x10086afb0, 64 bytes, base-object destructor, inline, placed by class name
    // BillboardMaterial::~BillboardMaterial()
    void BillboardMaterial::~BillboardMaterial() {
        field_0 = (undefined**)(PTR_vtable_100ee87b8 + 16);
        ((field_528 + 8))->~shared_ptr();
        ~RenderMaterial();
    }

} // namespace jag::graphics

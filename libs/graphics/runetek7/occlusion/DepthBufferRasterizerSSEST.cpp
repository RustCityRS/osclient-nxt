// libs/graphics/runetek7/occlusion/DepthBufferRasterizerSSEST.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class DepthBufferRasterizerSSEST {
    public:
        // virtual methods in vtable order
        virtual ~DepthBufferRasterizerSSEST();
        virtual void RasterizeToDepthBuffer(RT7Core&, RenderPassType, SceneViewData const&, DrawableQueue&);
        virtual void RenderDebug();
        DepthBufferRasterizerSSEST(unsigned int, unsigned int);
        void RasterizeBinnedTrianglesToDepthBuffer(unsigned int, unsigned int, SceneViewData const&, DrawableQueue&);

        // data members, from how the methods use this: 72 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        char _unknown_16[8];
        void* field_24; // offset 24
        char _unknown_32[32];
        undefined1 field_64; // offset 64
        char _unknown_65[7];
    };

    // 0x1008229a0, 160 bytes, base-object constructor, placed by class name and debug map
    // DepthBufferRasterizerSSEST::DepthBufferRasterizerSSEST(unsigned int, unsigned int)
    void DepthBufferRasterizerSSEST::DepthBufferRasterizerSSEST(uint param_1, uint param_2) {
        int local_60;
        int local_5c;
        int local_54;

        new (this) DepthBufferRasterizerSSE(param_1, param_2);
        field_0 = &PTR__DepthBufferRasterizerSSEST_100f158a8;
        new (&field_64, "Texture2D") render::Texture2D();
        new (&local_60) render::Texture::Desc();
        local_60.SetToDefault();
        local_60 = field_8;
        local_5c = field_12;
        local_54 = 10;
        (&field_64, (Desc*)&local_60, (ResourceDataT*)0, 0)->Create();
    }

    // 0x100822a40, 16 bytes, complete-object constructor, placed by class name and debug map
    // DepthBufferRasterizerSSEST::DepthBufferRasterizerSSEST(unsigned int, unsigned int): jumps straight to the base-object constructor

    // 0x100822a50, 48 bytes, base-object destructor, placed by class name and debug map
    // DepthBufferRasterizerSSEST::~DepthBufferRasterizerSSEST()
    void DepthBufferRasterizerSSEST::~DepthBufferRasterizerSSEST() {
        field_0 = &PTR__DepthBufferRasterizerSSEST_100f158a8;
        (&field_64)->~Texture2D();
        ~DepthBufferRasterizerSSE();
    }

    // 0x100822a80, 16 bytes, complete-object destructor, placed by class name and debug map
    // DepthBufferRasterizerSSEST::~DepthBufferRasterizerSSEST(): jumps straight to the base-object destructor

    // 0x100822a90, 32 bytes, deleting destructor, placed by class name and debug map
    // DepthBufferRasterizerSSEST::~DepthBufferRasterizerSSEST()
    void DepthBufferRasterizerSSEST::~DepthBufferRasterizerSSEST() {
        ~DepthBufferRasterizerSSEST(this);
        operator_delete(this);
    }

    // 0x100822ab0, 256 bytes, placed by class name and debug map
    // DepthBufferRasterizerSSEST::RasterizeToDepthBuffer(RT7Core&, RenderPassType, SceneViewData const&, DrawableQueue&)
    void DepthBufferRasterizerSSEST::RasterizeToDepthBuffer() {
        if (OcclusionManager::m_OcclusionEnabled != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "occlusion/DepthBufferRasterizerSSEST.cpp",
                            69, (char*)0);
        }
    }

    // 0x100822be0, 32 bytes, placed by class name and debug map
    // DepthBufferRasterizerSSEST::RasterizeBinnedTrianglesToDepthBuffer(unsigned int, unsigned int, SceneViewData const&, DrawableQueue&)
    void DepthBufferRasterizerSSEST::RasterizeBinnedTrianglesToDepthBuffer(uint param_1, uint param_2,
                                                                           SceneViewData* param_3,
                                                                           DrawableQueue* param_4) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                        "occlusion/DepthBufferRasterizerSSEST.cpp",
                        192, (char*)0);
    }

    // 0x100822c00, 528 bytes, placed by class name and debug map
    // DepthBufferRasterizerSSEST::RenderDebug()
    void DepthBufferRasterizerSSEST::RenderDebug() {
        undefined1* this_00;
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        void* pvVar4;
        int iVar5;
        void* pvVar6;
        float* pfVar7;
        long lVar8;
        long* plVar9;
        ulong uVar10;
        float fVar11;
        ImVec4 local_78[16];
        undefined1 local_68[32];
        Point<float> local_48[8];
        Point<float> local_40[12];
        float local_34;
        ColourStorage8888<math::ARGB8StorageLayout> local_30[8];

        if (OcclusionManager::m_OcclusionEnabled != '\0') {
            pvVar4 = field_24;
            new ((local_68 + 8)) Array<float, BucketAllocatorEASTL>((ulong)(uint)(field_12 * field_8));
            pvVar6 = (void*)((local_68 + 8))->data();
            _memcpy(pvVar6, pvVar4, (ulong)(uint)(field_12 * field_8) << 2);
            if ((OcclusionManager::m_GammaCorrectDebugDepthBuffer != '\0') && (field_12 * field_8 != 0)) {
                uVar10 = 0;
                do {
                    pfVar7 = (float*)Array<float, BucketAllocatorEASTL>::operator[](
                        (Array<float, BucketAllocatorEASTL>*)(local_68 + 8), uVar10);
                    local_34 = *pfVar7;
                    pfVar7 = (float*)Array<float, BucketAllocatorEASTL>::operator[](
                        (Array<float, BucketAllocatorEASTL>*)(local_68 + 8), uVar10);
                    fVar11 = (float)::sqrt(local_34);
                    *pfVar7 = fVar11 * 4.0;
                    uVar10 = uVar10 + 1;
                } while (uVar10 < (uint)(field_12 * field_8));
            }
            this_00 = &field_64;
            uVar1 = field_8;
            uVar2 = field_12;
            lVar8 = this_00->second();
            uVar3 = *(undefined4*)(lVar8 + 12);
            uVar10 = ((local_68 + 8))->data();
            this_00->Update(0, 0, 0, uVar1, uVar2, uVar3, uVar10);
            plVar9 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar9 != (long*)0) {
                ImVec4::ImVec4(local_78, 0.0, 0.6, 0.4, 0.4);
                math::Point<float>::Point(local_48, 0.0, 0.0);
                math::Point<float>::Point(local_40, 1.0, 1.0);
                math::ColourStorage8888<math::ARGB8StorageLayout>::ColourStorage8888(local_30, 255, 255, 255, 255);
                iVar5 = local_30->GetX();
                new (local_68) oldscape::sidebars::SideBarData(iVar5, 0);
                (**(code**)(*plVar9 + 112))(plVar9, this_00, local_78, local_48, local_40, 1, 1,
                                            uVar10 & 18446744069414584320, (SideBarData*)local_68);
            }
            ((local_68 + 8))->~Array();
        }
    }

} // namespace jag::graphics

// 0x100822e20, 64 bytes, placed by debug map only (low confidence)
// sqrt(float)
undefined8 sqrt(float param_1) {
    uint in_XMM0_Db;
    undefined4 in_XMM0_Dc;
    undefined4 in_XMM0_Dd;
    undefined1 in_XMM1[16];
    undefined1 auVar1[16];
    float fVar2;

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = param_1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    fVar2 = param_1 * auVar1._0_4_;
    return CONCAT44(~(in_XMM0_Db & 2147483647) & in_XMM0_Db,
                    ~-(uint)(ABS(param_1) < 1.1754944e-38) & (uint)((fVar2 * auVar1._0_4_ + -3.0) * fVar2 * -0.5));
}

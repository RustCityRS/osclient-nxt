// libs/graphics/runetek7/occlusion/DepthBufferRasterizerScalarST.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class DepthBufferRasterizerScalarST {
    public:
        // virtual methods in vtable order
        virtual ~DepthBufferRasterizerScalarST();
        virtual void RasterizeToDepthBuffer(RT7Core&, RenderPassType, SceneViewData const&, DrawableQueue&);
        virtual void RenderDebug();
        DepthBufferRasterizerScalarST(unsigned int, unsigned int);
        void RasterizeBinnedTrianglesToDepthBuffer(unsigned int, unsigned int, SceneViewData const&, DrawableQueue&);

        // data members, from how the methods use this: 72 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        char _unknown_16[8];
        void* field_24;      // offset 24
        undefined8 field_32; // offset 32
        char _unknown_40[24];
        undefined1 field_64; // offset 64
        char _unknown_65[7];
    };

    // 0x100822fc0, 160 bytes, base-object constructor, placed by class name and debug map
    // DepthBufferRasterizerScalarST::DepthBufferRasterizerScalarST(unsigned int, unsigned int)
    void DepthBufferRasterizerScalarST::DepthBufferRasterizerScalarST(uint param_1, uint param_2) {
        int local_60;
        int local_5c;
        int local_54;

        new (this) DepthBufferRasterizerScalar(param_1, param_2);
        field_0 = &PTR__DepthBufferRasterizerScalarST_100f15908;
        new (&field_64, "Texture2D") render::Texture2D();
        new (&local_60) render::Texture::Desc();
        local_60.SetToDefault();
        local_60 = field_8;
        local_5c = field_12;
        local_54 = 10;
        (&field_64, (Desc*)&local_60, (ResourceDataT*)0, 0)->Create();
    }

    // 0x100823060, 16 bytes, complete-object constructor, placed by class name and debug map
    // DepthBufferRasterizerScalarST::DepthBufferRasterizerScalarST(unsigned int, unsigned int): jumps straight to the base-object constructor

    // 0x100823070, 48 bytes, base-object destructor, placed by class name and debug map
    // DepthBufferRasterizerScalarST::~DepthBufferRasterizerScalarST()
    void DepthBufferRasterizerScalarST::~DepthBufferRasterizerScalarST() {
        field_0 = &PTR__DepthBufferRasterizerScalarST_100f15908;
        (&field_64)->~Texture2D();
        ~DepthBufferRasterizerScalar();
    }

    // 0x1008230a0, 16 bytes, complete-object destructor, placed by class name and debug map
    // DepthBufferRasterizerScalarST::~DepthBufferRasterizerScalarST(): jumps straight to the base-object destructor

    // 0x1008230b0, 32 bytes, deleting destructor, placed by class name and debug map
    // DepthBufferRasterizerScalarST::~DepthBufferRasterizerScalarST()
    void DepthBufferRasterizerScalarST::~DepthBufferRasterizerScalarST() {
        ~DepthBufferRasterizerScalarST(this);
        operator_delete(this);
    }

    // 0x1008230d0, 208 bytes, placed by class name and debug map
    // DepthBufferRasterizerScalarST::RasterizeToDepthBuffer(RT7Core&, RenderPassType, SceneViewData const&, DrawableQueue&)
    void DepthBufferRasterizerScalarST::RasterizeToDepthBuffer() {
        if (OcclusionManager::m_OcclusionEnabled != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "occlusion/DepthBufferRasterizerScalarST.cpp",
                            69, (char*)0);
        }
    }

    // 0x1008231c0, 1888 bytes, placed by class name and debug map
    // DepthBufferRasterizerScalarST::RasterizeBinnedTrianglesToDepthBuffer(unsigned int, unsigned int, SceneViewData const&, DrawableQueue&)
    void DepthBufferRasterizerScalarST::RasterizeBinnedTrianglesToDepthBuffer(uint param_1, uint param_2,
                                                                              SceneViewData* param_3,
                                                                              DrawableQueue* param_4) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                        "occlusion/DepthBufferRasterizerScalarST.cpp",
                        180, (char*)0);
    }

    // 0x100823920, 640 bytes, placed by class name and debug map
    // DepthBufferRasterizerScalarST::RenderDebug()
    void DepthBufferRasterizerScalarST::RenderDebug() {
        undefined1* this_00;
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        void* pvVar4;
        int iVar5;
        float* pfVar6;
        void* pvVar7;
        long lVar8;
        long* plVar9;
        ulong uVar10;
        float fVar11;
        ImVec4 local_78[16];
        undefined1 local_68[16];
        Point<float> local_58[8];
        Array<float, BucketAllocatorEASTL> local_50[24];
        ColourStorage8888<math::ARGB8StorageLayout> local_38[4];
        float local_34;

        if (OcclusionManager::m_OcclusionEnabled != '\0') {
            pvVar4 = field_24;
            Array<float, BucketAllocatorEASTL>::Array(local_50, (ulong)(uint)(field_12 * field_8));
            if (OcclusionManager::m_GammaCorrectDebugDepthBuffer == '\0') {
                pvVar7 = (void*)local_50->data();
                _memcpy(pvVar7, pvVar4, (ulong)(uint)(field_12 * field_8) << 2);
            } else if (field_12 * field_8 != 0) {
                uVar10 = 0;
                do {
                    local_34 = *(float*)((long)pvVar4 + uVar10 * 4);
                    pfVar6 = (float*)Array<float, BucketAllocatorEASTL>::operator[](local_50, uVar10);
                    fVar11 = (float)::sqrt(local_34);
                    *pfVar6 = fVar11 * 4.0;
                    uVar10 = uVar10 + 1;
                } while (uVar10 < (uint)(field_12 * field_8));
            }
            if ((OcclusionManager::m_GammaCorrectDebugDepthBuffer != '\0') && (field_12 * field_8 != 0)) {
                uVar10 = 0;
                do {
                    pfVar6 = (float*)Array<float, BucketAllocatorEASTL>::operator[](local_50, uVar10);
                    local_34 = *pfVar6;
                    pfVar6 = (float*)Array<float, BucketAllocatorEASTL>::operator[](local_50, uVar10);
                    fVar11 = (float)::sqrt(local_34);
                    *pfVar6 = fVar11 * 4.0;
                    uVar10 = uVar10 + 1;
                } while (uVar10 < (uint)(field_12 * field_8));
            }
            this_00 = &field_64;
            uVar1 = field_8;
            uVar2 = field_12;
            lVar8 = this_00->second();
            uVar3 = *(undefined4*)(lVar8 + 12);
            uVar10 = local_50->data();
            this_00->Update(0, 0, 0, uVar1, uVar2, uVar3, uVar10);
            plVar9 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar9 != (long*)0) {
                ImVec4::ImVec4(local_78, 0.0, 0.6, 0.4, 0.4);
                new ((local_68 + 8)) math::Point<float>(0.0, 0.0);
                math::Point<float>::Point(local_58, 1.0, 1.0);
                math::ColourStorage8888<math::ARGB8StorageLayout>::ColourStorage8888(local_38, 255, 255, 255, 255);
                iVar5 = local_38->GetX();
                new (local_68) oldscape::sidebars::SideBarData(iVar5, 0);
                (**(code**)(*plVar9 + 112))(plVar9, this_00, local_78, local_68 + 8, local_58, 1, 1,
                                            uVar10 & 18446744069414584320, (SideBarData*)local_68);
            }
            local_50->~Array();
        }
    }

} // namespace jag::graphics

// libs/graphics/runetek7/occlusion/DepthBufferRasterizerScalarST.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class DepthBufferRasterizerScalarST {
    public:
        // virtual methods in vtable order
        virtual ~DepthBufferRasterizerScalarST();
        virtual void RasterizeToDepthBuffer(RT7Core& rt7Core, RenderPassType renderPassType,
                                            const SceneViewData& sceneViewData, DrawableQueue& drawableQueue);
        virtual void RenderDebug();
        DepthBufferRasterizerScalarST(unsigned int arg1, unsigned int arg2);
        void RasterizeBinnedTrianglesToDepthBuffer(unsigned int arg1, unsigned int arg2,
                                                   const SceneViewData& sceneViewData, DrawableQueue& drawableQueue);

    private:
        uint32_t field_8;
        uint32_t field_12;
        uint8_t _unknown_16[8];
        void* field_24;
        uint64_t field_32;
        uint8_t _unknown_40[24];
        uint8_t field_64;
        uint8_t _unknown_65[7];
    };

    // 0x100822fc0
    DepthBufferRasterizerScalarST::DepthBufferRasterizerScalarST(unsigned int arg1, unsigned int arg2)
        : DepthBufferRasterizerScalar(arg1, arg2), field_64("Texture2D") {
        int local_60;

        new (&local_60) render::Texture::Desc();
        local_60.SetToDefault();
        local_60 = field_8;
        int local_5c = field_12;
        int local_54 = 10;
        field_64.Create(local_60, nullptr, 0);
    }

    // 0x100823070
    DepthBufferRasterizerScalarST::~DepthBufferRasterizerScalarST() {}

    // 0x1008230d0
    void DepthBufferRasterizerScalarST::RasterizeToDepthBuffer(RT7Core& rt7Core, RenderPassType renderPassType,
                                                               const SceneViewData& sceneViewData,
                                                               DrawableQueue& drawableQueue) {
        if (OcclusionManager::m_OcclusionEnabled != '\0') {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "occlusion/DepthBufferRasterizerScalarST.cpp",
                            69, nullptr);
        }
    }

    // 0x1008231c0
    void DepthBufferRasterizerScalarST::RasterizeBinnedTrianglesToDepthBuffer(unsigned int arg1, unsigned int arg2,
                                                                              const SceneViewData& sceneViewData,
                                                                              DrawableQueue& drawableQueue) {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                        "occlusion/DepthBufferRasterizerScalarST.cpp",
                        180, nullptr);
    }

    // 0x100823920
    void DepthBufferRasterizerScalarST::RenderDebug() {
        uint8_t* this_00;
        unsigned int arg4;
        unsigned int arg5;
        Format format;
        int arg1;
        float* pfVar1;
        long lVar3;
        void* pvVar4;
        long* plVar5;
        unsigned long uVar6;
        float fVar7;
        ImVec4 local_78;
        uint8_t local_68[16];
        Point<float> local_58;
        Array<float, BucketAllocatorEASTL> local_50;
        ColourStorage8888<math::ARGB8StorageLayout> local_38;
        float local_34;

        if (OcclusionManager::m_OcclusionEnabled != '\0') {
            pvVar4 = field_24;
            local_50 = Array<float, BucketAllocatorEASTL>((unsigned long)(unsigned int)(field_12 * field_8));
            if (OcclusionManager::m_GammaCorrectDebugDepthBuffer == '\0') {
                _memcpy((void*)local_50.data(), pvVar4, (unsigned long)(unsigned int)(field_12 * field_8) << 2);
            } else if (field_12 * field_8 != 0) {
                uVar6 = 0;
                do {
                    local_34 = *(float*)((long)pvVar4 + uVar6 * 4);
                    pfVar1 = &local_50[uVar6];
                    fVar7 = (float)::sqrt(local_34);
                    *pfVar1 = fVar7 * 4.0;
                    uVar6 = uVar6 + 1;
                } while (uVar6 < (unsigned int)(field_12 * field_8));
            }
            if ((OcclusionManager::m_GammaCorrectDebugDepthBuffer != '\0') && (field_12 * field_8 != 0)) {
                uVar6 = 0;
                do {
                    pfVar1 = &local_50[uVar6];
                    local_34 = *pfVar1;
                    pfVar1 = &local_50[uVar6];
                    fVar7 = (float)::sqrt(local_34);
                    *pfVar1 = fVar7 * 4.0;
                    uVar6 = uVar6 + 1;
                } while (uVar6 < (unsigned int)(field_12 * field_8));
            }
            this_00 = &field_64;
            arg4 = field_8;
            arg5 = field_12;
            lVar3 = this_00->second();
            format = *(Format*)(lVar3 + 12);
            pvVar4 = (void*)local_50.data();
            this_00->Update(0, 0, 0, arg4, arg5, format, pvVar4);
            plVar5 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar5 != nullptr) {
                local_78 = ImVec4(0.0, 0.6, 0.4, 0.4);
                new ((local_68 + 8)) math::Point(0.0, 0.0);
                local_58 = math::Point(1.0, 1.0);
                local_38 = math::ColourStorage8888(255, 255, 255, 255);
                arg1 = local_38.GetX();
                new (local_68) oldscape::sidebars::SideBarData(arg1, 0);
                (**(void (**)(...))(*plVar5 + 112))(plVar5, this_00, &local_78, local_68 + 8, &local_58, 1, 1,
                                                    (unsigned long)pvVar4 & 18446744069414584320,
                                                    (SideBarData*)local_68);
            }
        }
    }

} // namespace jag::graphics

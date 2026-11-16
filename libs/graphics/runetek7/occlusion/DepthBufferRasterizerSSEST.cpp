// libs/graphics/runetek7/occlusion/DepthBufferRasterizerSSEST.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class DepthBufferRasterizerSSEST {
    public:
        // virtual methods in vtable order
        virtual ~DepthBufferRasterizerSSEST();
        virtual void RasterizeToDepthBuffer(RT7Core& rt7Core, RenderPassType renderPassType,
                                            const SceneViewData& sceneViewData, DrawableQueue& drawableQueue);
        virtual void RenderDebug();
        DepthBufferRasterizerSSEST(unsigned int arg1, unsigned int arg2);
        void RasterizeBinnedTrianglesToDepthBuffer(unsigned int arg1, unsigned int arg2,
                                                   const SceneViewData& sceneViewData, DrawableQueue& drawableQueue);

    private:
        uint32_t field_8;
        uint32_t field_12;
        uint8_t _unknown_16[8];
        void* field_24;
        uint8_t _unknown_32[32];
        uint8_t field_64;
        uint8_t _unknown_65[7];
    };

    // 0x1008229a0
    DepthBufferRasterizerSSEST::DepthBufferRasterizerSSEST(unsigned int arg1, unsigned int arg2)
        : DepthBufferRasterizerSSE(arg1, arg2), field_64("Texture2D") {
        int local_60;

        new (&local_60) render::Texture::Desc();
        local_60.SetToDefault();
        local_60 = field_8;
        int local_5c = field_12;
        int local_54 = 10;
        field_64.Create(local_60, nullptr, 0);
    }

    // 0x100822a50
    DepthBufferRasterizerSSEST::~DepthBufferRasterizerSSEST() {}

    // 0x100822ab0
    void DepthBufferRasterizerSSEST::RasterizeToDepthBuffer(RT7Core& rt7Core, RenderPassType renderPassType,
                                                            const SceneViewData& sceneViewData,
                                                            DrawableQueue& drawableQueue) {
        if (OcclusionManager::m_OcclusionEnabled != '\0') {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "occlusion/DepthBufferRasterizerSSEST.cpp",
                            69, nullptr);
        }
    }

    // 0x100822be0
    void DepthBufferRasterizerSSEST::RasterizeBinnedTrianglesToDepthBuffer(unsigned int arg1, unsigned int arg2,
                                                                           const SceneViewData& sceneViewData,
                                                                           DrawableQueue& drawableQueue) {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                        "occlusion/DepthBufferRasterizerSSEST.cpp",
                        192, nullptr);
    }

    // 0x100822c00
    void DepthBufferRasterizerSSEST::RenderDebug() {
        uint8_t* this_00;
        unsigned int arg4;
        unsigned int arg5;
        Format format;
        int arg1;
        float* pfVar2;
        long lVar3;
        void* pvVar4;
        long* plVar5;
        unsigned long arg1_00;
        float fVar6;
        ImVec4 local_78;
        uint8_t local_68[32];
        Point<float> local_48;
        Point<float> local_40;
        float local_34;
        ColourStorage8888<math::ARGB8StorageLayout> local_30;

        if (OcclusionManager::m_OcclusionEnabled != '\0') {
            pvVar4 = field_24;
            new ((local_68 + 8)) Array<float, BucketAllocatorEASTL>((unsigned long)(unsigned int)(field_12 * field_8));
            _memcpy((void*)((local_68 + 8))->data(), pvVar4, (unsigned long)(unsigned int)(field_12 * field_8) << 2);
            if ((OcclusionManager::m_GammaCorrectDebugDepthBuffer != '\0') && (field_12 * field_8 != 0)) {
                arg1_00 = 0;
                do {
                    pfVar2 = (float*)(*((local_68 + 8)))[arg1_00];
                    local_34 = *pfVar2;
                    pfVar2 = (float*)(*((local_68 + 8)))[arg1_00];
                    fVar6 = (float)::sqrt(local_34);
                    *pfVar2 = fVar6 * 4.0;
                    arg1_00 = arg1_00 + 1;
                } while (arg1_00 < (unsigned int)(field_12 * field_8));
            }
            this_00 = &field_64;
            arg4 = field_8;
            arg5 = field_12;
            lVar3 = this_00->second();
            format = *(Format*)(lVar3 + 12);
            pvVar4 = (void*)((local_68 + 8))->data();
            this_00->Update(0, 0, 0, arg4, arg5, format, pvVar4);
            plVar5 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar5 != nullptr) {
                local_78 = ImVec4(0.0, 0.6, 0.4, 0.4);
                local_48 = math::Point(0.0, 0.0);
                local_40 = math::Point(1.0, 1.0);
                local_30 = math::ColourStorage8888(255, 255, 255, 255);
                arg1 = local_30.GetX();
                new (local_68) oldscape::sidebars::SideBarData(arg1, 0);
                (**(void (**)(...))(*plVar5 + 112))(plVar5, this_00, &local_78, &local_48, &local_40, 1, 1,
                                                    (unsigned long)pvVar4 & 18446744069414584320,
                                                    (SideBarData*)local_68);
            }
            ((local_68 + 8))->~Array();
        }
    }

} // namespace jag::graphics

// 0x100822e20
void sqrt(float arg1) {
    unsigned int in_XMM0_Db;
    uint32_t in_XMM0_Dc;
    uint32_t in_XMM0_Dd;
    uint8_t in_XMM1[16];
    uint8_t auVar1[16];

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = arg1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    float fVar2 = arg1 * auVar1._0_4_;
    return (((uint64_t)(~(in_XMM0_Db & 2147483647) & in_XMM0_Db) << 32) |
            (uint32_t)(~-(unsigned int)(ABS(arg1) < 1.1754944e-38) &
                       (unsigned int)((fVar2 * auVar1._0_4_ - 3.0) * fVar2 * -0.5)));
}

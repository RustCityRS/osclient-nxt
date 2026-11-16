// libs/graphics/runetek7/particles/ParticleSystemRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ParticleSystemRenderer {
    public:
        class BatchData;
        class Metrics;
        // virtual methods in vtable order
        virtual ~ParticleSystemRenderer();
        virtual void RenderPendingBatch(render::RenderContext& renderContext,
                                        const render::DrawCallState& drawCallState, const SceneViewData& sceneViewData,
                                        RenderPassType renderPassType, EffectManager& effectManager);
        virtual void ClearPendingBatchData();
        virtual void OnEndFrame();
        ParticleSystemRenderer(render::RenderTargetsManager* renderTargetsManager, ThreadPool* threadPool);
        void Destroy();
        void Initialise(RT7Core& rt7Core);
        uint8_t CreateRenderingResources();
        void DestroyRenderingResources();
        void AddDrawableToBatch(const ParticleSystem_DE& particleSystem_DE, render::RenderContext& renderContext,
                                const render::DrawCallState& drawCallState, const SceneViewData& sceneViewData,
                                RenderPassType renderPassType, EffectManager& effectManager);
        unsigned long UpdateVertexBufferContents(const BatchData& batchData, RenderPassType renderPassType);
        void CompositeOverdraw(render::RenderContext& renderContext, const render::RenderTargets* renderTargets,
                               const render::Viewport& viewport);
        void UpdateVertexStreamData();
        Metrics GetMetrics() const;
        static int32_t m_maxParticlesPerBatch;         // = 10000
        static int32_t m_onlyShowModularEmitterIndex;  // = -1
        static bool m_testNullGPUBufferMappings;       // = 0
        static bool m_testParticleRenderLimitExceeded; // = 0
        static bool m_renderAlphaEarlyParticles;       // = 1
        static bool m_renderAlphaLateParticles;        // = 1

    private:
        uint8_t** field_8;
        uint8_t _unknown_16[8];
        RenderTargetsManager* field_24;
        ThreadPool* field_32;
        uint8_t _unknown_40[24];
        InputAssemblerState field_64;
        uint8_t _unknown_256[712];
        ParticleCommonMaterials field_968;
        ParticleData field_4360;
        uint8_t _unknown_4608[16];
        BatchData field_4624;
        RenderToTextureHelper* field_4680;
        shared_ptr field_4688;
        uint8_t _unknown_4704[16];
        Metrics m_metrics;
        uint8_t field_4725[3];
        uint64_t field_4728;
        uint64_t field_4736;
        uint64_t field_4744;
        uint64_t field_4752;
        uint64_t field_4760;
        uint64_t field_4768;
        uint64_t field_4776;
        uint64_t field_4784;
        uint64_t field_4792;
        uint64_t field_4800;
        uint64_t field_4808;
        uint64_t field_4816;
        uint64_t field_4824;
        uint64_t field_4832;
        uint64_t field_4840;
        uint64_t field_4848;
        uint64_t field_4856;
        uint64_t field_4864;
        uint64_t field_4872;
        uint32_t field_4880;
        uint8_t _unknown_4884[4];
    };

    class ParticleSystemRenderer::BatchData {
    public:
        class ParticleDataWrapper;
        BatchData();
        ~BatchData();
        bool IsValid() const;
        void Clear();
        unsigned long WriteToBuffers(std::array<unsigned char*, 6ul> const& arg1, ParticleData* particleData,
                                     Metrics::PassDrawInfo* passDrawInfo) const;
        unsigned long IsCompatible(const TextureAtlasReference* textureAtlasReference,
                                   const ParticleMaterial* particleMaterial, int arg3, unsigned int arg4,
                                   ParticleRenderMode particleRenderMode) const;

    private:
        ParticleDataWrapper* field_0;
        ParticleDataWrapper* field_8;
        uint8_t _unknown_16[8];
        TextureAtlasReference* field_24;
        ParticleMaterial* field_32;
        int field_40;
        int field_44;
        ParticleRenderMode field_48;
        uint8_t _unknown_52[4];
    };

    class ParticleSystemRenderer::BatchData::ParticleDataWrapper {
    public:
        ~ParticleDataWrapper();
        ParticleDataWrapper(const ParticleData* particleData);
        ParticleDataWrapper(ParticleDataWrapper&& particleDataWrapper);
        ParticleDataWrapper(const shared_ptr<ParticleSystem>& particleSystem,
                            const eastl::fixed_vector<Particle, 128ul>* particles, unsigned short arg3, bool arg4);

    private:
        uint8_t _unknown_0[16];
        ParticleData* field_16;
        fixed_vector<Particle, 128ul>* field_24;
        unsigned short field_32;
        bool field_34;
        uint8_t _unknown_35[5];
    };

    class ParticleSystemRenderer::Metrics {
    public:
        class PassDrawInfo;
        Metrics();

    private:
        uint16_t field_0;
        uint8_t _unknown_2[3];
    };

    class ParticleSystemRenderer::Metrics::PassDrawInfo {
    public:
        PassDrawInfo();
    };

    // 0x1007d6690
    auto ParticleSystemRenderer::UpdateVertexBufferContents(ParticleSystemRenderer::BatchData const&,
                                                            RenderPassType)::$_8::
    operator()<render::DynamicBuffer<render::VertexBuffer>>(render::DynamicBuffer<render::VertexBuffer>& dynamicBuffer,
                                                            render::ResourceDataT<unsigned char>& resourceData) const {
        auto extraout_EAX;
        ResourceDataT<unsigned char const> local_30;

        auto aVar1 = dynamicBuffer.operator_cast_to_bool();
        if ((char)aVar1 != '\0') {
            Unmap();
            local_30 = render::ResourceDataT(nullptr, 0, 0, false);
            dynamicBuffer = local_30;
            aVar1 = extraout_EAX;
        }
        return aVar1;
    }

    // 0x1007e6b20
    ParticleSystemRenderer::BatchData::BatchData()
        : eastl::vector<ParticleSystemRenderer::BatchData::ParticleDataWrapper, BucketAllocatorEASTL>(),
          field_24(nullptr), field_32(nullptr), field_40(-1), field_44(0), field_48(0) {}

    // 0x1007e6bc0
    ParticleSystemRenderer::Metrics::Metrics() : field_0(0) {}

    // 0x1007e6c20
    ParticleSystemRenderer::BatchData::~BatchData() {}

    // 0x1007e7130
    ParticleSystemRenderer::BatchData::ParticleDataWrapper::ParticleDataWrapper(const ParticleData* particleData)
        : shared_ptr(), field_16(particleData), field_24(nullptr), field_34(true) {}

    // 0x1007e7330
    ParticleSystemRenderer::BatchData::ParticleDataWrapper::ParticleDataWrapper(
        ParticleSystemRenderer::BatchData::ParticleDataWrapper&& particleDataWrapper) {
        shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(particleDataWrapper);
        *(uint32_t*)((long)&field_24 + 7) = *(uint32_t*)((long)&particleDataWrapper.field_24 + 7);
        fixed_vector<Particle, _128ul>* pfVar1 = particleDataWrapper.field_24;
        field_16 = particleDataWrapper.field_16;
        field_24 = pfVar1;
    }

    // 0x1007e7580
    ParticleSystemRenderer::BatchData::ParticleDataWrapper::ParticleDataWrapper(
        const shared_ptr<ParticleSystem>& particleSystem, const eastl::fixed_vector<Particle, 128ul>* particles,
        unsigned short arg3, bool arg4)
        : shared_ptr(particleSystem), field_16(nullptr), field_24(particles), field_32(arg3), field_34(arg4) {}

    // 0x1007fa540
    auto ParticleSystemRenderer::BatchData::WriteToBuffers(std::array<unsigned char*, 6ul> const&, ParticleData*,
                                                           ParticleSystemRenderer::Metrics::PassDrawInfo*)
        const ::$_13::operator()<Particle const>(const Particle& particle) const {
        float extraout_XMM0_Da;

        uint32_t uVar1 = GetOutlineRadiusAdjustment();
        return 0.0 < extraout_XMM0_Da;
    }

    // 0x1008a7a30
    Metrics ParticleSystemRenderer::GetMetrics() const {
        return m_metrics;
    }

} // namespace jag::graphics

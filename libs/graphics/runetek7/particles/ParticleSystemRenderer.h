// libs/graphics/runetek7/particles/ParticleSystemRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ParticleSystemRenderer {
    public:
        class BatchData;
        class Metrics;
        // virtual methods in vtable order
        virtual ~ParticleSystemRenderer();
        virtual void RenderPendingBatch(render::RenderContext&, render::DrawCallState const&, SceneViewData const&,
                                        RenderPassType, EffectManager&);
        virtual void ClearPendingBatchData();
        virtual void OnEndFrame();
        ParticleSystemRenderer(render::RenderTargetsManager*, ThreadPool*);
        void Destroy();
        void Initialise(RT7Core&);
        byte CreateRenderingResources();
        void DestroyRenderingResources();
        void AddDrawableToBatch(ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
                                SceneViewData const&, RenderPassType, EffectManager&);
        ulong UpdateVertexBufferContents(BatchData const&, RenderPassType);
        void CompositeOverdraw(render::RenderContext&, render::RenderTargets const*, render::Viewport const&);
        void UpdateVertexStreamData();
        Metrics GetMetrics() const;
        static /* 4 bytes */ m_maxParticlesPerBatch;            // = 10000
        static /* 4 bytes */ m_onlyShowModularEmitterIndex;     // = -1
        static /* 1 bytes */ m_testNullGPUBufferMappings;       // = 0
        static /* 1 bytes */ m_testParticleRenderLimitExceeded; // = 0
        static /* 1 bytes */ m_renderAlphaEarlyParticles;       // = 1
        static /* 1 bytes */ m_renderAlphaLateParticles;        // = 1

        // data members, from how the methods use this: 4888 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined** field_8; // offset 8
        char _unknown_16[8];
        RenderTargetsManager* field_24; // offset 24
        ThreadPool* field_32;           // offset 32
        char _unknown_40[24];
        InputAssemblerState field_64; // offset 64
        char _unknown_256[712];
        ParticleCommonMaterials field_968; // offset 968
        ParticleData field_4360;           // offset 4360
        char _unknown_4608[16];
        BatchData field_4624;              // offset 4624
        RenderToTextureHelper* field_4680; // offset 4680
        shared_ptr field_4688;             // offset 4688
        shared_ptr field_4704;             // offset 4704
        Metrics m_metrics;                 // offset 4720
        undefined6 field_4722;             // offset 4722
        undefined8 field_4728;             // offset 4728
        undefined8 field_4736;             // offset 4736
        undefined8 field_4744;             // offset 4744
        undefined8 field_4752;             // offset 4752
        undefined8 field_4760;             // offset 4760
        undefined8 field_4768;             // offset 4768
        undefined8 field_4776;             // offset 4776
        undefined8 field_4784;             // offset 4784
        undefined8 field_4792;             // offset 4792
        undefined8 field_4800;             // offset 4800
        undefined8 field_4808;             // offset 4808
        undefined8 field_4816;             // offset 4816
        undefined8 field_4824;             // offset 4824
        undefined8 field_4832;             // offset 4832
        undefined8 field_4840;             // offset 4840
        undefined8 field_4848;             // offset 4848
        undefined8 field_4856;             // offset 4856
        undefined8 field_4864;             // offset 4864
        undefined8 field_4872;             // offset 4872
        undefined4 field_4880;             // offset 4880
        char _unknown_4884[4];
    };

    class ParticleSystemRenderer::BatchData {
    public:
        class ParticleDataWrapper;
        BatchData();
        ~BatchData();
        bool IsValid() const;
        void Clear();
        ulong WriteToBuffers(std::array<unsigned char*, 6ul> const&, ParticleData*, Metrics::PassDrawInfo*) const;
        ulong IsCompatible(TextureAtlasReference const*, ParticleMaterial const*, int, unsigned int,
                           ParticleRenderMode) const;

        // data members, from how the methods use this: 56 bytes
        ParticleDataWrapper* field_0; // offset 0
        ParticleDataWrapper* field_8; // offset 8
        char _unknown_16[8];
        TextureAtlasReference* field_24; // offset 24
        undefined8 field_32;             // offset 32
        int field_40;                    // offset 40
        int field_44;                    // offset 44
        int field_48;                    // offset 48
        char _unknown_52[4];
    };

    class ParticleSystemRenderer::BatchData::ParticleDataWrapper {
    public:
        ~ParticleDataWrapper();
        ParticleDataWrapper(ParticleData const*);
        ParticleDataWrapper(ParticleDataWrapper&&);
        ParticleDataWrapper(shared_ptr<ParticleSystem> const&,
                            eastl::fixed_vector<Particle, 128ul, true, eastl::allocator> const*, unsigned short, bool);

        // data members, from how the methods use this: 40 bytes
        char _unknown_0[16];
        ParticleData* field_16; // offset 16
        fixed_vector* field_24; // offset 24
        ushort field_32;        // offset 32
        bool field_34;          // offset 34
        char _unknown_35[5];
    };

    class ParticleSystemRenderer::Metrics {
    public:
        class PassDrawInfo;
        Metrics();

        // data members, from how the methods use this: 2 bytes
        undefined2 field_0; // offset 0
    };

    class ParticleSystemRenderer::Metrics::PassDrawInfo {
    public:
        PassDrawInfo();
    };

    // 0x1007d4080, 16 bytes, complete-object constructor, inline, placed by class name
    // ParticleSystemRenderer::BatchData::BatchData(): jumps straight to the base-object constructor

    // 0x1007d4090, 16 bytes, complete-object constructor, inline, placed by class name
    // ParticleSystemRenderer::Metrics::Metrics(): jumps straight to the base-object constructor

    // 0x1007d40a0, 16 bytes, complete-object destructor, inline, placed by class name
    // ParticleSystemRenderer::BatchData::~BatchData(): jumps straight to the base-object destructor

    // 0x1007d6690, 96 bytes, inline, placed by class name
    // auto ParticleSystemRenderer::UpdateVertexBufferContents(ParticleSystemRenderer::BatchData const&, RenderPassType)::$_8::operator()<render::DynamicBuffer<render::VertexBuffer> >(render::DynamicBuffer<render::VertexBuffer>&, render::ResourceDataT<unsigned char>&) const
    /* auto 
   ParticleSystemRenderer::UpdateVertexBufferContents(ParticleSystemRenderer::BatchData
   const&,
   RenderPassType)::$_8::TEMPNAMEPLACEHOLDERVALUE(render::DynamicBuffer<render::VertexBuffer>&,
   render::ResourceDataT<unsigned char>&) const */

    void ParticleSystemRenderer::UpdateVertexBufferContents(ParticleSystemRenderer::BatchData_const&,
                                                            RenderPassType)::$_8::operator()(DynamicBuffer* param_1,
                                                                                             ResourceDataT* param_2) {
        ResourceDataT<unsigned char const> local_30[24];

        if (param_2->operator_cast_to_bool()) {
            render::DynamicBuffer<render::VertexBuffer>::Unmap();
            render::ResourceDataT<unsigned char const>::ResourceDataT(local_30, (uchar*)0, 0, 0, false);
            render::ResourceDataT<unsigned char>::operator=((ResourceDataT<unsigned char>*)param_2,
                                                            (ResourceDataT*)local_30);
            local_30->~ResourceDataT();
        }
    }

    // 0x1007e6b20, 48 bytes, base-object constructor, inline, placed by class name
    // ParticleSystemRenderer::BatchData::BatchData()
    void ParticleSystemRenderer::BatchData::BatchData() {
        eastl::vector<ParticleSystemRenderer::BatchData::ParticleDataWrapper, BucketAllocatorEASTL>::vector();
        field_24 = (TextureAtlasReference*)0;
        field_32 = 0;
        field_40 = -1;
        field_44 = 0;
        field_48 = 0;
    }

    // 0x1007e6bc0, 32 bytes, base-object constructor, inline, placed by class name
    // ParticleSystemRenderer::Metrics::Metrics()
    void ParticleSystemRenderer::Metrics::Metrics() {
        field_0 = 0;
        std::array<ParticleSystemRenderer::Metrics::PassDrawInfo, 10ul>::array();
    }

    // 0x1007e6c20, 16 bytes, base-object destructor, inline, placed by class name
    // ParticleSystemRenderer::BatchData::~BatchData()
    void ParticleSystemRenderer::BatchData::~BatchData() {
        ~vector();
    }

    // 0x1007e7000, 16 bytes, complete-object constructor, inline, placed by class name
    // ParticleSystemRenderer::BatchData::ParticleDataWrapper::ParticleDataWrapper(ParticleData const*): jumps straight to the base-object constructor

    // 0x1007e7130, 48 bytes, base-object constructor, inline, placed by class name
    // ParticleSystemRenderer::BatchData::ParticleDataWrapper::ParticleDataWrapper(ParticleData const*)
    void ParticleSystemRenderer::BatchData::ParticleDataWrapper::ParticleDataWrapper(ParticleData* param_1) {
        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        field_16 = param_1;
        field_24 = (fixed_vector*)0;
        field_34 = true;
    }

    // 0x1007e7320, 16 bytes, complete-object constructor, inline, placed by class name
    // ParticleSystemRenderer::BatchData::ParticleDataWrapper::ParticleDataWrapper(ParticleSystemRenderer::BatchData::ParticleDataWrapper&&): jumps straight to the base-object constructor

    // 0x1007e7330, 48 bytes, base-object constructor, inline, placed by class name
    // ParticleSystemRenderer::BatchData::ParticleDataWrapper::ParticleDataWrapper(ParticleSystemRenderer::BatchData::ParticleDataWrapper&&)
    void ParticleSystemRenderer::BatchData::ParticleDataWrapper::ParticleDataWrapper(ParticleDataWrapper* param_1) {
        fixed_vector* pfVar1;

        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
        *(undefined4*)((long)&field_24 + 7) = *(undefined4*)((long)&param_1->field_24 + 7);
        pfVar1 = param_1->field_24;
        field_16 = param_1->field_16;
        field_24 = pfVar1;
    }

    // 0x1007e7450, 16 bytes, complete-object constructor, inline, placed by class name
    // ParticleSystemRenderer::BatchData::ParticleDataWrapper::ParticleDataWrapper(shared_ptr<ParticleSystem> const&, eastl::fixed_vector<Particle, 128ul, true, eastl::allocator> const*, unsigned short, bool): jumps straight to the base-object constructor

    // 0x1007e7580, 64 bytes, base-object constructor, inline, placed by class name
    // ParticleSystemRenderer::BatchData::ParticleDataWrapper::ParticleDataWrapper(shared_ptr<ParticleSystem> const&, eastl::fixed_vector<Particle, 128ul, true, eastl::allocator> const*, unsigned short, bool)
    void ParticleSystemRenderer::BatchData::ParticleDataWrapper::ParticleDataWrapper(shared_ptr* param_1,
                                                                                     fixed_vector* param_2,
                                                                                     ushort param_3, bool param_4) {
        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
        field_16 = (ParticleData*)0;
        field_24 = param_2;
        field_32 = param_3;
        field_34 = param_4;
    }

    // 0x1007fa540, 32 bytes, inline, placed by class name
    // auto ParticleSystemRenderer::BatchData::WriteToBuffers(std::array<unsigned char*, 6ul> const&, ParticleData*, ParticleSystemRenderer::Metrics::PassDrawInfo*) const::$_13::operator()<Particle const>(Particle const&) const
    /* auto ParticleSystemRenderer::BatchData::WriteToBuffers(std::array<unsigned char*,
   6ul> const&, ParticleData*,
   ParticleSystemRenderer::Metrics::PassDrawInfo*)
   const::$_13::TEMPNAMEPLACEHOLDERVALUE(Particle const&) const */

    _func_WriteToBuffers_array_ptr_ParticleData_ptr_PassDrawInfo_ptr* const ::$_13::operator()(Particle * param_1) {
        undefined7 extraout_var;
        float fVar1;

        fVar1 = (float)GetOutlineRadiusAdjustment();
        return (_func_WriteToBuffers_array_ptr_ParticleData_ptr_PassDrawInfo_ptr*)CONCAT71(extraout_var, 0.0 < fVar1);
    }

    // 0x1008a7a30, 16 bytes, inline, placed by class name
    // ParticleSystemRenderer::GetMetrics() const
    undefined1* ParticleSystemRenderer::GetMetrics() {
        return m_metrics;
    }

} // namespace jag::graphics

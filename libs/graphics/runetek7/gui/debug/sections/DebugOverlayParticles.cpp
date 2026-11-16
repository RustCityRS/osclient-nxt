// libs/graphics/runetek7/gui/debug/sections/DebugOverlayParticles.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag {
    class DebugOverlayParticlesRender {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayParticlesRender();
        virtual void RegisterTweakyVars(tweak::Container& container);
        virtual void SetHeight(int arg1);
        virtual void DrawImpl(int arg1, int arg2);
        virtual uint8_t UpdateImpl(unsigned long long arg1);
        DebugOverlayParticlesRender(DebugOverlay& debugOverlay, bool arg2);
        void UpdateHistogramData();

    private:
        vector<oldscape::dash3d::EntityHighlight*>* field_8;
        uint8_t _unknown_16[96];
        int field_112;
        int field_116;
        bool field_120;
        uint8_t _unknown_121[98831];
    };

    class DebugOverlayParticlesSimulation {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayParticlesSimulation();
        virtual void RegisterTweakyVars(tweak::Container& container);
        virtual void SetHeight(int arg1);
        virtual void DrawImpl(int arg1, int arg2);
        virtual uint8_t UpdateImpl(unsigned long long arg1);
        DebugOverlayParticlesSimulation(DebugOverlay& debugOverlay, bool arg2);

    private:
        vector<oldscape::dash3d::EntityHighlight*>* field_8;
        uint8_t _unknown_16[96];
        int field_112;
        int field_116;
        bool field_120;
        uint8_t _unknown_121[98543];
    };

    // 0x1008a7300
    DebugOverlayParticlesSimulation::DebugOverlayParticlesSimulation(DebugOverlay& debugOverlay, bool arg2)
        : DebugOverlayGraphSection(debugOverlay, 27, arg2, 0, 1.0) {}

    // 0x1008a7370
    void DebugOverlayParticlesSimulation::RegisterTweakyVars(tweak::Container& container) {
        container.AddCheckBox("Display Particle Simulation Stats", field_120);
    }

    // 0x1008a7390
    void DebugOverlayParticlesSimulation::DrawImpl(int arg1, int arg2) {
        CoordMapSquare local_398;

        fixed_string<char, 256> local_160;
        auto this_00 = field_8->end();
        auto this_01 = this_00->GetParticleManager();
        auto puVar3 = this_01->GetLightSourcesDynamic();
        int arg1_00 = field_98656.GetMean();
        local_398.m_x = math::ColourStorage8888<math::RGBA8StorageLayout>::RedGreenGradient(arg1_00, 5000, 0);
        unsigned int uVar1 = local_398.GetX();
        unsigned int uVar2 = field_98656.GetMean();
        local_160.sprintf("<col=00FF00>Mean Live Particles: <col=%08X>%u<col=00FF00> (%u systems)",
                          (unsigned long)uVar1, (unsigned long)uVar2,
                          (unsigned long)((unsigned int)puVar3[1] + (unsigned int)*puVar3));
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        fixed_string<char, 512> local_388(str);
        DrawTextString((int)&local_388, arg1, arg2, -1, 255);
    }

    // 0x1008a7640
    uint8_t DebugOverlayParticlesSimulation::UpdateImpl(unsigned long long arg1) {
        auto this_00 = field_8->end();
        auto this_01 = this_00->GetParticleManager();
        *PTR_m_enableMetrics_100ee69b8 = 1;
        long lVar1 = this_01->GetLightSourcesDynamic();
        field_128.RecordValue(arg1, *(int*)(lVar1 + 8));
        field_128.SetMaximum(5000);
        field_98656.Push(*(unsigned int*)(lVar1 + 8));
        return 1;
    }

    // 0x1008a7730
    void DebugOverlayParticlesSimulation::SetHeight(int arg1) {
        float local_14;

        field_112 = arg1;
        field_56.SetValue(local_14, 0, 0);
        field_116 = field_112 * 2;
    }

    // 0x1008a7770
    DebugOverlayParticlesRender::DebugOverlayParticlesRender(DebugOverlay& debugOverlay, bool arg2)
        : DebugOverlayGraphSection(debugOverlay, 31, arg2, 0, 1.0) {}

    // 0x1008a77f0
    void DebugOverlayParticlesRender::RegisterTweakyVars(tweak::Container& container) {
        container.AddCheckBox("Display Particle Render Stats", field_120);
    }

    // 0x1008a7810
    void DebugOverlayParticlesRender::DrawImpl(int arg1, int arg2) {
        uint8_t local_38c[556];

        fixed_string<char, 256> local_160;
        auto this_00 = field_8->end();
        auto this_01 = this_00->GetParticleRenderer();
        auto puVar3 = this_01->GetMetrics();
        local_38c._0_4_ =
            math::ColourStorage8888<math::RGBA8StorageLayout>::RedGreenGradient((unsigned int)*puVar3, 50, 0);
        unsigned int uVar1 = field_98656.GetMean();
        unsigned int uVar2 = local_38c->GetX();
        local_160.sprintf("<col=00FF00>Mean Drawn Particles: %u | Batches: <col=%08X>%u<col=00FF00>",
                          (unsigned long)uVar1, (unsigned long)uVar2, (unsigned long)*puVar3);
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        new ((local_38c + 4)) eastl::fixed_string<char, 512>(str);
        DrawTextString((int)local_38c + 4, arg1, arg2, -1, 255);
        ((local_38c + 4))->~fixed_string();
    }

    // 0x1008a7a40
    uint8_t DebugOverlayParticlesRender::UpdateImpl(unsigned long long arg1) {
        auto this_00 = field_8->end();
        auto this_01 = this_00->GetParticleRenderer();
        auto puVar1 = this_01->GetMetrics();
        field_128.RecordValue(arg1, (unsigned int)*puVar1);
        field_128.SetMaximum(50);
        UpdateHistogramData();
        return 1;
    }

    // 0x1008a7aa0
    void DebugOverlayParticlesRender::UpdateHistogramData() {
        PassDrawInfo* passDrawInfo1;
        PassDrawInfo* passDrawInfo2;
        __0* in_RCX;
        unsigned int arg3;

        auto this_00 = field_8->end();
        long lVar3 = ((ParticleSystemRenderer*)this_00->GetParticleRenderer())->GetMetrics();
        array<graphics::ParticleSystemRenderer::Metrics::PassDrawInfo, 10ul>* this_02 =
            (array<graphics::ParticleSystemRenderer::Metrics::PassDrawInfo, 10ul>*)(lVar3 + 4);
        lVar3 = (*this_02)[4];
        unsigned int arg1 = *(unsigned int*)(lVar3 + 8);
        lVar3 = (*this_02)[0];
        int iVar1 = *(int*)(lVar3 + 8);
        lVar3 = (*this_02)[1];
        int iVar2 = *(int*)(lVar3 + 8);
        passDrawInfo1 = (PassDrawInfo*)this_02->begin();
        passDrawInfo2 = (PassDrawInfo*)this_02->end();
        field_98656.Push(std::accumulate<graphics::ParticleSystemRenderer::Metrics::PassDrawInfo const*, unsigned int,
                                         DebugOverlayParticlesRender::UpdateHistogramData()::__0>(
            passDrawInfo1, passDrawInfo2, arg3, in_RCX));
        field_98800.Push(arg1);
        field_98944.Push(iVar1 + iVar2);
    }

    // 0x1008a7b60
    void DebugOverlayParticlesRender::SetHeight(int arg1) {
        float local_14;

        field_112 = arg1;
        field_56.SetValue(local_14, 0, 0);
        field_116 = field_112 * 2;
    }

} // namespace jag

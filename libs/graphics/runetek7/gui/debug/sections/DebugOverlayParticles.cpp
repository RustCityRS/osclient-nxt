// libs/graphics/runetek7/gui/debug/sections/DebugOverlayParticles.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag {
    class DebugOverlayParticlesRender {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayParticlesRender();
        virtual void RegisterTweakyVars(tweak::Container&);
        virtual void SetHeight(int);
        virtual void DrawImpl(int, int);
        virtual UpdateImpl(unsigned long long);
        DebugOverlayParticlesRender(DebugOverlay&, bool);
        void UpdateHistogramData();

        // data members, from how the methods use this: 98952 bytes
        undefined** field_0;                                                       // offset 0, vtable pointer
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* field_8; // offset 8
        char _unknown_16[96];
        int m_height;   // offset 112
        int field_116;  // offset 116
        bool field_120; // offset 120
        char _unknown_121[98831];
    };

    class DebugOverlayParticlesSimulation {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayParticlesSimulation();
        virtual void RegisterTweakyVars(tweak::Container&);
        virtual void SetHeight(int);
        virtual void DrawImpl(int, int);
        virtual UpdateImpl(unsigned long long);
        DebugOverlayParticlesSimulation(DebugOverlay&, bool);

        // data members, from how the methods use this: 98664 bytes
        undefined** field_0;                                                       // offset 0, vtable pointer
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* field_8; // offset 8
        char _unknown_16[96];
        int m_height;   // offset 112
        int field_116;  // offset 116
        bool field_120; // offset 120
        char _unknown_121[98543];
    };

    // 0x1008a7300, 80 bytes, base-object constructor, placed by debug map only (low confidence)
    // DebugOverlayParticlesSimulation::DebugOverlayParticlesSimulation(DebugOverlay&, bool)
    void DebugOverlayParticlesSimulation::DebugOverlayParticlesSimulation(DebugOverlay* param_1, bool param_2) {
        undefined7 in_register_00000011;

        new (1065353216)
            DebugOverlayGraphSection(this, param_1, 27, CONCAT71(in_register_00000011, param_2) & 4294967295, 0);
        field_0 = &PTR__DebugOverlayMemory_100f180f8;
        new (&field_98656) math::Histogram<unsigned int, 30>();
    }

    // 0x1008a7360, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // DebugOverlayParticlesSimulation::DebugOverlayParticlesSimulation(DebugOverlay&, bool): jumps straight to the base-object constructor

    // 0x1008a7370, 32 bytes, placed by debug map only (low confidence)
    // DebugOverlayParticlesSimulation::RegisterTweakyVars(tweak::Container&)
    void DebugOverlayParticlesSimulation::RegisterTweakyVars(Container* param_1) {
        param_1->AddCheckBox("Display Particle Simulation Stats", &field_120);
    }

    // 0x1008a7390, 592 bytes, placed by debug map only (low confidence)
    // DebugOverlayParticlesSimulation::DrawImpl(int, int)
    void DebugOverlayParticlesSimulation::DrawImpl(int param_1, int param_2) {
        int iVar1;
        uint uVar2;
        uint uVar3;
        RT7Core* this_00;
        MapSquarePointLights* this_01;
        ushort* puVar4;
        char* pcVar5;
        CoordMapSquare local_398;
        fixed_string<char, 512, true, eastl::allocator> local_388[552];
        fixed_string<char, 256, true, eastl::allocator> local_160[296];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_160);
        this_00 = (RT7Core*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(field_8);
        this_01 = (MapSquarePointLights*)this_00->GetParticleManager();
        puVar4 = (ushort*)this_01->GetLightSourcesDynamic();
        iVar1 = (&field_98656)->GetMean();
        local_398.m_x = math::ColourStorage8888<math::RGBA8StorageLayout>::RedGreenGradient(iVar1, 5000, 0);
        uVar2 = local_398.GetX();
        uVar3 = (&field_98656)->GetMean();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)local_160, "<col=00FF00>Mean Live Particles: <col=%08X>%u<col=00FF00> (%u systems)", (ulong)uVar2,
            (ulong)uVar3, (ulong)((uint)puVar4[1] + (uint)*puVar4));
        pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(local_388, pcVar5);
        (*(code*)field_0[7])(this, local_388, param_1, param_2, 4294967295, 255, 2);
        /* WARNING: Subroutine does not return */
        local_388->~fixed_string();
    }

    // 0x1008a7640, 128 bytes, placed by debug map only (low confidence)
    // DebugOverlayParticlesSimulation::UpdateImpl(unsigned long long)
    undefined1 DebugOverlayParticlesSimulation::UpdateImpl(ulonglong param_1) {
        RT7Core* this_00;
        MapSquarePointLights* this_01;
        long lVar1;

        this_00 = (RT7Core*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(field_8);
        this_01 = (MapSquarePointLights*)this_00->GetParticleManager();
        *PTR_m_enableMetrics_100ee69b8 = 1;
        lVar1 = this_01->GetLightSourcesDynamic();
        (&field_128, param_1, *(int*)(lVar1 + 8))->RecordValue();
        (&field_128, 5000)->SetMaximum();
        (&field_98656, *(uint*)(lVar1 + 8))->Push();
        return 1;
    }

    // 0x1008a7730, 64 bytes, placed by debug map only (low confidence)
    // DebugOverlayParticlesSimulation::SetHeight(int)
    void DebugOverlayParticlesSimulation::SetHeight(int param_1) {
        float local_14;

        m_height = param_1;
        (&field_56, &local_14, 0, 0)->SetValue();
        field_116 = m_height * 2;
    }

    // 0x1008a7770, 112 bytes, base-object constructor, placed by debug map only (low confidence)
    // DebugOverlayParticlesRender::DebugOverlayParticlesRender(DebugOverlay&, bool)
    void DebugOverlayParticlesRender::DebugOverlayParticlesRender(DebugOverlay* param_1, bool param_2) {
        undefined7 in_register_00000011;

        new (1065353216)
            DebugOverlayGraphSection(this, param_1, 31, CONCAT71(in_register_00000011, param_2) & 4294967295, 0);
        field_0 = &PTR__DebugOverlayMemory_100f18160;
        new (&field_98656) math::Histogram<unsigned int, 30>();
        new (&field_98800) math::Histogram<unsigned int, 30>();
        new (&field_98944) math::Histogram<unsigned int, 30>();
    }

    // 0x1008a77e0, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // DebugOverlayParticlesRender::DebugOverlayParticlesRender(DebugOverlay&, bool): jumps straight to the base-object constructor

    // 0x1008a77f0, 32 bytes, placed by debug map only (low confidence)
    // DebugOverlayParticlesRender::RegisterTweakyVars(tweak::Container&)
    void DebugOverlayParticlesRender::RegisterTweakyVars(Container* param_1) {
        param_1->AddCheckBox("Display Particle Render Stats", &field_120);
    }

    // 0x1008a7810, 512 bytes, placed by debug map only (low confidence)
    // DebugOverlayParticlesRender::DrawImpl(int, int)
    void DebugOverlayParticlesRender::DrawImpl(int param_1, int param_2) {
        uint uVar1;
        uint uVar2;
        RT7Core* this_00;
        ParticleSystemRenderer* this_01;
        ushort* puVar3;
        char* pcVar4;
        undefined1 local_38c[556];
        fixed_string<char, 256, true, eastl::allocator> local_160[296];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_160);
        this_00 = (RT7Core*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(field_8);
        this_01 = (ParticleSystemRenderer*)this_00->GetParticleRenderer();
        puVar3 = (ushort*)this_01->GetMetrics();
        local_38c._0_4_ = math::ColourStorage8888<math::RGBA8StorageLayout>::RedGreenGradient((uint)*puVar3, 50, 0);
        uVar1 = (&field_98656)->GetMean();
        uVar2 = local_38c->GetX();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)local_160, "<col=00FF00>Mean Drawn Particles: %u | Batches: <col=%08X>%u<col=00FF00>", (ulong)uVar1,
            (ulong)uVar2, (ulong)*puVar3);
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        new ((local_38c + 4)) eastl::fixed_string<char, 512, true, eastl::allocator>(pcVar4);
        (*(code*)field_0[7])(this, local_38c + 4, param_1, param_2, 4294967295, 255, 2);
        /* WARNING: Subroutine does not return */
        ((local_38c + 4))->~fixed_string();
    }

    // 0x1008a7a40, 96 bytes, placed by debug map only (low confidence)
    // DebugOverlayParticlesRender::UpdateImpl(unsigned long long)
    undefined1 DebugOverlayParticlesRender::UpdateImpl(ulonglong param_1) {
        RT7Core* this_00;
        ParticleSystemRenderer* this_01;
        ushort* puVar1;

        this_00 = (RT7Core*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(field_8);
        this_01 = (ParticleSystemRenderer*)this_00->GetParticleRenderer();
        puVar1 = (ushort*)this_01->GetMetrics();
        (&field_128, param_1, (uint)*puVar1)->RecordValue();
        (&field_128, 50)->SetMaximum();
        UpdateHistogramData(this);
        return 1;
    }

    // 0x1008a7aa0, 192 bytes, placed by debug map only (low confidence)
    // DebugOverlayParticlesRender::UpdateHistogramData()
    void DebugOverlayParticlesRender::UpdateHistogramData() {
        uint uVar1;
        int iVar2;
        int iVar3;
        RT7Core* this_00;
        ParticleSystemRenderer* this_01;
        long lVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        uint uVar7;
        array<graphics::ParticleSystemRenderer::Metrics::PassDrawInfo, 10ul>* this_02;

        this_00 = (RT7Core*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(field_8);
        this_01 = (ParticleSystemRenderer*)this_00->GetParticleRenderer();
        lVar4 = this_01->GetMetrics();
        this_02 = (array<graphics::ParticleSystemRenderer::Metrics::PassDrawInfo, 10ul>*)(lVar4 + 4);
        lVar4 = std::array<graphics::ParticleSystemRenderer::Metrics::PassDrawInfo, 10ul>::operator[](this_02, 4);
        uVar1 = *(uint*)(lVar4 + 8);
        lVar4 = std::array<graphics::ParticleSystemRenderer::Metrics::PassDrawInfo, 10ul>::operator[](this_02, 0);
        iVar2 = *(int*)(lVar4 + 8);
        lVar4 = std::array<graphics::ParticleSystemRenderer::Metrics::PassDrawInfo, 10ul>::operator[](this_02, 1);
        iVar3 = *(int*)(lVar4 + 8);
        uVar5 = std::array<graphics::ParticleSystemRenderer::Metrics::PassDrawInfo, 10ul>::begin(this_02);
        uVar6 = std::array<graphics::ParticleSystemRenderer::Metrics::PassDrawInfo, 10ul>::end(this_02);
        uVar7 = std::accumulate<graphics::ParticleSystemRenderer::Metrics::PassDrawInfo_const*, unsigned int,
                                DebugOverlayParticlesRender::UpdateHistogramData()::__0>(uVar5, uVar6);
        (&field_98656, uVar7)->Push();
        (&field_98800, uVar1)->Push();
        (&field_98944, iVar2 + iVar3)->Push();
    }

    // 0x1008a7b60, 64 bytes, placed by debug map only (low confidence)
    // DebugOverlayParticlesRender::SetHeight(int)
    void DebugOverlayParticlesRender::SetHeight(int param_1) {
        float local_14;

        m_height = param_1;
        (&field_56, &local_14, 0, 0)->SetValue();
        field_116 = m_height * 2;
    }

} // namespace jag

// libs/graphics/runetek7/gui/debug/DebugOverlay.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "DebugOverlay.h"

namespace jag {
    // 0x100009d10: the linker folded this into eastl::string::Layout::HeapBeginPtr(), which has identical code
    DebugOverlay::GetInput() const;

    // 0x10000b2a0: the linker folded this into eastl::string::Layout::GetHeapSize() const, which has identical code
    DebugOverlay::GetRT7Core() const;

    // 0x100023f30: the linker folded this into oldscape::option::IOption::GetName() const, which has identical code
    DebugOverlay::GetFontHelpers() const;

    // 0x1001bc270: the linker folded this into oldscape::VBOMapper::SetMappingSupport(bool), which has identical code
    DebugOverlay::SetExpandGraphs(bool);

    // 0x100498790: the linker folded this into game::StaticPointLight::SetLightsLevelsBelow(bool), which has identical code
    DebugOverlay::SetShow(bool);

    // 0x1008f86f0, 176 bytes, base-object constructor, placed by class name and debug map
    // DebugOverlay::DebugOverlay(input::Input&, graphics::RT7Core&, graphics::FontHelpers&, bool)
    void DebugOverlay::DebugOverlay(Input* param_1, RT7Core* param_2, FontHelpers* param_3, bool param_4) {
        field_0 = param_1;
        field_8 = param_2;
        field_16 = param_3;
        field_25 = true;
        field_28 = 0;
        field_32 = 0;
        field_36 = 0;
        new (&field_40, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_56 = 0;
        new (&field_64, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_80) eastl::vector<shared_ptr<DebugOverlaySection>, eastl::allocator>();
        (&field_80, 20)->reserve();
        m_show = param_4;
    }

    // 0x1008f8800, 16 bytes, complete-object constructor, placed by class name and debug map
    // DebugOverlay::DebugOverlay(input::Input&, graphics::RT7Core&, graphics::FontHelpers&, bool): jumps straight to the base-object constructor

    // 0x1008f8810, 176 bytes, placed by class name and debug map
    // DebugOverlay::Init(shared_ptr<graphics::Font> const&)
    void DebugOverlay::Init(shared_ptr* param_1) {
        byte bVar1;
        byte bVar2;
        Layout* this_00;
        vector* this_01;
        FontMetrics* pFVar3;
        shared_ptr<DebugOverlaySection>* this_02;
        shared_ptr<DebugOverlaySection>* psVar4;
        long* plVar5;

        shared_ptr<graphics::Font>::operator=((shared_ptr<graphics::Font>*)&field_40, param_1);
        this_00 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)param_1);
        this_01 = eastl::string::Layout::SSOBeginPtr(this_00, (type*)param_1);
        pFVar3 =
            (FontMetrics*)shared_ptr<graphics::FontMetrics>::operator->((shared_ptr<graphics::FontMetrics>*)this_01);
        bVar1 = pFVar3->GetMaxAscent();
        pFVar3 =
            (FontMetrics*)shared_ptr<graphics::FontMetrics>::operator->((shared_ptr<graphics::FontMetrics>*)this_01);
        bVar2 = pFVar3->GetMaxDescent();
        field_36 = (uint)bVar2 + (uint)bVar1;
        this_02 = (shared_ptr<DebugOverlaySection>*)(&field_80)->HeapBeginPtr();
        psVar4 = (shared_ptr<DebugOverlaySection>*)(&field_80)->end();
        for (; this_02 != psVar4; this_02 = this_02 + 16) {
            plVar5 = (long*)shared_ptr<DebugOverlaySection>::operator->(this_02);
            (**(code**)(*plVar5 + 48))(plVar5, field_36);
        }
        field_56 = 1;
    }

    // 0x1008f8940, 64 bytes, placed by class name and debug map
    // DebugOverlay::AddSection(shared_ptr<DebugOverlaySection> const&)
    void DebugOverlay::AddSection(shared_ptr* param_1) {
        long* plVar1;

        plVar1 = (long*)shared_ptr<DebugOverlaySection>::operator->((shared_ptr<DebugOverlaySection>*)param_1);
        (**(code**)(*plVar1 + 48))(plVar1, field_36);
        (&field_80, param_1)->push_back();
    }

    // 0x1008f89d0, 48 bytes, placed by class name and debug map
    // DebugOverlay::AddDefaultSections()
    void DebugOverlay::AddDefaultSections() {
        AddTimingSections(this);
        AddMemorySections(this);
        AddRenderingSections(this);
    }

    // 0x1008f8a00, 496 bytes, placed by class name and debug map
    // DebugOverlay::AddTimingSections()
    void DebugOverlay::AddTimingSections() {
        shared_ptr local_40;
        shared_ptr local_30;
        bool local_19;

        make_shared<DebugOverlayMainFPS, DebugOverlay&>((jag*)&local_40, this);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_30, &local_40);
        AddSection(this, &local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
        make_shared<DebugOverlayRenderFPS, DebugOverlay&>((jag*)&local_40, this);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_30, &local_40);
        AddSection(this, &local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
        local_19 = false;
        make_shared<DebugOverlayLPS, DebugOverlay&, bool>((jag*)&local_40, this, &local_19);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_30, &local_40);
        AddSection(this, &local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
        make_shared<DebugOverlayParticlesSimulation, DebugOverlay&>((jag*)&local_40, this);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_30, &local_40);
        AddSection(this, &local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
        make_shared<DebugOverlayParticlesRender, DebugOverlay&>((jag*)&local_40, this);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_30, &local_40);
        AddSection(this, &local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
    }

    // 0x1008f8bf0, 496 bytes, placed by class name and debug map
    // DebugOverlay::AddMemorySections()
    void DebugOverlay::AddMemorySections() {
        shared_ptr local_40;
        shared_ptr local_30;
        bool local_19;

        make_shared<DebugOverlayMemory, DebugOverlay&>((jag*)&local_40, this);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_30, &local_40);
        AddSection(this, &local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
        local_19 = false;
        make_shared<DebugOverlayMemoryCache, DebugOverlay&, bool>((jag*)&local_40, this, &local_19);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_30, &local_40);
        AddSection(this, &local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
        make_shared<DebugOverlayDiskCache, DebugOverlay&>((jag*)&local_40, this);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_30, &local_40);
        AddSection(this, &local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
        make_shared<DebugOverlayAllocations, DebugOverlay&>((jag*)&local_40, this);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_30, &local_40);
        AddSection(this, &local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
        local_19 = false;
        make_shared<DebugOverlayPools, DebugOverlay&, bool>((jag*)&local_40, this, &local_19);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_30, &local_40);
        AddSection(this, &local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
    }

    // 0x1008f8de0, 512 bytes, placed by class name and debug map
    // DebugOverlay::AddRenderingSections()
    void DebugOverlay::AddRenderingSections() {
        shared_ptr local_40;
        shared_ptr local_30;
        bool local_19;

        make_shared<DebugOverlayGPU, DebugOverlay&>((jag*)&local_40, this);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_30, &local_40);
        AddSection(this, &local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
        local_19 = true;
        make_shared<DebugOverlayRender, DebugOverlay&, bool>((jag*)&local_40, this, &local_19);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_30, &local_40);
        AddSection(this, &local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
        local_19 = true;
        make_shared<DebugOverlayShaderProfiler, DebugOverlay&, bool>((jag*)&local_40, this, &local_19);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_30, &local_40);
        AddSection(this, &local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
        local_19 = true;
        make_shared<DebugOverlayTextureAtlas, DebugOverlay&, bool>((jag*)&local_40, this, &local_19);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_30, &local_40);
        AddSection(this, &local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
        local_19 = false;
        make_shared<DebugOverlayGPUStats, DebugOverlay&, bool>((jag*)&local_40, this, &local_19);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_30, &local_40);
        AddSection(this, &local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
    }

    // 0x1008f8fe0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<DebugOverlayMainFPS>::type make_shared<DebugOverlayMainFPS, DebugOverlay&>(DebugOverlay&)
    jag* make_shared<DebugOverlayMainFPS, DebugOverlay&>(DebugOverlay* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        DebugOverlayMainFPS* local_30[2];

        pvVar1 = (void*)aligned_alloc(98728, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<DebugOverlayMainFPS, DebugOverlay&>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<DebugOverlayMainFPS>, int, DebugOverlayMainFPS*&>(
                pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x1008f9080, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<DebugOverlayRenderFPS>::type make_shared<DebugOverlayRenderFPS, DebugOverlay&>(DebugOverlay&)
    jag* make_shared<DebugOverlayRenderFPS, DebugOverlay&>(DebugOverlay* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        DebugOverlayRenderFPS* local_30[2];

        pvVar1 = (void*)aligned_alloc(98728, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<DebugOverlayRenderFPS, DebugOverlay&>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<DebugOverlayRenderFPS>, int, DebugOverlayRenderFPS*&>(
                pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x1008f9120, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<DebugOverlayLPS>::type make_shared<DebugOverlayLPS, DebugOverlay&, bool>(DebugOverlay&, bool&&)
    jag* make_shared<DebugOverlayLPS, DebugOverlay&, bool>(DebugOverlay* param_1, bool* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        DebugOverlayLPS* local_38[2];

        pvVar1 = (void*)aligned_alloc(98712, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] =
                placement_new<DebugOverlayLPS, DebugOverlay&, bool>((void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 =
                placement_new<ref_counter_shared<DebugOverlayLPS>, int, DebugOverlayLPS*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x1008f91d0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<DebugOverlayParticlesSimulation>::type make_shared<DebugOverlayParticlesSimulation, DebugOverlay&>(DebugOverlay&)
    jag* make_shared<DebugOverlayParticlesSimulation, DebugOverlay&>(DebugOverlay* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        DebugOverlayParticlesSimulation* local_30[2];

        pvVar1 = (void*)aligned_alloc(98832, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] =
                placement_new<DebugOverlayParticlesSimulation, DebugOverlay&>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<DebugOverlayParticlesSimulation>, int,
                                   DebugOverlayParticlesSimulation*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x1008f9270, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<DebugOverlayParticlesRender>::type make_shared<DebugOverlayParticlesRender, DebugOverlay&>(DebugOverlay&)
    jag* make_shared<DebugOverlayParticlesRender, DebugOverlay&>(DebugOverlay* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        DebugOverlayParticlesRender* local_30[2];

        pvVar1 = (void*)aligned_alloc(99120, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] =
                placement_new<DebugOverlayParticlesRender, DebugOverlay&>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<DebugOverlayParticlesRender>, int, DebugOverlayParticlesRender*&>(
                pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x1008f9310, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<DebugOverlayGPU>::type make_shared<DebugOverlayGPU, DebugOverlay&>(DebugOverlay&)
    jag* make_shared<DebugOverlayGPU, DebugOverlay&>(DebugOverlay* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        DebugOverlayGPU* local_30[2];

        pvVar1 = (void*)aligned_alloc(98688, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<DebugOverlayGPU, DebugOverlay&>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 =
                placement_new<ref_counter_shared<DebugOverlayGPU>, int, DebugOverlayGPU*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x1008f93b0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<DebugOverlayRender>::type make_shared<DebugOverlayRender, DebugOverlay&, bool>(DebugOverlay&, bool&&)
    jag* make_shared<DebugOverlayRender, DebugOverlay&, bool>(DebugOverlay* param_1, bool* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        DebugOverlayRender* local_38[2];

        pvVar1 = (void*)aligned_alloc(98688, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] =
                placement_new<DebugOverlayRender, DebugOverlay&, bool>((void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<DebugOverlayRender>, int, DebugOverlayRender*&>(pvVar1, &local_3c,
                                                                                                      local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x1008f9460, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<DebugOverlayShaderProfiler>::type make_shared<DebugOverlayShaderProfiler, DebugOverlay&, bool>(DebugOverlay&, bool&&)
    jag* make_shared<DebugOverlayShaderProfiler, DebugOverlay&, bool>(DebugOverlay* param_1, bool* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        DebugOverlayShaderProfiler* local_38[2];

        pvVar1 = (void*)aligned_alloc(160, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<DebugOverlayShaderProfiler, DebugOverlay&, bool>((void*)((long)pvVar1 + 32),
                                                                                         param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<DebugOverlayShaderProfiler>, int, DebugOverlayShaderProfiler*&>(
                pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x1008f9510, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<DebugOverlayTextureAtlas>::type make_shared<DebugOverlayTextureAtlas, DebugOverlay&, bool>(DebugOverlay&, bool&&)
    jag* make_shared<DebugOverlayTextureAtlas, DebugOverlay&, bool>(DebugOverlay* param_1, bool* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        DebugOverlayTextureAtlas* local_38[2];

        pvVar1 = (void*)aligned_alloc(160, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<DebugOverlayTextureAtlas, DebugOverlay&, bool>((void*)((long)pvVar1 + 32),
                                                                                       param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<DebugOverlayTextureAtlas>, int, DebugOverlayTextureAtlas*&>(
                pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x1008f95c0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<DebugOverlayGPUStats>::type make_shared<DebugOverlayGPUStats, DebugOverlay&, bool>(DebugOverlay&, bool&&)
    jag* make_shared<DebugOverlayGPUStats, DebugOverlay&, bool>(DebugOverlay* param_1, bool* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        DebugOverlayGPUStats* local_38[2];

        pvVar1 = (void*)aligned_alloc(160, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] =
                placement_new<DebugOverlayGPUStats, DebugOverlay&, bool>((void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<DebugOverlayGPUStats>, int, DebugOverlayGPUStats*&>(
                pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x1008f9670, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<DebugOverlayMemory>::type make_shared<DebugOverlayMemory, DebugOverlay&>(DebugOverlay&)
    jag* make_shared<DebugOverlayMemory, DebugOverlay&>(DebugOverlay* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        DebugOverlayMemory* local_30[2];

        pvVar1 = (void*)aligned_alloc(98704, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<DebugOverlayMemory, DebugOverlay&>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<DebugOverlayMemory>, int, DebugOverlayMemory*&>(pvVar1, &local_34,
                                                                                                      local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x1008f9710, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<DebugOverlayMemoryCache>::type make_shared<DebugOverlayMemoryCache, DebugOverlay&, bool>(DebugOverlay&, bool&&)
    jag* make_shared<DebugOverlayMemoryCache, DebugOverlay&, bool>(DebugOverlay* param_1, bool* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        DebugOverlayMemoryCache* local_38[2];

        pvVar1 = (void*)aligned_alloc(98704, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<DebugOverlayMemoryCache, DebugOverlay&, bool>((void*)((long)pvVar1 + 32),
                                                                                      param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<DebugOverlayMemoryCache>, int, DebugOverlayMemoryCache*&>(
                pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x1008f97c0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<DebugOverlayDiskCache>::type make_shared<DebugOverlayDiskCache, DebugOverlay&>(DebugOverlay&)
    jag* make_shared<DebugOverlayDiskCache, DebugOverlay&>(DebugOverlay* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        DebugOverlayDiskCache* local_30[2];

        pvVar1 = (void*)aligned_alloc(98712, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<DebugOverlayDiskCache, DebugOverlay&>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<DebugOverlayDiskCache>, int, DebugOverlayDiskCache*&>(
                pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x1008f9860, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<DebugOverlayAllocations>::type make_shared<DebugOverlayAllocations, DebugOverlay&>(DebugOverlay&)
    jag* make_shared<DebugOverlayAllocations, DebugOverlay&>(DebugOverlay* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        DebugOverlayAllocations* local_30[2];

        pvVar1 = (void*)aligned_alloc(98768, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<DebugOverlayAllocations, DebugOverlay&>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<DebugOverlayAllocations>, int, DebugOverlayAllocations*&>(
                pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x1008f9900, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<DebugOverlayPools>::type make_shared<DebugOverlayPools, DebugOverlay&, bool>(DebugOverlay&, bool&&)
    jag* make_shared<DebugOverlayPools, DebugOverlay&, bool>(DebugOverlay* param_1, bool* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        DebugOverlayPools* local_38[2];

        pvVar1 = (void*)aligned_alloc(360, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] =
                placement_new<DebugOverlayPools, DebugOverlay&, bool>((void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<DebugOverlayPools>, int, DebugOverlayPools*&>(pvVar1, &local_3c,
                                                                                                    local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x1008f99b0, 80 bytes, placed by class name and debug map
    // DebugOverlay::HideAllSections()
    void DebugOverlay::HideAllSections() {
        shared_ptr<DebugOverlaySection>* this_00;
        shared_ptr<DebugOverlaySection>* psVar1;
        DebugOverlaySection* this_01;

        this_00 = (shared_ptr<DebugOverlaySection>*)(&field_80)->HeapBeginPtr();
        psVar1 = (shared_ptr<DebugOverlaySection>*)(&field_80)->end();
        for (; this_00 != psVar1; this_00 = this_00 + 16) {
            this_01 = (DebugOverlaySection*)shared_ptr<DebugOverlaySection>::operator->(this_00);
            this_01->Hide();
        }
    }

    // 0x1008f9a10, 144 bytes, placed by class name
    // DebugOverlay::ShowSection(DebugOverlaySection::SectionType)
    undefined8 DebugOverlay::ShowSection(int param_2) {
        shared_ptr<DebugOverlaySection>* this_00;
        shared_ptr<DebugOverlaySection>* psVar2;
        MapArea* this_01;
        DebugOverlaySection* this_02;
        undefined8 uVar3;

        this_00 = (shared_ptr<DebugOverlaySection>*)(&field_80)->HeapBeginPtr();
        psVar2 = (shared_ptr<DebugOverlaySection>*)(&field_80)->end();
        if (this_00 == psVar2) {
            uVar3 = 0;
        } else {
            uVar3 = 0;
            do {
                this_01 = (MapArea*)shared_ptr<DebugOverlaySection>::operator->(this_00);
                if (this_01->GetAdvisedZoom() == param_2) {
                    this_02 = (DebugOverlaySection*)shared_ptr<DebugOverlaySection>::operator->(this_00);
                    this_02->Show();
                    uVar3 = 1;
                }
                this_00 = this_00 + 16;
            } while (this_00 != psVar2);
        }
        return uVar3;
    }

    // 0x1008f9ab0, 144 bytes, placed by class name
    // DebugOverlay::HideSection(DebugOverlaySection::SectionType)
    undefined8 DebugOverlay::HideSection(int param_2) {
        shared_ptr<DebugOverlaySection>* this_00;
        shared_ptr<DebugOverlaySection>* psVar2;
        MapArea* this_01;
        DebugOverlaySection* this_02;
        undefined8 uVar3;

        this_00 = (shared_ptr<DebugOverlaySection>*)(&field_80)->HeapBeginPtr();
        psVar2 = (shared_ptr<DebugOverlaySection>*)(&field_80)->end();
        if (this_00 == psVar2) {
            uVar3 = 0;
        } else {
            uVar3 = 0;
            do {
                this_01 = (MapArea*)shared_ptr<DebugOverlaySection>::operator->(this_00);
                if (this_01->GetAdvisedZoom() == param_2) {
                    this_02 = (DebugOverlaySection*)shared_ptr<DebugOverlaySection>::operator->(this_00);
                    this_02->Hide();
                    uVar3 = 1;
                }
                this_00 = this_00 + 16;
            } while (this_00 != psVar2);
        }
        return uVar3;
    }

    // 0x1008f9b40, 112 bytes, placed by class name
    // DebugOverlay::MainLogic()
    void DebugOverlay::MainLogic() {
        undefined8 uVar1;
        shared_ptr<DebugOverlaySection>* this_00;
        shared_ptr<DebugOverlaySection>* psVar2;
        long* plVar3;

        uVar1 = FrameTime::GetCurrentTimeMS();
        this_00 = (shared_ptr<DebugOverlaySection>*)(&field_80)->HeapBeginPtr();
        psVar2 = (shared_ptr<DebugOverlaySection>*)(&field_80)->end();
        for (; this_00 != psVar2; this_00 = this_00 + 16) {
            plVar3 = (long*)shared_ptr<DebugOverlaySection>::operator->(this_00);
            (**(code**)(*plVar3 + 32))(plVar3, uVar1);
        }
    }

    // 0x1008f9bb0, 320 bytes, placed by class name
    // DebugOverlay::RegisterTweakVars(tweak::ContainerGroup&)
    void DebugOverlay::RegisterTweakVars(ContainerGroup* param_1) {
        undefined1* this_00;
        Container* pCVar1;
        shared_ptr<DebugOverlaySection>* this_01;
        shared_ptr<DebugOverlaySection>* psVar2;
        long* plVar3;
        undefined8 uVar4;
        eastl::string local_60[32];
        allocator local_40[8];
        shared_ptr local_38;

        eastl::allocator::allocator(local_40, "EASTL basic_string");
        eastl::string::basic_string(local_60, "Debug Overlay", local_40);
        (*(code*)param_1->field_0[30])(&local_38, param_1, local_60);
        this_00 = &field_64;
        shared_ptr<tweak::Container>::operator=((shared_ptr<tweak::Container>*)this_00, &local_38);
        local_38.~shared_ptr();
        eastl::string::~basic_string(local_60);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)this_00);
        pCVar1->AddCheckBox("Show Debug Overlay", &m_show);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)this_00);
        pCVar1->AddCheckBox("Expand Sections on Mouse-Over", &field_25);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator*((shared_ptr<tweak::Container>*)this_00);
        DebugOverlayGraphSection::RegisterGraphTweaks(pCVar1);
        this_01 = (shared_ptr<DebugOverlaySection>*)(&field_80)->HeapBeginPtr();
        psVar2 = (shared_ptr<DebugOverlaySection>*)(&field_80)->end();
        for (; this_01 != psVar2; this_01 = this_01 + 16) {
            plVar3 = (long*)shared_ptr<DebugOverlaySection>::operator->(this_01);
            uVar4 = shared_ptr<tweak::Container>::operator*((shared_ptr<tweak::Container>*)this_00);
            (**(code**)(*plVar3 + 40))(plVar3, uVar4);
        }
    }

    // 0x1008f9e50, 480 bytes, placed by class name
    // DebugOverlay::DrawDebugOverlaySections()
    void DebugOverlay::DrawDebugOverlaySections() {
        undefined1* this_00;
        char cVar1;
        ScaleManager* this_01;
        vector* pvVar2;
        int* piVar3;
        ulonglong uVar4;
        shared_ptr<DebugOverlaySection>* this_02;
        shared_ptr<DebugOverlaySection>* psVar5;
        long* plVar6;
        DebugOverlaySection* pDVar7;
        type* ptVar8;
        int iVar9;
        float fVar10;
        float fVar11;
        SideBarData local_40;
        undefined4 local_34;

        this_00 = &field_80;
        cVar1 = this_00->empty();
        if (cVar1 == '\0') {
            fVar10 = (float)field_0->GetMouseX();
            fVar11 = (float)field_0->GetMouseY();
            ptVar8 = (type*)(ulong)(uint)(int)fVar10;
            new (&local_40) oldscape::sidebars::SideBarData((int)fVar10, (int)fVar11);
            this_01 = (ScaleManager*)field_8->GetScaleManager();
            pvVar2 = local_40.SSOBeginPtr(ptVar8);
            piVar3 = (int*)local_40.y();
            this_01->ScreenToInterfacePosition(pvVar2, piVar3, false);
            local_34 = field_28;
            iVar9 = field_32;
            uVar4 = FrameTime::GetCurrentTimeMS();
            this_02 = (shared_ptr<DebugOverlaySection>*)this_00->HeapBeginPtr();
            psVar5 = (shared_ptr<DebugOverlaySection>*)this_00->end();
            for (; this_02 != psVar5; this_02 = this_02 + 16) {
                plVar6 = (long*)shared_ptr<DebugOverlaySection>::operator->(this_02);
                cVar1 = (**(code**)(*plVar6 + 24))(plVar6, uVar4);
                if (cVar1 != '\0') {
                    pDVar7 = (DebugOverlaySection*)shared_ptr<DebugOverlaySection>::operator->(this_02);
                    cVar1 = pDVar7->GetShow();
                    if (cVar1 != '\0') {
                        pDVar7 = (DebugOverlaySection*)shared_ptr<DebugOverlaySection>::operator->(this_02);
                        pDVar7->ResetWidth();
                        plVar6 = (long*)shared_ptr<DebugOverlaySection>::operator->(this_02);
                        (**(code**)(*plVar6 + 16))(plVar6, uVar4, local_34, iVar9);
                        pDVar7 = (DebugOverlaySection*)shared_ptr<DebugOverlaySection>::operator->(this_02);
                        piVar3 = (int*)pDVar7->GetHeight();
                        iVar9 = iVar9 + *piVar3;
                        if (field_25 == false) {
                        LAB_1008f9fea:
                            pDVar7 = (DebugOverlaySection*)shared_ptr<DebugOverlaySection>::operator->(this_02);
                            cVar1 = pDVar7->IsContracted();
                            if (cVar1 == '\0') {
                                pDVar7 = (DebugOverlaySection*)shared_ptr<DebugOverlaySection>::operator->(this_02);
                                pDVar7->Contract(uVar4);
                            }
                        } else {
                            pDVar7 = (DebugOverlaySection*)shared_ptr<DebugOverlaySection>::operator->(this_02);
                            cVar1 = pDVar7->IsMouseInside((Point*)&local_40);
                            if (cVar1 == '\0') {
                                pDVar7 = (DebugOverlaySection*)shared_ptr<DebugOverlaySection>::operator->(this_02);
                                cVar1 = pDVar7->IsExpandedForced();
                                if (cVar1 == '\0')
                                    goto LAB_1008f9fea;
                            }
                            pDVar7 = (DebugOverlaySection*)shared_ptr<DebugOverlaySection>::operator->(this_02);
                            cVar1 = pDVar7->IsExpanded();
                            if (cVar1 == '\0') {
                                pDVar7 = (DebugOverlaySection*)shared_ptr<DebugOverlaySection>::operator->(this_02);
                                pDVar7->Expand(uVar4);
                            }
                        }
                    }
                }
            }
        }
    }

    // 0x1008fa1a0, 80 bytes, placed by class name
    // DebugOverlay::MainDraw(shared_ptr<graphics::Font> const&)
    void DebugOverlay::MainDraw(shared_ptr* param_1) {
        GUIManager* this_00;

        if (m_show != false) {
            if (!operator==(param_1, (_func_decltype_nullptr*)0)) {
                if (field_56 == '\0') {
                    Init(this, param_1);
                }
                this_00 = (GUIManager*)field_8->GetGUIManager();
                this_00->ResetProjectionOverride();
                DrawDebugOverlaySections(this);
            }
        }
    }

    // 0x1008fa1f0, 16 bytes, placed by class name
    // DebugOverlay::DrawDebugRealTimeLogging()
    void DebugOverlay::DrawDebugRealTimeLogging() {}

    // 0x1008fa200, 192 bytes, placed by class name
    // DebugOverlay::DrawString(char const*, int, int, unsigned int, unsigned int, graphics::FontAlign, bool)
    void DebugOverlay::DrawString(char* param_1, undefined4 param_2, int param_3, undefined4 param_4, uint param_5,
                                  undefined1 param_7, undefined1 param_8) {
        FontHelpers* this_00;
        StringView SVar1;
        TextFlags in_stack_ffffffffffffff68;
        undefined7 in_stack_ffffffffffffff69;
        TextProperties local_90;
        StringView local_68;
        optional<unsigned int> local_58[8];
        char* local_50;
        uint local_44;
        TextFlags local_38[8];

        local_50 = param_1;
        local_44 = param_5;
        graphics::TextFlags::TextFlags(local_38, 1, param_8);
        new (&local_90) graphics::TextProperties((shared_ptr*)&field_40, in_stack_ffffffffffffff68);
        local_90.SetAlignment(param_7);
        eastl::optional<unsigned int>::optional(local_58, &local_44);
        local_90.SetColours(param_4, local_58);
        this_00 = field_16;
        StringView::StringView<char const*>(&local_68, &local_50);
        SVar1.field_8._0_4_ = param_2;
        SVar1.field_0 = (ulong)&local_68;
        SVar1.field_8._4_4_ = 0;
        this_00->DrawString(SVar1, param_3, 0, (uint)&local_90,
                            (TextProperties*)CONCAT71(in_stack_ffffffffffffff69, in_stack_ffffffffffffff68));
    }

} // namespace jag

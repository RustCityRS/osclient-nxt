// libs/graphics/runetek7/gui/debug/DebugOverlay.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "DebugOverlay.h"

namespace jag {
    // 0x100009d10: DebugOverlay::GetInput() const has the same machine code as eastl::string::Layout::HeapBeginPtr()

    // 0x10000b2a0: DebugOverlay::GetRT7Core() const has the same machine code as eastl::string::Layout::GetHeapSize() const

    // 0x100023f30: DebugOverlay::GetFontHelpers() const has the same machine code as oldscape::option::IOption::GetName() const

    // 0x1001bc270: DebugOverlay::SetExpandGraphs(bool) has the same machine code as oldscape::VBOMapper::SetMappingSupport(bool)

    // 0x100498790: DebugOverlay::SetShow(bool) has the same machine code as game::StaticPointLight::SetLightsLevelsBelow(bool)

    // 0x1008f86f0
    DebugOverlay::DebugOverlay(input::Input& input, graphics::RT7Core& rt7Core, graphics::FontHelpers& fontHelpers,
                               bool arg4)
        : field_0(input), field_8(rt7Core), m_fontHelpers(fontHelpers), m_expandGraphs(true), field_28(0), field_32(0),
          field_36(0), field_56(0) {
        new (&field_64) shared_ptr();
        new (&field_80) eastl::vector<shared_ptr<DebugOverlaySection>>();
        field_80.reserve(20);
        m_show = arg4;
    }

    // 0x1008f8810
    void DebugOverlay::Init(const shared_ptr<graphics::Font>& font) {
        long* plVar5;

        field_40 = font;
        auto this_00 = font.operator->();
        auto this_01 = this_00->SSOBeginPtr();
        FontMetrics* pFVar3 = (FontMetrics*)(*this_01).operator->();
        uint8_t bVar1 = pFVar3->GetMaxAscent();
        pFVar3 = (FontMetrics*)(*this_01).operator->();
        uint8_t bVar2 = pFVar3->GetMaxDescent();
        field_36 = (unsigned int)bVar2 + (unsigned int)bVar1;
        auto this_02 = field_80.HeapBeginPtr();
        auto psVar4 = field_80.end();
        for (; this_02 != psVar4; this_02 = this_02 + 16) {
            plVar5 = (long*)(*this_02).operator->();
            (**(void (**)(...))(*plVar5 + 48))(plVar5, field_36);
        }
        field_56 = 1;
    }

    // 0x1008f8940
    void DebugOverlay::AddSection(const shared_ptr<DebugOverlaySection>& debugOverlaySection) {
        auto plVar1 = debugOverlaySection.operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1, field_36);
        field_80.push_back(debugOverlaySection);
    }

    // 0x1008f89d0
    void DebugOverlay::AddDefaultSections() {
        AddTimingSections();
        AddMemorySections();
        AddRenderingSections();
    }

    // 0x1008f8a00
    void DebugOverlay::AddTimingSections() {
        ReturnValue local_40;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_30;

        make_shared<DebugOverlayMainFPS, DebugOverlay&>(&local_40, this);
        local_30.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_40);
        AddSection(local_30);
        make_shared<DebugOverlayRenderFPS, DebugOverlay&>(&local_40, this);
        local_30.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_40);
        AddSection(local_30);
        bool local_19 = false;
        make_shared<DebugOverlayLPS, DebugOverlay&, bool>(&local_40, this, &local_19);
        local_30.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_40);
        AddSection(local_30);
        make_shared<DebugOverlayParticlesSimulation, DebugOverlay&>(&local_40, this);
        local_30.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_40);
        AddSection(local_30);
        make_shared<DebugOverlayParticlesRender, DebugOverlay&>(&local_40, this);
        local_30.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_40);
        AddSection(local_30);
    }

    // 0x1008f8bf0
    void DebugOverlay::AddMemorySections() {
        ReturnValue local_40;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_30;

        make_shared<DebugOverlayMemory, DebugOverlay&>(&local_40, this);
        local_30.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_40);
        AddSection(local_30);
        bool local_19 = false;
        make_shared<DebugOverlayMemoryCache, DebugOverlay&, bool>(&local_40, this, &local_19);
        local_30.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_40);
        AddSection(local_30);
        make_shared<DebugOverlayDiskCache, DebugOverlay&>(&local_40, this);
        local_30.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_40);
        AddSection(local_30);
        make_shared<DebugOverlayAllocations, DebugOverlay&>(&local_40, this);
        local_30.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_40);
        AddSection(local_30);
        local_19 = false;
        make_shared<DebugOverlayPools, DebugOverlay&, bool>(&local_40, this, &local_19);
        local_30.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_40);
        AddSection(local_30);
    }

    // 0x1008f8de0
    void DebugOverlay::AddRenderingSections() {
        ReturnValue local_40;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_30;

        make_shared<DebugOverlayGPU, DebugOverlay&>(&local_40, this);
        local_30.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_40);
        AddSection(local_30);
        bool local_19 = true;
        make_shared<DebugOverlayRender, DebugOverlay&, bool>(&local_40, this, &local_19);
        local_30.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_40);
        AddSection(local_30);
        local_19 = true;
        make_shared<DebugOverlayShaderProfiler, DebugOverlay&, bool>(&local_40, this, &local_19);
        local_30.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_40);
        AddSection(local_30);
        local_19 = true;
        make_shared<DebugOverlayTextureAtlas, DebugOverlay&, bool>(&local_40, this, &local_19);
        local_30.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_40);
        AddSection(local_30);
        local_19 = false;
        make_shared<DebugOverlayGPUStats, DebugOverlay&, bool>(&local_40, this, &local_19);
        local_30.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_40);
        AddSection(local_30);
    }

    // 0x1008f8fe0
    shared_ptr_if_not_array<DebugOverlayMainFPS>::type
    make_shared<DebugOverlayMainFPS, DebugOverlay&>(DebugOverlay& debugOverlay) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        DebugOverlayMainFPS* local_30[2];

        auto arg1 = aligned_alloc(98728, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<DebugOverlayMainFPS>::type result;
        } else {
            local_30[0] = placement_new<DebugOverlayMainFPS, DebugOverlay&>((void*)((long)arg1 + 32), debugOverlay);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<DebugOverlayMainFPS>, int, DebugOverlayMainFPS*&>(arg1, &local_34,
                                                                                                   local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x1008f9080
    shared_ptr_if_not_array<DebugOverlayRenderFPS>::type
    make_shared<DebugOverlayRenderFPS, DebugOverlay&>(DebugOverlay& debugOverlay) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        DebugOverlayRenderFPS* local_30[2];

        auto arg1 = aligned_alloc(98728, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<DebugOverlayRenderFPS>::type result;
        } else {
            local_30[0] = placement_new<DebugOverlayRenderFPS, DebugOverlay&>((void*)((long)arg1 + 32), debugOverlay);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<DebugOverlayRenderFPS>, int, DebugOverlayRenderFPS*&>(arg1, &local_34,
                                                                                                       local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x1008f9120
    shared_ptr_if_not_array<DebugOverlayLPS>::type
    make_shared<DebugOverlayLPS, DebugOverlay&, bool>(DebugOverlay& debugOverlay, bool&& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        DebugOverlayLPS* local_38[2];

        auto arg1 = aligned_alloc(98712, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<DebugOverlayLPS>::type result;
        } else {
            local_38[0] =
                placement_new<DebugOverlayLPS, DebugOverlay&, bool>((void*)((long)arg1 + 32), debugOverlay, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<DebugOverlayLPS>, int, DebugOverlayLPS*&>(arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x1008f91d0
    shared_ptr_if_not_array<DebugOverlayParticlesSimulation>::type
    make_shared<DebugOverlayParticlesSimulation, DebugOverlay&>(DebugOverlay& debugOverlay) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        DebugOverlayParticlesSimulation* local_30[2];

        auto arg1 = aligned_alloc(98832, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<DebugOverlayParticlesSimulation>::type result;
        } else {
            local_30[0] =
                placement_new<DebugOverlayParticlesSimulation, DebugOverlay&>((void*)((long)arg1 + 32), debugOverlay);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<DebugOverlayParticlesSimulation>, int,
                              DebugOverlayParticlesSimulation*&>(arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x1008f9270
    shared_ptr_if_not_array<DebugOverlayParticlesRender>::type
    make_shared<DebugOverlayParticlesRender, DebugOverlay&>(DebugOverlay& debugOverlay) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        DebugOverlayParticlesRender* local_30[2];

        auto arg1 = aligned_alloc(99120, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<DebugOverlayParticlesRender>::type result;
        } else {
            local_30[0] =
                placement_new<DebugOverlayParticlesRender, DebugOverlay&>((void*)((long)arg1 + 32), debugOverlay);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<DebugOverlayParticlesRender>, int, DebugOverlayParticlesRender*&>(
                    arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x1008f9310
    shared_ptr_if_not_array<DebugOverlayGPU>::type
    make_shared<DebugOverlayGPU, DebugOverlay&>(DebugOverlay& debugOverlay) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        DebugOverlayGPU* local_30[2];

        auto arg1 = aligned_alloc(98688, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<DebugOverlayGPU>::type result;
        } else {
            local_30[0] = placement_new<DebugOverlayGPU, DebugOverlay&>((void*)((long)arg1 + 32), debugOverlay);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<DebugOverlayGPU>, int, DebugOverlayGPU*&>(arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x1008f93b0
    shared_ptr_if_not_array<DebugOverlayRender>::type
    make_shared<DebugOverlayRender, DebugOverlay&, bool>(DebugOverlay& debugOverlay, bool&& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        DebugOverlayRender* local_38[2];

        auto arg1 = aligned_alloc(98688, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<DebugOverlayRender>::type result;
        } else {
            local_38[0] =
                placement_new<DebugOverlayRender, DebugOverlay&, bool>((void*)((long)arg1 + 32), debugOverlay, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<DebugOverlayRender>, int, DebugOverlayRender*&>(arg1, &local_3c,
                                                                                                 local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x1008f9460
    shared_ptr_if_not_array<DebugOverlayShaderProfiler>::type
    make_shared<DebugOverlayShaderProfiler, DebugOverlay&, bool>(DebugOverlay& debugOverlay, bool&& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        DebugOverlayShaderProfiler* local_38[2];

        auto arg1 = aligned_alloc(160, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<DebugOverlayShaderProfiler>::type result;
        } else {
            local_38[0] = placement_new<DebugOverlayShaderProfiler, DebugOverlay&, bool>((void*)((long)arg1 + 32),
                                                                                         debugOverlay, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<DebugOverlayShaderProfiler>, int, DebugOverlayShaderProfiler*&>(
                    arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x1008f9510
    shared_ptr_if_not_array<DebugOverlayTextureAtlas>::type
    make_shared<DebugOverlayTextureAtlas, DebugOverlay&, bool>(DebugOverlay& debugOverlay, bool&& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        DebugOverlayTextureAtlas* local_38[2];

        auto arg1 = aligned_alloc(160, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<DebugOverlayTextureAtlas>::type result;
        } else {
            local_38[0] = placement_new<DebugOverlayTextureAtlas, DebugOverlay&, bool>((void*)((long)arg1 + 32),
                                                                                       debugOverlay, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<DebugOverlayTextureAtlas>, int, DebugOverlayTextureAtlas*&>(
                    arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x1008f95c0
    shared_ptr_if_not_array<DebugOverlayGPUStats>::type
    make_shared<DebugOverlayGPUStats, DebugOverlay&, bool>(DebugOverlay& debugOverlay, bool&& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        DebugOverlayGPUStats* local_38[2];

        auto arg1 = aligned_alloc(160, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<DebugOverlayGPUStats>::type result;
        } else {
            local_38[0] =
                placement_new<DebugOverlayGPUStats, DebugOverlay&, bool>((void*)((long)arg1 + 32), debugOverlay, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<DebugOverlayGPUStats>, int, DebugOverlayGPUStats*&>(arg1, &local_3c,
                                                                                                     local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x1008f9670
    shared_ptr_if_not_array<DebugOverlayMemory>::type
    make_shared<DebugOverlayMemory, DebugOverlay&>(DebugOverlay& debugOverlay) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        DebugOverlayMemory* local_30[2];

        auto arg1 = aligned_alloc(98704, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<DebugOverlayMemory>::type result;
        } else {
            local_30[0] = placement_new<DebugOverlayMemory, DebugOverlay&>((void*)((long)arg1 + 32), debugOverlay);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<DebugOverlayMemory>, int, DebugOverlayMemory*&>(arg1, &local_34,
                                                                                                 local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x1008f9710
    shared_ptr_if_not_array<DebugOverlayMemoryCache>::type
    make_shared<DebugOverlayMemoryCache, DebugOverlay&, bool>(DebugOverlay& debugOverlay, bool&& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        DebugOverlayMemoryCache* local_38[2];

        auto arg1 = aligned_alloc(98704, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<DebugOverlayMemoryCache>::type result;
        } else {
            local_38[0] = placement_new<DebugOverlayMemoryCache, DebugOverlay&, bool>((void*)((long)arg1 + 32),
                                                                                      debugOverlay, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<DebugOverlayMemoryCache>, int, DebugOverlayMemoryCache*&>(
                    arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x1008f97c0
    shared_ptr_if_not_array<DebugOverlayDiskCache>::type
    make_shared<DebugOverlayDiskCache, DebugOverlay&>(DebugOverlay& debugOverlay) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        DebugOverlayDiskCache* local_30[2];

        auto arg1 = aligned_alloc(98712, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<DebugOverlayDiskCache>::type result;
        } else {
            local_30[0] = placement_new<DebugOverlayDiskCache, DebugOverlay&>((void*)((long)arg1 + 32), debugOverlay);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<DebugOverlayDiskCache>, int, DebugOverlayDiskCache*&>(arg1, &local_34,
                                                                                                       local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x1008f9860
    shared_ptr_if_not_array<DebugOverlayAllocations>::type
    make_shared<DebugOverlayAllocations, DebugOverlay&>(DebugOverlay& debugOverlay) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        DebugOverlayAllocations* local_30[2];

        auto arg1 = aligned_alloc(98768, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<DebugOverlayAllocations>::type result;
        } else {
            local_30[0] = placement_new<DebugOverlayAllocations, DebugOverlay&>((void*)((long)arg1 + 32), debugOverlay);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<DebugOverlayAllocations>, int, DebugOverlayAllocations*&>(
                    arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x1008f9900
    shared_ptr_if_not_array<DebugOverlayPools>::type
    make_shared<DebugOverlayPools, DebugOverlay&, bool>(DebugOverlay& debugOverlay, bool&& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        DebugOverlayPools* local_38[2];

        auto arg1 = aligned_alloc(360, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<DebugOverlayPools>::type result;
        } else {
            local_38[0] =
                placement_new<DebugOverlayPools, DebugOverlay&, bool>((void*)((long)arg1 + 32), debugOverlay, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<DebugOverlayPools>, int, DebugOverlayPools*&>(arg1, &local_3c,
                                                                                               local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x1008f99b0
    void DebugOverlay::HideAllSections() {
        auto this_00 = field_80.HeapBeginPtr();
        auto psVar1 = field_80.end();
        for (; this_00 != psVar1; this_00 = this_00 + 16) {
            ((DebugOverlaySection*)(*this_00).operator->())->Hide();
        }
    }

    // 0x1008f9a10
    uint64_t DebugOverlay::ShowSection(DebugOverlaySection::SectionType sectionType) {
        uint64_t uVar3;

        auto this_00 = field_80.HeapBeginPtr();
        auto psVar2 = field_80.end();
        if (this_00 == psVar2) {
            uVar3 = 0;
        } else {
            uVar3 = 0;
            do {
                if (((MapArea*)(*this_00).operator->())->GetAdvisedZoom() == sectionType) {
                    ((DebugOverlaySection*)(*this_00).operator->())->Show();
                    uVar3 = 1;
                }
                this_00 = this_00 + 16;
            } while (this_00 != psVar2);
        }
        return uVar3;
    }

    // 0x1008f9ab0
    uint64_t DebugOverlay::HideSection(DebugOverlaySection::SectionType sectionType) {
        uint64_t uVar3;

        auto this_00 = field_80.HeapBeginPtr();
        auto psVar2 = field_80.end();
        if (this_00 == psVar2) {
            uVar3 = 0;
        } else {
            uVar3 = 0;
            do {
                if (((MapArea*)(*this_00).operator->())->GetAdvisedZoom() == sectionType) {
                    ((DebugOverlaySection*)(*this_00).operator->())->Hide();
                    uVar3 = 1;
                }
                this_00 = this_00 + 16;
            } while (this_00 != psVar2);
        }
        return uVar3;
    }

    // 0x1008f9b40
    void DebugOverlay::MainLogic() {
        long* plVar3;

        uint64_t uVar1 = FrameTime::GetCurrentTimeMS();
        auto this_00 = field_80.HeapBeginPtr();
        auto psVar2 = field_80.end();
        for (; this_00 != psVar2; this_00 = this_00 + 16) {
            plVar3 = (long*)(*this_00).operator->();
            (**(void (**)(...))(*plVar3 + 32))(plVar3, uVar1);
        }
    }

    // 0x1008f9bb0
    void DebugOverlay::RegisterTweakVars(tweak::ContainerGroup& containerGroup) {
        long* plVar3;
        uint64_t uVar4;
        shared_ptr<tweak::Container> local_38;

        eastl::string local_60("Debug Overlay");
        (containerGroup._vptr[7].Clear)(&local_38, containerGroup, &local_60);
        uint8_t* this_00 = &field_64;
        *this_00 = local_38;
        Container* pCVar1 = (Container*)(*this_00).operator->();
        pCVar1->AddCheckBox("Show Debug Overlay", m_show);
        pCVar1 = (Container*)(*this_00).operator->();
        pCVar1->AddCheckBox("Expand Sections on Mouse-Over", m_expandGraphs);
        pCVar1 = (Container*)**this_00;
        DebugOverlayGraphSection::RegisterGraphTweaks(*pCVar1);
        auto this_01 = field_80.HeapBeginPtr();
        auto psVar2 = field_80.end();
        for (; this_01 != psVar2; this_01 = this_01 + 16) {
            plVar3 = (long*)(*this_01).operator->();
            uVar4 = **this_00;
            (**(void (**)(...))(*plVar3 + 40))(plVar3, uVar4);
        }
    }

    // 0x1008f9e50
    void DebugOverlay::DrawDebugOverlaySections() {
        ScaleManager* this_01;
        int* piVar2;
        int* arg2;
        unsigned long long arg1;
        shared_ptr<DebugOverlaySection>* this_02;
        shared_ptr<DebugOverlaySection>* psVar3;
        long* plVar4;
        DebugOverlaySection* pDVar5;
        int iVar6;
        float fVar7;
        float fVar8;
        SideBarData local_40;
        uint32_t local_34;

        uint8_t* this_00 = &field_80;
        bool cVar1 = this_00->empty();
        if (!cVar1) {
            fVar7 = (float)field_0->GetMouseX();
            fVar8 = (float)field_0->GetMouseY();
            local_40 = oldscape::sidebars::SideBarData((int)fVar7, (int)fVar8);
            this_01 = field_8->GetScaleManager();
            piVar2 = (int*)local_40.SSOBeginPtr();
            arg2 = (int*)local_40.y();
            this_01->ScreenToInterfacePosition(*piVar2, *arg2, false);
            local_34 = field_28;
            iVar6 = field_32;
            arg1 = FrameTime::GetCurrentTimeMS();
            this_02 = (shared_ptr<DebugOverlaySection>*)this_00->HeapBeginPtr();
            psVar3 = (shared_ptr<DebugOverlaySection>*)this_00->end();
            for (; this_02 != psVar3; this_02 = this_02 + 16) {
                plVar4 = (long*)(*this_02).operator->();
                cVar1 = (**(void (**)(...))(*plVar4 + 24))(plVar4, arg1);
                if (cVar1) {
                    pDVar5 = (DebugOverlaySection*)(*this_02).operator->();
                    cVar1 = pDVar5->GetShow();
                    if (cVar1) {
                        pDVar5 = (DebugOverlaySection*)(*this_02).operator->();
                        pDVar5->ResetWidth();
                        plVar4 = (long*)(*this_02).operator->();
                        (**(void (**)(...))(*plVar4 + 16))(plVar4, arg1, local_34, iVar6);
                        pDVar5 = (DebugOverlaySection*)(*this_02).operator->();
                        piVar2 = (int*)pDVar5->GetHeight();
                        iVar6 = iVar6 + *piVar2;
                        if (m_expandGraphs == false) {
                        LAB_1008f9fea:
                            pDVar5 = (DebugOverlaySection*)(*this_02).operator->();
                            cVar1 = pDVar5->IsContracted();
                            if (!cVar1) {
                                pDVar5 = (DebugOverlaySection*)(*this_02).operator->();
                                pDVar5->Contract(arg1);
                            }
                        } else {
                            pDVar5 = (DebugOverlaySection*)(*this_02).operator->();
                            cVar1 = pDVar5->IsMouseInside(local_40);
                            if (!cVar1) {
                                pDVar5 = (DebugOverlaySection*)(*this_02).operator->();
                                cVar1 = pDVar5->IsExpandedForced();
                                if (!cVar1)
                                    goto LAB_1008f9fea;
                            }
                            pDVar5 = (DebugOverlaySection*)(*this_02).operator->();
                            cVar1 = pDVar5->IsExpanded();
                            if (!cVar1) {
                                pDVar5 = (DebugOverlaySection*)(*this_02).operator->();
                                pDVar5->Expand(arg1);
                            }
                        }
                    }
                }
            }
        }
    }

    // 0x1008fa1a0
    void DebugOverlay::MainDraw(const shared_ptr<graphics::Font>& font) {
        if (m_show != false) {
            if (!font == nullptr) {
                if (field_56 == '\0') {
                    Init(font);
                }
                field_8->GetGUIManager()->ResetProjectionOverride();
                DrawDebugOverlaySections();
            }
        }
    }

    // 0x1008fa1f0
    void DebugOverlay::DrawDebugRealTimeLogging() {}

    // 0x1008fa200
    void DebugOverlay::DrawString(const char* str, int arg2, int arg3, unsigned int arg4, unsigned int arg5,
                                  graphics::FontAlign fontAlign, bool arg7) {
        StringView local_68;

        TextFlags local_38(1, arg7);
        TextProperties local_90(field_40, local_38[0]);
        local_90.SetAlignment(fontAlign & 255);
        optional<unsigned int> local_58(arg5);
        local_90.SetColours(arg4, &local_58);
        FontHelpers* this_00 = m_fontHelpers;
        local_68.StringView<char const*>(str);
        this_00->DrawString(&local_68, arg2, arg3, 0, local_90);
    }

} // namespace jag

// libs/graphics/runetek7/gui/animations/GUIAnimationManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "GUIAnimationManager.h"

namespace jag::graphics {
    // 0x100f44350
    int32_t GUIAnimationManager::m_nextTemporaryAnimationID = 16777216;

    // 0x10011c9a0: GUIAnimationManager::TemporaryAnimationData::~TemporaryAnimationData() has the same machine code as oldscape::dash3d::ModelAppender::~ModelAppender()

    // 0x10012a760: GUIAnimationManager::TemporaryAnimationData::~TemporaryAnimationData() has the same machine code as eastl::pair<oldscape::Font const, shared_ptr<oldscape::jstring::PixfontGeneric>>::~pair()

    // 0x10049c6f0: GUIAnimationManager::TemporaryAnimationData::TemporaryAnimationData(GUIAnimationManager::TemporaryAnimationData&&) has the same machine code as eastl::pair<int, shared_ptr<game::ObjTypeCustomisation>>::pair(eastl::pair<int, shared_ptr<game::ObjTypeCustomisation>>&&)

    // 0x10049c700: GUIAnimationManager::TemporaryAnimationData::TemporaryAnimationData(GUIAnimationManager::TemporaryAnimationData&&) has the same machine code as eastl::pair<int, shared_ptr<game::ObjTypeCustomisation>>::pair(eastl::pair<int, shared_ptr<game::ObjTypeCustomisation>>&&)

    // 0x1008f6cd0
    GUIAnimationManager::TemporaryAnimationData::TemporaryAnimationData(shared_ptr<GUIAnimation>&& guiAnimation) {
        m_nextTemporaryAnimationID = m_nextTemporaryAnimationID + 1;
        field_0 = m_nextTemporaryAnimationID;
        field_8.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(guiAnimation);
        if (field_0 == -1) {
            LogAssert("m_id < 0xFFFFFFFFu",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimationManager.cpp",
                      13, nullptr);
        }
    }

    // 0x1008f6d50
    GUIAnimationManager::GUIAnimationManager() {
        int local_48[2];
        hash<ui::Component*> local_40[8];
        equal_to<ui::Component*> local_38[8];

        new (&field_8) eastl::fixed_vector<GUIAnimationManager::TemporaryAnimationData, 32ul>();
        local_48[0] = 16;
        local_48[1] = 8;
        auto piVar1 = std::max<int>(*local_48, *(local_48 + 1));
        new (&field_816) FastPool<GUIAnimationInstance, int>(1024, *piVar1);
        new (&field_848) eastl::fixed_vector<GUIAnimationInstance*, 1024ul, false, eastl::dummy_allocator>();
        new (&field_9064)
            eastl::fixed_hash_map<ui::Component*, eastl::vector<GUIAnimationInstance*, BucketAllocatorEASTL>, 128ul,
                                  129ul, true, eastl::hash<ui::Component*>, eastl::equal_to<ui::Component*>, false>(
                *local_40, *local_38);
        field_15376 = 0;
        new (&field_15384) eastl::fixed_vector<GUIAnimationInstance*, 128ul, false, eastl::dummy_allocator>();
        new (&field_16432) eastl::fixed_vector<GUIAnimationManager::ScheduledInstance, 8ul>();
    }

    // 0x1008f6f20
    TemporaryAnimationData*
    GUIAnimationManager::CreateTemporaryAnimation(const GUIAnimationCurve& guiAnimationCurve,
                                                  GUIAnimationTarget guiAnimationTarget,
                                                  GUIAnimationTargetMode guiAnimationTargetMode) {
        ReturnValue local_30;

        GUIAnimationTarget local_20 = guiAnimationTarget;
        GUIAnimationTargetMode local_1c = guiAnimationTargetMode;
        bucket_make_shared<GUIAnimation, GUIAnimationCurve const&, GUIAnimationTarget&, GUIAnimationTargetMode&>(
            &local_30, guiAnimationCurve, &local_20, &local_1c);
        auto pTVar1 = field_8.emplace_back<shared_ptr<GUIAnimation>>(local_30);
        return pTVar1;
    }

    // 0x1008f70b0
    TemporaryAnimationData*
    GUIAnimationManager::CreateTemporaryAnimation(math::EasingType easingType, bool arg2,
                                                  GUIAnimationTarget guiAnimationTarget,
                                                  GUIAnimationTargetMode guiAnimationTargetMode) {
        ReturnValue local_38;

        EasingType local_28 = easingType;
        GUIAnimationTarget local_24 = guiAnimationTarget;
        GUIAnimationTargetMode local_20 = guiAnimationTargetMode;
        bool local_19 = arg2;
        bucket_make_shared<GUIAnimation, math::EasingType&, bool&, GUIAnimationTarget&, GUIAnimationTargetMode&>(
            &local_38, &local_28, &local_19, &local_24, &local_20);
        auto pTVar1 = field_8.emplace_back<shared_ptr<GUIAnimation>>(local_38);
        return pTVar1;
    }

    // 0x1008f71f0
    uint8_t* GUIAnimationManager::GetAnimation(unsigned int arg1) const {
        uint8_t uVar2;
        TemporaryAnimationData* pTVar5;
        TemporaryAnimationData* pTVar6;
        uint64_t extraout_var;
        __3* in_RCX;
        uint8_t* puVar7;
        unsigned int local_24;

        if (IsTemporaryAnimation(arg1) == '\0') {
            uVar2 = GetConfigAnimations();
            if (((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(((uint64_t)extraout_var << 8) |
                                                                                     (uint8_t)uVar2))
                    ->end() <= arg1) {
                LogAssert("id < (uint)configAnimations.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                          "animations/GUIAnimationManager.cpp",
                          50, nullptr);
            }
            puVar7 = (uint8_t*)(*((Array<shared_ptr<GUIAnimation>>*)(((uint64_t)extraout_var << 8) |
                                                                     (uint8_t)uVar2)))[(unsigned long)arg1];
        } else {
            puVar7 = &field_8;
            pTVar5 = (TemporaryAnimationData*)puVar7->HeapBeginPtr();
            pTVar6 = (TemporaryAnimationData*)puVar7->end();
            pTVar5 = eastl::lower_bound<GUIAnimationManager::TemporaryAnimationData const*, unsigned int,
                                        unsigned int->GetAnimation() const ::__3>(pTVar5, pTVar6, &local_24, in_RCX);
            pTVar6 = (TemporaryAnimationData*)puVar7->end();
            if ((pTVar5 == pTVar6) || (pTVar5->field_0 != arg1)) {
                puVar7 = &GetAnimation(unsigned int)::null;
                if (GetAnimation(unsigned int)::null == '\0') {
                    if (___cxa_guard_acquire(&GetAnimation(unsigned int)::null) != 0) {
                        puVar7 = &GetAnimation(unsigned int)::null;
                        new ((shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>*)&GetAnimation(
                            unsigned int)::null) shared_ptr();
                        ___cxa_atexit(PTR__shared_ptr_100ee5358, &GetAnimation(unsigned int)::null, 4294967296);
                        ___cxa_guard_release(&GetAnimation(unsigned int)::null);
                    }
                }
            } else {
                puVar7 = &pTVar5->field_8;
            }
        }
        return puVar7;
    }

    // 0x1008f7430
    void GUIAnimationManager::GetAnimationCurve(unsigned int arg1) const {
        uint64_t extraout_var;

        uint8_t uVar1 = GetConfigAnimationCurves();
        if (((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(((uint64_t)extraout_var << 8) |
                                                                                 (uint8_t)uVar1))
                ->end() <= arg1) {
            LogAssert("id < (uint)configAnimationCurves.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimationManager.cpp",
                      58, nullptr);
        }
        (*((Array<GUIAnimationCurve>*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1)))[(unsigned long)arg1];
    }

    // 0x1008f7480
    void GUIAnimationManager::MainDraw(float arg1) {
        back_insert_iterator<eastl::fixed_vector<GUIAnimationInstance*, _1024ul, false, eastl::dummy_allocator> _>*
            back_insert_iterator;
        TemporaryAnimationData* temporaryAnimationData2;
        uint8_t auVar5[16];

        uint8_t* puVar1 = &field_15384;
        auto arg1_00 = puVar1->HeapBeginPtr();
        auto arg2 = puVar1->end();
        uint8_t* this_00 = &field_848;
        back_insert_iterator =
            (back_insert_iterator<
                eastl::fixed_vector<GUIAnimationInstance*, _1024ul, false, eastl::dummy_allocator> _>*)this_00->end();
        eastl::copy<GUIAnimationInstance**, eastl::back_insert_iterator<eastl::fixed_vector<
                                                GUIAnimationInstance*, 1024ul, false, eastl::dummy_allocator>>>(
            arg1_00, arg2, back_insert_iterator);
        puVar1->clear();
        ProcessFinishedInstances();
        puVar1 = &field_8;
        auto pTVar2 = puVar1->HeapBeginPtr();
        auVar5 = puVar1->end();
        pTVar2 = eastl::remove_if<GUIAnimationManager::TemporaryAnimationData*, float->MainDraw()::__4>(
            pTVar2, auVar5._0_8_, auVar5._8_8_);
        temporaryAnimationData2 = (TemporaryAnimationData*)puVar1->end();
        puVar1->erase(pTVar2, temporaryAnimationData2);
        auto puVar3 = this_00->HeapBeginPtr();
        auto puVar4 = this_00->end();
        for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
            (*puVar3)->Advance(arg1);
        }
        ProcessScheduledInstances(arg1);
    }

    // 0x1008f75c0
    void GUIAnimationManager::ProcessFinishedInstances() {
        bool cVar2;
        shared_ptr<ui::Component>* shared_ptr;
        uint8_t* this_00;
        function<bool_(int, int, int, int)>** arg1;
        function<bool_(int, int, int, int)>** arg2;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        long lVar8;
        uint8_t auVar9[16];
        Component* local_50;

        field_15376 = 1;
        uint8_t* puVar1 = &field_848;
        auto puVar3 = puVar1->HeapBeginPtr();
        Layout* local_38 = (Layout*)puVar1;
        auto puVar4 = puVar1->end();
        Layout* pLVar7 = local_38;
        for (; local_38 = pLVar7, puVar3 != puVar4; puVar3 = puVar3 + 1) {
            cVar2 = (*puVar3)->Finished();
            if ((cVar2) && (cVar2 = (*puVar3)->HasOnFinishHook(), cVar2)) {
                shared_ptr = (shared_ptr<ui::Component>*)(*puVar3)->GetLogStreams();
                (*puVar3)->GetScreen();
                ExecuteOnFinish(shared_ptr);
            }
            pLVar7 = local_38;
        }
        GUIAnimationManager* local_48 = this;
        auto ppGVar5 = pLVar7->HeapBeginPtr();
        auVar9 = pLVar7->end();
        ppGVar5 = std::stable_partition<GUIAnimationInstance**, GUIAnimationManager::ProcessFinishedInstances()::__5>(
            ppGVar5, auVar9._0_8_, auVar9._8_8_);
        auto ppGVar6 = pLVar7->end();
        GUIAnimationInstance** local_40 = ppGVar5;
        if (ppGVar5 != ppGVar6) {
            puVar1 = &local_48->field_9064;
            this_00 = &local_48->field_816;
            do {
                this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*ppGVar5)->GetScreen();
                local_50 = (Component*)this_01->end();
                pLVar7 = (Layout*)(*puVar1)[local_50];
                lVar8 = pLVar7->size();
                if (lVar8 == 1) {
                    local_50 = (Component*)this_01->end();
                    puVar1->erase(local_50);
                } else {
                    arg1 = (function<bool_(int, int, int, int)>**)pLVar7->HeapBeginPtr();
                    arg2 = (function<bool_(int, int, int, int)>**)pLVar7->end();
                    ppGVar6 = (GUIAnimationInstance**)eastl::find<std::function<bool(input::TextCommand)>**,
                                                                  std::function<bool(input::TextCommand)>*>(arg1, arg2,
                                                                                                            *ppGVar5);
                    pLVar7->erase(ppGVar6);
                }
                this_00->Destroy(*ppGVar5);
                ppGVar5 = ppGVar5 + 1;
                ppGVar6 = (GUIAnimationInstance**)local_38->end();
            } while (ppGVar5 != ppGVar6);
        }
        pLVar7 = local_38;
        ppGVar5 = (GUIAnimationInstance**)local_38->end();
        pLVar7->erase(local_40, ppGVar5);
        local_48->field_15376 = 0;
    }

    // 0x1008f7840
    void GUIAnimationManager::ProcessScheduledInstances(float arg1) {
        float fVar1;
        ScheduledInstance* scheduledInstance2;
        uint8_t auVar4[16];

        uint8_t* this_00 = &field_16432;
        auto guiAnimation = this_00->HeapBeginPtr();
        auto psVar2 = this_00->end();
        for (; guiAnimation != psVar2; guiAnimation = guiAnimation + 72) {
            fVar1 = *(float*)(guiAnimation + 68);
            *(float*)(guiAnimation + 68) = fVar1 + arg1;
            if (0.0 <= fVar1 + arg1) {
                eastl::function<void(testframework::TestResults const&, eastl::string&)>::operator()(
                    (function<void(testframework::TestResults const&, eastl::string&)>*)(guiAnimation + 32),
                    guiAnimation, (shared_ptr<ui::Component>*)(guiAnimation + 16));
                ((GUIAnimationInstance*)PlayImpl(*guiAnimation, *((guiAnimation + 16)), *(float*)(guiAnimation + 64),
                                                 0.0, 1, 0.0, false, nullptr))
                    ->Advance(*(float*)(guiAnimation + 68));
            }
        }
        auto pSVar3 = this_00->HeapBeginPtr();
        auVar4 = this_00->end();
        pSVar3 = eastl::partition<GUIAnimationManager::ScheduledInstance*, float->ProcessScheduledInstances()::__6>(
            pSVar3, auVar4._0_8_, auVar4._8_8_);
        scheduledInstance2 = (ScheduledInstance*)this_00->end();
        this_00->erase(pSVar3, scheduledInstance2);
    }

    // 0x1008f7930
    void GUIAnimationManager::KillAll(GUIAnimationKillBehaviour guiAnimationKillBehaviour) {
        auto puVar1 = field_848.HeapBeginPtr();
        auto puVar2 = field_848.end();
        if (puVar1 != puVar2) {
            do {
                (*puVar1)->Kill(guiAnimationKillBehaviour & 255);
                puVar1 = puVar1 + 1;
            } while (puVar1 != puVar2);
        }
    }

    // 0x1008f7990
    void GUIAnimationManager::SchedulePlay(
        GUIAnimationManager::TemporaryAnimationData& temporaryAnimationData, const shared_ptr<ui::Component>& component,
        float arg3, float arg4,
        eastl::function<void(shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&)>&& callback) {
        if (callback.operator_cast_to_bool() == '\0') {
            LogAssert("playCallback",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimationManager.cpp",
                      97, nullptr);
        }
        if (arg4 <= 0.0) {
            LogAssert("startDelay > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimationManager.cpp",
                      98, nullptr);
        }
        if (arg3 <= 0.0) {
            LogAssert("duration > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimationManager.cpp",
                      99, nullptr);
        }
        auto this_00 = field_16432.emplace_back<>();
        *this_00 = temporaryAnimationData.field_8;
        this_00->field_16 = component;
        this_00->field_32 = callback;
        *(float*)&this_00->field_64 = arg3;
        *(float*)((long)&this_00->field_64 + 4) = -arg4;
    }

    // 0x1008f7bb0
    void GUIAnimationManager::Play(const shared_ptr<GUIAnimation>& guiAnimation,
                                   const shared_ptr<ui::Component>& component, float arg3, float arg4,
                                   unsigned int arg5, float arg6, bool arg7) {
        PlayImpl(guiAnimation, component, arg3, arg4, arg5, arg6, arg7, nullptr);
    }

    // 0x1008f7bc0
    GUIAnimationInstance* GUIAnimationManager::PlayImpl(const shared_ptr<GUIAnimation>& guiAnimation,
                                                        const shared_ptr<ui::Component>& component, float arg3,
                                                        float arg4, unsigned int arg5, float arg6, bool arg7,
                                                        game::Hook* hook) {
        GUIAnimationInstance* result;
        int iVar3;
        uint64_t* puVar5;
        uint64_t* puVar6;
        shared_ptr<oldscape::midi2::MidiRequest>* midiRequest1;
        uint64_t in_register_00000081;
        GUIAnimationInstance result;
        GUIAnimationInstance* local_80[3];
        Layout* local_50;
        shared_ptr<ui::Component>* local_48;

        float local_5c = (float)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg7);
        auto local_88 = component.end();
        &result = (GUIAnimationInstance*)local_80;
        result = field_9064.insert(local_88);
        long lVar4 = result.HeapBeginPtr();
        Layout* this_00 = (Layout*)(lVar4 + 8);
        if (guiAnimation.unique() == '\0') {
            local_48 = component;
            puVar5 = (uint64_t*)this_00->HeapBeginPtr();
            local_50 = this_00;
            puVar6 = (uint64_t*)this_00->end();
            iVar3 = 2;
            if (puVar5 == puVar6) {
            LAB_1008f7d1d:
                this_00 = local_50;
                component = local_48;
                this = this;
                if (iVar3 != 2) {
                    return result;
                }
            } else {
                do {
                    midiRequest1 = (shared_ptr<oldscape::midi2::MidiRequest>*)(*puVar5)->SSOBeginPtr();
                    if (*midiRequest1 == guiAnimation) {
                        if (local_5c._0_1_ == '\0') {
                            (*puVar5)->Kill(1);
                            iVar3 = 2;
                        } else {
                            (*puVar5)->Restart(arg3, arg4, (unsigned int)(float)arg5, arg6);
                            if (hook != nullptr) {
                                (*puVar5)->SetOnFinishHook(*hook);
                            }
                            &result = (GUIAnimationInstance*)*puVar5;
                            iVar3 = 1;
                        }
                        goto LAB_1008f7d1d;
                    }
                    puVar5 = puVar5 + 1;
                } while (puVar5 != puVar6);
                this_00 = local_50;
                component = local_48;
                this = this;
            }
        }
        if (hook == nullptr) {
            local_80[0] = FastPool<GUIAnimationInstance, int>::Create<shared_ptr<GUIAnimation> const&,
                                                                      shared_ptr<ui::Component> const&, float&, float&,
                                                                      unsigned int&, float&>(
                field_816, guiAnimation, component, arg3, arg4, (float)arg5);
        } else {
            local_80[0] = field_816.Create<shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&, float&,
                                           float&, unsigned int&, float&, game::Hook>(guiAnimation, component, arg3,
                                                                                      arg4, (float)arg5, arg6, *hook);
        }
        if (field_15376 == '\0') {
            field_848.push_back(*local_80);
        } else {
            field_15384.push_back(*local_80);
        }
        this_00->push_back(*local_80);
        local_80[0]->Start();
        return local_80;
    }

    // 0x1008f7df0
    void GUIAnimationManager::Play(const shared_ptr<GUIAnimation>& guiAnimation,
                                   const shared_ptr<ui::Component>& component, float arg3, float arg4,
                                   unsigned int arg5, float arg6, bool arg7, game::Hook&& hook) {
        PlayImpl(guiAnimation, component, arg3, arg4, arg5, arg6, arg7, hook);
    }

    // 0x1008f7e00
    void GUIAnimationManager::Kill(const shared_ptr<ui::Component>& component,
                                   const shared_ptr<GUIAnimation>& guiAnimation,
                                   GUIAnimationKillBehaviour guiAnimationKillBehaviour) {
        long lVar3;
        uint64_t* puVar4;
        uint64_t* puVar5;
        shared_ptr<oldscape::midi2::MidiRequest>* midiRequest1;

        local_40[0] = (ReturnValue)component.end();
        auto local_50 = field_9064.find(local_40);
        auto local_40 = field_9064.end();
        if (local_50 != local_40 != '\0') {
            lVar3 = local_50.HeapBeginPtr();
            puVar4 = (uint64_t*)((lVar3 + 8))->HeapBeginPtr();
            puVar5 = (uint64_t*)((lVar3 + 8))->end();
            for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
                midiRequest1 = (shared_ptr<oldscape::midi2::MidiRequest>*)(*puVar4)->SSOBeginPtr();
                if (*midiRequest1 == guiAnimation) {
                    (*puVar4)->Kill(guiAnimationKillBehaviour & 255);
                    return;
                }
            }
        }
    }

    // 0x1008f7f60
    void GUIAnimationManager::KillAll(const shared_ptr<ui::Component>& component,
                                      GUIAnimationKillBehaviour guiAnimationKillBehaviour) {
        long lVar2;
        uint64_t* puVar3;
        uint64_t* puVar4;

        local_38[0] = (ReturnValue)component.end();
        auto local_48 = field_9064.find(local_38);
        auto local_38 = field_9064.end();
        if (local_48 != local_38 != '\0') {
            lVar2 = local_48.HeapBeginPtr();
            puVar3 = (uint64_t*)((lVar2 + 8))->HeapBeginPtr();
            puVar4 = (uint64_t*)((lVar2 + 8))->end();
            if (puVar3 != puVar4) {
                do {
                    (*puVar3)->Kill(guiAnimationKillBehaviour & 255);
                    puVar3 = puVar3 + 1;
                } while (puVar3 != puVar4);
            }
        }
    }

    // 0x1008f8020
    void GUIAnimationManager::Restart(const shared_ptr<ui::Component>& component,
                                      const shared_ptr<GUIAnimation>& guiAnimation, unsigned int arg3) {
        long lVar3;
        uint64_t* puVar4;
        uint64_t* puVar5;
        shared_ptr<oldscape::midi2::MidiRequest>* midiRequest1;

        local_40[0] = (ReturnValue)component.end();
        auto local_50 = field_9064.find(local_40);
        auto local_40 = field_9064.end();
        if (local_50 != local_40 != '\0') {
            lVar3 = local_50.HeapBeginPtr();
            puVar4 = (uint64_t*)((lVar3 + 8))->HeapBeginPtr();
            puVar5 = (uint64_t*)((lVar3 + 8))->end();
            for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
                midiRequest1 = (shared_ptr<oldscape::midi2::MidiRequest>*)(*puVar4)->SSOBeginPtr();
                if (*midiRequest1 == guiAnimation) {
                    (*puVar4)->Restart(arg3);
                    return;
                }
            }
        }
    }

    // 0x1008f80f0
    void GUIAnimationManager::RestartAll(const shared_ptr<ui::Component>& component, unsigned int arg2) {
        long lVar2;
        uint64_t* puVar3;
        uint64_t* puVar4;

        local_38[0] = (ReturnValue)component.end();
        auto local_48 = field_9064.find(local_38);
        auto local_38 = field_9064.end();
        if (local_48 != local_38 != '\0') {
            lVar2 = local_48.HeapBeginPtr();
            puVar3 = (uint64_t*)((lVar2 + 8))->HeapBeginPtr();
            puVar4 = (uint64_t*)((lVar2 + 8))->end();
            for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
                (*puVar3)->Restart(arg2);
            }
        }
    }

    // 0x10090f5d0
    bool GUIAnimationManager::GetAnimation(unsigned int) const ::$_3::operator()(
        const GUIAnimationManager::TemporaryAnimationData& temporaryAnimationData, unsigned int arg2) const {
        return *(unsigned int*)this < (unsigned int)temporaryAnimationData;
    }

    // 0x10090f770
    void GUIAnimationManager::MainDraw(float)::$_4::operator()(
        const GUIAnimationManager::TemporaryAnimationData& temporaryAnimationData) const {
        field_8.unique();
    }

    // 0x100910720
    uint8_t
    GUIAnimationManager::ProcessFinishedInstances()::$_5::operator()(GUIAnimationInstance* guiAnimationInstance) const {
        return Finished() ^ 1;
    }

    // 0x1009111d0
    bool GUIAnimationManager::ProcessScheduledInstances(float)::$_6::operator()(
        const GUIAnimationManager::ScheduledInstance& scheduledInstance) const {
        return field_68 <= 0.0 && field_68 != 0.0;
    }

} // namespace jag::graphics

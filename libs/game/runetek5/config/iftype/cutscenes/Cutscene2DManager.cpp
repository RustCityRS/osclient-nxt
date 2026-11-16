// libs/game/runetek5/config/iftype/cutscenes/Cutscene2DManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "Cutscene2DManager.h"
#include "libs/graphics/runetek7/particles/ModularParticleSystem.h"

namespace jag::game {
    // 0x100f3c94c
    float Cutscene2DManager::m_debugEnableFullScreenAutoplay[4] = {0, 0, 0, 0};

    // 0x100183570: Cutscene2DManager::ActiveCutsceneData::IsValid() const has the same machine code as File::isopen() const

    // 0x100522c30
    Cutscene2DManager::Cutscene2DManager(Js5ResourceProvider* js5ResourceProvider, ConfigProvider* configProvider,
                                         graphics::RT7Core* rt7Core, graphics::FontManager* fontManager,
                                         graphics::FontHelpers* fontHelpers, SoundManager* soundManager)
        : field_8(js5ResourceProvider), field_16(configProvider), field_24(rt7Core), field_32(fontManager),
          field_40(fontHelpers), field_48(soundManager) {
        uint8_t local_98[72];

        unsigned int* local_48 = &field_256;
        new (&field_296) eastl::vector_map<unsigned int, Cutscene2DManager::PreloadRequest>();
        unsigned int* local_38 = &field_336;
        unsigned int* local_40 = &field_296;
        new (local_38) ActiveCutsceneData();
        new (field_2480) GlobalCutscene2DResources();
        if (field_8 == nullptr) {
            LogAssert("m_resourceProvider",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DManager.cpp",
                      27, nullptr);
        }
        if (field_16 == nullptr) {
            LogAssert("m_configProvider",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DManager.cpp",
                      28, nullptr);
        }
        if (field_24 == nullptr) {
            LogAssert("m_rt7Core",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DManager.cpp",
                      29, nullptr);
        }
        if (field_32 == nullptr) {
            LogAssert("m_fontManager",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DManager.cpp",
                      30, nullptr);
        }
        if (field_40 == nullptr) {
            LogAssert("m_fontHelpers",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DManager.cpp",
                      31, nullptr);
        }
        if (field_48 == nullptr) {
            LogAssert("m_soundManager",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DManager.cpp",
                      32, nullptr);
        }
        new (local_98) ConfigDecoderInfo();
        (*((local_98 + 8))) = this;
        field_16->SetDecoder(Js5Archive::JS5_CUTSCENES2D);
    }

    // 0x100522f90
    void Cutscene2DManager::MainDraw(float arg1) {
        uint8_t* this_01;
        Js5ResourceProvider* js5ResourceProvider;
        ConfigProvider* configProvider;
        int arg3;
        int arg4;
        SpriteAtlasManager* spriteAtlasManager;
        int* piVar6;
        PreloadRequest* this_04;
        long lVar7;
        uint32_t uVar8;
        float fVar9;
        uint8_t auVar10[16];
        uint8_t local_60[24];
        long local_38;

        unsigned int* this_00 = &field_296;
        long lVar3 = this_00->HeapBeginPtr();
        local_60._16_8_ = this_00;
        long lVar4 = this_00->end();
        Cutscene2DManager* pCVar1 = this;
        if (lVar3 != lVar4) {
            local_38 = lVar4;
            do {
                this_04 = (PreloadRequest*)(lVar3 + 8);
                if (!(this_04->Ready())) {
                    js5ResourceProvider = pCVar1->field_8;
                    configProvider = pCVar1->field_16;
                    spriteAtlasManager = pCVar1->field_24->GetTextureManager()->GetSpriteAtlasManager();
                    lVar4 = local_38;
                    ((lVar3 + 16))
                        ->Load(0.0, 0.0, js5ResourceProvider, configProvider, spriteAtlasManager, pCVar1->field_48);
                    if (((lVar3 + 16))->Ready(0.0)) {
                        this_04->field_0 = 1000;
                    }
                } else {
                    this_04->field_0 = this_04->field_0 - 1;
                }
                lVar7 = lVar3 + 2136;
                lVar3 = lVar3 + 2136;
            } while (lVar7 != lVar4);
        }
        uint64_t this_02 = local_60._16_8_;
        auto ppVar5 = local_60._16_8_->HeapBeginPtr();
        auVar10 = this_02->end();
        ppVar5 =
            eastl::remove_if<eastl::pair<unsigned int, Cutscene2DManager::PreloadRequest>*, float->MainDraw()::__1>(
                ppVar5, auVar10._0_8_, auVar10._8_8_);
        auto arg2 = this_02->end();
        this_02->erase(ppVar5, arg2);
        pCVar1 = this;
        if (field_336.IsValid()) {
            this_01 = pCVar1->field_2464;
            uVar8 = this_01->GetPlaybackTimeSec();
            local_38 = (((uint64_t)local_38._4_4_ << 32) | (uint32_t)uVar8);
            if (!(this_01->HasAlphaParticles())) {
                if (this_01->HasDistortionParticles()) {
                    this_01->Advance(arg1 * *(float*)PTR_m_playbackSpeed_100ee65b0);
                    fVar9 = (float)this_01->GetAlpha();
                    local_60._0_8_ = GetPlaybackParam(pCVar1, 2, '\0');
                    piVar6 = (int*)local_60->value();
                    if (*piVar6 <= (int)(fVar9 * 1000.0)) {
                        StopPlayback(pCVar1, 0);
                    }
                }
            }
            LoadActiveCutsceneResources(pCVar1, (float)local_38);
            this_01->SetDisplayedRecently(false);
        }
        if (*PTR_m_debugEnableFullScreenAutoplay_100ee6620 != '\0') {
            arg3 = pCVar1->field_24->GetInterfaceWidth();
            arg4 = pCVar1->field_24->GetInterfaceHeight();
            new (local_60) oldscape::dash3d::GridRect(0, 0, arg3, arg4);
            PlayActiveCutscene(pCVar1, (Rect<int>*)local_60);
        }
    }

    // 0x1005239f0
    uint64_t Cutscene2DManager::GetPlaybackParam(CutsceneParamID cutsceneParamID, unsigned char arg2) const {
        uint8_t bVar2;
        long lVar3;
        Logger* this_00;
        int arg4;
        float fVar4;
        uint64_t uVar5;
        unsigned int local_2c;

        bool cVar1 = field_336.IsValid();
        if (!cVar1)
            goto switchD_100523a37_default;
        switch (cutsceneParamID) {
        case 0:
            bVar2 = field_2464->HasAlphaEarlyParticles();
            local_2c = (unsigned int)bVar2;
            goto LAB_100523a85;
        case 1:
            fVar4 = (float)field_2464->GetPlaybackTimeSec();
            goto LAB_100523a79;
        case 2:
            lVar3 = eastl::vector_map<unsigned int, Cutscene2D>::find(field_256);
            fVar4 = (float)((lVar3 + 8))->GetDurationSec();
        LAB_100523a79:
            local_2c = (unsigned int)(fVar4 * 1000.0);
        LAB_100523a85:
            local_38.optional<int, 0>(local_2c);
            return local_38;
        case 3:
            lVar3 = eastl::vector_map<unsigned int, Cutscene2D>::find(field_256);
            cVar1 = ((lVar3 + 8))->HasScene(arg2);
            if (cVar1) {
                fVar4 = (float)((lVar3 + 8))->GetSceneDurationSec(arg2);
            LAB_100523b58:
                local_2c = (unsigned int)(fVar4 * 1000.0);
                local_38.optional<int, 0>(local_2c);
                if (cVar1) {
                    return local_38;
                }
                goto switchD_100523a37_default;
            }
            this_00 = logger::default_logger();
            arg4 = 299;
            uVar5 = 3;
            break;
        case 4:
            lVar3 = eastl::vector_map<unsigned int, Cutscene2D>::find(field_256);
            cVar1 = ((lVar3 + 8))->HasScene(arg2);
            if (cVar1) {
                fVar4 = (float)((lVar3 + 8))->GetSceneStartSec(arg2);
                goto LAB_100523b58;
            }
            this_00 = logger::default_logger();
            arg4 = 314;
            uVar5 = 4;
            break;
        case 5:
            lVar3 = eastl::vector_map<unsigned int, Cutscene2D>::find(field_256);
            cVar1 = ((lVar3 + 8))->HasScene(arg2);
            if (cVar1) {
                fVar4 = (float)((lVar3 + 8))->GetSceneEndSec(arg2);
                goto LAB_100523b58;
            }
            this_00 = logger::default_logger();
            arg4 = 329;
            uVar5 = 5;
            break;
        default:
            goto switchD_100523a37_default;
        }
        this_00->Log(false, 3,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                     "iftype/cutscenes/Cutscene2DManager.cpp",
                     arg4, "Unable to get value for cutscene param ID %d on scene %d - invalid scene", uVar5,
                     (unsigned long)arg2);
    switchD_100523a37_default:
        return local_38;
        return local_38;
    }

    // 0x100523c80
    void Cutscene2DManager::StopPlayback(CutscenePlaybackEndReason cutscenePlaybackEndReason) {
        bool arg2;
        unsigned int arg1;

        if (field_336.IsValid() != '\0') {
            *PTR_m_debugEnableFullScreenAutoplay_100ee6620 = 0;
            arg1 = field_336;
            arg2 = (bool)field_340;
            field_336.Reset();
            TriggerCutscenePlaybackEndCallbacks(arg1, arg2, cutscenePlaybackEndReason);
        }
    }

    // 0x100523cf0
    void Cutscene2DManager::LoadActiveCutsceneResources(float arg1) {
        uint8_t* this_00;
        uint8_t* this_01;
        uint8_t arg1_00;
        SpriteAtlasManager* spriteAtlasManager;
        float arg2;

        if (field_336.IsValid()) {
            spriteAtlasManager = field_24->GetTextureManager()->GetSpriteAtlasManager();
            this_00 = field_2464;
            arg2 = (float)this_00->GetAlpha();
            this_01 = field_344;
            this_01->Load(arg1, arg2, field_8, field_16, spriteAtlasManager, field_48);
            if (!(this_01->Ready(arg2))) {
                if (this_00->HasAlphaLateParticles()) {
                    return;
                }
                this_00->SetPausedBySystem(true, arg1);
                arg1_00 = true;
            } else {
                field_336.FlagPlayable();
                if (!(this_00->HasAlphaLateParticles())) {
                    return;
                }
                this_00->SetPausedBySystem(false, 0.0);
                arg1_00 = this_00->HasAlphaParticles();
            }
            this_01->NotifyPaused((bool)arg1_00);
        }
    }

    // 0x100523e10
    void Cutscene2DManager::PlayActiveCutscene(const math::Rect<int>& rect) {
        RT7Core* rt7Core;
        FontManager* fontManager;
        FontHelpers* fontHelpers;
        Cutscene2D* this_00;
        float arg5;

        if (field_336.IsPlayable() != '\0') {
            this_00 = &field_256[field_336];
            rt7Core = field_24;
            fontManager = field_32;
            fontHelpers = field_40;
            arg5 = (float)field_2464->GetPlaybackTimeSec();
            this_00->Play(rt7Core, fontManager, fontHelpers, rect, arg5, *field_344, *field_2480);
            field_2464->SetDisplayedRecently(true);
        }
    }

    // 0x100523ec0
    void Cutscene2DManager::Preload(unsigned int arg1) {
        long lVar1;
        long lVar2;
        PreloadRequest* this_00;
        unsigned int local_24;

        if (field_336 != arg1) {
            lVar1 = eastl::vector_map<unsigned int, Cutscene2D>::find(field_256);
            lVar2 = field_256.end();
            if (lVar1 != lVar2) {
                this_00 = &field_296[local_24];
                if (!(this_00->Ready())) {
                    if (this_00->field_8->Empty()) {
                        ((lVar1 + 8))->PrepareResourceRequests(this_00->field_8);
                    }
                } else {
                    this_00->field_0 = 1000;
                }
            }
        }
    }

    // 0x1005240a0
    void Cutscene2DManager::FlushPreloadedCutscenes() {
        field_296.clear();
    }

    // 0x1005240f0
    unsigned long Cutscene2DManager::StartPlayback(unsigned int arg1, bool arg2) {
        Logger* pLVar3;
        long lVar4;
        long lVar5;
        pair<unsigned int, Cutscene2DManager::PreloadRequest>* arg1_00;
        SpriteAtlasManager* spriteAtlasManager;
        pair<unsigned int, Cutscene2DManager::PreloadRequest>* ppVar6;
        unsigned long uVar7;

        unsigned int* puVar1 = &field_336;
        if (((puVar1->IsValid() == '\0') || (field_340 == '\0')) || (arg2)) {
            if (*puVar1 == arg1) {
                RestartPlayback();
                uVar7 = (((uint64_t)((int64_t)((unsigned long)puVar1 >> 8)) << 8) | (uint8_t)1);
            } else {
                StopPlayback(2);
                lVar4 = eastl::vector_map<unsigned int, Cutscene2D>::find(field_256);
                lVar5 = field_256.end();
                if (lVar4 == lVar5) {
                    pLVar3 = logger::default_logger();
                    pLVar3->Log(false, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/iftype/cutscenes/Cutscene2DManager.cpp",
                                194, "Attempted to play missing 2D cutscene %u", (unsigned long)arg1);
                } else {
                    puVar1 = &field_296;
                    arg1_00 = (pair<unsigned int, Cutscene2DManager::PreloadRequest>*)
                        eastl::vector_map<unsigned int, Cutscene2DManager::PreloadRequest>::find(*puVar1);
                    spriteAtlasManager = field_24->GetTextureManager()->GetSpriteAtlasManager();
                    ppVar6 = (pair<unsigned int, Cutscene2DManager::PreloadRequest>*)puVar1->end();
                    if (arg1_00 == ppVar6) {
                        ((lVar4 + 8))->PrepareResourceRequests(field_344);
                        field_344->Load(0.0, 0.0, field_8, field_16, spriteAtlasManager, field_48);
                    } else {
                        std::swap<Cutscene2DResources>(*field_344, *((arg1_00 + 16)));
                        puVar1->erase(arg1_00);
                    }
                    field_336 = arg1;
                    field_340 = arg2;
                }
                uVar7 = (((uint64_t)((int64_t)((unsigned long)lVar5 >> 8)) << 8) | (uint8_t)(lVar4 != lVar5));
            }
        } else {
            pLVar3 = logger::default_logger();
            uVar7 = 0;
            pLVar3->Log(false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                        "iftype/cutscenes/Cutscene2DManager.cpp",
                        156, "Cannot play cutscene %u - currently playing server-requested cutscene %u",
                        (unsigned long)arg1, (unsigned long)*puVar1);
        }
        return uVar7 & 4294967295;
    }

    // 0x100524390
    void Cutscene2DManager::RestartPlayback() {
        if (field_336.IsValid() != '\0') {
            field_344->Reload();
            field_2464->Reset();
            field_341 = 0;
        }
    }

    // 0x100524560
    void Cutscene2DManager::ActiveCutsceneData::Reset() {
        field_8.Clear();
        field_2128.Reset();
        field_0 = 4294967295;
        *(uint16_t*)&field_4 = 0;
    }

    // 0x1005245a0
    void Cutscene2DManager::TriggerCutscenePlaybackEndCallbacks(unsigned int arg1, bool arg2,
                                                                CutscenePlaybackEndReason cutscenePlaybackEndReason) {
        unsigned int local_28;
        CutscenePlaybackEndReason local_24;

        _local_28 = (((uint64_t)cutscenePlaybackEndReason << 32) | (uint32_t)arg1);
        if ((&field_64)->operator_cast_to_bool()) {
            fixedfunction::function<
                void(unsigned int, CutscenePlaybackEndReason), 64ul, 16ul,
                (fixedfunction::Methods)0>::operator()((function<void(unsigned int, CutscenePlaybackEndReason), 64ul,
                                                                 16ul, (fixedfunction::Methods)0>*)&field_64,
                                                       &local_28, &local_24);
        }
        if (arg2) {
            if ((&field_160)->operator_cast_to_bool()) {
                fixedfunction::function<
                    void(unsigned int, CutscenePlaybackEndReason), 64ul, 16ul,
                    (fixedfunction::Methods)0>::operator()((function<void(unsigned int, CutscenePlaybackEndReason),
                                                                     64ul, 16ul, (fixedfunction::Methods)0>*)&field_160,
                                                           &local_28, &local_24);
            }
        }
    }

    // 0x100524740
    unsigned long Cutscene2DManager::SetPlaybackParam(CutsceneParamID cutsceneParamID, unsigned char arg2, int arg3) {
        Logger* this_00;
        unsigned long uVar2;

        if (field_336.IsValid() == '\0') {
            uVar2 = 0;
        } else if (cutsceneParamID == 0) {
            field_2464->SetPausedByUser(arg3 != 0);
            field_344->NotifyPaused((bool)field_2464->HasAlphaParticles());
            uVar2 = (((uint64_t)((int64_t)((unsigned long)field_344 >> 8)) << 8) | (uint8_t)1);
        } else {
            this_00 = logger::default_logger();
            uVar2 = 0;
            this_00->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                         "iftype/cutscenes/Cutscene2DManager.cpp",
                         263, "Unable to set cutscene param ID %d on scene %d to %d - invalid param ID",
                         (unsigned long)cutsceneParamID, arg2, (unsigned long)(unsigned int)arg3);
        }
        return uVar2 & 4294967295;
    }

    // 0x100524930
    uint16_t Cutscene2DManager::GetPlaybackSceneIndex(StringView stringView) const {
        long lVar2;
        StringView local_38;
        uint16_t local_22;

        if (field_336.IsValid() == '\0') {
            local_22 = std::optional();
        } else {
            lVar2 = eastl::vector_map<unsigned int, Cutscene2D>::find(field_256);
            local_38 = StringView(*stringView);
            local_22 = ((lVar2 + 8))->GetSceneIndex(&local_38);
        }
        return local_22;
    }

    // 0x100524a50
    void Cutscene2DManager::ActiveCutsceneData::SetPaused(bool arg1) {
        if (field_2128.HasAlphaParticles() != arg1) {
            field_2128.SetPausedByUser(arg1);
            field_8.NotifyPaused(arg1);
        }
    }

    // 0x100529eb0: Cutscene2DManager::PreloadRequest::~PreloadRequest() has the same machine code as Cutscene2DManager::ActiveCutsceneData::~ActiveCutsceneData()

} // namespace jag::game

namespace jag::graphics {
    // 0x1005249f0: ModularParticleSystemTemplate::HasAlphaLateParticles() const has the same machine code as game::Cutscene2DPlaybackState::IsPausedBySystem() const

} // namespace jag::graphics

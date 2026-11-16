// libs/game/runetek5/config/iftype/cutscenes/Cutscene2DManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "Cutscene2DManager.h"
#include "libs/graphics/runetek7/particles/ModularParticleSystem.h"

namespace jag::game {
    // 0x100f3c94c, 16 bytes, __data
    Cutscene2DManager::m_debugEnableFullScreenAutoplay = {0, 0, 0, 0};

    // 0x100183570: the linker folded this into File::isopen() const, which has identical code
    Cutscene2DManager::ActiveCutsceneData::IsValid() const;

    // 0x100522c30, 672 bytes, base-object constructor, placed by class name and debug map
    // Cutscene2DManager::Cutscene2DManager(Js5ResourceProvider*, ConfigProvider*, graphics::RT7Core*, graphics::FontManager*, graphics::FontHelpers*, SoundManager*)
    void Cutscene2DManager::Cutscene2DManager(Js5ResourceProvider* param_1, ConfigProvider* param_2, RT7Core* param_3,
                                              FontManager* param_4, FontHelpers* param_5, SoundManager* param_6) {
        undefined1 local_98[72];
        Cutscene2DManager* local_50;
        vector_map<unsigned int, Cutscene2D, eastl::less<unsigned int>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned int, Cutscene2D>, eastl::allocator>>* local_48;
        vector_map<unsigned int, Cutscene2DManager::PreloadRequest, eastl::less<unsigned int>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned int, Cutscene2DManager::PreloadRequest>, eastl::allocator>>*
            local_40;
        uint* local_38;

        field_0 = PTR_vtable_100ee7fa8 + 16;
        field_8 = param_1;
        field_16 = param_2;
        field_24 = param_3;
        field_32 = param_4;
        field_40 = param_5;
        field_48 = param_6;
        new (&field_64) math::Vector2T<int>();
        new (field_160) math::Vector2T<int>();
        new ((field_160 + 96))
            eastl::vector_map<unsigned int, Cutscene2D, eastl::less<unsigned int>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned int, Cutscene2D>, eastl::allocator>>();
        local_48 =
            (vector_map<unsigned int, Cutscene2D, eastl::less<unsigned int>, eastl::allocator,
                        eastl::vector<eastl::pair<unsigned int, Cutscene2D>, eastl::allocator>>*)(field_160 + 96);
        new ((field_160 + 136)) eastl::vector_map<
            unsigned int, Cutscene2DManager::PreloadRequest, eastl::less<unsigned int>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned int, Cutscene2DManager::PreloadRequest>, eastl::allocator>>();
        local_38 = &field_336;
        local_40 =
            (vector_map<unsigned int, Cutscene2DManager::PreloadRequest, eastl::less<unsigned int>, eastl::allocator,
                        eastl::vector<eastl::pair<unsigned int, Cutscene2DManager::PreloadRequest>,
                                      eastl::allocator>>*)(field_160 + 136);
        new (local_38) ActiveCutsceneData();
        new (field_2480) GlobalCutscene2DResources();
        if (field_8 == (Js5ResourceProvider*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_resourceProvider",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DManager.cpp",
                      27, (char*)0);
        }
        if (field_16 == (ConfigProvider*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_configProvider",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DManager.cpp",
                      28, (char*)0);
        }
        if (field_24 == (RT7Core*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_rt7Core",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DManager.cpp",
                      29, (char*)0);
        }
        if (field_32 == (FontManager*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_fontManager",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DManager.cpp",
                      30, (char*)0);
        }
        if (field_40 == (FontHelpers*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_fontHelpers",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DManager.cpp",
                      31, (char*)0);
        }
        if (field_48 == (SoundManager*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_soundManager",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DManager.cpp",
                      32, (char*)0);
        }
        new (local_98) ConfigDecoderInfo();
        local_50 = this;
        eastl::function<void(
            unsigned int, unsigned int, unsigned int, unsigned int,
            shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> const&,
            Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>, eastl::allocator> const*)>::
        operator=((function<void(unsigned int, unsigned int, unsigned int, unsigned int,
                                 shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> const&,
                                 Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>,
                                       eastl::allocator> const*)>*)(local_98 + 8),
                  (__0*)&local_50);
        (*(code*)field_16->field_0[2])(field_16, Js5Archive::JS5_CUTSCENES2D, (ConfigDecoderInfo*)local_98);
        local_98->~ConfigDecoderInfo();
    }

    // 0x100522f30: the linker folded this into Cutscene2DManager::ActiveCutsceneData::~ActiveCutsceneData(), which has identical code
    Cutscene2DManager::PreloadRequest::~PreloadRequest();

    // 0x100522f70, 32 bytes, complete-object constructor, placed by class name
    // Cutscene2DManager::Cutscene2DManager(Js5ResourceProvider*, ConfigProvider*, graphics::RT7Core*, graphics::FontManager*, graphics::FontHelpers*, SoundManager*)
    void Cutscene2DManager::Cutscene2DManager(Js5ResourceProvider* param_1, ConfigProvider* param_2, RT7Core* param_3,
                                              FontManager* param_4, FontHelpers* param_5, SoundManager* param_6) {
        Cutscene2DManager(this, param_1, param_2, param_3, param_4, param_5, param_6);
    }

    // 0x100522f90, 544 bytes, placed by class name
    // Cutscene2DManager::MainDraw(float)
    void Cutscene2DManager::MainDraw(float param_1) {
        Layout* this_00;
        undefined1* this_01;
        Js5ResourceProvider* pJVar1;
        ConfigProvider* pCVar2;
        undefined8 this_02;
        Cutscene2DManager* pCVar3;
        char cVar4;
        int iVar5;
        int iVar6;
        long lVar7;
        long lVar8;
        TextureManager* this_03;
        SpriteAtlasManager* pSVar9;
        undefined8 uVar10;
        undefined8 uVar11;
        pair* ppVar12;
        pair* ppVar13;
        int* piVar14;
        PreloadRequest* this_04;
        long lVar15;
        undefined4 uVar16;
        float fVar17;
        undefined1 local_60[24];
        Cutscene2DManager* local_48;
        long local_38;

        this_00 = (Layout*)(field_160 + 136);
        local_48 = this;
        lVar7 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_00);
        local_60._16_8_ = this_00;
        lVar8 = this_00->end();
        pCVar3 = local_48;
        if (lVar7 != lVar8) {
            local_38 = lVar8;
            do {
                this_04 = (PreloadRequest*)(lVar7 + 8);
                cVar4 = this_04->Ready();
                if (cVar4 == '\0') {
                    pJVar1 = pCVar3->field_8;
                    pCVar2 = pCVar3->field_16;
                    this_03 = (TextureManager*)pCVar3->field_24->GetTextureManager();
                    pSVar9 = (SpriteAtlasManager*)this_03->GetSpriteAtlasManager();
                    lVar8 = local_38;
                    ((lVar7 + 16))->Load(0.0, 0.0, pJVar1, pCVar2, pSVar9, pCVar3->field_48);
                    cVar4 = ((lVar7 + 16))->Ready(0.0);
                    if (cVar4 != '\0') {
                        this_04->field_0 = 1000;
                    }
                } else {
                    this_04->field_0 = this_04->field_0 + -1;
                }
                lVar15 = lVar7 + 2136;
                lVar7 = lVar7 + 2136;
            } while (lVar15 != lVar8);
        }
        this_02 = local_60._16_8_;
        uVar10 = local_60._16_8_->HeapBeginPtr();
        uVar11 = this_02->end();
        ppVar12 =
            eastl::remove_if<eastl::pair<unsigned int, Cutscene2DManager::PreloadRequest>*, float->MainDraw()::__1>(
                uVar10, uVar11);
        ppVar13 = (pair*)this_02->end();
        this_02->erase(ppVar12, ppVar13);
        pCVar3 = local_48;
        cVar4 = (&local_48->field_336)->IsValid();
        if (cVar4 != '\0') {
            this_01 = pCVar3->field_2464;
            uVar16 = this_01->GetPlaybackTimeSec();
            local_38 = CONCAT44(local_38._4_4_, uVar16);
            cVar4 = this_01->HasAlphaParticles();
            if (cVar4 == '\0') {
                cVar4 = this_01->HasDistortionParticles();
                if (cVar4 != '\0') {
                    this_01->Advance(param_1 * *(float*)PTR_m_playbackSpeed_100ee65b0);
                    fVar17 = (float)this_01->GetAlpha();
                    local_60._0_8_ = GetPlaybackParam(pCVar3, 2, 0);
                    piVar14 = (int*)local_60->value();
                    if (*piVar14 <= (int)(fVar17 * 1000.0)) {
                        StopPlayback(pCVar3);
                    }
                }
            }
            LoadActiveCutsceneResources(pCVar3, (float)local_38);
            this_01->SetDisplayedRecently(false);
        }
        if (*PTR_m_debugEnableFullScreenAutoplay_100ee6620 != '\0') {
            iVar5 = pCVar3->field_24->GetInterfaceWidth();
            iVar6 = pCVar3->field_24->GetInterfaceHeight();
            new (local_60) oldscape::dash3d::GridRect(0, 0, iVar5, iVar6);
            PlayActiveCutscene(pCVar3, (Rect*)local_60);
        }
    }

    // 0x1005239f0, 608 bytes, placed by class name
    // Cutscene2DManager::GetPlaybackParam(CutsceneParamID, unsigned char) const
    undefined8 Cutscene2DManager::GetPlaybackParam(undefined4 param_2, uchar param_3) {
        uint* this_00;
        char cVar1;
        byte bVar2;
        long lVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        float fVar6;
        undefined8 uVar7;
        undefined8 local_38;
        uint local_2c;

        this_00 = &field_336;
        cVar1 = this_00->IsValid();
        if (cVar1 == '\0')
            goto switchD_100523a37_default;
        switch (param_2) {
        case 0:
            bVar2 = field_2464->HasAlphaEarlyParticles();
            local_2c = (uint)bVar2;
            goto LAB_100523a85;
        case 1:
            fVar6 = (float)field_2464->GetPlaybackTimeSec();
            goto LAB_100523a79;
        case 2:
            lVar3 = ((field_160 + 96), this_00)->find();
            fVar6 = (float)((lVar3 + 8))->GetDurationSec();
        LAB_100523a79:
            local_2c = (uint)(fVar6 * 1000.0);
        LAB_100523a85:
            std::optional<int>::optional<int, 0>((int*)&local_38);
            return local_38;
        case 3:
            lVar3 = ((field_160 + 96), this_00)->find();
            cVar1 = ((lVar3 + 8))->HasScene(param_3);
            if (cVar1 != '\0') {
                fVar6 = (float)((lVar3 + 8))->GetSceneDurationSec(param_3);
            LAB_100523b58:
                local_2c = (uint)(fVar6 * 1000.0);
                std::optional<int>::optional<int, 0>((int*)&local_38);
                if (cVar1 != '\0') {
                    return local_38;
                }
                goto switchD_100523a37_default;
            }
            uVar4 = logger::default_logger();
            uVar5 = 299;
            uVar7 = 3;
            break;
        case 4:
            lVar3 = ((field_160 + 96), this_00)->find();
            cVar1 = ((lVar3 + 8))->HasScene(param_3);
            if (cVar1 != '\0') {
                fVar6 = (float)((lVar3 + 8))->GetSceneStartSec(param_3);
                goto LAB_100523b58;
            }
            uVar4 = logger::default_logger();
            uVar5 = 314;
            uVar7 = 4;
            break;
        case 5:
            lVar3 = ((field_160 + 96), this_00)->find();
            cVar1 = ((lVar3 + 8))->HasScene(param_3);
            if (cVar1 != '\0') {
                fVar6 = (float)((lVar3 + 8))->GetSceneEndSec(param_3);
                goto LAB_100523b58;
            }
            uVar4 = logger::default_logger();
            uVar5 = 329;
            uVar7 = 5;
            break;
        default:
            goto switchD_100523a37_default;
        }
        logger::Logger::Log(uVar4, 0, 3,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "config/iftype/cutscenes/Cutscene2DManager.cpp",
                            uVar5, "Unable to get value for cutscene param ID %d on scene %d - invalid scene", uVar7,
                            param_3);
    switchD_100523a37_default:
        new (&local_38) std::optional<int>();
        return local_38;
    }

    // 0x100523c80, 112 bytes, placed by class name
    // Cutscene2DManager::StopPlayback(CutscenePlaybackEndReason)
    void Cutscene2DManager::StopPlayback(undefined4 param_2) {
        undefined1 uVar1;
        uint uVar2;

        if ((&field_336)->IsValid() != '\0') {
            *PTR_m_debugEnableFullScreenAutoplay_100ee6620 = 0;
            uVar2 = field_336;
            uVar1 = field_340;
            (&field_336)->Reset();
            TriggerCutscenePlaybackEndCallbacks(this, uVar2, uVar1, param_2);
        }
    }

    // 0x100523cf0, 256 bytes, placed by class name
    // Cutscene2DManager::LoadActiveCutsceneResources(float)
    void Cutscene2DManager::LoadActiveCutsceneResources(float param_1) {
        undefined1* this_00;
        undefined1* this_01;
        TextureManager* this_02;
        SpriteAtlasManager* pSVar1;
        char cVar2;
        undefined1 uVar3;
        float fVar4;

        cVar2 = (&field_336)->IsValid();
        if (cVar2 != '\0') {
            this_02 = (TextureManager*)field_24->GetTextureManager();
            pSVar1 = (SpriteAtlasManager*)this_02->GetSpriteAtlasManager();
            this_00 = field_2464;
            fVar4 = (float)this_00->GetAlpha();
            this_01 = field_344;
            this_01->Load(param_1, fVar4, field_8, field_16, pSVar1, field_48);
            cVar2 = this_01->Ready(fVar4);
            if (cVar2 == '\0') {
                cVar2 = this_00->HasAlphaLateParticles();
                if (cVar2 != '\0') {
                    return;
                }
                this_00->SetPausedBySystem(true, param_1);
                uVar3 = true;
            } else {
                (&field_336)->FlagPlayable();
                cVar2 = this_00->HasAlphaLateParticles();
                if (cVar2 == '\0') {
                    return;
                }
                this_00->SetPausedBySystem(false, 0.0);
                uVar3 = this_00->HasAlphaParticles();
            }
            this_01->NotifyPaused((bool)uVar3);
        }
    }

    // 0x100523e10, 176 bytes, placed by class name
    // Cutscene2DManager::PlayActiveCutscene(math::Rect<int> const&)
    void Cutscene2DManager::PlayActiveCutscene(Rect* param_1) {
        RT7Core* pRVar1;
        FontManager* pFVar2;
        FontHelpers* pFVar3;
        Cutscene2D* this_00;
        float fVar5;

        if ((&field_336)->IsPlayable() != '\0') {
            this_00 =
                (Cutscene2D*)eastl::vector_map<unsigned int, Cutscene2D, eastl::less<unsigned int>, eastl::allocator,
                                               eastl::vector<eastl::pair<unsigned int, Cutscene2D>, eastl::allocator>>::
                operator[](
                    (vector_map<unsigned int, Cutscene2D, eastl::less<unsigned int>, eastl::allocator,
                                eastl::vector<eastl::pair<unsigned int, Cutscene2D>, eastl::allocator>>*)(field_160 +
                                                                                                          96),
                    &field_336);
            pRVar1 = field_24;
            pFVar2 = field_32;
            pFVar3 = field_40;
            fVar5 = (float)field_2464->GetPlaybackTimeSec();
            this_00->Play(pRVar1, pFVar2, pFVar3, param_1, fVar5, (Cutscene2DResources*)field_344,
                          (GlobalCutscene2DResources*)field_2480);
            (field_2464, true)->SetDisplayedRecently();
        }
    }

    // 0x100523ec0, 144 bytes, placed by class name
    // Cutscene2DManager::Preload(unsigned int)
    void Cutscene2DManager::Preload(uint param_1) {
        long lVar1;
        long lVar2;
        char cVar3;
        PreloadRequest* this_00;
        uint local_24;

        if (field_336 != param_1) {
            lVar1 = ((field_160 + 96), &local_24)->find();
            lVar2 = ((field_160 + 96))->end();
            if (lVar1 != lVar2) {
                this_00 = (PreloadRequest*)eastl::vector_map<
                    unsigned int, Cutscene2DManager::PreloadRequest, eastl::less<unsigned int>, eastl::allocator,
                    eastl::vector<eastl::pair<unsigned int, Cutscene2DManager::PreloadRequest>, eastl::allocator>>::
                operator[]((vector_map<unsigned int, Cutscene2DManager::PreloadRequest, eastl::less<unsigned int>,
                                       eastl::allocator,
                                       eastl::vector<eastl::pair<unsigned int, Cutscene2DManager::PreloadRequest>,
                                                     eastl::allocator>>*)(field_160 + 136),
                           &local_24);
                cVar3 = this_00->Ready();
                if (cVar3 == '\0') {
                    cVar3 = this_00->field_8->Empty();
                    if (cVar3 != '\0') {
                        ((lVar1 + 8))->PrepareResourceRequests(this_00->field_8);
                    }
                } else {
                    this_00->field_0 = 1000;
                }
            }
        }
    }

    // 0x1005240a0, 32 bytes, placed by class name
    // Cutscene2DManager::FlushPreloadedCutscenes()
    void Cutscene2DManager::FlushPreloadedCutscenes() {
        ((field_160 + 136))->clear();
    }

    // 0x1005240f0, 464 bytes, placed by class name
    // Cutscene2DManager::StartPlayback(unsigned int, bool)
    ulong Cutscene2DManager::StartPlayback(uint param_1, bool param_2) {
        uint* this_00;
        vector_map<unsigned int, Cutscene2DManager::PreloadRequest, eastl::less<unsigned int>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned int, Cutscene2DManager::PreloadRequest>, eastl::allocator>>*
            this_01;
        char cVar1;
        undefined8 uVar2;
        long lVar3;
        long lVar4;
        pair* ppVar5;
        TextureManager* this_02;
        SpriteAtlasManager* pSVar6;
        pair* ppVar7;
        ulong uVar8;
        uint local_34;

        this_00 = &field_336;
        local_34 = param_1;
        cVar1 = this_00->IsValid();
        if (((cVar1 == '\0') || (field_340 == '\0')) || (param_2)) {
            if (*this_00 == local_34) {
                RestartPlayback(this);
                uVar8 = CONCAT71((int7)((ulong)this_00 >> 8), 1);
            } else {
                StopPlayback(this, 2);
                lVar3 = ((field_160 + 96), &local_34)->find();
                lVar4 = ((field_160 + 96))->end();
                if (lVar3 == lVar4) {
                    uVar2 = logger::default_logger();
                    logger::Logger::Log(uVar2, 0, 3,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/config/iftype/cutscenes/Cutscene2DManager.cpp",
                                        194, "Attempted to play missing 2D cutscene %u", local_34);
                } else {
                    this_01 = (vector_map<unsigned int, Cutscene2DManager::PreloadRequest, eastl::less<unsigned int>,
                                          eastl::allocator,
                                          eastl::vector<eastl::pair<unsigned int, Cutscene2DManager::PreloadRequest>,
                                                        eastl::allocator>>*)(field_160 + 136);
                    ppVar5 = (pair*)eastl::vector_map<
                        unsigned int, Cutscene2DManager::PreloadRequest, eastl::less<unsigned int>, eastl::allocator,
                        eastl::vector<eastl::pair<unsigned int, Cutscene2DManager::PreloadRequest>,
                                      eastl::allocator>>::find(this_01, &local_34);
                    this_02 = (TextureManager*)field_24->GetTextureManager();
                    pSVar6 = (SpriteAtlasManager*)this_02->GetSpriteAtlasManager();
                    ppVar7 = (pair*)this_01->end();
                    if (ppVar5 == ppVar7) {
                        ((lVar3 + 8))->PrepareResourceRequests(field_344);
                        (field_344, 0.0, 0.0, field_8, field_16, pSVar6, field_48)->Load();
                    } else {
                        std::swap<Cutscene2DResources>((Cutscene2DResources*)field_344,
                                                       (Cutscene2DResources*)(ppVar5 + 16));
                        eastl::vector_map<unsigned int, Cutscene2DManager::PreloadRequest, eastl::less<unsigned int>,
                                          eastl::allocator,
                                          eastl::vector<eastl::pair<unsigned int, Cutscene2DManager::PreloadRequest>,
                                                        eastl::allocator>>::erase(this_01, ppVar5);
                    }
                    field_336 = local_34;
                    field_340 = param_2;
                }
                uVar8 = CONCAT71((int7)((ulong)lVar4 >> 8), lVar3 != lVar4);
            }
        } else {
            uVar2 = logger::default_logger();
            uVar8 = 0;
            logger::Logger::Log(uVar2, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/iftype/cutscenes/Cutscene2DManager.cpp",
                                156, "Cannot play cutscene %u - currently playing server-requested cutscene %u",
                                local_34, *this_00);
        }
        return uVar8 & 4294967295;
    }

    // 0x100524390, 64 bytes, placed by class name
    // Cutscene2DManager::RestartPlayback()
    void Cutscene2DManager::RestartPlayback() {
        if ((&field_336)->IsValid() != '\0') {
            field_344->Reload();
            field_2464->Reset();
            field_341 = 0;
        }
    }

    // 0x100524560, 64 bytes, placed by class name
    // Cutscene2DManager::ActiveCutsceneData::Reset()
    void Cutscene2DManager::ActiveCutsceneData::Reset() {
        (&field_8)->Clear();
        (&field_2128)->Reset();
        field_0 = 4294967295;
        *(undefined2*)&field_4 = 0;
    }

    // 0x1005245a0, 112 bytes, placed by class name
    // Cutscene2DManager::TriggerCutscenePlaybackEndCallbacks(unsigned int, bool, CutscenePlaybackEndReason)
    void Cutscene2DManager::TriggerCutscenePlaybackEndCallbacks(undefined4 param_1, char param_2, undefined4 param_4) {
        bool bVar1;
        uint local_28;
        undefined4 local_24;

        _local_28 = CONCAT44(param_4, param_1);
        bVar1 = (&field_64)->operator_cast_to_bool();
        if (bVar1) {
            fixedfunction::function<
                void(unsigned int, CutscenePlaybackEndReason), 64ul, 16ul,
                (fixedfunction::Methods)0>::operator()((function<void(unsigned int, CutscenePlaybackEndReason), 64ul,
                                                                 16ul, (fixedfunction::Methods)0>*)&field_64,
                                                       &local_28, (CutscenePlaybackEndReason*)&local_24);
        }
        if (param_2 != '\0') {
            bVar1 = field_160->operator_cast_to_bool();
            if (bVar1) {
                fixedfunction::function<
                    void(unsigned int, CutscenePlaybackEndReason), 64ul, 16ul,
                    (fixedfunction::Methods)0>::operator()((function<void(unsigned int, CutscenePlaybackEndReason),
                                                                     64ul, 16ul, (fixedfunction::Methods)0>*)field_160,
                                                           &local_28, (CutscenePlaybackEndReason*)&local_24);
            }
        }
    }

    // 0x100524740, 176 bytes, placed by class name
    // Cutscene2DManager::SetPlaybackParam(CutsceneParamID, unsigned char, int)
    ulong Cutscene2DManager::SetPlaybackParam(int param_2, undefined1 param_3, int param_4) {
        bool bVar2;
        undefined8 uVar3;
        ulong uVar4;

        if ((&field_336)->IsValid() == '\0') {
            uVar4 = 0;
        } else if (param_2 == 0) {
            (field_2464, param_4 != 0)->SetPausedByUser();
            bVar2 = (bool)field_2464->HasAlphaParticles();
            (field_344, bVar2)->NotifyPaused();
            uVar4 = CONCAT71((int7)((ulong)field_344 >> 8), 1);
        } else {
            uVar3 = logger::default_logger();
            uVar4 = 0;
            logger::Logger::Log(uVar3, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/iftype/cutscenes/Cutscene2DManager.cpp",
                                263, "Unable to set cutscene param ID %d on scene %d to %d - invalid param ID", param_2,
                                param_3, param_4);
        }
        return uVar4 & 4294967295;
    }

    // 0x100524930, 128 bytes, placed by class name
    // Cutscene2DManager::GetPlaybackSceneIndex(StringView) const
    undefined2 Cutscene2DManager::GetPlaybackSceneIndex(StringView param_1) {
        long lVar2;
        uchar* extraout_RDX;
        StringView SVar3;
        StringView local_38;
        undefined2 local_22;

        if ((&field_336)->IsValid() == '\0') {
            new (&local_22) std::optional<unsigned char>();
        } else {
            lVar2 = ((field_160 + 96), &field_336)->find();
            new (&local_38) StringView(param_1.field_0);
            SVar3.field_8 = extraout_RDX;
            SVar3.field_0 = (ulong)&local_38;
            local_22 = ((lVar2 + 8))->GetSceneIndex(SVar3);
        }
        return local_22;
    }

    // 0x100524a50, 80 bytes, placed by class name
    // Cutscene2DManager::ActiveCutsceneData::SetPaused(bool)
    void Cutscene2DManager::ActiveCutsceneData::SetPaused(bool param_1) {
        char cVar1;

        cVar1 = (&field_2128)->HasAlphaParticles();
        if ((bool)cVar1 != param_1) {
            (&field_2128, param_1)->SetPausedByUser();
            (&field_8, param_1)->NotifyPaused();
        }
    }

    // 0x100529eb0: the linker folded this into Cutscene2DManager::ActiveCutsceneData::~ActiveCutsceneData(), which has identical code
    Cutscene2DManager::PreloadRequest::~PreloadRequest();

} // namespace jag::game

namespace jag::graphics {
    // 0x1005249f0: the linker folded this into game::Cutscene2DPlaybackState::IsPausedBySystem() const, which has identical code
    ModularParticleSystemTemplate::HasAlphaLateParticles() const;

} // namespace jag::graphics

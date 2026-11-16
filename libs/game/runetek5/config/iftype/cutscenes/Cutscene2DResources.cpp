// libs/game/runetek5/config/iftype/cutscenes/Cutscene2DResources.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "Cutscene2DResources.h"

namespace jag::game {
    // 0x100f3c95c
    float Cutscene2DResources::m_preloadAdvanceSec = 2.5f;

    // 0x100f3c960
    int32_t Cutscene2DResources::m_disableResourceLoading = 0;

    // 0x1005231d0
    void Cutscene2DResources::Load(float arg1, float arg2, Js5ResourceProvider* js5ResourceProvider,
                                   ConfigProvider* configProvider, graphics::SpriteAtlasManager* spriteAtlasManager,
                                   SoundManager* soundManager) {
        shared_ptr* this_00;
        uint8_t* this_01;
        int iVar1;
        bool cVar2;
        shared_ptr<EnumType>* enumType;
        int* piVar4;
        uint64_t uVar5;
        unsigned long uVar7;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_80;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_60;
        unsigned int local_48;

        if (configProvider == nullptr) {
            LogAssert("configProvider",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DResources.cpp",
                      124, nullptr);
        }
        if (spriteAtlasManager == nullptr) {
            LogAssert("spriteAtlasManager",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DResources.cpp",
                      125, nullptr);
        }
        if (soundManager == nullptr) {
            LogAssert("soundManager",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DResources.cpp",
                      126, nullptr);
        }
        if ((field_2112 != nullptr) && (field_2112 != soundManager)) {
            LogAssert("!m_soundManager || (m_soundManager == soundManager)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DResources.cpp",
                      127, nullptr);
        }
        if (arg2 < arg1) {
            LogAssert("resourceFreeTimeSec <= cutsceneTimeSec",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DResources.cpp",
                      128, nullptr);
        }
        field_2112 = soundManager;
        if (m_subtitleDataSourceID != 65535) {
            this_01 = m_subtitleDataSource;
            cVar2 = this_01->operator_cast_to_bool();
            if (!cVar2) {
                enumType = configProvider->GetConfig<EnumType>((unsigned int)m_subtitleDataSourceID, nullptr);
                *this_01 = *enumType;
                cVar2 = this_01->operator_cast_to_bool();
                if (cVar2) {
                    if (((EnumType*)(*this_01).operator->())->GetOutputType() == ScriptVarType::STRING)
                        goto LAB_1005232f6;
                }
                LogAssert(
                    "m_subtitleDataSource && (m_subtitleDataSource->GetOutputType() == game::ScriptVarType::STRING)",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/iftype/"
                    "cutscenes/Cutscene2DResources.cpp",
                    135, nullptr);
            }
        }
    LAB_1005232f6:
        float local_44 = *(float*)PTR_m_preloadAdvanceSec_100ee6638 + arg2;
        auto local_88 = rbegin();
        local_80.end();
        cVar2 = local_88 != local_80;
        if (!cVar2) {
            uVar7 = 0;
        } else {
            uVar7 = 0;
            do {
                piVar4 = (int*)*local_88;
                this_00 = (shared_ptr*)(piVar4 + 6);
                cVar2 = shared_ptr::operator_cast_to_bool(this_00);
                if (!cVar2) {
                    if ((local_44 < (float)piVar4[2]) || ((float)piVar4[3] < arg2)) {
                        if (field_2106 == '\0') {
                            js5ResourceProvider->GroupPreloaded((unsigned int)Js5Archive::JS5_SPRITES,
                                                                (uint8_t)(*piVar4), (bool*)1);
                            uVar7 = (((uint64_t)((int64_t)((uVar7 & 18446744073709551361) >> 8)) << 8) |
                                     (uint8_t)((uint8_t)(uVar7 & 18446744073709551361) | *(uint8_t*)(piVar4 + 4)));
                        }
                    } else if (*PTR_m_disableResourceLoading_100ee6640 == '\0') {
                        local_48 = (unsigned int)uVar7;
                        iVar1 = *piVar4;
                        local_60 = shared_ptr();
                        local_78 = spriteAtlasManager->GetSpriteReference((long)iVar1 | 35184372088832, local_60, 1);
                        *this_00 = local_78;
                        cVar2 = shared_ptr::operator_cast_to_bool(this_00);
                        if (!cVar2) {
                            LogAssert("sprite.second.m_resource",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/config/iftype/cutscenes/Cutscene2DResources.cpp",
                                      177, nullptr);
                        }
                        ((GeometryBatch*)(*this_00).operator->())->SetShareLight(true);
                        *(uint8_t*)(piVar4 + 4) = 0;
                        uVar7 = (unsigned long)local_48;
                    }
                } else {
                    if ((char)piVar4[4] != '\0') {
                        LogAssert("!sprite.second.m_activeNetworkTransfer",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "config/iftype/cutscenes/Cutscene2DResources.cpp",
                                  152, nullptr);
                    }
                    if ((float)piVar4[3] <= arg1 && arg1 != (float)piVar4[3]) {
                        this_00->reset();
                    }
                }
                ++local_88;
                cVar2 = local_88 != local_80;
            } while (cVar2);
        }
        uint8_t bVar6 = (uint8_t)uVar7;
        auto local_78 = field_1608.rbegin();
        local_60.end();
        cVar2 = local_78 != local_60;
        if (cVar2) {
            do {
                piVar4 = (int*)*local_78;
                if (*(long*)(piVar4 + 6) == 0) {
                    if ((local_44 < (float)piVar4[2]) || ((float)piVar4[3] < arg2)) {
                        if (field_2106 == '\0') {
                            js5ResourceProvider->GroupPreloaded((unsigned int)Js5Archive::JS5_VORBIS,
                                                                (uint8_t)(*piVar4), (bool*)1);
                            uVar7 = (unsigned long)((uint8_t)uVar7 & 1 | *(uint8_t*)(piVar4 + 4));
                        }
                    } else if (*PTR_m_disableResourceLoading_100ee6640 == '\0') {
                        uVar5 = helpers::AcquireCutsceneAudio(this, field_2112, *piVar4);
                        *(uint64_t*)(piVar4 + 6) = uVar5;
                        *(uint8_t*)(piVar4 + 4) = 0;
                    }
                } else {
                    if ((char)piVar4[4] != '\0') {
                        LogAssert("!sound.second.m_activeNetworkTransfer",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "config/iftype/cutscenes/Cutscene2DResources.cpp",
                                  204, nullptr);
                    }
                    if ((float)piVar4[3] <= arg1 && arg1 != (float)piVar4[3]) {
                        (*(SoundInstance**)(piVar4 + 6))->FlagFinished();
                        (*(Layout**)(piVar4 + 6))->SetHeapSize(field_2112);
                        piVar4[6] = 0;
                        piVar4[7] = 0;
                    }
                }
                bVar6 = (uint8_t)uVar7;
                ++local_78;
                cVar2 = local_78 != local_60;
            } while (cVar2);
        }
        field_2106 = ~bVar6 & 1;
    }

    // 0x100523740
    unsigned int Cutscene2DResources::Ready(float arg1) const {
        bool cVar2;
        unsigned int uVar3;
        long lVar4;

        uint64_t local_40 = begin();
        uint64_t local_48 = end();
        uint8_t bVar1 = local_40 != local_48;
        if (bVar1 != 0) {
            lVar4 = *local_40;
            if (*(char*)(lVar4 + 16) == '\0') {
                do {
                    cVar2 = ((lVar4 + 24))->operator_cast_to_bool();
                    if (!cVar2) {
                        if (*(float*)(lVar4 + 8) <= arg1)
                            goto LAB_1005237fb;
                    } else {
                        cVar2 = ((SpriteAtlasReference*)(*((lVar4 + 24))).operator->())->IsReady();
                        if ((!cVar2) && (*(float*)(lVar4 + 8) <= arg1)) {
                        LAB_1005237fb:
                            if (arg1 < *(float*)(lVar4 + 12) || arg1 == *(float*)(lVar4 + 12))
                                break;
                        }
                    }
                    ++local_40;
                    bVar1 = local_40 != local_48;
                    if (bVar1 == 0)
                        goto LAB_10052383b;
                    lVar4 = *local_40;
                } while (*(char*)(lVar4 + 16) == '\0');
            }
            if ((bVar1 & 1) != 0) {
                uVar3 = 0;
                goto LAB_1005238f5;
            }
        }
    LAB_10052383b:
        local_40 = field_1608.begin();
        local_48 = field_1608.end();
        uVar3 = local_40 != local_48;
        if (((char)uVar3 != '\0') && (lVar4 = *local_40, *(char*)(lVar4 + 16) == '\0')) {
            do {
                if (*(SoundInstance**)(lVar4 + 24) == nullptr) {
                    if (*(float*)(lVar4 + 8) <= arg1)
                        goto LAB_1005238bb;
                } else {
                    cVar2 = (*(SoundInstance**)(lVar4 + 24))->IsLoading();
                    if ((cVar2) && (*(float*)(lVar4 + 8) <= arg1)) {
                    LAB_1005238bb:
                        if (arg1 < *(float*)(lVar4 + 12) || arg1 == *(float*)(lVar4 + 12))
                            break;
                    }
                }
                ++local_40;
                uVar3 = local_40 != local_48;
                if (((char)uVar3 == '\0') || (lVar4 = *local_40, *(char*)(lVar4 + 16) != '\0'))
                    break;
            } while (true);
        }
        uVar3 = uVar3 ^ 1;
    LAB_1005238f5:
        return uVar3 & 4294967041;
    }

    // 0x1005243d0
    void Cutscene2DResources::Reload() {
        long lVar2;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_38;

        if (field_2112 == nullptr) {
            LogAssert("m_soundManager",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DResources.cpp",
                      253, nullptr);
        }
        auto local_40 = rbegin();
        local_38.end();
        bool cVar1 = local_40 != local_38;
        if (cVar1) {
            do {
                lVar2 = *local_40;
                cVar1 = ((lVar2 + 24))->operator_cast_to_bool();
                if ((cVar1) && (*(float*)PTR_m_preloadAdvanceSec_100ee6638 < *(float*)(lVar2 + 8) ||
                                *(float*)PTR_m_preloadAdvanceSec_100ee6638 == *(float*)(lVar2 + 8))) {
                    ((lVar2 + 24))->reset();
                }
                ++local_40;
                cVar1 = local_40 != local_38;
            } while (cVar1);
        }
        local_40 = field_1608.rbegin();
        local_38.end();
        cVar1 = local_40 != local_38;
        if (cVar1) {
            do {
                lVar2 = *local_40;
                if (*(SoundInstance**)(lVar2 + 24) != nullptr) {
                    (*(SoundInstance**)(lVar2 + 24))->FlagFinished();
                    (*(Layout**)(lVar2 + 24))->SetHeapSize(field_2112);
                    *(uint64_t*)(lVar2 + 24) = 0;
                }
                ++local_40;
                cVar1 = local_40 != local_38;
            } while (cVar1);
        }
    }

    // 0x100524830
    void Cutscene2DResources::NotifyPaused(bool arg1) {
        SoundInstance* this_00;
        long lVar2;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_30;

        auto local_38 = field_1608.rbegin();
        local_30.end();
        bool cVar1 = local_38 != local_30;
        if (cVar1) {
            do {
                lVar2 = *local_38;
                this_00 = *(SoundInstance**)(lVar2 + 24);
                if (this_00 != nullptr) {
                    if (arg1) {
                        this_00->Pause();
                    } else {
                        this_00->Resume();
                    }
                }
                ++local_38;
                cVar1 = local_38 != local_30;
            } while (cVar1);
        }
    }

    // 0x100524aa0
    void Cutscene2DResources::Clear() {
        long lVar2;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_38;

        auto local_40 = field_1608.rbegin();
        local_38.end();
        bool cVar1 = local_40 != local_38;
        if (cVar1) {
            do {
                lVar2 = *local_40;
                if (*(SoundInstance**)(lVar2 + 24) != nullptr) {
                    (*(SoundInstance**)(lVar2 + 24))->FlagFinished();
                    (*(Layout**)(lVar2 + 24))->SetHeapSize(field_2112);
                }
                ++local_40;
                cVar1 = local_40 != local_38;
            } while (cVar1);
        }
        clear();
        field_1608.clear();
        m_subtitleDataSourceID = 65535;
        m_subtitleDataSource->reset();
        field_2106 = 0;
    }

    // 0x100524d10
    uint8_t* Cutscene2DResources::GetSprite(int arg1) const {
        long lVar2;
        uint8_t auVar3[16];

        auVar3 = equal_range_small(arg1);
        uint64_t local_38 = auVar3._8_8_;
        uint64_t local_28 = auVar3._0_8_;
        bool cVar1 = local_28 != local_38;
        if (cVar1) {
            do {
                lVar2 = *local_28;
                cVar1 = ((lVar2 + 24))->operator_cast_to_bool();
                if (cVar1) {
                    lVar2 = *local_28;
                    return (uint8_t*)(lVar2 + 24);
                }
                ++local_28;
                cVar1 = local_28 != local_38;
            } while (cVar1);
        }
        return &graphics::SpriteAtlasReference::NullSpriteAtlasReference;
    }

    // 0x100524e60
    uint64_t Cutscene2DResources::GetSound(int arg1, float arg2, float arg3) const {
        long lVar2;
        uint8_t auVar3[16];

        auVar3 = field_1608.equal_range_small(arg1);
        uint64_t local_40 = auVar3._8_8_;
        uint64_t local_28 = auVar3._0_8_;
        bool cVar1 = local_28 != local_40;
        if (cVar1) {
            do {
                lVar2 = *local_28;
                if (((*(long*)(lVar2 + 24) != 0) && (lVar2 = *local_28, arg2 == *(float*)(lVar2 + 8))) &&
                    (lVar2 = *local_28, arg3 == *(float*)(lVar2 + 12))) {
                    lVar2 = *local_28;
                    return *(uint64_t*)(lVar2 + 24);
                }
                ++local_28;
                cVar1 = local_28 != local_40;
            } while (cVar1);
        }
        return 0;
    }

} // namespace jag::game

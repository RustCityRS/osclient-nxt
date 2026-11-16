// libs/game/runetek5/config/iftype/cutscenes/Cutscene2DResources.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "Cutscene2DResources.h"

namespace jag::game {
    // 0x100f3c95c, 4 bytes, __data
    float Cutscene2DResources::m_preloadAdvanceSec = 2.5f;

    // 0x100f3c960, 4 bytes, __data
    Cutscene2DResources::m_disableResourceLoading = 0;

    // 0x1005231d0, 1392 bytes, placed by class name and debug map
    // Cutscene2DResources::Load(float, float, Js5ResourceProvider*, ConfigProvider*, graphics::SpriteAtlasManager*, SoundManager*)
    void Cutscene2DResources::Load(float param_1, float param_2, Js5ResourceProvider* param_3, ConfigProvider* param_4,
                                   SpriteAtlasManager* param_5, SoundManager* param_6) {
        undefined1* this_00;
        int iVar1;
        bool bVar2;
        shared_ptr* psVar3;
        EnumType* this_01;
        GeometryBatch* this_02;
        int* piVar5;
        undefined8 uVar6;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        byte bVar7;
        ulong uVar8;
        eastl local_88[8];
        hashtable_iterator_base local_80[8];
        shared_ptr local_78;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_60[16];
        uint local_48;
        float local_44;

        if (param_4 == (ConfigProvider*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("configProvider",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DResources.cpp",
                      124, (char*)0);
        }
        if (param_5 == (SpriteAtlasManager*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("spriteAtlasManager",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DResources.cpp",
                      125, (char*)0);
        }
        if (param_6 == (SoundManager*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("soundManager",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DResources.cpp",
                      126, (char*)0);
        }
        if ((field_2112 != (SoundManager*)0) && (field_2112 != param_6)) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_soundManager || (m_soundManager == soundManager)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DResources.cpp",
                      127, (char*)0);
        }
        if (param_2 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("resourceFreeTimeSec <= cutsceneTimeSec",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DResources.cpp",
                      128, (char*)0);
        }
        field_2112 = param_6;
        if (m_subtitleDataSourceID != 65535) {
            this_00 = m_subtitleDataSource;
            bVar2 = this_00->operator_cast_to_bool();
            if (!bVar2) {
                psVar3 = ConfigProvider::GetConfig<EnumType>(param_4, (uint)m_subtitleDataSourceID, (DataStatus**)0);
                shared_ptr<EnumType>::operator=((shared_ptr<EnumType>*)this_00, psVar3);
                bVar2 = this_00->operator_cast_to_bool();
                if (bVar2) {
                    this_01 = (EnumType*)shared_ptr<EnumType>::operator->((shared_ptr<EnumType>*)this_00);
                    if (this_01->GetOutputType() == ScriptVarType::STRING)
                        goto LAB_1005232f6;
                }
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "m_subtitleDataSource && (m_subtitleDataSource->GetOutputType() == game::ScriptVarType::STRING)",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/iftype/"
                    "cutscenes/Cutscene2DResources.cpp",
                    135, (char*)0);
            }
        }
    LAB_1005232f6:
        local_44 = *(float*)PTR_m_preloadAdvanceSec_100ee6638 + param_2;
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar2 = eastl::operator!=(local_88, local_80, extraout_RDX);
        if (bVar2) {
            uVar8 = 0;
            do {
                piVar5 = (int*)eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_88);
                psVar3 = (shared_ptr*)(piVar5 + 6);
                bVar2 = shared_ptr::operator_cast_to_bool(psVar3);
                if (bVar2) {
                    if ((char)piVar5[4] != '\0') {
                        /* WARNING: Subroutine does not return */
                        LogAssert("!sprite.second.m_activeNetworkTransfer",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "config/iftype/cutscenes/Cutscene2DResources.cpp",
                                  152, (char*)0);
                    }
                    if ((float)piVar5[3] <= param_1 && param_1 != (float)piVar5[3]) {
                        shared_ptr<graphics::SpriteAtlasReference>::reset();
                    }
                } else if ((local_44 < (float)piVar5[2]) || ((float)piVar5[3] < param_2)) {
                    if (((Cutscene2DResources*)this)->field_2106 == '\0') {
                        (*(code*)param_3->field_0[7])(param_3, Js5Archive::JS5_SPRITES, *piVar5, 1, piVar5 + 4);
                        uVar8 = CONCAT71((int7)((uVar8 & 18446744073709551361) >> 8),
                                         (byte)(uVar8 & 18446744073709551361) | *(byte*)(piVar5 + 4));
                    }
                } else if (*PTR_m_disableResourceLoading_100ee6640 == '\0') {
                    local_48 = (uint)uVar8;
                    iVar1 = *piVar5;
                    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(
                        local_60, (_func_decltype_nullptr*)0);
                    graphics::SpriteAtlasManager::GetSpriteReference(&local_78, param_5, (long)iVar1 | 35184372088832,
                                                                     local_60, 1);
                    shared_ptr<graphics::SpriteAtlasReference>::operator=(
                        (shared_ptr<graphics::SpriteAtlasReference>*)psVar3, &local_78);
                    local_78.~shared_ptr();
                    local_60->~shared_ptr();
                    bVar2 = shared_ptr::operator_cast_to_bool(psVar3);
                    if (!bVar2) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("sprite.second.m_resource",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "config/iftype/cutscenes/Cutscene2DResources.cpp",
                                  177, (char*)0);
                    }
                    this_02 = (GeometryBatch*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                        (shared_ptr<graphics::SpriteAtlasReference>*)psVar3);
                    this_02->SetShareLight(true);
                    *(undefined1*)(piVar5 + 4) = 0;
                    uVar8 = (ulong)local_48;
                }
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_88);
                bVar2 = eastl::operator!=(local_88, local_80, extraout_RDX_00);
            } while (bVar2);
        } else {
            uVar8 = 0;
        }
        bVar7 = (byte)uVar8;
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar2 = eastl::operator!=((eastl*)&local_78, (hashtable_iterator_base*)local_60, extraout_RDX_01);
        if (bVar2) {
            do {
                piVar5 = (int*)eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_78);
                if (*(long*)(piVar5 + 6) == 0) {
                    if ((local_44 < (float)piVar5[2]) || ((float)piVar5[3] < param_2)) {
                        if (((Cutscene2DResources*)this)->field_2106 == '\0') {
                            (*(code*)param_3->field_0[7])(param_3, Js5Archive::JS5_VORBIS, *piVar5, 1, piVar5 + 4);
                            uVar8 = (ulong)((byte)uVar8 & 1 | *(byte*)(piVar5 + 4));
                        }
                    } else if (*PTR_m_disableResourceLoading_100ee6640 == '\0') {
                        uVar6 = helpers::AcquireCutsceneAudio((Cutscene2DResources*)this,
                                                              ((Cutscene2DResources*)this)->field_2112, *piVar5);
                        *(undefined8*)(piVar5 + 6) = uVar6;
                        *(undefined1*)(piVar5 + 4) = 0;
                    }
                } else {
                    if ((char)piVar5[4] != '\0') {
                        /* WARNING: Subroutine does not return */
                        LogAssert("!sound.second.m_activeNetworkTransfer",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "config/iftype/cutscenes/Cutscene2DResources.cpp",
                                  204, (char*)0);
                    }
                    if ((float)piVar5[3] <= param_1 && param_1 != (float)piVar5[3]) {
                        (*(SoundInstance**)(piVar5 + 6))->FlagFinished();
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
                            SetHeapSize(*(Layout**)(piVar5 + 6), (ulong)((Cutscene2DResources*)this)->field_2112);
                        piVar5[6] = 0;
                        piVar5[7] = 0;
                    }
                }
                bVar7 = (byte)uVar8;
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_78);
                bVar2 = eastl::operator!=((eastl*)&local_78, (hashtable_iterator_base*)local_60, extraout_RDX_02);
            } while (bVar2);
        }
        ((Cutscene2DResources*)this)->field_2106 = ~bVar7 & 1;
    }

    // 0x100523740, 464 bytes, placed by class name and debug map
    // Cutscene2DResources::Ready(float) const
    ulong Cutscene2DResources::Ready(float param_1) {
        bool bVar1;
        char cVar3;
        long lVar4;
        SpriteAtlasReference* this_00;
        undefined7 extraout_var;
        undefined7 extraout_var_00;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        ulong uVar5;
        undefined1 auVar6[16];
        undefined8 local_48;
        undefined8 local_40;

        local_40 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                 eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                 true>::begin();
        auVar6 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        local_48 = auVar6._0_8_;
        bVar1 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_48, auVar6._8_8_);
        if (bVar1) {
            lVar4 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*((rbtree_iterator<
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                       eastl::pair<unsigned int const,
                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_40);
            bVar1 = true;
            if (*(char*)(lVar4 + 16) == '\0') {
                do {
                    if (((lVar4 + 24))->operator_cast_to_bool()) {
                        this_00 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                            (shared_ptr<graphics::SpriteAtlasReference>*)(lVar4 + 24));
                        cVar3 = this_00->IsReady();
                        if ((cVar3 == '\0') && (*(float*)(lVar4 + 8) <= param_1)) {
                        LAB_1005237fb:
                            if (param_1 < *(float*)(lVar4 + 12) || param_1 == *(float*)(lVar4 + 12))
                                break;
                        }
                    } else if (*(float*)(lVar4 + 8) <= param_1)
                        goto LAB_1005237fb;
                    eastl::rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                    operator++(
                        (rbtree_iterator<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                         eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe,
                                                                                       eastl::allocator>>&>*)&local_40);
                    bVar1 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_48, extraout_RDX);
                    if (!bVar1)
                        goto LAB_10052383b;
                    lVar4 = eastl::rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                    operator*(
                        (rbtree_iterator<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                         eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe,
                                                                                       eastl::allocator>>&>*)&local_40);
                } while (*(char*)(lVar4 + 16) == '\0');
            }
            if (bVar1 != false) {
                return 0;
            }
        }
    LAB_10052383b:
        local_40 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                 eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                 true>::begin();
        auVar6 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        local_48 = auVar6._0_8_;
        bVar1 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_48, auVar6._8_8_);
        uVar5 = CONCAT71(extraout_var, bVar1) & 4294967295;
        if ((bVar1) &&
            (lVar4 = eastl::rbtree_iterator<
                 eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                 eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                 eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
             operator*(
                 (rbtree_iterator<
                     eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                     eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                     eastl::pair<unsigned int const,
                                 eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_40),
             *(char*)(lVar4 + 16) == '\0')) {
            do {
                if (*(SoundInstance**)(lVar4 + 24) == (SoundInstance*)0) {
                    if (*(float*)(lVar4 + 8) <= param_1)
                        goto LAB_1005238bb;
                } else {
                    cVar3 = (*(SoundInstance**)(lVar4 + 24))->IsLoading();
                    if ((cVar3 != '\0') && (*(float*)(lVar4 + 8) <= param_1)) {
                    LAB_1005238bb:
                        if (param_1 < *(float*)(lVar4 + 12) || param_1 == *(float*)(lVar4 + 12))
                            break;
                    }
                }
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_40);
                bVar1 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_48, extraout_RDX_00);
                uVar5 = CONCAT71(extraout_var_00, bVar1) & 4294967295;
                if ((!bVar1) ||
                    (lVar4 = eastl::rbtree_iterator<
                         eastl::pair<unsigned int const,
                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                         eastl::pair<unsigned int const,
                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                         eastl::pair<unsigned int const,
                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                     operator*((
                         rbtree_iterator<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                         eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe,
                                                                                       eastl::allocator>>&>*)&local_40),
                     *(char*)(lVar4 + 16) != '\0'))
                    break;
            } while (true);
        }
        return uVar5 ^ 1;
    }

    // 0x1005243d0, 368 bytes, placed by class name
    // Cutscene2DResources::Reload()
    void Cutscene2DResources::Reload() {
        bool bVar1;
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        eastl local_40[8];
        hashtable_iterator_base local_38[8];

        if (field_2112 == (SoundManager*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_soundManager",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DResources.cpp",
                      253, (char*)0);
        }
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar1 = eastl::operator!=(local_40, local_38, extraout_RDX);
        if (bVar1) {
            do {
                lVar2 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_40);
                bVar1 = ((lVar2 + 24))->operator_cast_to_bool();
                if ((bVar1) && (*(float*)PTR_m_preloadAdvanceSec_100ee6638 < *(float*)(lVar2 + 8) ||
                                *(float*)PTR_m_preloadAdvanceSec_100ee6638 == *(float*)(lVar2 + 8))) {
                    shared_ptr<graphics::SpriteAtlasReference>::reset();
                }
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_40);
                bVar1 = eastl::operator!=(local_40, local_38, extraout_RDX_00);
            } while (bVar1);
        }
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar1 = eastl::operator!=(local_40, local_38, extraout_RDX_01);
        if (bVar1) {
            do {
                lVar2 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_40);
                if (*(SoundInstance**)(lVar2 + 24) != (SoundInstance*)0) {
                    (*(SoundInstance**)(lVar2 + 24))->FlagFinished();
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                        Layout::SetHeapSize(*(Layout**)(lVar2 + 24), (ulong)field_2112);
                    *(undefined8*)(lVar2 + 24) = 0;
                }
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_40);
                bVar1 = eastl::operator!=(local_40, local_38, extraout_RDX_02);
            } while (bVar1);
        }
    }

    // 0x100524830, 176 bytes, placed by class name
    // Cutscene2DResources::NotifyPaused(bool)
    void Cutscene2DResources::NotifyPaused(bool param_1) {
        SoundInstance* this_00;
        long lVar1;
        bool bVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_38[8];
        hashtable_iterator_base local_30[8];

        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar2 = eastl::operator!=(local_38, local_30, extraout_RDX);
        if (bVar2) {
            do {
                lVar1 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_38);
                this_00 = *(SoundInstance**)(lVar1 + 24);
                if (this_00 != (SoundInstance*)0) {
                    if (param_1) {
                        this_00->Pause();
                    } else {
                        this_00->Resume();
                    }
                }
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_38);
                bVar2 = eastl::operator!=(local_38, local_30, extraout_RDX_00);
            } while (bVar2);
        }
    }

    // 0x100524aa0, 224 bytes, placed by class name
    // Cutscene2DResources::Clear()
    void Cutscene2DResources::Clear() {
        bool bVar1;
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_40[8];
        hashtable_iterator_base local_38[8];

        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar1 = eastl::operator!=(local_40, local_38, extraout_RDX);
        if (bVar1) {
            do {
                lVar2 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_40);
                if (*(SoundInstance**)(lVar2 + 24) != (SoundInstance*)0) {
                    (*(SoundInstance**)(lVar2 + 24))->FlagFinished();
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                        Layout::SetHeapSize(*(Layout**)(lVar2 + 24), (ulong)field_2112);
                }
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_40);
                bVar1 = eastl::operator!=(local_40, local_38, extraout_RDX_00);
            } while (bVar1);
        }
        clear();
        (&field_1608)->clear();
        m_subtitleDataSourceID = 65535;
        shared_ptr<EnumType>::reset();
        field_2106 = 0;
    }

    // 0x100524d10, 160 bytes, placed by class name
    // Cutscene2DResources::GetSprite(int) const
    undefined1* Cutscene2DResources::GetSprite(int param_1) {
        bool bVar1;
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        undefined1 auVar3[16];
        hashtable_iterator_base* local_38;
        int local_2c;
        undefined8 local_28;

        local_2c = param_1;
        auVar3 = equal_range_small(&local_2c);
        local_38 = auVar3._8_8_;
        local_28 = auVar3._0_8_;
        bVar1 = eastl::operator!=((eastl*)&local_28, (hashtable_iterator_base*)&local_38, local_38);
        if (bVar1) {
            do {
                lVar2 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_28);
                bVar1 = ((lVar2 + 24))->operator_cast_to_bool();
                if (bVar1) {
                    lVar2 = eastl::rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                    operator*(
                        (rbtree_iterator<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                         eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe,
                                                                                       eastl::allocator>>&>*)&local_28);
                    return (undefined1*)(lVar2 + 24);
                }
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_28);
                bVar1 = eastl::operator!=((eastl*)&local_28, (hashtable_iterator_base*)&local_38, extraout_RDX);
            } while (bVar1);
        }
        return &graphics::SpriteAtlasReference::NullSpriteAtlasReference;
    }

    // 0x100524e60, 208 bytes, placed by class name
    // Cutscene2DResources::GetSound(int, float, float) const
    undefined8 Cutscene2DResources::GetSound(int param_1, float param_2, float param_3) {
        bool bVar1;
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        undefined1 auVar3[16];
        hashtable_iterator_base* local_40;
        int local_34;
        undefined8 local_28;

        local_34 = param_1;
        auVar3 = (&field_1608, &local_34)->equal_range_small();
        local_40 = auVar3._8_8_;
        local_28 = auVar3._0_8_;
        bVar1 = eastl::operator!=((eastl*)&local_28, (hashtable_iterator_base*)&local_40, local_40);
        if (bVar1) {
            do {
                lVar2 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_28);
                if (((*(long*)(lVar2 + 24) != 0) &&
                     (lVar2 = eastl::rbtree_iterator<
                          eastl::pair<unsigned int const,
                                      eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                          eastl::pair<unsigned int const,
                                      eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                          eastl::pair<unsigned int const,
                                      eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                      operator*(
                          (rbtree_iterator<
                              eastl::pair<unsigned int const,
                                          eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                              eastl::pair<unsigned int const,
                                          eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                              eastl::pair<unsigned int const,
                                          eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_28),
                      param_2 == *(float*)(lVar2 + 8))) &&
                    (lVar2 = eastl::rbtree_iterator<
                         eastl::pair<unsigned int const,
                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                         eastl::pair<unsigned int const,
                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                         eastl::pair<unsigned int const,
                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                     operator*((
                         rbtree_iterator<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                         eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe,
                                                                                       eastl::allocator>>&>*)&local_28),
                     param_3 == *(float*)(lVar2 + 12))) {
                    lVar2 = eastl::rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                    operator*(
                        (rbtree_iterator<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                         eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe,
                                                                                       eastl::allocator>>&>*)&local_28);
                    return *(undefined8*)(lVar2 + 24);
                }
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_28);
                bVar1 = eastl::operator!=((eastl*)&local_28, (hashtable_iterator_base*)&local_40, extraout_RDX);
            } while (bVar1);
        }
        return 0;
    }

} // namespace jag::game

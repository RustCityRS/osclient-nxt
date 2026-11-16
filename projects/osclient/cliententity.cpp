// projects/osclient/cliententity.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "cliententity.h"
#include "libs/ui/components/Component.h"

namespace jag::oldscape {
    // 0x100029ea0: ClientEntity::IsClientNPC() has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: ClientEntity::IsClientLocAnim() const has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: ClientEntity::IsLit() const has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: ClientEntity::IsUnlit() const has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x1000b75d0
    uint32_t ClientEntity::GetScriptedOverlayIndex(int arg1) {
        long lVar3;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_38;

        auto local_30 = field_568.find(arg1);
        local_38.end();
        bool cVar1 = local_30 != local_38;
        uint32_t uVar2 = 4294967295;
        if (cVar1) {
            lVar3 = *local_30;
            uVar2 = *(uint32_t*)(lVar3 + 8);
        }
        return uVar2;
    }

    // 0x1000b7640
    void ClientEntity::SetScriptedOverlay(int arg1, int arg2) {
        int local_14;

        long* plVar1 = &field_568[local_14];
        *plVar1 = (long)arg2;
    }

    // 0x1000b7770
    void ClientEntity::RemoveScriptedOverlay(int arg1) {
        field_568.erase(arg1);
    }

    // 0x1000f87b0
    void ClientEntity::AbortRoute() {
        field_440 = 0;
        *(uint32_t*)((long)&field_536 + 4) = 0;
    }

    // 0x1000f9460
    void ClientEntity::ClearPendingFacing() {
        field_352 = 0;
        field_336 = 4294967295;
        field_340.Unset();
    }

    // 0x10010d270
    auto ClientEntity::GetScriptedOverlays() {
        long lVar2;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_38;

        auto result;
        result.reserve(field_568.capacity());
        auto local_40 = field_568.rbegin();
        local_38.end();
        while (true) {
            if (local_40 != local_38 == '\0')
                break;
            lVar2 = *local_40;
            result.push_back(*(unsigned long*)(lVar2 + 8));
            ++local_40;
        }
        return result;
    }

    // 0x100110fa0
    unsigned long ClientEntity::HasHitmark(int arg1) const {
        unsigned long arg1_00;
        uint64_t unaff_R12;

        int* piVar1 = (int*)(*field_244)[0];
        unsigned long uVar2 = (((uint64_t)((int64_t)((unsigned long)unaff_R12 >> 8)) << 8) | (uint8_t)1);
        if (*piVar1 <= arg1) {
            arg1_00 = 1;
            do {
                uVar2 = (((uint64_t)((int64_t)(uVar2 >> 8)) << 8) | (uint8_t)(arg1_00 - 1 < 3));
                if (arg1_00 == 4)
                    break;
                piVar1 = (int*)(*field_244)[arg1_00];
                arg1_00 = arg1_00 + 1;
            } while (*piVar1 <= arg1);
        }
        return uVar2 & 4294967295;
    }

    // 0x100113d30
    void ClientEntity::AddSpotAnim(int arg1, int arg2, int arg3, int arg4, int arg5) {
        uint64_t* puVar1;
        SpotAnimClient local_28;

        local_28._20_4_ = arg1;
        if ((arg2 == 65535) || (arg2 == -1)) {
            eastl::vector_map<int, SpotAnimClient>::erase(m_spotAnims);
        } else {
            local_28 = SpotAnimClient(arg2, arg3, arg5 + arg4, -(unsigned int)(0 < arg4));
            puVar1 = &m_spotAnims[local_28.field_20];
            *puVar1 = local_28._0_8_;
            puVar1[1] = local_28._8_8_;
            *(int*)(puVar1 + 2) = local_28.field_16;
        }
    }

    // 0x100119fe0
    void ClientEntity::AddHitmark(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
        int* piVar1;
        long lVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        uint32_t in_register_0000003c;
        int iVar8;
        bool cVar11;
        unsigned int uVar12;
        int in_stack_00000008;
        ReturnValue local_78;

        long local_38 = (((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        array<int, 4ul>* paVar7 = (array<int, 4ul>*)(local_38 + 244);
        bool bVar13 = true;
        unsigned long uVar6 = 0;
        bool bVar10 = true;
        do {
            piVar1 = (int*)(*paVar7)[uVar6];
            iVar5 = arg6;
            if (*piVar1 <= arg6) {
                bVar10 = false;
            }
            if (arg6 < *piVar1) {
                bVar13 = false;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 != 4);
        array<int, 4ul>* local_50 = paVar7;
        if (arg2 < 0) {
            iVar3 = 0;
            iVar8 = -1;
        } else {
            local_78 = configdecoder::HitmarkType::List(arg2);
            lVar2 = local_78.operator->();
            iVar8 = *(int*)(lVar2 + 80);
            lVar2 = local_78.operator->();
            iVar3 = *(int*)(lVar2 + 12);
        }
        int local_54 = iVar3;
        if (!bVar10) {
            if (bVar13) {
                *(uint8_t*)(local_38 + 208) = 0;
            }
            uVar12 = (unsigned int)*(uint8_t*)(local_38 + 208);
            iVar8 = 3;
            do {
                cVar11 = (char)uVar12;
                iVar4 = (int)cVar11;
                uVar12 = iVar4 + 4;
                if (-1 < (int)(iVar4 + 1U)) {
                    uVar12 = iVar4 + 1U;
                }
                uVar12 = (iVar4 - (uVar12 & 252)) + 1;
                piVar1 = (int*)(*local_50)[(long)cVar11];
                bVar13 = iVar8 != 0;
                iVar8 = iVar8 - 1;
            } while ((iVar5 < *piVar1) && (iVar4 = -1, bVar13));
            *(char*)(local_38 + 208) = (char)uVar12;
            goto LAB_10011a11b;
        }
        if (iVar8 == -1) {
            return;
        }
        paVar7 = local_50;
        if (iVar8 == 0) {
        LAB_10011a1c0:
            piVar1 = (int*)(*paVar7)[0];
            iVar3 = *piVar1;
        } else {
            iVar3 = 0;
            if (iVar8 == 1) {
                paVar7 = (array<int, 4ul>*)(local_38 + 228);
                goto LAB_10011a1c0;
            }
        }
        array<int, 4ul>* local_68 = (array<int, 4ul>*)(local_38 + 228);
        iVar4 = 0;
        uVar6 = 1;
        int iVar9 = iVar4;
        do {
            if (iVar8 == 0) {
                paVar7 = local_50;
            LAB_10011a1f4:
                piVar1 = (int*)(*paVar7)[uVar6];
                iVar4 = iVar9;
                if (*piVar1 < iVar3) {
                    iVar4 = (int)uVar6;
                    iVar3 = *piVar1;
                    iVar9 = (int)uVar6;
                }
            } else if (iVar8 == 1) {
                paVar7 = local_68;
                goto LAB_10011a1f4;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 != 4);
        if ((iVar8 == 1) && (arg3 <= iVar3)) {
            return;
        }
    LAB_10011a11b:
        lVar2 = local_38;
        if (-1 < iVar4) {
            uVar6 = (unsigned long)iVar4;
            piVar1 = (int*)(*((local_38 + 212)))[uVar6];
            *piVar1 = arg2;
            piVar1 = (int*)(*((lVar2 + 228)))[uVar6];
            *piVar1 = arg3;
            piVar1 = (int*)(*((lVar2 + 260)))[uVar6];
            *piVar1 = arg4;
            piVar1 = (int*)(*((lVar2 + 276)))[uVar6];
            *piVar1 = arg5;
            iVar5 = in_stack_00000008 + iVar5 + local_54;
            piVar1 = (int*)(*local_50)[uVar6];
            *piVar1 = iVar5;
        }
    }

    // 0x10011a260
    void ClientEntity::AddHeadbar(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
        int iVar1;
        int iVar2;
        int iVar3;
        bool cVar4;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this;
        HeadbarQueue* pHVar6;
        int* piVar7;
        uint32_t in_register_0000003c;
        int in_stack_00000008;
        ListIterator<shared_ptr<configdecoder::HeadbarQueue>, shared_ptr<configdecoder::HeadbarQueue> const*,
                     shared_ptr<configdecoder::HeadbarQueue> const&>* local_a0;
        ListIterator<shared_ptr<rs2lib::worldmap::MapElement>, shared_ptr<rs2lib::worldmap::MapElement> const*,
                     shared_ptr<rs2lib::worldmap::MapElement> const&>* local_98;
        ReturnValue local_70;
        unsigned int local_64;
        ReturnValue local_50;

        auto local_88 = configdecoder::HeadbarType::List((long)arg2);
        list<console::Line>* plVar9 =
            (list<console::Line>*)((((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1) + 296);
        auto local_60 = plVar9->end();
        auto local_58 = plVar9->end();
        long lVar5 = local_88.operator->();
        int local_40 = *(int*)(lVar5 + 12);
        auto local_78 = plVar9->begin();
        int local_34 = arg5 + arg3;
        unsigned int uVar8 = 0;
        list<console::Line>* local_90 = plVar9;
        do {
            plVar9 = local_90;
            local_50 = local_90->end();
            cVar4 = local_78 != local_50;
            if (!cVar4) {
                local_50 = plVar9->end();
                cVar4 = local_58 == local_50;
                if ((!cVar4) || (uVar8 < 4)) {
                    make_shared<configdecoder::HeadbarQueue, shared_ptr<configdecoder::HeadbarType>&>(&local_50,
                                                                                                      &local_88);
                    local_70 = plVar9->end();
                    cVar4 = local_60 == local_70;
                    if (!cVar4) {
                        new (&local_a0) eastl::ListIterator(&local_60);
                        local_70 = plVar9->insert(local_a0, local_50);
                    } else {
                        plVar9->push_front(local_50);
                    }
                    iVar1 = local_34;
                    pHVar6 = (HeadbarQueue*)local_50.operator->();
                    pHVar6->EventAdd(iVar1, arg6, in_stack_00000008, arg4);
                    if (3 < uVar8) {
                        new (&local_98) eastl::ListIterator(&local_58);
                        eastl::list<shared_ptr<ClientObj>>::erase(&local_70, (list<shared_ptr<ClientObj>>*)plVar9,
                                                                  local_98);
                    }
                }
                break;
            }
            local_64 = uVar8;
            this = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)*local_78;
            pHVar6 = (HeadbarQueue*)end();
            piVar7 = (int*)local_88.operator->();
            iVar1 = *piVar7;
            piVar7 = (int*)(*pHVar6).operator->();
            iVar2 = *piVar7;
            if (iVar1 == iVar2) {
                pHVar6->EventAdd(local_34, arg6, in_stack_00000008, arg4);
            } else {
                lVar5 = (*pHVar6).operator->();
                iVar3 = *(int*)(lVar5 + 8);
                lVar5 = local_88.operator->();
                if (iVar3 <= *(int*)(lVar5 + 8)) {
                    local_60 = local_78;
                }
                lVar5 = (*pHVar6).operator->();
                if (local_40 < *(int*)(lVar5 + 12)) {
                    local_58 = local_78;
                    lVar5 = (*pHVar6).operator->();
                    local_40 = *(int*)(lVar5 + 12);
                }
                ++local_78;
            }
            uVar8 = local_64 + 1;
        } while (iVar1 != iVar2);
    }

    // 0x10011a4f0
    void ClientEntity::ClearHeadbar(int arg1) {

        auto local_28 = configdecoder::HeadbarType::List((long)arg1);
        (&field_296)->remove_if<ClientEntity::ClearHeadbar(int)::__23>(&local_28);
    }

    // 0x10011c0d0
    uint64_t ClientEntity::Ready() const {
        return 0;
    }

    // 0x10011c880
    void ClientEntity::CombineWithSpotAnim(shared_ptr<dash3d::ModelLit>& modelLit) {
        ModelAppender local_e8;
        ReturnValue local_c8;
        SpotAnimAppendList local_b8;

        if (m_spotAnims.size() != 0) {
            local_b8 = SpotAnimAppendList(m_spotAnims);
            local_e8 = dash3d::ModelAppender(modelLit, local_b8);
            local_c8 = local_e8.Resolve();
            modelLit = local_c8;
        }
    }

    // 0x100c92b50: ClientEntity::~ClientEntity() has the same machine code as InlineFatalBreak()

} // namespace jag::oldscape

namespace jag::ui {
    // 0x1000b7680: ComponentSwipeConfig::GetDeadZoneVertical() const has the same machine code as oldscape::LocInfo::GetLevel() const

    // 0x1000b7690: ComponentSwipeConfig::GetDeadZoneHorizontal() const has the same machine code as oldscape::LocInfo::GetX() const

    // 0x1000b76a0: ComponentSwipeConfig::GetDirectionMask() const has the same machine code as oldscape::LocInfo::GetZ() const

    // 0x1000b76f0: ComponentSwipeConfig::GetStopExponent() const has the same machine code as oldscape::LocInfo::GetLayer() const

} // namespace jag::ui

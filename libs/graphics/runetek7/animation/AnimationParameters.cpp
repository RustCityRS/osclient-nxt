// libs/graphics/runetek7/animation/AnimationParameters.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "AnimationParameters.h"

namespace jag::graphics {
    // 0x1000dc670: AnimationParameters::GetLoopsCompleted() const has the same machine code as oldscape::javapal::GameShell::GetMinimumCanvasHeight() const

    // 0x10012f260: AnimationParameters::GetDelay() const has the same machine code as oldscape::social::OnlinePlayerData<oldscape::social::FriendChatUser>::GetWorldId() const

    // 0x10015dc30: AnimationParameters::GetCurrentIndex() const has the same machine code as oldscape::auth::AuthLibWrapper::GetPurchaseShopItemStatus()

    // 0x1001cd990: AnimationParameters::GetAnimation() const has the same machine code as PointLightIndicesEffect::GetVisiblePointLights()

    // 0x1003cbc60: AnimationParameters::GetLoopLength() const has the same machine code as game::MapArea::GetBackgroundRGBA() const

    // 0x1003cf280: AnimationParameters::GetAnimationLength() const has the same machine code as game::MapElementType::GetTextBackgroundFillRGBA() const

    // 0x1003f9260: AnimationParameters::GetPaused() const has the same machine code as game::EffectAnimType::CastsShadows() const

    // 0x100410520: AnimationParameters::GetLoopBehaviour() const has the same machine code as game::ChangeLocationRequest::GetSourceLogicTick() const

    // 0x1004af330: AnimationParameters::GetTweenLastFrameToFirst() const has the same machine code as game::MapArea::ShouldAutoFind() const

    // 0x100869a60: AnimationParameters::GetLastUpdateTimeNS() const has the same machine code as Material::GetAlphaMode() const

    // 0x100869a70: AnimationParameters::GetStartTimeNS() const has the same machine code as Material::GetBlendMode() const

    // 0x1009897c0
    AnimationParameters::AnimationParameters(const shared_ptr<Animation>& animation,
                                             AnimationLoopBehaviour animationLoopBehaviour, unsigned int arg3,
                                             unsigned int arg4, bool arg5, int arg6, unsigned int arg7, bool arg8)
        : MakeUniquePool<AnimationParameters, 512>(), math::Vector2T() {
        int iVar4;
        int iVar5;
        Animation* pAVar8;
        Logger* pLVar9;
        Array<unsigned int>* pAVar10;
        int* piVar11;
        shared_ptr* this_03;
        long lVar12;
        unsigned long arg1;

        uint8_t* this_00 = &field_96;
        new (this_00) shared_ptr(animation);
        m_loopBehaviour = animationLoopBehaviour;
        m_loopLength = arg6;
        m_tweenLastFrameToFirst = arg8;
        m_loopsCompleted = 0;
        field_128 = arg7;
        m_finished = 0;
        m_delay = arg3;
        unsigned int uVar3 = ((WorldmapAreaMetadata*)animation.operator->())->GetMaxMapZ();
        m_animationLength = uVar3;
        field_144 = arg4;
        field_148 = arg4;
        m_currentIndex = 0;
        field_156 = 1;
        field_160 = arg5;
        m_startTimeNS = 0;
        m_lastUpdateTimeNS = 0;
        m_paused = 0;
        NXTRenderCanvas* pNVar6 = (NXTRenderCanvas*)(*this_00).operator->();
        auto objType = pNVar6->GetPixelBuffer();
        if ((!*objType == nullptr) && (m_animationLength == 4294967295)) {
            LogAssert("m_animation->GetAnimKeyFrameSet() == nullptr ? true : m_animationLength != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/AnimationParameters.cpp",
                      36, nullptr);
        }
        unsigned long uVar7 = ((Layout*)objType->Instance())->HeapBeginPtr();
        m_startTimeNS = uVar7;
        if (field_160 != false) {
            pAVar8 = (Animation*)(*this_00).operator->();
            iVar4 = pAVar8->GetFrameCount();
            uVar3 = math::Rand(iVar4 - 1);
            m_currentIndex = uVar3;
            if (uVar3 == 0) {
                iVar4 = 0;
            } else {
                arg1 = 0;
                iVar4 = 0;
                do {
                    pLVar9 = (Logger*)(*this_00).operator->();
                    pAVar10 = (Array<unsigned int>*)pLVar9->GetLogStreams();
                    piVar11 = (int*)(*pAVar10)[arg1];
                    iVar4 = iVar4 + *piVar11;
                    arg1 = arg1 + 1;
                } while (arg1 < m_currentIndex);
            }
            pNVar6 = (NXTRenderCanvas*)animation.operator->();
            this_03 = (shared_ptr*)pNVar6->GetPixelBuffer();
            if (shared_ptr::operator_cast_to_bool(this_03) == '\0') {
                pLVar9 = (Logger*)(*this_00).operator->();
                pAVar10 = (Array<unsigned int>*)pLVar9->GetLogStreams();
                piVar11 = (int*)(*pAVar10)[(unsigned long)m_currentIndex];
                iVar5 = math::Rand(*piVar11);
                field_144 = field_144 + iVar5;
                iVar4 = iVar4 + iVar5;
            }
            pAVar8 = (Animation*)(*this_00).operator->();
            lVar12 = pAVar8->GetAnimationSampleIntervalNS();
            m_startTimeNS = m_startTimeNS - lVar12 * iVar4;
        }
        m_lastUpdateTimeNS = uVar7;
        unsigned int uVar13 = m_currentIndex + 1;
        field_156 = uVar13;
        pAVar8 = (Animation*)(*this_00).operator->();
        uVar3 = pAVar8->GetFrameCount();
        if (uVar3 <= uVar13) {
            field_156 = m_currentIndex;
        }
    }

    // 0x100989b70
    void AnimationParameters::Reset(unsigned int arg1, unsigned int arg2) {
        unsigned int uVar1;
        unsigned int uVar2;
        Animation* pAVar3;
        long lVar4;
        unsigned long uVar6;

        if (field_160 == false) {
            m_currentIndex = 0;
            pAVar3 = (Animation*)field_96.operator->();
            uVar2 = pAVar3->GetFrameCount();
            field_156 = (unsigned int)(1 < uVar2);
            field_144 = arg1;
            field_148 = arg1;
            pAVar3 = (Animation*)field_96.operator->();
            lVar4 = pAVar3->GetAnimationSampleIntervalNS();
            uVar6 = ((Layout*)pAVar3->Instance())->HeapBeginPtr() + lVar4 * (unsigned long)arg2;
            m_startTimeNS = uVar6;
            m_lastUpdateTimeNS = uVar6;
        } else {
            field_160 = false;
            uVar2 = m_currentIndex;
            pAVar3 = (Animation*)field_96.operator->();
            uVar1 = pAVar3->GetFrameCount();
            if (uVar2 == uVar1) {
                m_currentIndex = m_currentIndex - 1;
            }
        }
        m_loopsCompleted = 0;
        m_finished = 0;
        m_delay = arg2;
    }

    // 0x100989c60
    void AnimationParameters::SetDelayResumeAtTime(unsigned int arg1) {
        unsigned int uVar4 = arg1 - field_144;
        m_delay = uVar4;
        auto this_00 = field_96.operator->();
        long lVar1 = this_00->GetAnimationSampleIntervalNS();
        auto pLVar2 = this_00->Instance();
        m_startTimeNS = pLVar2->HeapBeginPtr() + lVar1 * (unsigned long)uVar4;
        pLVar2 = (Layout*)pLVar2->Instance();
        lVar1 = pLVar2->HeapBeginPtr();
        m_lastUpdateTimeNS = lVar1;
    }

    // 0x100989cd0
    void AnimationParameters::ResetToTime(unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4) {
        unsigned int uVar3;
        unsigned int uVar4;
        unsigned int uVar5;
        Logger* this_03;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        unsigned long uVar8;
        unsigned int* puVar9;
        int* piVar10;
        Layout* pLVar11;
        long lVar12;
        int iVar14;
        unsigned int uVar16;

        m_loopsCompleted = arg3;
        m_finished = 0;
        m_currentIndex = 0;
        unsigned long uVar13 = (unsigned long)(arg4 - arg2);
        if (arg4 < arg2) {
            uVar13 = 0;
        }
        m_delay = (unsigned int)uVar13;
        unsigned int uVar15 = arg2 - arg4;
        if (arg2 < arg4) {
            uVar15 = 0;
        }
        uint8_t* this_00 = &field_96;
        Animation* pAVar6 = (Animation*)(*this_00).operator->();
        long lVar7 = pAVar6->GetAnimationSampleIntervalNS();
        NXTRenderCanvas* this_01 = (NXTRenderCanvas*)(*this_00).operator->();
        auto this_02 = this_01->GetPixelBuffer();
        if (shared_ptr::operator_cast_to_bool(this_02) == '\0') {
            this_03 = (Logger*)(*this_00).operator->();
            this_04 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_03->GetLogStreams();
            uVar5 = m_currentIndex;
            uVar8 = this_04->end();
            iVar14 = 0;
            while (true) {
                if ((uVar8 <= uVar5) ||
                    (puVar9 = (unsigned int*)(*this_04)[(unsigned long)m_currentIndex], uVar15 <= *puVar9))
                    goto LAB_100989f75;
                piVar10 = (int*)(*this_04)[(unsigned long)m_currentIndex];
                uVar15 = uVar15 - *piVar10;
                piVar10 = (int*)(*this_04)[(unsigned long)m_currentIndex];
                iVar14 = iVar14 + *piVar10;
                uVar3 = m_currentIndex + 1;
                m_currentIndex = uVar3;
                pAVar6 = (Animation*)(*this_00).operator->();
                uVar5 = pAVar6->GetFrameCount();
                if (uVar5 <= uVar3)
                    break;
            LAB_100989ea0:
                uVar5 = m_currentIndex;
                uVar8 = this_04->end();
            }
            if (((m_loopLength != 4294967295) && (m_loopBehaviour != 2)) &&
                (m_currentIndex = m_currentIndex - m_loopLength, m_loopBehaviour == 0)) {
                m_loopsCompleted = m_loopsCompleted + 1;
            }
            if (m_loopsCompleted < field_128) {
                uVar5 = m_currentIndex;
                pAVar6 = (Animation*)(*this_00).operator->();
                uVar3 = pAVar6->GetFrameCount();
                if (uVar5 < uVar3)
                    goto LAB_100989ea0;
            }
            m_finished = 1;
        LAB_100989f75:
            SetNextFrame();
            pLVar11 = (Layout*)Instance();
            lVar12 = pLVar11->HeapBeginPtr();
            m_startTimeNS = lVar7 * uVar13 + lVar12 + (unsigned long)(iVar14 + uVar15) * -20000000;
            m_lastUpdateTimeNS = lVar12;
            field_144 = arg1 - uVar15;
            field_148 = arg1 - uVar15;
            return;
        }
        uVar3 = GetPreLoopLength();
        m_currentIndex = uVar15;
        uVar5 = m_loopLength;
        if (((uVar5 != 4294967295) && (m_loopBehaviour != 2)) && ((int)uVar3 <= (int)uVar15)) {
            m_currentIndex = uVar3;
            if (m_loopBehaviour == 0) {
                m_loopsCompleted = m_loopsCompleted + (int)(uVar15 - uVar3) / (int)uVar5;
            }
            m_currentIndex = (int)(uVar15 - uVar3) % (int)uVar5 + uVar3;
        }
        if (m_loopsCompleted < field_128) {
            uVar5 = m_currentIndex;
            pAVar6 = (Animation*)(*this_00).operator->();
            uVar4 = pAVar6->GetFrameCount();
            if (uVar5 < uVar4)
                goto LAB_100989dd8;
        }
        m_finished = 1;
    LAB_100989dd8:
        field_144 = arg1;
        field_148 = arg1;
        if (m_animationLength == 4294967295) {
            LogAssert("m_animationLength != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/AnimationParameters.cpp",
                      175, nullptr);
        }
        AnimationLoopBehaviour AVar1 = m_loopBehaviour;
        uVar5 = m_animationLength;
        if ((AVar1 == 2) || (uVar4 = uVar5, m_loopLength != 4294967295)) {
            uVar4 = m_loopLength;
        }
        if ((AVar1 != 2) && (uVar5 < uVar15)) {
            uVar16 = uVar15 - uVar3;
            if ((AVar1 != 0) || (uVar15 = uVar5, uVar16 / uVar4 <= field_128)) {
                uVar15 = uVar16 % uVar4 + uVar3;
            }
        }
        pLVar11 = (Layout*)((Singleton<AnimationManager>*)(unsigned long)uVar3)->Instance();
        lVar12 = pLVar11->HeapBeginPtr();
        m_startTimeNS = lVar7 * uVar13 + lVar12 + (unsigned long)uVar15 * -20000000;
        m_lastUpdateTimeNS = lVar12;
    }

    // 0x10098a000
    unsigned int AnimationParameters::GetPreLoopLength() const {
        uint8_t* this_00;
        bool cVar1;
        int iVar2;
        unsigned int uVar3;
        NXTRenderCanvas* this_01;
        Animation* pAVar4;
        Array<unsigned int>* this_03;
        int* piVar5;
        unsigned long arg1;
        unsigned int uVar6;

        if (m_loopLength == 4294967295) {
            uVar6 = m_animationLength;
        } else {
            this_00 = &field_96;
            this_01 = (NXTRenderCanvas*)(*this_00).operator->();
            cVar1 = (this_01->GetPixelBuffer())->operator_cast_to_bool();
            pAVar4 = (Animation*)(*this_00).operator->();
            if (!cVar1) {
                this_03 = (Array<unsigned int>*)pAVar4->GetLogStreams();
                pAVar4 = (Animation*)(*this_00).operator->();
                iVar2 = pAVar4->GetFrameCount();
                uVar3 = iVar2 - m_loopLength;
                if (uVar3 == 0) {
                    uVar6 = 0;
                } else {
                    arg1 = 0;
                    uVar6 = 0;
                    do {
                        piVar5 = (int*)(*this_03)[arg1];
                        uVar6 = uVar6 + *piVar5;
                        arg1 = arg1 + 1;
                    } while (uVar3 != arg1);
                }
            } else {
                iVar2 = pAVar4->GetFrameCount();
                uVar6 = iVar2 - m_loopLength;
            }
        }
        return uVar6;
    }

    // 0x10098a0b0
    void AnimationParameters::SetNextFrame() {
        unsigned int uVar3 = m_currentIndex + 1;
        field_156 = uVar3;
        auto pAVar2 = field_96.operator->();
        unsigned int uVar1 = pAVar2->GetFrameCount();
        if (uVar1 <= uVar3) {
            if ((m_loopLength != 4294967295) || (uVar1 = 0, m_tweenLastFrameToFirst == false)) {
                uVar1 = field_156 - m_loopLength;
            }
            field_156 = uVar1;
            pAVar2 = (Animation*)field_96.operator->();
            uVar3 = pAVar2->GetFrameCount();
            if (uVar3 <= uVar1) {
                field_156 = m_currentIndex;
            }
        }
    }

    // 0x10098a140
    unsigned int AnimationParameters::GetTicksThroughAnimation() const {
        unsigned int uVar3;
        Logger* this_02;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_03;
        unsigned long uVar4;
        int* piVar5;
        unsigned long arg1;
        int iVar6;

        auto this_00 = field_96.operator->();
        auto this_01 = this_00->GetPixelBuffer();
        if (shared_ptr::operator_cast_to_bool(this_01) == '\0') {
            this_02 = (Logger*)field_96.operator->();
            this_03 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_02->GetLogStreams();
            if (m_currentIndex == 0) {
                iVar6 = 0;
            } else {
                arg1 = 0;
                iVar6 = 0;
                do {
                    uVar4 = this_03->end();
                    if (arg1 < uVar4) {
                        piVar5 = (int*)(*this_03)[arg1];
                        iVar6 = iVar6 + *piVar5;
                    }
                    arg1 = arg1 + 1;
                } while (arg1 < m_currentIndex);
            }
            uVar3 = GetTicksThroughFrame() + iVar6;
        } else {
            uVar3 = m_currentIndex;
        }
        return uVar3;
    }

    // 0x10098a210
    void AnimationParameters::Update(unsigned int arg1) {
        uint8_t* this_00;
        int iVar2;
        unsigned int uVar3;
        long lVar4;
        NXTRenderCanvas* this_02;
        Logger* this_04;
        Array<unsigned int>* this_05;
        Animation* pAVar5;
        unsigned int* puVar6;
        int* piVar7;
        unsigned int uVar8;
        unsigned long arg1_00;
        unsigned int uVar9;
        unsigned int uVar10;
        double dVar11;

        if ((field_148 != arg1) && (m_finished == '\0')) {
            lVar4 = ((Layout*)Instance())->HeapBeginPtr();
            if ((m_paused == '\0') || (m_delay != 0)) {
                m_lastUpdateTimeNS = lVar4;
                this_00 = &field_96;
                this_02 = (NXTRenderCanvas*)(*this_00).operator->();
                if (!((this_02->GetPixelBuffer())->operator_cast_to_bool())) {
                    field_148 = arg1;
                    uVar10 = arg1 - field_144;
                    uVar3 = m_delay;
                    if (uVar3 != 0) {
                        if (uVar10 <= uVar3) {
                            m_delay = uVar3 - uVar10;
                            field_144 = arg1;
                            return;
                        }
                        uVar10 = uVar10 - uVar3;
                        m_delay = 0;
                    }
                    this_04 = (Logger*)(*this_00).operator->();
                    this_05 = (Array<unsigned int>*)this_04->GetLogStreams();
                    if (uVar10 < 101)
                        goto LAB_10098a41f;
                    if ((int)m_loopLength < 1)
                        goto LAB_10098a41f;
                    pAVar5 = (Animation*)(*this_00).operator->();
                    iVar2 = pAVar5->GetFrameCount();
                    uVar8 = iVar2 - m_loopLength;
                    uVar3 = m_currentIndex;
                    for (; (uVar3 < uVar8 &&
                            (puVar6 = (unsigned int*)(*this_05)[(unsigned long)uVar3], *puVar6 < uVar10));
                         uVar10 = uVar10 - iVar2) {
                        piVar7 = (int*)(*this_05)[(unsigned long)m_currentIndex];
                        iVar2 = *piVar7;
                        uVar3 = m_currentIndex + 1;
                        m_currentIndex = uVar3;
                    }
                    if (uVar8 <= m_currentIndex) {
                        pAVar5 = (Animation*)(*this_00).operator->();
                        uVar3 = pAVar5->GetFrameCount();
                        uVar9 = 0;
                        if (uVar8 < uVar3) {
                            arg1_00 = (unsigned long)uVar8;
                            uVar9 = 0;
                            do {
                                piVar7 = (int*)(*this_05)[arg1_00];
                                uVar9 = uVar9 + *piVar7;
                                arg1_00 = arg1_00 + 1;
                                pAVar5 = (Animation*)(*this_00).operator->();
                                uVar3 = pAVar5->GetFrameCount();
                            } while (arg1_00 < uVar3);
                        }
                        if (m_loopBehaviour == 0) {
                            dVar11 = (double)floor<unsigned int>(uVar10 / uVar9);
                            m_loopsCompleted = m_loopsCompleted + (int)(long)dVar11;
                        }
                        uVar10 = uVar10 % uVar9;
                    }
                    do {
                        do {
                            SetNextFrame();
                        LAB_10098a41f:
                            puVar6 = (unsigned int*)(*this_05)[(unsigned long)m_currentIndex];
                            if (uVar10 <= *puVar6) {
                                field_144 = field_148 - uVar10;
                                if (m_finished != '\0') {
                                    LogAssert("m_finished == false",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "graphics/runetek7/animation/AnimationParameters.cpp",
                                              415, "AnimationParameters: finished = true at end of update loop!");
                                }
                                return;
                            }
                            piVar7 = (int*)(*this_05)[(unsigned long)m_currentIndex];
                            uVar10 = uVar10 - *piVar7;
                            uVar8 = m_currentIndex + 1;
                            m_currentIndex = uVar8;
                            pAVar5 = (Animation*)(*this_00).operator->();
                            uVar3 = pAVar5->GetFrameCount();
                        } while (uVar8 < uVar3);
                        if (((m_loopLength != 4294967295) && (m_loopBehaviour != 2)) &&
                            (m_currentIndex = m_currentIndex - m_loopLength, m_loopBehaviour == 0)) {
                            m_loopsCompleted = m_loopsCompleted + 1;
                        }
                        if (field_128 <= m_loopsCompleted)
                            break;
                        uVar3 = m_currentIndex;
                        pAVar5 = (Animation*)(*this_00).operator->();
                        uVar8 = pAVar5->GetFrameCount();
                    } while (uVar3 < uVar8);
                    m_finished = 1;
                    if (operator_cast_to_bool()) {
                        fixedfunction::function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul,
                                                (fixedfunction::Methods)0>::
                        operator()((function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul,
                                             (fixedfunction::Methods)0>*)this);
                    }
                } else {
                    UpdateKeyFrame(arg1);
                }
            } else {
                m_startTimeNS = m_startTimeNS + (lVar4 - m_lastUpdateTimeNS);
                m_lastUpdateTimeNS = lVar4;
                field_148 = arg1;
                field_144 = arg1;
            }
        }
    }

    // 0x10098a530
    void AnimationParameters::UpdateKeyFrame(unsigned int arg1) {
        NXTRenderCanvas* this_00;
        shared_ptr<AnimKeyFrameSet>* this_01;
        AnimKeyFrameSet* this_02;

        field_148 = arg1;
        unsigned int uVar3 = arg1 - field_144;
        unsigned int uVar2 = m_delay;
        if (uVar2 != 0) {
            if (uVar3 <= uVar2) {
                m_delay = uVar2 - uVar3;
                field_144 = arg1;
                return;
            }
            uVar3 = uVar3 - uVar2;
            m_delay = 0;
        }
        if (uVar3 != 0) {
            do {
                uVar2 = m_currentIndex + 1;
                m_currentIndex = uVar2;
                this_00 = (NXTRenderCanvas*)field_96.operator->();
                this_01 = (shared_ptr<AnimKeyFrameSet>*)this_00->GetPixelBuffer();
                this_02 = (AnimKeyFrameSet*)(*this_01).operator->();
                if ((float)this_02->GetEnd() <= (float)uVar2) {
                    if ((m_loopLength == 4294967295) || (m_loopBehaviour == 2)) {
                        m_finished = 1;
                        if (operator_cast_to_bool() == '\0') {
                            return;
                        }
                        fixedfunction::function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul,
                                                (fixedfunction::Methods)0>::
                        operator()((function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul,
                                             (fixedfunction::Methods)0>*)this);
                        return;
                    }
                    m_currentIndex = m_currentIndex - m_loopLength;
                    if (m_loopBehaviour == 0) {
                        m_loopsCompleted = m_loopsCompleted + 1;
                    }
                }
                field_144 = field_148;
                uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
        }
    }

    // 0x10098a660
    void AnimationParameters::GetFrameCount() const {
        ((Animation*)field_96.operator->())->GetFrameCount();
    }

} // namespace jag::graphics

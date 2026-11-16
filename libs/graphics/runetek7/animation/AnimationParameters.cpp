// libs/graphics/runetek7/animation/AnimationParameters.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "AnimationParameters.h"

namespace jag::graphics {
    // 0x1000dc670: the linker folded this into oldscape::javapal::GameShell::GetMinimumCanvasHeight() const, which has identical code
    uint AnimationParameters::GetLoopsCompleted() const;

    // 0x10012f260: the linker folded this into oldscape::social::OnlinePlayerData<oldscape::social::FriendChatUser>::GetWorldId() const, which has identical code
    uint AnimationParameters::GetDelay() const;

    // 0x10015dc30: the linker folded this into oldscape::auth::AuthLibWrapper::GetPurchaseShopItemStatus(), which has identical code
    uint AnimationParameters::GetCurrentIndex() const;

    // 0x1001cd990: the linker folded this into PointLightIndicesEffect::GetVisiblePointLights(), which has identical code
    AnimationParameters::GetAnimation() const;

    // 0x1003cbc60: the linker folded this into game::MapArea::GetBackgroundRGBA() const, which has identical code
    uint AnimationParameters::GetLoopLength() const;

    // 0x1003cf280: the linker folded this into game::MapElementType::GetTextBackgroundFillRGBA() const, which has identical code
    uint AnimationParameters::GetAnimationLength() const;

    // 0x1003f9260: the linker folded this into game::EffectAnimType::CastsShadows() const, which has identical code
    AnimationParameters::GetPaused() const;

    // 0x100410520: the linker folded this into game::ChangeLocationRequest::GetSourceLogicTick() const, which has identical code
    int AnimationParameters::GetLoopBehaviour() const;

    // 0x1004af330: the linker folded this into game::MapArea::ShouldAutoFind() const, which has identical code
    AnimationParameters::GetTweenLastFrameToFirst() const;

    // 0x100869a60: the linker folded this into Material::GetAlphaMode() const, which has identical code
    long AnimationParameters::GetLastUpdateTimeNS() const;

    // 0x100869a70: the linker folded this into Material::GetBlendMode() const, which has identical code
    ulong AnimationParameters::GetStartTimeNS() const;

    // 0x1009897c0, 656 bytes, base-object constructor, placed by class name and debug map
    // AnimationParameters::AnimationParameters(shared_ptr<Animation> const&, AnimationLoopBehaviour, unsigned int, unsigned int, bool, int, unsigned int, bool)
    void AnimationParameters::AnimationParameters(shared_ptr* param_1, int param_3, uint param_4, uint param_5,
                                                  undefined1 param_6, uint param_7, uint param_8, undefined1 param_9) {
        undefined1* this_00;
        bool bVar1;
        uint uVar2;
        int iVar3;
        int iVar4;
        WorldmapAreaMetadata* this_01;
        NXTRenderCanvas* pNVar5;
        shared_ptr* psVar6;
        Layout* this_02;
        ulong uVar7;
        Animation* pAVar8;
        Logger* pLVar9;
        Array<unsigned int, eastl::allocator>* pAVar10;
        int* piVar11;
        long lVar12;
        uint uVar13;
        ulong uVar14;

        new (this) MakeUniquePool<AnimationParameters, 512>();
        new (this) math::Vector2T<int>();
        this_00 = &field_96;
        new (this_00) shared_ptr<oldscape::dash3d::Decor>(param_1);
        m_loopBehaviour = param_3;
        m_loopLength = param_7;
        m_tweenLastFrameToFirst = param_9;
        m_loopsCompleted = 0;
        field_128 = param_8;
        m_finished = 0;
        m_delay = param_4;
        this_01 = (WorldmapAreaMetadata*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)param_1);
        uVar2 = this_01->GetMaxMapZ();
        m_animationLength = uVar2;
        field_144 = param_5;
        field_148 = param_5;
        m_currentIndex = 0;
        field_156 = 1;
        field_160 = param_6;
        m_startTimeNS = 0;
        m_lastUpdateTimeNS = 0;
        m_paused = 0;
        pNVar5 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
        psVar6 = (shared_ptr*)pNVar5->GetPixelBuffer();
        bVar1 = operator==(psVar6, (_func_decltype_nullptr*)0);
        if ((!bVar1) && (m_animationLength == 4294967295)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_animation->GetAnimKeyFrameSet() == nullptr ? true : m_animationLength != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/AnimationParameters.cpp",
                      36, (char*)0);
        }
        this_02 = (Layout*)psVar6->Instance();
        uVar7 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_02);
        m_startTimeNS = uVar7;
        if (field_160 != '\0') {
            pAVar8 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
            iVar3 = pAVar8->GetFrameCount();
            uVar2 = math::Rand(iVar3 + -1);
            m_currentIndex = uVar2;
            if (uVar2 == 0) {
                iVar3 = 0;
            } else {
                uVar14 = 0;
                iVar3 = 0;
                do {
                    pLVar9 = (Logger*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
                    pAVar10 = (Array<unsigned int, eastl::allocator>*)pLVar9->GetLogStreams();
                    piVar11 = (int*)Array<unsigned int, eastl::allocator>::operator[](pAVar10, uVar14);
                    iVar3 = iVar3 + *piVar11;
                    uVar14 = uVar14 + 1;
                } while (uVar14 < m_currentIndex);
            }
            pNVar5 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)param_1);
            psVar6 = (shared_ptr*)pNVar5->GetPixelBuffer();
            bVar1 = shared_ptr::operator_cast_to_bool(psVar6);
            if (!bVar1) {
                pLVar9 = (Logger*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
                pAVar10 = (Array<unsigned int, eastl::allocator>*)pLVar9->GetLogStreams();
                piVar11 = (int*)Array<unsigned int, eastl::allocator>::operator[](pAVar10, (ulong)m_currentIndex);
                iVar4 = math::Rand(*piVar11);
                field_144 = field_144 + iVar4;
                iVar3 = iVar3 + iVar4;
            }
            pAVar8 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
            lVar12 = pAVar8->GetAnimationSampleIntervalNS();
            m_startTimeNS = m_startTimeNS - lVar12 * iVar3;
        }
        m_lastUpdateTimeNS = uVar7;
        uVar13 = m_currentIndex + 1;
        field_156 = uVar13;
        pAVar8 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
        uVar2 = pAVar8->GetFrameCount();
        if (uVar2 <= uVar13) {
            field_156 = m_currentIndex;
        }
    }

    // 0x100989b40, 48 bytes, complete-object constructor, placed by class name and debug map
    // AnimationParameters::AnimationParameters(shared_ptr<Animation> const&, AnimationLoopBehaviour, unsigned int, unsigned int, bool, int, unsigned int, bool)
    void AnimationParameters::AnimationParameters() {
        AnimationParameters();
    }

    // 0x100989b70, 240 bytes, placed by class name and debug map
    // AnimationParameters::Reset(unsigned int, unsigned int)
    void AnimationParameters::Reset(uint param_1, uint param_2) {
        uint uVar1;
        uint uVar2;
        Animation* pAVar3;
        long lVar4;
        Layout* this_00;
        ulong uVar6;

        if (field_160 == '\0') {
            m_currentIndex = 0;
            pAVar3 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)&field_96);
            uVar2 = pAVar3->GetFrameCount();
            field_156 = (uint)(1 < uVar2);
            field_144 = param_1;
            field_148 = param_1;
            pAVar3 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)&field_96);
            lVar4 = pAVar3->GetAnimationSampleIntervalNS();
            this_00 = (Layout*)pAVar3->Instance();
            uVar6 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_00) +
                lVar4 * (ulong)param_2;
            m_startTimeNS = uVar6;
            m_lastUpdateTimeNS = uVar6;
        } else {
            field_160 = 0;
            uVar2 = m_currentIndex;
            pAVar3 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)&field_96);
            uVar1 = pAVar3->GetFrameCount();
            if (uVar2 == uVar1) {
                m_currentIndex = m_currentIndex - 1;
            }
        }
        m_loopsCompleted = 0;
        m_finished = 0;
        m_delay = param_2;
    }

    // 0x100989c60, 112 bytes, placed by class name and debug map
    // AnimationParameters::SetDelayResumeAtTime(unsigned int)
    void AnimationParameters::SetDelayResumeAtTime(uint param_1) {
        Animation* this_00;
        long lVar1;
        Layout* pLVar2;
        uint uVar4;

        uVar4 = param_1 - field_144;
        m_delay = uVar4;
        this_00 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)&field_96);
        lVar1 = this_00->GetAnimationSampleIntervalNS();
        pLVar2 = (Layout*)this_00->Instance();
        m_startTimeNS =
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar2) +
            lVar1 * (ulong)uVar4;
        pLVar2 = (Layout*)pLVar2->Instance();
        lVar1 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(pLVar2);
        m_lastUpdateTimeNS = lVar1;
    }

    // 0x100989cd0, 816 bytes, placed by class name and debug map
    // AnimationParameters::ResetToTime(unsigned int, unsigned int, unsigned int, unsigned int)
    void AnimationParameters::ResetToTime(uint param_1, uint param_2, uint param_3, uint param_4) {
        undefined1* this_00;
        uint uVar2;
        uint uVar3;
        uint uVar4;
        Animation* pAVar5;
        long lVar6;
        NXTRenderCanvas* this_01;
        shared_ptr* this_02;
        Logger* this_03;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        ulong uVar7;
        uint* puVar8;
        int* piVar9;
        Layout* pLVar10;
        long lVar11;
        ulong uVar12;
        int iVar13;
        uint uVar14;
        uint uVar15;

        m_loopsCompleted = param_3;
        m_finished = 0;
        m_currentIndex = 0;
        uVar12 = (ulong)(param_4 - param_2);
        if (param_4 < param_2) {
            uVar12 = 0;
        }
        m_delay = (uint)uVar12;
        uVar14 = param_2 - param_4;
        if (param_2 < param_4) {
            uVar14 = 0;
        }
        this_00 = &field_96;
        pAVar5 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
        lVar6 = pAVar5->GetAnimationSampleIntervalNS();
        this_01 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
        this_02 = (shared_ptr*)this_01->GetPixelBuffer();
        if (!shared_ptr::operator_cast_to_bool(this_02)) {
            this_03 = (Logger*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
            this_04 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_03->GetLogStreams();
            uVar4 = m_currentIndex;
            uVar7 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_04);
            iVar13 = 0;
            while (true) {
                if ((uVar7 <= uVar4) || (puVar8 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                             (Array<unsigned int, eastl::allocator>*)this_04, (ulong)m_currentIndex),
                                         uVar14 <= *puVar8))
                    goto LAB_100989f75;
                piVar9 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                    (Array<unsigned int, eastl::allocator>*)this_04, (ulong)m_currentIndex);
                uVar14 = uVar14 - *piVar9;
                piVar9 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                    (Array<unsigned int, eastl::allocator>*)this_04, (ulong)m_currentIndex);
                iVar13 = iVar13 + *piVar9;
                uVar2 = m_currentIndex + 1;
                m_currentIndex = uVar2;
                pAVar5 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
                uVar4 = pAVar5->GetFrameCount();
                if (uVar4 <= uVar2)
                    break;
            LAB_100989ea0:
                uVar4 = m_currentIndex;
                uVar7 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_04);
            }
            if (((m_loopLength != 4294967295) && (m_loopBehaviour != 2)) &&
                (m_currentIndex = m_currentIndex - m_loopLength, m_loopBehaviour == 0)) {
                m_loopsCompleted = m_loopsCompleted + 1;
            }
            if (m_loopsCompleted < field_128) {
                uVar4 = m_currentIndex;
                pAVar5 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
                uVar2 = pAVar5->GetFrameCount();
                if (uVar4 < uVar2)
                    goto LAB_100989ea0;
            }
            m_finished = 1;
        LAB_100989f75:
            SetNextFrame(this);
            pLVar10 = (Layout*)((AnimationParameters*)this)->Instance();
            lVar11 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar10);
            m_startTimeNS = lVar6 * uVar12 + lVar11 + (ulong)(iVar13 + uVar14) * -20000000;
            m_lastUpdateTimeNS = lVar11;
            field_144 = param_1 - uVar14;
            field_148 = param_1 - uVar14;
            return;
        }
        uVar2 = GetPreLoopLength(this);
        m_currentIndex = uVar14;
        uVar4 = m_loopLength;
        if (((uVar4 != 4294967295) && (m_loopBehaviour != 2)) && ((int)uVar2 <= (int)uVar14)) {
            m_currentIndex = uVar2;
            if (m_loopBehaviour == 0) {
                m_loopsCompleted = m_loopsCompleted + (int)(uVar14 - uVar2) / (int)uVar4;
            }
            m_currentIndex = (int)(uVar14 - uVar2) % (int)uVar4 + uVar2;
        }
        if (m_loopsCompleted < field_128) {
            uVar4 = m_currentIndex;
            pAVar5 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
            uVar3 = pAVar5->GetFrameCount();
            if (uVar4 < uVar3)
                goto LAB_100989dd8;
        }
        m_finished = 1;
    LAB_100989dd8:
        field_144 = param_1;
        field_148 = param_1;
        if (m_animationLength == 4294967295) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_animationLength != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/AnimationParameters.cpp",
                      175, (char*)0);
        }
        iVar13 = m_loopBehaviour;
        uVar4 = m_animationLength;
        if ((iVar13 == 2) || (uVar3 = uVar4, m_loopLength != 4294967295)) {
            uVar3 = m_loopLength;
        }
        if ((iVar13 != 2) && (uVar4 < uVar14)) {
            uVar15 = uVar14 - uVar2;
            if ((iVar13 != 0) || (uVar14 = uVar4, uVar15 / uVar3 <= field_128)) {
                uVar14 = uVar15 % uVar3 + uVar2;
            }
        }
        pLVar10 = (Layout*)((ulong)uVar2)->Instance();
        lVar11 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(pLVar10);
        m_startTimeNS = lVar6 * uVar12 + lVar11 + (ulong)uVar14 * -20000000;
        m_lastUpdateTimeNS = lVar11;
    }

    // 0x10098a000, 176 bytes, placed by class name and debug map
    // AnimationParameters::GetPreLoopLength() const
    uint AnimationParameters::GetPreLoopLength() {
        undefined1* this_00;
        bool bVar1;
        int iVar2;
        uint uVar3;
        NXTRenderCanvas* this_01;
        shared_ptr* this_02;
        Animation* pAVar4;
        Array<unsigned int, eastl::allocator>* this_03;
        int* piVar5;
        ulong uVar6;
        uint uVar7;

        if (m_loopLength == 4294967295) {
            uVar7 = m_animationLength;
        } else {
            this_00 = &field_96;
            this_01 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
            this_02 = (shared_ptr*)this_01->GetPixelBuffer();
            bVar1 = shared_ptr::operator_cast_to_bool(this_02);
            pAVar4 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
            if (bVar1) {
                iVar2 = pAVar4->GetFrameCount();
                uVar7 = iVar2 - m_loopLength;
            } else {
                this_03 = (Array<unsigned int, eastl::allocator>*)pAVar4->GetLogStreams();
                pAVar4 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
                iVar2 = pAVar4->GetFrameCount();
                uVar3 = iVar2 - m_loopLength;
                if (uVar3 == 0) {
                    uVar7 = 0;
                } else {
                    uVar6 = 0;
                    uVar7 = 0;
                    do {
                        piVar5 = (int*)Array<unsigned int, eastl::allocator>::operator[](this_03, uVar6);
                        uVar7 = uVar7 + *piVar5;
                        uVar6 = uVar6 + 1;
                    } while (uVar3 != uVar6);
                }
            }
        }
        return uVar7;
    }

    // 0x10098a0b0, 144 bytes, placed by class name and debug map
    // AnimationParameters::SetNextFrame()
    void AnimationParameters::SetNextFrame() {
        uint uVar1;
        Animation* pAVar2;
        uint uVar3;

        uVar3 = m_currentIndex + 1;
        field_156 = uVar3;
        pAVar2 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)&field_96);
        uVar1 = pAVar2->GetFrameCount();
        if (uVar1 <= uVar3) {
            if ((m_loopLength != 4294967295) || (uVar1 = 0, m_tweenLastFrameToFirst == '\0')) {
                uVar1 = field_156 - m_loopLength;
            }
            field_156 = uVar1;
            pAVar2 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)&field_96);
            uVar3 = pAVar2->GetFrameCount();
            if (uVar3 <= uVar1) {
                field_156 = m_currentIndex;
            }
        }
    }

    // 0x10098a140, 176 bytes, placed by class name and debug map
    // AnimationParameters::GetTicksThroughAnimation() const
    uint AnimationParameters::GetTicksThroughAnimation() {
        uint uVar3;
        NXTRenderCanvas* this_00;
        shared_ptr* this_01;
        Logger* this_02;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_03;
        ulong uVar4;
        int* piVar5;
        ulong uVar6;
        int iVar7;

        this_00 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)&field_96);
        this_01 = (shared_ptr*)this_00->GetPixelBuffer();
        if (shared_ptr::operator_cast_to_bool(this_01)) {
            uVar3 = m_currentIndex;
        } else {
            this_02 = (Logger*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)&field_96);
            this_03 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_02->GetLogStreams();
            if (m_currentIndex == 0) {
                iVar7 = 0;
            } else {
                uVar6 = 0;
                iVar7 = 0;
                do {
                    uVar4 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_03);
                    if (uVar6 < uVar4) {
                        piVar5 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                            (Array<unsigned int, eastl::allocator>*)this_03, uVar6);
                        iVar7 = iVar7 + *piVar5;
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 < m_currentIndex);
            }
            uVar3 = GetTicksThroughFrame(this) + iVar7;
        }
        return uVar3;
    }

    // 0x10098a210, 800 bytes, placed by class name and debug map
    // AnimationParameters::Update(unsigned int)
    void AnimationParameters::Update(uint param_1) {
        undefined1* this_00;
        bool bVar1;
        int iVar2;
        uint uVar3;
        Layout* this_01;
        long lVar4;
        NXTRenderCanvas* this_02;
        shared_ptr* this_03;
        Logger* this_04;
        Array<unsigned int, eastl::allocator>* this_05;
        Animation* pAVar5;
        uint* puVar6;
        int* piVar7;
        uint uVar8;
        ulong uVar9;
        TextureAtlasSlot* pTVar10;
        uint uVar11;
        uint uVar12;
        double dVar13;

        if ((field_148 != param_1) && (m_finished == '\0')) {
            this_01 = (Layout*)Instance();
            lVar4 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_01);
            if ((m_paused == '\0') || (m_delay != 0)) {
                m_lastUpdateTimeNS = lVar4;
                this_00 = &field_96;
                this_02 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
                this_03 = (shared_ptr*)this_02->GetPixelBuffer();
                bVar1 = shared_ptr::operator_cast_to_bool(this_03);
                if (bVar1) {
                    UpdateKeyFrame(this, param_1);
                } else {
                    field_148 = param_1;
                    uVar12 = param_1 - field_144;
                    uVar3 = m_delay;
                    if (uVar3 != 0) {
                        if (uVar12 <= uVar3) {
                            m_delay = uVar3 - uVar12;
                            field_144 = param_1;
                            return;
                        }
                        uVar12 = uVar12 - uVar3;
                        m_delay = 0;
                    }
                    this_04 = (Logger*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
                    this_05 = (Array<unsigned int, eastl::allocator>*)this_04->GetLogStreams();
                    if (uVar12 < 101)
                        goto LAB_10098a41f;
                    if ((int)m_loopLength < 1)
                        goto LAB_10098a41f;
                    pAVar5 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
                    iVar2 = pAVar5->GetFrameCount();
                    uVar8 = iVar2 - m_loopLength;
                    uVar3 = m_currentIndex;
                    for (; (uVar3 < uVar8 &&
                            (puVar6 = (uint*)Array<unsigned int, eastl::allocator>::operator[](this_05, (ulong)uVar3),
                            *puVar6 < uVar12));
                         uVar12 = uVar12 - iVar2) {
                        piVar7 =
                            (int*)Array<unsigned int, eastl::allocator>::operator[](this_05, (ulong)m_currentIndex);
                        iVar2 = *piVar7;
                        uVar3 = m_currentIndex + 1;
                        m_currentIndex = uVar3;
                    }
                    if (uVar8 <= m_currentIndex) {
                        pAVar5 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
                        uVar3 = pAVar5->GetFrameCount();
                        uVar11 = 0;
                        if (uVar8 < uVar3) {
                            uVar9 = (ulong)uVar8;
                            uVar11 = 0;
                            do {
                                piVar7 = (int*)Array<unsigned int, eastl::allocator>::operator[](this_05, uVar9);
                                uVar11 = uVar11 + *piVar7;
                                uVar9 = uVar9 + 1;
                                pAVar5 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
                                uVar3 = pAVar5->GetFrameCount();
                            } while (uVar9 < uVar3);
                        }
                        if (m_loopBehaviour == 0) {
                            dVar13 = (double)floor<unsigned int>(uVar12 / uVar11);
                            m_loopsCompleted = m_loopsCompleted + (int)(long)dVar13;
                        }
                        uVar12 = uVar12 % uVar11;
                    }
                    do {
                        do {
                            SetNextFrame(this);
                        LAB_10098a41f:
                            puVar6 = (uint*)Array<unsigned int, eastl::allocator>::operator[](this_05,
                                                                                              (ulong)m_currentIndex);
                            if (uVar12 <= *puVar6) {
                                field_144 = field_148 - uVar12;
                                if (m_finished != '\0') {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("m_finished == false",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "graphics/runetek7/animation/AnimationParameters.cpp",
                                              415, "AnimationParameters: finished = true at end of update loop!");
                                }
                                return;
                            }
                            pTVar10 = (TextureAtlasSlot*)(ulong)m_currentIndex;
                            piVar7 = (int*)Array<unsigned int, eastl::allocator>::operator[](this_05, (ulong)pTVar10);
                            uVar12 = uVar12 - *piVar7;
                            uVar8 = m_currentIndex + 1;
                            m_currentIndex = uVar8;
                            pAVar5 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
                            uVar3 = pAVar5->GetFrameCount();
                        } while (uVar8 < uVar3);
                        if (((m_loopLength != 4294967295) && (m_loopBehaviour != 2)) &&
                            (m_currentIndex = m_currentIndex - m_loopLength, m_loopBehaviour == 0)) {
                            m_loopsCompleted = m_loopsCompleted + 1;
                        }
                        if (field_128 <= m_loopsCompleted)
                            break;
                        uVar3 = m_currentIndex;
                        pAVar5 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
                        uVar8 = pAVar5->GetFrameCount();
                    } while (uVar3 < uVar8);
                    m_finished = 1;
                    bVar1 = operator_cast_to_bool();
                    if (bVar1) {
                        fixedfunction::function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul,
                                                (fixedfunction::Methods)0>::
                        operator()((function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul,
                                             (fixedfunction::Methods)0>*)this,
                                   pTVar10);
                    }
                }
            } else {
                m_startTimeNS = m_startTimeNS + (lVar4 - m_lastUpdateTimeNS);
                m_lastUpdateTimeNS = lVar4;
                field_148 = param_1;
                field_144 = param_1;
            }
        }
    }

    // 0x10098a530, 272 bytes, placed by class name and debug map
    // AnimationParameters::UpdateKeyFrame(unsigned int)
    void AnimationParameters::UpdateKeyFrame(uint param_1) {
        uint uVar2;
        NXTRenderCanvas* this_00;
        shared_ptr<AnimKeyFrameSet>* this_01;
        AnimKeyFrameSet* this_02;
        uint uVar3;
        undefined4 in_register_00000034;

        field_148 = param_1;
        uVar3 = param_1 - field_144;
        uVar2 = m_delay;
        if (uVar2 != 0) {
            if (uVar3 <= uVar2) {
                m_delay = uVar2 - uVar3;
                field_144 = param_1;
                return;
            }
            uVar3 = uVar3 - uVar2;
            m_delay = 0;
        }
        if (uVar3 != 0) {
            do {
                uVar2 = m_currentIndex + 1;
                m_currentIndex = uVar2;
                this_00 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)&field_96);
                this_01 = (shared_ptr<AnimKeyFrameSet>*)this_00->GetPixelBuffer();
                this_02 = (AnimKeyFrameSet*)shared_ptr<AnimKeyFrameSet>::operator->(this_01);
                if ((float)this_02->GetEnd() <= (float)uVar2) {
                    if ((m_loopLength == 4294967295) || (m_loopBehaviour == 2)) {
                        m_finished = 1;
                        if (operator_cast_to_bool()) {
                            fixedfunction::function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul,
                                                    (fixedfunction::Methods)0>::
                            operator()((function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul,
                                                 (fixedfunction::Methods)0>*)this,
                                       (TextureAtlasSlot*)CONCAT44(in_register_00000034, param_1));
                            return;
                        }
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

    // 0x10098a660, 32 bytes, placed by class name and debug map
    // AnimationParameters::GetFrameCount() const
    void AnimationParameters::GetFrameCount() {
        Animation* this_00;

        this_00 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)&field_96);
        this_00->GetFrameCount();
    }

} // namespace jag::graphics

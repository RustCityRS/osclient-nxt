// libs/graphics/runetek7/gui/animations/GUIAnimation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class GUIAnimation {
    public:
        unsigned int GetTarget() const;
        unsigned int GetTargetMode() const;
        GUIAnimation(PacketT<Array<unsigned char>>& arg1, const Array<GUIAnimationCurve>& guiAnimationCurves);
        void LoadFromPacket(PacketT<Array<unsigned char>>& arg1, const Array<GUIAnimationCurve>& guiAnimationCurves);
        GUIAnimation(const GUIAnimationCurve& guiAnimationCurve, GUIAnimationTarget guiAnimationTarget,
                     GUIAnimationTargetMode guiAnimationTargetMode);
        GUIAnimation(math::EasingType easingType, bool arg2, GUIAnimationTarget guiAnimationTarget,
                     GUIAnimationTargetMode guiAnimationTargetMode);
        void AddOutput(int arg1);
        bool AddOutputImpl<int&>(int& arg1);
        void AddOutput(float arg1);
        bool AddOutputImpl<float&>(float& arg1);
        bool AddOutputImpl<GUIAnimationRGB>(GUIAnimationRGB&& guiAnimationRGB);
        bool AddOutputImpl<math::Vector2T<float>>(math::Vector2T<float>&& vector2);
        bool AddOutputImpl<math::Vector2T<int>>(math::Vector2T<int>&& vector2);
        bool AddOutputImpl<float>(float&& arg1);
        GUIAnimation* Evaluate(float arg1) const;
        uint8_t[16] GenerateNextOutputInSequence(
            std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                         GUIAnimationRGB>
                arg1,
            std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                         GUIAnimationRGB>
                arg2) const;
        ~GUIAnimation();

    private:
        GUIAnimationCurve* field_0;
        EasingType field_8;
        unsigned int field_12;
        unsigned int m_target;
        unsigned int m_targetMode;
        float field_24;
        uint8_t _unknown_28[4];
    };

    class GUIAnimationRGB {
    public:
        GUIAnimationRGB(int arg1, int arg2, int arg3);
        uint64_t Lerp(GUIAnimationRGB guiAnimationRGB, float arg2) const;
        uint64_t Delta(GUIAnimationRGB guiAnimationRGB) const;
        unsigned int EvalAdd(unsigned int arg1) const;
        unsigned int EvalMultiply(unsigned int arg1) const;
        unsigned int EvalDelta(unsigned int arg1, unsigned int arg2) const;
        unsigned int AsUint() const;
        GUIAnimationRGB(unsigned int arg1);

    private:
        short field_0;
        unsigned short field_2;
        short field_4;
        uint8_t _unknown_6[6];
    };

    // 0x1008f4f10
    bool GUIAnimation::AddOutputImpl<int&>(int& arg1) {
        variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>*
            pvVar2;
        long lVar3;
        long lVar4;
        Logger* this_00;
        uint64_t uVar5;
        uint64_t uVar6;
        variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>
            local_38;

        local_38.variant<int&, 0, 0, 0, int, 2ul, 0>(arg1);
        float* this_01 = &field_24;
        if (this_01->empty() == '\0') {
            pvVar2 = (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                              GUIAnimationRGB>*)(*this_01)[0];
            lVar3 = pvVar2->index();
            lVar4 = local_38.index();
            if (lVar3 != lVar4) {
                this_00 = logger::default_logger();
                uVar5 = local_38.index();
                pvVar2 = (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                                  GUIAnimationRGB>*)(*this_01)[0];
                uVar6 = pvVar2->index();
                this_00->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                    "animations/GUIAnimation.h",
                    53,
                    "Could not add animation output due to type mismatch with existing outputs (got %d, expected %d)",
                    uVar5, uVar6);
                return false;
            }
        }
        this_01->push_back(local_38);
        return true;
    }

    // 0x1008f5040
    bool GUIAnimation::AddOutputImpl<float&>(float& arg1) {
        variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>*
            pvVar2;
        long lVar3;
        long lVar4;
        Logger* this_00;
        uint64_t uVar5;
        uint64_t uVar6;
        variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>
            local_38;

        local_38.variant<float&, 0, 0, 0, float, 3ul, 0>(arg1);
        float* this_01 = &field_24;
        if (this_01->empty() == '\0') {
            pvVar2 = (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                              GUIAnimationRGB>*)(*this_01)[0];
            lVar3 = pvVar2->index();
            lVar4 = local_38.index();
            if (lVar3 != lVar4) {
                this_00 = logger::default_logger();
                uVar5 = local_38.index();
                pvVar2 = (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                                  GUIAnimationRGB>*)(*this_01)[0];
                uVar6 = pvVar2->index();
                this_00->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                    "animations/GUIAnimation.h",
                    53,
                    "Could not add animation output due to type mismatch with existing outputs (got %d, expected %d)",
                    uVar5, uVar6);
                return false;
            }
        }
        this_01->push_back(local_38);
        return true;
    }

    // 0x1008f5190
    bool GUIAnimation::AddOutputImpl<GUIAnimationRGB>(GUIAnimationRGB&& guiAnimationRGB) {
        variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>*
            pvVar2;
        long lVar3;
        long lVar4;
        Logger* this_00;
        uint64_t uVar5;
        uint64_t uVar6;
        variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>
            local_38;

        local_38.variant<GUIAnimationRGB, 0, 0, 0, GUIAnimationRGB, 6ul, 0>(guiAnimationRGB);
        float* this_01 = &field_24;
        if (this_01->empty() == '\0') {
            pvVar2 = (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                              GUIAnimationRGB>*)(*this_01)[0];
            lVar3 = pvVar2->index();
            lVar4 = local_38.index();
            if (lVar3 != lVar4) {
                this_00 = logger::default_logger();
                uVar5 = local_38.index();
                pvVar2 = (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                                  GUIAnimationRGB>*)(*this_01)[0];
                uVar6 = pvVar2->index();
                this_00->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                    "animations/GUIAnimation.h",
                    53,
                    "Could not add animation output due to type mismatch with existing outputs (got %d, expected %d)",
                    uVar5, uVar6);
                return false;
            }
        }
        this_01->push_back(local_38);
        return true;
    }

    // 0x1008f5260
    bool GUIAnimation::AddOutputImpl<math::Vector2T<float>>(math::Vector2T<float>&& vector2) {
        variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>*
            pvVar2;
        long lVar3;
        long lVar4;
        Logger* this_00;
        uint64_t uVar5;
        uint64_t uVar6;
        variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>
            local_38;

        local_38.variant<math::Vector2T<float>, 0, 0, 0, math::Vector2T<float>, 4ul, 0>(vector2);
        float* this_01 = &field_24;
        if (this_01->empty() == '\0') {
            pvVar2 = (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                              GUIAnimationRGB>*)(*this_01)[0];
            lVar3 = pvVar2->index();
            lVar4 = local_38.index();
            if (lVar3 != lVar4) {
                this_00 = logger::default_logger();
                uVar5 = local_38.index();
                pvVar2 = (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                                  GUIAnimationRGB>*)(*this_01)[0];
                uVar6 = pvVar2->index();
                this_00->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                    "animations/GUIAnimation.h",
                    53,
                    "Could not add animation output due to type mismatch with existing outputs (got %d, expected %d)",
                    uVar5, uVar6);
                return false;
            }
        }
        this_01->push_back(local_38);
        return true;
    }

    // 0x1008f5330
    bool GUIAnimation::AddOutputImpl<math::Vector2T<int>>(math::Vector2T<int>&& vector2) {
        variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>*
            pvVar2;
        long lVar3;
        long lVar4;
        Logger* this_00;
        uint64_t uVar5;
        uint64_t uVar6;
        variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>
            local_38;

        local_38.variant<math::Vector2T<int>, 0, 0, 0, math::Vector2T<int>, 5ul, 0>(vector2);
        float* this_01 = &field_24;
        if (this_01->empty() == '\0') {
            pvVar2 = (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                              GUIAnimationRGB>*)(*this_01)[0];
            lVar3 = pvVar2->index();
            lVar4 = local_38.index();
            if (lVar3 != lVar4) {
                this_00 = logger::default_logger();
                uVar5 = local_38.index();
                pvVar2 = (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                                  GUIAnimationRGB>*)(*this_01)[0];
                uVar6 = pvVar2->index();
                this_00->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                    "animations/GUIAnimation.h",
                    53,
                    "Could not add animation output due to type mismatch with existing outputs (got %d, expected %d)",
                    uVar5, uVar6);
                return false;
            }
        }
        this_01->push_back(local_38);
        return true;
    }

    // 0x1008f5400
    bool GUIAnimation::AddOutputImpl<float>(float&& arg1) {
        variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>*
            pvVar2;
        long lVar3;
        long lVar4;
        Logger* this_00;
        uint64_t uVar5;
        uint64_t uVar6;
        variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>
            local_38;

        local_38.variant<float, 0, 0, 0, float, 3ul, 0>(arg1);
        float* this_01 = &field_24;
        if (this_01->empty() == '\0') {
            pvVar2 = (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                              GUIAnimationRGB>*)(*this_01)[0];
            lVar3 = pvVar2->index();
            lVar4 = local_38.index();
            if (lVar3 != lVar4) {
                this_00 = logger::default_logger();
                uVar5 = local_38.index();
                pvVar2 = (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                                  GUIAnimationRGB>*)(*this_01)[0];
                uVar6 = pvVar2->index();
                this_00->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                    "animations/GUIAnimation.h",
                    53,
                    "Could not add animation output due to type mismatch with existing outputs (got %d, expected %d)",
                    uVar5, uVar6);
                return false;
            }
        }
        this_01->push_back(local_38);
        return true;
    }

    // 0x100902400
    GUIAnimationRGB::GUIAnimationRGB(unsigned int arg1) {
        field_0 = (short)((arg1 & 16711935) >> 16);
        field_2 = (unsigned short)(arg1 >> 8) & 255;
        field_4 = (short)(arg1 & 16711935);
    }

    // 0x10090f390
    GUIAnimation::~GUIAnimation() {}

} // namespace jag::graphics

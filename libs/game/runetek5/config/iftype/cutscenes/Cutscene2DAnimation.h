// libs/game/runetek5/config/iftype/cutscenes/Cutscene2DAnimation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    template <typename...> // 2 instantiations, e.g. <float>, <math::Vector2T<float> >
    class Cutscene2DAnimation {
    public:
        class Key;
        uint64_t LoadFromPacket(PacketT<Array<unsigned char>>& arg1, int arg2);
        ~Cutscene2DAnimation();
        Cutscene2DAnimation(Cutscene2DAnimation<float>&& cutscene2DAnimation);
        Cutscene2DAnimation(Cutscene2DAnimation<math::Vector2T<float>>&& cutscene2DAnimation);
        Cutscene2DAnimation<float>* operator=(Cutscene2DAnimation<float>&& cutscene2DAnimation);
        Cutscene2DAnimation<math::Vector2T<float>>*
        operator=(Cutscene2DAnimation<math::Vector2T<float>>&& cutscene2DAnimation);
        Cutscene2DAnimation<float>* GetKeys() const;
        float Eval(float arg1) const;
        uint64_t Eval(float arg1) const;
        Cutscene2DAnimation();
    };

    template <typename...> // 1 instantiations, e.g.
    class Cutscene2DAnimation::Key {
    public:
        Key* operator=(Cutscene2DAnimation<math::Vector2T<float>>::Key&& key);
    };

    // 0x1005229d0
    uint64_t Cutscene2DAnimation<float>::LoadFromPacket(PacketT<Array<unsigned char>>& arg1, int arg2) {
        uint32_t uVar4;
        uint32_t extraout_XMM0_Da;

        if (arg2 != 1) {
            LogAssert("version == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DAnimation.h",
                      28, nullptr);
        }
        uint8_t bVar1 = arg1.g1();
        if (bVar1 == 0) {
            LogAssert("numKeys > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DAnimation.h",
                      31, nullptr);
        }
        resize_uninitialized((unsigned long)bVar1);
        auto puVar2 = HeapBeginPtr();
        auto puVar3 = end();
        for (; puVar2 != puVar3; puVar2 = puVar2 + 2) {
            uVar4 = arg1.gFloat();
            *puVar2 = uVar4;
            arg1.gFloat();
            puVar2[1] = extraout_XMM0_Da;
        }
        return 1;
    }

    // 0x100522a90
    uint64_t Cutscene2DAnimation<math::Vector2T<float>>::LoadFromPacket(PacketT<Array<unsigned char>>& arg1, int arg2) {
        uint32_t uVar4;
        Vector2T<float> local_30;

        if (arg2 != 1) {
            LogAssert("version == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DAnimation.h",
                      28, nullptr);
        }
        uint8_t bVar1 = arg1.g1();
        if (bVar1 == 0) {
            LogAssert("numKeys > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DAnimation.h",
                      31, nullptr);
        }
        resize_uninitialized((unsigned long)bVar1);
        auto puVar2 = HeapBeginPtr();
        auto puVar3 = end();
        if (puVar2 != puVar3) {
            do {
                uVar4 = arg1.gFloat();
                *puVar2 = uVar4;
                local_30 = math::Vector2T(arg1, false);
                (*((puVar2 + 1))) = local_30;
                puVar2 = puVar2 + 3;
            } while (puVar2 != puVar3);
        }
        return 1;
    }

    // 0x10052a3f0
    Cutscene2DAnimation<math::Vector2T<float>>::~Cutscene2DAnimation() {}

    // 0x10052a460
    Cutscene2DAnimation<float>::~Cutscene2DAnimation() {}

    // 0x10052e840
    Cutscene2DAnimation<float>::Cutscene2DAnimation(Cutscene2DAnimation<float>&& cutscene2DAnimation)
        : eastl::fixed_vector<Cutscene2DAnimation<float>::Key, 1ul>(cutscene2DAnimation) {}

    // 0x10052ebe0
    Cutscene2DAnimation<math::Vector2T<float>>::Cutscene2DAnimation(
        Cutscene2DAnimation<math::Vector2T<float>>&& cutscene2DAnimation)
        : eastl::fixed_vector<Cutscene2DAnimation<math::Vector2T<float>>::Key, 1ul>(cutscene2DAnimation) {}

    // 0x10052f2e0
    Key*
    Cutscene2DAnimation<math::Vector2T<float>>::Key::operator=(Cutscene2DAnimation<math::Vector2T<float>>::Key&& key) {
        *(uint32_t*)this = *(uint32_t*)key;
        (*((this + 4))) = (*((key + 4)));
        return this;
    }

    // 0x10052f4f0
    Cutscene2DAnimation<float>*
    Cutscene2DAnimation<float>::operator=(Cutscene2DAnimation<float>&& cutscene2DAnimation) {
        *this = cutscene2DAnimation;
        return this;
    }

    // 0x10052f510
    Cutscene2DAnimation<math::Vector2T<float>>* Cutscene2DAnimation<math::Vector2T<float>>::operator=(
        Cutscene2DAnimation<math::Vector2T<float>>&& cutscene2DAnimation) {
        *this = cutscene2DAnimation;
        return this;
    }

    // 0x10053a670
    Cutscene2DAnimation<float>* Cutscene2DAnimation<float>::GetKeys() const {
        fixed_vector<Cutscene2DAnimation<float>::Key, _1ul>* in_RSI;

        WrapArray<
            eastl::fixed_vector<ui::ComponentMultiValueMixin::ValueChangeEvent, 2ul, false, eastl::dummy_allocator>>(
            *in_RSI);
        return this;
    }

    // 0x10053ad10
    float Cutscene2DAnimation<float>::Eval(float arg1) const {
        long lVar3;
        _lambda_float__jag__game__Cutscene2DAnimation<float> __Key_const___1_* in_RCX;
        float fVar4;

        float local_1c = arg1;
        auto pKVar1 = HeapBeginPtr();
        auto pKVar2 = end();
        pKVar1 = eastl::upper_bound<Cutscene2DAnimation<float>::Key const*, float,
                                    float->Eval() const ::_lambda(float, Cutscene2DAnimation<float>::Key const&) _1_>(
            pKVar1, pKVar2, &local_1c, in_RCX);
        pKVar2 = (Key*)end();
        if (pKVar1 == pKVar2) {
            lVar3 = back();
            fVar4 = *(float*)(lVar3 + 4);
        } else {
            pKVar2 = (Key*)HeapBeginPtr();
            if (pKVar1 == pKVar2) {
                fVar4 = *(float*)(pKVar1 + 4);
            } else {
                fVar4 = (local_1c - *(float*)(pKVar1 - 8)) / (*(float*)pKVar1 - *(float*)(pKVar1 - 8));
                if ((fVar4 < 0.0) || (1.0 < fVar4)) {
                    LogAssert("(interpolationFactor >= 0.f) && (interpolationFactor <= 1.f)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/iftype/cutscenes/Cutscene2DAnimation.h",
                              79, nullptr);
                }
                fVar4 = math::Lerp<float, float>(*((pKVar1 - 4)), *((pKVar1 + 4)), fVar4);
            }
        }
        return fVar4;
    }

    // 0x10053adf0
    uint64_t Cutscene2DAnimation<math::Vector2T<float>>::Eval(float arg1) const {
        long lVar3;
        _lambda_float__jag__game__Cutscene2DAnimation<math::Vector2T<float> _> __Key_const___1_* in_RCX;
        float arg3;
        uint64_t uVar4;

        float local_1c = arg1;
        auto pKVar1 = HeapBeginPtr();
        auto pKVar2 = end();
        pKVar1 = eastl::upper_bound<Cutscene2DAnimation<math::Vector2T<float>>::Key const*, float,
                                    float->Eval() const ::_lambda(
                                        float, Cutscene2DAnimation<math::Vector2T<float>>::Key const&) _1_>(
            pKVar1, pKVar2, &local_1c, in_RCX);
        pKVar2 = (Key*)end();
        if (pKVar1 == pKVar2) {
            lVar3 = back();
            uVar4 = *(uint64_t*)(lVar3 + 4);
        } else {
            pKVar2 = (Key*)HeapBeginPtr();
            if (pKVar1 == pKVar2) {
                uVar4 = *(uint64_t*)(pKVar1 + 4);
            } else {
                arg3 = (local_1c - *(float*)(pKVar1 - 12)) / (*(float*)pKVar1 - *(float*)(pKVar1 - 12));
                if ((arg3 < 0.0) || (1.0 < arg3)) {
                    LogAssert("(interpolationFactor >= 0.f) && (interpolationFactor <= 1.f)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/iftype/cutscenes/Cutscene2DAnimation.h",
                              79, nullptr);
                }
                uVar4 = math::Lerp<math::Vector2T<float>, float>(*((pKVar1 - 8)), *((pKVar1 + 4)), arg3);
            }
        }
        return uVar4;
    }

    // 0x100541f00
    bool Cutscene2DAnimation<float>::Eval(float) const ::{
        lambda(float, Cutscene2DAnimation<float>::Key const&) #1
    }
    ::operator()(float arg1, const Cutscene2DAnimation<float>::Key & key) const {
        return arg1 < *(float*)key;
    }

    // 0x1005423d0
    Cutscene2DAnimation<float>::Cutscene2DAnimation() : eastl::fixed_vector<Cutscene2DAnimation<float>::Key, 1ul>() {}

    // 0x100542460
    Cutscene2DAnimation<math::Vector2T<float>>::Cutscene2DAnimation()
        : eastl::fixed_vector<Cutscene2DAnimation<math::Vector2T<float>>::Key, 1ul>() {}

} // namespace jag::game

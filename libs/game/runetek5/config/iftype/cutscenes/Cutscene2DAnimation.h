// libs/game/runetek5/config/iftype/cutscenes/Cutscene2DAnimation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    template <typename...> // 2 instantiations, e.g. <float>, <math::Vector2T<float> >
    class Cutscene2DAnimation {
    public:
        class Key;
        LoadFromPacket(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        ~Cutscene2DAnimation();
        Cutscene2DAnimation(Cutscene2DAnimation<float>&&);
        Cutscene2DAnimation(Cutscene2DAnimation<math::Vector2T<float>>&&);
        Cutscene2DAnimation<float>* operator=(Cutscene2DAnimation<float>&&);
        Cutscene2DAnimation<math::Vector2T<float>>* operator=(Cutscene2DAnimation<math::Vector2T<float>>&&);
        Cutscene2DAnimation<float>* GetKeys() const;
        float Eval(float) const;
        Eval(float) const;
        Cutscene2DAnimation();
    };

    template <typename...> // 1 instantiations, e.g.
    class Cutscene2DAnimation::Key {
    public:
        Key* operator=(Cutscene2DAnimation<math::Vector2T<float>>::Key&&);
    };

    // 0x1005229d0, 192 bytes, inline, placed by class name and debug map
    // Cutscene2DAnimation<float>::LoadFromPacket(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    undefined8 Cutscene2DAnimation<float>::LoadFromPacket(PacketT* param_1, int param_2) {
        char cVar1;
        undefined4* puVar2;
        undefined4* puVar3;
        undefined4 uVar4;
        undefined4 extraout_XMM0_Da;

        if (param_2 != 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("version == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DAnimation.h",
                      28, (char*)0);
        }
        cVar1 = param_1->g1();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("numKeys > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DAnimation.h",
                      31, (char*)0);
        }
        eastl::vector<Cutscene2DAnimation<float>::Key,
                      eastl::fixed_vector_allocator<8ul, 1ul, 4ul, 0ul, true,
                                                    eastl::allocator>>::resize_uninitialized((ulong)this);
        puVar2 = (undefined4*)HeapBeginPtr();
        puVar3 = (undefined4*)end();
        for (; puVar2 != puVar3; puVar2 = puVar2 + 2) {
            uVar4 = param_1->gFloat();
            *puVar2 = uVar4;
            param_1->gFloat();
            puVar2[1] = extraout_XMM0_Da;
        }
        return 1;
    }

    // 0x100522a90, 208 bytes, inline, placed by class name and debug map
    // Cutscene2DAnimation<math::Vector2T<float> >::LoadFromPacket(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    undefined8 Cutscene2DAnimation<math::Vector2T<float>>::LoadFromPacket(PacketT* param_1, int param_2) {
        byte bVar1;
        undefined4* puVar2;
        undefined4* puVar3;
        undefined4 uVar4;
        Vector2T<float> local_30[8];

        if (param_2 != 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("version == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DAnimation.h",
                      28, (char*)0);
        }
        bVar1 = param_1->g1();
        if (bVar1 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("numKeys > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DAnimation.h",
                      31, (char*)0);
        }
        resize_uninitialized((ulong)bVar1);
        puVar2 = (undefined4*)HeapBeginPtr();
        puVar3 = (undefined4*)end();
        if (puVar2 != puVar3) {
            do {
                uVar4 = param_1->gFloat();
                *puVar2 = uVar4;
                math::Vector2T<float>::Vector2T(local_30, param_1, false);
                math::Vector2T<float>::operator=((Vector2T<float>*)(puVar2 + 1), (Vector2T*)local_30);
                puVar2 = puVar2 + 3;
            } while (puVar2 != puVar3);
        }
        return 1;
    }

    // 0x10052a3d0, 16 bytes, complete-object destructor, inline, placed by class name
    // Cutscene2DAnimation<math::Vector2T<float> >::~Cutscene2DAnimation(): jumps straight to the base-object destructor

    // 0x10052a3e0, 16 bytes, complete-object destructor, inline, placed by class name
    // Cutscene2DAnimation<float>::~Cutscene2DAnimation(): jumps straight to the base-object destructor

    // 0x10052a3f0, 16 bytes, base-object destructor, inline, placed by class name
    // Cutscene2DAnimation<math::Vector2T<float> >::~Cutscene2DAnimation()
    void Cutscene2DAnimation<math::Vector2T<float>>::~Cutscene2DAnimation() {
        ~fixed_vector();
    }

    // 0x10052a460, 16 bytes, base-object destructor, inline, placed by class name
    // Cutscene2DAnimation<float>::~Cutscene2DAnimation()
    void Cutscene2DAnimation<float>::~Cutscene2DAnimation() {
        ~fixed_vector();
    }

    // 0x10052e820, 16 bytes, complete-object constructor, inline, placed by class name
    // Cutscene2DAnimation<float>::Cutscene2DAnimation(Cutscene2DAnimation<float>&&): jumps straight to the base-object constructor

    // 0x10052e830, 16 bytes, complete-object constructor, inline, placed by class name
    // Cutscene2DAnimation<math::Vector2T<float> >::Cutscene2DAnimation(Cutscene2DAnimation<math::Vector2T<float> >&&): jumps straight to the base-object constructor

    // 0x10052e840, 16 bytes, base-object constructor, inline, placed by class name
    // Cutscene2DAnimation<float>::Cutscene2DAnimation(Cutscene2DAnimation<float>&&)
    void Cutscene2DAnimation<float>::Cutscene2DAnimation(Cutscene2DAnimation* param_1) {
        new (this) eastl::fixed_vector<Cutscene2DAnimation<float>::Key, 1ul, true, eastl::allocator>(param_1);
    }

    // 0x10052ebe0, 16 bytes, base-object constructor, inline, placed by class name
    // Cutscene2DAnimation<math::Vector2T<float> >::Cutscene2DAnimation(Cutscene2DAnimation<math::Vector2T<float> >&&)
    void Cutscene2DAnimation<math::Vector2T<float>>::Cutscene2DAnimation(Cutscene2DAnimation* param_1) {
        new (this)
            eastl::fixed_vector<Cutscene2DAnimation<math::Vector2T<float>>::Key, 1ul, true, eastl::allocator>(param_1);
    }

    // 0x10052f2e0, 48 bytes, inline, placed by class name
    // Cutscene2DAnimation<math::Vector2T<float> >::Key::operator=(Cutscene2DAnimation<math::Vector2T<float> >::Key&&)
    /* Cutscene2DAnimation<math::Vector2T<float>
   >::Key::TEMPNAMEPLACEHOLDERVALUE(Cutscene2DAnimation<math::Vector2T<float>
   >::Key&&) */

    Key* Cutscene2DAnimation<math::Vector2T<float>>::Key::operator=(Key* param_1) {
        *(undefined4*)this = *(undefined4*)param_1;
        math::Vector2T<float>::operator=((Vector2T<float>*)(this + 4), (Vector2T*)(param_1 + 4));
        return this;
    }

    // 0x10052f4f0, 32 bytes, inline, placed by class name
    // Cutscene2DAnimation<float>::operator=(Cutscene2DAnimation<float>&&)
    /* Cutscene2DAnimation<float>::TEMPNAMEPLACEHOLDERVALUE(Cutscene2DAnimation<float>&&)
    */

    Cutscene2DAnimation<float>* Cutscene2DAnimation<float>::operator=(Cutscene2DAnimation* param_1) {
        eastl::fixed_vector<Cutscene2DAnimation<float>::Key, 1ul, true, eastl::allocator>::operator=(
            (fixed_vector<Cutscene2DAnimation<float>::Key, 1ul, true, eastl::allocator>*)this, (fixed_vector*)param_1);
        return this;
    }

    // 0x10052f510, 32 bytes, inline, placed by class name
    // Cutscene2DAnimation<math::Vector2T<float> >::operator=(Cutscene2DAnimation<math::Vector2T<float> >&&)
    /* Cutscene2DAnimation<math::Vector2T<float>
   >::TEMPNAMEPLACEHOLDERVALUE(Cutscene2DAnimation<math::Vector2T<float> >&&) */

    Cutscene2DAnimation<math::Vector2T<float>>*
    Cutscene2DAnimation<math::Vector2T<float>>::operator=(Cutscene2DAnimation* param_1) {
        eastl::fixed_vector<Cutscene2DAnimation<math::Vector2T<float>>::Key, 1ul, true, eastl::allocator>::operator=(
            (fixed_vector<Cutscene2DAnimation<math::Vector2T<float>>::Key, 1ul, true, eastl::allocator>*)this,
            (fixed_vector*)param_1);
        return this;
    }

    // 0x10053a670, 32 bytes, inline, placed by class name
    // Cutscene2DAnimation<float>::GetKeys() const
    Cutscene2DAnimation<float>* Cutscene2DAnimation<float>::GetKeys() {
        fixed_vector* in_RSI;

        WrapArray<ui::ComponentMultiValueMixin::ValueChangeEvent_const>::WrapArray<
            eastl::fixed_vector<ui::ComponentMultiValueMixin::ValueChangeEvent, 2ul, false, eastl::dummy_allocator>>(
            (WrapArray<ui::ComponentMultiValueMixin::ValueChangeEvent_const>*)this, in_RSI);
        return this;
    }

    // 0x10053ad10, 224 bytes, inline, placed by class name
    // Cutscene2DAnimation<float>::Eval(float) const
    float Cutscene2DAnimation<float>::Eval(float param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        Key* pKVar3;
        Key* pKVar4;
        long lVar5;
        float fVar6;
        float local_1c;

        local_1c = param_1;
        uVar1 = HeapBeginPtr();
        uVar2 = end();
        pKVar3 = eastl::upper_bound<Cutscene2DAnimation<float>::Key_const*, float,
                                    float->Eval() const ::_lambda(float, Cutscene2DAnimation<float>::Key_const&) _1_>(
            uVar1, uVar2, &local_1c);
        pKVar4 = (Key*)end();
        if (pKVar3 == pKVar4) {
            lVar5 = back();
            fVar6 = *(float*)(lVar5 + 4);
        } else {
            pKVar4 = (Key*)HeapBeginPtr();
            if (pKVar3 == pKVar4) {
                fVar6 = *(float*)(pKVar3 + 4);
            } else {
                fVar6 = (local_1c - *(float*)(pKVar3 + -8)) / (*(float*)pKVar3 - *(float*)(pKVar3 + -8));
                if ((fVar6 < 0.0) || (1.0 < fVar6)) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("(interpolationFactor >= 0.f) && (interpolationFactor <= 1.f)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/iftype/cutscenes/Cutscene2DAnimation.h",
                              79, (char*)0);
                }
                fVar6 = math::Lerp<float, float>((float*)(pKVar3 + -4), (float*)(pKVar3 + 4), fVar6);
            }
        }
        return fVar6;
    }

    // 0x10053adf0, 224 bytes, inline, placed by class name
    // Cutscene2DAnimation<math::Vector2T<float> >::Eval(float) const
    undefined8 Cutscene2DAnimation<math::Vector2T<float>>::Eval(float param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        Key* pKVar3;
        Key* pKVar4;
        long lVar5;
        float fVar6;
        float local_1c;

        local_1c = param_1;
        uVar1 = HeapBeginPtr();
        uVar2 = end();
        pKVar3 = eastl::upper_bound<Cutscene2DAnimation<math::Vector2T<float>>::Key_const*, float,
                                    float->Eval() const ::_lambda(
                                        float, Cutscene2DAnimation<math::Vector2T<float>>::Key_const&) _1_>(
            uVar1, uVar2, &local_1c);
        pKVar4 = (Key*)end();
        if (pKVar3 == pKVar4) {
            lVar5 = back();
            uVar1 = *(undefined8*)(lVar5 + 4);
        } else {
            pKVar4 = (Key*)HeapBeginPtr();
            if (pKVar3 == pKVar4) {
                uVar1 = *(undefined8*)(pKVar3 + 4);
            } else {
                fVar6 = (local_1c - *(float*)(pKVar3 + -12)) / (*(float*)pKVar3 - *(float*)(pKVar3 + -12));
                if ((fVar6 < 0.0) || (1.0 < fVar6)) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("(interpolationFactor >= 0.f) && (interpolationFactor <= 1.f)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/iftype/cutscenes/Cutscene2DAnimation.h",
                              79, (char*)0);
                }
                uVar1 =
                    math::Lerp<math::Vector2T<float>, float>((Vector2T*)(pKVar3 + -8), (Vector2T*)(pKVar3 + 4), fVar6);
            }
        }
        return uVar1;
    }

    // 0x100541f00, 16 bytes, inline, placed by class name
    // Cutscene2DAnimation<float>::Eval(float) const::{lambda(float, Cutscene2DAnimation<float>::Key const&)#1}::operator()(float, Cutscene2DAnimation<float>::Key const&) const
    /* Cutscene2DAnimation<math::Vector2T<float> >::Eval(float) const::{lambda(float,
   Cutscene2DAnimation<math::Vector2T<float> >::Key
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(float,
   Cutscene2DAnimation<math::Vector2T<float> >::Key const&) const */

    _func_Eval_float* const ::{
        lambda(float, Cutscene2DAnimation<math::Vector2T<float>>::Key_const&) #1
    }
    ::operator()(float param_1, Key * param_2) {
        undefined7 in_register_00000001;

        return (_func_Eval_float*)CONCAT71(in_register_00000001, param_1 < *(float*)param_2);
    }

    // 0x1005423b0, 16 bytes, complete-object constructor, inline, placed by class name
    // Cutscene2DAnimation<float>::Cutscene2DAnimation(): jumps straight to the base-object constructor

    // 0x1005423c0, 16 bytes, complete-object constructor, inline, placed by class name
    // Cutscene2DAnimation<math::Vector2T<float> >::Cutscene2DAnimation(): jumps straight to the base-object constructor

    // 0x1005423d0, 16 bytes, base-object constructor, inline, placed by class name
    // Cutscene2DAnimation<float>::Cutscene2DAnimation()
    void Cutscene2DAnimation<float>::Cutscene2DAnimation() {
        new (this) eastl::fixed_vector<Cutscene2DAnimation<float>::Key, 1ul, true, eastl::allocator>();
    }

    // 0x100542460, 16 bytes, base-object constructor, inline, placed by class name
    // Cutscene2DAnimation<math::Vector2T<float> >::Cutscene2DAnimation()
    void Cutscene2DAnimation<math::Vector2T<float>>::Cutscene2DAnimation() {
        new (this) eastl::fixed_vector<Cutscene2DAnimation<math::Vector2T<float>>::Key, 1ul, true, eastl::allocator>();
    }

} // namespace jag::game

// libs/graphics/runetek7/gui/animations/GUIAnimation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class GUIAnimation {
    public:
        GetTarget() const;
        GetTargetMode() const;
        GUIAnimation(PacketT<Array<unsigned char, eastl::allocator>>&,
                     Array<GUIAnimationCurve, eastl::allocator> const&);
        void LoadFromPacket(PacketT<Array<unsigned char, eastl::allocator>>&,
                            Array<GUIAnimationCurve, eastl::allocator> const&);
        GUIAnimation(GUIAnimationCurve const&, GUIAnimationTarget, GUIAnimationTargetMode);
        GUIAnimation(math::EasingType, bool, GUIAnimationTarget, GUIAnimationTargetMode);
        void AddOutput(int);
        bool AddOutputImpl<int&>(int&);
        void AddOutput(float);
        bool AddOutputImpl<float&>(float&);
        bool AddOutputImpl<GUIAnimationRGB>(GUIAnimationRGB&&);
        bool AddOutputImpl<math::Vector2T<float>>(math::Vector2T<float>&&);
        bool AddOutputImpl<math::Vector2T<int>>(math::Vector2T<int>&&);
        bool AddOutputImpl<float>(float&&);
        Evaluate(float) const;
        GenerateNextOutputInSequence(std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                                  math::Vector2T<int>, GUIAnimationRGB>,
                                     std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                                  math::Vector2T<int>, GUIAnimationRGB>) const;
        ~GUIAnimation();

        // data members, from how the methods use this: 32 bytes
        long field_0;   // offset 0
        int field_8;    // offset 8
        uint field_12;  // offset 12
        uint field_16;  // offset 16
        uint field_20;  // offset 20
        float field_24; // offset 24
        char _unknown_28[4];
    };

    class GUIAnimationRGB {
    public:
        GUIAnimationRGB(int, int, int);
        Lerp(GUIAnimationRGB, float) const;
        Delta(GUIAnimationRGB) const;
        uint EvalAdd(unsigned int) const;
        uint EvalMultiply(unsigned int) const;
        uint EvalDelta(unsigned int, unsigned int) const;
        uint AsUint() const;
        GUIAnimationRGB(unsigned int);

        // data members, from how the methods use this: 12 bytes
        short field_0;  // offset 0
        ushort field_2; // offset 2
        short field_4;  // offset 4
        char _unknown_6[6];
    };

    // 0x1008f4f10, 208 bytes, inline, placed by class name and debug map
    // bool GUIAnimation::AddOutputImpl<int&>(int&)
    bool GUIAnimation::AddOutputImpl<int&>(int* param_1) {
        char cVar1;
        variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>*
            pvVar2;
        long lVar3;
        long lVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this;
        variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>
            local_38[16];

        std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                     GUIAnimationRGB>::variant<int&, 0, 0, 0, int, 2ul, 0>((int*)local_38);
        this = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)(param_1 + 6);
        cVar1 =
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(this);
        if (cVar1 == '\0') {
            pvVar2 = (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                              GUIAnimationRGB>*)
                eastl::vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                           math::Vector2T<int>, GUIAnimationRGB>,
                              BucketAllocatorEASTL>::
                operator[]((vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                                math::Vector2T<int>, GUIAnimationRGB>,
                                   BucketAllocatorEASTL>*)this,
                           0);
            lVar3 = std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                                 GUIAnimationRGB>::index(pvVar2);
            lVar4 = std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                                 GUIAnimationRGB>::index(local_38);
            if (lVar3 != lVar4) {
                uVar5 = logger::default_logger();
                uVar6 = std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                     math::Vector2T<int>, GUIAnimationRGB>::index(local_38);
                pvVar2 = (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                                  GUIAnimationRGB>*)
                    eastl::vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                               math::Vector2T<int>, GUIAnimationRGB>,
                                  BucketAllocatorEASTL>::
                    operator[]((vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                                    math::Vector2T<int>, GUIAnimationRGB>,
                                       BucketAllocatorEASTL>*)this,
                               0);
                uVar7 = std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                     math::Vector2T<int>, GUIAnimationRGB>::index(pvVar2);
                logger::Logger::Log(
                    uVar5, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                    "animations/GUIAnimation.h",
                    53,
                    "Could not add animation output due to type mismatch with existing outputs (got %d, expected %d)",
                    uVar6, uVar7);
                return false;
            }
        }
        push_back(local_38);
        return true;
    }

    // 0x1008f5040, 208 bytes, inline, placed by class name and debug map
    // bool GUIAnimation::AddOutputImpl<float&>(float&)
    bool GUIAnimation::AddOutputImpl<float&>(float* param_1) {
        char cVar1;
        variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>*
            pvVar2;
        long lVar3;
        long lVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this;
        variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>
            local_38[16];

        std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                     GUIAnimationRGB>::variant<float&, 0, 0, 0, float, 3ul, 0>((float*)local_38);
        this = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)(param_1 + 6);
        cVar1 =
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(this);
        if (cVar1 == '\0') {
            pvVar2 = (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                              GUIAnimationRGB>*)
                eastl::vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                           math::Vector2T<int>, GUIAnimationRGB>,
                              BucketAllocatorEASTL>::
                operator[]((vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                                math::Vector2T<int>, GUIAnimationRGB>,
                                   BucketAllocatorEASTL>*)this,
                           0);
            lVar3 = std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                                 GUIAnimationRGB>::index(pvVar2);
            lVar4 = std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                                 GUIAnimationRGB>::index(local_38);
            if (lVar3 != lVar4) {
                uVar5 = logger::default_logger();
                uVar6 = std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                     math::Vector2T<int>, GUIAnimationRGB>::index(local_38);
                pvVar2 = (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                                  GUIAnimationRGB>*)
                    eastl::vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                               math::Vector2T<int>, GUIAnimationRGB>,
                                  BucketAllocatorEASTL>::
                    operator[]((vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                                    math::Vector2T<int>, GUIAnimationRGB>,
                                       BucketAllocatorEASTL>*)this,
                               0);
                uVar7 = std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                     math::Vector2T<int>, GUIAnimationRGB>::index(pvVar2);
                logger::Logger::Log(
                    uVar5, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                    "animations/GUIAnimation.h",
                    53,
                    "Could not add animation output due to type mismatch with existing outputs (got %d, expected %d)",
                    uVar6, uVar7);
                return false;
            }
        }
        push_back(local_38);
        return true;
    }

    // 0x1008f5190, 208 bytes, inline, placed by class name and debug map
    // bool GUIAnimation::AddOutputImpl<GUIAnimationRGB>(GUIAnimationRGB&&)
    bool GUIAnimation::AddOutputImpl<GUIAnimationRGB>(GUIAnimationRGB* param_1) {
        char cVar1;
        variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>*
            pvVar2;
        long lVar3;
        long lVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        GUIAnimationRGB* this;
        GUIAnimationRGB local_38;

        std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                     GUIAnimationRGB>::variant<GUIAnimationRGB, 0, 0, 0, GUIAnimationRGB, 6ul, 0>(&local_38);
        this = param_1 + 2;
        cVar1 = empty();
        if (cVar1 == '\0') {
            pvVar2 = (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                              GUIAnimationRGB>*)
                eastl::vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                           math::Vector2T<int>, GUIAnimationRGB>,
                              BucketAllocatorEASTL>::
                operator[]((vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                                math::Vector2T<int>, GUIAnimationRGB>,
                                   BucketAllocatorEASTL>*)this,
                           0);
            lVar3 = std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                                 GUIAnimationRGB>::index(pvVar2);
            lVar4 = local_38.index();
            if (lVar3 != lVar4) {
                uVar5 = logger::default_logger();
                uVar6 = local_38.index();
                pvVar2 = (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                                  GUIAnimationRGB>*)
                    eastl::vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                               math::Vector2T<int>, GUIAnimationRGB>,
                                  BucketAllocatorEASTL>::
                    operator[]((vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                                    math::Vector2T<int>, GUIAnimationRGB>,
                                       BucketAllocatorEASTL>*)this,
                               0);
                uVar7 = std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                     math::Vector2T<int>, GUIAnimationRGB>::index(pvVar2);
                logger::Logger::Log(
                    uVar5, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                    "animations/GUIAnimation.h",
                    53,
                    "Could not add animation output due to type mismatch with existing outputs (got %d, expected %d)",
                    uVar6, uVar7);
                return false;
            }
        }
        push_back((variant*)&local_38);
        return true;
    }

    // 0x1008f5260, 208 bytes, inline, placed by class name and debug map
    // bool GUIAnimation::AddOutputImpl<math::Vector2T<float> >(math::Vector2T<float>&&)
    bool GUIAnimation::AddOutputImpl<math::Vector2T<float>>(Vector2T* param_1) {
        char cVar1;
        variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>*
            pvVar2;
        long lVar3;
        long lVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this;
        Vector2T local_38[16];

        std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                     GUIAnimationRGB>::variant<math::Vector2T<float>, 0, 0, 0, math::Vector2T<float>, 4ul, 0>(local_38);
        this = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)(param_1 + 24);
        cVar1 =
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(this);
        if (cVar1 == '\0') {
            pvVar2 = (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                              GUIAnimationRGB>*)
                eastl::vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                           math::Vector2T<int>, GUIAnimationRGB>,
                              BucketAllocatorEASTL>::
                operator[]((vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                                math::Vector2T<int>, GUIAnimationRGB>,
                                   BucketAllocatorEASTL>*)this,
                           0);
            lVar3 = std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                                 GUIAnimationRGB>::index(pvVar2);
            lVar4 = local_38->index();
            if (lVar3 != lVar4) {
                uVar5 = logger::default_logger();
                uVar6 = local_38->index();
                pvVar2 = (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                                  GUIAnimationRGB>*)
                    eastl::vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                               math::Vector2T<int>, GUIAnimationRGB>,
                                  BucketAllocatorEASTL>::
                    operator[]((vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                                    math::Vector2T<int>, GUIAnimationRGB>,
                                       BucketAllocatorEASTL>*)this,
                               0);
                uVar7 = std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                     math::Vector2T<int>, GUIAnimationRGB>::index(pvVar2);
                logger::Logger::Log(
                    uVar5, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                    "animations/GUIAnimation.h",
                    53,
                    "Could not add animation output due to type mismatch with existing outputs (got %d, expected %d)",
                    uVar6, uVar7);
                return false;
            }
        }
        push_back(local_38);
        return true;
    }

    // 0x1008f5330, 208 bytes, inline, placed by class name and debug map
    // bool GUIAnimation::AddOutputImpl<math::Vector2T<int> >(math::Vector2T<int>&&)
    bool GUIAnimation::AddOutputImpl<math::Vector2T<int>>(Vector2T* param_1) {
        char cVar1;
        variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>*
            pvVar2;
        long lVar3;
        long lVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this;
        Vector2T local_38[16];

        std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                     GUIAnimationRGB>::variant<math::Vector2T<int>, 0, 0, 0, math::Vector2T<int>, 5ul, 0>(local_38);
        this = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)(param_1 + 24);
        cVar1 =
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(this);
        if (cVar1 == '\0') {
            pvVar2 = (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                              GUIAnimationRGB>*)
                eastl::vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                           math::Vector2T<int>, GUIAnimationRGB>,
                              BucketAllocatorEASTL>::
                operator[]((vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                                math::Vector2T<int>, GUIAnimationRGB>,
                                   BucketAllocatorEASTL>*)this,
                           0);
            lVar3 = std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                                 GUIAnimationRGB>::index(pvVar2);
            lVar4 = local_38->index();
            if (lVar3 != lVar4) {
                uVar5 = logger::default_logger();
                uVar6 = local_38->index();
                pvVar2 = (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                                  GUIAnimationRGB>*)
                    eastl::vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                               math::Vector2T<int>, GUIAnimationRGB>,
                                  BucketAllocatorEASTL>::
                    operator[]((vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                                    math::Vector2T<int>, GUIAnimationRGB>,
                                       BucketAllocatorEASTL>*)this,
                               0);
                uVar7 = std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                     math::Vector2T<int>, GUIAnimationRGB>::index(pvVar2);
                logger::Logger::Log(
                    uVar5, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                    "animations/GUIAnimation.h",
                    53,
                    "Could not add animation output due to type mismatch with existing outputs (got %d, expected %d)",
                    uVar6, uVar7);
                return false;
            }
        }
        push_back(local_38);
        return true;
    }

    // 0x1008f5400, 208 bytes, inline, placed by class name and debug map
    // bool GUIAnimation::AddOutputImpl<float>(float&&)
    bool GUIAnimation::AddOutputImpl<float>(float* param_1) {
        char cVar1;
        variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>*
            pvVar2;
        long lVar3;
        long lVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this;
        variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>
            local_38[16];

        std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                     GUIAnimationRGB>::variant<float, 0, 0, 0, float, 3ul, 0>((float*)local_38);
        this = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)(param_1 + 6);
        cVar1 =
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(this);
        if (cVar1 == '\0') {
            pvVar2 = (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                              GUIAnimationRGB>*)
                eastl::vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                           math::Vector2T<int>, GUIAnimationRGB>,
                              BucketAllocatorEASTL>::
                operator[]((vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                                math::Vector2T<int>, GUIAnimationRGB>,
                                   BucketAllocatorEASTL>*)this,
                           0);
            lVar3 = std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                                 GUIAnimationRGB>::index(pvVar2);
            lVar4 = std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                                 GUIAnimationRGB>::index(local_38);
            if (lVar3 != lVar4) {
                uVar5 = logger::default_logger();
                uVar6 = std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                     math::Vector2T<int>, GUIAnimationRGB>::index(local_38);
                pvVar2 = (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                                  GUIAnimationRGB>*)
                    eastl::vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                               math::Vector2T<int>, GUIAnimationRGB>,
                                  BucketAllocatorEASTL>::
                    operator[]((vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                                    math::Vector2T<int>, GUIAnimationRGB>,
                                       BucketAllocatorEASTL>*)this,
                               0);
                uVar7 = std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                     math::Vector2T<int>, GUIAnimationRGB>::index(pvVar2);
                logger::Logger::Log(
                    uVar5, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                    "animations/GUIAnimation.h",
                    53,
                    "Could not add animation output due to type mismatch with existing outputs (got %d, expected %d)",
                    uVar6, uVar7);
                return false;
            }
        }
        push_back(local_38);
        return true;
    }

    // 0x100902400, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // GUIAnimationRGB::GUIAnimationRGB(unsigned int)
    void GUIAnimationRGB::GUIAnimationRGB(uint param_1) {
        field_0 = (short)((param_1 & 16711935) >> 16);
        field_2 = (ushort)(param_1 >> 8) & 255;
        field_4 = (short)(param_1 & 16711935);
    }

    // 0x10090f380, 16 bytes, complete-object destructor, inline, placed by class name
    // GUIAnimation::~GUIAnimation(): jumps straight to the base-object destructor

    // 0x10090f390, 16 bytes, base-object destructor, inline, placed by class name
    // GUIAnimation::~GUIAnimation()
    void GUIAnimation::~GUIAnimation() {
        (&field_24)->~vector();
    }

} // namespace jag::graphics

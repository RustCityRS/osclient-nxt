// libs/oldscape/jagex3/dash3d/Skeleton.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100376960, 64 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gSmart1or2s()
    int PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gSmart1or2s(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this) {
        short sVar2;
        char* pcVar3;

        pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, *(ulong*)(this + 24));
        if (*pcVar3 < '\0') {
            sVar2 = g2(this);
            sVar2 = sVar2 + 16384;
        } else {
            sVar2 = g1(this) - 64;
        }
        return (int)sVar2;
    }

    // 0x1003769a0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::AnimFrameSet* placement_new<oldscape::dash3d::AnimFrameSet, oldscape::dash3d::AnimFrameSet::EffectivelyPrivateConstructor>(void*, oldscape::dash3d::AnimFrameSet::EffectivelyPrivateConstructor&&)
    AnimFrameSet*
    jag::placement_new<oldscape::dash3d::AnimFrameSet, oldscape::dash3d::AnimFrameSet::EffectivelyPrivateConstructor>(
        void* param_1, EffectivelyPrivateConstructor* param_2) {
        oldscape::dash3d::AnimFrameSet::AnimFrameSet(param_1, *(undefined4*)param_2);
        return param_1;
    }

    // 0x1003769c0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::AnimFrameSet>* placement_new<ref_counter_shared<oldscape::dash3d::AnimFrameSet>, int, oldscape::dash3d::AnimFrameSet*&>(void*, int&&, oldscape::dash3d::AnimFrameSet*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::dash3d::AnimFrameSet>, int, oldscape::dash3d::AnimFrameSet*&>(
        void* param_1, int* param_2, AnimFrameSet** param_3) {
        ref_counter_shared<oldscape::dash3d::AnimFrameSet>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1003769e0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::AnimFrameSet>::ref_counter_shared(unsigned long, oldscape::dash3d::AnimFrameSet*): jumps straight to the base-object constructor

    // 0x1003769f0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::AnimFrameSet>::ref_counter_shared(unsigned long, oldscape::dash3d::AnimFrameSet*)
    void ref_counter_shared<oldscape::dash3d::AnimFrameSet>::ref_counter_shared(ulong param_1, AnimFrameSet* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7718 + 16;
        *(ulong*)(this + 16) = param_1;
        *(AnimFrameSet**)(this + 24) = param_2;
    }

    // 0x100376a30, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::AnimFrameSet>::DeleteData()
    void ref_counter_shared<oldscape::dash3d::AnimFrameSet>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~AnimFrameSet();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 32;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    class Skeleton {
    public:
        void Animate(graphics::animation::OldscapeAnimKeyFrameSet&, int, Array<bool, eastl::allocator> const&, bool);
        void Animate(graphics::animation::OldscapeAnimKeyFrameSet&, int);
        GetJoint(int);
        void GetNumOfJoints() const;
        Skeleton(PacketJ<Array<unsigned char, eastl::allocator>>&, int);
        void BuildJointHierarchy();
        Skeleton* GetJoints() const;
        ~Skeleton();
        static /* 4 bytes */ LIGHTWEIGHT_JOINTS;                  // = 0
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */
            NULL_JOINT; // = shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>((_func_decltype_nullptr *)0)

        // data members, from how the methods use this: 32 bytes
        char _unknown_0[8];
        ulong field_8;        // offset 8
        shared_ptr* field_16; // offset 16
        uint field_24;        // offset 24
        char _unknown_28[4];
    };

    // 0x100376810, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Skeleton::~Skeleton(): jumps straight to the base-object destructor

    // 0x100376820, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // Skeleton::~Skeleton()
    void Skeleton::~Skeleton() {
        ~Array();
    }

} // namespace jag::oldscape::dash3d

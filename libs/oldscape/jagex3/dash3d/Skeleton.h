// libs/oldscape/jagex3/dash3d/Skeleton.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100376960
    int PacketReaderMixin<PacketT<Array<unsigned char>>>::gSmart1or2s() {
        short sVar2;

        char* pcVar3 = (char*)(*this)[*(unsigned long*)(this + 24)];
        if (*pcVar3 < '\0') {
            sVar2 = g2(this);
            sVar2 = sVar2 + 16384;
        } else {
            sVar2 = g1(this) - 64;
        }
        return (int)sVar2;
    }

    // 0x1003769a0
    oldscape::dash3d::AnimFrameSet*
    placement_new<oldscape::dash3d::AnimFrameSet, oldscape::dash3d::AnimFrameSet::EffectivelyPrivateConstructor>(
        void* arg1, oldscape::dash3d::AnimFrameSet::EffectivelyPrivateConstructor&& effectivelyPrivateConstructor) {
        new (arg1) oldscape::dash3d::AnimFrameSet(
            (EffectivelyPrivateConstructor*)(unsigned long)*(unsigned int*)effectivelyPrivateConstructor);
        return arg1;
    }

    // 0x1003769c0
    ref_counter_shared<oldscape::dash3d::AnimFrameSet>*
    placement_new<ref_counter_shared<oldscape::dash3d::AnimFrameSet>, int, oldscape::dash3d::AnimFrameSet*&>(
        void* arg1, int&& arg2, oldscape::dash3d::AnimFrameSet*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::AnimFrameSet>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1003769f0
    ref_counter_shared<oldscape::dash3d::AnimFrameSet>::ref_counter_shared(unsigned long arg1,
                                                                           oldscape::dash3d::AnimFrameSet* animFrameSet)
        : ref_counter_base() {}

    // 0x100376a30
    void ref_counter_shared<oldscape::dash3d::AnimFrameSet>::DeleteData() {
        ref_counter_shared<oldscape::dash3d::AnimFrameSet> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((AnimFrameSet*)((long)&(this[3]._vptr)->_dtor + lVar2))->~AnimFrameSet();
                    prVar1 = (ref_counter_shared<oldscape::dash3d::AnimFrameSet> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 32;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    class Skeleton {
    public:
        void Animate(graphics::animation::OldscapeAnimKeyFrameSet& oldscapeAnimKeyFrameSet, int arg2,
                     const Array<bool>& arg3, bool arg4);
        void Animate(graphics::animation::OldscapeAnimKeyFrameSet& oldscapeAnimKeyFrameSet, int arg2);
        uint8_t* GetJoint(int arg1);
        void GetNumOfJoints() const;
        Skeleton(PacketJ<Array<unsigned char>>& packetJ, int arg2);
        void BuildJointHierarchy();
        Skeleton* GetJoints() const;
        ~Skeleton();
        static int32_t LIGHTWEIGHT_JOINTS; // = 0
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>
            NULL_JOINT; // = shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        shared_ptr<configdecoder::ObjTypeCustomisation>* field_16;
        unsigned int field_24;
        uint8_t _unknown_28[4];
    };

    // 0x100376820
    Skeleton::~Skeleton() {}

} // namespace jag::oldscape::dash3d

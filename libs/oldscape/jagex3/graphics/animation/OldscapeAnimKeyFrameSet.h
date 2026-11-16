// libs/oldscape/jagex3/graphics/animation/OldscapeAnimKeyFrameSet.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::graphics::animation {
    class OldscapeAnimKeyFrameSet {
    public:
        class OldscapeAnimCurveLoadJob;
        GetBase() const;
        uint GetBind() const;
        void AnimateKeyFramedTransparency(int, std::function<void(int, float)>);
        void SetJointLocal(int, OldscapeJoint&, int, int);
        ~OldscapeAnimKeyFrameSet();
        OldscapeAnimKeyFrameSet* Load(jagex3::Js5&, jagex3::Js5&, int, bool);
        OldscapeAnimKeyFrameSet(int);
        ulong TryLoad(jagex3::Js5&, jagex3::Js5&, bool);
        GetStatus();
        void LoadFromPacket(PacketJ<Array<unsigned char, eastl::allocator>>&, int);
        void RotateMatrix(jag::math::Matrix44T<float>&, int, OldscapeJoint, int);
        void ScaleMatrix(jag::math::Matrix44T<float>&, int, OldscapeJoint, int);
        void TranslateMatrix(jag::math::Matrix44T<float>&, int, OldscapeJoint, int);
        uint GetRotationOrder(int);
        uint GetStart() const;
        uint GetEnd() const;
        int GetDuration() const;
        GetTransAnim() const;
        static /* 4 bytes */ DEBUG_ANIM; // = 1

        // data members, from how the methods use this: 176 bytes
        int field_0; // offset 0
        char _unknown_4[124];
        uint m_start; // offset 128
        uint m_end;   // offset 132
        char _unknown_136[16];
        uint m_bind;            // offset 152
        undefined1 m_transAnim; // offset 156
        char _unknown_157[19];
    };

    class OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob {
    public:
        OldscapeAnimCurveLoadJob();
        ~OldscapeAnimCurveLoadJob();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100323cc0, 16 bytes, complete-object destructor, inline, placed by class name
    // OldscapeAnimKeyFrameSet::LoadFromPacket(PacketJ<Array<unsigned char, eastl::allocator> >&, int)::$_7::~$_7(): jumps straight to the base-object destructor

    // 0x100327800, 16 bytes, base-object destructor, inline, placed by class name
    // OldscapeAnimKeyFrameSet::LoadFromPacket(PacketJ<Array<unsigned char, eastl::allocator> >&, int)::$_7::~$_7()
    /* ~$_7() */

    void OldscapeAnimKeyFrameSet::LoadFromPacket(PacketJ<Array<unsigned char, eastl::allocator>>&, int)::$_7::~__7() {
        ((this + 8))->~vector();
    }

    // 0x10033cc70, 16 bytes, complete-object constructor, inline, placed by class name
    // OldscapeAnimKeyFrameSet::LoadFromPacket(PacketJ<Array<unsigned char, eastl::allocator> >&, int)::$_7::$_7($_7&&): jumps straight to the base-object constructor

    // 0x10033cc80, 48 bytes, base-object constructor, inline, placed by class name
    // OldscapeAnimKeyFrameSet::LoadFromPacket(PacketJ<Array<unsigned char, eastl::allocator> >&, int)::$_7::$_7($_7&&)
    /* $_7($_7&&) */

    void OldscapeAnimKeyFrameSet::LoadFromPacket(PacketJ<Array<unsigned char, eastl::allocator>>&,
                                                 int)::$_7::__7(__7* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = *(undefined8*)param_1;
        new ((this + 8)) eastl::vector<shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>, eastl::allocator>(
            (vector*)(param_1 + 8));
        uVar1 = *(undefined8*)(param_1 + 48);
        *(undefined8*)(this + 40) = *(undefined8*)(param_1 + 40);
        *(undefined8*)(this + 48) = uVar1;
    }

    // 0x10033cdf0, 384 bytes, inline, placed by class name
    // OldscapeAnimKeyFrameSet::LoadFromPacket(PacketJ<Array<unsigned char, eastl::allocator> >&, int)::$_7::operator()() const
    /* OldscapeAnimKeyFrameSet::LoadFromPacket(PacketJ<Array<unsigned
   char, eastl::allocator> >&, int)::$_7::TEMPNAMEPLACEHOLDERVALUE() const */

    void OldscapeAnimKeyFrameSet::LoadFromPacket(PacketJ<Array<unsigned char, eastl::allocator>>&,
                                                 int)::$_7::operator()() {
        char cVar1;
        undefined1 uVar2;
        int iVar3;
        shared_ptr* psVar4;
        long lVar5;
        OldscapeAnimCurve* this_00;
        vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>* pvVar6;
        shared_ptr<OldscapeAnimCurve>* psVar7;
        ulong uVar8;
        shared_ptr<RSevenDebugPresetProvider> local_70[16];
        vector<shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>, eastl::allocator>* local_60;
        vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>* local_58;
        vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>* local_50;
        shared_ptr local_48;
        __7* local_38;

        uVar8 = *(ulong*)(this + 40);
        if (uVar8 < *(ulong*)(this + 48)) {
            local_60 =
                (vector<shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>, eastl::allocator>*)(this + 8);
            local_50 = (vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>,
                               eastl::allocator>*)(*(long*)this + 8);
            local_58 = (vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>,
                               eastl::allocator>*)(*(long*)this + 40);
            local_38 = this;
            do {
                psVar4 = (shared_ptr*)eastl::vector<shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>,
                                                    eastl::allocator>::operator[](local_60, uVar8);
                new (local_70) shared_ptr<dash3d::Decor>(psVar4);
                psVar4 = (shared_ptr*)shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>::operator->(
                    (shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>*)local_70);
                new (&local_48) shared_ptr<dash3d::Decor>(psVar4);
                lVar5 = shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>::operator->(
                    (shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>*)local_70);
                cVar1 = *(char*)(lVar5 + 16);
                lVar5 = shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>::operator->(
                    (shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>*)local_70);
                uVar2 = *(undefined1*)(lVar5 + 17);
                lVar5 = shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>::operator->(
                    (shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>*)local_70);
                iVar3 = *(int*)(lVar5 + 20);
                this_00 = (OldscapeAnimCurve*)shared_ptr<OldscapeAnimCurve>::operator->(
                    (shared_ptr<OldscapeAnimCurve>*)&local_48);
                this_00->ConvertKeysToFrames();
                if (cVar1 == '\x01') {
                    pvVar6 = (vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>*)
                        eastl::vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>,
                                      eastl::allocator>::operator[](local_58, (long)iVar3);
                    iVar3 = GetGroupIndex(uVar2);
                    psVar7 = (shared_ptr<OldscapeAnimCurve>*)
                        eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>::operator[](pvVar6, (long)iVar3);
                    shared_ptr<OldscapeAnimCurve>::operator=(psVar7, &local_48);
                } else {
                    pvVar6 = (vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>*)
                        eastl::vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>,
                                      eastl::allocator>::operator[](local_50, (long)iVar3);
                    iVar3 = GetGroupIndex(uVar2);
                    psVar7 = (shared_ptr<OldscapeAnimCurve>*)
                        eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>::operator[](pvVar6, (long)iVar3);
                    shared_ptr<OldscapeAnimCurve>::operator=(psVar7, &local_48);
                }
                local_48.~shared_ptr();
                local_70->~shared_ptr();
                uVar8 = uVar8 + 1;
            } while (uVar8 < *(ulong*)(local_38 + 48));
        }
    }

} // namespace jag::oldscape::graphics::animation

namespace jag {
    // 0x100323780, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::graphics::animation::OldscapeAnimCurve>::type make_shared<oldscape::graphics::animation::OldscapeAnimCurve>()
    jag* make_shared<oldscape::graphics::animation::OldscapeAnimCurve>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        OldscapeAnimCurve* local_28[2];

        pvVar1 = (void*)aligned_alloc(160, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::graphics::animation::OldscapeAnimCurve>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::graphics::animation::OldscapeAnimCurve>, int,
                                   oldscape::graphics::animation::OldscapeAnimCurve*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag

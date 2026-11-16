// libs/oldscape/jagex3/graphics/animation/OldscapeAnimKeyFrameSet.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::graphics::animation {
    class OldscapeAnimKeyFrameSet {
    public:
        class OldscapeAnimCurveLoadJob;
        shared_ptr<dash3d::AnimBase>* GetBase() const;
        unsigned int GetBind() const;
        void AnimateKeyFramedTransparency(int arg1, std::function<void(int, float)> callback);
        void SetJointLocal(int arg1, OldscapeJoint& oldscapeJoint, int arg3, int arg4);
        ~OldscapeAnimKeyFrameSet();
        auto Load(jagex3::Js5& js51, jagex3::Js5& js52, int arg3, bool arg4);
        OldscapeAnimKeyFrameSet(int arg1);
        unsigned long TryLoad(jagex3::Js5& js51, jagex3::Js5& js52, bool arg3);
        uint8_t* GetStatus();
        void LoadFromPacket(PacketJ<Array<unsigned char>>& packetJ, int arg2);
        void RotateMatrix(jag::math::Matrix44T<float>& matrix44, int arg2, OldscapeJoint oldscapeJoint, int arg4);
        void ScaleMatrix(jag::math::Matrix44T<float>& matrix44, int arg2, OldscapeJoint oldscapeJoint, int arg4);
        void TranslateMatrix(jag::math::Matrix44T<float>& matrix44, int arg2, OldscapeJoint oldscapeJoint, int arg4);
        unsigned int GetRotationOrder(int arg1);
        unsigned int GetStart() const;
        unsigned int GetEnd() const;
        int GetDuration() const;
        uint8_t GetTransAnim() const;
        static int32_t DEBUG_ANIM; // = 1

    private:
        int field_0;
        uint8_t _unknown_4[124];
        unsigned int m_start;
        unsigned int m_end;
        uint8_t _unknown_136[16];
        unsigned int m_bind;
        uint8_t m_transAnim;
        uint8_t _unknown_157[19];
    };

    class OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob {
    public:
        OldscapeAnimCurveLoadJob();
        ~OldscapeAnimCurveLoadJob();

        uint8_t _unknown_0[1];
    };

    // 0x100327800
    OldscapeAnimKeyFrameSet::LoadFromPacket(PacketJ<Array<unsigned char>>&, int)::$_7::~$_7() {
        ((this + 8))->~vector();
    }

    // 0x10033cc80
    OldscapeAnimKeyFrameSet::LoadFromPacket(PacketJ<Array<unsigned char>>&, int)::$_7::$_7($_7&& arg1) {
        *(uint64_t*)this = *(uint64_t*)arg1;
        new ((this + 8)) eastl::vector<shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>>(*((arg1 + 8)));
        uint64_t uVar1 = *(uint64_t*)(arg1 + 48);
        *(uint64_t*)(this + 40) = *(uint64_t*)(arg1 + 40);
        *(uint64_t*)(this + 48) = uVar1;
    }

    // 0x10033cdf0
    void OldscapeAnimKeyFrameSet::LoadFromPacket(PacketJ<Array<unsigned char>>&, int)::$_7::operator()() const {
        char cVar1;
        uint8_t bVar2;
        int iVar3;
        shared_ptr<dash3d::GroundDecor>* psVar4;
        long lVar5;
        vector<shared_ptr<OldscapeAnimCurve>>* pvVar6;
        shared_ptr<OldscapeAnimCurve>* psVar7;
        shared_ptr<RSevenDebugPresetProvider> local_70;
        vector<shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>>* local_60;
        vector<eastl::vector<shared_ptr<OldscapeAnimCurve>>>* local_58;
        vector<eastl::vector<shared_ptr<OldscapeAnimCurve>>>* local_50;
        shared_ptr<RSevenDebugPresetProvider> local_48;

        unsigned long arg1 = *(unsigned long*)(this + 40);
        if (arg1 < *(unsigned long*)(this + 48)) {
            local_60 = (vector<shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>>*)(this + 8);
            local_50 = (vector<eastl::vector<shared_ptr<OldscapeAnimCurve>>>*)(*(long*)this + 8);
            local_58 = (vector<eastl::vector<shared_ptr<OldscapeAnimCurve>>>*)(*(long*)this + 40);
            do {
                psVar4 = (shared_ptr<dash3d::GroundDecor>*)(*local_60)[arg1];
                local_70 = shared_ptr(psVar4);
                psVar4 = (shared_ptr<dash3d::GroundDecor>*)local_70.operator->();
                local_48 = shared_ptr(psVar4);
                lVar5 = local_70.operator->();
                cVar1 = *(char*)(lVar5 + 16);
                lVar5 = local_70.operator->();
                bVar2 = *(uint8_t*)(lVar5 + 17);
                lVar5 = local_70.operator->();
                iVar3 = *(int*)(lVar5 + 20);
                ((OldscapeAnimCurve*)local_48.operator->())->ConvertKeysToFrames();
                if (cVar1 == '\x01') {
                    pvVar6 = (vector<shared_ptr<OldscapeAnimCurve>>*)(*local_58)[(long)iVar3];
                    iVar3 = GetGroupIndex((unsigned int)bVar2);
                    psVar7 = (shared_ptr<OldscapeAnimCurve>*)(*pvVar6)[(long)iVar3];
                    *psVar7 = local_48;
                } else {
                    pvVar6 = (vector<shared_ptr<OldscapeAnimCurve>>*)(*local_50)[(long)iVar3];
                    iVar3 = GetGroupIndex((unsigned int)bVar2);
                    psVar7 = (shared_ptr<OldscapeAnimCurve>*)(*pvVar6)[(long)iVar3];
                    *psVar7 = local_48;
                }
                arg1 = arg1 + 1;
            } while (arg1 < *(unsigned long*)(this + 48));
        }
    }

} // namespace jag::oldscape::graphics::animation

namespace jag {
    // 0x100323780
    shared_ptr_if_not_array<oldscape::graphics::animation::OldscapeAnimCurve>::type
    make_shared<oldscape::graphics::animation::OldscapeAnimCurve>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        OldscapeAnimCurve* local_28[2];

        auto arg1 = aligned_alloc(160, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::graphics::animation::OldscapeAnimCurve>::type result;
        } else {
            local_28[0] = placement_new<oldscape::graphics::animation::OldscapeAnimCurve>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::graphics::animation::OldscapeAnimCurve>, int,
                              oldscape::graphics::animation::OldscapeAnimCurve*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag

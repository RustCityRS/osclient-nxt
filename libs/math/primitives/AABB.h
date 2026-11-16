// libs/math/primitives/AABB.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::math {
    class AABB {
    public:
        void GetMinimum();
        void GetMinimum() const;
        float GetMaximum();
        float GetMaximum() const;
        AABB(Vector3T<float>&& vector31, Vector3T<float>&& vector32);
        AABB(const Vector3T<float>& vector31, const Vector3T<float>& vector32);
        uint32_t GetMaxY() const;
        AABB* operator=(const AABB& aabb);
        AABB* operator=(AABB&& aabb);
        uint32_t GetMinX() const;
        uint32_t GetMinZ() const;
        uint32_t GetMaxZ() const;
        uint32_t GetMaxX() const;
        void GetCornerPos(unsigned int arg1) const;
        AABB(AABB&& aabb);
        uint32_t GetMinY() const;
        void Reset();
        void AddPoint(const Vector3T<float>& vector3);
        uint64_t GetCentrePos() const;
        AABB(const OBB& obb);
        void Set(const OBB& obb);
        AABB(PacketT<Array<unsigned char>>& arg1);
        void Serialise(PacketT<Array<unsigned char>>& arg1) const;
        void DirtyDerivedState();
        void Set(const AABB& aabb);
        void Set(const Vector3T<float>& vector31, const Vector3T<float>& vector32);
        void Translate(const Vector3T<float>& vector3);
        void IsValid() const;
        void Scale(const Vector3T<float>& vector3);
        void Transform(const Matrix44T<float>& matrix44);
        void GetOBB(OBB& obb) const;
        uint64_t GetDimensions() const;
        void GetMinimumEnclosingSphere(Sphere& sphere) const;
        float GetMaximumRadius() const;
        void GetMaximumContainedSphere(Sphere& sphere) const;
        void GetMinimumRadius() const;
        auto GetTransform() const;
        float GetWidth() const;
        float GetHeight() const;
        float GetLength() const;
        void AddAABB(const AABB& aabb);
        void Union(const AABB& aabb);
        auto Union(const AABB& aabb1, const AABB& aabb2);
        AABB(const AABB& aabb);
        void Intersection(const AABB& aabb);
        uint64_t SloppyCompare(const AABB& aabb, float arg2) const;
        uint64_t GetCornerPos(BoxCorner boxCorner) const;
        bool IsInside(const Vector3T<float>& vector3) const;
        bool IsInside(const AABB& aabb) const;
        bool TestIntersection(const Sphere& sphere) const;
        unsigned long TestIntersection(const Vector3T<float>& vector31, const Vector3T<float>& vector32) const;
        uint64_t TestIntersection(const AABB& aabb) const;
        uint64_t GetClosestPoint(const Vector3T<float>& vector3) const;
        uint64_t GetFurthestPoint(const Vector3T<float>& vector3) const;
        uint64_t GetDistanceToPoint(const Vector3T<float>& vector3) const;
        uint64_t GetDistanceToPointSquared(const Vector3T<float>& vector3) const;
        uint64_t GetDistanceToPointXZ(const Vector3T<float>& vector3) const;
        uint64_t GetDistanceToPointXZSquared(const Vector3T<float>& vector3) const;
        unsigned int GetDistanceAABBXZSquared(const AABB& aabb) const;
        AABB();

    private:
        float field_0;
        float field_4;
        float field_8;
        uint32_t field_12;
        float m_maximum;
        float field_20;
        float field_24;
        float field_28;
        uint8_t _unknown_32[4];
    };

    // 0x1001df1a0
    AABB::AABB(Vector3T<float>&& vector31, Vector3T<float>&& vector32) {
        field_8 = *(float*)(vector31 + 8);
        uint64_t uVar1 = *(uint64_t*)vector31;
        field_0 = (float)(int)uVar1;
        field_4 = (float)(int)((unsigned long)uVar1 >> 32);
        field_12 = 0;
        uVar1 = *(uint64_t*)vector32;
        m_maximum = (float)(int)uVar1;
        field_20 = (float)(int)((unsigned long)uVar1 >> 32);
        field_24 = *(float*)(vector32 + 8);
        field_28 = -1.0;
    }

    // 0x100352730
    uint32_t AABB::GetMaxY() const {
        auto puVar1 = m_maximum.y();
        return *puVar1;
    }

    // 0x10036a690
    AABB* AABB::operator=(const AABB& aabb) {
        SetXYZ(aabb);
        field_12 = 0;
        m_maximum.SetXYZ(aabb.m_maximum);
        field_28 = aabb.field_28;
        return this;
    }

    // 0x10036e7a0
    uint32_t AABB::GetMinX() const {
        auto puVar1 = SSOBeginPtr();
        return *puVar1;
    }

    // 0x10036e7b0
    uint32_t AABB::GetMinZ() const {
        auto puVar1 = second();
        return *puVar1;
    }

    // 0x10036e7c0
    uint32_t AABB::GetMaxZ() const {
        auto puVar1 = m_maximum.second();
        return *puVar1;
    }

    // 0x10036e7e0
    uint32_t AABB::GetMaxX() const {
        auto puVar1 = m_maximum.SSOBeginPtr();
        return *puVar1;
    }

    // 0x1007ab8f0
    void AABB::GetCornerPos(unsigned int arg1) const {
        GetCornerPos(arg1);
    }

    // 0x100850c70
    AABB::AABB(AABB&& aabb) : field_8(aabb.field_8) {
        float fVar1 = aabb.field_4;
        field_0 = aabb.field_0;
        field_4 = fVar1;
        field_12 = 0;
        fVar1 = aabb.field_20;
        m_maximum = aabb.m_maximum;
        field_20 = fVar1;
        field_24 = aabb.field_24;
        field_28 = aabb.field_28;
    }

    // 0x1008b2310
    uint32_t AABB::GetMinY() const {
        auto puVar1 = y();
        return *puVar1;
    }

    // 0x100c63ce0
    uint64_t AABB::GetCentrePos() const {
        uint64_t uVar1;

        ColourHSL local_18((m_maximum + field_0) * 0.5, (field_20 + field_4) * 0.5, (field_24 + field_8) * 0.5);
        uVar1._0_4_ = local_18.field_0;
        uVar1._4_4_ = local_18.field_4;
        return uVar1;
    }

    // 0x100c66c40
    void AABB::DirtyDerivedState() {
        field_28 = -1.0;
    }

    // 0x100c66db0
    void AABB::IsValid() const {
        m_maximum >= *this;
    }

    // 0x100c67210
    uint64_t AABB::GetDimensions() const {
        uint64_t uVar1;

        float local_18 = (float)GetWidth();
        float local_14 = (float)GetHeight();
        float arg3 = (float)GetLength();
        ColourHSL local_28(local_18, local_14, arg3);
        uVar1._0_4_ = local_28.field_0;
        uVar1._4_4_ = local_28.field_4;
        return uVar1;
    }

    // 0x100c67350
    void AABB::GetMinimumRadius() const {
        uint64_t local_28[2];
        uint64_t local_18[2];

        local_18[0] = m_maximum - *this;
        local_28[0] = *0.5 * *local_18;
        local_28->MinElement();
    }

    // 0x100c67420
    float AABB::GetWidth() const {
        return m_maximum - field_0;
    }

    // 0x100c67430
    float AABB::GetHeight() const {
        return field_20 - field_4;
    }

    // 0x100c67440
    float AABB::GetLength() const {
        return field_24 - field_8;
    }

    // 0x100c6da10
    AABB::AABB(const AABB& aabb) {
        auto puVar2 = aabb.SSOBeginPtr();
        uint64_t uVar1 = *puVar2;
        field_0 = (float)(int)uVar1;
        field_4 = (float)(int)((unsigned long)uVar1 >> 32);
        field_8 = *(float*)(puVar2 + 1);
        field_12 = 0;
        puVar2 = (uint64_t*)aabb.GetScreen();
        uVar1 = *puVar2;
        m_maximum = (float)(int)uVar1;
        field_20 = (float)(int)((unsigned long)uVar1 >> 32);
        field_24 = *(float*)(puVar2 + 1);
        field_28 = -1.0;
    }

    // 0x100c6e250
    AABB::AABB()
        : ColourHSL(3.4028235e+38, 3.4028235e+38, 3.4028235e+38), field_12(0),
          m_maximum(-3.4028235e+38, -3.4028235e+38, -3.4028235e+38), field_28(-1.0) {}

} // namespace jag::math

namespace jag::oldscape::dash3d {
    class ModelLit::AABB {
    public:
        AABB();
        AABB(jag::math::Vector3T<int> vector31, jag::math::Vector3T<int> vector32);

    private:
        uint32_t field_0;
        uint32_t field_4;
        uint32_t field_8;
        uint32_t field_12;
        uint32_t field_16;
        uint32_t field_20;
    };

    // 0x100326140
    ModelLit::AABB::AABB(jag::math::Vector3T<int> vector31, jag::math::Vector3T<int> vector32) {
        Vector3T<int>* local_28[2];

        uint32_t local_30 = (uint32_t)vector31;
        local_28[0] = vector32;
    }

    // 0x100352800
    void ModelRSevenLit::Animate(const shared_ptr<AnimFrameSet>& animFrameSet, int arg2) {
        field_24->AddOperation<DashAnimateOperation, shared_ptr<AnimFrameSet> const&, int&>(animFrameSet, arg2);
    }

    // 0x100352820
    void ModelRSevenCommon::AddOperation<DashAnimateOperation, shared_ptr<AnimFrameSet> const&, int&>(
        const shared_ptr<AnimFrameSet>& animFrameSet, int& arg2) {
        ReturnValue local_48;
        shared_ptr<RSevenDebugPresetProvider> local_38;

        field_16->Flush(*this);
        make_shared<DashAnimateOperation, shared_ptr<AnimFrameSet> const&, int&>(&local_48, animFrameSet, arg2);
        local_38.shared_ptr<FileRSevenDebugPresetProvider, void>(local_48);
        AddOperation(local_38);
    }

    // 0x1003528b0
    void
    ModelRSevenLit::Animate(const shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>& oldscapeAnimKeyFrameSet,
                            int arg2) {
        ReturnValue local_30;

        int local_1c = arg2;
        make_shared<MayaPoseStateRSeven, shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet> const&, int&>(
            &local_30, oldscapeAnimKeyFrameSet, &local_1c);
        field_24->AddOperation<AnimateOperation, shared_ptr<MayaPoseStateRSeven>>(local_30);
    }

    // 0x100352910
    void ModelRSevenCommon::AddOperation<AnimateOperation, shared_ptr<MayaPoseStateRSeven>>(
        shared_ptr<MayaPoseStateRSeven>&& mayaPoseStateRSeven) {
        ReturnValue local_40;
        shared_ptr<RSevenDebugPresetProvider> local_30;

        field_16->Flush(*this);
        make_shared<AnimateOperation, shared_ptr<MayaPoseStateRSeven>>(&local_40, mayaPoseStateRSeven);
        local_30.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
        AddOperation(local_30);
    }

    // 0x100352a50
    void ModelRSevenLit::SplitAnimate(const shared_ptr<AnimFrameSet>& animFrameSet1, int arg2,
                                      const shared_ptr<AnimFrameSet>& animFrameSet2, int arg4, int* arg5) {
        int iVar1;
        int* piVar4;
        unsigned long uVar5;

        auto this_01 = animFrameSet1.operator->();
        shared_ptr<AnimBase>* this_02 = (shared_ptr<AnimBase>*)(*this_01)[(long)arg2];
        long lVar2 = (*this_02).operator->();
        unsigned long uVar3 = ((lVar2 + 8))->size();
        Array<int> local_60(uVar3);
        lVar2 = local_60.end();
        if (lVar2 != 0) {
            uVar3 = 0;
            do {
                iVar1 = arg5[uVar3];
                piVar4 = &local_60[uVar3];
                *piVar4 = iVar1;
                uVar3 = uVar3 + 1;
                uVar5 = local_60.end();
            } while (uVar3 < uVar5);
        }
        MaskAnimate(animFrameSet1, arg2, local_60, false);
        MaskAnimate(animFrameSet2, arg4, local_60, true);
    }

    // 0x100352b50
    void ModelRSevenLit::MaskAnimate(const shared_ptr<AnimFrameSet>& animFrameSet, int arg2, const Array<int>& arg3,
                                     bool arg4) {
        field_24->AddOperation<DashAnimateOperation, shared_ptr<AnimFrameSet> const&, int&, Array<int> const&, bool&>(
            animFrameSet, arg2, arg3, arg4);
    }

    // 0x100352b80
    void
    ModelRSevenLit::MaskAnimate(const shared_ptr<AnimBase>& animBase,
                                const shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>& oldscapeAnimKeyFrameSet,
                                int arg3, Array<bool> arg4, bool arg5, bool arg6) {
        ReturnValue local_30;
        int local_20;
        bool local_19;

        if (arg6) {
            local_20 = arg3;
            local_19 = arg5;
            make_shared<MayaPoseStateRSeven, shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet> const&, int&,
                        Array<bool>&, bool&>(&local_30, oldscapeAnimKeyFrameSet, &local_20, arg4, &local_19);
            field_24->AddOperation<AnimateOperation, shared_ptr<MayaPoseStateRSeven>>(local_30);
        }
    }

    // 0x100352cc0
    void ModelRSevenCommon::AddOperation<DashAnimateOperation, shared_ptr<AnimFrameSet> const&, int&, Array<int> const&,
                                         bool&>(const shared_ptr<AnimFrameSet>& animFrameSet, int& arg2,
                                                const Array<int>& arg3, bool& arg4) {
        shared_ptr<RSevenDebugPresetProvider> local_50;
        ReturnValue local_40;

        field_16->Flush(*this);
        make_shared<DashAnimateOperation, shared_ptr<AnimFrameSet> const&, int&, Array<int> const&, bool&>(
            &local_40, animFrameSet, arg2, arg3, arg4);
        local_50.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
        AddOperation(local_50);
    }

    // 0x100352d60
    void ModelRSevenLit::Tint(signed char arg1, signed char arg2, signed char arg3, unsigned char arg4) {
        field_24->AddOperation<TintOperation, signed char&, signed char&, signed char&, unsigned char&>(arg1, arg2,
                                                                                                        arg3, arg4);
    }

    // 0x100352da0
    void ModelRSevenCommon::AddOperation<TintOperation, signed char&, signed char&, signed char&, unsigned char&>(
        signed char& arg1, signed char& arg2, signed char& arg3, unsigned char& arg4) {
        shared_ptr<RSevenDebugPresetProvider> local_50;
        ReturnValue local_40;

        field_16->Flush(*this);
        make_shared<TintOperation, signed char&, signed char&, signed char&, unsigned char&>(&local_40, arg1, arg2,
                                                                                             arg3, arg4);
        local_50.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
        AddOperation(local_50);
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x1003529a0
    shared_ptr_if_not_array<oldscape::dash3d::MayaPoseStateRSeven>::type
    make_shared<oldscape::dash3d::MayaPoseStateRSeven,
                shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet> const&, int&>(
        const shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>& oldscapeAnimKeyFrameSet, int& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        MayaPoseStateRSeven* local_38[2];

        auto arg1 = aligned_alloc(144, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::MayaPoseStateRSeven>::type result;
        } else {
            local_38[0] =
                placement_new<oldscape::dash3d::MayaPoseStateRSeven,
                              shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet> const&, int&>(
                    (void*)((long)arg1 + 32), oldscapeAnimKeyFrameSet, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::MayaPoseStateRSeven>, int,
                              oldscape::dash3d::MayaPoseStateRSeven*&>(arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x100352c00
    shared_ptr_if_not_array<oldscape::dash3d::MayaPoseStateRSeven>::type
    make_shared<oldscape::dash3d::MayaPoseStateRSeven,
                shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet> const&, int&, Array<bool>&, bool&>(
        const shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>& oldscapeAnimKeyFrameSet, int& arg2,
        Array<bool>& arg3, bool& arg4) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        MayaPoseStateRSeven* local_40[2];

        auto arg1 = aligned_alloc(144, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::MayaPoseStateRSeven>::type result;
        } else {
            local_40[0] =
                placement_new<oldscape::dash3d::MayaPoseStateRSeven,
                              shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet> const&, int&,
                              Array<bool>&, bool&>((void*)((long)arg1 + 32), oldscapeAnimKeyFrameSet, arg2, arg3, arg4);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::MayaPoseStateRSeven>, int,
                              oldscape::dash3d::MayaPoseStateRSeven*&>(arg1, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

} // namespace jag

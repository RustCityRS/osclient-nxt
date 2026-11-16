// libs/math/primitives/AABB.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::math {
    class AABB {
    public:
        GetMinimum();
        GetMinimum() const;
        float GetMaximum();
        float GetMaximum() const;
        AABB(Vector3T<float>&&, Vector3T<float>&&);
        AABB(Vector3T<float> const&, Vector3T<float> const&);
        GetMaxY() const;
        AABB* operator=(AABB const&);
        AABB* operator=(AABB&&);
        GetMinX() const;
        GetMinZ() const;
        GetMaxZ() const;
        GetMaxX() const;
        void GetCornerPos(unsigned int) const;
        AABB(AABB&&);
        GetMinY() const;
        void Reset();
        void AddPoint(Vector3T<float> const&);
        GetCentrePos() const;
        AABB(OBB const&);
        void Set(OBB const&);
        AABB(PacketT<Array<unsigned char, eastl::allocator>>&);
        void Serialise(PacketT<Array<unsigned char, eastl::allocator>>&) const;
        void DirtyDerivedState();
        void Set(AABB const&);
        void Set(Vector3T<float> const&, Vector3T<float> const&);
        void Translate(Vector3T<float> const&);
        void IsValid() const;
        void Scale(Vector3T<float> const&);
        void Transform(Matrix44T<float> const&);
        void GetOBB(OBB&) const;
        GetDimensions() const;
        void GetMinimumEnclosingSphere(Sphere&) const;
        float GetMaximumRadius() const;
        void GetMaximumContainedSphere(Sphere&) const;
        void GetMinimumRadius() const;
        GetTransform() const;
        float GetWidth() const;
        float GetHeight() const;
        float GetLength() const;
        void AddAABB(AABB const&);
        void Union(AABB const&);
        AABB* Union(AABB const&, AABB const&);
        AABB(AABB const&);
        void Intersection(AABB const&);
        SloppyCompare(AABB const&, float) const;
        GetCornerPos(BoxCorner) const;
        bool IsInside(Vector3T<float> const&) const;
        IsInside(AABB const&) const;
        bool TestIntersection(Sphere const&) const;
        ulong TestIntersection(Vector3T<float> const&, Vector3T<float> const&) const;
        TestIntersection(AABB const&) const;
        GetClosestPoint(Vector3T<float> const&) const;
        GetFurthestPoint(Vector3T<float> const&) const;
        GetDistanceToPoint(Vector3T<float> const&) const;
        GetDistanceToPointSquared(Vector3T<float> const&) const;
        GetDistanceToPointXZ(Vector3T<float> const&) const;
        GetDistanceToPointXZSquared(Vector3T<float> const&) const;
        uint GetDistanceAABBXZSquared(AABB const&) const;
        AABB();

        // data members, from how the methods use this: 36 bytes
        float field_0;       // offset 0
        float field_4;       // offset 4
        float field_8;       // offset 8
        undefined4 field_12; // offset 12
        float m_maximum;     // offset 16
        float field_20;      // offset 20
        float field_24;      // offset 24
        float field_28;      // offset 28
        char _unknown_32[4];
    };

    // 0x1001df1a0, 48 bytes, base-object constructor, inline, placed by class name
    // AABB::AABB(Vector3T<float>&&, Vector3T<float>&&)
    /* AABB::AABB(Vector3T<float> const&, Vector3T<float> const&) */

    void AABB::AABB(Vector3T* param_1, Vector3T* param_2) {
        undefined8 uVar1;

        field_8 = *(float*)(param_1 + 8);
        uVar1 = *(undefined8*)param_1;
        field_0 = (float)(int)uVar1;
        field_4 = (float)(int)((ulong)uVar1 >> 32);
        field_12 = 0;
        uVar1 = *(undefined8*)param_2;
        m_maximum = (float)(int)uVar1;
        field_20 = (float)(int)((ulong)uVar1 >> 32);
        field_24 = *(float*)(param_2 + 8);
        field_28 = -1.0;
    }

    // 0x100352730, 32 bytes, inline, placed by class name and debug map
    // AABB::GetMaxY() const
    undefined4 AABB::GetMaxY() {
        undefined4* puVar1;

        puVar1 = (undefined4*)(&m_maximum)->y();
        return *puVar1;
    }

    // 0x10036a690, 64 bytes, inline, placed by class name
    // AABB::operator=(AABB const&)
    /* AABB::TEMPNAMEPLACEHOLDERVALUE(AABB&&) */

    AABB* AABB::operator=(AABB* param_1) {
        SetXYZ(param_1);
        field_12 = 0;
        (&m_maximum, (Vector3T*)&param_1->m_maximum)->SetXYZ();
        field_28 = param_1->field_28;
        return this;
    }

    // 0x10036e7a0, 16 bytes, inline, placed by class name
    // AABB::GetMinX() const
    undefined4 AABB::GetMinX() {
        vector* pvVar1;
        type* in_RSI;
        Layout* in_RDI;

        pvVar1 = eastl::string::Layout::SSOBeginPtr(in_RDI, in_RSI);
        return *(undefined4*)pvVar1;
    }

    // 0x10036e7b0, 16 bytes, inline, placed by class name
    // AABB::GetMinZ() const
    undefined4 AABB::GetMinZ() {
        undefined4* puVar1;

        puVar1 = (undefined4*)second();
        return *puVar1;
    }

    // 0x10036e7c0, 32 bytes, inline, placed by class name
    // AABB::GetMaxZ() const
    undefined4 AABB::GetMaxZ() {
        undefined4* puVar1;

        puVar1 = (undefined4*)(&m_maximum)->second();
        return *puVar1;
    }

    // 0x10036e7e0, 32 bytes, inline, placed by class name
    // AABB::GetMaxX() const
    undefined4 AABB::GetMaxX() {
        vector* pvVar1;
        type* in_RSI;
        long in_RDI;

        pvVar1 = ((in_RDI + 16))->SSOBeginPtr(in_RSI);
        return *(undefined4*)pvVar1;
    }

    // 0x1007ab8f0, 16 bytes, inline, placed by class name
    // AABB::GetCornerPos(unsigned int) const
    void AABB::GetCornerPos(uint param_1) {
        GetCornerPos();
    }

    // 0x100850900, 16 bytes, complete-object constructor, inline, placed by class name
    // AABB::AABB(AABB&&): jumps straight to the base-object constructor

    // 0x100850c70, 64 bytes, base-object constructor, inline, placed by class name
    // AABB::AABB(AABB&&)
    void AABB::AABB(AABB* param_1) {
        float fVar1;

        field_8 = param_1->field_8;
        fVar1 = param_1->field_4;
        field_0 = param_1->field_0;
        field_4 = fVar1;
        field_12 = 0;
        fVar1 = param_1->field_20;
        m_maximum = param_1->m_maximum;
        field_20 = fVar1;
        field_24 = param_1->field_24;
        field_28 = param_1->field_28;
    }

    // 0x1008b2310, 16 bytes, inline, placed by class name
    // AABB::GetMinY() const
    undefined4 AABB::GetMinY() {
        undefined4* puVar1;

        puVar1 = (undefined4*)y();
        return *puVar1;
    }

    // 0x100c63ce0, 96 bytes, inline, placed by class name
    // AABB::GetCentrePos() const
    undefined8 AABB::GetCentrePos() {
        undefined8 uVar1;
        ColourHSL local_18;

        new (&local_18) ColourHSL((m_maximum + field_0) * 0.5, (field_20 + field_4) * 0.5, (field_24 + field_8) * 0.5);
        uVar1._0_4_ = local_18.field_0;
        uVar1._4_4_ = local_18.field_4;
        return uVar1;
    }

    // 0x100c66c40, 16 bytes, inline, placed by class name
    // AABB::DirtyDerivedState()
    void AABB::DirtyDerivedState() {
        field_28 = -1.0;
    }

    // 0x100c66db0, 32 bytes, inline, placed by class name
    // AABB::IsValid() const
    void AABB::IsValid() {
        operator>=((Vector3T*)&m_maximum, (Vector3T*)this);
    }

    // 0x100c67210, 96 bytes, inline, placed by class name
    // AABB::GetDimensions() const
    undefined8 AABB::GetDimensions() {
        float fVar1;
        undefined8 uVar2;
        ColourHSL local_28;
        float local_18;
        float local_14;

        local_18 = (float)GetWidth(this);
        local_14 = (float)GetHeight(this);
        fVar1 = (float)GetLength(this);
        new (&local_28) ColourHSL(local_18, local_14, fVar1);
        uVar2._0_4_ = local_28.field_0;
        uVar2._4_4_ = local_28.field_4;
        return uVar2;
    }

    // 0x100c67350, 80 bytes, inline, placed by class name
    // AABB::GetMinimumRadius() const
    void AABB::GetMinimumRadius() {
        undefined8 local_28[2];
        undefined8 local_18[2];

        local_18[0] = math::operator-((Vector3T*)&m_maximum, (Vector3T*)this);
        local_28[0] = math::operator*((Vector3T*)local_18, 0.5);
        local_28->MinElement();
    }

    // 0x100c67420, 16 bytes, inline, placed by class name
    // AABB::GetWidth() const
    float AABB::GetWidth() {
        return m_maximum - field_0;
    }

    // 0x100c67430, 16 bytes, inline, placed by class name
    // AABB::GetHeight() const
    float AABB::GetHeight() {
        return field_20 - field_4;
    }

    // 0x100c67440, 16 bytes, inline, placed by class name
    // AABB::GetLength() const
    float AABB::GetLength() {
        return field_24 - field_8;
    }

    // 0x100c67620, 16 bytes, complete-object constructor, inline, placed by class name
    // AABB::AABB(AABB const&): jumps straight to the base-object constructor

    // 0x100c6b7e0, 16 bytes, complete-object constructor, inline, placed by class name
    // AABB::AABB(): jumps straight to the base-object constructor

    // 0x100c6da10, 80 bytes, base-object constructor, inline, placed by class name
    // AABB::AABB(AABB const&)
    void AABB::AABB(AABB* param_1) {
        undefined8 uVar1;
        vector* pvVar2;
        undefined8* puVar3;

        pvVar2 = param_1->SSOBeginPtr(param_1);
        uVar1 = *(undefined8*)pvVar2;
        field_0 = (float)(int)uVar1;
        field_4 = (float)(int)((ulong)uVar1 >> 32);
        field_8 = *(float*)(pvVar2 + 8);
        field_12 = 0;
        puVar3 = (undefined8*)param_1->GetScreen();
        uVar1 = *puVar3;
        m_maximum = (float)(int)uVar1;
        field_20 = (float)(int)((ulong)uVar1 >> 32);
        field_24 = *(float*)(puVar3 + 1);
        field_28 = -1.0;
    }

    // 0x100c6e250, 80 bytes, base-object constructor, inline, placed by class name
    // AABB::AABB()
    void AABB::AABB() {
        new (this) ColourHSL(3.4028235e+38, 3.4028235e+38, 3.4028235e+38);
        field_12 = 0;
        new (&m_maximum, -3.4028235e+38, -3.4028235e+38, -3.4028235e+38) ColourHSL();
        field_28 = -1.0;
    }

} // namespace jag::math

namespace jag::oldscape::dash3d {
    class ModelLit::AABB {
    public:
        AABB();
        AABB(jag::math::Vector3T<int>, jag::math::Vector3T<int>);

        // data members, from how the methods use this: 24 bytes
        undefined4 field_0;  // offset 0
        undefined4 field_4;  // offset 4
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        undefined4 field_16; // offset 16
        undefined4 field_20; // offset 20
    };

    // 0x1002f2560, 16 bytes, complete-object constructor, inline, placed by class name
    // ModelLit::AABB::AABB(jag::math::Vector3T<int>, jag::math::Vector3T<int>): jumps straight to the base-object constructor

    // 0x100326140, 128 bytes, base-object constructor, inline, placed by class name
    // ModelLit::AABB::AABB(jag::math::Vector3T<int>, jag::math::Vector3T<int>)
    void ModelLit::AABB::AABB(type* param_2, undefined4 param_3, undefined8 param_4, undefined4 param_5) {
        vector* pvVar1;
        undefined4* puVar2;
        type* local_38;
        undefined4 local_30;
        undefined8 local_28;
        undefined4 local_20;

        local_38 = param_2;
        local_30 = param_3;
        local_28 = param_4;
        local_20 = param_5;
        pvVar1 = local_38.SSOBeginPtr(param_2);
        field_0 = *(undefined4*)pvVar1;
        puVar2 = (undefined4*)local_38.y();
        field_4 = *puVar2;
        puVar2 = (undefined4*)local_38.second();
        field_8 = *puVar2;
        pvVar1 = local_28.SSOBeginPtr(param_2);
        field_12 = *(undefined4*)pvVar1;
        puVar2 = (undefined4*)local_28.y();
        field_16 = *puVar2;
        puVar2 = (undefined4*)local_28.second();
        field_20 = *puVar2;
    }

    // 0x100352800, 32 bytes, placed by debug map only (low confidence)
    // ModelRSevenLit::Animate(shared_ptr<AnimFrameSet> const&, int)
    void ModelRSevenLit::Animate(shared_ptr* param_1, int param_2) {
        int local_c;

        local_c = param_2;
        ModelRSevenCommon::AddOperation<DashAnimateOperation, shared_ptr<AnimFrameSet> const&, int&>(
            (ModelRSevenCommon*)field_24, param_1, &local_c);
    }

    // 0x100352820, 144 bytes, inline, placed by debug map only (low confidence)
    // void ModelRSevenCommon::AddOperation<DashAnimateOperation, shared_ptr<AnimFrameSet> const&, int&>(shared_ptr<AnimFrameSet> const&, int&)
    void
    ModelRSevenCommon::AddOperation<DashAnimateOperation, shared_ptr<AnimFrameSet> const&, int&>(shared_ptr* param_1,
                                                                                                 int* param_2) {
        shared_ptr local_48;
        shared_ptr local_38;

        (field_16, (OperationBuffer*)this)->Flush();
        make_shared<DashAnimateOperation, shared_ptr<AnimFrameSet> const&, int&>((jag*)&local_48, param_1, param_2);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_38, &local_48);
        AddOperation(&local_38);
        local_38.~shared_ptr();
        local_48.~shared_ptr();
    }

    // 0x1003528b0, 96 bytes, placed by debug map only (low confidence)
    // ModelRSevenLit::Animate(shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet> const&, int)
    void ModelRSevenLit::Animate(shared_ptr* param_1, int param_2) {
        shared_ptr local_30;
        int local_1c;

        local_1c = param_2;
        make_shared<MayaPoseStateRSeven, shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet> const&, int&>(
            (jag*)&local_30, param_1, &local_1c);
        ModelRSevenCommon::AddOperation<AnimateOperation, shared_ptr<MayaPoseStateRSeven>>((ModelRSevenCommon*)field_24,
                                                                                           &local_30);
        local_30.~shared_ptr();
    }

    // 0x100352910, 144 bytes, inline, placed by debug map only (low confidence)
    // void ModelRSevenCommon::AddOperation<AnimateOperation, shared_ptr<MayaPoseStateRSeven> >(shared_ptr<MayaPoseStateRSeven>&&)
    void ModelRSevenCommon::AddOperation<AnimateOperation, shared_ptr<MayaPoseStateRSeven>>(shared_ptr* param_1) {
        shared_ptr local_40;
        shared_ptr local_30;

        (field_16, (OperationBuffer*)this)->Flush();
        make_shared<AnimateOperation, shared_ptr<MayaPoseStateRSeven>>((jag*)&local_40, param_1);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_30, &local_40);
        AddOperation(&local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
    }

    // 0x100352a50, 256 bytes, placed by debug map only (low confidence)
    // ModelRSevenLit::SplitAnimate(shared_ptr<AnimFrameSet> const&, int, shared_ptr<AnimFrameSet> const&, int, int*)
    void ModelRSevenLit::SplitAnimate(shared_ptr* param_1, int param_2, shared_ptr* param_3, int param_4,
                                      int* param_5) {
        int iVar1;
        Array<AnimFrame, eastl::allocator>* this_01;
        shared_ptr<AnimBase>* this_02;
        long lVar2;
        ulong uVar3;
        int* piVar4;
        ulong uVar5;
        Array<int, eastl::allocator> local_60[24];

        this_01 = (Array<AnimFrame, eastl::allocator>*)shared_ptr<AnimFrameSet>::operator->(
            (shared_ptr<AnimFrameSet>*)param_1);
        this_02 = (shared_ptr<AnimBase>*)Array<AnimFrame, eastl::allocator>::operator[](this_01, (long)param_2);
        lVar2 = shared_ptr<AnimBase>::operator->(this_02);
        uVar3 = ((lVar2 + 8))->size();
        Array<int, eastl::allocator>::Array(local_60, uVar3);
        lVar2 = local_60->end();
        if (lVar2 != 0) {
            uVar3 = 0;
            do {
                iVar1 = param_5[uVar3];
                piVar4 = (int*)Array<int, eastl::allocator>::operator[](local_60, uVar3);
                *piVar4 = iVar1;
                uVar3 = uVar3 + 1;
                uVar5 = local_60->end();
            } while (uVar3 < uVar5);
        }
        MaskAnimate((ModelRSevenLit*)this, param_1, param_2, (Array*)local_60, false);
        MaskAnimate((ModelRSevenLit*)this, param_3, param_4, (Array*)local_60, true);
        local_60->~Array();
    }

    // 0x100352b50, 48 bytes, placed by debug map only (low confidence)
    // ModelRSevenLit::MaskAnimate(shared_ptr<AnimFrameSet> const&, int, Array<int, eastl::allocator> const&, bool)
    void ModelRSevenLit::MaskAnimate(shared_ptr* param_1, int param_2, Array* param_3, bool param_4) {
        int local_10;
        bool local_9;

        local_10 = param_2;
        local_9 = param_4;
        ModelRSevenCommon::AddOperation<DashAnimateOperation, shared_ptr<AnimFrameSet> const&, int&,
                                        Array<int, eastl::allocator> const&, bool&>(
            (ModelRSevenCommon*)field_24, param_1, &local_10, param_3, &local_9);
    }

    // 0x100352b80, 128 bytes, placed by debug map only (low confidence)
    // ModelRSevenLit::MaskAnimate(shared_ptr<AnimBase> const&, shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet> const&, int, Array<bool, eastl::allocator>, bool, bool)
    void ModelRSevenLit::MaskAnimate(undefined8 param_2_00, shared_ptr* param_2, int param_3, Array* param_5,
                                     undefined1 param_6, char param_7) {
        shared_ptr local_30;
        int local_20;
        bool local_19;

        if (param_7 != '\0') {
            local_20 = param_3;
            local_19 = (bool)param_6;
            make_shared<MayaPoseStateRSeven, shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet> const&, int&,
                        Array<bool, eastl::allocator>&, bool&>((jag*)&local_30, param_2, &local_20, param_5, &local_19);
            ModelRSevenCommon::AddOperation<AnimateOperation, shared_ptr<MayaPoseStateRSeven>>(
                (ModelRSevenCommon*)field_24, &local_30);
            local_30.~shared_ptr();
        }
    }

    // 0x100352cc0, 160 bytes, inline, placed by debug map only (low confidence)
    // void ModelRSevenCommon::AddOperation<DashAnimateOperation, shared_ptr<AnimFrameSet> const&, int&, Array<int, eastl::allocator> const&, bool&>(shared_ptr<AnimFrameSet> const&, int&, Array<int, eastl::allocator> const&, bool&)
    void ModelRSevenCommon::AddOperation<DashAnimateOperation, shared_ptr<AnimFrameSet> const&, int&,
                                         Array<int, eastl::allocator> const&, bool&>(shared_ptr* param_1, int* param_2,
                                                                                     Array* param_3, bool* param_4) {
        shared_ptr local_50;
        shared_ptr local_40;

        (field_16, (OperationBuffer*)this)->Flush();
        make_shared<DashAnimateOperation, shared_ptr<AnimFrameSet> const&, int&, Array<int, eastl::allocator> const&,
                    bool&>((jag*)&local_40, param_1, param_2, param_3, param_4);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_50, &local_40);
        AddOperation(&local_50);
        local_50.~shared_ptr();
        local_40.~shared_ptr();
    }

    // 0x100352d60, 64 bytes, placed by debug map only (low confidence)
    // ModelRSevenLit::Tint(signed char, signed char, signed char, unsigned char)
    void ModelRSevenLit::Tint(signed param_2, signed param_3, signed param_4, uchar param_5) {
        signed local_c;
        signed local_b;
        signed local_a;
        uchar local_9;

        local_c = param_2;
        local_b = param_3;
        local_a = param_4;
        local_9 = param_5;
        ModelRSevenCommon::AddOperation<TintOperation, signed char&, signed char&, signed char&, unsigned char&>(
            (ModelRSevenCommon*)field_24, &local_c, &local_b, &local_a, &local_9);
    }

    // 0x100352da0, 160 bytes, inline, placed by debug map only (low confidence)
    // void ModelRSevenCommon::AddOperation<TintOperation, signed char&, signed char&, signed char&, unsigned char&>(signed char&, signed char&, signed char&, unsigned char&)
    void ModelRSevenCommon::AddOperation<TintOperation, signed char&, signed char&, signed char&, unsigned char&>(
        signed* param_1, signed* param_2, signed* param_3, uchar* param_4) {
        shared_ptr local_50;
        shared_ptr local_40;

        (field_16, (OperationBuffer*)this)->Flush();
        make_shared<TintOperation, signed char&, signed char&, signed char&, unsigned char&>((jag*)&local_40, param_1,
                                                                                             param_2, param_3, param_4);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_50, &local_40);
        AddOperation(&local_50);
        local_50.~shared_ptr();
        local_40.~shared_ptr();
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x1003529a0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::MayaPoseStateRSeven>::type make_shared<oldscape::dash3d::MayaPoseStateRSeven, shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet> const&, int&>(shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet> const&, int&)
    jag* jag::make_shared<oldscape::dash3d::MayaPoseStateRSeven,
                          shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet> const&, int&>(
        shared_ptr* param_1, int* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        MayaPoseStateRSeven* local_38[2];

        pvVar1 = (void*)aligned_alloc(144, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] =
                placement_new<oldscape::dash3d::MayaPoseStateRSeven,
                              shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet> const&, int&>(
                    (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::MayaPoseStateRSeven>, int,
                                   oldscape::dash3d::MayaPoseStateRSeven*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x100352c00, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::MayaPoseStateRSeven>::type make_shared<oldscape::dash3d::MayaPoseStateRSeven, shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet> const&, int&, Array<bool, eastl::allocator>&, bool&>(shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet> const&, int&, Array<bool, eastl::allocator>&, bool&)
    jag* jag::make_shared<oldscape::dash3d::MayaPoseStateRSeven,
                          shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet> const&, int&,
                          Array<bool, eastl::allocator>&, bool&>(shared_ptr* param_1, int* param_2, Array* param_3,
                                                                 bool* param_4) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        MayaPoseStateRSeven* local_40[2];

        pvVar1 = (void*)aligned_alloc(144, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::dash3d::MayaPoseStateRSeven,
                                        shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet> const&, int&,
                                        Array<bool, eastl::allocator>&, bool&>((void*)((long)pvVar1 + 32), param_1,
                                                                               param_2, param_3, param_4);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::MayaPoseStateRSeven>, int,
                                   oldscape::dash3d::MayaPoseStateRSeven*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag

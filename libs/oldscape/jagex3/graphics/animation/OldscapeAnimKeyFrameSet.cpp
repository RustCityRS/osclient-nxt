// libs/oldscape/jagex3/graphics/animation/OldscapeAnimKeyFrameSet.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "OldscapeAnimKeyFrameSet.h"

namespace jag::oldscape::graphics::animation {
    // 0x100d4226c, 4 bytes, __const
    OldscapeAnimKeyFrameSet::DEBUG_ANIM = 1;

    // 0x1000e10c0: the linker folded this into FoundObject::FoundObject(), which has identical code
    OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob::OldscapeAnimCurveLoadJob();

    // 0x1000e10d0: the linker folded this into FoundObject::~FoundObject(), which has identical code
    OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob::~OldscapeAnimCurveLoadJob();

    // 0x10012d150: the linker folded this into FoundObject::FoundObject(), which has identical code
    OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob::OldscapeAnimCurveLoadJob();

    // 0x10012d160: the linker folded this into FoundObject::~FoundObject(), which has identical code
    OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob::~OldscapeAnimCurveLoadJob();

    // 0x1002ed6a0, 16 bytes, placed by class name and debug map
    // OldscapeAnimKeyFrameSet::GetBase() const
    undefined1* OldscapeAnimKeyFrameSet::GetBase() {
        return &field_136;
    }

    // 0x1002ed880, 16 bytes, placed by class name
    // OldscapeAnimKeyFrameSet::GetBind() const
    uint OldscapeAnimKeyFrameSet::GetBind() {
        return m_bind;
    }

    // 0x1002ed920, 368 bytes, placed by class name
    // OldscapeAnimKeyFrameSet::AnimateKeyFramedTransparency(int, std::function<void (int, float)>)
    /* OldscapeAnimKeyFrameSet::AnimateKeyFramedTransparency(int,
   std::function<void (int, float)>) */

    void OldscapeAnimKeyFrameSet::AnimateKeyFramedTransparency(int param_1, function<void(int, float)>* param_3) {
        undefined1* this_00;
        char cVar1;
        bool bVar2;
        int iVar3;
        uint uVar4;
        shared_ptr<dash3d::AnimBase>* this_01;
        CoordMapSquare* this_02;
        int* piVar5;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_03;
        vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>* pvVar6;
        shared_ptr* psVar7;
        shared_ptr<OldscapeAnimCurve>* this_04;
        OldscapeAnimCurve* this_05;
        vector<unsigned int, eastl::allocator>* this_06;
        ulong uVar8;
        ulong uVar9;
        float fVar10;

        this_01 = (shared_ptr<dash3d::AnimBase>*)GetBase(this);
        this_02 = (CoordMapSquare*)shared_ptr<dash3d::AnimBase>::operator*(this_01);
        iVar3 = this_02->GetZ();
        if (0 < iVar3) {
            this_00 = &field_8;
            uVar9 = 0;
            do {
                piVar5 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                    (vector<int, eastl::allocator>*)&this_02->field_8, uVar9);
                if ((*piVar5 == 5) && (cVar1 = this_00->empty(), cVar1 == '\0')) {
                    this_03 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                        eastl::vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>,
                                      eastl::allocator>::
                        operator[](
                            (vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>*)
                                this_00,
                            uVar9);
                    cVar1 = eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(this_03);
                    if (cVar1 == '\0') {
                        pvVar6 = (vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>*)eastl::vector<
                            eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>::
                        operator[](
                            (vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>*)
                                this_00,
                            uVar9);
                        psVar7 =
                            (shared_ptr*)eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>::operator[](
                                pvVar6, 0);
                        bVar2 = operator!=(psVar7, (_func_decltype_nullptr*)0);
                        if (bVar2) {
                            pvVar6 = (vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>*)eastl::vector<
                                eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>::
                            operator[]((vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>,
                                               eastl::allocator>*)this_00,
                                       uVar9);
                            this_04 = (shared_ptr<OldscapeAnimCurve>*)
                                eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>::operator[](pvVar6, 0);
                            this_05 = (OldscapeAnimCurve*)shared_ptr<OldscapeAnimCurve>::operator*(this_04);
                            this_06 = (vector<unsigned int, eastl::allocator>*)
                                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)&this_02[3].m_z,
                                    uVar9);
                            uVar4 = eastl::vector<unsigned int, eastl::allocator>::size(this_06);
                            if (0 < (int)uVar4) {
                                uVar8 = 0;
                                do {
                                    piVar5 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                        (vector<int, eastl::allocator>*)this_06, uVar8);
                                    iVar3 = *piVar5;
                                    fVar10 = (float)this_05->GetValue(param_1);
                                    std::function<void(int, float)>::operator()(param_3, iVar3, fVar10);
                                    uVar8 = uVar8 + 1;
                                } while (uVar4 != uVar8);
                            }
                        }
                    }
                }
                uVar9 = uVar9 + 1;
                iVar3 = this_02->GetZ();
            } while ((long)uVar9 < (long)iVar3);
        }
    }

    // 0x1002f4df0, 320 bytes, placed by class name
    // OldscapeAnimKeyFrameSet::SetJointLocal(int, OldscapeJoint&, int, int)
    void OldscapeAnimKeyFrameSet::SetJointLocal(int param_1, OldscapeJoint* param_2, int param_3, int param_4) {
        Matrix44T* this;
        OldscapeJoint OVar1;
        OldscapeJoint OVar2;
        OldscapeJoint OVar3;
        undefined4 in_register_00000014;
        OldscapeJoint* this_00;
        undefined4 in_register_0000003c;
        OldscapeAnimKeyFrameSet* this_01;
        OldscapeJoint aOStackY_db20[128];
        undefined1 in_stack_fffffffffffffa38[76];
        undefined1 in_stack_fffffffffffffa88[344];
        OldscapeJoint local_3b8;
        OldscapeJoint local_1f8;
        long local_38;

        this_01 = (OldscapeAnimKeyFrameSet*)CONCAT44(in_register_0000003c, param_1);
        this_00 = (OldscapeJoint*)CONCAT44(in_register_00000014, param_3);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this = (Matrix44T*)((long)register0x00000020 + -1480);
        new (this) jag::math::Matrix44T<float>();
        SetToIdentity();
        new (&local_1f8) OldscapeJoint(this_00);
        OVar1._76_4_ = param_4;
        OVar1.field_0 = in_stack_fffffffffffffa38._0_4_;
        OVar1._4_4_ = in_stack_fffffffffffffa38._4_4_;
        OVar1.field_8 = in_stack_fffffffffffffa38._8_8_;
        OVar1.field_16 = in_stack_fffffffffffffa38._16_8_;
        OVar1.field_24 = in_stack_fffffffffffffa38._24_8_;
        OVar1.field_32 = in_stack_fffffffffffffa38._32_8_;
        OVar1.field_40 = in_stack_fffffffffffffa38._40_8_;
        OVar1.field_48 = in_stack_fffffffffffffa38._48_8_;
        OVar1.field_56 = in_stack_fffffffffffffa38._56_8_;
        OVar1._64_8_ = in_stack_fffffffffffffa38._64_8_;
        OVar1._72_4_ = in_stack_fffffffffffffa38._72_4_;
        OVar1._80_344_ = in_stack_fffffffffffffa88;
        RotateMatrix(this_01, this, param_4, OVar1, (int)&local_1f8);
        local_1f8.~OldscapeJoint();
        new (&local_3b8) OldscapeJoint(this_00);
        OVar2._76_4_ = param_4;
        OVar2.field_0 = in_stack_fffffffffffffa38._0_4_;
        OVar2._4_4_ = in_stack_fffffffffffffa38._4_4_;
        OVar2.field_8 = in_stack_fffffffffffffa38._8_8_;
        OVar2.field_16 = in_stack_fffffffffffffa38._16_8_;
        OVar2.field_24 = in_stack_fffffffffffffa38._24_8_;
        OVar2.field_32 = in_stack_fffffffffffffa38._32_8_;
        OVar2.field_40 = in_stack_fffffffffffffa38._40_8_;
        OVar2.field_48 = in_stack_fffffffffffffa38._48_8_;
        OVar2.field_56 = in_stack_fffffffffffffa38._56_8_;
        OVar2._64_8_ = in_stack_fffffffffffffa38._64_8_;
        OVar2._72_4_ = in_stack_fffffffffffffa38._72_4_;
        OVar2._80_344_ = in_stack_fffffffffffffa88;
        ScaleMatrix(this_01, (Matrix44T*)((long)register0x00000020 + -1480), param_4, OVar2, (int)&local_3b8);
        local_3b8.~OldscapeJoint();
        new (((long)register0x00000020 + -1400)) OldscapeJoint(this_00);
        OVar3._76_4_ = param_4;
        OVar3.field_0 = in_stack_fffffffffffffa38._0_4_;
        OVar3._4_4_ = in_stack_fffffffffffffa38._4_4_;
        OVar3.field_8 = in_stack_fffffffffffffa38._8_8_;
        OVar3.field_16 = in_stack_fffffffffffffa38._16_8_;
        OVar3.field_24 = in_stack_fffffffffffffa38._24_8_;
        OVar3.field_32 = in_stack_fffffffffffffa38._32_8_;
        OVar3.field_40 = in_stack_fffffffffffffa38._40_8_;
        OVar3.field_48 = in_stack_fffffffffffffa38._48_8_;
        OVar3.field_56 = in_stack_fffffffffffffa38._56_8_;
        OVar3._64_8_ = in_stack_fffffffffffffa38._64_8_;
        OVar3._72_4_ = in_stack_fffffffffffffa38._72_4_;
        OVar3._80_344_ = in_stack_fffffffffffffa88;
        TranslateMatrix(this_01, (Matrix44T*)((long)register0x00000020 + -1480), param_4, OVar3,
                        (int)(OldscapeJoint*)((long)register0x00000020 + -1400));
        (((long)register0x00000020 + -1400))->~OldscapeJoint();
        this_00->SetLocal((Matrix44T*)((long)register0x00000020 + -1480));
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100322780, 272 bytes, base-object destructor, placed by class name
    // OldscapeAnimKeyFrameSet::~OldscapeAnimKeyFrameSet()
    void OldscapeAnimKeyFrameSet::~OldscapeAnimKeyFrameSet() {
        undefined1* this_00;
        undefined1* this_01;
        long lVar2;
        long lVar3;

        this_00 = &field_160;
        if (this_00->operator_cast_to_bool()) {
            std::unique_ptr<std::future<void>, std::default_delete<std::future<void>>>::operator->(
                (unique_ptr<std::future<void>, std::default_delete<std::future<void>>>*)this_00);
            std::future<void>::wait();
        }
        this_01 = &field_168;
        lVar3 = this_01->HeapBeginPtr();
        lVar2 = this_01->end();
        for (; lVar3 != lVar2; lVar3 = lVar3 + 8) {
            std::future<void>::wait();
        }
        this_01->~vector();
        this_00->~unique_ptr();
        (&field_136)->~shared_ptr();
        (&field_72)->~hash_map();
        (&field_40)->~vector();
        (&field_8)->~vector();
    }

    // 0x100322900, 16 bytes, complete-object destructor, placed by class name
    // OldscapeAnimKeyFrameSet::~OldscapeAnimKeyFrameSet(): jumps straight to the base-object destructor

    // 0x100322910, 384 bytes, placed by class name
    // OldscapeAnimKeyFrameSet::Load(jagex3::Js5&, jagex3::Js5&, int, bool)
    OldscapeAnimKeyFrameSet* OldscapeAnimKeyFrameSet::Load(Js5* param_1, Js5* param_2, int param_3, bool param_4) {
        undefined* puVar2;
        PacketT<Array<unsigned char, eastl::allocator>>* pPVar3;
        long lVar4;
        OldscapeAnimKeyFrameSet* pOVar5;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>* psVar6;
        undefined3 in_register_00000081;
        shared_ptr local_60;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_50[16];
        undefined4 local_34;

        local_34 = CONCAT31(in_register_00000081, param_4);
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_50, (_func_decltype_nullptr*)param_1);
        puVar2 = (undefined*)((shared_ptr*)param_1)->PeekFile((int)local_50, (uint)param_3 >> 16);
        if (puVar2 == DataStatus::READY) {
            pPVar3 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                         shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                             (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_50);
            lVar4 = pPVar3->GetDataPtr();
            if ((char)local_34 == '\0') {
                psVar6 = local_50;
                ((shared_ptr*)param_2)
                    ->PeekFile((int)psVar6, ((uint) * (ushort*)(lVar4 + 1) | (*(ushort*)(lVar4 + 1) & 255) << 16) >> 8);
            } else {
                psVar6 = local_50;
                ((shared_ptr*)param_2)->PeekFile((int)psVar6, 0);
            }
            pPVar3 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                         shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                             (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_50);
            lVar4 = pPVar3->GetDataPtr();
            if (lVar4 == 0) {
                new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            } else {
                new (&local_60) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(psVar6);
                pOVar5 = operator_new(200);
                OldscapeAnimKeyFrameSet(pOVar5, param_3);
                shared_ptr<OldscapeAnimKeyFrameSet>::reset<OldscapeAnimKeyFrameSet, void>(
                    (shared_ptr<OldscapeAnimKeyFrameSet>*)&local_60, pOVar5);
                pOVar5 = (OldscapeAnimKeyFrameSet*)shared_ptr<OldscapeAnimKeyFrameSet>::operator->(
                    (shared_ptr<OldscapeAnimKeyFrameSet>*)&local_60);
                if (TryLoad(pOVar5, param_1, param_2, (bool)(char)local_34) == '\0') {
                    new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                } else {
                    shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                        (shared_ptr<RSevenDebugPresetProvider>*)this, &local_60);
                }
                local_60.~shared_ptr();
            }
        } else {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        }
        local_50->~shared_ptr();
        return this;
    }

    // 0x100322ae0, 16 bytes, complete-object constructor, placed by class name
    // OldscapeAnimKeyFrameSet::OldscapeAnimKeyFrameSet(int): jumps straight to the base-object constructor

    // 0x100322af0, 496 bytes, placed by class name
    // OldscapeAnimKeyFrameSet::TryLoad(jagex3::Js5&, jagex3::Js5&, bool)
    ulong OldscapeAnimKeyFrameSet::TryLoad(Js5* param_1, Js5* param_2, bool param_3) {
        bool bVar1;
        uint uVar2;
        undefined* puVar3;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* pPVar4;
        undefined7 extraout_var;
        AnimBase* this_00;
        PacketJ* pPVar5;
        Layout* this_01;
        vector* pvVar6;
        ulong uVar7;
        AutoSingleton<ThreadPoolSingleton>* this_03;
        __6 local_88;
        future local_68[8];
        shared_ptr local_60;
        shared_ptr local_50;
        future<void> local_40[15];
        byte local_31;

        new (&local_60) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        puVar3 = (undefined*)((shared_ptr*)param_1)
                     ->GetFile((int)&local_60, (uint)field_0 >> 16, (array*)(ulong)(field_0 & 65535));
        if (puVar3 == DataStatus::READY) {
            pPVar4 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                         shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                             (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_60);
            local_31 = pPVar4->g1();
            pPVar4 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                         shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                             (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_60);
            uVar2 = pPVar4->g2();
            new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>((_func_decltype_nullptr*)&local_60);
            if (param_3) {
                ((shared_ptr*)param_2)->PeekFile((int)&local_50, 0);
            } else {
                ((shared_ptr*)param_2)->PeekFile((int)&local_50, uVar2 & 65535);
            }
            bVar1 = operator==(&local_50, (_func_decltype_nullptr*)0);
            if (!bVar1) {
                this_00 = operator_new(152);
                pPVar5 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                    (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_50);
                dash3d::AnimBase::AnimBase(this_00, uVar2 & 65535, pPVar5);
                this_03 = (AutoSingleton<ThreadPoolSingleton>*)&field_136;
                shared_ptr<dash3d::AnimBase>::reset<dash3d::AnimBase, void>((shared_ptr<dash3d::AnimBase>*)this_03,
                                                                            this_00);
                this_01 = (Layout*)this_03->Instance();
                pvVar6 = eastl::string::Layout::SSOBeginPtr(this_01, (type*)this_00);
                new (&local_88) shared_ptr<dash3d::Decor>(&local_60);
                local_88.field_16 = (int)local_31;
                local_88.field_24 = this;
                ThreadPool::AddTask<OldscapeAnimKeyFrameSet::TryLoad(jagex3::Js5&, jagex3::Js5&, bool)::__6>(
                    (ThreadPool*)local_40, (char*)pvVar6, &local_88);
                std::make_unique<std::future<void>, std::future<void>>(local_68);
                std::unique_ptr<std::future<void>, std::default_delete<std::future<void>>>::operator=(
                    (unique_ptr<std::future<void>, std::default_delete<std::future<void>>>*)&field_160,
                    (unique_ptr*)local_68);
                local_68->~unique_ptr();
                std::future<void>::~future(local_40);
                TryLoad(jagex3::Js5&, jagex3::Js5&, bool)::$_6::~__6(&local_88);
            }
            uVar7 = CONCAT71(extraout_var, bVar1) & 4294967295 ^ 1;
            local_50.~shared_ptr();
        } else {
            uVar7 = 0;
        }
        local_60.~shared_ptr();
        return uVar7;
    }

    // 0x100322ce0, 304 bytes, placed by class name
    // OldscapeAnimKeyFrameSet::GetStatus()
    undefined* OldscapeAnimKeyFrameSet::GetStatus() {
        bool bVar1;
        char cVar2;
        int iVar3;
        future<void>* this_00;
        future* this_01;
        future* pfVar4;
        undefined** ppuVar5;
        undefined1* puVar6;
        duration local_40[12];
        undefined4 local_34;

        puVar6 = &field_160;
        bVar1 = puVar6->operator_cast_to_bool();
        if (bVar1) {
        LAB_100322d1b:
            bVar1 = puVar6->operator_cast_to_bool();
            if (bVar1) {
                this_00 = (future<void>*)
                              std::unique_ptr<std::future<void>, std::default_delete<std::future<void>>>::operator->(
                                  (unique_ptr<std::future<void>, std::default_delete<std::future<void>>>*)puVar6);
                local_34 = 0;
                std::chrono::duration<long long, std::ratio<1l, 1l>>::duration<int>((int*)local_40, (type*)&local_34);
                iVar3 = std::future<void>::wait_for<long long, std::ratio<1l, 1l>>(this_00, local_40);
                if (iVar3 == 0) {
                    puVar6->reset(0);
                    goto LAB_100322d66;
                }
            } else {
            LAB_100322d66:
                puVar6 = &field_168;
                this_01 = (future*)puVar6->HeapBeginPtr();
                pfVar4 = (future*)puVar6->end();
                bVar1 = true;
                if (this_01 != pfVar4) {
                    do {
                        local_34 = 0;
                        std::chrono::duration<long long, std::ratio<1l, 1l>>::duration<int>((int*)local_40,
                                                                                            (type*)&local_34);
                        iVar3 = std::future<void>::wait_for<long long, std::ratio<1l, 1l>>((future<void>*)this_01,
                                                                                           local_40);
                        if (iVar3 == 0) {
                            this_01 = (future*)puVar6->erase(this_01);
                        } else {
                            this_01 = this_01 + 8;
                            bVar1 = false;
                        }
                        pfVar4 = (future*)puVar6->end();
                    } while (this_01 != pfVar4);
                }
                if (bVar1)
                    goto LAB_100322df4;
            }
            ppuVar5 = &DataStatus::NOTLOADED;
        } else {
            cVar2 = (&field_168)->empty();
            if (cVar2 == '\0')
                goto LAB_100322d1b;
        LAB_100322df4:
            ppuVar5 = &DataStatus::READY;
        }
        return *ppuVar5;
    }

    // 0x100322ec0, 240 bytes, base-object constructor, placed by class name
    // OldscapeAnimKeyFrameSet::OldscapeAnimKeyFrameSet(int)
    void OldscapeAnimKeyFrameSet::OldscapeAnimKeyFrameSet(int param_1) {
        allocator* paVar1;
        allocator local_40[8];
        undefined1* local_38;

        new (this) MakeSharedPool<OldscapeAnimKeyFrameSet, 128>();
        field_0 = param_1;
        local_38 = &field_8;
        new (local_38)
            eastl::vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>();
        new (&field_40)
            eastl::vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>();
        eastl::allocator::allocator(local_40, "EASTL hash_map");
        paVar1 = local_40;
        new (&field_72, paVar1)
            eastl::hash_map<int, AnimRotationOrder, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        new (&field_136, (_func_decltype_nullptr*)paVar1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        m_bind = 0;
        std::unique_ptr<std::future<void>, std::default_delete<std::future<void>>>::unique_ptr<true, void>(
            (unique_ptr<std::future<void>, std::default_delete<std::future<void>>>*)&field_160);
        new (&field_168) eastl::vector<std::future<void>, eastl::allocator>();
    }

    // 0x1003232d0, 16 bytes, complete-object destructor, placed by class name
    // OldscapeAnimKeyFrameSet::TryLoad(jagex3::Js5&, jagex3::Js5&, bool)::$_6::~$_6(): jumps straight to the base-object destructor

    // 0x1003232e0, 1088 bytes, placed by class name
    // OldscapeAnimKeyFrameSet::LoadFromPacket(PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    void OldscapeAnimKeyFrameSet::LoadFromPacket(PacketJ* param_1, int param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        byte bVar3;
        char cVar4;
        char cVar5;
        ushort uVar6;
        int iVar7;
        uint uVar8;
        Skeleton* this_00;
        CoordMapSquare* this_01;
        PacketJ* pPVar9;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* pvVar10;
        vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>* pvVar11;
        shared_ptr<OldscapeAnimCurve>* this_02;
        long lVar12;
        shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>* this_03;
        Layout* pLVar13;
        ThreadPool* pTVar14;
        undefined8* puVar15;
        undefined8* puVar16;
        vector* pvVar17;
        shared_ptr* psVar18;
        shared_ptr* psVar19;
        vector<shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>, eastl::allocator>* this_04;
        ulong uVar20;
        ulong uVar21;
        vector<shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>, eastl::allocator> local_e0[32];
        undefined1 local_c0[8];
        undefined1 local_b8[56];
        shared_ptr* local_80;
        vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>* local_78;
        vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>* local_70;
        int local_64;
        shared_ptr local_60;
        OldscapeAnimKeyFrameSet* local_48;
        PacketJ* local_40;
        undefined1 local_31;

        local_64 = param_2;
        uVar6 = param_1->g2();
        m_start = (uint)uVar6;
        uVar6 = param_1->g2();
        m_end = (uint)uVar6;
        bVar3 = param_1->g1();
        m_bind = (uint)bVar3;
        local_40 = param_1;
        uVar6 = param_1->g2();
        shared_ptr<dash3d::AnimBase>::operator->((shared_ptr<dash3d::AnimBase>*)&field_136);
        local_b8->GetSkeleton();
        this_00 = (Skeleton*)shared_ptr<dash3d::Skeleton>::operator->((shared_ptr<dash3d::Skeleton>*)local_b8);
        iVar7 = this_00->GetNumOfJoints();
        local_78 = (vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>*)&field_40;
        (&field_40, (long)iVar7)->resize();
        local_b8->~shared_ptr();
        local_48 = this;
        this_01 = (CoordMapSquare*)shared_ptr<dash3d::AnimBase>::operator->((shared_ptr<dash3d::AnimBase>*)&field_136);
        iVar7 = this_01->GetZ();
        local_70 = (vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>*)&field_8;
        (&field_8, (long)iVar7)->resize();
        psVar18 = (shared_ptr*)(ulong)uVar6;
        new (local_b8) eastl::allocator("EASTL vector");
        this_04 = local_e0;
        psVar19 = psVar18;
        eastl::vector<shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>, eastl::allocator>::vector(
            this_04, (ulong)psVar18, (allocator*)local_b8);
        local_80 = psVar18;
        if (uVar6 != 0) {
            uVar20 = 0;
            do {
                pPVar9 = local_40;
                cVar4 = local_40->g1();
                iVar7 = pPVar9->gSmart();
                local_31 = pPVar9->g1();
                make_shared<OldscapeAnimCurve>((jag*)local_b8);
                pPVar9 = (PacketJ*)shared_ptr<OldscapeAnimCurve>::operator->((shared_ptr<OldscapeAnimCurve>*)local_b8);
                OldscapeAnimCurve::LoadFromPacket(pPVar9, (int)local_40);
                uVar8 = GetComponentCount(cVar4);
                uVar21 = (ulong)iVar7;
                if (cVar4 == '\x01') {
                    pvVar10 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                        eastl::vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>,
                                      eastl::allocator>::operator[](local_78, uVar21);
                    cVar5 = eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(pvVar10);
                    if (cVar5 != '\0') {
                        pvVar11 = (vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>*)
                            eastl::vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>,
                                          eastl::allocator>::operator[](local_78, uVar21);
                        eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>::resize(pvVar11, (ulong)uVar8);
                    }
                } else {
                    pvVar10 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                        eastl::vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>,
                                      eastl::allocator>::operator[](local_70, uVar21);
                    cVar5 = eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(pvVar10);
                    if (cVar5 != '\0') {
                        pvVar11 = (vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>*)
                            eastl::vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>,
                                          eastl::allocator>::operator[](local_70, uVar21);
                        eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>::resize(pvVar11, (ulong)uVar8);
                    }
                }
                make_shared<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>((jag*)&local_60);
                this_02 = (shared_ptr<OldscapeAnimCurve>*)
                              shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>::operator->(
                                  (shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>*)&local_60);
                shared_ptr<OldscapeAnimCurve>::operator=(this_02, (shared_ptr*)local_b8);
                lVar12 = shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>::operator->(
                    (shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>*)&local_60);
                *(char*)(lVar12 + 16) = cVar4;
                lVar12 = shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>::operator->(
                    (shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>*)&local_60);
                *(undefined1*)(lVar12 + 17) = local_31;
                lVar12 = shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>::operator->(
                    (shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>*)&local_60);
                *(int*)(lVar12 + 20) = iVar7;
                this_03 = (shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>*)
                    eastl::vector<shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>,
                                  eastl::allocator>::operator[](local_e0, uVar20);
                psVar19 = &local_60;
                shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>::operator=(this_03, psVar19);
                if (cVar4 == '\x04') {
                    local_48->m_transAnim = 1;
                }
                local_60.~shared_ptr();
                this_04 =
                    (vector<shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>, eastl::allocator>*)local_b8;
                this_04->~shared_ptr();
                uVar20 = uVar20 + 1;
            } while (local_80 != (shared_ptr*)uVar20);
        }
        pLVar13 = (Layout*)this_04->Instance();
        pTVar14 = (ThreadPool*)eastl::string::Layout::SSOBeginPtr(pLVar13, (type*)psVar19);
        local_60.InitialiseWorkGroups((ulong)pTVar14, (ulong)local_80);
        psVar19 = &local_60;
        puVar15 = (undefined8*)psVar19->HeapBeginPtr();
        puVar16 = (undefined8*)psVar19->end();
        if (puVar15 != puVar16) {
            local_40 = (PacketJ*)&local_48->field_168;
            do {
                uVar1 = *puVar15;
                uVar2 = puVar15[1];
                pLVar13 = (Layout*)psVar19->Instance();
                pvVar17 = eastl::string::Layout::SSOBeginPtr(pLVar13, (type*)pTVar14);
                local_b8._0_8_ = local_48;
                new ((local_b8 + 8))
                    eastl::vector<shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>, eastl::allocator>(
                        local_e0);
                local_b8._40_8_ = uVar1;
                local_b8._48_8_ = uVar2;
                ThreadPool::AddTask<OldscapeAnimKeyFrameSet::LoadFromPacket(
                    PacketJ<Array<unsigned char, eastl::allocator>>&, int)::__7>((ThreadPool*)local_c0, (char*)pvVar17,
                                                                                 (__7*)local_b8);
                pTVar14 = (ThreadPool*)local_c0;
                local_40->push_back(local_c0);
                local_c0->~future();
                LoadFromPacket(PacketJ<Array<unsigned char, eastl::allocator>>&, int)::$_7::~__7((__7*)local_b8);
                psVar19 = &local_60;
                puVar16 = (undefined8*)psVar19->end();
                puVar15 = puVar15 + 2;
            } while (puVar15 != puVar16);
        }
        local_60.~vector();
        eastl::vector<shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>, eastl::allocator>::~vector(
            local_e0);
    }

    // 0x100323850, 32 bytes, placed by neighbouring functions
    // GetComponentCount(AnimTargetType)
    undefined4 GetComponentCount(char param_1) {
        undefined4 uVar1;

        uVar1 = 0;
        if ((byte)(param_1 - 1U) < 5) {
            uVar1 = *(undefined4*)(&DAT_100d42274 + (long)(char)(param_1 - 1U) * 4);
        }
        return uVar1;
    }

    // 0x100323d30, 960 bytes, placed by class name
    // OldscapeAnimKeyFrameSet::RotateMatrix(jag::math::Matrix44T<float>&, int, OldscapeJoint, int)
    void OldscapeAnimKeyFrameSet::RotateMatrix(Matrix44T* param_1, int param_2, OldscapeJoint param_3, int param_4) {
        undefined* puVar1;
        char cVar2;
        bool bVar3;
        undefined8* puVar4;
        float* pfVar5;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>* pvVar6;
        shared_ptr* psVar7;
        OldscapeAnimCurve* pOVar8;
        undefined4 in_register_0000000c;
        undefined1* this_01;
        int in_R8D;
        ulong uVar9;
        QuaternionT<float> local_148[16];
        QuaternionT<float> local_138[16];
        QuaternionT<float> local_128[16];
        QuaternionT<float> local_118[16];
        QuaternionT<float> local_108[16];
        QuaternionT<float> local_f8[16];
        QuaternionT<float> local_e8[16];
        QuaternionT<float> local_d8[16];
        Vector3T<int> local_c8[16];
        undefined1 local_b8[64];
        undefined8 local_78;
        undefined4 local_70;
        Matrix44T* local_68;
        shared_ptr local_60;
        shared_ptr local_50;
        float local_3c;
        float local_38;
        float local_34;

        puVar4 = (undefined8*)(CONCAT44(in_register_0000000c, param_4))->RotateDefaults(m_bind);
        local_78 = *puVar4;
        local_70 = *(undefined4*)(puVar4 + 1);
        pfVar5 = (float*)std::array<float, 3ul>::operator[]((array<float, 3ul>*)&local_78, 0);
        local_3c = *pfVar5;
        pfVar5 = (float*)std::array<float, 3ul>::operator[]((array<float, 3ul>*)&local_78, 1);
        local_38 = *pfVar5;
        pfVar5 = (float*)std::array<float, 3ul>::operator[]((array<float, 3ul>*)&local_78, 2);
        local_34 = *pfVar5;
        this_01 = &field_40;
        uVar9 = (ulong)param_2;
        this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
            eastl::vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>::operator[](
                (vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>*)this_01,
                uVar9);
        cVar2 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            this_00);
        local_68 = param_1;
        if (cVar2 == '\0') {
            pvVar6 = (vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>*)eastl::
                vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>::operator[](
                    (vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>*)this_01,
                    uVar9);
            psVar7 = (shared_ptr*)eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>::operator[](pvVar6, 0);
            new (local_b8) shared_ptr<dash3d::Decor>(psVar7);
            pvVar6 = (vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>*)eastl::
                vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>::operator[](
                    (vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>*)this_01,
                    uVar9);
            psVar7 = (shared_ptr*)eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>::operator[](pvVar6, 1);
            new (&local_60) shared_ptr<dash3d::Decor>(psVar7);
            pvVar6 = (vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>*)eastl::
                vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>::operator[](
                    (vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>*)this_01,
                    uVar9);
            psVar7 = (shared_ptr*)eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>::operator[](pvVar6, 2);
            new (&local_50) shared_ptr<dash3d::Decor>(psVar7);
            bVar3 = operator!=((shared_ptr*)local_b8, (_func_decltype_nullptr*)0);
            if (bVar3) {
                pOVar8 = (OldscapeAnimCurve*)shared_ptr<OldscapeAnimCurve>::operator->(
                    (shared_ptr<OldscapeAnimCurve>*)local_b8);
                local_3c = (float)pOVar8->GetValue(in_R8D);
            }
            bVar3 = operator!=(&local_60, (_func_decltype_nullptr*)0);
            if (bVar3) {
                pOVar8 = (OldscapeAnimCurve*)shared_ptr<OldscapeAnimCurve>::operator->(
                    (shared_ptr<OldscapeAnimCurve>*)&local_60);
                local_38 = (float)pOVar8->GetValue(in_R8D);
            }
            bVar3 = operator!=(&local_50, (_func_decltype_nullptr*)0);
            if (bVar3) {
                pOVar8 = (OldscapeAnimCurve*)shared_ptr<OldscapeAnimCurve>::operator->(
                    (shared_ptr<OldscapeAnimCurve>*)&local_50);
                local_34 = (float)pOVar8->GetValue(in_R8D);
            }
            local_50.~shared_ptr();
            local_60.~shared_ptr();
            local_b8->~shared_ptr();
        }
        jag::math::Vector3T<int>::Vector3T(local_c8);
        puVar1 = PTR_IDENTITY_100ee6678;
        new (&local_60) jag::math::QuaternionT<float>(PTR_IDENTITY_100ee6678);
        local_c8->Set(1.0, 0.0, 0.0);
        local_60.FromAxisAngle(local_c8, local_3c);
        new (&local_50) jag::math::QuaternionT<float>(puVar1);
        local_c8->Set(0.0, 1.0, 0.0);
        local_50.FromAxisAngle(local_c8, local_38);
        jag::math::QuaternionT<float>::QuaternionT(local_148, (QuaternionT*)puVar1);
        local_c8->Set(0.0, 0.0, 1.0);
        local_148->FromAxisAngle(local_c8, local_34);
        jag::math::QuaternionT<float>::QuaternionT(local_138, (QuaternionT*)puVar1);
        jag::math::QuaternionT<float>::QuaternionT(local_128, (QuaternionT*)local_138);
        jag::math::QuaternionT<float>::QuaternionT(local_118, (QuaternionT*)local_148);
        jag::math::QuaternionMultiply<float>((math*)local_b8, local_138, local_128, local_118);
        jag::math::QuaternionT<float>::QuaternionT(local_108, (QuaternionT*)local_138);
        jag::math::QuaternionT<float>::QuaternionT(local_f8, (QuaternionT*)&local_60);
        jag::math::QuaternionMultiply<float>((math*)local_b8, local_138, local_108, local_f8);
        jag::math::QuaternionT<float>::QuaternionT(local_e8, (QuaternionT*)local_138);
        jag::math::QuaternionT<float>::QuaternionT(local_d8, (QuaternionT*)&local_50);
        jag::math::QuaternionMultiply<float>((math*)local_b8, local_138, local_e8, local_d8);
        local_b8._0_8_ = *(undefined8*)PTR_IDENTITY_100ee6730;
        local_b8._8_8_ = *(undefined8*)(PTR_IDENTITY_100ee6730 + 8);
        local_b8._16_8_ = *(undefined8*)(PTR_IDENTITY_100ee6730 + 16);
        local_b8._24_8_ = *(undefined8*)(PTR_IDENTITY_100ee6730 + 24);
        local_b8._32_8_ = *(undefined8*)(PTR_IDENTITY_100ee6730 + 32);
        local_b8._40_8_ = *(undefined8*)(PTR_IDENTITY_100ee6730 + 40);
        local_b8._48_8_ = *(undefined8*)(PTR_IDENTITY_100ee6730 + 48);
        local_b8._56_8_ = *(undefined8*)(PTR_IDENTITY_100ee6730 + 56);
        jag::math::FromQuaternion<float>((Matrix44T*)local_b8, (QuaternionT*)local_138);
        jag::math::Matrix44T<float>::operator*=((Matrix44T<float>*)local_68, (Matrix44T*)local_b8);
    }

    // 0x100324110, 592 bytes, placed by class name
    // OldscapeAnimKeyFrameSet::ScaleMatrix(jag::math::Matrix44T<float>&, int, OldscapeJoint, int)
    void OldscapeAnimKeyFrameSet::ScaleMatrix(Matrix44T* param_1, int param_2, OldscapeJoint param_3, int param_4) {
        char cVar1;
        bool bVar2;
        undefined8* puVar3;
        float* pfVar4;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>* pvVar5;
        shared_ptr* psVar6;
        OldscapeAnimCurve* pOVar7;
        undefined4 in_register_0000000c;
        undefined1* this_01;
        int in_R8D;
        ulong uVar8;
        Matrix44T local_b8;
        undefined8 uStack_80;
        undefined8 local_70;
        undefined4 local_68;
        shared_ptr local_60;
        shared_ptr local_50;
        float local_3c;
        float local_38;
        float local_34;

        puVar3 = (undefined8*)(CONCAT44(in_register_0000000c, param_4))->ScaleDefaults(m_bind);
        local_70 = *puVar3;
        local_68 = *(undefined4*)(puVar3 + 1);
        pfVar4 = (float*)std::array<float, 3ul>::operator[]((array<float, 3ul>*)&local_70, 0);
        local_3c = *pfVar4;
        pfVar4 = (float*)std::array<float, 3ul>::operator[]((array<float, 3ul>*)&local_70, 1);
        local_38 = *pfVar4;
        pfVar4 = (float*)std::array<float, 3ul>::operator[]((array<float, 3ul>*)&local_70, 2);
        local_34 = *pfVar4;
        this_01 = &field_40;
        uVar8 = (ulong)param_2;
        this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
            eastl::vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>::operator[](
                (vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>*)this_01,
                uVar8);
        cVar1 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            this_00);
        if (cVar1 == '\0') {
            pvVar5 = (vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>*)eastl::
                vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>::operator[](
                    (vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>*)this_01,
                    uVar8);
            psVar6 = (shared_ptr*)eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>::operator[](pvVar5, 6);
            new (&local_b8) shared_ptr<dash3d::Decor>(psVar6);
            pvVar5 = (vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>*)eastl::
                vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>::operator[](
                    (vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>*)this_01,
                    uVar8);
            psVar6 = (shared_ptr*)eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>::operator[](pvVar5, 7);
            new (&local_60) shared_ptr<dash3d::Decor>(psVar6);
            pvVar5 = (vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>*)eastl::
                vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>::operator[](
                    (vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>*)this_01,
                    uVar8);
            psVar6 = (shared_ptr*)eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>::operator[](pvVar5, 8);
            new (&local_50) shared_ptr<dash3d::Decor>(psVar6);
            bVar2 = operator!=((shared_ptr*)&local_b8, (_func_decltype_nullptr*)0);
            if (bVar2) {
                pOVar7 = (OldscapeAnimCurve*)shared_ptr<OldscapeAnimCurve>::operator->(
                    (shared_ptr<OldscapeAnimCurve>*)&local_b8);
                local_3c = (float)pOVar7->GetValue(in_R8D);
            }
            bVar2 = operator!=(&local_60, (_func_decltype_nullptr*)0);
            if (bVar2) {
                pOVar7 = (OldscapeAnimCurve*)shared_ptr<OldscapeAnimCurve>::operator->(
                    (shared_ptr<OldscapeAnimCurve>*)&local_60);
                local_38 = (float)pOVar7->GetValue(in_R8D);
            }
            bVar2 = operator!=(&local_50, (_func_decltype_nullptr*)0);
            if (bVar2) {
                pOVar7 = (OldscapeAnimCurve*)shared_ptr<OldscapeAnimCurve>::operator->(
                    (shared_ptr<OldscapeAnimCurve>*)&local_50);
                local_34 = (float)pOVar7->GetValue(in_R8D);
            }
            local_50.~shared_ptr();
            local_60.~shared_ptr();
            local_b8.~shared_ptr();
        }
        local_b8._0_8_ = *(undefined8*)PTR_IDENTITY_100ee6730;
        local_b8._8_8_ = *(undefined8*)(PTR_IDENTITY_100ee6730 + 8);
        local_b8._16_8_ = *(undefined8*)(PTR_IDENTITY_100ee6730 + 16);
        local_b8._24_8_ = *(undefined8*)(PTR_IDENTITY_100ee6730 + 24);
        local_b8._32_8_ = *(undefined8*)(PTR_IDENTITY_100ee6730 + 32);
        local_b8._40_8_ = *(undefined8*)(PTR_IDENTITY_100ee6730 + 40);
        local_b8._48_8_ = *(undefined8*)(PTR_IDENTITY_100ee6730 + 48);
        uStack_80 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 56);
        local_3c->SetToDiagonal(local_38, local_34, 1.0);
        jag::math::Matrix44T<float>::operator*=((Matrix44T<float>*)param_1, &local_b8);
    }

    // 0x100324360, 544 bytes, placed by class name
    // OldscapeAnimKeyFrameSet::TranslateMatrix(jag::math::Matrix44T<float>&, int, OldscapeJoint, int)
    void OldscapeAnimKeyFrameSet::TranslateMatrix(Matrix44T* param_1, int param_2, OldscapeJoint param_3, int param_4) {
        char cVar1;
        bool bVar2;
        undefined8* puVar3;
        undefined4* puVar4;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>* pvVar5;
        shared_ptr* psVar6;
        OldscapeAnimCurve* pOVar7;
        undefined4 in_register_0000000c;
        undefined1* puVar8;
        int in_R8D;
        ulong uVar9;
        undefined8 local_80;
        undefined4 local_78;
        shared_ptr local_70;
        shared_ptr local_60;
        shared_ptr local_50;
        undefined4 local_3c;
        undefined4 local_38;
        undefined4 local_34;

        puVar3 = (undefined8*)(CONCAT44(in_register_0000000c, param_4))->TranslateDefaults(m_bind);
        local_80 = *puVar3;
        local_78 = *(undefined4*)(puVar3 + 1);
        puVar4 = (undefined4*)std::array<float, 3ul>::operator[]((array<float, 3ul>*)&local_80, 0);
        local_3c = *puVar4;
        puVar4 = (undefined4*)std::array<float, 3ul>::operator[]((array<float, 3ul>*)&local_80, 1);
        local_38 = *puVar4;
        puVar4 = (undefined4*)std::array<float, 3ul>::operator[]((array<float, 3ul>*)&local_80, 2);
        local_34 = *puVar4;
        puVar8 = &field_40;
        uVar9 = (ulong)param_2;
        this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
            eastl::vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>::operator[](
                (vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>*)puVar8,
                uVar9);
        cVar1 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            this_00);
        if (cVar1 == '\0') {
            pvVar5 = (vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>*)eastl::
                vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>::operator[](
                    (vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>*)puVar8,
                    uVar9);
            psVar6 = (shared_ptr*)eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>::operator[](pvVar5, 3);
            new (&local_70) shared_ptr<dash3d::Decor>(psVar6);
            pvVar5 = (vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>*)eastl::
                vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>::operator[](
                    (vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>*)puVar8,
                    uVar9);
            psVar6 = (shared_ptr*)eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>::operator[](pvVar5, 4);
            new (&local_60) shared_ptr<dash3d::Decor>(psVar6);
            pvVar5 = (vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>*)eastl::
                vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>::operator[](
                    (vector<eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>, eastl::allocator>*)puVar8,
                    uVar9);
            psVar6 = (shared_ptr*)eastl::vector<shared_ptr<OldscapeAnimCurve>, eastl::allocator>::operator[](pvVar5, 5);
            new (&local_50) shared_ptr<dash3d::Decor>(psVar6);
            bVar2 = operator!=(&local_70, (_func_decltype_nullptr*)0);
            if (bVar2) {
                pOVar7 = (OldscapeAnimCurve*)shared_ptr<OldscapeAnimCurve>::operator->(
                    (shared_ptr<OldscapeAnimCurve>*)&local_70);
                local_3c = pOVar7->GetValue(in_R8D);
            }
            bVar2 = operator!=(&local_60, (_func_decltype_nullptr*)0);
            if (bVar2) {
                pOVar7 = (OldscapeAnimCurve*)shared_ptr<OldscapeAnimCurve>::operator->(
                    (shared_ptr<OldscapeAnimCurve>*)&local_60);
                local_38 = pOVar7->GetValue(in_R8D);
            }
            bVar2 = operator!=(&local_50, (_func_decltype_nullptr*)0);
            if (bVar2) {
                pOVar7 = (OldscapeAnimCurve*)shared_ptr<OldscapeAnimCurve>::operator->(
                    (shared_ptr<OldscapeAnimCurve>*)&local_50);
                local_34 = pOVar7->GetValue(in_R8D);
            }
            local_50.~shared_ptr();
            local_60.~shared_ptr();
            local_70.~shared_ptr();
        }
        puVar8 = &param_1->field_48;
        puVar4 = (undefined4*)jag::math::Vector4T<float>::operator[]((Vector4T<float>*)puVar8, 0);
        *puVar4 = local_3c;
        puVar4 = (undefined4*)jag::math::Vector4T<float>::operator[]((Vector4T<float>*)puVar8, 1);
        *puVar4 = local_38;
        puVar4 = (undefined4*)jag::math::Vector4T<float>::operator[]((Vector4T<float>*)puVar8, 2);
        *puVar4 = local_34;
    }

    // 0x100324580, 16 bytes, placed by class name
    // OldscapeAnimKeyFrameSet::GetRotationOrder(int)
    uint OldscapeAnimKeyFrameSet::GetRotationOrder(int param_1) {
        return param_1 & 255;
    }

    // 0x100324590, 16 bytes, placed by class name
    // OldscapeAnimKeyFrameSet::GetStart() const
    uint OldscapeAnimKeyFrameSet::GetStart() {
        return m_start;
    }

    // 0x1003245a0, 16 bytes, placed by class name
    // OldscapeAnimKeyFrameSet::GetEnd() const
    uint OldscapeAnimKeyFrameSet::GetEnd() {
        return m_end;
    }

    // 0x1003245b0, 48 bytes, placed by class name
    // OldscapeAnimKeyFrameSet::GetDuration() const
    int OldscapeAnimKeyFrameSet::GetDuration() {
        int iVar1;
        int iVar2;

        iVar1 = GetEnd(this);
        iVar2 = GetStart(this);
        return iVar1 - iVar2;
    }

    // 0x1003245e0, 16 bytes, placed by class name
    // OldscapeAnimKeyFrameSet::GetTransAnim() const
    undefined1 OldscapeAnimKeyFrameSet::GetTransAnim() {
        return m_transAnim;
    }

    // 0x1003277f0, 16 bytes, base-object destructor, placed by class name
    // OldscapeAnimKeyFrameSet::TryLoad(jagex3::Js5&, jagex3::Js5&, bool)::$_6::~$_6()
    /* ~$_6() */

    void OldscapeAnimKeyFrameSet::TryLoad(jagex3::Js5&, jagex3::Js5&, bool)::$_6::~__6() {
        ~shared_ptr();
    }

    // 0x10033a040, 16 bytes, complete-object constructor, placed by class name
    // OldscapeAnimKeyFrameSet::TryLoad(jagex3::Js5&, jagex3::Js5&, bool)::$_6::$_6($_6&&): jumps straight to the base-object constructor

    // 0x10033a050, 32 bytes, base-object constructor, placed by class name
    // OldscapeAnimKeyFrameSet::TryLoad(jagex3::Js5&, jagex3::Js5&, bool)::$_6::$_6($_6&&)
    /* $_6($_6&&) */

    void OldscapeAnimKeyFrameSet::TryLoad(jagex3::Js5&, jagex3::Js5&, bool)::$_6::__6(__6* param_1) {
        OldscapeAnimKeyFrameSet* pOVar1;

        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
        pOVar1 = *(OldscapeAnimKeyFrameSet**)(param_1 + 24);
        *(undefined8*)&field_16 = *(undefined8*)(param_1 + 16);
        field_24 = pOVar1;
    }

    // 0x10033a150, 48 bytes, placed by class name
    // OldscapeAnimKeyFrameSet::TryLoad(jagex3::Js5&, jagex3::Js5&, bool)::$_6::operator()() const
    /* OldscapeAnimKeyFrameSet::TryLoad(jagex3::Js5&,
   jagex3::Js5&, bool)::$_6::TEMPNAMEPLACEHOLDERVALUE() const */

    void OldscapeAnimKeyFrameSet::TryLoad(jagex3::Js5&, jagex3::Js5&, bool)::$_6::operator()() {
        OldscapeAnimKeyFrameSet* this_00;
        PacketJ* pPVar1;

        this_00 = field_24;
        pPVar1 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
            (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)this);
        this_00->LoadFromPacket(pPVar1, field_16);
    }

} // namespace jag::oldscape::graphics::animation

namespace jag::oldscape::dash3d {
    // 0x100328f40, 112 bytes, placed by neighbouring functions
    // MayaPoseStateRSeven::AnimateKeyFramedTransparency() const::$_0::operator()(int, float) const
    /* MayaPoseStateRSeven::AnimateKeyFramedTransparency()
   const::$_0::TEMPNAMEPLACEHOLDERVALUE(int, float) const */

    _func_AnimateKeyFramedTransparency* const ::$_0::operator()(int param_1, float param_2) {
        _func_AnimateKeyFramedTransparency* p_Var1;
        _func_AnimateKeyFramedTransparency* p_Var2;
        vector_map<int, int, eastl::less<int>, eastl::allocator,
                   eastl::vector<eastl::pair<int, int>, eastl::allocator>>* this_00;
        int local_20;
        float local_1c;

        local_1c = -param_2;
        this_00 = (vector_map<int, int, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, int>, eastl::allocator>>*)(*(long*)this + 72);
        local_20 = param_1;
        p_Var1 = (_func_AnimateKeyFramedTransparency*)
            eastl::vector_map<int, int, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, int>, eastl::allocator>>::find(this_00, &local_20);
        p_Var2 = (_func_AnimateKeyFramedTransparency*)this_00->end();
        if (p_Var1 == p_Var2) {
            p_Var2 = (_func_AnimateKeyFramedTransparency*)
                eastl::vector_map<int, float, eastl::less<int>, eastl::allocator,
                                  eastl::vector<eastl::pair<int, float>, eastl::allocator>>::emplace<int&,
                                                                                                     float&>(
                    (vector_map<int, float, eastl::less<int>, eastl::allocator,
                                eastl::vector<eastl::pair<int, float>, eastl::allocator>>*)this_00,
                    &local_20, &local_1c);
        } else {
            *(float*)(p_Var1 + 4) = *(float*)(p_Var1 + 4) + local_1c;
        }
        return p_Var2;
    }

    // 0x10032a140, 16 bytes, placed by neighbouring functions
    // DashBasePoseStateRSeven::LoadFromLabeledModel(ResolvedModel const&)::$_1::operator()(jag::graphics::GeometryBatch const&) const
    /* DashBasePoseStateRSeven::LoadFromLabeledModel(ResolvedModel
   const&)::$_1::TEMPNAMEPLACEHOLDERVALUE(jag::graphics::GeometryBatch const&) const */

    void DashBasePoseStateRSeven::LoadFromLabeledModel(ResolvedModel_const&)::$_1::operator()(GeometryBatch* param_1) {
        GetBoneIDMap();
    }

    // 0x10032a8f0, 16 bytes, placed by neighbouring functions
    // DashBasePoseStateRSeven::LoadFromLabeledModel(ResolvedModel const&)::$_2::operator()(jag::graphics::GeometryBatch const&) const
    /* DashBasePoseStateRSeven::LoadFromLabeledModel(ResolvedModel
   const&)::$_2::TEMPNAMEPLACEHOLDERVALUE(jag::graphics::GeometryBatch const&) const */

    void DashBasePoseStateRSeven::LoadFromLabeledModel(ResolvedModel_const&)::$_2::operator()(GeometryBatch* param_1) {
        GetMaterial();
    }

    // 0x100335c90, 464 bytes, placed by neighbouring functions
    // DepthBiasComputer::Run()::$_5::operator()(int, int, float) const
    /* WARNING: Removing unreachable block (ram,4298333409) */
    /* DepthBiasComputer::Run()::$_5::TEMPNAMEPLACEHOLDERVALUE(int, int, float)
   const */

    void DepthBiasComputer::Run()::$_5::operator()(int param_1, int param_2, float param_3) {
        char cVar1;
        char cVar2;
        long* plVar3;
        bool bVar4;
        undefined4 uVar5;
        Array<short, eastl::allocator>* pAVar6;
        short* psVar7;
        undefined8 uVar8;
        vector<DepthBiasComputer::Link, eastl::allocator>* this_00;
        undefined8* puVar9;
        short sVar10;
        vector<DepthBiasComputer::Node, eastl::allocator>* this_01;
        short sVar12;
        float fVar14;

        plVar3 = field_0;
        bVar4 = ((*plVar3 + 256))->operator_cast_to_bool();
        if (bVar4) {
            pAVar6 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                (shared_ptr<Array<short, eastl::allocator>>*)(*plVar3 + 256));
            psVar7 = (short*)Array<short, eastl::allocator>::operator[](pAVar6, (ulong)param_1);
            sVar12 = *psVar7;
            pAVar6 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                (shared_ptr<Array<short, eastl::allocator>>*)(*plVar3 + 256));
            psVar7 = (short*)Array<short, eastl::allocator>::operator[](pAVar6, (ulong)param_2);
            if (sVar12 != *psVar7)
                goto LAB_100335d7d;
        }
        bVar4 = ((*plVar3 + 240))->operator_cast_to_bool();
        sVar10 = 0;
        sVar12 = 0;
        if (bVar4) {
            pAVar6 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                (shared_ptr<Array<short, eastl::allocator>>*)(*plVar3 + 240));
            psVar7 = (short*)Array<short, eastl::allocator>::operator[](pAVar6, (ulong)param_1);
            sVar12 = *psVar7;
            pAVar6 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                (shared_ptr<Array<short, eastl::allocator>>*)(*plVar3 + 240));
            psVar7 = (short*)Array<short, eastl::allocator>::operator[](pAVar6, (ulong)param_2);
            sVar10 = *psVar7;
        }
        if (sVar12 == sVar10) {
            return;
        }
    LAB_100335d7d:
        cVar1 = *(char*)(field_8 + (ulong)param_1);
        cVar2 = *(char*)(field_8 + (ulong)param_2);
        fVar14 = (float)fabs(param_3);
        uVar5 = 0;
        if ((fVar14 <= 3.0) && (uVar5 = 1, fVar14 < 1.5)) {
            uVar5 = 2;
        }
        bVar4 = cVar2 < cVar1;
        if (cVar1 == cVar2) {
            bVar4 = param_3 < 0.0;
        }
        this_01 = (vector<DepthBiasComputer::Node, eastl::allocator>*)(plVar3 + 1);
        uVar8 = eastl::vector<DepthBiasComputer::Node, eastl::allocator>::operator[](this_01, (ulong)param_1);
        this_00 = (vector<DepthBiasComputer::Link, eastl::allocator>*)
            eastl::vector<DepthBiasComputer::Node, eastl::allocator>::operator[](this_01, (ulong)param_2);
        if (bVar4) {
            uVar8 = eastl::vector<DepthBiasComputer::Node, eastl::allocator>::operator[](this_01, (ulong)param_2);
            this_00 = (vector<DepthBiasComputer::Link, eastl::allocator>*)
                eastl::vector<DepthBiasComputer::Node, eastl::allocator>::operator[](this_01, (ulong)param_1);
        }
        eastl::vector<DepthBiasComputer::Link, eastl::allocator>::push_back_uninitialized(this_00);
        puVar9 = (undefined8*)eastl::vector<DepthBiasComputer::Link, eastl::allocator>::back(this_00);
        *(undefined4*)(puVar9 + 1) = uVar5;
        *puVar9 = uVar8;
    }

} // namespace jag::oldscape::dash3d

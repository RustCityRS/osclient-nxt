// libs/oldscape/jagex3/graphics/animation/OldscapeAnimKeyFrameSet.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "OldscapeAnimKeyFrameSet.h"

namespace jag::oldscape::graphics::animation {
    // 0x100d4226c
    int32_t OldscapeAnimKeyFrameSet::DEBUG_ANIM = 1;

    // 0x10012d150: OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob::OldscapeAnimCurveLoadJob() has the same machine code as FoundObject::FoundObject()

    // 0x10012d160: OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob::~OldscapeAnimCurveLoadJob() has the same machine code as FoundObject::~FoundObject()

    // 0x1002ed6a0
    shared_ptr<dash3d::AnimBase>* OldscapeAnimKeyFrameSet::GetBase() const {
        return (shared_ptr<dash3d::AnimBase>*)&field_136;
    }

    // 0x1002ed880
    unsigned int OldscapeAnimKeyFrameSet::GetBind() const {
        return m_bind;
    }

    // 0x1002ed920
    void OldscapeAnimKeyFrameSet::AnimateKeyFramedTransparency(int arg1, std::function<void(int, float)> callback) {
        uint8_t* this_00;
        bool cVar1;
        unsigned int uVar4;
        int* piVar5;
        vector<shared_ptr<OldscapeAnimCurve>>* pvVar6;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        shared_ptr<OldscapeAnimCurve>* this_04;
        OldscapeAnimCurve* this_05;
        vector<unsigned int>* this_06;
        unsigned long arg1_00;
        unsigned long arg1_01;
        float arg2;

        auto this_01 = GetBase();
        CoordMapSquare* this_02 = (CoordMapSquare*)**this_01;
        int iVar3 = this_02->GetZ();
        if (0 < iVar3) {
            this_00 = &field_8;
            arg1_01 = 0;
            do {
                piVar5 = &this_02->field_8[arg1_01];
                if ((*piVar5 == 5) && (cVar1 = this_00->empty(), !cVar1)) {
                    cVar1 = ((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(*this_00)[arg1_01])
                                ->empty();
                    if (!cVar1) {
                        pvVar6 = (vector<shared_ptr<OldscapeAnimCurve>>*)(*this_00)[arg1_01];
                        midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)(*pvVar6)[0];
                        if (*midiPlayerMainThread != nullptr) {
                            pvVar6 = (vector<shared_ptr<OldscapeAnimCurve>>*)(*this_00)[arg1_01];
                            this_04 = (shared_ptr<OldscapeAnimCurve>*)(*pvVar6)[0];
                            this_05 = (OldscapeAnimCurve*)**this_04;
                            this_06 = (vector<unsigned int>*)this_02[3].m_z[arg1_01];
                            uVar4 = this_06->size();
                            if (0 < (int)uVar4) {
                                arg1_00 = 0;
                                do {
                                    piVar5 = (int*)(*this_06)[arg1_00];
                                    iVar3 = *piVar5;
                                    arg2 = (float)this_05->GetValue(arg1);
                                    std::function<void(int, float)>::operator()((function<void(int, float)>*)callback,
                                                                                iVar3, arg2);
                                    arg1_00 = arg1_00 + 1;
                                } while (uVar4 != arg1_00);
                            }
                        }
                    }
                }
                arg1_01 = arg1_01 + 1;
                iVar3 = this_02->GetZ();
            } while ((long)arg1_01 < (long)iVar3);
        }
    }

    // 0x1002f4df0
    void OldscapeAnimKeyFrameSet::SetJointLocal(int arg1, OldscapeJoint& oldscapeJoint, int arg3, int arg4) {
        uint32_t in_register_00000014;
        uint32_t in_register_0000003c;

        OldscapeAnimKeyFrameSet* oldscapeAnimKeyFrameSet =
            (OldscapeAnimKeyFrameSet*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        OldscapeJoint* oldscapeJoint_00 = (OldscapeJoint*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg3);
        Matrix44T<float> local_5c8;
        local_5c8.SetToIdentity();
        OldscapeJoint local_1f8(*oldscapeJoint_00);
        RotateMatrix(oldscapeAnimKeyFrameSet, &local_5c8, arg4, &local_1f8, (int)oldscapeJoint);
        OldscapeJoint local_3b8(*oldscapeJoint_00);
        ScaleMatrix(oldscapeAnimKeyFrameSet, &local_5c8, arg4, &local_3b8, (int)oldscapeJoint);
        OldscapeJoint local_578(*oldscapeJoint_00);
        TranslateMatrix(oldscapeAnimKeyFrameSet, &local_5c8, arg4, &local_578, (int)oldscapeJoint);
        oldscapeJoint_00->SetLocal(local_5c8);
    }

    // 0x100322780
    OldscapeAnimKeyFrameSet::~OldscapeAnimKeyFrameSet() {
        future<void>* pfVar3;

        uint8_t* this_00 = &field_160;
        if (this_00->operator_cast_to_bool() != '\0') {
            pfVar3 = (future<void>*)(*this_00).operator->();
            pfVar3->wait();
        }
        uint8_t* this_01 = &field_168;
        pfVar3 = (future<void>*)this_01->HeapBeginPtr();
        auto pfVar2 = this_01->end();
        for (; pfVar3 != pfVar2; pfVar3 = pfVar3 + 8) {
            pfVar3->wait();
        }
        this_01->~vector();
        this_00->~unique_ptr();
        field_136.~shared_ptr();
        field_72.~hash_map();
        field_40.~vector();
        field_8.~vector();
    }

    // 0x100322910
    auto OldscapeAnimKeyFrameSet::Load(jagex3::Js5& js51, jagex3::Js5& js52, int arg3, bool arg4) {
        unsigned int arg2;
        PacketT<Array<unsigned char>>* pPVar3;
        long lVar4;
        OldscapeAnimKeyFrameSet* pOVar5;
        uint32_t in_register_00000081;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_60;

        uint32_t local_34 = (((uint32_t)in_register_00000081 << 8) | (uint8_t)arg4);
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_50;
        if ((uint8_t*)js51.PeekFile(local_50, (unsigned int)arg3 >> 16, arg3 & 65535) == DataStatus::READY) {
            pPVar3 = (PacketT<Array<unsigned char>>*)local_50.operator->();
            lVar4 = pPVar3->GetDataPtr();
            arg2 = ((unsigned int)*(unsigned short*)(lVar4 + 1) | (*(unsigned short*)(lVar4 + 1) & 255) << 16) >> 8;
            if ((char)local_34 == '\0') {
                js52.PeekFile(local_50, arg2, 0);
            } else {
                js52.PeekFile(local_50, 0, arg2);
            }
            pPVar3 = (PacketT<Array<unsigned char>>*)local_50.operator->();
            lVar4 = pPVar3->GetDataPtr();
            if (lVar4 == 0) {
                auto result;
            } else {
                local_60 = shared_ptr();
                pOVar5 = (OldscapeAnimKeyFrameSet*)operator new(200);
                OldscapeAnimKeyFrameSet(pOVar5, arg3);
                local_60.reset<OldscapeAnimKeyFrameSet, void>(pOVar5);
                pOVar5 = (OldscapeAnimKeyFrameSet*)local_60.operator->();
                if (TryLoad(pOVar5, js51, js52, (bool)(char)local_34) == '\0') {
                    new (&result) shared_ptr();
                } else {
                    result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_60);
                }
            }
        } else {
            new (&result) shared_ptr();
        }
        return result;
    }

    // 0x100322af0
    unsigned long OldscapeAnimKeyFrameSet::TryLoad(jagex3::Js5& js51, jagex3::Js5& js52, bool arg3) {
        bool bVar1;
        unsigned int uVar2;
        PacketReaderMixin<PacketT<Array<unsigned char>>>* pPVar4;
        uint64_t extraout_var;
        AnimBase* this_00;
        PacketJ<Array<unsigned char> _>* packetJ;
        Layout* this_01;
        char* str;
        unsigned long uVar5;
        AutoSingleton<ThreadPoolSingleton>* this_02;
        __6 local_88;
        ReturnValue local_68;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_50;
        ReturnValue local_40;
        uint8_t local_31;

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_60;
        if ((uint8_t*)js51.GetFile(local_60, (unsigned int)field_0 >> 16, field_0 & 65535, nullptr) ==
            DataStatus::READY) {
            pPVar4 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)local_60.operator->();
            local_31 = pPVar4->g1();
            pPVar4 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)local_60.operator->();
            uVar2 = pPVar4->g2();
            local_50 = shared_ptr();
            if (arg3) {
                js52.PeekFile(local_50, 0, uVar2 & 65535);
            } else {
                js52.PeekFile(local_50, uVar2 & 65535, 0);
            }
            bVar1 = local_50 == nullptr;
            if (!bVar1) {
                this_00 = (AnimBase*)operator new(152);
                packetJ = (PacketJ<Array<unsigned char> _>*)*local_50;
                new (this_00) dash3d::AnimBase(uVar2 & 65535, *packetJ);
                this_02 = (AutoSingleton<ThreadPoolSingleton>*)&field_136;
                this_02->reset<dash3d::AnimBase, void>(this_00);
                this_01 = (Layout*)this_02->Instance();
                str = (char*)this_01->SSOBeginPtr();
                local_88 = shared_ptr(&local_60);
                local_88.field_16 = (int)local_31;
                local_88.field_24 = this;
                ThreadPool::AddTask<OldscapeAnimKeyFrameSet::TryLoad(jagex3::Js5&, jagex3::Js5&, bool)::__6>(
                    &local_40, str, (__6*)&local_88);
                local_68 = std::make_unique<std::future<void>, std::future<void>>(local_40);
                field_160 = local_68;
                TryLoad(jagex3::Js5&, jagex3::Js5&, bool)::$_6::~__6(&local_88);
            }
            uVar5 = (((uint64_t)extraout_var << 8) | (uint8_t)bVar1) & 4294967295 ^ 1;
        } else {
            uVar5 = 0;
        }
        return uVar5;
    }

    // 0x100322ce0
    uint8_t* OldscapeAnimKeyFrameSet::GetStatus() {
        future_status fVar2;
        future<void>* this_00;
        uint8_t** ppuVar3;
        type* arg2;
        bool bVar4;
        uint8_t auVar6[16];
        duration<long long, std::ratio<1l, 1l>> local_40;
        int local_34;

        uint8_t* puVar5 = &field_160;
        bool cVar1 = puVar5->operator_cast_to_bool();
        if (!cVar1) {
            cVar1 = field_168.empty();
            if (!cVar1)
                goto LAB_100322d1b;
        LAB_100322df4:
            ppuVar3 = &DataStatus::READY;
        } else {
        LAB_100322d1b:
            cVar1 = puVar5->operator_cast_to_bool();
            if (!cVar1) {
            LAB_100322d66:
                puVar5 = &field_168;
                this_00 = (future<void>*)puVar5->HeapBeginPtr();
                auVar6 = puVar5->end();
                arg2 = auVar6._8_8_;
                bVar4 = true;
                if (this_00 != auVar6._0_8_) {
                    do {
                        local_34 = 0;
                        local_40.duration<int>(local_34, arg2);
                        fVar2 = this_00->wait_for<long long, std::ratio<1l, 1l>>(local_40);
                        if (fVar2 == 0) {
                            this_00 = (future<void>*)puVar5->erase(this_00);
                        } else {
                            this_00 = this_00 + 8;
                            bVar4 = false;
                        }
                        auVar6 = puVar5->end();
                        arg2 = auVar6._8_8_;
                    } while (this_00 != auVar6._0_8_);
                }
                if (bVar4)
                    goto LAB_100322df4;
            } else {
                auVar6 = (*puVar5).operator->();
                local_34 = 0;
                local_40.duration<int>(local_34, auVar6._8_8_);
                fVar2 = auVar6._0_8_->wait_for<long long, std::ratio<1l, 1l>>(local_40);
                if (fVar2 == 0) {
                    puVar5->reset(nullptr);
                    goto LAB_100322d66;
                }
            }
            ppuVar3 = &DataStatus::NOTLOADED;
        }
        return *ppuVar3;
    }

    // 0x100322ec0
    OldscapeAnimKeyFrameSet::OldscapeAnimKeyFrameSet(int arg1)
        : MakeSharedPool<OldscapeAnimKeyFrameSet, 128>(), field_0(arg1) {
        uint8_t* local_38 = &field_8;
        new (local_38) eastl::vector<eastl::vector<shared_ptr<OldscapeAnimCurve>>>();
        new (&field_40) eastl::vector<eastl::vector<shared_ptr<OldscapeAnimCurve>>>();
        new (&field_72) eastl::hash_map<int, AnimRotationOrder>(local_40);
        new (&field_136) shared_ptr();
        m_bind = 0;
        field_160.unique_ptr<true, void>();
        new (&field_168) eastl::vector<std::future<void>>();
    }

    // 0x1003232e0
    void OldscapeAnimKeyFrameSet::LoadFromPacket(PacketJ<Array<unsigned char>>& packetJ, int arg2) {
        uint64_t uVar1;
        uint64_t uVar2;
        unsigned int uVar7;
        PacketJ<Array<unsigned char> _>* pPVar8;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* pvVar9;
        vector<shared_ptr<OldscapeAnimCurve>>* pvVar10;
        shared_ptr<OldscapeAnimCurve>* this_03;
        long lVar11;
        shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>* this_04;
        char* str;
        unsigned long arg1;
        ReturnValue local_e0;
        ReturnValue local_c0;
        vector<shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>> local_b0;
        uint64_t local_90;
        uint64_t local_88;
        ReturnValue local_60;
        uint8_t local_31;

        int local_64 = arg2;
        unsigned short uVar5 = packetJ.g2();
        m_start = (unsigned int)uVar5;
        uVar5 = packetJ.g2();
        m_end = (unsigned int)uVar5;
        uint8_t bVar3 = packetJ.g1();
        m_bind = (unsigned int)bVar3;
        PacketJ<Array<unsigned char> _>* local_40 = packetJ;
        uVar5 = packetJ.g2();
        ReturnValue local_b8 = ((AnimBase*)field_136.operator->())->GetSkeleton();
        int iVar6 = ((Skeleton*)local_b8.operator->())->GetNumOfJoints();
        vector<eastl::vector<shared_ptr<OldscapeAnimCurve>>>* local_78 =
            (vector<eastl::vector<shared_ptr<OldscapeAnimCurve>>>*)&field_40;
        field_40.resize((long)iVar6);
        iVar6 = ((CoordMapSquare*)field_136.operator->())->GetZ();
        vector<eastl::vector<shared_ptr<OldscapeAnimCurve>>>* local_70 =
            (vector<eastl::vector<shared_ptr<OldscapeAnimCurve>>>*)&field_8;
        field_8.resize((long)iVar6);
        unsigned long uVar16 = (unsigned long)uVar5;
        ReturnValue* pRVar15 = &local_e0;
        new (pRVar15) eastl::vector<shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>>(uVar16, local_b8);
        unsigned long local_80 = uVar16;
        if (uVar5 != 0) {
            uVar16 = 0;
            do {
                pPVar8 = local_40;
                bVar3 = local_40->g1();
                iVar6 = pPVar8->gSmart();
                local_31 = pPVar8->g1();
                make_shared<OldscapeAnimCurve>(&local_b8);
                pPVar8 = (PacketJ<Array<unsigned char> _>*)local_b8.operator->();
                OldscapeAnimCurve::LoadFromPacket(*pPVar8, (int)local_40);
                uVar7 = GetComponentCount((unsigned int)bVar3);
                arg1 = (unsigned long)iVar6;
                if (bVar3 == 1) {
                    pvVar9 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(*local_78)[arg1];
                    if (pvVar9->empty()) {
                        pvVar10 = (vector<shared_ptr<OldscapeAnimCurve>>*)(*local_78)[arg1];
                        pvVar10->resize((unsigned long)uVar7);
                    }
                } else {
                    pvVar9 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(*local_70)[arg1];
                    if (pvVar9->empty()) {
                        pvVar10 = (vector<shared_ptr<OldscapeAnimCurve>>*)(*local_70)[arg1];
                        pvVar10->resize((unsigned long)uVar7);
                    }
                }
                make_shared<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>(&local_60);
                this_03 = (shared_ptr<OldscapeAnimCurve>*)local_60.operator->();
                *this_03 = local_b8;
                lVar11 = local_60.operator->();
                *(uint8_t*)(lVar11 + 16) = bVar3;
                lVar11 = local_60.operator->();
                *(uint8_t*)(lVar11 + 17) = local_31;
                lVar11 = local_60.operator->();
                *(int*)(lVar11 + 20) = iVar6;
                this_04 = &local_e0[uVar16];
                *this_04 = local_60;
                if (bVar3 == 4) {
                    *(uint8_t*)((long)(ReturnValue)this + 156) = 1;
                }
                pRVar15 = &local_b8;
                pRVar15->~shared_ptr();
                uVar16 = uVar16 + 1;
            } while (local_80 != uVar16);
        }
        auto pLVar12 = pRVar15->Instance();
        uVar16 = pLVar12->SSOBeginPtr();
        local_60.InitialiseWorkGroups(uVar16, local_80);
        pRVar15 = &local_60;
        auto puVar13 = pRVar15->HeapBeginPtr();
        auto puVar14 = pRVar15->end();
        if (puVar13 != puVar14) {
            local_40 = (PacketJ<Array<unsigned char> _>*)((long)(ReturnValue)this + 168);
            do {
                uVar1 = *puVar13;
                uVar2 = puVar13[1];
                pLVar12 = (Layout*)pRVar15->Instance();
                str = (char*)pLVar12->SSOBeginPtr();
                local_b8 = (ReturnValue)this;
                local_b0 = eastl::vector<shared_ptr<OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>>(local_e0);
                local_90 = uVar1;
                local_88 = uVar2;
                ThreadPool::AddTask<OldscapeAnimKeyFrameSet::LoadFromPacket(PacketJ<Array<unsigned char>>&, int)::__7>(
                    &local_c0, str, (__7*)&local_b8);
                local_40->push_back(local_c0);
                LoadFromPacket(PacketJ<Array<unsigned char>>&, int)::$_7::~__7((__7*)&local_b8);
                pRVar15 = &local_60;
                puVar14 = (uint64_t*)pRVar15->end();
                puVar13 = puVar13 + 2;
            } while (puVar13 != puVar14);
        }
    }

    // 0x100323850
    void GetComponentCount(AnimTargetType animTargetType) {
        uint8_t bVar2 = (char)animTargetType - 1;
        uint32_t uVar1 = 0;
        if (bVar2 < 5) {
            uVar1 = *(uint32_t*)(&DAT_100d42274 + (long)(char)bVar2 * 4);
        }
        return uVar1;
    }

    // 0x100323d30
    void OldscapeAnimKeyFrameSet::RotateMatrix(jag::math::Matrix44T<float>& matrix44, int arg2,
                                               OldscapeJoint oldscapeJoint, int arg4) {
        vector<shared_ptr<OldscapeAnimCurve>>* pvVar5;
        shared_ptr<dash3d::GroundDecor>* psVar6;
        OldscapeAnimCurve* pOVar7;
        uint64_t local_b8;

        auto puVar3 = oldscapeJoint->RotateDefaults(m_bind);
        uint64_t local_78 = *puVar3;
        uint32_t local_70 = *(uint32_t*)(puVar3 + 1);
        float* pfVar4 = &local_78[0];
        float local_3c = *pfVar4;
        pfVar4 = &local_78[1];
        float local_38 = *pfVar4;
        pfVar4 = &local_78[2];
        float local_34 = *pfVar4;
        uint8_t* this_01 = &field_40;
        if (((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(*this_01)[(unsigned long)arg2])
                ->empty() == '\0') {
            pvVar5 = (vector<shared_ptr<OldscapeAnimCurve>>*)(*this_01)[(unsigned long)arg2];
            psVar6 = (shared_ptr<dash3d::GroundDecor>*)(*pvVar5)[0];
            new (&local_b8) shared_ptr(psVar6);
            pvVar5 = (vector<shared_ptr<OldscapeAnimCurve>>*)(*this_01)[(unsigned long)arg2];
            psVar6 = (shared_ptr<dash3d::GroundDecor>*)(*pvVar5)[1];
            local_60 = shared_ptr(psVar6);
            pvVar5 = (vector<shared_ptr<OldscapeAnimCurve>>*)(*this_01)[(unsigned long)arg2];
            psVar6 = (shared_ptr<dash3d::GroundDecor>*)(*pvVar5)[2];
            local_50 = shared_ptr(psVar6);
            if (local_b8 != nullptr) {
                pOVar7 = (OldscapeAnimCurve*)local_b8.operator->();
                local_3c = (float)pOVar7->GetValue(arg4);
            }
            if (local_60 != nullptr) {
                pOVar7 = (OldscapeAnimCurve*)local_60.operator->();
                local_38 = (float)pOVar7->GetValue(arg4);
            }
            if (local_50 != nullptr) {
                pOVar7 = (OldscapeAnimCurve*)local_50.operator->();
                local_34 = (float)pOVar7->GetValue(arg4);
            }
        }
        Vector3T<int> local_c8;
        uint8_t* quaternion = PTR_IDENTITY_100ee6678;
        shared_ptr<dash3d::Decor> local_60(*PTR_IDENTITY_100ee6678);
        local_c8.Set(1.0, 0.0, 0.0);
        local_60.FromAxisAngle(local_c8, local_3c);
        shared_ptr<dash3d::Decor> local_50(*quaternion);
        local_c8.Set(0.0, 1.0, 0.0);
        local_50.FromAxisAngle(local_c8, local_38);
        QuaternionT<float> local_148(*quaternion);
        local_c8.Set(0.0, 0.0, 1.0);
        local_148.FromAxisAngle(local_c8, local_34);
        QuaternionT<float> local_138(*quaternion);
        QuaternionT<float> local_128(local_138);
        QuaternionT<float> local_118(local_148);
        jag::math::QuaternionMultiply<float>((QuaternionT<float>*)&local_b8, &local_138, &local_128);
        QuaternionT<float> local_108(local_138);
        QuaternionT<float> local_f8(local_60);
        jag::math::QuaternionMultiply<float>((QuaternionT<float>*)&local_b8, &local_138, &local_108);
        QuaternionT<float> local_e8(local_138);
        QuaternionT<float> local_d8(local_50);
        jag::math::QuaternionMultiply<float>((QuaternionT<float>*)&local_b8, &local_138, &local_e8);
        local_b8 = *(uint64_t*)PTR_IDENTITY_100ee6730;
        uint64_t uStack_b0 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 8);
        uint64_t local_a8 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 16);
        uint64_t uStack_a0 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 24);
        uint64_t local_98 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 32);
        uint64_t uStack_90 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 40);
        uint64_t local_88 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 48);
        uint64_t uStack_80 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 56);
        jag::math::FromQuaternion<float>(local_b8, local_138);
        matrix44 *= &local_b8;
    }

    // 0x100324110
    void OldscapeAnimKeyFrameSet::ScaleMatrix(jag::math::Matrix44T<float>& matrix44, int arg2,
                                              OldscapeJoint oldscapeJoint, int arg4) {
        vector<shared_ptr<OldscapeAnimCurve>>* pvVar5;
        shared_ptr<dash3d::GroundDecor>* psVar6;
        OldscapeAnimCurve* pOVar7;
        uint64_t local_b8;
        shared_ptr<dash3d::Decor> local_60;
        shared_ptr<dash3d::Decor> local_50;

        auto puVar3 = oldscapeJoint->ScaleDefaults(m_bind);
        uint64_t local_70 = *puVar3;
        uint32_t local_68 = *(uint32_t*)(puVar3 + 1);
        float* pfVar4 = &local_70[0];
        float local_3c = *pfVar4;
        pfVar4 = &local_70[1];
        float local_38 = *pfVar4;
        pfVar4 = &local_70[2];
        float local_34 = *pfVar4;
        uint8_t* this_01 = &field_40;
        if (((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(*this_01)[(unsigned long)arg2])
                ->empty() == '\0') {
            pvVar5 = (vector<shared_ptr<OldscapeAnimCurve>>*)(*this_01)[(unsigned long)arg2];
            psVar6 = (shared_ptr<dash3d::GroundDecor>*)(*pvVar5)[6];
            new (&local_b8) shared_ptr(psVar6);
            pvVar5 = (vector<shared_ptr<OldscapeAnimCurve>>*)(*this_01)[(unsigned long)arg2];
            psVar6 = (shared_ptr<dash3d::GroundDecor>*)(*pvVar5)[7];
            local_60 = shared_ptr(psVar6);
            pvVar5 = (vector<shared_ptr<OldscapeAnimCurve>>*)(*this_01)[(unsigned long)arg2];
            psVar6 = (shared_ptr<dash3d::GroundDecor>*)(*pvVar5)[8];
            local_50 = shared_ptr(psVar6);
            if (local_b8 != nullptr) {
                pOVar7 = (OldscapeAnimCurve*)local_b8.operator->();
                local_3c = (float)pOVar7->GetValue(arg4);
            }
            if (local_60 != nullptr) {
                pOVar7 = (OldscapeAnimCurve*)local_60.operator->();
                local_38 = (float)pOVar7->GetValue(arg4);
            }
            if (local_50 != nullptr) {
                pOVar7 = (OldscapeAnimCurve*)local_50.operator->();
                local_34 = (float)pOVar7->GetValue(arg4);
            }
        }
        local_b8 = *(uint64_t*)PTR_IDENTITY_100ee6730;
        uint64_t uStack_b0 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 8);
        uint64_t local_a8 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 16);
        uint64_t uStack_a0 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 24);
        uint64_t local_98 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 32);
        uint64_t uStack_90 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 40);
        uint64_t local_88 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 48);
        uint64_t uStack_80 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 56);
        local_b8.SetToDiagonal(local_3c, local_38, local_34, 1.0);
        matrix44 *= &local_b8;
    }

    // 0x100324360
    void OldscapeAnimKeyFrameSet::TranslateMatrix(jag::math::Matrix44T<float>& matrix44, int arg2,
                                                  OldscapeJoint oldscapeJoint, int arg4) {
        vector<shared_ptr<OldscapeAnimCurve>>* pvVar5;
        shared_ptr<dash3d::GroundDecor>* psVar6;
        OldscapeAnimCurve* pOVar7;
        shared_ptr<dash3d::Decor> local_70;
        shared_ptr<dash3d::Decor> local_60;
        shared_ptr<dash3d::Decor> local_50;

        auto puVar3 = oldscapeJoint->TranslateDefaults(m_bind);
        uint64_t local_80 = *puVar3;
        uint32_t local_78 = *(uint32_t*)(puVar3 + 1);
        uint32_t* puVar4 = &local_80[0];
        uint32_t local_3c = *puVar4;
        puVar4 = &local_80[1];
        uint32_t local_38 = *puVar4;
        puVar4 = &local_80[2];
        uint32_t local_34 = *puVar4;
        uint8_t* this_01 = &field_40;
        if (((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(*this_01)[(unsigned long)arg2])
                ->empty() == '\0') {
            pvVar5 = (vector<shared_ptr<OldscapeAnimCurve>>*)(*this_01)[(unsigned long)arg2];
            psVar6 = (shared_ptr<dash3d::GroundDecor>*)(*pvVar5)[3];
            local_70 = shared_ptr(psVar6);
            pvVar5 = (vector<shared_ptr<OldscapeAnimCurve>>*)(*this_01)[(unsigned long)arg2];
            psVar6 = (shared_ptr<dash3d::GroundDecor>*)(*pvVar5)[4];
            local_60 = shared_ptr(psVar6);
            pvVar5 = (vector<shared_ptr<OldscapeAnimCurve>>*)(*this_01)[(unsigned long)arg2];
            psVar6 = (shared_ptr<dash3d::GroundDecor>*)(*pvVar5)[5];
            local_50 = shared_ptr(psVar6);
            if (local_70 != nullptr) {
                pOVar7 = (OldscapeAnimCurve*)local_70.operator->();
                local_3c = pOVar7->GetValue(arg4);
            }
            if (local_60 != nullptr) {
                pOVar7 = (OldscapeAnimCurve*)local_60.operator->();
                local_38 = pOVar7->GetValue(arg4);
            }
            if (local_50 != nullptr) {
                pOVar7 = (OldscapeAnimCurve*)local_50.operator->();
                local_34 = pOVar7->GetValue(arg4);
            }
        }
        Vector4T<float>* this_02 = (Vector4T<float>*)(matrix44 + 48);
        puVar4 = (uint32_t*)(*this_02)[0];
        *puVar4 = local_3c;
        puVar4 = (uint32_t*)(*this_02)[1];
        *puVar4 = local_38;
        puVar4 = (uint32_t*)(*this_02)[2];
        *puVar4 = local_34;
    }

    // 0x100324580
    unsigned int OldscapeAnimKeyFrameSet::GetRotationOrder(int arg1) {
        return arg1 & 255;
    }

    // 0x100324590
    unsigned int OldscapeAnimKeyFrameSet::GetStart() const {
        return m_start;
    }

    // 0x1003245a0
    unsigned int OldscapeAnimKeyFrameSet::GetEnd() const {
        return m_end;
    }

    // 0x1003245b0
    int OldscapeAnimKeyFrameSet::GetDuration() const {
        int iVar1 = GetEnd();
        int iVar2 = GetStart();
        return iVar1 - iVar2;
    }

    // 0x1003245e0
    uint8_t OldscapeAnimKeyFrameSet::GetTransAnim() const {
        return m_transAnim;
    }

    // 0x1003277f0
    OldscapeAnimKeyFrameSet::TryLoad(jagex3::Js5&, jagex3::Js5&, bool)::$_6::~$_6() {}

    // 0x10033a050
    OldscapeAnimKeyFrameSet::TryLoad(jagex3::Js5&, jagex3::Js5&, bool)::$_6::$_6($_6&& arg1) {
        shared_ptr<FileRSevenDebugPresetProvider, void>(arg1);
        OldscapeAnimKeyFrameSet* pOVar1 = *(OldscapeAnimKeyFrameSet**)(arg1 + 24);
        *(uint64_t*)&field_16 = *(uint64_t*)(arg1 + 16);
        field_24 = pOVar1;
    }

    // 0x10033a150
    void OldscapeAnimKeyFrameSet::TryLoad(jagex3::Js5&, jagex3::Js5&, bool)::$_6::operator()() const {
        OldscapeAnimKeyFrameSet* this_00 = field_24;
        PacketJ<Array<unsigned char> _>* packetJ = (PacketJ<Array<unsigned char> _>*)**this;
        this_00->LoadFromPacket(*packetJ, field_16);
    }

} // namespace jag::oldscape::graphics::animation

namespace jag::oldscape::dash3d {
    // 0x100328f40
    void MayaPoseStateRSeven::AnimateKeyFramedTransparency() const ::$_0::operator()(int arg1, float arg2) const {
        float local_1c = -arg2;
        vector<EntityHighlight*, BucketAllocatorEASTL>* this_00 =
            (vector<EntityHighlight*, BucketAllocatorEASTL>*)(*(long*)this + 72);
        long lVar1 = eastl::vector_map<int, int>::find(*this_00);
        long lVar2 = this_00->end();
        if (lVar1 == lVar2) {
            this_00->emplace<int&, float&>(arg1, local_1c);
        } else {
            *(float*)(lVar1 + 4) = *(float*)(lVar1 + 4) + local_1c;
        }
    }

    // 0x10032a140
    void DashBasePoseStateRSeven::LoadFromLabeledModel(ResolvedModel const&)::$_1::operator()(
        const jag::graphics::GeometryBatch& geometryBatch) const {
        GetBoneIDMap();
    }

    // 0x10032a8f0
    void DashBasePoseStateRSeven::LoadFromLabeledModel(ResolvedModel const&)::$_2::operator()(
        const jag::graphics::GeometryBatch& geometryBatch) const {
        GetMaterial();
    }

    // 0x100335c90
    void DepthBiasComputer::Run()::$_5::operator()(int arg1, int arg2, float arg3) const {
        Array<short>* pAVar6;
        short* psVar7;
        short sVar11;

        long* plVar2 = field_0;
        char cVar4 = ((*plVar2 + 256))->operator_cast_to_bool();
        if (cVar4) {
            pAVar6 = (Array<short>*)*(*((*plVar2 + 256)));
            psVar7 = (short*)(*pAVar6)[(unsigned long)arg1];
            sVar11 = *psVar7;
            pAVar6 = (Array<short>*)*(*((*plVar2 + 256)));
            psVar7 = (short*)(*pAVar6)[(unsigned long)arg2];
            if (sVar11 != *psVar7)
                goto LAB_100335d7d;
        }
        cVar4 = ((*plVar2 + 240))->operator_cast_to_bool();
        short sVar10 = 0;
        sVar11 = 0;
        if (cVar4) {
            pAVar6 = (Array<short>*)*(*((*plVar2 + 240)));
            psVar7 = (short*)(*pAVar6)[(unsigned long)arg1];
            sVar11 = *psVar7;
            pAVar6 = (Array<short>*)*(*((*plVar2 + 240)));
            psVar7 = (short*)(*pAVar6)[(unsigned long)arg2];
            sVar10 = *psVar7;
        }
        if (sVar11 == sVar10) {
            return;
        }
    LAB_100335d7d:
        cVar4 = *(char*)(field_8 + (unsigned long)arg1);
        char cVar1 = *(char*)(field_8 + (unsigned long)arg2);
        float fVar12 = (float)fabs(arg3);
        uint32_t uVar5 = 0;
        if ((fVar12 <= 3.0) && (uVar5 = 1, fVar12 < 1.5)) {
            uVar5 = 2;
        }
        bool bVar3 = cVar1 < cVar4;
        if (cVar4 == cVar1) {
            bVar3 = arg3 < 0.0;
        }
        vector<DepthBiasComputer::Node>* this_01 = (vector<DepthBiasComputer::Node>*)(plVar2 + 1);
        uint64_t uVar8 = (*this_01)[(unsigned long)arg1];
        vector<DepthBiasComputer::Link>* this_00 = (vector<DepthBiasComputer::Link>*)(*this_01)[(unsigned long)arg2];
        if (bVar3) {
            uVar8 = (*this_01)[(unsigned long)arg2];
            this_00 = (vector<DepthBiasComputer::Link>*)(*this_01)[(unsigned long)arg1];
        }
        this_00->push_back_uninitialized();
        auto puVar9 = this_00->back();
        *(uint32_t*)(puVar9 + 1) = uVar5;
        *puVar9 = uVar8;
    }

} // namespace jag::oldscape::dash3d

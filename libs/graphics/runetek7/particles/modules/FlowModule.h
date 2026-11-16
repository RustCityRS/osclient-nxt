// libs/graphics/runetek7/particles/modules/FlowModule.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::graphics::particlemodules {
    class Acceleration {
    public:
        // virtual methods in vtable order
        virtual ~Acceleration();
        virtual LoadFromPacket(unsigned char, PacketT<Array<unsigned char, eastl::allocator>>&);
        virtual void ProcessTick(float, ParticleModuleUpdateParams const&, ParticleModuleUpdateState&,
                                 ParticleData&) const;
        virtual void RenderDebug(math::Matrix44T<float> const&, float) const;
        Acceleration();

        // data members, from how the methods use this: 112 bytes
        undefined** field_0; // offset 0, vtable pointer
        float field_8;       // offset 8
        float field_12;      // offset 12
        char _unknown_16[96];
    };

    class Flow {
    public:
        class Shape;
        // virtual methods in vtable order
        virtual ~Flow();
        virtual LoadFromPacket(unsigned char, PacketT<Array<unsigned char, eastl::allocator>>&);
        virtual void ProcessTick(float, ParticleModuleUpdateParams const&, ParticleModuleUpdateState&,
                                 ParticleData&) const;
        virtual float RenderDebug(math::Matrix44T<float> const&, float) const;
        void IsSingleBurstSpawn() const;
        float GetSpawnRate() const;
        Flow();
        GetLifetimeRange() const;
        static /* 8 bytes */ m_particleCountMultiplier; // = 1065353216

        // data members, from how the methods use this: 180 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[140];
        float field_148;      // offset 148
        float field_152;      // offset 152
        float field_156;      // offset 156
        float field_160;      // offset 160
        float field_164;      // offset 164
        undefined4 field_168; // offset 168
        undefined4 field_172; // offset 172
        char _unknown_176[4];
    };

    class Flow::Shape {
    public:
        LoadFromPacket(unsigned char, PacketT<Array<unsigned char, eastl::allocator>>&);
        GetRandomPoint(math::Random&) const;
        void RenderDebug(math::Matrix44T<float> const&, unsigned int) const;
        Shape();

        // data members, from how the methods use this: 72 bytes
        uint field_0; // offset 0
        bool field_4; // offset 4
        char _unknown_5[3];
        undefined8 field_8; // offset 8
        char _unknown_16[4];
        undefined1 field_20; // offset 20
        char _unknown_21[35];
        float field_56; // offset 56
        float field_60; // offset 60
        float field_64; // offset 64
        char _unknown_68[4];
    };

    class Noise {
    public:
        // virtual methods in vtable order
        virtual ~Noise();
        virtual LoadFromPacket(unsigned char, PacketT<Array<unsigned char, eastl::allocator>>&);
        virtual void ProcessTick(float, ParticleModuleUpdateParams const&, ParticleModuleUpdateState&,
                                 ParticleData&) const;
        void PrecalculateNoise();
        GetNoise(float, math::Vector3T<float> const&);
        GetTargetVector() const;
        Noise();
        static /* 2097152 bytes */ NOISE_TABLE;

        // data members, from how the methods use this: 104 bytes
        char _unknown_0[4];
        float field_4; // offset 4
        float field_8; // offset 8
        char _unknown_12[92];
    };

    // 0x1007d9c60, 32 bytes, inline, placed by debug map only (low confidence)
    // Flow::IsSingleBurstSpawn() const
    void Flow::IsSingleBurstSpawn() {
        (&field_8, 1)->test();
    }

    // 0x1007da760, 64 bytes, placed by debug map only (low confidence)
    // Flow::RenderDebug(math::Matrix44T<float> const&, float) const
    float Flow::RenderDebug(Matrix44T* param_1, float param_2) {
        if (Module::m_debugRender != '\0') {
            (&field_12, param_1, 4278211840)->RenderDebug();
            param_2 = (float)(&field_80, param_1, 4283760640)->RenderDebug();
        }
        return param_2;
    }

    // 0x1007da7a0, 112 bytes, placed by debug map only (low confidence)
    // Acceleration::LoadFromPacket(unsigned char, PacketT<Array<unsigned char, eastl::allocator> >&)
    undefined8 Acceleration::LoadFromPacket(uchar param_1, PacketT* param_2) {
        char cVar1;
        undefined8 uVar2;
        float fVar3;

        fVar3 = (float)param_2->gFloat();
        field_8 = fVar3;
        fVar3 = (float)param_2->gFloat();
        field_12 = fVar3;
        cVar1 = (&field_16, param_1, param_2)->LoadFromPacket();
        if (cVar1 == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = (&field_104, param_1, param_2)->LoadFromPacket();
        }
        return uVar2;
    }

    // 0x1007da810, 592 bytes, placed by debug map only (low confidence)
    // Acceleration::ProcessTick(float, ParticleModuleUpdateParams const&, ParticleModuleUpdateState&, ParticleData&) const
    void Acceleration::ProcessTick(float param_1, ParticleModuleUpdateParams* param_2,
                                   ParticleModuleUpdateState* param_3, ParticleData* param_4) {
        Acceleration* pAVar1;
        Layout* pLVar2;
        vector* pvVar3;
        float* pfVar4;
        Vector3T<float>* this_00;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_01;
        type* ptVar5;
        type* ptVar6;
        vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>* this_02;
        float fVar7;
        float fVar8;
        Layout local_c8[8];
        undefined8 local_c0;
        float local_b8;
        undefined8 local_b0;
        float local_a8;
        undefined8 local_a0;
        float local_98;
        vector<float, SafeBucketAllocatorEASTL>* local_90;
        ModulePropertyCurve<float>* local_88;
        ModulePropertyCurve<float>* local_80;
        vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>* local_78;
        vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>* local_70;
        ParticleData* local_68;
        Acceleration* local_60;
        undefined8 local_58;
        float local_50;
        float local_4c;
        float local_48;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        if ((DAT_1039bd382 == '\0') && (*(long*)&param_2[1].field_12 != 0)) {
            local_40 = param_1 * param_1;
            this_02 =
                (vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>*)&param_4->field_168;
            local_90 = (vector<float, SafeBucketAllocatorEASTL>*)&param_4->field_24;
            local_88 = (ModulePropertyCurve<float>*)&field_16;
            local_80 = (ModulePropertyCurve<float>*)&field_104;
            local_78 =
                (vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>*)&param_4
                    ->field_120;
            ptVar6 = (type*)0;
            local_70 = this_02;
            local_68 = param_4;
            local_60 = this;
            local_3c = param_1;
            do {
                ptVar5 = ptVar6;
                pLVar2 = (Layout*)
                    eastl::vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>::operator[](
                        this_02, (ulong)ptVar6);
                pvVar3 = eastl::string::Layout::SSOBeginPtr(pLVar2, ptVar5);
                fVar7 = (float)pvVar3->LengthSq();
                if (0.0 < fVar7) {
                    local_44 = fVar7;
                    pfVar4 =
                        (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](local_90, (ulong)ptVar6);
                    pAVar1 = local_60;
                    local_38 = *pfVar4;
                    fVar7 = local_60->field_8;
                    local_34 = fVar7;
                    local_4c = (float)local_88->Eval(local_38);
                    local_4c = local_4c + local_34;
                    local_34 = pAVar1->field_12;
                    local_48 = (float)local_80->Eval(local_38);
                    local_48 = local_48 + local_34;
                    pfVar4 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
                        (vector<float, SafeBucketAllocatorEASTL>*)local_68, (ulong)ptVar6);
                    local_38 = math::Lerp<float, float>(&local_4c, &local_48, *pfVar4);
                    ptVar5 = ptVar6;
                    pLVar2 = (Layout*)eastl::vector<ParticleVertexDataProxy<math::Vector3T<float>>,
                                                    SafeBucketAllocatorEASTL>::operator[](this_02, (ulong)ptVar6);
                    pvVar3 = eastl::string::Layout::SSOBeginPtr(pLVar2, ptVar5);
                    fVar8 = (float)::sqrt(local_44);
                    local_c0 = math::operator/((Vector3T*)pvVar3, fVar8);
                    local_b8 = fVar7;
                    local_b0 = math::operator*((Vector3T*)&local_c0, local_38);
                    local_a8 = fVar7;
                    local_a0 = math::operator*((Vector3T*)&local_b0, 0.5);
                    local_98 = fVar7;
                    local_58 = math::operator*((Vector3T*)&local_a0, local_40);
                    local_50 = fVar7;
                    eastl::vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>,
                                  SafeBucketAllocatorEASTL>::operator[](local_78, (ulong)ptVar6);
                    eastl::rbtree<
                        unsigned int,
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::less<unsigned int>, eastl::allocator,
                        eastl::use_first<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                        true, true>::end();
                    this_00 = (Vector3T<float>*)eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(local_c8);
                    math::Vector3T<float>::operator+=(this_00, (Vector3T*)&local_58);
                    local_c8->~SplatOp();
                    this_02 = local_70;
                    local_58 = math::operator*((Vector3T*)&local_b0, local_3c);
                    local_50 = fVar7;
                    this_01 = (ParticleVertexDataProxy<math::Vector3T<float>>*)
                        eastl::vector<ParticleVertexDataProxy<math::Vector3T<float>>,
                                      SafeBucketAllocatorEASTL>::operator[](this_02, (ulong)ptVar6);
                    ParticleVertexDataProxy<math::Vector3T<float>>::operator+=(this_01, (Vector3T*)&local_58);
                }
                ptVar6 = ptVar6 + 1;
            } while (ptVar6 < *(type**)&param_2[1].field_12);
        }
    }

    // 0x1007daa60, 1056 bytes, placed by debug map only (low confidence)
    // Acceleration::RenderDebug(math::Matrix44T<float> const&, float) const
    void Acceleration::RenderDebug(Matrix44T* param_1, float param_2) {
        long* plVar1;
        char* pcVar2;
        float fVar3;
        float fVar4;
        ColourHSL local_148;
        undefined8 local_138[2];
        undefined1 local_128[36];
        float local_104;
        undefined8 local_100;
        float local_f8;
        ColourHSL local_f0;
        ColourHSL local_e0;
        float local_d0;
        float local_cc;
        undefined1 local_c8[168];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (DAT_1039bd38d != '\0') {
            fVar4 = field_8;
            local_d0 = fVar4;
            local_cc = param_2;
            fVar3 = (float)(&field_16, param_2)->Eval();
            local_d0 = fVar3 + local_d0;
            local_104 = field_12;
            local_cc = (float)(&field_104, local_cc)->Eval();
            local_cc = local_cc + local_104;
            local_c8._0_8_ = param_1->GetPos();
            local_c8._8_4_ = fVar4;
            new (&local_e0) math::ColourHSL(0.0, 1.0, 0.0);
            local_100 = param_1->TransformVector((Vector3T*)&local_e0);
            local_f8 = (float)1065353216;
            local_128._0_8_ = math::operator*((Vector3T*)&local_100, local_d0);
            local_128._8_4_ = 1065353216;
            local_138[0] = math::operator+((Vector3T*)local_c8, (Vector3T*)local_128);
            local_138[1]._0_4_ = 1065353216;
            local_c8._0_8_ = param_1->GetPos();
            fVar4 = 1.0;
            local_c8._8_4_ = 1065353216;
            new (&local_f0) math::ColourHSL(0.0, 1.0, 0.0);
            local_e0._0_8_ = param_1->TransformVector((Vector3T*)&local_f0);
            local_e0.field_8 = fVar4;
            local_128._0_8_ = math::operator*((Vector3T*)&local_e0, local_cc);
            local_128._8_4_ = fVar4;
            local_100 = math::operator+((Vector3T*)local_c8, (Vector3T*)local_128);
            local_f8 = fVar4;
            local_c8._0_8_ = param_1->GetPos();
            fVar3 = 1.0;
            local_c8._8_4_ = fVar4;
            new (&local_148) math::ColourHSL(0.0, 1.0, 0.0);
            local_f0._0_8_ = param_1->TransformVector((Vector3T*)&local_148);
            local_f0.field_8 = fVar3;
            local_128._0_8_ = math::operator*((Vector3T*)&local_f0, local_cc + 1.0);
            local_128._8_4_ = fVar3;
            local_e0._0_8_ = math::operator+((Vector3T*)local_c8, (Vector3T*)local_128);
            local_e0.field_8 = fVar3;
            plVar1 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != (long*)0) {
                local_c8._0_8_ = param_1->GetPos();
                local_c8._8_4_ = fVar3;
                new (local_128) oldscape::sidebars::SideBarData(1996510464, 1);
                (**(code**)(*plVar1 + 24))(plVar1, local_c8, local_138, (SideBarData*)local_128);
            }
            plVar1 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != (long*)0) {
                new (local_c8) oldscape::sidebars::SideBarData(-16711936, 1);
                (**(code**)(*plVar1 + 24))(plVar1, local_138, &local_100, (SideBarData*)local_c8);
            }
            new (local_c8) eastl::fixed_string<char, 128, true, eastl::allocator>();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)local_c8, (double)local_d0, (double)local_cc, "Acceleration [%.2f;%.2f]");
            plVar1 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != (long*)0) {
                pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                new (&local_f0) eastl::allocator("EASTL basic_string");
                new (local_128) eastl::string(pcVar2, (allocator*)&local_f0);
                new (&local_148) oldscape::sidebars::SideBarData(-16711936, 1);
                (**(code**)(*plVar1 + 136))(plVar1, &local_e0, local_128, &local_148);
                local_128->~basic_string();
            }
            /* WARNING: Subroutine does not return */
            local_c8->~fixed_string();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007dae80, 112 bytes, placed by debug map only (low confidence)
    // Rotation::LoadFromPacket(unsigned char, PacketT<Array<unsigned char, eastl::allocator> >&)
    undefined8 Rotation::LoadFromPacket(uchar param_1, PacketT* param_2) {
        char cVar1;
        undefined8 uVar2;
        float fVar3;

        cVar1 = param_2->g1();
        field_8 = cVar1 == '\x01';
        fVar3 = (float)param_2->gFloat();
        field_12 = fVar3;
        fVar3 = (float)param_2->gFloat();
        field_16 = fVar3;
        cVar1 = (&field_24, param_1, param_2)->LoadFromPacket();
        if (cVar1 == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = (&field_112, param_1, param_2)->LoadFromPacket();
        }
        return uVar2;
    }

    // 0x1007daef0, 416 bytes, placed by debug map only (low confidence)
    // Rotation::ProcessTick(float, ParticleModuleUpdateParams const&, ParticleModuleUpdateState&, ParticleData&) const
    float Rotation::ProcessTick(float param_1, ParticleModuleUpdateParams* param_2, ParticleModuleUpdateState* param_3,
                                ParticleData* param_4) {
        long lVar1;
        ulong uVar2;
        float* pfVar3;
        undefined4* puVar4;
        ulong uVar5;
        float extraout_XMM0_Da;
        float extraout_XMM0_Da_00;
        float extraout_XMM0_Da_01;
        float fVar6;
        float extraout_XMM0_Da_02;
        float local_44;
        float local_40[2];
        float local_38;
        float local_34;

        if (DAT_1039bd37e == '\0') {
            if (field_8 == false) {
                lVar1 = param_4->GetCount();
                param_1 = extraout_XMM0_Da_01;
                if (lVar1 != 0) {
                    uVar5 = 0;
                    do {
                        pfVar3 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
                            (vector<float, SafeBucketAllocatorEASTL>*)&param_4->field_24, uVar5);
                        local_38 = *pfVar3;
                        local_34 = field_12;
                        local_40[0] = (float)(&field_24, local_38)->Eval();
                        local_40[0] = local_34 - local_40[0];
                        local_34 = field_16;
                        local_44 = (float)(&field_112, local_38)->Eval();
                        local_44 = local_34 - local_44;
                        pfVar3 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
                            (vector<float, SafeBucketAllocatorEASTL>*)param_4, uVar5);
                        fVar6 = math::Lerp<float, float>(local_40, &local_44, *pfVar3);
                        local_38 = (float)math::Deg2Rad(fVar6);
                        puVar4 = (undefined4*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
                            (vector<float, SafeBucketAllocatorEASTL>*)&param_4->field_72, uVar5);
                        *puVar4 = local_38;
                        param_4->RefreshRotationGPUData(uVar5);
                        uVar5 = uVar5 + 1;
                        uVar2 = param_4->GetCount();
                        param_1 = extraout_XMM0_Da_02;
                    } while (uVar5 < uVar2);
                }
            } else {
                lVar1 = param_4->GetCount();
                param_1 = extraout_XMM0_Da;
                if (lVar1 != 0) {
                    uVar5 = 0;
                    do {
                        eastl::vector<ParticleVertexDataProxy<ParticleData::UVAnimationData>,
                                      SafeBucketAllocatorEASTL>::
                        operator[]((vector<ParticleVertexDataProxy<ParticleData::UVAnimationData>,
                                           SafeBucketAllocatorEASTL>*)&param_4->field_240,
                                   uVar5);
                        eastl::rbtree<
                            unsigned int,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                            eastl::less<unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<
                                unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                            true, true>::end();
                        lVar1 = local_40->HeapBeginPtr();
                        ((lVar1 + 2))->set(1, true);
                        local_40->~SplatOp();
                        uVar5 = uVar5 + 1;
                        uVar2 = param_4->GetCount();
                        param_1 = extraout_XMM0_Da_00;
                    } while (uVar5 < uVar2);
                }
            }
        }
        return param_1;
    }

    // 0x1007db090, 80 bytes, placed by debug map only (low confidence)
    // Noise::LoadFromPacket(unsigned char, PacketT<Array<unsigned char, eastl::allocator> >&)
    undefined8 Noise::LoadFromPacket(uchar param_1, PacketT* param_2) {
        char cVar1;
        undefined8 uVar2;

        cVar1 = (&field_8, param_1, param_2)->LoadFromPacket();
        if (cVar1 == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = (&field_96, param_1, param_2)->LoadFromPacket();
        }
        return uVar2;
    }

    // 0x1007db0e0, 560 bytes, placed by debug map only (low confidence)
    // Noise::ProcessTick(float, ParticleModuleUpdateParams const&, ParticleModuleUpdateState&, ParticleData&) const
    void Noise::ProcessTick(float param_1, ParticleModuleUpdateParams* param_2, ParticleModuleUpdateState* param_3,
                            ParticleData* param_4) {
        long lVar1;
        type* ptVar2;
        Vector3T<float>* this_00;
        Vector3T* pVVar3;
        float* pfVar4;
        Layout* this_01;
        Noise* this_02;
        Vector4T<float>* this_03;
        type* ptVar5;
        float fVar6;
        float in_XMM1_Da;
        SplatOp local_98[8];
        undefined1 local_90[16];
        undefined8 local_80;
        float local_78;
        undefined8 local_70;
        float local_68;
        vector<float, SafeBucketAllocatorEASTL>* local_60;
        ModulePropertyCurve<float>* local_58;
        vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>* local_50;
        float local_48;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        if (DAT_1039bd380 == '\0') {
            local_38 = param_1;
            lVar1 = param_4->GetCount();
            if (lVar1 != 0) {
                local_60 = (vector<float, SafeBucketAllocatorEASTL>*)&param_4->field_24;
                local_58 = (ModulePropertyCurve<float>*)&field_8;
                local_50 =
                    (vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>*)&param_4
                        ->field_120;
                local_38 = local_38 * 31.415928;
                ptVar5 = (type*)0;
                do {
                    eastl::vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>::operator[](
                        (vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>*)&param_4
                            ->field_168,
                        (ulong)ptVar5);
                    eastl::rbtree<
                        unsigned int,
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::less<unsigned int>, eastl::allocator,
                        eastl::use_first<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                        true, true>::end();
                    this_00 = (Vector3T<float>*)local_98->HeapBeginPtr();
                    fVar6 = (float)this_00->LengthSq();
                    if (0.0 < fVar6) {
                        local_3c = (float)::sqrt(fVar6);
                        pVVar3 = (Vector3T*)local_98->HeapBeginPtr();
                        local_90._0_8_ = math::operator/(pVVar3, local_3c);
                        local_90._8_4_ = in_XMM1_Da;
                        pfVar4 =
                            (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](local_60, (ulong)ptVar5);
                        local_34 = *pfVar4;
                        local_48 = (float)local_58->Eval(local_34);
                        local_44 = (float)(&field_96, local_34)->Eval();
                        pfVar4 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
                            (vector<float, SafeBucketAllocatorEASTL>*)param_4, (ulong)ptVar5);
                        local_34 = math::Lerp<float, float>(&local_48, &local_44, *pfVar4);
                        pfVar4 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
                            (vector<float, SafeBucketAllocatorEASTL>*)param_4, (ulong)ptVar5);
                        local_40 = *pfVar4;
                        ptVar2 = ptVar5;
                        this_01 = (Layout*)eastl::vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>,
                                                         SafeBucketAllocatorEASTL>::operator[](local_50, (ulong)ptVar5);
                        this_02 = (Noise*)eastl::string::Layout::SSOBeginPtr(this_01, ptVar2);
                        in_XMM1_Da = (float)GetNoise(this_02, local_40, (Vector3T*)ptVar2);
                        in_XMM1_Da = local_34 * local_38 * in_XMM1_Da;
                        local_34 = in_XMM1_Da;
                        if (0.0 < in_XMM1_Da) {
                            GetTargetVector(this_02);
                            local_70 = math::Vector3SlerpAngle<float>((math*)local_90);
                            local_68 = in_XMM1_Da;
                            local_80 = math::operator*((Vector3T*)&local_70, local_3c);
                            local_78 = in_XMM1_Da;
                            this_03 = (Vector4T<float>*)local_98->HeapBeginPtr();
                            math::Vector4T<float>::SetXYZ(this_03, (Vector3T*)&local_80);
                        }
                    }
                    local_98->~SplatOp();
                    ptVar5 = ptVar5 + 1;
                    ptVar2 = (type*)param_4->GetCount();
                } while (ptVar5 < ptVar2);
            }
        }
    }

    // 0x1007db310, 112 bytes, placed by debug map only (low confidence)
    // Noise::GetNoise(float, math::Vector3T<float> const&)
    undefined8 Noise::GetNoise(float param_1, Vector3T* param_2) {
        uint uVar1;
        double* pdVar2;
        uint uVar3;
        uint uVar4;
        uint uVar5;
        undefined8 uVar6;
        float in_XMM1_Da;

        uVar6 = math::operator*((Vector3T*)this, param_1);
        uVar1 = (uint)in_XMM1_Da;
        uVar3 = uVar1 + 31;
        if (-1 < (int)uVar1) {
            uVar3 = uVar1;
        }
        uVar4 = (uint)(float)((ulong)uVar6 >> 32);
        uVar5 = uVar4 + 31;
        if (-1 < (int)uVar4) {
            uVar5 = uVar4;
        }
        pdVar2 = (double*)std::array<double, 262144ul>::operator[](
            (ulong)((uVar4 - (uVar5 & 67108832)) * 64 + (int)(float)uVar6 % 32 + (uVar1 - (uVar3 & 1048544)) * 4096 +
                    133152));
        return CONCAT44((int)((ulong)*pdVar2 >> 32), (float)*pdVar2);
    }

    // 0x1007db380, 176 bytes, placed by debug map only (low confidence)
    // Noise::GetTargetVector() const
    undefined8 Noise::GetTargetVector() {
        Random* pRVar1;
        float fVar2;
        undefined8 uVar3;
        ColourHSL local_28;
        float local_18;
        float local_14;
        float local_10;
        float local_c;

        pRVar1 = (Random*)Module::g_moduleRng();
        local_c = (float)pRVar1->FRand(3.1415927);
        pRVar1 = (Random*)Module::g_moduleRng();
        local_14 = (float)pRVar1->FRand(6.2831855);
        local_10 = (float)::sin(local_c);
        local_18 = (float)::cos(local_14);
        local_18 = local_18 * local_10;
        local_c = (float)::cos(local_c);
        fVar2 = (float)::sin(local_14);
        new (&local_28) math::ColourHSL(local_18, local_c, local_10 * fVar2);
        uVar3._0_4_ = local_28.field_0;
        uVar3._4_4_ = local_28.field_4;
        return uVar3;
    }

    // 0x100829dd0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Flow::Flow(): jumps straight to the base-object constructor

    // 0x100829e40, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Noise::Noise(): jumps straight to the base-object constructor

    // 0x100829e60, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Acceleration::Acceleration(): jumps straight to the base-object constructor

    // 0x100829e80, 48 bytes, inline, placed by class header (inline)
    // Flow::GetLifetimeRange() const
    undefined8 Flow::GetLifetimeRange() {
        undefined8 local_10;

        std::pair<float, float>::pair<true, false>((pair<float, float>*)&local_10, &field_160, &field_164);
        return local_10;
    }

} // namespace jag::graphics::particlemodules

namespace jag::graphics {
    // 0x1007d9ca0, 64 bytes, inline, placed by debug map only (low confidence)
    // ParticleData::CanRender() const
    bool ParticleData::CanRender() {
        Layout* this_00;
        vector* pvVar2;
        type* in_RSI;
        bool bVar3;

        if (GetCount(this) == 0) {
            bVar3 = false;
        } else {
            this_00 = (Layout*)(&field_216)->front();
            pvVar2 = eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
            bVar3 = *(short*)pvVar2 != 0;
        }
        return bVar3;
    }

    // 0x1007d9ce0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>::SplatOp::~SplatOp(): jumps straight to the base-object destructor

    // 0x1007d9d00, 112 bytes, inline, placed by debug map only (low confidence)
    // ParticleData::UVAnimationData::SetTilingData(unsigned char, unsigned char)
    void ParticleData::UVAnimationData::SetTilingData(uchar param_1, uchar param_2) {
        if (15 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("numTotalFrames <= 0xF",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/Particle.h",
                      185, (char*)0);
        }
        if (15 < param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert("numFramesPerDimension <= 0xF",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/Particle.h",
                      186, (char*)0);
        }
        field_0 = param_2 << 4 | param_1;
    }

    // 0x1007db530, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ParticleVertexDataProxy<math::Vector3T<float> >::SplatOp::~SplatOp(): jumps straight to the base-object destructor

} // namespace jag::graphics

namespace jag::math {
    // 0x1007d9db0, 32 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<float> SLerp<float>(QuaternionT<float> const&, QuaternionT<float> const&, float)
    math* SLerp<float>(QuaternionT* param_1, QuaternionT* param_2, float param_3) {
        QuaternionSLerp<float>(this, param_1, param_2, param_3);
        return this;
    }

    // 0x1007d9dd0, 640 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float> operator*<float>(Vector3T<float> const&, QuaternionT<float> const&)
    /* Vector3T<float> TEMPNAMEPLACEHOLDERVALUE(Vector3T<float> const&,
   QuaternionT<float> const&) */

    undefined8 operator*(Vector3T* param_1, QuaternionT* param_2) {
        float* pfVar1;
        vector* pvVar2;
        undefined8 uVar4;
        undefined1 local_38[16];
        float local_28;
        float local_24;
        float local_20;
        float local_1c;

        pfVar1 = (float*)param_2->y();
        local_38._12_4_ = *pfVar1;
        pfVar1 = (float*)param_1->second();
        local_38._12_4_ = (float)local_38._12_4_ * *pfVar1;
        pfVar1 = (float*)param_2->second();
        local_1c = *pfVar1;
        pfVar1 = (float*)param_1->y();
        local_38._12_4_ = (float)local_38._12_4_ - local_1c * *pfVar1;
        pfVar1 = (float*)param_2->second();
        local_1c = *pfVar1;
        pvVar2 = param_1->SSOBeginPtr(param_2);
        local_1c = local_1c * *(float*)pvVar2;
        pvVar2 = param_2->SSOBeginPtr(param_2);
        local_20 = *(float*)pvVar2;
        pfVar1 = (float*)param_1->second();
        local_1c = local_1c - local_20 * *pfVar1;
        pvVar2 = param_2->SSOBeginPtr(param_2);
        local_20 = *(float*)pvVar2;
        pfVar1 = (float*)param_1->y();
        local_20 = local_20 * *pfVar1;
        pfVar1 = (float*)param_2->y();
        local_24 = *pfVar1;
        pvVar2 = param_1->SSOBeginPtr(param_2);
        local_20 = local_20 - local_24 * *(float*)pvVar2;
        pfVar1 = (float*)param_2->qw();
        local_24 = *pfVar1 * (float)local_38._12_4_;
        pfVar1 = (float*)param_2->y();
        local_24 = *pfVar1 * local_20 + local_24;
        pfVar1 = (float*)param_2->second();
        local_24 = local_24 - *pfVar1 * local_1c;
        pfVar1 = (float*)param_2->qw();
        local_28 = *pfVar1 * local_1c;
        pfVar1 = (float*)param_2->second();
        local_28 = *pfVar1 * (float)local_38._12_4_ + local_28;
        pvVar2 = param_2->SSOBeginPtr(param_2);
        local_28 = local_28 - *(float*)pvVar2 * local_20;
        pfVar1 = (float*)param_2->qw();
        local_20 = local_20 * *pfVar1;
        pvVar2 = param_2->SSOBeginPtr(param_2);
        local_1c = local_1c * *(float*)pvVar2 + local_20;
        pfVar1 = (float*)param_2->y();
        local_1c = local_1c - (float)local_38._12_4_ * *pfVar1;
        pvVar2 = param_1->SSOBeginPtr(param_2);
        local_24 = local_24 + local_24 + *(float*)pvVar2;
        pfVar1 = (float*)param_1->y();
        local_28 = local_28 + local_28 + *pfVar1;
        pfVar1 = (float*)param_1->second();
        new (local_38) ColourHSL(local_24, local_28, local_1c + local_1c + *pfVar1);
        uVar4._0_4_ = (float)local_38._0_4_;
        uVar4._4_4_ = (float)local_38._4_4_;
        return uVar4;
    }

    // 0x1007da750, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Matrix44T<float>::Matrix44T(QuaternionT<float> const&, Vector3T<float> const&, Vector3T<float> const&): jumps straight to the base-object constructor

    // 0x1007db430, 256 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float> Vector3SlerpAngle<float>(Vector3T<float> const&, Vector3T<float>, float)
    void Vector3SlerpAngle<float>(undefined8 param_1, undefined4 param_2, float param_3, math* this) {
        float* pfVar1;
        undefined4 uVar2;
        float fVar3;
        undefined8 local_60;
        undefined4 local_58;
        undefined8 local_50;
        undefined4 local_48;
        float local_40;
        float local_3c;
        undefined8 local_38;
        undefined4 local_30;
        undefined8 local_28;
        undefined4 local_20;
        float local_1c;

        local_60 = param_1;
        local_58 = param_2;
        local_40 = param_3;
        local_38._0_4_ = Vector3Dot<float>((Vector3T*)this, (Vector3T*)&local_60);
        local_28 = CONCAT44(local_28._4_4_, 3212836864);
        local_50 = CONCAT44(local_50._4_4_, 1065353216);
        local_3c = Clamp<float>((float*)&local_38, (float*)&local_28, (float*)&local_50);
        uVar2 = acos(local_3c);
        local_38 = CONCAT44(local_38._4_4_, uVar2);
        pfVar1 = std::min<float>((float*)&local_38, &local_40);
        local_1c = *pfVar1;
        local_28 = operator*((Vector3T*)this, local_3c);
        local_20 = param_2;
        local_38 = operator-((Vector3T*)&local_60, (Vector3T*)&local_28);
        local_30 = param_2;
        local_38.Normalize();
        fVar3 = (float)::cos(local_1c);
        local_28 = operator*((Vector3T*)this, fVar3);
        local_20 = param_2;
        fVar3 = (float)::sin(local_1c);
        local_50 = operator*((Vector3T*)&local_38, fVar3);
        local_48 = param_2;
        operator+((Vector3T*)&local_28, (Vector3T*)&local_50);
    }

} // namespace jag::math

// 0x1007da050, 32 bytes, inline, placed by debug map only (low confidence)
// TLS wrapper function for jag::graphics::particlemodules::Module::g_moduleRng
void jag::graphics::particlemodules::Module::g_moduleRng() {
    g_moduleRng::__tls_init();
    (**(code**)PTR_g_moduleRng_100f4e550)();
}

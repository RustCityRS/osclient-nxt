// libs/graphics/runetek7/particles/modules/FlowModule.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::graphics::particlemodules {
    class Acceleration {
    public:
        // virtual methods in vtable order
        virtual ~Acceleration();
        virtual uint64_t LoadFromPacket(unsigned char arg1, PacketT<Array<unsigned char>>& arg2);
        virtual void ProcessTick(float arg1, const ParticleModuleUpdateParams& particleModuleUpdateParams,
                                 ParticleModuleUpdateState& particleModuleUpdateState,
                                 ParticleData& particleData) const;
        virtual void RenderDebug(const math::Matrix44T<float>& matrix44, float arg2) const;
        Acceleration();

    private:
        float field_8;
        float field_12;
        uint8_t _unknown_16[96];
    };

    class Flow {
    public:
        class Shape;
        // virtual methods in vtable order
        virtual ~Flow();
        virtual uint8_t LoadFromPacket(unsigned char arg1, PacketT<Array<unsigned char>>& arg2);
        virtual void ProcessTick(float arg1, const ParticleModuleUpdateParams& particleModuleUpdateParams,
                                 ParticleModuleUpdateState& particleModuleUpdateState,
                                 ParticleData& particleData) const;
        virtual float RenderDebug(const math::Matrix44T<float>& matrix44, float arg2) const;
        void IsSingleBurstSpawn() const;
        float GetSpawnRate() const;
        Flow();
        uint64_t GetLifetimeRange() const;
        static int64_t m_particleCountMultiplier; // = 1065353216

    private:
        uint8_t _unknown_8[140];
        float field_148;
        float field_152;
        float field_156;
        float field_160;
        float field_164;
        uint32_t field_168;
        uint32_t field_172;
        uint8_t _unknown_176[4];
    };

    class Flow::Shape {
    public:
        uint64_t LoadFromPacket(unsigned char arg1, PacketT<Array<unsigned char>>& arg2);
        uint64_t GetRandomPoint(math::Random& random) const;
        void RenderDebug(const math::Matrix44T<float>& matrix44, unsigned int arg2) const;
        Shape();

    private:
        unsigned int field_0;
        bool field_4;
        uint8_t _unknown_5[3];
        uint64_t field_8;
        uint8_t _unknown_16[40];
        float field_56;
        float field_60;
        float field_64;
        uint8_t _unknown_68[4];
    };

    class Noise {
    public:
        // virtual methods in vtable order
        virtual ~Noise();
        virtual uint64_t LoadFromPacket(unsigned char arg1, PacketT<Array<unsigned char>>& arg2);
        virtual void ProcessTick(float arg1, const ParticleModuleUpdateParams& particleModuleUpdateParams,
                                 ParticleModuleUpdateState& particleModuleUpdateState,
                                 ParticleData& particleData) const;
        void PrecalculateNoise();
        uint64_t GetNoise(float arg1, const math::Vector3T<float>& vector3);
        uint64_t GetTargetVector() const;
        Noise();
        static std::array<double, _262144ul> NOISE_TABLE;

    private:
        float field_8;
        uint8_t _unknown_12[92];
    };

    // 0x1007d9c60
    void Flow::IsSingleBurstSpawn() const {
        field_8.test(1);
    }

    // 0x1007da760
    float Flow::RenderDebug(const math::Matrix44T<float>& matrix44, float arg2) const {
        if (Module::m_debugRender != '\0') {
            field_12.RenderDebug(matrix44, 4278211840);
            arg2 = (float)field_80.RenderDebug(matrix44, 4283760640);
        }
        return arg2;
    }

    // 0x1007da7a0
    uint64_t Acceleration::LoadFromPacket(unsigned char arg1, PacketT<Array<unsigned char>>& arg2) {
        uint64_t uVar2;

        float fVar3 = (float)arg2.gFloat();
        field_8 = fVar3;
        fVar3 = (float)arg2.gFloat();
        field_12 = fVar3;
        if (field_16.LoadFromPacket(arg1, arg2) == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = field_104.LoadFromPacket(arg1, arg2);
        }
        return uVar2;
    }

    // 0x1007da810
    void Acceleration::ProcessTick(float arg1, const ParticleModuleUpdateParams& particleModuleUpdateParams,
                                   ParticleModuleUpdateState& particleModuleUpdateState,
                                   ParticleData& particleData) const {
        Layout* pLVar2;
        Vector3T<float>* pVVar3;
        float* pfVar4;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_00;
        unsigned long arg1_00;
        vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>* this_01;
        float fVar5;
        float arg2;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_c8;
        uint64_t local_c0;
        float local_b8;
        uint64_t local_b0;
        float local_a8;
        uint64_t local_a0;
        float local_98;
        vector<float, SafeBucketAllocatorEASTL>* local_90;
        ModulePropertyCurve<float>* local_88;
        ModulePropertyCurve<float>* local_80;
        vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>* local_78;
        vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>* local_70;
        ParticleData* local_68;
        uint64_t local_58;
        float local_50;
        float local_4c;
        float local_48;
        float local_44;
        float local_40;
        float local_38;
        float local_34;

        if ((DAT_1039bd382 == '\0') && (*(long*)&particleModuleUpdateParams[1].field_12 != 0)) {
            local_40 = arg1 * arg1;
            this_01 = (vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>*)&particleData
                          .field_168;
            local_90 = (vector<float, SafeBucketAllocatorEASTL>*)&particleData.field_24;
            local_88 = (ModulePropertyCurve<float>*)&field_16;
            local_80 = (ModulePropertyCurve<float>*)&field_104;
            local_78 = (vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>,
                               SafeBucketAllocatorEASTL>*)&particleData.field_120;
            arg1_00 = 0;
            local_70 = this_01;
            local_68 = particleData;
            do {
                pLVar2 = (Layout*)(*this_01)[arg1_00];
                pVVar3 = (Vector3T<float>*)pLVar2->SSOBeginPtr();
                fVar5 = (float)pVVar3->LengthSq();
                if (0.0 < fVar5) {
                    local_44 = fVar5;
                    pfVar4 = (float*)(*local_90)[arg1_00];
                    local_38 = *pfVar4;
                    fVar5 = field_8;
                    local_34 = fVar5;
                    local_4c = (float)local_88->Eval(local_38);
                    local_4c = local_4c + local_34;
                    local_34 = field_12;
                    local_48 = (float)local_80->Eval(local_38);
                    local_48 = local_48 + local_34;
                    pfVar4 = (float*)(*local_68)[arg1_00];
                    local_38 = math::Lerp<float, float>(local_4c, local_48, *pfVar4);
                    pLVar2 = (Layout*)(*this_01)[arg1_00];
                    pVVar3 = (Vector3T<float>*)pLVar2->SSOBeginPtr();
                    arg2 = (float)::sqrt(local_44);
                    local_c0 = *pVVar3 / *arg2;
                    local_b8 = fVar5;
                    local_b0 = *local_38 * local_c0;
                    local_a8 = fVar5;
                    local_a0 = *0.5 * local_b0;
                    local_98 = fVar5;
                    local_58 = *local_40 * local_a0;
                    local_50 = fVar5;
                    (*local_78)[arg1_00];
                    local_c8.end();
                    pVVar3 = (Vector3T<float>*)local_c8.HeapBeginPtr();
                    *pVVar3 += local_58;
                    this_01 = local_70;
                    local_58 = *arg1 * local_b0;
                    local_50 = fVar5;
                    this_00 = (ParticleVertexDataProxy<math::Vector3T<float>>*)(*this_01)[arg1_00];
                    *this_00 += local_58;
                }
                arg1_00 = arg1_00 + 1;
            } while (arg1_00 < *(unsigned long*)&particleModuleUpdateParams[1].field_12);
        }
    }

    // 0x1007daa60
    void Acceleration::RenderDebug(const math::Matrix44T<float>& matrix44, float arg2) const {
        long* plVar1;
        char* str;
        float fVar2;
        float fVar3;
        ColourHSL local_148;
        uint64_t local_138[2];
        uint8_t local_128[36];
        float local_104;
        uint64_t local_100;
        float local_f8;
        ColourHSL local_f0;
        ColourHSL local_e0;
        float local_d0;
        float local_cc;
        uint8_t local_c8[168];

        if (DAT_1039bd38d != '\0') {
            fVar3 = field_8;
            local_d0 = fVar3;
            local_cc = arg2;
            fVar2 = (float)field_16.Eval(arg2);
            local_d0 = fVar2 + local_d0;
            local_104 = field_12;
            local_cc = (float)field_104.Eval(local_cc);
            local_cc = local_cc + local_104;
            local_c8._0_8_ = matrix44.GetPos();
            local_c8._8_4_ = fVar3;
            local_e0 = math::ColourHSL(0.0, 1.0, 0.0);
            local_100 = matrix44.TransformVector(local_e0);
            local_f8 = (float)1065353216;
            local_128._0_8_ = *local_d0 * local_100;
            local_128._8_4_ = 1065353216;
            local_138[0] = *local_c8 + *local_128;
            local_138[1]._0_4_ = 1065353216;
            local_c8._0_8_ = matrix44.GetPos();
            fVar3 = 1.0;
            local_c8._8_4_ = 1065353216;
            local_f0 = math::ColourHSL(0.0, 1.0, 0.0);
            local_e0._0_8_ = matrix44.TransformVector(local_f0);
            local_e0.field_8 = fVar3;
            local_128._0_8_ = *local_cc * local_e0;
            local_128._8_4_ = fVar3;
            local_100 = *local_c8 + *local_128;
            local_f8 = fVar3;
            local_c8._0_8_ = matrix44.GetPos();
            fVar2 = 1.0;
            local_c8._8_4_ = fVar3;
            local_148 = math::ColourHSL(0.0, 1.0, 0.0);
            local_f0._0_8_ = matrix44.TransformVector(local_148);
            local_f0.field_8 = fVar2;
            local_128._0_8_ = (*(local_cc + 1.0)) * local_f0;
            local_128._8_4_ = fVar2;
            local_e0._0_8_ = *local_c8 + *local_128;
            local_e0.field_8 = fVar2;
            plVar1 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != nullptr) {
                local_c8._0_8_ = matrix44.GetPos();
                local_c8._8_4_ = fVar2;
                new (local_128) oldscape::sidebars::SideBarData(1996510464, 1);
                (**(void (**)(...))(*plVar1 + 24))(plVar1, local_c8, local_138, (SideBarData*)local_128);
            }
            plVar1 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != nullptr) {
                new (local_c8) oldscape::sidebars::SideBarData(-16711936, 1);
                (**(void (**)(...))(*plVar1 + 24))(plVar1, local_138, &local_100, (SideBarData*)local_c8);
            }
            new (local_c8) eastl::fixed_string<char, 128>();
            local_c8->sprintf("Acceleration [%.2f;%.2f]", (double)local_d0, (double)local_cc);
            plVar1 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != nullptr) {
                str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                new (local_128) eastl::string(str);
                local_148 = oldscape::sidebars::SideBarData(-16711936, 1);
                (**(void (**)(...))(*plVar1 + 136))(plVar1, &local_e0, local_128, &local_148);
            }
        }
    }

    // 0x1007dae80
    uint64_t Rotation::LoadFromPacket(unsigned char arg1, PacketT<Array<unsigned char>>& arg2) {
        uint64_t uVar2;

        char cVar1 = arg2.g1();
        field_8 = cVar1 == '\x01';
        float fVar3 = (float)arg2.gFloat();
        field_12 = fVar3;
        fVar3 = (float)arg2.gFloat();
        field_16 = fVar3;
        cVar1 = field_24.LoadFromPacket(arg1, arg2);
        if (!cVar1) {
            uVar2 = 0;
        } else {
            uVar2 = field_112.LoadFromPacket(arg1, arg2);
        }
        return uVar2;
    }

    // 0x1007daef0
    float Rotation::ProcessTick(float arg1, const ParticleModuleUpdateParams& particleModuleUpdateParams,
                                ParticleModuleUpdateState& particleModuleUpdateState,
                                ParticleData& particleData) const {
        long lVar1;
        unsigned long uVar2;
        float* pfVar3;
        uint32_t* puVar4;
        unsigned long uVar5;
        float extraout_XMM0_Da;
        float extraout_XMM0_Da_00;
        float extraout_XMM0_Da_01;
        float arg1_00;
        float extraout_XMM0_Da_02;
        float local_44;
        float local_40[2];
        float local_38;
        float local_34;

        if (DAT_1039bd37e == '\0') {
            if (field_8 == false) {
                lVar1 = particleData.GetCount();
                arg1 = extraout_XMM0_Da_01;
                if (lVar1 != 0) {
                    uVar5 = 0;
                    do {
                        pfVar3 = &particleData.field_24[uVar5];
                        local_38 = *pfVar3;
                        local_34 = field_12;
                        local_40[0] = (float)field_24.Eval(local_38);
                        local_40[0] = local_34 - local_40[0];
                        local_34 = field_16;
                        local_44 = (float)field_112.Eval(local_38);
                        local_44 = local_34 - local_44;
                        pfVar3 = &particleData[uVar5];
                        arg1_00 = math::Lerp<float, float>(*local_40, local_44, *pfVar3);
                        local_38 = (float)math::Deg2Rad(arg1_00);
                        puVar4 = &particleData.field_72[uVar5];
                        *puVar4 = local_38;
                        particleData.RefreshRotationGPUData(uVar5);
                        uVar5 = uVar5 + 1;
                        uVar2 = particleData.GetCount();
                        arg1 = extraout_XMM0_Da_02;
                    } while (uVar5 < uVar2);
                }
            } else {
                lVar1 = particleData.GetCount();
                arg1 = extraout_XMM0_Da;
                if (lVar1 != 0) {
                    uVar5 = 0;
                    do {
                        particleData.field_240[uVar5];
                        local_40->end();
                        lVar1 = local_40->HeapBeginPtr();
                        *((lVar1 + 2)) = eastl::bitset<7ul, unsigned char>::set(1, true);
                        uVar5 = uVar5 + 1;
                        uVar2 = particleData.GetCount();
                        arg1 = extraout_XMM0_Da_00;
                    } while (uVar5 < uVar2);
                }
            }
        }
        return arg1;
    }

    // 0x1007db090
    uint64_t Noise::LoadFromPacket(unsigned char arg1, PacketT<Array<unsigned char>>& arg2) {
        uint64_t uVar2;

        if (field_8.LoadFromPacket(arg1, arg2) == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = field_96.LoadFromPacket(arg1, arg2);
        }
        return uVar2;
    }

    // 0x1007db0e0
    void Noise::ProcessTick(float arg1, const ParticleModuleUpdateParams& particleModuleUpdateParams,
                            ParticleModuleUpdateState& particleModuleUpdateState, ParticleData& particleData) const {
        Vector3T<float>* pVVar2;
        float* pfVar3;
        Layout* this_00;
        Noise* this_01;
        Vector3T<float>* arg1_00;
        float fVar4;
        float in_XMM1_Da;
        SplatOp local_98;
        uint64_t local_90;
        float local_88;
        uint64_t local_80;
        float local_78;
        uint64_t local_70;
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
            local_38 = arg1;
            if (particleData.GetCount() != 0) {
                local_60 = (vector<float, SafeBucketAllocatorEASTL>*)&particleData.field_24;
                local_58 = (ModulePropertyCurve<float>*)&field_8;
                local_50 = (vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>,
                                   SafeBucketAllocatorEASTL>*)&particleData.field_120;
                local_38 = local_38 * 31.415928f;
                arg1_00 = nullptr;
                do {
                    particleData.field_168[(unsigned long)arg1_00];
                    local_98.end();
                    pVVar2 = (Vector3T<float>*)local_98.HeapBeginPtr();
                    fVar4 = (float)pVVar2->LengthSq();
                    if (0.0 < fVar4) {
                        local_3c = (float)::sqrt(fVar4);
                        pVVar2 = (Vector3T<float>*)local_98.HeapBeginPtr();
                        local_90 = *pVVar2 / *local_3c;
                        local_88 = in_XMM1_Da;
                        pfVar3 = (float*)(*local_60)[(unsigned long)arg1_00];
                        local_34 = *pfVar3;
                        local_48 = (float)local_58->Eval(local_34);
                        local_44 = (float)field_96.Eval(local_34);
                        pfVar3 = &particleData[(unsigned long)arg1_00];
                        local_34 = math::Lerp<float, float>(local_48, local_44, *pfVar3);
                        pfVar3 = &particleData[(unsigned long)arg1_00];
                        local_40 = *pfVar3;
                        pVVar2 = arg1_00;
                        this_00 = (Layout*)(*local_50)[(unsigned long)arg1_00];
                        this_01 = (Noise*)this_00->SSOBeginPtr();
                        in_XMM1_Da = (float)GetNoise(this_01, local_40, pVVar2);
                        in_XMM1_Da = local_34 * local_38 * in_XMM1_Da;
                        local_34 = in_XMM1_Da;
                        if (0.0 < in_XMM1_Da) {
                            fVar4 = (float)GetTargetVector(this_01);
                            local_70 = math::Vector3SlerpAngle<float>(local_90, pVVar2, fVar4);
                            local_68 = in_XMM1_Da;
                            local_80 = *local_3c * local_70;
                            local_78 = in_XMM1_Da;
                            ((Vector4T<float>*)local_98.HeapBeginPtr())->SetXYZ(local_80);
                        }
                    }
                    arg1_00 = arg1_00 + 1;
                    pVVar2 = (Vector3T<float>*)particleData.GetCount();
                } while (arg1_00 < pVVar2);
            }
        }
    }

    // 0x1007db310
    uint64_t Noise::GetNoise(float arg1, const math::Vector3T<float>& vector3) {
        float in_XMM1_Da;

        uint64_t uVar6 = *arg1 * *this;
        unsigned int uVar1 = (unsigned int)in_XMM1_Da;
        unsigned int uVar3 = uVar1 + 31;
        if (-1 < (int)uVar1) {
            uVar3 = uVar1;
        }
        unsigned int uVar4 = (unsigned int)(float)((unsigned long)uVar6 >> 32);
        unsigned int uVar5 = uVar4 + 31;
        if (-1 < (int)uVar4) {
            uVar5 = uVar4;
        }
        double* pdVar2 = (double*)(*(
            (array<double, 262144ul>*)(unsigned long)((uVar4 - (uVar5 & 67108832)) * 64 + (int)(float)uVar6 % 32 +
                                                      (uVar1 - (uVar3 & 1048544)) * 4096 +
                                                      133152)))[(unsigned long)(uVar5 & 67108832)];
        return (((uint64_t)((int)((unsigned long)*pdVar2 >> 32)) << 32) | (uint32_t)((float)*pdVar2));
    }

    // 0x1007db380
    uint64_t Noise::GetTargetVector() const {
        uint64_t uVar3;

        auto pRVar1 = Module::g_moduleRng();
        float local_c = (float)pRVar1->FRand(3.1415927f);
        pRVar1 = (Random*)Module::g_moduleRng();
        float local_14 = (float)pRVar1->FRand(6.2831855f);
        float local_10 = (float)::sin(local_c);
        float local_18 = (float)::cos(local_14);
        local_18 = local_18 * local_10;
        local_c = (float)::cos(local_c);
        float fVar2 = (float)::sin(local_14);
        ColourHSL local_28(local_18, local_c, local_10 * fVar2);
        uVar3._0_4_ = local_28.field_0;
        uVar3._4_4_ = local_28.field_4;
        return uVar3;
    }

    // 0x100829e80
    uint64_t Flow::GetLifetimeRange() const {
        uint64_t local_10;

        local_10.pair<true, false>(field_160, field_164);
        return local_10;
    }

} // namespace jag::graphics::particlemodules

namespace jag::math {
    // 0x1007d9db0
    QuaternionT<float> SLerp<float>(const QuaternionT<float>& quaternion1, const QuaternionT<float>& quaternion2,
                                    float arg3) {
        QuaternionSLerp<float>(quaternion1, quaternion2, arg3);
        return quaternion1;
    }

    // 0x1007d9dd0
    Vector3T<float> operator* <float>(const Vector3T<float>& vector3, const QuaternionT<float>& quaternion) {
        uint64_t uVar2;
        uint8_t local_38[16];

        auto pfVar1 = quaternion.y();
        local_38._12_4_ = *pfVar1;
        pfVar1 = (float*)vector3.second();
        local_38._12_4_ = (float)local_38._12_4_ * *pfVar1;
        pfVar1 = (float*)quaternion.second();
        float local_1c = *pfVar1;
        pfVar1 = (float*)vector3.y();
        local_38._12_4_ = (float)local_38._12_4_ - local_1c * *pfVar1;
        pfVar1 = (float*)quaternion.second();
        local_1c = *pfVar1;
        pfVar1 = (float*)vector3.SSOBeginPtr();
        local_1c = local_1c * *pfVar1;
        pfVar1 = (float*)quaternion.SSOBeginPtr();
        float local_20 = *pfVar1;
        pfVar1 = (float*)vector3.second();
        local_1c = local_1c - local_20 * *pfVar1;
        pfVar1 = (float*)quaternion.SSOBeginPtr();
        local_20 = *pfVar1;
        pfVar1 = (float*)vector3.y();
        local_20 = local_20 * *pfVar1;
        pfVar1 = (float*)quaternion.y();
        float local_24 = *pfVar1;
        pfVar1 = (float*)vector3.SSOBeginPtr();
        local_20 = local_20 - local_24 * *pfVar1;
        pfVar1 = (float*)quaternion.qw();
        local_24 = *pfVar1 * (float)local_38._12_4_;
        pfVar1 = (float*)quaternion.y();
        local_24 = *pfVar1 * local_20 + local_24;
        pfVar1 = (float*)quaternion.second();
        local_24 = local_24 - *pfVar1 * local_1c;
        pfVar1 = (float*)quaternion.qw();
        float local_28 = *pfVar1 * local_1c;
        pfVar1 = (float*)quaternion.second();
        local_28 = *pfVar1 * (float)local_38._12_4_ + local_28;
        pfVar1 = (float*)quaternion.SSOBeginPtr();
        local_28 = local_28 - *pfVar1 * local_20;
        pfVar1 = (float*)quaternion.qw();
        local_20 = local_20 * *pfVar1;
        pfVar1 = (float*)quaternion.SSOBeginPtr();
        local_1c = local_1c * *pfVar1 + local_20;
        pfVar1 = (float*)quaternion.y();
        local_1c = local_1c - (float)local_38._12_4_ * *pfVar1;
        pfVar1 = (float*)vector3.SSOBeginPtr();
        local_24 = local_24 + local_24 + *pfVar1;
        pfVar1 = (float*)vector3.y();
        local_28 = local_28 + local_28 + *pfVar1;
        pfVar1 = (float*)vector3.second();
        new (local_38) ColourHSL(local_24, local_28, local_1c + local_1c + *pfVar1);
        uVar2._0_4_ = (float)local_38._0_4_;
        uVar2._4_4_ = (float)local_38._4_4_;
        return uVar2;
    }

    // 0x1007db430
    Vector3T<float> Vector3SlerpAngle<float>(const Vector3T<float>& vector31, Vector3T<float> vector32, float arg3) {
        uint32_t in_XMM0_Db;
        uint64_t local_60[2];
        uint64_t local_50[2];
        float local_40;
        uint64_t local_28;

        local_60[0] = (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg3);
        local_38[0]._0_4_ = Vector3Dot<float>(vector31, (Vector3T<float>*)local_60);
        local_28 = (((uint64_t)local_28._4_4_ << 32) | (uint32_t)3212836864);
        local_50[0] = (((uint64_t)local_50[0]._4_4_ << 32) | (uint32_t)1065353216);
        float local_3c = Clamp<float>(&local_38, (float*)&local_28, (float*)local_50);
        local_38[0]._0_4_ = acos(local_3c);
        auto pfVar1 = std::min<float>(local_38, local_40);
        float local_1c = *pfVar1;
        local_28 = local_3c vector31;
        local_38[0] = (ReturnValue)*local_60 - local_28;
        auto local_38 = Vector3T<float>::Normalize();
        float fVar2 = (float)::cos(local_1c);
        local_28 = fVar2 vector31;
        fVar2 = (float)::sin(local_1c);
        local_50[0] = fVar2 * &local_38;
        local_28 + *local_50;
    }

} // namespace jag::math

namespace jag::graphics {
    // 0x1007d9ca0
    bool ParticleData::CanRender() const {
        Layout* this_00;
        short* psVar2;
        bool bVar3;

        if (GetCount() == 0) {
            bVar3 = false;
        } else {
            this_00 = (Layout*)field_216.front();
            psVar2 = (short*)this_00->SSOBeginPtr();
            bVar3 = *psVar2 != 0;
        }
        return bVar3;
    }

    // 0x1007d9d00
    void ParticleData::UVAnimationData::SetTilingData(unsigned char arg1, unsigned char arg2) {
        if (15 < arg1) {
            LogAssert("numTotalFrames <= 0xF",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/Particle.h",
                      185, nullptr);
        }
        if (15 < arg2) {
            LogAssert("numFramesPerDimension <= 0xF",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/Particle.h",
                      186, nullptr);
        }
        field_0 = arg2 << 4 | arg1;
    }

} // namespace jag::graphics

// 0x1007da050
void jag::graphics::particlemodules::Module::g_moduleRng(void) {
    g_moduleRng::__tls_init();
    (**(void (**)(...))PTR_g_moduleRng_100f4e550)();
}

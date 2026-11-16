// libs/oldscape/jagex3/graphics/animation/OldscapeJoint.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

namespace jag::oldscape::graphics::animation {
    class OldscapeJoint {
    public:
        OldscapeJoint(int arg1, const Array<jag::math::Matrix44T<float>>& matrix44s, const Array<Array<float>>& arg3);
        void InitDefaults();
        OldscapeJoint(int arg1, PacketJ<Array<unsigned char>>& packetJ, bool arg3);
        auto GetFromPacket(PacketJ<Array<unsigned char>>& packetJ, bool arg2);
        OldscapeJoint* FromAffineTransform3(const math::AffineTransform3& affineTransform3);
        auto GetLocalBind(int arg1) const;
        void Serialise(PacketJ<Array<unsigned char>>& packetJ, bool arg2);
        void SerialiseLocalBind(int arg1, PacketJ<Array<unsigned char>>& packetJ, bool arg3);
        unsigned int GetPacketSize(bool arg1);
        void GetWorldBind(int arg1);
        void GetWorldBindInverse(int arg1);
        void SetLocal(const jag::math::Matrix44T<float>& matrix44);
        uint8_t* GetLocal() const;
        uint8_t* GetWorld();
        Matrix44T<float>* GetSkinningMatrix(int arg1);
        void RotateDefaults(int arg1) const;
        void TranslateDefaults(int arg1) const;
        void ScaleDefaults(int arg1) const;
        OldscapeJoint(const OldscapeJoint& oldscapeJoint);
        ~OldscapeJoint();

    private:
        int field_0;
        uint8_t _unknown_4[140];
        uint8_t m_local;
        uint8_t _unknown_145[63];
        uint8_t field_208;
        uint8_t _unknown_209[79];
        uint8_t field_288;
        uint8_t _unknown_289[135];
    };

    // 0x1002ae370
    OldscapeJoint::OldscapeJoint(int arg1, const Array<jag::math::Matrix44T<float>>& matrix44s,
                                 const Array<Array<float>>& arg3)
        : field_0(-1) {
        uint64_t* puVar3;
        Matrix44T<float>* this_03;
        Array<float>* pAVar4;
        uint32_t* puVar5;
        array<float, 3ul>* paVar6;
        unsigned long uVar7;
        uint64_t local_c8;
        uint64_t uStack_c0;
        uint64_t local_b8;
        uint64_t uStack_b0;
        uint64_t local_a8;
        uint64_t uStack_a0;
        uint64_t local_98;
        uint64_t uStack_90;
        uint32_t local_34;

        uint8_t* local_70 = &field_8;
        new (local_70) shared_ptr();
        uint8_t* this_00 = &field_24;
        new (this_00) Array<std::array<float, 3ul>>();
        uint8_t* this_01 = &field_48;
        new (this_01) Array<jag::math::Matrix44T<float>>();
        uint8_t* local_68 = &field_72;
        new (local_68) Array<jag::math::Matrix44T<float>>();
        Array<jag::math::Matrix44T<float>>* local_48 = (Array<jag::math::Matrix44T<float>>*)&field_96;
        new (local_48) Array<jag::math::Matrix44T<float>>();
        Array<jag::math::Matrix44T<float>>* local_40 = (Array<jag::math::Matrix44T<float>>*)&field_120;
        new (local_40) Array<jag::math::Matrix44T<float>>();
        new (&m_local) jag::math::Matrix44T<float>();
        field_208 = 1;
        new (&field_224) jag::math::Matrix44T<float>();
        field_288 = 1;
        new (&field_304) jag::math::Matrix44T<float>();
        uint8_t* local_60 = &field_368;
        new (local_60) Array<std::array<float, 3ul>>();
        uint8_t* local_58 = &field_392;
        new (local_58) Array<std::array<float, 3ul>>();
        uint8_t* local_50 = &field_416;
        new (local_50) Array<std::array<float, 3ul>>();
        field_0 = arg1;
        unsigned long uVar1 = matrix44s.end();
        this_01->set_max_size(uVar1, 1);
        uVar1 = this_01->end();
        local_40->set_max_size(uVar1, 1);
        uVar1 = this_01->end();
        local_48->set_max_size(uVar1, 1);
        uVar1 = this_01->end();
        this_00->set_max_size(uVar1, 1);
        if (this_01->end() != 0) {
            uVar1 = 0;
            do {
                puVar3 = &matrix44s[uVar1];
                local_c8 = *puVar3;
                uStack_c0 = puVar3[1];
                local_b8 = puVar3[2];
                uStack_b0 = puVar3[3];
                local_a8 = puVar3[4];
                uStack_a0 = puVar3[5];
                local_98 = puVar3[6];
                uStack_90 = puVar3[7];
                this_03 = (Matrix44T<float>*)(*this_01)[uVar1];
                *this_03 = local_c8;
                pAVar4 = &arg3[uVar1];
                puVar5 = (uint32_t*)(*pAVar4)[0];
                local_34 = *puVar5;
                paVar6 = (array<float, 3ul>*)(*this_00)[uVar1];
                puVar5 = (uint32_t*)(*paVar6)[0];
                *puVar5 = local_34;
                pAVar4 = &arg3[uVar1];
                puVar5 = (uint32_t*)(*pAVar4)[1];
                local_34 = *puVar5;
                paVar6 = (array<float, 3ul>*)(*this_00)[uVar1];
                puVar5 = (uint32_t*)(*paVar6)[1];
                *puVar5 = local_34;
                pAVar4 = &arg3[uVar1];
                puVar5 = (uint32_t*)(*pAVar4)[2];
                local_34 = *puVar5;
                paVar6 = (array<float, 3ul>*)(*this_00)[uVar1];
                puVar5 = (uint32_t*)(*paVar6)[2];
                *puVar5 = local_34;
                uVar1 = uVar1 + 1;
                uVar7 = this_01->end();
            } while (uVar1 < uVar7);
        }
        InitDefaults();
    }

    // 0x1002aec10
    void OldscapeJoint::InitDefaults() {
        Array<std::array<float, 3ul>>* this_03;
        uint32_t* puVar3;
        array<float, 3ul>* paVar4;
        ReturnValue local_f8;
        uint32_t local_c8;
        uint32_t local_c4;
        uint32_t local_c0;
        uint64_t local_70;
        uint32_t local_68;
        uint64_t local_60;
        uint32_t local_58;
        Array<std::array<float, 3ul>>* local_40;
        uint32_t local_34;

        uint8_t* this_01 = &field_368;
        uint8_t* this_00 = &field_48;
        unsigned long uVar2 = this_00->end();
        this_01->set_max_size(uVar2, 1);
        uint8_t* this_02 = &field_392;
        uVar2 = this_00->end();
        this_02->set_max_size(uVar2, 1);
        uVar2 = this_00->end();
        field_416.set_max_size(uVar2, 1);
        ReturnValue local_b8 = *(ReturnValue*)PTR_IDENTITY_100ee6730;
        uint64_t uStack_b0 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 8);
        uint32_t uVar5 = *(uint32_t*)(PTR_IDENTITY_100ee6730 + 16);
        uint32_t uStack_a4 = *(uint32_t*)(PTR_IDENTITY_100ee6730 + 20);
        uint32_t uStack_a0 = *(uint32_t*)(PTR_IDENTITY_100ee6730 + 24);
        uint32_t uStack_9c = *(uint32_t*)(PTR_IDENTITY_100ee6730 + 28);
        uint64_t local_98 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 32);
        uint64_t uStack_90 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 40);
        uint64_t local_88 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 48);
        uint64_t uStack_80 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 56);
        uint32_t local_a8 = uVar5;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_48 =
            (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_00;
        int iVar1 = this_00->end();
        if (0 < iVar1) {
            uVar2 = 0;
            local_40 = (Array<std::array<float, 3ul>>*)&field_416;
            do {
                GetLocalBind(&local_f8, this, (int)uVar2);
                local_b8 = jag::math::Matrix44T<float>::Set(local_f8);
                local_b8 = jag::math::Matrix44T<float>::Invert(nullptr);
                local_70 = local_b8.ToEulerAnglesXYZ();
                local_68 = uVar5;
                puVar3 = (uint32_t*)local_70.SSOBeginPtr();
                local_34 = *puVar3;
                paVar4 = (array<float, 3ul>*)(*this_01)[uVar2];
                puVar3 = (uint32_t*)(*paVar4)[0];
                *puVar3 = local_34;
                puVar3 = (uint32_t*)local_70.y();
                local_34 = *puVar3;
                paVar4 = (array<float, 3ul>*)(*this_01)[uVar2];
                puVar3 = (uint32_t*)(*paVar4)[1];
                *puVar3 = local_34;
                puVar3 = (uint32_t*)local_70.second();
                local_34 = *puVar3;
                paVar4 = (array<float, 3ul>*)(*this_01)[uVar2];
                puVar3 = (uint32_t*)(*paVar4)[2];
                *puVar3 = local_34;
                local_34 = local_c8;
                paVar4 = (array<float, 3ul>*)(*this_02)[uVar2];
                puVar3 = (uint32_t*)(*paVar4)[0];
                *puVar3 = local_34;
                local_34 = local_c4;
                paVar4 = (array<float, 3ul>*)(*this_02)[uVar2];
                puVar3 = (uint32_t*)(*paVar4)[1];
                *puVar3 = local_34;
                local_34 = local_c0;
                paVar4 = (array<float, 3ul>*)(*this_02)[uVar2];
                puVar3 = (uint32_t*)(*paVar4)[2];
                this_03 = local_40;
                *puVar3 = local_34;
                local_60 = local_f8.ExtractScale();
                local_58 = uVar5;
                puVar3 = (uint32_t*)local_60.SSOBeginPtr();
                local_34 = *puVar3;
                paVar4 = (array<float, 3ul>*)(*this_03)[uVar2];
                puVar3 = (uint32_t*)(*paVar4)[0];
                *puVar3 = local_34;
                puVar3 = (uint32_t*)local_60.y();
                local_34 = *puVar3;
                paVar4 = (array<float, 3ul>*)(*this_03)[uVar2];
                puVar3 = (uint32_t*)(*paVar4)[1];
                *puVar3 = local_34;
                puVar3 = (uint32_t*)local_60.second();
                local_34 = *puVar3;
                paVar4 = (array<float, 3ul>*)(*this_03)[uVar2];
                puVar3 = (uint32_t*)(*paVar4)[2];
                *puVar3 = local_34;
                uVar2 = uVar2 + 1;
                iVar1 = local_48->end();
            } while ((long)uVar2 < (long)iVar1);
        }
    }

    // 0x1002aef50
    OldscapeJoint::OldscapeJoint(int arg1, PacketJ<Array<unsigned char>>& packetJ, bool arg3) {
        bool arg2;
        Matrix44T<float>* this_02;
        array<float, 3ul>* paVar4;
        uint32_t* puVar5;
        unsigned long uVar6;
        uint64_t in_register_00000009;
        ReturnValue local_b8;

        uint32_t local_34 = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3);
        field_0 = -1;
        uint8_t* local_40 = &field_8;
        new (local_40) shared_ptr();
        uint8_t* this_00 = &field_24;
        new (this_00) Array<std::array<float, 3ul>>();
        uint8_t* this_01 = &field_48;
        new (this_01) Array<jag::math::Matrix44T<float>>();
        uint8_t* local_78 = &field_72;
        new (local_78) Array<jag::math::Matrix44T<float>>();
        Array<jag::math::Matrix44T<float>>* local_58 = (Array<jag::math::Matrix44T<float>>*)&field_96;
        new (local_58) Array<jag::math::Matrix44T<float>>();
        Array<jag::math::Matrix44T<float>>* local_50 = (Array<jag::math::Matrix44T<float>>*)&field_120;
        new (local_50) Array<jag::math::Matrix44T<float>>();
        new (&m_local) jag::math::Matrix44T<float>();
        field_208 = 1;
        new (&field_224) jag::math::Matrix44T<float>();
        field_288 = 1;
        new (&field_304) jag::math::Matrix44T<float>();
        uint8_t* local_70 = &field_368;
        new (local_70) Array<std::array<float, 3ul>>();
        uint8_t* local_68 = &field_392;
        new (local_68) Array<std::array<float, 3ul>>();
        uint8_t* local_48 = &field_416;
        new (local_48) Array<std::array<float, 3ul>>();
        short sVar1 = packetJ.g2s();
        field_0 = (int)sVar1;
        this_01->set_max_size((long)arg1, 1);
        unsigned long uVar2 = this_01->end();
        local_58->set_max_size(uVar2, 1);
        uVar2 = this_01->end();
        local_50->set_max_size(uVar2, 1);
        uVar2 = this_01->end();
        this_00->set_max_size(uVar2, 1);
        if (this_01->end() != 0) {
            uVar2 = 0;
            arg2 = local_34._0_1_;
            do {
                GetFromPacket(&local_b8, this, packetJ, arg2);
                this_02 = (Matrix44T<float>*)(*this_01)[uVar2];
                *this_02 = local_b8;
                local_34 = packetJ.gFloat();
                paVar4 = (array<float, 3ul>*)(*this_00)[uVar2];
                puVar5 = (uint32_t*)(*paVar4)[0];
                *puVar5 = local_34;
                local_34 = packetJ.gFloat();
                paVar4 = (array<float, 3ul>*)(*this_00)[uVar2];
                puVar5 = (uint32_t*)(*paVar4)[1];
                *puVar5 = local_34;
                local_34 = packetJ.gFloat();
                paVar4 = (array<float, 3ul>*)(*this_00)[uVar2];
                puVar5 = (uint32_t*)(*paVar4)[2];
                *puVar5 = local_34;
                uVar2 = uVar2 + 1;
                uVar6 = this_01->end();
            } while (uVar2 < uVar6);
        }
        InitDefaults();
    }

    // 0x1002af260
    auto OldscapeJoint::GetFromPacket(PacketJ<Array<unsigned char>>& packetJ, bool arg2) {
        short sVar1;
        short sVar2;
        short sVar3;
        AffineTransform3* pAVar4;
        uint32_t* puVar5;
        uint64_t in_register_00000009;
        unsigned long arg1;
        float fVar6;
        ReturnValue local_78;
        uint32_t local_34;

        if ((int)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg2) == 0) {
            arg1 = 0;
            do {
                local_34 = packetJ.gFloat();
                puVar5 = &local_78[arg1];
                *puVar5 = local_34;
                arg1 = arg1 + 1;
            } while (arg1 != 16);
            auto result(local_78);
        } else {
            make_shared<math::AffineTransform3>(&local_78);
            pAVar4 = (AffineTransform3*)local_78.operator->();
            sVar1 = packetJ.g2s();
            fVar6 = (float)game::Conversion::OldJagexAngleToRadians((int)sVar1);
            pAVar4->AppendXRotation(fVar6);
            pAVar4 = (AffineTransform3*)local_78.operator->();
            sVar1 = packetJ.g2s();
            fVar6 = (float)game::Conversion::OldJagexAngleToRadians((int)sVar1);
            pAVar4->AppendYRotation(fVar6);
            pAVar4 = (AffineTransform3*)local_78.operator->();
            sVar1 = packetJ.g2s();
            fVar6 = (float)game::Conversion::OldJagexAngleToRadians((int)sVar1);
            pAVar4->AppendZRotation(fVar6);
            pAVar4 = (AffineTransform3*)local_78.operator->();
            sVar1 = packetJ.g2s();
            sVar2 = packetJ.g2s();
            sVar3 = packetJ.g2s();
            pAVar4->AppendTranslate((float)(int)sVar1, (float)(int)sVar2, (float)(int)sVar3);
            *local_78;
            FromAffineTransform3(&result, (AffineTransform3*)this);
        }
        return result;
    }

    // 0x1002af7f0
    OldscapeJoint* OldscapeJoint::FromAffineTransform3(const math::AffineTransform3& affineTransform3) {
        float* in_RDX;

        new (this) jag::math::Matrix44T<float>();
        Set(*in_RDX, in_RDX[1], in_RDX[2], 0.0, in_RDX[3], in_RDX[4], in_RDX[5], 0.0, in_RDX[6], in_RDX[7], in_RDX[8],
            0.0, in_RDX[9], in_RDX[10], in_RDX[11], 1.0);
        return this;
    }

    // 0x1002af900
    auto OldscapeJoint::GetLocalBind(int arg1) const {
        ReturnValue* pRVar8 = &field_48[(long)arg1];
        ReturnValue RVar1 = pRVar8[1];
        ReturnValue RVar2 = pRVar8[2];
        ReturnValue RVar3 = pRVar8[3];
        ReturnValue RVar4 = pRVar8[4];
        ReturnValue RVar5 = pRVar8[5];
        ReturnValue RVar6 = pRVar8[6];
        ReturnValue RVar7 = pRVar8[7];
        auto result = *pRVar8;
        &result[1] = RVar1;
        &result[2] = RVar2;
        &result[3] = RVar3;
        &result[4] = RVar4;
        &result[5] = RVar5;
        &result[6] = RVar6;
        &result[7] = RVar7;
        return result;
    }

    // 0x1002afb00
    void OldscapeJoint::Serialise(PacketJ<Array<unsigned char>>& packetJ, bool arg2) {
        uint8_t* this_00;
        array<float, 3ul>* paVar2;
        float* pfVar3;
        unsigned long arg1;

        packetJ.p2<unsigned long>((unsigned short)field_0);
        int iVar1 = field_48.end();
        if (0 < iVar1) {
            this_00 = &field_24;
            arg1 = 0;
            do {
                SerialiseLocalBind((int)arg1, packetJ, arg2);
                paVar2 = (array<float, 3ul>*)(*this_00)[arg1];
                pfVar3 = (float*)(*paVar2)[0];
                packetJ.pFloat(*pfVar3);
                paVar2 = (array<float, 3ul>*)(*this_00)[arg1];
                pfVar3 = (float*)(*paVar2)[0];
                packetJ.pFloat(*pfVar3);
                paVar2 = (array<float, 3ul>*)(*this_00)[arg1];
                pfVar3 = (float*)(*paVar2)[0];
                packetJ.pFloat(*pfVar3);
                arg1 = arg1 + 1;
                iVar1 = field_48.end();
            } while ((long)arg1 < (long)iVar1);
        }
    }

    // 0x1002afbe0
    void OldscapeJoint::SerialiseLocalBind(int arg1, PacketJ<Array<unsigned char>>& packetJ, bool arg3) {
        float* pfVar1;
        long lVar2;
        unsigned short uVar3;
        uint32_t in_register_00000009;
        unsigned int arg1_00;
        long lVar4;
        uint64_t local_40[2];

        uint8_t* this_01 = &field_48;
        if ((((uint32_t)in_register_00000009 << 8) | (uint8_t)arg3) == 0) {
            lVar4 = 0;
            do {
                arg1_00 = 0;
                do {
                    lVar2 = (*this_01)[(unsigned long)arg1];
                    pfVar1 = (float*)(*((lVar4 * 16 + lVar2)))[arg1_00];
                    packetJ.pFloat(*pfVar1);
                    arg1_00 = arg1_00 + 1;
                } while (arg1_00 != 4);
                lVar4 = lVar4 + 1;
            } while (lVar4 != 4);
        } else {
            local_40[0] = ((Matrix44T<float>*)(*this_01)[(unsigned long)arg1])->ToEulerAnglesXYZ();
            pfVar1 = (float*)local_40->SSOBeginPtr();
            uVar3 = game::Conversion::RadiansToOldJagexAngle(*pfVar1);
            packetJ.p2<unsigned long>(uVar3);
            pfVar1 = (float*)local_40->y();
            uVar3 = game::Conversion::RadiansToOldJagexAngle(*pfVar1);
            packetJ.p2<unsigned long>(uVar3);
            pfVar1 = (float*)local_40->second();
            uVar3 = game::Conversion::RadiansToOldJagexAngle(*pfVar1);
            packetJ.p2<unsigned long>(uVar3);
            lVar4 = (*this_01)[(unsigned long)arg1];
            pfVar1 = (float*)(*((lVar4 + 48)))[12];
            packetJ.p2<float>(*pfVar1);
            lVar4 = (*this_01)[(unsigned long)arg1];
            pfVar1 = (float*)(*((lVar4 + 48)))[13];
            packetJ.p2<float>(*pfVar1);
            lVar4 = (*this_01)[(unsigned long)arg1];
            pfVar1 = (float*)(*((lVar4 + 48)))[14];
            packetJ.p2<float>(*pfVar1);
        }
    }

    // 0x1002afd80
    unsigned int OldscapeJoint::GetPacketSize(bool arg1) {
        uint32_t in_register_00000031;

        int iVar2 = 76;
        if ((((uint32_t)in_register_00000031 << 8) | (uint8_t)arg1) != 0) {
            iVar2 = 24;
        }
        return field_48.end() * iVar2 | 2;
    }

    // 0x1002afdb0
    void OldscapeJoint::GetWorldBind(int arg1) {
        OldscapeJoint* this_01;
        Matrix44T<float>* this_02;
        ReturnValue local_78;

        uint8_t* this_00 = &field_96;
        Matrix44T<float>* pMVar2 = (Matrix44T<float>*)(*this_00)[(unsigned long)arg1];
        if (*pMVar2 == *PTR_ZERO_100ee6728) {
            GetLocalBind(&local_78, this, arg1);
            pMVar2 = (Matrix44T<float>*)(*this_00)[(unsigned long)arg1];
            *pMVar2 = local_78;
            if (field_8 != nullptr) {
                this_01 = (OldscapeJoint*)field_8.operator->();
                pMVar2 = (Matrix44T<float>*)GetWorldBind(this_01, arg1);
            } else {
                pMVar2 = (Matrix44T<float>*)PTR_IDENTITY_100ee6730;
            }
            this_02 = (Matrix44T<float>*)(*this_00)[(unsigned long)arg1];
            *this_02 *= pMVar2;
        }
        (*this_00)[(unsigned long)arg1];
    }

    // 0x1002afe80
    void OldscapeJoint::GetWorldBindInverse(int arg1) {
        void result;
        Matrix44T<float>* this_01;
        ReturnValue result;

        uint8_t* this_00 = &field_120;
        Matrix44T<float>* pMVar2 = (Matrix44T<float>*)(*this_00)[(unsigned long)arg1];
        if (*pMVar2 == *PTR_ZERO_100ee6728) {
            pMVar2 = (Matrix44T<float>*)GetWorldBind(arg1);
            this_01 = (Matrix44T<float>*)(*this_00)[(unsigned long)arg1];
            *this_01 = *pMVar2;
            &result = (ReturnValue*)(*this_00)[(unsigned long)arg1];
            result = jag::math::Matrix44T<float>::Invert(nullptr);
        }
        (*this_00)[(unsigned long)arg1];
    }

    // 0x1002aff00
    void OldscapeJoint::SetLocal(const jag::math::Matrix44T<float>& matrix44) {
        m_local = jag::math::Matrix44T<float>::Set(matrix44);
        field_208 = 1;
        field_288 = 1;
    }

    // 0x1002aff30
    uint8_t* OldscapeJoint::GetLocal() const {
        return &m_local;
    }

    // 0x1002aff40
    uint8_t* OldscapeJoint::GetWorld() {
        Matrix44T<float>* pMVar2;
        OldscapeJoint* this_00;

        if (field_208 != '\0') {
            pMVar2 = (Matrix44T<float>*)GetLocal();
            field_224 = jag::math::Matrix44T<float>::Set(*pMVar2);
            if (field_8 != nullptr) {
                this_00 = (OldscapeJoint*)field_8.operator->();
                pMVar2 = (Matrix44T<float>*)GetWorld(this_00);
                field_224 *= pMVar2;
            }
            field_208 = 0;
        }
        return &field_224;
    }

    // 0x1002affc0
    Matrix44T<float>* OldscapeJoint::GetSkinningMatrix(int arg1) {
        Matrix44T<float>* pMVar1;

        if (field_288 != '\0') {
            pMVar1 = (Matrix44T<float>*)GetWorldBindInverse(arg1);
            field_304 = jag::math::Matrix44T<float>::Set(*pMVar1);
            pMVar1 = (Matrix44T<float>*)GetWorld();
            field_304 *= pMVar1;
            field_288 = 0;
        }
        return (Matrix44T<float>*)&field_304;
    }

    // 0x1002b0020
    void OldscapeJoint::RotateDefaults(int arg1) const {
        field_368[(long)arg1];
    }

    // 0x1002b00c0
    void OldscapeJoint::TranslateDefaults(int arg1) const {
        field_392[(long)arg1];
    }

    // 0x1002b00e0
    void OldscapeJoint::ScaleDefaults(int arg1) const {
        field_416[(long)arg1];
    }

    // 0x100327810
    OldscapeJoint::OldscapeJoint(const OldscapeJoint& oldscapeJoint)
        : field_0(oldscapeJoint.field_0), field_8(&oldscapeJoint.field_8), field_24(oldscapeJoint.field_24),
          field_48(oldscapeJoint.field_48), field_72(oldscapeJoint.field_72), field_96(oldscapeJoint.field_96),
          field_120(oldscapeJoint.field_120) {
        _memcpy(&m_local, &oldscapeJoint.m_local, 224);
        new (&field_368) Array<std::array<float, 3ul>>(oldscapeJoint.field_368);
        new (&field_392) Array<std::array<float, 3ul>>(oldscapeJoint.field_392);
        new (&field_416) Array<std::array<float, 3ul>>(oldscapeJoint.field_416);
    }

    // 0x100327b60
    OldscapeJoint::~OldscapeJoint() {
        field_416.~Array();
        field_392.~Array();
        field_368.~Array();
        field_120.~Array();
        field_96.~Array();
        field_72.~Array();
        field_48.~Array();
        field_24.~Array();
        field_8.~shared_ptr();
    }

} // namespace jag::oldscape::graphics::animation

namespace jag {
    // 0x1002af3e0
    shared_ptr_if_not_array<oldscape::math::AffineTransform3>::type make_shared<oldscape::math::AffineTransform3>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        AffineTransform3* local_28[2];

        auto arg1 = aligned_alloc(64, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::math::AffineTransform3>::type result;
        } else {
            local_28[0] = placement_new<oldscape::math::AffineTransform3>((void*)((long)arg1 + 16));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared_trivial<oldscape::math::AffineTransform3>, int,
                              oldscape::math::AffineTransform3*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag

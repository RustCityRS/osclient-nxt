// libs/oldscape/jagex3/graphics/animation/OldscapeJoint.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

namespace jag::oldscape::graphics::animation {
    class OldscapeJoint {
    public:
        OldscapeJoint(int, Array<jag::math::Matrix44T<float>, eastl::allocator> const&,
                      Array<Array<float, eastl::allocator>, eastl::allocator> const&);
        void InitDefaults();
        OldscapeJoint(int, PacketJ<Array<unsigned char, eastl::allocator>>&, bool);
        GetFromPacket(PacketJ<Array<unsigned char, eastl::allocator>>&, bool);
        FromAffineTransform3(math::AffineTransform3 const&);
        GetLocalBind(int) const;
        void Serialise(PacketJ<Array<unsigned char, eastl::allocator>>&, bool);
        void SerialiseLocalBind(int, PacketJ<Array<unsigned char, eastl::allocator>>&, bool);
        uint GetPacketSize(bool);
        void GetWorldBind(int);
        void GetWorldBindInverse(int);
        void SetLocal(jag::math::Matrix44T<float> const&);
        GetLocal() const;
        GetWorld();
        GetSkinningMatrix(int);
        void RotateDefaults(int) const;
        void TranslateDefaults(int) const;
        void ScaleDefaults(int) const;
        OldscapeJoint(OldscapeJoint const&);
        ~OldscapeJoint();

        // data members, from how the methods use this: 424 bytes
        int field_0; // offset 0
        char _unknown_4[4];
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        undefined8 field_40; // offset 40
        undefined8 field_48; // offset 48
        undefined8 field_56; // offset 56
        char _unknown_64[80];
        undefined1 m_local; // offset 144
        char _unknown_145[63];
        undefined1 field_208; // offset 208
        char _unknown_209[79];
        undefined1 field_288; // offset 288
        char _unknown_289[135];
    };

    // 0x1002ae370, 816 bytes, base-object constructor, placed by class name and debug map
    // OldscapeJoint::OldscapeJoint(int, Array<jag::math::Matrix44T<float>, eastl::allocator> const&, Array<Array<float, eastl::allocator>, eastl::allocator> const&)
    void OldscapeJoint::OldscapeJoint(int param_1, Array* param_2, Array* param_3) {
        undefined8* this_00;
        undefined8* this_01;
        ulong uVar1;
        long lVar2;
        undefined8* puVar3;
        Matrix44T<float>* this_03;
        Array<float, eastl::allocator>* pAVar4;
        undefined4* puVar5;
        array<float, 3ul>* paVar6;
        ulong uVar7;
        undefined4 in_register_00000034;
        Matrix44T local_c8;
        undefined8 uStack_90;
        undefined8* local_70;
        undefined1* local_68;
        undefined1* local_60;
        undefined1* local_58;
        undefined1* local_50;
        Array<jag::math::Matrix44T<float>, eastl::allocator>* local_48;
        Array<jag::math::Matrix44T<float>, eastl::allocator>* local_40;
        undefined4 local_34;

        field_0 = -1;
        local_70 = &field_8;
        new (local_70) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(
            (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_1));
        this_00 = &field_24;
        new (this_00) Array<std::array<float, 3ul>, eastl::allocator>();
        this_01 = &field_48;
        new (this_01) Array<jag::math::Matrix44T<float>, eastl::allocator>();
        local_68 = &field_72;
        new (local_68) Array<jag::math::Matrix44T<float>, eastl::allocator>();
        local_48 = (Array<jag::math::Matrix44T<float>, eastl::allocator>*)&field_96;
        Array<jag::math::Matrix44T<float>, eastl::allocator>::Array(local_48);
        local_40 = (Array<jag::math::Matrix44T<float>, eastl::allocator>*)&field_120;
        Array<jag::math::Matrix44T<float>, eastl::allocator>::Array(local_40);
        new (&m_local) jag::math::Matrix44T<float>();
        field_208 = 1;
        new (&field_224) jag::math::Matrix44T<float>();
        field_288 = 1;
        new (&field_304) jag::math::Matrix44T<float>();
        local_60 = &field_368;
        new (local_60) Array<std::array<float, 3ul>, eastl::allocator>();
        local_58 = &field_392;
        new (local_58) Array<std::array<float, 3ul>, eastl::allocator>();
        local_50 = &field_416;
        new (local_50) Array<std::array<float, 3ul>, eastl::allocator>();
        field_0 = param_1;
        uVar1 = param_2->end();
        this_01->set_max_size(uVar1, 1);
        uVar1 = this_01->end();
        local_40->set_max_size(uVar1, 1);
        uVar1 = this_01->end();
        local_48->set_max_size(uVar1, 1);
        uVar1 = this_01->end();
        this_00->set_max_size(uVar1, 1);
        lVar2 = this_01->end();
        if (lVar2 != 0) {
            uVar1 = 0;
            do {
                puVar3 = (undefined8*)Array<jag::math::Matrix44T<float>, eastl::allocator>::operator[](
                    (Array<jag::math::Matrix44T<float>, eastl::allocator>*)param_2, uVar1);
                local_c8._0_8_ = *puVar3;
                local_c8._8_8_ = puVar3[1];
                local_c8._16_8_ = puVar3[2];
                local_c8._24_8_ = puVar3[3];
                local_c8._32_8_ = puVar3[4];
                local_c8._40_8_ = puVar3[5];
                local_c8._48_8_ = puVar3[6];
                uStack_90 = puVar3[7];
                this_03 = (Matrix44T<float>*)Array<jag::math::Matrix44T<float>, eastl::allocator>::operator[](
                    (Array<jag::math::Matrix44T<float>, eastl::allocator>*)this_01, uVar1);
                jag::math::Matrix44T<float>::operator=(this_03, &local_c8);
                pAVar4 = (Array<float, eastl::allocator>*)
                    Array<Array<float, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<float, eastl::allocator>, eastl::allocator>*)param_3, uVar1);
                puVar5 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar4, 0);
                local_34 = *puVar5;
                paVar6 = (array<float, 3ul>*)Array<std::array<float, 3ul>, eastl::allocator>::operator[](
                    (Array<std::array<float, 3ul>, eastl::allocator>*)this_00, uVar1);
                puVar5 = (undefined4*)std::array<float, 3ul>::operator[](paVar6, 0);
                *puVar5 = local_34;
                pAVar4 = (Array<float, eastl::allocator>*)
                    Array<Array<float, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<float, eastl::allocator>, eastl::allocator>*)param_3, uVar1);
                puVar5 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar4, 1);
                local_34 = *puVar5;
                paVar6 = (array<float, 3ul>*)Array<std::array<float, 3ul>, eastl::allocator>::operator[](
                    (Array<std::array<float, 3ul>, eastl::allocator>*)this_00, uVar1);
                puVar5 = (undefined4*)std::array<float, 3ul>::operator[](paVar6, 1);
                *puVar5 = local_34;
                pAVar4 = (Array<float, eastl::allocator>*)
                    Array<Array<float, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<float, eastl::allocator>, eastl::allocator>*)param_3, uVar1);
                puVar5 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar4, 2);
                local_34 = *puVar5;
                paVar6 = (array<float, 3ul>*)Array<std::array<float, 3ul>, eastl::allocator>::operator[](
                    (Array<std::array<float, 3ul>, eastl::allocator>*)this_00, uVar1);
                puVar5 = (undefined4*)std::array<float, 3ul>::operator[](paVar6, 2);
                *puVar5 = local_34;
                uVar1 = uVar1 + 1;
                uVar7 = this_01->end();
            } while (uVar1 < uVar7);
        }
        InitDefaults((OldscapeJoint*)this);
    }

    // 0x1002aec10, 800 bytes, placed by class name and debug map
    // OldscapeJoint::InitDefaults()
    void OldscapeJoint::InitDefaults() {
        undefined8* this_00;
        undefined1* this_01;
        undefined1* this_02;
        Array<std::array<float, 3ul>, eastl::allocator>* this_03;
        int iVar1;
        ulong uVar2;
        vector* pvVar3;
        array<float, 3ul>* paVar4;
        undefined4* puVar5;
        type* ptVar6;
        undefined4 uVar7;
        undefined1 local_f8[64];
        Matrix44T<float> local_b8[72];
        Layout local_70[16];
        Layout local_60[16];
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_48;
        Array<std::array<float, 3ul>, eastl::allocator>* local_40;
        undefined4 local_34;

        this_01 = &field_368;
        this_00 = &field_48;
        uVar2 = this_00->end();
        this_01->set_max_size(uVar2, 1);
        this_02 = &field_392;
        uVar2 = this_00->end();
        this_02->set_max_size(uVar2, 1);
        uVar2 = this_00->end();
        (&field_416, uVar2, 1)->set_max_size();
        local_b8._0_8_ = *(undefined8*)PTR_IDENTITY_100ee6730;
        local_b8._8_8_ = *(undefined8*)(PTR_IDENTITY_100ee6730 + 8);
        uVar7 = *(undefined4*)(PTR_IDENTITY_100ee6730 + 16);
        local_b8._20_4_ = *(undefined4*)(PTR_IDENTITY_100ee6730 + 20);
        local_b8._24_4_ = *(undefined4*)(PTR_IDENTITY_100ee6730 + 24);
        local_b8._28_4_ = *(undefined4*)(PTR_IDENTITY_100ee6730 + 28);
        local_b8._32_8_ = *(undefined8*)(PTR_IDENTITY_100ee6730 + 32);
        local_b8._40_8_ = *(undefined8*)(PTR_IDENTITY_100ee6730 + 40);
        local_b8._48_8_ = *(undefined8*)(PTR_IDENTITY_100ee6730 + 48);
        local_b8._56_8_ = *(undefined8*)(PTR_IDENTITY_100ee6730 + 56);
        local_b8._16_4_ = uVar7;
        local_48 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_00;
        iVar1 = this_00->end();
        if (0 < iVar1) {
            uVar2 = 0;
            local_40 = (Array<std::array<float, 3ul>, eastl::allocator>*)&field_416;
            do {
                GetLocalBind((OldscapeJoint*)local_f8, (int)(OldscapeJoint*)this);
                local_b8->Set(local_f8);
                ptVar6 = (type*)0;
                local_b8->Invert(0);
                local_70._0_8_ = local_b8->ToEulerAnglesXYZ();
                local_70._8_4_ = uVar7;
                pvVar3 = eastl::string::Layout::SSOBeginPtr(local_70, ptVar6);
                local_34 = *(undefined4*)pvVar3;
                paVar4 = (array<float, 3ul>*)Array<std::array<float, 3ul>, eastl::allocator>::operator[](
                    (Array<std::array<float, 3ul>, eastl::allocator>*)this_01, uVar2);
                puVar5 = (undefined4*)std::array<float, 3ul>::operator[](paVar4, 0);
                *puVar5 = local_34;
                puVar5 = (undefined4*)local_70->y();
                local_34 = *puVar5;
                paVar4 = (array<float, 3ul>*)Array<std::array<float, 3ul>, eastl::allocator>::operator[](
                    (Array<std::array<float, 3ul>, eastl::allocator>*)this_01, uVar2);
                puVar5 = (undefined4*)std::array<float, 3ul>::operator[](paVar4, 1);
                *puVar5 = local_34;
                puVar5 = (undefined4*)local_70->second();
                local_34 = *puVar5;
                paVar4 = (array<float, 3ul>*)Array<std::array<float, 3ul>, eastl::allocator>::operator[](
                    (Array<std::array<float, 3ul>, eastl::allocator>*)this_01, uVar2);
                puVar5 = (undefined4*)std::array<float, 3ul>::operator[](paVar4, 2);
                *puVar5 = local_34;
                local_34 = local_f8._48_4_;
                paVar4 = (array<float, 3ul>*)Array<std::array<float, 3ul>, eastl::allocator>::operator[](
                    (Array<std::array<float, 3ul>, eastl::allocator>*)this_02, uVar2);
                puVar5 = (undefined4*)std::array<float, 3ul>::operator[](paVar4, 0);
                *puVar5 = local_34;
                local_34 = local_f8._52_4_;
                paVar4 = (array<float, 3ul>*)Array<std::array<float, 3ul>, eastl::allocator>::operator[](
                    (Array<std::array<float, 3ul>, eastl::allocator>*)this_02, uVar2);
                puVar5 = (undefined4*)std::array<float, 3ul>::operator[](paVar4, 1);
                *puVar5 = local_34;
                local_34 = local_f8._56_4_;
                paVar4 = (array<float, 3ul>*)Array<std::array<float, 3ul>, eastl::allocator>::operator[](
                    (Array<std::array<float, 3ul>, eastl::allocator>*)this_02, uVar2);
                ptVar6 = (type*)2;
                puVar5 = (undefined4*)std::array<float, 3ul>::operator[](paVar4, 2);
                this_03 = local_40;
                *puVar5 = local_34;
                local_60._0_8_ = local_f8->ExtractScale();
                local_60._8_4_ = uVar7;
                pvVar3 = eastl::string::Layout::SSOBeginPtr(local_60, ptVar6);
                local_34 = *(undefined4*)pvVar3;
                paVar4 =
                    (array<float, 3ul>*)Array<std::array<float, 3ul>, eastl::allocator>::operator[](this_03, uVar2);
                puVar5 = (undefined4*)std::array<float, 3ul>::operator[](paVar4, 0);
                *puVar5 = local_34;
                puVar5 = (undefined4*)local_60->y();
                local_34 = *puVar5;
                paVar4 =
                    (array<float, 3ul>*)Array<std::array<float, 3ul>, eastl::allocator>::operator[](this_03, uVar2);
                puVar5 = (undefined4*)std::array<float, 3ul>::operator[](paVar4, 1);
                *puVar5 = local_34;
                puVar5 = (undefined4*)local_60->second();
                local_34 = *puVar5;
                paVar4 =
                    (array<float, 3ul>*)Array<std::array<float, 3ul>, eastl::allocator>::operator[](this_03, uVar2);
                puVar5 = (undefined4*)std::array<float, 3ul>::operator[](paVar4, 2);
                *puVar5 = local_34;
                uVar2 = uVar2 + 1;
                iVar1 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_48);
            } while ((long)uVar2 < (long)iVar1);
        }
    }

    // 0x1002aef40, 16 bytes, complete-object constructor, placed by class name and debug map
    // OldscapeJoint::OldscapeJoint(int, Array<jag::math::Matrix44T<float>, eastl::allocator> const&, Array<Array<float, eastl::allocator>, eastl::allocator> const&): jumps straight to the base-object constructor

    // 0x1002aef50, 784 bytes, base-object constructor, placed by class name and debug map
    // OldscapeJoint::OldscapeJoint(int, PacketJ<Array<unsigned char, eastl::allocator> >&, bool)
    void OldscapeJoint::OldscapeJoint(int param_1, PacketJ* param_2, bool param_3) {
        undefined8* this_00;
        undefined8* this_01;
        short sVar1;
        ulong uVar2;
        long lVar3;
        Matrix44T<float>* this_02;
        array<float, 3ul>* paVar4;
        undefined4* puVar5;
        ulong uVar6;
        undefined7 in_register_00000009;
        undefined4 in_register_00000034;
        Matrix44T local_b8;
        undefined1* local_78;
        undefined1* local_70;
        undefined1* local_68;
        Array<jag::math::Matrix44T<float>, eastl::allocator>* local_58;
        Array<jag::math::Matrix44T<float>, eastl::allocator>* local_50;
        undefined1* local_48;
        undefined8* local_40;
        undefined4 local_34;

        local_34 = (undefined4)CONCAT71(in_register_00000009, param_3);
        field_0 = -1;
        local_40 = &field_8;
        new (local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(
            (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_1));
        this_00 = &field_24;
        new (this_00) Array<std::array<float, 3ul>, eastl::allocator>();
        this_01 = &field_48;
        new (this_01) Array<jag::math::Matrix44T<float>, eastl::allocator>();
        local_78 = &field_72;
        new (local_78) Array<jag::math::Matrix44T<float>, eastl::allocator>();
        local_58 = (Array<jag::math::Matrix44T<float>, eastl::allocator>*)&field_96;
        Array<jag::math::Matrix44T<float>, eastl::allocator>::Array(local_58);
        local_50 = (Array<jag::math::Matrix44T<float>, eastl::allocator>*)&field_120;
        Array<jag::math::Matrix44T<float>, eastl::allocator>::Array(local_50);
        new (&m_local) jag::math::Matrix44T<float>();
        field_208 = 1;
        new (&field_224) jag::math::Matrix44T<float>();
        field_288 = 1;
        new (&field_304) jag::math::Matrix44T<float>();
        local_70 = &field_368;
        new (local_70) Array<std::array<float, 3ul>, eastl::allocator>();
        local_68 = &field_392;
        new (local_68) Array<std::array<float, 3ul>, eastl::allocator>();
        local_48 = &field_416;
        new (local_48) Array<std::array<float, 3ul>, eastl::allocator>();
        sVar1 = param_2->g2s();
        field_0 = (int)sVar1;
        this_01->set_max_size((long)param_1, 1);
        uVar2 = this_01->end();
        local_58->set_max_size(uVar2, 1);
        uVar2 = this_01->end();
        local_50->set_max_size(uVar2, 1);
        uVar2 = this_01->end();
        this_00->set_max_size(uVar2, 1);
        lVar3 = this_01->end();
        if (lVar3 != 0) {
            uVar2 = 0;
            do {
                GetFromPacket((OldscapeJoint*)&local_b8, (PacketJ*)(OldscapeJoint*)this, SUB81(param_2, 0));
                this_02 = (Matrix44T<float>*)Array<jag::math::Matrix44T<float>, eastl::allocator>::operator[](
                    (Array<jag::math::Matrix44T<float>, eastl::allocator>*)this_01, uVar2);
                jag::math::Matrix44T<float>::operator=(this_02, &local_b8);
                local_34 = param_2->gFloat();
                paVar4 = (array<float, 3ul>*)Array<std::array<float, 3ul>, eastl::allocator>::operator[](
                    (Array<std::array<float, 3ul>, eastl::allocator>*)this_00, uVar2);
                puVar5 = (undefined4*)std::array<float, 3ul>::operator[](paVar4, 0);
                *puVar5 = local_34;
                local_34 = param_2->gFloat();
                paVar4 = (array<float, 3ul>*)Array<std::array<float, 3ul>, eastl::allocator>::operator[](
                    (Array<std::array<float, 3ul>, eastl::allocator>*)this_00, uVar2);
                puVar5 = (undefined4*)std::array<float, 3ul>::operator[](paVar4, 1);
                *puVar5 = local_34;
                local_34 = param_2->gFloat();
                paVar4 = (array<float, 3ul>*)Array<std::array<float, 3ul>, eastl::allocator>::operator[](
                    (Array<std::array<float, 3ul>, eastl::allocator>*)this_00, uVar2);
                puVar5 = (undefined4*)std::array<float, 3ul>::operator[](paVar4, 2);
                *puVar5 = local_34;
                uVar2 = uVar2 + 1;
                uVar6 = this_01->end();
            } while (uVar2 < uVar6);
        }
        InitDefaults((OldscapeJoint*)this);
    }

    // 0x1002af260, 368 bytes, placed by class name and debug map
    // OldscapeJoint::GetFromPacket(PacketJ<Array<unsigned char, eastl::allocator> >&, bool)
    OldscapeJoint* OldscapeJoint::GetFromPacket(PacketJ* param_1, bool param_2) {
        short sVar1;
        short sVar2;
        short sVar3;
        AffineTransform3* pAVar4;
        undefined4* puVar5;
        int in_ECX;
        undefined7 in_register_00000011;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this_00;
        ulong uVar6;
        float fVar7;
        jag local_78[68];
        undefined4 local_34;

        this_00 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)CONCAT71(in_register_00000011,
                                                                                                param_2);
        if (in_ECX == 0) {
            uVar6 = 0;
            do {
                local_34 = this_00->gFloat();
                puVar5 = (undefined4*)std::array<float, 16ul>::operator[]((array<float, 16ul>*)local_78, uVar6);
                *puVar5 = local_34;
                uVar6 = uVar6 + 1;
            } while (uVar6 != 16);
            new (this) jag::math::Matrix44T<float>(local_78);
        } else {
            make_shared<math::AffineTransform3>(local_78);
            pAVar4 = (AffineTransform3*)shared_ptr<math::AffineTransform3>::operator->(
                (shared_ptr<math::AffineTransform3>*)local_78);
            sVar1 = this_00->g2s();
            fVar7 = (float)game::Conversion::OldJagexAngleToRadians((int)sVar1);
            pAVar4->AppendXRotation(fVar7);
            pAVar4 = (AffineTransform3*)shared_ptr<math::AffineTransform3>::operator->(
                (shared_ptr<math::AffineTransform3>*)local_78);
            sVar1 = this_00->g2s();
            fVar7 = (float)game::Conversion::OldJagexAngleToRadians((int)sVar1);
            pAVar4->AppendYRotation(fVar7);
            pAVar4 = (AffineTransform3*)shared_ptr<math::AffineTransform3>::operator->(
                (shared_ptr<math::AffineTransform3>*)local_78);
            sVar1 = this_00->g2s();
            fVar7 = (float)game::Conversion::OldJagexAngleToRadians((int)sVar1);
            pAVar4->AppendZRotation(fVar7);
            pAVar4 = (AffineTransform3*)shared_ptr<math::AffineTransform3>::operator->(
                (shared_ptr<math::AffineTransform3>*)local_78);
            sVar1 = this_00->g2s();
            sVar2 = this_00->g2s();
            sVar3 = this_00->g2s();
            pAVar4->AppendTranslate((float)(int)sVar1, (float)(int)sVar2, (float)(int)sVar3);
            shared_ptr<math::AffineTransform3>::operator*((shared_ptr<math::AffineTransform3>*)local_78);
            FromAffineTransform3(this, (AffineTransform3*)param_1);
            local_78->~shared_ptr();
        }
        return this;
    }

    // 0x1002af3d0, 16 bytes, complete-object constructor, placed by class name and debug map
    // OldscapeJoint::OldscapeJoint(int, PacketJ<Array<unsigned char, eastl::allocator> >&, bool): jumps straight to the base-object constructor

    // 0x1002af7f0, 176 bytes, placed by class name
    // OldscapeJoint::FromAffineTransform3(math::AffineTransform3 const&)
    OldscapeJoint* OldscapeJoint::FromAffineTransform3(AffineTransform3* param_1) {
        float* in_RDX;

        new (this) jag::math::Matrix44T<float>();
        Set(*in_RDX, in_RDX[1], in_RDX[2], 0.0, in_RDX[3], in_RDX[4], in_RDX[5], 0.0, in_RDX[6], in_RDX[7], in_RDX[8],
            0.0, in_RDX[9], in_RDX[10], in_RDX[11], 1.0);
        return this;
    }

    // 0x1002af900, 64 bytes, placed by class name
    // OldscapeJoint::GetLocalBind(int) const
    OldscapeJoint* OldscapeJoint::GetLocalBind(int param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8* puVar8;
        int in_EDX;
        undefined4 in_register_00000034;

        puVar8 = (undefined8*)Array<jag::math::Matrix44T<float>, eastl::allocator>::operator[](
            (Array<jag::math::Matrix44T<float>, eastl::allocator>*)(CONCAT44(in_register_00000034, param_1) + 48),
            (long)in_EDX);
        uVar1 = puVar8[1];
        uVar2 = puVar8[2];
        uVar3 = puVar8[3];
        uVar4 = puVar8[4];
        uVar5 = puVar8[5];
        uVar6 = puVar8[6];
        uVar7 = puVar8[7];
        *(undefined8*)this = *puVar8;
        field_8 = uVar1;
        field_16 = uVar2;
        field_24 = uVar3;
        field_32 = uVar4;
        field_40 = uVar5;
        field_48 = uVar6;
        field_56 = uVar7;
        return this;
    }

    // 0x1002afb00, 224 bytes, placed by class name
    // OldscapeJoint::Serialise(PacketJ<Array<unsigned char, eastl::allocator> >&, bool)
    void OldscapeJoint::Serialise(PacketJ* param_1, bool param_2) {
        Array<std::array<float, 3ul>, eastl::allocator>* this;
        int iVar1;
        array<float, 3ul>* paVar2;
        float* pfVar3;
        bool in_DL;
        ulong uVar4;
        undefined7 in_register_00000031;
        PacketT<Array<unsigned char, eastl::allocator>>* this_00;

        this_00 = (PacketT<Array<unsigned char, eastl::allocator>>*)CONCAT71(in_register_00000031, param_2);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(this_00, (ulong) * (uint*)param_1);
        iVar1 = ((param_1 + 48))->end();
        if (0 < iVar1) {
            this = (Array<std::array<float, 3ul>, eastl::allocator>*)(param_1 + 24);
            uVar4 = 0;
            do {
                SerialiseLocalBind((OldscapeJoint*)param_1, (int)uVar4, (PacketJ*)this_00, in_DL);
                paVar2 = (array<float, 3ul>*)Array<std::array<float, 3ul>, eastl::allocator>::operator[](this, uVar4);
                pfVar3 = (float*)std::array<float, 3ul>::operator[](paVar2, 0);
                this_00->pFloat(*pfVar3);
                paVar2 = (array<float, 3ul>*)Array<std::array<float, 3ul>, eastl::allocator>::operator[](this, uVar4);
                pfVar3 = (float*)std::array<float, 3ul>::operator[](paVar2, 0);
                this_00->pFloat(*pfVar3);
                paVar2 = (array<float, 3ul>*)Array<std::array<float, 3ul>, eastl::allocator>::operator[](this, uVar4);
                pfVar3 = (float*)std::array<float, 3ul>::operator[](paVar2, 0);
                this_00->pFloat(*pfVar3);
                uVar4 = uVar4 + 1;
                iVar1 = ((param_1 + 48))->end();
            } while ((long)uVar4 < (long)iVar1);
        }
    }

    // 0x1002afbe0, 368 bytes, placed by class name
    // OldscapeJoint::SerialiseLocalBind(int, PacketJ<Array<unsigned char, eastl::allocator> >&, bool)
    void OldscapeJoint::SerialiseLocalBind(int param_1, PacketJ* param_2, bool param_3) {
        uint uVar1;
        Matrix44T<float>* this_00;
        vector* pvVar2;
        float* pfVar3;
        long lVar4;
        long lVar5;
        undefined3 in_register_00000009;
        type* ptVar6;
        Layout* pLVar7;
        Layout* this_01;
        undefined8* this_02;
        type* ptVar8;
        undefined8 local_40[2];

        this_02 = &field_48;
        ptVar8 = (type*)(long)param_1;
        if (CONCAT31(in_register_00000009, param_3) == 0) {
            lVar4 = 0;
            do {
                uVar1 = 0;
                do {
                    lVar5 = Array<jag::math::Matrix44T<float>, eastl::allocator>::operator[](
                        (Array<jag::math::Matrix44T<float>, eastl::allocator>*)this_02, (ulong)ptVar8);
                    pfVar3 =
                        (float*)jag::math::Vector4T<float>::operator[]((Vector4T<float>*)(lVar4 * 16 + lVar5), uVar1);
                    param_2->pFloat(*pfVar3);
                    uVar1 = uVar1 + 1;
                } while (uVar1 != 4);
                lVar4 = lVar4 + 1;
            } while (lVar4 != 4);
        } else {
            ptVar6 = ptVar8;
            this_00 = (Matrix44T<float>*)Array<jag::math::Matrix44T<float>, eastl::allocator>::operator[](
                (Array<jag::math::Matrix44T<float>, eastl::allocator>*)this_02, (ulong)ptVar8);
            local_40[0] = this_00->ToEulerAnglesXYZ();
            this_01 = (Layout*)local_40;
            pLVar7 = this_01;
            pvVar2 = eastl::string::Layout::SSOBeginPtr(this_01, ptVar6);
            uVar1 = pLVar7->RadiansToOldJagexAngle(*(float*)pvVar2);
            PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)param_2, (ulong)uVar1);
            pLVar7 = this_01;
            pfVar3 = (float*)this_01->y();
            uVar1 = pLVar7->RadiansToOldJagexAngle(*pfVar3);
            PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)param_2, (ulong)uVar1);
            pfVar3 = (float*)this_01->second();
            uVar1 = this_01->RadiansToOldJagexAngle(*pfVar3);
            PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)param_2, (ulong)uVar1);
            lVar4 = Array<jag::math::Matrix44T<float>, eastl::allocator>::operator[](
                (Array<jag::math::Matrix44T<float>, eastl::allocator>*)this_02, (ulong)ptVar8);
            pfVar3 = (float*)jag::math::Vector4T<float>::operator[]((Vector4T<float>*)(lVar4 + 48), 12);
            PacketT<Array<unsigned char, eastl::allocator>>::p2<float>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)param_2, *pfVar3);
            lVar4 = Array<jag::math::Matrix44T<float>, eastl::allocator>::operator[](
                (Array<jag::math::Matrix44T<float>, eastl::allocator>*)this_02, (ulong)ptVar8);
            pfVar3 = (float*)jag::math::Vector4T<float>::operator[]((Vector4T<float>*)(lVar4 + 48), 13);
            PacketT<Array<unsigned char, eastl::allocator>>::p2<float>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)param_2, *pfVar3);
            lVar4 = Array<jag::math::Matrix44T<float>, eastl::allocator>::operator[](
                (Array<jag::math::Matrix44T<float>, eastl::allocator>*)this_02, (ulong)ptVar8);
            pfVar3 = (float*)jag::math::Vector4T<float>::operator[]((Vector4T<float>*)(lVar4 + 48), 14);
            PacketT<Array<unsigned char, eastl::allocator>>::p2<float>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)param_2, *pfVar3);
        }
    }

    // 0x1002afd80, 48 bytes, placed by class name
    // OldscapeJoint::GetPacketSize(bool)
    uint OldscapeJoint::GetPacketSize(bool param_1) {
        int iVar1;
        int iVar2;
        undefined3 in_register_00000031;

        iVar2 = 76;
        if (CONCAT31(in_register_00000031, param_1) != 0) {
            iVar2 = 24;
        }
        iVar1 = (&field_48)->end();
        return iVar1 * iVar2 | 2;
    }

    // 0x1002afdb0, 208 bytes, placed by class name
    // OldscapeJoint::GetWorldBind(int)
    void OldscapeJoint::GetWorldBind(int param_1) {
        undefined1* this_00;
        Matrix44T<float>* pMVar1;
        OldscapeJoint* this_01;
        bool bVar2;
        Matrix44T* pMVar3;
        undefined1 local_78[72];

        this_00 = &field_96;
        pMVar3 = (Matrix44T*)Array<jag::math::Matrix44T<float>, eastl::allocator>::operator[](
            (Array<jag::math::Matrix44T<float>, eastl::allocator>*)this_00, (ulong)param_1);
        bVar2 = jag::math::operator==(pMVar3, (Matrix44T*)PTR_ZERO_100ee6728);
        if (bVar2) {
            GetLocalBind((OldscapeJoint*)local_78, (int)this);
            pMVar1 = (Matrix44T<float>*)Array<jag::math::Matrix44T<float>, eastl::allocator>::operator[](
                (Array<jag::math::Matrix44T<float>, eastl::allocator>*)this_00, (ulong)param_1);
            jag::math::Matrix44T<float>::operator=(pMVar1, (Matrix44T*)local_78);
            bVar2 = operator!=((shared_ptr*)&field_8, (_func_decltype_nullptr*)0);
            if (bVar2) {
                this_01 = (OldscapeJoint*)shared_ptr<OldscapeJoint>::operator->((shared_ptr<OldscapeJoint>*)&field_8);
                pMVar3 = (Matrix44T*)GetWorldBind(this_01, param_1);
            } else {
                pMVar3 = (Matrix44T*)PTR_IDENTITY_100ee6730;
            }
            pMVar1 = (Matrix44T<float>*)Array<jag::math::Matrix44T<float>, eastl::allocator>::operator[](
                (Array<jag::math::Matrix44T<float>, eastl::allocator>*)this_00, (ulong)param_1);
            jag::math::Matrix44T<float>::operator*=(pMVar1, pMVar3);
        }
        Array<jag::math::Matrix44T<float>, eastl::allocator>::operator[](
            (Array<jag::math::Matrix44T<float>, eastl::allocator>*)this_00, (ulong)param_1);
    }

    // 0x1002afe80, 128 bytes, placed by class name
    // OldscapeJoint::GetWorldBindInverse(int)
    void OldscapeJoint::GetWorldBindInverse(int param_1) {
        undefined1* this_00;
        Matrix44T* pMVar1;
        Matrix44T<float>* pMVar2;

        this_00 = &field_120;
        pMVar1 = (Matrix44T*)Array<jag::math::Matrix44T<float>, eastl::allocator>::operator[](
            (Array<jag::math::Matrix44T<float>, eastl::allocator>*)this_00, (ulong)param_1);
        if (jag::math::operator==(pMVar1, (Matrix44T*)PTR_ZERO_100ee6728)) {
            pMVar1 = (Matrix44T*)GetWorldBind(this, param_1);
            pMVar2 = (Matrix44T<float>*)Array<jag::math::Matrix44T<float>, eastl::allocator>::operator[](
                (Array<jag::math::Matrix44T<float>, eastl::allocator>*)this_00, (ulong)param_1);
            jag::math::Matrix44T<float>::operator=(pMVar2, pMVar1);
            pMVar2 = (Matrix44T<float>*)Array<jag::math::Matrix44T<float>, eastl::allocator>::operator[](
                (Array<jag::math::Matrix44T<float>, eastl::allocator>*)this_00, (ulong)param_1);
            pMVar2->Invert(0);
        }
        Array<jag::math::Matrix44T<float>, eastl::allocator>::operator[](
            (Array<jag::math::Matrix44T<float>, eastl::allocator>*)this_00, (ulong)param_1);
    }

    // 0x1002aff00, 48 bytes, placed by class name
    // OldscapeJoint::SetLocal(jag::math::Matrix44T<float> const&)
    void OldscapeJoint::SetLocal(Matrix44T* param_1) {
        (&m_local, param_1)->Set();
        field_208 = 1;
        field_288 = 1;
    }

    // 0x1002aff30, 16 bytes, placed by class name
    // OldscapeJoint::GetLocal() const
    undefined1* OldscapeJoint::GetLocal() {
        return &m_local;
    }

    // 0x1002aff40, 128 bytes, placed by class name
    // OldscapeJoint::GetWorld()
    undefined1* OldscapeJoint::GetWorld() {
        Matrix44T* pMVar2;
        OldscapeJoint* this_00;

        if (field_208 != '\0') {
            pMVar2 = (Matrix44T*)GetLocal(this);
            (&field_224, pMVar2)->Set();
            if (operator!=((shared_ptr*)&field_8, (_func_decltype_nullptr*)0)) {
                this_00 = (OldscapeJoint*)shared_ptr<OldscapeJoint>::operator->((shared_ptr<OldscapeJoint>*)&field_8);
                pMVar2 = (Matrix44T*)GetWorld(this_00);
                jag::math::Matrix44T<float>::operator*=((Matrix44T<float>*)&field_224, pMVar2);
            }
            field_208 = 0;
        }
        return &field_224;
    }

    // 0x1002affc0, 96 bytes, placed by class name
    // OldscapeJoint::GetSkinningMatrix(int)
    undefined1* OldscapeJoint::GetSkinningMatrix(int param_1) {
        Matrix44T* pMVar1;

        if (field_288 != '\0') {
            pMVar1 = (Matrix44T*)GetWorldBindInverse(this, param_1);
            (&field_304, pMVar1)->Set();
            pMVar1 = (Matrix44T*)GetWorld(this);
            jag::math::Matrix44T<float>::operator*=((Matrix44T<float>*)&field_304, pMVar1);
            field_288 = 0;
        }
        return &field_304;
    }

    // 0x1002b0020, 32 bytes, placed by class name
    // OldscapeJoint::RotateDefaults(int) const
    void OldscapeJoint::RotateDefaults(int param_1) {
        Array<std::array<float, 3ul>, eastl::allocator>::operator[](
            (Array<std::array<float, 3ul>, eastl::allocator>*)&field_368, (long)param_1);
    }

    // 0x1002b00c0, 32 bytes, placed by class name
    // OldscapeJoint::TranslateDefaults(int) const
    void OldscapeJoint::TranslateDefaults(int param_1) {
        Array<std::array<float, 3ul>, eastl::allocator>::operator[](
            (Array<std::array<float, 3ul>, eastl::allocator>*)&field_392, (long)param_1);
    }

    // 0x1002b00e0, 32 bytes, placed by class name
    // OldscapeJoint::ScaleDefaults(int) const
    void OldscapeJoint::ScaleDefaults(int param_1) {
        Array<std::array<float, 3ul>, eastl::allocator>::operator[](
            (Array<std::array<float, 3ul>, eastl::allocator>*)&field_416, (long)param_1);
    }

    // 0x1003240f0, 16 bytes, complete-object constructor, inline, placed by class name
    // OldscapeJoint::OldscapeJoint(OldscapeJoint const&): jumps straight to the base-object constructor

    // 0x100324100, 16 bytes, complete-object destructor, inline, placed by class name
    // OldscapeJoint::~OldscapeJoint(): jumps straight to the base-object destructor

    // 0x100327810, 368 bytes, base-object constructor, inline, placed by class name
    // OldscapeJoint::OldscapeJoint(OldscapeJoint const&)
    void OldscapeJoint::OldscapeJoint(OldscapeJoint* param_1) {
        field_0 = param_1->field_0;
        new (&field_8, (shared_ptr*)&param_1->field_8) shared_ptr<dash3d::Decor>();
        new (&field_24, (Array*)&param_1->field_24) Array<std::array<float, 3ul>, eastl::allocator>();
        new (&field_48, (Array*)&param_1->field_48) Array<jag::math::Matrix44T<float>, eastl::allocator>();
        new (&field_72, (Array*)&param_1->field_72) Array<jag::math::Matrix44T<float>, eastl::allocator>();
        new (&field_96, (Array*)&param_1->field_96) Array<jag::math::Matrix44T<float>, eastl::allocator>();
        new (&field_120, (Array*)&param_1->field_120) Array<jag::math::Matrix44T<float>, eastl::allocator>();
        _memcpy(&m_local, &param_1->m_local, 224);
        new (&field_368, (Array*)&param_1->field_368) Array<std::array<float, 3ul>, eastl::allocator>();
        new (&field_392, (Array*)&param_1->field_392) Array<std::array<float, 3ul>, eastl::allocator>();
        new (&field_416, (Array*)&param_1->field_416) Array<std::array<float, 3ul>, eastl::allocator>();
    }

    // 0x100327b60, 112 bytes, base-object destructor, inline, placed by class name
    // OldscapeJoint::~OldscapeJoint()
    void OldscapeJoint::~OldscapeJoint() {
        (&field_416)->~Array();
        (&field_392)->~Array();
        (&field_368)->~Array();
        (&field_120)->~Array();
        (&field_96)->~Array();
        (&field_72)->~Array();
        (&field_48)->~Array();
        (&field_24)->~Array();
        (&field_8)->~shared_ptr();
    }

} // namespace jag::oldscape::graphics::animation

namespace jag {
    // 0x1002af3e0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::math::AffineTransform3>::type make_shared<oldscape::math::AffineTransform3>()
    jag* make_shared<oldscape::math::AffineTransform3>() {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_2c;
        AffineTransform3* local_28[2];

        pvVar1 = (void*)aligned_alloc(64, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::math::AffineTransform3>((void*)((long)pvVar1 + 16));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared_trivial<oldscape::math::AffineTransform3>, int,
                                   oldscape::math::AffineTransform3*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag

// libs/game/runetek5/camera/effects/ShakeMode.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

// 0x10061dc00, 64 bytes, placed by debug map only (low confidence)
// sqrt(float)
undefined8 sqrt(float param_1) {
    uint in_XMM0_Db;
    undefined4 in_XMM0_Dc;
    undefined4 in_XMM0_Dd;
    undefined1 in_XMM1[16];
    undefined1 auVar1[16];
    float fVar2;

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = param_1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    fVar2 = param_1 * auVar1._0_4_;
    return CONCAT44(~(in_XMM0_Db & 2147483647) & in_XMM0_Db,
                    ~-(uint)(ABS(param_1) < 1.1754944e-38) & (uint)((fVar2 * auVar1._0_4_ + -3.0) * fVar2 * -0.5));
}

// 0x10061e1d0, 16 bytes, placed by debug map only (low confidence)
// cos(float)
void cos(float param_1) {
    _cosf();
}

// 0x10061e580, 16 bytes, placed by debug map only (low confidence)
// abs(float)
ulong abs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}

namespace jag::math {
    // 0x10061e490, 112 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // QuaternionT<double>::QuaternionT(QuaternionT<float> const&)
    void QuaternionT<double>::QuaternionT(QuaternionT* param_1) {
        vector* pvVar1;
        float* pfVar2;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        *(double*)this = (double)*(float*)pvVar1;
        pfVar2 = (float*)param_1->y();
        *(double*)(this + 8) = (double)*pfVar2;
        pfVar2 = (float*)param_1->second();
        *(double*)(this + 16) = (double)*pfVar2;
        pfVar2 = (float*)param_1->qw();
        *(double*)(this + 24) = (double)*pfVar2;
    }

    // 0x10061e500, 128 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // QuaternionT<float>::QuaternionT(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&, bool)
    void QuaternionT<float>::QuaternionT(PacketT* param_1, bool param_2) {
        undefined3 in_register_00000011;
        float fVar1;

        if (CONCAT31(in_register_00000011, param_2) == 0) {
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gT<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1);
            *(float*)this = fVar1;
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gT<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1);
            *(float*)(this + 4) = fVar1;
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gT<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1);
            *(float*)(this + 8) = fVar1;
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gT<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1);
        } else {
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gTPE<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1);
            *(float*)this = fVar1;
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gTPE<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1);
            *(float*)(this + 4) = fVar1;
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gTPE<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1);
            *(float*)(this + 8) = fVar1;
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gTPE<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1);
        }
        *(float*)(this + 12) = fVar1;
    }

} // namespace jag::math

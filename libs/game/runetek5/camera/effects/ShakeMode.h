// libs/game/runetek5/camera/effects/ShakeMode.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

// 0x10061dc00
void sqrt(float arg1) {
    unsigned int in_XMM0_Db;
    uint32_t in_XMM0_Dc;
    uint32_t in_XMM0_Dd;
    uint8_t in_XMM1[16];
    uint8_t auVar1[16];

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = arg1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    float fVar2 = arg1 * auVar1._0_4_;
    return (((uint64_t)(~(in_XMM0_Db & 2147483647) & in_XMM0_Db) << 32) |
            (uint32_t)(~-(unsigned int)(ABS(arg1) < 1.1754944e-38) &
                       (unsigned int)((fVar2 * auVar1._0_4_ - 3.0) * fVar2 * -0.5)));
}

// 0x10061e1d0
void cos(float arg1) {
    _cosf();
}

// 0x10061e580
unsigned long abs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}

namespace jag::math {
    // 0x10061e490
    QuaternionT<double>::QuaternionT(const QuaternionT<float>& quaternion) {
        auto pfVar1 = quaternion.SSOBeginPtr();
        *(double*)this = (double)*pfVar1;
        pfVar1 = (float*)quaternion.y();
        *(double*)(this + 8) = (double)*pfVar1;
        pfVar1 = (float*)quaternion.second();
        *(double*)(this + 16) = (double)*pfVar1;
        pfVar1 = (float*)quaternion.qw();
        *(double*)(this + 24) = (double)*pfVar1;
    }

    // 0x10061e500
    QuaternionT<float>::QuaternionT(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1, bool arg2) {
        uint32_t in_register_00000011;
        float fVar1;

        if ((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            fVar1 = arg1.gT<float>();
            *(float*)this = fVar1;
            fVar1 = arg1.gT<float>();
            *(float*)(this + 4) = fVar1;
            fVar1 = arg1.gT<float>();
            *(float*)(this + 8) = fVar1;
            fVar1 = arg1.gT<float>();
        } else {
            fVar1 = arg1.gTPE<float>();
            *(float*)this = fVar1;
            fVar1 = arg1.gTPE<float>();
            *(float*)(this + 4) = fVar1;
            fVar1 = arg1.gTPE<float>();
            *(float*)(this + 8) = fVar1;
            fVar1 = arg1.gTPE<float>();
        }
        *(float*)(this + 12) = fVar1;
    }

} // namespace jag::math

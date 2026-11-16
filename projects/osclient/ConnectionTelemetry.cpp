// projects/osclient/ConnectionTelemetry.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ConnectionTelemetry.h"

namespace jag::oldscape::shared {
    // 0x100183dd0, 48 bytes, placed by class name and debug map
    // ConnectionTelemetry::MarkLostCon()
    void ConnectionTelemetry::MarkLostCon() {
        long lVar1;

        lVar1._0_4_ = field_8;
        lVar1._4_4_ = field_12;
        if (lVar1 != -1) {
            lVar1 = CurrentTimeMillis();
            field_32 = lVar1 - *(long*)&field_8;
            field_8 = -1;
            field_12 = -1;
        }
    }

    // 0x100183e00, 32 bytes, placed by class name and debug map
    // ConnectionTelemetry::MarkLoginStarted(int)
    void ConnectionTelemetry::MarkLoginStarted(int param_1) {
        undefined8 uVar1;

        uVar1 = CurrentTimeMillis();
        field_16 = (int)uVar1;
        field_20 = (int)((ulong)uVar1 >> 32);
        field_48 = param_1;
    }

    // 0x100183e20, 64 bytes, placed by class name and debug map
    // ConnectionTelemetry::MarkLoginFailure()
    void ConnectionTelemetry::MarkLoginFailure() {
        long lVar1;

        lVar1._0_4_ = field_16;
        lVar1._4_4_ = field_20;
        if (lVar1 != -1) {
            lVar1 = CurrentTimeMillis();
            field_40 = lVar1 - *(long*)&field_16;
            field_16 = -1;
            field_20 = -1;
        }
        field_52 = field_52 + 1;
        field_60 = field_60 + 1;
    }

    // 0x100183e60, 64 bytes, placed by class name and debug map
    // ConnectionTelemetry::MarkLoginComplete()
    void ConnectionTelemetry::MarkLoginComplete() {
        long lVar1;

        lVar1._0_4_ = field_16;
        lVar1._4_4_ = field_20;
        if (lVar1 != -1) {
            lVar1 = CurrentTimeMillis();
            field_24 = lVar1 - *(long*)&field_16;
            field_16 = -1;
            field_20 = -1;
        }
        field_56 = field_56 + 1;
        field_0 = 1;
    }

    // 0x100183ea0, 16 bytes, placed by class name and debug map
    // ConnectionTelemetry::MarkTelemetrySent()
    void ConnectionTelemetry::MarkTelemetrySent() {
        field_0 = 0;
        field_52 = 0;
    }

    // 0x100183eb0, 16 bytes, placed by class name and debug map
    // ConnectionTelemetry::MarkReconnectComplete()
    void ConnectionTelemetry::MarkReconnectComplete() {
        MarkLoginComplete(this);
    }

    // 0x100183ec0, 112 bytes, placed by class name and debug map
    // ConnectionTelemetry::SerialiseTelemetry(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ConnectionTelemetry::SerialiseTelemetry(PacketJ* param_1) {
        PushMillisDivTen(param_1, field_32);
        PushMillisDivTen(param_1, field_24);
        PushMillisDivTen(param_1, field_40);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_48);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_52);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_56);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_60);
    }

    // 0x100183f30, 96 bytes, placed by class name and debug map
    // ConnectionTelemetry::PushMillisDivTen(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, long long)
    void ConnectionTelemetry::PushMillisDivTen(PacketJ* param_1, longlong param_2) {
        int local_1c[3];

        local_1c[2] = (int)(SUB168(SEXT816(param_2) * SEXT816(7378697629483820647), 8) >> 2) -
                      (SUB164(SEXT816(param_2) * SEXT816(7378697629483820647), 12) >> 31);
        local_1c[0] = 0;
        local_1c[1] = 65535;
        jag::math::Clamp<int>(local_1c + 2, local_1c, local_1c + 1);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, local_1c[2]);
    }

    // 0x100183f90, 128 bytes, placed by class name and debug map
    // ConnectionTelemetry::Deserialise(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ConnectionTelemetry::Deserialise(PacketJ* param_1) {
        ushort uVar1;
        long lVar2;

        lVar2 = GetMillisDivTen(param_1);
        field_32 = lVar2;
        lVar2 = GetMillisDivTen(param_1);
        field_24 = lVar2;
        field_40 = GetMillisDivTen(param_1);
        uVar1 = param_1->g2();
        field_48 = (uint)uVar1;
        uVar1 = param_1->g2();
        field_52 = (uint)uVar1;
        uVar1 = param_1->g2();
        field_56 = (uint)uVar1;
        uVar1 = param_1->g2();
        field_60 = (uint)uVar1;
    }

    // 0x100184010, 32 bytes, placed by class name and debug map
    // ConnectionTelemetry::GetMillisDivTen(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    long ConnectionTelemetry::GetMillisDivTen(PacketJ* param_1) {
        ushort uVar1;

        uVar1 = param_1->g2();
        return (ulong)uVar1 * 10;
    }

} // namespace jag::oldscape::shared

namespace jag::math {
    // 0x100184040, 48 bytes, inline, placed by debug map only (low confidence)
    // int Clamp<int>(int const&, int const&, int const&)
    int Clamp<int>(int* param_1, int* param_2, int* param_3) {
        int* piVar1;

        piVar1 = std::max<int>(param_2, param_1);
        piVar1 = std::min<int>(param_3, piVar1);
        return *piVar1;
    }

} // namespace jag::math

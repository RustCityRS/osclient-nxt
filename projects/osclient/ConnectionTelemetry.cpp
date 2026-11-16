// projects/osclient/ConnectionTelemetry.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ConnectionTelemetry.h"

namespace jag::oldscape::shared {
    // 0x100183dd0
    void ConnectionTelemetry::MarkLostCon() {
        long lVar1;

        lVar1._0_4_ = field_8;
        lVar1._4_4_ = field_12;
        if (lVar1 != -1) {
            lVar1 = core::SafeTime::CurrentTimeMillis();
            field_32 = lVar1 - *(long*)&field_8;
            field_8 = -1;
            field_12 = -1;
        }
    }

    // 0x100183e00
    void ConnectionTelemetry::MarkLoginStarted(int arg1) {
        uint64_t uVar1 = core::SafeTime::CurrentTimeMillis();
        field_16 = (int)uVar1;
        field_20 = (int)((unsigned long)uVar1 >> 32);
        field_48 = arg1;
    }

    // 0x100183e20
    void ConnectionTelemetry::MarkLoginFailure() {
        long lVar1;

        lVar1._0_4_ = field_16;
        lVar1._4_4_ = field_20;
        if (lVar1 != -1) {
            lVar1 = core::SafeTime::CurrentTimeMillis();
            field_40 = lVar1 - *(long*)&field_16;
            field_16 = -1;
            field_20 = -1;
        }
        field_52 = field_52 + 1;
        field_60 = field_60 + 1;
    }

    // 0x100183e60
    void ConnectionTelemetry::MarkLoginComplete() {
        long lVar1;

        lVar1._0_4_ = field_16;
        lVar1._4_4_ = field_20;
        if (lVar1 != -1) {
            lVar1 = core::SafeTime::CurrentTimeMillis();
            field_24 = lVar1 - *(long*)&field_16;
            field_16 = -1;
            field_20 = -1;
        }
        field_56 = field_56 + 1;
        field_0 = 1;
    }

    // 0x100183ea0
    void ConnectionTelemetry::MarkTelemetrySent() {
        field_0 = 0;
        field_52 = 0;
    }

    // 0x100183eb0
    void ConnectionTelemetry::MarkReconnectComplete() {
        MarkLoginComplete();
    }

    // 0x100183ec0
    void ConnectionTelemetry::SerialiseTelemetry(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        PushMillisDivTen(packetJ, field_32);
        PushMillisDivTen(packetJ, field_24);
        PushMillisDivTen(packetJ, field_40);
        packetJ.p2<int>(field_48);
        packetJ.p2<int>(field_52);
        packetJ.p2<int>(field_56);
        packetJ.p2<int>(field_60);
    }

    // 0x100183f30
    void ConnectionTelemetry::PushMillisDivTen(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ,
                                               long long arg2) {
        int local_1c[3];

        local_1c[2] = (int)((uint64_t)(((__int128)arg2 * (__int128)7378697629483820647) >> 64) >> 2) -
                      ((uint64_t)(((__int128)arg2 * (__int128)7378697629483820647) >> 96) >> 31);
        local_1c[0] = 0;
        local_1c[1] = 65535;
        jag::math::Clamp<int>(*(local_1c + 2), *local_1c, *(local_1c + 1));
        packetJ.p2<int>(local_1c[2]);
    }

    // 0x100183f90
    void ConnectionTelemetry::Deserialise(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        long lVar2 = GetMillisDivTen((ConnectionTelemetry*)packetJ, packetJ);
        field_32 = lVar2;
        lVar2 = GetMillisDivTen((ConnectionTelemetry*)packetJ, packetJ);
        field_24 = lVar2;
        field_40 = GetMillisDivTen((ConnectionTelemetry*)packetJ, packetJ);
        unsigned short uVar1 = packetJ.g2();
        field_48 = (unsigned int)uVar1;
        uVar1 = packetJ.g2();
        field_52 = (unsigned int)uVar1;
        uVar1 = packetJ.g2();
        field_56 = (unsigned int)uVar1;
        uVar1 = packetJ.g2();
        field_60 = (unsigned int)uVar1;
    }

    // 0x100184010
    long ConnectionTelemetry::GetMillisDivTen(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        unsigned short uVar1 = g2();
        return (unsigned long)uVar1 * 10;
    }

} // namespace jag::oldscape::shared

namespace jag::math {
    // 0x100184040
    int Clamp<int>(const int& arg1, const int& arg2, const int& arg3) {
        auto piVar1 = std::max<int>(arg2, arg1);
        piVar1 = std::min<int>(arg3, *piVar1);
        return *piVar1;
    }

} // namespace jag::math

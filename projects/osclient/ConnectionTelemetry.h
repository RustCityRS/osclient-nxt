// projects/osclient/ConnectionTelemetry.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::shared {
    class ConnectionTelemetry {
    public:
        ConnectionTelemetry();
        void MarkServerDataSeen();
        void MarkLostCon();
        void MarkLoginStarted(int);
        void MarkLoginFailure();
        void MarkLoginComplete();
        void MarkTelemetrySent();
        void MarkReconnectComplete();
        void SerialiseTelemetry(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        void PushMillisDivTen(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, long long);
        void Deserialise(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        long GetMillisDivTen(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);

        // data members, from how the methods use this: 68 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[7];
        int field_8;       // offset 8
        int field_12;      // offset 12
        int field_16;      // offset 16
        int field_20;      // offset 20
        long field_24;     // offset 24
        long field_32;     // offset 32
        longlong field_40; // offset 40
        uint field_48;     // offset 48
        uint field_52;     // offset 52
        uint field_56;     // offset 56
        uint field_60;     // offset 60
        char _unknown_64[4];
    };

    // 0x1000c4370, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ConnectionTelemetry::ConnectionTelemetry(): jumps straight to the base-object constructor

    // 0x100111540, 32 bytes, inline, placed by class name
    // ConnectionTelemetry::MarkServerDataSeen()
    void ConnectionTelemetry::MarkServerDataSeen() {
        undefined8 uVar1;

        uVar1 = CurrentTimeMillis();
        field_8 = (int)uVar1;
        field_12 = (int)((ulong)uVar1 >> 32);
    }

    // 0x100128920, 48 bytes, base-object constructor, inline, placed by class name
    // ConnectionTelemetry::ConnectionTelemetry()
    void ConnectionTelemetry::ConnectionTelemetry() {
        field_0 = 0;
        field_8 = -1;
        field_12 = -1;
        field_16 = -1;
        field_20 = -1;
        field_24 = 0;
        field_32 = 0;
        field_40 = 0;
        field_48 = 0;
        field_52 = 0;
        field_56 = 0;
        field_60 = 0;
    }

} // namespace jag::oldscape::shared

// projects/osclient/ConnectionTelemetry.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::shared {
    class ConnectionTelemetry {
    public:
        ConnectionTelemetry();
        void MarkServerDataSeen();
        void MarkLostCon();
        void MarkLoginStarted(int arg1);
        void MarkLoginFailure();
        void MarkLoginComplete();
        void MarkTelemetrySent();
        void MarkReconnectComplete();
        void SerialiseTelemetry(PacketJ<Array<unsigned char>>& packetJ);
        void PushMillisDivTen(PacketJ<Array<unsigned char>>& packetJ, long long arg2);
        void Deserialise(PacketJ<Array<unsigned char>>& packetJ);
        long GetMillisDivTen(PacketJ<Array<unsigned char>>& packetJ);

    private:
        uint8_t field_0;
        uint8_t _unknown_1[7];
        int field_8;
        int field_12;
        int field_16;
        int field_20;
        long field_24;
        long field_32;
        long long field_40;
        unsigned int field_48;
        unsigned int field_52;
        unsigned int field_56;
        unsigned int field_60;
        uint8_t _unknown_64[4];
    };

    // 0x100111540
    void ConnectionTelemetry::MarkServerDataSeen() {
        uint64_t uVar1 = core::SafeTime::CurrentTimeMillis();
        field_8 = (int)uVar1;
        field_12 = (int)((unsigned long)uVar1 >> 32);
    }

    // 0x100128920
    ConnectionTelemetry::ConnectionTelemetry()
        : field_0(0), field_8(-1), field_12(-1), field_16(-1), field_20(-1), field_24(0), field_32(0), field_40(0),
          field_48(0), field_52(0), field_56(0), field_60(0) {}

} // namespace jag::oldscape::shared

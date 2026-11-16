// libs/hal/network/connectivity/Connectivity_Default.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.network

namespace jag::network {
    class Connectivity {
    public:
        void Init();
        void HasWifiConnection();
        void HasInternetConnection();
        void HasCellularDataConnection();
        void UpdateInternetConnectionState(InternetConnectionState internetConnectionState);

        uint8_t _unknown_0[1];
    };

    // 0x100b102a0
    void Connectivity::Init() {}

    // 0x100b102b0
    void Connectivity::HasWifiConnection() {
        return 1;
    }

    // 0x100b102c0
    void Connectivity::HasInternetConnection() {
        return 1;
    }

    // 0x100b102d0
    void Connectivity::HasCellularDataConnection() {
        return 0;
    }

    // 0x100b102e0
    void Connectivity::UpdateInternetConnectionState(Connectivity::InternetConnectionState internetConnectionState) {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/"
                        "connectivity/Connectivity_Default.cpp",
                        38, nullptr);
    }

} // namespace jag::network

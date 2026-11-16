// libs/hal/network/connectivity/Connectivity_Default.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.network

namespace jag::network {
    class Connectivity {
    public:
        void Init();
        HasWifiConnection();
        HasInternetConnection();
        HasCellularDataConnection();
        void UpdateInternetConnectionState(InternetConnectionState);
    };

    // 0x100b102a0, 16 bytes, placed by class name and debug map
    // Connectivity::Init()
    void Connectivity::Init() {}

    // 0x100b102b0, 16 bytes, placed by class name and debug map
    // Connectivity::HasWifiConnection()
    undefined1 Connectivity::HasWifiConnection() {
        return 1;
    }

    // 0x100b102c0, 16 bytes, placed by class name and debug map
    // Connectivity::HasInternetConnection()
    undefined1 Connectivity::HasInternetConnection() {
        return 1;
    }

    // 0x100b102d0, 16 bytes, placed by class name and debug map
    // Connectivity::HasCellularDataConnection()
    undefined8 Connectivity::HasCellularDataConnection() {
        return 0;
    }

    // 0x100b102e0, 32 bytes, placed by class name and debug map
    // Connectivity::UpdateInternetConnectionState(Connectivity::InternetConnectionState)
    void Connectivity::UpdateInternetConnectionState() {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/"
                        "connectivity/Connectivity_Default.cpp",
                        38, (char*)0);
    }

} // namespace jag::network

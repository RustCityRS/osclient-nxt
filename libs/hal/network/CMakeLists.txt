add_library(libs.hal.network STATIC
    ${ROOT}/_unplaced/libs/hal/network/unity_0.cpp
    AddressInfo.cpp
    ClientSocket.cpp
    IPAddress.cpp
    Ping.cpp
    address.cpp
    connectivity/Connectivity_Default.cpp
    ping_threading.cpp
    unix/ClientSocket_Unix.cpp
    unix/Ping_Unix.cpp
)
set_target_properties(libs.hal.network PROPERTIES UNITY_BUILD ON)

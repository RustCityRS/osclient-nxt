# libs.imgui: vendored third-party library, original sources were not rebuilt
add_library(libs.imgui STATIC
    ${DEVPLATFORM}/3rdPartyLibs/cpp/imgui/imgui.cpp
    ${DEVPLATFORM}/3rdPartyLibs/cpp/imgui/imgui_demo.cpp
    ${DEVPLATFORM}/3rdPartyLibs/cpp/imgui/imgui_draw.cpp
    ${DEVPLATFORM}/3rdPartyLibs/cpp/imgui/imgui_tables.cpp
    ${DEVPLATFORM}/3rdPartyLibs/cpp/imgui/imgui_widgets.cpp
)

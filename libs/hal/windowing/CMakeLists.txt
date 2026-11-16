add_library(libs.hal.windowing STATIC
    ${ROOT}/_unplaced/libs/hal/windowing/unity_0.cpp
    Window.cpp
    osx/MenuItem_OSX.cpp
    osx/OpenGLViewBacking_OSX.cpp
    osx/OpenGLView_OSX.cpp
    osx/WindowDelegate_OSX.cpp
    osx/Window_OSX.cpp
)
set_target_properties(libs.hal.windowing PROPERTIES UNITY_BUILD ON)

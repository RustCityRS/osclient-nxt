add_library(libs.graphics.view STATIC
    ${ROOT}/_unplaced/libs/graphics/view/unity_0.cpp
    Camera.cpp
    ClientDebugCamController.cpp
    EulerCamera.cpp
    SphericalCamera.cpp
    ViewTransforms.cpp
    shaderfragments/ViewTransformsFragment.cpp
)
set_target_properties(libs.graphics.view PROPERTIES UNITY_BUILD ON)

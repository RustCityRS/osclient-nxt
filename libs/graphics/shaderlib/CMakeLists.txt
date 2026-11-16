add_library(libs.graphics.shaderlib STATIC
    ${ROOT}/_unplaced/libs/graphics/shaderlib/unity_0.cpp
    ShaderSourceData.code
    ShaderSourceProvider.cpp
    utils/PackUtils.cpp
    utils/TextureCubeUtils.cpp
    utils/UnpackUtils.cpp
)
set_target_properties(libs.graphics.shaderlib PROPERTIES UNITY_BUILD ON)

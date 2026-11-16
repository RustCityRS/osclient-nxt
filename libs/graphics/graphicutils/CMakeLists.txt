add_library(libs.graphics.graphicutils STATIC
    ${ROOT}/_unplaced/libs/graphics/graphicutils/unity_0.cpp
    ViewUtils.cpp
    createprimitive/CreateCapsule.cpp
    createprimitive/CreateCone.cpp
    createprimitive/CreateCube.cpp
    createprimitive/CreateCylinder.cpp
    createprimitive/CreateGrid.cpp
    createprimitive/CreateSphere.cpp
    createtexture/CreateHALTexture2D.cpp
    createtexture/CreateHALTexture3D.cpp
    createtexture/CreateHALTextureCube.cpp
    rendertotexture/RenderToTexture.cpp
    screenshot/Screenshot.cpp
    textureatlas/TextureAtlasSettings.cpp
    textureatlas/TextureAtlasSlotPacker.cpp
    textureatlas/TextureAtlasUsage.cpp
    textureatlas/TextureWrapMode.cpp
)
set_target_properties(libs.graphics.graphicutils PROPERTIES UNITY_BUILD ON)

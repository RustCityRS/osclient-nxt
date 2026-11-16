add_library(libs.oldscape.osrendercore STATIC
    ${ROOT}/_unplaced/libs/oldscape/osrendercore/unity_0.cpp
    Model.cpp
    OSRenderCore.cpp
    Renderable.cpp
    ShaderSourceData.code
    VBOMapper.cpp
    rseven/MapRebuildHandler.cpp
    rseven/ModelUnlitToRT7Exporter.cpp
    rseven/OSMaterialRawProvider.cpp
    rseven/OSTextureDataProvider.cpp
    rseven/OverlayManager.cpp
    rseven/Scene.cpp
    rseven/SceneGraphRenderer.cpp
    rseven/SceneRenderManager.cpp
    rseven/entities/DynamicGeometry.cpp
    rseven/entities/Entity.cpp
    rseven/entities/EntityType.cpp
    rseven/entities/Terrain.cpp
)
set_target_properties(libs.oldscape.osrendercore PROPERTIES UNITY_BUILD ON)

add_library(libs.graphics.primitive.debugbasic STATIC
    ${ROOT}/_unplaced/libs/graphics/primitive/debugbasic/unity_0.cpp
    DebugAABBRender.cpp
    DebugCircle2DRender.cpp
    DebugImageRender.cpp
    DebugLineRender.cpp
    DebugOBBRender.cpp
    DebugPrimitiveCollectorBasic.cpp
    DebugPrimitiveRendererBasic.cpp
    DebugRect2DRender.cpp
    DebugText2DRender.cpp
    DebugTextRender.cpp
    DebugTriRender.cpp
)
set_target_properties(libs.graphics.primitive.debugbasic PROPERTIES UNITY_BUILD ON)

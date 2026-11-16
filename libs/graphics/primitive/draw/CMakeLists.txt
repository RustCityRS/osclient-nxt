add_library(libs.graphics.primitive.draw STATIC
    PrimitiveRenderData.cpp
    PrimitiveShaders.cpp
)
set_target_properties(libs.graphics.primitive.draw PROPERTIES UNITY_BUILD ON)

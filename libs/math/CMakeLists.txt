add_library(libs.math STATIC
    ${ROOT}/_unplaced/libs/math/unity_0.cpp
    BasicUtils.cpp
    NDCProjection.cpp
    Random.cpp
    colour/ColourUtils.cpp
    conversion/Conversion.cpp
    curves/BezierCurve.cpp
    geometry/BoundingSphereBuilder.cpp
    geometry/GeometryUtils.cpp
    margins/Margins.cpp
    noise/GradientPerlinNoise.cpp
    noise/NoiseGenerator.cpp
    polynomial/Polynomial.cpp
    primitives/AABB.cpp
    primitives/Frustum.cpp
    primitives/OBB.cpp
    primitives/Sphere.cpp
    primitives/Sphere2D.cpp
)
set_target_properties(libs.math PROPERTIES UNITY_BUILD ON)

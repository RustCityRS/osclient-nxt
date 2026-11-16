// libs/graphics/runetek7/materials/shaders/shared/Irradiance.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class Irradiance {
    public:
        Irradiance* BuildUniforms();
        Irradiance* BuildVaryingsVS();
        Irradiance* BuildVaryingsFS();
        Irradiance* BuildVSFragment();
        Irradiance* BuildEvaluateSHIrradiance2ndOrder();
        Irradiance* BuildFSFragment();
        Irradiance* BuildEvaluateSHIrradiance1stOrder();
        static /* 4 bytes */ m_irradianceAmbientMultiplier; // = 1065772646

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100f43e10, 4 bytes, __data
    Irradiance::m_irradianceAmbientMultiplier = 1065772646;

    // 0x100854490, 32 bytes, placed by class name and debug map
    // Irradiance::BuildUniforms()
    Irradiance* Irradiance::BuildUniforms() {
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string<decltype(nullptr)>(
            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)this,
            "\n#define IRRADIANCE_COEFFICIENT_TERMS 7\n#define IRRADIANCE_LINEAR_RED_COEF_INDEX 0\n#define "
            "IRRADIANCE_LINEAR_GREEN_COEF_INDEX 1\n#define IRRADIANCE_LINEAR_BLUE_COEF_INDEX 2\n#define "
            "IRRADIANCE_QUADRATIC_RED_COEF_INDEX 3\n#define IRRADIANCE_QUADRATIC_GREEN_COEF_INDEX 4\n#define "
            "IRRADIANCE_QUADRATIC_BLUE_COEF_INDEX 5\n#define IRRADIANCE_QUADRATIC_RGB_COEF_INDEX 6\n\nuniform mediump "
            "vec4 uIrradianceSHCoefs[IRRADIANCE_COEFFICIENT_TERMS];\n");
        return this;
    }

    // 0x1008544b0, 32 bytes, placed by class name and debug map
    // Irradiance::BuildVaryingsVS()
    Irradiance* Irradiance::BuildVaryingsVS() {
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string<decltype(nullptr)>(
            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)this,
            "out vec3 vDiffuseIrradiance;\n");
        return this;
    }

    // 0x1008544d0, 32 bytes, placed by class name and debug map
    // Irradiance::BuildVaryingsFS()
    Irradiance* Irradiance::BuildVaryingsFS() {
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string<decltype(nullptr)>(
            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)this,
            "in vec3 vDiffuseIrradiance;\n");
        return this;
    }

    // 0x1008544f0, 32 bytes, placed by class name and debug map
    // Irradiance::BuildVSFragment()
    Irradiance* Irradiance::BuildVSFragment() {
        BuildEvaluateSHIrradiance2ndOrder(this);
        return this;
    }

    // 0x100854510, 32 bytes, placed by class name and debug map
    // Irradiance::BuildEvaluateSHIrradiance2ndOrder()
    Irradiance* Irradiance::BuildEvaluateSHIrradiance2ndOrder() {
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string<decltype(nullptr)>(
            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)this,
            "\nvec3 EvaluateSHLighting2ndOrder(vec3 normal, mediump vec4 "
            "irradianceSHCoefs[IRRADIANCE_COEFFICIENT_TERMS])\n{\n    vec4 normal1 = vec4(normal.x, normal.y, "
            "normal.z, 1.0);\n\n    vec3 x1, x2, x3;\n\n    x1.r = "
            "dot(irradianceSHCoefs[IRRADIANCE_LINEAR_RED_COEF_INDEX], normal1);\n    x1.g = "
            "dot(irradianceSHCoefs[IRRADIANCE_LINEAR_GREEN_COEF_INDEX], normal1);\n    x1.b = "
            "dot(irradianceSHCoefs[IRRADIANCE_LINEAR_BLUE_COEF_INDEX], normal1);\n\n    vec4 vB = normal1.xyzz * "
            "normal1.yzzx;\n    x2.r = dot(irradianceSHCoefs[IRRADIANCE_QUADRATIC_RED_COEF_INDEX], vB);\n    x2.g = "
            "dot(irradianceSHCoefs[IRRADIANCE_QUADRATIC_GREEN_COEF_INDEX], vB);\n    x2.b = "
            "dot(irradianceSHCoefs[IRRADIANCE_QUADRATIC_BLUE_COEF_INDEX], vB);\n\n    float vC = normal1.x * normal1.x "
            "- normal1.y * normal1.y;\n    x3 = irradianceSHCoefs[IRRADIANCE_QUADRATIC_RGB_COEF_INDEX].rgb * vC;\n\n   "
            " return x1 + x2 + x3;\n}\n");
        return this;
    }

    // 0x100854530, 32 bytes, placed by class name and debug map
    // Irradiance::BuildFSFragment()
    Irradiance* Irradiance::BuildFSFragment() {
        BuildEvaluateSHIrradiance2ndOrder(this);
        return this;
    }

    // 0x100854550, 32 bytes, placed by class name and debug map
    // Irradiance::BuildEvaluateSHIrradiance1stOrder()
    Irradiance* Irradiance::BuildEvaluateSHIrradiance1stOrder() {
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string<decltype(nullptr)>(
            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)this,
            "\nvoid EvaluateSHLighting1stOrder(vec3 normal, vec4 SHRed, vec4 SHGreen, vec4 SHBlue, inout vec3 "
            "color)\n{\n    const vec4 normal1 = vec4(normal.yzx * vec3(-1, 1, -1), 1.f);\n    color.r += dot(normal1, "
            "SHRed);\n    color.g += dot(normal1, SHGreen);\n    color.b += dot(normal1, SHBlue);\n}\n");
        return this;
    }

} // namespace jag::graphics

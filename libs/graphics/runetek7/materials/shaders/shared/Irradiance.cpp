// libs/graphics/runetek7/materials/shaders/shared/Irradiance.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class Irradiance {
    public:
        auto BuildUniforms();
        auto BuildVaryingsVS();
        auto BuildVaryingsFS();
        Irradiance* BuildVSFragment();
        auto BuildEvaluateSHIrradiance2ndOrder();
        Irradiance* BuildFSFragment();
        auto BuildEvaluateSHIrradiance1stOrder();
        static int32_t m_irradianceAmbientMultiplier; // = 1065772646

        uint8_t _unknown_0[1];
    };

    // 0x100f43e10
    int32_t Irradiance::m_irradianceAmbientMultiplier = 1065772646;

    // 0x100854490
    auto Irradiance::BuildUniforms() {
        auto result;
        result.basic_string<decltype(nullptr)>(
            "\n#define IRRADIANCE_COEFFICIENT_TERMS 7\n#define IRRADIANCE_LINEAR_RED_COEF_INDEX 0\n#define "
            "IRRADIANCE_LINEAR_GREEN_COEF_INDEX 1\n#define IRRADIANCE_LINEAR_BLUE_COEF_INDEX 2\n#define "
            "IRRADIANCE_QUADRATIC_RED_COEF_INDEX 3\n#define IRRADIANCE_QUADRATIC_GREEN_COEF_INDEX 4\n#define "
            "IRRADIANCE_QUADRATIC_BLUE_COEF_INDEX 5\n#define IRRADIANCE_QUADRATIC_RGB_COEF_INDEX 6\n\nuniform mediump "
            "vec4 uIrradianceSHCoefs[IRRADIANCE_COEFFICIENT_TERMS];\n");
        return result;
    }

    // 0x1008544b0
    auto Irradiance::BuildVaryingsVS() {
        auto result;
        result.basic_string<decltype(nullptr)>("out vec3 vDiffuseIrradiance;\n");
        return result;
    }

    // 0x1008544d0
    auto Irradiance::BuildVaryingsFS() {
        auto result;
        result.basic_string<decltype(nullptr)>("in vec3 vDiffuseIrradiance;\n");
        return result;
    }

    // 0x1008544f0
    Irradiance* Irradiance::BuildVSFragment() {
        BuildEvaluateSHIrradiance2ndOrder((ReturnValue*)this);
        return this;
    }

    // 0x100854510
    auto Irradiance::BuildEvaluateSHIrradiance2ndOrder() {
        auto result;
        result.basic_string<decltype(nullptr)>(
            "\nvec3 EvaluateSHLighting2ndOrder(vec3 normal, mediump vec4 "
            "irradianceSHCoefs[IRRADIANCE_COEFFICIENT_TERMS])\n{\n vec4 normal1 = vec4(normal.x, normal.y, normal.z, "
            "1.0);\n\n vec3 x1, x2, x3;\n\n x1.r = dot(irradianceSHCoefs[IRRADIANCE_LINEAR_RED_COEF_INDEX], "
            "normal1);\n x1.g = dot(irradianceSHCoefs[IRRADIANCE_LINEAR_GREEN_COEF_INDEX], normal1);\n x1.b = "
            "dot(irradianceSHCoefs[IRRADIANCE_LINEAR_BLUE_COEF_INDEX], normal1);\n\n vec4 vB = normal1.xyzz * "
            "normal1.yzzx;\n x2.r = dot(irradianceSHCoefs[IRRADIANCE_QUADRATIC_RED_COEF_INDEX], vB);\n x2.g = "
            "dot(irradianceSHCoefs[IRRADIANCE_QUADRATIC_GREEN_COEF_INDEX], vB);\n x2.b = "
            "dot(irradianceSHCoefs[IRRADIANCE_QUADRATIC_BLUE_COEF_INDEX], vB);\n\n float vC = normal1.x * normal1.x - "
            "normal1.y * normal1.y;\n x3 = irradianceSHCoefs[IRRADIANCE_QUADRATIC_RGB_COEF_INDEX].rgb * vC;\n\n return "
            "x1 + x2 + x3;\n}\n");
        return result;
    }

    // 0x100854530
    Irradiance* Irradiance::BuildFSFragment() {
        BuildEvaluateSHIrradiance2ndOrder((ReturnValue*)this);
        return this;
    }

    // 0x100854550
    auto Irradiance::BuildEvaluateSHIrradiance1stOrder() {
        auto result;
        result.basic_string<decltype(nullptr)>(
            "\nvoid EvaluateSHLighting1stOrder(vec3 normal, vec4 SHRed, vec4 SHGreen, vec4 SHBlue, inout vec3 "
            "color)\n{\n const vec4 normal1 = vec4(normal.yzx * vec3(-1, 1, -1), 1.f);\n color.r += dot(normal1, "
            "SHRed);\n color.g += dot(normal1, SHGreen);\n color.b += dot(normal1, SHBlue);\n}\n");
        return result;
    }

} // namespace jag::graphics

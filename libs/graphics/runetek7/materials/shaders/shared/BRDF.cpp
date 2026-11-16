// libs/graphics/runetek7/materials/shaders/shared/BRDF.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class BRDF {
    public:
        auto BuildFragment();
    };

    // 0x1008532e0
    auto BRDF::BuildFragment() {
        auto result;
        result.basic_string<decltype(nullptr)>(
            "\nfloat RunescapeLegacyBRDF(vec3 invSunDirection, vec3 invViewDirection, vec3 worldNormal, float "
            "specPower, float attenuation)\n{\n vec3 reflectionDirection = reflect(-invSunDirection, worldNormal);\n "
            "float specularBRDF = pow(max(dot(reflectionDirection, invViewDirection), 0.0), specPower);\n return "
            "(specularBRDF * attenuation);\n}\n\nfloat RunescapeLegacyBRDF2(vec3 halwayVec, vec3 worldNormal, float "
            "specPower)\n{\n return pow(clamp(dot(halwayVec, worldNormal), 0.0, 1.0), specPower);\n}\n");
        return result;
    }

} // namespace jag::graphics

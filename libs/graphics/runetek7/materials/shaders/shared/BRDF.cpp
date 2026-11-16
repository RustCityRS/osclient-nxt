// libs/graphics/runetek7/materials/shaders/shared/BRDF.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class BRDF {
    public:
        BRDF* BuildFragment();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1008532e0, 32 bytes, placed by class name and debug map
    // BRDF::BuildFragment()
    BRDF* BRDF::BuildFragment() {
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string<decltype(nullptr)>(
            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)this,
            "\nfloat RunescapeLegacyBRDF(vec3 invSunDirection, vec3 invViewDirection, vec3 worldNormal, float "
            "specPower, float attenuation)\n{\n   vec3 reflectionDirection = reflect(-invSunDirection, worldNormal);\n "
            "  float specularBRDF = pow(max(dot(reflectionDirection, invViewDirection), 0.0), specPower);\n   return "
            "(specularBRDF * attenuation);\n}\n\nfloat RunescapeLegacyBRDF2(vec3 halwayVec, vec3 worldNormal, float "
            "specPower)\n{\n   return pow(clamp(dot(halwayVec, worldNormal), 0.0, 1.0), specPower);\n}\n");
        return this;
    }

} // namespace jag::graphics

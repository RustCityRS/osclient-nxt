// libs/graphics/runetek7/materials/shaders/shared/PointLightIndices.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class PointLightIndices {
    public:
        auto BuildUniforms();
        auto BuildFSFragment();
    };

    // 0x100854570
    auto PointLightIndices::BuildUniforms() {
        basic_ostream<char, std::char_traits<char> _> local_118;

        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_128;
        std::operator<<(&local_118,
                        "\n   uniform float uPointLightData[256];\nuniform sampler2D uPointLightIndicesMap;\n#if "
                        "!defined(POINT_LIGHTING_VERTEX_DATA)\nuniform float uPointLightIndicesLevel;\nuniform highp "
                        "vec4 uPointLightIndicesClampLimits;\n#endif\n");
        auto result = local_128.str();
        return result;
    }

    // 0x1008545e0
    auto PointLightIndices::BuildFSFragment() {
        basic_ostream<char, std::char_traits<char> _> local_140;

        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_150;
        auto local_38 = render::UndefineInOutGLSL();
        std::operator<<(&local_140, (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_38);
        long lVar1 = ((MapArea*)&local_38->Instance())->GetOrigin();
        if (3 < *(int*)(lVar1 + 84)) {
            std::operator<<(&local_140, "\n#define POINT_LIGHT_INDICES_USE_TEXEL_OFFSETS\n");
        }
        basic_ostream<char, std::char_traits<char> _>* pbVar2 =
            std::operator<<(&local_140, "\n#define POINT_LIGHT_INDICES_INV_TILE_FINESIZE ");
        pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, 0.0078125f);
        pbVar2 = std::operator<<(pbVar2, "\n#define POINT_LIGHT_INDICES_MAPSQUARE_FINESIZE ");
        pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, 8192);
        pbVar2 = std::operator<<(pbVar2, ".0");
        pbVar2 = std::operator<<(pbVar2, "\n#define POINT_LIGHT_INDICES_INV_MAPSQUARE_FINESIZE ");
        pbVar2 =
            (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, 0.00012207031f);
        std::operator<<(pbVar2, "\n");
        pbVar2 = std::operator<<(&local_140, "\n#define POINT_LIGHT_INDICES_ATTENUATION_FALLOFF_MAX ");
        std::ostream::operator<<(pbVar2);
        std::ostream::operator<<((ostream*)pbVar2, 10.0);
        pbVar2 = std::operator<<(&local_140, "\n#define POINT_LIGHT_INDICES_RADIUS_MAX ");
        pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, 8320);
        std::operator<<(pbVar2, ".0");
        std::operator<<(&local_140, "\n");
        auto str = shadersourceprovider::GetShaderString(80);
        std::operator<<(&local_140, str);
        local_38 = render::DefineInOutGLSL();
        std::operator<<(&local_140, (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_38);
        auto result = local_150.str();
        return result;
    }

} // namespace jag::graphics

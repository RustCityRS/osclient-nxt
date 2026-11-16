// libs/graphics/runetek7/materials/shaders/shared/PointLightIndices.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class PointLightIndices {
    public:
        PointLightIndices* BuildUniforms();
        PointLightIndices* BuildFSFragment();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100854570, 112 bytes, placed by class name and debug map
    // PointLightIndices::BuildUniforms()
    PointLightIndices* PointLightIndices::BuildUniforms() {
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_128[16];
        ostream local_118[264];

        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream(local_128);
        std::operator<<(local_118,
                        "\n   uniform float uPointLightData[256];\nuniform sampler2D uPointLightIndicesMap;\n#if "
                        "!defined(POINT_LIGHTING_VERTEX_DATA)\nuniform float uPointLightIndicesLevel;\nuniform highp "
                        "vec4 uPointLightIndicesClampLimits;\n#endif\n");
        str();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_stringstream(local_128);
        return this;
    }

    // 0x1008545e0, 464 bytes, placed by class name and debug map
    // PointLightIndices::BuildFSFragment()
    PointLightIndices* PointLightIndices::BuildFSFragment() {
        MapArea* this_00;
        long lVar1;
        ostream* poVar2;
        char* pcVar3;
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_150[16];
        ostream local_140[264];
        render local_38;

        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream(local_150);
        local_38.UndefineInOutGLSL();
        std::operator<<(local_140, (basic_string*)&local_38);
        local_38.~basic_string();
        this_00 = (MapArea*)local_38.Instance();
        lVar1 = this_00->GetOrigin();
        if (3 < *(int*)(lVar1 + 84)) {
            std::operator<<(local_140, "\n#define POINT_LIGHT_INDICES_USE_TEXEL_OFFSETS\n");
        }
        poVar2 = std::operator<<(local_140, "\n#define POINT_LIGHT_INDICES_INV_TILE_FINESIZE ");
        poVar2 = (ostream*)std::ostream::operator<<(poVar2, 0.0078125);
        poVar2 = std::operator<<(poVar2, "\n#define POINT_LIGHT_INDICES_MAPSQUARE_FINESIZE ");
        poVar2 = (ostream*)std::ostream::operator<<(poVar2, 8192);
        poVar2 = std::operator<<(poVar2, ".0");
        poVar2 = std::operator<<(poVar2, "\n#define POINT_LIGHT_INDICES_INV_MAPSQUARE_FINESIZE ");
        poVar2 = (ostream*)std::ostream::operator<<(poVar2, 0.00012207031);
        std::operator<<(poVar2, "\n");
        pcVar3 = "\n#define POINT_LIGHT_INDICES_ATTENUATION_FALLOFF_MAX ";
        poVar2 = std::operator<<(local_140, "\n#define POINT_LIGHT_INDICES_ATTENUATION_FALLOFF_MAX ");
        std::ostream::operator<<(poVar2, (_func_ios_base_ptr_ios_base_ptr*)pcVar3);
        std::ostream::operator<<(poVar2, 10.0);
        poVar2 = std::operator<<(local_140, "\n#define POINT_LIGHT_INDICES_RADIUS_MAX ");
        poVar2 = (ostream*)std::ostream::operator<<(poVar2, 8320);
        std::operator<<(poVar2, ".0");
        std::operator<<(local_140, "\n");
        pcVar3 = (char*)shadersourceprovider::GetShaderString(80);
        std::operator<<(local_140, pcVar3);
        local_38.DefineInOutGLSL();
        std::operator<<(local_140, (basic_string*)&local_38);
        local_38.~basic_string();
        str();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_stringstream(local_150);
        return this;
    }

} // namespace jag::graphics

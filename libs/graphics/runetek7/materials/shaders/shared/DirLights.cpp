// libs/graphics/runetek7/materials/shaders/shared/DirLights.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class DirLights {
    public:
        auto BuildUniforms();
    };

    // 0x100854410
    auto DirLights::BuildUniforms() {
        auto result;
        result.basic_string<decltype(nullptr)>(
            "\nUNIFORM_BUFFER_BEGIN(Sunlight)\n uniform highp vec3 uInvSunDirection;\n uniform mediump vec3 "
            "uAmbientColour;\n uniform mediump vec3 uSunColour;\n uniform mediump float uDummy;\nUNIFORM_BUFFER_END\n");
        return result;
    }

} // namespace jag::graphics

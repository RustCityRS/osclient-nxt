// libs/graphics/runetek7/materials/shaders/shared/DistanceFog.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class DistanceFog {
    public:
        auto BuildUniforms();
        auto BuildFSFragment();
    };

    // 0x100854430
    auto DistanceFog::BuildUniforms() {
        auto result;

        auto str = shadersourceprovider::GetShaderString(62);
        result.basic_string<decltype(nullptr)>(str);
        return result;
    }

    // 0x100854460
    auto DistanceFog::BuildFSFragment() {
        auto result;

        auto str = shadersourceprovider::GetShaderString(61);
        result.basic_string<decltype(nullptr)>(str);
        return result;
    }

} // namespace jag::graphics

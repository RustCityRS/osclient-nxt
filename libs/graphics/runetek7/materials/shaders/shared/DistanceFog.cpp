// libs/graphics/runetek7/materials/shaders/shared/DistanceFog.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class DistanceFog {
    public:
        DistanceFog* BuildUniforms();
        DistanceFog* BuildFSFragment();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100854430, 48 bytes, placed by class name and debug map
    // DistanceFog::BuildUniforms()
    DistanceFog* DistanceFog::BuildUniforms() {
        char* pcVar1;

        pcVar1 = (char*)shadersourceprovider::GetShaderString(62);
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string<decltype(nullptr)>(
            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)this, pcVar1);
        return this;
    }

    // 0x100854460, 48 bytes, placed by class name and debug map
    // DistanceFog::BuildFSFragment()
    DistanceFog* DistanceFog::BuildFSFragment() {
        char* pcVar1;

        pcVar1 = (char*)shadersourceprovider::GetShaderString(61);
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string<decltype(nullptr)>(
            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)this, pcVar1);
        return this;
    }

} // namespace jag::graphics

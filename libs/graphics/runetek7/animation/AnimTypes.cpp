// libs/graphics/runetek7/animation/AnimTypes.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class AnimTypes {
    public:
        void GetComponentCount(AnimTargetType animTargetType);
        void GetGroupIndex(AnimTargetSubType animTargetSubType);
        void GetTransformType(AnimTargetSubType animTargetSubType);
    };

    // 0x100984370
    void AnimTypes::GetComponentCount(AnimTypes::AnimTargetType animTargetType) {
        uint32_t uVar1 = 4294967295;
        if ((uint8_t)animTargetType < 6) {
            uVar1 = *(uint32_t*)(&DAT_100d4fbf4 + (long)(char)(uint8_t)animTargetType * 4);
        }
        return uVar1;
    }

    // 0x100984430
    void AnimTypes::GetGroupIndex(AnimTypes::AnimTargetSubType animTargetSubType) {
        uint8_t bVar2 = (char)animTargetSubType - 1;
        uint32_t uVar1 = 4294967295;
        if (bVar2 < 16) {
            uVar1 = *(uint32_t*)((long)&PTR___mh_execute_header_100d4fc0c + (long)(char)bVar2 * 4);
        }
        return uVar1;
    }

    // 0x1009863a0
    void AnimTypes::GetTransformType(AnimTypes::AnimTargetSubType animTargetSubType) {
        uint8_t bVar1 = (char)animTargetSubType - 1;
        if ((24 < bVar1) || ((33525759U >> (bVar1 & 31) & 1) == 0)) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "animation/AnimTypes.cpp",
                            82, "Unknown AnimTargetSubType...");
        }
        return (&DAT_100d4fc4c)[(char)bVar1];
    }

} // namespace jag::graphics

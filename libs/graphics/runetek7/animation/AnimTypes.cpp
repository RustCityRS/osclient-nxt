// libs/graphics/runetek7/animation/AnimTypes.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class AnimTypes {
    public:
        GetComponentCount(AnimTargetType);
        GetGroupIndex(AnimTargetSubType);
        GetTransformType(AnimTargetSubType);
    };

    // 0x100984370, 32 bytes, placed by class name and debug map
    // AnimTypes::GetComponentCount(AnimTypes::AnimTargetType)
    undefined4 AnimTypes::GetComponentCount(byte param_1) {
        undefined4 uVar1;

        uVar1 = 4294967295;
        if (param_1 < 6) {
            uVar1 = *(undefined4*)(&DAT_100d4fbf4 + (long)(char)param_1 * 4);
        }
        return uVar1;
    }

    // 0x100984430, 48 bytes, placed by class name and debug map
    // AnimTypes::GetGroupIndex(AnimTypes::AnimTargetSubType)
    undefined4 AnimTypes::GetGroupIndex(char param_1) {
        undefined4 uVar1;

        uVar1 = 4294967295;
        if ((byte)(param_1 - 1U) < 16) {
            uVar1 = *(undefined4*)((long)&PTR___mh_execute_header_100d4fc0c + (long)(char)(param_1 - 1U) * 4);
        }
        return uVar1;
    }

    // 0x1009863a0, 80 bytes, placed by class name
    // AnimTypes::GetTransformType(AnimTypes::AnimTargetSubType)
    undefined1 AnimTypes::GetTransformType(char param_1) {
        byte bVar1;

        bVar1 = param_1 - 1;
        if ((24 < bVar1) || ((33525759U >> (bVar1 & 31) & 1) == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "animation/AnimTypes.cpp",
                            82, "Unknown AnimTargetSubType...");
        }
        return (&DAT_100d4fc4c)[(char)bVar1];
    }

} // namespace jag::graphics

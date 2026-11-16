// libs/game/runetek5/assetbuilder/jobs/buildmodel/BuildModelData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class BuildModelRequestData {
    public:
        BuildModelRequestData();
        ~BuildModelRequestData();

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint8_t _unknown_16[352];
        uint8_t field_368;
        uint8_t _unknown_369[3];
        uint64_t field_372;
        uint32_t field_380;
        uint8_t field_384;
        uint8_t _unknown_385[271];
        uint32_t field_656;
        uint8_t field_660;
        uint32_t field_661;
        uint8_t _unknown_665[3];
        uint32_t field_668;
        uint8_t field_672;
        uint8_t _unknown_673[15];
    };

    class BuildModelResultData {
    public:
        ~BuildModelResultData();
        BuildModelResultData();

        uint8_t _unknown_0[1];
    };

    // 0x100643570
    BuildModelRequestData::BuildModelRequestData() : field_0(0), field_8(0) {
        new (&field_160) eastl::vector<float>();
        new (&field_192) eastl::vector<math::Vector3T<float>>();
        new (&field_224) eastl::vector<math::Vector3T<float>>();
        new (&field_256) eastl::vector<eastl::vector<int>>();
        new (&field_288) eastl::vector<eastl::vector<int>>();
        new (&field_320) math::Vector3T();
        new (&field_336) eastl::vector<math::Vector3T<float>>();
        field_368 = 0;
        uint8_t* puVar1 = PTR_ONE_100ee66d8;
        field_372 = *(uint64_t*)PTR_ONE_100ee66d8;
        field_380 = *(uint32_t*)(puVar1 + 8);
        field_384 = 0;
        new (&field_392) Array<unsigned short>();
        new (&field_416) Array<unsigned short>();
        new (&field_440) Array<unsigned char>();
        new (&field_464) Array<unsigned short>();
        new (&field_488) Array<unsigned short>();
        new (&field_512) Array<unsigned char>();
        new (&field_536) Array<Array<unsigned short>>();
        new (&field_560) Array<Array<Array<unsigned short>>>();
        new (&field_584) Array<unsigned char>();
        new (&field_608) Array<Array<unsigned short>>();
        new (&field_632) Array<Array<Array<unsigned short>>>();
        field_656 = 4294901760;
        field_660 = 255;
        field_661 = 0;
        field_668 = 4294967295;
        field_672 = 0;
        new (&field_680) shared_ptr();
    }

    // 0x1006438b0
    BuildModelResultData::BuildModelResultData() : MakeSharedPool<BuildModelResultData, 512>(), shared_ptr() {}

} // namespace jag::game

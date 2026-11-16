// libs/game/runetek5/assetbuilder/jobs/buildmodel/BuildModelData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class BuildModelRequestData {
    public:
        BuildModelRequestData();
        ~BuildModelRequestData();

        // data members, from how the methods use this: 688 bytes
        undefined8 field_0; // offset 0
        undefined8 field_8; // offset 8
        char _unknown_16[352];
        undefined1 field_368; // offset 368
        char _unknown_369[3];
        undefined8 field_372; // offset 372
        undefined4 field_380; // offset 380
        undefined1 field_384; // offset 384
        char _unknown_385[271];
        undefined4 field_656; // offset 656
        undefined1 field_660; // offset 660
        undefined4 field_661; // offset 661
        char _unknown_665[3];
        undefined4 field_668; // offset 668
        undefined1 field_672; // offset 672
        char _unknown_673[15];
    };

    class BuildModelResultData {
    public:
        ~BuildModelResultData();
        BuildModelResultData();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100643570, 800 bytes, base-object constructor, placed by debug map only (low confidence)
    // BuildModelRequestData::BuildModelRequestData()
    void BuildModelRequestData::BuildModelRequestData() {
        undefined* puVar1;
        _func_decltype_nullptr* in_RSI;

        field_0 = 0;
        field_8 = 0;
        new (&field_16) std::mutex();
        new (&field_80) eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>();
        new (&field_160) eastl::vector<float, eastl::allocator>();
        new (&field_192) eastl::vector<math::Vector3T<float>, eastl::allocator>();
        new (&field_224) eastl::vector<math::Vector3T<float>, eastl::allocator>();
        new (&field_256) eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>();
        new (&field_288) eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>();
        new (&field_320) math::Vector3T<int>();
        new (&field_336) eastl::vector<math::Vector3T<float>, eastl::allocator>();
        field_368 = 0;
        puVar1 = PTR_ONE_100ee66d8;
        field_372 = *(undefined8*)PTR_ONE_100ee66d8;
        field_380 = *(undefined4*)(puVar1 + 8);
        field_384 = 0;
        new (&field_392) Array<unsigned short, eastl::allocator>();
        new (&field_416) Array<unsigned short, eastl::allocator>();
        new (&field_440) Array<unsigned char, eastl::allocator>();
        new (&field_464) Array<unsigned short, eastl::allocator>();
        new (&field_488) Array<unsigned short, eastl::allocator>();
        new (&field_512) Array<unsigned char, eastl::allocator>();
        new (&field_536) Array<Array<unsigned short, eastl::allocator>, eastl::allocator>();
        new (&field_560) Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>, eastl::allocator>();
        new (&field_584) Array<unsigned char, eastl::allocator>();
        new (&field_608) Array<Array<unsigned short, eastl::allocator>, eastl::allocator>();
        new (&field_632) Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>, eastl::allocator>();
        field_656 = 4294901760;
        field_660 = 255;
        field_661 = 0;
        field_668 = 4294967295;
        field_672 = 0;
        new (&field_680, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1006438a0, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // BuildModelRequestData::BuildModelRequestData(): jumps straight to the base-object constructor

    // 0x1006438b0, 32 bytes, base-object constructor, placed by debug map only (low confidence)
    // BuildModelResultData::BuildModelResultData()
    void BuildModelResultData::BuildModelResultData() {
        _func_decltype_nullptr* in_RSI;

        new (this) MakeSharedPool<BuildModelResultData, 512>();
        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
    }

    // 0x100643930, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // BuildModelResultData::BuildModelResultData(): jumps straight to the base-object constructor

} // namespace jag::game

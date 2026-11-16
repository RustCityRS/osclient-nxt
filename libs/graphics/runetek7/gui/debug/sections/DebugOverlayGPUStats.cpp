// libs/graphics/runetek7/gui/debug/sections/DebugOverlayGPUStats.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag {
    // 0x100022b10: DebugOverlayGPUStats::~DebugOverlayGPUStats() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: DebugOverlayGPUStats::~DebugOverlayGPUStats() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10002d860: DebugOverlayGPUStats::Update(unsigned long long) has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x1008fda40
    DebugOverlayGPUStats::DebugOverlayGPUStats(DebugOverlay& debugOverlay, bool arg2)
        : DebugOverlaySection(debugOverlay, 6, arg2) {}

    // 0x1008fda80
    void DebugOverlayGPUStats::Draw(unsigned long long arg1, int arg2, int arg3) {
        int arg5;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true>>* this_02;
        uint64_t uVar2;
        float fVar3;
        uint8_t local_270[8];
        double local_268;

        field_108 = 0;
        new (local_270) callstack::Callstack();
        fixed_string<char, 512> local_260;
        auto this_00 = &local_260->Instance();
        auto this_01 = this_00->GetExclusiveObjectGPUMemory();
        uint64_t local_288 = this_01->begin();
        uint64_t local_280 = this_01->end();
        while (true) {
            if (local_288 != local_280 == '\0')
                break;
            this_02 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true>>*)*local_288;
            fVar3 = Bytes2Megabytes<unsigned long long>(*(unsigned long long*)(this_02 + 552));
            local_268 = (double)(((uint64_t)local_268._4_4_ << 32) | (uint32_t)fVar3);
            *local_270 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient((int)fVar3, 256, 0);
            local_268 = (double)local_268._0_4_;
            uVar2 = this_02->begin();
            local_260.sprintf("%s Memory: %.2lfMb", local_268, uVar2);
            arg5 = local_270->GetX();
            DrawTextString((int)&local_260, arg2, arg3, arg5, 255);
            arg3 = arg3 + field_112;
            field_108 = field_108 + field_112;
            ++local_288;
        }
    }

    // 0x1008fdc60
    void DebugOverlayGPUStats::RegisterTweakyVars(tweak::Container& container) {
        container.AddCheckBox("Show Detailed GPU Stats", field_120);
    }

} // namespace jag

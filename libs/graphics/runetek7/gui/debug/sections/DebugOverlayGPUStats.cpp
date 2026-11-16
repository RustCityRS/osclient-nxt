// libs/graphics/runetek7/gui/debug/sections/DebugOverlayGPUStats.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag {
    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DebugOverlayGPUStats::~DebugOverlayGPUStats();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    DebugOverlayGPUStats::~DebugOverlayGPUStats();

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    DebugOverlayGPUStats::Update(unsigned long long);

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DebugOverlayGPUStats::~DebugOverlayGPUStats();

    // 0x1008fda40, 48 bytes, base-object constructor, placed by class name and debug map
    // DebugOverlayGPUStats::DebugOverlayGPUStats(DebugOverlay&, bool)
    void DebugOverlayGPUStats::DebugOverlayGPUStats(DebugOverlay* param_1, bool param_2) {
        undefined7 in_register_00000011;

        new (this) DebugOverlaySection(param_1, 6, CONCAT71(in_register_00000011, param_2) & 4294967295);
        field_0 = &PTR__ScriptOption_100f189a0;
    }

    // 0x1008fda70, 16 bytes, complete-object constructor, placed by class name and debug map
    // DebugOverlayGPUStats::DebugOverlayGPUStats(DebugOverlay&, bool): jumps straight to the base-object constructor

    // 0x1008fda80, 448 bytes, placed by class name and debug map
    // DebugOverlayGPUStats::Draw(unsigned long long, int, int)
    void DebugOverlayGPUStats::Draw(ulonglong param_1, int param_2, int param_3) {
        bool bVar1;
        undefined4 uVar2;
        RenderDevice* this_00;
        long lVar3;
        undefined8 uVar4;
        undefined8 extraout_RDX;
        fixed_string<char, 512, true, eastl::allocator>* this_01;
        float fVar5;
        undefined1 auVar6[16];
        undefined8 local_288;
        undefined8 local_280;
        undefined1 local_270[8];
        double local_268;
        fixed_string<char, 512, true, eastl::allocator> local_260[552];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        field_108 = 0;
        new (local_270) callstack::Callstack();
        this_01 = local_260;
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(this_01);
        this_00 = (RenderDevice*)this_01->Instance();
        this_00->GetExclusiveObjectGPUMemory();
        local_288 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                  eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                  true>::begin();
        auVar6 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        while (true) {
            local_280 = auVar6._0_8_;
            bVar1 = eastl::operator!=((eastl*)&local_288, (hashtable_iterator_base*)&local_280, auVar6._8_8_);
            if (!bVar1)
                break;
            lVar3 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*((rbtree_iterator<
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                       eastl::pair<unsigned int const,
                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_288);
            fVar5 = Bytes2Megabytes<unsigned long long>(*(ulonglong*)(lVar3 + 552));
            local_268 = (double)CONCAT44(local_268._4_4_, fVar5);
            local_270->SetRedGreenGradient((int)fVar5, 256, 0);
            local_268 = (double)local_268._0_4_;
            uVar4 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)local_260, local_268, "%s Memory: %.2lfMb", uVar4);
            uVar2 = local_270->GetX();
            (*(code*)field_0[7])(this, local_260, param_2, param_3, uVar2, 255, 2);
            param_3 = param_3 + field_112;
            field_108 = field_108 + field_112;
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator++(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const,
                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_288);
            auVar6._8_8_ = extraout_RDX;
            auVar6._0_8_ = local_280;
        }
        /* WARNING: Subroutine does not return */
        local_260->~fixed_string();
    }

    // 0x1008fdc60, 32 bytes, placed by class name and debug map
    // DebugOverlayGPUStats::RegisterTweakyVars(tweak::Container&)
    void DebugOverlayGPUStats::RegisterTweakyVars(Container* param_1) {
        param_1->AddCheckBox("Show Detailed GPU Stats", &field_120);
    }

} // namespace jag

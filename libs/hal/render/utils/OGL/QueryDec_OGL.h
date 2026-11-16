// libs/hal/render/utils/OGL/QueryDec_OGL.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::fixedfunction {
    // 0x100bd1010, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Create(render::QueryType)::$_14, void>(render::Query::Create(render::QueryType)::$_14&&): jumps straight to the base-object constructor

    // 0x100bd1060, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Destroy()::$_15, void>(render::Query::Destroy()::$_15&&): jumps straight to the base-object constructor

    // 0x100bd1070, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::Begin()::$_16, void>(render::Query::Begin()::$_16&&): jumps straight to the base-object constructor

    // 0x100bd1080, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::End()::$_17, void>(render::Query::End()::$_17&&): jumps straight to the base-object constructor

    // 0x100bd11f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::FetchResult()::$_18, void>(render::Query::FetchResult()::$_18&&): jumps straight to the base-object constructor

    // 0x100bd1200, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::FetchResult64()::$_19, void>(render::Query::FetchResult64()::$_19&&): jumps straight to the base-object constructor

    // 0x100bd12b0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::PrepareResult()::$_20, void>(render::Query::PrepareResult()::$_20&&): jumps straight to the base-object constructor

    // 0x100bd1360, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Query::PrepareResult64()::$_21, void>(render::Query::PrepareResult64()::$_21&&): jumps straight to the base-object constructor

} // namespace jag::fixedfunction

namespace jag::render {
    // 0x100bda9a0, 128 bytes, inline, placed by __FILE__ string
    // Query::AdvanceWriteQuery()
    undefined4 Query::AdvanceWriteQuery() {
        undefined1* this_00;
        uint uVar1;
        int* piVar2;
        ulong uVar3;
        undefined4* puVar4;
        uint uVar5;

        this_00 = &field_40;
        piVar2 = (int*)eastl::
            vector<unsigned int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<unsigned int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)
                    this_00,
                (ulong)field_96);
        if (*piVar2 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_queries[m_nextQuery] != INVALID_QUERY_ID",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "QueryDec_OGL.h",
                      34, (char*)0);
        }
        uVar1 = field_96;
        uVar5 = uVar1 + 1;
        field_96 = uVar5;
        uVar3 = this_00->size();
        if (uVar3 <= uVar5) {
            field_113 = '\x01';
            field_96 = 0;
        }
        puVar4 = (undefined4*)eastl::
            vector<unsigned int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<unsigned int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)
                    this_00,
                (ulong)uVar1);
        return *puVar4;
    }

} // namespace jag::render

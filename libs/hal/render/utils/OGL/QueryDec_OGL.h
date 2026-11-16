// libs/hal/render/utils/OGL/QueryDec_OGL.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    // 0x100bda9a0
    uint32_t Query::AdvanceWriteQuery() {
        uint8_t* this_00 = &field_40;
        int* piVar2 = (int*)(*this_00)[(unsigned long)field_96];
        if (*piVar2 == 0) {
            LogAssert("m_queries[m_nextQuery] != INVALID_QUERY_ID",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/"
                      "QueryDec_OGL.h",
                      34, nullptr);
        }
        unsigned int uVar1 = field_96;
        unsigned int uVar5 = uVar1 + 1;
        field_96 = uVar5;
        if (this_00->size() <= uVar5) {
            field_113 = '\x01';
            field_96 = 0;
        }
        uint32_t* puVar4 = (uint32_t*)(*this_00)[(unsigned long)uVar1];
        return *puVar4;
    }

} // namespace jag::render

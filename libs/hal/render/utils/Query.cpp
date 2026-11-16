// libs/hal/render/utils/Query.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "Query.h"

namespace jag::render {
    // 0x100bce730, 80 bytes, placed by debug map only (low confidence)
    // QueryView::Begin(unsigned int)
    void QueryView::Begin(uint param_1) {
        Query* this_00;

        if (field_8 <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "subQueryIndex < m_queryCount",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/Query.cpp", 13,
                (char*)0);
        }
        this_00 = (Query*)shared_ptr<Query>::operator->((shared_ptr<Query>*)((ulong)param_1 * 16 + field_0));
        this_00->Begin();
    }

    // 0x100bce880, 80 bytes, placed by __FILE__ string
    // QueryView::End(unsigned int)
    void QueryView::End(uint param_1) {
        Query* this_00;

        if (field_8 <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "subQueryIndex < m_queryCount",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/Query.cpp", 19,
                (char*)0);
        }
        this_00 = (Query*)shared_ptr<Query>::operator->((shared_ptr<Query>*)((ulong)param_1 * 16 + field_0));
        this_00->End();
    }

} // namespace jag::render

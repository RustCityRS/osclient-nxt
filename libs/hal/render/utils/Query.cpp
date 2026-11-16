// libs/hal/render/utils/Query.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "Query.h"

namespace jag::render {
    // 0x100bce730
    void QueryView::Begin(unsigned int arg1) {
        if (m_subQueryCount <= arg1) {
            LogAssert(
                "subQueryIndex < m_queryCount",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/Query.cpp", 13,
                nullptr);
        }
        ((Query*)(*((shared_ptr<Query>*)((unsigned long)arg1 * 16 + field_0))).operator->())->Begin();
    }

    // 0x100bce880
    void QueryView::End(unsigned int arg1) {
        if (m_subQueryCount <= arg1) {
            LogAssert(
                "subQueryIndex < m_queryCount",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/Query.cpp", 19,
                nullptr);
        }
        ((Query*)(*((shared_ptr<Query>*)((unsigned long)arg1 * 16 + field_0))).operator->())->End();
    }

} // namespace jag::render

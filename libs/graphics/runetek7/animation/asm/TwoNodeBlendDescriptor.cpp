// libs/graphics/runetek7/animation/asm/TwoNodeBlendDescriptor.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "TwoNodeBlendDescriptor.h"

namespace jag::graphics {
    // 0x10095f920
    auto TwoNodeBlendTreeHelpers::ToString(unsigned int arg1, const BlendTreeNodeDescriptor& blendTreeNodeDescriptor1,
                                           const BlendTreeNodeDescriptor& blendTreeNodeDescriptor2,
                                           const eastl::string& str1, const eastl::string& str2) {
        eastl::string local_50;

        eastl::string* local_58 = str2;
        auto local_98 = debug_helpers::GetTabbedSpaces(arg1);
        auto result;
        local_50 + local_98;
        result = &local_50;
        local_50 + local_98;
        result += &local_50;
        (blendTreeNodeDescriptor1._vptr[2]._dtor)(&local_50, blendTreeNodeDescriptor1, (unsigned long)(arg1 + 1));
    }

} // namespace jag::graphics

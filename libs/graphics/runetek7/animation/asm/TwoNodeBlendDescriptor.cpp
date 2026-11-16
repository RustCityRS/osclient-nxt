// libs/graphics/runetek7/animation/asm/TwoNodeBlendDescriptor.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "TwoNodeBlendDescriptor.h"

namespace jag::graphics {
    // 0x10095f920, 560 bytes, placed by debug map only (low confidence)
    // TwoNodeBlendTreeHelpers::ToString(unsigned int, BlendTreeNodeDescriptor const&, BlendTreeNodeDescriptor const&, eastl::string const&, eastl::string const&)
    TwoNodeBlendTreeHelpers* TwoNodeBlendTreeHelpers::ToString(uint param_1, BlendTreeNodeDescriptor* param_2,
                                                               BlendTreeNodeDescriptor* param_3, basic_string* param_4,
                                                               basic_string* param_5) {
        debug_helpers local_98[32];
        eastl local_78[32];
        eastl local_50[32];

        local_98->GetTabbedSpaces(param_1);
        new (this) eastl::string();
        eastl::operator+(local_50, (basic_string*)local_98, (value_type*)"TwoNodeBlend\n");
        eastl::string::operator=((eastl::string*)this, (basic_string*)local_50);
        local_50->~basic_string();
        eastl::operator+(local_50, (basic_string*)local_98, (value_type*)"{\n");
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_50);
        local_50->~basic_string();
        (**(code**)(param_2->field_0 + 32))(local_50, param_2, param_1 + 1);
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_50);
        local_50->~basic_string();
        (**(code**)(param_3->field_0 + 32))(local_50, param_3, param_1 + 1);
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_50);
        local_50->~basic_string();
        eastl::operator+(local_78, (basic_string*)local_98, (value_type*)"Min: ");
        eastl::operator+(local_50, (basic_string*)local_78, param_4);
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_50);
        local_50->~basic_string();
        local_78->~basic_string();
        eastl::operator+(local_78, (basic_string*)local_98, (value_type*)"Max: ");
        eastl::operator+(local_50, (basic_string*)local_78, param_5);
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_50);
        local_50->~basic_string();
        local_78->~basic_string();
        eastl::operator+(local_50, (basic_string*)local_98, (value_type*)"}\n");
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_50);
        local_50->~basic_string();
        local_98->~basic_string();
        return this;
    }

} // namespace jag::graphics

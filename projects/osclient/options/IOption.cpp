// projects/osclient/options/IOption.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.systemheap

#include "IOption.h"

namespace jag::oldscape::option {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    IOption::~IOption();

    // 0x10000b2a0: the linker folded this into eastl::string::Layout::GetHeapSize() const, which has identical code
    IOption::GetOwningStore();

    // 0x100023da0, 96 bytes, base-object constructor, placed by class name and debug map
    // IOption::IOption(OptionStore&, char const*, OptionFlags)
    void IOption::IOption(OptionStore* param_1, long param_2, undefined4 param_4) {
        field_0 = PTR_vtable_100ee8ab0 + 16;
        field_8 = param_1;
        m_name = param_2;
        field_24 = param_4;
        if (param_2 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pName",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/options/"
                      "IOption.cpp",
                      16, (char*)0);
        }
        param_1->Register(this);
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    IOption::~IOption();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    IOption::~IOption();

} // namespace jag::oldscape::option

namespace jag::game::option {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    IOption::~IOption();

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    IOption::IsAvailable(OptionClient) const;

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    IOption::~IOption();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    IOption::~IOption();

} // namespace jag::game::option

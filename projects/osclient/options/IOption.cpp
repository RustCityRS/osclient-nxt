// projects/osclient/options/IOption.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.systemheap

#include "IOption.h"

namespace jag::oldscape::option {
    // 0x100009e70: IOption::~IOption() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x10000b2a0: IOption::GetOwningStore() has the same machine code as eastl::string::Layout::GetHeapSize() const

    // 0x100023da0
    IOption::IOption(OptionStore& optionStore, const char* str, OptionFlags optionFlags)
        : field_8(optionStore), m_name(str), field_24(optionFlags) {
        if (str == nullptr) {
            LogAssert("pName",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/options/"
                      "IOption.cpp",
                      16, nullptr);
        }
        optionStore.Register(this);
    }

} // namespace jag::oldscape::option

namespace jag::game::option {
    // 0x100009e70: IOption::~IOption() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x10002d860: IOption::IsAvailable(OptionClient) const has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

} // namespace jag::game::option

// projects/osclient/options/OptionStore.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "OptionStore.h"

namespace jag::oldscape::option {
    // 0x100021c20
    OptionStore::OptionStore() {
        new (&field_8) eastl::vector_map<eastl::string, IOption*>();
        new (&field_48) eastl::vector_map<int, IScriptOption*>();
    }

    // 0x100023250
    void OptionStore::ForEachOption(std::function<void(IOption&)>&& callback) {
        long lVar1 = field_8.HeapBeginPtr();
        long lVar2 = field_8.end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 40) {
            std::function<void(IOption&)>::operator()((function<void(IOption&)>*)callback, *(IOption**)(lVar1 + 32));
        }
    }

    // 0x100023380
    IOption* OptionStore::GetOptionByName(const eastl::string& str) {
        IOption* pIVar3;
        eastl::string local_38;

        to_lower<eastl::string>(&local_38);
        long lVar1 = eastl::vector_map<eastl::string, EmojiRegistry::SpriteAndIndex>::find(*(str + 8));
        long lVar2 = ((str + 8))->end();
        if (lVar1 == lVar2) {
            pIVar3 = nullptr;
        } else {
            pIVar3 = *(IOption**)(lVar1 + 32);
        }
        return pIVar3;
    }

    // 0x100023420
    void OptionStore::MainLogic() {
        long lVar1 = field_8.HeapBeginPtr();
        long lVar2 = field_8.end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 40) {
            (**(void (**)(...))(**(long**)(lVar1 + 32) + 16))();
        }
    }

    // 0x100023480
    uint64_t OptionStore::GetScriptOption(int arg1) {
        uint64_t uVar3;

        long lVar1 = eastl::vector_map<int, jag::graphics::Material const*>::find(field_48);
        long lVar2 = field_48.end();
        if (lVar1 == lVar2) {
            uVar3 = 0;
        } else {
            uVar3 = *(uint64_t*)(lVar1 + 8);
        }
        return uVar3;
    }

    // 0x100023e00
    void OptionStore::Register(IOption* iOption) {
        eastl::string local_50;

        if (iOption == nullptr) {
            LogAssert("pOption",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/options/"
                      "OptionStore.cpp",
                      18, nullptr);
        }
        auto str = iOption->data();
        eastl::string local_98(str);
        to_lower<eastl::string>(&local_50);
        local_78.pair<eastl::string, IOption*&, void>(local_50, iOption);
        field_8.insert(local_78);
    }

    // 0x100024080
    void OptionStore::Register(IScriptOption* iScriptOption) {
        uint32_t local_38[5];

        if (iScriptOption == nullptr) {
            LogAssert("scriptOption",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/options/"
                      "OptionStore.cpp",
                      26, nullptr);
        }
        int* this_00 = &field_48;
        local_38[0] = iScriptOption->GetPos();
        long lVar1 = eastl::vector_map<int, jag::graphics::Material const*>::find(*this_00);
        long lVar2 = this_00->end();
        if (lVar1 != lVar2) {
            LogAssert("m_scriptOptions.find(scriptOption->GetId()) == m_scriptOptions.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/options/"
                      "OptionStore.cpp",
                      27, nullptr);
        }
        unsigned int local_24 = ((CommandLine*)iScriptOption)->GetPos();
        local_38->pair<unsigned int&, game::VarDomainType*, void>(local_24, (CommandLine*)iScriptOption);
        this_00->insert(*local_38);
    }

    // 0x100c92b50: OptionStore::~OptionStore() has the same machine code as InlineFatalBreak()

} // namespace jag::oldscape::option

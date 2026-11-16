// projects/osclient/options/OptionStore.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "OptionStore.h"

namespace jag::oldscape::option {
    // 0x100021c20, 80 bytes, base-object constructor, placed by class name and debug map
    // OptionStore::OptionStore()
    void OptionStore::OptionStore() {
        field_0 = &PTR__OptionStore_100ef0ed8;
        new (&field_8) eastl::vector_map<eastl::string, IOption*, eastl::less<eastl::string>, eastl::allocator,
                                         eastl::vector<eastl::pair<eastl::string, IOption*>, eastl::allocator>>();
        new (&field_48) eastl::vector_map<int, IScriptOption*, eastl::less<int>, eastl::allocator,
                                          eastl::vector<eastl::pair<int, IScriptOption*>, eastl::allocator>>();
    }

    // 0x100023250, 80 bytes, placed by class name
    // OptionStore::ForEachOption(std::function<void (IOption&)>&&)
    /* OptionStore::ForEachOption(std::function<void
   (IOption&)>&&) */

    void OptionStore::ForEachOption(function* param_1) {
        long lVar1;
        long lVar2;

        lVar1 = (&field_8)->HeapBeginPtr();
        lVar2 = (&field_8)->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 40) {
            std::function<void(IOption&)>::operator()((function<void(IOption&)>*)param_1, *(IOption**)(lVar1 + 32));
        }
    }

    // 0x100023380, 112 bytes, placed by class name
    // OptionStore::GetOptionByName(eastl::string const&)
    undefined8 OptionStore::GetOptionByName(basic_string* param_1) {
        long lVar1;
        long lVar2;
        undefined8 uVar3;
        basic_string local_38[32];

        to_lower<eastl::string>(local_38);
        lVar1 = ((param_1 + 8))->find(local_38);
        local_38->~basic_string();
        lVar2 = ((param_1 + 8))->end();
        if (lVar1 == lVar2) {
            uVar3 = 0;
        } else {
            uVar3 = *(undefined8*)(lVar1 + 32);
        }
        return uVar3;
    }

    // 0x100023420, 80 bytes, placed by class name
    // OptionStore::MainLogic()
    void OptionStore::MainLogic() {
        long lVar1;
        long lVar2;

        lVar1 = (&field_8)->HeapBeginPtr();
        lVar2 = (&field_8)->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 40) {
            (**(code**)(**(long**)(lVar1 + 32) + 16))();
        }
    }

    // 0x100023480, 80 bytes, placed by class name
    // OptionStore::GetScriptOption(int)
    undefined8 OptionStore::GetScriptOption(int param_1) {
        long lVar1;
        long lVar2;
        undefined8 uVar3;
        int local_1c;

        local_1c = param_1;
        lVar1 = (&field_48, &local_1c)->find();
        lVar2 = (&field_48)->end();
        if (lVar1 == lVar2) {
            uVar3 = 0;
        } else {
            uVar3 = *(undefined8*)(lVar1 + 8);
        }
        return uVar3;
    }

    // 0x100023e00, 256 bytes, placed by class name
    // OptionStore::Register(IOption*)
    void OptionStore::Register(IOption* param_1) {
        char* pcVar1;
        eastl::string local_98[32];
        allocator local_78[40];
        basic_string local_50[32];
        IOption* local_30;

        local_30 = param_1;
        if (param_1 == (IOption*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pOption",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/options/"
                      "OptionStore.cpp",
                      18, (char*)0);
        }
        pcVar1 = (char*)param_1->data();
        eastl::allocator::allocator(local_78, "EASTL basic_string");
        eastl::string::basic_string(local_98, pcVar1, local_78);
        to_lower<eastl::string>(local_50);
        eastl::pair<eastl::string, IOption*>::pair<eastl::string, IOption*&, void>(
            (pair<eastl::string, IOption*>*)local_78, local_50, &local_30);
        (&field_8, (pair*)local_78)->insert();
        local_78->~hash_node();
        local_50->~basic_string();
        eastl::string::~basic_string(local_98);
    }

    // 0x100024080, 192 bytes, placed by class name
    // OptionStore::Register(IScriptOption*)
    void OptionStore::Register(IScriptOption* param_1) {
        long lVar1;
        long lVar2;
        undefined1* this_00;
        int local_38[5];
        uint local_24;
        CommandLine* local_20;

        local_20 = (CommandLine*)param_1;
        if (param_1 == (IScriptOption*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("scriptOption",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/options/"
                      "OptionStore.cpp",
                      26, (char*)0);
        }
        this_00 = &field_48;
        local_38[0] = param_1->GetPos();
        lVar1 = this_00->find(local_38);
        lVar2 = this_00->end();
        if (lVar1 != lVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_scriptOptions.find(scriptOption->GetId()) == m_scriptOptions.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/options/"
                      "OptionStore.cpp",
                      27, (char*)0);
        }
        local_24 = local_20->GetPos();
        eastl::pair<unsigned int, game::VarDomainType*>::pair<unsigned int&, game::VarDomainType*, void>(
            (pair<unsigned int, game::VarDomainType*>*)local_38, &local_24, (VarDomainType**)&local_20);
        this_00->insert(local_38);
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    OptionStore::~OptionStore();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    OptionStore::~OptionStore();

} // namespace jag::oldscape::option

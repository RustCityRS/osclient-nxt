// projects/osclient/options/OptionStore.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::option {
    class OptionStore {
    public:
        // virtual methods in vtable order
        virtual ~OptionStore();
        virtual void MainLogic();
        OptionStore();
        void ForEachOption(std::function<void(IOption&)>&&);
        GetOptionByName(eastl::string const&);
        GetScriptOption(int);
        void Register(IOption*);
        void Register(IScriptOption*);

        // data members, from how the methods use this: 56 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[48];
    };

    // 0x100022bb0, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // OptionStore::~OptionStore()
    void OptionStore::~OptionStore() {
        field_0 = &PTR__OptionStore_100ef0ed8;
        (&field_48)->~vector_map();
        (&field_8)->~vector_map();
    }

} // namespace jag::oldscape::option

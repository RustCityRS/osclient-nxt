// projects/osclient/options/OptionStore.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::option {
    class OptionStore {
    public:
        // virtual methods in vtable order
        virtual ~OptionStore();
        virtual void MainLogic();
        OptionStore();
        void ForEachOption(std::function<void(IOption&)>&& callback);
        IOption* GetOptionByName(const eastl::string& str);
        uint64_t GetScriptOption(int arg1);
        void Register(IOption* iOption);
        void Register(IScriptOption* iScriptOption);

    private:
        uint8_t _unknown_8[40];
        int field_48;
        uint8_t _unknown_52[4];
    };

    // 0x100022bb0
    OptionStore::~OptionStore() {
        field_8.~vector_map();
    }

} // namespace jag::oldscape::option

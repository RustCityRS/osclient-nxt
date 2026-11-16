// projects/osclient/options/IOption.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::option {
    class IOption {
    public:
        // virtual methods in vtable order
        virtual ~IOption();
        void GetOwningStore();
        IOption(OptionStore& optionStore, const char* str, OptionFlags optionFlags);
        char* GetName() const;
        bool HasFlags(OptionFlags optionFlags) const;

    private:
        OptionStore* field_8;
        char* m_name;
        OptionFlags field_24;
        uint8_t _unknown_28[4];
    };

    // 0x100023f30
    char* IOption::GetName() const {
        return *(uint64_t*)(this + 16);
    }

    // 0x1000778b0
    bool IOption::HasFlags(OptionFlags optionFlags) const {
        return (field_24 & optionFlags) != 0;
    }

} // namespace jag::oldscape::option

namespace jag::game::option {
    class IOption {
    public:
        // virtual methods in vtable order
        virtual ~IOption();
        bool IsAvailable(OptionClient arg1) const;
        IOption();
    };

    // 0x1005faf60
    IOption::IOption() {}

} // namespace jag::game::option

namespace jag::graphics {
    // 0x100023f30: TextRunSlice::end() const has the same machine code as oldscape::option::IOption::GetName() const

} // namespace jag::graphics

namespace jag::oldscape {
    // 0x1000778c0
    void DoCommand_Prefs(OSClientConsole&, eastl::fixed_vector<StringView, 4ul> const&)::$_86::operator()(
        const option::IOption& iOption) const {
        uint8_t local_150[296];

        if (iOption.HasFlags(2) == '\0') {
            (iOption._vptr[2]._x7e___2)(local_150, iOption, 16777215);
        }
    }

} // namespace jag::oldscape

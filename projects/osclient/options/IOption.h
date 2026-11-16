// projects/osclient/options/IOption.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::option {
    class IOption {
    public:
        // virtual methods in vtable order
        virtual ~IOption();
        GetOwningStore();
        IOption(OptionStore&, char const*, OptionFlags);
        long GetName() const;
        bool HasFlags(OptionFlags) const;

        // data members, from how the methods use this: 32 bytes
        undefined* field_0;   // offset 0, vtable pointer
        OptionStore* field_8; // offset 8
        long m_name;          // offset 16
        undefined4 field_24;  // offset 24
        char _unknown_28[4];
    };

    // 0x100023f30, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // IOption::GetName() const
    /* Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
   std::default_delete<LoadingScreenScript::AnimLayer> >, eastl::allocator>::data() */

    undefined8
    jag::Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
               eastl::allocator>::
        data(Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>* this) {
        return *(undefined8*)(this + 16);
    }

    // 0x1000778b0, 16 bytes, inline, placed by class name and debug map
    // IOption::HasFlags(OptionFlags) const
    bool IOption::HasFlags(uint param_2) {
        return (field_24 & param_2) != 0;
    }

} // namespace jag::oldscape::option

namespace jag::game::option {
    class IOption {
    public:
        // virtual methods in vtable order
        virtual ~IOption();
        IsAvailable(OptionClient) const;
        IOption();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x1005faf60, 32 bytes, base-object constructor, inline, placed by class name
    // IOption::IOption()
    void IOption::IOption() {
        field_0 = PTR_vtable_100ee85c0 + 16;
    }

} // namespace jag::game::option

namespace jag::graphics {
    // 0x100023f30: the linker folded this into oldscape::option::IOption::GetName() const, which has identical code
    TextRunSlice::end() const;

} // namespace jag::graphics

namespace jag::oldscape {
    // 0x1000778c0, 176 bytes, inline, placed by debug map only (low confidence)
    // DoCommand_Prefs(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)::$_86::operator()(option::IOption const&) const
    /* DoCommand_Prefs(OSClientConsole&,
   eastl::fixed_vector<StringView, 4ul, true, eastl::allocator>
   const&)::$_86::TEMPNAMEPLACEHOLDERVALUE(option::IOption const&) const */

    void oldscape::DoCommand_Prefs(
        OSClientConsole&,
        eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)::$_86::operator()(IOption* param_1) {
        undefined8 uVar1;
        undefined8 uVar3;
        fixed_string<char, 40, true, eastl::allocator> local_150[296];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_1->HasFlags(2) == '\0') {
            (**(code**)(param_1->field_0 + 40))(local_150, param_1, 16777215);
            uVar1 = *(undefined8*)this;
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            console::Console::AddMessage(uVar1, 2, uVar3);
            /* WARNING: Subroutine does not return */
            eastl::fixed_string<char, 40, true, eastl::allocator>::~fixed_string(local_150);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::oldscape

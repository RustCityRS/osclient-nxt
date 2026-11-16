// libs/game/runetek5/config/iftype/componentproperties/Hook.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::game {
    class Hook {
    public:
        SetScriptID(unsigned int);
        GetScriptID() const;
        Hook(Hook const&);
        Hook* operator=(Hook const&);
        Hook(unsigned int);
        void SetArg(int, VarValue const&);
        Hook();
        ~Hook();
        Hook(Hook&&);
        Hook* operator=(Hook&&);
        bool IsInit() const;

        // data members, from how the methods use this: 16 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[12];
    };

    // 0x10000c2f0: the linker folded this into math::Rect<int>::SetX(int), which has identical code
    Hook::SetScriptID(unsigned int);

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    Hook::GetScriptID() const;

    // 0x1003b8730, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // Hook::Hook(Hook const&): jumps straight to the base-object constructor

    // 0x1003b8770, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // Hook::Hook(Hook const&)
    void Hook::Hook(Hook* param_1) {
        field_0 = param_1->field_0;
        new (&field_8, (fixed_vector*)&param_1->field_8) eastl::fixed_vector<VarValue, 6ul, true, eastl::allocator>();
    }

    // 0x100536350, 48 bytes, inline, placed by class name
    // Hook::operator=(Hook const&)
    /* Hook::TEMPNAMEPLACEHOLDERVALUE(Hook const&) */

    Hook* Hook::operator=(Hook* param_1) {
        field_0 = param_1->field_0;
        eastl::fixed_vector<VarValue, 6ul, true, eastl::allocator>::operator=(
            (fixed_vector<VarValue, 6ul, true, eastl::allocator>*)&field_8, (fixed_vector*)&param_1->field_8);
        return this;
    }

    // 0x100547270, 16 bytes, complete-object constructor, inline, placed by class name
    // Hook::Hook(unsigned int): jumps straight to the base-object constructor

    // 0x100547280, 48 bytes, inline, placed by class name
    // Hook::SetArg(int, VarValue const&)
    void Hook::SetArg(int param_1, VarValue* param_2) {
        VarValue* this_00;

        this_00 = (VarValue*)eastl::
            vector<VarValue, eastl::fixed_vector_allocator<32ul, 6ul, 8ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<VarValue, eastl::fixed_vector_allocator<32ul, 6ul, 8ul, 0ul, true, eastl::allocator>>*)&field_8,
                (long)param_1);
        VarValue::operator=(this_00, param_2);
    }

    // 0x1005495d0, 32 bytes, base-object constructor, inline, placed by class name
    // Hook::Hook(unsigned int)
    void Hook::Hook(uint param_1) {
        field_0 = 4294967294;
        new (&field_8, (ulong)param_1) eastl::fixed_vector<VarValue, 6ul, true, eastl::allocator>();
    }

    // 0x1008f66e0, 16 bytes, complete-object constructor, inline, placed by class name
    // Hook::Hook(): jumps straight to the base-object constructor

    // 0x1008f6730, 16 bytes, complete-object destructor, inline, placed by class name
    // Hook::~Hook(): jumps straight to the base-object destructor

    // 0x1008f6870, 16 bytes, complete-object constructor, inline, placed by class name
    // Hook::Hook(Hook&&): jumps straight to the base-object constructor

    // 0x100902ac0, 32 bytes, base-object constructor, inline, placed by class name
    // Hook::Hook()
    void Hook::Hook() {
        field_0 = 4294967294;
        new (&field_8) eastl::fixed_vector<VarValue, 6ul, true, eastl::allocator>();
    }

    // 0x100903240, 16 bytes, base-object destructor, inline, placed by class name
    // Hook::~Hook()
    void Hook::~Hook() {
        (&field_8)->~fixed_vector();
    }

    // 0x100903270, 32 bytes, base-object constructor, inline, placed by class name
    // Hook::Hook(Hook&&)
    void Hook::Hook(Hook* param_1) {
        field_0 = param_1->field_0;
        new (&field_8, (fixed_vector*)&param_1->field_8) eastl::fixed_vector<VarValue, 6ul, true, eastl::allocator>();
    }

    // 0x1009046e0, 48 bytes, inline, placed by class name
    // Hook::operator=(Hook&&)
    /* Hook::TEMPNAMEPLACEHOLDERVALUE(Hook&&) */

    Hook* Hook::operator=(Hook* param_1) {
        field_0 = param_1->field_0;
        eastl::fixed_vector<VarValue, 6ul, true, eastl::allocator>::operator=(
            (fixed_vector<VarValue, 6ul, true, eastl::allocator>*)&field_8, (fixed_vector*)&param_1->field_8);
        return this;
    }

    // 0x100904770, 16 bytes, inline, placed by class name
    // Hook::IsInit() const
    bool Hook::IsInit() {
        return field_0 != -2;
    }

} // namespace jag::game

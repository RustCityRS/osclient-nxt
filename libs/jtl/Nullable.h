// libs/jtl/Nullable.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    template <typename...> // 6 instantiations, e.g. <bool>, <eastl::string >, <int>
    class Nullable {
    public:
        bool IsNull();
        Nullable(Nullable<bool>&);
        Nullable();
        IsNull();
        void SetNull();
        Nullable(Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>&&);
        ~Nullable();
        Nullable(Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>);
        Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>*
        operator=(Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>&&);
        Nullable<int>(int&&);
        Nullable(int);
        Nullable<unsigned int>(unsigned int&&);
        Nullable(long long);
        Nullable(eastl::string);
        Nullable(oldscape::LocLayer);
    };

    // 0x100121be0, 16 bytes, inline, placed by class name and debug map
    // Nullable<bool>::IsNull()
    /* Nullable<oldscape::LocLayer>::IsNull() */

    bool Nullable<oldscape::LocLayer>::IsNull() {
        return (bool)this[1];
    }

    // 0x1001319e0, 16 bytes, complete-object constructor, inline, placed by class name
    // Nullable<bool>::Nullable(Nullable<bool>&): jumps straight to the base-object constructor

    // 0x1001319f0, 16 bytes, base-object constructor, inline, placed by class name
    // Nullable<bool>::Nullable(Nullable<bool>&)
    void Nullable<bool>::Nullable(Nullable* param_1) {
        *(undefined2*)this = *(undefined2*)param_1;
    }

    // 0x10014d7e0, 16 bytes, complete-object constructor, inline, placed by class name
    // Nullable<bool>::Nullable(): jumps straight to the base-object constructor

    // 0x10014d7f0, 16 bytes, base-object constructor, inline, placed by class name
    // Nullable<bool>::Nullable()
    /* Nullable<oldscape::LocLayer>::Nullable() */

    void Nullable<oldscape::LocLayer>::Nullable() {
        this[1] = (Nullable<oldscape::LocLayer>)1;
    }

    // 0x100191340, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Nullable<int>::IsNull()
    /* game::EnvironmentOverrideParam<int>::IsActive() const */

    bool game::EnvironmentOverrideParam<int>::IsActive() {
        return (bool)this[4];
    }

    // 0x1001acac0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator> >::IsNull()
    /* game::StaticPointLight::GetLightLevelsBelow() const */

    byte game::StaticPointLight::GetLightLevelsBelow() {
        return m_lightLevelsBelow;
    }

    // 0x1001acbd0, 80 bytes, inline, placed by class name
    // Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator> >::SetNull()
    void Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>::SetNull(
        Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>* this) {
        Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator> local_30[24];

        Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>::Array(local_30);
        Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>::operator=(
            (Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>*)this, (Array*)local_30);
        local_30->~Array();
        this[24] = (Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>)1;
    }

    // 0x1001acf70, 16 bytes, complete-object constructor, inline, placed by class name
    // Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator> >::Nullable(Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator> >&&): jumps straight to the base-object constructor

    // 0x1001acf80, 32 bytes, base-object constructor, inline, placed by class name
    // Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator> >::Nullable(Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator> >&&)
    void Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>::Nullable(
        Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>* this, Nullable* param_1) {
        new (this) Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>(param_1);
        *(Nullable*)(this + 24) = param_1[24];
    }

    // 0x1001ad040, 16 bytes, complete-object constructor, inline, placed by class name
    // Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator> >::Nullable(): jumps straight to the base-object constructor

    // 0x1001ad050, 32 bytes, base-object constructor, inline, placed by class name
    // Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator> >::Nullable()
    void Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>::Nullable(
        Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>* this) {
        new (this) Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>();
        this[24] = (Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>)1;
    }

    // 0x1001ad0f0, 16 bytes, complete-object destructor, inline, placed by class name
    // Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator> >::~Nullable(): jumps straight to the base-object destructor

    // 0x1001ad100, 16 bytes, base-object destructor, inline, placed by class name
    // Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator> >::~Nullable()
    void Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>::~Nullable(
        Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>* this) {
        ~Array();
    }

    // 0x1001ae1e0, 16 bytes, complete-object constructor, inline, placed by class name
    // Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator> >::Nullable(Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>): jumps straight to the base-object constructor

    // 0x1001ae1f0, 48 bytes, inline, placed by class name
    // Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator> >::operator=(Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator> >&&)
    /* Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>
   >::TEMPNAMEPLACEHOLDERVALUE(Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>,
   eastl::allocator> >&&) */

    Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>*
    Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>::operator=(
        Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>* this, Nullable* param_1) {
        Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>::operator=(
            (Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>*)this, (Array*)param_1);
        *(Nullable*)(this + 24) = param_1[24];
        return this;
    }

    // 0x1001ae220, 16 bytes, complete-object constructor, inline, placed by class name
    // Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator> >::Nullable<int>(int&&): jumps straight to the base-object constructor

    // 0x1001ae330, 112 bytes, base-object constructor, inline, placed by class name
    // Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator> >::Nullable<int>(int&&)
    void Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>::Nullable<int>(
        Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>* this, int* param_1) {
        Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator> local_38[24];

        new (this) Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>();
        Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>::Array(local_38, (long)*param_1);
        Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>::operator=(
            (Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>*)this, (Array*)local_38);
        local_38->~Array();
        this[24] = (Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>)0;
    }

    // 0x1001ae3e0, 64 bytes, base-object constructor, inline, placed by class name
    // Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator> >::Nullable(Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>)
    void Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>::Nullable(
        Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>* this, Array* param_2) {
        new (this) Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>();
        Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>::operator=(
            (Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>*)this, param_2);
        this[24] = (Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>)0;
    }

    // 0x10025edb0, 16 bytes, complete-object constructor, inline, placed by class name
    // Nullable<int>::Nullable(): jumps straight to the base-object constructor

    // 0x10025ee50, 16 bytes, complete-object constructor, inline, placed by class name
    // Nullable<int>::Nullable(int): jumps straight to the base-object constructor

    // 0x10025ef40, 16 bytes, complete-object constructor, inline, placed by class name
    // Nullable<int>::Nullable<unsigned int>(unsigned int&&): jumps straight to the base-object constructor

    // 0x10025f000, 16 bytes, complete-object constructor, inline, placed by class name
    // Nullable<long long>::Nullable(): jumps straight to the base-object constructor

    // 0x10025f010, 16 bytes, complete-object constructor, inline, placed by class name
    // Nullable<long long>::Nullable(long long): jumps straight to the base-object constructor

    // 0x10025f0f0, 16 bytes, complete-object constructor, inline, placed by class name
    // Nullable<eastl::string >::Nullable(): jumps straight to the base-object constructor

    // 0x10025f100, 16 bytes, complete-object constructor, inline, placed by class name
    // Nullable<eastl::string >::Nullable(eastl::string): jumps straight to the base-object constructor

    // 0x10027c740, 16 bytes, base-object constructor, inline, placed by class name
    // Nullable<int>::Nullable()
    void Nullable<int>::Nullable() {
        this[4] = (Nullable<int>)1;
    }

    // 0x10027c750, 16 bytes, base-object constructor, inline, placed by class name
    // Nullable<int>::Nullable(int)
    void Nullable<int>::Nullable(int param_1) {
        *(int*)this = param_1;
        this[4] = (Nullable<int>)0;
    }

    // 0x10027c760, 16 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Nullable<int>::Nullable<unsigned int>(unsigned int&&)
    /* eastl::pair<int const, bool>::pair<int, bool, void>(eastl::pair_first_construct_t, int const&) */

    void eastl::pair<int const, bool>::pair<int, bool, void>(pair<int const, bool>* this, undefined4* param_2) {
        *(undefined4*)this = *param_2;
        this[4] = (pair<int const, bool>)0;
    }

    // 0x10027c770, 16 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Nullable<long long>::Nullable()
    /* MyDocument::DoOpen() */

    void MyDocument::DoOpen() {
        this[8] = (MyDocument)1;
    }

    // 0x10027c780, 16 bytes, base-object constructor, inline, placed by class name
    // Nullable<long long>::Nullable(long long)
    void Nullable<long long>::Nullable(longlong param_1) {
        *(longlong*)this = param_1;
        this[8] = (Nullable<long long>)0;
    }

    // 0x10027c790, 32 bytes, base-object constructor, inline, placed by class name
    // Nullable<eastl::string >::Nullable()
    void Nullable<eastl::string>::Nullable(Nullable<eastl::string>* this) {
        new (this) eastl::string();
        this[32] = (Nullable<eastl::string>)1;
    }

    // 0x10027c7b0, 64 bytes, base-object constructor, inline, placed by class name
    // Nullable<eastl::string >::Nullable(eastl::string)
    void Nullable<eastl::string>::Nullable(Nullable<eastl::string>* this, basic_string* param_2) {
        new (this) eastl::string();
        eastl::string::operator=((eastl::string*)this, param_2);
        this[32] = (Nullable<eastl::string>)0;
    }

    // 0x10030a680, 16 bytes, complete-object constructor, inline, placed by class name
    // Nullable<oldscape::LocLayer>::Nullable(oldscape::LocLayer): jumps straight to the base-object constructor

    // 0x100333d30, 16 bytes, base-object constructor, inline, placed by class name
    // Nullable<oldscape::LocLayer>::Nullable(oldscape::LocLayer)
    /* Nullable<bool>::Nullable(bool) */

    void Nullable<bool>::Nullable(bool param_1) {
        *this = (Nullable<bool>)param_1;
        this[1] = (Nullable<bool>)0;
    }

} // namespace jag

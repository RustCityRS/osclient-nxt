// libs/game/runetek5/config/vartype/VarContainerSparse.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class VarContainerSparse {
    public:
        // virtual methods in vtable order
        virtual ~VarContainerSparse();
        virtual long GetVarValue(shared_ptr<VarType> const&) const;
        virtual void SetVarValue(shared_ptr<VarType> const&, VarValue const&);
        virtual void GetVarBitValue(shared_ptr<VarBitType> const&) const;
        virtual void SetVarBitValue(shared_ptr<VarBitType> const&, int, bool*);
        GetValues() const;
        void SetVarValueByID(int, VarValue const&);
        VarContainerSparse();
        VarContainerSparse* operator=(VarContainerSparse&&);
        void Clear();
        VarContainerSparse(VarContainerSparse&&);
        VarContainerSparse(VarContainerSparse const&);
        GetVarValueByID(int) const;

        // data members, from how the methods use this: 16 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[8];
    };

    // 0x100113790, 48 bytes, inline, placed by class name and debug map
    // VarContainerSparse::SetVarValueByID(int, VarValue const&)
    void VarContainerSparse::SetVarValueByID(int param_1, VarValue* param_2) {
        VarValue* this_00;
        int local_14;

        this_00 = (VarValue*)
            eastl::hash_map<int, VarValue, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, VarValue, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)&field_8,
                &local_14);
        VarValue::operator=(this_00, param_2);
    }

    // 0x100152e00, 16 bytes, complete-object constructor, inline, placed by class name
    // VarContainerSparse::VarContainerSparse(): jumps straight to the base-object constructor

    // 0x100152e10, 96 bytes, base-object constructor, inline, placed by class name
    // VarContainerSparse::VarContainerSparse()
    void VarContainerSparse::VarContainerSparse() {
        allocator local_20[8];

        new (this) VarDomain();
        field_0 = &PTR__VarContainerSparse_100f020e8;
        eastl::allocator::allocator(local_20, "EASTL hash_map");
        new (&field_8, local_20)
            eastl::hash_map<int, VarValue, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
    }

    // 0x1004bb3b0, 48 bytes, inline, placed by class name
    // VarContainerSparse::operator=(VarContainerSparse&&)
    /* VarContainerSparse::TEMPNAMEPLACEHOLDERVALUE(VarContainerSparse&&) */

    VarContainerSparse* VarContainerSparse::operator=(VarContainerSparse* param_1) {
        SSOBeginPtr(param_1);
        eastl::hash_map<int, VarValue, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator=(
            (hash_map<int, VarValue, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)&field_8,
            (hash_map*)&param_1->field_8);
        return this;
    }

    // 0x1004bb3e0, 16 bytes, inline, placed by class name
    // VarContainerSparse::Clear()
    void VarContainerSparse::Clear() {
        (&field_8)->clear();
    }

    // 0x1004be520, 16 bytes, complete-object constructor, inline, placed by class name
    // VarContainerSparse::VarContainerSparse(VarContainerSparse&&): jumps straight to the base-object constructor

    // 0x1004be580, 80 bytes, base-object constructor, inline, placed by class name
    // VarContainerSparse::VarContainerSparse(VarContainerSparse&&)
    void VarContainerSparse::VarContainerSparse(VarContainerSparse* param_1) {
        new (this) VarDomain();
        field_0 = &PTR__VarContainerSparse_100f020e8;
        new (&field_8, (hash_map*)&param_1->field_8)
            eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
    }

    // 0x1004bed00, 16 bytes, complete-object constructor, inline, placed by class name
    // VarContainerSparse::VarContainerSparse(VarContainerSparse const&): jumps straight to the base-object constructor

    // 0x1004bedf0, 80 bytes, base-object constructor, inline, placed by class name
    // VarContainerSparse::VarContainerSparse(VarContainerSparse const&)
    void VarContainerSparse::VarContainerSparse(VarContainerSparse* param_1) {
        new (this) VarDomain();
        field_0 = &PTR__VarContainerSparse_100f020e8;
        new (&field_8, (hash_map*)&param_1->field_8)
            eastl::hash_map<int, VarValue, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
    }

    // 0x1004d1c90, 16 bytes, complete-object destructor, inline, placed by class name
    // VarContainerSparse::~VarContainerSparse(): jumps straight to the base-object destructor

    // 0x1004d1ca0, 32 bytes, deleting destructor, inline, placed by class name
    // VarContainerSparse::~VarContainerSparse()
    void VarContainerSparse::~VarContainerSparse() {
        ~VarContainerSparse(this);
        operator_delete(this);
    }

    // 0x1004d1cc0, 80 bytes, inline, placed by class name
    // VarContainerSparse::SetVarValue(shared_ptr<VarType> const&, VarValue const&)
    void VarContainerSparse::SetVarValue(shared_ptr* param_1, VarValue* param_2) {
        GameToken* this_00;
        VarValue* this_01;
        int local_1c;

        this_00 = (GameToken*)shared_ptr<VarType>::operator->((shared_ptr<VarType>*)param_1);
        local_1c = this_00->GetStatus();
        this_01 = (VarValue*)
            eastl::hash_map<int, VarValue, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, VarValue, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)&field_8,
                &local_1c);
        VarValue::operator=(this_01, param_2);
    }

    // 0x1004d4150, 48 bytes, base-object destructor, inline, placed by class name
    // VarContainerSparse::~VarContainerSparse()
    void VarContainerSparse::~VarContainerSparse() {
        field_0 = &PTR__VarContainerSparse_100f020e8;
        (&field_8)->~hash_map();
        ~AutoSingleton();
    }

} // namespace jag::game

namespace jag {
    // 0x1001137d0, 16 bytes, inline, placed by debug map only (low confidence)
    // ShuffledPacket4::g3()
    void ShuffledPacket4::g3() {
        g3_alt3();
    }

} // namespace jag

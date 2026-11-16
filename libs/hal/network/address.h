// libs/hal/network/address.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::sock {
    class AddressBase {
    public:
        ~AddressBase();
        AddressBase();
        ulong Resolve(char const*, eastl::vector<AddressBase, eastl::allocator>&, Error*);
        GetIPAddress() const;
        AddressBase(char const*, network::IPAddress, unsigned short, int, int);
        AddressBase* operator=(AddressBase&&);
        void Clear();
        AddressBase(AddressBase&&);

        // data members, from how the methods use this: 80 bytes
        int field_0;        // offset 0
        undefined4 field_4; // offset 4
        char _unknown_8[64];
        short field_72; // offset 72
        char _unknown_74[6];
    };

    // 0x100b0d930, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // AddressBase::AddressBase(): jumps straight to the base-object constructor

    // 0x100b0eb50, 32 bytes, inline, placed by class header (inline)
    // AddressBase::GetIPAddress() const
    AddressBase* AddressBase::GetIPAddress() {
        long in_RSI;

        new (this) network::IPAddress((IPAddress*)(in_RSI + 40));
        return this;
    }

    // 0x100b10ab0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // AddressBase::AddressBase(char const*, network::IPAddress, unsigned short, int, int): jumps straight to the base-object constructor

    // 0x100b10ac0, 64 bytes, inline, placed by class header (inline)
    // AddressBase::operator=(AddressBase&&)
    /* AddressBase::TEMPNAMEPLACEHOLDERVALUE(AddressBase&&) */

    AddressBase* AddressBase::operator=(AddressBase* param_1) {
        undefined4 uVar1;

        uVar1 = param_1->field_4;
        field_0 = param_1->field_0;
        field_4 = uVar1;
        eastl::string::operator=((eastl::string*)&field_8, (basic_string*)&param_1->field_8);
        network::IPAddress::operator=((IPAddress*)&field_40, (IPAddress*)&param_1->field_40);
        field_72 = param_1->field_72;
        return this;
    }

    // 0x100b10c70, 32 bytes, inline, placed by class header (inline)
    // AddressBase::Clear()
    void AddressBase::Clear() {
        eastl::string::clear();
        field_72 = 0;
    }

    // 0x100b10df0, 80 bytes, base-object constructor, inline, placed by class header (inline)
    // AddressBase::AddressBase()
    void AddressBase::AddressBase() {
        field_0 = -1;
        field_4 = 4294967295;
        new (&field_8) eastl::string();
        new (&field_40) network::IPAddress();
        field_72 = 0;
    }

    // 0x100b11a30, 112 bytes, base-object constructor, inline, placed by class header (inline)
    // AddressBase::AddressBase(char const*, network::IPAddress, unsigned short, int, int)
    void AddressBase::AddressBase(char* param_1, IPAddress param_2, ushort param_3, int param_4, int param_5) {
        undefined6 in_register_00000012;
        undefined4 in_R9D;
        allocator local_40[12];

        field_0 = param_5;
        field_4 = in_R9D;
        eastl::allocator::allocator(local_40, "EASTL basic_string");
        new (&field_8, param_1, local_40) eastl::string();
        new (&field_40, (IPAddress*)CONCAT62(in_register_00000012) network::IPAddress(param_3));
        field_72 = (short)param_4;
    }

    // 0x100b14e40, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // AddressBase::AddressBase(AddressBase&&): jumps straight to the base-object constructor

    // 0x100b14e50, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // AddressBase::AddressBase(AddressBase&&)
    void AddressBase::AddressBase(AddressBase* param_1) {
        undefined4 uVar1;

        uVar1 = param_1->field_4;
        field_0 = param_1->field_0;
        field_4 = uVar1;
        new (&field_8, (basic_string*)&param_1->field_8) eastl::string();
        new (&field_40, (IPAddress*)&param_1->field_40) network::IPAddress();
        field_72 = param_1->field_72;
    }

} // namespace jag::sock

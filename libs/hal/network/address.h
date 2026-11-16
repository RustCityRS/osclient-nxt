// libs/hal/network/address.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::sock {
    class AddressBase {
    public:
        ~AddressBase();
        AddressBase();
        unsigned long Resolve(const char* str, eastl::vector<AddressBase>& addressBases, Error* error);
        network::IPAddress GetIPAddress() const;
        AddressBase(const char* str, network::IPAddress ipAddress, unsigned short arg3, int arg4, int arg5);
        AddressBase* operator=(AddressBase&& addressBase);
        void Clear();
        AddressBase(AddressBase&& addressBase);

    private:
        int field_0;
        int field_4;
        uint8_t _unknown_8[64];
        short field_72;
        uint8_t _unknown_74[6];
    };

    // 0x100b0eb50
    network::IPAddress AddressBase::GetIPAddress() const {
        return network::IPAddress(field_40);
    }

    // 0x100b10ac0
    AddressBase* AddressBase::operator=(AddressBase&& addressBase) {
        int iVar1 = addressBase.field_4;
        field_0 = addressBase.field_0;
        field_4 = iVar1;
        field_8 = &addressBase.field_8;
        field_40 = addressBase.field_40;
        field_72 = addressBase.field_72;
        return this;
    }

    // 0x100b10c70
    void AddressBase::Clear() {
        field_8.clear();
        field_72 = 0;
    }

    // 0x100b10df0
    AddressBase::AddressBase() : field_0(-1), field_4(-1), field_72(0) {}

    // 0x100b11a30
    AddressBase::AddressBase(const char* str, network::IPAddress ipAddress, unsigned short arg3, int arg4, int arg5) {
        uint16_t in_register_0000000a;

        uint32_t local_34 = (((uint32_t)in_register_0000000a << 16) | (uint16_t)arg3);
        field_0 = arg4;
        field_4 = arg5;
        new (&field_8) eastl::string(str);
        new (&field_40) network::IPAddress(*ipAddress);
        field_72 = (short)local_34;
    }

    // 0x100b14e50
    AddressBase::AddressBase(AddressBase&& addressBase) {
        int iVar1 = addressBase.field_4;
        field_0 = addressBase.field_0;
        field_4 = iVar1;
        new (&field_8) eastl::string(addressBase.field_8);
        new (&field_40) network::IPAddress(addressBase.field_40);
        field_72 = addressBase.field_72;
    }

} // namespace jag::sock

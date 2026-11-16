// libs/console/ConsoleArgs.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::console {
    class VarAny {
    public:
        ~VarAny();
        VarAny* GetTypeName() const;
        VarAny* Decode(StringView stringView);
        bool Valid() const;
        VarAny();
        VarAny* operator=(const VarAny& varAny);
        void Encode<eastl::string>(eastl::string& str) const;
        VarAny* operator=(VarAny&& varAny);
        VarAny(VarAny&& varAny);
        VarAny(const VarAny& varAny);

    private:
        uint8_t _unknown_0[72];
        uint64_t field_72;
        uint64_t field_80;
        uint64_t field_88;
        uint8_t field_96[7];
        uint8_t field_103;
    };

    // 0x1006e0db0
    VarAny* VarAny::Decode(StringView stringView) {
        VarAny();
        fixed_vector<unsigned char, 128ul> local_d0;
        Base64::Instance()->DecodeString<eastl::fixed_vector<unsigned char, 128ul>, StringView>(local_d0, *stringView);
        auto puVar2 = local_d0.HeapBeginPtr();
        unsigned long arg2 = local_d0.size();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>> local_f0(puVar2, arg2);
        local_f0.gStringNoConversion<32, true>(*this, false);
        uint8_t bVar1 = local_f0.g1();
        field_103 = bVar1;
        puVar2 = (unsigned char*)field_72.data();
        local_f0.gArrayBuffer(puVar2, 0, (unsigned long)bVar1);
        return this;
    }

    // 0x1006e0ee0
    bool VarAny::Valid() const {
        bool bVar2;

        if (empty() == '\0') {
            bVar2 = field_103 != 0;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

} // namespace jag::console

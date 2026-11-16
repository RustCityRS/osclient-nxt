// libs/math/BigInteger.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::math {
    class BigInteger {
    public:
        BigInteger(const char* str, int arg2);
        ~BigInteger();
        void GetByteSize() const;
        BigInteger(const unsigned char* arg1, unsigned long arg2);
        void PowMod(const BigInteger& bigInteger1, const BigInteger& bigInteger2);
        auto Get();
        BigInteger();
        BigInteger(BigInteger&& bigInteger);

    private:
        void* field_0;
    };

    // 0x100196e60
    BigInteger::BigInteger(const char* str, int arg2) : field_0(nullptr) {
        void* pvVar1 = (void*)operator new(24);
        field_0 = pvVar1;
        _mp_init(pvVar1);
        _mp_read_radix(field_0, str, arg2);
    }

    // 0x100196eb0
    BigInteger::~BigInteger() {
        if (field_0 != nullptr) {
            _mp_clear();
            if (field_0 != nullptr) {
                operator delete(field_0);
            }
            field_0 = nullptr;
        }
    }

    // 0x1001a65d0
    void BigInteger::GetByteSize() const {
        _mp_unsigned_bin_size(field_0);
    }

    // 0x1001a65f0
    void BigInteger::PowMod(const BigInteger& bigInteger1, const BigInteger& bigInteger2) {
        uint64_t* in_RCX;
        BigInteger local_30;

        BigInteger(&local_30);
        if (_mp_exptmod(bigInteger1.field_0, bigInteger2.field_0, *in_RCX, local_30.field_0) != 0) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/BigInteger.h",
                            153, "BigInteger::PowMod failed");
        }
        BigInteger(local_30);
        ~BigInteger(&local_30);
        return (BigInteger)this;
    }

    // 0x1001a6690
    auto BigInteger::Get() {
        void* pvVar1;
        int iVar2;
        uint64_t uVar3;
        basic_string<char, BucketAllocatorEASTL> local_38;

        if (field_0 == nullptr) {
            auto result;
        } else {
            local_38 = eastl::basic_string<char, BucketAllocatorEASTL>();
            iVar2 = _mp_unsigned_bin_size(field_0);
            local_38.resize((long)(iVar2 + 1));
            pvVar1 = field_0;
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            _mp_to_unsigned_bin(pvVar1, uVar3);
            local_38.force_size((long)iVar2);
            new (&result) eastl::basic_string<char, BucketAllocatorEASTL>(local_38);
        }
        return result;
    }

    // 0x1001a6740
    BigInteger::BigInteger(const unsigned char* arg1, unsigned long arg2) : field_0(nullptr) {
        void* pvVar1 = (void*)operator new(24);
        field_0 = pvVar1;
        _mp_init(pvVar1);
        _mp_read_unsigned_bin(field_0, arg1, arg2 & 4294967295);
    }

    // 0x1001a67b0
    BigInteger::BigInteger() : field_0(nullptr) {
        void* pvVar1 = (void*)operator new(24);
        field_0 = pvVar1;
        _mp_init(pvVar1);
    }

    // 0x1001a67e0
    BigInteger::BigInteger(BigInteger&& bigInteger) : field_0(bigInteger.field_0) {
        bigInteger.field_0 = nullptr;
    }

} // namespace jag::math

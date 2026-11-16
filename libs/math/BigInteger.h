// libs/math/BigInteger.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::math {
    class BigInteger {
    public:
        BigInteger(char const*, int);
        ~BigInteger();
        void GetByteSize() const;
        BigInteger(unsigned char const*, unsigned long);
        PowMod(BigInteger const&, BigInteger const&);
        Get();
        BigInteger();
        BigInteger(BigInteger&&);

        // data members, from how the methods use this: 8 bytes
        void* field_0; // offset 0
    };

    // 0x10017bf30, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // BigInteger::BigInteger(char const*, int): jumps straight to the base-object constructor

    // 0x10017bf40, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // BigInteger::~BigInteger(): jumps straight to the base-object destructor

    // 0x100196e60, 80 bytes, base-object constructor, inline, placed by class name
    // BigInteger::BigInteger(char const*, int)
    void BigInteger::BigInteger(char* param_1, int param_2) {
        void* pvVar1;

        field_0 = (void*)0;
        pvVar1 = operator_new(24);
        field_0 = pvVar1;
        _mp_init(pvVar1);
        _mp_read_radix(field_0, param_1, param_2);
    }

    // 0x100196eb0, 64 bytes, base-object destructor, inline, placed by class name
    // BigInteger::~BigInteger()
    void BigInteger::~BigInteger() {
        if (field_0 != (void*)0) {
            _mp_clear();
            if (field_0 != (void*)0) {
                operator_delete(field_0);
            }
            field_0 = (void*)0;
        }
    }

    // 0x1001a65d0, 16 bytes, inline, placed by class name
    // BigInteger::GetByteSize() const
    void BigInteger::GetByteSize() {
        _mp_unsigned_bin_size(field_0);
    }

    // 0x1001a65e0, 16 bytes, complete-object constructor, inline, placed by class name
    // BigInteger::BigInteger(unsigned char const*, unsigned long): jumps straight to the base-object constructor

    // 0x1001a65f0, 160 bytes, inline, placed by class name
    // BigInteger::PowMod(BigInteger const&, BigInteger const&)
    BigInteger* BigInteger::PowMod(BigInteger* param_1, BigInteger* param_2) {
        undefined8* in_RCX;
        BigInteger local_30;

        BigInteger(&local_30);
        if (_mp_exptmod(param_1->field_0, param_2->field_0, *in_RCX, local_30.field_0) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/BigInteger.h",
                            153, "BigInteger::PowMod failed");
        }
        BigInteger(this, &local_30);
        ~BigInteger(&local_30);
        return this;
    }

    // 0x1001a6690, 176 bytes, inline, placed by class name
    // BigInteger::Get()
    BigInteger* BigInteger::Get() {
        long lVar1;
        int iVar2;
        undefined8 uVar3;
        long* in_RSI;
        basic_string<char, BucketAllocatorEASTL> local_38[24];

        if (*in_RSI == 0) {
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        } else {
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
            iVar2 = _mp_unsigned_bin_size(*in_RSI);
            eastl::basic_string<char, BucketAllocatorEASTL>::resize(local_38, (long)(iVar2 + 1));
            lVar1 = *in_RSI;
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            _mp_to_unsigned_bin(lVar1, uVar3);
            eastl::basic_string<char, BucketAllocatorEASTL>::force_size(local_38, (long)iVar2);
            new (this) eastl::basic_string<char, BucketAllocatorEASTL>();
            eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_38);
        }
        return this;
    }

    // 0x1001a6740, 80 bytes, base-object constructor, inline, placed by class name
    // BigInteger::BigInteger(unsigned char const*, unsigned long)
    void BigInteger::BigInteger(uchar* param_1, ulong param_2) {
        void* pvVar1;

        field_0 = (void*)0;
        pvVar1 = operator_new(24);
        field_0 = pvVar1;
        _mp_init(pvVar1);
        _mp_read_unsigned_bin(field_0, param_1, param_2 & 4294967295);
    }

    // 0x1001a6790, 16 bytes, complete-object constructor, inline, placed by class name
    // BigInteger::BigInteger(): jumps straight to the base-object constructor

    // 0x1001a67a0, 16 bytes, complete-object constructor, inline, placed by class name
    // BigInteger::BigInteger(BigInteger&&): jumps straight to the base-object constructor

    // 0x1001a67b0, 48 bytes, base-object constructor, inline, placed by class name
    // BigInteger::BigInteger()
    void BigInteger::BigInteger() {
        void* pvVar1;

        field_0 = (void*)0;
        pvVar1 = operator_new(24);
        field_0 = pvVar1;
        _mp_init(pvVar1);
    }

    // 0x1001a67e0, 32 bytes, base-object constructor, inline, placed by class name
    // BigInteger::BigInteger(BigInteger&&)
    void BigInteger::BigInteger(BigInteger* param_1) {
        field_0 = param_1->field_0;
        param_1->field_0 = (void*)0;
    }

} // namespace jag::math

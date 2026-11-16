// libs/hal/network/IPAddress.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.network

namespace jag::network {
    class IPAddress {
    public:
        // virtual methods in vtable order
        virtual ~IPAddress();
        IPAddress();
        void Clear();
        IPAddress* CreateFromAddrInfo(addrinfo const*);
        IPAddress* CreateV4(unsigned int);
        IPAddress* CreateV6(unsigned short const*);
        asString() const;
        IPAddress* operator=(IPAddress const&);
        IPAddress(IPAddress const&);
        ulong operator<(IPAddress const&) const;
        bool isV6();

        // data members, from how the methods use this: 36 bytes
        undefined** field_0; // offset 0, vtable pointer
        int field_8;         // offset 8
        ushort field_12;     // offset 12
        ushort field_14;     // offset 14
        ushort field_16;     // offset 16
        ushort field_18;     // offset 18
        ushort field_20;     // offset 20
        ushort field_22;     // offset 22
        ushort field_24;     // offset 24
        ushort field_26;     // offset 26
        ushort field_28;     // offset 28
        char _unknown_30[6];
    };

    // 0x100b0ed60, 48 bytes, inline, placed by class name and debug map
    // IPAddress::Clear()
    void IPAddress::Clear() {
        ushort local_a;

        local_a = 0;
        std::fill<unsigned short*, unsigned short>(&field_12, &field_28, &local_a);
    }

    // 0x100b0ee30, 48 bytes, inline, placed by class name and debug map
    // IPAddress::CreateV4(unsigned int)
    IPAddress* IPAddress::CreateV4(uint param_1) {
        IPAddress(this);
        field_8 = 0;
        field_12 = (short)param_1;
        field_14 = (short)(param_1 >> 16);
        return this;
    }

    // 0x100b0ee60, 64 bytes, inline, placed by class name and debug map
    // IPAddress::CreateV6(unsigned short const*)
    IPAddress* IPAddress::CreateV6(ushort* param_1) {
        IPAddress(this);
        field_8 = 1;
        std::copy<unsigned short const*, unsigned short*>(param_1, param_1 + 8, &field_12);
        return this;
    }

    // 0x100b0f770, 32 bytes, inline, placed by class name
    // IPAddress::operator=(IPAddress const&)
    /* IPAddress::TEMPNAMEPLACEHOLDERVALUE(IPAddress const&) */

    IPAddress* IPAddress::operator=(IPAddress* param_1) {
        ushort uVar1;
        ushort uVar2;
        ushort uVar3;
        ushort uVar4;
        ushort uVar5;
        ushort uVar6;

        uVar1 = param_1->field_26;
        field_24 = param_1->field_24;
        field_26 = uVar1;
        uVar1 = param_1->field_12;
        uVar2 = param_1->field_14;
        uVar3 = param_1->field_16;
        uVar4 = param_1->field_18;
        uVar5 = param_1->field_20;
        uVar6 = param_1->field_22;
        field_8 = param_1->field_8;
        field_12 = uVar1;
        field_14 = uVar2;
        field_16 = uVar3;
        field_18 = uVar4;
        field_20 = uVar5;
        field_22 = uVar6;
        return this;
    }

    // 0x100b0f880, 16 bytes, complete-object constructor, inline, placed by class name
    // IPAddress::IPAddress(IPAddress const&): jumps straight to the base-object constructor

    // 0x100b11a00, 32 bytes, base-object constructor, inline, placed by class name
    // IPAddress::IPAddress(IPAddress const&)
    void IPAddress::IPAddress(IPAddress* param_1) {
        ushort uVar1;
        ushort uVar2;
        ushort uVar3;
        ushort uVar4;
        ushort uVar5;
        ushort uVar6;

        field_0 = &PTR__IPAddress_100f25328;
        uVar1 = param_1->field_12;
        uVar2 = param_1->field_14;
        uVar3 = param_1->field_16;
        uVar4 = param_1->field_18;
        uVar5 = param_1->field_20;
        uVar6 = param_1->field_22;
        field_8 = param_1->field_8;
        field_12 = uVar1;
        field_14 = uVar2;
        field_16 = uVar3;
        field_18 = uVar4;
        field_20 = uVar5;
        field_22 = uVar6;
        uVar1 = param_1->field_26;
        field_24 = param_1->field_24;
        field_26 = uVar1;
    }

    // 0x100b15020, 176 bytes, inline, placed by class name
    // IPAddress::operator<(IPAddress const&) const
    /* IPAddress::TEMPNAMEPLACEHOLDERVALUE(IPAddress const&) const */

    ulong IPAddress::operator<(IPAddress* param_1) {
        uint uVar1;
        int iVar2;
        uint uVar3;
        undefined8 unaff_RBX;
        undefined7 uVar5;
        ulong uVar4;

        iVar2 = field_8;
        uVar5 = (undefined7)((ulong)unaff_RBX >> 8);
        if (iVar2 == param_1->field_8) {
            if (iVar2 == 1) {
                uVar4 = CONCAT71(uVar5, 1);
                if ((((param_1->field_12 <= field_12) && (param_1->field_14 <= field_14)) &&
                     (param_1->field_16 <= field_16)) &&
                    (((param_1->field_18 <= field_18 && (param_1->field_20 <= field_20)) &&
                      ((param_1->field_22 <= field_22 && (param_1->field_24 <= field_24)))))) {
                    uVar4 = CONCAT71(uVar5, field_26 < param_1->field_26);
                }
            } else {
                if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways(
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/IPAddress.h",
                        156, "Unknow IP type");
                }
                uVar3._0_2_ = field_12;
                uVar3._2_2_ = field_14;
                uVar1._0_2_ = param_1->field_12;
                uVar1._2_2_ = param_1->field_14;
                uVar4 = CONCAT71(uVar5, uVar3 < uVar1);
            }
        } else {
            uVar4 = CONCAT71(uVar5, iVar2 < param_1->field_8);
        }
        return uVar4 & 4294967295;
    }

    // 0x100b162f0, 16 bytes, inline, placed by class name and debug map
    // IPAddress::isV6()
    bool IPAddress::isV6() {
        return field_8 == 1;
    }

    // 0x100b16620, 64 bytes, placed by debug map only (low confidence)
    // in_cksum(unsigned short*, unsigned int)
    uint in_cksum(ushort* param_1, uint param_2) {
        uint uVar1;
        long lVar2;

        lVar2 = 0;
        uVar1 = 0;
        do {
            uVar1 = uVar1 + *(ushort*)((long)param_1 + lVar2);
            lVar2 = lVar2 + 2;
        } while ((int)lVar2 != 64);
        uVar1 = (uVar1 & 65535) + (uVar1 >> 16);
        return ~((uVar1 >> 16) + uVar1) & 65535;
    }

    // 0x100b16bf0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100b16c30, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.2
    void ___cxx_global_var_init_2() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100b16c70, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.3
    void ___cxx_global_var_init_3() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100b16cb0, 54 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.4
    void ___cxx_global_var_init_4() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

} // namespace jag::network

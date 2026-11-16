// libs/hal/network/IPAddress.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.network

namespace jag::network {
    class IPAddress {
    public:
        // virtual methods in vtable order
        virtual ~IPAddress();
        IPAddress();
        void Clear();
        auto CreateFromAddrInfo(const addrinfo* addrinfo);
        IPAddress* CreateV4(unsigned int arg1);
        IPAddress* CreateV6(const unsigned short* arg1);
        auto asString() const;
        IPAddress* operator=(const IPAddress& ipAddress);
        IPAddress(const IPAddress& ipAddress);
        unsigned long operator<(const IPAddress& ipAddress) const;
        bool isV6();

    private:
        int field_8;
        unsigned short field_12;
        unsigned short field_14;
        unsigned short field_16;
        unsigned short field_18;
        unsigned short field_20;
        unsigned short field_22;
        unsigned short field_24;
        unsigned short field_26;
        unsigned short field_28;
        uint8_t _unknown_30[6];
    };

    // 0x100b0ed60
    void IPAddress::Clear() {
        std::fill<unsigned short*, unsigned short>(&field_12, &field_28, 0);
    }

    // 0x100b0ee30
    IPAddress* IPAddress::CreateV4(unsigned int arg1) {
        IPAddress();
        field_8 = 0;
        field_12 = (short)arg1;
        field_14 = (short)(arg1 >> 16);
        return this;
    }

    // 0x100b0ee60
    IPAddress* IPAddress::CreateV6(const unsigned short* arg1) {
        IPAddress();
        field_8 = 1;
        std::copy<unsigned short const*, unsigned short*>(arg1, arg1 + 8, &field_12);
        return this;
    }

    // 0x100b0f770
    IPAddress* IPAddress::operator=(const IPAddress& ipAddress) {
        unsigned short uVar1 = ipAddress.field_26;
        field_24 = ipAddress.field_24;
        field_26 = uVar1;
        uVar1 = ipAddress.field_12;
        unsigned short uVar2 = ipAddress.field_14;
        unsigned short uVar3 = ipAddress.field_16;
        unsigned short uVar4 = ipAddress.field_18;
        unsigned short uVar5 = ipAddress.field_20;
        unsigned short uVar6 = ipAddress.field_22;
        field_8 = ipAddress.field_8;
        field_12 = uVar1;
        field_14 = uVar2;
        field_16 = uVar3;
        field_18 = uVar4;
        field_20 = uVar5;
        field_22 = uVar6;
        return this;
    }

    // 0x100b11a00
    IPAddress::IPAddress(const IPAddress& ipAddress) {
        unsigned short uVar1 = ipAddress.field_12;
        unsigned short uVar2 = ipAddress.field_14;
        unsigned short uVar3 = ipAddress.field_16;
        unsigned short uVar4 = ipAddress.field_18;
        unsigned short uVar5 = ipAddress.field_20;
        unsigned short uVar6 = ipAddress.field_22;
        field_8 = ipAddress.field_8;
        field_12 = uVar1;
        field_14 = uVar2;
        field_16 = uVar3;
        field_18 = uVar4;
        field_20 = uVar5;
        field_22 = uVar6;
        uVar1 = ipAddress.field_26;
        field_24 = ipAddress.field_24;
        field_26 = uVar1;
    }

    // 0x100b15020
    unsigned long IPAddress::operator<(const IPAddress& ipAddress) const {
        unsigned int uVar1;
        unsigned int uVar3;
        uint64_t unaff_RBX;
        unsigned long uVar4;

        int iVar2 = field_8;
        uint64_t uVar5 = (uint64_t)((unsigned long)unaff_RBX >> 8);
        if (iVar2 == ipAddress.field_8) {
            if (iVar2 == 1) {
                uVar4 = (((uint64_t)uVar5 << 8) | (uint8_t)1);
                if ((((ipAddress.field_12 <= field_12) && (ipAddress.field_14 <= field_14)) &&
                     (ipAddress.field_16 <= field_16)) &&
                    (((ipAddress.field_18 <= field_18 && (ipAddress.field_20 <= field_20)) &&
                      ((ipAddress.field_22 <= field_22 && (ipAddress.field_24 <= field_24)))))) {
                    uVar4 = (((uint64_t)uVar5 << 8) | (uint8_t)(field_26 < ipAddress.field_26));
                }
            } else {
                if (iVar2 != 0) {
                    LogAssertAlways(
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/IPAddress.h",
                        156, "Unknow IP type");
                }
                uVar3._0_2_ = field_12;
                uVar3._2_2_ = field_14;
                uVar1._0_2_ = ipAddress.field_12;
                uVar1._2_2_ = ipAddress.field_14;
                uVar4 = (((uint64_t)uVar5 << 8) | (uint8_t)(uVar3 < uVar1));
            }
        } else {
            uVar4 = (((uint64_t)uVar5 << 8) | (uint8_t)(iVar2 < ipAddress.field_8));
        }
        return uVar4 & 4294967295;
    }

    // 0x100b162f0
    bool IPAddress::isV6() {
        return field_8 == 1;
    }

    // 0x100b16620
    unsigned int in_cksum(unsigned short* arg1, unsigned int arg2) {
        long lVar2 = 0;
        unsigned int uVar1 = 0;
        do {
            uVar1 = uVar1 + *(unsigned short*)((long)arg1 + lVar2);
            lVar2 = lVar2 + 2;
        } while ((int)lVar2 != 64);
        uVar1 = (uVar1 & 65535) + (uVar1 >> 16);
        return ~((uVar1 >> 16) + uVar1) & 65535;
    }

    // 0x100b16bf0
    void ___cxx_global_var_init(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100b16c30
    void ___cxx_global_var_init_2(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100b16c70
    void ___cxx_global_var_init_3(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100b16cb0
    void ___cxx_global_var_init_4(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

} // namespace jag::network

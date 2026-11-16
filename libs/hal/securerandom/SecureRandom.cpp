// libs/hal/securerandom/SecureRandom.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.securerandom

#include "SecureRandom.h"

namespace jag {
    // 0x1003aa1b0
    void SecureRandom::GetInt() {
        ((SecureRandomThreadLocal*)GetThreadLocal())->GetRandomIsaac();
    }

    // 0x1003aa1d0
    void SecureRandom::GetThreadLocal() {
        unique_ptr<internal::SecureRandomThreadLocal, std::default_delete<internal::SecureRandomThreadLocal> _>* in_RSI;
        uint8_t local_18[8];

        m_threadLocal();
        if (operator_cast_to_bool() == '\0') {
            this = (SecureRandom*)local_18;
            *this = std::make_unique<internal::SecureRandomThreadLocal>();
            m_threadLocal();
            *this = *in_RSI;
            ~unique_ptr();
        }
        m_threadLocal();
        get();
    }

    // 0x1003aa2c0
    uint64_t SecureRandom::GetInt64() {
        uint32_t uVar1 = GetInt();
        uint32_t uVar2 = GetInt();
        return (((uint64_t)uVar1 << 32) | (uint32_t)uVar2);
    }

    // 0x1003aa2f0
    uint8_t SecureRandom::GetByte() {
        return GetInt();
    }

} // namespace jag

namespace jag::internal {
    // 0x1003aa220
    void SecureRandomThreadLocal::GetRandomIsaac() {
        uint32_t uVar2;
        uint32_t* puVar3;
        uint32_t* puVar4;
        SecureRandom* this_00;
        array<int, _4ul> local_38;
        ReturnValue local_28;

        uint8_t* this_02 = &field_16;
        if (this_02->operator_cast_to_bool() == '\0') {
            this_00 = &local_38;
            puVar3 = (uint32_t*)std::array<int, 4ul>::begin();
            puVar4 = (uint32_t*)std::array<int, 4ul>::end();
            for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
                this_00 = this_00->Instance();
                uVar2 = this_00->GetEntropy();
                *puVar3 = uVar2;
            }
            local_28 = std::make_unique<Isaac, std::array<int, 4ul>&>(local_38);
            *this_02 = local_28;
        }
        ((Isaac*)(*this_02).operator->())->TakeNextValue();
    }

} // namespace jag::internal

// 0x1003aa300
void jag::SecureRandom::m_threadLocal(void) {
    ___tls_init();
    (*(void (*)(...))m_threadLocal)();
}

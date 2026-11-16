// libs/hal/securerandom/SecureRandom.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.securerandom

#include "SecureRandom.h"

namespace jag {
    // 0x1003aa1b0, 32 bytes, placed by class name and debug map
    // SecureRandom::GetInt()
    void SecureRandom::GetInt() {
        SecureRandomThreadLocal* this_00;

        this_00 = (SecureRandomThreadLocal*)GetThreadLocal(this);
        this_00->GetRandomIsaac();
    }

    // 0x1003aa1d0, 80 bytes, placed by class name and debug map
    // SecureRandom::GetThreadLocal()
    void SecureRandom::GetThreadLocal() {
        bool bVar1;
        unique_ptr* in_RSI;
        unique_ptr<internal::SecureRandomThreadLocal, std::default_delete<internal::SecureRandomThreadLocal>>
            local_18[8];

        m_threadLocal();
        bVar1 = operator_cast_to_bool();
        if (!bVar1) {
            std::make_unique<internal::SecureRandomThreadLocal>();
            m_threadLocal();
            std::unique_ptr<internal::SecureRandomThreadLocal,
                            std::default_delete<internal::SecureRandomThreadLocal>>::operator=(local_18, in_RSI);
            std::unique_ptr<internal::SecureRandomThreadLocal,
                            std::default_delete<internal::SecureRandomThreadLocal>>::~unique_ptr(local_18);
        }
        m_threadLocal();
        std::unique_ptr<internal::SecureRandomThreadLocal,
                        std::default_delete<internal::SecureRandomThreadLocal>>::get();
    }

    // 0x1003aa2c0, 48 bytes, placed by class name and debug map
    // SecureRandom::GetInt64()
    undefined8 SecureRandom::GetInt64() {
        undefined4 uVar1;
        undefined4 uVar2;

        uVar1 = GetInt(this);
        uVar2 = GetInt(this);
        return CONCAT44(uVar1, uVar2);
    }

    // 0x1003aa2f0, 16 bytes, placed by class name and debug map
    // SecureRandom::GetByte()
    undefined1 SecureRandom::GetByte() {
        return GetInt(this);
    }

} // namespace jag

namespace jag::internal {
    // 0x1003aa220, 160 bytes, placed by neighbouring functions
    // SecureRandomThreadLocal::GetRandomIsaac()
    void SecureRandomThreadLocal::GetRandomIsaac() {
        Isaac* this_00;
        undefined4 uVar2;
        undefined4* puVar3;
        undefined4* puVar4;
        SecureRandom* this_01;
        undefined1* this_02;
        undefined1 local_38[16];
        array local_28[8];

        this_02 = &field_16;
        if (!this_02->operator_cast_to_bool()) {
            this_01 = (SecureRandom*)local_38;
            puVar4 = (undefined4*)this_01->begin();
            puVar3 = (undefined4*)this_01->end();
            for (; puVar4 != puVar3; puVar4 = puVar4 + 1) {
                this_01 = (SecureRandom*)this_01->Instance();
                uVar2 = this_01->GetEntropy();
                *puVar4 = uVar2;
            }
            std::make_unique<Isaac, std::array<int, 4ul>&>(local_28);
            std::unique_ptr<Isaac, std::default_delete<Isaac>>::operator=(
                (unique_ptr<Isaac, std::default_delete<Isaac>>*)this_02, (unique_ptr*)local_28);
            local_28->~unique_ptr();
        }
        this_00 = (Isaac*)std::unique_ptr<Isaac, std::default_delete<Isaac>>::operator->(
            (unique_ptr<Isaac, std::default_delete<Isaac>>*)this_02);
        this_00->TakeNextValue();
    }

} // namespace jag::internal

// 0x1003aa300, 32 bytes, placed by debug map only (low confidence)
// TLS wrapper function for jag::SecureRandom::m_threadLocal
void jag::SecureRandom::m_threadLocal() {
    ___tls_init();
    (*(code*)m_threadLocal)();
}

// libs/hal/securerandom/SecureRandom.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::internal {
    class SecureRandomThreadLocal {
    public:
        void GetRandomIsaac();
        void GetEntropyStd();
        ~SecureRandomThreadLocal();
        SecureRandomThreadLocal();

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[24];
    };

    // 0x1003aa6d0, 32 bytes, inline, placed by debug map only (low confidence)
    // SecureRandomThreadLocal::GetEntropyStd()
    void SecureRandomThreadLocal::GetEntropyStd() {
        std::uniform_int_distribution<int>::operator()((uniform_int_distribution<int>*)&field_4, (random_device*)this);
    }

    // 0x1003aaed0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // SecureRandomThreadLocal::~SecureRandomThreadLocal(): jumps straight to the base-object destructor

    // 0x1003aaee0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // SecureRandomThreadLocal::~SecureRandomThreadLocal()
    void SecureRandomThreadLocal::~SecureRandomThreadLocal() {
        (&field_16)->~unique_ptr();
        ~random_device();
    }

    // 0x1003aaf10, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // SecureRandomThreadLocal::SecureRandomThreadLocal(): jumps straight to the base-object constructor

    // 0x1003aaf30, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // SecureRandomThreadLocal::SecureRandomThreadLocal()
    void SecureRandomThreadLocal::SecureRandomThreadLocal() {
        new (this) std::random_device();
        new (&field_4, -2147483648, 2147483647) std::uniform_int_distribution<int>();
        std::unique_ptr<Isaac, std::default_delete<Isaac>>::unique_ptr<true, void>(
            (unique_ptr<Isaac, std::default_delete<Isaac>>*)&field_16);
    }

} // namespace jag::internal

namespace jag {
    class SecureRandom {
    public:
        // virtual methods in vtable order
        virtual ~SecureRandom();
        void GetInt();
        void GetThreadLocal();
        GetInt64();
        GetByte();
        GetEntropy();
        SecureRandom();
        static /* 24 bytes */ m_threadLocal; // = { 0, 0, 0, 0, 0, 0 }

        // data members, from how the methods use this: 320 bytes
        undefined** field_0; // offset 0, vtable pointer
        File field_8;        // offset 8
        char _unknown_32[288];
    };

} // namespace jag

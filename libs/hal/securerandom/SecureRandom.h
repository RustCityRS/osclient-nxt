// libs/hal/securerandom/SecureRandom.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::internal {
    class SecureRandomThreadLocal {
    public:
        void GetRandomIsaac();
        void GetEntropyStd();
        ~SecureRandomThreadLocal();
        SecureRandomThreadLocal();

        uint8_t _unknown_0[24];
    };

    // 0x1003aa6d0
    void SecureRandomThreadLocal::GetEntropyStd() {
        std::uniform_int_distribution<int>::operator()((uniform_int_distribution<int>*)&field_4, (random_device*)this);
    }

    // 0x1003aaee0
    SecureRandomThreadLocal::~SecureRandomThreadLocal() {
        field_16.~unique_ptr();
    }

    // 0x1003aaf30
    SecureRandomThreadLocal::SecureRandomThreadLocal() : std::random_device(), field_4(-2147483648, 2147483647) {
        field_16.unique_ptr<true, void>();
    }

} // namespace jag::internal

namespace jag {
    class SecureRandom {
    public:
        // virtual methods in vtable order
        virtual ~SecureRandom();
        void GetInt();
        void GetThreadLocal();
        uint64_t GetInt64();
        uint8_t GetByte();
        uint32_t GetEntropy();
        SecureRandom();
        static float m_threadLocal[6]; // = { 0, 0, 0, 0, 0, 0 }

    private:
        ClientCompositeZone field_8;
        uint8_t _unknown_32[288];
    };

} // namespace jag

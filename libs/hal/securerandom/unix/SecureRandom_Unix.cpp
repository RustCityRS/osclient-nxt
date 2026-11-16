// libs/hal/securerandom/unix/SecureRandom_Unix.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.securerandom

#include "libs/hal/securerandom/SecureRandom.h"

namespace jag {
    // 0x100f4e098, 24 bytes, __thread_vars
    SecureRandom::m_threadLocal = {0, 0, 0, 0, 0, 0};

    // 0x1003aa450, 96 bytes, placed by class name and debug map
    // SecureRandom::GetEntropy()
    undefined4 SecureRandom::GetEntropy() {
        undefined4 local_c;

        local_c = 0;
        if ((field_8, (uchar*)&local_c, 4, 0, (Error*)0)->read() != 4) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/securerandom/"
                            "unix/SecureRandom_Unix.cpp",
                            29, (char*)0);
        }
        return local_c;
    }

    // 0x1003aa560, 160 bytes, base-object constructor, placed by class name and debug map
    // SecureRandom::SecureRandom()
    void SecureRandom::SecureRandom() {
        undefined8 uVar2;

        new (this) Singleton<SecureRandom>();
        field_0 = &PTR__SecureRandom_100efe310;
        new (field_8, "/dev/random", 0, (Error*)0) File();
        if (field_8->IsValid() == '\0') {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                "securerandom/unix/SecureRandom_Unix.cpp",
                                15, "Failed to open random device");
        }
    }

    // 0x1003aa660, 16 bytes, complete-object constructor, placed by class name and debug map
    // SecureRandom::SecureRandom(): jumps straight to the base-object constructor

    // 0x1003aa670, 48 bytes, base-object destructor, placed by class name and debug map
    // SecureRandom::~SecureRandom()
    void SecureRandom::~SecureRandom() {
        field_0 = &PTR__SecureRandom_100efe310;
        field_8->~File();
        ~AutoSingleton();
    }

    // 0x1003aa6a0, 16 bytes, complete-object destructor, placed by class name and debug map
    // SecureRandom::~SecureRandom(): jumps straight to the base-object destructor

    // 0x1003aa6b0, 32 bytes, deleting destructor, placed by class name and debug map
    // SecureRandom::~SecureRandom()
    void SecureRandom::~SecureRandom() {
        ~SecureRandom(this);
        operator_delete(this);
    }

} // namespace jag

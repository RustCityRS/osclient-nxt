// libs/hal/securerandom/unix/SecureRandom_Unix.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.securerandom

#include "libs/hal/securerandom/SecureRandom.h"

namespace jag {
    // 0x100f4e098
    float SecureRandom::m_threadLocal[6] = {0, 0, 0, 0, 0, 0};

    // 0x1003aa450
    uint32_t SecureRandom::GetEntropy() {

        return local_c = 0;
        if (field_8->read(&local_c, 4, 0, nullptr) != 4) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/securerandom/"
                            "unix/SecureRandom_Unix.cpp",
                            29, nullptr);
        }
        return local_c;
    }

    // 0x1003aa560
    SecureRandom::SecureRandom() : Singleton<SecureRandom>(), field_8("/dev/random", 0, nullptr) {
        if (field_8->IsValid() == '\0') {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/securerandom/unix/"
                      "SecureRandom_Unix.cpp",
                      15, "Failed to open random device");
        }
    }

    // 0x1003aa670
    SecureRandom::~SecureRandom() {
        field_8->~File();
    }

} // namespace jag

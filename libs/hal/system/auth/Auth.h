// libs/hal/system/auth/Auth.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::auth {
    // 0x100198e90
    GameTokenResult::GameTokenResult(const GameTokenResult& gameTokenResult)
        : eastl::string(gameTokenResult), field_32(gameTokenResult.field_32) {}

    // 0x100198ed0
    GameTokenResult::GameTokenResult() {

        new (this) eastl::string("");
        field_32 = 4294967294;
    }

} // namespace jag::auth

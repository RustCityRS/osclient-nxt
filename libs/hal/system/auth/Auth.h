// libs/hal/system/auth/Auth.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::auth {
    // 0x100198e90, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // GameTokenResult::GameTokenResult(GameTokenResult const&)
    void GameTokenResult::GameTokenResult(GameTokenResult* param_1) {
        new (this) eastl::string(param_1);
        field_32 = param_1->field_32;
    }

    // 0x100198ed0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // GameTokenResult::GameTokenResult()
    void GameTokenResult::GameTokenResult() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("", local_20);
        field_32 = 4294967294;
    }

} // namespace jag::auth

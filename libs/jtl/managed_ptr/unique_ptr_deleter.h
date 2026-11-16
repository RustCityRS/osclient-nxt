// libs/jtl/managed_ptr/unique_ptr_deleter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100130530
    void BucketDeleter<oldscape::configdecoder::NPCTypeCustomisation>::operator()(
        oldscape::configdecoder::NPCTypeCustomisation* npcTypeCustomisation) const {
        unsigned long arg2;

        npcTypeCustomisation->~NPCTypeCustomisation();
        npcTypeCustomisation->DeAllocate(96, arg2);
    }

} // namespace jag

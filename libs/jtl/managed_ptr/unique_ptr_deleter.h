// libs/jtl/managed_ptr/unique_ptr_deleter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100130530, 48 bytes, inline, placed by debug map only (low confidence)
    // BucketDeleter<oldscape::configdecoder::NPCTypeCustomisation>::operator()(oldscape::configdecoder::NPCTypeCustomisation*) const
    /* BucketDeleter<oldscape::configdecoder::NPCTypeCustomisation>::TEMPNAMEPLACEHOLDERVALUE(oldscape::configdecoder::NPCTypeCustomisation*)
   const */

    void BucketDeleter<oldscape::configdecoder::NPCTypeCustomisation>::operator()(NPCTypeCustomisation* param_1) {
        param_1->~NPCTypeCustomisation();
        BucketManager::DeAllocate(param_1, 96);
    }

} // namespace jag

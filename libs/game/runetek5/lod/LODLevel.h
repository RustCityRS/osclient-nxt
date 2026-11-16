// libs/game/runetek5/lod/LODLevel.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    // 0x1003d1f10, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // OpObjValue::OpObjValue()
    void OpObjValue::OpObjValue() {
        std::variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, shared_ptr<VarType>,
                     shared_ptr<VarBitType>,
                     OpObjValue::Dummy>::variant<OpObjValue::Dummy, 0, 0, 0, OpObjValue::Dummy, 6ul, 0>((Dummy*)this);
    }

    // 0x1003d1ff0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // OpObjValue::~OpObjValue()
    void OpObjValue::~OpObjValue() {
        Dummy local_18[8];

        std::variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, shared_ptr<VarType>,
                     shared_ptr<VarBitType>, OpObjValue::Dummy>::
        operator=((variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine,
                           shared_ptr<VarType>, shared_ptr<VarBitType>, OpObjValue::Dummy>*)this,
                  local_18);
        ~variant();
    }

} // namespace jag::game

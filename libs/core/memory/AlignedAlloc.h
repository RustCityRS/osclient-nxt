// libs/core/memory/AlignedAlloc.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::math {
    // 0x100988340, 80 bytes, inline, placed by debug map only (low confidence)
    // Matrix43T<float>::SetToIdentity()
    Matrix43T<float>* Matrix43T<float>::SetToIdentity() {
        Set(this, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0);
        return this;
    }

    // 0x100988f80, 32 bytes, inline, placed by debug map only (low confidence)
    // Matrix43T<float>::Translate(Vector3T<float> const&)
    Matrix43T<float>* Matrix43T<float>::Translate(Vector3T* param_1) {
        Vector3T<float>::operator+=((Vector3T<float>*)(this + 36), param_1);
        return this;
    }

    // 0x100988fa0, 80 bytes, inline, placed by debug map only (low confidence)
    // Matrix43T<float>::Set(QuaternionT<float> const&, Vector3T<float> const&)
    Matrix43T<float>* Matrix43T<float>::Set(QuaternionT* param_1, Vector3T* param_2) {
        Matrix33T<float> local_60[40];
        QuaternionT<float> local_38[16];

        QuaternionT<float>::QuaternionT(local_38, param_1);
        Matrix33T<float>::Matrix33T(local_60, (QuaternionT*)local_38);
        Set(this, local_60, param_2);
        return this;
    }

    // 0x100988ff0, 128 bytes, inline, placed by debug map only (low confidence)
    // Matrix43T<float>::Set(Matrix33T<float> const&, Vector3T<float> const&)
    Matrix43T<float>* Matrix43T<float>::Set(Matrix33T* param_1, Vector3T* param_2) {
        Vector3T* pVVar1;

        pVVar1 = (Vector3T*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 0);
        Set(pVVar1);
        pVVar1 = (Vector3T*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 1);
        ((this + 12))->Set(pVVar1);
        pVVar1 = (Vector3T*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 2);
        ((this + 24))->Set(pVVar1);
        ((this + 36))->Set(param_2);
        return this;
    }

} // namespace jag::math

// 0x100987ea0, 32 bytes, inline, placed by debug map only (low confidence)
// is_aligned(unsigned long, unsigned int)
/* bool is_aligned<char>(char const*, unsigned int) */

bool is_aligned<char>(char* param_1, uint param_2) {
    return (ulong)param_1 % (ulong)param_2 == 0;
}

namespace jag {
    // 0x100989690, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<graphics::Animation>::type make_shared<graphics::Animation>()
    jag* make_shared<graphics::Animation>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        Animation* local_28[2];

        pvVar1 = (void*)aligned_alloc(232, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<graphics::Animation>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<graphics::Animation>, int, graphics::Animation*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag

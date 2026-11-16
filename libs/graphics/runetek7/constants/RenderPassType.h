// libs/graphics/runetek7/constants/RenderPassType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    // 0x1001cbc20, 32 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // RenderPassBitSet::AddRenderPass(unsigned int)
    /* render::TextureFormatBitSet::AddFormatType(render::TextureFormatType) */

    void render::TextureFormatBitSet::AddFormatType(byte param_2) {
        m_bits = m_bits | 1 << (param_2 & 31);
    }

} // namespace jag::graphics

namespace jag {
    // 0x1001cbef0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rseven::DynamicGeometry>::type make_shared<oldscape::rseven::DynamicGeometry, decltype(nullptr)>(decltype(nullptr)&&)
    jag* make_shared<oldscape::rseven::DynamicGeometry, decltype(nullptr)>(_func_decltype_nullptr** param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        DynamicGeometry* local_30[2];

        pvVar1 = (void*)aligned_alloc(112, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_30[0] = placement_new<oldscape::rseven::DynamicGeometry, decltype(nullptr)>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rseven::DynamicGeometry>, int,
                                   oldscape::rseven::DynamicGeometry*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag

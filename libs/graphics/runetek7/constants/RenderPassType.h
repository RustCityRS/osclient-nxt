// libs/graphics/runetek7/constants/RenderPassType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    // 0x1001cbc20
    void RenderPassBitSet::AddRenderPass(unsigned int arg1) {
        m_bits = m_bits | 1 << ((uint8_t)arg1 & 31);
    }

} // namespace jag::graphics

namespace jag {
    // 0x1001cbef0
    shared_ptr_if_not_array<oldscape::rseven::DynamicGeometry>::type
    make_shared<oldscape::rseven::DynamicGeometry, decltype(nullptr)>(decltype(nullptr)&& arg1) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        DynamicGeometry* local_30[2];

        auto arg1_00 = aligned_alloc(112, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::rseven::DynamicGeometry>::type result;
        } else {
            local_30[0] =
                placement_new<oldscape::rseven::DynamicGeometry, decltype(nullptr)>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rseven::DynamicGeometry>, int,
                              oldscape::rseven::DynamicGeometry*&>(arg1_00, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag

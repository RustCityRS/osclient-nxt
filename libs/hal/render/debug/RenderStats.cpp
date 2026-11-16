// libs/hal/render/debug/RenderStats.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "RenderStats.h"
#include "libs/hal/render/context/RenderContext.h"

namespace jag::render {
    // 0x10012dc00: RenderStats::GetLineCount() const has the same machine code as oldscape::graphics::NXTPixScreen::GetViewportX()

    // 0x100429880: RenderStats::GetAvgDrawCalls() const has the same machine code as Headbar::GetDuration() const

    // 0x100429b10: RenderStats::GetAvgTriangleCount() const has the same machine code as game::StaticPointLight::GetRGB() const

    // 0x100759820: RenderStats::FrameStats::FrameStats() has the same machine code as ImSpanAllocator<3>::ImSpanAllocator()

    // 0x10079e660: RenderStats::FrameStats::FrameStats() has the same machine code as ImSpanAllocator<3>::ImSpanAllocator()

    // 0x100c18e80
    void RenderStats::Update() {
        unsigned int uVar2 = field_0 + 1;
        field_0 = uVar2;
        unsigned int uVar1 = field_16 + field_8;
        field_16 = uVar1;
        unsigned int uVar3 = field_44 + field_36;
        field_44 = uVar3;
        unsigned int uVar4 = field_28 + field_20;
        field_28 = uVar4;
        if (uVar2 == field_4) {
            field_12 = uVar1 / uVar2;
            field_40 = uVar3 / uVar2;
            field_24 = uVar4 / uVar2;
            field_16 = 0;
            field_44 = 0;
            field_28 = 0;
            field_0 = 0;
        }
        Reset();
    }

    // 0x100c19080
    DeferredFrameData::DeferredFrameData() : LinearAllocator(16777216, 1) {
        unsigned long local_48[2];

        unsigned long local_38 = 16;
        local_48[0] = 8;
        auto puVar1 = std::max<unsigned long>(local_38, *local_48);
        new (&field_152) VectorFastPool<InputAssemblerState>(512, *puVar1);
        local_38 = 16;
        local_48[0] = 8;
        puVar1 = std::max<unsigned long>(local_38, *local_48);
        new (&field_192) VectorFastPool<RenderPipelineState>(512, *puVar1);
        local_38 = 16;
        local_48[0] = 8;
        puVar1 = std::max<unsigned long>(local_38, *local_48);
        new (&field_232) VectorFastPool<ComputePipelineState>(512, *puVar1);
        local_38 = 16;
        local_48[0] = 16;
        puVar1 = std::max<unsigned long>(local_38, *local_48);
        new (&field_272) VectorFastPool<OutputMergerState>(512, *puVar1);
        new (&field_312) eastl::hash_set<KeepAliveSharedPtrAndOwner>(local_38);
        local_38.destruct<oldscape::highlight::NpcUID*>();
        new (&field_368)
            eastl::hash_set<void const*, eastl::hash<void const*>, eastl::equal_to<void const*>, BucketAllocatorEASTL>(
                local_38);
    }

    // 0x100c2b4f0
    void RenderStats::Reset() {
        *(uint64_t*)(field_48 + 32) = *(uint64_t*)&field_40;
        int iVar3 = field_8;
        unsigned int uVar4 = field_12;
        uint64_t uVar1 = *(uint64_t*)&field_16;
        uint64_t uVar2 = *(uint64_t*)&field_32;
        *(uint64_t*)(field_48 + 16) = *(uint64_t*)&field_24;
        *(uint64_t*)(field_48 + 24) = uVar2;
        *(int*)(field_48 + 0) = iVar3;
        *(unsigned int*)(field_48 + 4) = uVar4;
        *(uint64_t*)(field_48 + 8) = uVar1;
        field_8 = 0;
        field_20 = 0;
        field_32 = 0;
        field_36 = 0;
    }

} // namespace jag::render

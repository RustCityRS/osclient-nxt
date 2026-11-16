// libs/hal/render/debug/RenderStats.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "RenderStats.h"
#include "libs/hal/render/context/RenderContext.h"

namespace jag::render {
    // 0x10012dc00: the linker folded this into oldscape::graphics::NXTPixScreen::GetViewportX(), which has identical code
    RenderStats::GetLineCount() const;

    // 0x100429880: the linker folded this into Headbar::GetDuration() const, which has identical code
    RenderStats::GetAvgDrawCalls() const;

    // 0x100429b10: the linker folded this into game::StaticPointLight::GetRGB() const, which has identical code
    RenderStats::GetAvgTriangleCount() const;

    // 0x100759820: the linker folded this into ImSpanAllocator<3>::ImSpanAllocator(), which has identical code
    RenderStats::FrameStats::FrameStats();

    // 0x10079e660: the linker folded this into ImSpanAllocator<3>::ImSpanAllocator(), which has identical code
    RenderStats::FrameStats::FrameStats();

    // 0x100c18e80, 112 bytes, placed by class name and debug map
    // RenderStats::Update()
    void RenderStats::Update() {
        uint uVar1;
        uint uVar2;
        uint uVar3;
        uint uVar4;

        uVar2 = field_0 + 1;
        field_0 = uVar2;
        uVar1 = field_16 + field_8;
        field_16 = uVar1;
        uVar3 = field_44 + field_36;
        field_44 = uVar3;
        uVar4 = field_28 + field_20;
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
        Reset(this);
    }

    // 0x100c19080, 528 bytes, base-object constructor, placed by debug map only (low confidence)
    // DeferredFrameData::DeferredFrameData()
    void DeferredFrameData::DeferredFrameData() {
        ulong* puVar1;
        NpcUID* extraout_RDX;
        ulong local_48[2];
        ulong local_38;

        new (this) LinearAllocator(16777216, 1);
        new (&field_80) eastl::vector<DeferredRenderFunction, eastl::allocator>();
        new (&field_112) eastl::vector<Scratch, eastl::allocator>();
        new (field_144) SyncFence();
        local_38 = 16;
        local_48[0] = 8;
        puVar1 = std::max<unsigned long>(&local_38, local_48);
        new (&field_152, 512, *puVar1) VectorFastPool<InputAssemblerState>();
        local_38 = 16;
        local_48[0] = 8;
        puVar1 = std::max<unsigned long>(&local_38, local_48);
        new (&field_192, 512, *puVar1) VectorFastPool<RenderPipelineState>();
        local_38 = 16;
        local_48[0] = 8;
        puVar1 = std::max<unsigned long>(&local_38, local_48);
        new (&field_232, 512, *puVar1) VectorFastPool<ComputePipelineState>();
        local_38 = 16;
        local_48[0] = 16;
        puVar1 = std::max<unsigned long>(&local_38, local_48);
        new (&field_272, 512, *puVar1) VectorFastPool<OutputMergerState>();
        new (&local_38) eastl::allocator("EASTL hash_set");
        new (&field_312, (allocator*)&local_38)
            eastl::hash_set<KeepAliveSharedPtrAndOwner, eastl::hash<KeepAliveSharedPtrAndOwner>,
                            eastl::equal_to<KeepAliveSharedPtrAndOwner>, eastl::allocator, false>();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)&local_38, (NpcUID*)"EASTL hash_set", extraout_RDX);
        eastl::hash_set<void_const*, eastl::hash<void_const*>, eastl::equal_to<void_const*>, BucketAllocatorEASTL,
                        false>::hash_set((BucketAllocatorEASTL*)&field_368);
    }

    // 0x100c2b4f0, 64 bytes, placed by class name
    // RenderStats::Reset()
    void RenderStats::Reset() {
        undefined8 uVar1;
        undefined8 uVar2;
        int iVar3;
        uint uVar4;

        *(undefined8*)(field_48 + 32) = *(undefined8*)&field_40;
        iVar3 = field_8;
        uVar4 = field_12;
        uVar1 = *(undefined8*)&field_16;
        uVar2 = *(undefined8*)&field_32;
        *(undefined8*)(field_48 + 16) = *(undefined8*)&field_24;
        *(undefined8*)(field_48 + 24) = uVar2;
        *(int*)(field_48 + 0) = iVar3;
        *(uint*)(field_48 + 4) = uVar4;
        *(undefined8*)(field_48 + 8) = uVar1;
        field_8 = 0;
        field_20 = 0;
        field_32 = 0;
        field_36 = 0;
    }

} // namespace jag::render

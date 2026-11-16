// libs/graphics/runetek7/occlusion/DepthBufferRasterizerSSE.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class DepthBufferRasterizerSSE {
    public:
        // virtual methods in vtable order
        virtual ~DepthBufferRasterizerSSE();
        GetNumRasterizedTriangles() const;
        DepthBufferRasterizerSSE(unsigned int, unsigned int);
        void ClearDepthTile(int, int, int, int, unsigned int);
        void SetCPURenderTargetPixels(unsigned int*, unsigned int);

        // data members, from how the methods use this: 56 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        uint field_12;       // offset 12
        char _unknown_16[40];
    };

    // 0x100824440, 16 bytes, inline, placed by class name and debug map
    // DepthBufferRasterizerSSE::SetCPURenderTargetPixels(unsigned int*, unsigned int)
    void DepthBufferRasterizerSSE::SetCPURenderTargetPixels(uint* param_1, uint param_2) {
        *(uint**)(&field_24 + (ulong)param_2 * 8) = param_1;
    }

} // namespace jag::graphics

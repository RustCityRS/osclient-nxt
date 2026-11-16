// libs/graphics/runetek7/occlusion/DepthBufferRasterizerSSE.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class DepthBufferRasterizerSSE {
    public:
        // virtual methods in vtable order
        virtual ~DepthBufferRasterizerSSE();
        int GetNumRasterizedTriangles() const;
        DepthBufferRasterizerSSE(unsigned int arg1, unsigned int arg2);
        void ClearDepthTile(int arg1, int arg2, int arg3, int arg4, unsigned int arg5);
        void SetCPURenderTargetPixels(unsigned int* arg1, unsigned int arg2);

    private:
        unsigned int field_8;
        unsigned int field_12;
        int m_numRasterizedTriangles;
        uint8_t _unknown_20[36];
    };

    // 0x100824440
    void DepthBufferRasterizerSSE::SetCPURenderTargetPixels(unsigned int* arg1, unsigned int arg2) {
        *(unsigned int**)(&field_24 + (unsigned long)arg2 * 8) = arg1;
    }

} // namespace jag::graphics

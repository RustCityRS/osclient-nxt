// libs/graphics/runetek7/occlusion/DepthBufferRasterizer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class DepthBufferRasterizer {
    public:
        // virtual methods in vtable order
        virtual ~DepthBufferRasterizer();
        DepthBufferRasterizer(unsigned int, unsigned int);

        // data members, from how the methods use this: 20 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        uint field_12;       // offset 12
        char _unknown_16[4];
    };

    // 0x1008227e0, 32 bytes, base-object constructor, placed by class name and debug map
    // DepthBufferRasterizer::DepthBufferRasterizer(unsigned int, unsigned int)
    void DepthBufferRasterizer::DepthBufferRasterizer(uint param_1, uint param_2) {
        field_0 = &PTR__DepthBufferRasterizer_100f15848;
        field_8 = param_1;
        field_12 = param_2;
    }

    // 0x100822800, 16 bytes, base-object destructor, placed by class name and debug map
    // DepthBufferRasterizer::~DepthBufferRasterizer()
    void DepthBufferRasterizer::~DepthBufferRasterizer() {}

    // 0x100822810, 16 bytes, complete-object destructor, placed by class name and debug map
    // DepthBufferRasterizer::~DepthBufferRasterizer(): jumps straight to the base-object destructor

    // 0x100822820, 16 bytes, deleting destructor, placed by class name and debug map
    // DepthBufferRasterizer::~DepthBufferRasterizer()
    void DepthBufferRasterizer::~DepthBufferRasterizer() {
        code* pcVar1;

        /* WARNING: Does not return */
        pcVar1 = (code*)invalidInstructionException();
        (*pcVar1)();
    }

} // namespace jag::graphics

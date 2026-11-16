// libs/graphics/runetek7/occlusion/DepthBufferRasterizer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class DepthBufferRasterizer {
    public:
        // virtual methods in vtable order
        virtual ~DepthBufferRasterizer();
        DepthBufferRasterizer(unsigned int arg1, unsigned int arg2);

    private:
        unsigned int field_8;
        unsigned int field_12;
        uint8_t _unknown_16[4];
    };

    // 0x1008227e0
    DepthBufferRasterizer::DepthBufferRasterizer(unsigned int arg1, unsigned int arg2)
        : field_8(arg1), field_12(arg2) {}

    // 0x100822800
    DepthBufferRasterizer::~DepthBufferRasterizer() {}

} // namespace jag::graphics

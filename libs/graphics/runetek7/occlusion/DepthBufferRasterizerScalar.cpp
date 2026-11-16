// libs/graphics/runetek7/occlusion/DepthBufferRasterizerScalar.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class DepthBufferRasterizerScalar {
    public:
        // virtual methods in vtable order
        virtual ~DepthBufferRasterizerScalar();
        DepthBufferRasterizerScalar(unsigned int arg1, unsigned int arg2);
        void ClearDepthTile(int arg1, int arg2, int arg3, int arg4, unsigned int arg5);

    private:
        unsigned int field_8;
        unsigned int field_12;
        uint8_t _unknown_16[8];
        uint64_t field_24;
        uint64_t field_32;
        uint8_t _unknown_40[16];
    };

    // 0x100822e60
    DepthBufferRasterizerScalar::DepthBufferRasterizerScalar(unsigned int arg1, unsigned int arg2)
        : DepthBufferRasterizer(arg1, arg2), field_24(0), field_32(0) {}

    // 0x100822ea0
    DepthBufferRasterizerScalar::~DepthBufferRasterizerScalar() {
        field_48.~array();
    }

    // 0x100822ef0
    void DepthBufferRasterizerScalar::ClearDepthTile(int arg1, int arg2, int arg3, int arg4, unsigned int arg5) {
        long lVar1;
        long lVar2;

        if (((arg1 | arg2) & 1U) != 0) {
            LogAssert("startX % 2 == 0 && startY % 2 == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "occlusion/DepthBufferRasterizerScalar.cpp",
                      39, nullptr);
        }
        if (((arg3 | arg4) & 1U) != 0) {
            LogAssert("endX % 2 == 0 && endY % 2 == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "occlusion/DepthBufferRasterizerScalar.cpp",
                      40, nullptr);
        }
        if (arg2 < arg4) {
            lVar1 = (&field_24)[arg5] + ((long)arg2 * 96 + (long)arg1) * 4;
            lVar2 = (long)arg4 - (long)arg2;
            do {
                ___bzero(lVar1, (long)(arg3 - arg1) << 2);
                lVar1 = lVar1 + 384;
                lVar2 = lVar2 - 1;
            } while (lVar2 != 0);
        }
    }

} // namespace jag::graphics

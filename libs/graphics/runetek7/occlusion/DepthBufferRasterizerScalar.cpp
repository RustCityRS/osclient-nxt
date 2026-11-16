// libs/graphics/runetek7/occlusion/DepthBufferRasterizerScalar.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class DepthBufferRasterizerScalar {
    public:
        // virtual methods in vtable order
        virtual ~DepthBufferRasterizerScalar();
        DepthBufferRasterizerScalar(unsigned int, unsigned int);
        void ClearDepthTile(int, int, int, int, unsigned int);

        // data members, from how the methods use this: 56 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        uint field_12;       // offset 12
        char _unknown_16[8];
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        char _unknown_40[16];
    };

    // 0x100822e60, 48 bytes, base-object constructor, placed by class name and debug map
    // DepthBufferRasterizerScalar::DepthBufferRasterizerScalar(unsigned int, unsigned int)
    void DepthBufferRasterizerScalar::DepthBufferRasterizerScalar(uint param_1, uint param_2) {
        new (this) DepthBufferRasterizer(param_1, param_2);
        field_0 = &PTR__DepthBufferRasterizerScalar_100f158d8;
        new (&field_48) std::array<std::unique_ptr<BinInfo, std::default_delete<BinInfo>>, 2ul>();
        field_24 = 0;
        field_32 = 0;
    }

    // 0x100822ea0, 32 bytes, base-object destructor, placed by class name and debug map
    // DepthBufferRasterizerScalar::~DepthBufferRasterizerScalar()
    void DepthBufferRasterizerScalar::~DepthBufferRasterizerScalar() {
        field_0 = &PTR__DepthBufferRasterizerScalar_100f158d8;
        (&field_48)->~array();
    }

    // 0x100822ed0, 16 bytes, complete-object destructor, placed by class name and debug map
    // DepthBufferRasterizerScalar::~DepthBufferRasterizerScalar(): jumps straight to the base-object destructor

    // 0x100822ee0, 16 bytes, deleting destructor, placed by class name and debug map
    // DepthBufferRasterizerScalar::~DepthBufferRasterizerScalar()
    void DepthBufferRasterizerScalar::~DepthBufferRasterizerScalar() {
        code* pcVar1;

        /* WARNING: Does not return */
        pcVar1 = (code*)invalidInstructionException();
        (*pcVar1)();
    }

    // 0x100822ef0, 208 bytes, placed by class name and debug map
    // DepthBufferRasterizerScalar::ClearDepthTile(int, int, int, int, unsigned int)
    void DepthBufferRasterizerScalar::ClearDepthTile(int param_1, int param_2, int param_3, int param_4, uint param_5) {
        long lVar1;
        long lVar2;

        if (((param_1 | param_2) & 1U) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("startX % 2 == 0 && startY % 2 == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "occlusion/DepthBufferRasterizerScalar.cpp",
                      39, (char*)0);
        }
        if (((param_3 | param_4) & 1U) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("endX % 2 == 0 && endY % 2 == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "occlusion/DepthBufferRasterizerScalar.cpp",
                      40, (char*)0);
        }
        if (param_2 < param_4) {
            lVar1 = (&field_24)[param_5] + ((long)param_2 * 96 + (long)param_1) * 4;
            lVar2 = (long)param_4 - (long)param_2;
            do {
                ___bzero(lVar1, (long)(param_3 - param_1) << 2);
                lVar1 = lVar1 + 384;
                lVar2 = lVar2 + -1;
            } while (lVar2 != 0);
        }
    }

} // namespace jag::graphics

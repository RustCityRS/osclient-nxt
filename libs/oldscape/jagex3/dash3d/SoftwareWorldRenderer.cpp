// libs/oldscape/jagex3/dash3d/SoftwareWorldRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

namespace jag::oldscape::dash3d {
    class SoftwareWorldRenderer {
    public:
        // virtual methods in vtable order
        virtual SoftwarePix3D* GetPix3D();
        virtual uint8_t* GetModelLitRenderer();
        virtual void PrepareRender(int arg1);
        virtual void RenderQuickGround(const world& world, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                       int arg8, int arg9, int arg10, int arg11, int arg12, int arg13, int arg14);
        virtual void RenderGround(const world& world, const Ground& ground, int arg3, int arg4, int arg5, int arg6,
                                  int arg7, int arg8, int arg9);
        SoftwareWorldRenderer(SoftwarePix3D* softwarePix3D);

    private:
        SoftwarePix3D* m_pPix3D;
        uint8_t _unknown_16[6437232];
    };

    // 0x100301d00
    SoftwareWorldRenderer::SoftwareWorldRenderer(SoftwarePix3D* softwarePix3D)
        : WorldRenderer<SoftwarePix3D>(), field_16(softwarePix3D), m_pPix3D(softwarePix3D) {}

    // 0x100301d70
    SoftwarePix3D* SoftwareWorldRenderer::GetPix3D() {
        return m_pPix3D;
    }

    // 0x100301d80
    uint8_t* SoftwareWorldRenderer::GetModelLitRenderer() {
        return &field_16;
    }

    // 0x100301d90
    void SoftwareWorldRenderer::PrepareRender(int arg1) {
        (logger::default_logger())
            ->Log(true, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                  "SoftwareWorldRenderer.cpp",
                  29, "SoftwareWorldRenderer::PrepareRender is not implemented");
    }

    // 0x100301dd0
    void SoftwareWorldRenderer::RenderQuickGround(const world& world, int arg2, int arg3, int arg4, int arg5, int arg6,
                                                  int arg7, int arg8, int arg9, int arg10, int arg11, int arg12,
                                                  int arg13, int arg14) {
        (logger::default_logger())
            ->Log(true, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                  "SoftwareWorldRenderer.cpp",
                  37, "SoftwareWorldRenderer::RenderQuickGround is not implemented");
    }

    // 0x100301e10
    void SoftwareWorldRenderer::RenderGround(const world& world, const Ground& ground, int arg3, int arg4, int arg5,
                                             int arg6, int arg7, int arg8, int arg9) {
        (logger::default_logger())
            ->Log(true, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                  "SoftwareWorldRenderer.cpp",
                  44, "SoftwareWorldRenderer::RenderGround is not implemented");
    }

} // namespace jag::oldscape::dash3d

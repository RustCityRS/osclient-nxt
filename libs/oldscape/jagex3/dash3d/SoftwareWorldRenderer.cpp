// libs/oldscape/jagex3/dash3d/SoftwareWorldRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

namespace jag::oldscape::dash3d {
    class SoftwareWorldRenderer {
    public:
        // virtual methods in vtable order
        virtual SoftwarePix3D* GetPix3D();
        virtual GetModelLitRenderer();
        virtual void PrepareRender(int);
        virtual void RenderQuickGround(world const&, int, int, int, int, int, int, int, int, int, int, int, int, int);
        virtual void RenderGround(world const&, Ground const&, int, int, int, int, int, int, int);
        SoftwareWorldRenderer(SoftwarePix3D*);

        // data members, from how the methods use this: 6437248 bytes
        undefined** field_0;     // offset 0, vtable pointer
        SoftwarePix3D* m_pPix3D; // offset 8
        char _unknown_16[6437232];
    };

    // 0x100301d00, 64 bytes, base-object constructor, placed by class name and debug map
    // SoftwareWorldRenderer::SoftwareWorldRenderer(SoftwarePix3D*)
    void SoftwareWorldRenderer::SoftwareWorldRenderer(SoftwarePix3D* param_1) {
        new (this) WorldRenderer<SoftwarePix3D>();
        field_0 = &PTR_GetPix3D_100efac68;
        new (&field_16, param_1) SoftwareModelLitRenderer();
        m_pPix3D = param_1;
    }

    // 0x100301d60, 16 bytes, complete-object constructor, placed by class name
    // SoftwareWorldRenderer::SoftwareWorldRenderer(SoftwarePix3D*): jumps straight to the base-object constructor

    // 0x100301d70, 16 bytes, placed by class name
    // SoftwareWorldRenderer::GetPix3D()
    SoftwarePix3D* SoftwareWorldRenderer::GetPix3D() {
        return m_pPix3D;
    }

    // 0x100301d80, 16 bytes, placed by class name
    // SoftwareWorldRenderer::GetModelLitRenderer()
    undefined1* SoftwareWorldRenderer::GetModelLitRenderer() {
        return &field_16;
    }

    // 0x100301d90, 64 bytes, placed by class name
    // SoftwareWorldRenderer::PrepareRender(int)
    void SoftwareWorldRenderer::PrepareRender(int param_1) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 1, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "dash3d/SoftwareWorldRenderer.cpp",
                            29, "SoftwareWorldRenderer::PrepareRender is not implemented");
    }

    // 0x100301dd0, 64 bytes, placed by class name
    // SoftwareWorldRenderer::RenderQuickGround(world const&, int, int, int, int, int, int, int, int, int, int, int, int, int)
    void SoftwareWorldRenderer::RenderQuickGround(world* param_1, int param_2, int param_3, int param_4, int param_5,
                                                  int param_6, int param_7, int param_8, int param_9, int param_10,
                                                  int param_11, int param_12, int param_13, int param_14) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 1, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "dash3d/SoftwareWorldRenderer.cpp",
                            37, "SoftwareWorldRenderer::RenderQuickGround is not implemented");
    }

    // 0x100301e10, 64 bytes, placed by class name
    // SoftwareWorldRenderer::RenderGround(world const&, Ground const&, int, int, int, int, int, int, int)
    void SoftwareWorldRenderer::RenderGround(world* param_1, Ground* param_2, int param_3, int param_4, int param_5,
                                             int param_6, int param_7, int param_8, int param_9) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 1, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "dash3d/SoftwareWorldRenderer.cpp",
                            44, "SoftwareWorldRenderer::RenderGround is not implemented");
    }

} // namespace jag::oldscape::dash3d

// libs/oldscape/jagex3/graphics/OffscreenSoftwarePixToolkit.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.system.osclient

namespace jag::oldscape::graphics {
    class OffscreenSoftwarePixToolkit {
    public:
        // virtual methods in vtable order
        virtual GetPix2D();
        virtual SoftwarePix3D GetPix3D();
        virtual void SetScreenSize(int, int);
        virtual void Render(int, int, int, int);
        virtual void Render(int, int);
        virtual Set2DOnlyFrame();
        SetGamma(float);
        GetWorldRenderer();
        void SetDestination(Pix32&);
        OffscreenSoftwarePixToolkit();
        void SetDestination(SharedArray<unsigned int>&, int, int);
        ~OffscreenSoftwarePixToolkit();

        // data members, from how the methods use this: 6437456 bytes
        undefined* field_0; // offset 0, vtable pointer
        NXTPix2D field_8;   // offset 8
        char _unknown_48[16];
        SoftwarePix3D m_pix3D;          // offset 64
        undefined1 m_pWorldRenderer[4]; // offset 208
        char _unknown_212[6437244];
    };

    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    OffscreenSoftwarePixToolkit::GetPix2D();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    OffscreenSoftwarePixToolkit::Set2DOnlyFrame();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    OffscreenSoftwarePixToolkit::SetGamma(float);

    // 0x100049810: the linker folded this into option::Option<WindowSavedPosition>::GetDefaultValue() const, which has identical code
    SoftwarePix3D OffscreenSoftwarePixToolkit::GetPix3D();

    // 0x1001d07d0: the linker folded this into jag::graphics::SceneViewData::GetViewFrustum() const, which has identical code
    OffscreenSoftwarePixToolkit::GetWorldRenderer();

    // 0x100211950, 32 bytes, inline, placed by class name and debug map
    // OffscreenSoftwarePixToolkit::SetDestination(Pix32&)
    void OffscreenSoftwarePixToolkit::SetDestination(Pix32* param_1) {
        SetDestination(this, (SharedArray*)param_1, param_1->field_24, param_1->field_28);
    }

    // 0x100214cd0, 16 bytes, complete-object constructor, inline, placed by class name
    // OffscreenSoftwarePixToolkit::OffscreenSoftwarePixToolkit(): jumps straight to the base-object constructor

    // 0x100216f30, 64 bytes, inline, placed by class name
    // OffscreenSoftwarePixToolkit::SetDestination(SharedArray<unsigned int>&, int, int)
    void OffscreenSoftwarePixToolkit::SetDestination(SharedArray* param_1, int param_2, int param_3) {
        (field_8, param_1, param_2, param_3)->SetPixels();
        (m_pix3D, param_1, param_2, param_3)->SetDest();
    }

    // 0x100217560, 144 bytes, base-object constructor, inline, placed by class name
    // OffscreenSoftwarePixToolkit::OffscreenSoftwarePixToolkit()
    void OffscreenSoftwarePixToolkit::OffscreenSoftwarePixToolkit() {
        new (this) PixToolkit<NXTPix2D, dash3d::SoftwarePix3D>();
        field_0 = PTR_vtable_100ee8c50 + 16;
        new (field_8, 0, 0) NXTPix2D();
        new (m_pix3D, (SharedArray*)(field_8 + 32), 0, 0) dash3d::SoftwarePix3D();
        new (m_pWorldRenderer, (SoftwarePix3D*)m_pix3D) dash3d::SoftwareWorldRenderer();
    }

    // 0x100217640, 112 bytes, inline, placed by class name
    // OffscreenSoftwarePixToolkit::SetScreenSize(int, int)
    void OffscreenSoftwarePixToolkit::SetScreenSize(int param_1, int param_2) {
        SharedArray<unsigned int> local_40[24];

        SharedArray<unsigned int>::SharedArray(local_40, (long)(param_2 * param_1));
        SetDestination(this, (SharedArray*)local_40, param_1, param_2);
        local_40->~SharedArray();
    }

    // 0x1002176b0, 48 bytes, inline, placed by class name
    // OffscreenSoftwarePixToolkit::Render(int, int, int, int)
    void OffscreenSoftwarePixToolkit::Render(int param_1, int param_2, int param_3, int param_4) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                        "graphics/OffscreenSoftwarePixToolkit.h",
                        74, "What part of \"Offscreen\" do you not understand?");
    }

    // 0x1002176e0, 48 bytes, inline, placed by class name
    // OffscreenSoftwarePixToolkit::Render(int, int)
    void OffscreenSoftwarePixToolkit::Render(int param_1, int param_2) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                        "graphics/OffscreenSoftwarePixToolkit.h",
                        80, "What part of \"Offscreen\" do you not understand?");
    }

    // 0x10022fbd0, 16 bytes, complete-object destructor, inline, placed by class name
    // OffscreenSoftwarePixToolkit::~OffscreenSoftwarePixToolkit(): jumps straight to the base-object destructor

    // 0x100243a60, 64 bytes, base-object destructor, inline, placed by class name
    // OffscreenSoftwarePixToolkit::~OffscreenSoftwarePixToolkit()
    void OffscreenSoftwarePixToolkit::~OffscreenSoftwarePixToolkit() {
        field_0 = PTR_vtable_100ee8c50 + 16;
        m_pix3D->~SoftwarePix3D();
        field_8->~NXTPix2D();
    }

} // namespace jag::oldscape::graphics

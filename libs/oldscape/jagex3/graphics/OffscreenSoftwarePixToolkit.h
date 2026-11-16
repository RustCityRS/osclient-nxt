// libs/oldscape/jagex3/graphics/OffscreenSoftwarePixToolkit.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.system.osclient

namespace jag::oldscape::graphics {
    class OffscreenSoftwarePixToolkit {
    public:
        // virtual methods in vtable order
        virtual void GetPix2D();
        virtual SoftwarePix3D GetPix3D();
        virtual void SetScreenSize(int arg1, int arg2);
        virtual void Render(int arg1, int arg2, int arg3, int arg4);
        virtual void Render(int arg1, int arg2);
        virtual void Set2DOnlyFrame();
        void SetGamma(float arg1);
        float* GetWorldRenderer();
        void SetDestination(Pix32& pix32);
        OffscreenSoftwarePixToolkit();
        void SetDestination(SharedArray<unsigned int>& sharedArray, int arg2, int arg3);
        ~OffscreenSoftwarePixToolkit();

    private:
        Pix2D field_8;
        uint8_t _unknown_48[16];
        SoftwarePix3D m_pix3D;
        uint8_t m_pWorldRenderer[4];
        uint8_t _unknown_212[6437244];
    };

    // 0x100009d50: OffscreenSoftwarePixToolkit::GetPix2D() has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x100009e70: OffscreenSoftwarePixToolkit::Set2DOnlyFrame() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: OffscreenSoftwarePixToolkit::SetGamma(float) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100049810: OffscreenSoftwarePixToolkit::GetPix3D() has the same machine code as option::Option<WindowSavedPosition>::GetDefaultValue() const

    // 0x1001d07d0: OffscreenSoftwarePixToolkit::GetWorldRenderer() has the same machine code as jag::graphics::SceneViewData::GetViewFrustum() const

    // 0x100211950
    void OffscreenSoftwarePixToolkit::SetDestination(Pix32& pix32) {
        SetDestination(pix32, pix32.field_24, pix32.field_28);
    }

    // 0x100216f30
    void OffscreenSoftwarePixToolkit::SetDestination(SharedArray<unsigned int>& sharedArray, int arg2, int arg3) {
        field_8->SetPixels(sharedArray, arg2, arg3);
        m_pix3D->SetDest(sharedArray, arg2, arg3);
    }

    // 0x100217560
    OffscreenSoftwarePixToolkit::OffscreenSoftwarePixToolkit()
        : PixToolkit<NXTPix2D, dash3d::SoftwarePix3D>(), field_8(0, 0), m_pix3D(*((this->field_8 + 32)), 0, 0),
          m_pWorldRenderer(this->m_pix3D) {}

    // 0x100217640
    void OffscreenSoftwarePixToolkit::SetScreenSize(int arg1, int arg2) {

        SharedArray<unsigned int> local_40((long)(arg2 * arg1));
        SetDestination(local_40, arg1, arg2);
    }

    // 0x1002176b0
    void OffscreenSoftwarePixToolkit::Render(int arg1, int arg2, int arg3, int arg4) {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                        "graphics/OffscreenSoftwarePixToolkit.h",
                        74, "What part of \"Offscreen\" do you not understand?");
    }

    // 0x1002176e0
    void OffscreenSoftwarePixToolkit::Render(int arg1, int arg2) {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                        "graphics/OffscreenSoftwarePixToolkit.h",
                        80, "What part of \"Offscreen\" do you not understand?");
    }

    // 0x100243a60
    OffscreenSoftwarePixToolkit::~OffscreenSoftwarePixToolkit() {
        m_pix3D->~SoftwarePix3D();
        field_8->~NXTPix2D();
    }

} // namespace jag::oldscape::graphics

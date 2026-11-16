// libs/graphics/runetek7/gui/ScaleManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ScaleManager {
    public:
        // virtual methods in vtable order
        virtual ~ScaleManager();
        virtual void OnWindowResize(math::Rect<unsigned int> const&);
        int GetTmpDPI() const;
        float GetSubScaleFactor() const;
        float GetGameScale();
        void RequestInterfaceScaleOverride(unsigned int);
        ScaleManager(RT7Core&);
        void UpdateInterfaceScaleFactors();
        void MainLogic();
        void SetInterfaceScaleOverride(unsigned int);
        void MainDraw();
        void SetGameScale(float);
        void SetInterfaceResolutionOverride(int, int);
        void ResetInterfaceResolutionOverride();
        void ResetInterfaceScaleOverride();
        void SetInterfaceDPIOverride(int, bool);
        void SetInterfaceDPIOverrideInternal(int, bool);
        void ResetInterfaceDPIOverride();
        void SetZoomRect(int, int, int, int);
        void ResetZoomRect();
        void ScreenToInterfaceSize(int, bool) const;
        float ScreenToInterfaceSize(float, bool) const;
        void ScreenToInterfacePosition(int&, int&, bool) const;
        void ScreenToInterfacePosition(float&, float&, bool) const;
        void ScreenToInterfaceRect(math::Rect<int>&, bool) const;
        void ScreenToInterfaceRect(math::Rect<float>&, bool) const;
        void ScreenToInterfaceInsets(math::Rect<int>&, bool) const;
        void InterfaceToScreenSize(int, bool) const;
        float InterfaceToScreenSize(float, bool) const;
        void InterfaceToScreenPosition(int&, int&, bool) const;
        void InterfaceToScreenPosition(float&, float&, bool) const;
        void InterfaceToScreenRect(math::Rect<int>&, bool) const;
        void InterfaceToScreenRect(math::Rect<float>&, bool) const;
        void SetTmpDPI(int, bool);
        static /* 4 bytes */ OVERRIDE_INTERFACE_WIDTH_MIN;            // = 100
        static /* 4 bytes */ OVERRIDE_INTERFACE_WIDTH_MAX;            // = 16000
        static /* 4 bytes */ OVERRIDE_INTERFACE_HEIGHT_MIN;           // = 100
        static /* 4 bytes */ OVERRIDE_INTERFACE_HEIGHT_MAX;           // = 12000
        static /* 4 bytes */ OVERRIDE_INTERFACE_SCALE_MIN;            // = 10
        static /* 4 bytes */ OVERRIDE_INTERFACE_SCALE_MAX;            // = 400
        static /* 4 bytes */ OVERRIDE_INTERFACE_SCALE_DEFAULT;        // = 100
        static /* 4 bytes */ OVERRIDE_INTERFACE_SCALE_LIMIT_WIDTH;    // = 800
        static /* 296 bytes */ OVERRIDE_INTERFACE_SCALE_LIMIT_HEIGHT; // initialised in its definition

        // data members, from how the methods use this: 26176 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined1 field_8;  // offset 8
        char _unknown_9[3];
        undefined4 field_12; // offset 12
        float field_16;      // offset 16
        char _unknown_20[4];
        RT7Core* field_24;   // offset 24
        undefined1 field_32; // offset 32
        char _unknown_33[3];
        float m_gameScale; // offset 36
        float field_40;    // offset 40
        uint field_44;     // offset 44
        char _unknown_48[16];
        float field_64;             // offset 64
        float field_68;             // offset 68
        float field_72;             // offset 72
        float field_76;             // offset 76
        float field_80;             // offset 80
        float field_84;             // offset 84
        float m_subScaleFactor;     // offset 88
        int m_interfaceDPIOverride; // offset 92
        int m_tmpDPI;               // offset 96
        char _unknown_100[26076];
    };

    // 0x1005ffdf0, 16 bytes, inline, placed by class name and debug map
    // ScaleManager::RequestInterfaceScaleOverride(unsigned int)
    void ScaleManager::RequestInterfaceScaleOverride(uint param_1) {
        field_44 = param_1;
    }

    // 0x1008fdf40, 16 bytes, complete-object destructor, inline, placed by class name
    // ScaleManager::~ScaleManager(): jumps straight to the base-object destructor

    // 0x1008fdf50, 32 bytes, deleting destructor, inline, placed by class name
    // ScaleManager::~ScaleManager()
    void ScaleManager::~ScaleManager() {
        ~ScaleManager(this);
        operator_delete(this);
    }

    // 0x100904f30, 16 bytes, base-object destructor, inline, placed by class name
    // ScaleManager::~ScaleManager()
    void ScaleManager::~ScaleManager() {
        ~RenderDeviceCallback();
    }

} // namespace jag::graphics

// libs/graphics/runetek7/gui/ScaleManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ScaleManager {
    public:
        // virtual methods in vtable order
        virtual ~ScaleManager();
        virtual void OnWindowResize(const math::Rect<unsigned int>& rect);
        int GetTmpDPI() const;
        float GetSubScaleFactor() const;
        float GetGameScale();
        void RequestInterfaceScaleOverride(unsigned int arg1);
        ScaleManager(RT7Core& rt7Core);
        void UpdateInterfaceScaleFactors();
        void MainLogic();
        void SetInterfaceScaleOverride(unsigned int arg1);
        void MainDraw();
        void SetGameScale(float arg1);
        void SetInterfaceResolutionOverride(int arg1, int arg2);
        void ResetInterfaceResolutionOverride();
        void ResetInterfaceScaleOverride();
        void SetInterfaceDPIOverride(int arg1, bool arg2);
        void SetInterfaceDPIOverrideInternal(int arg1, bool arg2);
        void ResetInterfaceDPIOverride();
        void SetZoomRect(int arg1, int arg2, int arg3, int arg4);
        void ResetZoomRect();
        void ScreenToInterfaceSize(int arg1, bool arg2) const;
        float ScreenToInterfaceSize(float arg1, bool arg2) const;
        void ScreenToInterfacePosition(int& arg1, int& arg2, bool arg3) const;
        void ScreenToInterfacePosition(float& arg1, float& arg2, bool arg3) const;
        void ScreenToInterfaceRect(math::Rect<int>& rect, bool arg2) const;
        void ScreenToInterfaceRect(math::Rect<float>& rect, bool arg2) const;
        void ScreenToInterfaceInsets(math::Rect<int>& rect, bool arg2) const;
        void InterfaceToScreenSize(int arg1, bool arg2) const;
        float InterfaceToScreenSize(float arg1, bool arg2) const;
        void InterfaceToScreenPosition(int& arg1, int& arg2, bool arg3) const;
        void InterfaceToScreenPosition(float& arg1, float& arg2, bool arg3) const;
        void InterfaceToScreenRect(math::Rect<int>& rect, bool arg2) const;
        void InterfaceToScreenRect(math::Rect<float>& rect, bool arg2) const;
        void SetTmpDPI(int arg1, bool arg2);
        static int32_t OVERRIDE_INTERFACE_WIDTH_MIN;              // = 100
        static int32_t OVERRIDE_INTERFACE_WIDTH_MAX;              // = 16000
        static int32_t OVERRIDE_INTERFACE_HEIGHT_MIN;             // = 100
        static int32_t OVERRIDE_INTERFACE_HEIGHT_MAX;             // = 12000
        static int32_t OVERRIDE_INTERFACE_SCALE_MIN;              // = 10
        static int32_t OVERRIDE_INTERFACE_SCALE_MAX;              // = 400
        static int32_t OVERRIDE_INTERFACE_SCALE_DEFAULT;          // = 100
        static int32_t OVERRIDE_INTERFACE_SCALE_LIMIT_WIDTH;      // = 800
        static int32_t OVERRIDE_INTERFACE_SCALE_LIMIT_HEIGHT[74]; // initialised in its definition

    private:
        uint8_t field_8;
        uint8_t _unknown_9[3];
        uint32_t field_12;
        float field_16;
        uint8_t _unknown_20[4];
        RT7Core* field_24;
        uint8_t field_32;
        uint8_t _unknown_33[3];
        float m_gameScale;
        float field_40;
        unsigned int field_44;
        uint8_t _unknown_48[16];
        float field_64;
        float field_68;
        float field_72;
        float field_76;
        float field_80;
        float field_84;
        float m_subScaleFactor;
        uint32_t m_interfaceDPIOverride;
        int m_tmpDPI;
        uint8_t _unknown_100[26076];
    };

    // 0x1005ffdf0
    void ScaleManager::RequestInterfaceScaleOverride(unsigned int arg1) {
        field_44 = arg1;
    }

    // 0x100904f30
    ScaleManager::~ScaleManager() {}

} // namespace jag::graphics

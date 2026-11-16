// libs/game/runetek5/config/iftype/components/ModelGroup.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class ModelGroup : public ui::ComponentCollection // base inferred from shared vtable slots
    {
    public:
        class CameraInfo;
        // virtual methods in vtable order
        virtual ~ModelGroup();
        virtual uint64_t GetType() const;
        virtual uint64_t SupportsScrolling() const;
        virtual void SetScrollPos(int arg1, int arg2);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2);
        virtual bool SupportsChildComponentType(ui::ComponentType componentType) const;
        virtual void OnDeviceLost();
        void SetScrollSize(int arg1, int arg2);
        void UpdateCameraTransition();
        int AddCamera();
        void SetActiveCamera(int arg1, TransitionType transitionType, int arg3, unsigned int arg4);
        void DeleteCamera(int arg1);

    private:
        uint8_t _unknown_544[40];
        int field_584;
        int field_588;
        uint8_t _unknown_592[8];
    };

    class ModelGroup::CameraInfo {
    public:
        void SetUseLookAt(bool arg1);
        CameraInfo();
        ~CameraInfo();
        void SetPosition(const math::Vector3T<float>& vector3, unsigned int arg2);
        void SetLookAt(const math::Vector3T<float>& vector3, unsigned int arg2);
        void SetYawPitchRoll(const math::Vector3T<float>& vector3, unsigned int arg2);
        void SetFOV(float arg1, unsigned long long arg2);
        void SetClipPlanes(float arg1, float arg2);
        void SetClearColour(math::Vector4T<float> vector4);
        void SetSortByComponentOrder(bool arg1);
        void ResetTextures();
        bool IsTransitioning() const;
        bool IsTransitionComplete() const;
        void ClearTransition();
        void StartTransition(TransitionType transitionType, int arg2, unsigned int arg3);
        CameraInfo(CameraInfo&& cameraInfo);
        float GetTransitionRatio() const;
        uint8_t* GetTransitionMaskTexture(Js5ResourceProvider& js5ResourceProvider);
        static float DEFAULT_CLIP_PLANE_NEAR; // = 10.0f
        static float DEFAULT_CLIP_PLANE_FAR;  // = 10000.0f
        static float DEFAULT_FOV;             // = 90.0f

    private:
        uint8_t field_0;
        bool m_sortByComponentOrder;
        uint8_t _unknown_2[2];
        TransitionType field_4;
        int field_8;
        float m_clipPlanes;
        float field_16;
        uint8_t _unknown_20[12];
        long field_32;
        unsigned long field_40;
        uint64_t field_48;
        uint64_t field_56;
        uint64_t field_64;
        uint64_t field_72;
        uint64_t field_80;
        uint64_t field_88;
        uint64_t field_96;
        uint64_t field_104;
        uint64_t field_112;
        uint64_t field_120;
        uint64_t field_128;
        uint64_t field_136;
        uint64_t field_144;
        uint64_t field_152;
        uint64_t field_160;
        uint64_t field_168;
        uint64_t field_176;
        uint64_t field_184;
        uint64_t field_192;
        uint64_t field_200;
        uint64_t field_208;
        uint64_t field_216;
        uint64_t field_224;
        uint64_t field_232;
    };

    // 0x100536ce0
    void ModelGroup::CameraInfo::SetPosition(const math::Vector3T<float>& vector3, unsigned int arg2) {
        unsigned long long arg3 = FrameTime::GetCurrentTimeMS();
        field_96.SetValue(vector3, (unsigned long)arg2, arg3);
    }

    // 0x100536d30
    void ModelGroup::CameraInfo::SetLookAt(const math::Vector3T<float>& vector3, unsigned int arg2) {
        unsigned long long arg3 = FrameTime::GetCurrentTimeMS();
        field_144.SetValue(vector3, (unsigned long)arg2, arg3);
    }

    // 0x100536d70
    void ModelGroup::CameraInfo::SetYawPitchRoll(const math::Vector3T<float>& vector3, unsigned int arg2) {
        unsigned long long arg3 = FrameTime::GetCurrentTimeMS();
        field_192.SetValue(vector3, (unsigned long)arg2, arg3);
    }

    // 0x100536db0
    void ModelGroup::CameraInfo::SetFOV(float arg1, unsigned long long arg2) {
        unsigned long long arg3 = FrameTime::GetCurrentTimeMS();
        field_64.SetValue(arg1, arg2, arg3);
    }

    // 0x100536df0
    void ModelGroup::CameraInfo::SetClipPlanes(float arg1, float arg2) {
        m_clipPlanes = arg1;
        field_16 = arg2;
    }

    // 0x100536e00
    void ModelGroup::CameraInfo::SetClearColour(math::Vector4T<float> vector4) {
        QuaternionT<float> local_18;

        (*((vector4 + 48))) = local_18;
    }

    // 0x100536e30
    void ModelGroup::CameraInfo::SetSortByComponentOrder(bool arg1) {
        m_sortByComponentOrder = arg1;
    }

    // 0x100536fe0
    bool ModelGroup::CameraInfo::IsTransitioning() const {
        return field_32 != field_40;
    }

    // 0x100537000
    bool ModelGroup::CameraInfo::IsTransitionComplete() const {
        unsigned long uVar1 = FrameTime::GetCurrentTimeMS();
        return field_40 <= uVar1;
    }

    // 0x10053c320
    bool ModelGroup::SupportsChildComponentType(ui::ComponentType componentType) const {
        return (char)componentType == '\x04';
    }

    // 0x10053d640
    ModelGroup::CameraInfo::CameraInfo() : field_0(0), m_sortByComponentOrder(false), field_4(0), field_8(-1) {
        m_clipPlanes = *(float*)PTR_DEFAULT_CLIP_PLANE_NEAR_100ee65d0;
        field_16 = *(float*)PTR_DEFAULT_CLIP_PLANE_FAR_100ee65c8;
        field_24.unique_ptr<true, void>();
        field_32 = 0;
        field_40 = 0;
        uint64_t uVar1 = *(uint64_t*)(PTR_ZERO_100ee6708 + 8);
        field_48 = *(uint64_t*)PTR_ZERO_100ee6708;
        field_56 = uVar1;
        new (&field_64) math::Transitionable<float>(*PTR_DEFAULT_FOV_100ee65c0);
        new (&field_96) math::Transitionable<math::Vector3T<float>>();
        new (&field_144) math::Transitionable<math::Vector3T<float>>();
        new (&field_192) math::Transitionable<math::Vector3T<float>>();
    }

    // 0x10053d6f0
    ModelGroup::CameraInfo::~CameraInfo() {
        ResetTextures();
        field_24.~unique_ptr();
    }

} // namespace jag::game

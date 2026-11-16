// libs/game/runetek5/config/iftype/components/ModelGroup.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class ModelGroup : public ui::ComponentCollection // base inferred from shared vtable slots
    {
    public:
        class CameraInfo;
        // virtual methods in vtable order
        virtual ~ModelGroup();
        virtual GetType() const;
        virtual SupportsScrolling() const;
        virtual SetScrollPos(int, int);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        virtual bool SupportsChildComponentType(ui::ComponentType) const;
        virtual void OnDeviceLost();
        SetScrollSize(int, int);
        void UpdateCameraTransition();
        int AddCamera();
        void SetActiveCamera(int, TransitionType, int, unsigned int);
        void DeleteCamera(int);

        // data members, from how the methods use this: 832 bytes, the first 544 are ComponentCollection
        char _unknown_544[40];
        int field_584;        // offset 584
        int field_588;        // offset 588
        CameraInfo field_592; // offset 592
    };

    class ModelGroup::CameraInfo {
    public:
        SetUseLookAt(bool);
        CameraInfo();
        ~CameraInfo();
        void SetPosition(math::Vector3T<float> const&, unsigned int);
        void SetLookAt(math::Vector3T<float> const&, unsigned int);
        void SetYawPitchRoll(math::Vector3T<float> const&, unsigned int);
        void SetFOV(float, unsigned long long);
        void SetClipPlanes(float, float);
        void SetClearColour(math::Vector4T<float>);
        void SetSortByComponentOrder(bool);
        void ResetTextures();
        IsTransitioning() const;
        bool IsTransitionComplete() const;
        void ClearTransition();
        void StartTransition(TransitionType, int, unsigned int);
        CameraInfo(CameraInfo&&);
        float GetTransitionRatio() const;
        GetTransitionMaskTexture(Js5ResourceProvider&);
        static float /* 4 bytes */ DEFAULT_CLIP_PLANE_NEAR; // = 10.0f
        static float /* 4 bytes */ DEFAULT_CLIP_PLANE_FAR;  // = 10000.0f
        static float /* 4 bytes */ DEFAULT_FOV;             // = 90.0f

        // data members, from how the methods use this: 240 bytes
        undefined1 field_0;          // offset 0
        bool m_sortByComponentOrder; // offset 1
        char _unknown_2[2];
        undefined4 field_4; // offset 4
        int field_8;        // offset 8
        float m_clipPlanes; // offset 12
        float field_16;     // offset 16
        char _unknown_20[12];
        long field_32;        // offset 32
        ulong field_40;       // offset 40
        undefined8 field_48;  // offset 48
        undefined8 field_56;  // offset 56
        undefined8 field_64;  // offset 64
        undefined8 field_72;  // offset 72
        undefined8 field_80;  // offset 80
        undefined8 field_88;  // offset 88
        undefined8 field_96;  // offset 96
        undefined8 field_104; // offset 104
        undefined8 field_112; // offset 112
        undefined8 field_120; // offset 120
        undefined8 field_128; // offset 128
        undefined8 field_136; // offset 136
        undefined8 field_144; // offset 144
        undefined8 field_152; // offset 152
        undefined8 field_160; // offset 160
        undefined8 field_168; // offset 168
        undefined8 field_176; // offset 176
        undefined8 field_184; // offset 184
        undefined8 field_192; // offset 192
        undefined8 field_200; // offset 200
        undefined8 field_208; // offset 208
        undefined8 field_216; // offset 216
        undefined8 field_224; // offset 224
        undefined8 field_232; // offset 232
    };

    // 0x100536c10, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ModelGroup::CameraInfo::CameraInfo(): jumps straight to the base-object constructor

    // 0x100536c20, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ModelGroup::CameraInfo::~CameraInfo(): jumps straight to the base-object destructor

    // 0x100536ce0, 64 bytes, inline, placed by class name and debug map
    // ModelGroup::CameraInfo::SetPosition(math::Vector3T<float> const&, unsigned int)
    void ModelGroup::CameraInfo::SetPosition(Vector3T* param_1, uint param_2) {
        ulonglong uVar1;

        uVar1 = FrameTime::GetCurrentTimeMS();
        (&field_96, param_1, (ulong)param_2, uVar1)->SetValue();
    }

    // 0x100536d30, 64 bytes, inline, placed by class name and debug map
    // ModelGroup::CameraInfo::SetLookAt(math::Vector3T<float> const&, unsigned int)
    void ModelGroup::CameraInfo::SetLookAt(Vector3T* param_1, uint param_2) {
        ulonglong uVar1;

        uVar1 = FrameTime::GetCurrentTimeMS();
        (&field_144, param_1, (ulong)param_2, uVar1)->SetValue();
    }

    // 0x100536d70, 64 bytes, inline, placed by class name and debug map
    // ModelGroup::CameraInfo::SetYawPitchRoll(math::Vector3T<float> const&, unsigned int)
    void ModelGroup::CameraInfo::SetYawPitchRoll(Vector3T* param_1, uint param_2) {
        ulonglong uVar1;

        uVar1 = FrameTime::GetCurrentTimeMS();
        (&field_192, param_1, (ulong)param_2, uVar1)->SetValue();
    }

    // 0x100536db0, 64 bytes, inline, placed by class name and debug map
    // ModelGroup::CameraInfo::SetFOV(float, unsigned long long)
    void ModelGroup::CameraInfo::SetFOV(float param_1, ulonglong param_2) {
        ulonglong uVar1;
        float local_1c;

        local_1c = param_1;
        uVar1 = FrameTime::GetCurrentTimeMS();
        (&field_64, &local_1c, param_2, uVar1)->SetValue();
    }

    // 0x100536df0, 16 bytes, inline, placed by class name and debug map
    // ModelGroup::CameraInfo::SetClipPlanes(float, float)
    void ModelGroup::CameraInfo::SetClipPlanes(float param_1, float param_2) {
        m_clipPlanes = param_1;
        field_16 = param_2;
    }

    // 0x100536e00, 48 bytes, inline, placed by class name and debug map
    // ModelGroup::CameraInfo::SetClearColour(math::Vector4T<float>)
    void ModelGroup::CameraInfo::SetClearColour(undefined8 param_1, undefined8 param_2, long param_3) {
        undefined8 local_18;
        undefined8 uStack_10;

        local_18 = param_1;
        uStack_10 = param_2;
        math::Rect<float>::operator=((Rect<float>*)(param_3 + 48), (Rect*)&local_18);
    }

    // 0x100536e30, 16 bytes, inline, placed by class name and debug map
    // ModelGroup::CameraInfo::SetSortByComponentOrder(bool)
    void ModelGroup::CameraInfo::SetSortByComponentOrder(bool param_1) {
        m_sortByComponentOrder = param_1;
    }

    // 0x100536fe0, 32 bytes, inline, placed by class name and debug map
    // ModelGroup::CameraInfo::IsTransitioning() const
    undefined8 ModelGroup::CameraInfo::IsTransitioning() {
        return CONCAT71((int7)((ulong)field_32 >> 8), field_32 != field_40);
    }

    // 0x100537000, 32 bytes, inline, placed by class name and debug map
    // ModelGroup::CameraInfo::IsTransitionComplete() const
    bool ModelGroup::CameraInfo::IsTransitionComplete() {
        ulong uVar1;

        uVar1 = FrameTime::GetCurrentTimeMS();
        return field_40 <= uVar1;
    }

    // 0x10053c320, 16 bytes, inline, placed by class name
    // ModelGroup::SupportsChildComponentType(ui::ComponentType) const
    bool ModelGroup::SupportsChildComponentType(undefined8 param_1, char param_2) {
        return param_2 == '\x04';
    }

    // 0x10053d640, 176 bytes, base-object constructor, inline, placed by class name
    // ModelGroup::CameraInfo::CameraInfo()
    void ModelGroup::CameraInfo::CameraInfo() {
        undefined8 uVar1;

        field_0 = 0;
        m_sortByComponentOrder = false;
        field_4 = 0;
        field_8 = -1;
        m_clipPlanes = *(float*)PTR_DEFAULT_CLIP_PLANE_NEAR_100ee65d0;
        field_16 = *(float*)PTR_DEFAULT_CLIP_PLANE_FAR_100ee65c8;
        std::unique_ptr<render::Texture2D, std::default_delete<render::Texture2D>>::unique_ptr<true, void>(
            (unique_ptr<render::Texture2D, std::default_delete<render::Texture2D>>*)&field_24);
        field_32 = 0;
        field_40 = 0;
        uVar1 = *(undefined8*)(PTR_ZERO_100ee6708 + 8);
        field_48 = *(undefined8*)PTR_ZERO_100ee6708;
        field_56 = uVar1;
        new (&field_64, (float*)PTR_DEFAULT_FOV_100ee65c0) math::Transitionable<float>();
        new (&field_96) math::Transitionable<math::Vector3T<float>>();
        new (&field_144) math::Transitionable<math::Vector3T<float>>();
        new (&field_192) math::Transitionable<math::Vector3T<float>>();
    }

    // 0x10053d6f0, 48 bytes, base-object destructor, inline, placed by class name
    // ModelGroup::CameraInfo::~CameraInfo()
    void ModelGroup::CameraInfo::~CameraInfo() {
        ResetTextures(this);
        (&field_24)->~unique_ptr();
    }

} // namespace jag::game

namespace jag::math {
    // 0x100536d20, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Vector3T<int>::Vector3T(PacketT<Array<unsigned char, eastl::allocator> >&, bool): jumps straight to the base-object constructor

} // namespace jag::math

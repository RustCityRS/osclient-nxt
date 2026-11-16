// libs/game/runetek5/animation/RT5AnimationResourceManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class RT5AnimationResourceManager {
    public:
        class LoadInfo;
        // virtual methods in vtable order
        virtual ~RT5AnimationResourceManager();
        virtual void Update();
        virtual void RequestResources(graphics::AnimationStateResourceList& animationStateResourceList);
        shared_ptr GetModel() const;
        void SetModel(const shared_ptr<graphics::Model>& model);
        void SetBASType(const shared_ptr<BASType>& basType);
        RT5AnimationResourceManager(AssetBuilder& assetBuilder, const ConfigProvider& configProvider);
        void LoadAnimations();
        unsigned long LoadResource(graphics::AnimationResource& animationResource, LoadInfo& loadInfo,
                                   BASType* basType);

    private:
        AnimationStateResourceList* field_8;
        uint8_t _unknown_16[32];
        AssetBuilder* field_48;
        ConfigProvider* field_56;
        shared_ptr m_model;
        uint8_t _unknown_80[8];
    };

    class RT5AnimationResourceManager::LoadInfo {
    public:
        LoadInfo();
        ~LoadInfo();

    private:
        uint8_t _unknown_0[16];
        uint32_t field_16;
        uint8_t _unknown_20[4];
        ActiveComponent field_24;
    };

    // 0x1003f2ca0
    void RT5AnimationResourceManager::SetModel(const shared_ptr<graphics::Model>& model) {
        *m_model = model;
    }

    // 0x1003f2cb0
    void RT5AnimationResourceManager::SetBASType(const shared_ptr<BASType>& basType) {
        (&field_80)->operator=(basType);
    }

    // 0x10065b340
    RT5AnimationResourceManager::~RT5AnimationResourceManager() {
        field_80.~weak_ptr();
        m_model->~shared_ptr();
    }

    // 0x10065d850
    RT5AnimationResourceManager::LoadInfo::LoadInfo() : shared_ptr(), field_16(0) {}

    // 0x10065d930
    RT5AnimationResourceManager::LoadInfo::~LoadInfo() {
        field_24->~ActiveComponent();
    }

} // namespace jag::game

namespace jag::math {
    // 0x1003f35e0
    Vector3T<float> Vector3FromVector3T<double>(const Vector3T<double>& vector3) {
        uint64_t uVar2;

        auto pdVar1 = vector3.SSOBeginPtr();
        float local_18 = (float)*pdVar1;
        pdVar1 = (double*)vector3.second();
        float local_14 = (float)*pdVar1;
        pdVar1 = (double*)vector3.GetScreen();
        ColourHSL local_28(local_18, local_14, (float)*pdVar1);
        uVar2._0_4_ = local_28.field_0;
        uVar2._4_4_ = local_28.field_4;
        return uVar2;
    }

} // namespace jag::math

// libs/game/runetek5/animation/RT5AnimationResourceManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class RT5AnimationResourceManager {
    public:
        class LoadInfo;
        // virtual methods in vtable order
        virtual ~RT5AnimationResourceManager();
        virtual void Update();
        virtual void RequestResources(graphics::AnimationStateResourceList&);
        shared_ptr GetModel() const;
        void SetModel(shared_ptr<graphics::Model> const&);
        void SetBASType(shared_ptr<BASType> const&);
        RT5AnimationResourceManager(AssetBuilder&, ConfigProvider const&);
        void LoadAnimations();
        ulong LoadResource(graphics::AnimationResource&, LoadInfo&, BASType*);

        // data members, from how the methods use this: 88 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[40];
        AssetBuilder* field_48;   // offset 48
        ConfigProvider* field_56; // offset 56
        shared_ptr m_model;       // offset 64
        char _unknown_80[8];
    };

    class RT5AnimationResourceManager::LoadInfo {
    public:
        LoadInfo();
        ~LoadInfo();

        // data members, from how the methods use this: 48 bytes
        char _unknown_0[16];
        undefined4 field_16; // offset 16
        char _unknown_20[4];
        ActiveComponent field_24; // offset 24
    };

    // 0x1003f2ca0, 16 bytes, inline, placed by class name and debug map
    // RT5AnimationResourceManager::SetModel(shared_ptr<graphics::Model> const&)
    void RT5AnimationResourceManager::SetModel(shared_ptr* param_1) {
        shared_ptr<graphics::Model>::operator=((shared_ptr<graphics::Model>*)m_model, param_1);
    }

    // 0x1003f2cb0, 16 bytes, inline, placed by class name and debug map
    // RT5AnimationResourceManager::SetBASType(shared_ptr<BASType> const&)
    void RT5AnimationResourceManager::SetBASType(shared_ptr* param_1) {
        weak_ptr<BASType>::operator=((weak_ptr<BASType>*)&field_80, param_1);
    }

    // 0x10065ab70, 16 bytes, complete-object destructor, inline, placed by class name
    // RT5AnimationResourceManager::~RT5AnimationResourceManager(): jumps straight to the base-object destructor

    // 0x10065ab80, 32 bytes, deleting destructor, inline, placed by class name
    // RT5AnimationResourceManager::~RT5AnimationResourceManager()
    void RT5AnimationResourceManager::~RT5AnimationResourceManager() {
        ~RT5AnimationResourceManager(this);
        operator_delete(this);
    }

    // 0x10065b340, 64 bytes, base-object destructor, inline, placed by class name
    // RT5AnimationResourceManager::~RT5AnimationResourceManager()
    void RT5AnimationResourceManager::~RT5AnimationResourceManager() {
        field_0 = &PTR__RT5AnimationResourceManager_100f0da10;
        (&field_80)->~weak_ptr();
        m_model->~shared_ptr();
        (&field_8)->~vector_map();
        ~AutoSingleton();
    }

    // 0x10065d840, 16 bytes, complete-object constructor, inline, placed by class name
    // RT5AnimationResourceManager::LoadInfo::LoadInfo(): jumps straight to the base-object constructor

    // 0x10065d850, 64 bytes, base-object constructor, inline, placed by class name
    // RT5AnimationResourceManager::LoadInfo::LoadInfo()
    void RT5AnimationResourceManager::LoadInfo::LoadInfo() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        field_16 = 0;
        new (field_24) BuildRequest<graphics::Animation, BuildAnimationMain>();
    }

    // 0x10065d920, 16 bytes, complete-object destructor, inline, placed by class name
    // RT5AnimationResourceManager::LoadInfo::~LoadInfo(): jumps straight to the base-object destructor

    // 0x10065d930, 48 bytes, base-object destructor, inline, placed by class name
    // RT5AnimationResourceManager::LoadInfo::~LoadInfo()
    void RT5AnimationResourceManager::LoadInfo::~LoadInfo() {
        field_24->~ActiveComponent();
        ~shared_ptr();
    }

} // namespace jag::game

namespace jag::math {
    // 0x1003f35e0, 112 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float> Vector3FromVector3T<double>(Vector3T<double> const&)
    undefined8 Vector3FromVector3T<double>(Vector3T* param_1) {
        vector* pvVar1;
        double* pdVar2;
        undefined8 uVar3;
        ColourHSL local_28;
        float local_18;
        float local_14;

        pvVar1 = SSOBeginPtr(param_1);
        local_18 = (float)*(double*)pvVar1;
        pdVar2 = (double*)second();
        local_14 = (float)*pdVar2;
        pdVar2 = (double*)GetScreen();
        new (&local_28) ColourHSL(local_18, local_14, (float)*pdVar2);
        uVar3._0_4_ = local_28.field_0;
        uVar3._4_4_ = local_28.field_4;
        return uVar3;
    }

} // namespace jag::math

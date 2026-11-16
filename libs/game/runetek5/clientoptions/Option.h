// libs/game/runetek5/clientoptions/Option.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game::option {
    template <typename...> // 18 instantiations, e.g. <int>, <LanguageID>, <jag::WindowMode>
    class Option {
    public:
        // virtual methods in vtable order
        virtual ~Option();
        virtual void LoadSetting(graphics::RT7Core&, graphics::EffectManager&, bool);
        virtual void SaveSetting();
        virtual bool IsModifiable(graphics::RT7Core const*) const;
        virtual Option<EnumTextureMode>* GetValueLabels() const;
        virtual void CanSetRawValue(int) const;
        virtual void GetRawValue() const;
        virtual void SetRawValue(int, graphics::RT7Core&, graphics::EffectManager&);
        virtual GetRawValueRange() const;
        virtual void GetDefault();
        virtual IsSafeToSet();
        Option(graphics::RT7Core&, Settings&, char const*, math::Range<EnumTextureMode>);
        void SetValue(EnumOptionToggle, graphics::RT7Core&, graphics::EffectManager&, bool);
        Option(graphics::RT7Core&, Settings&, char const*, math::Range<int>);
        Option(graphics::RT7Core&, Settings&, char const*, math::Range<EnumVolumetricLighting>);
        Option(graphics::RT7Core&, Settings&, char const*, math::Range<jag::WindowMode>);
        Option<unsigned char>* GetValueLabels() const;
        Option<EnumVolumetricLighting>* GetValueLabels() const;
        Option<jag::WindowMode>* GetValueLabels() const;
        void ApplySetting(graphics::RT7Core&, graphics::EffectManager&, EnumOptionToggle);
        void SetValue(EnumTextureMode, graphics::RT7Core&, graphics::EffectManager&, bool);
        void ApplySetting(graphics::RT7Core&, graphics::EffectManager&, EnumTextureMode);
        bool CanSetValue(EnumTextureMode) const;
        void SetValue(int, graphics::RT7Core&, graphics::EffectManager&, bool);
        void ApplySetting(graphics::RT7Core&, graphics::EffectManager&, int);
        void SetValue(EnumVolumetricLighting, graphics::RT7Core&, graphics::EffectManager&, bool);
        void ApplySetting(graphics::RT7Core&, graphics::EffectManager&, EnumVolumetricLighting);
        void SetValue(jag::WindowMode, graphics::RT7Core&, graphics::EffectManager&, bool);
        void ApplySetting(graphics::RT7Core&, graphics::EffectManager&, jag::WindowMode);
        bool CanSetValue(jag::WindowMode) const;
        Option(graphics::RT7Core&, Settings&, char const*, math::Range<EnumParticleQualityLevel>);
        Option(graphics::RT7Core&, Settings&, char const*, math::Range<unsigned int>);
        Option(graphics::RT7Core&, Settings&, char const*, math::Range<graphics::GraphicsQuality>);
        Option(graphics::RT7Core&, Settings&, char const*, math::Range<graphics::SSAOPass::Mode>);
        Option(graphics::RT7Core&, Settings&, char const*, math::Range<EnumAnisotropicFiltering>);
        Option(graphics::RT7Core&, Settings&, char const*, math::Range<EnumAntialiasingMode>);
        Option(graphics::RT7Core&, Settings&, char const*, math::Range<EnumBloom>);
        void SetValueInternal(EnumRemoveRoof);
        void SetValue(EnumAntialiasingMode, graphics::RT7Core&, graphics::EffectManager&, bool);
        void SetValue(graphics::GraphicsQuality, graphics::RT7Core&, graphics::EffectManager&, bool);
        void SetValue(EnumBloom, graphics::RT7Core&, graphics::EffectManager&, bool);
        void SetValue(EnumBrightness, graphics::RT7Core&, graphics::EffectManager&, bool);
        void SetValue(EnumRemoveRoof, graphics::RT7Core&, graphics::EffectManager&, bool);
        void SetValue(graphics::SSAOPass::Mode, graphics::RT7Core&, graphics::EffectManager&, bool);
        void SetValue(render::VSyncMode, graphics::RT7Core&, graphics::EffectManager&, bool);
        void SetValue(EnumAnisotropicFiltering, graphics::RT7Core&, graphics::EffectManager&, bool);
        void SetValue(unsigned int, graphics::RT7Core&, graphics::EffectManager&, bool);
        void SetValue(EnumAutoSetup, graphics::RT7Core&, graphics::EffectManager&, bool);
        void SetMaxLowestValue(EnumAntialiasingMode);
        void SetValue(EnumParticleQualityLevel, graphics::RT7Core&, graphics::EffectManager&, bool);
        GetSupportedValueRange() const;
        void SetValueIfLower(EnumAntialiasingMode, graphics::RT7Core&, graphics::EffectManager&);
        void SetValueIfLower(graphics::GraphicsQuality, graphics::RT7Core&, graphics::EffectManager&);
        void SetValueIfLower(EnumBloom, graphics::RT7Core&, graphics::EffectManager&);
        void SetValueIfLower(EnumOptionToggle, graphics::RT7Core&, graphics::EffectManager&);
        void SetValueIfLower(EnumTextureMode, graphics::RT7Core&, graphics::EffectManager&);
        void SetValueIfLower(graphics::SSAOPass::Mode, graphics::RT7Core&, graphics::EffectManager&);
        void SetValueIfLower(EnumAnisotropicFiltering, graphics::RT7Core&, graphics::EffectManager&);
        void SetValueIfLower(EnumVolumetricLighting, graphics::RT7Core&, graphics::EffectManager&);
        void SetValueIfLower(EnumParticleQualityLevel, graphics::RT7Core&, graphics::EffectManager&);
        Option(graphics::RT7Core&, Settings&, char const*, math::Range<EnumAutoSetup>);
        Option<EnumAutoSetup>* GetValueLabels() const;
        Option(graphics::RT7Core&, Settings&, char const*, math::Range<EnumBrightness>);
        Option<EnumBrightness>* GetValueLabels() const;
        Option(graphics::RT7Core&, Settings&, char const*, math::Range<EnumOptionToggle>);
        Option<EnumOptionToggle>* GetValueLabels() const;
        Option(graphics::RT7Core&, Settings&, char const*, math::Range<render::VSyncMode>);
        Option<render::VSyncMode>* GetValueLabels() const;
        Option(graphics::RT7Core&, Settings&, char const*, math::Range<EnumRemoveRoof>);
        Option<EnumRemoveRoof>* GetValueLabels() const;
        Option(graphics::RT7Core&, Settings&, char const*, math::Range<LanguageID>);
        Option<LanguageID>* GetValueLabels() const;
        void SetValue(LanguageID, graphics::RT7Core&, graphics::EffectManager&, bool);
        void ApplySetting(graphics::RT7Core&, graphics::EffectManager&, LanguageID);
        Option(graphics::RT7Core&, Settings&, char const*, math::Range<unsigned char>);
        GetRawValue() const;
        DetermineBestSetting(perf::PerfModuleReporter const&) const;
        GetDefault();
        bool CanSetValue(unsigned char) const;
        void SetValue(unsigned char, graphics::RT7Core&, graphics::EffectManager&, bool);
        void ApplySetting(graphics::RT7Core&, graphics::EffectManager&, unsigned char);
        Option<graphics::GraphicsQuality>* GetValueLabels() const;
        Option<EnumParticleQualityLevel>* GetValueLabels() const;
        bool CanSetValue(unsigned int) const;
        Option<graphics::SSAOPass::Mode>* GetValueLabels() const;
        Option<EnumBloom>* GetValueLabels() const;
        Option<EnumAntialiasingMode>* GetValueLabels() const;
        Option<EnumAnisotropicFiltering>* GetValueLabels() const;
        void ApplySetting(graphics::RT7Core&, graphics::EffectManager&, EnumAntialiasingMode);
        void ApplySetting(graphics::RT7Core&, graphics::EffectManager&, graphics::GraphicsQuality);
        void ApplySetting(graphics::RT7Core&, graphics::EffectManager&, EnumBloom);
        void ApplySetting(graphics::RT7Core&, graphics::EffectManager&, EnumBrightness);
        void ApplySetting(graphics::RT7Core&, graphics::EffectManager&, EnumRemoveRoof);
        void ApplySetting(graphics::RT7Core&, graphics::EffectManager&, graphics::SSAOPass::Mode);
        void ApplySetting(graphics::RT7Core&, graphics::EffectManager&, render::VSyncMode);
        void ApplySetting(graphics::RT7Core&, graphics::EffectManager&, EnumAnisotropicFiltering);
        void ApplySetting(graphics::RT7Core&, graphics::EffectManager&, unsigned int);
        void ApplySetting(graphics::RT7Core&, graphics::EffectManager&, EnumAutoSetup);
        void ApplySetting(graphics::RT7Core&, graphics::EffectManager&, EnumParticleQualityLevel);
    };

    // 0x1005f7dd0, 144 bytes, base-object constructor, inline, placed by class name and debug map
    // Option<EnumTextureMode>::Option(graphics::RT7Core&, Settings&, char const*, math::Range<EnumTextureMode>)
    void Option<EnumTextureMode>::Option(undefined8 param_2_00, undefined8 param_2, undefined8 param_3,
                                         undefined8 param_5) {
        undefined4 uVar1;
        undefined1 local_28[8];

        local_28 = (undefined1[8])param_5;
        new (this) IOption();
        *(undefined**)this = PTR_vtable_100ee8548 + 16;
        *(undefined8*)(this + 8) = param_2;
        *(undefined8*)(this + 16) = param_3;
        *(undefined4*)(this + 24) = 0;
        *(undefined1(*)[8])(this + 28) = local_28;
        uVar1 = local_28->GetZ();
        *(undefined4*)(this + 36) = uVar1;
        std::function<void(EnumTextureMode, EnumTextureMode)>::function(
            (function<void(EnumTextureMode, EnumTextureMode)>*)(this + 48));
        std::function<void(EnumTextureMode, EnumTextureMode)>::function(
            (function<void(EnumTextureMode, EnumTextureMode)>*)(this + 96));
        std::function<bool()>::function((function<bool()>*)(this + 144));
        new ((this + 192)) eastl::optional<EnumOptionToggle>();
    }

    // 0x1005f7e70, 80 bytes, base-object destructor, inline, placed by class name and debug map
    // Option<EnumTextureMode>::~Option()
    void Option<EnumTextureMode>::~Option() {
        *(undefined**)this = PTR_vtable_100ee8548 + 16;
        std::function<bool()>::~function((function<bool()>*)(this + 144));
        std::function<void(EnumTextureMode, EnumTextureMode)>::~function(
            (function<void(EnumTextureMode, EnumTextureMode)>*)(this + 96));
        std::function<void(EnumTextureMode, EnumTextureMode)>::~function(
            (function<void(EnumTextureMode, EnumTextureMode)>*)(this + 48));
        ~AutoSingleton();
    }

    // 0x1005f8090, 240 bytes, inline, placed by class name and debug map
    // Option<EnumOptionToggle>::SetValue(EnumOptionToggle, graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<EnumOptionToggle>::SetValue(int param_2, undefined8 param_3, undefined8 param_4, int param_5) {
        undefined4 uVar1;
        undefined8 uVar3;
        char* pcVar4;
        undefined4 local_3c;
        undefined4 local_38;
        int local_34;

        local_34 = param_2;
        local_3c = ((this + 28))->GetX();
        local_38 = ((this + 28))->GetZ();
        local_34 = math::Clamp<EnumOptionToggle>((EnumOptionToggle*)&local_34, (EnumOptionToggle*)&local_3c,
                                                 (EnumOptionToggle*)&local_38);
        if ((param_5 != 0) || (local_34 != *(int*)(this + 24))) {
            if ((**(code**)(*(long*)this + 128))(this) != '\0') {
                uVar3 = logger::default_logger();
                pcVar4 = "";
                if ((char)param_5 != '\0') {
                    pcVar4 = "(FORCED)";
                }
                logger::Logger::Log(uVar3, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/clientoptions/options/../Option.h",
                                    123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s",
                                    *(undefined8*)(this + 16), local_34, *(undefined4*)(this + 24), pcVar4);
                uVar1 = *(undefined4*)(this + 24);
                *(int*)(this + 24) = local_34;
                ApplySetting(this, param_3, param_4, uVar1);
            }
        }
    }

    // 0x1005f8280, 144 bytes, base-object constructor, inline, placed by class name
    // Option<int>::Option(graphics::RT7Core&, Settings&, char const*, math::Range<int>)
    void Option<int>::Option(undefined8 param_2_00, undefined8 param_2, undefined8 param_3, undefined8 param_5) {
        undefined4 uVar1;
        undefined1 local_28[8];

        local_28 = (undefined1[8])param_5;
        new (this) IOption();
        *(undefined**)this = PTR_vtable_100ee85b0 + 16;
        *(undefined8*)(this + 8) = param_2;
        *(undefined8*)(this + 16) = param_3;
        *(undefined4*)(this + 24) = 0;
        *(undefined1(*)[8])(this + 28) = local_28;
        uVar1 = local_28->GetZ();
        *(undefined4*)(this + 36) = uVar1;
        std::function<void(int, int)>::function((function<void(int, int)>*)(this + 48));
        std::function<void(int, int)>::function((function<void(int, int)>*)(this + 96));
        std::function<bool()>::function((function<bool()>*)(this + 144));
        new ((this + 192)) eastl::optional<EnumOptionToggle>();
    }

    // 0x1005f8430, 144 bytes, base-object constructor, inline, placed by class name
    // Option<EnumVolumetricLighting>::Option(graphics::RT7Core&, Settings&, char const*, math::Range<EnumVolumetricLighting>)
    void Option<EnumVolumetricLighting>::Option(undefined8 param_2_00, undefined8 param_2, undefined8 param_3,
                                                undefined8 param_5) {
        undefined4 uVar1;
        undefined1 local_28[8];

        local_28 = (undefined1[8])param_5;
        new (this) IOption();
        *(undefined**)this = PTR_vtable_100ee8560 + 16;
        *(undefined8*)(this + 8) = param_2;
        *(undefined8*)(this + 16) = param_3;
        *(undefined4*)(this + 24) = 0;
        *(undefined1(*)[8])(this + 28) = local_28;
        uVar1 = local_28->GetZ();
        *(undefined4*)(this + 36) = uVar1;
        std::function<void(EnumVolumetricLighting, EnumVolumetricLighting)>::function(
            (function<void(EnumVolumetricLighting, EnumVolumetricLighting)>*)(this + 48));
        std::function<void(EnumVolumetricLighting, EnumVolumetricLighting)>::function(
            (function<void(EnumVolumetricLighting, EnumVolumetricLighting)>*)(this + 96));
        std::function<bool()>::function((function<bool()>*)(this + 144));
        new ((this + 192)) eastl::optional<EnumOptionToggle>();
    }

    // 0x1005f84d0, 80 bytes, base-object destructor, inline, placed by class name
    // Option<EnumVolumetricLighting>::~Option()
    void Option<EnumVolumetricLighting>::~Option() {
        *(undefined**)this = PTR_vtable_100ee8560 + 16;
        std::function<bool()>::~function((function<bool()>*)(this + 144));
        std::function<void(EnumVolumetricLighting, EnumVolumetricLighting)>::~function(
            (function<void(EnumVolumetricLighting, EnumVolumetricLighting)>*)(this + 96));
        std::function<void(EnumVolumetricLighting, EnumVolumetricLighting)>::~function(
            (function<void(EnumVolumetricLighting, EnumVolumetricLighting)>*)(this + 48));
        ~AutoSingleton();
    }

    // 0x1005f86f0, 144 bytes, base-object constructor, inline, placed by class name
    // Option<jag::WindowMode>::Option(graphics::RT7Core&, Settings&, char const*, math::Range<jag::WindowMode>)
    void Option<jag::WindowMode>::Option(undefined8 param_2_00, undefined8 param_2, undefined8 param_3,
                                         undefined8 param_5) {
        undefined4 uVar1;
        undefined1 local_28[8];

        local_28 = (undefined1[8])param_5;
        new (this) IOption();
        *(undefined**)this = PTR_vtable_100ee8588 + 16;
        *(undefined8*)(this + 8) = param_2;
        *(undefined8*)(this + 16) = param_3;
        *(undefined4*)(this + 24) = 0;
        *(undefined1(*)[8])(this + 28) = local_28;
        uVar1 = local_28->GetZ();
        *(undefined4*)(this + 36) = uVar1;
        std::function<void(jag::WindowMode, jag::WindowMode)>::function(
            (function<void(jag::WindowMode, jag::WindowMode)>*)(this + 48));
        std::function<void(jag::WindowMode, jag::WindowMode)>::function(
            (function<void(jag::WindowMode, jag::WindowMode)>*)(this + 96));
        std::function<bool()>::function((function<bool()>*)(this + 144));
        new ((this + 192)) eastl::optional<EnumOptionToggle>();
    }

    // 0x1005f8780, 80 bytes, base-object destructor, inline, placed by class name
    // Option<jag::WindowMode>::~Option()
    void Option<jag::WindowMode>::~Option() {
        *(undefined**)this = PTR_vtable_100ee8588 + 16;
        std::function<bool()>::~function((function<bool()>*)(this + 144));
        std::function<void(jag::WindowMode, jag::WindowMode)>::~function(
            (function<void(jag::WindowMode, jag::WindowMode)>*)(this + 96));
        std::function<void(jag::WindowMode, jag::WindowMode)>::~function(
            (function<void(jag::WindowMode, jag::WindowMode)>*)(this + 48));
        ~AutoSingleton();
    }

    // 0x1005f9910, 320 bytes, inline, placed by class name
    // Option<EnumTextureMode>::LoadSetting(graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<EnumTextureMode>::LoadSetting(RT7Core* param_1, EffectManager* param_2, bool param_3) {
        BucketAllocatorEASTL* pBVar1;
        Settings* pSVar2;
        int iVar4;
        int iVar5;
        char* pcVar6;
        eastl local_78[24];
        int local_60[6];
        eastl local_38[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", (NpcUID*)param_2);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_78, (basic_string*)local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        if (param_3) {
            iVar4 = (**(code**)(*(long*)this + 104))(this);
        } else {
            pSVar2 = *(Settings**)(this + 8);
            pcVar6 = *(char**)(this + 16);
            local_60[0] = (**(code**)(*(long*)this + 104))(this);
            iVar4 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        }
        pSVar2 = *(Settings**)(this + 8);
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((this + 28))->GetZ();
        iVar5 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        *(int*)(this + 36) = iVar5;
        SetValue(this, iVar4, param_1, param_2, 1);
        (**(code**)(*(long*)this + 144))(this, param_1, param_2);
        local_78->~basic_string();
    }

    // 0x1005f9a50, 208 bytes, inline, placed by class name
    // Option<EnumTextureMode>::SaveSetting()
    void Option<EnumTextureMode>::SaveSetting() {
        BucketAllocatorEASTL* pBVar1;
        Settings* this_00;
        char* pcVar2;
        NpcUID* in_RDX;
        basic_string local_60[24];
        eastl local_48[24];
        eastl local_30[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", in_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_48, local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        Settings::SetValue<int>(*(Settings**)(this + 8), *(char**)(this + 16), *(int*)(this + 24));
        this_00 = *(Settings**)(this + 8);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        Settings::SetValue<int>(this_00, pcVar2, *(int*)(this + 36));
        (**(code**)(*(long*)this + 136))(this);
        local_48->~basic_string();
    }

    // 0x1005f9b20, 48 bytes, inline, placed by class name
    // Option<EnumTextureMode>::IsModifiable(graphics::RT7Core const*) const
    /* Option<int>::IsModifiable(graphics::RT7Core const*) const */

    bool Option<int>::IsModifiable(RT7Core* param_1) {
        int iVar1;
        int iVar2;

        iVar1 = ((this + 28))->GetZ();
        iVar2 = ((this + 28))->GetX();
        return iVar1 != iVar2;
    }

    // 0x1005f9b50, 32 bytes, inline, placed by class name
    // Option<EnumTextureMode>::GetValueLabels() const
    Option<EnumTextureMode>* Option<EnumTextureMode>::GetValueLabels() {
        GetEnumValueNames<EnumTextureMode>((jag*)this);
        return this;
    }

    // 0x1005f9b70, 16 bytes, inline, placed by class name
    // Option<EnumTextureMode>::CanSetRawValue(int) const
    /* Option<int>::CanSetRawValue(int) const */

    void Option<int>::CanSetRawValue(int param_1) {
        CanSetValue(this, param_1);
    }

    // 0x1005f9b80, 16 bytes, inline, placed by class name
    // Option<EnumTextureMode>::GetRawValue() const
    /* Option<int>::GetRawValue() const */

    void Option<int>::GetRawValue() {
        GetValue();
    }

    // 0x1005f9b90, 16 bytes, inline, placed by class name
    // Option<EnumTextureMode>::SetRawValue(int, graphics::RT7Core&, graphics::EffectManager&)
    void Option<EnumTextureMode>::SetRawValue(int param_1, RT7Core* param_2, EffectManager* param_3) {
        SetValue();
    }

    // 0x1005f9ba0, 80 bytes, inline, placed by class name
    // Option<EnumTextureMode>::GetRawValueRange() const
    /* Option<int>::GetRawValueRange() const */

    undefined8 Option<int>::GetRawValueRange() {
        undefined8 local_20;
        int local_18;
        int local_14;

        local_18 = ((this + 28))->GetX();
        local_14 = ((this + 28))->GetZ();
        std::pair<int, int>::pair<int, int, false>((pair<int, int>*)&local_20, &local_18, &local_14);
        return local_20;
    }

    // 0x1005f9bf0, 16 bytes, inline, placed by class name
    // Option<EnumTextureMode>::GetDefault()
    /* Option<EnumVolumetricLighting>::GetDefault() */

    void Option<EnumVolumetricLighting>::GetDefault() {
        ((this + 28))->GetZ();
    }

    // 0x1005f9c00, 80 bytes, inline, placed by class name
    // Option<EnumTextureMode>::IsSafeToSet()
    /* Option<int>::IsSafeToSet() */

    undefined8 Option<int>::IsSafeToSet() {
        bool bVar1;
        RenderDevice* this_00;
        undefined7 extraout_var;
        undefined8 uVar3;

        this_00 = (RenderDevice*)Instance();
        if (this_00->GetReadyState() == 0) {
            bVar1 = ((this + 144))->operator_cast_to_bool();
            uVar3 = CONCAT71(extraout_var, 1);
            if (bVar1) {
                uVar3 = std::function<bool()>::operator()((function<bool()>*)(this + 144));
            }
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x1005f9c80, 320 bytes, inline, placed by class name
    // Option<int>::LoadSetting(graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<int>::LoadSetting(RT7Core* param_1, EffectManager* param_2, bool param_3) {
        BucketAllocatorEASTL* pBVar1;
        Settings* pSVar2;
        int iVar4;
        int iVar5;
        char* pcVar6;
        eastl local_78[24];
        int local_60[6];
        eastl local_38[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", (NpcUID*)param_2);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_78, (basic_string*)local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        if (param_3) {
            iVar4 = (**(code**)(*(long*)this + 104))(this);
        } else {
            pSVar2 = *(Settings**)(this + 8);
            pcVar6 = *(char**)(this + 16);
            local_60[0] = (**(code**)(*(long*)this + 104))(this);
            iVar4 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        }
        pSVar2 = *(Settings**)(this + 8);
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((this + 28))->GetZ();
        iVar5 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        *(int*)(this + 36) = iVar5;
        SetValue(this, iVar4, param_1, param_2, true);
        (**(code**)(*(long*)this + 144))(this, param_1, param_2);
        local_78->~basic_string();
    }

    // 0x1005f9dc0, 208 bytes, inline, placed by class name
    // Option<int>::SaveSetting()
    void Option<int>::SaveSetting() {
        BucketAllocatorEASTL* pBVar1;
        Settings* this_00;
        char* pcVar2;
        NpcUID* in_RDX;
        basic_string local_60[24];
        eastl local_48[24];
        eastl local_30[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", in_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_48, local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        Settings::SetValue<int>(*(Settings**)(this + 8), *(char**)(this + 16), *(int*)(this + 24));
        this_00 = *(Settings**)(this + 8);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        Settings::SetValue<int>(this_00, pcVar2, *(int*)(this + 36));
        (**(code**)(*(long*)this + 136))(this);
        local_48->~basic_string();
    }

    // 0x1005f9e90, 32 bytes, inline, placed by class name
    // Option<int>::GetValueLabels() const
    /* Option<unsigned char>::GetValueLabels() const */

    Option<unsigned char>* Option<unsigned char>::GetValueLabels() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        return this;
    }

    // 0x1005f9eb0, 16 bytes, inline, placed by class name
    // Option<int>::SetRawValue(int, graphics::RT7Core&, graphics::EffectManager&)
    void Option<int>::SetRawValue(int param_1, RT7Core* param_2, EffectManager* param_3) {
        SetValue(this, param_1, param_2, param_3, false);
    }

    // 0x1005f9f10, 320 bytes, inline, placed by class name
    // Option<EnumVolumetricLighting>::LoadSetting(graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<EnumVolumetricLighting>::LoadSetting(RT7Core* param_1, EffectManager* param_2, bool param_3) {
        BucketAllocatorEASTL* pBVar1;
        Settings* pSVar2;
        int iVar4;
        int iVar5;
        char* pcVar6;
        eastl local_78[24];
        int local_60[6];
        eastl local_38[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", (NpcUID*)param_2);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_78, (basic_string*)local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        if (param_3) {
            iVar4 = (**(code**)(*(long*)this + 104))(this);
        } else {
            pSVar2 = *(Settings**)(this + 8);
            pcVar6 = *(char**)(this + 16);
            local_60[0] = (**(code**)(*(long*)this + 104))(this);
            iVar4 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        }
        pSVar2 = *(Settings**)(this + 8);
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((this + 28))->GetZ();
        iVar5 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        *(int*)(this + 36) = iVar5;
        SetValue(this, iVar4, param_1, param_2, 1);
        (**(code**)(*(long*)this + 144))(this, param_1, param_2);
        local_78->~basic_string();
    }

    // 0x1005fa050, 208 bytes, inline, placed by class name
    // Option<EnumVolumetricLighting>::SaveSetting()
    void Option<EnumVolumetricLighting>::SaveSetting() {
        BucketAllocatorEASTL* pBVar1;
        Settings* this_00;
        char* pcVar2;
        NpcUID* in_RDX;
        basic_string local_60[24];
        eastl local_48[24];
        eastl local_30[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", in_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_48, local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        Settings::SetValue<int>(*(Settings**)(this + 8), *(char**)(this + 16), *(int*)(this + 24));
        this_00 = *(Settings**)(this + 8);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        Settings::SetValue<int>(this_00, pcVar2, *(int*)(this + 36));
        (**(code**)(*(long*)this + 136))(this);
        local_48->~basic_string();
    }

    // 0x1005fa120, 32 bytes, inline, placed by class name
    // Option<EnumVolumetricLighting>::GetValueLabels() const
    Option<EnumVolumetricLighting>* Option<EnumVolumetricLighting>::GetValueLabels() {
        GetEnumValueNames<EnumVolumetricLighting>((jag*)this);
        return this;
    }

    // 0x1005fa140, 16 bytes, inline, placed by class name
    // Option<EnumVolumetricLighting>::SetRawValue(int, graphics::RT7Core&, graphics::EffectManager&)
    void Option<EnumVolumetricLighting>::SetRawValue(int param_1, RT7Core* param_2, EffectManager* param_3) {
        SetValue();
    }

    // 0x1005fa180, 320 bytes, inline, placed by class name
    // Option<jag::WindowMode>::LoadSetting(graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<jag::WindowMode>::LoadSetting(RT7Core* param_1, EffectManager* param_2, bool param_3) {
        BucketAllocatorEASTL* pBVar1;
        Settings* pSVar2;
        int iVar4;
        int iVar5;
        char* pcVar6;
        eastl local_78[24];
        int local_60[6];
        eastl local_38[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", (NpcUID*)param_2);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_78, (basic_string*)local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        if (param_3) {
            iVar4 = (**(code**)(*(long*)this + 104))(this);
        } else {
            pSVar2 = *(Settings**)(this + 8);
            pcVar6 = *(char**)(this + 16);
            local_60[0] = (**(code**)(*(long*)this + 104))(this);
            iVar4 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        }
        pSVar2 = *(Settings**)(this + 8);
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((this + 28))->GetZ();
        iVar5 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        *(int*)(this + 36) = iVar5;
        SetValue(this, iVar4, param_1, param_2, 1);
        (**(code**)(*(long*)this + 144))(this, param_1, param_2);
        local_78->~basic_string();
    }

    // 0x1005fa2c0, 208 bytes, inline, placed by class name
    // Option<jag::WindowMode>::SaveSetting()
    void Option<jag::WindowMode>::SaveSetting() {
        BucketAllocatorEASTL* pBVar1;
        Settings* this_00;
        char* pcVar2;
        NpcUID* in_RDX;
        basic_string local_60[24];
        eastl local_48[24];
        eastl local_30[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", in_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_48, local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        Settings::SetValue<int>(*(Settings**)(this + 8), *(char**)(this + 16), *(int*)(this + 24));
        this_00 = *(Settings**)(this + 8);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        Settings::SetValue<int>(this_00, pcVar2, *(int*)(this + 36));
        (**(code**)(*(long*)this + 136))(this);
        local_48->~basic_string();
    }

    // 0x1005fa3a0, 32 bytes, inline, placed by class name
    // Option<jag::WindowMode>::GetValueLabels() const
    Option<jag::WindowMode>* Option<jag::WindowMode>::GetValueLabels() {
        GetEnumValueNames<jag::WindowMode>((jag*)this);
        return this;
    }

    // 0x1005fa3c0, 16 bytes, inline, placed by class name
    // Option<jag::WindowMode>::CanSetRawValue(int) const
    void Option<jag::WindowMode>::CanSetRawValue(int param_1) {
        CanSetValue();
    }

    // 0x1005fa3d0, 16 bytes, inline, placed by class name
    // Option<jag::WindowMode>::SetRawValue(int, graphics::RT7Core&, graphics::EffectManager&)
    void Option<jag::WindowMode>::SetRawValue(int param_1, RT7Core* param_2, EffectManager* param_3) {
        SetValue();
    }

    // 0x1005fa470, 16 bytes, complete-object destructor, inline, placed by class name
    // Option<EnumTextureMode>::~Option(): jumps straight to the base-object destructor

    // 0x1005fa480, 32 bytes, deleting destructor, inline, placed by class name
    // Option<EnumTextureMode>::~Option()
    void Option<EnumTextureMode>::~Option() {
        ~Textures();
        operator_delete(this);
    }

    // 0x1005fa540, 16 bytes, complete-object destructor, inline, placed by class name
    // Option<EnumVolumetricLighting>::~Option(): jumps straight to the base-object destructor

    // 0x1005fa550, 32 bytes, deleting destructor, inline, placed by class name
    // Option<EnumVolumetricLighting>::~Option()
    void Option<EnumVolumetricLighting>::~Option() {
        ~VolumetricLighting();
        operator_delete(this);
    }

    // 0x1005fa5d0, 16 bytes, complete-object destructor, inline, placed by class name
    // Option<jag::WindowMode>::~Option(): jumps straight to the base-object destructor

    // 0x1005fa5e0, 32 bytes, deleting destructor, inline, placed by class name
    // Option<jag::WindowMode>::~Option()
    void Option<jag::WindowMode>::~Option() {
        ~WindowMode();
        operator_delete(this);
    }

    // 0x1005fa6e0, 80 bytes, base-object destructor, inline, placed by class name
    // Option<int>::~Option()
    void Option<int>::~Option() {
        *(undefined**)this = PTR_vtable_100ee85b0 + 16;
        std::function<bool()>::~function((function<bool()>*)(this + 144));
        std::function<void(int, int)>::~function((function<void(int, int)>*)(this + 96));
        std::function<void(int, int)>::~function((function<void(int, int)>*)(this + 48));
        ~AutoSingleton();
    }

    // 0x1005fa740, 32 bytes, deleting destructor, inline, placed by class name
    // Option<int>::~Option()
    void Option<int>::~Option() {
        ~Option(this);
        operator_delete(this);
    }

    // 0x1005fb080, 240 bytes, inline, placed by class name
    // Option<EnumOptionToggle>::ApplySetting(graphics::RT7Core&, graphics::EffectManager&, EnumOptionToggle)
    void Option<EnumOptionToggle>::ApplySetting(undefined8 param_1, undefined8 param_2, undefined4 param_4) {
        bool bVar1;
        undefined4 uVar3;
        optional<EnumOptionToggle> local_48[8];
        undefined4 local_34;

        local_34 = param_4;
        bVar1 = ((this + 48))->operator_cast_to_bool();
        if (bVar1) {
            bVar1 = false;
            uVar3 = GetValue();
            std::function<void(EnumOptionToggle, EnumOptionToggle)>::operator()(
                (function<void(EnumOptionToggle, EnumOptionToggle)>*)(this + 48), uVar3, local_34);
        } else {
            bVar1 = ((this + 96))->operator_cast_to_bool();
            bVar1 = !bVar1;
        }
        (**(code**)(*(long*)this + 120))(this, param_1, param_2, local_34);
        if (((this + 96))->operator_cast_to_bool()) {
            uVar3 = GetValue();
            std::function<void(EnumOptionToggle, EnumOptionToggle)>::operator()(
                (function<void(EnumOptionToggle, EnumOptionToggle)>*)(this + 96), uVar3, local_34);
        }
        if (bVar1) {
            eastl::optional<EnumOptionToggle>::operator=((optional<EnumOptionToggle>*)(this + 192),
                                                         (EnumOptionToggle*)&local_34);
        } else {
            eastl::optional<EnumOptionToggle>::optional(local_48);
            eastl::optional<EnumOptionToggle>::operator=((optional<EnumOptionToggle>*)(this + 192),
                                                         (optional*)local_48);
        }
    }

    // 0x1005fbd80, 240 bytes, inline, placed by class name
    // Option<EnumTextureMode>::SetValue(EnumTextureMode, graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<EnumTextureMode>::SetValue(int param_2, undefined8 param_3, undefined8 param_4, int param_5) {
        undefined4 uVar1;
        undefined8 uVar3;
        char* pcVar4;
        undefined4 local_3c;
        undefined4 local_38;
        int local_34;

        local_34 = param_2;
        local_3c = ((this + 28))->GetX();
        local_38 = ((this + 28))->GetZ();
        local_34 = math::Clamp<EnumTextureMode>((EnumTextureMode*)&local_34, (EnumTextureMode*)&local_3c,
                                                (EnumTextureMode*)&local_38);
        if ((param_5 != 0) || (local_34 != *(int*)(this + 24))) {
            if ((**(code**)(*(long*)this + 128))(this) != '\0') {
                uVar3 = logger::default_logger();
                pcVar4 = "";
                if ((char)param_5 != '\0') {
                    pcVar4 = "(FORCED)";
                }
                logger::Logger::Log(uVar3, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/clientoptions/options/../Option.h",
                                    123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s",
                                    *(undefined8*)(this + 16), local_34, *(undefined4*)(this + 24), pcVar4);
                uVar1 = *(undefined4*)(this + 24);
                *(int*)(this + 24) = local_34;
                ApplySetting(this, param_3, param_4, uVar1);
            }
        }
    }

    // 0x1005fbed0, 240 bytes, inline, placed by class name
    // Option<EnumTextureMode>::ApplySetting(graphics::RT7Core&, graphics::EffectManager&, EnumTextureMode)
    void Option<EnumTextureMode>::ApplySetting(undefined8 param_1, undefined8 param_2, undefined4 param_4) {
        bool bVar1;
        undefined4 uVar3;
        optional<EnumOptionToggle> local_48[8];
        undefined4 local_34;

        local_34 = param_4;
        bVar1 = ((this + 48))->operator_cast_to_bool();
        if (bVar1) {
            bVar1 = false;
            uVar3 = GetValue();
            std::function<void(EnumTextureMode, EnumTextureMode)>::operator()(
                (function<void(EnumTextureMode, EnumTextureMode)>*)(this + 48), uVar3, local_34);
        } else {
            bVar1 = ((this + 96))->operator_cast_to_bool();
            bVar1 = !bVar1;
        }
        (**(code**)(*(long*)this + 120))(this, param_1, param_2, local_34);
        if (((this + 96))->operator_cast_to_bool()) {
            uVar3 = GetValue();
            std::function<void(EnumTextureMode, EnumTextureMode)>::operator()(
                (function<void(EnumTextureMode, EnumTextureMode)>*)(this + 96), uVar3, local_34);
        }
        if (bVar1) {
            eastl::optional<EnumTextureMode>::operator=((optional<EnumTextureMode>*)(this + 192),
                                                        (EnumTextureMode*)&local_34);
        } else {
            eastl::optional<EnumOptionToggle>::optional(local_48);
            eastl::optional<EnumTextureMode>::operator=((optional<EnumTextureMode>*)(this + 192), (optional*)local_48);
        }
    }

    // 0x1005fc210, 64 bytes, inline, placed by class name
    // Option<EnumTextureMode>::CanSetValue(EnumTextureMode) const
    /* Option<int>::CanSetValue(int) const */

    bool Option<int>::CanSetValue(int param_1) {
        bool bVar1;
        int iVar2;

        iVar2 = ((this + 28))->GetX();
        if (param_1 < iVar2) {
            bVar1 = false;
        } else {
            iVar2 = ((this + 28))->GetZ();
            bVar1 = param_1 <= iVar2;
        }
        return bVar1;
    }

    // 0x1005fc2e0, 240 bytes, inline, placed by class name
    // Option<int>::SetValue(int, graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<int>::SetValue(int param_1, RT7Core* param_2, EffectManager* param_3, bool param_4) {
        int iVar1;
        undefined8 uVar3;
        char* pcVar4;
        undefined7 in_register_00000081;
        int local_3c;
        int local_38;
        int local_34;

        local_34 = param_1;
        local_3c = ((this + 28))->GetX();
        local_38 = ((this + 28))->GetZ();
        local_34 = math::Clamp<int>(&local_34, &local_3c, &local_38);
        if (((int)CONCAT71(in_register_00000081, param_4) != 0) || (local_34 != *(int*)(this + 24))) {
            if ((**(code**)(*(long*)this + 128))(this) != '\0') {
                uVar3 = logger::default_logger();
                pcVar4 = "";
                if (param_4) {
                    pcVar4 = "(FORCED)";
                }
                logger::Logger::Log(uVar3, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/clientoptions/options/../Option.h",
                                    123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s",
                                    *(undefined8*)(this + 16), local_34, *(undefined4*)(this + 24), pcVar4);
                iVar1 = *(int*)(this + 24);
                *(int*)(this + 24) = local_34;
                ApplySetting(this, param_2, param_3, iVar1);
            }
        }
    }

    // 0x1005fc3d0, 240 bytes, inline, placed by class name
    // Option<int>::ApplySetting(graphics::RT7Core&, graphics::EffectManager&, int)
    void Option<int>::ApplySetting(RT7Core* param_1, EffectManager* param_2, int param_3) {
        bool bVar1;
        int iVar3;
        optional<EnumOptionToggle> local_48[8];
        int local_34;

        local_34 = param_3;
        bVar1 = ((this + 48))->operator_cast_to_bool();
        if (bVar1) {
            bVar1 = false;
            iVar3 = GetValue();
            std::function<void(int, int)>::operator()((function<void(int, int)>*)(this + 48), iVar3, local_34);
        } else {
            bVar1 = ((this + 96))->operator_cast_to_bool();
            bVar1 = !bVar1;
        }
        (**(code**)(*(long*)this + 120))(this, param_1, param_2, local_34);
        if (((this + 96))->operator_cast_to_bool()) {
            iVar3 = GetValue();
            std::function<void(int, int)>::operator()((function<void(int, int)>*)(this + 96), iVar3, local_34);
        }
        if (bVar1) {
            eastl::optional<int>::operator=((optional<int>*)(this + 192), &local_34);
        } else {
            eastl::optional<EnumOptionToggle>::optional(local_48);
            eastl::optional<int>::operator=((optional<int>*)(this + 192), (optional*)local_48);
        }
    }

    // 0x1005fc6a0, 240 bytes, inline, placed by class name
    // Option<EnumVolumetricLighting>::SetValue(EnumVolumetricLighting, graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<EnumVolumetricLighting>::SetValue(int param_2, undefined8 param_3, undefined8 param_4, int param_5) {
        undefined4 uVar1;
        undefined8 uVar3;
        char* pcVar4;
        undefined4 local_3c;
        undefined4 local_38;
        int local_34;

        local_34 = param_2;
        local_3c = ((this + 28))->GetX();
        local_38 = ((this + 28))->GetZ();
        local_34 = math::Clamp<EnumVolumetricLighting>(
            (EnumVolumetricLighting*)&local_34, (EnumVolumetricLighting*)&local_3c, (EnumVolumetricLighting*)&local_38);
        if ((param_5 != 0) || (local_34 != *(int*)(this + 24))) {
            if ((**(code**)(*(long*)this + 128))(this) != '\0') {
                uVar3 = logger::default_logger();
                pcVar4 = "";
                if ((char)param_5 != '\0') {
                    pcVar4 = "(FORCED)";
                }
                logger::Logger::Log(uVar3, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/clientoptions/options/../Option.h",
                                    123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s",
                                    *(undefined8*)(this + 16), local_34, *(undefined4*)(this + 24), pcVar4);
                uVar1 = *(undefined4*)(this + 24);
                *(int*)(this + 24) = local_34;
                ApplySetting(this, param_3, param_4, uVar1);
            }
        }
    }

    // 0x1005fc7c0, 240 bytes, inline, placed by class name
    // Option<EnumVolumetricLighting>::ApplySetting(graphics::RT7Core&, graphics::EffectManager&, EnumVolumetricLighting)
    void Option<EnumVolumetricLighting>::ApplySetting(undefined8 param_1, undefined8 param_2, undefined4 param_4) {
        bool bVar1;
        undefined4 uVar3;
        optional<EnumOptionToggle> local_48[8];
        undefined4 local_34;

        local_34 = param_4;
        bVar1 = ((this + 48))->operator_cast_to_bool();
        if (bVar1) {
            bVar1 = false;
            uVar3 = GetValue();
            std::function<void(EnumVolumetricLighting, EnumVolumetricLighting)>::operator()(
                (function<void(EnumVolumetricLighting, EnumVolumetricLighting)>*)(this + 48), uVar3, local_34);
        } else {
            bVar1 = ((this + 96))->operator_cast_to_bool();
            bVar1 = !bVar1;
        }
        (**(code**)(*(long*)this + 120))(this, param_1, param_2, local_34);
        if (((this + 96))->operator_cast_to_bool()) {
            uVar3 = GetValue();
            std::function<void(EnumVolumetricLighting, EnumVolumetricLighting)>::operator()(
                (function<void(EnumVolumetricLighting, EnumVolumetricLighting)>*)(this + 96), uVar3, local_34);
        }
        if (bVar1) {
            eastl::optional<EnumVolumetricLighting>::operator=((optional<EnumVolumetricLighting>*)(this + 192),
                                                               (EnumVolumetricLighting*)&local_34);
        } else {
            eastl::optional<EnumOptionToggle>::optional(local_48);
            eastl::optional<EnumVolumetricLighting>::operator=((optional<EnumVolumetricLighting>*)(this + 192),
                                                               (optional*)local_48);
        }
    }

    // 0x1005fcb00, 240 bytes, inline, placed by class name
    // Option<jag::WindowMode>::SetValue(jag::WindowMode, graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<jag::WindowMode>::SetValue(int param_2, undefined8 param_3, undefined8 param_4, int param_5) {
        undefined4 uVar1;
        undefined8 uVar3;
        char* pcVar4;
        undefined4 local_3c;
        undefined4 local_38;
        int local_34;

        local_34 = param_2;
        local_3c = ((this + 28))->GetX();
        local_38 = ((this + 28))->GetZ();
        local_34 = math::Clamp<jag::WindowMode>((WindowMode*)&local_34, (WindowMode*)&local_3c, (WindowMode*)&local_38);
        if ((param_5 != 0) || (local_34 != *(int*)(this + 24))) {
            if ((**(code**)(*(long*)this + 128))(this) != '\0') {
                uVar3 = logger::default_logger();
                pcVar4 = "";
                if ((char)param_5 != '\0') {
                    pcVar4 = "(FORCED)";
                }
                logger::Logger::Log(uVar3, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/clientoptions/options/../Option.h",
                                    123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s",
                                    *(undefined8*)(this + 16), local_34, *(undefined4*)(this + 24), pcVar4);
                uVar1 = *(undefined4*)(this + 24);
                *(int*)(this + 24) = local_34;
                ApplySetting(this, param_3, param_4, uVar1);
            }
        }
    }

    // 0x1005fcc20, 240 bytes, inline, placed by class name
    // Option<jag::WindowMode>::ApplySetting(graphics::RT7Core&, graphics::EffectManager&, jag::WindowMode)
    void Option<jag::WindowMode>::ApplySetting(undefined8 param_1, undefined8 param_2, undefined4 param_4) {
        bool bVar1;
        undefined4 uVar3;
        optional<EnumOptionToggle> local_48[8];
        undefined4 local_34;

        local_34 = param_4;
        bVar1 = ((this + 48))->operator_cast_to_bool();
        if (bVar1) {
            bVar1 = false;
            uVar3 = GetValue();
            std::function<void(jag::WindowMode, jag::WindowMode)>::operator()(
                (function<void(jag::WindowMode, jag::WindowMode)>*)(this + 48), uVar3, local_34);
        } else {
            bVar1 = ((this + 96))->operator_cast_to_bool();
            bVar1 = !bVar1;
        }
        (**(code**)(*(long*)this + 120))(this, param_1, param_2, local_34);
        if (((this + 96))->operator_cast_to_bool()) {
            uVar3 = GetValue();
            std::function<void(jag::WindowMode, jag::WindowMode)>::operator()(
                (function<void(jag::WindowMode, jag::WindowMode)>*)(this + 96), uVar3, local_34);
        }
        if (bVar1) {
            eastl::optional<jag::WindowMode>::operator=((optional<jag::WindowMode>*)(this + 192),
                                                        (WindowMode*)&local_34);
        } else {
            eastl::optional<EnumOptionToggle>::optional(local_48);
            eastl::optional<jag::WindowMode>::operator=((optional<jag::WindowMode>*)(this + 192), (optional*)local_48);
        }
    }

    // 0x1005fcf10, 53 bytes, inline, placed by class name
    // Option<jag::WindowMode>::CanSetValue(jag::WindowMode) const
    bool Option<jag::WindowMode>::CanSetValue(int param_2) {
        bool bVar1;
        int iVar2;

        iVar2 = ((this + 28))->GetX();
        if (param_2 < iVar2) {
            bVar1 = false;
        } else {
            iVar2 = ((this + 28))->GetZ();
            bVar1 = param_2 <= iVar2;
        }
        return bVar1;
    }

    // 0x1005fd780, 144 bytes, base-object constructor, inline, placed by class name
    // Option<EnumParticleQualityLevel>::Option(graphics::RT7Core&, Settings&, char const*, math::Range<EnumParticleQualityLevel>)
    void Option<EnumParticleQualityLevel>::Option(undefined8 param_2_00, undefined8 param_2, undefined8 param_3,
                                                  undefined8 param_5) {
        undefined4 uVar1;
        undefined1 local_28[8];

        local_28 = (undefined1[8])param_5;
        new (this) IOption();
        *(undefined**)this = PTR_vtable_100ee8570 + 16;
        *(undefined8*)(this + 8) = param_2;
        *(undefined8*)(this + 16) = param_3;
        *(undefined4*)(this + 24) = 0;
        *(undefined1(*)[8])(this + 28) = local_28;
        uVar1 = local_28->GetZ();
        *(undefined4*)(this + 36) = uVar1;
        std::function<void(EnumParticleQualityLevel, EnumParticleQualityLevel)>::function(
            (function<void(EnumParticleQualityLevel, EnumParticleQualityLevel)>*)(this + 48));
        std::function<void(EnumParticleQualityLevel, EnumParticleQualityLevel)>::function(
            (function<void(EnumParticleQualityLevel, EnumParticleQualityLevel)>*)(this + 96));
        std::function<bool()>::function((function<bool()>*)(this + 144));
        new ((this + 192)) eastl::optional<EnumOptionToggle>();
    }

    // 0x1005ffae0, 144 bytes, base-object constructor, inline, placed by class name
    // Option<unsigned int>::Option(graphics::RT7Core&, Settings&, char const*, math::Range<unsigned int>)
    void Option<unsigned int>::Option(undefined8 param_2_00, undefined8 param_2, undefined8 param_3,
                                      undefined8 param_5) {
        undefined4 uVar1;
        undefined1 local_28[8];

        local_28 = (undefined1[8])param_5;
        new (this) IOption();
        *(undefined**)this = PTR_vtable_100ee85b8 + 16;
        *(undefined8*)(this + 8) = param_2;
        *(undefined8*)(this + 16) = param_3;
        *(undefined4*)(this + 24) = 0;
        *(undefined1(*)[8])(this + 28) = local_28;
        uVar1 = local_28->GetZ();
        *(undefined4*)(this + 36) = uVar1;
        std::function<void(unsigned int, unsigned int)>::function(
            (function<void(unsigned int, unsigned int)>*)(this + 48));
        std::function<void(unsigned int, unsigned int)>::function(
            (function<void(unsigned int, unsigned int)>*)(this + 96));
        std::function<bool()>::function((function<bool()>*)(this + 144));
        new ((this + 192)) eastl::optional<EnumOptionToggle>();
    }

    // 0x1006019b0, 144 bytes, base-object constructor, inline, placed by class name
    // Option<graphics::GraphicsQuality>::Option(graphics::RT7Core&, Settings&, char const*, math::Range<graphics::GraphicsQuality>)
    void Option<graphics::GraphicsQuality>::Option(undefined8 param_2_00, undefined8 param_2, undefined8 param_3,
                                                   undefined8 param_5) {
        undefined4 uVar1;
        undefined1 local_28[8];

        local_28 = (undefined1[8])param_5;
        new (this) IOption();
        *(undefined**)this = PTR_vtable_100ee8598 + 16;
        *(undefined8*)(this + 8) = param_2;
        *(undefined8*)(this + 16) = param_3;
        *(undefined4*)(this + 24) = 0;
        *(undefined1(*)[8])(this + 28) = local_28;
        uVar1 = local_28->GetZ();
        *(undefined4*)(this + 36) = uVar1;
        std::function<void(graphics::GraphicsQuality, graphics::GraphicsQuality)>::function(
            (function<void(graphics::GraphicsQuality, graphics::GraphicsQuality)>*)(this + 48));
        std::function<void(graphics::GraphicsQuality, graphics::GraphicsQuality)>::function(
            (function<void(graphics::GraphicsQuality, graphics::GraphicsQuality)>*)(this + 96));
        std::function<bool()>::function((function<bool()>*)(this + 144));
        new ((this + 192)) eastl::optional<EnumOptionToggle>();
    }

    // 0x100603a90, 144 bytes, base-object constructor, inline, placed by class name
    // Option<graphics::SSAOPass::Mode>::Option(graphics::RT7Core&, Settings&, char const*, math::Range<graphics::SSAOPass::Mode>)
    void Option<graphics::SSAOPass::Mode>::Option(undefined8 param_2_00, undefined8 param_2, undefined8 param_3,
                                                  undefined8 param_5) {
        undefined4 uVar1;
        undefined1 local_28[8];

        local_28 = (undefined1[8])param_5;
        new (this) IOption();
        *(undefined**)this = PTR_vtable_100ee85a0 + 16;
        *(undefined8*)(this + 8) = param_2;
        *(undefined8*)(this + 16) = param_3;
        *(undefined4*)(this + 24) = 0;
        *(undefined1(*)[8])(this + 28) = local_28;
        uVar1 = local_28->GetZ();
        *(undefined4*)(this + 36) = uVar1;
        std::function<void(graphics::SSAOPass::Mode, graphics::SSAOPass::Mode)>::function(
            (function<void(graphics::SSAOPass::Mode, graphics::SSAOPass::Mode)>*)(this + 48));
        std::function<void(graphics::SSAOPass::Mode, graphics::SSAOPass::Mode)>::function(
            (function<void(graphics::SSAOPass::Mode, graphics::SSAOPass::Mode)>*)(this + 96));
        std::function<bool()>::function((function<bool()>*)(this + 144));
        new ((this + 192)) eastl::optional<EnumOptionToggle>();
    }

    // 0x100603cc0, 144 bytes, base-object constructor, inline, placed by class name
    // Option<EnumAnisotropicFiltering>::Option(graphics::RT7Core&, Settings&, char const*, math::Range<EnumAnisotropicFiltering>)
    void Option<EnumAnisotropicFiltering>::Option(undefined8 param_2_00, undefined8 param_2, undefined8 param_3,
                                                  undefined8 param_5) {
        undefined4 uVar1;
        undefined1 local_28[8];

        local_28 = (undefined1[8])param_5;
        new (this) IOption();
        *(undefined**)this = PTR_vtable_100ee8568 + 16;
        *(undefined8*)(this + 8) = param_2;
        *(undefined8*)(this + 16) = param_3;
        *(undefined4*)(this + 24) = 0;
        *(undefined1(*)[8])(this + 28) = local_28;
        uVar1 = local_28->GetZ();
        *(undefined4*)(this + 36) = uVar1;
        std::function<void(EnumAnisotropicFiltering, EnumAnisotropicFiltering)>::function(
            (function<void(EnumAnisotropicFiltering, EnumAnisotropicFiltering)>*)(this + 48));
        std::function<void(EnumAnisotropicFiltering, EnumAnisotropicFiltering)>::function(
            (function<void(EnumAnisotropicFiltering, EnumAnisotropicFiltering)>*)(this + 96));
        std::function<bool()>::function((function<bool()>*)(this + 144));
        new ((this + 192)) eastl::optional<EnumOptionToggle>();
    }

    // 0x100603f60, 144 bytes, base-object constructor, inline, placed by class name
    // Option<EnumAntialiasingMode>::Option(graphics::RT7Core&, Settings&, char const*, math::Range<EnumAntialiasingMode>)
    void Option<EnumAntialiasingMode>::Option(undefined8 param_2_00, undefined8 param_2, undefined8 param_3,
                                              undefined8 param_5) {
        undefined4 uVar1;
        undefined1 local_28[8];

        local_28 = (undefined1[8])param_5;
        new (this) IOption();
        *(undefined**)this = PTR_vtable_100ee8558 + 16;
        *(undefined8*)(this + 8) = param_2;
        *(undefined8*)(this + 16) = param_3;
        *(undefined4*)(this + 24) = 0;
        *(undefined1(*)[8])(this + 28) = local_28;
        uVar1 = local_28->GetZ();
        *(undefined4*)(this + 36) = uVar1;
        std::function<void(EnumAntialiasingMode, EnumAntialiasingMode)>::function(
            (function<void(EnumAntialiasingMode, EnumAntialiasingMode)>*)(this + 48));
        std::function<void(EnumAntialiasingMode, EnumAntialiasingMode)>::function(
            (function<void(EnumAntialiasingMode, EnumAntialiasingMode)>*)(this + 96));
        std::function<bool()>::function((function<bool()>*)(this + 144));
        new ((this + 192)) eastl::optional<EnumOptionToggle>();
    }

    // 0x100604570, 144 bytes, base-object constructor, inline, placed by class name
    // Option<EnumBloom>::Option(graphics::RT7Core&, Settings&, char const*, math::Range<EnumBloom>)
    void Option<EnumBloom>::Option(undefined8 param_2_00, undefined8 param_2, undefined8 param_3, undefined8 param_5) {
        undefined4 uVar1;
        undefined1 local_28[8];

        local_28 = (undefined1[8])param_5;
        new (this) IOption();
        *(undefined**)this = PTR_vtable_100ee8578 + 16;
        *(undefined8*)(this + 8) = param_2;
        *(undefined8*)(this + 16) = param_3;
        *(undefined4*)(this + 24) = 0;
        *(undefined1(*)[8])(this + 28) = local_28;
        uVar1 = local_28->GetZ();
        *(undefined4*)(this + 36) = uVar1;
        std::function<void(EnumBloom, EnumBloom)>::function((function<void(EnumBloom, EnumBloom)>*)(this + 48));
        std::function<void(EnumBloom, EnumBloom)>::function((function<void(EnumBloom, EnumBloom)>*)(this + 96));
        std::function<bool()>::function((function<bool()>*)(this + 144));
        new ((this + 192)) eastl::optional<EnumOptionToggle>();
    }

    // 0x100609de0, 208 bytes, inline, placed by class name
    // Option<EnumAnisotropicFiltering>::SaveSetting()
    void Option<EnumAnisotropicFiltering>::SaveSetting() {
        BucketAllocatorEASTL* pBVar1;
        Settings* this_00;
        char* pcVar2;
        NpcUID* in_RDX;
        basic_string local_60[24];
        eastl local_48[24];
        eastl local_30[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", in_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_48, local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        Settings::SetValue<int>(*(Settings**)(this + 8), *(char**)(this + 16), *(int*)(this + 24));
        this_00 = *(Settings**)(this + 8);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        Settings::SetValue<int>(this_00, pcVar2, *(int*)(this + 36));
        (**(code**)(*(long*)this + 136))(this);
        local_48->~basic_string();
    }

    // 0x100609eb0, 208 bytes, inline, placed by class name
    // Option<EnumAntialiasingMode>::SaveSetting()
    void Option<EnumAntialiasingMode>::SaveSetting() {
        BucketAllocatorEASTL* pBVar1;
        Settings* this_00;
        char* pcVar2;
        NpcUID* in_RDX;
        basic_string local_60[24];
        eastl local_48[24];
        eastl local_30[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", in_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_48, local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        Settings::SetValue<int>(*(Settings**)(this + 8), *(char**)(this + 16), *(int*)(this + 24));
        this_00 = *(Settings**)(this + 8);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        Settings::SetValue<int>(this_00, pcVar2, *(int*)(this + 36));
        (**(code**)(*(long*)this + 136))(this);
        local_48->~basic_string();
    }

    // 0x100609f80, 208 bytes, inline, placed by class name
    // Option<graphics::GraphicsQuality>::SaveSetting()
    void Option<graphics::GraphicsQuality>::SaveSetting() {
        BucketAllocatorEASTL* pBVar1;
        Settings* this_00;
        char* pcVar2;
        NpcUID* in_RDX;
        basic_string local_60[24];
        eastl local_48[24];
        eastl local_30[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", in_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_48, local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        Settings::SetValue<int>(*(Settings**)(this + 8), *(char**)(this + 16), *(int*)(this + 24));
        this_00 = *(Settings**)(this + 8);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        Settings::SetValue<int>(this_00, pcVar2, *(int*)(this + 36));
        (**(code**)(*(long*)this + 136))(this);
        local_48->~basic_string();
    }

    // 0x10060a050, 208 bytes, inline, placed by class name
    // Option<EnumAutoSetup>::SaveSetting()
    void Option<EnumAutoSetup>::SaveSetting() {
        BucketAllocatorEASTL* pBVar1;
        Settings* this_00;
        char* pcVar2;
        NpcUID* in_RDX;
        basic_string local_60[24];
        eastl local_48[24];
        eastl local_30[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", in_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_48, local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        Settings::SetValue<int>(*(Settings**)(this + 8), *(char**)(this + 16), *(int*)(this + 24));
        this_00 = *(Settings**)(this + 8);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        Settings::SetValue<int>(this_00, pcVar2, *(int*)(this + 36));
        (**(code**)(*(long*)this + 136))(this);
        local_48->~basic_string();
    }

    // 0x10060a120, 208 bytes, inline, placed by class name
    // Option<EnumBloom>::SaveSetting()
    void Option<EnumBloom>::SaveSetting() {
        BucketAllocatorEASTL* pBVar1;
        Settings* this_00;
        char* pcVar2;
        NpcUID* in_RDX;
        basic_string local_60[24];
        eastl local_48[24];
        eastl local_30[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", in_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_48, local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        Settings::SetValue<int>(*(Settings**)(this + 8), *(char**)(this + 16), *(int*)(this + 24));
        this_00 = *(Settings**)(this + 8);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        Settings::SetValue<int>(this_00, pcVar2, *(int*)(this + 36));
        (**(code**)(*(long*)this + 136))(this);
        local_48->~basic_string();
    }

    // 0x10060a1f0, 208 bytes, inline, placed by class name
    // Option<EnumBrightness>::SaveSetting()
    void Option<EnumBrightness>::SaveSetting() {
        BucketAllocatorEASTL* pBVar1;
        Settings* this_00;
        char* pcVar2;
        NpcUID* in_RDX;
        basic_string local_60[24];
        eastl local_48[24];
        eastl local_30[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", in_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_48, local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        Settings::SetValue<int>(*(Settings**)(this + 8), *(char**)(this + 16), *(int*)(this + 24));
        this_00 = *(Settings**)(this + 8);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        Settings::SetValue<int>(this_00, pcVar2, *(int*)(this + 36));
        (**(code**)(*(long*)this + 136))(this);
        local_48->~basic_string();
    }

    // 0x10060a2c0, 208 bytes, inline, placed by class name
    // Option<EnumOptionToggle>::SaveSetting()
    void Option<EnumOptionToggle>::SaveSetting() {
        BucketAllocatorEASTL* pBVar1;
        Settings* this_00;
        char* pcVar2;
        NpcUID* in_RDX;
        basic_string local_60[24];
        eastl local_48[24];
        eastl local_30[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", in_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_48, local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        Settings::SetValue<int>(*(Settings**)(this + 8), *(char**)(this + 16), *(int*)(this + 24));
        this_00 = *(Settings**)(this + 8);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        Settings::SetValue<int>(this_00, pcVar2, *(int*)(this + 36));
        (**(code**)(*(long*)this + 136))(this);
        local_48->~basic_string();
    }

    // 0x10060a390, 208 bytes, inline, placed by class name
    // Option<unsigned int>::SaveSetting()
    void Option<unsigned int>::SaveSetting() {
        BucketAllocatorEASTL* pBVar1;
        Settings* this_00;
        char* pcVar2;
        NpcUID* in_RDX;
        basic_string local_60[24];
        eastl local_48[24];
        eastl local_30[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", in_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_48, local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        Settings::SetValue<int>(*(Settings**)(this + 8), *(char**)(this + 16), *(int*)(this + 24));
        this_00 = *(Settings**)(this + 8);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        Settings::SetValue<int>(this_00, pcVar2, *(int*)(this + 36));
        (**(code**)(*(long*)this + 136))(this);
        local_48->~basic_string();
    }

    // 0x10060a460, 208 bytes, inline, placed by class name
    // Option<graphics::SSAOPass::Mode>::SaveSetting()
    void Option<graphics::SSAOPass::Mode>::SaveSetting() {
        BucketAllocatorEASTL* pBVar1;
        Settings* this_00;
        char* pcVar2;
        NpcUID* in_RDX;
        basic_string local_60[24];
        eastl local_48[24];
        eastl local_30[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", in_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_48, local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        Settings::SetValue<int>(*(Settings**)(this + 8), *(char**)(this + 16), *(int*)(this + 24));
        this_00 = *(Settings**)(this + 8);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        Settings::SetValue<int>(this_00, pcVar2, *(int*)(this + 36));
        (**(code**)(*(long*)this + 136))(this);
        local_48->~basic_string();
    }

    // 0x10060a530, 208 bytes, inline, placed by class name
    // Option<render::VSyncMode>::SaveSetting()
    void Option<render::VSyncMode>::SaveSetting() {
        BucketAllocatorEASTL* pBVar1;
        Settings* this_00;
        char* pcVar2;
        NpcUID* in_RDX;
        basic_string local_60[24];
        eastl local_48[24];
        eastl local_30[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", in_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_48, local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        Settings::SetValue<int>(*(Settings**)(this + 8), *(char**)(this + 16), *(int*)(this + 24));
        this_00 = *(Settings**)(this + 8);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        Settings::SetValue<int>(this_00, pcVar2, *(int*)(this + 36));
        (**(code**)(*(long*)this + 136))(this);
        local_48->~basic_string();
    }

    // 0x10060a600, 208 bytes, inline, placed by class name
    // Option<EnumParticleQualityLevel>::SaveSetting()
    void Option<EnumParticleQualityLevel>::SaveSetting() {
        BucketAllocatorEASTL* pBVar1;
        Settings* this_00;
        char* pcVar2;
        NpcUID* in_RDX;
        basic_string local_60[24];
        eastl local_48[24];
        eastl local_30[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", in_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_48, local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        Settings::SetValue<int>(*(Settings**)(this + 8), *(char**)(this + 16), *(int*)(this + 24));
        this_00 = *(Settings**)(this + 8);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        Settings::SetValue<int>(this_00, pcVar2, *(int*)(this + 36));
        (**(code**)(*(long*)this + 136))(this);
        local_48->~basic_string();
    }

    // 0x10060a6d0, 208 bytes, inline, placed by class name
    // Option<EnumRemoveRoof>::SaveSetting()
    void Option<EnumRemoveRoof>::SaveSetting() {
        BucketAllocatorEASTL* pBVar1;
        Settings* this_00;
        char* pcVar2;
        NpcUID* in_RDX;
        basic_string local_60[24];
        eastl local_48[24];
        eastl local_30[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", in_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_48, local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        Settings::SetValue<int>(*(Settings**)(this + 8), *(char**)(this + 16), *(int*)(this + 24));
        this_00 = *(Settings**)(this + 8);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        Settings::SetValue<int>(this_00, pcVar2, *(int*)(this + 36));
        (**(code**)(*(long*)this + 136))(this);
        local_48->~basic_string();
    }

    // 0x10060a7a0, 208 bytes, inline, placed by class name
    // Option<LanguageID>::SaveSetting()
    void Option<LanguageID>::SaveSetting() {
        BucketAllocatorEASTL* pBVar1;
        Settings* this_00;
        char* pcVar2;
        NpcUID* in_RDX;
        basic_string local_60[24];
        eastl local_48[24];
        eastl local_30[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", in_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_48, local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        Settings::SetValue<int>(*(Settings**)(this + 8), *(char**)(this + 16), *(int*)(this + 24));
        this_00 = *(Settings**)(this + 8);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        Settings::SetValue<int>(this_00, pcVar2, *(int*)(this + 36));
        (**(code**)(*(long*)this + 136))(this);
        local_48->~basic_string();
    }

    // 0x10060a870, 208 bytes, inline, placed by class name
    // Option<unsigned char>::SaveSetting()
    void Option<unsigned char>::SaveSetting() {
        BucketAllocatorEASTL* pBVar1;
        Settings* this_00;
        char* pcVar2;
        NpcUID* in_RDX;
        basic_string local_60[24];
        eastl local_48[24];
        eastl local_30[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", in_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_48, local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        Settings::SetValue<int>(*(Settings**)(this + 8), *(char**)(this + 16), (uint)(byte)this[24]);
        this_00 = *(Settings**)(this + 8);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        Settings::SetValue<int>(this_00, pcVar2, (uint)(byte)this[27]);
        (**(code**)(*(long*)this + 136))(this);
        local_48->~basic_string();
    }

    // 0x10060a940, 320 bytes, inline, placed by class name
    // Option<EnumAnisotropicFiltering>::LoadSetting(graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<EnumAnisotropicFiltering>::LoadSetting(RT7Core* param_1, EffectManager* param_2, bool param_3) {
        BucketAllocatorEASTL* pBVar1;
        Settings* pSVar2;
        int iVar4;
        int iVar5;
        char* pcVar6;
        eastl local_78[24];
        int local_60[6];
        eastl local_38[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", (NpcUID*)param_2);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_78, (basic_string*)local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        if (param_3) {
            iVar4 = (**(code**)(*(long*)this + 104))(this);
        } else {
            pSVar2 = *(Settings**)(this + 8);
            pcVar6 = *(char**)(this + 16);
            local_60[0] = (**(code**)(*(long*)this + 104))(this);
            iVar4 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        }
        pSVar2 = *(Settings**)(this + 8);
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((this + 28))->GetZ();
        iVar5 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        *(int*)(this + 36) = iVar5;
        SetValue(this, iVar4, param_1, param_2, 1);
        (**(code**)(*(long*)this + 144))(this, param_1, param_2);
        local_78->~basic_string();
    }

    // 0x10060aa80, 320 bytes, inline, placed by class name
    // Option<EnumAntialiasingMode>::LoadSetting(graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<EnumAntialiasingMode>::LoadSetting(RT7Core* param_1, EffectManager* param_2, bool param_3) {
        BucketAllocatorEASTL* pBVar1;
        Settings* pSVar2;
        int iVar4;
        int iVar5;
        char* pcVar6;
        eastl local_78[24];
        int local_60[6];
        eastl local_38[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", (NpcUID*)param_2);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_78, (basic_string*)local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        if (param_3) {
            iVar4 = (**(code**)(*(long*)this + 104))(this);
        } else {
            pSVar2 = *(Settings**)(this + 8);
            pcVar6 = *(char**)(this + 16);
            local_60[0] = (**(code**)(*(long*)this + 104))(this);
            iVar4 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        }
        pSVar2 = *(Settings**)(this + 8);
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((this + 28))->GetZ();
        iVar5 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        *(int*)(this + 36) = iVar5;
        SetValue(this, iVar4, param_1, param_2, 1);
        (**(code**)(*(long*)this + 144))(this, param_1, param_2);
        local_78->~basic_string();
    }

    // 0x10060abc0, 320 bytes, inline, placed by class name
    // Option<graphics::GraphicsQuality>::LoadSetting(graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<graphics::GraphicsQuality>::LoadSetting(RT7Core* param_1, EffectManager* param_2, bool param_3) {
        BucketAllocatorEASTL* pBVar1;
        Settings* pSVar2;
        int iVar4;
        int iVar5;
        char* pcVar6;
        eastl local_78[24];
        int local_60[6];
        eastl local_38[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", (NpcUID*)param_2);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_78, (basic_string*)local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        if (param_3) {
            iVar4 = (**(code**)(*(long*)this + 104))(this);
        } else {
            pSVar2 = *(Settings**)(this + 8);
            pcVar6 = *(char**)(this + 16);
            local_60[0] = (**(code**)(*(long*)this + 104))(this);
            iVar4 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        }
        pSVar2 = *(Settings**)(this + 8);
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((this + 28))->GetZ();
        iVar5 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        *(int*)(this + 36) = iVar5;
        SetValue(this, iVar4, param_1, param_2, 1);
        (**(code**)(*(long*)this + 144))(this, param_1, param_2);
        local_78->~basic_string();
    }

    // 0x10060ad00, 320 bytes, inline, placed by class name
    // Option<EnumAutoSetup>::LoadSetting(graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<EnumAutoSetup>::LoadSetting(RT7Core* param_1, EffectManager* param_2, bool param_3) {
        BucketAllocatorEASTL* pBVar1;
        Settings* pSVar2;
        int iVar4;
        int iVar5;
        char* pcVar6;
        eastl local_78[24];
        int local_60[6];
        eastl local_38[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", (NpcUID*)param_2);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_78, (basic_string*)local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        if (param_3) {
            iVar4 = (**(code**)(*(long*)this + 104))(this);
        } else {
            pSVar2 = *(Settings**)(this + 8);
            pcVar6 = *(char**)(this + 16);
            local_60[0] = (**(code**)(*(long*)this + 104))(this);
            iVar4 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        }
        pSVar2 = *(Settings**)(this + 8);
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((this + 28))->GetZ();
        iVar5 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        *(int*)(this + 36) = iVar5;
        SetValue(this, iVar4, param_1, param_2, 1);
        (**(code**)(*(long*)this + 144))(this, param_1, param_2);
        local_78->~basic_string();
    }

    // 0x10060ae40, 320 bytes, inline, placed by class name
    // Option<EnumBloom>::LoadSetting(graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<EnumBloom>::LoadSetting(RT7Core* param_1, EffectManager* param_2, bool param_3) {
        BucketAllocatorEASTL* pBVar1;
        Settings* pSVar2;
        int iVar4;
        int iVar5;
        char* pcVar6;
        eastl local_78[24];
        int local_60[6];
        eastl local_38[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", (NpcUID*)param_2);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_78, (basic_string*)local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        if (param_3) {
            iVar4 = (**(code**)(*(long*)this + 104))(this);
        } else {
            pSVar2 = *(Settings**)(this + 8);
            pcVar6 = *(char**)(this + 16);
            local_60[0] = (**(code**)(*(long*)this + 104))(this);
            iVar4 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        }
        pSVar2 = *(Settings**)(this + 8);
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((this + 28))->GetZ();
        iVar5 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        *(int*)(this + 36) = iVar5;
        SetValue(this, iVar4, param_1, param_2, 1);
        (**(code**)(*(long*)this + 144))(this, param_1, param_2);
        local_78->~basic_string();
    }

    // 0x10060af80, 320 bytes, inline, placed by class name
    // Option<EnumBrightness>::LoadSetting(graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<EnumBrightness>::LoadSetting(RT7Core* param_1, EffectManager* param_2, bool param_3) {
        BucketAllocatorEASTL* pBVar1;
        Settings* pSVar2;
        int iVar4;
        int iVar5;
        char* pcVar6;
        eastl local_78[24];
        int local_60[6];
        eastl local_38[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", (NpcUID*)param_2);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_78, (basic_string*)local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        if (param_3) {
            iVar4 = (**(code**)(*(long*)this + 104))(this);
        } else {
            pSVar2 = *(Settings**)(this + 8);
            pcVar6 = *(char**)(this + 16);
            local_60[0] = (**(code**)(*(long*)this + 104))(this);
            iVar4 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        }
        pSVar2 = *(Settings**)(this + 8);
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((this + 28))->GetZ();
        iVar5 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        *(int*)(this + 36) = iVar5;
        SetValue(this, iVar4, param_1, param_2, 1);
        (**(code**)(*(long*)this + 144))(this, param_1, param_2);
        local_78->~basic_string();
    }

    // 0x10060b0c0, 320 bytes, inline, placed by class name
    // Option<EnumOptionToggle>::LoadSetting(graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<EnumOptionToggle>::LoadSetting(RT7Core* param_1, EffectManager* param_2, bool param_3) {
        BucketAllocatorEASTL* pBVar1;
        Settings* pSVar2;
        int iVar4;
        int iVar5;
        char* pcVar6;
        eastl local_78[24];
        int local_60[6];
        eastl local_38[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", (NpcUID*)param_2);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_78, (basic_string*)local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        if (param_3) {
            iVar4 = (**(code**)(*(long*)this + 104))(this);
        } else {
            pSVar2 = *(Settings**)(this + 8);
            pcVar6 = *(char**)(this + 16);
            local_60[0] = (**(code**)(*(long*)this + 104))(this);
            iVar4 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        }
        pSVar2 = *(Settings**)(this + 8);
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((this + 28))->GetZ();
        iVar5 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        *(int*)(this + 36) = iVar5;
        SetValue(this, iVar4, param_1, param_2, 1);
        (**(code**)(*(long*)this + 144))(this, param_1, param_2);
        local_78->~basic_string();
    }

    // 0x10060b200, 320 bytes, inline, placed by class name
    // Option<unsigned int>::LoadSetting(graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<unsigned int>::LoadSetting(RT7Core* param_1, EffectManager* param_2, bool param_3) {
        BucketAllocatorEASTL* pBVar1;
        Settings* pSVar2;
        uint uVar4;
        int iVar5;
        char* pcVar6;
        eastl local_78[24];
        int local_60[6];
        eastl local_38[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", (NpcUID*)param_2);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_78, (basic_string*)local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        if (param_3) {
            uVar4 = (**(code**)(*(long*)this + 104))(this);
        } else {
            pSVar2 = *(Settings**)(this + 8);
            pcVar6 = *(char**)(this + 16);
            local_60[0] = (**(code**)(*(long*)this + 104))(this);
            uVar4 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        }
        pSVar2 = *(Settings**)(this + 8);
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((this + 28))->GetZ();
        iVar5 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        *(int*)(this + 36) = iVar5;
        SetValue(this, uVar4, param_1, param_2, true);
        (**(code**)(*(long*)this + 144))(this, param_1, param_2);
        local_78->~basic_string();
    }

    // 0x10060b340, 320 bytes, inline, placed by class name
    // Option<graphics::SSAOPass::Mode>::LoadSetting(graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<graphics::SSAOPass::Mode>::LoadSetting(RT7Core* param_1, EffectManager* param_2, bool param_3) {
        BucketAllocatorEASTL* pBVar1;
        Settings* pSVar2;
        int iVar4;
        int iVar5;
        char* pcVar6;
        eastl local_78[24];
        int local_60[6];
        eastl local_38[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", (NpcUID*)param_2);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_78, (basic_string*)local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        if (param_3) {
            iVar4 = (**(code**)(*(long*)this + 104))(this);
        } else {
            pSVar2 = *(Settings**)(this + 8);
            pcVar6 = *(char**)(this + 16);
            local_60[0] = (**(code**)(*(long*)this + 104))(this);
            iVar4 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        }
        pSVar2 = *(Settings**)(this + 8);
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((this + 28))->GetZ();
        iVar5 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        *(int*)(this + 36) = iVar5;
        SetValue(this, iVar4, param_1, param_2, 1);
        (**(code**)(*(long*)this + 144))(this, param_1, param_2);
        local_78->~basic_string();
    }

    // 0x10060b480, 320 bytes, inline, placed by class name
    // Option<EnumParticleQualityLevel>::LoadSetting(graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<EnumParticleQualityLevel>::LoadSetting(RT7Core* param_1, EffectManager* param_2, bool param_3) {
        BucketAllocatorEASTL* pBVar1;
        Settings* pSVar2;
        int iVar4;
        int iVar5;
        char* pcVar6;
        eastl local_78[24];
        int local_60[6];
        eastl local_38[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", (NpcUID*)param_2);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_78, (basic_string*)local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        if (param_3) {
            iVar4 = (**(code**)(*(long*)this + 104))(this);
        } else {
            pSVar2 = *(Settings**)(this + 8);
            pcVar6 = *(char**)(this + 16);
            local_60[0] = (**(code**)(*(long*)this + 104))(this);
            iVar4 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        }
        pSVar2 = *(Settings**)(this + 8);
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((this + 28))->GetZ();
        iVar5 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        *(int*)(this + 36) = iVar5;
        SetValue(this, iVar4, param_1, param_2, 1);
        (**(code**)(*(long*)this + 144))(this, param_1, param_2);
        local_78->~basic_string();
    }

    // 0x10060b5c0, 320 bytes, inline, placed by class name
    // Option<render::VSyncMode>::LoadSetting(graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<render::VSyncMode>::LoadSetting(RT7Core* param_1, EffectManager* param_2, bool param_3) {
        BucketAllocatorEASTL* pBVar1;
        Settings* pSVar2;
        int iVar4;
        int iVar5;
        char* pcVar6;
        eastl local_78[24];
        int local_60[6];
        eastl local_38[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", (NpcUID*)param_2);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_78, (basic_string*)local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        if (param_3) {
            iVar4 = (**(code**)(*(long*)this + 104))(this);
        } else {
            pSVar2 = *(Settings**)(this + 8);
            pcVar6 = *(char**)(this + 16);
            local_60[0] = (**(code**)(*(long*)this + 104))(this);
            iVar4 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        }
        pSVar2 = *(Settings**)(this + 8);
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((this + 28))->GetZ();
        iVar5 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        *(int*)(this + 36) = iVar5;
        SetValue(this, iVar4, param_1, param_2, 1);
        (**(code**)(*(long*)this + 144))(this, param_1, param_2);
        local_78->~basic_string();
    }

    // 0x10060b700, 320 bytes, inline, placed by class name
    // Option<EnumRemoveRoof>::LoadSetting(graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<EnumRemoveRoof>::LoadSetting(RT7Core* param_1, EffectManager* param_2, bool param_3) {
        BucketAllocatorEASTL* pBVar1;
        Settings* pSVar2;
        int iVar4;
        int iVar5;
        char* pcVar6;
        eastl local_78[24];
        int local_60[6];
        eastl local_38[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", (NpcUID*)param_2);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_78, (basic_string*)local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        if (param_3) {
            iVar4 = (**(code**)(*(long*)this + 104))(this);
        } else {
            pSVar2 = *(Settings**)(this + 8);
            pcVar6 = *(char**)(this + 16);
            local_60[0] = (**(code**)(*(long*)this + 104))(this);
            iVar4 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        }
        pSVar2 = *(Settings**)(this + 8);
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((this + 28))->GetZ();
        iVar5 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        *(int*)(this + 36) = iVar5;
        SetValue(this, iVar4, param_1, param_2, 1);
        (**(code**)(*(long*)this + 144))(this, param_1, param_2);
        local_78->~basic_string();
    }

    // 0x10060b840, 16 bytes, inline, placed by class name
    // Option<EnumRemoveRoof>::SetValueInternal(EnumRemoveRoof)
    void Option<EnumRemoveRoof>::SetValueInternal(undefined4 param_2) {
        *(undefined4*)(this + 24) = param_2;
    }

    // 0x10060b850, 320 bytes, inline, placed by class name
    // Option<LanguageID>::LoadSetting(graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<LanguageID>::LoadSetting(RT7Core* param_1, EffectManager* param_2, bool param_3) {
        BucketAllocatorEASTL* pBVar1;
        Settings* pSVar2;
        int iVar4;
        int iVar5;
        char* pcVar6;
        eastl local_78[24];
        int local_60[6];
        eastl local_38[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", (NpcUID*)param_2);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_78, (basic_string*)local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        if (param_3) {
            iVar4 = (**(code**)(*(long*)this + 104))(this);
        } else {
            pSVar2 = *(Settings**)(this + 8);
            pcVar6 = *(char**)(this + 16);
            local_60[0] = (**(code**)(*(long*)this + 104))(this);
            iVar4 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        }
        pSVar2 = *(Settings**)(this + 8);
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((this + 28))->GetZ();
        iVar5 = Settings::GetValueWithDefault<int>(pSVar2, pcVar6, local_60);
        *(int*)(this + 36) = iVar5;
        SetValue(this, iVar4, param_1, param_2, 1);
        (**(code**)(*(long*)this + 144))(this, param_1, param_2);
        local_78->~basic_string();
    }

    // 0x10060b990, 320 bytes, inline, placed by class name
    // Option<unsigned char>::LoadSetting(graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<unsigned char>::LoadSetting(RT7Core* param_1, EffectManager* param_2, bool param_3) {
        BucketAllocatorEASTL* pBVar1;
        Settings* pSVar2;
        uchar uVar4;
        byte bVar5;
        int iVar6;
        char* pcVar7;
        eastl local_78[24];
        uint local_60[6];
        eastl local_38[8];

        pBVar1 = *(BucketAllocatorEASTL**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", (NpcUID*)param_2);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, pBVar1);
        eastl::operator+(local_78, (basic_string*)local_60, (value_type*)"_MaxLower");
        local_60->~basic_string();
        if (param_3) {
            uVar4 = (**(code**)(*(long*)this + 104))(this);
        } else {
            pSVar2 = *(Settings**)(this + 8);
            pcVar7 = *(char**)(this + 16);
            bVar5 = (**(code**)(*(long*)this + 104))(this);
            local_60[0] = (uint)bVar5;
            iVar6 = Settings::GetValueWithDefault<int>(pSVar2, pcVar7, (int*)local_60);
            uVar4 = (uchar)iVar6;
        }
        pSVar2 = *(Settings**)(this + 8);
        pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        bVar5 = ((this + 25))->GetRot();
        local_60[0] = (uint)bVar5;
        iVar6 = Settings::GetValueWithDefault<int>(pSVar2, pcVar7, (int*)local_60);
        this[27] = SUB41(iVar6, 0);
        SetValue(this, uVar4, param_1, param_2, true);
        (**(code**)(*(long*)this + 144))(this, param_1, param_2);
        local_78->~basic_string();
    }

    // 0x10060c2b0, 240 bytes, inline, placed by class name
    // Option<EnumAntialiasingMode>::SetValue(EnumAntialiasingMode, graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<EnumAntialiasingMode>::SetValue(int param_2, undefined8 param_3, undefined8 param_4, int param_5) {
        undefined4 uVar1;
        undefined8 uVar3;
        char* pcVar4;
        undefined4 local_3c;
        undefined4 local_38;
        int local_34;

        local_34 = param_2;
        local_3c = ((this + 28))->GetX();
        local_38 = ((this + 28))->GetZ();
        local_34 = math::Clamp<EnumAntialiasingMode>((EnumAntialiasingMode*)&local_34, (EnumAntialiasingMode*)&local_3c,
                                                     (EnumAntialiasingMode*)&local_38);
        if ((param_5 != 0) || (local_34 != *(int*)(this + 24))) {
            if ((**(code**)(*(long*)this + 128))(this) != '\0') {
                uVar3 = logger::default_logger();
                pcVar4 = "";
                if ((char)param_5 != '\0') {
                    pcVar4 = "(FORCED)";
                }
                logger::Logger::Log(uVar3, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/clientoptions/options/../Option.h",
                                    123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s",
                                    *(undefined8*)(this + 16), local_34, *(undefined4*)(this + 24), pcVar4);
                uVar1 = *(undefined4*)(this + 24);
                *(int*)(this + 24) = local_34;
                ApplySetting(this, param_3, param_4, uVar1);
            }
        }
    }

    // 0x10060c3a0, 240 bytes, inline, placed by class name
    // Option<graphics::GraphicsQuality>::SetValue(graphics::GraphicsQuality, graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<graphics::GraphicsQuality>::SetValue(int param_2, undefined8 param_3, undefined8 param_4, int param_5) {
        undefined4 uVar1;
        undefined8 uVar3;
        char* pcVar4;
        undefined4 local_3c;
        undefined4 local_38;
        int local_34;

        local_34 = param_2;
        local_3c = ((this + 28))->GetX();
        local_38 = ((this + 28))->GetZ();
        local_34 = math::Clamp<graphics::GraphicsQuality>((GraphicsQuality*)&local_34, (GraphicsQuality*)&local_3c,
                                                          (GraphicsQuality*)&local_38);
        if ((param_5 != 0) || (local_34 != *(int*)(this + 24))) {
            if ((**(code**)(*(long*)this + 128))(this) != '\0') {
                uVar3 = logger::default_logger();
                pcVar4 = "";
                if ((char)param_5 != '\0') {
                    pcVar4 = "(FORCED)";
                }
                logger::Logger::Log(uVar3, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/clientoptions/options/../Option.h",
                                    123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s",
                                    *(undefined8*)(this + 16), local_34, *(undefined4*)(this + 24), pcVar4);
                uVar1 = *(undefined4*)(this + 24);
                *(int*)(this + 24) = local_34;
                ApplySetting(this, param_3, param_4, uVar1);
            }
        }
    }

    // 0x10060c490, 240 bytes, inline, placed by class name
    // Option<EnumBloom>::SetValue(EnumBloom, graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<EnumBloom>::SetValue(int param_2, undefined8 param_3, undefined8 param_4, int param_5) {
        undefined4 uVar1;
        undefined8 uVar3;
        char* pcVar4;
        undefined4 local_3c;
        undefined4 local_38;
        int local_34;

        local_34 = param_2;
        local_3c = ((this + 28))->GetX();
        local_38 = ((this + 28))->GetZ();
        local_34 = math::Clamp<EnumBloom>((EnumBloom*)&local_34, (EnumBloom*)&local_3c, (EnumBloom*)&local_38);
        if ((param_5 != 0) || (local_34 != *(int*)(this + 24))) {
            if ((**(code**)(*(long*)this + 128))(this) != '\0') {
                uVar3 = logger::default_logger();
                pcVar4 = "";
                if ((char)param_5 != '\0') {
                    pcVar4 = "(FORCED)";
                }
                logger::Logger::Log(uVar3, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/clientoptions/options/../Option.h",
                                    123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s",
                                    *(undefined8*)(this + 16), local_34, *(undefined4*)(this + 24), pcVar4);
                uVar1 = *(undefined4*)(this + 24);
                *(int*)(this + 24) = local_34;
                ApplySetting(this, param_3, param_4, uVar1);
            }
        }
    }

    // 0x10060c580, 240 bytes, inline, placed by class name
    // Option<EnumBrightness>::SetValue(EnumBrightness, graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<EnumBrightness>::SetValue(int param_2, undefined8 param_3, undefined8 param_4, int param_5) {
        undefined4 uVar1;
        undefined8 uVar3;
        char* pcVar4;
        undefined4 local_3c;
        undefined4 local_38;
        int local_34;

        local_34 = param_2;
        local_3c = ((this + 28))->GetX();
        local_38 = ((this + 28))->GetZ();
        local_34 = math::Clamp<EnumBrightness>((EnumBrightness*)&local_34, (EnumBrightness*)&local_3c,
                                               (EnumBrightness*)&local_38);
        if ((param_5 != 0) || (local_34 != *(int*)(this + 24))) {
            if ((**(code**)(*(long*)this + 128))(this) != '\0') {
                uVar3 = logger::default_logger();
                pcVar4 = "";
                if ((char)param_5 != '\0') {
                    pcVar4 = "(FORCED)";
                }
                logger::Logger::Log(uVar3, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/clientoptions/options/../Option.h",
                                    123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s",
                                    *(undefined8*)(this + 16), local_34, *(undefined4*)(this + 24), pcVar4);
                uVar1 = *(undefined4*)(this + 24);
                *(int*)(this + 24) = local_34;
                ApplySetting(this, param_3, param_4, uVar1);
            }
        }
    }

    // 0x10060c670, 240 bytes, inline, placed by class name
    // Option<EnumRemoveRoof>::SetValue(EnumRemoveRoof, graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<EnumRemoveRoof>::SetValue(int param_2, undefined8 param_3, undefined8 param_4, int param_5) {
        undefined4 uVar1;
        undefined8 uVar3;
        char* pcVar4;
        undefined4 local_3c;
        undefined4 local_38;
        int local_34;

        local_34 = param_2;
        local_3c = ((this + 28))->GetX();
        local_38 = ((this + 28))->GetZ();
        local_34 = math::Clamp<EnumRemoveRoof>((EnumRemoveRoof*)&local_34, (EnumRemoveRoof*)&local_3c,
                                               (EnumRemoveRoof*)&local_38);
        if ((param_5 != 0) || (local_34 != *(int*)(this + 24))) {
            if ((**(code**)(*(long*)this + 128))(this) != '\0') {
                uVar3 = logger::default_logger();
                pcVar4 = "";
                if ((char)param_5 != '\0') {
                    pcVar4 = "(FORCED)";
                }
                logger::Logger::Log(uVar3, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/clientoptions/options/../Option.h",
                                    123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s",
                                    *(undefined8*)(this + 16), local_34, *(undefined4*)(this + 24), pcVar4);
                uVar1 = *(undefined4*)(this + 24);
                *(int*)(this + 24) = local_34;
                ApplySetting(this, param_3, param_4, uVar1);
            }
        }
    }

    // 0x10060c760, 240 bytes, inline, placed by class name
    // Option<graphics::SSAOPass::Mode>::SetValue(graphics::SSAOPass::Mode, graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<graphics::SSAOPass::Mode>::SetValue(int param_2, undefined8 param_3, undefined8 param_4, int param_5) {
        undefined4 uVar1;
        undefined8 uVar3;
        char* pcVar4;
        undefined4 local_3c;
        undefined4 local_38;
        int local_34;

        local_34 = param_2;
        local_3c = ((this + 28))->GetX();
        local_38 = ((this + 28))->GetZ();
        local_34 = math::Clamp<graphics::SSAOPass::Mode>((Mode*)&local_34, (Mode*)&local_3c, (Mode*)&local_38);
        if ((param_5 != 0) || (local_34 != *(int*)(this + 24))) {
            if ((**(code**)(*(long*)this + 128))(this) != '\0') {
                uVar3 = logger::default_logger();
                pcVar4 = "";
                if ((char)param_5 != '\0') {
                    pcVar4 = "(FORCED)";
                }
                logger::Logger::Log(uVar3, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/clientoptions/options/../Option.h",
                                    123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s",
                                    *(undefined8*)(this + 16), local_34, *(undefined4*)(this + 24), pcVar4);
                uVar1 = *(undefined4*)(this + 24);
                *(int*)(this + 24) = local_34;
                ApplySetting(this, param_3, param_4, uVar1);
            }
        }
    }

    // 0x10060c850, 240 bytes, inline, placed by class name
    // Option<render::VSyncMode>::SetValue(render::VSyncMode, graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<render::VSyncMode>::SetValue(int param_2, undefined8 param_3, undefined8 param_4, int param_5) {
        undefined4 uVar1;
        undefined8 uVar3;
        char* pcVar4;
        undefined4 local_3c;
        undefined4 local_38;
        int local_34;

        local_34 = param_2;
        local_3c = ((this + 28))->GetX();
        local_38 = ((this + 28))->GetZ();
        local_34 = math::Clamp<render::VSyncMode>((VSyncMode*)&local_34, (VSyncMode*)&local_3c, (VSyncMode*)&local_38);
        if ((param_5 != 0) || (local_34 != *(int*)(this + 24))) {
            if ((**(code**)(*(long*)this + 128))(this) != '\0') {
                uVar3 = logger::default_logger();
                pcVar4 = "";
                if ((char)param_5 != '\0') {
                    pcVar4 = "(FORCED)";
                }
                logger::Logger::Log(uVar3, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/clientoptions/options/../Option.h",
                                    123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s",
                                    *(undefined8*)(this + 16), local_34, *(undefined4*)(this + 24), pcVar4);
                uVar1 = *(undefined4*)(this + 24);
                *(int*)(this + 24) = local_34;
                ApplySetting(this, param_3, param_4, uVar1);
            }
        }
    }

    // 0x10060c940, 240 bytes, inline, placed by class name
    // Option<EnumAnisotropicFiltering>::SetValue(EnumAnisotropicFiltering, graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<EnumAnisotropicFiltering>::SetValue(int param_2, undefined8 param_3, undefined8 param_4, int param_5) {
        undefined4 uVar1;
        undefined8 uVar3;
        char* pcVar4;
        undefined4 local_3c;
        undefined4 local_38;
        int local_34;

        local_34 = param_2;
        local_3c = ((this + 28))->GetX();
        local_38 = ((this + 28))->GetZ();
        local_34 = math::Clamp<EnumAnisotropicFiltering>((EnumAnisotropicFiltering*)&local_34,
                                                         (EnumAnisotropicFiltering*)&local_3c,
                                                         (EnumAnisotropicFiltering*)&local_38);
        if ((param_5 != 0) || (local_34 != *(int*)(this + 24))) {
            if ((**(code**)(*(long*)this + 128))(this) != '\0') {
                uVar3 = logger::default_logger();
                pcVar4 = "";
                if ((char)param_5 != '\0') {
                    pcVar4 = "(FORCED)";
                }
                logger::Logger::Log(uVar3, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/clientoptions/options/../Option.h",
                                    123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s",
                                    *(undefined8*)(this + 16), local_34, *(undefined4*)(this + 24), pcVar4);
                uVar1 = *(undefined4*)(this + 24);
                *(int*)(this + 24) = local_34;
                ApplySetting(this, param_3, param_4, uVar1);
            }
        }
    }

    // 0x10060ca30, 240 bytes, inline, placed by class name
    // Option<unsigned int>::SetValue(unsigned int, graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<unsigned int>::SetValue(uint param_1, RT7Core* param_2, EffectManager* param_3, bool param_4) {
        uint uVar1;
        undefined8 uVar3;
        char* pcVar4;
        undefined7 in_register_00000081;
        uint local_3c;
        uint local_38;
        uint local_34;

        local_34 = param_1;
        local_3c = ((this + 28))->GetX();
        local_38 = ((this + 28))->GetZ();
        local_34 = math::Clamp<unsigned int>(&local_34, &local_3c, &local_38);
        if (((int)CONCAT71(in_register_00000081, param_4) != 0) || (local_34 != *(uint*)(this + 24))) {
            if ((**(code**)(*(long*)this + 128))(this) != '\0') {
                uVar3 = logger::default_logger();
                pcVar4 = "";
                if (param_4) {
                    pcVar4 = "(FORCED)";
                }
                logger::Logger::Log(uVar3, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/clientoptions/options/../Option.h",
                                    123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s",
                                    *(undefined8*)(this + 16), local_34, *(undefined4*)(this + 24), pcVar4);
                uVar1 = *(uint*)(this + 24);
                *(uint*)(this + 24) = local_34;
                ApplySetting(this, param_2, param_3, uVar1);
            }
        }
    }

    // 0x10060cf80, 240 bytes, inline, placed by class name
    // Option<EnumAutoSetup>::SetValue(EnumAutoSetup, graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<EnumAutoSetup>::SetValue(int param_2, undefined8 param_3, undefined8 param_4, int param_5) {
        undefined4 uVar1;
        undefined8 uVar3;
        char* pcVar4;
        undefined4 local_3c;
        undefined4 local_38;
        int local_34;

        local_34 = param_2;
        local_3c = ((this + 28))->GetX();
        local_38 = ((this + 28))->GetZ();
        local_34 =
            math::Clamp<EnumAutoSetup>((EnumAutoSetup*)&local_34, (EnumAutoSetup*)&local_3c, (EnumAutoSetup*)&local_38);
        if ((param_5 != 0) || (local_34 != *(int*)(this + 24))) {
            if ((**(code**)(*(long*)this + 128))(this) != '\0') {
                uVar3 = logger::default_logger();
                pcVar4 = "";
                if ((char)param_5 != '\0') {
                    pcVar4 = "(FORCED)";
                }
                logger::Logger::Log(uVar3, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/clientoptions/options/../Option.h",
                                    123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s",
                                    *(undefined8*)(this + 16), local_34, *(undefined4*)(this + 24), pcVar4);
                uVar1 = *(undefined4*)(this + 24);
                *(int*)(this + 24) = local_34;
                ApplySetting(this, param_3, param_4, uVar1);
            }
        }
    }

    // 0x10060da40, 16 bytes, inline, placed by class name
    // Option<EnumAntialiasingMode>::SetMaxLowestValue(EnumAntialiasingMode)
    /* Option<graphics::GraphicsQuality>::SetMaxLowestValue(graphics::GraphicsQuality)
    */

    void Option<graphics::GraphicsQuality>::SetMaxLowestValue(undefined4 param_2) {
        *(undefined4*)(this + 36) = param_2;
    }

    // 0x10060e180, 240 bytes, inline, placed by class name
    // Option<EnumParticleQualityLevel>::SetValue(EnumParticleQualityLevel, graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<EnumParticleQualityLevel>::SetValue(int param_2, undefined8 param_3, undefined8 param_4, int param_5) {
        undefined4 uVar1;
        undefined8 uVar3;
        char* pcVar4;
        undefined4 local_3c;
        undefined4 local_38;
        int local_34;

        local_34 = param_2;
        local_3c = ((this + 28))->GetX();
        local_38 = ((this + 28))->GetZ();
        local_34 = math::Clamp<EnumParticleQualityLevel>((EnumParticleQualityLevel*)&local_34,
                                                         (EnumParticleQualityLevel*)&local_3c,
                                                         (EnumParticleQualityLevel*)&local_38);
        if ((param_5 != 0) || (local_34 != *(int*)(this + 24))) {
            if ((**(code**)(*(long*)this + 128))(this) != '\0') {
                uVar3 = logger::default_logger();
                pcVar4 = "";
                if ((char)param_5 != '\0') {
                    pcVar4 = "(FORCED)";
                }
                logger::Logger::Log(uVar3, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/clientoptions/options/../Option.h",
                                    123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s",
                                    *(undefined8*)(this + 16), local_34, *(undefined4*)(this + 24), pcVar4);
                uVar1 = *(undefined4*)(this + 24);
                *(int*)(this + 24) = local_34;
                ApplySetting(this, param_3, param_4, uVar1);
            }
        }
    }

    // 0x10060e2a0, 16 bytes, inline, placed by class name
    // Option<EnumAntialiasingMode>::GetSupportedValueRange() const
    /* Option<graphics::GraphicsQuality>::GetSupportedValueRange() const */

    undefined8 Option<graphics::GraphicsQuality>::GetSupportedValueRange() {
        return *(undefined8*)(this + 28);
    }

    // 0x10060e3a0, 192 bytes, inline, placed by class name
    // Option<EnumAntialiasingMode>::SetValueIfLower(EnumAntialiasingMode, graphics::RT7Core&, graphics::EffectManager&)
    void Option<EnumAntialiasingMode>::SetValueIfLower(undefined4 param_2, undefined8 param_3, undefined8 param_4) {
        CoordMapSquare* this_00;
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        undefined4 local_3c;
        undefined4 local_38;
        undefined4 local_34;

        iVar1 = *(int*)(this + 36);
        this_00 = (CoordMapSquare*)(this + 28);
        local_3c = param_2;
        iVar2 = this_00->GetX();
        if (iVar1 < iVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_maxLowestValue >= m_Range.GetMin()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/options/../Option.h",
                      112, (char*)0);
        }
        uVar4 = *(undefined4*)(this + 36);
        uVar3 = this_00->GetZ();
        uVar4 = eastl::min<graphics::GraphicsQuality>(uVar4, uVar3);
        local_38 = this_00->GetX();
        local_34 = eastl::min<graphics::GraphicsQuality>(*(undefined4*)(this + 24), uVar4);
        uVar4 = math::Clamp<EnumAntialiasingMode>((EnumAntialiasingMode*)&local_3c, (EnumAntialiasingMode*)&local_38,
                                                  (EnumAntialiasingMode*)&local_34);
        SetValue(this, uVar4, param_3, param_4, 0);
    }

    // 0x10060e460, 192 bytes, inline, placed by class name
    // Option<graphics::GraphicsQuality>::SetValueIfLower(graphics::GraphicsQuality, graphics::RT7Core&, graphics::EffectManager&)
    void Option<graphics::GraphicsQuality>::SetValueIfLower(undefined4 param_2, undefined8 param_3,
                                                            undefined8 param_4) {
        CoordMapSquare* this_00;
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        undefined4 local_3c;
        undefined4 local_38;
        undefined4 local_34;

        iVar1 = *(int*)(this + 36);
        this_00 = (CoordMapSquare*)(this + 28);
        local_3c = param_2;
        iVar2 = this_00->GetX();
        if (iVar1 < iVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_maxLowestValue >= m_Range.GetMin()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/options/../Option.h",
                      112, (char*)0);
        }
        uVar4 = *(undefined4*)(this + 36);
        uVar3 = this_00->GetZ();
        uVar4 = eastl::min<graphics::GraphicsQuality>(uVar4, uVar3);
        local_38 = this_00->GetX();
        local_34 = eastl::min<graphics::GraphicsQuality>(*(undefined4*)(this + 24), uVar4);
        uVar4 = math::Clamp<graphics::GraphicsQuality>((GraphicsQuality*)&local_3c, (GraphicsQuality*)&local_38,
                                                       (GraphicsQuality*)&local_34);
        SetValue(this, uVar4, param_3, param_4, 0);
    }

    // 0x10060e520, 192 bytes, inline, placed by class name
    // Option<EnumBloom>::SetValueIfLower(EnumBloom, graphics::RT7Core&, graphics::EffectManager&)
    void Option<EnumBloom>::SetValueIfLower(undefined4 param_2, undefined8 param_3, undefined8 param_4) {
        CoordMapSquare* this_00;
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        undefined4 local_3c;
        undefined4 local_38;
        undefined4 local_34;

        iVar1 = *(int*)(this + 36);
        this_00 = (CoordMapSquare*)(this + 28);
        local_3c = param_2;
        iVar2 = this_00->GetX();
        if (iVar1 < iVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_maxLowestValue >= m_Range.GetMin()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/options/../Option.h",
                      112, (char*)0);
        }
        uVar4 = *(undefined4*)(this + 36);
        uVar3 = this_00->GetZ();
        uVar4 = eastl::min<graphics::GraphicsQuality>(uVar4, uVar3);
        local_38 = this_00->GetX();
        local_34 = eastl::min<graphics::GraphicsQuality>(*(undefined4*)(this + 24), uVar4);
        uVar4 = math::Clamp<EnumBloom>((EnumBloom*)&local_3c, (EnumBloom*)&local_38, (EnumBloom*)&local_34);
        SetValue(this, uVar4, param_3, param_4, 0);
    }

    // 0x10060e5e0, 192 bytes, inline, placed by class name
    // Option<EnumOptionToggle>::SetValueIfLower(EnumOptionToggle, graphics::RT7Core&, graphics::EffectManager&)
    void Option<EnumOptionToggle>::SetValueIfLower(undefined4 param_2, undefined8 param_3, undefined8 param_4) {
        CoordMapSquare* this_00;
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        undefined4 local_3c;
        undefined4 local_38;
        undefined4 local_34;

        iVar1 = *(int*)(this + 36);
        this_00 = (CoordMapSquare*)(this + 28);
        local_3c = param_2;
        iVar2 = this_00->GetX();
        if (iVar1 < iVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_maxLowestValue >= m_Range.GetMin()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/options/../Option.h",
                      112, (char*)0);
        }
        uVar4 = *(undefined4*)(this + 36);
        uVar3 = this_00->GetZ();
        uVar4 = eastl::min<graphics::GraphicsQuality>(uVar4, uVar3);
        local_38 = this_00->GetX();
        local_34 = eastl::min<graphics::GraphicsQuality>(*(undefined4*)(this + 24), uVar4);
        uVar4 = math::Clamp<EnumOptionToggle>((EnumOptionToggle*)&local_3c, (EnumOptionToggle*)&local_38,
                                              (EnumOptionToggle*)&local_34);
        SetValue(this, uVar4, param_3, param_4, 0);
    }

    // 0x10060e6a0, 192 bytes, inline, placed by class name
    // Option<EnumTextureMode>::SetValueIfLower(EnumTextureMode, graphics::RT7Core&, graphics::EffectManager&)
    void Option<EnumTextureMode>::SetValueIfLower(undefined4 param_2, undefined8 param_3, undefined8 param_4) {
        CoordMapSquare* this_00;
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        undefined4 local_3c;
        undefined4 local_38;
        undefined4 local_34;

        iVar1 = *(int*)(this + 36);
        this_00 = (CoordMapSquare*)(this + 28);
        local_3c = param_2;
        iVar2 = this_00->GetX();
        if (iVar1 < iVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_maxLowestValue >= m_Range.GetMin()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/options/../Option.h",
                      112, (char*)0);
        }
        uVar4 = *(undefined4*)(this + 36);
        uVar3 = this_00->GetZ();
        uVar4 = eastl::min<graphics::GraphicsQuality>(uVar4, uVar3);
        local_38 = this_00->GetX();
        local_34 = eastl::min<graphics::GraphicsQuality>(*(undefined4*)(this + 24), uVar4);
        uVar4 = math::Clamp<EnumTextureMode>((EnumTextureMode*)&local_3c, (EnumTextureMode*)&local_38,
                                             (EnumTextureMode*)&local_34);
        SetValue(this, uVar4, param_3, param_4, 0);
    }

    // 0x10060e760, 192 bytes, inline, placed by class name
    // Option<graphics::SSAOPass::Mode>::SetValueIfLower(graphics::SSAOPass::Mode, graphics::RT7Core&, graphics::EffectManager&)
    void Option<graphics::SSAOPass::Mode>::SetValueIfLower(undefined4 param_2, undefined8 param_3, undefined8 param_4) {
        CoordMapSquare* this_00;
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        undefined4 local_3c;
        undefined4 local_38;
        undefined4 local_34;

        iVar1 = *(int*)(this + 36);
        this_00 = (CoordMapSquare*)(this + 28);
        local_3c = param_2;
        iVar2 = this_00->GetX();
        if (iVar1 < iVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_maxLowestValue >= m_Range.GetMin()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/options/../Option.h",
                      112, (char*)0);
        }
        uVar4 = *(undefined4*)(this + 36);
        uVar3 = this_00->GetZ();
        uVar4 = eastl::min<graphics::GraphicsQuality>(uVar4, uVar3);
        local_38 = this_00->GetX();
        local_34 = eastl::min<graphics::GraphicsQuality>(*(undefined4*)(this + 24), uVar4);
        uVar4 = math::Clamp<graphics::SSAOPass::Mode>((Mode*)&local_3c, (Mode*)&local_38, (Mode*)&local_34);
        SetValue(this, uVar4, param_3, param_4, 0);
    }

    // 0x10060e820, 192 bytes, inline, placed by class name
    // Option<EnumAnisotropicFiltering>::SetValueIfLower(EnumAnisotropicFiltering, graphics::RT7Core&, graphics::EffectManager&)
    void Option<EnumAnisotropicFiltering>::SetValueIfLower(undefined4 param_2, undefined8 param_3, undefined8 param_4) {
        CoordMapSquare* this_00;
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        undefined4 local_3c;
        undefined4 local_38;
        undefined4 local_34;

        iVar1 = *(int*)(this + 36);
        this_00 = (CoordMapSquare*)(this + 28);
        local_3c = param_2;
        iVar2 = this_00->GetX();
        if (iVar1 < iVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_maxLowestValue >= m_Range.GetMin()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/options/../Option.h",
                      112, (char*)0);
        }
        uVar4 = *(undefined4*)(this + 36);
        uVar3 = this_00->GetZ();
        uVar4 = eastl::min<graphics::GraphicsQuality>(uVar4, uVar3);
        local_38 = this_00->GetX();
        local_34 = eastl::min<graphics::GraphicsQuality>(*(undefined4*)(this + 24), uVar4);
        uVar4 = math::Clamp<EnumAnisotropicFiltering>((EnumAnisotropicFiltering*)&local_3c,
                                                      (EnumAnisotropicFiltering*)&local_38,
                                                      (EnumAnisotropicFiltering*)&local_34);
        SetValue(this, uVar4, param_3, param_4, 0);
    }

    // 0x10060e8e0, 192 bytes, inline, placed by class name
    // Option<EnumVolumetricLighting>::SetValueIfLower(EnumVolumetricLighting, graphics::RT7Core&, graphics::EffectManager&)
    void Option<EnumVolumetricLighting>::SetValueIfLower(undefined4 param_2, undefined8 param_3, undefined8 param_4) {
        CoordMapSquare* this_00;
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        undefined4 local_3c;
        undefined4 local_38;
        undefined4 local_34;

        iVar1 = *(int*)(this + 36);
        this_00 = (CoordMapSquare*)(this + 28);
        local_3c = param_2;
        iVar2 = this_00->GetX();
        if (iVar1 < iVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_maxLowestValue >= m_Range.GetMin()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/options/../Option.h",
                      112, (char*)0);
        }
        uVar4 = *(undefined4*)(this + 36);
        uVar3 = this_00->GetZ();
        uVar4 = eastl::min<graphics::GraphicsQuality>(uVar4, uVar3);
        local_38 = this_00->GetX();
        local_34 = eastl::min<graphics::GraphicsQuality>(*(undefined4*)(this + 24), uVar4);
        uVar4 = math::Clamp<EnumVolumetricLighting>(
            (EnumVolumetricLighting*)&local_3c, (EnumVolumetricLighting*)&local_38, (EnumVolumetricLighting*)&local_34);
        SetValue(this, uVar4, param_3, param_4, 0);
    }

    // 0x10060e9a0, 192 bytes, inline, placed by class name
    // Option<EnumParticleQualityLevel>::SetValueIfLower(EnumParticleQualityLevel, graphics::RT7Core&, graphics::EffectManager&)
    void Option<EnumParticleQualityLevel>::SetValueIfLower(undefined4 param_2, undefined8 param_3, undefined8 param_4) {
        CoordMapSquare* this_00;
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        undefined4 local_3c;
        undefined4 local_38;
        undefined4 local_34;

        iVar1 = *(int*)(this + 36);
        this_00 = (CoordMapSquare*)(this + 28);
        local_3c = param_2;
        iVar2 = this_00->GetX();
        if (iVar1 < iVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_maxLowestValue >= m_Range.GetMin()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/options/../Option.h",
                      112, (char*)0);
        }
        uVar4 = *(undefined4*)(this + 36);
        uVar3 = this_00->GetZ();
        uVar4 = eastl::min<EnumParticleQualityLevel>(uVar4, uVar3);
        local_38 = this_00->GetX();
        local_34 = eastl::min<EnumParticleQualityLevel>(*(undefined4*)(this + 24), uVar4);
        uVar4 = math::Clamp<EnumParticleQualityLevel>((EnumParticleQualityLevel*)&local_3c,
                                                      (EnumParticleQualityLevel*)&local_38,
                                                      (EnumParticleQualityLevel*)&local_34);
        SetValue(this, uVar4, param_3, param_4, 0);
    }

    // 0x10060f030, 144 bytes, base-object constructor, inline, placed by class name
    // Option<EnumAutoSetup>::Option(graphics::RT7Core&, Settings&, char const*, math::Range<EnumAutoSetup>)
    void Option<EnumAutoSetup>::Option(undefined8 param_2_00, undefined8 param_2, undefined8 param_3,
                                       undefined8 param_5) {
        undefined4 uVar1;
        undefined1 local_28[8];

        local_28 = (undefined1[8])param_5;
        new (this) IOption();
        *(undefined**)this = PTR_vtable_100ee8530 + 16;
        *(undefined8*)(this + 8) = param_2;
        *(undefined8*)(this + 16) = param_3;
        *(undefined4*)(this + 24) = 0;
        *(undefined1(*)[8])(this + 28) = local_28;
        uVar1 = local_28->GetZ();
        *(undefined4*)(this + 36) = uVar1;
        std::function<void(EnumAutoSetup, EnumAutoSetup)>::function(
            (function<void(EnumAutoSetup, EnumAutoSetup)>*)(this + 48));
        std::function<void(EnumAutoSetup, EnumAutoSetup)>::function(
            (function<void(EnumAutoSetup, EnumAutoSetup)>*)(this + 96));
        std::function<bool()>::function((function<bool()>*)(this + 144));
        new ((this + 192)) eastl::optional<EnumOptionToggle>();
    }

    // 0x10060f0e0, 32 bytes, inline, placed by class name
    // Option<EnumAutoSetup>::GetValueLabels() const
    Option<EnumAutoSetup>* Option<EnumAutoSetup>::GetValueLabels() {
        GetEnumValueNames<EnumAutoSetup>((jag*)this);
        return this;
    }

    // 0x10060f100, 16 bytes, inline, placed by class name
    // Option<EnumAutoSetup>::SetRawValue(int, graphics::RT7Core&, graphics::EffectManager&)
    void Option<EnumAutoSetup>::SetRawValue(int param_1, RT7Core* param_2, EffectManager* param_3) {
        SetValue();
    }

    // 0x10060f130, 16 bytes, complete-object destructor, inline, placed by class name
    // Option<EnumAutoSetup>::~Option(): jumps straight to the base-object destructor

    // 0x10060f140, 32 bytes, deleting destructor, inline, placed by class name
    // Option<EnumAutoSetup>::~Option()
    void Option<EnumAutoSetup>::~Option() {
        ~AutoSetup();
        operator_delete(this);
    }

    // 0x10060f1c0, 80 bytes, base-object destructor, inline, placed by class name
    // Option<EnumAutoSetup>::~Option()
    void Option<EnumAutoSetup>::~Option() {
        *(undefined**)this = PTR_vtable_100ee8530 + 16;
        std::function<bool()>::~function((function<bool()>*)(this + 144));
        std::function<void(EnumAutoSetup, EnumAutoSetup)>::~function(
            (function<void(EnumAutoSetup, EnumAutoSetup)>*)(this + 96));
        std::function<void(EnumAutoSetup, EnumAutoSetup)>::~function(
            (function<void(EnumAutoSetup, EnumAutoSetup)>*)(this + 48));
        ~AutoSingleton();
    }

    // 0x10060f3d0, 144 bytes, base-object constructor, inline, placed by class name
    // Option<EnumBrightness>::Option(graphics::RT7Core&, Settings&, char const*, math::Range<EnumBrightness>)
    void Option<EnumBrightness>::Option(undefined8 param_2_00, undefined8 param_2, undefined8 param_3,
                                        undefined8 param_5) {
        undefined4 uVar1;
        undefined1 local_28[8];

        local_28 = (undefined1[8])param_5;
        new (this) IOption();
        *(undefined**)this = PTR_vtable_100ee8538 + 16;
        *(undefined8*)(this + 8) = param_2;
        *(undefined8*)(this + 16) = param_3;
        *(undefined4*)(this + 24) = 0;
        *(undefined1(*)[8])(this + 28) = local_28;
        uVar1 = local_28->GetZ();
        *(undefined4*)(this + 36) = uVar1;
        std::function<void(EnumBrightness, EnumBrightness)>::function(
            (function<void(EnumBrightness, EnumBrightness)>*)(this + 48));
        std::function<void(EnumBrightness, EnumBrightness)>::function(
            (function<void(EnumBrightness, EnumBrightness)>*)(this + 96));
        std::function<bool()>::function((function<bool()>*)(this + 144));
        new ((this + 192)) eastl::optional<EnumOptionToggle>();
    }

    // 0x10060f480, 32 bytes, inline, placed by class name
    // Option<EnumBrightness>::GetValueLabels() const
    Option<EnumBrightness>* Option<EnumBrightness>::GetValueLabels() {
        GetEnumValueNames<EnumBrightness>((jag*)this);
        return this;
    }

    // 0x10060f4a0, 16 bytes, inline, placed by class name
    // Option<EnumBrightness>::SetRawValue(int, graphics::RT7Core&, graphics::EffectManager&)
    void Option<EnumBrightness>::SetRawValue(int param_1, RT7Core* param_2, EffectManager* param_3) {
        SetValue();
    }

    // 0x10060f4c0, 16 bytes, complete-object destructor, inline, placed by class name
    // Option<EnumBrightness>::~Option(): jumps straight to the base-object destructor

    // 0x10060f4d0, 32 bytes, deleting destructor, inline, placed by class name
    // Option<EnumBrightness>::~Option()
    void Option<EnumBrightness>::~Option() {
        ~Brightness();
        operator_delete(this);
    }

    // 0x10060f520, 80 bytes, base-object destructor, inline, placed by class name
    // Option<EnumBrightness>::~Option()
    void Option<EnumBrightness>::~Option() {
        *(undefined**)this = PTR_vtable_100ee8538 + 16;
        std::function<bool()>::~function((function<bool()>*)(this + 144));
        std::function<void(EnumBrightness, EnumBrightness)>::~function(
            (function<void(EnumBrightness, EnumBrightness)>*)(this + 96));
        std::function<void(EnumBrightness, EnumBrightness)>::~function(
            (function<void(EnumBrightness, EnumBrightness)>*)(this + 48));
        ~AutoSingleton();
    }

    // 0x10060f660, 144 bytes, base-object constructor, inline, placed by class name
    // Option<EnumOptionToggle>::Option(graphics::RT7Core&, Settings&, char const*, math::Range<EnumOptionToggle>)
    void Option<EnumOptionToggle>::Option(undefined8 param_2_00, undefined8 param_2, undefined8 param_3,
                                          undefined8 param_5) {
        undefined4 uVar1;
        undefined1 local_28[8];

        local_28 = (undefined1[8])param_5;
        new (this) IOption();
        *(undefined**)this = PTR_vtable_100ee8550 + 16;
        *(undefined8*)(this + 8) = param_2;
        *(undefined8*)(this + 16) = param_3;
        *(undefined4*)(this + 24) = 0;
        *(undefined1(*)[8])(this + 28) = local_28;
        uVar1 = local_28->GetZ();
        *(undefined4*)(this + 36) = uVar1;
        std::function<void(EnumOptionToggle, EnumOptionToggle)>::function(
            (function<void(EnumOptionToggle, EnumOptionToggle)>*)(this + 48));
        std::function<void(EnumOptionToggle, EnumOptionToggle)>::function(
            (function<void(EnumOptionToggle, EnumOptionToggle)>*)(this + 96));
        std::function<bool()>::function((function<bool()>*)(this + 144));
        new ((this + 192)) eastl::optional<EnumOptionToggle>();
    }

    // 0x10060f700, 16 bytes, complete-object destructor, inline, placed by class name
    // Option<EnumOptionToggle>::~Option(): jumps straight to the base-object destructor

    // 0x10060f710, 32 bytes, deleting destructor, inline, placed by class name
    // Option<EnumOptionToggle>::~Option()
    void Option<EnumOptionToggle>::~Option() {
        ~CutsceneSubtitles();
        operator_delete(this);
    }

    // 0x10060f730, 32 bytes, inline, placed by class name
    // Option<EnumOptionToggle>::GetValueLabels() const
    Option<EnumOptionToggle>* Option<EnumOptionToggle>::GetValueLabels() {
        GetEnumValueNames<EnumOptionToggle>((jag*)this);
        return this;
    }

    // 0x10060f750, 16 bytes, inline, placed by class name
    // Option<EnumOptionToggle>::SetRawValue(int, graphics::RT7Core&, graphics::EffectManager&)
    void Option<EnumOptionToggle>::SetRawValue(int param_1, RT7Core* param_2, EffectManager* param_3) {
        SetValue();
    }

    // 0x10060f790, 80 bytes, base-object destructor, inline, placed by class name
    // Option<EnumOptionToggle>::~Option()
    void Option<EnumOptionToggle>::~Option() {
        *(undefined**)this = PTR_vtable_100ee8550 + 16;
        std::function<bool()>::~function((function<bool()>*)(this + 144));
        std::function<void(EnumOptionToggle, EnumOptionToggle)>::~function(
            (function<void(EnumOptionToggle, EnumOptionToggle)>*)(this + 96));
        std::function<void(EnumOptionToggle, EnumOptionToggle)>::~function(
            (function<void(EnumOptionToggle, EnumOptionToggle)>*)(this + 48));
        ~AutoSingleton();
    }

    // 0x10060f9e0, 144 bytes, base-object constructor, inline, placed by class name
    // Option<render::VSyncMode>::Option(graphics::RT7Core&, Settings&, char const*, math::Range<render::VSyncMode>)
    void Option<render::VSyncMode>::Option(undefined8 param_2_00, undefined8 param_2, undefined8 param_3,
                                           undefined8 param_5) {
        undefined4 uVar1;
        undefined1 local_28[8];

        local_28 = (undefined1[8])param_5;
        new (this) IOption();
        *(undefined**)this = PTR_vtable_100ee8590 + 16;
        *(undefined8*)(this + 8) = param_2;
        *(undefined8*)(this + 16) = param_3;
        *(undefined4*)(this + 24) = 0;
        *(undefined1(*)[8])(this + 28) = local_28;
        uVar1 = local_28->GetZ();
        *(undefined4*)(this + 36) = uVar1;
        std::function<void(render::VSyncMode, render::VSyncMode)>::function(
            (function<void(render::VSyncMode, render::VSyncMode)>*)(this + 48));
        std::function<void(render::VSyncMode, render::VSyncMode)>::function(
            (function<void(render::VSyncMode, render::VSyncMode)>*)(this + 96));
        std::function<bool()>::function((function<bool()>*)(this + 144));
        new ((this + 192)) eastl::optional<EnumOptionToggle>();
    }

    // 0x10060fa70, 80 bytes, base-object destructor, inline, placed by class name
    // Option<render::VSyncMode>::~Option()
    void Option<render::VSyncMode>::~Option() {
        *(undefined**)this = PTR_vtable_100ee8590 + 16;
        std::function<bool()>::~function((function<bool()>*)(this + 144));
        std::function<void(render::VSyncMode, render::VSyncMode)>::~function(
            (function<void(render::VSyncMode, render::VSyncMode)>*)(this + 96));
        std::function<void(render::VSyncMode, render::VSyncMode)>::~function(
            (function<void(render::VSyncMode, render::VSyncMode)>*)(this + 48));
        ~AutoSingleton();
    }

    // 0x10060fae0, 32 bytes, inline, placed by class name
    // Option<render::VSyncMode>::GetValueLabels() const
    Option<render::VSyncMode>* Option<render::VSyncMode>::GetValueLabels() {
        GetEnumValueNames<render::VSyncMode>((jag*)this);
        return this;
    }

    // 0x10060fb00, 16 bytes, inline, placed by class name
    // Option<render::VSyncMode>::SetRawValue(int, graphics::RT7Core&, graphics::EffectManager&)
    void Option<render::VSyncMode>::SetRawValue(int param_1, RT7Core* param_2, EffectManager* param_3) {
        SetValue();
    }

    // 0x10060fb20, 16 bytes, complete-object destructor, inline, placed by class name
    // Option<render::VSyncMode>::~Option(): jumps straight to the base-object destructor

    // 0x10060fb30, 32 bytes, deleting destructor, inline, placed by class name
    // Option<render::VSyncMode>::~Option()
    void Option<render::VSyncMode>::~Option() {
        ~VSync();
        operator_delete(this);
    }

    // 0x10060fcc0, 144 bytes, base-object constructor, inline, placed by class name
    // Option<EnumRemoveRoof>::Option(graphics::RT7Core&, Settings&, char const*, math::Range<EnumRemoveRoof>)
    void Option<EnumRemoveRoof>::Option(undefined8 param_2_00, undefined8 param_2, undefined8 param_3,
                                        undefined8 param_5) {
        undefined4 uVar1;
        undefined1 local_28[8];

        local_28 = (undefined1[8])param_5;
        new (this) IOption();
        *(undefined**)this = PTR_vtable_100ee8540 + 16;
        *(undefined8*)(this + 8) = param_2;
        *(undefined8*)(this + 16) = param_3;
        *(undefined4*)(this + 24) = 0;
        *(undefined1(*)[8])(this + 28) = local_28;
        uVar1 = local_28->GetZ();
        *(undefined4*)(this + 36) = uVar1;
        std::function<void(EnumRemoveRoof, EnumRemoveRoof)>::function(
            (function<void(EnumRemoveRoof, EnumRemoveRoof)>*)(this + 48));
        std::function<void(EnumRemoveRoof, EnumRemoveRoof)>::function(
            (function<void(EnumRemoveRoof, EnumRemoveRoof)>*)(this + 96));
        std::function<bool()>::function((function<bool()>*)(this + 144));
        new ((this + 192)) eastl::optional<EnumOptionToggle>();
    }

    // 0x10060fd70, 32 bytes, inline, placed by class name
    // Option<EnumRemoveRoof>::GetValueLabels() const
    Option<EnumRemoveRoof>* Option<EnumRemoveRoof>::GetValueLabels() {
        GetEnumValueNames<EnumRemoveRoof>((jag*)this);
        return this;
    }

    // 0x10060fd90, 16 bytes, inline, placed by class name
    // Option<EnumRemoveRoof>::SetRawValue(int, graphics::RT7Core&, graphics::EffectManager&)
    void Option<EnumRemoveRoof>::SetRawValue(int param_1, RT7Core* param_2, EffectManager* param_3) {
        SetValue();
    }

    // 0x10060fdb0, 16 bytes, complete-object destructor, inline, placed by class name
    // Option<EnumRemoveRoof>::~Option(): jumps straight to the base-object destructor

    // 0x10060fdc0, 32 bytes, deleting destructor, inline, placed by class name
    // Option<EnumRemoveRoof>::~Option()
    void Option<EnumRemoveRoof>::~Option() {
        ~RemoveRoof();
        operator_delete(this);
    }

    // 0x10060fe10, 80 bytes, base-object destructor, inline, placed by class name
    // Option<EnumRemoveRoof>::~Option()
    void Option<EnumRemoveRoof>::~Option() {
        *(undefined**)this = PTR_vtable_100ee8540 + 16;
        std::function<bool()>::~function((function<bool()>*)(this + 144));
        std::function<void(EnumRemoveRoof, EnumRemoveRoof)>::~function(
            (function<void(EnumRemoveRoof, EnumRemoveRoof)>*)(this + 96));
        std::function<void(EnumRemoveRoof, EnumRemoveRoof)>::~function(
            (function<void(EnumRemoveRoof, EnumRemoveRoof)>*)(this + 48));
        ~AutoSingleton();
    }

    // 0x10060ff50, 144 bytes, base-object constructor, inline, placed by class name
    // Option<LanguageID>::Option(graphics::RT7Core&, Settings&, char const*, math::Range<LanguageID>)
    void Option<LanguageID>::Option(undefined8 param_2_00, undefined8 param_2, undefined8 param_3, undefined8 param_5) {
        undefined4 uVar1;
        undefined1 local_28[8];

        local_28 = (undefined1[8])param_5;
        new (this) IOption();
        *(undefined**)this = PTR_vtable_100ee8580 + 16;
        *(undefined8*)(this + 8) = param_2;
        *(undefined8*)(this + 16) = param_3;
        *(undefined4*)(this + 24) = 0;
        *(undefined1(*)[8])(this + 28) = local_28;
        uVar1 = local_28->GetZ();
        *(undefined4*)(this + 36) = uVar1;
        std::function<void(LanguageID, LanguageID)>::function((function<void(LanguageID, LanguageID)>*)(this + 48));
        std::function<void(LanguageID, LanguageID)>::function((function<void(LanguageID, LanguageID)>*)(this + 96));
        std::function<bool()>::function((function<bool()>*)(this + 144));
        new ((this + 192)) eastl::optional<EnumOptionToggle>();
    }

    // 0x100610000, 32 bytes, inline, placed by class name
    // Option<LanguageID>::GetValueLabels() const
    Option<LanguageID>* Option<LanguageID>::GetValueLabels() {
        GetEnumValueNames<LanguageID>((jag*)this);
        return this;
    }

    // 0x100610020, 16 bytes, inline, placed by class name
    // Option<LanguageID>::SetRawValue(int, graphics::RT7Core&, graphics::EffectManager&)
    void Option<LanguageID>::SetRawValue(int param_1, RT7Core* param_2, EffectManager* param_3) {
        SetValue();
    }

    // 0x100610050, 16 bytes, complete-object destructor, inline, placed by class name
    // Option<LanguageID>::~Option(): jumps straight to the base-object destructor

    // 0x100610060, 32 bytes, deleting destructor, inline, placed by class name
    // Option<LanguageID>::~Option()
    void Option<LanguageID>::~Option() {
        ~Language();
        operator_delete(this);
    }

    // 0x1006100b0, 80 bytes, base-object destructor, inline, placed by class name
    // Option<LanguageID>::~Option()
    void Option<LanguageID>::~Option() {
        *(undefined**)this = PTR_vtable_100ee8580 + 16;
        std::function<bool()>::~function((function<bool()>*)(this + 144));
        std::function<void(LanguageID, LanguageID)>::~function((function<void(LanguageID, LanguageID)>*)(this + 96));
        std::function<void(LanguageID, LanguageID)>::~function((function<void(LanguageID, LanguageID)>*)(this + 48));
        ~AutoSingleton();
    }

    // 0x100610180, 240 bytes, inline, placed by class name
    // Option<LanguageID>::SetValue(LanguageID, graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<LanguageID>::SetValue(int param_2, undefined8 param_3, undefined8 param_4, int param_5) {
        undefined4 uVar1;
        undefined8 uVar3;
        char* pcVar4;
        undefined4 local_3c;
        undefined4 local_38;
        int local_34;

        local_34 = param_2;
        local_3c = ((this + 28))->GetX();
        local_38 = ((this + 28))->GetZ();
        local_34 = math::Clamp<LanguageID>((LanguageID*)&local_34, (LanguageID*)&local_3c, (LanguageID*)&local_38);
        if ((param_5 != 0) || (local_34 != *(int*)(this + 24))) {
            if ((**(code**)(*(long*)this + 128))(this) != '\0') {
                uVar3 = logger::default_logger();
                pcVar4 = "";
                if ((char)param_5 != '\0') {
                    pcVar4 = "(FORCED)";
                }
                logger::Logger::Log(uVar3, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/clientoptions/options/../Option.h",
                                    123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s",
                                    *(undefined8*)(this + 16), local_34, *(undefined4*)(this + 24), pcVar4);
                uVar1 = *(undefined4*)(this + 24);
                *(int*)(this + 24) = local_34;
                ApplySetting(this, param_3, param_4, uVar1);
            }
        }
    }

    // 0x1006102a0, 240 bytes, inline, placed by class name
    // Option<LanguageID>::ApplySetting(graphics::RT7Core&, graphics::EffectManager&, LanguageID)
    void Option<LanguageID>::ApplySetting(undefined8 param_1, undefined8 param_2, undefined4 param_4) {
        bool bVar1;
        undefined4 uVar3;
        optional<EnumOptionToggle> local_48[8];
        undefined4 local_34;

        local_34 = param_4;
        bVar1 = ((this + 48))->operator_cast_to_bool();
        if (bVar1) {
            bVar1 = false;
            uVar3 = GetValue();
            std::function<void(LanguageID, LanguageID)>::operator()(
                (function<void(LanguageID, LanguageID)>*)(this + 48), uVar3, local_34);
        } else {
            bVar1 = ((this + 96))->operator_cast_to_bool();
            bVar1 = !bVar1;
        }
        (**(code**)(*(long*)this + 120))(this, param_1, param_2, local_34);
        if (((this + 96))->operator_cast_to_bool()) {
            uVar3 = GetValue();
            std::function<void(LanguageID, LanguageID)>::operator()(
                (function<void(LanguageID, LanguageID)>*)(this + 96), uVar3, local_34);
        }
        if (bVar1) {
            eastl::optional<LanguageID>::operator=((optional<LanguageID>*)(this + 192), (LanguageID*)&local_34);
        } else {
            eastl::optional<EnumOptionToggle>::optional(local_48);
            eastl::optional<LanguageID>::operator=((optional<LanguageID>*)(this + 192), (optional*)local_48);
        }
    }

    // 0x100610750, 144 bytes, base-object constructor, inline, placed by class name
    // Option<unsigned char>::Option(graphics::RT7Core&, Settings&, char const*, math::Range<unsigned char>)
    void Option<unsigned char>::Option(undefined8 param_2_00, undefined8 param_2, undefined8 param_3,
                                       undefined2 param_5) {
        undefined1 local_22[2];

        local_22 = (undefined1[2])param_5;
        new (this) IOption();
        *(undefined**)this = PTR_vtable_100ee85a8 + 16;
        *(undefined8*)(this + 8) = param_2;
        *(undefined8*)(this + 16) = param_3;
        this[24] = (Option<unsigned char>)0;
        *(undefined1(*)[2])(this + 25) = local_22;
        this[27] = (Option<unsigned char>)local_22->GetRot();
        std::function<void(unsigned char, unsigned char)>::function(
            (function<void(unsigned char, unsigned char)>*)(this + 32));
        std::function<void(unsigned char, unsigned char)>::function(
            (function<void(unsigned char, unsigned char)>*)(this + 80));
        std::function<bool()>::function((function<bool()>*)(this + 128));
        new ((this + 176)) eastl::optional<bool>();
    }

    // 0x100610800, 48 bytes, inline, placed by class name
    // Option<unsigned char>::IsModifiable(graphics::RT7Core const*) const
    bool Option<unsigned char>::IsModifiable(RT7Core* param_1) {
        char cVar1;
        char cVar2;

        cVar1 = ((this + 25))->GetRot();
        cVar2 = ((this + 25))->GetShape();
        return cVar1 != cVar2;
    }

    // 0x100610830, 16 bytes, inline, placed by class name
    // Option<unsigned char>::CanSetRawValue(int) const
    void Option<unsigned char>::CanSetRawValue(int param_1) {
        CanSetValue(this, (uchar)param_1);
    }

    // 0x100610840, 16 bytes, inline, placed by class name
    // Option<unsigned char>::GetRawValue() const
    undefined1 Option<unsigned char>::GetRawValue() {
        return GetValue(this);
    }

    // 0x100610850, 32 bytes, inline, placed by class name
    // Option<unsigned char>::SetRawValue(int, graphics::RT7Core&, graphics::EffectManager&)
    void Option<unsigned char>::SetRawValue(int param_1, RT7Core* param_2, EffectManager* param_3) {
        SetValue(this, (uchar)param_1, param_2, param_3, false);
    }

    // 0x100610870, 80 bytes, inline, placed by class name
    // Option<unsigned char>::GetRawValueRange() const
    undefined8 Option<unsigned char>::GetRawValueRange() {
        byte bVar1;
        undefined8 local_20;
        uint local_18;
        uint local_14;

        bVar1 = ((this + 25))->GetShape();
        local_18 = (uint)bVar1;
        bVar1 = ((this + 25))->GetRot();
        local_14 = (uint)bVar1;
        std::pair<int, int>::pair<int, int, false>((pair<int, int>*)&local_20, (int*)&local_18, (int*)&local_14);
        return local_20;
    }

    // 0x1006108c0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Option<unsigned char>::DetermineBestSetting(perf::PerfModuleReporter const&) const
    /* Option<unsigned char>::GetValue() const */

    Option<unsigned char> Option<unsigned char>::GetValue() {
        return this[24];
    }

    // 0x1006108d0, 80 bytes, inline, placed by class name
    // Option<unsigned char>::IsSafeToSet()
    undefined8 Option<unsigned char>::IsSafeToSet() {
        bool bVar1;
        RenderDevice* this_00;
        undefined7 extraout_var;
        undefined8 uVar3;

        this_00 = (RenderDevice*)Instance();
        if (this_00->GetReadyState() == 0) {
            bVar1 = ((this + 128))->operator_cast_to_bool();
            uVar3 = CONCAT71(extraout_var, 1);
            if (bVar1) {
                uVar3 = std::function<bool()>::operator()((function<bool()>*)(this + 128));
            }
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x100610950, 16 bytes, complete-object destructor, inline, placed by class name
    // Option<unsigned char>::~Option(): jumps straight to the base-object destructor

    // 0x100610960, 32 bytes, deleting destructor, inline, placed by class name
    // Option<unsigned char>::~Option()
    void Option<unsigned char>::~Option() {
        ~RenderDeviceCapsOverride();
        operator_delete(this);
    }

    // 0x100610980, 32 bytes, inline, placed by class name
    // Option<unsigned char>::GetDefault()
    undefined1 Option<unsigned char>::GetDefault() {
        return ((this + 25))->GetRot();
    }

    // 0x1006109d0, 80 bytes, base-object destructor, inline, placed by class name
    // Option<unsigned char>::~Option()
    void Option<unsigned char>::~Option() {
        *(undefined**)this = PTR_vtable_100ee85a8 + 16;
        std::function<bool()>::~function((function<bool()>*)(this + 128));
        std::function<void(unsigned char, unsigned char)>::~function(
            (function<void(unsigned char, unsigned char)>*)(this + 80));
        std::function<void(unsigned char, unsigned char)>::~function(
            (function<void(unsigned char, unsigned char)>*)(this + 32));
        ~AutoSingleton();
    }

    // 0x100610a80, 64 bytes, inline, placed by class name
    // Option<unsigned char>::CanSetValue(unsigned char) const
    bool Option<unsigned char>::CanSetValue(uchar param_1) {
        byte bVar1;
        bool bVar2;

        bVar1 = ((this + 25))->GetShape();
        if (param_1 < bVar1) {
            bVar2 = false;
        } else {
            bVar1 = ((this + 25))->GetRot();
            bVar2 = param_1 <= bVar1;
        }
        return bVar2;
    }

    // 0x100610ac0, 240 bytes, inline, placed by class name
    // Option<unsigned char>::SetValue(unsigned char, graphics::RT7Core&, graphics::EffectManager&, bool)
    void Option<unsigned char>::SetValue(uchar param_1, RT7Core* param_2, EffectManager* param_3, bool param_4) {
        Option<unsigned char> OVar1;
        undefined8 uVar3;
        char* pcVar4;
        undefined7 in_register_00000081;
        uchar local_33;
        uchar local_32;
        Option<unsigned char> local_31;

        ((this + 25))->GetShape();
        ((this + 25))->GetRot();
        local_31 = (Option<unsigned char>)math::Clamp<unsigned char>((uchar*)&local_31, &local_33, &local_32);
        if (((int)CONCAT71(in_register_00000081, param_4) != 0) || (local_31 != this[24])) {
            if ((**(code**)(*(long*)this + 128))(this) != '\0') {
                uVar3 = logger::default_logger();
                pcVar4 = "";
                if (param_4) {
                    pcVar4 = "(FORCED)";
                }
                logger::Logger::Log(uVar3, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/clientoptions/options/../Option.h",
                                    123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s",
                                    *(undefined8*)(this + 16), local_31, this[24], pcVar4);
                OVar1 = this[24];
                this[24] = local_31;
                ApplySetting(this, param_2, param_3, (uchar)OVar1);
            }
        }
    }

    // 0x100610bb0, 240 bytes, inline, placed by class name
    // Option<unsigned char>::ApplySetting(graphics::RT7Core&, graphics::EffectManager&, unsigned char)
    void Option<unsigned char>::ApplySetting(RT7Core* param_1, EffectManager* param_2, uchar param_3) {
        bool bVar1;
        uchar uVar3;
        optional<bool> local_38[7];
        uchar local_31;

        local_31 = param_3;
        bVar1 = ((this + 32))->operator_cast_to_bool();
        if (bVar1) {
            bVar1 = false;
            uVar3 = GetValue(this);
            std::function<void(unsigned char, unsigned char)>::operator()(
                (function<void(unsigned char, unsigned char)>*)(this + 32), uVar3, local_31);
        } else {
            bVar1 = ((this + 80))->operator_cast_to_bool();
            bVar1 = !bVar1;
        }
        (**(code**)(*(long*)this + 120))(this, param_1, param_2, local_31);
        if (((this + 80))->operator_cast_to_bool()) {
            uVar3 = GetValue(this);
            std::function<void(unsigned char, unsigned char)>::operator()(
                (function<void(unsigned char, unsigned char)>*)(this + 80), uVar3, local_31);
        }
        if (bVar1) {
            eastl::optional<unsigned char>::operator=((optional<unsigned char>*)(this + 176), &local_31);
        } else {
            eastl::optional<bool>::optional(local_38);
            eastl::optional<unsigned char>::operator=((optional<unsigned char>*)(this + 176), (optional*)local_38);
        }
    }

    // 0x100610f40, 80 bytes, base-object destructor, inline, placed by class name
    // Option<graphics::GraphicsQuality>::~Option()
    void Option<graphics::GraphicsQuality>::~Option() {
        *(undefined**)this = PTR_vtable_100ee8598 + 16;
        std::function<bool()>::~function((function<bool()>*)(this + 144));
        std::function<void(graphics::GraphicsQuality, graphics::GraphicsQuality)>::~function(
            (function<void(graphics::GraphicsQuality, graphics::GraphicsQuality)>*)(this + 96));
        std::function<void(graphics::GraphicsQuality, graphics::GraphicsQuality)>::~function(
            (function<void(graphics::GraphicsQuality, graphics::GraphicsQuality)>*)(this + 48));
        ~AutoSingleton();
    }

    // 0x100610fa0, 32 bytes, deleting destructor, inline, placed by class name
    // Option<graphics::GraphicsQuality>::~Option()
    void Option<graphics::GraphicsQuality>::~Option() {
        ~Option(this);
        operator_delete(this);
    }

    // 0x100610fc0, 32 bytes, inline, placed by class name
    // Option<graphics::GraphicsQuality>::GetValueLabels() const
    Option<graphics::GraphicsQuality>* Option<graphics::GraphicsQuality>::GetValueLabels() {
        GetEnumValueNames<graphics::GraphicsQuality>((jag*)this);
        return this;
    }

    // 0x100610fe0, 16 bytes, inline, placed by class name
    // Option<graphics::GraphicsQuality>::SetRawValue(int, graphics::RT7Core&, graphics::EffectManager&)
    void Option<graphics::GraphicsQuality>::SetRawValue(int param_1, RT7Core* param_2, EffectManager* param_3) {
        SetValue();
    }

    // 0x100611050, 80 bytes, base-object destructor, inline, placed by class name
    // Option<EnumParticleQualityLevel>::~Option()
    void Option<EnumParticleQualityLevel>::~Option() {
        *(undefined**)this = PTR_vtable_100ee8570 + 16;
        std::function<bool()>::~function((function<bool()>*)(this + 144));
        std::function<void(EnumParticleQualityLevel, EnumParticleQualityLevel)>::~function(
            (function<void(EnumParticleQualityLevel, EnumParticleQualityLevel)>*)(this + 96));
        std::function<void(EnumParticleQualityLevel, EnumParticleQualityLevel)>::~function(
            (function<void(EnumParticleQualityLevel, EnumParticleQualityLevel)>*)(this + 48));
        ~AutoSingleton();
    }

    // 0x1006110b0, 32 bytes, deleting destructor, inline, placed by class name
    // Option<EnumParticleQualityLevel>::~Option()
    void Option<EnumParticleQualityLevel>::~Option() {
        ~Option(this);
        operator_delete(this);
    }

    // 0x1006110d0, 32 bytes, inline, placed by class name
    // Option<EnumParticleQualityLevel>::GetValueLabels() const
    Option<EnumParticleQualityLevel>* Option<EnumParticleQualityLevel>::GetValueLabels() {
        GetEnumValueNames<EnumParticleQualityLevel>((jag*)this);
        return this;
    }

    // 0x1006110f0, 16 bytes, inline, placed by class name
    // Option<EnumParticleQualityLevel>::SetRawValue(int, graphics::RT7Core&, graphics::EffectManager&)
    void Option<EnumParticleQualityLevel>::SetRawValue(int param_1, RT7Core* param_2, EffectManager* param_3) {
        SetValue();
    }

    // 0x100611180, 80 bytes, base-object destructor, inline, placed by class name
    // Option<unsigned int>::~Option()
    void Option<unsigned int>::~Option() {
        *(undefined**)this = PTR_vtable_100ee85b8 + 16;
        std::function<bool()>::~function((function<bool()>*)(this + 144));
        std::function<void(unsigned int, unsigned int)>::~function(
            (function<void(unsigned int, unsigned int)>*)(this + 96));
        std::function<void(unsigned int, unsigned int)>::~function(
            (function<void(unsigned int, unsigned int)>*)(this + 48));
        ~AutoSingleton();
    }

    // 0x1006111e0, 32 bytes, deleting destructor, inline, placed by class name
    // Option<unsigned int>::~Option()
    void Option<unsigned int>::~Option() {
        ~Option(this);
        operator_delete(this);
    }

    // 0x100611200, 16 bytes, inline, placed by class name
    // Option<unsigned int>::CanSetRawValue(int) const
    void Option<unsigned int>::CanSetRawValue(int param_1) {
        CanSetValue(this, param_1);
    }

    // 0x100611210, 16 bytes, inline, placed by class name
    // Option<unsigned int>::SetRawValue(int, graphics::RT7Core&, graphics::EffectManager&)
    void Option<unsigned int>::SetRawValue(int param_1, RT7Core* param_2, EffectManager* param_3) {
        SetValue(this, param_1, param_2, param_3, false);
    }

    // 0x100611270, 64 bytes, inline, placed by class name
    // Option<unsigned int>::CanSetValue(unsigned int) const
    bool Option<unsigned int>::CanSetValue(uint param_1) {
        uint uVar1;
        bool bVar2;

        uVar1 = ((this + 28))->GetX();
        if (param_1 < uVar1) {
            bVar2 = false;
        } else {
            uVar1 = ((this + 28))->GetZ();
            bVar2 = param_1 <= uVar1;
        }
        return bVar2;
    }

    // 0x100611390, 80 bytes, base-object destructor, inline, placed by class name
    // Option<graphics::SSAOPass::Mode>::~Option()
    void Option<graphics::SSAOPass::Mode>::~Option() {
        *(undefined**)this = PTR_vtable_100ee85a0 + 16;
        std::function<bool()>::~function((function<bool()>*)(this + 144));
        std::function<void(graphics::SSAOPass::Mode, graphics::SSAOPass::Mode)>::~function(
            (function<void(graphics::SSAOPass::Mode, graphics::SSAOPass::Mode)>*)(this + 96));
        std::function<void(graphics::SSAOPass::Mode, graphics::SSAOPass::Mode)>::~function(
            (function<void(graphics::SSAOPass::Mode, graphics::SSAOPass::Mode)>*)(this + 48));
        ~AutoSingleton();
    }

    // 0x1006113f0, 32 bytes, deleting destructor, inline, placed by class name
    // Option<graphics::SSAOPass::Mode>::~Option()
    void Option<graphics::SSAOPass::Mode>::~Option() {
        ~Option(this);
        operator_delete(this);
    }

    // 0x100611410, 32 bytes, inline, placed by class name
    // Option<graphics::SSAOPass::Mode>::GetValueLabels() const
    Option<graphics::SSAOPass::Mode>* Option<graphics::SSAOPass::Mode>::GetValueLabels() {
        GetEnumValueNames<graphics::SSAOPass::Mode>((jag*)this);
        return this;
    }

    // 0x100611430, 16 bytes, inline, placed by class name
    // Option<graphics::SSAOPass::Mode>::SetRawValue(int, graphics::RT7Core&, graphics::EffectManager&)
    void Option<graphics::SSAOPass::Mode>::SetRawValue(int param_1, RT7Core* param_2, EffectManager* param_3) {
        SetValue();
    }

    // 0x100611500, 80 bytes, base-object destructor, inline, placed by class name
    // Option<EnumBloom>::~Option()
    void Option<EnumBloom>::~Option() {
        *(undefined**)this = PTR_vtable_100ee8578 + 16;
        std::function<bool()>::~function((function<bool()>*)(this + 144));
        std::function<void(EnumBloom, EnumBloom)>::~function((function<void(EnumBloom, EnumBloom)>*)(this + 96));
        std::function<void(EnumBloom, EnumBloom)>::~function((function<void(EnumBloom, EnumBloom)>*)(this + 48));
        ~AutoSingleton();
    }

    // 0x100611560, 32 bytes, deleting destructor, inline, placed by class name
    // Option<EnumBloom>::~Option()
    void Option<EnumBloom>::~Option() {
        ~Option(this);
        operator_delete(this);
    }

    // 0x100611580, 32 bytes, inline, placed by class name
    // Option<EnumBloom>::GetValueLabels() const
    Option<EnumBloom>* Option<EnumBloom>::GetValueLabels() {
        GetEnumValueNames<EnumBloom>((jag*)this);
        return this;
    }

    // 0x1006115a0, 16 bytes, inline, placed by class name
    // Option<EnumBloom>::SetRawValue(int, graphics::RT7Core&, graphics::EffectManager&)
    void Option<EnumBloom>::SetRawValue(int param_1, RT7Core* param_2, EffectManager* param_3) {
        SetValue();
    }

    // 0x100611630, 80 bytes, base-object destructor, inline, placed by class name
    // Option<EnumAntialiasingMode>::~Option()
    void Option<EnumAntialiasingMode>::~Option() {
        *(undefined**)this = PTR_vtable_100ee8558 + 16;
        std::function<bool()>::~function((function<bool()>*)(this + 144));
        std::function<void(EnumAntialiasingMode, EnumAntialiasingMode)>::~function(
            (function<void(EnumAntialiasingMode, EnumAntialiasingMode)>*)(this + 96));
        std::function<void(EnumAntialiasingMode, EnumAntialiasingMode)>::~function(
            (function<void(EnumAntialiasingMode, EnumAntialiasingMode)>*)(this + 48));
        ~AutoSingleton();
    }

    // 0x100611690, 32 bytes, deleting destructor, inline, placed by class name
    // Option<EnumAntialiasingMode>::~Option()
    void Option<EnumAntialiasingMode>::~Option() {
        ~Option(this);
        operator_delete(this);
    }

    // 0x1006116b0, 32 bytes, inline, placed by class name
    // Option<EnumAntialiasingMode>::GetValueLabels() const
    Option<EnumAntialiasingMode>* Option<EnumAntialiasingMode>::GetValueLabels() {
        GetEnumValueNames<EnumAntialiasingMode>((jag*)this);
        return this;
    }

    // 0x1006116d0, 16 bytes, inline, placed by class name
    // Option<EnumAntialiasingMode>::SetRawValue(int, graphics::RT7Core&, graphics::EffectManager&)
    void Option<EnumAntialiasingMode>::SetRawValue(int param_1, RT7Core* param_2, EffectManager* param_3) {
        SetValue();
    }

    // 0x100611760, 80 bytes, base-object destructor, inline, placed by class name
    // Option<EnumAnisotropicFiltering>::~Option()
    void Option<EnumAnisotropicFiltering>::~Option() {
        *(undefined**)this = PTR_vtable_100ee8568 + 16;
        std::function<bool()>::~function((function<bool()>*)(this + 144));
        std::function<void(EnumAnisotropicFiltering, EnumAnisotropicFiltering)>::~function(
            (function<void(EnumAnisotropicFiltering, EnumAnisotropicFiltering)>*)(this + 96));
        std::function<void(EnumAnisotropicFiltering, EnumAnisotropicFiltering)>::~function(
            (function<void(EnumAnisotropicFiltering, EnumAnisotropicFiltering)>*)(this + 48));
        ~AutoSingleton();
    }

    // 0x1006117c0, 32 bytes, deleting destructor, inline, placed by class name
    // Option<EnumAnisotropicFiltering>::~Option()
    void Option<EnumAnisotropicFiltering>::~Option() {
        ~Option(this);
        operator_delete(this);
    }

    // 0x1006117e0, 32 bytes, inline, placed by class name
    // Option<EnumAnisotropicFiltering>::GetValueLabels() const
    Option<EnumAnisotropicFiltering>* Option<EnumAnisotropicFiltering>::GetValueLabels() {
        GetEnumValueNames<EnumAnisotropicFiltering>((jag*)this);
        return this;
    }

    // 0x100611800, 16 bytes, inline, placed by class name
    // Option<EnumAnisotropicFiltering>::SetRawValue(int, graphics::RT7Core&, graphics::EffectManager&)
    void Option<EnumAnisotropicFiltering>::SetRawValue(int param_1, RT7Core* param_2, EffectManager* param_3) {
        SetValue();
    }

    // 0x100612e20, 240 bytes, inline, placed by class name
    // Option<EnumAntialiasingMode>::ApplySetting(graphics::RT7Core&, graphics::EffectManager&, EnumAntialiasingMode)
    void Option<EnumAntialiasingMode>::ApplySetting(undefined8 param_1, undefined8 param_2, undefined4 param_4) {
        bool bVar1;
        undefined4 uVar3;
        optional<EnumOptionToggle> local_48[8];
        undefined4 local_34;

        local_34 = param_4;
        bVar1 = ((this + 48))->operator_cast_to_bool();
        if (bVar1) {
            bVar1 = false;
            uVar3 = GetValue();
            std::function<void(EnumAntialiasingMode, EnumAntialiasingMode)>::operator()(
                (function<void(EnumAntialiasingMode, EnumAntialiasingMode)>*)(this + 48), uVar3, local_34);
        } else {
            bVar1 = ((this + 96))->operator_cast_to_bool();
            bVar1 = !bVar1;
        }
        (**(code**)(*(long*)this + 120))(this, param_1, param_2, local_34);
        if (((this + 96))->operator_cast_to_bool()) {
            uVar3 = GetValue();
            std::function<void(EnumAntialiasingMode, EnumAntialiasingMode)>::operator()(
                (function<void(EnumAntialiasingMode, EnumAntialiasingMode)>*)(this + 96), uVar3, local_34);
        }
        if (bVar1) {
            eastl::optional<EnumAntialiasingMode>::operator=((optional<EnumAntialiasingMode>*)(this + 192),
                                                             (EnumAntialiasingMode*)&local_34);
        } else {
            eastl::optional<EnumOptionToggle>::optional(local_48);
            eastl::optional<EnumAntialiasingMode>::operator=((optional<EnumAntialiasingMode>*)(this + 192),
                                                             (optional*)local_48);
        }
    }

    // 0x100613070, 240 bytes, inline, placed by class name
    // Option<graphics::GraphicsQuality>::ApplySetting(graphics::RT7Core&, graphics::EffectManager&, graphics::GraphicsQuality)
    void Option<graphics::GraphicsQuality>::ApplySetting(undefined8 param_1, undefined8 param_2, undefined4 param_4) {
        bool bVar1;
        undefined4 uVar3;
        optional<EnumOptionToggle> local_48[8];
        undefined4 local_34;

        local_34 = param_4;
        bVar1 = ((this + 48))->operator_cast_to_bool();
        if (bVar1) {
            bVar1 = false;
            uVar3 = GetValue();
            std::function<void(graphics::GraphicsQuality, graphics::GraphicsQuality)>::operator()(
                (function<void(graphics::GraphicsQuality, graphics::GraphicsQuality)>*)(this + 48), uVar3, local_34);
        } else {
            bVar1 = ((this + 96))->operator_cast_to_bool();
            bVar1 = !bVar1;
        }
        (**(code**)(*(long*)this + 120))(this, param_1, param_2, local_34);
        if (((this + 96))->operator_cast_to_bool()) {
            uVar3 = GetValue();
            std::function<void(graphics::GraphicsQuality, graphics::GraphicsQuality)>::operator()(
                (function<void(graphics::GraphicsQuality, graphics::GraphicsQuality)>*)(this + 96), uVar3, local_34);
        }
        if (bVar1) {
            eastl::optional<graphics::GraphicsQuality>::operator=((optional<graphics::GraphicsQuality>*)(this + 192),
                                                                  (GraphicsQuality*)&local_34);
        } else {
            eastl::optional<EnumOptionToggle>::optional(local_48);
            eastl::optional<graphics::GraphicsQuality>::operator=((optional<graphics::GraphicsQuality>*)(this + 192),
                                                                  (optional*)local_48);
        }
    }

    // 0x1006132c0, 240 bytes, inline, placed by class name
    // Option<EnumBloom>::ApplySetting(graphics::RT7Core&, graphics::EffectManager&, EnumBloom)
    void Option<EnumBloom>::ApplySetting(undefined8 param_1, undefined8 param_2, undefined4 param_4) {
        bool bVar1;
        undefined4 uVar3;
        optional<EnumOptionToggle> local_48[8];
        undefined4 local_34;

        local_34 = param_4;
        bVar1 = ((this + 48))->operator_cast_to_bool();
        if (bVar1) {
            bVar1 = false;
            uVar3 = GetValue();
            std::function<void(EnumBloom, EnumBloom)>::operator()((function<void(EnumBloom, EnumBloom)>*)(this + 48),
                                                                  uVar3, local_34);
        } else {
            bVar1 = ((this + 96))->operator_cast_to_bool();
            bVar1 = !bVar1;
        }
        (**(code**)(*(long*)this + 120))(this, param_1, param_2, local_34);
        if (((this + 96))->operator_cast_to_bool()) {
            uVar3 = GetValue();
            std::function<void(EnumBloom, EnumBloom)>::operator()((function<void(EnumBloom, EnumBloom)>*)(this + 96),
                                                                  uVar3, local_34);
        }
        if (bVar1) {
            eastl::optional<EnumBloom>::operator=((optional<EnumBloom>*)(this + 192), (EnumBloom*)&local_34);
        } else {
            eastl::optional<EnumOptionToggle>::optional(local_48);
            eastl::optional<EnumBloom>::operator=((optional<EnumBloom>*)(this + 192), (optional*)local_48);
        }
    }

    // 0x100613540, 240 bytes, inline, placed by class name
    // Option<EnumBrightness>::ApplySetting(graphics::RT7Core&, graphics::EffectManager&, EnumBrightness)
    void Option<EnumBrightness>::ApplySetting(undefined8 param_1, undefined8 param_2, undefined4 param_4) {
        bool bVar1;
        undefined4 uVar3;
        optional<EnumOptionToggle> local_48[8];
        undefined4 local_34;

        local_34 = param_4;
        bVar1 = ((this + 48))->operator_cast_to_bool();
        if (bVar1) {
            bVar1 = false;
            uVar3 = GetValue(this);
            std::function<void(EnumBrightness, EnumBrightness)>::operator()(
                (function<void(EnumBrightness, EnumBrightness)>*)(this + 48), uVar3, local_34);
        } else {
            bVar1 = ((this + 96))->operator_cast_to_bool();
            bVar1 = !bVar1;
        }
        (**(code**)(*(long*)this + 120))(this, param_1, param_2, local_34);
        if (((this + 96))->operator_cast_to_bool()) {
            uVar3 = GetValue(this);
            std::function<void(EnumBrightness, EnumBrightness)>::operator()(
                (function<void(EnumBrightness, EnumBrightness)>*)(this + 96), uVar3, local_34);
        }
        if (bVar1) {
            eastl::optional<EnumBrightness>::operator=((optional<EnumBrightness>*)(this + 192),
                                                       (EnumBrightness*)&local_34);
        } else {
            eastl::optional<EnumOptionToggle>::optional(local_48);
            eastl::optional<EnumBrightness>::operator=((optional<EnumBrightness>*)(this + 192), (optional*)local_48);
        }
    }

    // 0x100613880, 240 bytes, inline, placed by class name
    // Option<EnumRemoveRoof>::ApplySetting(graphics::RT7Core&, graphics::EffectManager&, EnumRemoveRoof)
    void Option<EnumRemoveRoof>::ApplySetting(undefined8 param_1, undefined8 param_2, undefined4 param_4) {
        bool bVar1;
        undefined4 uVar3;
        optional<EnumOptionToggle> local_48[8];
        undefined4 local_34;

        local_34 = param_4;
        bVar1 = ((this + 48))->operator_cast_to_bool();
        if (bVar1) {
            bVar1 = false;
            uVar3 = GetValue();
            std::function<void(EnumRemoveRoof, EnumRemoveRoof)>::operator()(
                (function<void(EnumRemoveRoof, EnumRemoveRoof)>*)(this + 48), uVar3, local_34);
        } else {
            bVar1 = ((this + 96))->operator_cast_to_bool();
            bVar1 = !bVar1;
        }
        (**(code**)(*(long*)this + 120))(this, param_1, param_2, local_34);
        if (((this + 96))->operator_cast_to_bool()) {
            uVar3 = GetValue();
            std::function<void(EnumRemoveRoof, EnumRemoveRoof)>::operator()(
                (function<void(EnumRemoveRoof, EnumRemoveRoof)>*)(this + 96), uVar3, local_34);
        }
        if (bVar1) {
            eastl::optional<EnumRemoveRoof>::operator=((optional<EnumRemoveRoof>*)(this + 192),
                                                       (EnumRemoveRoof*)&local_34);
        } else {
            eastl::optional<EnumOptionToggle>::optional(local_48);
            eastl::optional<EnumRemoveRoof>::operator=((optional<EnumRemoveRoof>*)(this + 192), (optional*)local_48);
        }
    }

    // 0x100613c50, 240 bytes, inline, placed by class name
    // Option<graphics::SSAOPass::Mode>::ApplySetting(graphics::RT7Core&, graphics::EffectManager&, graphics::SSAOPass::Mode)
    void Option<graphics::SSAOPass::Mode>::ApplySetting(undefined8 param_1, undefined8 param_2, undefined4 param_4) {
        bool bVar1;
        undefined4 uVar3;
        optional<EnumOptionToggle> local_48[8];
        undefined4 local_34;

        local_34 = param_4;
        bVar1 = ((this + 48))->operator_cast_to_bool();
        if (bVar1) {
            bVar1 = false;
            uVar3 = GetValue();
            std::function<void(graphics::SSAOPass::Mode, graphics::SSAOPass::Mode)>::operator()(
                (function<void(graphics::SSAOPass::Mode, graphics::SSAOPass::Mode)>*)(this + 48), uVar3, local_34);
        } else {
            bVar1 = ((this + 96))->operator_cast_to_bool();
            bVar1 = !bVar1;
        }
        (**(code**)(*(long*)this + 120))(this, param_1, param_2, local_34);
        if (((this + 96))->operator_cast_to_bool()) {
            uVar3 = GetValue();
            std::function<void(graphics::SSAOPass::Mode, graphics::SSAOPass::Mode)>::operator()(
                (function<void(graphics::SSAOPass::Mode, graphics::SSAOPass::Mode)>*)(this + 96), uVar3, local_34);
        }
        if (bVar1) {
            eastl::optional<graphics::SSAOPass::Mode>::operator=((optional<graphics::SSAOPass::Mode>*)(this + 192),
                                                                 (Mode*)&local_34);
        } else {
            eastl::optional<EnumOptionToggle>::optional(local_48);
            eastl::optional<graphics::SSAOPass::Mode>::operator=((optional<graphics::SSAOPass::Mode>*)(this + 192),
                                                                 (optional*)local_48);
        }
    }

    // 0x100613ed0, 240 bytes, inline, placed by class name
    // Option<render::VSyncMode>::ApplySetting(graphics::RT7Core&, graphics::EffectManager&, render::VSyncMode)
    void Option<render::VSyncMode>::ApplySetting(undefined8 param_1, undefined8 param_2, undefined4 param_4) {
        bool bVar1;
        undefined4 uVar3;
        optional<EnumOptionToggle> local_48[8];
        undefined4 local_34;

        local_34 = param_4;
        bVar1 = ((this + 48))->operator_cast_to_bool();
        if (bVar1) {
            bVar1 = false;
            uVar3 = GetValue();
            std::function<void(render::VSyncMode, render::VSyncMode)>::operator()(
                (function<void(render::VSyncMode, render::VSyncMode)>*)(this + 48), uVar3, local_34);
        } else {
            bVar1 = ((this + 96))->operator_cast_to_bool();
            bVar1 = !bVar1;
        }
        (**(code**)(*(long*)this + 120))(this, param_1, param_2, local_34);
        if (((this + 96))->operator_cast_to_bool()) {
            uVar3 = GetValue();
            std::function<void(render::VSyncMode, render::VSyncMode)>::operator()(
                (function<void(render::VSyncMode, render::VSyncMode)>*)(this + 96), uVar3, local_34);
        }
        if (bVar1) {
            eastl::optional<render::VSyncMode>::operator=((optional<render::VSyncMode>*)(this + 192),
                                                          (VSyncMode*)&local_34);
        } else {
            eastl::optional<EnumOptionToggle>::optional(local_48);
            eastl::optional<render::VSyncMode>::operator=((optional<render::VSyncMode>*)(this + 192),
                                                          (optional*)local_48);
        }
    }

    // 0x1006141a0, 240 bytes, inline, placed by class name
    // Option<EnumAnisotropicFiltering>::ApplySetting(graphics::RT7Core&, graphics::EffectManager&, EnumAnisotropicFiltering)
    void Option<EnumAnisotropicFiltering>::ApplySetting(undefined8 param_1, undefined8 param_2, undefined4 param_4) {
        bool bVar1;
        undefined4 uVar3;
        optional<EnumOptionToggle> local_48[8];
        undefined4 local_34;

        local_34 = param_4;
        bVar1 = ((this + 48))->operator_cast_to_bool();
        if (bVar1) {
            bVar1 = false;
            uVar3 = GetValue();
            std::function<void(EnumAnisotropicFiltering, EnumAnisotropicFiltering)>::operator()(
                (function<void(EnumAnisotropicFiltering, EnumAnisotropicFiltering)>*)(this + 48), uVar3, local_34);
        } else {
            bVar1 = ((this + 96))->operator_cast_to_bool();
            bVar1 = !bVar1;
        }
        (**(code**)(*(long*)this + 120))(this, param_1, param_2, local_34);
        if (((this + 96))->operator_cast_to_bool()) {
            uVar3 = GetValue();
            std::function<void(EnumAnisotropicFiltering, EnumAnisotropicFiltering)>::operator()(
                (function<void(EnumAnisotropicFiltering, EnumAnisotropicFiltering)>*)(this + 96), uVar3, local_34);
        }
        if (bVar1) {
            eastl::optional<EnumAnisotropicFiltering>::operator=((optional<EnumAnisotropicFiltering>*)(this + 192),
                                                                 (EnumAnisotropicFiltering*)&local_34);
        } else {
            eastl::optional<EnumOptionToggle>::optional(local_48);
            eastl::optional<EnumAnisotropicFiltering>::operator=((optional<EnumAnisotropicFiltering>*)(this + 192),
                                                                 (optional*)local_48);
        }
    }

    // 0x1006144f0, 240 bytes, inline, placed by class name
    // Option<unsigned int>::ApplySetting(graphics::RT7Core&, graphics::EffectManager&, unsigned int)
    void Option<unsigned int>::ApplySetting(RT7Core* param_1, EffectManager* param_2, uint param_3) {
        bool bVar1;
        uint uVar3;
        optional<EnumOptionToggle> local_48[8];
        uint local_34;

        local_34 = param_3;
        bVar1 = ((this + 48))->operator_cast_to_bool();
        if (bVar1) {
            bVar1 = false;
            uVar3 = GetValue();
            std::function<void(unsigned int, unsigned int)>::operator()(
                (function<void(unsigned int, unsigned int)>*)(this + 48), uVar3, local_34);
        } else {
            bVar1 = ((this + 96))->operator_cast_to_bool();
            bVar1 = !bVar1;
        }
        (**(code**)(*(long*)this + 120))(this, param_1, param_2, local_34);
        if (((this + 96))->operator_cast_to_bool()) {
            uVar3 = GetValue();
            std::function<void(unsigned int, unsigned int)>::operator()(
                (function<void(unsigned int, unsigned int)>*)(this + 96), uVar3, local_34);
        }
        if (bVar1) {
            eastl::optional<unsigned int>::operator=((optional<unsigned int>*)(this + 192), &local_34);
        } else {
            eastl::optional<EnumOptionToggle>::optional(local_48);
            eastl::optional<unsigned int>::operator=((optional<unsigned int>*)(this + 192), (optional*)local_48);
        }
    }

    // 0x100614750, 240 bytes, inline, placed by class name
    // Option<EnumAutoSetup>::ApplySetting(graphics::RT7Core&, graphics::EffectManager&, EnumAutoSetup)
    void Option<EnumAutoSetup>::ApplySetting(undefined8 param_1, undefined8 param_2, undefined4 param_4) {
        bool bVar1;
        undefined4 uVar3;
        optional<EnumOptionToggle> local_48[8];
        undefined4 local_34;

        local_34 = param_4;
        bVar1 = ((this + 48))->operator_cast_to_bool();
        if (bVar1) {
            bVar1 = false;
            uVar3 = GetValue();
            std::function<void(EnumAutoSetup, EnumAutoSetup)>::operator()(
                (function<void(EnumAutoSetup, EnumAutoSetup)>*)(this + 48), uVar3, local_34);
        } else {
            bVar1 = ((this + 96))->operator_cast_to_bool();
            bVar1 = !bVar1;
        }
        (**(code**)(*(long*)this + 120))(this, param_1, param_2, local_34);
        if (((this + 96))->operator_cast_to_bool()) {
            uVar3 = GetValue();
            std::function<void(EnumAutoSetup, EnumAutoSetup)>::operator()(
                (function<void(EnumAutoSetup, EnumAutoSetup)>*)(this + 96), uVar3, local_34);
        }
        if (bVar1) {
            eastl::optional<EnumAutoSetup>::operator=((optional<EnumAutoSetup>*)(this + 192),
                                                      (EnumAutoSetup*)&local_34);
        } else {
            eastl::optional<EnumOptionToggle>::optional(local_48);
            eastl::optional<EnumAutoSetup>::operator=((optional<EnumAutoSetup>*)(this + 192), (optional*)local_48);
        }
    }

    // 0x100614a20, 240 bytes, inline, placed by class name
    // Option<EnumParticleQualityLevel>::ApplySetting(graphics::RT7Core&, graphics::EffectManager&, EnumParticleQualityLevel)
    void Option<EnumParticleQualityLevel>::ApplySetting(undefined8 param_1, undefined8 param_2, undefined4 param_4) {
        bool bVar1;
        undefined4 uVar3;
        optional<EnumOptionToggle> local_48[8];
        undefined4 local_34;

        local_34 = param_4;
        bVar1 = ((this + 48))->operator_cast_to_bool();
        if (bVar1) {
            bVar1 = false;
            uVar3 = GetValue();
            std::function<void(EnumParticleQualityLevel, EnumParticleQualityLevel)>::operator()(
                (function<void(EnumParticleQualityLevel, EnumParticleQualityLevel)>*)(this + 48), uVar3, local_34);
        } else {
            bVar1 = ((this + 96))->operator_cast_to_bool();
            bVar1 = !bVar1;
        }
        (**(code**)(*(long*)this + 120))(this, param_1, param_2, local_34);
        if (((this + 96))->operator_cast_to_bool()) {
            uVar3 = GetValue();
            std::function<void(EnumParticleQualityLevel, EnumParticleQualityLevel)>::operator()(
                (function<void(EnumParticleQualityLevel, EnumParticleQualityLevel)>*)(this + 96), uVar3, local_34);
        }
        if (bVar1) {
            eastl::optional<EnumParticleQualityLevel>::operator=((optional<EnumParticleQualityLevel>*)(this + 192),
                                                                 (EnumParticleQualityLevel*)&local_34);
        } else {
            eastl::optional<EnumOptionToggle>::optional(local_48);
            eastl::optional<EnumParticleQualityLevel>::operator=((optional<EnumParticleQualityLevel>*)(this + 192),
                                                                 (optional*)local_48);
        }
    }

} // namespace jag::game::option

namespace jag::oldscape::option {
    template <
        typename...> // 4 instantiations, e.g. <hal::Haptics::ImpactStrength>, <ChatTimestampMode>, <ClientWindowMode>
    class OptionEnumValueSerialiser {
    public:
        void StringToValue(eastl::fixed_string<char, 256, true, eastl::allocator> const&);
        OptionEnumValueSerialiser<ClientWindowMode>* ValueToString(ClientWindowMode);
        OptionEnumValueSerialiser<ScaledUIQuality>* ValueToString(ScaledUIQuality);
        OptionEnumValueSerialiser<hal::Haptics::ImpactStrength>* ValueToString(hal::Haptics::ImpactStrength);
        OptionEnumValueSerialiser<ChatTimestampMode>* ValueToString(ChatTimestampMode);
    };

    // 0x100048020, 64 bytes, inline, placed by class header (inline)
    // OptionEnumValueSerialiser<ClientWindowMode>::StringToValue(eastl::fixed_string<char, 256, true, eastl::allocator> const&)
    void OptionEnumValueSerialiser<ClientWindowMode>::StringToValue(fixed_string* param_1) {
        int local_14;
        int local_10;
        bool local_9;

        FromString<eastl::fixed_string<char, 64, true, eastl::allocator>, int>(param_1, &local_10, 10);
        local_9 = IsValidEnumValue<ClientWindowMode>(local_10);
        local_14 = local_10;
        std::make_tuple<bool const&, ClientWindowMode>(&local_9, (ClientWindowMode*)&local_14);
    }

    // 0x100048270, 64 bytes, inline, placed by class header (inline)
    // OptionEnumValueSerialiser<ClientWindowMode>::ValueToString(ClientWindowMode)
    OptionEnumValueSerialiser<ClientWindowMode>*
    OptionEnumValueSerialiser<ClientWindowMode>::ValueToString(int param_2) {
        new (this) eastl::fixed_string<char, 256, true, eastl::allocator>();
        ToText<256, true>((fixed_string*)this, param_2, 10);
        return this;
    }

} // namespace jag::oldscape::option

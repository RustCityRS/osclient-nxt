// libs/game/runetek5/clientoptions/Option.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game::option {
    template <typename...> // 18 instantiations, e.g. <int>, <LanguageID>, <jag::WindowMode>
    class Option {
    public:
        // virtual methods in vtable order
        virtual ~Option();
        virtual void LoadSetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager, bool arg3);
        virtual void SaveSetting();
        virtual bool IsModifiable(const graphics::RT7Core* rt7Core) const;
        virtual Option<EnumTextureMode>* GetValueLabels() const;
        virtual void CanSetRawValue(int arg1) const;
        virtual void GetRawValue() const;
        virtual void SetRawValue(int arg1, graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager);
        virtual uint64_t GetRawValueRange() const;
        virtual void GetDefault();
        virtual bool IsSafeToSet();
        Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str, math::Range<EnumTextureMode> range);
        void SetValue(EnumOptionToggle enumOptionToggle, graphics::RT7Core& rt7Core,
                      graphics::EffectManager& effectManager, bool arg4);
        Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str, math::Range<int> range);
        Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
               math::Range<EnumVolumetricLighting> range);
        Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str, math::Range<jag::WindowMode> range);
        Option<unsigned char>* GetValueLabels() const;
        Option<EnumVolumetricLighting>* GetValueLabels() const;
        Option<jag::WindowMode>* GetValueLabels() const;
        void ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                          EnumOptionToggle enumOptionToggle);
        void SetValue(EnumTextureMode enumTextureMode, graphics::RT7Core& rt7Core,
                      graphics::EffectManager& effectManager, bool arg4);
        void ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                          EnumTextureMode enumTextureMode);
        bool CanSetValue(EnumTextureMode enumAutoSetup) const;
        void SetValue(int arg1, graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager, bool arg4);
        void ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager, int arg3);
        void SetValue(EnumVolumetricLighting enumVolumetricLighting, graphics::RT7Core& rt7Core,
                      graphics::EffectManager& effectManager, bool arg4);
        void ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                          EnumVolumetricLighting enumVolumetricLighting);
        void SetValue(jag::WindowMode windowMode, graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                      bool arg4);
        void ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                          jag::WindowMode windowMode);
        bool CanSetValue(jag::WindowMode windowMode) const;
        Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
               math::Range<EnumParticleQualityLevel> range);
        Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str, math::Range<unsigned int> range);
        Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
               math::Range<graphics::GraphicsQuality> range);
        Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
               math::Range<graphics::SSAOPass::Mode> range);
        Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
               math::Range<EnumAnisotropicFiltering> range);
        Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
               math::Range<EnumAntialiasingMode> range);
        Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str, math::Range<EnumBloom> range);
        void SetValueInternal(EnumRemoveRoof enumRemoveRoof);
        void SetValue(EnumAntialiasingMode enumAntialiasingMode, graphics::RT7Core& rt7Core,
                      graphics::EffectManager& effectManager, bool arg4);
        void SetValue(graphics::GraphicsQuality graphicsQuality, graphics::RT7Core& rt7Core,
                      graphics::EffectManager& effectManager, bool arg4);
        void SetValue(EnumBloom enumBloom, graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                      bool arg4);
        void SetValue(EnumBrightness enumBrightness, graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                      bool arg4);
        void SetValue(EnumRemoveRoof enumRemoveRoof, graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                      bool arg4);
        void SetValue(graphics::SSAOPass::Mode arg1, graphics::RT7Core& arg2, graphics::EffectManager& arg3, bool arg4);
        void SetValue(render::VSyncMode vSyncMode, graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                      bool arg4);
        void SetValue(EnumAnisotropicFiltering enumAnisotropicFiltering, graphics::RT7Core& rt7Core,
                      graphics::EffectManager& effectManager, bool arg4);
        void SetValue(unsigned int arg1, graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager, bool arg4);
        void SetValue(EnumAutoSetup enumAutoSetup, graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                      bool arg4);
        void SetMaxLowestValue(EnumAntialiasingMode enumOptionToggle);
        void SetValue(EnumParticleQualityLevel enumParticleQualityLevel, graphics::RT7Core& rt7Core,
                      graphics::EffectManager& effectManager, bool arg4);
        uint64_t GetSupportedValueRange() const;
        void SetValueIfLower(EnumAntialiasingMode enumAntialiasingMode, graphics::RT7Core& rt7Core,
                             graphics::EffectManager& effectManager);
        void SetValueIfLower(graphics::GraphicsQuality graphicsQuality, graphics::RT7Core& rt7Core,
                             graphics::EffectManager& effectManager);
        void SetValueIfLower(EnumBloom enumBloom, graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager);
        void SetValueIfLower(EnumOptionToggle enumOptionToggle, graphics::RT7Core& rt7Core,
                             graphics::EffectManager& effectManager);
        void SetValueIfLower(EnumTextureMode enumTextureMode, graphics::RT7Core& rt7Core,
                             graphics::EffectManager& effectManager);
        void SetValueIfLower(graphics::SSAOPass::Mode arg1, graphics::RT7Core& arg2, graphics::EffectManager& arg3);
        void SetValueIfLower(EnumAnisotropicFiltering enumAnisotropicFiltering, graphics::RT7Core& rt7Core,
                             graphics::EffectManager& effectManager);
        void SetValueIfLower(EnumVolumetricLighting enumVolumetricLighting, graphics::RT7Core& rt7Core,
                             graphics::EffectManager& effectManager);
        void SetValueIfLower(EnumParticleQualityLevel enumParticleQualityLevel, graphics::RT7Core& rt7Core,
                             graphics::EffectManager& effectManager);
        Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str, math::Range<EnumAutoSetup> range);
        Option<EnumAutoSetup>* GetValueLabels() const;
        Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str, math::Range<EnumBrightness> range);
        Option<EnumBrightness>* GetValueLabels() const;
        Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str, math::Range<EnumOptionToggle> range);
        Option<EnumOptionToggle>* GetValueLabels() const;
        Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str, math::Range<render::VSyncMode> range);
        Option<render::VSyncMode>* GetValueLabels() const;
        Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str, math::Range<EnumRemoveRoof> range);
        Option<EnumRemoveRoof>* GetValueLabels() const;
        Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str, math::Range<LanguageID> range);
        Option<LanguageID>* GetValueLabels() const;
        void SetValue(LanguageID languageID, graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                      bool arg4);
        void ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager, LanguageID languageID);
        Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str, math::Range<unsigned char> range);
        uint8_t GetRawValue() const;
        Option<unsigned char> DetermineBestSetting(const perf::PerfModuleReporter& arg1) const;
        uint8_t GetDefault();
        bool CanSetValue(unsigned char arg1) const;
        void SetValue(unsigned char arg1, graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                      bool arg4);
        void ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager, unsigned char arg3);
        Option<graphics::GraphicsQuality>* GetValueLabels() const;
        Option<EnumParticleQualityLevel>* GetValueLabels() const;
        bool CanSetValue(unsigned int arg1) const;
        Option<graphics::SSAOPass::Mode>* GetValueLabels() const;
        Option<EnumBloom>* GetValueLabels() const;
        Option<EnumAntialiasingMode>* GetValueLabels() const;
        Option<EnumAnisotropicFiltering>* GetValueLabels() const;
        void ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                          EnumAntialiasingMode enumAntialiasingMode);
        void ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                          graphics::GraphicsQuality graphicsQuality);
        void ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager, EnumBloom enumBloom);
        void ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                          EnumBrightness enumBrightness);
        void ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                          EnumRemoveRoof enumRemoveRoof);
        void ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                          graphics::SSAOPass::Mode arg3);
        void ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                          render::VSyncMode vSyncMode);
        void ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                          EnumAnisotropicFiltering enumAnisotropicFiltering);
        void ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager, unsigned int arg3);
        void ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                          EnumAutoSetup enumAutoSetup);
        void ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                          EnumParticleQualityLevel enumParticleQualityLevel);
    };

    // 0x1005f7dd0
    Option<EnumTextureMode>::Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
                                    math::Range<EnumTextureMode> range)
        : IOption() {
        *(Range<EnumTextureMode>**)((long)&this[3]._vptr + 4) = range;
        uint32_t uVar1 = (range).GetZ();
        *(uint32_t*)((long)&this[4]._vptr + 4) = uVar1;
        new ((this + 6)) std::function<void(EnumTextureMode, EnumTextureMode)>();
        new ((this + 12)) std::function<void(EnumTextureMode, EnumTextureMode)>();
        new ((this + 18)) std::function<bool()>();
        new ((this + 24)) eastl::optional();
    }

    // 0x1005f7e70
    Option<EnumTextureMode>::~Option() {
        ((this + 18))->~function();
        ((this + 12))->~function();
        ((this + 6))->~function();
    }

    // 0x1005f8090
    void Option<EnumOptionToggle>::SetValue(EnumOptionToggle enumOptionToggle, graphics::RT7Core& rt7Core,
                                            graphics::EffectManager& effectManager, bool arg4) {
        EnumOptionToggle enumOptionToggle_00;
        Logger* this_01;
        char* pcVar2;
        uint64_t in_register_00000081;

        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        EnumOptionToggle local_34 = enumOptionToggle;
        EnumOptionToggle local_3c = this_00->GetX();
        EnumOptionToggle local_38 = this_00->GetZ();
        local_34 = math::Clamp<EnumOptionToggle>(local_34, local_3c, local_38);
        if (((int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4) != 0) ||
            (local_34 != *(EnumOptionToggle*)&this[3]._vptr)) {
            if (IsSafeToSet() != '\0') {
                this_01 = logger::default_logger();
                pcVar2 = "";
                if (arg4) {
                    pcVar2 = "(FORCED)";
                }
                this_01->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                             "clientoptions/options/../Option.h",
                             123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s", this[2]._vptr,
                             (unsigned long)local_34, (unsigned long)*(unsigned int*)&this[3]._vptr, pcVar2);
                enumOptionToggle_00 = *(EnumOptionToggle*)&this[3]._vptr;
                *(EnumOptionToggle*)&this[3]._vptr = local_34;
                ApplySetting(this, rt7Core, effectManager, enumOptionToggle_00);
            }
        }
    }

    // 0x1005f8280
    Option<int>::Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str, math::Range<int> range)
        : IOption() {
        *(Range<int>**)((long)&this[3]._vptr + 4) = range;
        uint32_t uVar1 = (range).GetZ();
        *(uint32_t*)((long)&this[4]._vptr + 4) = uVar1;
        new ((this + 6)) std::function<void(int, int)>();
        new ((this + 12)) std::function<void(int, int)>();
        new ((this + 18)) std::function<bool()>();
        new ((this + 24)) eastl::optional();
    }

    // 0x1005f8430
    Option<EnumVolumetricLighting>::Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
                                           math::Range<EnumVolumetricLighting> range)
        : IOption() {
        *(Range<EnumVolumetricLighting>**)((long)&this[3]._vptr + 4) = range;
        uint32_t uVar1 = (range).GetZ();
        *(uint32_t*)((long)&this[4]._vptr + 4) = uVar1;
        new ((this + 6)) std::function<void(EnumVolumetricLighting, EnumVolumetricLighting)>();
        new ((this + 12)) std::function<void(EnumVolumetricLighting, EnumVolumetricLighting)>();
        new ((this + 18)) std::function<bool()>();
        new ((this + 24)) eastl::optional();
    }

    // 0x1005f84d0
    Option<EnumVolumetricLighting>::~Option() {
        ((this + 18))->~function();
        ((this + 12))->~function();
        ((this + 6))->~function();
    }

    // 0x1005f86f0
    Option<jag::WindowMode>::Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
                                    math::Range<jag::WindowMode> range)
        : IOption() {
        *(Range<jag::WindowMode>**)((long)&this[3]._vptr + 4) = range;
        uint32_t uVar1 = (range).GetZ();
        *(uint32_t*)((long)&this[4]._vptr + 4) = uVar1;
        new ((this + 6)) std::function<void(jag::WindowMode, jag::WindowMode)>();
        new ((this + 12)) std::function<void(jag::WindowMode, jag::WindowMode)>();
        new ((this + 18)) std::function<bool()>();
        new ((this + 24)) eastl::optional();
    }

    // 0x1005f8780
    Option<jag::WindowMode>::~Option() {
        ((this + 18))->~function();
        ((this + 12))->~function();
        ((this + 6))->~function();
    }

    // 0x1005f9910
    void Option<EnumTextureMode>::LoadSetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                              bool arg3) {
        Option<EnumTextureMode> _vtbl* str;
        uint8_t uVar2;
        EnumTextureMode enumTextureMode;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        basic_string<char, BucketAllocatorEASTL> local_78;
        int local_60[6];
        eastl local_38;

        Option<EnumTextureMode> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        new (local_60) eastl::basic_string<char, BucketAllocatorEASTL>(pOVar1, &local_38);
        local_78 + *local_60;
        if (arg3) {
            uVar2 = GetDefault();
            enumTextureMode = (EnumTextureMode)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2);
        } else {
            pOVar1 = this[1]._vptr;
            str = this[2]._vptr;
            uVar2 = GetDefault();
            local_60[0] = (int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2);
            enumTextureMode = pOVar1->GetValueWithDefault<int>(str, *local_60);
        }
        pOVar1 = this[1]._vptr;
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((CoordMapSquare*)((long)&this[3]._vptr + 4))->GetZ();
        int iVar3 = pOVar1->GetValueWithDefault<int>(str_00, *local_60);
        *(int*)((long)&this[4]._vptr + 4) = iVar3;
        SetValue(this, enumTextureMode, rt7Core, effectManager, true);
        OnSaveSetting(rt7Core, effectManager);
    }

    // 0x1005f9a50
    void Option<EnumTextureMode>::SaveSetting() {
        basic_string<char, BucketAllocatorEASTL> local_48;
        eastl local_30;

        Option<EnumTextureMode> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
        basic_string<char, BucketAllocatorEASTL> local_60(pOVar1, &local_30);
        local_48 + local_60;
        this[1]._vptr->SetValue<int>(this[2]._vptr, *(int*)&this[3]._vptr);
        pOVar1 = this[1]._vptr;
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pOVar1->SetValue<int>(str, *(int*)((long)&this[4]._vptr + 4));
        OnSaveSetting();
    }

    // 0x1005f9b20
    bool Option<EnumTextureMode>::IsModifiable(const graphics::RT7Core* rt7Core) const {
        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        int iVar1 = this_00->GetZ();
        int iVar2 = this_00->GetX();
        return iVar1 != iVar2;
    }

    // 0x1005f9b50
    Option<EnumTextureMode>* Option<EnumTextureMode>::GetValueLabels() const {
        GetEnumValueNames<EnumTextureMode>((ReturnValue*)this);
        return this;
    }

    // 0x1005f9b70
    void Option<EnumTextureMode>::CanSetRawValue(int arg1) const {
        CanSetValue(this, arg1);
    }

    // 0x1005f9b80
    void Option<EnumTextureMode>::GetRawValue() const {
        GetValue();
    }

    // 0x1005f9b90
    void Option<EnumTextureMode>::SetRawValue(int arg1, graphics::RT7Core& rt7Core,
                                              graphics::EffectManager& effectManager) {
        SetValue(this, arg1, rt7Core, effectManager, false);
    }

    // 0x1005f9ba0
    uint64_t Option<EnumTextureMode>::GetRawValueRange() const {
        uint64_t local_20;

        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        int local_18 = this_00->GetX();
        int local_14 = this_00->GetZ();
        local_20.pair<int, int, false>(local_18, local_14);
        return local_20;
    }

    // 0x1005f9bf0
    void Option<EnumTextureMode>::GetDefault() {
        ((CoordMapSquare*)((long)&this[3]._vptr + 4))->GetZ();
    }

    // 0x1005f9c00
    bool Option<EnumTextureMode>::IsSafeToSet() {
        bool cVar1;
        uint64_t uVar3;

        if (((RenderDevice*)Instance())->GetReadyState() == 0) {
            cVar1 = ((this + 18))->operator_cast_to_bool();
            uVar3 = 1;
            if (cVar1) {
                uVar3 = std::function<bool()>::operator()((function<bool()>*)(this + 18));
            }
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x1005f9c80
    void Option<int>::LoadSetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager, bool arg3) {
        Option<int> _vtbl* str;
        uint8_t uVar2;
        int arg1;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        basic_string<char, BucketAllocatorEASTL> local_78;
        int local_60[6];
        eastl local_38;

        Option<int> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        new (local_60) eastl::basic_string<char, BucketAllocatorEASTL>(pOVar1, &local_38);
        local_78 + *local_60;
        if (arg3) {
            uVar2 = GetDefault();
            arg1 = (int)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2);
        } else {
            pOVar1 = this[1]._vptr;
            str = this[2]._vptr;
            uVar2 = GetDefault();
            local_60[0] = (int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2);
            arg1 = pOVar1->GetValueWithDefault<int>(str, *local_60);
        }
        pOVar1 = this[1]._vptr;
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((CoordMapSquare*)((long)&this[3]._vptr + 4))->GetZ();
        int iVar3 = pOVar1->GetValueWithDefault<int>(str_00, *local_60);
        *(int*)((long)&this[4]._vptr + 4) = iVar3;
        SetValue(this, arg1, rt7Core, effectManager, true);
        OnSaveSetting(rt7Core, effectManager);
    }

    // 0x1005f9dc0
    void Option<int>::SaveSetting() {
        basic_string<char, BucketAllocatorEASTL> local_48;
        eastl local_30;

        Option<int> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
        basic_string<char, BucketAllocatorEASTL> local_60(pOVar1, &local_30);
        local_48 + local_60;
        this[1]._vptr->SetValue<int>(this[2]._vptr, *(int*)&this[3]._vptr);
        pOVar1 = this[1]._vptr;
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pOVar1->SetValue<int>(str, *(int*)((long)&this[4]._vptr + 4));
        OnSaveSetting();
    }

    // 0x1005f9e90
    Option<unsigned char>* Option<int>::GetValueLabels() const {
        new (this) shared_ptr();
        return this;
    }

    // 0x1005f9eb0
    void Option<int>::SetRawValue(int arg1, graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager) {
        SetValue(this, arg1, rt7Core, effectManager, false);
    }

    // 0x1005f9f10
    void Option<EnumVolumetricLighting>::LoadSetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                                     bool arg3) {
        Option<EnumVolumetricLighting> _vtbl* str;
        uint8_t uVar2;
        EnumVolumetricLighting enumVolumetricLighting;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        basic_string<char, BucketAllocatorEASTL> local_78;
        int local_60[6];
        eastl local_38;

        Option<EnumVolumetricLighting> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        new (local_60) eastl::basic_string<char, BucketAllocatorEASTL>(pOVar1, &local_38);
        local_78 + *local_60;
        if (arg3) {
            uVar2 = GetDefault();
            enumVolumetricLighting = (EnumVolumetricLighting)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2);
        } else {
            pOVar1 = this[1]._vptr;
            str = this[2]._vptr;
            uVar2 = GetDefault();
            local_60[0] = (int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2);
            enumVolumetricLighting = pOVar1->GetValueWithDefault<int>(str, *local_60);
        }
        pOVar1 = this[1]._vptr;
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((CoordMapSquare*)((long)&this[3]._vptr + 4))->GetZ();
        int iVar3 = pOVar1->GetValueWithDefault<int>(str_00, *local_60);
        *(int*)((long)&this[4]._vptr + 4) = iVar3;
        SetValue(this, enumVolumetricLighting, rt7Core, effectManager, true);
        OnSaveSetting(rt7Core, effectManager);
    }

    // 0x1005fa050
    void Option<EnumVolumetricLighting>::SaveSetting() {
        basic_string<char, BucketAllocatorEASTL> local_48;
        eastl local_30;

        Option<EnumVolumetricLighting> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
        basic_string<char, BucketAllocatorEASTL> local_60(pOVar1, &local_30);
        local_48 + local_60;
        this[1]._vptr->SetValue<int>(this[2]._vptr, *(int*)&this[3]._vptr);
        pOVar1 = this[1]._vptr;
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pOVar1->SetValue<int>(str, *(int*)((long)&this[4]._vptr + 4));
        OnSaveSetting();
    }

    // 0x1005fa120
    Option<EnumVolumetricLighting>* Option<EnumVolumetricLighting>::GetValueLabels() const {
        GetEnumValueNames<EnumVolumetricLighting>((ReturnValue*)this);
        return this;
    }

    // 0x1005fa140
    void Option<EnumVolumetricLighting>::SetRawValue(int arg1, graphics::RT7Core& rt7Core,
                                                     graphics::EffectManager& effectManager) {
        SetValue(this, arg1, rt7Core, effectManager, false);
    }

    // 0x1005fa180
    void Option<jag::WindowMode>::LoadSetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                              bool arg3) {
        Option<jag::WindowMode> _vtbl* str;
        uint8_t uVar2;
        WindowMode windowMode;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        basic_string<char, BucketAllocatorEASTL> local_78;
        int local_60[6];
        eastl local_38;

        Option<jag::WindowMode> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        new (local_60) eastl::basic_string<char, BucketAllocatorEASTL>(pOVar1, &local_38);
        local_78 + *local_60;
        if (arg3) {
            uVar2 = GetDefault();
            windowMode = (WindowMode)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2);
        } else {
            pOVar1 = this[1]._vptr;
            str = this[2]._vptr;
            uVar2 = GetDefault();
            local_60[0] = (int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2);
            windowMode = pOVar1->GetValueWithDefault<int>(str, *local_60);
        }
        pOVar1 = this[1]._vptr;
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((CoordMapSquare*)((long)&this[3]._vptr + 4))->GetZ();
        int iVar3 = pOVar1->GetValueWithDefault<int>(str_00, *local_60);
        *(int*)((long)&this[4]._vptr + 4) = iVar3;
        SetValue(this, windowMode, rt7Core, effectManager, true);
        ApplySettingImpl(rt7Core, effectManager);
    }

    // 0x1005fa2c0
    void Option<jag::WindowMode>::SaveSetting() {
        basic_string<char, BucketAllocatorEASTL> local_48;
        eastl local_30;

        Option<jag::WindowMode> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
        basic_string<char, BucketAllocatorEASTL> local_60(pOVar1, &local_30);
        local_48 + local_60;
        this[1]._vptr->SetValue<int>(this[2]._vptr, *(int*)&this[3]._vptr);
        pOVar1 = this[1]._vptr;
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pOVar1->SetValue<int>(str, *(int*)((long)&this[4]._vptr + 4));
        ApplySettingImpl();
    }

    // 0x1005fa3a0
    Option<jag::WindowMode>* Option<jag::WindowMode>::GetValueLabels() const {
        GetEnumValueNames<jag::WindowMode>((ReturnValue*)this);
        return this;
    }

    // 0x1005fa3c0
    void Option<jag::WindowMode>::CanSetRawValue(int arg1) const {
        CanSetValue(this, arg1);
    }

    // 0x1005fa3d0
    void Option<jag::WindowMode>::SetRawValue(int arg1, graphics::RT7Core& rt7Core,
                                              graphics::EffectManager& effectManager) {
        SetValue(this, arg1, rt7Core, effectManager, false);
    }

    // 0x1005fa6e0
    Option<int>::~Option() {
        ((this + 18))->~function();
        ((this + 12))->~function();
        ((this + 6))->~function();
    }

    // 0x1005fb080
    void Option<EnumOptionToggle>::ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                                EnumOptionToggle enumOptionToggle) {
        uint8_t bVar2;
        EnumOptionToggle EVar3;
        optional<EnumOptionToggle> local_48;

        bool cVar1 = ((this + 6))->operator_cast_to_bool();
        if (!cVar1) {
            bVar2 = ((this + 12))->operator_cast_to_bool();
            bVar2 = bVar2 ^ 1;
        } else {
            bVar2 = 0;
            if (cVar1) {
                bVar2 = 0;
                EVar3 = GetValue();
                std::function<void(EnumOptionToggle, EnumOptionToggle)>::operator()(
                    (function<void(EnumOptionToggle, EnumOptionToggle)>*)(this + 6), EVar3, enumOptionToggle);
            }
        }
        ApplySettingImpl(rt7Core, effectManager, (unsigned long)enumOptionToggle);
        cVar1 = ((this + 12))->operator_cast_to_bool();
        if (cVar1) {
            EVar3 = GetValue();
            std::function<void(EnumOptionToggle, EnumOptionToggle)>::operator()(
                (function<void(EnumOptionToggle, EnumOptionToggle)>*)(this + 12), EVar3, enumOptionToggle);
        }
        if (bVar2 == 0) {
            local_48 = eastl::optional();
            (*((this + 24))) = local_48;
        } else {
            (*((this + 24))) = enumOptionToggle;
        }
    }

    // 0x1005fbd80
    void Option<EnumTextureMode>::SetValue(EnumTextureMode enumTextureMode, graphics::RT7Core& rt7Core,
                                           graphics::EffectManager& effectManager, bool arg4) {
        EnumTextureMode enumTextureMode_00;
        Logger* this_01;
        char* pcVar2;
        uint64_t in_register_00000081;

        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        EnumTextureMode local_34 = enumTextureMode;
        EnumTextureMode local_3c = this_00->GetX();
        EnumTextureMode local_38 = this_00->GetZ();
        local_34 = math::Clamp<EnumTextureMode>(local_34, local_3c, local_38);
        if (((int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4) != 0) ||
            (local_34 != *(EnumTextureMode*)&this[3]._vptr)) {
            if (IsSafeToSet() != '\0') {
                this_01 = logger::default_logger();
                pcVar2 = "";
                if (arg4) {
                    pcVar2 = "(FORCED)";
                }
                this_01->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                             "clientoptions/options/../Option.h",
                             123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s", this[2]._vptr,
                             (unsigned long)local_34, (unsigned long)*(unsigned int*)&this[3]._vptr, pcVar2);
                enumTextureMode_00 = *(EnumTextureMode*)&this[3]._vptr;
                *(EnumTextureMode*)&this[3]._vptr = local_34;
                ApplySetting(this, rt7Core, effectManager, enumTextureMode_00);
            }
        }
    }

    // 0x1005fbed0
    void Option<EnumTextureMode>::ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                               EnumTextureMode enumTextureMode) {
        uint8_t bVar2;
        EnumTextureMode EVar3;
        optional<EnumOptionToggle> local_48;

        bool cVar1 = ((this + 6))->operator_cast_to_bool();
        if (!cVar1) {
            bVar2 = ((this + 12))->operator_cast_to_bool();
            bVar2 = bVar2 ^ 1;
        } else {
            bVar2 = 0;
            if (cVar1) {
                bVar2 = 0;
                EVar3 = GetValue();
                std::function<void(EnumTextureMode, EnumTextureMode)>::operator()(
                    (function<void(EnumTextureMode, EnumTextureMode)>*)(this + 6), EVar3, enumTextureMode);
            }
        }
        OnSaveSetting(rt7Core, effectManager, (unsigned long)enumTextureMode);
        cVar1 = ((this + 12))->operator_cast_to_bool();
        if (cVar1) {
            EVar3 = GetValue();
            std::function<void(EnumTextureMode, EnumTextureMode)>::operator()(
                (function<void(EnumTextureMode, EnumTextureMode)>*)(this + 12), EVar3, enumTextureMode);
        }
        if (bVar2 == 0) {
            local_48 = eastl::optional();
            (*((this + 24))) = local_48;
        } else {
            (*((this + 24))) = enumTextureMode;
        }
    }

    // 0x1005fc210
    bool Option<EnumTextureMode>::CanSetValue(EnumTextureMode enumAutoSetup) const {
        bool bVar1;

        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        int iVar2 = this_00->GetX();
        if ((int)enumAutoSetup < iVar2) {
            bVar1 = false;
        } else {
            iVar2 = this_00->GetZ();
            bVar1 = (int)enumAutoSetup <= iVar2;
        }
        return bVar1;
    }

    // 0x1005fc2e0
    void Option<int>::SetValue(int arg1, graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                               bool arg4) {
        int arg3;
        Logger* this_01;
        char* pcVar2;
        uint64_t in_register_00000081;

        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        unsigned int local_34 = arg1;
        int local_3c = this_00->GetX();
        int local_38 = this_00->GetZ();
        local_34 = math::Clamp<int>(local_34, local_3c, local_38);
        if (((int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4) != 0) ||
            (local_34 != *(unsigned int*)&this[3]._vptr)) {
            if (IsSafeToSet() != '\0') {
                this_01 = logger::default_logger();
                pcVar2 = "";
                if (arg4) {
                    pcVar2 = "(FORCED)";
                }
                this_01->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                             "clientoptions/options/../Option.h",
                             123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s", this[2]._vptr,
                             (unsigned long)local_34, (unsigned long)*(unsigned int*)&this[3]._vptr, pcVar2);
                arg3 = *(int*)&this[3]._vptr;
                *(unsigned int*)&this[3]._vptr = local_34;
                ApplySetting(this, rt7Core, effectManager, arg3);
            }
        }
    }

    // 0x1005fc3d0
    void Option<int>::ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager, int arg3) {
        uint8_t bVar2;
        int iVar3;
        optional<EnumOptionToggle> local_48;

        bool cVar1 = ((this + 6))->operator_cast_to_bool();
        if (!cVar1) {
            bVar2 = ((this + 12))->operator_cast_to_bool();
            bVar2 = bVar2 ^ 1;
        } else {
            bVar2 = 0;
            if (cVar1) {
                bVar2 = 0;
                iVar3 = GetValue();
                std::function<void(int, int)>::operator()((function<void(int, int)>*)(this + 6), iVar3,
                                                          (unsigned int)arg3);
            }
        }
        OnSaveSetting(rt7Core, effectManager, (unsigned long)(unsigned int)arg3);
        cVar1 = ((this + 12))->operator_cast_to_bool();
        if (cVar1) {
            iVar3 = GetValue();
            std::function<void(int, int)>::operator()((function<void(int, int)>*)(this + 12), iVar3,
                                                      (unsigned int)arg3);
        }
        if (bVar2 == 0) {
            local_48 = eastl::optional();
            (*((this + 24))) = local_48;
        } else {
            (*((this + 24))) = (unsigned int)arg3;
        }
    }

    // 0x1005fc6a0
    void Option<EnumVolumetricLighting>::SetValue(EnumVolumetricLighting enumVolumetricLighting,
                                                  graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                                  bool arg4) {
        EnumVolumetricLighting enumVolumetricLighting_00;
        Logger* this_01;
        char* pcVar2;
        uint64_t in_register_00000081;

        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        EnumVolumetricLighting local_34 = enumVolumetricLighting;
        EnumVolumetricLighting local_3c = this_00->GetX();
        EnumVolumetricLighting local_38 = this_00->GetZ();
        local_34 = math::Clamp<EnumVolumetricLighting>(local_34, local_3c, local_38);
        if (((int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4) != 0) ||
            (local_34 != *(EnumVolumetricLighting*)&this[3]._vptr)) {
            if (IsSafeToSet() != '\0') {
                this_01 = logger::default_logger();
                pcVar2 = "";
                if (arg4) {
                    pcVar2 = "(FORCED)";
                }
                this_01->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                             "clientoptions/options/../Option.h",
                             123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s", this[2]._vptr,
                             (unsigned long)local_34, (unsigned long)*(unsigned int*)&this[3]._vptr, pcVar2);
                enumVolumetricLighting_00 = *(EnumVolumetricLighting*)&this[3]._vptr;
                *(EnumVolumetricLighting*)&this[3]._vptr = local_34;
                ApplySetting(this, rt7Core, effectManager, enumVolumetricLighting_00);
            }
        }
    }

    // 0x1005fc7c0
    void Option<EnumVolumetricLighting>::ApplySetting(graphics::RT7Core& rt7Core,
                                                      graphics::EffectManager& effectManager,
                                                      EnumVolumetricLighting enumVolumetricLighting) {
        uint8_t bVar2;
        EnumVolumetricLighting EVar3;
        optional<EnumOptionToggle> local_48;

        bool cVar1 = ((this + 6))->operator_cast_to_bool();
        if (!cVar1) {
            bVar2 = ((this + 12))->operator_cast_to_bool();
            bVar2 = bVar2 ^ 1;
        } else {
            bVar2 = 0;
            if (cVar1) {
                bVar2 = 0;
                EVar3 = GetValue();
                std::function<void(EnumVolumetricLighting, EnumVolumetricLighting)>::operator()(
                    (function<void(EnumVolumetricLighting, EnumVolumetricLighting)>*)(this + 6), EVar3,
                    enumVolumetricLighting);
            }
        }
        OnSaveSetting(rt7Core, effectManager, (unsigned long)enumVolumetricLighting);
        cVar1 = ((this + 12))->operator_cast_to_bool();
        if (cVar1) {
            EVar3 = GetValue();
            std::function<void(EnumVolumetricLighting, EnumVolumetricLighting)>::operator()(
                (function<void(EnumVolumetricLighting, EnumVolumetricLighting)>*)(this + 12), EVar3,
                enumVolumetricLighting);
        }
        if (bVar2 == 0) {
            local_48 = eastl::optional();
            (*((this + 24))) = local_48;
        } else {
            (*((this + 24))) = enumVolumetricLighting;
        }
    }

    // 0x1005fcb00
    void Option<jag::WindowMode>::SetValue(jag::WindowMode windowMode, graphics::RT7Core& rt7Core,
                                           graphics::EffectManager& effectManager, bool arg4) {
        WindowMode windowMode_00;
        Logger* this_01;
        char* pcVar2;
        uint64_t in_register_00000081;

        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        WindowMode local_34 = windowMode;
        WindowMode local_3c = this_00->GetX();
        WindowMode local_38 = this_00->GetZ();
        local_34 = math::Clamp<jag::WindowMode>(local_34, local_3c, local_38);
        if (((int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4) != 0) ||
            (local_34 != *(WindowMode*)&this[3]._vptr)) {
            if (IsSafeToSet() != '\0') {
                this_01 = logger::default_logger();
                pcVar2 = "";
                if (arg4) {
                    pcVar2 = "(FORCED)";
                }
                this_01->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                             "clientoptions/options/../Option.h",
                             123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s", this[2]._vptr,
                             (unsigned long)local_34, (unsigned long)*(unsigned int*)&this[3]._vptr, pcVar2);
                windowMode_00 = *(WindowMode*)&this[3]._vptr;
                *(WindowMode*)&this[3]._vptr = local_34;
                ApplySetting(this, rt7Core, effectManager, windowMode_00);
            }
        }
    }

    // 0x1005fcc20
    void Option<jag::WindowMode>::ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                               jag::WindowMode windowMode) {
        uint8_t bVar2;
        WindowMode WVar3;
        optional<EnumOptionToggle> local_48;

        bool cVar1 = ((this + 6))->operator_cast_to_bool();
        if (!cVar1) {
            bVar2 = ((this + 12))->operator_cast_to_bool();
            bVar2 = bVar2 ^ 1;
        } else {
            bVar2 = 0;
            if (cVar1) {
                bVar2 = 0;
                WVar3 = GetValue();
                std::function<void(jag::WindowMode, jag::WindowMode)>::operator()(
                    (function<void(jag::WindowMode, jag::WindowMode)>*)(this + 6), WVar3, windowMode);
            }
        }
        ApplySettingImpl(rt7Core, effectManager, (unsigned long)windowMode);
        cVar1 = ((this + 12))->operator_cast_to_bool();
        if (cVar1) {
            WVar3 = GetValue();
            std::function<void(jag::WindowMode, jag::WindowMode)>::operator()(
                (function<void(jag::WindowMode, jag::WindowMode)>*)(this + 12), WVar3, windowMode);
        }
        if (bVar2 == 0) {
            local_48 = eastl::optional();
            (*((this + 24))) = local_48;
        } else {
            (*((this + 24))) = windowMode;
        }
    }

    // 0x1005fcf10
    bool Option<jag::WindowMode>::CanSetValue(jag::WindowMode windowMode) const {
        bool bVar1;

        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        int iVar2 = this_00->GetX();
        if ((int)windowMode < iVar2) {
            bVar1 = false;
        } else {
            iVar2 = this_00->GetZ();
            bVar1 = (int)windowMode <= iVar2;
        }
        return bVar1;
    }

    // 0x1005fd780
    Option<EnumParticleQualityLevel>::Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
                                             math::Range<EnumParticleQualityLevel> range)
        : IOption() {
        *(Range<EnumParticleQualityLevel>**)((long)&this[3]._vptr + 4) = range;
        uint32_t uVar1 = (range).GetZ();
        *(uint32_t*)((long)&this[4]._vptr + 4) = uVar1;
        new ((this + 6)) std::function<void(EnumParticleQualityLevel, EnumParticleQualityLevel)>();
        new ((this + 12)) std::function<void(EnumParticleQualityLevel, EnumParticleQualityLevel)>();
        new ((this + 18)) std::function<bool()>();
        new ((this + 24)) eastl::optional();
    }

    // 0x1005ffae0
    Option<unsigned int>::Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
                                 math::Range<unsigned int> range)
        : IOption() {
        *(uint8_t**)this = PTR_vtable_100ee85b8 + 16;
        *(Settings**)(this + 8) = settings;
        *(char**)(this + 16) = str;
        *(uint32_t*)(this + 24) = 0;
        *(Range<unsigned int>**)(this + 28) = range;
        uint32_t uVar1 = (range).GetZ();
        *(uint32_t*)(this + 36) = uVar1;
        new ((this + 48)) std::function<void(unsigned int, unsigned int)>();
        new ((this + 96)) std::function<void(unsigned int, unsigned int)>();
        new ((this + 144)) std::function<bool()>();
        new ((this + 192)) eastl::optional();
    }

    // 0x1006019b0
    Option<graphics::GraphicsQuality>::Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
                                              math::Range<graphics::GraphicsQuality> range)
        : IOption() {
        *(Range<graphics::GraphicsQuality>**)((long)&this[3]._vptr + 4) = range;
        uint32_t uVar1 = (range).GetZ();
        *(uint32_t*)((long)&this[4]._vptr + 4) = uVar1;
        new ((this + 6)) std::function<void(graphics::GraphicsQuality, graphics::GraphicsQuality)>();
        new ((this + 12)) std::function<void(graphics::GraphicsQuality, graphics::GraphicsQuality)>();
        new ((this + 18)) std::function<bool()>();
        new ((this + 24)) eastl::optional();
    }

    // 0x100603a90
    Option<graphics::SSAOPass::Mode>::Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
                                             math::Range<graphics::SSAOPass::Mode> range)
        : IOption() {
        *(Range<graphics::SSAOPass::Mode>**)((long)&this[3]._vptr + 4) = range;
        uint32_t uVar1 = (range).GetZ();
        *(uint32_t*)((long)&this[4]._vptr + 4) = uVar1;
        new ((this + 6)) std::function<void(graphics::SSAOPass::Mode, graphics::SSAOPass::Mode)>();
        new ((this + 12)) std::function<void(graphics::SSAOPass::Mode, graphics::SSAOPass::Mode)>();
        new ((this + 18)) std::function<bool()>();
        new ((this + 24)) eastl::optional();
    }

    // 0x100603cc0
    Option<EnumAnisotropicFiltering>::Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
                                             math::Range<EnumAnisotropicFiltering> range)
        : IOption() {
        *(Range<EnumAnisotropicFiltering>**)((long)&this[3]._vptr + 4) = range;
        uint32_t uVar1 = (range).GetZ();
        *(uint32_t*)((long)&this[4]._vptr + 4) = uVar1;
        new ((this + 6)) std::function<void(EnumAnisotropicFiltering, EnumAnisotropicFiltering)>();
        new ((this + 12)) std::function<void(EnumAnisotropicFiltering, EnumAnisotropicFiltering)>();
        new ((this + 18)) std::function<bool()>();
        new ((this + 24)) eastl::optional();
    }

    // 0x100603f60
    Option<EnumAntialiasingMode>::Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
                                         math::Range<EnumAntialiasingMode> range)
        : IOption() {
        *(Range<EnumAntialiasingMode>**)((long)&this[3]._vptr + 4) = range;
        uint32_t uVar1 = (range).GetZ();
        *(uint32_t*)((long)&this[4]._vptr + 4) = uVar1;
        new ((this + 6)) std::function<void(EnumAntialiasingMode, EnumAntialiasingMode)>();
        new ((this + 12)) std::function<void(EnumAntialiasingMode, EnumAntialiasingMode)>();
        new ((this + 18)) std::function<bool()>();
        new ((this + 24)) eastl::optional();
    }

    // 0x100604570
    Option<EnumBloom>::Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
                              math::Range<EnumBloom> range)
        : IOption() {
        *(Range<EnumBloom>**)((long)&this[3]._vptr + 4) = range;
        uint32_t uVar1 = (range).GetZ();
        *(uint32_t*)((long)&this[4]._vptr + 4) = uVar1;
        new ((this + 6)) std::function<void(EnumBloom, EnumBloom)>();
        new ((this + 12)) std::function<void(EnumBloom, EnumBloom)>();
        new ((this + 18)) std::function<bool()>();
        new ((this + 24)) eastl::optional();
    }

    // 0x100609de0
    void Option<EnumAnisotropicFiltering>::SaveSetting() {
        basic_string<char, BucketAllocatorEASTL> local_48;
        eastl local_30;

        Option<EnumAnisotropicFiltering> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
        basic_string<char, BucketAllocatorEASTL> local_60(pOVar1, &local_30);
        local_48 + local_60;
        this[1]._vptr->SetValue<int>(this[2]._vptr, *(int*)&this[3]._vptr);
        pOVar1 = this[1]._vptr;
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pOVar1->SetValue<int>(str, *(int*)((long)&this[4]._vptr + 4));
        ApplySettingImpl();
    }

    // 0x100609eb0
    void Option<EnumAntialiasingMode>::SaveSetting() {
        basic_string<char, BucketAllocatorEASTL> local_48;
        eastl local_30;

        Option<EnumAntialiasingMode> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
        basic_string<char, BucketAllocatorEASTL> local_60(pOVar1, &local_30);
        local_48 + local_60;
        this[1]._vptr->SetValue<int>(this[2]._vptr, *(int*)&this[3]._vptr);
        pOVar1 = this[1]._vptr;
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pOVar1->SetValue<int>(str, *(int*)((long)&this[4]._vptr + 4));
        ApplySettingImpl();
    }

    // 0x100609f80
    void Option<graphics::GraphicsQuality>::SaveSetting() {
        basic_string<char, BucketAllocatorEASTL> local_48;
        eastl local_30;

        Option<graphics::GraphicsQuality> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
        basic_string<char, BucketAllocatorEASTL> local_60(pOVar1, &local_30);
        local_48 + local_60;
        this[1]._vptr->SetValue<int>(this[2]._vptr, *(int*)&this[3]._vptr);
        pOVar1 = this[1]._vptr;
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pOVar1->SetValue<int>(str, *(int*)((long)&this[4]._vptr + 4));
        ApplySettingImpl();
    }

    // 0x10060a050
    void Option<EnumAutoSetup>::SaveSetting() {
        basic_string<char, BucketAllocatorEASTL> local_48;
        eastl local_30;

        Option<EnumAutoSetup> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
        basic_string<char, BucketAllocatorEASTL> local_60(pOVar1, &local_30);
        local_48 + local_60;
        this[1]._vptr->SetValue<int>(this[2]._vptr, *(int*)&this[3]._vptr);
        pOVar1 = this[1]._vptr;
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pOVar1->SetValue<int>(str, *(int*)((long)&this[4]._vptr + 4));
        ApplySettingImpl();
    }

    // 0x10060a120
    void Option<EnumBloom>::SaveSetting() {
        basic_string<char, BucketAllocatorEASTL> local_48;
        eastl local_30;

        Option<EnumBloom> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
        basic_string<char, BucketAllocatorEASTL> local_60(pOVar1, &local_30);
        local_48 + local_60;
        this[1]._vptr->SetValue<int>(this[2]._vptr, *(int*)&this[3]._vptr);
        pOVar1 = this[1]._vptr;
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pOVar1->SetValue<int>(str, *(int*)((long)&this[4]._vptr + 4));
        ApplySettingImpl();
    }

    // 0x10060a1f0
    void Option<EnumBrightness>::SaveSetting() {
        basic_string<char, BucketAllocatorEASTL> local_48;
        eastl local_30;

        Option<EnumBrightness> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
        basic_string<char, BucketAllocatorEASTL> local_60(pOVar1, &local_30);
        local_48 + local_60;
        this[1]._vptr->SetValue<int>(this[2]._vptr, *(int*)&this[3]._vptr);
        pOVar1 = this[1]._vptr;
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pOVar1->SetValue<int>(str, *(int*)((long)&this[4]._vptr + 4));
        ApplySettingImpl();
    }

    // 0x10060a2c0
    void Option<EnumOptionToggle>::SaveSetting() {
        basic_string<char, BucketAllocatorEASTL> local_48;
        eastl local_30;

        Option<EnumOptionToggle> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
        basic_string<char, BucketAllocatorEASTL> local_60(pOVar1, &local_30);
        local_48 + local_60;
        this[1]._vptr->SetValue<int>(this[2]._vptr, *(int*)&this[3]._vptr);
        pOVar1 = this[1]._vptr;
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pOVar1->SetValue<int>(str, *(int*)((long)&this[4]._vptr + 4));
        ApplySettingImpl();
    }

    // 0x10060a390
    void Option<unsigned int>::SaveSetting() {
        basic_string<char, BucketAllocatorEASTL> local_48;
        eastl local_30;

        char* pcVar1 = *(char**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
        basic_string<char, BucketAllocatorEASTL> local_60(pcVar1, &local_30);
        local_48 + local_60;
        (*(Settings**)(this + 8))->SetValue<int>(*(char**)(this + 16), *(int*)(this + 24));
        Settings* this_00 = *(Settings**)(this + 8);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        this_00->SetValue<int>(pcVar1, *(int*)(this + 36));
        (**(void (**)(...))(*(long*)this + 136))(this);
    }

    // 0x10060a460
    void Option<graphics::SSAOPass::Mode>::SaveSetting() {
        basic_string<char, BucketAllocatorEASTL> local_48;
        eastl local_30;

        Option<graphics::SSAOPass::Mode> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
        basic_string<char, BucketAllocatorEASTL> local_60(pOVar1, &local_30);
        local_48 + local_60;
        this[1]._vptr->SetValue<int>(this[2]._vptr, *(int*)&this[3]._vptr);
        pOVar1 = this[1]._vptr;
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pOVar1->SetValue<int>(str, *(int*)((long)&this[4]._vptr + 4));
        ApplySettingImpl();
    }

    // 0x10060a530
    void Option<render::VSyncMode>::SaveSetting() {
        basic_string<char, BucketAllocatorEASTL> local_48;
        eastl local_30;

        Option<render::VSyncMode> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
        basic_string<char, BucketAllocatorEASTL> local_60(pOVar1, &local_30);
        local_48 + local_60;
        this[1]._vptr->SetValue<int>(this[2]._vptr, *(int*)&this[3]._vptr);
        pOVar1 = this[1]._vptr;
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pOVar1->SetValue<int>(str, *(int*)((long)&this[4]._vptr + 4));
        ApplySettingImpl();
    }

    // 0x10060a600
    void Option<EnumParticleQualityLevel>::SaveSetting() {
        basic_string<char, BucketAllocatorEASTL> local_48;
        eastl local_30;

        Option<EnumParticleQualityLevel> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
        basic_string<char, BucketAllocatorEASTL> local_60(pOVar1, &local_30);
        local_48 + local_60;
        this[1]._vptr->SetValue<int>(this[2]._vptr, *(int*)&this[3]._vptr);
        pOVar1 = this[1]._vptr;
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pOVar1->SetValue<int>(str, *(int*)((long)&this[4]._vptr + 4));
        ApplySettingImpl();
    }

    // 0x10060a6d0
    void Option<EnumRemoveRoof>::SaveSetting() {
        basic_string<char, BucketAllocatorEASTL> local_48;
        eastl local_30;

        Option<EnumRemoveRoof> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
        basic_string<char, BucketAllocatorEASTL> local_60(pOVar1, &local_30);
        local_48 + local_60;
        this[1]._vptr->SetValue<int>(this[2]._vptr, *(int*)&this[3]._vptr);
        pOVar1 = this[1]._vptr;
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pOVar1->SetValue<int>(str, *(int*)((long)&this[4]._vptr + 4));
        ApplySettingImpl();
    }

    // 0x10060a7a0
    void Option<LanguageID>::SaveSetting() {
        basic_string<char, BucketAllocatorEASTL> local_48;
        eastl local_30;

        Option<LanguageID> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
        basic_string<char, BucketAllocatorEASTL> local_60(pOVar1, &local_30);
        local_48 + local_60;
        this[1]._vptr->SetValue<int>(this[2]._vptr, *(int*)&this[3]._vptr);
        pOVar1 = this[1]._vptr;
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pOVar1->SetValue<int>(str, *(int*)((long)&this[4]._vptr + 4));
        OnSaveSetting();
    }

    // 0x10060a870
    void Option<unsigned char>::SaveSetting() {
        basic_string<char, BucketAllocatorEASTL> local_48;
        eastl local_30;

        char* pcVar1 = *(char**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
        basic_string<char, BucketAllocatorEASTL> local_60(pcVar1, &local_30);
        local_48 + local_60;
        (*(Settings**)(this + 8))->SetValue<int>(*(char**)(this + 16), (unsigned int)(uint8_t)this[24]);
        Settings* this_00 = *(Settings**)(this + 8);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        this_00->SetValue<int>(pcVar1, (unsigned int)(uint8_t)this[27]);
        (**(void (**)(...))(*(long*)this + 136))(this);
    }

    // 0x10060a940
    void Option<EnumAnisotropicFiltering>::LoadSetting(graphics::RT7Core& rt7Core,
                                                       graphics::EffectManager& effectManager, bool arg3) {
        Option<EnumAnisotropicFiltering> _vtbl* str;
        uint8_t uVar2;
        EnumAnisotropicFiltering enumAnisotropicFiltering;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        basic_string<char, BucketAllocatorEASTL> local_78;
        int local_60[6];
        eastl local_38;

        Option<EnumAnisotropicFiltering> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        new (local_60) eastl::basic_string<char, BucketAllocatorEASTL>(pOVar1, &local_38);
        local_78 + *local_60;
        if (arg3) {
            uVar2 = GetDefault();
            enumAnisotropicFiltering = (EnumAnisotropicFiltering)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2);
        } else {
            pOVar1 = this[1]._vptr;
            str = this[2]._vptr;
            uVar2 = GetDefault();
            local_60[0] = (int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2);
            enumAnisotropicFiltering = pOVar1->GetValueWithDefault<int>(str, *local_60);
        }
        pOVar1 = this[1]._vptr;
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((CoordMapSquare*)((long)&this[3]._vptr + 4))->GetZ();
        int iVar3 = pOVar1->GetValueWithDefault<int>(str_00, *local_60);
        *(int*)((long)&this[4]._vptr + 4) = iVar3;
        SetValue(this, enumAnisotropicFiltering, rt7Core, effectManager, true);
        ApplySettingImpl(rt7Core, effectManager);
    }

    // 0x10060aa80
    void Option<EnumAntialiasingMode>::LoadSetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                                   bool arg3) {
        Option<EnumAntialiasingMode> _vtbl* str;
        uint8_t uVar2;
        EnumAntialiasingMode enumAntialiasingMode;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        basic_string<char, BucketAllocatorEASTL> local_78;
        int local_60[6];
        eastl local_38;

        Option<EnumAntialiasingMode> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        new (local_60) eastl::basic_string<char, BucketAllocatorEASTL>(pOVar1, &local_38);
        local_78 + *local_60;
        if (arg3) {
            uVar2 = GetDefault();
            enumAntialiasingMode = (EnumAntialiasingMode)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2);
        } else {
            pOVar1 = this[1]._vptr;
            str = this[2]._vptr;
            uVar2 = GetDefault();
            local_60[0] = (int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2);
            enumAntialiasingMode = pOVar1->GetValueWithDefault<int>(str, *local_60);
        }
        pOVar1 = this[1]._vptr;
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((CoordMapSquare*)((long)&this[3]._vptr + 4))->GetZ();
        int iVar3 = pOVar1->GetValueWithDefault<int>(str_00, *local_60);
        *(int*)((long)&this[4]._vptr + 4) = iVar3;
        SetValue(this, enumAntialiasingMode, rt7Core, effectManager, true);
        ApplySettingImpl(rt7Core, effectManager);
    }

    // 0x10060abc0
    void Option<graphics::GraphicsQuality>::LoadSetting(graphics::RT7Core& rt7Core,
                                                        graphics::EffectManager& effectManager, bool arg3) {
        Option<graphics::GraphicsQuality> _vtbl* str;
        uint8_t uVar2;
        GraphicsQuality graphicsQuality;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        basic_string<char, BucketAllocatorEASTL> local_78;
        int local_60[6];
        eastl local_38;

        Option<graphics::GraphicsQuality> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        new (local_60) eastl::basic_string<char, BucketAllocatorEASTL>(pOVar1, &local_38);
        local_78 + *local_60;
        if (arg3) {
            uVar2 = GetDefault();
            graphicsQuality = (GraphicsQuality)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2);
        } else {
            pOVar1 = this[1]._vptr;
            str = this[2]._vptr;
            uVar2 = GetDefault();
            local_60[0] = (int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2);
            graphicsQuality = pOVar1->GetValueWithDefault<int>(str, *local_60);
        }
        pOVar1 = this[1]._vptr;
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((CoordMapSquare*)((long)&this[3]._vptr + 4))->GetZ();
        int iVar3 = pOVar1->GetValueWithDefault<int>(str_00, *local_60);
        *(int*)((long)&this[4]._vptr + 4) = iVar3;
        SetValue(this, graphicsQuality, rt7Core, effectManager, true);
        ApplySettingImpl(rt7Core, effectManager);
    }

    // 0x10060ad00
    void Option<EnumAutoSetup>::LoadSetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                            bool arg3) {
        Option<EnumAutoSetup> _vtbl* str;
        uint8_t uVar2;
        EnumAutoSetup enumAutoSetup;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        basic_string<char, BucketAllocatorEASTL> local_78;
        int local_60[6];
        eastl local_38;

        Option<EnumAutoSetup> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        new (local_60) eastl::basic_string<char, BucketAllocatorEASTL>(pOVar1, &local_38);
        local_78 + *local_60;
        if (arg3) {
            uVar2 = GetDefault();
            enumAutoSetup = (EnumAutoSetup)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2);
        } else {
            pOVar1 = this[1]._vptr;
            str = this[2]._vptr;
            uVar2 = GetDefault();
            local_60[0] = (int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2);
            enumAutoSetup = pOVar1->GetValueWithDefault<int>(str, *local_60);
        }
        pOVar1 = this[1]._vptr;
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((CoordMapSquare*)((long)&this[3]._vptr + 4))->GetZ();
        int iVar3 = pOVar1->GetValueWithDefault<int>(str_00, *local_60);
        *(int*)((long)&this[4]._vptr + 4) = iVar3;
        SetValue(this, enumAutoSetup, rt7Core, effectManager, true);
        ApplySettingImpl(rt7Core, effectManager);
    }

    // 0x10060ae40
    void Option<EnumBloom>::LoadSetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager, bool arg3) {
        Option<EnumBloom> _vtbl* str;
        uint8_t uVar2;
        EnumBloom enumBloom;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        basic_string<char, BucketAllocatorEASTL> local_78;
        int local_60[6];
        eastl local_38;

        Option<EnumBloom> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        new (local_60) eastl::basic_string<char, BucketAllocatorEASTL>(pOVar1, &local_38);
        local_78 + *local_60;
        if (arg3) {
            uVar2 = GetDefault();
            enumBloom = (EnumBloom)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2);
        } else {
            pOVar1 = this[1]._vptr;
            str = this[2]._vptr;
            uVar2 = GetDefault();
            local_60[0] = (int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2);
            enumBloom = pOVar1->GetValueWithDefault<int>(str, *local_60);
        }
        pOVar1 = this[1]._vptr;
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((CoordMapSquare*)((long)&this[3]._vptr + 4))->GetZ();
        int iVar3 = pOVar1->GetValueWithDefault<int>(str_00, *local_60);
        *(int*)((long)&this[4]._vptr + 4) = iVar3;
        SetValue(this, enumBloom, rt7Core, effectManager, true);
        ApplySettingImpl(rt7Core, effectManager);
    }

    // 0x10060af80
    void Option<EnumBrightness>::LoadSetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                             bool arg3) {
        Option<EnumBrightness> _vtbl* str;
        uint8_t uVar2;
        EnumBrightness enumBrightness;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        basic_string<char, BucketAllocatorEASTL> local_78;
        int local_60[6];
        eastl local_38;

        Option<EnumBrightness> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        new (local_60) eastl::basic_string<char, BucketAllocatorEASTL>(pOVar1, &local_38);
        local_78 + *local_60;
        if (arg3) {
            uVar2 = GetDefault();
            enumBrightness = (EnumBrightness)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2);
        } else {
            pOVar1 = this[1]._vptr;
            str = this[2]._vptr;
            uVar2 = GetDefault();
            local_60[0] = (int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2);
            enumBrightness = pOVar1->GetValueWithDefault<int>(str, *local_60);
        }
        pOVar1 = this[1]._vptr;
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((CoordMapSquare*)((long)&this[3]._vptr + 4))->GetZ();
        int iVar3 = pOVar1->GetValueWithDefault<int>(str_00, *local_60);
        *(int*)((long)&this[4]._vptr + 4) = iVar3;
        SetValue(this, enumBrightness, rt7Core, effectManager, true);
        ApplySettingImpl(rt7Core, effectManager);
    }

    // 0x10060b0c0
    void Option<EnumOptionToggle>::LoadSetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                               bool arg3) {
        Option<EnumOptionToggle> _vtbl* str;
        uint8_t uVar2;
        EnumOptionToggle enumOptionToggle;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        basic_string<char, BucketAllocatorEASTL> local_78;
        int local_60[6];
        eastl local_38;

        Option<EnumOptionToggle> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        new (local_60) eastl::basic_string<char, BucketAllocatorEASTL>(pOVar1, &local_38);
        local_78 + *local_60;
        if (arg3) {
            uVar2 = GetDefault();
            enumOptionToggle = (EnumOptionToggle)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2);
        } else {
            pOVar1 = this[1]._vptr;
            str = this[2]._vptr;
            uVar2 = GetDefault();
            local_60[0] = (int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2);
            enumOptionToggle = pOVar1->GetValueWithDefault<int>(str, *local_60);
        }
        pOVar1 = this[1]._vptr;
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((CoordMapSquare*)((long)&this[3]._vptr + 4))->GetZ();
        int iVar3 = pOVar1->GetValueWithDefault<int>(str_00, *local_60);
        *(int*)((long)&this[4]._vptr + 4) = iVar3;
        SetValue(this, enumOptionToggle, rt7Core, effectManager, true);
        ApplySettingImpl(rt7Core, effectManager);
    }

    // 0x10060b200
    void Option<unsigned int>::LoadSetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                           bool arg3) {
        Settings* pSVar1;
        unsigned int arg1;
        basic_string<char, BucketAllocatorEASTL> local_78;
        int local_60[6];
        eastl local_38;

        char* pcVar3 = *(char**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        new (local_60) eastl::basic_string<char, BucketAllocatorEASTL>(pcVar3, &local_38);
        local_78 + *local_60;
        if (arg3) {
            arg1 = (**(void (**)(...))(*(long*)this + 104))(this);
        } else {
            pSVar1 = *(Settings**)(this + 8);
            pcVar3 = *(char**)(this + 16);
            local_60[0] = (**(void (**)(...))(*(long*)this + 104))(this);
            arg1 = pSVar1->GetValueWithDefault<int>(pcVar3, *local_60);
        }
        pSVar1 = *(Settings**)(this + 8);
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((this + 28))->GetZ();
        int iVar2 = pSVar1->GetValueWithDefault<int>(pcVar3, *local_60);
        *(int*)(this + 36) = iVar2;
        SetValue(this, arg1, rt7Core, effectManager, true);
        (**(void (**)(...))(*(long*)this + 144))(this, rt7Core, effectManager);
    }

    // 0x10060b340
    void Option<graphics::SSAOPass::Mode>::LoadSetting(graphics::RT7Core& rt7Core,
                                                       graphics::EffectManager& effectManager, bool arg3) {
        Option<graphics::SSAOPass::Mode> _vtbl* str;
        uint8_t uVar3;
        unsigned int uVar4;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        unsigned long uVar6;
        basic_string<char, BucketAllocatorEASTL> local_78;
        int local_60[6];
        eastl local_38;

        Option<graphics::SSAOPass::Mode> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        new (local_60) eastl::basic_string<char, BucketAllocatorEASTL>(pOVar1, &local_38);
        local_78 + *local_60;
        if (arg3) {
            uVar3 = GetDefault();
            uVar6 = (((uint64_t)extraout_var << 8) | (uint8_t)uVar3) & 4294967295;
        } else {
            pOVar1 = this[1]._vptr;
            str = this[2]._vptr;
            uVar3 = GetDefault();
            local_60[0] = (int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar3);
            uVar4 = pOVar1->GetValueWithDefault<int>(str, *local_60);
            uVar6 = (unsigned long)uVar4;
        }
        pOVar1 = this[1]._vptr;
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((CoordMapSquare*)((long)&this[3]._vptr + 4))->GetZ();
        int iVar5 = pOVar1->GetValueWithDefault<int>(str_00, *local_60);
        *(int*)((long)&this[4]._vptr + 4) = iVar5;
        SetValue(this, uVar6, rt7Core, effectManager, 1);
        ApplySettingImpl(rt7Core, effectManager);
    }

    // 0x10060b480
    void Option<EnumParticleQualityLevel>::LoadSetting(graphics::RT7Core& rt7Core,
                                                       graphics::EffectManager& effectManager, bool arg3) {
        Option<EnumParticleQualityLevel> _vtbl* str;
        uint8_t uVar2;
        EnumParticleQualityLevel enumParticleQualityLevel;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        basic_string<char, BucketAllocatorEASTL> local_78;
        int local_60[6];
        eastl local_38;

        Option<EnumParticleQualityLevel> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        new (local_60) eastl::basic_string<char, BucketAllocatorEASTL>(pOVar1, &local_38);
        local_78 + *local_60;
        if (arg3) {
            uVar2 = GetDefault();
            enumParticleQualityLevel = (EnumParticleQualityLevel)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2);
        } else {
            pOVar1 = this[1]._vptr;
            str = this[2]._vptr;
            uVar2 = GetDefault();
            local_60[0] = (int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2);
            enumParticleQualityLevel = pOVar1->GetValueWithDefault<int>(str, *local_60);
        }
        pOVar1 = this[1]._vptr;
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((CoordMapSquare*)((long)&this[3]._vptr + 4))->GetZ();
        int iVar3 = pOVar1->GetValueWithDefault<int>(str_00, *local_60);
        *(int*)((long)&this[4]._vptr + 4) = iVar3;
        SetValue(this, enumParticleQualityLevel, rt7Core, effectManager, true);
        ApplySettingImpl(rt7Core, effectManager);
    }

    // 0x10060b5c0
    void Option<render::VSyncMode>::LoadSetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                                bool arg3) {
        Option<render::VSyncMode> _vtbl* str;
        uint8_t uVar2;
        VSyncMode vSyncMode;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        basic_string<char, BucketAllocatorEASTL> local_78;
        int local_60[6];
        eastl local_38;

        Option<render::VSyncMode> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        new (local_60) eastl::basic_string<char, BucketAllocatorEASTL>(pOVar1, &local_38);
        local_78 + *local_60;
        if (arg3) {
            uVar2 = GetDefault();
            vSyncMode = (VSyncMode)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2);
        } else {
            pOVar1 = this[1]._vptr;
            str = this[2]._vptr;
            uVar2 = GetDefault();
            local_60[0] = (int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2);
            vSyncMode = pOVar1->GetValueWithDefault<int>(str, *local_60);
        }
        pOVar1 = this[1]._vptr;
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((CoordMapSquare*)((long)&this[3]._vptr + 4))->GetZ();
        int iVar3 = pOVar1->GetValueWithDefault<int>(str_00, *local_60);
        *(int*)((long)&this[4]._vptr + 4) = iVar3;
        SetValue(this, vSyncMode, rt7Core, effectManager, true);
        ApplySettingImpl(rt7Core, effectManager);
    }

    // 0x10060b700
    void Option<EnumRemoveRoof>::LoadSetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                             bool arg3) {
        Option<EnumRemoveRoof> _vtbl* str;
        uint8_t uVar2;
        EnumRemoveRoof enumRemoveRoof;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        basic_string<char, BucketAllocatorEASTL> local_78;
        int local_60[6];
        eastl local_38;

        Option<EnumRemoveRoof> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        new (local_60) eastl::basic_string<char, BucketAllocatorEASTL>(pOVar1, &local_38);
        local_78 + *local_60;
        if (arg3) {
            uVar2 = GetDefault();
            enumRemoveRoof = (EnumRemoveRoof)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2);
        } else {
            pOVar1 = this[1]._vptr;
            str = this[2]._vptr;
            uVar2 = GetDefault();
            local_60[0] = (int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2);
            enumRemoveRoof = pOVar1->GetValueWithDefault<int>(str, *local_60);
        }
        pOVar1 = this[1]._vptr;
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((CoordMapSquare*)((long)&this[3]._vptr + 4))->GetZ();
        int iVar3 = pOVar1->GetValueWithDefault<int>(str_00, *local_60);
        *(int*)((long)&this[4]._vptr + 4) = iVar3;
        SetValue(this, enumRemoveRoof, rt7Core, effectManager, true);
        ApplySettingImpl(rt7Core, effectManager);
    }

    // 0x10060b840
    void Option<EnumRemoveRoof>::SetValueInternal(EnumRemoveRoof enumRemoveRoof) {
        *(EnumRemoveRoof*)&this[3]._vptr = enumRemoveRoof;
    }

    // 0x10060b850
    void Option<LanguageID>::LoadSetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                         bool arg3) {
        Option<LanguageID> _vtbl* str;
        uint8_t uVar2;
        LanguageID languageID;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        basic_string<char, BucketAllocatorEASTL> local_78;
        int local_60[6];
        eastl local_38;

        Option<LanguageID> _vtbl* pOVar1 = this[2]._vptr;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        new (local_60) eastl::basic_string<char, BucketAllocatorEASTL>(pOVar1, &local_38);
        local_78 + *local_60;
        if (arg3) {
            uVar2 = GetDefault();
            languageID = (LanguageID)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2);
        } else {
            pOVar1 = this[1]._vptr;
            str = this[2]._vptr;
            uVar2 = GetDefault();
            local_60[0] = (int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2);
            languageID = pOVar1->GetValueWithDefault<int>(str, *local_60);
        }
        pOVar1 = this[1]._vptr;
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = ((CoordMapSquare*)((long)&this[3]._vptr + 4))->GetZ();
        int iVar3 = pOVar1->GetValueWithDefault<int>(str_00, *local_60);
        *(int*)((long)&this[4]._vptr + 4) = iVar3;
        SetValue(this, languageID, rt7Core, effectManager, true);
        OnSaveSetting(rt7Core, effectManager);
    }

    // 0x10060b990
    void Option<unsigned char>::LoadSetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                            bool arg3) {
        Settings* pSVar1;
        unsigned char arg1;
        uint8_t bVar2;
        int iVar3;
        basic_string<char, BucketAllocatorEASTL> local_78;
        unsigned int local_60[6];
        eastl local_38;

        char* pcVar4 = *(char**)(this + 16);
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        new (local_60) eastl::basic_string<char, BucketAllocatorEASTL>(pcVar4, &local_38);
        local_78 + *local_60;
        if (arg3) {
            arg1 = (**(void (**)(...))(*(long*)this + 104))(this);
        } else {
            pSVar1 = *(Settings**)(this + 8);
            pcVar4 = *(char**)(this + 16);
            bVar2 = (**(void (**)(...))(*(long*)this + 104))(this);
            local_60[0] = (unsigned int)bVar2;
            iVar3 = pSVar1->GetValueWithDefault<int>(pcVar4, *local_60);
            arg1 = (unsigned char)iVar3;
        }
        pSVar1 = *(Settings**)(this + 8);
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        bVar2 = ((this + 25))->GetRot();
        local_60[0] = (unsigned int)bVar2;
        iVar3 = pSVar1->GetValueWithDefault<int>(pcVar4, *local_60);
        this[27] = (uint8_t)iVar3;
        SetValue(this, arg1, rt7Core, effectManager, true);
        (**(void (**)(...))(*(long*)this + 144))(this, rt7Core, effectManager);
    }

    // 0x10060c2b0
    void Option<EnumAntialiasingMode>::SetValue(EnumAntialiasingMode enumAntialiasingMode, graphics::RT7Core& rt7Core,
                                                graphics::EffectManager& effectManager, bool arg4) {
        EnumAntialiasingMode enumAntialiasingMode_00;
        Logger* this_01;
        char* pcVar2;
        uint64_t in_register_00000081;

        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        EnumAntialiasingMode local_34 = enumAntialiasingMode;
        EnumAntialiasingMode local_3c = this_00->GetX();
        EnumAntialiasingMode local_38 = this_00->GetZ();
        local_34 = math::Clamp<EnumAntialiasingMode>(local_34, local_3c, local_38);
        if (((int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4) != 0) ||
            (local_34 != *(EnumAntialiasingMode*)&this[3]._vptr)) {
            if (IsSafeToSet() != '\0') {
                this_01 = logger::default_logger();
                pcVar2 = "";
                if (arg4) {
                    pcVar2 = "(FORCED)";
                }
                this_01->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                             "clientoptions/options/../Option.h",
                             123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s", this[2]._vptr,
                             (unsigned long)local_34, (unsigned long)*(unsigned int*)&this[3]._vptr, pcVar2);
                enumAntialiasingMode_00 = *(EnumAntialiasingMode*)&this[3]._vptr;
                *(EnumAntialiasingMode*)&this[3]._vptr = local_34;
                ApplySetting(this, rt7Core, effectManager, enumAntialiasingMode_00);
            }
        }
    }

    // 0x10060c3a0
    void Option<graphics::GraphicsQuality>::SetValue(graphics::GraphicsQuality graphicsQuality,
                                                     graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                                     bool arg4) {
        GraphicsQuality graphicsQuality_00;
        Logger* this_01;
        char* pcVar2;
        uint64_t in_register_00000081;

        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        GraphicsQuality local_34 = graphicsQuality;
        GraphicsQuality local_3c = this_00->GetX();
        GraphicsQuality local_38 = this_00->GetZ();
        local_34 = math::Clamp<graphics::GraphicsQuality>(local_34, local_3c, local_38);
        if (((int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4) != 0) ||
            (local_34 != *(GraphicsQuality*)&this[3]._vptr)) {
            if (IsSafeToSet() != '\0') {
                this_01 = logger::default_logger();
                pcVar2 = "";
                if (arg4) {
                    pcVar2 = "(FORCED)";
                }
                this_01->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                             "clientoptions/options/../Option.h",
                             123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s", this[2]._vptr,
                             (unsigned long)local_34, (unsigned long)*(unsigned int*)&this[3]._vptr, pcVar2);
                graphicsQuality_00 = *(GraphicsQuality*)&this[3]._vptr;
                *(GraphicsQuality*)&this[3]._vptr = local_34;
                ApplySetting(this, rt7Core, effectManager, graphicsQuality_00);
            }
        }
    }

    // 0x10060c490
    void Option<EnumBloom>::SetValue(EnumBloom enumBloom, graphics::RT7Core& rt7Core,
                                     graphics::EffectManager& effectManager, bool arg4) {
        EnumBloom enumBloom_00;
        Logger* this_01;
        char* pcVar2;
        uint64_t in_register_00000081;

        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        EnumBloom local_34 = enumBloom;
        EnumBloom local_3c = this_00->GetX();
        EnumBloom local_38 = this_00->GetZ();
        local_34 = math::Clamp<EnumBloom>(local_34, local_3c, local_38);
        if (((int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4) != 0) ||
            (local_34 != *(EnumBloom*)&this[3]._vptr)) {
            if (IsSafeToSet() != '\0') {
                this_01 = logger::default_logger();
                pcVar2 = "";
                if (arg4) {
                    pcVar2 = "(FORCED)";
                }
                this_01->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                             "clientoptions/options/../Option.h",
                             123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s", this[2]._vptr,
                             (unsigned long)local_34, (unsigned long)*(unsigned int*)&this[3]._vptr, pcVar2);
                enumBloom_00 = *(EnumBloom*)&this[3]._vptr;
                *(EnumBloom*)&this[3]._vptr = local_34;
                ApplySetting(this, rt7Core, effectManager, enumBloom_00);
            }
        }
    }

    // 0x10060c580
    void Option<EnumBrightness>::SetValue(EnumBrightness enumBrightness, graphics::RT7Core& rt7Core,
                                          graphics::EffectManager& effectManager, bool arg4) {
        EnumBrightness enumBrightness_00;
        Logger* this_01;
        char* pcVar2;
        uint64_t in_register_00000081;

        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        EnumBrightness local_34 = enumBrightness;
        EnumBrightness local_3c = this_00->GetX();
        EnumBrightness local_38 = this_00->GetZ();
        local_34 = math::Clamp<EnumBrightness>(local_34, local_3c, local_38);
        if (((int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4) != 0) ||
            (local_34 != *(EnumBrightness*)&this[3]._vptr)) {
            if (IsSafeToSet() != '\0') {
                this_01 = logger::default_logger();
                pcVar2 = "";
                if (arg4) {
                    pcVar2 = "(FORCED)";
                }
                this_01->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                             "clientoptions/options/../Option.h",
                             123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s", this[2]._vptr,
                             (unsigned long)local_34, (unsigned long)*(unsigned int*)&this[3]._vptr, pcVar2);
                enumBrightness_00 = *(EnumBrightness*)&this[3]._vptr;
                *(EnumBrightness*)&this[3]._vptr = local_34;
                ApplySetting(this, rt7Core, effectManager, enumBrightness_00);
            }
        }
    }

    // 0x10060c670
    void Option<EnumRemoveRoof>::SetValue(EnumRemoveRoof enumRemoveRoof, graphics::RT7Core& rt7Core,
                                          graphics::EffectManager& effectManager, bool arg4) {
        EnumRemoveRoof enumRemoveRoof_00;
        Logger* this_01;
        char* pcVar2;
        uint64_t in_register_00000081;

        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        EnumRemoveRoof local_34 = enumRemoveRoof;
        EnumRemoveRoof local_3c = this_00->GetX();
        EnumRemoveRoof local_38 = this_00->GetZ();
        local_34 = math::Clamp<EnumRemoveRoof>(local_34, local_3c, local_38);
        if (((int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4) != 0) ||
            (local_34 != *(EnumRemoveRoof*)&this[3]._vptr)) {
            if (IsSafeToSet() != '\0') {
                this_01 = logger::default_logger();
                pcVar2 = "";
                if (arg4) {
                    pcVar2 = "(FORCED)";
                }
                this_01->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                             "clientoptions/options/../Option.h",
                             123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s", this[2]._vptr,
                             (unsigned long)local_34, (unsigned long)*(unsigned int*)&this[3]._vptr, pcVar2);
                enumRemoveRoof_00 = *(EnumRemoveRoof*)&this[3]._vptr;
                *(EnumRemoveRoof*)&this[3]._vptr = local_34;
                ApplySetting(this, rt7Core, effectManager, enumRemoveRoof_00);
            }
        }
    }

    // 0x10060c760
    void Option<graphics::SSAOPass::Mode>::SetValue(graphics::SSAOPass::Mode arg1, graphics::RT7Core& arg2,
                                                    graphics::EffectManager& arg3, bool arg4) {
        uint32_t uVar1;
        Logger* this_01;
        char* pcVar3;

        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        unsigned int local_34 = param_2;
        uint32_t local_3c = this_00->GetX();
        uint32_t local_38 = this_00->GetZ();
        local_34 = math::Clamp<graphics::SSAOPass::Mode>(local_34, local_3c, local_38);
        if ((param_5 != 0) || (local_34 != *(unsigned int*)&this[3]._vptr)) {
            if (IsSafeToSet() != '\0') {
                this_01 = logger::default_logger();
                pcVar3 = "";
                if ((char)param_5 != '\0') {
                    pcVar3 = "(FORCED)";
                }
                this_01->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                             "clientoptions/options/../Option.h",
                             123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s", this[2]._vptr,
                             (unsigned long)local_34, (unsigned long)*(unsigned int*)&this[3]._vptr, pcVar3);
                uVar1 = *(uint32_t*)&this[3]._vptr;
                *(unsigned int*)&this[3]._vptr = local_34;
                ApplySetting(this, param_3, param_4, uVar1);
            }
        }
    }

    // 0x10060c850
    void Option<render::VSyncMode>::SetValue(render::VSyncMode vSyncMode, graphics::RT7Core& rt7Core,
                                             graphics::EffectManager& effectManager, bool arg4) {
        VSyncMode vSyncMode_00;
        Logger* this_01;
        char* pcVar2;
        uint64_t in_register_00000081;

        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        VSyncMode local_34 = vSyncMode;
        VSyncMode local_3c = this_00->GetX();
        VSyncMode local_38 = this_00->GetZ();
        local_34 = math::Clamp<render::VSyncMode>(local_34, local_3c, local_38);
        if (((int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4) != 0) ||
            (local_34 != *(VSyncMode*)&this[3]._vptr)) {
            if (IsSafeToSet() != '\0') {
                this_01 = logger::default_logger();
                pcVar2 = "";
                if (arg4) {
                    pcVar2 = "(FORCED)";
                }
                this_01->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                             "clientoptions/options/../Option.h",
                             123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s", this[2]._vptr,
                             (unsigned long)local_34, (unsigned long)*(unsigned int*)&this[3]._vptr, pcVar2);
                vSyncMode_00 = *(VSyncMode*)&this[3]._vptr;
                *(VSyncMode*)&this[3]._vptr = local_34;
                ApplySetting(this, rt7Core, effectManager, vSyncMode_00);
            }
        }
    }

    // 0x10060c940
    void Option<EnumAnisotropicFiltering>::SetValue(EnumAnisotropicFiltering enumAnisotropicFiltering,
                                                    graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                                    bool arg4) {
        EnumAnisotropicFiltering enumAnisotropicFiltering_00;
        Logger* this_01;
        char* pcVar2;
        uint64_t in_register_00000081;

        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        EnumAnisotropicFiltering local_34 = enumAnisotropicFiltering;
        EnumAnisotropicFiltering local_3c = this_00->GetX();
        EnumAnisotropicFiltering local_38 = this_00->GetZ();
        local_34 = math::Clamp<EnumAnisotropicFiltering>(local_34, local_3c, local_38);
        if (((int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4) != 0) ||
            (local_34 != *(EnumAnisotropicFiltering*)&this[3]._vptr)) {
            if (IsSafeToSet() != '\0') {
                this_01 = logger::default_logger();
                pcVar2 = "";
                if (arg4) {
                    pcVar2 = "(FORCED)";
                }
                this_01->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                             "clientoptions/options/../Option.h",
                             123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s", this[2]._vptr,
                             (unsigned long)local_34, (unsigned long)*(unsigned int*)&this[3]._vptr, pcVar2);
                enumAnisotropicFiltering_00 = *(EnumAnisotropicFiltering*)&this[3]._vptr;
                *(EnumAnisotropicFiltering*)&this[3]._vptr = local_34;
                ApplySetting(this, rt7Core, effectManager, enumAnisotropicFiltering_00);
            }
        }
    }

    // 0x10060ca30
    void Option<unsigned int>::SetValue(unsigned int arg1, graphics::RT7Core& rt7Core,
                                        graphics::EffectManager& effectManager, bool arg4) {
        unsigned int arg3;
        Logger* this_00;
        char* pcVar2;
        uint64_t in_register_00000081;

        unsigned int local_34 = arg1;
        unsigned int local_3c = ((this + 28))->GetX();
        unsigned int local_38 = ((this + 28))->GetZ();
        local_34 = math::Clamp<unsigned int>(local_34, local_3c, local_38);
        if (((int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4) != 0) ||
            (local_34 != *(unsigned int*)(this + 24))) {
            if ((**(void (**)(...))(*(long*)this + 128))(this) != '\0') {
                this_00 = logger::default_logger();
                pcVar2 = "";
                if (arg4) {
                    pcVar2 = "(FORCED)";
                }
                this_00->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                             "clientoptions/options/../Option.h",
                             123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s", *(uint64_t*)(this + 16),
                             (unsigned long)local_34, (unsigned long)*(unsigned int*)(this + 24), pcVar2);
                arg3 = *(unsigned int*)(this + 24);
                *(unsigned int*)(this + 24) = local_34;
                ApplySetting(this, rt7Core, effectManager, arg3);
            }
        }
    }

    // 0x10060cf80
    void Option<EnumAutoSetup>::SetValue(EnumAutoSetup enumAutoSetup, graphics::RT7Core& rt7Core,
                                         graphics::EffectManager& effectManager, bool arg4) {
        EnumAutoSetup enumAutoSetup_00;
        Logger* this_01;
        char* pcVar2;
        uint64_t in_register_00000081;

        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        EnumAutoSetup local_34 = enumAutoSetup;
        EnumAutoSetup local_3c = this_00->GetX();
        EnumAutoSetup local_38 = this_00->GetZ();
        local_34 = math::Clamp<EnumAutoSetup>(local_34, local_3c, local_38);
        if (((int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4) != 0) ||
            (local_34 != *(EnumAutoSetup*)&this[3]._vptr)) {
            if (IsSafeToSet() != '\0') {
                this_01 = logger::default_logger();
                pcVar2 = "";
                if (arg4) {
                    pcVar2 = "(FORCED)";
                }
                this_01->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                             "clientoptions/options/../Option.h",
                             123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s", this[2]._vptr,
                             (unsigned long)local_34, (unsigned long)*(unsigned int*)&this[3]._vptr, pcVar2);
                enumAutoSetup_00 = *(EnumAutoSetup*)&this[3]._vptr;
                *(EnumAutoSetup*)&this[3]._vptr = local_34;
                ApplySetting(this, rt7Core, effectManager, enumAutoSetup_00);
            }
        }
    }

    // 0x10060da40
    void Option<EnumAntialiasingMode>::SetMaxLowestValue(EnumAntialiasingMode enumOptionToggle) {
        *(EnumOptionToggle*)((long)&this[4]._vptr + 4) = enumOptionToggle;
    }

    // 0x10060e180
    void Option<EnumParticleQualityLevel>::SetValue(EnumParticleQualityLevel enumParticleQualityLevel,
                                                    graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                                    bool arg4) {
        EnumParticleQualityLevel enumParticleQualityLevel_00;
        Logger* this_01;
        char* pcVar2;
        uint64_t in_register_00000081;

        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        EnumParticleQualityLevel local_34 = enumParticleQualityLevel;
        EnumParticleQualityLevel local_3c = this_00->GetX();
        EnumParticleQualityLevel local_38 = this_00->GetZ();
        local_34 = math::Clamp<EnumParticleQualityLevel>(local_34, local_3c, local_38);
        if (((int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4) != 0) ||
            (local_34 != *(EnumParticleQualityLevel*)&this[3]._vptr)) {
            if (IsSafeToSet() != '\0') {
                this_01 = logger::default_logger();
                pcVar2 = "";
                if (arg4) {
                    pcVar2 = "(FORCED)";
                }
                this_01->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                             "clientoptions/options/../Option.h",
                             123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s", this[2]._vptr,
                             (unsigned long)local_34, (unsigned long)*(unsigned int*)&this[3]._vptr, pcVar2);
                enumParticleQualityLevel_00 = *(EnumParticleQualityLevel*)&this[3]._vptr;
                *(EnumParticleQualityLevel*)&this[3]._vptr = local_34;
                ApplySetting(this, rt7Core, effectManager, enumParticleQualityLevel_00);
            }
        }
    }

    // 0x10060e2a0
    uint64_t Option<EnumAntialiasingMode>::GetSupportedValueRange() const {
        return *(uint64_t*)((long)&this[3]._vptr + 4);
    }

    // 0x10060e3a0
    void Option<EnumAntialiasingMode>::SetValueIfLower(EnumAntialiasingMode enumAntialiasingMode,
                                                       graphics::RT7Core& rt7Core,
                                                       graphics::EffectManager& effectManager) {
        int iVar1 = *(int*)((long)&this[4]._vptr + 4);
        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        int iVar2 = this_00->GetX();
        if (iVar1 < iVar2) {
            LogAssert("m_maxLowestValue >= m_Range.GetMin()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/options/../Option.h",
                      112, nullptr);
        }
        EnumOptionToggle EVar3 = *(EnumOptionToggle*)((long)&this[4]._vptr + 4);
        auto enumOptionToggle2 = this_00->GetZ();
        EVar3 = eastl::min<graphics::GraphicsQuality>(EVar3, enumOptionToggle2);
        EnumAntialiasingMode local_38 = this_00->GetX();
        EnumAntialiasingMode local_34 =
            eastl::min<graphics::GraphicsQuality>(*(EnumOptionToggle*)&this[3]._vptr, EVar3);
        auto enumAntialiasingMode_00 = math::Clamp<EnumAntialiasingMode>(enumAntialiasingMode, local_38, local_34);
        SetValue(this, enumAntialiasingMode_00, rt7Core, effectManager, false);
    }

    // 0x10060e460
    void Option<graphics::GraphicsQuality>::SetValueIfLower(graphics::GraphicsQuality graphicsQuality,
                                                            graphics::RT7Core& rt7Core,
                                                            graphics::EffectManager& effectManager) {
        int iVar1 = *(int*)((long)&this[4]._vptr + 4);
        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        int iVar2 = this_00->GetX();
        if (iVar1 < iVar2) {
            LogAssert("m_maxLowestValue >= m_Range.GetMin()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/options/../Option.h",
                      112, nullptr);
        }
        EnumOptionToggle EVar3 = *(EnumOptionToggle*)((long)&this[4]._vptr + 4);
        auto enumOptionToggle2 = this_00->GetZ();
        EVar3 = eastl::min<graphics::GraphicsQuality>(EVar3, enumOptionToggle2);
        GraphicsQuality local_38 = this_00->GetX();
        GraphicsQuality local_34 = eastl::min<graphics::GraphicsQuality>(*(EnumOptionToggle*)&this[3]._vptr, EVar3);
        auto graphicsQuality_00 = math::Clamp<graphics::GraphicsQuality>(graphicsQuality, local_38, local_34);
        SetValue(this, graphicsQuality_00, rt7Core, effectManager, false);
    }

    // 0x10060e520
    void Option<EnumBloom>::SetValueIfLower(EnumBloom enumBloom, graphics::RT7Core& rt7Core,
                                            graphics::EffectManager& effectManager) {
        int iVar1 = *(int*)((long)&this[4]._vptr + 4);
        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        int iVar2 = this_00->GetX();
        if (iVar1 < iVar2) {
            LogAssert("m_maxLowestValue >= m_Range.GetMin()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/options/../Option.h",
                      112, nullptr);
        }
        EnumOptionToggle EVar3 = *(EnumOptionToggle*)((long)&this[4]._vptr + 4);
        auto enumOptionToggle2 = this_00->GetZ();
        EVar3 = eastl::min<graphics::GraphicsQuality>(EVar3, enumOptionToggle2);
        EnumBloom local_38 = this_00->GetX();
        EnumBloom local_34 = eastl::min<graphics::GraphicsQuality>(*(EnumOptionToggle*)&this[3]._vptr, EVar3);
        auto enumBloom_00 = math::Clamp<EnumBloom>(enumBloom, local_38, local_34);
        SetValue(this, enumBloom_00, rt7Core, effectManager, false);
    }

    // 0x10060e5e0
    void Option<EnumOptionToggle>::SetValueIfLower(EnumOptionToggle enumOptionToggle, graphics::RT7Core& rt7Core,
                                                   graphics::EffectManager& effectManager) {
        int iVar1 = *(int*)((long)&this[4]._vptr + 4);
        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        int iVar2 = this_00->GetX();
        if (iVar1 < iVar2) {
            LogAssert("m_maxLowestValue >= m_Range.GetMin()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/options/../Option.h",
                      112, nullptr);
        }
        EnumOptionToggle EVar3 = *(EnumOptionToggle*)((long)&this[4]._vptr + 4);
        auto enumOptionToggle2 = this_00->GetZ();
        EVar3 = eastl::min<graphics::GraphicsQuality>(EVar3, enumOptionToggle2);
        EnumOptionToggle local_38 = this_00->GetX();
        EnumOptionToggle local_34 = eastl::min<graphics::GraphicsQuality>(*(EnumOptionToggle*)&this[3]._vptr, EVar3);
        EVar3 = math::Clamp<EnumOptionToggle>(enumOptionToggle, local_38, local_34);
        SetValue(this, EVar3, rt7Core, effectManager, false);
    }

    // 0x10060e6a0
    void Option<EnumTextureMode>::SetValueIfLower(EnumTextureMode enumTextureMode, graphics::RT7Core& rt7Core,
                                                  graphics::EffectManager& effectManager) {
        int iVar1 = *(int*)((long)&this[4]._vptr + 4);
        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        int iVar2 = this_00->GetX();
        if (iVar1 < iVar2) {
            LogAssert("m_maxLowestValue >= m_Range.GetMin()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/options/../Option.h",
                      112, nullptr);
        }
        EnumOptionToggle EVar3 = *(EnumOptionToggle*)((long)&this[4]._vptr + 4);
        auto enumOptionToggle2 = this_00->GetZ();
        EVar3 = eastl::min<graphics::GraphicsQuality>(EVar3, enumOptionToggle2);
        EnumTextureMode local_38 = this_00->GetX();
        EnumTextureMode local_34 = eastl::min<graphics::GraphicsQuality>(*(EnumOptionToggle*)&this[3]._vptr, EVar3);
        auto enumTextureMode_00 = math::Clamp<EnumTextureMode>(enumTextureMode, local_38, local_34);
        SetValue(this, enumTextureMode_00, rt7Core, effectManager, false);
    }

    // 0x10060e760
    void Option<graphics::SSAOPass::Mode>::SetValueIfLower(graphics::SSAOPass::Mode arg1, graphics::RT7Core& arg2,
                                                           graphics::EffectManager& arg3) {
        int iVar1 = *(int*)((long)&this[4]._vptr + 4);
        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        int iVar2 = this_00->GetX();
        if (iVar1 < iVar2) {
            LogAssert("m_maxLowestValue >= m_Range.GetMin()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/options/../Option.h",
                      112, nullptr);
        }
        EnumOptionToggle EVar3 = *(EnumOptionToggle*)((long)&this[4]._vptr + 4);
        auto enumOptionToggle2 = this_00->GetZ();
        EVar3 = eastl::min<graphics::GraphicsQuality>(EVar3, enumOptionToggle2);
        uint32_t local_38 = this_00->GetX();
        uint32_t local_34 = eastl::min<graphics::GraphicsQuality>(*(EnumOptionToggle*)&this[3]._vptr, EVar3);
        uint32_t uVar4 = math::Clamp<graphics::SSAOPass::Mode>(param_2, local_38, local_34);
        SetValue(this, uVar4, param_3, param_4, 0);
    }

    // 0x10060e820
    void Option<EnumAnisotropicFiltering>::SetValueIfLower(EnumAnisotropicFiltering enumAnisotropicFiltering,
                                                           graphics::RT7Core& rt7Core,
                                                           graphics::EffectManager& effectManager) {
        int iVar1 = *(int*)((long)&this[4]._vptr + 4);
        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        int iVar2 = this_00->GetX();
        if (iVar1 < iVar2) {
            LogAssert("m_maxLowestValue >= m_Range.GetMin()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/options/../Option.h",
                      112, nullptr);
        }
        EnumOptionToggle EVar3 = *(EnumOptionToggle*)((long)&this[4]._vptr + 4);
        auto enumOptionToggle2 = this_00->GetZ();
        EVar3 = eastl::min<graphics::GraphicsQuality>(EVar3, enumOptionToggle2);
        EnumAnisotropicFiltering local_38 = this_00->GetX();
        EnumAnisotropicFiltering local_34 =
            eastl::min<graphics::GraphicsQuality>(*(EnumOptionToggle*)&this[3]._vptr, EVar3);
        auto enumAnisotropicFiltering_00 =
            math::Clamp<EnumAnisotropicFiltering>(enumAnisotropicFiltering, local_38, local_34);
        SetValue(this, enumAnisotropicFiltering_00, rt7Core, effectManager, false);
    }

    // 0x10060e8e0
    void Option<EnumVolumetricLighting>::SetValueIfLower(EnumVolumetricLighting enumVolumetricLighting,
                                                         graphics::RT7Core& rt7Core,
                                                         graphics::EffectManager& effectManager) {
        int iVar1 = *(int*)((long)&this[4]._vptr + 4);
        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        int iVar2 = this_00->GetX();
        if (iVar1 < iVar2) {
            LogAssert("m_maxLowestValue >= m_Range.GetMin()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/options/../Option.h",
                      112, nullptr);
        }
        EnumOptionToggle EVar3 = *(EnumOptionToggle*)((long)&this[4]._vptr + 4);
        auto enumOptionToggle2 = this_00->GetZ();
        EVar3 = eastl::min<graphics::GraphicsQuality>(EVar3, enumOptionToggle2);
        EnumVolumetricLighting local_38 = this_00->GetX();
        EnumVolumetricLighting local_34 =
            eastl::min<graphics::GraphicsQuality>(*(EnumOptionToggle*)&this[3]._vptr, EVar3);
        auto enumVolumetricLighting_00 =
            math::Clamp<EnumVolumetricLighting>(enumVolumetricLighting, local_38, local_34);
        SetValue(this, enumVolumetricLighting_00, rt7Core, effectManager, false);
    }

    // 0x10060e9a0
    void Option<EnumParticleQualityLevel>::SetValueIfLower(EnumParticleQualityLevel enumParticleQualityLevel,
                                                           graphics::RT7Core& rt7Core,
                                                           graphics::EffectManager& effectManager) {
        int iVar1 = *(int*)((long)&this[4]._vptr + 4);
        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        int iVar2 = this_00->GetX();
        if (iVar1 < iVar2) {
            LogAssert("m_maxLowestValue >= m_Range.GetMin()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/options/../Option.h",
                      112, nullptr);
        }
        EnumParticleQualityLevel EVar3 = *(EnumParticleQualityLevel*)((long)&this[4]._vptr + 4);
        auto enumParticleQualityLevel2 = this_00->GetZ();
        EVar3 = eastl::min<EnumParticleQualityLevel>(EVar3, enumParticleQualityLevel2);
        EnumParticleQualityLevel local_38 = this_00->GetX();
        EnumParticleQualityLevel local_34 =
            eastl::min<EnumParticleQualityLevel>(*(EnumParticleQualityLevel*)&this[3]._vptr, EVar3);
        EVar3 = math::Clamp<EnumParticleQualityLevel>(enumParticleQualityLevel, local_38, local_34);
        SetValue(this, EVar3, rt7Core, effectManager, false);
    }

    // 0x10060f030
    Option<EnumAutoSetup>::Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
                                  math::Range<EnumAutoSetup> range)
        : IOption() {
        *(Range<EnumAutoSetup>**)((long)&this[3]._vptr + 4) = range;
        uint32_t uVar1 = (range).GetZ();
        *(uint32_t*)((long)&this[4]._vptr + 4) = uVar1;
        new ((this + 6)) std::function<void(EnumAutoSetup, EnumAutoSetup)>();
        new ((this + 12)) std::function<void(EnumAutoSetup, EnumAutoSetup)>();
        new ((this + 18)) std::function<bool()>();
        new ((this + 24)) eastl::optional();
    }

    // 0x10060f0e0
    Option<EnumAutoSetup>* Option<EnumAutoSetup>::GetValueLabels() const {
        GetEnumValueNames<EnumAutoSetup>((ReturnValue*)this);
        return this;
    }

    // 0x10060f100
    void Option<EnumAutoSetup>::SetRawValue(int arg1, graphics::RT7Core& rt7Core,
                                            graphics::EffectManager& effectManager) {
        SetValue(this, arg1, rt7Core, effectManager, false);
    }

    // 0x10060f1c0
    Option<EnumAutoSetup>::~Option() {
        ((this + 18))->~function();
        ((this + 12))->~function();
        ((this + 6))->~function();
    }

    // 0x10060f3d0
    Option<EnumBrightness>::Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
                                   math::Range<EnumBrightness> range)
        : IOption() {
        *(Range<EnumBrightness>**)((long)&this[3]._vptr + 4) = range;
        uint32_t uVar1 = (range).GetZ();
        *(uint32_t*)((long)&this[4]._vptr + 4) = uVar1;
        new ((this + 6)) std::function<void(EnumBrightness, EnumBrightness)>();
        new ((this + 12)) std::function<void(EnumBrightness, EnumBrightness)>();
        new ((this + 18)) std::function<bool()>();
        new ((this + 24)) eastl::optional();
    }

    // 0x10060f480
    Option<EnumBrightness>* Option<EnumBrightness>::GetValueLabels() const {
        GetEnumValueNames<EnumBrightness>((ReturnValue*)this);
        return this;
    }

    // 0x10060f4a0
    void Option<EnumBrightness>::SetRawValue(int arg1, graphics::RT7Core& rt7Core,
                                             graphics::EffectManager& effectManager) {
        SetValue(this, arg1, rt7Core, effectManager, false);
    }

    // 0x10060f520
    Option<EnumBrightness>::~Option() {
        ((this + 18))->~function();
        ((this + 12))->~function();
        ((this + 6))->~function();
    }

    // 0x10060f660
    Option<EnumOptionToggle>::Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
                                     math::Range<EnumOptionToggle> range)
        : IOption() {
        *(Range<EnumOptionToggle>**)((long)&this[3]._vptr + 4) = range;
        uint32_t uVar1 = (range).GetZ();
        *(uint32_t*)((long)&this[4]._vptr + 4) = uVar1;
        new ((this + 6)) std::function<void(EnumOptionToggle, EnumOptionToggle)>();
        new ((this + 12)) std::function<void(EnumOptionToggle, EnumOptionToggle)>();
        new ((this + 18)) std::function<bool()>();
        new ((this + 24)) eastl::optional();
    }

    // 0x10060f730
    Option<EnumOptionToggle>* Option<EnumOptionToggle>::GetValueLabels() const {
        GetEnumValueNames<EnumOptionToggle>((ReturnValue*)this);
        return this;
    }

    // 0x10060f750
    void Option<EnumOptionToggle>::SetRawValue(int arg1, graphics::RT7Core& rt7Core,
                                               graphics::EffectManager& effectManager) {
        SetValue(this, arg1, rt7Core, effectManager, false);
    }

    // 0x10060f790
    Option<EnumOptionToggle>::~Option() {
        ((this + 18))->~function();
        ((this + 12))->~function();
        ((this + 6))->~function();
    }

    // 0x10060f9e0
    Option<render::VSyncMode>::Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
                                      math::Range<render::VSyncMode> range)
        : IOption() {
        *(Range<render::VSyncMode>**)((long)&this[3]._vptr + 4) = range;
        uint32_t uVar1 = (range).GetZ();
        *(uint32_t*)((long)&this[4]._vptr + 4) = uVar1;
        new ((this + 6)) std::function<void(render::VSyncMode, render::VSyncMode)>();
        new ((this + 12)) std::function<void(render::VSyncMode, render::VSyncMode)>();
        new ((this + 18)) std::function<bool()>();
        new ((this + 24)) eastl::optional();
    }

    // 0x10060fa70
    Option<render::VSyncMode>::~Option() {
        ((this + 18))->~function();
        ((this + 12))->~function();
        ((this + 6))->~function();
    }

    // 0x10060fae0
    Option<render::VSyncMode>* Option<render::VSyncMode>::GetValueLabels() const {
        GetEnumValueNames<render::VSyncMode>((ReturnValue*)this);
        return this;
    }

    // 0x10060fb00
    void Option<render::VSyncMode>::SetRawValue(int arg1, graphics::RT7Core& rt7Core,
                                                graphics::EffectManager& effectManager) {
        SetValue(this, arg1, rt7Core, effectManager, false);
    }

    // 0x10060fcc0
    Option<EnumRemoveRoof>::Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
                                   math::Range<EnumRemoveRoof> range)
        : IOption() {
        *(Range<EnumRemoveRoof>**)((long)&this[3]._vptr + 4) = range;
        uint32_t uVar1 = (range).GetZ();
        *(uint32_t*)((long)&this[4]._vptr + 4) = uVar1;
        new ((this + 6)) std::function<void(EnumRemoveRoof, EnumRemoveRoof)>();
        new ((this + 12)) std::function<void(EnumRemoveRoof, EnumRemoveRoof)>();
        new ((this + 18)) std::function<bool()>();
        new ((this + 24)) eastl::optional();
    }

    // 0x10060fd70
    Option<EnumRemoveRoof>* Option<EnumRemoveRoof>::GetValueLabels() const {
        GetEnumValueNames<EnumRemoveRoof>((ReturnValue*)this);
        return this;
    }

    // 0x10060fd90
    void Option<EnumRemoveRoof>::SetRawValue(int arg1, graphics::RT7Core& rt7Core,
                                             graphics::EffectManager& effectManager) {
        SetValue(this, arg1, rt7Core, effectManager, false);
    }

    // 0x10060fe10
    Option<EnumRemoveRoof>::~Option() {
        ((this + 18))->~function();
        ((this + 12))->~function();
        ((this + 6))->~function();
    }

    // 0x10060ff50
    Option<LanguageID>::Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
                               math::Range<LanguageID> range)
        : IOption() {
        *(Range<LanguageID>**)((long)&this[3]._vptr + 4) = range;
        uint32_t uVar1 = (range).GetZ();
        *(uint32_t*)((long)&this[4]._vptr + 4) = uVar1;
        new ((this + 6)) std::function<void(LanguageID, LanguageID)>();
        new ((this + 12)) std::function<void(LanguageID, LanguageID)>();
        new ((this + 18)) std::function<bool()>();
        new ((this + 24)) eastl::optional();
    }

    // 0x100610000
    Option<LanguageID>* Option<LanguageID>::GetValueLabels() const {
        GetEnumValueNames<LanguageID>((ReturnValue*)this);
        return this;
    }

    // 0x100610020
    void Option<LanguageID>::SetRawValue(int arg1, graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager) {
        SetValue(this, arg1, rt7Core, effectManager, false);
    }

    // 0x1006100b0
    Option<LanguageID>::~Option() {
        ((this + 18))->~function();
        ((this + 12))->~function();
        ((this + 6))->~function();
    }

    // 0x100610180
    void Option<LanguageID>::SetValue(LanguageID languageID, graphics::RT7Core& rt7Core,
                                      graphics::EffectManager& effectManager, bool arg4) {
        LanguageID languageID_00;
        Logger* this_01;
        char* pcVar2;
        uint64_t in_register_00000081;

        CoordMapSquare* this_00 = (CoordMapSquare*)((long)&this[3]._vptr + 4);
        LanguageID local_34 = languageID;
        LanguageID local_3c = this_00->GetX();
        LanguageID local_38 = this_00->GetZ();
        local_34 = math::Clamp<LanguageID>(local_34, local_3c, local_38);
        if (((int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4) != 0) ||
            (local_34 != *(LanguageID*)&this[3]._vptr)) {
            if (IsSafeToSet() != '\0') {
                this_01 = logger::default_logger();
                pcVar2 = "";
                if (arg4) {
                    pcVar2 = "(FORCED)";
                }
                this_01->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                             "clientoptions/options/../Option.h",
                             123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s", this[2]._vptr,
                             (unsigned long)local_34, (unsigned long)*(unsigned int*)&this[3]._vptr, pcVar2);
                languageID_00 = *(LanguageID*)&this[3]._vptr;
                *(LanguageID*)&this[3]._vptr = local_34;
                ApplySetting(this, rt7Core, effectManager, languageID_00);
            }
        }
    }

    // 0x1006102a0
    void Option<LanguageID>::ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                          LanguageID languageID) {
        uint8_t bVar2;
        LanguageID LVar3;
        optional<EnumOptionToggle> local_48;

        bool cVar1 = ((this + 6))->operator_cast_to_bool();
        if (!cVar1) {
            bVar2 = ((this + 12))->operator_cast_to_bool();
            bVar2 = bVar2 ^ 1;
        } else {
            bVar2 = 0;
            if (cVar1) {
                bVar2 = 0;
                LVar3 = GetValue();
                std::function<void(LanguageID, LanguageID)>::operator()(
                    (function<void(LanguageID, LanguageID)>*)(this + 6), LVar3, languageID);
            }
        }
        OnSaveSetting(rt7Core, effectManager, (unsigned long)languageID);
        cVar1 = ((this + 12))->operator_cast_to_bool();
        if (cVar1) {
            LVar3 = GetValue();
            std::function<void(LanguageID, LanguageID)>::operator()(
                (function<void(LanguageID, LanguageID)>*)(this + 12), LVar3, languageID);
        }
        if (bVar2 == 0) {
            local_48 = eastl::optional();
            (*((this + 24))) = local_48;
        } else {
            (*((this + 24))) = languageID;
        }
    }

    // 0x100610750
    Option<unsigned char>::Option(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
                                  math::Range<unsigned char> range) {
        uint8_t local_22[2];

        local_22 = (uint16_t)range;
        new (this) IOption();
        *(uint8_t**)this = PTR_vtable_100ee85a8 + 16;
        *(Settings**)(this + 8) = settings;
        *(char**)(this + 16) = str;
        this[24] = (Option<unsigned char>)0;
        *(uint8_t(*)[2])(this + 25) = local_22;
        this[27] = (Option<unsigned char>)local_22->GetRot();
        new ((this + 32)) std::function<void(unsigned char, unsigned char)>();
        new ((this + 80)) std::function<void(unsigned char, unsigned char)>();
        new ((this + 128)) std::function<bool()>();
        new ((this + 176)) eastl::optional();
    }

    // 0x100610800
    bool Option<unsigned char>::IsModifiable(const graphics::RT7Core* rt7Core) const {
        bool cVar1 = ((this + 25))->GetRot();
        char cVar2 = ((this + 25))->GetShape();
        return cVar1 != cVar2;
    }

    // 0x100610830
    void Option<unsigned char>::CanSetRawValue(int arg1) const {
        CanSetValue(this, (unsigned char)arg1);
    }

    // 0x100610840
    uint8_t Option<unsigned char>::GetRawValue() const {
        return GetValue(this);
    }

    // 0x100610850
    void Option<unsigned char>::SetRawValue(int arg1, graphics::RT7Core& rt7Core,
                                            graphics::EffectManager& effectManager) {
        SetValue(this, (unsigned char)arg1, rt7Core, effectManager, false);
    }

    // 0x100610870
    uint64_t Option<unsigned char>::GetRawValueRange() const {
        uint64_t local_20;

        uint8_t bVar1 = ((this + 25))->GetShape();
        unsigned int local_18 = (unsigned int)bVar1;
        bVar1 = ((this + 25))->GetRot();
        unsigned int local_14 = (unsigned int)bVar1;
        local_20.pair<int, int, false>(local_18, local_14);
        return local_20;
    }

    // 0x1006108c0
    Option<unsigned char> Option<unsigned char>::DetermineBestSetting(const perf::PerfModuleReporter& arg1) const {
        return this[24];
    }

    // 0x1006108d0
    bool Option<unsigned char>::IsSafeToSet() {
        bool cVar1;
        uint64_t uVar3;

        if (((RenderDevice*)Instance())->GetReadyState() == 0) {
            cVar1 = ((this + 128))->operator_cast_to_bool();
            uVar3 = 1;
            if (cVar1) {
                uVar3 = std::function<bool()>::operator()((function<bool()>*)(this + 128));
            }
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x100610980
    uint8_t Option<unsigned char>::GetDefault() {
        return ((this + 25))->GetRot();
    }

    // 0x1006109d0
    Option<unsigned char>::~Option() {
        *(uint8_t**)this = PTR_vtable_100ee85a8 + 16;
        ((this + 128))->~function();
        ((this + 80))->~function();
        ((this + 32))->~function();
    }

    // 0x100610a80
    bool Option<unsigned char>::CanSetValue(unsigned char arg1) const {
        bool bVar2;

        uint8_t bVar1 = ((this + 25))->GetShape();
        if (arg1 < bVar1) {
            bVar2 = false;
        } else {
            bVar1 = ((this + 25))->GetRot();
            bVar2 = arg1 <= bVar1;
        }
        return bVar2;
    }

    // 0x100610ac0
    void Option<unsigned char>::SetValue(unsigned char arg1, graphics::RT7Core& rt7Core,
                                         graphics::EffectManager& effectManager, bool arg4) {
        Option<unsigned char> arg3;
        Logger* this_00;
        char* pcVar2;
        uint64_t in_register_00000081;
        unsigned char local_33;
        unsigned char local_32;
        Option<unsigned char> local_31;

        ((this + 25))->GetShape();
        ((this + 25))->GetRot();
        local_31 = (Option<unsigned char>)math::Clamp<unsigned char>(local_31, local_33, local_32);
        if (((int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4) != 0) || (local_31 != this[24])) {
            if ((**(void (**)(...))(*(long*)this + 128))(this) != '\0') {
                this_00 = logger::default_logger();
                pcVar2 = "";
                if (arg4) {
                    pcVar2 = "(FORCED)";
                }
                this_00->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                             "clientoptions/options/../Option.h",
                             123, "[OPTIONS] Changing setting \'%s\' to %d (from %d) %s", *(uint64_t*)(this + 16),
                             (unsigned long)(uint8_t)local_31, (unsigned long)(uint8_t)this[24], pcVar2);
                arg3 = this[24];
                this[24] = local_31;
                ApplySetting(this, rt7Core, effectManager, (unsigned char)arg3);
            }
        }
    }

    // 0x100610bb0
    void Option<unsigned char>::ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                             unsigned char arg3) {
        uint8_t bVar2;
        unsigned char uVar3;
        optional<bool> local_38;

        bool cVar1 = ((this + 32))->operator_cast_to_bool();
        if (!cVar1) {
            bVar2 = ((this + 80))->operator_cast_to_bool();
            bVar2 = bVar2 ^ 1;
        } else {
            bVar2 = 0;
            if (cVar1) {
                bVar2 = 0;
                uVar3 = GetValue(this);
                std::function<void(unsigned char, unsigned char)>::operator()(
                    (function<void(unsigned char, unsigned char)>*)(this + 32), uVar3, arg3);
            }
        }
        (**(void (**)(...))(*(long*)this + 120))(this, rt7Core, effectManager, arg3);
        cVar1 = ((this + 80))->operator_cast_to_bool();
        if (cVar1) {
            uVar3 = GetValue(this);
            std::function<void(unsigned char, unsigned char)>::operator()(
                (function<void(unsigned char, unsigned char)>*)(this + 80), uVar3, arg3);
        }
        if (bVar2 == 0) {
            local_38 = eastl::optional();
            (*((this + 176))) = local_38;
        } else {
            (*((this + 176))) = arg3;
        }
    }

    // 0x100610f40
    Option<graphics::GraphicsQuality>::~Option() {
        ((this + 18))->~function();
        ((this + 12))->~function();
        ((this + 6))->~function();
    }

    // 0x100610fc0
    Option<graphics::GraphicsQuality>* Option<graphics::GraphicsQuality>::GetValueLabels() const {
        GetEnumValueNames<graphics::GraphicsQuality>((ReturnValue*)this);
        return this;
    }

    // 0x100610fe0
    void Option<graphics::GraphicsQuality>::SetRawValue(int arg1, graphics::RT7Core& rt7Core,
                                                        graphics::EffectManager& effectManager) {
        SetValue(this, arg1, rt7Core, effectManager, false);
    }

    // 0x100611050
    Option<EnumParticleQualityLevel>::~Option() {
        ((this + 18))->~function();
        ((this + 12))->~function();
        ((this + 6))->~function();
    }

    // 0x1006110d0
    Option<EnumParticleQualityLevel>* Option<EnumParticleQualityLevel>::GetValueLabels() const {
        GetEnumValueNames<EnumParticleQualityLevel>((ReturnValue*)this);
        return this;
    }

    // 0x1006110f0
    void Option<EnumParticleQualityLevel>::SetRawValue(int arg1, graphics::RT7Core& rt7Core,
                                                       graphics::EffectManager& effectManager) {
        SetValue(this, arg1, rt7Core, effectManager, false);
    }

    // 0x100611180
    Option<unsigned int>::~Option() {
        *(uint8_t**)this = PTR_vtable_100ee85b8 + 16;
        ((this + 144))->~function();
        ((this + 96))->~function();
        ((this + 48))->~function();
    }

    // 0x100611200
    void Option<unsigned int>::CanSetRawValue(int arg1) const {
        CanSetValue(this, arg1);
    }

    // 0x100611210
    void Option<unsigned int>::SetRawValue(int arg1, graphics::RT7Core& rt7Core,
                                           graphics::EffectManager& effectManager) {
        SetValue(this, arg1, rt7Core, effectManager, false);
    }

    // 0x100611270
    bool Option<unsigned int>::CanSetValue(unsigned int arg1) const {
        bool bVar2;

        unsigned int uVar1 = ((this + 28))->GetX();
        if (arg1 < uVar1) {
            bVar2 = false;
        } else {
            uVar1 = ((this + 28))->GetZ();
            bVar2 = arg1 <= uVar1;
        }
        return bVar2;
    }

    // 0x100611390
    Option<graphics::SSAOPass::Mode>::~Option() {
        ((this + 18))->~function();
        ((this + 12))->~function();
        ((this + 6))->~function();
    }

    // 0x100611410
    Option<graphics::SSAOPass::Mode>* Option<graphics::SSAOPass::Mode>::GetValueLabels() const {
        GetEnumValueNames<graphics::SSAOPass::Mode>((ReturnValue*)this);
        return this;
    }

    // 0x100611430
    void Option<graphics::SSAOPass::Mode>::SetRawValue(int arg1, graphics::RT7Core& rt7Core,
                                                       graphics::EffectManager& effectManager) {
        SetValue();
    }

    // 0x100611500
    Option<EnumBloom>::~Option() {
        ((this + 18))->~function();
        ((this + 12))->~function();
        ((this + 6))->~function();
    }

    // 0x100611580
    Option<EnumBloom>* Option<EnumBloom>::GetValueLabels() const {
        GetEnumValueNames<EnumBloom>((ReturnValue*)this);
        return this;
    }

    // 0x1006115a0
    void Option<EnumBloom>::SetRawValue(int arg1, graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager) {
        SetValue(this, arg1, rt7Core, effectManager, false);
    }

    // 0x100611630
    Option<EnumAntialiasingMode>::~Option() {
        ((this + 18))->~function();
        ((this + 12))->~function();
        ((this + 6))->~function();
    }

    // 0x1006116b0
    Option<EnumAntialiasingMode>* Option<EnumAntialiasingMode>::GetValueLabels() const {
        GetEnumValueNames<EnumAntialiasingMode>((ReturnValue*)this);
        return this;
    }

    // 0x1006116d0
    void Option<EnumAntialiasingMode>::SetRawValue(int arg1, graphics::RT7Core& rt7Core,
                                                   graphics::EffectManager& effectManager) {
        SetValue(this, arg1, rt7Core, effectManager, false);
    }

    // 0x100611760
    Option<EnumAnisotropicFiltering>::~Option() {
        ((this + 18))->~function();
        ((this + 12))->~function();
        ((this + 6))->~function();
    }

    // 0x1006117e0
    Option<EnumAnisotropicFiltering>* Option<EnumAnisotropicFiltering>::GetValueLabels() const {
        GetEnumValueNames<EnumAnisotropicFiltering>((ReturnValue*)this);
        return this;
    }

    // 0x100611800
    void Option<EnumAnisotropicFiltering>::SetRawValue(int arg1, graphics::RT7Core& rt7Core,
                                                       graphics::EffectManager& effectManager) {
        SetValue(this, arg1, rt7Core, effectManager, false);
    }

    // 0x100612e20
    void Option<EnumAntialiasingMode>::ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                                    EnumAntialiasingMode enumAntialiasingMode) {
        uint8_t bVar2;
        EnumAntialiasingMode EVar3;
        optional<EnumOptionToggle> local_48;

        bool cVar1 = ((this + 6))->operator_cast_to_bool();
        if (!cVar1) {
            bVar2 = ((this + 12))->operator_cast_to_bool();
            bVar2 = bVar2 ^ 1;
        } else {
            bVar2 = 0;
            if (cVar1) {
                bVar2 = 0;
                EVar3 = GetValue();
                std::function<void(EnumAntialiasingMode, EnumAntialiasingMode)>::operator()(
                    (function<void(EnumAntialiasingMode, EnumAntialiasingMode)>*)(this + 6), EVar3,
                    enumAntialiasingMode);
            }
        }
        ApplySettingImpl(rt7Core, effectManager, (unsigned long)enumAntialiasingMode);
        cVar1 = ((this + 12))->operator_cast_to_bool();
        if (cVar1) {
            EVar3 = GetValue();
            std::function<void(EnumAntialiasingMode, EnumAntialiasingMode)>::operator()(
                (function<void(EnumAntialiasingMode, EnumAntialiasingMode)>*)(this + 12), EVar3, enumAntialiasingMode);
        }
        if (bVar2 == 0) {
            local_48 = eastl::optional();
            (*((this + 24))) = local_48;
        } else {
            (*((this + 24))) = enumAntialiasingMode;
        }
    }

    // 0x100613070
    void Option<graphics::GraphicsQuality>::ApplySetting(graphics::RT7Core& rt7Core,
                                                         graphics::EffectManager& effectManager,
                                                         graphics::GraphicsQuality graphicsQuality) {
        uint8_t bVar2;
        GraphicsQuality GVar3;
        optional<EnumOptionToggle> local_48;

        bool cVar1 = ((this + 6))->operator_cast_to_bool();
        if (!cVar1) {
            bVar2 = ((this + 12))->operator_cast_to_bool();
            bVar2 = bVar2 ^ 1;
        } else {
            bVar2 = 0;
            if (cVar1) {
                bVar2 = 0;
                GVar3 = GetValue();
                std::function<void(graphics::GraphicsQuality, graphics::GraphicsQuality)>::operator()(
                    (function<void(graphics::GraphicsQuality, graphics::GraphicsQuality)>*)(this + 6), GVar3,
                    graphicsQuality);
            }
        }
        ApplySettingImpl(rt7Core, effectManager, (unsigned long)graphicsQuality);
        cVar1 = ((this + 12))->operator_cast_to_bool();
        if (cVar1) {
            GVar3 = GetValue();
            std::function<void(graphics::GraphicsQuality, graphics::GraphicsQuality)>::operator()(
                (function<void(graphics::GraphicsQuality, graphics::GraphicsQuality)>*)(this + 12), GVar3,
                graphicsQuality);
        }
        if (bVar2 == 0) {
            local_48 = eastl::optional();
            (*((this + 24))) = local_48;
        } else {
            (*((this + 24))) = graphicsQuality;
        }
    }

    // 0x1006132c0
    void Option<EnumBloom>::ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                         EnumBloom enumBloom) {
        uint8_t bVar2;
        EnumBloom EVar3;
        optional<EnumOptionToggle> local_48;

        bool cVar1 = ((this + 6))->operator_cast_to_bool();
        if (!cVar1) {
            bVar2 = ((this + 12))->operator_cast_to_bool();
            bVar2 = bVar2 ^ 1;
        } else {
            bVar2 = 0;
            if (cVar1) {
                bVar2 = 0;
                EVar3 = GetValue();
                std::function<void(EnumBloom, EnumBloom)>::operator()((function<void(EnumBloom, EnumBloom)>*)(this + 6),
                                                                      EVar3, enumBloom);
            }
        }
        ApplySettingImpl(rt7Core, effectManager, (unsigned long)enumBloom);
        cVar1 = ((this + 12))->operator_cast_to_bool();
        if (cVar1) {
            EVar3 = GetValue();
            std::function<void(EnumBloom, EnumBloom)>::operator()((function<void(EnumBloom, EnumBloom)>*)(this + 12),
                                                                  EVar3, enumBloom);
        }
        if (bVar2 == 0) {
            local_48 = eastl::optional();
            (*((this + 24))) = local_48;
        } else {
            (*((this + 24))) = enumBloom;
        }
    }

    // 0x100613540
    void Option<EnumBrightness>::ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                              EnumBrightness enumBrightness) {
        uint8_t bVar2;
        EnumBrightness EVar3;
        optional<EnumOptionToggle> local_48;

        bool cVar1 = ((this + 6))->operator_cast_to_bool();
        if (!cVar1) {
            bVar2 = ((this + 12))->operator_cast_to_bool();
            bVar2 = bVar2 ^ 1;
        } else {
            bVar2 = 0;
            if (cVar1) {
                bVar2 = 0;
                EVar3 = GetValue(this);
                std::function<void(EnumBrightness, EnumBrightness)>::operator()(
                    (function<void(EnumBrightness, EnumBrightness)>*)(this + 6), EVar3, enumBrightness);
            }
        }
        ApplySettingImpl(rt7Core, effectManager, (unsigned long)enumBrightness);
        cVar1 = ((this + 12))->operator_cast_to_bool();
        if (cVar1) {
            EVar3 = GetValue(this);
            std::function<void(EnumBrightness, EnumBrightness)>::operator()(
                (function<void(EnumBrightness, EnumBrightness)>*)(this + 12), EVar3, enumBrightness);
        }
        if (bVar2 == 0) {
            local_48 = eastl::optional();
            (*((this + 24))) = local_48;
        } else {
            (*((this + 24))) = enumBrightness;
        }
    }

    // 0x100613880
    void Option<EnumRemoveRoof>::ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                              EnumRemoveRoof enumRemoveRoof) {
        uint8_t bVar2;
        EnumRemoveRoof EVar3;
        optional<EnumOptionToggle> local_48;

        bool cVar1 = ((this + 6))->operator_cast_to_bool();
        if (!cVar1) {
            bVar2 = ((this + 12))->operator_cast_to_bool();
            bVar2 = bVar2 ^ 1;
        } else {
            bVar2 = 0;
            if (cVar1) {
                bVar2 = 0;
                EVar3 = GetValue();
                std::function<void(EnumRemoveRoof, EnumRemoveRoof)>::operator()(
                    (function<void(EnumRemoveRoof, EnumRemoveRoof)>*)(this + 6), EVar3, enumRemoveRoof);
            }
        }
        ApplySettingImpl(rt7Core, effectManager, (unsigned long)enumRemoveRoof);
        cVar1 = ((this + 12))->operator_cast_to_bool();
        if (cVar1) {
            EVar3 = GetValue();
            std::function<void(EnumRemoveRoof, EnumRemoveRoof)>::operator()(
                (function<void(EnumRemoveRoof, EnumRemoveRoof)>*)(this + 12), EVar3, enumRemoveRoof);
        }
        if (bVar2 == 0) {
            local_48 = eastl::optional();
            (*((this + 24))) = local_48;
        } else {
            (*((this + 24))) = enumRemoveRoof;
        }
    }

    // 0x100613c50
    void Option<graphics::SSAOPass::Mode>::ApplySetting(graphics::RT7Core& rt7Core,
                                                        graphics::EffectManager& effectManager,
                                                        graphics::SSAOPass::Mode arg3) {
        uint8_t bVar2;
        uint32_t uVar3;
        optional<EnumOptionToggle> local_48;

        bool cVar1 = ((this + 6))->operator_cast_to_bool();
        if (!cVar1) {
            bVar2 = ((this + 12))->operator_cast_to_bool();
            bVar2 = bVar2 ^ 1;
        } else {
            bVar2 = 0;
            if (cVar1) {
                bVar2 = 0;
                uVar3 = GetValue();
                std::function<void(graphics::SSAOPass::Mode, graphics::SSAOPass::Mode)>::operator()(
                    (function<void(graphics::SSAOPass::Mode, graphics::SSAOPass::Mode)>*)(this + 6), uVar3, param_4);
            }
        }
        ApplySettingImpl(rt7Core, effectManager, (unsigned long)param_4);
        cVar1 = ((this + 12))->operator_cast_to_bool();
        if (cVar1) {
            uVar3 = GetValue();
            std::function<void(graphics::SSAOPass::Mode, graphics::SSAOPass::Mode)>::operator()(
                (function<void(graphics::SSAOPass::Mode, graphics::SSAOPass::Mode)>*)(this + 12), uVar3, param_4);
        }
        if (bVar2 == 0) {
            local_48 = eastl::optional();
            (*((this + 24))) = local_48;
        } else {
            (*((this + 24))) = param_4;
        }
    }

    // 0x100613ed0
    void Option<render::VSyncMode>::ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                                 render::VSyncMode vSyncMode) {
        uint8_t bVar2;
        VSyncMode VVar3;
        optional<EnumOptionToggle> local_48;

        bool cVar1 = ((this + 6))->operator_cast_to_bool();
        if (!cVar1) {
            bVar2 = ((this + 12))->operator_cast_to_bool();
            bVar2 = bVar2 ^ 1;
        } else {
            bVar2 = 0;
            if (cVar1) {
                bVar2 = 0;
                VVar3 = GetValue();
                std::function<void(render::VSyncMode, render::VSyncMode)>::operator()(
                    (function<void(render::VSyncMode, render::VSyncMode)>*)(this + 6), VVar3, vSyncMode);
            }
        }
        ApplySettingImpl(rt7Core, effectManager, (unsigned long)vSyncMode);
        cVar1 = ((this + 12))->operator_cast_to_bool();
        if (cVar1) {
            VVar3 = GetValue();
            std::function<void(render::VSyncMode, render::VSyncMode)>::operator()(
                (function<void(render::VSyncMode, render::VSyncMode)>*)(this + 12), VVar3, vSyncMode);
        }
        if (bVar2 == 0) {
            local_48 = eastl::optional();
            (*((this + 24))) = local_48;
        } else {
            (*((this + 24))) = vSyncMode;
        }
    }

    // 0x1006141a0
    void Option<EnumAnisotropicFiltering>::ApplySetting(graphics::RT7Core& rt7Core,
                                                        graphics::EffectManager& effectManager,
                                                        EnumAnisotropicFiltering enumAnisotropicFiltering) {
        uint8_t bVar2;
        EnumAnisotropicFiltering EVar3;
        optional<EnumOptionToggle> local_48;

        bool cVar1 = ((this + 6))->operator_cast_to_bool();
        if (!cVar1) {
            bVar2 = ((this + 12))->operator_cast_to_bool();
            bVar2 = bVar2 ^ 1;
        } else {
            bVar2 = 0;
            if (cVar1) {
                bVar2 = 0;
                EVar3 = GetValue();
                std::function<void(EnumAnisotropicFiltering, EnumAnisotropicFiltering)>::operator()(
                    (function<void(EnumAnisotropicFiltering, EnumAnisotropicFiltering)>*)(this + 6), EVar3,
                    enumAnisotropicFiltering);
            }
        }
        ApplySettingImpl(rt7Core, effectManager, (unsigned long)enumAnisotropicFiltering);
        cVar1 = ((this + 12))->operator_cast_to_bool();
        if (cVar1) {
            EVar3 = GetValue();
            std::function<void(EnumAnisotropicFiltering, EnumAnisotropicFiltering)>::operator()(
                (function<void(EnumAnisotropicFiltering, EnumAnisotropicFiltering)>*)(this + 12), EVar3,
                enumAnisotropicFiltering);
        }
        if (bVar2 == 0) {
            local_48 = eastl::optional();
            (*((this + 24))) = local_48;
        } else {
            (*((this + 24))) = enumAnisotropicFiltering;
        }
    }

    // 0x1006144f0
    void Option<unsigned int>::ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                            unsigned int arg3) {
        uint8_t bVar2;
        unsigned int uVar3;
        optional<EnumOptionToggle> local_48;

        bool cVar1 = ((this + 48))->operator_cast_to_bool();
        if (!cVar1) {
            bVar2 = ((this + 96))->operator_cast_to_bool();
            bVar2 = bVar2 ^ 1;
        } else {
            bVar2 = 0;
            if (cVar1) {
                bVar2 = 0;
                uVar3 = GetValue();
                std::function<void(unsigned int, unsigned int)>::operator()(
                    (function<void(unsigned int, unsigned int)>*)(this + 48), uVar3, arg3);
            }
        }
        (**(void (**)(...))(*(long*)this + 120))(this, rt7Core, effectManager, arg3);
        cVar1 = ((this + 96))->operator_cast_to_bool();
        if (cVar1) {
            uVar3 = GetValue();
            std::function<void(unsigned int, unsigned int)>::operator()(
                (function<void(unsigned int, unsigned int)>*)(this + 96), uVar3, arg3);
        }
        if (bVar2 == 0) {
            local_48 = eastl::optional();
            (*((this + 192))) = local_48;
        } else {
            (*((this + 192))) = arg3;
        }
    }

    // 0x100614750
    void Option<EnumAutoSetup>::ApplySetting(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                             EnumAutoSetup enumAutoSetup) {
        uint8_t bVar2;
        EnumAutoSetup EVar3;
        optional<EnumOptionToggle> local_48;

        bool cVar1 = ((this + 6))->operator_cast_to_bool();
        if (!cVar1) {
            bVar2 = ((this + 12))->operator_cast_to_bool();
            bVar2 = bVar2 ^ 1;
        } else {
            bVar2 = 0;
            if (cVar1) {
                bVar2 = 0;
                EVar3 = GetValue();
                std::function<void(EnumAutoSetup, EnumAutoSetup)>::operator()(
                    (function<void(EnumAutoSetup, EnumAutoSetup)>*)(this + 6), EVar3, enumAutoSetup);
            }
        }
        ApplySettingImpl(rt7Core, effectManager, (unsigned long)enumAutoSetup);
        cVar1 = ((this + 12))->operator_cast_to_bool();
        if (cVar1) {
            EVar3 = GetValue();
            std::function<void(EnumAutoSetup, EnumAutoSetup)>::operator()(
                (function<void(EnumAutoSetup, EnumAutoSetup)>*)(this + 12), EVar3, enumAutoSetup);
        }
        if (bVar2 == 0) {
            local_48 = eastl::optional();
            (*((this + 24))) = local_48;
        } else {
            (*((this + 24))) = enumAutoSetup;
        }
    }

    // 0x100614a20
    void Option<EnumParticleQualityLevel>::ApplySetting(graphics::RT7Core& rt7Core,
                                                        graphics::EffectManager& effectManager,
                                                        EnumParticleQualityLevel enumParticleQualityLevel) {
        uint8_t bVar2;
        EnumParticleQualityLevel EVar3;
        optional<EnumOptionToggle> local_48;

        bool cVar1 = ((this + 6))->operator_cast_to_bool();
        if (!cVar1) {
            bVar2 = ((this + 12))->operator_cast_to_bool();
            bVar2 = bVar2 ^ 1;
        } else {
            bVar2 = 0;
            if (cVar1) {
                bVar2 = 0;
                EVar3 = GetValue();
                std::function<void(EnumParticleQualityLevel, EnumParticleQualityLevel)>::operator()(
                    (function<void(EnumParticleQualityLevel, EnumParticleQualityLevel)>*)(this + 6), EVar3,
                    enumParticleQualityLevel);
            }
        }
        ApplySettingImpl(rt7Core, effectManager, (unsigned long)enumParticleQualityLevel);
        cVar1 = ((this + 12))->operator_cast_to_bool();
        if (cVar1) {
            EVar3 = GetValue();
            std::function<void(EnumParticleQualityLevel, EnumParticleQualityLevel)>::operator()(
                (function<void(EnumParticleQualityLevel, EnumParticleQualityLevel)>*)(this + 12), EVar3,
                enumParticleQualityLevel);
        }
        if (bVar2 == 0) {
            local_48 = eastl::optional();
            (*((this + 24))) = local_48;
        } else {
            (*((this + 24))) = enumParticleQualityLevel;
        }
    }

} // namespace jag::game::option

namespace jag::oldscape::option {
    template <
        typename...> // 4 instantiations, e.g. <hal::Haptics::ImpactStrength>, <ChatTimestampMode>, <ClientWindowMode>
    class OptionEnumValueSerialiser {
    public:
        void StringToValue(const eastl::fixed_string<char, 256>& str);
        auto ValueToString(ClientWindowMode clientWindowMode);
        auto ValueToString(ScaledUIQuality scaledUIQuality);
        auto ValueToString(hal::Haptics::ImpactStrength impactStrength);
        auto ValueToString(ChatTimestampMode chatTimestampMode);
    };

    // 0x100048020
    void OptionEnumValueSerialiser<ClientWindowMode>::StringToValue(const eastl::fixed_string<char, 256>& str) {
        ClientWindowMode local_10;

        FromString<eastl::fixed_string<char, 64>, int>(str, (int*)&local_10, 10);
        bool local_9 = IsValidEnumValue<ClientWindowMode>((type*)(unsigned long)local_10);
        ClientWindowMode local_14 = local_10;
        std::make_tuple<bool const&, ClientWindowMode>(local_9, local_14);
    }

    // 0x100048270
    auto OptionEnumValueSerialiser<ClientWindowMode>::ValueToString(ClientWindowMode clientWindowMode) {
        auto result;
        ToText<256, true>(&result, clientWindowMode, 10);
        return result;
    }

} // namespace jag::oldscape::option

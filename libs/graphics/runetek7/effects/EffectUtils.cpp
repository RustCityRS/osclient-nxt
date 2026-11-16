// libs/graphics/runetek7/effects/EffectUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class EffectStateSaveRestore {
    public:
        EffectStateSaveRestore(EffectManager& effectManager,
                               const eastl::fixed_map<EffectType, bool, 121ul>& fixed_map);
        ~EffectStateSaveRestore();

    private:
        EffectManager* field_0;
        uint8_t _unknown_8[8];
    };

    // 0x10092c6b0
    void EnableStandardEffects(RT7Core& rt7Core) {
        auto effectManager = rt7Core.GetEffectManager();
        effectManager->EnableEffect(7, true);
        effectManager->EnableEffect(20, true);
        effectManager->EnableEffect(21, true);
        effectManager->EnableEffect(22, true);
        effectManager->EnableEffect(23, true);
        effectManager->EnableEffect(25, true);
        effectManager->EnableEffect(59, true);
        effectManager->EnableEffect(27, true);
        effectManager->EnableEffect(64, true);
        effectManager->EnableEffect(29, true);
        effectManager->EnableEffect(38, true);
        effectManager->EnableEffect(30, true);
        effectManager->EnableEffect(33, true);
        effectManager->EnableEffect(36, true);
        effectManager->EnableEffect(35, true);
        effectManager->EnableEffect(37, true);
        effectManager->EnableEffect(50, true);
        effectManager->EnableEffect(51, true);
        effectManager->EnableEffect(52, true);
        effectManager->EnableEffect(53, true);
        effectManager->EnableEffect(57, true);
        effectManager->EnableEffect(60, true);
        effectManager->EnableEffect(24, true);
        effectManager->EnableEffect(48, true);
        effectManager->EnableEffect(49, true);
        effectManager->EnableEffect(26, true);
        effectManager->EnableEffect(55, true);
        effectManager->EnableEffect(56, true);
        effectManager->EnableEffect(61, true);
        effectManager->EnableEffect(63, true);
        effectManager->EnableEffect(67, true);
        effectManager->EnableEffect(68, true);
        effectManager->EnableEffect(70, true);
        effectManager->EnableEffect(72, true);
        effectManager->EnableEffect(73, true);
        effectManager->EnableEffect(74, true);
        effectManager->EnableEffect(75, true);
        effectManager->EnableEffect(76, true);
        effectManager->EnableEffect(78, true);
        effectManager->EnableEffect(77, true);
        effectManager->EnableEffect(79, true);
        effectManager->EnableEffect(80, true);
        effectManager->EnableEffect(81, true);
        effectManager->EnableEffect(82, true);
        effectManager->EnableEffect(84, true);
        effectManager->EnableEffect(85, true);
        effectManager->EnableEffect(86, true);
        effectManager->EnableEffect(87, true);
        effectManager->EnableEffect(88, true);
        effectManager->EnableEffect(94, true);
        if (((NXTPixScreen*)effectManager->Instance())->GetUIHeight() != 5) {
            effectManager->EnableEffect(95, true);
        }
        effectManager->EnableEffect(98, true);
        effectManager->EnableEffect(99, true);
        effectManager->EnableEffect(101, true);
        effectManager->EnableEffect(102, true);
        effectManager->EnableEffect(106, true);
        effectManager->EnableEffect(54, true);
        effectManager->EnableEffect(45, true);
        effectManager->EnableEffect(47, true);
        effectManager->EnableEffect(114, true);
        effectManager->EnableEffect(107, true);
        effectManager->EnableEffect(108, true);
        effectManager->EnableEffect(103, true);
        effectManager->EnableEffect(36, false);
        effectManager->EnableEffect(19, false);
    }

    // 0x10092cb70
    void SetEffectsQuality(RT7Core& rt7Core, GraphicsQuality graphicsQuality) {
        PostProcessController* pPVar2;
        long lVar3;

        if (((RenderContext*)rt7Core.GetRenderContext())->IsMinCoreProfile() != '\0') {
            pPVar2 = rt7Core.GetPostProcessController();
            lVar3 = pPVar2->GetCurrentConfig();
            *(uint32_t*)(lVar3 + 532) = 0;
            pPVar2 = rt7Core.GetPostProcessController();
            lVar3 = pPVar2->GetCurrentConfig();
            *(uint32_t*)(lVar3 + 472) = 0;
        }
        rt7Core.GetEffectManager()->SetEffectsQuality(graphicsQuality);
    }

    // 0x10092cbf0
    EffectStateSaveRestore::EffectStateSaveRestore(EffectManager& effectManager,
                                                   const eastl::fixed_map<EffectType, bool, 121ul>& fixed_map)
        : field_0(effectManager) {
        uint8_t* puVar1;
        uint8_t uVar3;
        EffectType* effectType;

        uint64_t local_40 = fixed_map.begin();
        uint64_t local_38 = fixed_map.end();
        while (true) {
            if (local_40 != local_38 == '\0')
                break;
            effectType = (EffectType*)*local_40;
            uVar3 = effectManager.IsEnabled((unsigned int)(uint8_t)(char)*effectType);
            puVar1 = &field_8[*effectType];
            *puVar1 = uVar3;
            effectManager.EnableEffect((unsigned int)(uint8_t)(char)*effectType, *(bool*)((long)effectType + 1));
            ++local_40;
        }
    }

    // 0x10092cd90
    EffectStateSaveRestore::~EffectStateSaveRestore() {
        uint8_t* pbVar2;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_30;

        auto local_38 = field_8.rbegin();
        local_30.end();
        while (true) {
            if (local_38 != local_30 == '\0')
                break;
            pbVar2 = (uint8_t*)*local_38;
            field_0->EnableEffect((unsigned int)*pbVar2, (bool)pbVar2[1]);
            ++local_38;
        }
        field_8.~fixed_map();
    }

} // namespace jag::graphics

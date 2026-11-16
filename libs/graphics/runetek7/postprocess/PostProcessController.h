// libs/graphics/runetek7/postprocess/PostProcessController.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class PostProcessController {
    public:
        class Config;
        void SetRT7Core(RT7Core* arg1);
        void SetPostProcessManager(postprocess::PostProcessManager* postProcessManager);
        void PushConfig(const Config& config);
        void Update(float arg1);
        void ApplyConfig(const Config& config);
        void PopConfig();
        void RegisterTweaks(tweak::ContainerGroup& containerGroup);
        void GetCurrentConfig();
        PostProcessController();
        ~PostProcessController();
        static int32_t m_Operators__[20];                   // initialised in its definition
        static int32_t m_fxaaQuality__[16];                 // initialised in its definition
        static int32_t m_kawaseKernelSize__[24];            // initialised in its definition
        static int32_t m_dualFilteringBlurKernelSize__[20]; // initialised in its definition
        static int32_t m_bloomQuality__[15];                // initialised in its definition
        static StringEnum m_Operators;                      // = StringEnum((StringEnumEntry *)&m_Operators__, 5)
        static StringEnum m_fxaaQuality;                    // = StringEnum((StringEnumEntry *)&m_fxaaQuality__, 4)
        static StringEnum m_kawaseKernelSize;               // = StringEnum((StringEnumEntry *)&m_kawaseKernelSize__, 6)
        static StringEnum
            m_dualFilteringBlurKernelSize; // = StringEnum((StringEnumEntry *) &m_dualFilteringBlurKernelSize__, 5)
        static StringEnum m_bloomQuality;  // = StringEnum((StringEnumEntry *)&m_bloomQuality__, 3)

    private:
        PostProcessManager* field_0;
        uint64_t field_8;
        uint8_t _unknown_16[8];
    };

    class PostProcessController::Config {
    public:
        Config();
        ~Config();
        Config* operator=(const Config& config);
        Config(const Config& config);
        Config(Config&& config);

    private:
        uint8_t field_0;
        uint8_t _unknown_1[527];
        uint8_t field_528;
        uint8_t field_529[3];
        uint32_t field_532;
        uint8_t field_536;
        uint8_t field_537[7];
        uint64_t field_544;
        uint16_t field_552;
        uint8_t field_554[6];
        uint64_t field_560;
        uint64_t field_568;
        uint64_t field_576;
        uint64_t field_584;
        uint64_t field_592;
        uint64_t field_600;
        uint64_t field_608;
        uint64_t field_616;
    };

    // 0x1001d4ac0
    PostProcessController::Config::Config() : field_0(1), field_528(0), field_532(1), field_536(0) {
        new ((OutlineAndShadowEffectConfig*)((long)&field_537 + 3)) postprocess::OutlineAndShadowEffectConfig();
        field_552 = 0;
        new ((DepthOfFieldEffectConfig*)((long)&field_554 + 2)) postprocess::DepthOfFieldEffectConfig();
    }

    // 0x1001d52e0
    PostProcessController::Config::~Config() {
        field_208.~ColourGradingBloomEffectConfig();
    }

    // 0x1001d9ab0
    Config* PostProcessController::Config::operator=(const PostProcessController::Config& config) {
        _memcpy(this, config, 201);
        field_208 = config.field_208;
        uint32_t uVar6 = config.field_529;
        uint32_t uVar7 = config.field_532;
        uint8_t uVar8 = config.field_536;
        uint64_t uVar9 = config.field_537;
        uint64_t uVar1 = config.field_544;
        uint16_t uVar10 = config.field_552;
        uint64_t uVar11 = config.field_554;
        uint64_t uVar2 = config.field_560;
        uint64_t uVar3 = config.field_568;
        uint64_t uVar4 = config.field_576;
        uint64_t uVar5 = config.field_584;
        field_528 = config.field_528;
        field_529 = uVar6;
        field_532 = uVar7;
        field_536 = uVar8;
        field_537 = uVar9;
        field_544 = uVar1;
        field_552 = uVar10;
        field_554 = uVar11;
        field_560 = uVar2;
        field_568 = uVar3;
        field_576 = uVar4;
        field_584 = uVar5;
        uVar1 = config.field_600;
        field_592 = config.field_592;
        field_600 = uVar1;
        uVar1 = config.field_616;
        field_608 = config.field_608;
        field_616 = uVar1;
        return this;
    }

    // 0x1007e7f70
    PostProcessController::Config::Config(const PostProcessController::Config& config) {
        _memcpy(this, config, 201);
        new (&field_208) postprocess::ColourGradingBloomEffectConfig(config.field_208);
        uint64_t uVar1 = config.field_616;
        field_608 = config.field_608;
        field_616 = uVar1;
        uVar1 = config.field_600;
        field_592 = config.field_592;
        field_600 = uVar1;
        uint8_t uVar7 = config.field_528;
        uint32_t uVar8 = config.field_529;
        uint32_t uVar9 = config.field_532;
        uint8_t uVar10 = config.field_536;
        uint64_t uVar11 = config.field_537;
        uVar1 = config.field_544;
        uint16_t uVar5 = config.field_552;
        uint64_t uVar6 = config.field_554;
        uint64_t uVar2 = config.field_560;
        uint64_t uVar3 = config.field_568;
        uint64_t uVar4 = config.field_584;
        field_576 = config.field_576;
        field_584 = uVar4;
        field_560 = uVar2;
        field_568 = uVar3;
        field_544 = uVar1;
        field_552 = uVar5;
        field_554 = uVar6;
        field_528 = uVar7;
        field_529 = uVar8;
        field_532 = uVar9;
        field_536 = uVar10;
        field_537 = uVar11;
    }

    // 0x1007fe060
    PostProcessController::Config::Config(PostProcessController::Config&& config) {
        _memcpy(this, config, 201);
        new (&field_208) postprocess::ColourGradingBloomEffectConfig(config.field_208);
        uint64_t uVar1 = config.field_616;
        field_608 = config.field_608;
        field_616 = uVar1;
        uVar1 = config.field_600;
        field_592 = config.field_592;
        field_600 = uVar1;
        uint8_t uVar7 = config.field_528;
        uint32_t uVar8 = config.field_529;
        uint32_t uVar9 = config.field_532;
        uint8_t uVar10 = config.field_536;
        uint64_t uVar11 = config.field_537;
        uVar1 = config.field_544;
        uint16_t uVar5 = config.field_552;
        uint64_t uVar6 = config.field_554;
        uint64_t uVar2 = config.field_560;
        uint64_t uVar3 = config.field_568;
        uint64_t uVar4 = config.field_584;
        field_576 = config.field_576;
        field_584 = uVar4;
        field_560 = uVar2;
        field_568 = uVar3;
        field_544 = uVar1;
        field_552 = uVar5;
        field_554 = uVar6;
        field_528 = uVar7;
        field_529 = uVar8;
        field_532 = uVar9;
        field_536 = uVar10;
        field_537 = uVar11;
    }

    // 0x10092c6a0
    void PostProcessController::GetCurrentConfig() {
        eastl::stack<PostProcessController::Config, eastl::fixed_vector<PostProcessController::Config, 2ul>>::top();
    }

    // 0x10098dfe0
    PostProcessController::PostProcessController() : field_0(nullptr), field_8(0) {}

    // 0x100991240
    PostProcessController::~PostProcessController() {
        field_16.~fixed_stack();
    }

} // namespace jag::graphics

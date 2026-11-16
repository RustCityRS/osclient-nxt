// libs/graphics/runetek7/postprocess/PostProcessController.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class PostProcessController {
    public:
        class Config;
        SetRT7Core(RT7Core*);
        void SetPostProcessManager(postprocess::PostProcessManager*);
        void PushConfig(Config const&);
        void Update(float);
        void ApplyConfig(Config const&);
        void PopConfig();
        void RegisterTweaks(tweak::ContainerGroup&);
        void GetCurrentConfig();
        PostProcessController();
        ~PostProcessController();
        static /* 80 bytes */ m_Operators__;                   // initialised in its definition
        static /* 64 bytes */ m_fxaaQuality__;                 // initialised in its definition
        static /* 96 bytes */ m_kawaseKernelSize__;            // initialised in its definition
        static /* 80 bytes */ m_dualFilteringBlurKernelSize__; // initialised in its definition
        static /* 60 bytes */ m_bloomQuality__;                // initialised in its definition
        static StringEnum /* 16 bytes */ m_Operators;          // = StringEnum((StringEnumEntry *)&m_Operators__, 5)
        static StringEnum /* 16 bytes */ m_fxaaQuality;        // = StringEnum((StringEnumEntry *)&m_fxaaQuality__, 4)
        static StringEnum                                      /* 16 bytes */
            m_kawaseKernelSize;            // = StringEnum((StringEnumEntry *)&m_kawaseKernelSize__, 6)
        static StringEnum                  /* 16 bytes */
            m_dualFilteringBlurKernelSize; // = StringEnum((StringEnumEntry *) &m_dualFilteringBlurKernelSize__, 5)
        static StringEnum /* 16 bytes */ m_bloomQuality; // = StringEnum((StringEnumEntry *)&m_bloomQuality__, 3)

        // data members, from how the methods use this: 640 bytes
        PostProcessManager* field_0; // offset 0
        undefined8 field_8;          // offset 8
        Config field_16;             // offset 16
    };

    class PostProcessController::Config {
    public:
        Config();
        ~Config();
        Config* operator=(Config const&);
        Config(Config const&);
        Config(Config&&);

        // data members, from how the methods use this: 624 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[527];
        undefined1 field_528; // offset 528
        undefined3 field_529; // offset 529
        undefined4 field_532; // offset 532
        undefined1 field_536; // offset 536
        undefined7 field_537; // offset 537
        undefined8 field_544; // offset 544
        undefined2 field_552; // offset 552
        undefined6 field_554; // offset 554
        undefined8 field_560; // offset 560
        undefined8 field_568; // offset 568
        undefined8 field_576; // offset 576
        undefined8 field_584; // offset 584
        undefined8 field_592; // offset 592
        undefined8 field_600; // offset 600
        undefined8 field_608; // offset 608
        undefined8 field_616; // offset 616
    };

    // 0x1001d4a40, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // PostProcessController::Config::Config(): jumps straight to the base-object constructor

    // 0x1001d4a90, 16 bytes, complete-object destructor, inline, placed by class name
    // PostProcessController::Config::~Config(): jumps straight to the base-object destructor

    // 0x1001d4ac0, 112 bytes, base-object constructor, inline, placed by class name
    // PostProcessController::Config::Config()
    void PostProcessController::Config::Config() {
        field_0 = 1;
        new (&field_8) postprocess::PostProcessParams();
        new (&field_208) postprocess::ColourGradingBloomEffectConfig();
        field_528 = 0;
        field_532 = 1;
        field_536 = 0;
        new (((long)&field_537 + 3)) postprocess::OutlineAndShadowEffectConfig();
        field_552 = 0;
        new (((long)&field_554 + 2)) postprocess::DepthOfFieldEffectConfig();
    }

    // 0x1001d52e0, 32 bytes, base-object destructor, inline, placed by class name
    // PostProcessController::Config::~Config()
    void PostProcessController::Config::~Config() {
        (&field_208)->~ColourGradingBloomEffectConfig();
    }

    // 0x1001d9ab0, 144 bytes, inline, placed by class name
    // PostProcessController::Config::operator=(PostProcessController::Config const&)
    /* PostProcessController::Config::TEMPNAMEPLACEHOLDERVALUE(PostProcessController::Config
   const&) */

    Config* PostProcessController::Config::operator=(Config* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined3 uVar6;
        undefined4 uVar7;
        undefined1 uVar8;
        undefined7 uVar9;
        undefined2 uVar10;
        undefined6 uVar11;

        _memcpy(this, param_1, 201);
        postprocess::ColourGradingBloomEffectConfig::operator=((ColourGradingBloomEffectConfig*)&field_208,
                                                               (ColourGradingBloomEffectConfig*)&param_1->field_208);
        uVar6 = param_1->field_529;
        uVar7 = param_1->field_532;
        uVar8 = param_1->field_536;
        uVar9 = param_1->field_537;
        uVar1 = param_1->field_544;
        uVar10 = param_1->field_552;
        uVar11 = param_1->field_554;
        uVar2 = param_1->field_560;
        uVar3 = param_1->field_568;
        uVar4 = param_1->field_576;
        uVar5 = param_1->field_584;
        field_528 = param_1->field_528;
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
        uVar1 = param_1->field_600;
        field_592 = param_1->field_592;
        field_600 = uVar1;
        uVar1 = param_1->field_616;
        field_608 = param_1->field_608;
        field_616 = uVar1;
        return this;
    }

    // 0x1007e0bb0, 16 bytes, complete-object constructor, inline, placed by class name
    // PostProcessController::Config::Config(PostProcessController::Config const&): jumps straight to the base-object constructor

    // 0x1007e7f70, 144 bytes, base-object constructor, inline, placed by class name
    // PostProcessController::Config::Config(PostProcessController::Config const&)
    void PostProcessController::Config::Config(Config* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined2 uVar5;
        undefined6 uVar6;
        undefined1 uVar7;
        undefined3 uVar8;
        undefined4 uVar9;
        undefined1 uVar10;
        undefined7 uVar11;

        _memcpy(this, param_1, 201);
        new (&field_208, (ColourGradingBloomEffectConfig*)&param_1->field_208)
            postprocess::ColourGradingBloomEffectConfig();
        uVar1 = param_1->field_616;
        field_608 = param_1->field_608;
        field_616 = uVar1;
        uVar1 = param_1->field_600;
        field_592 = param_1->field_592;
        field_600 = uVar1;
        uVar7 = param_1->field_528;
        uVar8 = param_1->field_529;
        uVar9 = param_1->field_532;
        uVar10 = param_1->field_536;
        uVar11 = param_1->field_537;
        uVar1 = param_1->field_544;
        uVar5 = param_1->field_552;
        uVar6 = param_1->field_554;
        uVar2 = param_1->field_560;
        uVar3 = param_1->field_568;
        uVar4 = param_1->field_584;
        field_576 = param_1->field_576;
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

    // 0x1007fe040, 16 bytes, complete-object constructor, inline, placed by class name
    // PostProcessController::Config::Config(PostProcessController::Config&&): jumps straight to the base-object constructor

    // 0x1007fe060, 144 bytes, base-object constructor, inline, placed by class name
    // PostProcessController::Config::Config(PostProcessController::Config&&)
    void PostProcessController::Config::Config(Config* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined2 uVar5;
        undefined6 uVar6;
        undefined1 uVar7;
        undefined3 uVar8;
        undefined4 uVar9;
        undefined1 uVar10;
        undefined7 uVar11;

        _memcpy(this, param_1, 201);
        new (&field_208, (ColourGradingBloomEffectConfig*)&param_1->field_208)
            postprocess::ColourGradingBloomEffectConfig();
        uVar1 = param_1->field_616;
        field_608 = param_1->field_608;
        field_616 = uVar1;
        uVar1 = param_1->field_600;
        field_592 = param_1->field_592;
        field_600 = uVar1;
        uVar7 = param_1->field_528;
        uVar8 = param_1->field_529;
        uVar9 = param_1->field_532;
        uVar10 = param_1->field_536;
        uVar11 = param_1->field_537;
        uVar1 = param_1->field_544;
        uVar5 = param_1->field_552;
        uVar6 = param_1->field_554;
        uVar2 = param_1->field_560;
        uVar3 = param_1->field_568;
        uVar4 = param_1->field_584;
        field_576 = param_1->field_576;
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

    // 0x10092c6a0, 16 bytes, inline, placed by class name
    // PostProcessController::GetCurrentConfig()
    void PostProcessController::GetCurrentConfig() {
        field_16->top();
    }

    // 0x10097ed10, 16 bytes, complete-object constructor, inline, placed by class name
    // PostProcessController::PostProcessController(): jumps straight to the base-object constructor

    // 0x10097ee90, 16 bytes, complete-object destructor, inline, placed by class name
    // PostProcessController::~PostProcessController(): jumps straight to the base-object destructor

    // 0x10098dfe0, 32 bytes, base-object constructor, inline, placed by class name
    // PostProcessController::PostProcessController()
    void PostProcessController::PostProcessController() {
        field_0 = (PostProcessManager*)0;
        field_8 = 0;
        new (field_16) eastl::fixed_stack<PostProcessController::Config, 2ul, true>();
    }

    // 0x100991240, 16 bytes, base-object destructor, inline, placed by class name
    // PostProcessController::~PostProcessController()
    void PostProcessController::~PostProcessController() {
        field_16->~fixed_stack();
    }

} // namespace jag::graphics

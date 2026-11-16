// libs/game/runetek5/clientoptions/options/ClientOptions_DOF.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game::option {
    class DOF {
    public:
        // virtual methods in vtable order
        virtual ~DOF();
        virtual bool IsModifiable(graphics::RT7Core const*) const;
        virtual bool DetermineBestSetting(perf::PerfModuleReporter const&) const;
        virtual void ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumOptionToggle);
        DOF(graphics::RT7Core&, Settings&, char const*, DrawDistance const*);

        // data members, from how the methods use this: 208 bytes
        undefined** field_0;    // offset 0, vtable pointer
        undefined8 field_8;     // offset 8
        undefined8 field_16;    // offset 16
        undefined4 field_24;    // offset 24
        MinimenuEntry field_28; // offset 28
        char _unknown_144[56];
        DrawDistance* field_200; // offset 200
    };

    // 0x1005fe390: the linker folded this into Shadows::~Shadows(), which has identical code
    DOF::~DOF();

    // 0x100601a90, 160 bytes, base-object constructor, placed by class name and debug map
    // DOF::DOF(graphics::RT7Core&, Settings&, char const*, DrawDistance const*)
    void DOF::DOF(RT7Core* param_1, Settings* param_2, char* param_3, DrawDistance* param_4) {
        undefined4 uVar2;
        undefined8 in_RAX;
        RenderDevice* this_00;
        undefined1 local_38[8];

        local_38 = (undefined1[8])in_RAX;
        new (local_38) oldscape::sidebars::SideBarData(0, 1);
        new (this) Option<EnumOptionToggle>(param_1, param_2, param_3, local_38);
        field_0 = &PTR__HapticFeedback_100f0a4e8;
        field_200 = param_4;
        this_00 = (RenderDevice*)((DOF*)this)->Instance();
        uVar2 = this_00->GetGpuMemoryProfile();
        if (render::operator<(uVar2) != '\0') {
            (field_28, 0)->SetZ();
        }
    }

    // 0x100601b30, 16 bytes, complete-object constructor, placed by class name and debug map
    // DOF::DOF(graphics::RT7Core&, Settings&, char const*, DrawDistance const*): jumps straight to the base-object constructor

    // 0x100601b40, 64 bytes, placed by class name and debug map
    // DOF::ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumOptionToggle)
    void DOF::ApplySettingImpl(RT7Core* param_1) {
        PostProcessController* this_00;
        long lVar1;
        int iVar2;

        this_00 = (PostProcessController*)param_1->GetPostProcessController();
        lVar1 = this_00->GetCurrentConfig();
        iVar2 = GetValue();
        *(bool*)(lVar1 + 553) = iVar2 == 1;
    }

    // 0x100601b80, 144 bytes, placed by class name and debug map
    // DOF::DetermineBestSetting(perf::PerfModuleReporter const&) const
    bool DOF::DetermineBestSetting(PerfModuleReporter* param_1) {
        bool bVar1;
        int iVar2;
        int* piVar3;
        undefined8 uVar4;
        undefined8 local_20;
        undefined4 local_18;

        iVar2 = field_200->GetValue();
        bVar1 = false;
        if (1 < iVar2) {
            local_18 = 0;
            local_20 = 1120986464512;
            piVar3 = (int*)local_20.data();
            iVar2 = param_1->GetSummedResults(piVar3, 3);
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "clientoptions/options/ClientOptions_DOF.cpp",
                                46, "DOF::AutoConfigure Result: %d", iVar2);
            bVar1 = 250 < iVar2;
        }
        return bVar1;
    }

    // 0x100601c20, 80 bytes, placed by class name and debug map
    // DOF::IsModifiable(graphics::RT7Core const*) const
    bool DOF::IsModifiable(RT7Core* param_1) {
        bool bVar1;
        int iVar2;
        int iVar3;

        iVar2 = field_28->GetZ();
        iVar3 = field_28->GetX();
        if (iVar2 == iVar3) {
            bVar1 = false;
        } else {
            iVar2 = field_200->GetValue();
            bVar1 = 0 < iVar2;
        }
        return bVar1;
    }

    // 0x100609140: the linker folded this into CutsceneSubtitles::~CutsceneSubtitles(), which has identical code
    DOF::~DOF();

    // 0x10060f700: the linker folded this into Option<EnumOptionToggle>::~Option(), which has identical code
    DOF::~DOF();

} // namespace jag::game::option

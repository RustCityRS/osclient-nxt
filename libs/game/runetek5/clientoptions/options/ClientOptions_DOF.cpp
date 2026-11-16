// libs/game/runetek5/clientoptions/options/ClientOptions_DOF.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game::option {
    class DOF {
    public:
        // virtual methods in vtable order
        virtual ~DOF();
        virtual bool IsModifiable(const graphics::RT7Core* rt7Core) const;
        virtual bool DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const;
        virtual void ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                      EnumOptionToggle enumOptionToggle);
        DOF(graphics::RT7Core& rt7Core, Settings& settings, const char* str, const DrawDistance* drawDistance);

    private:
        Settings* field_8;
        char* field_16;
        uint32_t field_24;
        MinimenuEntry field_28;
        uint8_t _unknown_144[56];
        DrawDistance* field_200;
    };

    // 0x100601a90
    DOF::DOF(graphics::RT7Core& rt7Core, Settings& settings, const char* str, const DrawDistance* drawDistance) {
        Range<EnumOptionToggle>* in_RAX;

        Range<EnumOptionToggle>* local_38 = in_RAX;
        new (&local_38) oldscape::sidebars::SideBarData(0, 1);
        new (this) Option<EnumOptionToggle>(rt7Core, settings, str, local_38);
        field_200 = drawDistance;
        GpuMemoryProfile gpuMemoryProfile1 = ((RenderDevice*)Instance())->GetGpuMemoryProfile();
        if (render::operator<(gpuMemoryProfile1, 1) != '\0') {
            field_28->SetZ(0);
        }
    }

    // 0x100601b40
    void DOF::ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                               EnumOptionToggle enumOptionToggle) {
        long lVar2 = rt7Core.GetPostProcessController()->GetCurrentConfig();
        int iVar1 = GetValue();
        *(bool*)(lVar2 + 553) = iVar1 == 1;
    }

    // 0x100601b80
    bool DOF::DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const {
        uint32_t local_18;

        int iVar2 = field_200->GetValue();
        bool bVar1 = false;
        if (1 < iVar2) {
            local_18 = 0;
            iVar2 = perfModuleReporter.GetSummedResults((1120986464512).data(), 3);
            (logger::default_logger())
                ->Log(false, 7,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/options/ClientOptions_DOF.cpp",
                      46, "DOF::AutoConfigure Result: %d", iVar2);
            bVar1 = 250 < iVar2;
        }
        return bVar1;
    }

    // 0x100601c20
    bool DOF::IsModifiable(const graphics::RT7Core* rt7Core) const {
        bool bVar1;

        int iVar2 = field_28->GetZ();
        int iVar3 = field_28->GetX();
        if (iVar2 == iVar3) {
            bVar1 = false;
        } else {
            iVar2 = field_200->GetValue();
            bVar1 = 0 < iVar2;
        }
        return bVar1;
    }

    // 0x10060f700: DOF::~DOF() has the same machine code as Option<EnumOptionToggle>::~Option()

} // namespace jag::game::option

// libs/game/runetek5/clientoptions/options/ClientOptions_DrawDistance.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game::option {
    class DrawDistance {
    public:
        // virtual methods in vtable order
        virtual ~DrawDistance();
        virtual GetDefault();
        virtual DetermineBestSetting(perf::PerfModuleReporter const&) const;
        DrawDistance(graphics::RT7Core&, Settings&, char const*);

        // data members, from how the methods use this: 193 bytes
        undefined** field_0;    // offset 0, vtable pointer
        undefined8 field_8;     // offset 8
        undefined8 field_16;    // offset 16
        undefined4 field_24;    // offset 24
        undefined1 field_28[8]; // offset 28
        undefined4 field_36;    // offset 36
        char _unknown_40[153];
    };

    // 0x100269960: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const, which has identical code
    DrawDistance::GetDefault();

    // 0x1005fe370: the linker folded this into Reflections::~Reflections(), which has identical code
    DrawDistance::~DrawDistance();

    // 0x100601d50, 96 bytes, base-object constructor, placed by class name and debug map
    // DrawDistance::DrawDistance(graphics::RT7Core&, Settings&, char const*)
    void DrawDistance::DrawDistance(RT7Core* param_1, Settings* param_2, char* param_3) {
        undefined1 local_30[8];

        new (local_30) oldscape::sidebars::SideBarData(0, 3);
        new (this) Option<graphics::GraphicsQuality>(param_1, param_2, param_3, local_30);
        field_0 = &PTR__Reflections_100f0a590;
    }

    // 0x100601db0, 16 bytes, complete-object constructor, placed by class name and debug map
    // DrawDistance::DrawDistance(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x100601dc0, 144 bytes, placed by class name and debug map
    // DrawDistance::DetermineBestSetting(perf::PerfModuleReporter const&) const
    undefined1 DrawDistance::DetermineBestSetting(PerfModuleReporter* param_1) {
        undefined1 uVar1;
        int iVar2;
        int* piVar3;
        undefined8 uVar4;
        undefined8 local_28;
        undefined8 uStack_20;

        local_28 = 1120986464512;
        uStack_20 = 1116691497219;
        piVar3 = (int*)local_28.data();
        iVar2 = param_1->GetSummedResults(piVar3, 4);
        uVar4 = logger::default_logger();
        logger::Logger::Log(uVar4, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/options/ClientOptions_DrawDistance.cpp",
                            38, "DrawDistance::DetermineBestSetting Result: %d", iVar2);
        uVar1 = 3;
        if ((iVar2 < 1001) && (uVar1 = 2, iVar2 < 451)) {
            uVar1 = 300 < iVar2;
        }
        return uVar1;
    }

    // 0x100609150: the linker folded this into CustomPlayerModelCount::~CustomPlayerModelCount(), which has identical code
    DrawDistance::~DrawDistance();

    // 0x100610f30: the linker folded this into CustomPlayerModelCount::~CustomPlayerModelCount(), which has identical code
    DrawDistance::~DrawDistance();

} // namespace jag::game::option

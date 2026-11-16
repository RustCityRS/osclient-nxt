// libs/graphics/runetek7/materials/shaders/shared/PoissonDisks.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    // 0x100854b10, 3072 bytes, placed by debug map only (low confidence)
    // GetPoissonDiskData(ShadowMapFilter)
    graphics* GetPoissonDiskData(_func_decltype_nullptr* param_2) {
        int iVar1;
        ulong uVar2;
        uchar* puVar3;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        switch ((int)param_2) {
        case 4:
            if ((GetPoissonDiskData(ShadowMapFilter)::PoissonDisk8 == '\0') &&
                (iVar1 = ___cxa_guard_acquire(&GetPoissonDiskData(ShadowMapFilter)::PoissonDisk8), iVar1 != 0)) {
                new (&GetPoissonDiskData(ShadowMapFilter)::PoissonDisk8) math::Point<float>(0.0, 0.0);
                new (&DAT_104232638) math::Point<float>(0.527837, -0.085868);
                new (&DAT_104232640) math::Point<float>(-0.040088, 0.536087);
                new (&DAT_104232648) math::Point<float>(-0.670445, -0.179949);
                new (&DAT_104232650) math::Point<float>(-0.419418, -0.616039);
                new (&DAT_104232658) math::Point<float>(0.440453, -0.639399);
                new (&DAT_104232660) math::Point<float>(-0.757088, 0.349334);
                new (&DAT_104232668) math::Point<float>(0.574619, 0.685879);
                ___cxa_guard_release(&GetPoissonDiskData(ShadowMapFilter)::PoissonDisk8);
            }
            puVar3 = &GetPoissonDiskData(ShadowMapFilter)::PoissonDisk8;
            uVar2 = 8;
            break;
        case 5:
            if ((GetPoissonDiskData(ShadowMapFilter)::PoissonDisk12 == '\0') &&
                (iVar1 = ___cxa_guard_acquire(&GetPoissonDiskData(ShadowMapFilter)::PoissonDisk12), iVar1 != 0)) {
                new (&GetPoissonDiskData(ShadowMapFilter)::PoissonDisk12) math::Point<float>(-0.326212, -0.405805);
                new (&DAT_104232680) math::Point<float>(-0.840144, -0.07358);
                new (&DAT_104232688) math::Point<float>(-0.695914, 0.457137);
                new (&DAT_104232690) math::Point<float>(-0.203345, 0.620716);
                new (&DAT_104232698) math::Point<float>(0.96234, -0.194983);
                new (&DAT_1042326a0) math::Point<float>(0.473434, -0.480026);
                new (&DAT_1042326a8) math::Point<float>(0.519456, 0.767022);
                new (&DAT_1042326b0) math::Point<float>(0.185461, -0.893124);
                new (&DAT_1042326b8) math::Point<float>(0.507431, 0.064425);
                new (&DAT_1042326c0) math::Point<float>(0.89642, 0.412458);
                new (&DAT_1042326c8) math::Point<float>(-0.32194, -0.932615);
                new (&DAT_1042326d0) math::Point<float>(-0.791559, -0.597705);
                ___cxa_guard_release(&GetPoissonDiskData(ShadowMapFilter)::PoissonDisk12);
            }
            puVar3 = &GetPoissonDiskData(ShadowMapFilter)::PoissonDisk12;
            uVar2 = 12;
            break;
        case 6:
            if ((GetPoissonDiskData(ShadowMapFilter)::PoissonDisk16 == '\0') &&
                (iVar1 = ___cxa_guard_acquire(&GetPoissonDiskData(ShadowMapFilter)::PoissonDisk16), iVar1 != 0)) {
                new (&GetPoissonDiskData(ShadowMapFilter)::PoissonDisk16) math::Point<float>(-0.94201624, -0.39906216);
                new (&DAT_1042326e8) math::Point<float>(0.9455861, -0.76890725);
                new (&DAT_1042326f0) math::Point<float>(-0.0941841, -0.9293887);
                new (&DAT_1042326f8) math::Point<float>(0.34495938, 0.2938776);
                new (&DAT_104232700) math::Point<float>(-0.9158858, 0.45771432);
                new (&DAT_104232708) math::Point<float>(-0.8154423, -0.87912464);
                new (&DAT_104232710) math::Point<float>(-0.38277543, 0.27676845);
                new (&DAT_104232718) math::Point<float>(0.974844, 0.7564838);
                new (&DAT_104232720) math::Point<float>(0.44323325, -0.97511554);
                new (&DAT_104232728) math::Point<float>(0.5374298, -0.4737342);
                new (&DAT_104232730) math::Point<float>(-0.2649691, -0.41893023);
                new (&DAT_104232738) math::Point<float>(0.79197514, 0.19090188);
                new (&DAT_104232740) math::Point<float>(-0.2418884, 0.99706507);
                new (&DAT_104232748) math::Point<float>(-0.81409955, 0.9143759);
                new (&DAT_104232750) math::Point<float>(0.19984126, 0.78641367);
                new (&DAT_104232758) math::Point<float>(0.14383161, -0.1410079);
                ___cxa_guard_release(&GetPoissonDiskData(ShadowMapFilter)::PoissonDisk16);
            }
            puVar3 = &GetPoissonDiskData(ShadowMapFilter)::PoissonDisk16;
            uVar2 = 16;
            break;
        case 7:
            if ((GetPoissonDiskData(ShadowMapFilter)::PoissonDisk24 == '\0') &&
                (iVar1 = ___cxa_guard_acquire(&GetPoissonDiskData(ShadowMapFilter)::PoissonDisk24), iVar1 != 0)) {
                new (&GetPoissonDiskData(ShadowMapFilter)::PoissonDisk24) math::Point<float>(-0.978698, -0.0884121);
                new (&DAT_104232770) math::Point<float>(-0.841121, 0.521165);
                new (&DAT_104232778) math::Point<float>(-0.71746, -0.50322);
                new (&DAT_104232780) math::Point<float>(-0.702933, 0.903134);
                new (&DAT_104232788) math::Point<float>(-0.663198, 0.15482);
                new (&DAT_104232790) math::Point<float>(-0.495102, -0.232887);
                new (&DAT_104232798) math::Point<float>(-0.364238, -0.961791);
                new (&DAT_1042327a0) math::Point<float>(-0.345866, -0.564379);
                new (&DAT_1042327a8) math::Point<float>(-0.325663, 0.64037);
                new (&DAT_1042327b0) math::Point<float>(-0.182714, 0.321329);
                new (&DAT_1042327b8) math::Point<float>(-0.142613, -0.0227363);
                new (&DAT_1042327c0) math::Point<float>(-0.0564287, -0.36729);
                new (&DAT_1042327c8) math::Point<float>(-0.0185858, 0.918882);
                new (&DAT_1042327d0) math::Point<float>(0.0381787, -0.728996);
                new (&DAT_1042327d8) math::Point<float>(0.16599, 0.093112);
                new (&DAT_1042327e0) math::Point<float>(0.253639, 0.719535);
                new (&DAT_1042327e8) math::Point<float>(0.369549, -0.655019);
                new (&DAT_1042327f0) math::Point<float>(0.423627, 0.429975);
                new (&DAT_1042327f8) math::Point<float>(0.530747, -0.364971);
                new (&DAT_104232800) math::Point<float>(0.566027, -0.940489);
                new (&DAT_104232808) math::Point<float>(0.639332, 0.0284127);
                new (&DAT_104232810) math::Point<float>(0.652089, 0.669668);
                new (&DAT_104232818) math::Point<float>(0.773797, 0.345012);
                new (&DAT_104232820) math::Point<float>(0.968871, 0.840449);
                ___cxa_guard_release(&GetPoissonDiskData(ShadowMapFilter)::PoissonDisk24);
            }
            puVar3 = &GetPoissonDiskData(ShadowMapFilter)::PoissonDisk24;
            uVar2 = 24;
            break;
        case 8:
            if ((GetPoissonDiskData(ShadowMapFilter)::PoissonDisk32 == '\0') &&
                (iVar1 = ___cxa_guard_acquire(&GetPoissonDiskData(ShadowMapFilter)::PoissonDisk32), iVar1 != 0)) {
                new (&GetPoissonDiskData(ShadowMapFilter)::PoissonDisk32) math::Point<float>(-0.975402, -0.0711386);
                new (&DAT_104232838) math::Point<float>(-0.920347, -0.41142);
                new (&DAT_104232840) math::Point<float>(-0.883908, 0.217872);
                new (&DAT_104232848) math::Point<float>(-0.884518, 0.568041);
                new (&DAT_104232850) math::Point<float>(-0.811945, 0.90521);
                new (&DAT_104232858) math::Point<float>(-0.792474, -0.779962);
                new (&DAT_104232860) math::Point<float>(-0.614856, 0.386578);
                new (&DAT_104232868) math::Point<float>(-0.580859, -0.208777);
                new (&DAT_104232870) math::Point<float>(-0.53795, 0.716666);
                new (&DAT_104232878) math::Point<float>(-0.515427, 0.0899991);
                new (&DAT_104232880) math::Point<float>(-0.454634, -0.707938);
                new (&DAT_104232888) math::Point<float>(-0.420942, 0.991272);
                new (&DAT_104232890) math::Point<float>(-0.261147, 0.588488);
                new (&DAT_104232898) math::Point<float>(-0.211219, 0.114841);
                new (&DAT_1042328a0) math::Point<float>(-0.146336, -0.259194);
                new (&DAT_1042328a8) math::Point<float>(-0.139439, -0.888668);
                new (&DAT_1042328b0) math::Point<float>(0.0116886, 0.326395);
                new (&DAT_1042328b8) math::Point<float>(0.0380566, 0.625477);
                new (&DAT_1042328c0) math::Point<float>(0.0625935, -0.50853);
                new (&DAT_1042328c8) math::Point<float>(0.125584, 0.0469069);
                new (&DAT_1042328d0) math::Point<float>(0.169469, -0.997253);
                new (&DAT_1042328d8) math::Point<float>(0.320597, 0.291055);
                new (&DAT_1042328e0) math::Point<float>(0.359172, -0.633717);
                new (&DAT_1042328e8) math::Point<float>(0.435713, -0.250832);
                new (&DAT_1042328f0) math::Point<float>(0.507797, -0.916562);
                new (&DAT_1042328f8) math::Point<float>(0.545763, 0.730216);
                new (&DAT_104232900) math::Point<float>(0.56859, 0.11655);
                new (&DAT_104232908) math::Point<float>(0.743156, -0.505173);
                new (&DAT_104232910) math::Point<float>(0.736442, -0.189734);
                new (&DAT_104232918) math::Point<float>(0.843562, 0.357036);
                new (&DAT_104232920) math::Point<float>(0.865413, 0.763726);
                new (&DAT_104232928) math::Point<float>(0.872005, -0.927);
                ___cxa_guard_release(&GetPoissonDiskData(ShadowMapFilter)::PoissonDisk32);
            }
            puVar3 = &GetPoissonDiskData(ShadowMapFilter)::PoissonDisk32;
            uVar2 = 32;
            break;
        default:
            /* WARNING: Subroutine does not return */
            LogAssert("false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/shaders/shared/PoissonDisks.cpp",
                      164, "Unsupported poisson disk filter");
        }
        new (this) WrapArray<unsigned char>(puVar3, uVar2);
        return this;
    }

} // namespace jag::graphics

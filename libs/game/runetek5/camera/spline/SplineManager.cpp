// libs/game/runetek5/camera/spline/SplineManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game {
    class SplineManager {
    public:
        void NewSpline(int, int);
        void GetSpline(int);
        void AddJoint(int, int, math::Vector3T<float> const&, math::Vector3T<float> const&, float);

        // data members, from how the methods use this: 200 bytes
        char _unknown_0[200];
    };

    // 0x1006070b0, 224 bytes, placed by class name and debug map
    // SplineManager::NewSpline(int, int)
    void SplineManager::NewSpline(int param_1, int param_2) {
        undefined8 uVar1;
        BSplineCubic* this_00;
        undefined1* puVar2;
        int* piVar3;
        BSplineCubic local_70;

        if ((uint)param_1 < 2) {
            if (param_2 < 2) {
                uVar1 = logger::default_logger();
                logger::Logger::Log(uVar1, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/camera/spline/SplineManager.cpp",
                                    16, "%s: New spline must have at least 2 joints. Count supplied: %d", "NewSpline",
                                    param_2);
            } else {
                new (&local_70) BSplineCubic();
                this_00 = (BSplineCubic*)std::array<BSplineCubic, 2ul>::operator[]((array<BSplineCubic, 2ul>*)this,
                                                                                   (ulong)param_1);
                BSplineCubic::operator=(this_00, &local_70);
                local_70.~BSplineCubic();
                puVar2 = (undefined1*)std::array<SplineManager::SplinePart, 2ul>::operator[](
                    (array<SplineManager::SplinePart, 2ul>*)&field_128, (ulong)param_1);
                *puVar2 = 0;
                piVar3 = (int*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)&field_192, (ulong)param_1);
                *piVar3 = param_2;
            }
        }
    }

    // 0x100607210, 192 bytes, placed by class name
    // SplineManager::GetSpline(int)
    void SplineManager::GetSpline(int param_1) {
        int local_14;

        local_14 = param_1;
        if (GetSpline(int)::nullSpline == '\0') {
            if (___cxa_guard_acquire(&GetSpline(int)::nullSpline) != 0) {
                new (&GetSpline(int)::nullSpline) BSplineCubic();
                ___cxa_atexit(PTR__BSplineCubic_100ee65e0, &GetSpline(int)::nullSpline, 4294967296);
                ___cxa_guard_release(&GetSpline(int)::nullSpline);
            }
        }
        if (ArrayValidPosition<std::array<BSplineCubic, 2ul>, int>((array*)this, &local_14)) {
            std::array<BSplineCubic, 2ul>::operator[]((array<BSplineCubic, 2ul>*)this, (long)local_14);
            return;
        }
        /* WARNING: Subroutine does not return */
        LogAssert("valid",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/spline/"
                  "SplineManager.cpp",
                  32, (char*)0);
    }

    // 0x100607300, 384 bytes, placed by class name
    // SplineManager::AddJoint(int, int, math::Vector3T<float> const&, math::Vector3T<float> const&, float)
    void SplineManager::AddJoint(int param_1, int param_2, Vector3T* param_3, Vector3T* param_4, float param_5) {
        int* piVar1;
        BSplineCubic* this_00;
        char* pcVar3;
        Vector3T<double> local_98[24];
        BSplineCubic local_80;
        undefined8 local_40;

        if (((uint)param_1 < 2) && (-1 < param_2)) {
            piVar1 = (int*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)&field_192, (ulong)param_1);
            if (param_2 < *piVar1) {
                this_00 = (BSplineCubic*)std::array<BSplineCubic, 2ul>::operator[]((array<BSplineCubic, 2ul>*)this,
                                                                                   (ulong)param_1);
                if (this_00->GetSegmentCount() < 1) {
                    pcVar3 = (char*)std::array<SplineManager::SplinePart, 2ul>::operator[](
                        (array<SplineManager::SplinePart, 2ul>*)&field_128, (ulong)param_1);
                    if (*pcVar3 == '\0') {
                        *pcVar3 = '\x01';
                        ((pcVar3 + 4))->SetXYZ(param_4);
                        ((pcVar3 + 16))->SetXYZ(param_3);
                        pcVar3[28] = '\0';
                        pcVar3[29] = '\0';
                        pcVar3[30] = -128;
                        pcVar3[31] = '?';
                    } else {
                        new (&local_80) BSplineCubic((Vector3T*)(pcVar3 + 4), (Vector3T*)(pcVar3 + 16), param_3,
                                                     param_4, (double)*(float*)(pcVar3 + 28), (double)param_5);
                        BSplineCubic::operator=(this_00, &local_80);
                        local_80.~BSplineCubic();
                        *pcVar3 = '\0';
                    }
                } else {
                    local_80.field_0 = math::operator-(param_4, param_3);
                    local_40 = math::operator-(param_3, (Vector3T*)&local_80);
                    math::Vector3T<double>::Vector3T<float>((Vector3T<double>*)&local_80, param_3);
                    math::Vector3T<double>::Vector3T<float>(local_98, (Vector3T*)&local_40);
                    this_00->AddSegment((Vector3T*)&local_80, local_98, (double)param_5);
                }
            }
        }
    }

} // namespace jag::game

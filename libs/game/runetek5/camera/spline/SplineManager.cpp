// libs/game/runetek5/camera/spline/SplineManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    class SplineManager {
    public:
        void NewSpline(int arg1, int arg2);
        void GetSpline(int arg1);
        void AddJoint(int arg1, int arg2, const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                      float arg5);

        uint8_t _unknown_0[200];
    };

    // 0x1006070b0
    void SplineManager::NewSpline(int arg1, int arg2) {
        BSplineCubic* this_01;
        uint8_t* puVar1;
        int* piVar2;
        BSplineCubic local_70;

        if ((unsigned int)arg1 < 2) {
            if (arg2 < 2) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                          "spline/SplineManager.cpp",
                          16, "%s: New spline must have at least 2 joints. Count supplied: %d", "NewSpline", arg2);
            } else {
                local_70 = BSplineCubic();
                this_01 = (BSplineCubic*)(*this)[(unsigned long)arg1];
                *this_01 = local_70;
                puVar1 = &field_128[(unsigned long)arg1];
                *puVar1 = 0;
                piVar2 = &field_192[(unsigned long)arg1];
                *piVar2 = arg2;
            }
        }
    }

    // 0x100607210
    void SplineManager::GetSpline(int arg1) {
        int local_14 = arg1;
        if (GetSpline(int)::nullSpline == '\0') {
            if (___cxa_guard_acquire(&GetSpline(int)::nullSpline) != 0) {
                new ((BSplineCubic*)&GetSpline(int)::nullSpline) BSplineCubic();
                ___cxa_atexit(PTR__BSplineCubic_100ee65e0, &GetSpline(int)::nullSpline, 4294967296);
                ___cxa_guard_release(&GetSpline(int)::nullSpline);
            }
        }
        if (ArrayValidPosition<std::array<BSplineCubic, 2ul>, int>((array<BSplineCubic, _2ul>*)this, &local_14)) {
            (*this)[(long)local_14];
            return;
        }
        LogAssert("valid",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/spline/"
                  "SplineManager.cpp",
                  32, nullptr);
    }

    // 0x100607300
    void SplineManager::AddJoint(int arg1, int arg2, const math::Vector3T<float>& vector31,
                                 const math::Vector3T<float>& vector32, float arg5) {
        int* piVar1;
        BSplineCubic* this_00;
        char* pcVar3;
        Vector3T<double> local_98;
        BSplineCubic local_80;
        uint64_t local_40;

        if (((unsigned int)arg1 < 2) && (-1 < arg2)) {
            piVar1 = &field_192[(unsigned long)arg1];
            if (arg2 < *piVar1) {
                this_00 = (BSplineCubic*)(*this)[(unsigned long)arg1];
                if (this_00->GetSegmentCount() < 1) {
                    pcVar3 = &field_128[(unsigned long)arg1];
                    if (*pcVar3 == '\0') {
                        *pcVar3 = '\x01';
                        ((pcVar3 + 4))->SetXYZ(vector32);
                        ((pcVar3 + 16))->SetXYZ(vector31);
                        pcVar3[28] = '\0';
                        pcVar3[29] = '\0';
                        pcVar3[30] = -128;
                        pcVar3[31] = '?';
                    } else {
                        local_80 = BSplineCubic(*((pcVar3 + 4)), *((pcVar3 + 16)), vector31, vector32,
                                                (double)*(float*)(pcVar3 + 28), (double)arg5);
                        *this_00 = local_80;
                        *pcVar3 = '\0';
                    }
                } else {
                    local_80.field_0 = vector32 - vector31;
                    local_40 = vector31 - local_80;
                    local_80.Vector3T<float>(vector31);
                    local_98.Vector3T<float>(local_40);
                    this_00->AddSegment(local_80, local_98, (double)arg5);
                }
            }
        }
    }

} // namespace jag::game

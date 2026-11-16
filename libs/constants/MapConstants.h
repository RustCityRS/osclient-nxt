// libs/constants/MapConstants.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x1003fc660
    bool ArrayValidPosition<eastl::fixed_vector<shared_ptr<eastl::vector<eastl::vector<int>>>, 4ul>, int>(
        const eastl::fixed_vector<shared_ptr<eastl::vector<eastl::vector<int>>>, 4ul>& arg1, const int& arg2) {
        unsigned long uVar3;
        integral_constant<bool, true> local_20;

        bool bVar2 = ArrayPositivePos<int>(arg2, &local_20);
        if (bVar2) {
            uVar3 = arg1.size();
            bVar2 = (unsigned long)(long)(int)arg2 < uVar3;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x1003fc7d0
    bool ArrayValidPosition<Array<std::array<std::array<game::HeightOffset, 64ul>, 64ul>>, int>(
        const Array<std::array<std::array<game::HeightOffset, 64ul>, 64ul>>& heightOffsetsss, const int& arg2) {
        unsigned long uVar3;
        integral_constant<bool, true> local_20;

        bool bVar2 = ArrayPositivePos<int>(arg2, &local_20);
        if (bVar2) {
            uVar3 = heightOffsetsss.end();
            bVar2 = (unsigned long)(long)(int)arg2 < uVar3;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x1003fd370
    bool ArrayValidPosition<eastl::vector<eastl::vector<unsigned char>>, int>(
        const eastl::vector<eastl::vector<unsigned char>>& arg1, const int& arg2) {
        unsigned long uVar3;
        integral_constant<bool, true> local_20;

        bool bVar2 = ArrayPositivePos<int>(arg2, &local_20);
        if (bVar2) {
            uVar3 = arg1.size();
            bVar2 = (unsigned long)(long)(int)arg2 < uVar3;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x1003fd3f0
    bool ArrayValidPosition<eastl::vector<unsigned char>, int>(const eastl::vector<unsigned char>& arg1,
                                                               const int& arg2) {
        unsigned long uVar3;
        integral_constant<bool, true> local_20;

        bool bVar2 = ArrayPositivePos<int>(arg2, &local_20);
        if (bVar2) {
            uVar3 = arg1.size();
            bVar2 = (unsigned long)(long)(int)arg2 < uVar3;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x1003fea10
    PathingEntityModels::PathingEntityModels() : game::BuildRequest<graphics::Model, game::BuildModelMain>() {
        new (&field_32) shared_ptr();
    }

    // 0x1003ffdc0
    PathingEntityModels::~PathingEntityModels() {
        field_32.~shared_ptr();
    }

    // 0x100400020
    PendingSpotAnimation::PendingSpotAnimation(
        std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter> spotAnimation)
        : std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>(*spotAnimation),
          field_8(0) {}

    // 0x100400110
    PendingSpotAnimation::~PendingSpotAnimation() {
        field_8.~ServerSyncingUser();
    }

    // 0x100400140
    PendingSpotAnimation::PendingSpotAnimation(int arg1) {
        unique_ptr<true, void>();
        uint8_t* this_00 = &field_8;
        new (this_00) game::ServerSyncingUser(0);
        this_00->Sync(arg1);
        this_00->SetReady(true);
    }

} // namespace jag

namespace jag::constants {
    class MapConstants {
    public:
        bool IsValidLevel(int arg1);
        static int32_t LEVELS[62]; // initialised in its definition
    };

    // 0x100d42c78
    int32_t MapConstants::LEVELS[62] = {
        4,           32768,       32768,       16384,      16384,       4096,        0,          1,
        1,           1,           0,           -1,         -1,          -1,          1,          1,
        0,           -1,          -1,          -1,         0,           1,           0,          0,
        0,           1065353216,  1066401792,  1063489081, -923524096,  1223959552,  1041865114, 0,
        0,           0,           -10420225,   -12517568,  -6250448,    -32640,      0,          1086324736,
        0,           1084227584,  -1031798784, 1105670963, -1050253722, -1043857408, 1060739482, 1064514355,
        -1098068787, -1119040307, 1162870784,  1025758986, -1121724662, -1049624576, 1073741824, 1,
        -1,          0,           1,           2,          0,           1182793728,
    };

    // 0x1003fc4f0
    bool MapConstants::IsValidLevel(int arg1) {
        return (unsigned int)arg1 < 4;
    }

} // namespace jag::constants

namespace jag::math {
    // 0x100401470
    Vector3T<double> Lerp<Vector3T<double>, double>(const Vector3T<double>& vector31, const Vector3T<double>& vector32,
                                                    double arg3) {
        Vector3T<double>* in_RDX;
        Vector3T<double> local_60;
        Vector3T<double> local_48;

        local_48 - *in_RDX;
        &local_60* arg3;
        vector31 + vector32;
        return vector31;
    }

    // 0x1004014d0
    Vector3T<double> operator* <double>(const Vector3T<double>& vector3, double arg2) {
        double* in_RSI;

        new (vector3) Vector3T(*in_RSI * arg2, in_RSI[1] * arg2, arg2 * in_RSI[2]);
        return vector3;
    }

} // namespace jag::math

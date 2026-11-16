// libs/constants/MapConstants.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x1003fc660, 64 bytes, inline, placed by debug map only (low confidence)
    // bool ArrayValidPosition<eastl::fixed_vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator> >, 4ul, true, eastl::allocator>, int>(eastl::fixed_vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator> >, 4ul, true, eastl::allocator> const&, int const&)
    /* bool 
   ArrayValidPosition<eastl::fixed_vector<shared_ptr<eastl::vector<eastl::vector<unsigned
   char, eastl::allocator>, eastl::allocator> >, 4ul, true, eastl::allocator>,
   int>(eastl::fixed_vector<shared_ptr<eastl::vector<eastl::vector<unsigned char,
   eastl::allocator>, eastl::allocator> >, 4ul, true, eastl::allocator> const&, int const&) */

    bool jag::ArrayValidPosition<
        eastl::fixed_vector<shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>,
                            4ul, true, eastl::allocator>,
        int>(fixed_vector* param_1, int* param_2) {
        int iVar1;
        bool bVar2;
        ulong uVar3;
        integral_constant local_20[8];

        bVar2 = ArrayPositivePos<int>(param_2, local_20);
        if (bVar2) {
            iVar1 = *param_2;
            uVar3 = param_1->size();
            bVar2 = (ulong)(long)iVar1 < uVar3;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x1003fc7d0, 64 bytes, inline, placed by debug map only (low confidence)
    // bool ArrayValidPosition<Array<std::array<std::array<game::HeightOffset, 64ul>, 64ul>, eastl::allocator>, int>(Array<std::array<std::array<game::HeightOffset, 64ul>, 64ul>, eastl::allocator> const&, int const&)
    /* bool ArrayValidPosition<Array<game::VarValue, eastl::allocator>,
   int>(Array<game::VarValue, eastl::allocator> const&, int const&) */

    bool ArrayValidPosition<Array<game::VarValue, eastl::allocator>, int>(Array* param_1, int* param_2) {
        int iVar1;
        bool bVar2;
        ulong uVar3;
        integral_constant local_20[8];

        bVar2 = ArrayPositivePos<int>(param_2, local_20);
        if (bVar2) {
            iVar1 = *param_2;
            uVar3 = param_1->end();
            bVar2 = (ulong)(long)iVar1 < uVar3;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x1003fd370, 64 bytes, inline, placed by debug map only (low confidence)
    // bool ArrayValidPosition<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>, int>(eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator> const&, int const&)
    /* bool ArrayValidPosition<eastl::vector<eastl::vector<game::DecodedTerrainTile,
   eastl::allocator>, eastl::allocator>,
   int>(eastl::vector<eastl::vector<game::DecodedTerrainTile, eastl::allocator>,
   eastl::allocator> const&, int const&) */

    bool
    jag::ArrayValidPosition<eastl::vector<eastl::vector<game::DecodedTerrainTile, eastl::allocator>, eastl::allocator>,
                            int>(vector* param_1, int* param_2) {
        int iVar1;
        bool bVar2;
        ulong uVar3;
        integral_constant local_20[8];

        bVar2 = ArrayPositivePos<int>(param_2, local_20);
        if (bVar2) {
            iVar1 = *param_2;
            uVar3 = param_1->size();
            bVar2 = (ulong)(long)iVar1 < uVar3;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x1003fd3f0, 64 bytes, inline, placed by debug map only (low confidence)
    // bool ArrayValidPosition<eastl::vector<unsigned char, eastl::allocator>, int>(eastl::vector<unsigned char, eastl::allocator> const&, int const&)
    bool ArrayValidPosition<eastl::vector<unsigned char, eastl::allocator>, int>(vector* param_1, int* param_2) {
        int iVar1;
        bool bVar2;
        ulong uVar3;
        integral_constant local_20[8];

        bVar2 = ArrayPositivePos<int>(param_2, local_20);
        if (bVar2) {
            iVar1 = *param_2;
            uVar3 = param_1->size();
            bVar2 = (ulong)(long)iVar1 < uVar3;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x1003fea10, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PathingEntityModels::PathingEntityModels()
    void PathingEntityModels::PathingEntityModels() {
        _func_decltype_nullptr* in_RSI;

        new (this) game::BuildRequest<graphics::Model, game::BuildModelMain>();
        new (&field_32, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1003ffdc0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // PathingEntityModels::~PathingEntityModels()
    void PathingEntityModels::~PathingEntityModels() {
        (&field_32)->~shared_ptr();
        ~ActiveComponent();
    }

    // 0x100400020, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PendingSpotAnimation::PendingSpotAnimation(std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>)
    /* PendingSpotAnimation::PendingSpotAnimation(std::unique_ptr<SpotAnimation,
   MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>) */

    void PendingSpotAnimation::PendingSpotAnimation(unique_ptr* param_2) {
        new (this) std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>(param_2);
        new (&field_8, 0) game::ServerSyncingUser();
    }

    // 0x100400110, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // PendingSpotAnimation::~PendingSpotAnimation()
    void PendingSpotAnimation::~PendingSpotAnimation() {
        (&field_8)->~ServerSyncingUser();
        ~unique_ptr();
    }

    // 0x100400140, 112 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PendingSpotAnimation::PendingSpotAnimation(int)
    void PendingSpotAnimation::PendingSpotAnimation(int param_1) {
        undefined1* this_00;

        std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>::unique_ptr<true, void>(
            (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)this);
        this_00 = &field_8;
        new (this_00) game::ServerSyncingUser(0);
        this_00->Sync(param_1);
        this_00->SetReady(true);
    }

} // namespace jag

namespace jag::constants {
    class MapConstants {
    public:
        bool IsValidLevel(int);
        static /* 248 bytes */ LEVELS; // initialised in its definition
    };

    // 0x100d42c78, 248 bytes, __const
    MapConstants::LEVELS = {
        4,           32768,       32768,       16384,      16384,       4096,        0,          1,
        1,           1,           0,           -1,         -1,          -1,          1,          1,
        0,           -1,          -1,          -1,         0,           1,           0,          0,
        0,           1065353216,  1066401792,  1063489081, -923524096,  1223959552,  1041865114, 0,
        0,           0,           -10420225,   -12517568,  -6250448,    -32640,      0,          1086324736,
        0,           1084227584,  -1031798784, 1105670963, -1050253722, -1043857408, 1060739482, 1064514355,
        -1098068787, -1119040307, 1162870784,  1025758986, -1121724662, -1049624576, 1073741824, 1,
        -1,          0,           1,           2,          0,           1182793728,
    };

    // 0x1003fc4f0, 16 bytes, inline, placed by class name and debug map
    // MapConstants::IsValidLevel(int)
    bool MapConstants::IsValidLevel(int param_1) {
        return (uint)param_1 < 4;
    }

} // namespace jag::constants

namespace jag::math {
    // 0x100401470, 96 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<double> Lerp<Vector3T<double>, double>(Vector3T<double> const&, Vector3T<double> const&, double)
    math* Lerp<Vector3T<double>, double>(Vector3T* param_1, Vector3T* param_2, double param_3) {
        undefined1 local_60[24];
        undefined1 local_48[24];

        operator-((math*)local_48, param_2, param_1);
        operator*((math*)local_60, param_3, (Vector3T*)local_48);
        operator+(this, param_1, (Vector3T*)local_60);
        return this;
    }

    // 0x1004014d0, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<double> operator*<double>(Vector3T<double> const&, double)
    /* Vector3T<double> TEMPNAMEPLACEHOLDERVALUE(double,
   Vector3T<double> const&) */

    math* operator*(double param_1, Vector3T* param_2) {
        new (this) Vector3T<double>(*(double*)param_2 * param_1, *(double*)(param_2 + 8) * param_1,
                                    param_1 * *(double*)(param_2 + 16));
        return this;
    }

} // namespace jag::math

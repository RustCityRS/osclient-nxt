// libs/oldscape/jagex3/dash3d/Ground.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::dash3d {
    class Ground {
    public:
        ~Ground();
        Ground(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int);
        IsOverlay(int) const;
        static /* 8 bytes */ m_shape0P1;                                             // = 1
        static /* 8 bytes */ m_shape0P2;                                             // = 4294967298
        static /* 1000 bytes */ m_shape0P3;                                          // initialised in its definition
        static eastl::vector<int, eastl::allocator> /* 416 bytes */ m_defShapeP[13]; // initialised in its definition
        static eastl::vector<int, eastl::allocator> /* 416 bytes */ m_defShapeF[13]; // initialised in its definition

        // data members, from how the methods use this: 360 bytes
        char _unknown_0[200];
        uint field_200; // offset 200
        char _unknown_204[132];
        bool field_336; // offset 336
        char _unknown_337[3];
        int field_340; // offset 340
        int field_344; // offset 344
        int field_348; // offset 348
        int field_352; // offset 352
        char _unknown_356[4];
    };

    // 0x100333200, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Ground::~Ground(): jumps straight to the base-object destructor

    // 0x100333210, 128 bytes, base-object destructor, inline, placed by class name and debug map
    // Ground::~Ground()
    void Ground::~Ground() {
        (&field_304)->~vector();
        (&field_272)->~vector();
        (&field_240)->~vector();
        (&field_208)->~vector();
        (&field_168)->~vector();
        (&field_136)->~vector();
        (&field_104)->~vector();
        (&field_72)->~vector();
        (&field_40)->~vector();
        (&field_8)->~vector();
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x100333310, 48 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::GroundDecor* placement_new<oldscape::dash3d::GroundDecor>(void*)
    GroundDecor* placement_new<oldscape::dash3d::GroundDecor>(void* param_1) {
        *(undefined8*)((long)param_1 + 32) = 0;
        *(undefined8*)((long)param_1 + 40) = 0;
        *(undefined8*)((long)param_1 + 16) = 0;
        *(undefined8*)((long)param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        *(undefined8*)((long)param_1 + 48) = 0;
        oldscape::dash3d::GroundDecor::GroundDecor(param_1);
        return param_1;
    }

    // 0x100333340, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::GroundDecor>* placement_new<ref_counter_shared<oldscape::dash3d::GroundDecor>, int, oldscape::dash3d::GroundDecor*&>(void*, int&&, oldscape::dash3d::GroundDecor*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::dash3d::GroundDecor>, int, oldscape::dash3d::GroundDecor*&>(
        void* param_1, int* param_2, GroundDecor** param_3) {
        ref_counter_shared<oldscape::dash3d::GroundDecor>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag

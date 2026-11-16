// libs/oldscape/jagex3/dash3d/Ground.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::dash3d {
    class Ground {
    public:
        ~Ground();
        Ground(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10,
               int arg11, int arg12, int arg13, int arg14, int arg15, int arg16, int arg17, int arg18, int arg19);
        bool IsOverlay(int arg1) const;
        static int64_t m_shape0P1;                 // = 1
        static int64_t m_shape0P2;                 // = 4294967298
        static int32_t m_shape0P3[250];            // initialised in its definition
        static eastl::vector<int> m_defShapeP[13]; // initialised in its definition
        static eastl::vector<int> m_defShapeF[13]; // initialised in its definition

    private:
        uint8_t _unknown_0[200];
        unsigned int field_200;
        uint8_t _unknown_204[132];
        bool field_336;
        uint8_t _unknown_337[3];
        int field_340;
        int field_344;
        int field_348;
        int field_352;
        uint8_t _unknown_356[4];
    };

    // 0x100333210
    Ground::~Ground() {
        field_304.~vector();
        field_272.~vector();
        field_240.~vector();
        field_208.~vector();
        field_168.~vector();
        field_136.~vector();
        field_104.~vector();
        field_72.~vector();
        field_40.~vector();
        field_8.~vector();
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x100333310
    oldscape::dash3d::GroundDecor* placement_new<oldscape::dash3d::GroundDecor>(void* arg1) {
        *(uint64_t*)((long)arg1 + 32) = 0;
        *(uint64_t*)((long)arg1 + 40) = 0;
        *(uint64_t*)((long)arg1 + 16) = 0;
        *(uint64_t*)((long)arg1 + 24) = 0;
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        *(uint64_t*)((long)arg1 + 48) = 0;
        new (arg1) oldscape::dash3d::GroundDecor();
        return arg1;
    }

    // 0x100333340
    ref_counter_shared<oldscape::dash3d::GroundDecor>*
    placement_new<ref_counter_shared<oldscape::dash3d::GroundDecor>, int, oldscape::dash3d::GroundDecor*&>(
        void* arg1, int&& arg2, oldscape::dash3d::GroundDecor*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::GroundDecor>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

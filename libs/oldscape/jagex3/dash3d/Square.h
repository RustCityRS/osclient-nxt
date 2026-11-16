// libs/oldscape/jagex3/dash3d/Square.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::oldscape::dash3d {
    class Square {
    public:
        // virtual methods in vtable order
        virtual ~Square();
        Square(int arg1, int arg2, int arg3);
        EntityHighlight* GetTileHighlightData() const;
        unsigned long IsEmpty() const;
        auto Debug1();
        unsigned long DebugSprok();
        auto Debug2();

    private:
        uint8_t _unknown_8[16];
        uint64_t field_24;
        int field_32;
        int field_36;
        int field_40;
        int field_44;
        shared_ptr field_48;
        shared_ptr field_64;
        shared_ptr field_80;
        shared_ptr field_96;
        shared_ptr field_112;
        shared_ptr field_128;
        uint8_t _unknown_144[12];
        int field_156;
        uint8_t _unknown_160[184];
        int field_344;
        uint8_t _unknown_348[4];
        bool field_352;
        bool field_353;
        bool field_354;
        uint8_t _unknown_355[1];
        int field_356;
        int field_360;
        int field_364;
        int field_368;
        uint8_t _unknown_372[28];
    };

    // 0x100301e50
    Square::Square(int arg1, int arg2, int arg3) {
        new (this) Linkable<Square>();
        new (field_48) shared_ptr();
        new (field_64) shared_ptr();
        new (field_80) shared_ptr();
        new (field_96) shared_ptr();
        new (field_112) shared_ptr();
        new (field_128) shared_ptr();
        new (&field_144) EntityHighlight();
        field_156 = 0;
        uint8_t* this_00 = &field_160;
        new (this_00) eastl::fixed_vector<shared_ptr<Sprite>, 5ul>();
        uint8_t* this_01 = &field_280;
        new (this_01) eastl::fixed_vector<int, 5ul>();
        *(uint32_t*)&field_351 = 0;
        *(uint64_t*)&field_344 = 0;
        field_356 = 0;
        field_360 = 0;
        field_364 = 0;
        field_368 = 0;
        new (&field_376) shared_ptr();
        new (&field_392) shared_ptr();
        unsigned long uVar1 = this_00->capacity();
        this_00->resize(uVar1);
        uVar1 = this_01->capacity();
        this_01->resize(uVar1);
        field_32 = arg1;
        field_44 = arg1;
        field_36 = arg2;
        field_40 = arg3;
    }

    // 0x100302160
    EntityHighlight* Square::GetTileHighlightData() const {
        long lVar2;
        EntityHighlight* pEVar3;

        bool cVar1 = field_144.HasTileHighlight();
        if (cVar1) {
            return (EntityHighlight*)&field_144;
        }
        uint8_t* puVar4 = field_128;
        cVar1 = puVar4->operator_cast_to_bool();
        if (!cVar1) {
        LAB_1003021b3:
            puVar4 = field_96;
            cVar1 = puVar4->operator_cast_to_bool();
            if (cVar1) {
                lVar2 = (*puVar4).operator->();
                cVar1 = ((lVar2 + 76))->HasTileHighlight();
                if (cVar1) {
                    lVar2 = (*puVar4).operator->();
                    goto LAB_1003021e0;
                }
            }
            puVar4 = field_80;
            cVar1 = puVar4->operator_cast_to_bool();
            if (cVar1) {
                lVar2 = (*puVar4).operator->();
                cVar1 = ((lVar2 + 64))->HasTileHighlight();
                if (cVar1) {
                    lVar2 = (*puVar4).operator->();
                    return (EntityHighlight*)(lVar2 + 64);
                }
            }
            puVar4 = field_112;
            cVar1 = puVar4->operator_cast_to_bool();
            if (cVar1) {
                lVar2 = (*puVar4).operator->();
                cVar1 = ((lVar2 + 44))->HasTileHighlight();
                if (cVar1) {
                    lVar2 = (*puVar4).operator->();
                    return (EntityHighlight*)(lVar2 + 44);
                }
            }
            pEVar3 = nullptr;
        } else {
            lVar2 = (*puVar4).operator->();
            cVar1 = ((lVar2 + 76))->HasTileHighlight();
            if (!cVar1)
                goto LAB_1003021b3;
            lVar2 = (*puVar4).operator->();
        LAB_1003021e0:
            pEVar3 = (EntityHighlight*)(lVar2 + 76);
        }
        return pEVar3;
    }

    // 0x1003022a0
    unsigned long Square::IsEmpty() const {
        bool cVar1 = field_96->operator_cast_to_bool();
        if ((((!cVar1) && (cVar1 = field_80->operator_cast_to_bool(), !cVar1)) &&
             (cVar1 = field_112->operator_cast_to_bool(), !cVar1)) &&
            (((field_156 == 0 && (cVar1 = field_128->operator_cast_to_bool(), !cVar1)) &&
              (cVar1 = field_64->operator_cast_to_bool(), !cVar1)))) {
            return field_48->operator_cast_to_bool() ^ 1;
        }
        return 0;
    }

    // 0x100302310
    auto Square::Debug1() {
        basic_ostream<char, std::char_traits<char> _> local_148;
        eastl local_28;

        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_158;
        basic_ostream<char, std::char_traits<char> _>* pbVar2 = std::operator<<(&local_148, "lev:");
        pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, field_32);
        pbVar2 = std::operator<<(pbVar2, " x:");
        pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, field_36);
        pbVar2 = std::operator<<(pbVar2, " z:");
        pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, field_40);
        pbVar2 = std::operator<<(pbVar2, " glev:");
        pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, field_44);
        pbVar2 = std::operator<<(pbVar2, " qg:");
        bool bVar1 = *field_48 != nullptr;
        pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, bVar1);
        pbVar2 = std::operator<<(pbVar2, " g:");
        bVar1 = *field_64 != nullptr;
        pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, bVar1);
        pbVar2 = std::operator<<(pbVar2, " w:");
        bVar1 = *field_80 != nullptr;
        pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, bVar1);
        pbVar2 = std::operator<<(pbVar2, " d:");
        bVar1 = *field_96 != nullptr;
        pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, bVar1);
        pbVar2 = std::operator<<(pbVar2, " gd:");
        bVar1 = *field_112 != nullptr;
        pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, bVar1);
        pbVar2 = std::operator<<(pbVar2, " obj:");
        bVar1 = *field_128 != nullptr;
        pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, bVar1);
        pbVar2 = std::operator<<(pbVar2, " sn:");
        pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, field_156);
        pbVar2 = std::operator<<(pbVar2, " sok:");
        bVar1 = (bool)DebugSprok();
        pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, bVar1);
        pbVar2 = std::operator<<(pbVar2, " sm:");
        pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, field_344);
        pbVar2 = std::operator<<(pbVar2, " la:");
        std::ostream::operator<<((ostream*)pbVar2, *(int*)&field_348);
        auto local_40 = local_158.str();
        auto str = local_40.c_str();
        eastl::destruct<highlight::NpcUID*>(&local_28);
        auto result(str, &local_28);
        return result;
    }

    // 0x100302650
    unsigned long Square::DebugSprok() {
        bool bVar1;
        shared_ptr<configdecoder::ObjType>* psVar2;
        unsigned long arg1;
        uint64_t unaff_R12;

        bool bVar3 = 0 < field_156;
        if (0 < field_156) {
            psVar2 = &field_160[0];
            bVar1 = *psVar2 == nullptr;
            if (!bVar1) {
                arg1 = 1;
                do {
                    bVar3 = (long)arg1 < (long)field_156;
                    if ((long)field_156 <= (long)arg1)
                        break;
                    psVar2 = &field_160[arg1];
                    bVar1 = *psVar2 == nullptr;
                    arg1 = arg1 + 1;
                } while (!bVar1);
            }
        }
        return ((((uint64_t)((int64_t)((unsigned long)unaff_R12 >> 8)) << 8) | (uint8_t)bVar3) ^ 1) & 4294967295;
    }

    // 0x100302700
    auto Square::Debug2() {
        basic_ostream<char, std::char_traits<char> _> local_148;
        eastl local_28;

        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_158;
        basic_ostream<char, std::char_traits<char> _>* pbVar2 = std::operator<<(&local_148, "pre:");
        pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, field_352);
        pbVar2 = std::operator<<(pbVar2, " post:");
        pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, field_353);
        pbVar2 = std::operator<<(pbVar2, " spr:");
        pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, field_354);
        pbVar2 = std::operator<<(pbVar2, " mm:");
        pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, field_356);
        pbVar2 = std::operator<<(pbVar2, " md:");
        pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, field_360);
        pbVar2 = std::operator<<(pbVar2, " mb:");
        pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, field_364);
        pbVar2 = std::operator<<(pbVar2, " pm:");
        pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, field_368);
        pbVar2 = std::operator<<(pbVar2, " be:");
        bool bVar1 = field_376 != nullptr;
        std::ostream::operator<<((ostream*)pbVar2, bVar1);
        auto local_40 = local_158.str();
        auto str = local_40.c_str();
        eastl::destruct<highlight::NpcUID*>(&local_28);
        auto result(str, &local_28);
        return result;
    }

    // 0x10033dcf0
    Square::~Square() {
        field_392.~shared_ptr();
        field_376.~shared_ptr();
        field_280.~fixed_vector();
        field_160.~fixed_vector();
        field_128->~shared_ptr();
        field_112->~shared_ptr();
        field_96->~shared_ptr();
        field_80->~shared_ptr();
        field_64->~shared_ptr();
        field_48->~shared_ptr();
    }

} // namespace jag::oldscape::dash3d

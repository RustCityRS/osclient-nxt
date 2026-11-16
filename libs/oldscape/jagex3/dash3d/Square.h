// libs/oldscape/jagex3/dash3d/Square.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::oldscape::dash3d {
    class Square {
    public:
        // virtual methods in vtable order
        virtual ~Square();
        Square(int, int, int);
        GetTileHighlightData() const;
        ulong IsEmpty() const;
        Debug1();
        ulong DebugSprok();
        Debug2();

        // data members, from how the methods use this: 400 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        undefined8 field_24;  // offset 24
        int field_32;         // offset 32
        int field_36;         // offset 36
        int field_40;         // offset 40
        int field_44;         // offset 44
        shared_ptr field_48;  // offset 48
        shared_ptr field_64;  // offset 64
        shared_ptr field_80;  // offset 80
        shared_ptr field_96;  // offset 96
        shared_ptr field_112; // offset 112
        shared_ptr field_128; // offset 128
        char _unknown_144[12];
        int field_156; // offset 156
        char _unknown_160[120];
        undefined1 field_280; // offset 280
        char _unknown_281[70];
        undefined4 field_351; // offset 351
        char _unknown_355[1];
        undefined8 field_356; // offset 356
        undefined8 field_364; // offset 364
        char _unknown_372[28];
    };

    // 0x100301e50, 512 bytes, base-object constructor, placed by class name
    // Square::Square(int, int, int)
    void Square::Square(int param_1, int param_2, int param_3) {
        undefined1* this_00;
        undefined1* this_01;
        ulong uVar1;
        undefined4 in_register_00000034;
        _func_decltype_nullptr* p_Var2;

        p_Var2 = (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_1);
        new (this) Linkable<Square>();
        field_0 = PTR_vtable_100ee89d8 + 16;
        new (field_48, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_64, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_80, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_96, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_112, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_128, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_144) EntityHighlight();
        field_156 = 0;
        this_00 = &field_160;
        new (this_00) eastl::fixed_vector<shared_ptr<Sprite>, 5ul, true, eastl::allocator>();
        this_01 = &field_280;
        new (this_01) eastl::fixed_vector<int, 5ul, true, eastl::allocator>();
        field_351 = 0;
        *(undefined8*)&field_344 = 0;
        field_356 = 0;
        field_364 = 0;
        new (&field_376, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_392, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        uVar1 = this_00->capacity();
        this_00->resize(uVar1);
        this_01->capacity();
        eastl::vector<int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true, eastl::allocator>>::resize(
            (ulong)this_01);
        field_32 = param_1;
        field_44 = param_1;
        field_36 = param_2;
        field_40 = param_3;
    }

    // 0x100302150, 16 bytes, complete-object constructor, placed by class name
    // Square::Square(int, int, int): jumps straight to the base-object constructor

    // 0x100302160, 256 bytes, placed by class name
    // Square::GetTileHighlightData() const
    undefined1* Square::GetTileHighlightData() {
        char cVar1;
        bool bVar2;
        long lVar3;
        undefined1* puVar4;

        cVar1 = (&field_144)->HasTileHighlight();
        if (cVar1 != '\0') {
            return &field_144;
        }
        puVar4 = field_128;
        bVar2 = puVar4->operator_cast_to_bool();
        if (bVar2) {
            lVar3 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar4);
            cVar1 = ((lVar3 + 76))->HasTileHighlight();
            if (cVar1 == '\0')
                goto LAB_1003021b3;
            lVar3 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar4);
        LAB_1003021e0:
            puVar4 = (undefined1*)(lVar3 + 76);
        } else {
        LAB_1003021b3:
            puVar4 = field_96;
            bVar2 = puVar4->operator_cast_to_bool();
            if (bVar2) {
                lVar3 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar4);
                cVar1 = ((lVar3 + 76))->HasTileHighlight();
                if (cVar1 != '\0') {
                    lVar3 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar4);
                    goto LAB_1003021e0;
                }
            }
            puVar4 = field_80;
            bVar2 = puVar4->operator_cast_to_bool();
            if (bVar2) {
                lVar3 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar4);
                cVar1 = ((lVar3 + 64))->HasTileHighlight();
                if (cVar1 != '\0') {
                    lVar3 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar4);
                    return (undefined1*)(lVar3 + 64);
                }
            }
            puVar4 = field_112;
            bVar2 = puVar4->operator_cast_to_bool();
            if (bVar2) {
                lVar3 = shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)puVar4);
                cVar1 = ((lVar3 + 44))->HasTileHighlight();
                if (cVar1 != '\0') {
                    lVar3 = shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)puVar4);
                    return (undefined1*)(lVar3 + 44);
                }
            }
            puVar4 = (undefined1*)0;
        }
        return puVar4;
    }

    // 0x1003022a0, 112 bytes, placed by class name
    // Square::IsEmpty() const
    ulong Square::IsEmpty() {
        bool bVar1;
        undefined7 extraout_var;

        bVar1 = field_96->operator_cast_to_bool();
        if ((((bVar1) || (bVar1 = field_80->operator_cast_to_bool(), bVar1)) ||
             (bVar1 = field_112->operator_cast_to_bool(), bVar1)) ||
            (((field_156 != 0 || (bVar1 = field_128->operator_cast_to_bool(), bVar1)) ||
              (bVar1 = field_64->operator_cast_to_bool(), bVar1)))) {
            return 0;
        }
        bVar1 = field_48->operator_cast_to_bool();
        return CONCAT71(extraout_var, bVar1) ^ 1;
    }

    // 0x100302310, 656 bytes, placed by class name
    // Square::Debug1()
    Square* Square::Debug1() {
        bool bVar1;
        ostream* poVar2;
        Square* in_RSI;
        undefined1 auVar3[16];
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_158[16];
        ostream local_148[264];
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_40[24];
        eastl local_28[8];

        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream(local_158);
        poVar2 = std::operator<<(local_148, "lev:");
        poVar2 = (ostream*)std::ostream::operator<<(poVar2, in_RSI->field_32);
        poVar2 = std::operator<<(poVar2, " x:");
        poVar2 = (ostream*)std::ostream::operator<<(poVar2, in_RSI->field_36);
        poVar2 = std::operator<<(poVar2, " z:");
        poVar2 = (ostream*)std::ostream::operator<<(poVar2, in_RSI->field_40);
        poVar2 = std::operator<<(poVar2, " glev:");
        poVar2 = (ostream*)std::ostream::operator<<(poVar2, in_RSI->field_44);
        poVar2 = std::operator<<(poVar2, " qg:");
        bVar1 = operator!=((shared_ptr*)in_RSI->field_48, (_func_decltype_nullptr*)0);
        poVar2 = (ostream*)std::ostream::operator<<(poVar2, bVar1);
        poVar2 = std::operator<<(poVar2, " g:");
        bVar1 = operator!=((shared_ptr*)in_RSI->field_64, (_func_decltype_nullptr*)0);
        poVar2 = (ostream*)std::ostream::operator<<(poVar2, bVar1);
        poVar2 = std::operator<<(poVar2, " w:");
        bVar1 = operator!=((shared_ptr*)in_RSI->field_80, (_func_decltype_nullptr*)0);
        poVar2 = (ostream*)std::ostream::operator<<(poVar2, bVar1);
        poVar2 = std::operator<<(poVar2, " d:");
        bVar1 = operator!=((shared_ptr*)in_RSI->field_96, (_func_decltype_nullptr*)0);
        poVar2 = (ostream*)std::ostream::operator<<(poVar2, bVar1);
        poVar2 = std::operator<<(poVar2, " gd:");
        bVar1 = operator!=((shared_ptr*)in_RSI->field_112, (_func_decltype_nullptr*)0);
        poVar2 = (ostream*)std::ostream::operator<<(poVar2, bVar1);
        poVar2 = std::operator<<(poVar2, " obj:");
        bVar1 = operator!=((shared_ptr*)in_RSI->field_128, (_func_decltype_nullptr*)0);
        poVar2 = (ostream*)std::ostream::operator<<(poVar2, bVar1);
        poVar2 = std::operator<<(poVar2, " sn:");
        poVar2 = (ostream*)std::ostream::operator<<(poVar2, in_RSI->field_156);
        poVar2 = std::operator<<(poVar2, " sok:");
        bVar1 = (bool)DebugSprok(in_RSI);
        poVar2 = (ostream*)std::ostream::operator<<(poVar2, bVar1);
        poVar2 = std::operator<<(poVar2, " sm:");
        poVar2 = (ostream*)std::ostream::operator<<(poVar2, *(int*)&in_RSI->field_344);
        poVar2 = std::operator<<(poVar2, " la:");
        std::ostream::operator<<(poVar2, *(int*)&in_RSI->field_348);
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_40);
        auVar3 = local_40->c_str();
        eastl::destruct<highlight::NpcUID*>(local_28, (NpcUID*)"EASTL basic_string", auVar3._8_8_);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)this, auVar3._0_8_);
        local_40->~basic_string();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_stringstream(local_158);
        return this;
    }

    // 0x100302650, 128 bytes, placed by class name
    // Square::DebugSprok()
    ulong Square::DebugSprok() {
        bool bVar1;
        shared_ptr* psVar2;
        ulong uVar3;
        bool bVar4;
        undefined8 unaff_R12;

        bVar4 = 0 < field_156;
        if (0 < field_156) {
            psVar2 =
                (shared_ptr*)eastl::vector<shared_ptr<Sprite>,
                                           eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<shared_ptr<Sprite>,
                            eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)&field_160,
                    0);
            bVar1 = operator==(psVar2, (_func_decltype_nullptr*)0);
            if (!bVar1) {
                uVar3 = 1;
                do {
                    bVar4 = (long)uVar3 < (long)field_156;
                    if ((long)field_156 <= (long)uVar3)
                        break;
                    psVar2 = (shared_ptr*)
                        eastl::vector<shared_ptr<Sprite>,
                                      eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                      eastl::allocator>>*)&field_160,
                            uVar3);
                    bVar1 = operator==(psVar2, (_func_decltype_nullptr*)0);
                    uVar3 = uVar3 + 1;
                } while (!bVar1);
            }
        }
        return (CONCAT71((int7)((ulong)unaff_R12 >> 8), bVar4) ^ 1) & 4294967295;
    }

    // 0x100302700, 432 bytes, placed by class name
    // Square::Debug2()
    Square* Square::Debug2() {
        bool bVar1;
        ostream* poVar2;
        long in_RSI;
        undefined1 auVar3[16];
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_158[16];
        ostream local_148[264];
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_40[24];
        eastl local_28[8];

        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream(local_158);
        poVar2 = std::operator<<(local_148, "pre:");
        poVar2 = (ostream*)std::ostream::operator<<(poVar2, *(bool*)(in_RSI + 352));
        poVar2 = std::operator<<(poVar2, " post:");
        poVar2 = (ostream*)std::ostream::operator<<(poVar2, *(bool*)(in_RSI + 353));
        poVar2 = std::operator<<(poVar2, " spr:");
        poVar2 = (ostream*)std::ostream::operator<<(poVar2, *(bool*)(in_RSI + 354));
        poVar2 = std::operator<<(poVar2, " mm:");
        poVar2 = (ostream*)std::ostream::operator<<(poVar2, *(int*)(in_RSI + 356));
        poVar2 = std::operator<<(poVar2, " md:");
        poVar2 = (ostream*)std::ostream::operator<<(poVar2, *(int*)(in_RSI + 360));
        poVar2 = std::operator<<(poVar2, " mb:");
        poVar2 = (ostream*)std::ostream::operator<<(poVar2, *(int*)(in_RSI + 364));
        poVar2 = std::operator<<(poVar2, " pm:");
        poVar2 = (ostream*)std::ostream::operator<<(poVar2, *(int*)(in_RSI + 368));
        poVar2 = std::operator<<(poVar2, " be:");
        bVar1 = operator!=((shared_ptr*)(in_RSI + 376), (_func_decltype_nullptr*)0);
        std::ostream::operator<<(poVar2, bVar1);
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_40);
        auVar3 = local_40->c_str();
        eastl::destruct<highlight::NpcUID*>(local_28, (NpcUID*)"EASTL basic_string", auVar3._8_8_);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)this, auVar3._0_8_);
        local_40->~basic_string();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_stringstream(local_158);
        return this;
    }

    // 0x100324dd0, 16 bytes, complete-object destructor, inline, placed by class name
    // Square::~Square(): jumps straight to the base-object destructor

    // 0x100324de0, 32 bytes, deleting destructor, inline, placed by class name
    // Square::~Square()
    void Square::~Square() {
        ~Square(this);
        operator_delete(this);
    }

    // 0x10033dcf0, 144 bytes, base-object destructor, inline, placed by class name
    // Square::~Square()
    void Square::~Square() {
        (&field_392)->~shared_ptr();
        (&field_376)->~shared_ptr();
        (&field_280)->~fixed_vector();
        (&field_160)->~fixed_vector();
        field_128->~shared_ptr();
        field_112->~shared_ptr();
        field_96->~shared_ptr();
        field_80->~shared_ptr();
        field_64->~shared_ptr();
        field_48->~shared_ptr();
        ~Linkable();
    }

} // namespace jag::oldscape::dash3d

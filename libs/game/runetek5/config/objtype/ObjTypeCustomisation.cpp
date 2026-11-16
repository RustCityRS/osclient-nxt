// libs/game/runetek5/config/objtype/ObjTypeCustomisation.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ObjTypeCustomisation.h"

namespace jag::game {
    // 0x100009ca0: ObjTypeCustomisation::GetManAppearance() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x10002d850: ObjTypeCustomisation::GetWomanAppearance() const has the same machine code as oldscape::option::Option<int>::GetDefaultValue() const

    // 0x100049810: ObjTypeCustomisation::GetRecolourDest() const has the same machine code as oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const

    // 0x100060710: ObjTypeCustomisation::GetRematerialDest() const has the same machine code as oldscape::widgets::ScrollBarWidget::GetThumbBounds() const

    // 0x100509c60
    ObjTypeCustomisation::ObjTypeCustomisation(const shared_ptr<ObjType>& objType,
                                               PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg2)
        : ObjAppearanceData() {
        uint8_t extraout_AL;
        uint8_t extraout_AL_00;
        uint8_t extraout_AL_01;
        uint8_t extraout_AL_02;
        uint8_t extraout_AL_03;
        uint8_t extraout_AL_04;
        uint8_t extraout_AL_05;
        uint8_t extraout_AL_06;
        uint8_t extraout_AL_07;
        uint8_t extraout_AL_08;
        uint8_t extraout_AL_09;
        uint8_t extraout_AL_10;
        uint8_t extraout_AL_11;
        uint8_t extraout_AL_12;
        uint8_t extraout_AL_13;
        uint8_t extraout_AL_14;
        uint8_t extraout_AL_15;
        uint8_t extraout_AL_16;
        uint8_t extraout_AL_17;
        uint8_t extraout_AL_18;
        uint8_t extraout_AL_19;
        uint8_t extraout_AL_20;
        uint8_t extraout_AL_21;
        uint8_t extraout_AL_22;
        uint8_t extraout_AL_23;
        uint8_t extraout_AL_24;
        uint8_t extraout_AL_25;
        uint8_t extraout_AL_26;
        uint8_t extraout_AL_27;
        uint8_t extraout_AL_28;
        uint8_t extraout_AL_29;
        uint8_t extraout_AL_30;
        uint8_t extraout_AL_31;
        uint8_t extraout_AL_32;
        uint8_t extraout_AL_33;
        uint8_t extraout_AL_34;
        uint8_t uVar3;
        uint8_t extraout_AL_35;
        uint8_t extraout_AL_36;
        uint8_t extraout_AL_37;
        uint8_t extraout_AL_38;
        uint8_t extraout_AL_39;
        uint8_t extraout_AL_40;
        uint8_t extraout_AL_41;
        uint8_t extraout_AL_42;
        uint8_t extraout_AL_43;
        uint8_t extraout_AL_44;
        uint8_t extraout_AH;
        uint8_t extraout_AH_00;
        uint8_t extraout_AH_01;
        uint8_t extraout_AH_02;
        uint8_t extraout_AH_03;
        uint8_t extraout_AH_04;
        uint8_t extraout_AH_05;
        uint8_t extraout_AH_06;
        uint8_t extraout_AH_07;
        uint8_t extraout_AH_08;
        uint8_t extraout_AH_09;
        uint8_t extraout_AH_10;
        uint8_t extraout_AH_11;
        uint8_t extraout_AH_12;
        uint8_t extraout_AH_13;
        uint8_t extraout_AH_14;
        uint8_t extraout_AH_15;
        uint8_t extraout_AH_16;
        uint8_t extraout_AH_17;
        uint8_t extraout_AH_18;
        uint8_t extraout_AH_19;
        uint8_t extraout_AH_20;
        uint8_t extraout_AH_21;
        uint8_t extraout_AH_22;
        uint8_t extraout_AH_23;
        uint8_t extraout_AH_24;
        uint8_t extraout_AH_25;
        uint8_t extraout_AH_26;
        uint8_t extraout_AH_27;
        uint8_t extraout_AH_28;
        uint8_t extraout_AH_29;
        uint8_t extraout_AH_30;
        uint8_t extraout_AH_31;
        uint8_t extraout_AH_32;
        uint8_t extraout_AH_33;
        uint8_t extraout_AH_34;
        uint8_t extraout_AH_35;
        uint8_t extraout_AH_36;
        uint8_t extraout_AH_37;
        uint8_t extraout_AH_38;
        uint8_t extraout_AH_39;
        uint8_t extraout_AH_40;
        uint8_t extraout_AH_41;
        uint8_t extraout_AH_42;
        uint8_t extraout_AH_43;
        uint8_t extraout_AH_44;
        uint8_t extraout_AH_45;
        uint8_t extraout_AH_46;
        uint8_t extraout_AH_47;
        uint16_t extraout_var;
        uint16_t extraout_var_00;
        uint16_t extraout_var_01;
        uint16_t extraout_var_02;
        uint16_t extraout_var_03;
        uint16_t extraout_var_04;
        uint16_t extraout_var_05;
        uint16_t extraout_var_06;
        uint16_t extraout_var_07;
        uint16_t extraout_var_08;
        uint16_t extraout_var_09;
        uint16_t extraout_var_10;
        uint16_t extraout_var_11;
        uint16_t extraout_var_12;
        uint16_t extraout_var_13;
        uint16_t extraout_var_14;
        uint16_t extraout_var_15;
        uint16_t extraout_var_16;
        uint16_t extraout_var_17;
        uint16_t extraout_var_18;
        uint16_t extraout_var_19;
        uint16_t extraout_var_20;
        uint16_t extraout_var_21;
        uint16_t extraout_var_22;
        uint16_t extraout_var_23;
        uint16_t extraout_var_24;
        uint16_t extraout_var_25;
        uint16_t extraout_var_26;
        uint16_t extraout_var_27;
        uint16_t extraout_var_28;
        uint16_t extraout_var_29;
        uint16_t extraout_var_30;
        uint16_t extraout_var_31;
        uint16_t extraout_var_32;
        uint16_t extraout_var_33;
        uint16_t extraout_var_34;
        uint16_t extraout_var_35;
        uint16_t extraout_var_36;
        uint16_t extraout_var_37;
        uint16_t extraout_var_38;
        uint16_t extraout_var_39;
        uint16_t extraout_var_40;
        uint16_t extraout_var_41;
        uint16_t extraout_var_42;
        uint16_t extraout_var_43;
        uint16_t extraout_var_44;
        uint32_t extraout_var_45;
        uint32_t extraout_var_46;
        uint32_t extraout_var_47;
        uint32_t extraout_var_48;
        uint32_t extraout_var_49;
        uint32_t extraout_var_50;
        uint32_t extraout_var_51;
        uint32_t extraout_var_52;
        uint32_t extraout_var_53;
        uint32_t extraout_var_54;
        uint32_t extraout_var_55;
        uint32_t extraout_var_56;
        uint32_t extraout_var_57;
        uint32_t extraout_var_58;
        uint32_t extraout_var_59;
        uint32_t extraout_var_60;
        uint32_t extraout_var_61;
        uint32_t extraout_var_62;
        uint32_t extraout_var_63;
        uint32_t extraout_var_64;
        uint32_t extraout_var_65;
        uint32_t extraout_var_66;
        uint32_t extraout_var_67;
        uint32_t extraout_var_68;
        uint32_t extraout_var_69;
        uint32_t extraout_var_70;
        uint32_t extraout_var_71;
        uint32_t extraout_var_72;
        uint32_t extraout_var_73;
        uint32_t extraout_var_74;
        unsigned long uVar4;
        array<unsigned int, 4ul> local_58;
        uint8_t local_31;

        uint8_t* this_00 = field_32;
        new (this_00) ObjAppearanceData();
        Array<unsigned short>* local_48 = (Array<unsigned short>*)(field_32 + 32);
        new (local_48) Array<unsigned short>();
        Array<unsigned short>* local_40 = (Array<unsigned short>*)(field_32 + 56);
        new (local_40) Array<unsigned short>();
        objType.operator->();
        ((ObjType*)(((uint64_t)extraout_var_45 << 32) |
                    (uint32_t)((((uint32_t)extraout_var << 16) |
                                (uint16_t)((((uint16_t)extraout_AH << 8) | (uint8_t)extraout_AL))))))
            ->GetManAppearance();
        *this = (*((ObjAppearanceData*)(((uint64_t)extraout_var_46 << 32) |
                                        (uint32_t)((((uint32_t)extraout_var_00 << 16) |
                                                    (uint16_t)((((uint16_t)extraout_AH_00 << 8) |
                                                                (uint8_t)extraout_AL_00)))))));
        objType.operator->();
        ((ObjType*)(((uint64_t)extraout_var_47 << 32) |
                    (uint32_t)((((uint32_t)extraout_var_01 << 16) |
                                (uint16_t)((((uint16_t)extraout_AH_01 << 8) | (uint8_t)extraout_AL_01))))))
            ->GetWomanAppearance();
        *this_00 = (*((ObjAppearanceData*)(((uint64_t)extraout_var_48 << 32) |
                                           (uint32_t)((((uint32_t)extraout_var_02 << 16) |
                                                       (uint16_t)((((uint16_t)extraout_AH_02 << 8) |
                                                                   (uint8_t)extraout_AL_02)))))));
        objType.operator->();
        ((ObjType*)(((uint64_t)extraout_var_49 << 32) |
                    (uint32_t)((((uint32_t)extraout_var_03 << 16) |
                                (uint16_t)((((uint16_t)extraout_AH_03 << 8) | (uint8_t)extraout_AL_03))))))
            ->GetRecolourDest();
        if (!(((Array<VarValue>*)(((uint64_t)extraout_var_50 << 32) |
                                  (uint32_t)((
                                      ((uint32_t)extraout_var_04 << 16) |
                                      (uint16_t)((((uint16_t)extraout_AH_04 << 8) | (uint8_t)extraout_AL_04))))))
                  ->empty())) {
            *local_48 = (*((Array<unsigned short>*)(((uint64_t)extraout_var_50 << 32) |
                                                    (uint32_t)((((uint32_t)extraout_var_04 << 16) |
                                                                (uint16_t)((((uint16_t)extraout_AH_04 << 8) |
                                                                            (uint8_t)extraout_AL_04)))))));
        }
        objType.operator->();
        ((ObjType*)(((uint64_t)extraout_var_51 << 32) |
                    (uint32_t)((((uint32_t)extraout_var_05 << 16) |
                                (uint16_t)((((uint16_t)extraout_AH_05 << 8) | (uint8_t)extraout_AL_05))))))
            ->GetRematerialDest();
        if (!(((Array<VarValue>*)(((uint64_t)extraout_var_52 << 32) |
                                  (uint32_t)((
                                      ((uint32_t)extraout_var_06 << 16) |
                                      (uint16_t)((((uint16_t)extraout_AH_06 << 8) | (uint8_t)extraout_AL_06))))))
                  ->empty())) {
            *local_40 = (*((Array<unsigned short>*)(((uint64_t)extraout_var_52 << 32) |
                                                    (uint32_t)((((uint32_t)extraout_var_06 << 16) |
                                                                (uint16_t)((((uint16_t)extraout_AH_06 << 8) |
                                                                            (uint8_t)extraout_AL_06)))))));
        }
        uint8_t bVar2 = arg2.g1();
        if ((bVar2 & 1) != 0) {
            arg2.gSmart2or4s();
            new (this)
                std::__cxx_atomic_base_impl((((uint32_t)extraout_var_07 << 16) |
                                             (uint16_t)((((uint16_t)extraout_AH_07 << 8) | (uint8_t)extraout_AL_07))));
            arg2.gSmart2or4s();
            new (this_00)
                std::__cxx_atomic_base_impl((((uint32_t)extraout_var_08 << 16) |
                                             (uint16_t)((((uint16_t)extraout_AH_08 << 8) | (uint8_t)extraout_AL_08))));
            objType.operator->();
            ((ObjType*)(((uint64_t)extraout_var_53 << 32) |
                        (uint32_t)((((uint32_t)extraout_var_09 << 16) |
                                    (uint16_t)((((uint16_t)extraout_AH_09 << 8) | (uint8_t)extraout_AL_09))))))
                ->GetManAppearance();
            ((CoordMapSquare*)(((uint64_t)extraout_var_54 << 32) |
                               (uint32_t)((((uint32_t)extraout_var_10 << 16) |
                                           (uint16_t)((((uint16_t)extraout_AH_10 << 8) | (uint8_t)extraout_AL_10))))))
                ->GetZ();
            if ((((uint32_t)extraout_var_11 << 16) |
                 (uint16_t)((((uint16_t)extraout_AH_11 << 8) | (uint8_t)extraout_AL_11))) == -1) {
                objType.operator->();
                ((ObjType*)(((uint64_t)extraout_var_55 << 32) |
                            (uint32_t)((((uint32_t)extraout_var_12 << 16) |
                                        (uint16_t)((((uint16_t)extraout_AH_12 << 8) | (uint8_t)extraout_AL_12))))))
                    ->GetWomanAppearance();
                ((CoordMapSquare*)(((uint64_t)extraout_var_56 << 32) |
                                   (uint32_t)((
                                       ((uint32_t)extraout_var_13 << 16) |
                                       (uint16_t)((((uint16_t)extraout_AH_13 << 8) | (uint8_t)extraout_AL_13))))))
                    ->GetZ();
                if ((((uint32_t)extraout_var_14 << 16) |
                     (uint16_t)((((uint16_t)extraout_AH_14 << 8) | (uint8_t)extraout_AL_14))) != -1)
                    goto LAB_100509da1;
            } else {
            LAB_100509da1:
                arg2.gSmart2or4s();
                SetZ((((uint32_t)extraout_var_15 << 16) |
                      (uint16_t)((((uint16_t)extraout_AH_15 << 8) | (uint8_t)extraout_AL_15))));
                arg2.gSmart2or4s();
                this_00->SetZ((((uint32_t)extraout_var_16 << 16) |
                               (uint16_t)((((uint16_t)extraout_AH_16 << 8) | (uint8_t)extraout_AL_16))));
            }
            objType.operator->();
            ((ObjType*)(((uint64_t)extraout_var_57 << 32) |
                        (uint32_t)((((uint32_t)extraout_var_17 << 16) |
                                    (uint16_t)((((uint16_t)extraout_AH_17 << 8) | (uint8_t)extraout_AL_17))))))
                ->GetManAppearance();
            ((CommandLine*)(((uint64_t)extraout_var_58 << 32) |
                            (uint32_t)((((uint32_t)extraout_var_18 << 16) |
                                        (uint16_t)((((uint16_t)extraout_AH_18 << 8) | (uint8_t)extraout_AL_18))))))
                ->GetPos();
            if ((((uint32_t)extraout_var_19 << 16) |
                 (uint16_t)((((uint16_t)extraout_AH_19 << 8) | (uint8_t)extraout_AL_19))) == -1) {
                objType.operator->();
                ((ObjType*)(((uint64_t)extraout_var_59 << 32) |
                            (uint32_t)((((uint32_t)extraout_var_20 << 16) |
                                        (uint16_t)((((uint16_t)extraout_AH_20 << 8) | (uint8_t)extraout_AL_20))))))
                    ->GetWomanAppearance();
                ((CommandLine*)(((uint64_t)extraout_var_60 << 32) |
                                (uint32_t)((((uint32_t)extraout_var_21 << 16) |
                                            (uint16_t)((((uint16_t)extraout_AH_21 << 8) | (uint8_t)extraout_AL_21))))))
                    ->GetPos();
                if ((((uint32_t)extraout_var_22 << 16) |
                     (uint16_t)((((uint16_t)extraout_AH_22 << 8) | (uint8_t)extraout_AL_22))) == -1)
                    goto LAB_100509e23;
            }
            arg2.gSmart2or4s();
            new (this) oldscape::ServerConnectionWorkItem(
                (((uint32_t)extraout_var_23 << 16) |
                 (uint16_t)((((uint16_t)extraout_AH_23 << 8) | (uint8_t)extraout_AL_23))));
            arg2.gSmart2or4s();
            new (this_00) oldscape::ServerConnectionWorkItem(
                (((uint32_t)extraout_var_24 << 16) |
                 (uint16_t)((((uint16_t)extraout_AH_24 << 8) | (uint8_t)extraout_AL_24))));
        }
    LAB_100509e23:
        if ((bVar2 & 2) != 0) {
            arg2.gSmart2or4s();
            SetLevel((((uint32_t)extraout_var_25 << 16) |
                      (uint16_t)((((uint16_t)extraout_AH_25 << 8) | (uint8_t)extraout_AL_25))));
            arg2.gSmart2or4s();
            this_00->SetLevel((((uint32_t)extraout_var_26 << 16) |
                               (uint16_t)((((uint16_t)extraout_AH_26 << 8) | (uint8_t)extraout_AL_26))));
            objType.operator->();
            ((ObjType*)(((uint64_t)extraout_var_61 << 32) |
                        (uint32_t)((((uint32_t)extraout_var_27 << 16) |
                                    (uint16_t)((((uint16_t)extraout_AH_27 << 8) | (uint8_t)extraout_AL_27))))))
                ->GetManAppearance();
            ((TextRun*)(((uint64_t)extraout_var_62 << 32) |
                        (uint32_t)((((uint32_t)extraout_var_28 << 16) |
                                    (uint16_t)((((uint16_t)extraout_AH_28 << 8) | (uint8_t)extraout_AL_28))))))
                ->GetMaxLineWidth();
            if ((((uint32_t)extraout_var_29 << 16) |
                 (uint16_t)((((uint16_t)extraout_AH_29 << 8) | (uint8_t)extraout_AL_29))) == -1) {
                objType.operator->();
                ((ObjType*)(((uint64_t)extraout_var_63 << 32) |
                            (uint32_t)((((uint32_t)extraout_var_30 << 16) |
                                        (uint16_t)((((uint16_t)extraout_AH_30 << 8) | (uint8_t)extraout_AL_30))))))
                    ->GetWomanAppearance();
                ((TextRun*)(((uint64_t)extraout_var_64 << 32) |
                            (uint32_t)((((uint32_t)extraout_var_31 << 16) |
                                        (uint16_t)((((uint16_t)extraout_AH_31 << 8) | (uint8_t)extraout_AL_31))))))
                    ->GetMaxLineWidth();
                if ((((uint32_t)extraout_var_32 << 16) |
                     (uint16_t)((((uint16_t)extraout_AH_32 << 8) | (uint8_t)extraout_AL_32))) == -1)
                    goto LAB_100509eae;
            }
            arg2.gSmart2or4s();
            SetCompletedCount((((uint32_t)extraout_var_33 << 16) |
                               (uint16_t)((((uint16_t)extraout_AH_33 << 8) | (uint8_t)extraout_AL_33))));
            arg2.gSmart2or4s();
            this_00->SetCompletedCount((((uint32_t)extraout_var_34 << 16) |
                                        (uint16_t)((((uint16_t)extraout_AH_34 << 8) | (uint8_t)extraout_AL_34))));
        }
    LAB_100509eae:
        if ((bVar2 & 4) != 0) {
            local_31 = bVar2;
            uVar3 = arg2.g2();
            uVar4 = 0;
            local_58[0];
            *(unsigned int*)(((uint64_t)extraout_var_65 << 32) |
                             (uint32_t)((((uint32_t)extraout_var_35 << 16) |
                                         (uint16_t)((((uint16_t)extraout_AH_36 << 8) | (uint8_t)extraout_AL_35))))) =
                (((uint16_t)extraout_AH_35 << 8) | (uint8_t)uVar3) & 15;
            local_58[1];
            *(unsigned int*)(((uint64_t)extraout_var_66 << 32) |
                             (uint32_t)((((uint32_t)extraout_var_36 << 16) |
                                         (uint16_t)((((uint16_t)extraout_AH_37 << 8) | (uint8_t)extraout_AL_36))))) =
                (unsigned short)((((uint16_t)extraout_AH_35 << 8) | (uint8_t)uVar3) >> 4) & 15;
            local_58[2];
            *(unsigned int*)(((uint64_t)extraout_var_67 << 32) |
                             (uint32_t)((((uint32_t)extraout_var_37 << 16) |
                                         (uint16_t)((((uint16_t)extraout_AH_38 << 8) | (uint8_t)extraout_AL_37))))) =
                extraout_AH_35 & 15;
            local_58[3];
            *(unsigned int*)(((uint64_t)extraout_var_68 << 32) |
                             (uint32_t)((((uint32_t)extraout_var_38 << 16) |
                                         (uint16_t)((((uint16_t)extraout_AH_39 << 8) | (uint8_t)extraout_AL_38))))) =
                (unsigned int)(extraout_AH_35 >> 4);
            do {
                local_58[uVar4];
                if (*(int*)(((uint64_t)extraout_var_69 << 32) |
                            (uint32_t)((((uint32_t)extraout_var_39 << 16) |
                                        (uint16_t)((((uint16_t)extraout_AH_40 << 8) | (uint8_t)extraout_AL_39))))) !=
                    15) {
                    uVar3 = arg2.g2();
                    (*local_48)[(unsigned long)*(
                        unsigned int*)(((uint64_t)extraout_var_69 << 32) |
                                       (uint32_t)((
                                           ((uint32_t)extraout_var_39 << 16) |
                                           (uint16_t)((((uint16_t)extraout_AH_40 << 8) | (uint8_t)extraout_AL_39)))))];
                    *(unsigned short*)(((uint64_t)extraout_var_70 << 32) |
                                       (uint32_t)((
                                           ((uint32_t)extraout_var_40 << 16) |
                                           (uint16_t)((((uint16_t)extraout_AH_42 << 8) | (uint8_t)extraout_AL_40))))) =
                        (((uint16_t)extraout_AH_41 << 8) | (uint8_t)uVar3);
                }
                uVar4 = uVar4 + 1;
                bVar2 = local_31;
            } while (uVar4 != 4);
        }
        if ((bVar2 & 8) != 0) {
            bVar2 = arg2.g1();
            uVar4 = 0;
            local_58[0];
            *(unsigned int*)(((uint64_t)extraout_var_71 << 32) |
                             (uint32_t)((((uint32_t)extraout_var_41 << 16) |
                                         (uint16_t)((((uint16_t)extraout_AH_43 << 8) | (uint8_t)extraout_AL_41))))) =
                bVar2 & 15;
            local_58[1];
            *(unsigned int*)(((uint64_t)extraout_var_72 << 32) |
                             (uint32_t)((((uint32_t)extraout_var_42 << 16) |
                                         (uint16_t)((((uint16_t)extraout_AH_44 << 8) | (uint8_t)extraout_AL_42))))) =
                (unsigned int)(bVar2 >> 4);
            do {
                local_58[uVar4];
                if (*(int*)(((uint64_t)extraout_var_73 << 32) |
                            (uint32_t)((((uint32_t)extraout_var_43 << 16) |
                                        (uint16_t)((((uint16_t)extraout_AH_45 << 8) | (uint8_t)extraout_AL_43))))) !=
                    15) {
                    uVar3 = arg2.g2();
                    (*local_40)[(unsigned long)*(
                        unsigned int*)(((uint64_t)extraout_var_73 << 32) |
                                       (uint32_t)((
                                           ((uint32_t)extraout_var_43 << 16) |
                                           (uint16_t)((((uint16_t)extraout_AH_45 << 8) | (uint8_t)extraout_AL_43)))))];
                    *(unsigned short*)(((uint64_t)extraout_var_74 << 32) |
                                       (uint32_t)((
                                           ((uint32_t)extraout_var_44 << 16) |
                                           (uint16_t)((((uint16_t)extraout_AH_47 << 8) | (uint8_t)extraout_AL_44))))) =
                        (((uint16_t)extraout_AH_46 << 8) | (uint8_t)uVar3);
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 != 2);
        }
    }

} // namespace jag::game

namespace jag {
    // 0x10050e410
    game::BuildModelMain*
    placement_new<game::BuildModelMain, int&, graphics::ModelConstructedState, bool, graphics::RT7Core*&,
                  eastl::fixed_vector<PacketView, 1ul>, shared_ptr<graphics::Model>&>(
        void* arg1, int& arg2, graphics::ModelConstructedState&& modelConstructedState, bool&& arg4,
        graphics::RT7Core*& arg5, eastl::fixed_vector<PacketView, 1ul>&& packetViews,
        shared_ptr<graphics::Model>& model) {
        new (arg1) game::BuildModelMain(arg2, modelConstructedState, arg4, arg5, packetViews, model);
        return arg1;
    }

    // 0x10050fa50
    game::NPCType* placement_new<game::NPCType, game::BaseTemplateConfigTypeList<game::NPCType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::NPCType>*& arg2, int& arg3) {
        new (arg1) game::NPCType(arg2, arg3);
        return arg1;
    }

    // 0x10050fa70
    MakeSharedPoolRefCounter<game::NPCType, MakeSharedPool<game::NPCType, 216>>*
    placement_new<MakeSharedPoolRefCounter<game::NPCType, MakeSharedPool<game::NPCType, 216>>,
                  MakeSharedPool<game::NPCType, 216>::RefCounterAndData*&, game::NPCType*>(
        void* arg1, MakeSharedPool<game::NPCType, 216>::RefCounterAndData*& arg2, game::NPCType*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::NPCType, MakeSharedPool<game::NPCType, 216>>(arg2, arg3);
        return arg1;
    }

    // 0x10050fa90
    void shared_ptr_do_enable_shared_from_this<game::NPCType>(ref_counter_base* ref_counter_base,
                                                              game::NPCType* npcType,
                                                              game::NPCType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)npcType);
            local_38 = weak_ptr(local_48);
            npcType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

} // namespace jag

// projects/osclient/clientplayer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "clientplayer.h"

namespace jag::oldscape {
    // 0x1000de430, 32 bytes, placed by class name and debug map
    // ClientPlayer::Ready() const
    bool ClientPlayer::Ready() {
        bool bVar1;

        bVar1 = operator==((shared_ptr*)&field_1008, (_func_decltype_nullptr*)0);
        return !bVar1;
    }

    // 0x1000e0370, 16 bytes, placed by class name
    // ClientPlayer::ResetIsFriendCachedState()
    void ClientPlayer::ResetIsFriendCachedState() {
        field_1224 = 0;
    }

    // 0x1000e04f0, 16 bytes, placed by class name
    // ClientPlayer::ResetIsFriendChatCachedState()
    void ClientPlayer::ResetIsFriendChatCachedState() {
        field_1228 = 0;
    }

    // 0x1000e0570, 16 bytes, placed by class name
    // ClientPlayer::ResetIsClanCachedState()
    void ClientPlayer::ResetIsClanCachedState() {
        field_1232 = 0;
    }

    // 0x1001026c0, 1376 bytes, placed by class name
    // ClientPlayer::GetTempModel(int)
    ClientPlayer* ClientPlayer::GetTempModel(int param_1) {
        undefined1* this_00;
        uint uVar1;
        bool bVar2;
        int iVar3;
        int iVar4;
        SeqType* pSVar5;
        long* plVar6;
        long lVar7;
        ModelLit* pMVar8;
        uint in_EDX;
        undefined4 in_register_00000034;
        ClientEntity* this_01;
        SingleAppendList local_b8;
        undefined1 local_a8[16];
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_78[16];
        shared_ptr local_68;
        shared_ptr local_58;
        shared_ptr<dash3d::Decor> local_48[20];
        uint local_34;

        this_01 = (ClientEntity*)CONCAT44(in_register_00000034, param_1);
        local_34 = in_EDX;
        bVar2 = operator==((shared_ptr*)&this_01[1].field_48, (_func_decltype_nullptr*)0);
        if (bVar2) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            return this;
        }
        if ((this_01->field_372 == -1) || (*(int*)&this_01->field_384 != 0)) {
            new (&local_68) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            local_68.List(this_01->field_372);
        }
        if (((*(int*)&this_01->field_356 == -1) || (this_01[1].field_228[4] != '\0')) ||
            ((*(int*)&this_01->field_356 == this_01->field_48 &&
              (bVar2 = operator==(&local_68, (_func_decltype_nullptr*)0), !bVar2)))) {
            shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_78, (_func_decltype_nullptr*)0);
        } else {
            local_78->List(*(int*)&this_01->field_356);
        }
        pSVar5 = (SeqType*)shared_ptr<rs2lib::PlayerModel>::operator->(
            (shared_ptr<rs2lib::PlayerModel>*)&this_01[1].field_48);
        iVar3 = local_68.end();
        uVar1 = *(uint*)&this_01->field_376;
        iVar4 = local_78->end();
        local_58.GetTempModel(pSVar5, iVar3, (SeqType*)(ulong)uVar1, iVar4);
        bVar2 = operator==(&local_58, (_func_decltype_nullptr*)0);
        if (bVar2) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_58);
            (**(code**)(*plVar6 + 64))(plVar6);
            lVar7 = shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_58);
            *(undefined4*)&this_01->field_424 = *(undefined4*)(lVar7 + 8);
            if (((this_01->field_559 != '\0') && (*(int*)((long)&this_01->field_544 + 4) <= (int)local_34)) &&
                ((int)local_34 < (int)this_01->field_552)) {
                plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_58);
                (**(code**)(*plVar6 + 176))(plVar6, (int)(char)this_01->field_556, (int)(char)this_01->field_557,
                                            (int)(char)this_01->field_558, this_01->field_559);
            }
            if (this_01[1].field_228[4] == '\0') {
                this_01->CombineWithSpotAnim(&local_58);
            }
            if (this_01[1].field_228[4] == '\0') {
                this_00 = &this_01[1].field_200;
                bVar2 = operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
                if (bVar2) {
                    if (*(int*)&this_01[1].field_184 <= (int)local_34) {
                        new ((local_a8 + 16)) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                        shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)this_00,
                                                                (shared_ptr*)(local_a8 + 16));
                        ((local_a8 + 16))->~shared_ptr();
                    }
                    if ((*(int*)&this_01[1].field_180 <= (int)local_34) &&
                        ((int)local_34 < *(int*)&this_01[1].field_184)) {
                        shared_ptr<dash3d::Decor>::shared_ptr(local_48, (shared_ptr*)this_00);
                        plVar6 =
                            (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)local_48);
                        (**(code**)(*plVar6 + 160))(plVar6, *(int*)&this_01[1].field_188 - *(int*)&this_01->field_24,
                                                    *(int*)&this_01[1].field_192 - *(int*)&this_01[1].field_176,
                                                    *(int*)&this_01[1].field_196 -
                                                        *(int*)((long)&this_01->field_24 + 4));
                        iVar3 = *(int*)((long)&this_01->field_424 + 4);
                        if (iVar3 == 1536) {
                            plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->(
                                (shared_ptr<dash3d::ModelLit>*)local_48);
                            (**(code**)(*plVar6 + 128))(plVar6);
                        } else if (iVar3 == 1024) {
                            plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->(
                                (shared_ptr<dash3d::ModelLit>*)local_48);
                            (**(code**)(*plVar6 + 128))(plVar6);
                            plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->(
                                (shared_ptr<dash3d::ModelLit>*)local_48);
                            (**(code**)(*plVar6 + 128))(plVar6);
                        } else if (iVar3 == 512) {
                            plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->(
                                (shared_ptr<dash3d::ModelLit>*)local_48);
                            (**(code**)(*plVar6 + 128))(plVar6);
                            plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->(
                                (shared_ptr<dash3d::ModelLit>*)local_48);
                            (**(code**)(*plVar6 + 128))(plVar6);
                            plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->(
                                (shared_ptr<dash3d::ModelLit>*)local_48);
                            (**(code**)(*plVar6 + 128))(plVar6);
                        }
                        pMVar8 =
                            (ModelLit*)shared_ptr<dash3d::ModelLit>::operator*((shared_ptr<dash3d::ModelLit>*)local_48);
                        new (&local_b8) dash3d::SingleAppendList(pMVar8);
                        new ((local_a8 + 16)) dash3d::ModelAppender(&local_58, (ModelAppendList*)&local_b8);
                        local_a8->Resolve();
                        shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)&local_58,
                                                                (shared_ptr*)local_a8);
                        local_a8->~shared_ptr();
                        ((local_a8 + 16))->~pair();
                        iVar3 = *(int*)((long)&this_01->field_424 + 4);
                        if (iVar3 == 1536) {
                            plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->(
                                (shared_ptr<dash3d::ModelLit>*)local_48);
                            (**(code**)(*plVar6 + 128))(plVar6);
                            plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->(
                                (shared_ptr<dash3d::ModelLit>*)local_48);
                            (**(code**)(*plVar6 + 128))(plVar6);
                            plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->(
                                (shared_ptr<dash3d::ModelLit>*)local_48);
                            (**(code**)(*plVar6 + 128))(plVar6);
                        } else if (iVar3 == 1024) {
                            plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->(
                                (shared_ptr<dash3d::ModelLit>*)local_48);
                            (**(code**)(*plVar6 + 128))(plVar6);
                            plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->(
                                (shared_ptr<dash3d::ModelLit>*)local_48);
                            (**(code**)(*plVar6 + 128))(plVar6);
                        } else if (iVar3 == 512) {
                            plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->(
                                (shared_ptr<dash3d::ModelLit>*)local_48);
                            (**(code**)(*plVar6 + 128))(plVar6);
                        }
                        plVar6 =
                            (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)local_48);
                        (**(code**)(*plVar6 + 160))(plVar6, *(int*)&this_01->field_24 - *(int*)&this_01[1].field_188,
                                                    *(int*)&this_01[1].field_176 - *(int*)&this_01[1].field_192,
                                                    *(int*)((long)&this_01->field_24 + 4) -
                                                        *(int*)&this_01[1].field_196);
                        local_48->~shared_ptr();
                    }
                }
            }
            lVar7 = shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_58);
            *(undefined1*)(lVar7 + 16) = 1;
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)this, &local_58);
        }
        local_58.~shared_ptr();
        local_78->~shared_ptr();
        local_68.~shared_ptr();
        return this;
    }

    // 0x1001067e0, 48 bytes, placed by class name
    // ClientPlayer::IsOnlineFriend()
    bool ClientPlayer::IsOnlineFriend() {
        if (field_1224 == 0) {
            RecalcIsOnlineFriend(this);
        }
        return field_1224 == 1;
    }

    // 0x100106810, 48 bytes, placed by class name
    // ClientPlayer::IsFriendChat()
    bool ClientPlayer::IsFriendChat() {
        if (field_1228 == 0) {
            RecalcIsFriendChat(this);
        }
        return field_1228 == 1;
    }

    // 0x100110640, 128 bytes, placed by class name
    // ClientPlayer::HasAnyOverlays(int, int) const
    ulong ClientPlayer::HasAnyOverlays(int param_1, int param_2) {
        char cVar1;
        undefined8 unaff_R14;
        undefined7 uVar3;
        ulong uVar2;

        cVar1 = HasHeadbar();
        uVar3 = (undefined7)((ulong)unaff_R14 >> 8);
        uVar2 = CONCAT71(uVar3, 1);
        if (cVar1 == '\0') {
            cVar1 = HasHitmark(param_1);
            if (cVar1 == '\0') {
                cVar1 = HasScriptedOverlays();
                if ((cVar1 == '\0') && (field_1208 != param_2)) {
                    cVar1 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                    if ((cVar1 != '\0') && (field_1024 == -1)) {
                        uVar2 = CONCAT71(uVar3, field_1028 != -1);
                    }
                }
            }
        }
        return uVar2 & 4294967295;
    }

    // 0x10011be00, 144 bytes, placed by class name
    // ClientPlayer::GetSize()
    undefined4 ClientPlayer::GetSize() {
        bool bVar1;
        long lVar2;
        undefined1* this_00;
        undefined4 uVar3;
        shared_ptr<RSevenDebugPresetProvider> local_28[16];

        this_00 = &field_1008;
        bVar1 = operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
        uVar3 = 1;
        if (bVar1) {
            lVar2 = shared_ptr<rs2lib::PlayerModel>::operator->((shared_ptr<rs2lib::PlayerModel>*)this_00);
            if (*(int*)(lVar2 + 240) != -1) {
                lVar2 = shared_ptr<rs2lib::PlayerModel>::operator->((shared_ptr<rs2lib::PlayerModel>*)this_00);
                local_28->List(*(int*)(lVar2 + 240));
                lVar2 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)local_28);
                uVar3 = *(undefined4*)(lVar2 + 40);
                local_28->~shared_ptr();
            }
        }
        return uVar3;
    }

    // 0x10011be90, 304 bytes, placed by class name
    // ClientPlayer::AddRoutePoint(int, int, signed char)
    void ClientPlayer::AddRoutePoint(undefined4 param_1, undefined4 param_2, undefined1 param_4) {
        undefined1* this_00;
        undefined1 uVar1;
        undefined4 uVar2;
        bool bVar3;
        undefined4* puVar4;
        undefined1* puVar5;
        undefined1* puVar6;
        undefined1* this_01;
        ulong uVar7;
        uint uVar8;
        ulong uVar9;

        if ((int)field_440 < 9) {
            field_440 = field_440 + 1;
        }
        uVar8 = field_440;
        puVar6 = &field_444;
        this_00 = &field_484;
        this_01 = &field_524;
        if (0 < (int)uVar8) {
            uVar9 = (ulong)uVar8;
            do {
                uVar8 = uVar8 - 1;
                uVar7 = (ulong)uVar8;
                puVar4 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar6, uVar7);
                uVar2 = *puVar4;
                puVar4 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar6, uVar9);
                *puVar4 = uVar2;
                puVar4 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)this_00, uVar7);
                uVar2 = *puVar4;
                puVar4 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)this_00, uVar9);
                *puVar4 = uVar2;
                puVar5 =
                    (undefined1*)std::array<signed char, 10ul>::operator[]((array<signed char, 10ul>*)this_01, uVar7);
                uVar1 = *puVar5;
                puVar5 =
                    (undefined1*)std::array<signed char, 10ul>::operator[]((array<signed char, 10ul>*)this_01, uVar9);
                *puVar5 = uVar1;
                bVar3 = 1 < (long)uVar9;
                uVar9 = uVar9 - 1;
            } while (bVar3);
        }
        puVar4 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar6, 0);
        *puVar4 = param_1;
        puVar4 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)this_00, 0);
        *puVar4 = param_2;
        puVar6 = (undefined1*)std::array<signed char, 10ul>::operator[]((array<signed char, 10ul>*)this_01, 0);
        *puVar6 = param_4;
    }

    // 0x10011cfb0, 80 bytes, placed by class name
    // ClientPlayer::Init()
    void ClientPlayer::Init() {
        long lVar1;

        lVar1 = 0;
        do {
            ((field_276 + lVar1 + 756), "")->assign();
            lVar1 = lVar1 + 32;
        } while (lVar1 != 96);
    }

    // 0x10011d000, 64 bytes, placed by class name
    // ClientPlayer::HasAppearance() const
    ulong ClientPlayer::HasAppearance() {
        bool bVar1;
        undefined7 extraout_var;
        ulong uVar2;

        uVar2 = 0;
        bVar1 = operator!=((shared_ptr*)&field_992, (_func_decltype_nullptr*)0);
        if (bVar1) {
            bVar1 = operator!=((shared_ptr*)&field_1008, (_func_decltype_nullptr*)0);
            uVar2 = CONCAT71(extraout_var, bVar1) & 4294967295;
        }
        return uVar2;
    }

    // 0x10011d040, 2032 bytes, placed by class name
    // ClientPlayer::SetAppearance(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClientPlayer::SetAppearance(PacketJ* param_1) {
        PacketJ* this_00;
        ClientPlayer* pCVar1;
        byte bVar2;
        char cVar3;
        bool bVar4;
        undefined1 uVar5;
        ushort uVar6;
        uint uVar7;
        int iVar8;
        uint* puVar9;
        int* piVar10;
        long lVar11;
        undefined4* puVar12;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        DisplayName* pDVar13;
        basic_string* pbVar14;
        ClientPlayer* pCVar15;
        shared_ptr<configdecoder::ObjTypeCustomisation>* this_02;
        PlayerModel* pPVar16;
        ulong uVar17;
        undefined1* puVar18;
        eastl::string local_1b0[32];
        Array<shared_ptr<configdecoder::ObjTypeCustomisation>, eastl::allocator> local_190[24];
        shared_ptr local_178;
        ObjTypeCustomisation local_160;
        uint local_140;
        uint local_13c;
        PacketJ* local_138;
        ClientPlayer* local_130;
        vector<int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true, eastl::allocator>> local_128[64];
        vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>> local_e8[88];
        vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>> local_90[88];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar17 = 0;
        param_1->SetPos(0);
        bVar2 = param_1->g1();
        local_140 = (uint)bVar2;
        cVar3 = param_1->g1s();
        field_1024 = (int)cVar3;
        cVar3 = param_1->g1s();
        field_1028 = (int)cVar3;
        field_1196 = 0;
        local_130 = this;
        eastl::fixed_vector<int, 12ul, true, eastl::allocator>::fixed_vector((ulong)local_90);
        local_13c = 4294967295;
        local_138 = param_1;
        do {
            bVar2 = param_1->g1();
            if (bVar2 == 0) {
                puVar12 = (undefined4*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        local_90, uVar17);
                *puVar12 = 0;
                bVar4 = false;
            } else {
                uVar7 = param_1->g1();
                puVar9 =
                    (uint*)eastl::vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](local_90,
                                                                                                           uVar17);
                *puVar9 = uVar7 & 255 | (uint)bVar2 << 8;
                if (uVar17 == 0) {
                    piVar10 =
                        (int*)eastl::vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true,
                                                                               eastl::allocator>>::operator[](local_90,
                                                                                                              0);
                    if (*piVar10 == 65535) {
                        uVar6 = param_1->g2();
                        local_13c = (uint)uVar6;
                        bVar4 = true;
                        goto LAB_10011d1d6;
                    }
                }
                piVar10 =
                    (int*)eastl::vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true,
                                                                           eastl::allocator>>::operator[](local_90,
                                                                                                          uVar17);
                bVar4 = false;
                if (511 < *piVar10) {
                    piVar10 =
                        (int*)eastl::vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true,
                                                                               eastl::allocator>>::operator[](local_90,
                                                                                                              uVar17);
                    local_e8->List(*piVar10 + -512);
                    lVar11 =
                        shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)local_e8);
                    iVar8 = *(int*)(lVar11 + 756);
                    local_e8->~shared_ptr();
                    if (iVar8 != 0) {
                        local_130->field_1196 = iVar8;
                    }
                    param_1 = local_138;
                }
            }
        LAB_10011d1d6:
            if ((bVar4) || (uVar17 = uVar17 + 1, uVar17 == 12)) {
                eastl::fixed_vector<int, 12ul, true, eastl::allocator>::fixed_vector((ulong)local_e8);
                lVar11 = Client::Instance();
                if (212 < *(int*)(lVar11 + 54700)) {
                    uVar17 = 0;
                    do {
                        bVar2 = param_1->g1();
                        if (bVar2 == 0) {
                            puVar12 = (undefined4*)eastl::vector<
                                int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true,
                                                                   eastl::allocator>>::operator[](local_e8, uVar17);
                            *puVar12 = 0;
                        } else {
                            uVar7 = param_1->g1();
                            puVar9 = (uint*)eastl::vector<
                                int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true,
                                                                   eastl::allocator>>::operator[](local_e8, uVar17);
                            *puVar9 = uVar7 & 255 | (uint)bVar2 << 8;
                        }
                        uVar17 = uVar17 + 1;
                    } while (uVar17 != 12);
                }
                eastl::fixed_vector<int, 5ul, true, eastl::allocator>::fixed_vector((ulong)local_128);
                uVar17 = 0;
                do {
                    uVar7 = local_138->g1();
                    this_01 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                        std::array<Array<short, eastl::allocator>, 5ul>::operator[](uVar17);
                    iVar8 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
                    puVar9 = (uint*)
                        eastl::vector<int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](local_128, uVar17);
                    this_00 = local_138;
                    uVar7 = uVar7 & 255;
                    if (iVar8 <= (int)uVar7) {
                        uVar7 = 0;
                    }
                    *puVar9 = uVar7;
                    uVar17 = uVar17 + 1;
                } while (uVar17 != 5);
                uVar6 = local_138->g2();
                pCVar1 = local_130;
                uVar7 = (uint)uVar6;
                if (uVar6 == 65535) {
                    uVar7 = 4294967295;
                }
                local_130->field_48 = uVar7;
                uVar6 = this_00->g2();
                uVar7 = 4294967295;
                if (uVar6 != 65535) {
                    uVar7 = (uint)uVar6;
                }
                pCVar1->field_52 = uVar7;
                pCVar1->field_56 = uVar7;
                uVar6 = this_00->g2();
                uVar7 = (uint)uVar6;
                if (uVar6 == 65535) {
                    uVar7 = 4294967295;
                }
                pCVar1->field_60 = uVar7;
                uVar6 = this_00->g2();
                uVar7 = 4294967295;
                if (uVar6 != 65535) {
                    uVar7 = (uint)uVar6;
                }
                pCVar1->field_64 = uVar7;
                uVar6 = this_00->g2();
                uVar7 = (uint)uVar6;
                if (uVar6 == 65535) {
                    uVar7 = 4294967295;
                }
                pCVar1->field_68 = uVar7;
                uVar6 = this_00->g2();
                uVar7 = 4294967295;
                if (uVar6 != 65535) {
                    uVar7 = (uint)uVar6;
                }
                pCVar1->field_72 = uVar7;
                uVar6 = this_00->g2();
                uVar7 = 4294967295;
                if (uVar6 != 65535) {
                    uVar7 = (uint)uVar6;
                }
                pCVar1->field_76 = uVar7;
                puVar18 = &pCVar1->field_992;
                bVar4 = operator!=((shared_ptr*)puVar18, (_func_decltype_nullptr*)0);
                if (bVar4) {
                    pDVar13 = (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator->(
                        (shared_ptr<rs2lib::social::DisplayName>*)puVar18);
                    pbVar14 = (basic_string*)pDVar13->GetDisplayName();
                    eastl::string::basic_string(local_1b0, pbVar14);
                } else {
                    new (&local_160) eastl::allocator("EASTL basic_string");
                    eastl::string::basic_string(local_1b0, "", (allocator*)&local_160);
                }
                PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
                    eastl::string>((PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)&local_160,
                                   SUB81(this_00, 0));
                lVar11 = Client::Instance();
                make_shared<rs2lib::social::DisplayName, eastl::string, rs2lib::social::NameSpace&>(
                    (jag*)&local_178, (basic_string*)&local_160, (NameSpace*)(lVar11 + 54172));
                shared_ptr<rs2lib::social::DisplayName>::operator=((shared_ptr<rs2lib::social::DisplayName>*)puVar18,
                                                                   &local_178);
                local_178.~shared_ptr();
                local_160.~basic_string();
                lVar11 = Client::Instance();
                pCVar15 = (ClientPlayer*)((lVar11 + 52016))->end();
                pCVar1 = local_130;
                if (pCVar15 == local_130) {
                    pDVar13 = (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator->(
                        (shared_ptr<rs2lib::social::DisplayName>*)puVar18);
                    pbVar14 = (basic_string*)pDVar13->GetDisplayName();
                    OldscapeClientError::SetUserName(pbVar14);
                }
                ResetIsFriendCachedState(pCVar1);
                ResetIsFriendChatCachedState(pCVar1);
                ResetIsClanCachedState(pCVar1);
                bVar2 = this_00->g1();
                *(uint*)&pCVar1->field_1128 = (uint)bVar2;
                uVar6 = this_00->g2();
                *(uint*)((long)&pCVar1->field_1128 + 4) = (uint)uVar6;
                cVar3 = this_00->g1();
                pCVar1->field_1200 = cVar3 == '\x01';
                lVar11 = Client::Instance();
                if (*(int*)(lVar11 + 54168) == *(int*)(ModeWhere::LIVE + 8)) {
                    lVar11 = Client::Instance();
                    if (1 < *(int*)(lVar11 + 53260)) {
                        local_130->field_1200 = 0;
                    }
                }
                new (&local_178) Array<shared_ptr<configdecoder::ObjTypeCustomisation>, eastl::allocator>();
                uVar7 = this_00->g2();
                if ((uVar7 & 32767) != 0) {
                    lVar11 = 12;
                    local_178.set_max_size(12, 3);
                    uVar17 = 0;
                    do {
                        if (((uVar7 & 65535) >> ((uint)lVar11 & 31) & 1) != 0) {
                            piVar10 = (int*)eastl::vector<
                                int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true,
                                                                   eastl::allocator>>::operator[](local_90, uVar17);
                            local_160.Unpack(*piVar10 + -512, this_00);
                            this_02 = (shared_ptr<configdecoder::ObjTypeCustomisation>*)
                                Array<shared_ptr<configdecoder::ObjTypeCustomisation>, eastl::allocator>::operator[](
                                    (Array<shared_ptr<configdecoder::ObjTypeCustomisation>,
                                           eastl::allocator>*)&local_178,
                                    uVar17);
                            shared_ptr<configdecoder::ObjTypeCustomisation>::operator=(this_02,
                                                                                       (shared_ptr*)&local_160);
                            local_160.~shared_ptr();
                        }
                        uVar17 = uVar17 + 1;
                        lVar11 = lVar11 + -1;
                    } while (lVar11 != 0);
                }
                pCVar1 = local_130;
                lVar11 = 0;
                do {
                    PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
                        eastl::string>(
                        (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)&local_160,
                        SUB81(local_138, 0));
                    eastl::string::operator=((eastl::string*)(pCVar1->field_276 + lVar11 + 756),
                                             (basic_string*)&local_160);
                    local_160.~basic_string();
                    lVar11 = lVar11 + 32;
                } while (lVar11 != 96);
                uVar5 = local_138->g1();
                puVar18 = &local_130->field_1008;
                bVar4 = operator==((shared_ptr*)puVar18, (_func_decltype_nullptr*)0);
                if (bVar4) {
                    make_shared<rs2lib::PlayerModel>((jag*)&local_160);
                    shared_ptr<rs2lib::PlayerModel>::operator=((shared_ptr<rs2lib::PlayerModel>*)puVar18,
                                                               (shared_ptr*)&local_160);
                    local_160.~shared_ptr();
                }
                pPVar16 = (PlayerModel*)shared_ptr<rs2lib::PlayerModel>::operator->(
                    (shared_ptr<rs2lib::PlayerModel>*)puVar18);
                Array<shared_ptr<configdecoder::ObjTypeCustomisation>, eastl::allocator>::Array(local_190,
                                                                                                (Array*)&local_178);
                pPVar16->SetAppearance(local_e8, local_90, local_190, (uVar7 & 65535) >> 15, local_128, local_140,
                                       local_13c, uVar5);
                local_190->~Array();
                local_178.~Array();
                eastl::string::~basic_string(local_1b0);
                local_128->~fixed_vector();
                local_e8->~fixed_vector();
                local_90->~fixed_vector();
                if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                    /* WARNING: Subroutine does not return */
                    ___stack_chk_fail();
                }
                return;
            }
        } while (true);
    }

    // 0x10011db70, 80 bytes, placed by class name
    // ClientPlayer::RecalcIsOnlineFriend()
    void ClientPlayer::RecalcIsOnlineFriend() {
        byte bVar1;
        long lVar2;
        FriendSystem* this_00;
        DisplayName* pDVar3;

        lVar2 = Client::Instance();
        this_00 = (FriendSystem*)std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
            (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)(lVar2 + 52768));
        pDVar3 = (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator*(
            (shared_ptr<rs2lib::social::DisplayName>*)&field_992);
        bVar1 = this_00->IsOnlineFriend(pDVar3);
        field_1224 = 2 - bVar1;
    }

    // 0x10011dbe0, 96 bytes, placed by class name
    // ClientPlayer::RecalcIsFriendChat()
    void ClientPlayer::RecalcIsFriendChat() {
        byte bVar1;
        int iVar2;
        long lVar3;
        PlayerRegistry<social::FriendData>* this_00;
        DisplayName* pDVar4;

        lVar3 = Client::Instance();
        this_00 = (PlayerRegistry<social::FriendData>*)((lVar3 + 52544))->get();
        if (this_00 == (PlayerRegistry<social::FriendData>*)0) {
            iVar2 = 2;
        } else {
            pDVar4 = (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator*(
                (shared_ptr<rs2lib::social::DisplayName>*)&field_992);
            bVar1 = this_00->ContainsPlayerDisplayName(pDVar4);
            iVar2 = 2 - (uint)bVar1;
        }
        field_1228 = iVar2;
    }

    // 0x10011dcf0, 48 bytes, placed by class name
    // ClientPlayer::IsGroup()
    bool ClientPlayer::IsGroup() {
        if (field_1232 == 0) {
            RecalcIsGroup(this);
        }
        return field_1232 == 1;
    }

    // 0x10011dd20, 256 bytes, placed by class name
    // ClientPlayer::RecalcIsGroup()
    void ClientPlayer::RecalcIsGroup() {
        undefined4 uVar3;
        long lVar4;
        shared_ptr* this_00;
        ClanSettings* pCVar5;
        DisplayName* this_01;
        basic_string* pbVar6;
        ulong uVar7;
        bool bVar8;
        eastl::string local_60[32];
        shared_ptr<rs2lib::social::DisplayName>* local_40;

        lVar4 = Client::Instance();
        local_40 = (shared_ptr<rs2lib::social::DisplayName>*)&field_992;
        uVar7 = 0;
        while (true) {
            this_00 = (shared_ptr*)std::array<shared_ptr<rs2lib::social::ClanSettings>, 4ul>::operator[](
                (array<shared_ptr<rs2lib::social::ClanSettings>, 4ul>*)(lVar4 + 52568), uVar7);
            bVar8 = false;
            if (operator!=(this_00, (_func_decltype_nullptr*)0)) {
                pCVar5 = (ClanSettings*)shared_ptr<rs2lib::social::ClanSettings>::operator->(
                    (shared_ptr<rs2lib::social::ClanSettings>*)this_00);
                this_01 = (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator->(local_40);
                pbVar6 = (basic_string*)this_01->GetDisplayName();
                eastl::string::basic_string(local_60, pbVar6);
                bVar8 = pCVar5->FindMember(local_60) != -1;
                eastl::string::~basic_string(local_60);
            }
            if ((bool)(bVar8 & uVar7 != 2))
                break;
            uVar7 = uVar7 + 1;
            if (uVar7 == 4) {
                uVar3 = 2;
            LAB_10011ddf3:
                ((ClientPlayer*)this)->field_1232 = uVar3;
                return;
            }
        }
        uVar3 = 1;
        goto LAB_10011ddf3;
    }

    // 0x10011de30, 288 bytes, placed by class name
    // ClientPlayer::AddToRoute(int, int, signed char)
    void ClientPlayer::AddToRoute(uint param_1, int param_2, undefined4 param_4) {
        int iVar1;
        long lVar2;
        uint* puVar3;
        Client* this_00;
        bool bVar4;
        shared_ptr<RSevenDebugPresetProvider> local_48[20];
        char local_34;

        iVar1 = field_372;
        _local_34 = param_4;
        if (iVar1 == -1) {
            bVar4 = false;
        } else {
            local_48->List(iVar1);
            lVar2 = shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)local_48);
            bVar4 = *(int*)(lVar2 + 252) == 1;
            if (iVar1 != -1) {
                local_48->~shared_ptr();
            }
        }
        if (bVar4) {
            field_372 = -1;
        }
        ClearPendingFacing();
        if ((((param_1 < 104) && (-1 < param_2)) && (param_2 < 104)) &&
            ((puVar3 = (uint*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_444, 0),
              *puVar3 < 104 && (puVar3 = (uint*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_484, 0),
                                *puVar3 < 104)))) {
            if (local_34 == '\x02') {
                this_00 = (Client*)Client::Instance();
                this_00->InjectRoutePoints(this, param_1, param_2, '\x02');
            }
            AddRoutePoint(this, param_1, param_2, (int)local_34);
        } else {
            InstantMove(this, param_1, param_2);
        }
    }

    // 0x10011df50, 128 bytes, placed by class name
    // ClientPlayer::InstantMove(int, int)
    void ClientPlayer::InstantMove(int param_1, int param_2) {
        int iVar1;
        int* piVar2;
        int* piVar3;

        field_440 = 0;
        field_536 = 0;
        piVar2 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_444, 0);
        *piVar2 = param_1;
        piVar3 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_484, 0);
        *piVar3 = param_2;
        iVar1 = GetSize(this);
        field_24 = *piVar2 * 128 + iVar1 * 64;
        field_28 = *piVar3 * 128 + iVar1 * 64;
    }

} // namespace jag::oldscape

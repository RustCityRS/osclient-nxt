// projects/osclient/ChatHelper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

namespace jag::oldscape {
    class ChatHelper {
    public:
        ChatHelper* BuildChatClientMessage(int, eastl::string&&, Language const*, int);
        ChatHelper* CreateColourArray(eastl::fixed_vector<unsigned char, 8ul, true, eastl::allocator> const&);
        static /* 144 bytes */ PATTERN_COL_TAB; // initialised in its definition

        // data members, from how the methods use this: 60 bytes
        uint field_0;        // offset 0
        int field_4;         // offset 4
        SuperPacket field_8; // offset 8
        undefined4 field_56; // offset 56
    };

    // 0x100d3d8f0, 144 bytes, __const
    ChatHelper::PATTERN_COL_TAB = {
        16777215, 14942979, 16747520, 16772352, 32806,    2375822,  7547266,  16720268, 11884176,
        5261772,  10724259, 13970688, 15693351, 16577588, 494960,   2208255,  10178454, 16756679,
        13722276, 8105443,  16751190, 2543274,  7591918,  10246609, 10021057, 11894492, 2894892,
        9699842,  6371605,  13680896, 4882723,  14504,    8388736,  14025328, 10682978, 4004472,
    };

    // 0x10017c0a0, 2480 bytes, placed by class name and debug map
    // ChatHelper::BuildChatClientMessage(int, eastl::string&&, Language const*, int)
    ChatHelper* ChatHelper::BuildChatClientMessage(int param_1, basic_string* param_2, Language* param_3, int param_4) {
        undefined1* this_00;
        char cVar1;
        bool bVar2;
        char cVar3;
        int iVar4;
        long lVar5;
        ServerConnection* this_01;
        undefined8 uVar6;
        char* pcVar7;
        undefined1* puVar8;
        ulong uVar9;
        WordPack* this_02;
        undefined4 uVar10;
        ulong uVar11;
        undefined1 auVar12[16];
        basic_string local_a8[24];
        eastl local_90[8];
        basic_string local_88[32];
        eastl local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        lVar5 = Client::Instance();
        this_01 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)(lVar5 + 19120));
        uVar6 = this_01->GetOutgoingEncryption();
        MakeClientMessage(37, uVar6);
        this_00 = field_8;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_00, 0);
        cVar1 = this_00->size();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_00, param_1);
        auVar12 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::destruct<highlight::NpcUID*>(local_68, (NpcUID*)"EASTL basic_string", auVar12._8_8_);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_a8, auVar12._0_8_);
        eastl::string::make_lower();
        new (local_68) eastl::fixed_vector<unsigned char, 8ul, true, eastl::allocator>();
        bVar2 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL, eastl::allocator>(
            local_a8, (basic_string*)&constants::text::chatcol0);
        if (bVar2) {
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            eastl::string::substr((ulong)local_88, (ulong)param_2);
            eastl::string::operator=((eastl::string*)param_2, local_88);
            local_88->~basic_string();
            iVar4 = 0;
        } else {
            bVar2 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL, eastl::allocator>(
                local_a8, (basic_string*)&constants::text::chatcol1);
            if (bVar2) {
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                eastl::string::substr((ulong)local_88, (ulong)param_2);
                eastl::string::operator=((eastl::string*)param_2, local_88);
                local_88->~basic_string();
                iVar4 = 1;
            } else {
                bVar2 =
                    core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL, eastl::allocator>(
                        local_a8, (basic_string*)&constants::text::chatcol2);
                if (bVar2) {
                    eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    eastl::string::substr((ulong)local_88, (ulong)param_2);
                    eastl::string::operator=((eastl::string*)param_2, local_88);
                    local_88->~basic_string();
                    iVar4 = 2;
                } else {
                    bVar2 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL,
                                                                                eastl::allocator>(
                        local_a8, (basic_string*)&constants::text::chatcol3);
                    if (bVar2) {
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                        eastl::string::substr((ulong)local_88, (ulong)param_2);
                        eastl::string::operator=((eastl::string*)param_2, local_88);
                        local_88->~basic_string();
                        iVar4 = 3;
                    } else {
                        bVar2 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL,
                                                                                    eastl::allocator>(
                            local_a8, (basic_string*)&constants::text::chatcol4);
                        if (bVar2) {
                            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::size();
                            eastl::string::substr((ulong)local_88, (ulong)param_2);
                            eastl::string::operator=((eastl::string*)param_2, local_88);
                            local_88->~basic_string();
                            iVar4 = 4;
                        } else {
                            bVar2 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL,
                                                                                        eastl::allocator>(
                                local_a8, (basic_string*)&constants::text::chatcol5);
                            if (bVar2) {
                                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true,
                                                                                        eastl::allocator>>::size();
                                eastl::string::substr((ulong)local_88, (ulong)param_2);
                                eastl::string::operator=((eastl::string*)param_2, local_88);
                                local_88->~basic_string();
                                iVar4 = 5;
                            } else {
                                bVar2 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL,
                                                                                            eastl::allocator>(
                                    local_a8, (basic_string*)&constants::text::chatcol6);
                                if (bVar2) {
                                    eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::size();
                                    eastl::string::substr((ulong)local_88, (ulong)param_2);
                                    eastl::string::operator=((eastl::string*)param_2, local_88);
                                    local_88->~basic_string();
                                    iVar4 = 6;
                                } else {
                                    bVar2 =
                                        core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL,
                                                                                            eastl::allocator>(
                                            local_a8, (basic_string*)&constants::text::chatcol7);
                                    if (bVar2) {
                                        eastl::basic_string<char,
                                                            eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true,
                                                                                          eastl::allocator>>::size();
                                        eastl::string::substr((ulong)local_88, (ulong)param_2);
                                        eastl::string::operator=((eastl::string*)param_2, local_88);
                                        local_88->~basic_string();
                                        iVar4 = 7;
                                    } else {
                                        bVar2 = core::stringtools::general::StringTools::StartsWith<
                                            char, BucketAllocatorEASTL, eastl::allocator>(
                                            local_a8, (basic_string*)&constants::text::chatcol8);
                                        if (bVar2) {
                                            eastl::basic_string<
                                                char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::size();
                                            eastl::string::substr((ulong)local_88, (ulong)param_2);
                                            eastl::string::operator=((eastl::string*)param_2, local_88);
                                            local_88->~basic_string();
                                            iVar4 = 8;
                                        } else {
                                            bVar2 = core::stringtools::general::StringTools::StartsWith<
                                                char, BucketAllocatorEASTL, eastl::allocator>(
                                                local_a8, (basic_string*)&constants::text::chatcol9);
                                            if (bVar2) {
                                                eastl::basic_string<
                                                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true,
                                                                                        eastl::allocator>>::size();
                                                eastl::string::substr((ulong)local_88, (ulong)param_2);
                                                eastl::string::operator=((eastl::string*)param_2, local_88);
                                                local_88->~basic_string();
                                                iVar4 = 9;
                                            } else {
                                                bVar2 = core::stringtools::general::StringTools::StartsWith<
                                                    char, BucketAllocatorEASTL, eastl::allocator>(
                                                    local_a8, (basic_string*)&constants::text::chatcol10);
                                                if (bVar2) {
                                                    eastl::basic_string<
                                                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::size();
                                                    eastl::string::substr((ulong)local_88, (ulong)param_2);
                                                    eastl::string::operator=((eastl::string*)param_2, local_88);
                                                    local_88->~basic_string();
                                                    iVar4 = 10;
                                                } else {
                                                    bVar2 = core::stringtools::general::StringTools::StartsWith<
                                                        char, BucketAllocatorEASTL, eastl::allocator>(
                                                        local_a8, (basic_string*)&constants::text::chatcol11);
                                                    if (bVar2) {
                                                        eastl::basic_string<char, eastl::fixed_vector_allocator<
                                                                                      1ul, 40ul, 1ul, 0ul, true,
                                                                                      eastl::allocator>>::size();
                                                        eastl::string::substr((ulong)local_88, (ulong)param_2);
                                                        eastl::string::operator=((eastl::string*)param_2, local_88);
                                                        local_88->~basic_string();
                                                        iVar4 = 11;
                                                    } else {
                                                        bVar2 = core::stringtools::general::StringTools::StartsWith<
                                                            char, BucketAllocatorEASTL, eastl::allocator>(
                                                            local_a8, (basic_string*)&constants::text::chatcol12);
                                                        if (bVar2) {
                                                            eastl::basic_string<char, eastl::fixed_vector_allocator<
                                                                                          1ul, 40ul, 1ul, 0ul, true,
                                                                                          eastl::allocator>>::size();
                                                            eastl::string::substr((ulong)local_88, (ulong)param_2);
                                                            eastl::string::operator=((eastl::string*)param_2, local_88);
                                                            local_88->~basic_string();
                                                            iVar4 = 12;
                                                        } else {
                                                            bVar2 = core::stringtools::general::StringTools::StartsWith<
                                                                char, BucketAllocatorEASTL, eastl::allocator>(
                                                                local_a8, (basic_string*)&constants::text::chatcol13);
                                                            iVar4 = 0;
                                                            if (bVar2) {
                                                                cVar3 = GetPatternAsColTabIndices(
                                                                    (fixed_vector*)local_68, local_a8);
                                                                if (cVar3 == '\0') {
                                                                    eastl::vector<eastl::pair<int, int>,
                                                                                  eastl::allocator>::clear();
                                                                } else {
                                                                    iVar4 = local_68->size();
                                                                    eastl::basic_string<char,
                                                                                        eastl::fixed_vector_allocator<
                                                                                            1ul, 40ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::size();
                                                                    local_68->size();
                                                                    eastl::string::substr((ulong)local_88,
                                                                                          (ulong)param_2);
                                                                    eastl::string::operator=((eastl::string*)param_2,
                                                                                             local_88);
                                                                    iVar4 = iVar4 + 12;
                                                                    local_88->~basic_string();
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::basic_string<char, BucketAllocatorEASTL>::operator=((basic_string<char, BucketAllocatorEASTL>*)local_a8,
                                                                   pcVar7);
        eastl::string::make_lower();
        bVar2 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL, eastl::allocator>(
            local_a8, (basic_string*)&constants::text::chateffect1);
        if (bVar2) {
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            eastl::string::substr((ulong)local_88, (ulong)param_2);
            eastl::string::operator=((eastl::string*)param_2, local_88);
            local_88->~basic_string();
            uVar10 = 1;
        } else {
            bVar2 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL, eastl::allocator>(
                local_a8, (basic_string*)&constants::text::chateffect2);
            if (bVar2) {
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                eastl::string::substr((ulong)local_88, (ulong)param_2);
                eastl::string::operator=((eastl::string*)param_2, local_88);
                local_88->~basic_string();
                uVar10 = 2;
            } else {
                bVar2 =
                    core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL, eastl::allocator>(
                        local_a8, (basic_string*)&constants::text::chateffect3);
                if (bVar2) {
                    eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    eastl::string::substr((ulong)local_88, (ulong)param_2);
                    eastl::string::operator=((eastl::string*)param_2, local_88);
                    local_88->~basic_string();
                    uVar10 = 3;
                } else {
                    bVar2 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL,
                                                                                eastl::allocator>(
                        local_a8, (basic_string*)&constants::text::chateffect4);
                    if (bVar2) {
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                        eastl::string::substr((ulong)local_88, (ulong)param_2);
                        eastl::string::operator=((eastl::string*)param_2, local_88);
                        local_88->~basic_string();
                        uVar10 = 4;
                    } else {
                        bVar2 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL,
                                                                                    eastl::allocator>(
                            local_a8, (basic_string*)&constants::text::chateffect5);
                        uVar10 = 0;
                        if (bVar2) {
                            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::size();
                            eastl::string::substr((ulong)local_88, (ulong)param_2);
                            eastl::string::operator=((eastl::string*)param_2, local_88);
                            local_88->~basic_string();
                            uVar10 = 5;
                        }
                    }
                }
            }
        }
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_00, iVar4);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_00, uVar10);
        lVar5 = local_68->size();
        if (lVar5 != 0) {
            lVar5 = Client::Instance();
            if (213 < *(int*)(lVar5 + 54700)) {
                lVar5 = local_68->size();
                if (lVar5 != 0) {
                    uVar11 = 0;
                    do {
                        puVar8 = (undefined1*)eastl::vector<
                            unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<unsigned char,
                                           eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>*)
                                       local_68,
                                   uVar11);
                        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_00, *puVar8);
                        uVar11 = uVar11 + 1;
                        uVar9 = local_68->size();
                    } while (uVar11 < uVar9);
                }
            }
        }
        auVar12 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::destruct<highlight::NpcUID*>(local_90, (NpcUID*)"EASTL basic_string", auVar12._8_8_);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_88, auVar12._0_8_);
        lVar5 = Client::Instance();
        this_02 = (WordPack*)std::unique_ptr<game::WordPack, std::default_delete<game::WordPack>>::operator->(
            (unique_ptr<game::WordPack, std::default_delete<game::WordPack>>*)(lVar5 + 54176));
        this_02->PackUTF8AsCP1252(this_00, local_88);
        if (param_1 == 3) {
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_00, param_4);
        }
        cVar3 = this_00->size();
        this_00->pSize1(cVar3 - cVar1);
        local_88->~basic_string();
        local_68->~fixed_vector();
        local_a8->~basic_string();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x10017cc90, 240 bytes, placed by class name and debug map
    // ChatHelper::CreateColourArray(eastl::fixed_vector<unsigned char, 8ul, true, eastl::allocator> const&)
    ChatHelper* ChatHelper::CreateColourArray(fixed_vector* param_1) {
        byte bVar1;
        undefined* puVar2;
        long lVar3;
        ulong uVar4;
        byte* pbVar5;
        undefined4* puVar6;
        ulong uVar7;

        new (this) eastl::vector<int, eastl::allocator>();
        lVar3 = param_1->size();
        if ((lVar3 != 0) && (uVar4 = param_1->size(), uVar4 < 9)) {
            param_1->size();
            eastl::vector<int, eastl::allocator>::resize((ulong)this);
            lVar3 = param_1->size();
            puVar2 = PTR_PATTERN_COL_TAB_100ee6a70;
            if (lVar3 != 0) {
                uVar4 = 0;
                do {
                    eastl::vector<unsigned char,
                                  eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<unsigned char,
                                eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>*)param_1,
                        uVar4);
                    pbVar5 = (byte*)eastl::vector<
                        unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<unsigned char,
                                eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>*)param_1,
                        uVar4);
                    if (36 < *pbVar5) {
                        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                        return this;
                    }
                    pbVar5 = (byte*)eastl::vector<
                        unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<unsigned char,
                                eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>*)param_1,
                        uVar4);
                    bVar1 = *pbVar5;
                    puVar6 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)this, uVar4);
                    *puVar6 = *(undefined4*)(puVar2 + (ulong)bVar1 * 4);
                    uVar4 = uVar4 + 1;
                    uVar7 = param_1->size();
                } while (uVar4 < uVar7);
            }
        }
        return this;
    }

} // namespace jag::oldscape

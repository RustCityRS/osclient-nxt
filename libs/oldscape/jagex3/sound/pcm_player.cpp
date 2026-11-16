// libs/oldscape/jagex3/sound/pcm_player.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "pcm_player.h"

namespace jag::oldscape::sound {
    // 0x1016c1ba8, 8 bytes, __common; zero-initialised
    PCMPlayer::m_stereo;

    // 0x1016c1bd0, 4 bytes, __common; zero-initialised
    PCMPlayer::m_frequency;

    // 0x1016c1dc8, 1 bytes, __common; zero-initialised
    PCMPlayer::m_clipWarn;

    // 0x1016c1dc9, 7 bytes, __common; zero-initialised
    PCMPlayer::m_alreadyWarnedSubstreamsW;

    // 0x1016c1dd0, 8 bytes, __common; zero-initialised
    PCMPlayer::m_pcmPlayerFactory;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    PCMPlayer::SubclassInit();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    PCMPlayer::DiscardBufferInner();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    PCMPlayer::Lock();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    PCMPlayer::Open(int);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    PCMPlayer::Close();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    PCMPlayer::Unlock();

    // 0x1000b9a40: the linker folded this into configdecoder::DBRowType::GetDbTableId() const, which has identical code
    PCMPlayer::AlreadyWritten();

    // 0x100293900, 288 bytes, base-object constructor, placed by class name and debug map
    // PCMPlayer::PCMPlayer()
    void PCMPlayer::PCMPlayer() {
        _func_decltype_nullptr* in_RSI;
        SafeTime* this_00;

        new (this) PCMPlayerMainThread();
        field_0 = &PTR__OptionStore_100ef9c70;
        *(undefined8*)&field_8 = 32;
        new (&field_16) Array<int, eastl::allocator>();
        field_52 = 0;
        field_60 = 0;
        field_68 = &__mh_execute_header;
        field_76 = 0;
        field_88 = 0;
        new (field_96, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_112, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_128 = 0;
        new (&field_136, 8) Array<shared_ptr<PCMStream>, eastl::allocator>();
        this_00 = (SafeTime*)&field_160;
        new (this_00) Array<shared_ptr<PCMStream>, eastl::allocator>(8);
        field_40 = this_00->CurrentTimeMillis();
    }

    // 0x100293ef0, 1648 bytes, placed by class name
    // PCMPlayer::Generate(Array<int, eastl::allocator>&, int)
    /* WARNING: Removing unreachable block (ram,4297671629) */
    /* PCMPlayer::Generate(Array<int, eastl::allocator>&, int) */

    void PCMPlayer::Generate(Array* param_1, int param_2) {
        PCMPlayer* this_00;
        char cVar2;
        bool bVar3;
        int iVar4;
        int iVar5;
        uint uVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        shared_ptr* this_01;
        PCMStream* pPVar9;
        shared_ptr* psVar10;
        long lVar11;
        int* piVar12;
        long* plVar13;
        shared_ptr<PCMStream>* psVar14;
        uint uVar15;
        uint uVar16;
        ulong uVar17;
        shared_ptr local_e8;
        shared_ptr local_d8;
        undefined8 local_c8;
        shared_ptr local_c0;
        shared_ptr local_a8;
        ulong local_98;
        Array<shared_ptr<PCMStream>, eastl::allocator>* local_90;
        shared_ptr* local_88;
        uint local_7c;
        uint local_78;
        shared_ptr local_70;
        ulong local_60;
        ulong local_58;
        Array<shared_ptr<PCMStream>, eastl::allocator>* local_50;
        uint local_44;
        uint local_40;
        uint local_3c;
        PCMPlayer* local_38;

        local_38 = this;
        uVar7 = std::this_thread::get_id();
        uVar8 = g_idWorkerThread;
        cVar2 = std::operator==(uVar7, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_c8) std::__thread_id();
            cVar2 = std::operator==(uVar8, local_c8);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "pcm_player.cpp",
                          180, (char*)0);
            }
        }
        uVar8 = param_1->data();
        ___bzero(uVar8);
        local_38->field_128 = local_38->field_128 - param_2;
        local_88 = (shared_ptr*)local_38->field_112;
        bVar3 = operator!=(local_88, (_func_decltype_nullptr*)0);
        this_00 = local_38;
        psVar10 = local_88;
        if ((bVar3) && (local_38->field_128 < 1)) {
            local_38->field_128 = (m_frequency >> 4) + local_38->field_128;
            pPVar9 = (PCMStream*)shared_ptr<PCMStream>::operator*((shared_ptr<PCMStream>*)local_88);
            ResetWantMix(pPVar9);
            shared_ptr<PCMStream>::operator->((shared_ptr<PCMStream>*)psVar10);
            iVar4 = PCMStream::Priority();
            AddToBands(this_00, psVar10, iVar4);
            local_50 = (Array<shared_ptr<PCMStream>, eastl::allocator>*)&this_00->field_136;
            local_90 = (Array<shared_ptr<PCMStream>, eastl::allocator>*)&this_00->field_160;
            uVar6 = 7;
            local_3c = 255;
            local_98 = 0;
            local_60 = 0;
            do {
                uVar15 = uVar6 & 3;
                if (-1 < (int)uVar6) {
                    uVar15 = uVar6;
                }
                uVar16 = (int)local_3c >> ((byte)uVar15 & 31) & 286331153;
                local_78 = uVar6;
                if (uVar16 != 0) {
                    local_44 = (int)uVar6 >> 31 & -((int)uVar6 >> 2);
                    local_58 = (ulong)(int)uVar15;
                    do {
                        uVar17 = local_58;
                        uVar6 = uVar16;
                        if ((uVar16 & 1) != 0) {
                            local_40 = 1 << ((byte)local_58 & 31);
                            local_7c = uVar16;
                            new (&local_70) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(
                                (_func_decltype_nullptr*)(ulong)uVar16);
                            psVar10 = (shared_ptr*)Array<shared_ptr<PCMStream>, eastl::allocator>::operator[](local_50,
                                                                                                              uVar17);
                            new (&local_a8) shared_ptr<dash3d::Decor>(psVar10);
                            local_3c = local_3c & ~local_40;
                            while (bVar3 = operator!=(&local_a8, (_func_decltype_nullptr*)0), bVar3) {
                                lVar11 = shared_ptr<PCMStream>::operator->((shared_ptr<PCMStream>*)&local_a8);
                                psVar10 = (shared_ptr*)(lVar11 + 56);
                                bVar3 = operator!=(psVar10, (_func_decltype_nullptr*)0);
                                if ((bVar3) && (piVar12 = (int*)shared_ptr<PCMStreamable>::operator->(
                                                    (shared_ptr<PCMStreamable>*)psVar10),
                                                (int)local_44 < *piVar12)) {
                                    shared_ptr<PCMStream>::operator=((shared_ptr<PCMStream>*)&local_70, &local_a8);
                                    lVar11 = shared_ptr<PCMStream>::operator->((shared_ptr<PCMStream>*)&local_a8);
                                    shared_ptr<PCMStream>::operator=((shared_ptr<PCMStream>*)&local_a8,
                                                                     (shared_ptr*)(lVar11 + 32));
                                    local_3c = local_3c | local_40;
                                } else {
                                    lVar11 = shared_ptr<PCMStream>::operator->((shared_ptr<PCMStream>*)&local_a8);
                                    *(undefined1*)(lVar11 + 52) = 1;
                                    plVar13 =
                                        (long*)shared_ptr<PCMStream>::operator->((shared_ptr<PCMStream>*)&local_a8);
                                    iVar4 = (**(code**)(*plVar13 + 32))(plVar13);
                                    bVar3 = operator!=(psVar10, (_func_decltype_nullptr*)0);
                                    if (bVar3) {
                                        piVar12 = (int*)shared_ptr<PCMStreamable>::operator->(
                                            (shared_ptr<PCMStreamable>*)psVar10);
                                        *piVar12 = *piVar12 + iVar4;
                                    }
                                    uVar6 = (int)local_98 + iVar4;
                                    local_98 = (ulong)uVar6;
                                    if (*(int*)&local_38->field_8 <= (int)uVar6) {
                                        local_60 = CONCAT71((int7)((ulong)local_38 >> 8), 1);
                                        break;
                                    }
                                    plVar13 =
                                        (long*)shared_ptr<PCMStream>::operator->((shared_ptr<PCMStream>*)&local_a8);
                                    (**(code**)(*plVar13 + 16))(&local_c0);
                                    bVar3 = operator!=(&local_c0, (_func_decltype_nullptr*)0);
                                    if (bVar3) {
                                        lVar11 = shared_ptr<PCMStream>::operator->((shared_ptr<PCMStream>*)&local_a8);
                                        iVar4 = *(int*)(lVar11 + 48);
                                        while (bVar3 = operator!=(&local_c0, (_func_decltype_nullptr*)0), bVar3) {
                                            shared_ptr<PCMStream>::operator->((shared_ptr<PCMStream>*)&local_c0);
                                            iVar5 = PCMStream::Priority();
                                            AddToBands(local_38, &local_c0, iVar5 * iVar4 >> 8);
                                            plVar13 = (long*)shared_ptr<PCMStream>::operator->(
                                                (shared_ptr<PCMStream>*)&local_a8);
                                            (**(code**)(*plVar13 + 24))(&local_e8, plVar13);
                                            shared_ptr<PCMStream>::operator=((shared_ptr<PCMStream>*)&local_c0,
                                                                             &local_e8);
                                            local_e8.~shared_ptr();
                                        }
                                    }
                                    lVar11 = shared_ptr<PCMStream>::operator->((shared_ptr<PCMStream>*)&local_a8);
                                    new (&local_e8) shared_ptr<dash3d::Decor>((shared_ptr*)(lVar11 + 32));
                                    new (&local_d8) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                                    lVar11 = shared_ptr<PCMStream>::operator->((shared_ptr<PCMStream>*)&local_a8);
                                    shared_ptr<PCMStream>::operator=((shared_ptr<PCMStream>*)(lVar11 + 32), &local_d8);
                                    local_d8.~shared_ptr();
                                    bVar3 = operator==(&local_70, (_func_decltype_nullptr*)0);
                                    if (bVar3) {
                                        psVar14 = (shared_ptr<PCMStream>*)
                                            Array<shared_ptr<PCMStream>, eastl::allocator>::operator[](local_50,
                                                                                                       local_58);
                                        shared_ptr<PCMStream>::operator=(psVar14, &local_e8);
                                    } else {
                                        lVar11 = shared_ptr<PCMStream>::operator->((shared_ptr<PCMStream>*)&local_70);
                                        shared_ptr<PCMStream>::operator=((shared_ptr<PCMStream>*)(lVar11 + 32),
                                                                         &local_e8);
                                    }
                                    bVar3 = operator==(&local_e8, (_func_decltype_nullptr*)0);
                                    if (bVar3) {
                                        psVar14 = (shared_ptr<PCMStream>*)
                                            Array<shared_ptr<PCMStream>, eastl::allocator>::operator[](local_90,
                                                                                                       local_58);
                                        shared_ptr<PCMStream>::operator=(psVar14, &local_70);
                                    }
                                    shared_ptr<PCMStream>::operator=((shared_ptr<PCMStream>*)&local_a8, &local_e8);
                                    local_e8.~shared_ptr();
                                    local_c0.~shared_ptr();
                                }
                            }
                            local_a8.~shared_ptr();
                            local_70.~shared_ptr();
                            uVar6 = local_7c;
                            if ((local_60 & 1) != 0)
                                break;
                        }
                        local_58 = local_58 + 4;
                        local_44 = local_44 + 1;
                        uVar16 = uVar6 >> 4;
                    } while (15 < uVar6);
                }
            } while (((local_60 & 1) == 0) && (uVar6 = local_78 - 1, local_3c != 0));
            uVar17 = 0;
            do {
                psVar10 = (shared_ptr*)Array<shared_ptr<PCMStream>, eastl::allocator>::operator[](local_50, uVar17);
                new (&local_70) shared_ptr<dash3d::Decor>(psVar10);
                new (&local_a8) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                psVar14 = (shared_ptr<PCMStream>*)Array<shared_ptr<PCMStream>, eastl::allocator>::operator[](local_90,
                                                                                                             uVar17);
                psVar10 = (shared_ptr*)shared_ptr<PCMStream>::operator=(psVar14, &local_a8);
                psVar14 = (shared_ptr<PCMStream>*)Array<shared_ptr<PCMStream>, eastl::allocator>::operator[](local_50,
                                                                                                             uVar17);
                shared_ptr<PCMStream>::operator=(psVar14, psVar10);
                while (true) {
                    local_a8.~shared_ptr();
                    bVar3 = operator!=(&local_70, (_func_decltype_nullptr*)0);
                    if (!bVar3)
                        break;
                    lVar11 = shared_ptr<PCMStream>::operator->((shared_ptr<PCMStream>*)&local_70);
                    new (&local_a8) shared_ptr<dash3d::Decor>((shared_ptr*)(lVar11 + 32));
                    new (&local_c0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    lVar11 = shared_ptr<PCMStream>::operator->((shared_ptr<PCMStream>*)&local_70);
                    shared_ptr<PCMStream>::operator=((shared_ptr<PCMStream>*)(lVar11 + 32), &local_c0);
                    local_c0.~shared_ptr();
                    shared_ptr<PCMStream>::operator=((shared_ptr<PCMStream>*)&local_70, &local_a8);
                }
                local_70.~shared_ptr();
                uVar17 = uVar17 + 1;
            } while (uVar17 != 8);
        }
        psVar10 = local_88;
        if (local_38->field_128 < 0) {
            local_38->field_128 = 0;
        }
        this_01 = local_88;
        bVar3 = operator!=(local_88, (_func_decltype_nullptr*)0);
        iVar4 = param_2;
        if (bVar3) {
            this_01 = (shared_ptr*)shared_ptr<PCMStream>::operator->((shared_ptr<PCMStream>*)psVar10);
            (**(code**)(*(long*)this_01 + 40))(this_01, param_1, 0, iVar4);
        }
        uVar8 = this_01->CurrentTimeMillis();
        local_38->field_40 = uVar8;
    }

    // 0x10029f990, 16 bytes, placed by class name
    // PCMPlayer::SetPCMPlayerFactory(std::unique_ptr<PCMPlayerFactory, std::default_delete<PCMPlayerFactory> >&&)
    /* PCMPlayer::SetPCMPlayerFactory(std::unique_ptr<PCMPlayerFactory,
   std::default_delete<PCMPlayerFactory> >&&) */

    void PCMPlayer::SetPCMPlayerFactory(unique_ptr* param_1) {
        std::unique_ptr<PCMPlayerFactory, std::default_delete<PCMPlayerFactory>>::operator=(
            (unique_ptr<PCMPlayerFactory, std::default_delete<PCMPlayerFactory>>*)this, param_1);
    }

    // 0x10029f9c0, 80 bytes, placed by class name
    // PCMPlayer::Init(int, bool)
    void PCMPlayer::Init(int param_1, bool param_2) {
        if (40000 < param_1 - 8000U) {
            LogAndAbort("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                        "pcm_player.cpp",
                        40, "invalid frequency");
        }
        m_frequency = param_1;
        m_stereo = param_2;
    }

    // 0x10029fa10, 320 bytes, placed by class name
    // PCMPlayer::GetPlayer(int, int)
    PCMPlayer* PCMPlayer::GetPlayer(int param_1, int param_2) {
        int iVar1;
        undefined8* puVar2;
        long lVar3;
        long* plVar4;
        int* piVar5;
        uint uVar6;
        char* this_00;
        int local_30[2];

        this_00 = (char*)this;
        if (m_frequency == 0) {
            this_00 = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                      "pcm_player.cpp";
            LogAndAbort("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                        "pcm_player.cpp",
                        54, "invalid frequency: %i", 0);
        }
        if (1 < (uint)param_1) {
            this_00 = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                      "pcm_player.cpp";
            LogAndAbort("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                        "pcm_player.cpp",
                        60, "invalid player id: %i", (ulong)(uint)param_1);
        }
        uVar6 = 256;
        if (256 < param_2) {
            uVar6 = param_2;
        }
        puVar2 = (undefined8*)std::unique_ptr<PCMPlayerFactory, std::default_delete<PCMPlayerFactory>>::operator->(
            (unique_ptr<PCMPlayerFactory, std::default_delete<PCMPlayerFactory>>*)this_00);
        (**(code**)*puVar2)(this, puVar2);
        lVar3 = std::unique_ptr<PCMPlayer, std::default_delete<PCMPlayer>>::operator->(
            (unique_ptr<PCMPlayer, std::default_delete<PCMPlayer>>*)this);
        ((lVar3 + 16))->set_max_size((ulong)m_stereo * 256 + 256, 3);
        lVar3 = std::unique_ptr<PCMPlayer, std::default_delete<PCMPlayer>>::operator->(
            (unique_ptr<PCMPlayer, std::default_delete<PCMPlayer>>*)this);
        *(uint*)(lVar3 + 76) = uVar6;
        plVar4 = (long*)std::unique_ptr<PCMPlayer, std::default_delete<PCMPlayer>>::operator->(
            (unique_ptr<PCMPlayer, std::default_delete<PCMPlayer>>*)this);
        (**(code**)(*plVar4 + 56))(plVar4);
        local_30[0] = (uVar6 & 2147482624) + 1024;
        local_30[1] = 16384;
        piVar5 = std::min<int>(local_30, local_30 + 1);
        iVar1 = *piVar5;
        lVar3 = std::unique_ptr<PCMPlayer, std::default_delete<PCMPlayer>>::operator->(
            (unique_ptr<PCMPlayer, std::default_delete<PCMPlayer>>*)this);
        *(int*)(lVar3 + 48) = iVar1;
        plVar4 = (long*)std::unique_ptr<PCMPlayer, std::default_delete<PCMPlayer>>::operator->(
            (unique_ptr<PCMPlayer, std::default_delete<PCMPlayer>>*)this);
        (**(code**)(*plVar4 + 64))(plVar4, (int)plVar4[6]);
        return this;
    }

    // 0x10029fb90, 384 bytes, placed by class name
    // PCMPlayer::SetInput(shared_ptr<PCMStream> const&)
    void PCMPlayer::SetInput(shared_ptr* param_1) {
        undefined8 uVar3;
        TaskRunner* pTVar4;
        shared_ptr local_78;
        shared_ptr local_68[3];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar3 = std::this_thread::get_id();
        if (std::operator==(uVar3, g_idMainThread) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                      "pcm_player.cpp",
                      102, (char*)0);
        }
        shared_ptr<PCMStream>::operator=((shared_ptr<PCMStream>*)field_112, param_1);
        pTVar4 = (TaskRunner*)getTaskRunner();
        std::function<Task*()>::function<PCMPlayer::SetInput(shared_ptr<PCMStream> const&)::__1, void>(local_68, this);
        pTVar4->DeclareTask("PCMPlayer::PlayerTask", "OldscapeSound", local_68);
        std::function<Task*()>::~function((function<Task*()>*)local_68);
        if (!operator==((shared_ptr*)field_96, (_func_decltype_nullptr*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_task == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                      "pcm_player.cpp",
                      114, "PCMPlayer::SetInput can be called at most once.  Changing input is not supported.");
        }
        pTVar4 = (TaskRunner*)getTaskRunner();
        make_shared<PCMPlayer::PlayerTask, PCMPlayer&>((jag*)&local_78, this);
        TaskRunner::AddTask<PCMPlayer::PlayerTask>(local_68, pTVar4, "PCMPlayer::PlayerTask", &local_78);
        shared_ptr<PCMPlayer::PlayerTask>::operator=((shared_ptr<PCMPlayer::PlayerTask>*)field_96, local_68);
        local_68->~shared_ptr();
        local_78.~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10029fed0, 128 bytes, placed by class name
    // PCMPlayer::DoneUpdate()
    void PCMPlayer::DoneUpdate() {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        undefined8 local_20;

        uVar3 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar3, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_20) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_20);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "pcm_player.cpp",
                          120, (char*)0);
            }
        }
        *(undefined4*)((long)&field_68 + 4) = 1;
    }

    // 0x10029ff50, 96 bytes, placed by class name
    // PCMPlayer::QueueDiscardBuffer()
    void PCMPlayer::QueueDiscardBuffer() {
        undefined8 uVar2;

        uVar2 = std::this_thread::get_id();
        if (std::operator==(uVar2, g_idMainThread) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                      "pcm_player.cpp",
                      126, (char*)0);
        }
        *(undefined4*)((long)&field_68 + 4) = 1;
        (*(code*)field_0[11])(this);
    }

    // 0x10029ffb0, 176 bytes, placed by class name
    // PCMPlayer::QueueQuit()
    void PCMPlayer::QueueQuit() {
        undefined8 uVar2;
        TaskRunner* this_00;
        shared_ptr local_30;

        uVar2 = std::this_thread::get_id();
        if (std::operator==(uVar2, g_idMainThread) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                      "pcm_player.cpp",
                      144, (char*)0);
        }
        this_00 = (TaskRunner*)getTaskRunner();
        TaskRunner::RemoveTask<PCMPlayer::PlayerTask>(this_00, (shared_ptr*)field_96);
        new (&local_30) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<PCMPlayer::PlayerTask>::operator=((shared_ptr<PCMPlayer::PlayerTask>*)field_96, &local_30);
        local_30.~shared_ptr();
        (*(code*)field_0[10])(this);
    }

    // 0x1002a00e0, 16 bytes, placed by class name
    // PCMPlayer::QueueAudioMuted(bool)
    void PCMPlayer::QueueAudioMuted(bool param_1) {
        undefined3 in_register_00000031;

        field_12 = CONCAT31(in_register_00000031, param_1);
    }

    // 0x1002a00f0, 176 bytes, placed by class name
    // PCMPlayer::PretendToGenerate(int)
    void PCMPlayer::PretendToGenerate(int param_1) {
        undefined8 uVar1;
        char cVar2;
        int iVar4;
        undefined8 uVar5;
        long* plVar6;
        __thread_id local_28[8];

        uVar5 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar5);
        if (cVar2 == '\0') {
            std::__thread_id::__thread_id(local_28);
            cVar2 = std::operator==(uVar1);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "pcm_player.cpp",
                          163, (char*)0);
            }
        }
        iVar4 = field_128 - param_1;
        if (iVar4 < 0) {
            iVar4 = 0;
        }
        field_128 = iVar4;
        if (operator!=((shared_ptr*)field_112, (_func_decltype_nullptr*)0)) {
            plVar6 = (long*)shared_ptr<PCMStream>::operator->((shared_ptr<PCMStream>*)field_112);
            (**(code**)(*plVar6 + 48))(plVar6, param_1);
        }
    }

    // 0x1002a01a0, 288 bytes, placed by class name
    // PCMPlayer::ResetWantMix(PCMStream&)
    void PCMPlayer::ResetWantMix(PCMStream* param_1) {
        undefined8 uVar1;
        char cVar2;
        bool bVar3;
        undefined8 uVar4;
        undefined4* puVar5;
        PCMStream* pPVar6;
        shared_ptr local_48;
        shared_ptr local_38;
        __thread_id local_28[8];

        uVar4 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar4);
        if (cVar2 == '\0') {
            std::__thread_id::__thread_id(local_28);
            cVar2 = std::operator==(uVar1);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "pcm_player.cpp",
                          379, (char*)0);
            }
        }
        param_1->field_52 = 0;
        bVar3 = operator!=((shared_ptr*)&param_1->field_56, (_func_decltype_nullptr*)0);
        if (bVar3) {
            puVar5 = (undefined4*)shared_ptr<PCMStreamable>::operator->((shared_ptr<PCMStreamable>*)&param_1->field_56);
            *puVar5 = 0;
        }
        (**(code**)(param_1->field_0 + 16))(&local_38);
        while (true) {
            bVar3 = operator!=(&local_38, (_func_decltype_nullptr*)0);
            if (!bVar3)
                break;
            pPVar6 = (PCMStream*)shared_ptr<PCMStream>::operator*((shared_ptr<PCMStream>*)&local_38);
            ResetWantMix(pPVar6);
            (**(code**)(param_1->field_0 + 24))(&local_48, param_1);
            shared_ptr<PCMStream>::operator=((shared_ptr<PCMStream>*)&local_38, &local_48);
            local_48.~shared_ptr();
        }
        local_38.~shared_ptr();
    }

    // 0x1002a0300, 304 bytes, placed by class name
    // PCMPlayer::AddToBands(shared_ptr<PCMStream> const&, int)
    void PCMPlayer::AddToBands(shared_ptr* param_1, int param_2) {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar4;
        shared_ptr* psVar5;
        shared_ptr<PCMStream>* psVar6;
        long lVar7;
        ulong uVar8;
        undefined8 local_50;
        shared_ptr local_48;

        uVar4 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar4, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_50) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_50);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "pcm_player.cpp",
                          394, (char*)0);
            }
        }
        uVar8 = (ulong)(param_2 >> 5);
        psVar5 = (shared_ptr*)Array<shared_ptr<PCMStream>, eastl::allocator>::operator[](
            (Array<shared_ptr<PCMStream>, eastl::allocator>*)&field_160, uVar8);
        new (&local_48) shared_ptr<dash3d::Decor>(psVar5);
        if (operator==(&local_48, (_func_decltype_nullptr*)0)) {
            psVar6 = (shared_ptr<PCMStream>*)Array<shared_ptr<PCMStream>, eastl::allocator>::operator[](
                (Array<shared_ptr<PCMStream>, eastl::allocator>*)&field_136, uVar8);
            shared_ptr<PCMStream>::operator=(psVar6, param_1);
        } else {
            lVar7 = shared_ptr<PCMStream>::operator->((shared_ptr<PCMStream>*)&local_48);
            shared_ptr<PCMStream>::operator=((shared_ptr<PCMStream>*)(lVar7 + 32), param_1);
        }
        psVar6 = (shared_ptr<PCMStream>*)Array<shared_ptr<PCMStream>, eastl::allocator>::operator[](
            (Array<shared_ptr<PCMStream>, eastl::allocator>*)&field_160, uVar8);
        shared_ptr<PCMStream>::operator=(psVar6, param_1);
        lVar7 = shared_ptr<PCMStream>::operator->((shared_ptr<PCMStream>*)param_1);
        *(int*)(lVar7 + 48) = param_2;
        local_48.~shared_ptr();
    }

    // 0x1002a0500, 48 bytes, placed by class name
    // PCMPlayer::PlayerTask::OnInterval(float, unsigned long long)
    void PCMPlayer::PlayerTask::OnInterval(float param_1, ulonglong param_2) {
        SetWorkerThread();
        (*(code*)field_448->field_0[6])();
        ClearWorkerThread();
    }

    // 0x1002a0580, 160 bytes, placed by __FILE__ string
    // DummyPCMPlayer::Service()
    void DummyPCMPlayer::Service() {
        undefined8 uVar1;
        char cVar2;
        undefined8 in_RAX;
        undefined8 uVar3;
        int iVar4;
        undefined8 local_28;

        local_28 = in_RAX;
        uVar3 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar3, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_28) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_28);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "pcm_player.cpp",
                          420, (char*)0);
            }
        }
        if (0 < field_48) {
            iVar4 = 0;
            do {
                Generate((Array*)&field_16, 256);
                iVar4 = iVar4 + 256;
            } while (iVar4 < field_48);
        }
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    PCMPlayer::~PCMPlayer();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    PCMPlayer::~PCMPlayer();

} // namespace jag::oldscape::sound

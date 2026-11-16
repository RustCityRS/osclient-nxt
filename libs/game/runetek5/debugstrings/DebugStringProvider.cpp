// libs/game/runetek5/debugstrings/DebugStringProvider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "DebugStringProvider.h"

namespace jag::game {
    // 0x1039bb6c0, 48 bytes, __common; zero-initialised
    DebugStringProvider::DISABLED;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    DebugStringProvider::IStringPool::~IStringPool();

    // 0x1004c1c20, 48 bytes, base-object constructor, placed by class name and debug map
    // DebugStringProvider::DebugStringProvider(std::function<DataStatus const* (shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&, int)>&)
    /* DebugStringProvider::DebugStringProvider(std::function<DataStatus const*
   (shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&, int)>&) */

    void DebugStringProvider::DebugStringProvider(function* param_1) {
        std::function<DataStatus_const*(shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&, int)>::function(
            (function<DataStatus_const*(shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&, int)>*)this,
            param_1);
        new (&field_48) eastl::vector_map<
            int, shared_ptr<DebugStringProvider::IStringPool>, eastl::less<int>, eastl::allocator,
            eastl::vector<eastl::pair<int, shared_ptr<DebugStringProvider::IStringPool>>, eastl::allocator>>();
    }

    // 0x1004c1c70, 16 bytes, complete-object constructor, placed by class name and debug map
    // DebugStringProvider::DebugStringProvider(std::function<DataStatus const* (shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&, int)>&): jumps straight to the base-object constructor

    // 0x1004c1c80, 384 bytes, placed by class name and debug map
    // DebugStringProvider::Fetch(int, int, char const**)
    undefined* DebugStringProvider::Fetch(int param_1, int param_2, char** param_3) {
        undefined1* this_00;
        bool bVar1;
        long lVar2;
        long lVar3;
        undefined8* puVar4;
        char* pcVar5;
        undefined* puVar6;
        shared_ptr<DebugStringProvider::IStringPool>* this_01;
        undefined* puVar7;
        undefined4 in_register_00000034;
        shared_ptr local_58;
        shared_ptr local_48;
        int local_34;

        local_34 = param_1;
        if (param_3 == (char**)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("out != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "debugstrings/DebugStringProvider.cpp",
                      28, (char*)0);
        }
        bVar1 = std::operator==((function*)this, (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_1));
        if (bVar1) {
            return DataStatus::MISSING;
        }
        this_00 = &field_48;
        lVar2 = this_00->find((int*)(_func_decltype_nullptr*)&local_34);
        lVar3 = this_00->end();
        if (lVar2 != lVar3) {
            puVar4 = (undefined8*)shared_ptr<DebugStringProvider::IStringPool>::operator->(
                (shared_ptr<DebugStringProvider::IStringPool>*)(lVar2 + 8));
            pcVar5 = (char*)(**(code**)*puVar4)(puVar4, param_2);
            *param_3 = pcVar5;
            if (pcVar5 == (char*)0) {
                return DataStatus::MISSING;
            }
            return DataStatus::READY;
        }
        new (&local_58)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>((_func_decltype_nullptr*)&local_34);
        puVar6 =
            (undefined*)std::function<DataStatus_const*(shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&,
                                                        int)>::operator()((shared_ptr*)this, (int)&local_58);
        if (puVar6 == DataStatus::READY) {
            LoadPool((DebugStringProvider*)&local_48, &local_58);
            this_01 = (shared_ptr<DebugStringProvider::IStringPool>*)eastl::vector_map<
                int, shared_ptr<DebugStringProvider::IStringPool>, eastl::less<int>, eastl::allocator,
                eastl::vector<eastl::pair<int, shared_ptr<DebugStringProvider::IStringPool>>, eastl::allocator>>::
            operator[](
                (vector_map<
                    int, shared_ptr<DebugStringProvider::IStringPool>, eastl::less<int>, eastl::allocator,
                    eastl::vector<eastl::pair<int, shared_ptr<DebugStringProvider::IStringPool>>, eastl::allocator>>*)
                    this_00,
                &local_34);
            shared_ptr<DebugStringProvider::IStringPool>::operator=(this_01, &local_48);
            puVar4 = (undefined8*)shared_ptr<DebugStringProvider::IStringPool>::operator->(
                (shared_ptr<DebugStringProvider::IStringPool>*)&local_48);
            pcVar5 = (char*)(**(code**)*puVar4)(puVar4, param_2);
            *param_3 = pcVar5;
            puVar7 = DataStatus::MISSING;
            local_48.~shared_ptr();
            if (pcVar5 == (char*)0)
                goto LAB_1004c1db5;
        } else {
            *param_3 = (char*)0;
        }
        puVar7 = puVar6;
    LAB_1004c1db5:
        local_58.~shared_ptr();
        return puVar7;
    }

    // 0x1004c1e70, 256 bytes, placed by class name and debug map
    // DebugStringProvider::LoadPool(shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&)
    DebugStringProvider* DebugStringProvider::LoadPool(shared_ptr* param_1) {
        int iVar1;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this_00;
        undefined8 uVar2;
        shared_ptr* in_RDX;
        shared_ptr local_30;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        this_00 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                      shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                          (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)in_RDX);
        iVar1 = this_00->g4();
        if (iVar1 == 1) {
            make_shared<NonSparseStringPool, shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&>(
                (jag*)&local_30, in_RDX);
            shared_ptr<DebugStringProvider::IStringPool>::operator=((shared_ptr<DebugStringProvider::IStringPool>*)this,
                                                                    &local_30);
            local_30.~shared_ptr();
        } else {
            if (iVar1 != 2) {
                uVar2 = logger::default_logger();
                logger::Logger::Log(uVar2, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/debugstrings/DebugStringProvider.cpp",
                                    78, "Unrecognised string pool type: %d", iVar1);
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "debugstrings/DebugStringProvider.cpp",
                                79, (char*)0);
            }
            make_shared<SparseStringPool, shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&>((jag*)&local_30,
                                                                                                        in_RDX);
            shared_ptr<DebugStringProvider::IStringPool>::operator=((shared_ptr<DebugStringProvider::IStringPool>*)this,
                                                                    &local_30);
            local_30.~shared_ptr();
        }
        return this;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    DebugStringProvider::IStringPool::~IStringPool();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    DebugStringProvider::IStringPool::~IStringPool();

} // namespace jag::game

namespace jag {
    // 0x1004c2070, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::NonSparseStringPool>::type make_shared<game::NonSparseStringPool, shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&>(shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&)
    jag* jag::make_shared<game::NonSparseStringPool, shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&>(
        shared_ptr* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        NonSparseStringPool* local_30[2];

        pvVar1 = (void*)aligned_alloc(88, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] =
                placement_new<game::NonSparseStringPool, shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&>(
                    (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<game::NonSparseStringPool>, int, game::NonSparseStringPool*&>(
                pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x1004c2150, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::SparseStringPool>::type make_shared<game::SparseStringPool, shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&>(shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&)
    jag* jag::make_shared<game::SparseStringPool, shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&>(
        shared_ptr* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        SparseStringPool* local_30[2];

        pvVar1 = (void*)aligned_alloc(88, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] =
                placement_new<game::SparseStringPool, shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&>(
                    (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<game::SparseStringPool>, int, game::SparseStringPool*&>(
                pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag

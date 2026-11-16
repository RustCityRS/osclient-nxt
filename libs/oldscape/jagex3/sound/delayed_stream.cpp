// libs/oldscape/jagex3/sound/delayed_stream.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "delayed_stream.h"

namespace jag::oldscape::sound {
    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    DelayedStream::SelfMixCost();

    // 0x100295980, 128 bytes, base-object constructor, placed by class name and debug map
    // DelayedStream::DelayedStream(shared_ptr<PCMStream> const&, int)
    void DelayedStream::DelayedStream(shared_ptr* param_1, int param_2) {
        long lVar1;

        new (this) PCMStream();
        field_0 = &PTR__DelayedStream_100ef9c28;
        new (field_72, param_1) shared_ptr<dash3d::Decor>();
        field_88 = param_2;
        lVar1 = shared_ptr<PCMStream>::operator->((shared_ptr<PCMStream>*)field_72);
        shared_ptr<PCMStreamable>::operator=((shared_ptr<PCMStreamable>*)&field_56, (shared_ptr*)(lVar1 + 56));
    }

    // 0x100295a80, 16 bytes, complete-object constructor, placed by class name and debug map
    // DelayedStream::DelayedStream(shared_ptr<PCMStream> const&, int): jumps straight to the base-object constructor

    // 0x100295a90, 96 bytes, placed by class name and debug map
    // DelayedStream::BySamples(shared_ptr<PCMStream>&, int)
    DelayedStream* DelayedStream::BySamples(shared_ptr* param_1, int param_2) {
        shared_ptr local_30;
        int local_1c;

        local_1c = param_2;
        make_shared<DelayedStream, shared_ptr<PCMStream>&, int>((jag*)&local_30, param_1, &local_1c);
        new (this) shared_ptr<dash3d::Decor>(&local_30);
        local_30.~shared_ptr();
        return this;
    }

    // 0x100295ba0, 128 bytes, placed by class name and debug map
    // DelayedStream::ByMillis(shared_ptr<PCMStream>, int)
    DelayedStream* DelayedStream::ByMillis(shared_ptr param_1, int param_2) {
        int in_EDX;
        undefined4 in_register_00000034;
        shared_ptr local_30;
        int local_1c;

        local_1c = (in_EDX * PCMPlayer::m_frequency) / 1000;
        make_shared<DelayedStream, shared_ptr<PCMStream>&, int>(
            (jag*)&local_30, (shared_ptr*)CONCAT44(in_register_00000034, param_2), &local_1c);
        new (this) shared_ptr<dash3d::Decor>(&local_30);
        local_30.~shared_ptr();
        return this;
    }

    // 0x100295c20, 96 bytes, placed by class name and debug map
    // DelayedStream::DoMix(Array<int, eastl::allocator>&, int, int)
    void DelayedStream::DoMix(Array* param_1, int param_2, int param_3) {
        int iVar1;
        shared_ptr<PCMStream>* this_00;
        long* plVar2;

        iVar1 = field_88;
        if (iVar1 - param_3 == 0 || iVar1 < param_3) {
            field_88 = 0;
            this_00 = (shared_ptr<PCMStream>*)GiveLinkTo(field_72);
            if (param_3 - iVar1 != 0 && iVar1 <= param_3) {
                plVar2 = (long*)shared_ptr<PCMStream>::operator->(this_00);
                (**(code**)(*plVar2 + 40))(plVar2, param_1, iVar1 + param_2, param_3 - iVar1);
            }
        } else {
            field_88 = iVar1 - param_3;
        }
    }

    // 0x100295cf0, 80 bytes, placed by class name and debug map
    // DelayedStream::PretendToMix(int)
    void DelayedStream::PretendToMix(int param_1) {
        int iVar1;
        shared_ptr<PCMStream>* this_00;
        long* plVar2;

        iVar1 = field_88;
        if (iVar1 - param_1 == 0 || iVar1 < param_1) {
            field_88 = 0;
            this_00 = (shared_ptr<PCMStream>*)GiveLinkTo(field_72);
            if (param_1 - iVar1 != 0 && iVar1 <= param_1) {
                plVar2 = (long*)shared_ptr<PCMStream>::operator->(this_00);
                (**(code**)(*plVar2 + 48))(plVar2, param_1 - iVar1);
            }
        } else {
            field_88 = iVar1 - param_1;
        }
    }

    // 0x1002a75f0: the linker folded this into DelayedStream::SubstreamStart(), which has identical code
    DelayedStream::SubstreamNext();

} // namespace jag::oldscape::sound

namespace jag {
    // 0x100295af0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::sound::DelayedStream>::type make_shared<oldscape::sound::DelayedStream, shared_ptr<oldscape::sound::PCMStream>&, int&>(shared_ptr<oldscape::sound::PCMStream>&, int&)
    /* shared_ptr_if_not_array<oldscape::sound::DelayedStream>::type
   make_shared<oldscape::sound::DelayedStream,
   shared_ptr<oldscape::sound::PCMStream>&,
   int>(shared_ptr<oldscape::sound::PCMStream>&, int&&) */

    jag*
    jag::make_shared<oldscape::sound::DelayedStream, shared_ptr<oldscape::sound::PCMStream>&, int>(shared_ptr* param_1,
                                                                                                   int* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        DelayedStream* local_38[2];

        pvVar1 = (void*)aligned_alloc(128, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<oldscape::sound::DelayedStream, shared_ptr<oldscape::sound::PCMStream>&, int>(
                (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::sound::DelayedStream>, int,
                                   oldscape::sound::DelayedStream*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

} // namespace jag

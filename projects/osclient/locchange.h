// projects/osclient/locchange.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class LocChange {
    public:
        bool IsOpEnabled(int);
        LocChange();

        // data members, from how the methods use this: 57 bytes
        char _unknown_0[44];
        byte field_44; // offset 44
        char _unknown_45[3];
        undefined8 field_48; // offset 48
        undefined1 field_56; // offset 56
    };

    // 0x1000704f0, 32 bytes, inline, placed by class name and debug map
    // LocChange::IsOpEnabled(int)
    bool LocChange::IsOpEnabled(int param_1) {
        bool bVar1;

        bVar1 = true;
        if ((uint)param_1 < 5) {
            bVar1 = (field_44 >> (param_1 & 31U) & 1) != 0;
        }
        return bVar1;
    }

    // 0x10011b070, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // LocChange::LocChange(): jumps straight to the base-object constructor

    // 0x100130780, 32 bytes, base-object constructor, inline, placed by class name
    // LocChange::LocChange()
    void LocChange::LocChange() {
        field_44 = 31;
        field_48 = 18446744069414584320;
        field_56 = 0;
    }

} // namespace jag::oldscape

namespace jag {
    // 0x100071b80, 16 bytes, inline, placed by debug map only (low confidence)
    // bool operator!=<oldscape::ClientObj>(shared_ptr<oldscape::ClientObj> const&, decltype(nullptr))
    /* bool TEMPNAMEPLACEHOLDERVALUE(shared_ptr<oldscape::sound::WaveStream> const&,
   decltype(nullptr)) */

    bool operator!=(shared_ptr* param_1, _func_decltype_nullptr* param_2) {
        return shared_ptr::operator_cast_to_bool(param_1);
    }

    // 0x10011b850, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::ClientPlayer>::type make_shared<oldscape::ClientPlayer>()
    jag* make_shared<oldscape::ClientPlayer>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        ClientPlayer* local_28[2];

        pvVar1 = (void*)aligned_alloc(1280, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::ClientPlayer>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::ClientPlayer>, int, oldscape::ClientPlayer*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x10011c320, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::configdecoder::HeadbarQueue>::type make_shared<oldscape::configdecoder::HeadbarQueue, shared_ptr<oldscape::configdecoder::HeadbarType>&>(shared_ptr<oldscape::configdecoder::HeadbarType>&)
    jag* jag::make_shared<oldscape::configdecoder::HeadbarQueue, shared_ptr<oldscape::configdecoder::HeadbarType>&>(
        shared_ptr* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        HeadbarQueue* local_30[2];

        pvVar1 = (void*)aligned_alloc(80, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] =
                placement_new<oldscape::configdecoder::HeadbarQueue, shared_ptr<oldscape::configdecoder::HeadbarType>&>(
                    (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::configdecoder::HeadbarQueue>, int,
                                   oldscape::configdecoder::HeadbarQueue*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag

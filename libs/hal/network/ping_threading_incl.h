// libs/hal/network/ping_threading_incl.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100b0cb80, 32 bytes, inline, placed by debug map only (low confidence)
    // network::Ping* placement_new<network::Ping, int>(void*, int&&)
    Ping* placement_new<network::Ping, int>(void* param_1, int* param_2) {
        network::Ping::Ping(param_1, *param_2);
        return param_1;
    }

    // 0x100b0cba0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<network::Ping>* placement_new<ref_counter_shared<network::Ping>, int, network::Ping*&>(void*, int&&, network::Ping*&)
    ref_counter_shared* placement_new<ref_counter_shared<network::Ping>, int, network::Ping*&>(void* param_1,
                                                                                               int* param_2,
                                                                                               Ping** param_3) {
        ref_counter_shared<network::Ping>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100b0cbc0, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<network::Ping>(ref_counter_base*, network::Ping*, network::Ping::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<network::Ping>(ref_counter_base* param_1, Ping* param_2,
                                                              enable_shared_type* param_3) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48[16];
        weak_ptr<oldscape::dash3d::Decor> local_38[24];

        if (param_1 != (ref_counter_base*)0) {
            param_1->IncRef();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
                local_48, (hash_node*)param_1, (hash_node**)param_2);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_38, (weak_ptr*)local_48);
            (&param_2->field_8, (weak_ptr*)local_38)->__internal_set_weak_ptr();
            local_38->~weak_ptr();
            local_48->~shared_ptr();
        }
    }

    // 0x100b0cc50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<network::Ping>::ref_counter_shared(unsigned long, network::Ping*): jumps straight to the base-object constructor

    // 0x100b0cc60, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<network::Ping>::ref_counter_shared(unsigned long, network::Ping*)
    void ref_counter_shared<network::Ping>::ref_counter_shared(ulong param_1, Ping* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7500 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Ping**)(this + 24) = param_2;
    }

    // 0x100b0cca0, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<network::Ping>::DeleteData()
    void ref_counter_shared<network::Ping>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 7120;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag

namespace jag::network {
    // 0x100b0baa0, 16 bytes, inline, placed by class name and debug map
    // Ping::Shutdown()
    void Ping::Shutdown() {
        this[8].field_328 = 1;
    }

    // 0x100b0c3b0, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PingResult::PingResult()
    void PingResult::PingResult() {
        new (this) IPAddress();
    }

    // 0x100b0c3c0, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // PingResult::~PingResult()
    void PingResult::~PingResult() {
        ~IPAddress();
    }

} // namespace jag::network

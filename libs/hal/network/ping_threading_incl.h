// libs/hal/network/ping_threading_incl.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100b0cb80
    network::Ping* placement_new<network::Ping, int>(void* arg1, int&& arg2) {
        new (arg1) network::Ping(arg2);
        return arg1;
    }

    // 0x100b0cba0
    ref_counter_shared<network::Ping>*
    placement_new<ref_counter_shared<network::Ping>, int, network::Ping*&>(void* arg1, int&& arg2,
                                                                           network::Ping*& arg3) {
        new (arg1) ref_counter_shared<network::Ping>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100b0cbc0
    void shared_ptr_do_enable_shared_from_this<network::Ping>(ref_counter_base* ref_counter_base, network::Ping* ping,
                                                              network::Ping::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)ping);
            local_38 = weak_ptr(local_48);
            ping->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x100b0cc60
    ref_counter_shared<network::Ping>::ref_counter_shared(unsigned long arg1, network::Ping* ping)
        : ref_counter_base() {}

    // 0x100b0cca0
    void ref_counter_shared<network::Ping>::DeleteData() {
        long lVar1;
        ref_counter_shared<network::Ping> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<network::Ping> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 7120;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag

namespace jag::network {
    // 0x100b0baa0
    void Ping::Shutdown() {
        this[8].field_328 = 1;
    }

    // 0x100b0c3b0
    PingResult::PingResult() : IPAddress() {}

    // 0x100b0c3c0
    PingResult::~PingResult() {}

} // namespace jag::network

// libs/oldscape/jagex3/core/thread/LockFreeStack.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::jagex3 {
    template <
        typename...> // 3 instantiations, e.g. <ServerConnectionWorkItem>, <Js5RemoteRequestData>, <sound::Mixer::QueuedOp>
    class LockFreeStack {
    public:
        LockFreeStack();
        bool PushHead(ServerConnectionWorkItem* serverConnectionWorkItem);
        uint64_t TakeStack();
        bool PushHead(sound::Mixer::QueuedOp* queuedOp);
        bool PushHead(Js5RemoteRequestData* js5RemoteRequestData);
    };

    template <typename...> // 1 instantiations, e.g. <ServerConnectionWorkItem>
    class LockFreeStackData {
    public:
        auto Reverse();
    };

    // 0x1000bb550
    bool LockFreeStack<ServerConnectionWorkItem>::PushHead(ServerConnectionWorkItem* serverConnectionWorkItem) {
        bool cVar1;
        memory_order in_ECX;
        ServerConnectionWorkItem* local_30;

        do {
            local_30 = (ServerConnectionWorkItem*)operator_cast_to_ServerConnectionWorkItem_();
            *(ServerConnectionWorkItem**)serverConnectionWorkItem = local_30;
            cVar1 = compare_exchange_weak(local_30, serverConnectionWorkItem, in_ECX);
            in_ECX = (memory_order)(local_30 != nullptr);
        } while (!cVar1);
        return local_30 != nullptr;
    }

    // 0x1000bb8e0
    uint64_t LockFreeStack<ServerConnectionWorkItem>::TakeStack() {
        uint64_t uVar1;
        ServerConnectionWorkItem* in_RSI;
        uint8_t auVar2[12];

        auVar2 = operator_cast_to_ServerConnectionWorkItem_();
        if (auVar2._0_8_ == 0) {
            uVar1 = 0;
        } else {
            uVar1 = exchange(in_RSI, auVar2._8_4_);
        }
        return uVar1;
    }

    // 0x100125f10
    LockFreeStack<ServerConnectionWorkItem>::LockFreeStack() {}

    // 0x10013de60
    LockFreeStack<sound::Mixer::QueuedOp>::LockFreeStack() {}

    // 0x10029d760
    bool LockFreeStack<sound::Mixer::QueuedOp>::PushHead(sound::Mixer::QueuedOp* queuedOp) {
        bool cVar1;
        memory_order in_ECX;
        QueuedOp* local_30;

        do {
            local_30 = (QueuedOp*)operator_cast_to_QueuedOp_();
            *(QueuedOp**)queuedOp = local_30;
            cVar1 = compare_exchange_weak(local_30, queuedOp, in_ECX);
            in_ECX = (memory_order)(local_30 != nullptr);
        } while (!cVar1);
        return local_30 != nullptr;
    }

    // 0x10029d930
    uint64_t LockFreeStack<sound::Mixer::QueuedOp>::TakeStack() {
        uint64_t uVar1;
        QueuedOp* in_RSI;
        uint8_t auVar2[12];

        auVar2 = operator_cast_to_QueuedOp_();
        if (auVar2._0_8_ == 0) {
            uVar1 = 0;
        } else {
            uVar1 = exchange(in_RSI, auVar2._8_4_);
        }
        return uVar1;
    }

    // 0x1002b9310
    uint64_t LockFreeStack<Js5RemoteRequestData>::TakeStack() {
        uint64_t uVar1;
        Js5RemoteRequestData* in_RSI;
        uint8_t auVar2[12];

        auVar2 = operator_cast_to_Js5RemoteRequestData_();
        if (auVar2._0_8_ == 0) {
            uVar1 = 0;
        } else {
            uVar1 = exchange(in_RSI, auVar2._8_4_);
        }
        return uVar1;
    }

    // 0x1002b9500
    bool LockFreeStack<Js5RemoteRequestData>::PushHead(Js5RemoteRequestData* js5RemoteRequestData) {
        bool cVar1;
        memory_order in_ECX;
        Js5RemoteRequestData* local_30;

        do {
            local_30 = (Js5RemoteRequestData*)operator_cast_to_Js5RemoteRequestData_();
            js5RemoteRequestData->field_0 = local_30;
            cVar1 = compare_exchange_weak(local_30, js5RemoteRequestData, in_ECX);
            in_ECX = (memory_order)(local_30 != nullptr);
        } while (!cVar1);
        return local_30 != nullptr;
    }

    // 0x1002da5a0
    LockFreeStack<Js5RemoteRequestData>::LockFreeStack() {}

} // namespace jag::oldscape::jagex3

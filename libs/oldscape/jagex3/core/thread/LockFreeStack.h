// libs/oldscape/jagex3/core/thread/LockFreeStack.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::jagex3 {
    template <
        typename...> // 3 instantiations, e.g. <ServerConnectionWorkItem>, <Js5RemoteRequestData>, <sound::Mixer::QueuedOp>
    class LockFreeStack {
    public:
        LockFreeStack();
        bool PushHead(ServerConnectionWorkItem*);
        TakeStack();
        bool PushHead(sound::Mixer::QueuedOp*);
        bool PushHead(Js5RemoteRequestData*);
    };

    template <typename...> // 1 instantiations, e.g. <ServerConnectionWorkItem>
    class LockFreeStackData {
    public:
        LockFreeStackData<sound::Mixer::QueuedOp>* Reverse();
    };

    // 0x1000bb380, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // LockFreeStack<ServerConnectionWorkItem>::LockFreeStack(): jumps straight to the base-object constructor

    // 0x1000bb550, 96 bytes, inline, placed by class name
    // LockFreeStack<ServerConnectionWorkItem>::PushHead(ServerConnectionWorkItem*)
    bool LockFreeStack<ServerConnectionWorkItem>::PushHead(ServerConnectionWorkItem* param_1) {
        char cVar1;
        ServerConnectionWorkItem* local_30;

        do {
            local_30 = operator_cast_to_ServerConnectionWorkItem_();
            *(ServerConnectionWorkItem**)param_1 = local_30;
            cVar1 =
                std::__atomic_base<ServerConnectionWorkItem*, false>::compare_exchange_weak(this, &local_30, param_1);
        } while (cVar1 == '\0');
        return local_30 != (ServerConnectionWorkItem*)0;
    }

    // 0x1000bb8e0, 48 bytes, inline, placed by class name
    // LockFreeStack<ServerConnectionWorkItem>::TakeStack()
    undefined8 LockFreeStack<ServerConnectionWorkItem>::TakeStack() {
        undefined8 uVar2;

        if (operator_cast_to_ServerConnectionWorkItem_() == (ServerConnectionWorkItem*)0) {
            uVar2 = 0;
        } else {
            uVar2 = std::__atomic_base<ServerConnectionWorkItem*, false>::exchange(this);
        }
        return uVar2;
    }

    // 0x100125f10, 16 bytes, base-object constructor, inline, placed by class name
    // LockFreeStack<ServerConnectionWorkItem>::LockFreeStack()
    void LockFreeStack<ServerConnectionWorkItem>::LockFreeStack() {
        std::atomic<ServerConnectionWorkItem*>::atomic((ServerConnectionWorkItem*)this);
    }

    // 0x10013d780, 16 bytes, complete-object constructor, inline, placed by class name
    // LockFreeStack<sound::Mixer::QueuedOp>::LockFreeStack(): jumps straight to the base-object constructor

    // 0x10013de60, 16 bytes, base-object constructor, inline, placed by class name
    // LockFreeStack<sound::Mixer::QueuedOp>::LockFreeStack()
    void LockFreeStack<sound::Mixer::QueuedOp>::LockFreeStack() {
        std::atomic<sound::Mixer::QueuedOp*>::atomic((QueuedOp*)this);
    }

    // 0x10029d760, 96 bytes, inline, placed by class name
    // LockFreeStack<sound::Mixer::QueuedOp>::PushHead(sound::Mixer::QueuedOp*)
    bool LockFreeStack<sound::Mixer::QueuedOp>::PushHead(QueuedOp* param_1) {
        char cVar1;
        QueuedOp* local_30;

        do {
            local_30 = operator_cast_to_QueuedOp_();
            *(QueuedOp**)param_1 = local_30;
            cVar1 = std::__atomic_base<sound::Mixer::QueuedOp*, false>::compare_exchange_weak(this, &local_30, param_1);
        } while (cVar1 == '\0');
        return local_30 != (QueuedOp*)0;
    }

    // 0x10029d930, 48 bytes, inline, placed by class name
    // LockFreeStack<sound::Mixer::QueuedOp>::TakeStack()
    undefined8 LockFreeStack<sound::Mixer::QueuedOp>::TakeStack() {
        undefined8 uVar2;

        if (operator_cast_to_QueuedOp_() == (QueuedOp*)0) {
            uVar2 = 0;
        } else {
            uVar2 = std::__atomic_base<sound::Mixer::QueuedOp*, false>::exchange(this);
        }
        return uVar2;
    }

    // 0x1002b9310, 48 bytes, inline, placed by class name
    // LockFreeStack<Js5RemoteRequestData>::TakeStack()
    undefined8 LockFreeStack<Js5RemoteRequestData>::TakeStack() {
        undefined8 uVar2;

        if (operator_cast_to_Js5RemoteRequestData_() == (Js5RemoteRequestData*)0) {
            uVar2 = 0;
        } else {
            uVar2 = std::__atomic_base<Js5RemoteRequestData*, false>::exchange(this);
        }
        return uVar2;
    }

    // 0x1002b9500, 96 bytes, inline, placed by class name
    // LockFreeStack<Js5RemoteRequestData>::PushHead(Js5RemoteRequestData*)
    bool LockFreeStack<Js5RemoteRequestData>::PushHead(Js5RemoteRequestData* param_1) {
        char cVar1;
        Js5RemoteRequestData* local_30;

        do {
            local_30 = operator_cast_to_Js5RemoteRequestData_();
            param_1->field_0 = local_30;
            cVar1 = std::__atomic_base<Js5RemoteRequestData*, false>::compare_exchange_weak(this, &local_30, param_1);
        } while (cVar1 == '\0');
        return local_30 != (Js5RemoteRequestData*)0;
    }

    // 0x1002bb7a0, 16 bytes, complete-object constructor, inline, placed by class name
    // LockFreeStack<Js5RemoteRequestData>::LockFreeStack(): jumps straight to the base-object constructor

    // 0x1002da5a0, 16 bytes, base-object constructor, inline, placed by class name
    // LockFreeStack<Js5RemoteRequestData>::LockFreeStack()
    void LockFreeStack<Js5RemoteRequestData>::LockFreeStack() {
        std::atomic<Js5RemoteRequestData*>::atomic((Js5RemoteRequestData*)this);
    }

} // namespace jag::oldscape::jagex3

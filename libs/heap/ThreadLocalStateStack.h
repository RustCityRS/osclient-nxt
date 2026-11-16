// libs/heap/ThreadLocalStateStack.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    template <
        typename...> // 4 instantiations, e.g. <HeapAllocatorProxy*, 16u, 16u, false>, <HeapState, 16u, 16u, false>, <unsigned int, 16u, 16u, false>
    class ThreadLocalStateStack {
    public:
        ~ThreadLocalStateStack();
        ThreadLocalStateStack(HeapState);
        ThreadLocalStateStack(unsigned long);
        ThreadLocalStateStack(HeapAllocatorProxy*);
        ThreadLocalStateStack(unsigned int);
        Get() const;
        void SetGlobal(HeapAllocatorProxy*);
        void Push(HeapAllocatorProxy*);
        void Pop();
        void Push(HeapState);
        void Push(unsigned long);
        void Push(unsigned int);
    };

    // 0x100c92820, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ThreadLocalStateStack<unsigned int, 16u, 16u, false>::~ThreadLocalStateStack(): jumps straight to the base-object destructor

    // 0x100c92830, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>::~ThreadLocalStateStack(): jumps straight to the base-object destructor

    // 0x100c92840, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ThreadLocalStateStack<unsigned long, 16u, 16u, false>::~ThreadLocalStateStack(): jumps straight to the base-object destructor

    // 0x100c92850, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ThreadLocalStateStack<HeapState, 16u, 16u, false>::~ThreadLocalStateStack(): jumps straight to the base-object destructor

    // 0x100c92860, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // ThreadLocalStateStack<unsigned int, 16u, 16u, false>::~ThreadLocalStateStack()
    void ThreadLocalStateStack<unsigned int, 16u, 16u, false>::~ThreadLocalStateStack(
        ThreadLocalStateStack<unsigned int, 16u, 16u, false>* this) {
        ~fixed_stack();
    }

    // 0x100c92900, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>::~ThreadLocalStateStack()
    void ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>::~ThreadLocalStateStack(
        ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>* this) {
        ~fixed_stack();
    }

    // 0x100c929a0, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // ThreadLocalStateStack<unsigned long, 16u, 16u, false>::~ThreadLocalStateStack()
    void ThreadLocalStateStack<unsigned long, 16u, 16u, false>::~ThreadLocalStateStack(
        ThreadLocalStateStack<unsigned long, 16u, 16u, false>* this) {
        ~fixed_stack();
    }

    // 0x100c92a40, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // ThreadLocalStateStack<HeapState, 16u, 16u, false>::~ThreadLocalStateStack()
    void ThreadLocalStateStack<HeapState, 16u, 16u, false>::~ThreadLocalStateStack(
        ThreadLocalStateStack<HeapState, 16u, 16u, false>* this) {
        ~fixed_stack();
    }

    // 0x100c93340, 16 bytes, complete-object constructor, inline, placed by class name
    // ThreadLocalStateStack<HeapState, 16u, 16u, false>::ThreadLocalStateStack(HeapState): jumps straight to the base-object constructor

    // 0x100c93350, 16 bytes, complete-object constructor, inline, placed by class name
    // ThreadLocalStateStack<unsigned long, 16u, 16u, false>::ThreadLocalStateStack(unsigned long): jumps straight to the base-object constructor

    // 0x100c93360, 16 bytes, complete-object constructor, inline, placed by class name
    // ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>::ThreadLocalStateStack(HeapAllocatorProxy*): jumps straight to the base-object constructor

    // 0x100c93370, 16 bytes, complete-object constructor, inline, placed by class name
    // ThreadLocalStateStack<unsigned int, 16u, 16u, false>::ThreadLocalStateStack(unsigned int): jumps straight to the base-object constructor

    // 0x100c933b0, 48 bytes, inline, placed by class name
    // ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>::Get() const
    undefined8 ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>::Get(
        ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>* this) {
        char cVar1;
        ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>* pTVar2;

        cVar1 = empty();
        if (cVar1 == '\0') {
            pTVar2 = (ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>*)top();
        } else {
            pTVar2 = this + 152;
        }
        return *(undefined8*)pTVar2;
    }

    // 0x100c93400, 16 bytes, inline, placed by class name
    // ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>::SetGlobal(HeapAllocatorProxy*)
    void ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>::SetGlobal(
        ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>* this, HeapAllocatorProxy* param_1) {
        *(HeapAllocatorProxy**)(this + 152) = param_1;
    }

    // 0x100c93430, 80 bytes, inline, placed by class name
    // ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>::Push(HeapAllocatorProxy*)
    void ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>::Push(
        ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>* this, HeapAllocatorProxy* param_1) {
        vector* pvVar1;
        undefined8 in_R8;
        undefined8 in_R9;

        pvVar1 = SSOBeginPtr(param_1);
        if (pvVar1 == (vector*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "pStack",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/ThreadLocalStateStack.h",
                45, (char*)0, in_R8, in_R9, param_1);
        }
        eastl::stack<HeapAllocatorProxy*, eastl::fixed_vector<HeapAllocatorProxy*, 16ul, false,
                                                              eastl::dummy_allocator>>::push((HeapAllocatorProxy**)
                                                                                                 pvVar1);
    }

    // 0x100c934a0, 64 bytes, inline, placed by class name
    // ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>::Pop()
    void ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>::Pop(
        ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>* this) {
        vector* this_00;
        type* in_RSI;

        this_00 = SSOBeginPtr(in_RSI);
        if (this_00 == (vector*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "pStack",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/ThreadLocalStateStack.h",
                55, (char*)0);
        }
        this_00->pop();
    }

    // 0x100c934f0, 80 bytes, inline, placed by class name
    // ThreadLocalStateStack<HeapState, 16u, 16u, false>::Push(HeapState)
    void ThreadLocalStateStack<HeapState, 16u, 16u, false>::Push(Layout* param_1, type* param_2, undefined8 param_3,
                                                                 undefined8 param_4, undefined8 param_5,
                                                                 undefined8 param_6) {
        undefined4 in_EAX;
        vector* pvVar1;
        undefined8 uVar2;

        uVar2 = CONCAT44((int)param_2, in_EAX);
        pvVar1 = eastl::string::Layout::SSOBeginPtr(param_1, param_2);
        if (pvVar1 == (vector*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "pStack",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/ThreadLocalStateStack.h",
                45, (char*)0, param_5, param_6, uVar2);
        }
        eastl::stack<HeapState, eastl::fixed_vector<HeapState, 16ul, false, eastl::dummy_allocator>>::push(
            (HeapState*)pvVar1);
    }

    // 0x100c93550, 64 bytes, inline, placed by class name
    // ThreadLocalStateStack<HeapState, 16u, 16u, false>::Pop()
    void
    ThreadLocalStateStack<HeapState, 16u, 16u, false>::Pop(ThreadLocalStateStack<HeapState, 16u, 16u, false>* this) {
        vector* this_00;
        type* in_RSI;

        this_00 = SSOBeginPtr(in_RSI);
        if (this_00 == (vector*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "pStack",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/ThreadLocalStateStack.h",
                55, (char*)0);
        }
        this_00->pop();
    }

    // 0x100c935c0, 48 bytes, inline, placed by class name
    // ThreadLocalStateStack<HeapState, 16u, 16u, false>::Get() const
    undefined4
    ThreadLocalStateStack<HeapState, 16u, 16u, false>::Get(ThreadLocalStateStack<HeapState, 16u, 16u, false>* this) {
        char cVar1;
        ThreadLocalStateStack<HeapState, 16u, 16u, false>* pTVar2;

        cVar1 = empty();
        if (cVar1 == '\0') {
            pTVar2 = (ThreadLocalStateStack<HeapState, 16u, 16u, false>*)top();
        } else {
            pTVar2 = this + 88;
        }
        return *(undefined4*)pTVar2;
    }

    // 0x100c93600, 80 bytes, inline, placed by class name
    // ThreadLocalStateStack<unsigned long, 16u, 16u, false>::Push(unsigned long)
    void ThreadLocalStateStack<unsigned long, 16u, 16u, false>::Push(
        ThreadLocalStateStack<unsigned long, 16u, 16u, false>* this, ulong param_1) {
        vector* pvVar1;
        undefined8 in_R8;
        undefined8 in_R9;

        pvVar1 = SSOBeginPtr(param_1);
        if (pvVar1 == (vector*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "pStack",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/ThreadLocalStateStack.h",
                45, (char*)0, in_R8, in_R9, param_1);
        }
        eastl::stack<unsigned long, eastl::fixed_vector<unsigned long, 16ul, false, eastl::dummy_allocator>>::push(
            (ulong*)pvVar1);
    }

    // 0x100c93660, 64 bytes, inline, placed by class name
    // ThreadLocalStateStack<unsigned long, 16u, 16u, false>::Pop()
    void ThreadLocalStateStack<unsigned long, 16u, 16u, false>::Pop(
        ThreadLocalStateStack<unsigned long, 16u, 16u, false>* this) {
        vector* this_00;
        type* in_RSI;

        this_00 = SSOBeginPtr(in_RSI);
        if (this_00 == (vector*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "pStack",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/ThreadLocalStateStack.h",
                55, (char*)0);
        }
        this_00->pop();
    }

    // 0x100c93700, 48 bytes, inline, placed by class name
    // ThreadLocalStateStack<unsigned int, 16u, 16u, false>::Get() const
    undefined4 ThreadLocalStateStack<unsigned int, 16u, 16u, false>::Get(
        ThreadLocalStateStack<unsigned int, 16u, 16u, false>* this) {
        char cVar1;
        ThreadLocalStateStack<unsigned int, 16u, 16u, false>* pTVar2;

        cVar1 = empty();
        if (cVar1 == '\0') {
            pTVar2 = (ThreadLocalStateStack<unsigned int, 16u, 16u, false>*)top();
        } else {
            pTVar2 = this + 88;
        }
        return *(undefined4*)pTVar2;
    }

    // 0x100c938c0, 80 bytes, inline, placed by class name
    // ThreadLocalStateStack<unsigned int, 16u, 16u, false>::Push(unsigned int)
    void ThreadLocalStateStack<unsigned int, 16u, 16u, false>::Push(
        ThreadLocalStateStack<unsigned int, 16u, 16u, false>* this, uint param_1) {
        undefined4 in_EAX;
        vector* pvVar1;
        undefined4 in_register_00000034;
        undefined8 in_R8;
        undefined8 in_R9;
        undefined8 uVar2;

        uVar2 = CONCAT44(param_1, in_EAX);
        pvVar1 = SSOBeginPtr((type*)CONCAT44(in_register_00000034, param_1));
        if (pvVar1 == (vector*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "pStack",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/ThreadLocalStateStack.h",
                45, (char*)0, in_R8, in_R9, uVar2);
        }
        eastl::stack<unsigned int, eastl::fixed_vector<unsigned int, 16ul, false, eastl::dummy_allocator>>::push(
            (uint*)pvVar1);
    }

    // 0x100c93930, 64 bytes, inline, placed by class name
    // ThreadLocalStateStack<unsigned int, 16u, 16u, false>::Pop()
    void ThreadLocalStateStack<unsigned int, 16u, 16u, false>::Pop(
        ThreadLocalStateStack<unsigned int, 16u, 16u, false>* this) {
        vector* this_00;
        type* in_RSI;

        this_00 = SSOBeginPtr(in_RSI);
        if (this_00 == (vector*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "pStack",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/ThreadLocalStateStack.h",
                55, (char*)0);
        }
        this_00->pop();
    }

    // 0x100c94400, 32 bytes, base-object constructor, inline, placed by class name
    // ThreadLocalStateStack<HeapState, 16u, 16u, false>::ThreadLocalStateStack(HeapState)
    void ThreadLocalStateStack<HeapState, 16u, 16u, false>::ThreadLocalStateStack(
        ThreadLocalStateStack<HeapState, 16u, 16u, false>* this, undefined4 param_2) {
        eastl::fixed_stack<HeapState, 16ul, false>::fixed_stack();
        *(undefined4*)(this + 88) = param_2;
    }

    // 0x100c944d0, 32 bytes, base-object constructor, inline, placed by class name
    // ThreadLocalStateStack<unsigned long, 16u, 16u, false>::ThreadLocalStateStack(unsigned long)
    void ThreadLocalStateStack<unsigned long, 16u, 16u, false>::ThreadLocalStateStack(
        ThreadLocalStateStack<unsigned long, 16u, 16u, false>* this, ulong param_1) {
        eastl::fixed_stack<unsigned long, 16ul, false>::fixed_stack();
        *(ulong*)(this + 152) = param_1;
    }

    // 0x100c945a0, 32 bytes, base-object constructor, inline, placed by class name
    // ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>::ThreadLocalStateStack(HeapAllocatorProxy*)
    void ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>::ThreadLocalStateStack(
        ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>* this, HeapAllocatorProxy* param_1) {
        eastl::fixed_stack<HeapAllocatorProxy*, 16ul, false>::fixed_stack();
        *(HeapAllocatorProxy**)(this + 152) = param_1;
    }

    // 0x100c94670, 32 bytes, base-object constructor, inline, placed by class name
    // ThreadLocalStateStack<unsigned int, 16u, 16u, false>::ThreadLocalStateStack(unsigned int)
    void ThreadLocalStateStack<unsigned int, 16u, 16u, false>::ThreadLocalStateStack(
        ThreadLocalStateStack<unsigned int, 16u, 16u, false>* this, uint param_1) {
        eastl::fixed_stack<unsigned int, 16ul, false>::fixed_stack();
        *(uint*)(this + 88) = param_1;
    }

} // namespace jag

// libs/heap/ThreadLocalStateStack.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    template <
        typename...> // 4 instantiations, e.g. <HeapAllocatorProxy*, 16u, 16u, false>, <HeapState, 16u, 16u, false>, <unsigned int, 16u, 16u, false>
    class ThreadLocalStateStack {
    public:
        ~ThreadLocalStateStack();
        ThreadLocalStateStack(HeapState heapState);
        ThreadLocalStateStack(unsigned long arg1);
        ThreadLocalStateStack(HeapAllocatorProxy* heapAllocatorProxy);
        ThreadLocalStateStack(unsigned int arg1);
        uint64_t Get() const;
        void SetGlobal(HeapAllocatorProxy* heapAllocatorProxy);
        void Push(HeapAllocatorProxy* heapAllocatorProxy);
        void Pop();
        void Push(HeapState heapState);
        uint32_t Get() const;
        void Push(unsigned long arg1);
        void Push(unsigned int arg1);
    };

    // 0x100c92860
    ThreadLocalStateStack<unsigned int, 16u, 16u, false>::~ThreadLocalStateStack() {}

    // 0x100c92900
    ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>::~ThreadLocalStateStack() {}

    // 0x100c929a0
    ThreadLocalStateStack<unsigned long, 16u, 16u, false>::~ThreadLocalStateStack() {}

    // 0x100c92a40
    ThreadLocalStateStack<HeapState, 16u, 16u, false>::~ThreadLocalStateStack() {}

    // 0x100c933b0
    uint64_t ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>::Get() const {
        ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>* pTVar2;

        if (empty() == '\0') {
            pTVar2 = (ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>*)top();
        } else {
            pTVar2 = this + 152;
        }
        return *(uint64_t*)pTVar2;
    }

    // 0x100c93400
    void
    ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>::SetGlobal(HeapAllocatorProxy* heapAllocatorProxy) {
        *(HeapAllocatorProxy**)(this + 152) = heapAllocatorProxy;
    }

    // 0x100c93430
    void ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>::Push(HeapAllocatorProxy* heapAllocatorProxy) {
        auto this_00 = SSOBeginPtr();
        if (this_00 == (stack<HeapAllocatorProxy*,
                              eastl::fixed_vector<HeapAllocatorProxy*, 16ul, false, eastl::dummy_allocator>>*)0) {
            LogAssert(
                "pStack",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/ThreadLocalStateStack.h",
                45, nullptr);
        }
        this_00->push(heapAllocatorProxy);
    }

    // 0x100c934a0
    void ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>::Pop() {
        if (SSOBeginPtr() == 0) {
            LogAssert(
                "pStack",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/ThreadLocalStateStack.h",
                55, nullptr);
        }
        eastl::stack<HeapAllocatorProxy*,
                     eastl::fixed_vector<HeapAllocatorProxy*, 16ul, false, eastl::dummy_allocator>>::pop();
    }

    // 0x100c934f0
    void ThreadLocalStateStack<HeapState, 16u, 16u, false>::Push(HeapState heapState) {
        uint32_t in_EAX;
        uint64_t in_R8;
        uint64_t in_R9;
        HeapState aHStackY_218[128];

        uint64_t uVar1 = (((uint64_t)heapState << 32) | (uint32_t)in_EAX);
        auto this_00 = SSOBeginPtr();
        if (this_00 == nullptr) {
            LogAssert(
                "pStack",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/ThreadLocalStateStack.h",
                45, nullptr, in_R8, in_R9, uVar1);
        }
        this_00->push(*(aHStackY_218 + 129));
    }

    // 0x100c93550
    void ThreadLocalStateStack<HeapState, 16u, 16u, false>::Pop() {
        if (SSOBeginPtr() == 0) {
            LogAssert(
                "pStack",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/ThreadLocalStateStack.h",
                55, nullptr);
        }
        eastl::stack<HeapState, eastl::fixed_vector<HeapState, 16ul, false, eastl::dummy_allocator>>::pop();
    }

    // 0x100c935c0
    uint32_t ThreadLocalStateStack<HeapState, 16u, 16u, false>::Get() const {
        ThreadLocalStateStack<HeapState, 16u, 16u, false>* pTVar2;

        if (empty() == '\0') {
            pTVar2 = (ThreadLocalStateStack<HeapState, 16u, 16u, false>*)top();
        } else {
            pTVar2 = this + 88;
        }
        return *(uint32_t*)pTVar2;
    }

    // 0x100c93600
    void ThreadLocalStateStack<unsigned long, 16u, 16u, false>::Push(unsigned long arg1) {
        stack<unsigned long, eastl::fixed_vector<unsigned long, 16ul, false, eastl::dummy_allocator>>* this_00;

        this_00 = (stack<unsigned long, eastl::fixed_vector<unsigned long, 16ul, false, eastl::dummy_allocator>>*)
            SSOBeginPtr();
        if (this_00 == nullptr) {
            LogAssert(
                "pStack",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/ThreadLocalStateStack.h",
                45, nullptr);
        }
        this_00->push(arg1);
    }

    // 0x100c93660
    void ThreadLocalStateStack<unsigned long, 16u, 16u, false>::Pop() {
        if (SSOBeginPtr() == 0) {
            LogAssert(
                "pStack",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/ThreadLocalStateStack.h",
                55, nullptr);
        }
        eastl::stack<unsigned long, eastl::fixed_vector<unsigned long, 16ul, false, eastl::dummy_allocator>>::pop();
    }

    // 0x100c93700
    uint32_t ThreadLocalStateStack<unsigned int, 16u, 16u, false>::Get() const {
        ThreadLocalStateStack<unsigned int, 16u, 16u, false>* pTVar2;

        if (empty() == '\0') {
            pTVar2 = (ThreadLocalStateStack<unsigned int, 16u, 16u, false>*)top();
        } else {
            pTVar2 = this + 88;
        }
        return *(uint32_t*)pTVar2;
    }

    // 0x100c938c0
    void ThreadLocalStateStack<unsigned int, 16u, 16u, false>::Push(unsigned int arg1) {
        uint32_t in_EAX;
        uint64_t in_R8;
        uint64_t in_R9;
        unsigned int auStackY_218[128];

        uint64_t uVar1 = (((uint64_t)arg1 << 32) | (uint32_t)in_EAX);
        auto this_00 = SSOBeginPtr();
        if (this_00 == nullptr) {
            LogAssert(
                "pStack",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/ThreadLocalStateStack.h",
                45, nullptr, in_R8, in_R9, uVar1);
        }
        this_00->push(*(auStackY_218 + 129));
    }

    // 0x100c93930
    void ThreadLocalStateStack<unsigned int, 16u, 16u, false>::Pop() {
        if (SSOBeginPtr() == 0) {
            LogAssert(
                "pStack",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/ThreadLocalStateStack.h",
                55, nullptr);
        }
        eastl::stack<unsigned int, eastl::fixed_vector<unsigned int, 16ul, false, eastl::dummy_allocator>>::pop();
    }

    // 0x100c94400
    ThreadLocalStateStack<HeapState, 16u, 16u, false>::ThreadLocalStateStack(HeapState heapState)
        : eastl::fixed_stack<HeapState, 16ul, false>() {
        *(HeapState*)(this + 88) = heapState;
    }

    // 0x100c944d0
    ThreadLocalStateStack<unsigned long, 16u, 16u, false>::ThreadLocalStateStack(unsigned long arg1)
        : eastl::fixed_stack<unsigned long, 16ul, false>() {
        *(unsigned long*)(this + 152) = arg1;
    }

    // 0x100c945a0
    ThreadLocalStateStack<HeapAllocatorProxy*, 16u, 16u, false>::ThreadLocalStateStack(
        HeapAllocatorProxy* heapAllocatorProxy) {
        new (this) eastl::fixed_stack<HeapAllocatorProxy*, 16ul, false>();
        *(HeapAllocatorProxy**)(this + 152) = heapAllocatorProxy;
    }

    // 0x100c94670
    ThreadLocalStateStack<unsigned int, 16u, 16u, false>::ThreadLocalStateStack(unsigned int arg1)
        : eastl::fixed_stack<unsigned int, 16ul, false>() {
        *(unsigned int*)(this + 88) = arg1;
    }

} // namespace jag

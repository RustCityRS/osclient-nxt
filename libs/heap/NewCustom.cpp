// libs/heap/NewCustom.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.heap

// 0x100c93e30
operator new(unsigned long arg1) {
    jag::aligned_alloc(arg1, 16);
}

// 0x100c93e40
operator new[](unsigned long arg1) {
    jag::aligned_alloc(arg1, 16);
}

// 0x100c93e50
operator delete(void* arg1) {
    jag::aligned_dealloc(arg1);
}

// 0x100c93e60
operator delete[](void* arg1) {
    jag::aligned_dealloc(arg1);
}

// 0x100c93e70
operator new(unsigned long arg1, char* str, int arg3) {
    jag::aligned_alloc(arg1, 16);
}

// 0x100c93e80
operator new(unsigned long arg1, int arg2, const char* str, int arg4) {
    jag::aligned_alloc(arg1, 16);
}

// 0x100c93e90
operator new[](unsigned long arg1, int arg2, const char* str, int arg4) {
    jag::aligned_alloc(arg1, 16);
}

// 0x100c93ea0
operator delete(void* arg1, char* str, int arg3) {
    jag::aligned_dealloc(arg1);
}

// 0x100c93eb0
operator new(unsigned long arg1, Alignment alignment) {
    jag::aligned_alloc(arg1, (unsigned long)alignment);
}

// 0x100c93ec0
operator new(unsigned long arg1, Alignment alignment, void* arg3) {
    return arg3;
}

// 0x100c93ed0
operator new(unsigned long arg1, Alignment alignment, char* str, int arg4) {
    jag::aligned_alloc(arg1, (unsigned long)alignment);
}

// 0x100c93ee0
operator new[](unsigned long arg1, Alignment alignment) {
    jag::aligned_alloc(arg1, (unsigned long)alignment);
}

// 0x100c93ef0
operator delete(void* arg1, Alignment alignment) {
    jag::aligned_dealloc(arg1);
}

// 0x100c93f00
operator delete[](void* arg1, Alignment alignment) {
    jag::aligned_dealloc(arg1);
}

// 0x100c93f10
operator new[](unsigned long arg1, const char* str1, int arg3, unsigned int arg4, const char* str2, int arg6) {
    jag::aligned_alloc(arg1, 16);
}

// 0x100c93f20
operator new[](unsigned long arg1, unsigned long arg2, unsigned long arg3, const char* str1, int arg5,
               unsigned int arg6, const char* str2, int arg8) {
    jag::aligned_alloc(arg1, arg2);
}

namespace jag {
    // 0x100c93d70
    void aligned_alloc(unsigned long arg1, unsigned long arg2) {
        long lVar2;
        OptionStore* this_00;

        if (HeapInterface::IsInitialised() == '\0') {
            lVar2 = aligned_malloc(arg1, arg2);
        } else {
            lVar2 = HeapInterface::Instance()->AlignedAlloc(arg1, arg2);
        }
        if (lVar2 == 0) {
            this_00 = (OptionStore*)&DAT_100e617de;
            LogFatalError("pMem",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/NewCustom.cpp",
                          105, 0, "Failed to allocate %llu bytes with alignment %llu", arg1, arg2);
            this_00->~OptionStore();
        }
    }

    // 0x100c93df0
    void aligned_dealloc(void* arg1) {
        if (arg1 != nullptr) {
            if (HeapInterface::IsInitialised() == '\0') {
                _free(arg1);
            } else {
                HeapInterface::Instance()->AlignedFree(arg1);
            }
        }
    }

} // namespace jag

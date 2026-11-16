// libs/heap/NewCustom.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.heap

// 0x100c93e30, 16 bytes, placed by debug map only (low confidence)
// operator new(unsigned long)
void* operator_new(ulong param_1) {
    return (void*)jag::aligned_alloc(param_1, 16);
}

// 0x100c93e40, 16 bytes, placed by debug map only (low confidence)
// operator new[](unsigned long)
void* operator_new__(ulong param_1) {
    return (void*)jag::aligned_alloc(param_1, 16);
}

// 0x100c93e50, 16 bytes, placed by debug map only (low confidence)
// operator delete(void*)
void operator_delete(void* param_1) {
    jag::aligned_dealloc(param_1);
}

// 0x100c93e60, 16 bytes, placed by debug map only (low confidence)
// operator delete[](void*)
void operator_delete__(void* param_1) {
    jag::aligned_dealloc(param_1);
}

// 0x100c93e70, 16 bytes, placed by debug map only (low confidence)
// operator new(unsigned long, char*, int)
void* operator_new(ulong param_1, char* param_2, int param_3) {
    return (void*)jag::aligned_alloc(param_1, 16);
}

// 0x100c93e80, 16 bytes, placed by debug map only (low confidence)
// operator new(unsigned long, int, char const*, int)
void* operator_new(ulong param_1, int param_2, char* param_3, int param_4) {
    return (void*)jag::aligned_alloc(param_1, 16);
}

// 0x100c93e90, 16 bytes, placed by debug map only (low confidence)
// operator new[](unsigned long, int, char const*, int)
void* operator_new__(ulong param_1, int param_2, char* param_3, int param_4) {
    return (void*)jag::aligned_alloc(param_1, 16);
}

// 0x100c93ea0, 16 bytes, placed by debug map only (low confidence)
// operator delete(void*, char*, int)
void operator_delete(void* param_1, char* param_2, int param_3) {
    jag::aligned_dealloc(param_1);
}

// 0x100c93eb0, 16 bytes, placed by debug map only (low confidence)
// operator new(unsigned long, Alignment)
void* operator_new(ulong param_1, ulong param_2) {
    return (void*)jag::aligned_alloc(param_1, param_2);
}

// 0x100c93ec0, 16 bytes, placed by debug map only (low confidence)
// operator new(unsigned long, Alignment, void*)
void* operator_new(undefined8 param_1, undefined8 param_2, void* param_3) {
    return param_3;
}

// 0x100c93ed0, 16 bytes, placed by debug map only (low confidence)
// operator new(unsigned long, Alignment, char*, int)
void* operator_new(ulong param_1, ulong param_2) {
    return (void*)jag::aligned_alloc(param_1, param_2);
}

// 0x100c93ee0, 16 bytes, placed by debug map only (low confidence)
// operator new[](unsigned long, Alignment)
void* operator_new__(ulong param_1, ulong param_2) {
    return (void*)jag::aligned_alloc(param_1, param_2);
}

// 0x100c93ef0, 16 bytes, placed by debug map only (low confidence)
// operator delete(void*, Alignment)
void operator_delete(void* param_1) {
    jag::aligned_dealloc(param_1);
}

// 0x100c93f00, 16 bytes, placed by debug map only (low confidence)
// operator delete[](void*, Alignment)
void operator_delete__(void* param_1) {
    jag::aligned_dealloc(param_1);
}

// 0x100c93f10, 16 bytes, placed by debug map only (low confidence)
// operator new[](unsigned long, char const*, int, unsigned int, char const*, int)
void* operator_new__(ulong param_1, char* param_2, int param_3, uint param_4, char* param_5, int param_6) {
    return (void*)jag::aligned_alloc(param_1, 16);
}

// 0x100c93f20, 16 bytes, placed by debug map only (low confidence)
// operator new[](unsigned long, unsigned long, unsigned long, char const*, int, unsigned int, char const*, int)
void* operator_new__(ulong param_1, ulong param_2, ulong param_3, char* param_4, int param_5, uint param_6,
                     char* param_7, int param_8) {
    return (void*)jag::aligned_alloc(param_1, param_2);
}

namespace jag {
    // 0x100c93d70, 128 bytes, placed by debug map only (low confidence)
    // aligned_alloc(unsigned long, unsigned long)
    void aligned_alloc(ulong param_1, ulong param_2) {
        HeapInterface* this;
        long lVar2;
        OptionStore* this_00;

        if (HeapInterface::IsInitialised() == '\0') {
            lVar2 = aligned_malloc(param_1, param_2);
        } else {
            this = (HeapInterface*)HeapInterface::Instance();
            lVar2 = AlignedAlloc(param_1, param_2);
        }
        if (lVar2 == 0) {
            this_00 = (OptionStore*)&DAT_100e617de;
            LogFatalError("pMem",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/heap/NewCustom.cpp",
                          105, 0, "Failed to allocate %llu bytes with alignment %llu", param_1, param_2);
            /* WARNING: Subroutine does not return */
            this_00->~OptionStore();
        }
    }

    // 0x100c93df0, 64 bytes, placed by debug map only (low confidence)
    // aligned_dealloc(void*)
    void aligned_dealloc(void* param_1) {
        HeapInterface* this;

        if (param_1 != (void*)0) {
            if (HeapInterface::IsInitialised() == '\0') {
                _free(param_1);
            } else {
                this = (HeapInterface*)HeapInterface::Instance();
                AlignedFree(param_1);
            }
        }
    }

} // namespace jag

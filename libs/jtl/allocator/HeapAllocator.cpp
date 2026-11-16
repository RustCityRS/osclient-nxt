// libs/jtl/allocator/HeapAllocator.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.jtl

namespace jag {
    class HeapAllocator {
    public:
        // virtual methods in vtable order
        virtual ~HeapAllocator();
        virtual void AllocImpl(unsigned long, unsigned long);
        virtual void FreeImpl(void*, unsigned long);
        HeapAllocator(unsigned long);

        // data members, from how the methods use this: 48 bytes
        undefined** field_0; // offset 0, vtable pointer
        ulong field_8;       // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        long field_32;       // offset 32
        undefined8 field_40; // offset 40
    };

    // 0x100cbc3a0, 32 bytes, base-object constructor, placed by class name and debug map
    // HeapAllocator::HeapAllocator(unsigned long)
    void HeapAllocator::HeapAllocator(ulong param_1) {
        new (this) Allocator(param_1);
        field_0 = &PTR__HeapAllocator_100f2a240;
    }

    // 0x100cbc3c0, 16 bytes, complete-object constructor, placed by class name and debug map
    // HeapAllocator::HeapAllocator(unsigned long): jumps straight to the base-object constructor

    // 0x100cbc3d0, 16 bytes, base-object destructor, placed by class name and debug map
    // HeapAllocator::~HeapAllocator()
    void HeapAllocator::~HeapAllocator() {}

    // 0x100cbc3e0, 16 bytes, complete-object destructor, placed by class name and debug map
    // HeapAllocator::~HeapAllocator(): jumps straight to the base-object destructor

    // 0x100cbc3f0, 16 bytes, deleting destructor, placed by class name and debug map
    // HeapAllocator::~HeapAllocator()
    void HeapAllocator::~HeapAllocator() {
        operator_delete(this);
    }

    // 0x100cbc400, 80 bytes, placed by class name and debug map
    // HeapAllocator::AllocImpl(unsigned long, unsigned long)
    void HeapAllocator::AllocImpl(ulong param_1, ulong param_2) {
        char* this_00;

        if (aligned_malloc(param_1, param_2) == 0) {
            this_00 = "mem != nullptr";
            LogFatalError(
                "mem != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/HeapAllocator.cpp",
                22, 0, "Failed to allocate %zu bytes", param_1);
            /* WARNING: Subroutine does not return */
            this_00->~OptionStore();
        }
    }

    // 0x100cbc450, 16 bytes, placed by class name and debug map
    // HeapAllocator::FreeImpl(void*, unsigned long)
    void HeapAllocator::FreeImpl(void* param_1, ulong param_2) {
        _free(param_1);
    }

} // namespace jag

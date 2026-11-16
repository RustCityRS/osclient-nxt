// libs/jtl/allocator/HeapAllocator.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.jtl

namespace jag {
    class HeapAllocator {
    public:
        // virtual methods in vtable order
        virtual ~HeapAllocator();
        virtual void AllocImpl(unsigned long arg1, unsigned long arg2);
        virtual void FreeImpl(void* arg1, unsigned long arg2);
        HeapAllocator(unsigned long arg1);

    private:
        unsigned long field_8;
        uint64_t field_16;
        long field_24;
        long field_32;
        unsigned long field_40;
    };

    // 0x100cbc3a0
    HeapAllocator::HeapAllocator(unsigned long arg1) : Allocator(arg1) {}

    // 0x100cbc3d0
    HeapAllocator::~HeapAllocator() {}

    // 0x100cbc400
    void HeapAllocator::AllocImpl(unsigned long arg1, unsigned long arg2) {
        char* this_00;

        if (aligned_malloc(arg1, arg2) == 0) {
            this_00 = "mem != nullptr";
            LogFatalError(
                "mem != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/HeapAllocator.cpp",
                22, 0, "Failed to allocate %zu bytes", arg1);
            this_00->~OptionStore();
        }
    }

    // 0x100cbc450
    void HeapAllocator::FreeImpl(void* arg1, unsigned long arg2) {
        _free(arg1);
    }

} // namespace jag

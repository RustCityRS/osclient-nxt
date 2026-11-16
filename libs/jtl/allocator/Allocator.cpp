// libs/jtl/allocator/Allocator.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.jtl

namespace jag {
    class Allocator {
    public:
        // virtual methods in vtable order
        virtual ~Allocator();
        Allocator(unsigned long);
        void Alloc(unsigned long, unsigned int);
        AlignedAlloc(unsigned long, unsigned long, unsigned int);
        void Free(void*, unsigned int);
        void AlignedFree(void*, unsigned long, unsigned int);

        // data members, from how the methods use this: 48 bytes
        undefined** field_0; // offset 0, vtable pointer
        ulong field_8;       // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        long field_32;       // offset 32
        undefined8 field_40; // offset 40
    };

    // 0x100cbab50, 32 bytes, base-object constructor, placed by class name and debug map
    // Allocator::Allocator(unsigned long)
    void Allocator::Allocator(ulong param_1) {
        field_0 = &PTR__Allocator_100f2a210;
        field_8 = param_1;
        field_16 = 0;
        field_24 = 0;
        field_32 = 0;
        field_40 = 0;
    }

    // 0x100cbab70, 16 bytes, base-object destructor, placed by class name and debug map
    // Allocator::~Allocator()
    void Allocator::~Allocator() {}

    // 0x100cbab80, 16 bytes, complete-object destructor, placed by class name and debug map
    // Allocator::~Allocator(): jumps straight to the base-object destructor

    // 0x100cbab90, 16 bytes, deleting destructor, placed by class name and debug map
    // Allocator::~Allocator()
    void Allocator::~Allocator() {
        code* pcVar1;

        /* WARNING: Does not return */
        pcVar1 = (code*)invalidInstructionException();
        (*pcVar1)();
    }

    // 0x100cbaba0, 16 bytes, placed by class name and debug map
    // Allocator::Alloc(unsigned long, unsigned int)
    void Allocator::Alloc(ulong param_1, uint param_2) {
        undefined4 in_register_00000034;

        AlignedAlloc(param_1, CONCAT44(in_register_00000034, param_2), (uint) * (undefined8*)(param_1 + 8));
    }

    // 0x100cbabb0, 64 bytes, placed by class name and debug map
    // Allocator::AlignedAlloc(unsigned long, unsigned long, unsigned int)
    undefined8 Allocator::AlignedAlloc(ulong param_1, ulong param_2, uint param_3) {
        undefined8 uVar1;
        ulong* puVar2;

        uVar1 = (**(code**)(*(long*)param_1 + 16))();
        puVar2 = std::max<unsigned long>((ulong*)(param_1 + 16), (ulong*)(param_1 + 40));
        *(ulong*)(param_1 + 40) = *puVar2;
        *(long*)(param_1 + 32) = *(long*)(param_1 + 32) + 1;
        *(long*)(param_1 + 24) = *(long*)(param_1 + 24) + 1;
        return uVar1;
    }

    // 0x100cbac00, 16 bytes, placed by class name and debug map
    // Allocator::Free(void*, unsigned int)
    void Allocator::Free(void* param_1, uint param_2) {
        AlignedFree(this, (ulong)param_1, param_2);
    }

    // 0x100cbac10, 80 bytes, placed by class name and debug map
    // Allocator::AlignedFree(void*, unsigned long, unsigned int)
    void Allocator::AlignedFree(void* param_1, ulong param_2, uint param_3) {
        if (param_2 != 0) {
            if (*(long*)((long)param_1 + 32) == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "m_numAllocated > 0",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Allocator.cpp",
                    130, (char*)0);
            }
            (**(code**)(*(long*)param_1 + 24))(param_1, param_2, 0);
            *(long*)((long)param_1 + 32) = *(long*)((long)param_1 + 32) + -1;
        }
    }

} // namespace jag

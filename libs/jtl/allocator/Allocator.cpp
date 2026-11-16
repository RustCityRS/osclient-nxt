// libs/jtl/allocator/Allocator.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.jtl

namespace jag {
    class Allocator {
    public:
        // virtual methods in vtable order
        virtual ~Allocator();
        Allocator(unsigned long arg1);
        void Alloc(unsigned long arg1, unsigned int arg2);
        uint64_t AlignedAlloc(unsigned long arg1, unsigned long arg2, unsigned int arg3);
        void Free(void* arg1, unsigned int arg2);
        void AlignedFree(void* arg1, unsigned long arg2, unsigned int arg3);

    private:
        unsigned long field_8;
        uint64_t field_16;
        long field_24;
        long field_32;
        unsigned long field_40;
    };

    // 0x100cbab50
    Allocator::Allocator(unsigned long arg1) : field_8(arg1), field_16(0), field_24(0), field_32(0), field_40(0) {}

    // 0x100cbab70
    Allocator::~Allocator() {}

    // 0x100cbaba0
    void Allocator::Alloc(unsigned long arg1, unsigned int arg2) {
        unsigned int in_ECX;

        AlignedAlloc(arg1, field_8, in_ECX);
    }

    // 0x100cbabb0
    uint64_t Allocator::AlignedAlloc(unsigned long arg1, unsigned long arg2, unsigned int arg3) {
        uint64_t uVar1 = (*this->_vptr[1]._dtor)();
        auto puVar2 = std::max<unsigned long>(field_16, field_40);
        field_40 = *puVar2;
        field_32 = field_32 + 1;
        field_24 = field_24 + 1;
        return uVar1;
    }

    // 0x100cbac00
    void Allocator::Free(void* arg1, unsigned int arg2) {
        unsigned int in_ECX;
        uint32_t in_register_00000014;

        AlignedFree(arg1, (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2), in_ECX);
    }

    // 0x100cbac10
    void Allocator::AlignedFree(void* arg1, unsigned long arg2, unsigned int arg3) {
        if (arg1 != nullptr) {
            if (field_32 == 0) {
                LogAssert(
                    "m_numAllocated > 0",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Allocator.cpp",
                    130, nullptr);
            }
            (*this->_vptr[1]._deleting_dtor)(this, arg1, 0);
            field_32 = field_32 - 1;
        }
    }

} // namespace jag

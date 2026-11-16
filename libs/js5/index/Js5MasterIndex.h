// libs/js5/index/Js5MasterIndex.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag {
    class Js5MasterIndex {
    public:
        GetMaximumArchiveID() const;
        ~Js5MasterIndex();
        GetArchiveData(unsigned int) const;
        Js5MasterIndex(math::BigInteger const*, math::BigInteger const*,
                       PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);

        // data members, from how the methods use this: 16 bytes
        uint field_0; // offset 0
        char _unknown_4[12];
    };

    class Js5MasterIndexArchiveData {
    public:
        ~Js5MasterIndexArchiveData();
        Js5MasterIndexArchiveData();

        // data members, from how the methods use this: 40 bytes
        char _unknown_0[40];
    };

    // 0x1001a0310, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Js5MasterIndex::~Js5MasterIndex(): jumps straight to the base-object destructor

    // 0x1001a0320, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // Js5MasterIndex::~Js5MasterIndex()
    void Js5MasterIndex::~Js5MasterIndex() {
        (&field_8)->~Array();
    }

    // 0x1001a0490, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // Js5MasterIndexArchiveData::~Js5MasterIndexArchiveData(): jumps straight to the base-object destructor

    // 0x1001a04a0, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // Js5MasterIndexArchiveData::~Js5MasterIndexArchiveData()
    void Js5MasterIndexArchiveData::~Js5MasterIndexArchiveData() {
        (&field_8)->~Array();
    }

    // 0x1001a1b40, 32 bytes, inline, placed by debug map only (low confidence)
    // BucketAllocatorEASTL::allocate(unsigned long)
    /* BucketAllocatorEASTL::allocate(unsigned long, int) */

    void BucketAllocatorEASTL::allocate(ulong param_1, int param_2) {
        BucketManager::Allocate(param_1, 0, 16);
    }

    // 0x1001a1b40: the linker folded this into BucketAllocatorEASTL::allocate(unsigned long), which has identical code
    BucketAllocatorEASTL::allocate(unsigned long, int);

    // 0x1001a1b60, 32 bytes, inline, placed by debug map only (low confidence)
    // BucketManager::Allocate(unsigned long, unsigned int, unsigned long)
    long BucketManager::Allocate(ulong param_1, uint param_2, ulong param_3) {
        BucketManager local_30;

        DoAllocate(&local_30, param_1, param_3, param_2);
        return local_30.field_8;
    }

    // 0x1009e3900, 64 bytes, inline, placed by class name
    // Js5MasterIndex::GetArchiveData(unsigned int) const
    undefined8 Js5MasterIndex::GetArchiveData(uint param_1) {
        ulong uVar1;
        unique_ptr<Js5MasterIndexArchiveData, std::default_delete<Js5MasterIndexArchiveData>>* this_00;
        undefined8 uVar2;

        uVar1 = (&field_8)->end();
        if (param_1 < uVar1) {
            this_00 = (unique_ptr<Js5MasterIndexArchiveData, std::default_delete<Js5MasterIndexArchiveData>>*)
                Array<std::unique_ptr<Js5MasterIndexArchiveData, std::default_delete<Js5MasterIndexArchiveData>>,
                      eastl::allocator>::
                operator[](
                    (Array<std::unique_ptr<Js5MasterIndexArchiveData, std::default_delete<Js5MasterIndexArchiveData>>,
                           eastl::allocator>*)&field_8,
                    (ulong)param_1);
            uVar2 = std::unique_ptr<Js5MasterIndexArchiveData, std::default_delete<Js5MasterIndexArchiveData>>::get(
                this_00);
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x1009f1460, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Js5MasterIndexArchiveData::Js5MasterIndexArchiveData(): jumps straight to the base-object constructor

} // namespace jag

// libs/js5/index/Js5MasterIndex.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag {
    class Js5MasterIndex {
    public:
        unsigned int GetMaximumArchiveID() const;
        ~Js5MasterIndex();
        uint64_t GetArchiveData(unsigned int arg1) const;
        Js5MasterIndex(const math::BigInteger* bigInteger1, const math::BigInteger* bigInteger2,
                       PacketT<Array<unsigned char>>& arg3);

    private:
        unsigned int m_maximumArchiveID;
        uint8_t _unknown_4[12];
    };

    class Js5MasterIndexArchiveData {
    public:
        ~Js5MasterIndexArchiveData();
        Js5MasterIndexArchiveData();

        uint8_t _unknown_0[40];
    };

    // 0x1001a0320
    Js5MasterIndex::~Js5MasterIndex() {
        field_8.~Array();
    }

    // 0x1001a04a0
    Js5MasterIndexArchiveData::~Js5MasterIndexArchiveData() {
        field_8.~Array();
    }

    // 0x1001a1b40
    void BucketAllocatorEASTL::allocate(unsigned long arg1) {
        BucketManager::Allocate(arg1, 0, 16);
    }

    // 0x1001a1b40: BucketAllocatorEASTL::allocate(unsigned long, int) has the same machine code as BucketAllocatorEASTL::allocate(unsigned long)

    // 0x1001a1b60
    void BucketManager::Allocate(unsigned long arg1, unsigned int arg2, unsigned long arg3) {
        ReturnValue local_30;
        uint64_t local_28;

        DoAllocate(&local_30, arg1, arg3, arg2);
        return local_28;
    }

    // 0x1009e3900
    uint64_t Js5MasterIndex::GetArchiveData(unsigned int arg1) const {
        uint64_t uVar2;

        unsigned long uVar1 = field_8.end();
        if (arg1 < uVar1) {
            uVar2 = ((unique_ptr<Js5MasterIndexArchiveData>*)field_8[(unsigned long)arg1])->get();
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

} // namespace jag

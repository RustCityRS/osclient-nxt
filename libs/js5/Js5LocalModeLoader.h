// libs/js5/Js5LocalModeLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class Js5LocalModeLoader {
    public:
        Js5Index GetIndex() const;
        Js5LocalModeLoader(const Js5ArchiveSettings* js5ArchiveSettings, const Filename& filename, bool arg3,
                           bool arg4);
        Js5LocalModeLoader* ReadSection(File& file);
        auto GetGroupDataCompressed(unsigned int arg1);
        void ClearGroupData(unsigned int arg1);
        auto GetGroupData(unsigned int arg1);
        uint64_t GetUncompressedLength() const;
        ~Js5LocalModeLoader();

    private:
        Js5ArchiveSettings* field_0;
        uint8_t _unknown_8[304];
        Js5Index m_index;
        uint8_t _unknown_568[48];
        TextureAtlasReference field_616;
    };

    // 0x1009e33e0
    uint64_t Js5LocalModeLoader::GetUncompressedLength() const {
        return *(uint64_t*)(field_616 + 32);
    }

    // 0x1009e33f0
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::SetDataRaw(const Array<unsigned char>& arg1) {
        unsigned long arg1_00 = arg1.end();
        Reserve(this, arg1_00);
        auto pvVar1 = data();
        auto pvVar2 = arg1.data();
        size_t sVar3 = arg1.end();
        _memcpy(pvVar1, pvVar2, sVar3);
    }

    // 0x1009e3450
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pArrayBuffer(
        const PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1, unsigned long arg2, unsigned long arg3) {
        auto arg1_00 = arg1.GetDataPtr();
        pArrayBuffer(this, arg1_00, arg2, arg3);
    }

    // 0x1009e3ce0
    void safe_delete<Js5MemoryCache>(Js5MemoryCache*& arg1) {
        Js5MemoryCache* js5MemoryCache = arg1;
        if (js5MemoryCache != nullptr) {
            js5MemoryCache->~Js5MemoryCache();
            operator delete(js5MemoryCache);
        }
        arg1 = nullptr;
    }

    // 0x1009e3d10
    void safe_delete<Js5DiskCache>(Js5DiskCache*& arg1) {
        if (arg1 != nullptr) {
            delete ((arg1));
        }
        arg1 = nullptr;
    }

    // 0x1009e3d70
    void safe_delete<Array<std::unique_ptr<Js5LocalModeLoader>>>(Array<std::unique_ptr<Js5LocalModeLoader>>*& arg1) {
        Array<std::unique_ptr<Js5LocalModeLoader>>* array = (Array<std::unique_ptr<Js5LocalModeLoader>>*)*arg1;
        if (array != nullptr) {
            array->~Array();
            operator delete(array);
        }
        arg1 = nullptr;
    }

    // 0x1009fddf0
    Js5LocalModeLoader::~Js5LocalModeLoader() {
        field_616->~VBOMapper();
        field_584.~vector();
        m_index->~OldscapeToNxtJs5Index();
        field_8.~pair();
    }

} // namespace jag

// libs/js5/Js5LocalModeLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class Js5LocalModeLoader {
    public:
        Js5Index GetIndex() const;
        Js5LocalModeLoader(Js5ArchiveSettings const*, Filename const&, bool, bool);
        Js5LocalModeLoader* ReadSection(File&);
        GetGroupDataCompressed(unsigned int);
        void ClearGroupData(unsigned int);
        GetGroupData(unsigned int);
        GetUncompressedLength() const;
        ~Js5LocalModeLoader();

        // data members, from how the methods use this: 664 bytes
        Js5ArchiveSettings* field_0; // offset 0
        Filename field_8;            // offset 8
        char _unknown_24[288];
        Js5Index m_index; // offset 312
        char _unknown_568[48];
        TextureAtlasReference field_616; // offset 616
    };

    // 0x1009e33e0, 16 bytes, inline, placed by class name and debug map
    // Js5LocalModeLoader::GetUncompressedLength() const
    undefined8 Js5LocalModeLoader::GetUncompressedLength() {
        return *(undefined8*)(field_616 + 32);
    }

    // 0x1009e33f0, 96 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::SetDataRaw(Array<unsigned char, eastl::allocator> const&)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::SetDataRaw(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, Array* param_1) {
        ulong uVar1;
        void* pvVar2;
        void* pvVar3;
        size_t sVar4;

        uVar1 = param_1->end();
        Reserve(this, uVar1);
        pvVar2 = (void*)data();
        pvVar3 = (void*)param_1->data();
        sVar4 = param_1->end();
        _memcpy(pvVar2, pvVar3, sVar4);
    }

    // 0x1009e3450, 64 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::pArrayBuffer(PacketT<Array<unsigned char, BucketAllocatorEASTL> > const&, unsigned long, unsigned long)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pArrayBuffer(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, PacketT* param_1, ulong param_2, ulong param_3) {
        uchar* puVar1;

        puVar1 = (uchar*)param_1->GetDataPtr();
        pArrayBuffer(this, puVar1, param_2, param_3);
    }

    // 0x1009e3ce0, 48 bytes, inline, placed by debug map only (low confidence)
    // void safe_delete<Js5MemoryCache>(Js5MemoryCache*&)
    void safe_delete<Js5MemoryCache>(Js5MemoryCache** param_1) {
        Js5MemoryCache* this;

        this = *param_1;
        if (this != (Js5MemoryCache*)0) {
            ~Js5MemoryCache();
            operator_delete(this);
        }
        *param_1 = (Js5MemoryCache*)0;
    }

    // 0x1009e3d10, 48 bytes, inline, placed by debug map only (low confidence)
    // void safe_delete<Js5DiskCache>(Js5DiskCache*&)
    void safe_delete<Js5DiskCache>(Js5DiskCache** param_1) {
        if (*param_1 != (Js5DiskCache*)0) {
            (*(code*)(*param_1)->field_0[3])();
        }
        *param_1 = (Js5DiskCache*)0;
    }

    // 0x1009e3d70, 48 bytes, inline, placed by debug map only (low confidence)
    // void safe_delete<Array<std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader> >, eastl::allocator> >(Array<std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader> >, eastl::allocator>*&)
    /* void safe_delete<Array<std::unique_ptr<Js5LocalModeLoader,
   std::default_delete<Js5LocalModeLoader> >, eastl::allocator>
   >(Array<std::unique_ptr<Js5LocalModeLoader,
   std::default_delete<Js5LocalModeLoader> >, eastl::allocator>*&) */

    void jag::safe_delete<Array<std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>,
                                eastl::allocator>>(Array** param_1) {
        Array<std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>, eastl::allocator>* this;

        this = (Array<std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>,
                      eastl::allocator>*)*param_1;
        if (this !=
            (Array<std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>, eastl::allocator>*)0) {
            ~Array();
            operator_delete(this);
        }
        *param_1 = (Array*)0;
    }

    // 0x1009fdde0, 16 bytes, complete-object destructor, inline, placed by class name
    // Js5LocalModeLoader::~Js5LocalModeLoader(): jumps straight to the base-object destructor

    // 0x1009fddf0, 64 bytes, base-object destructor, inline, placed by class name
    // Js5LocalModeLoader::~Js5LocalModeLoader()
    void Js5LocalModeLoader::~Js5LocalModeLoader() {
        field_616->~VBOMapper();
        (&field_584)->~vector();
        m_index->~OldscapeToNxtJs5Index();
        field_8->~pair();
    }

} // namespace jag

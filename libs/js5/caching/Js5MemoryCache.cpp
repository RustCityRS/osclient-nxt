// libs/js5/caching/Js5MemoryCache.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.js5

#include "Js5MemoryCache.h"

namespace jag {
    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    Js5MemoryCache::GetCacheSize() const;

    // 0x1009e3f90, 16 bytes, complete-object constructor, placed by class name and debug map
    // Js5MemoryCache::Js5MemoryCache(unsigned int, unsigned int): jumps straight to the base-object constructor

    // 0x1009e49f0, 80 bytes, placed by class name and debug map
    // Js5MemoryCache::CheckFile(unsigned int, unsigned int, unsigned int, Js5Index const&)
    undefined8 Js5MemoryCache::CheckFile(uint param_1, uint param_2, uint param_3, Js5Index* param_4) {
        shared_ptr* this_00;
        undefined8 uVar2;

        this_00 = (shared_ptr*)GetFileInternal(this, param_1, param_2, param_4);
        if (shared_ptr::operator_cast_to_bool(this_00)) {
            uVar2 = param_4->DoesFileExist(param_2, param_3);
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x1009e60f0, 176 bytes, placed by class name and debug map
    // Js5MemoryCache::ProvideGroup(unsigned int, unsigned int, unsigned int, unsigned int, shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > > const&)
    void Js5MemoryCache::ProvideGroup(uint param_1, uint param_2, uint param_3, uint param_4, shared_ptr* param_5) {
        uint uVar1;
        uint uVar2;
        TextureAtlasReference* this_00;
        shared_ptr local_50;
        ulong local_40;
        uint local_38;
        uint local_34;

        local_38 = param_3;
        local_34 = param_4;
        bucket_make_shared<Js5MemoryCacheWrapper, unsigned int&, unsigned int&,
                           shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> const&>(
            (jag*)&local_50, &local_38, &local_34, param_5);
        this_00 = (TextureAtlasReference*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
            (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)param_5);
        uVar1 = this_00->GetTextureAtlas();
        uVar2 = GetKey(this, param_1, param_2);
        local_40 = (ulong)uVar2;
        (field_8, &local_50, uVar1, &local_40)->Put();
        local_50.~shared_ptr();
    }

    // 0x1009e63a0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<PacketT<Array<unsigned char, eastl::allocator> > >::type make_shared<PacketT<Array<unsigned char, eastl::allocator> >, PacketT<Array<unsigned char, eastl::allocator> > >(PacketT<Array<unsigned char, eastl::allocator> >&&)
    jag*
    jag::make_shared<PacketT<Array<unsigned char, eastl::allocator>>, PacketT<Array<unsigned char, eastl::allocator>>>(
        PacketT* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        PacketT* local_30[2];

        pvVar1 = (void*)aligned_alloc(64, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<PacketT<Array<unsigned char, eastl::allocator>>,
                                        hal::audio::decoders::vorbis::VorbisDecoderPacket>(
                (void*)((long)pvVar1 + 32), (VorbisDecoderPacket*)param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<PacketT<Array<unsigned char, eastl::allocator>>>, int,
                                   PacketT<Array<unsigned char, eastl::allocator>>*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x1009e6920, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<PacketT<Array<unsigned char, eastl::allocator> > >::type make_shared<PacketT<Array<unsigned char, eastl::allocator> >, PacketT<Array<unsigned char, eastl::allocator> >&>(PacketT<Array<unsigned char, eastl::allocator> >&)
    jag*
    jag::make_shared<PacketT<Array<unsigned char, eastl::allocator>>, PacketT<Array<unsigned char, eastl::allocator>>&>(
        PacketT* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        PacketT* local_30[2];

        pvVar1 = (void*)aligned_alloc(64, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] =
                placement_new<PacketT<Array<unsigned char, eastl::allocator>>,
                              PacketT<Array<unsigned char, eastl::allocator>>&>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<PacketT<Array<unsigned char, eastl::allocator>>>, int,
                                   PacketT<Array<unsigned char, eastl::allocator>>*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x1009ef360, 32 bytes, base-object constructor, placed by class name
    // Js5MemoryCache::Js5MemoryCache(unsigned int, unsigned int)
    void Js5MemoryCache::Js5MemoryCache(uint param_1, uint param_2) {
        field_0 = param_1;
        field_4 = param_2;
        new (field_8, param_1, "Js5MemoryCache")
            LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>();
    }

    // 0x1009ef540, 192 bytes, placed by class name
    // Js5MemoryCache::GetFileInternal(unsigned int, unsigned int, Js5Index const&)
    shared_ptr* Js5MemoryCache::GetFileInternal(uint param_1, uint param_2, Js5Index* param_3) {
        int iVar1;
        int iVar3;
        shared_ptr* this_00;
        int* piVar4;
        long lVar5;

        GetKey(this, param_1, param_2);
        this_00 = (shared_ptr*)LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>::Find(
            (ulonglong*)field_8);
        if (shared_ptr::operator_cast_to_bool(this_00)) {
            piVar4 = (int*)shared_ptr<Js5MemoryCacheWrapper>::operator->((shared_ptr<Js5MemoryCacheWrapper>*)this_00);
            iVar1 = *piVar4;
            iVar3 = param_3->GetGroupVersion(param_2);
            if (iVar1 == iVar3) {
                lVar5 = shared_ptr<Js5MemoryCacheWrapper>::operator->((shared_ptr<Js5MemoryCacheWrapper>*)this_00);
                iVar1 = *(int*)(lVar5 + 4);
                iVar3 = param_3->GetGroupCRC(param_2);
                if (iVar1 == iVar3) {
                    return this_00;
                }
            }
            DeleteGroup(this, param_1, param_2);
        }
        return (shared_ptr*)&Js5MemoryCacheWrapper::Null;
    }

    // 0x1009ef600, 288 bytes, placed by class name
    // Js5MemoryCache::FileLookup(shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&, unsigned int, unsigned int, unsigned int, Js5Index const&, bool)
    undefined* Js5MemoryCache::FileLookup(shared_ptr* param_1, uint param_2, uint param_3, uint param_4,
                                          Js5Index* param_5, bool param_6) {
        uint uVar3;
        shared_ptr* this_00;
        long lVar4;
        PacketT<Array<unsigned char, eastl::allocator>>* this_01;
        PacketT* pPVar5;
        undefined** ppuVar6;
        Js5DiskFileFormat local_48;

        this_00 = (shared_ptr*)GetFileInternal(this, param_2, param_3, param_5);
        if (shared_ptr::operator_cast_to_bool(this_00)) {
            lVar4 = shared_ptr<Js5MemoryCacheWrapper>::operator->((shared_ptr<Js5MemoryCacheWrapper>*)this_00);
            this_01 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                          shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)(lVar4 + 8));
            this_01->SetPos(0);
            if (param_5->GetFileCount(param_3) == 1) {
                lVar4 = shared_ptr<Js5MemoryCacheWrapper>::operator->((shared_ptr<Js5MemoryCacheWrapper>*)this_00);
                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator=(
                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, (shared_ptr*)(lVar4 + 8));
                ppuVar6 = &DataStatus::READY;
                if (param_6) {
                    DeleteGroup(this, param_2, param_3);
                }
            } else {
                uVar3 = param_5->GetFileIndex(param_3, param_4);
                lVar4 = shared_ptr<Js5MemoryCacheWrapper>::operator->((shared_ptr<Js5MemoryCacheWrapper>*)this_00);
                pPVar5 = (PacketT*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)(lVar4 + 8));
                local_48.GetGroupFileData(pPVar5, uVar3);
                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator=(
                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, (shared_ptr*)&local_48);
                local_48.~shared_ptr();
                ppuVar6 = &DataStatus::READY;
            }
        } else {
            ppuVar6 = &DataStatus::NOTLOADED;
        }
        return *ppuVar6;
    }

    // 0x1009ef860, 160 bytes, placed by class name
    // Js5MemoryCache::GroupLookup(shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&, unsigned int, unsigned int, Js5Index const&, bool)
    undefined* Js5MemoryCache::GroupLookup(shared_ptr* param_1, uint param_2, uint param_3, Js5Index* param_4,
                                           bool param_5) {
        shared_ptr* this_00;
        long lVar2;
        PacketT<Array<unsigned char, eastl::allocator>>* this_01;
        undefined** ppuVar3;

        this_00 = (shared_ptr*)GetFileInternal(this, param_2, param_3, param_4);
        if (shared_ptr::operator_cast_to_bool(this_00)) {
            lVar2 = shared_ptr<Js5MemoryCacheWrapper>::operator->((shared_ptr<Js5MemoryCacheWrapper>*)this_00);
            this_01 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                          shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)(lVar2 + 8));
            this_01->SetPos(0);
            lVar2 = shared_ptr<Js5MemoryCacheWrapper>::operator->((shared_ptr<Js5MemoryCacheWrapper>*)this_00);
            shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator=(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, (shared_ptr*)(lVar2 + 8));
            ppuVar3 = &DataStatus::READY;
            if (param_5) {
                DeleteGroup(this, param_2, param_3);
            }
        } else {
            ppuVar3 = &DataStatus::NOTLOADED;
        }
        return *ppuVar3;
    }

} // namespace jag

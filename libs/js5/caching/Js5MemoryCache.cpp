// libs/js5/caching/Js5MemoryCache.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.js5

#include "Js5MemoryCache.h"

namespace jag {
    // 0x1000b9960: Js5MemoryCache::GetCacheSize() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x1009e49f0
    uint64_t Js5MemoryCache::CheckFile(unsigned int arg1, unsigned int arg2, unsigned int arg3,
                                       const Js5Index& js5Index) {
        uint64_t uVar2;

        auto this_00 = GetFileInternal(arg1, arg2, js5Index);
        if (shared_ptr::operator_cast_to_bool(this_00) == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = js5Index.DoesFileExist(arg2, arg3);
        }
        return uVar2;
    }

    // 0x1009e60f0
    void Js5MemoryCache::ProvideGroup(unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4,
                                      const shared_ptr<PacketT<Array<unsigned char>>>& arg5) {
        ReturnValue local_50;

        unsigned int local_38 = arg3;
        unsigned int local_34 = arg4;
        bucket_make_shared<Js5MemoryCacheWrapper, unsigned int&, unsigned int&,
                           shared_ptr<PacketT<Array<unsigned char>>> const&>(&local_50, &local_38, &local_34, arg5);
        unsigned int arg2_00 = ((TextureAtlasReference*)arg5.operator->())->GetTextureAtlas();
        unsigned int uVar1 = GetKey(arg1, arg2);
        unsigned long local_40 = (unsigned long)uVar1;
        field_8->Put(local_50, arg2_00, local_40);
    }

    // 0x1009e63a0
    shared_ptr_if_not_array<PacketT<Array<unsigned char>>>::type
    make_shared<PacketT<Array<unsigned char>>, PacketT<Array<unsigned char>>>(PacketT<Array<unsigned char>>&& arg1) {
        ref_counter_shared<PacketT<Array<unsigned char> _> _>* ref_counter_shared;
        int local_34;
        PacketT<Array<unsigned char> _>* local_30[2];

        auto arg1_00 = aligned_alloc(64, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<PacketT<Array<unsigned char>>>::type result;
        } else {
            local_30[0] =
                placement_new<PacketT<Array<unsigned char>>, hal::audio::decoders::vorbis::VorbisDecoderPacket>(
                    (void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_shared =
                placement_new<ref_counter_shared<PacketT<Array<unsigned char>>>, int, PacketT<Array<unsigned char>>*&>(
                    arg1_00, &local_34, local_30);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x1009e6920
    shared_ptr_if_not_array<PacketT<Array<unsigned char>>>::type
    make_shared<PacketT<Array<unsigned char>>, PacketT<Array<unsigned char>>&>(PacketT<Array<unsigned char>>& arg1) {
        ref_counter_shared<PacketT<Array<unsigned char> _> _>* ref_counter_shared;
        int local_34;
        PacketT<Array<unsigned char> _>* local_30[2];

        auto arg1_00 = aligned_alloc(64, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<PacketT<Array<unsigned char>>>::type result;
        } else {
            local_30[0] = placement_new<PacketT<Array<unsigned char>>, PacketT<Array<unsigned char>>&>(
                (void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_shared =
                placement_new<ref_counter_shared<PacketT<Array<unsigned char>>>, int, PacketT<Array<unsigned char>>*&>(
                    arg1_00, &local_34, local_30);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x1009ef360
    Js5MemoryCache::Js5MemoryCache(unsigned int arg1, unsigned int arg2)
        : m_cacheSize(arg1), field_4(arg2), field_8(arg1, "Js5MemoryCache") {}

    // 0x1009ef540
    shared_ptr* Js5MemoryCache::GetFileInternal(unsigned int arg1, unsigned int arg2, const Js5Index& js5Index) {
        int iVar1;
        int iVar4;
        int* piVar5;
        long lVar6;

        unsigned int uVar3 = GetKey(arg1, arg2);
        unsigned long local_40 = (unsigned long)uVar3;
        auto this_00 = field_8->Find(local_40);
        if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
            piVar5 = (int*)(*this_00).operator->();
            iVar1 = *piVar5;
            iVar4 = js5Index.GetGroupVersion(arg2);
            if (iVar1 == iVar4) {
                lVar6 = (*this_00).operator->();
                iVar1 = *(int*)(lVar6 + 4);
                iVar4 = js5Index.GetGroupCRC(arg2);
                if (iVar1 == iVar4) {
                    return this_00;
                }
            }
            DeleteGroup(arg1, arg2);
        }
        return (shared_ptr*)&Js5MemoryCacheWrapper::Null;
    }

    // 0x1009ef600
    void Js5MemoryCache::FileLookup(shared_ptr<PacketT<Array<unsigned char>>>& arg1, unsigned int arg2,
                                    unsigned int arg3, unsigned int arg4, const Js5Index& js5Index, bool arg6) {
        unsigned int arg2_00;
        shared_ptr* shared_ptr;
        long lVar3;
        PacketT<Array<unsigned char> _>* arg1_00;
        uint8_t** ppuVar4;
        uint32_t in_register_00000034;
        uint64_t in_register_00000089;
        char in_stack_00000008;
        ReturnValue local_48;

        shared_ptr = (shared_ptr*)GetFileInternal((Js5MemoryCache*)arg1, arg3, arg4,
                                                  (Js5Index*)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg6));
        if (shared_ptr::operator_cast_to_bool(shared_ptr) == '\0') {
            ppuVar4 = &DataStatus::NOTLOADED;
        } else {
            lVar3 = (*shared_ptr).operator->();
            ((PacketT<Array<unsigned char>>*)(*((lVar3 + 8))).operator->())->SetPos(0);
            if (((Js5Index*)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg6))->GetFileCount(arg4) == 1) {
                lVar3 = (*shared_ptr).operator->();
                (*((shared_ptr<PacketT<Array<unsigned char>>>*)(((uint64_t)in_register_00000034 << 32) |
                                                                (uint32_t)arg2))) = (*((lVar3 + 8)));
                ppuVar4 = &DataStatus::READY;
                if (in_stack_00000008 != '\0') {
                    DeleteGroup((Js5MemoryCache*)arg1, arg3, arg4);
                }
            } else {
                arg2_00 = ((Js5Index*)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg6))
                              ->GetFileIndex(arg4, (unsigned int)js5Index);
                lVar3 = (*shared_ptr).operator->();
                arg1_00 = (PacketT<Array<unsigned char> _>*)*(*((lVar3 + 8)));
                Js5DiskFileFormat::GetGroupFileData(&local_48, arg1_00, arg2_00);
                (*((shared_ptr<PacketT<Array<unsigned char>>>*)(((uint64_t)in_register_00000034 << 32) |
                                                                (uint32_t)arg2))) = local_48;
                ppuVar4 = &DataStatus::READY;
            }
        }
        return *ppuVar4;
    }

    // 0x1009ef860
    uint8_t* Js5MemoryCache::GroupLookup(shared_ptr<PacketT<Array<unsigned char>>>& arg1, unsigned int arg2,
                                         unsigned int arg3, const Js5Index& js5Index, bool arg5) {
        long lVar2;
        uint8_t** ppuVar3;

        auto this_00 = GetFileInternal(arg2, arg3, js5Index);
        if (shared_ptr::operator_cast_to_bool(this_00) == '\0') {
            ppuVar3 = &DataStatus::NOTLOADED;
        } else {
            lVar2 = (*this_00).operator->();
            ((PacketT<Array<unsigned char>>*)(*((lVar2 + 8))).operator->())->SetPos(0);
            lVar2 = (*this_00).operator->();
            arg1 = (*((lVar2 + 8)));
            ppuVar3 = &DataStatus::READY;
            if (arg5) {
                DeleteGroup(arg2, arg3);
            }
        }
        return *ppuVar3;
    }

} // namespace jag

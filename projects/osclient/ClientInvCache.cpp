// projects/osclient/ClientInvCache.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ClientInvCache.h"

namespace jag::oldscape {
    // 0x100f8adb8, 56 bytes, __common; zero-initialised
    ClientInvCache::m_invList;

    // 0x100180630, 144 bytes, base-object constructor, placed by class name and debug map
    // ClientInvCache::ClientInvCache()
    void ClientInvCache::ClientInvCache() {
        undefined1* this_00;
        undefined8 in_RAX;
        undefined8 local_28;

        local_28._4_4_ = (undefined4)((ulong)in_RAX >> 32);
        new (this) eastl::vector<int, eastl::allocator>();
        this_00 = &field_32;
        new (this_00) eastl::vector<int, eastl::allocator>();
        set_capacity(32);
        this_00->set_capacity(32);
        local_28 = CONCAT44(local_28._4_4_, 4294967295);
        push_back((int*)&local_28);
        local_28 = local_28 & 4294967295;
        this_00->push_back((int*)((long)&local_28 + 4));
    }

    // 0x1001807f0, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClientInvCache::ClientInvCache(): jumps straight to the base-object constructor

    // 0x100180800, 160 bytes, placed by class name and debug map
    // ClientInvCache::GetType(int, int)
    undefined4 ClientInvCache::GetType(int param_1, int param_2) {
        bool bVar1;
        int iVar2;
        long lVar3;
        undefined4* puVar4;
        hashtable_iterator_base* extraout_RDX;
        undefined4 uVar5;
        hashtable_iterator_base local_50[16];
        eastl local_40[20];
        int local_2c;

        local_2c = param_1;
        eastl::hashtable<int, eastl::pair<int const, ClientInvCache>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, ClientInvCache>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((int*)local_40);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator==(local_40, local_50, extraout_RDX);
        uVar5 = 4294967295;
        if (!bVar1) {
            lVar3 = local_40->HeapBeginPtr();
            if (-1 < param_2) {
                iVar2 = ((lVar3 + 8))->size();
                if (param_2 < iVar2) {
                    puVar4 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)(lVar3 + 8), (long)param_2);
                    uVar5 = *puVar4;
                }
            }
        }
        return uVar5;
    }

    // 0x100180930, 144 bytes, placed by class name and debug map
    // ClientInvCache::GetCount(int, int)
    undefined4 ClientInvCache::GetCount(int param_1, int param_2) {
        bool bVar1;
        int iVar2;
        long lVar3;
        undefined4* puVar4;
        hashtable_iterator_base* extraout_RDX;
        undefined4 uVar5;
        hashtable_iterator_base local_50[16];
        eastl local_40[20];
        int local_2c;

        local_2c = param_1;
        eastl::hashtable<int, eastl::pair<int const, ClientInvCache>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, ClientInvCache>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((int*)local_40);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator==(local_40, local_50, extraout_RDX);
        uVar5 = 0;
        if (!bVar1) {
            lVar3 = local_40->HeapBeginPtr();
            if (-1 < param_2) {
                iVar2 = ((lVar3 + 40))->size();
                if (param_2 < iVar2) {
                    puVar4 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)(lVar3 + 40), (long)param_2);
                    uVar5 = *puVar4;
                }
            }
        }
        return uVar5;
    }

    // 0x1001809c0, 208 bytes, placed by class name and debug map
    // ClientInvCache::InvTotal(int, int)
    int ClientInvCache::InvTotal(int param_1, int param_2) {
        vector<unsigned int, eastl::allocator>* this;
        bool bVar1;
        long lVar2;
        ulong uVar4;
        int* piVar5;
        hashtable_iterator_base* extraout_RDX;
        ulong uVar6;
        int iVar7;
        hashtable_iterator_base local_58[16];
        eastl local_48[20];
        int local_34;

        local_34 = param_1;
        eastl::hashtable<int, eastl::pair<int const, ClientInvCache>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, ClientInvCache>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((int*)local_48);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator==(local_48, local_58, extraout_RDX);
        iVar7 = 0;
        if (!bVar1) {
            lVar2 = local_48->HeapBeginPtr();
            if (param_2 != -1) {
                this = (vector<unsigned int, eastl::allocator>*)(lVar2 + 40);
                if (eastl::vector<unsigned int, eastl::allocator>::size(this) != 0) {
                    uVar6 = 0;
                    iVar7 = 0;
                    do {
                        piVar5 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                            (vector<int, eastl::allocator>*)(lVar2 + 8), uVar6);
                        if (*piVar5 == param_2) {
                            piVar5 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                (vector<int, eastl::allocator>*)this, uVar6);
                            iVar7 = iVar7 + *piVar5;
                        }
                        uVar6 = uVar6 + 1;
                        uVar4 = eastl::vector<unsigned int, eastl::allocator>::size(this);
                    } while (uVar6 < uVar4);
                }
            }
        }
        return iVar7;
    }

    // 0x100180a90, 416 bytes, placed by class name and debug map
    // ClientInvCache::Set(int, int, int, int)
    void ClientInvCache::Set(int param_1, int param_2, int param_3, int param_4) {
        vector<unsigned int, eastl::allocator>* this;
        int iVar2;
        int iVar3;
        long lVar4;
        int* piVar5;
        hashtable_iterator_base* extraout_RDX;
        int iVar6;
        ClientInvCache local_b0;
        undefined8 local_70;
        undefined8 uStack_68;
        char local_60;
        undefined8 local_58;
        undefined8 uStack_50;
        int local_3c;
        int local_38;

        local_38 = param_1;
        eastl::hashtable<int, eastl::pair<int const, ClientInvCache>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, ClientInvCache>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((int*)&local_58);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator==((eastl*)&local_58, (hashtable_iterator_base*)&local_b0, extraout_RDX)) {
            ClientInvCache(&local_b0);
            eastl::hashtable<int, eastl::pair<int const, ClientInvCache>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, ClientInvCache>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true,
                             true>::emplace<int&, ClientInvCache>((int*)&local_70, (ClientInvCache*)&m_invList);
            ~ClientInvCache(&local_b0);
            if (local_60 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("inserted.second",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ClientInvCache.cpp",
                          81, "Could not find in the hash, but could not insert either?!");
            }
            local_58 = local_70;
            uStack_50 = uStack_68;
            if (local_60 == '\0') {
                return;
            }
        }
        lVar4 = local_58.HeapBeginPtr();
        this = (vector<unsigned int, eastl::allocator>*)(lVar4 + 8);
        iVar2 = eastl::vector<unsigned int, eastl::allocator>::size(this);
        iVar3 = param_2;
        if (iVar2 <= param_2) {
            iVar3 = eastl::vector<unsigned int, eastl::allocator>::size(this);
            iVar6 = (param_2 - iVar3) + 1;
            iVar3 = end();
            eastl::vector<int, eastl::allocator>::insert<int>((int*)this, iVar3, iVar6);
            local_3c = param_3;
            iVar2 = ((lVar4 + 40))->end();
            iVar3 = param_2;
            param_3 = local_3c;
            eastl::vector<int, eastl::allocator>::insert<int>((int*)(lVar4 + 40), iVar2, iVar6);
        }
        piVar5 =
            (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this, (long)iVar3);
        *piVar5 = param_3;
        piVar5 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)(lVar4 + 40),
                                                                        (long)iVar3);
        *piVar5 = param_4;
    }

    // 0x100180cb0, 176 bytes, placed by class name
    // ClientInvCache::Blank(int)
    void ClientInvCache::Blank(int param_1) {
        vector<unsigned int, eastl::allocator>* this;
        int iVar2;
        long lVar3;
        undefined4* puVar4;
        hashtable_iterator_base* extraout_RDX;
        ulong uVar5;
        hashtable_iterator_base local_48[16];
        eastl local_38[20];
        int local_24;

        local_24 = param_1;
        eastl::hashtable<int, eastl::pair<int const, ClientInvCache>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, ClientInvCache>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((int*)local_38);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (!eastl::operator==(local_38, local_48, extraout_RDX)) {
            lVar3 = local_38->HeapBeginPtr();
            this = (vector<unsigned int, eastl::allocator>*)(lVar3 + 8);
            iVar2 = eastl::vector<unsigned int, eastl::allocator>::size(this);
            if (0 < iVar2) {
                uVar5 = 0;
                do {
                    puVar4 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)this, uVar5);
                    *puVar4 = 4294967295;
                    puVar4 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)(lVar3 + 40), uVar5);
                    *puVar4 = 0;
                    uVar5 = uVar5 + 1;
                    iVar2 = eastl::vector<unsigned int, eastl::allocator>::size(this);
                } while ((long)uVar5 < (long)iVar2);
            }
        }
    }

    // 0x100180d60, 48 bytes, placed by class name
    // ClientInvCache::Delete(int)
    void ClientInvCache::Delete(int param_1) {
        int local_c;

        local_c = param_1;
        m_invList.erase(&local_c);
    }

    // 0x100180e60, 32 bytes, placed by class name
    // ClientInvCache::DeleteAll()
    void ClientInvCache::DeleteAll() {
        m_invList.clear();
    }

} // namespace jag::oldscape

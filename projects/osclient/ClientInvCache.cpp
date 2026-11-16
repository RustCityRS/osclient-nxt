// projects/osclient/ClientInvCache.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ClientInvCache.h"

namespace jag::oldscape {
    // 0x100f8adb8
    eastl::hash_map<int, ClientInvCache> ClientInvCache::m_invList;

    // 0x100180630
    ClientInvCache::ClientInvCache() {
        uint64_t in_RAX;
        uint64_t local_28;

        local_28._4_4_ = (uint32_t)((unsigned long)in_RAX >> 32);
        new (this) eastl::vector<int>();
        uint8_t* this_00 = &field_32;
        new (this_00) eastl::vector<int>();
        set_capacity(32);
        this_00->set_capacity(32);
        local_28 = (((uint64_t)local_28._4_4_ << 32) | (uint32_t)4294967295);
        push_back(local_28);
        local_28 = local_28 & 4294967295;
        this_00->push_back(*((int*)((long)&local_28 + 4)));
    }

    // 0x100180800
    void ClientInvCache::GetType(int arg1, int arg2) {
        int iVar2;
        long lVar3;
        uint32_t* puVar4;

        auto local_40 = m_invList.find(arg1);
        auto local_50 = m_invList.end();
        bool cVar1 = local_40 == local_50;
        uint32_t uVar5 = 4294967295;
        if (!cVar1) {
            lVar3 = local_40.HeapBeginPtr();
            if (-1 < arg2) {
                iVar2 = ((lVar3 + 8))->size();
                if (arg2 < iVar2) {
                    puVar4 = (uint32_t*)(*((lVar3 + 8)))[(long)arg2];
                    uVar5 = *puVar4;
                }
            }
        }
        return uVar5;
    }

    // 0x100180930
    void ClientInvCache::GetCount(int arg1, int arg2) {
        int iVar2;
        long lVar3;
        uint32_t* puVar4;

        auto local_40 = m_invList.find(arg1);
        auto local_50 = m_invList.end();
        bool cVar1 = local_40 == local_50;
        uint32_t uVar5 = 0;
        if (!cVar1) {
            lVar3 = local_40.HeapBeginPtr();
            if (-1 < arg2) {
                iVar2 = ((lVar3 + 40))->size();
                if (arg2 < iVar2) {
                    puVar4 = (uint32_t*)(*((lVar3 + 40)))[(long)arg2];
                    uVar5 = *puVar4;
                }
            }
        }
        return uVar5;
    }

    // 0x1001809c0
    int ClientInvCache::InvTotal(int arg1, int arg2) {
        vector<unsigned int>* vector;
        long lVar2;
        unsigned long uVar4;
        int* piVar5;
        unsigned long arg1_00;

        auto local_48 = m_invList.find(arg1);
        auto local_58 = m_invList.end();
        bool cVar1 = local_48 == local_58;
        int iVar6 = 0;
        if (!cVar1) {
            lVar2 = local_48.HeapBeginPtr();
            if (arg2 != -1) {
                vector = (vector<unsigned int>*)(lVar2 + 40);
                if (vector->size() != 0) {
                    arg1_00 = 0;
                    iVar6 = 0;
                    do {
                        piVar5 = (int*)(*((lVar2 + 8)))[arg1_00];
                        if (*piVar5 == arg2) {
                            piVar5 = (int*)(*vector)[arg1_00];
                            iVar6 = iVar6 + *piVar5;
                        }
                        arg1_00 = arg1_00 + 1;
                        uVar4 = vector->size();
                    } while (arg1_00 < uVar4);
                }
            }
        }
        return iVar6;
    }

    // 0x100180a90
    void ClientInvCache::Set(int arg1, int arg2, int arg3, int arg4) {
        vector<unsigned int>* vector;
        int* piVar5;
        ReturnValue local_70;
        uint64_t uStack_68;
        char local_60;
        uint64_t uStack_50;
        int local_3c;

        auto local_58 = m_invList.find(arg1);
        ClientInvCache local_b0 = m_invList.end();
        if (local_58 == local_b0 != '\0') {
            ClientInvCache(&local_b0);
            local_70 = m_invList.emplace<int&, ClientInvCache>(arg1, local_b0);
            ~ClientInvCache(&local_b0);
            if (local_60 == '\0') {
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
        long lVar4 = local_58.HeapBeginPtr();
        vector = (vector<unsigned int>*)(lVar4 + 8);
        int iVar2 = vector->size();
        int iVar3 = arg2;
        if (iVar2 <= arg2) {
            iVar3 = vector->size();
            iVar2 = (arg2 - iVar3) + 1;
            piVar5 = (int*)vector->end();
            vector->insert<int>(piVar5, iVar2, -1);
            local_3c = arg3;
            piVar5 = (int*)((lVar4 + 40))->end();
            iVar3 = arg2;
            arg3 = local_3c;
            ((lVar4 + 40))->insert<int>(piVar5, iVar2, 0);
        }
        piVar5 = (int*)(*vector)[(long)iVar3];
        *piVar5 = arg3;
        piVar5 = (int*)(*((lVar4 + 40)))[(long)iVar3];
        *piVar5 = arg4;
    }

    // 0x100180cb0
    void ClientInvCache::Blank(int arg1) {
        vector<unsigned int>* vector;
        int iVar2;
        long lVar3;
        uint32_t* puVar4;
        unsigned long arg1_00;

        auto local_38 = m_invList.find(arg1);
        auto local_48 = m_invList.end();
        if (local_38 == local_48 == '\0') {
            lVar3 = local_38.HeapBeginPtr();
            vector = (vector<unsigned int>*)(lVar3 + 8);
            iVar2 = vector->size();
            if (0 < iVar2) {
                arg1_00 = 0;
                do {
                    puVar4 = (uint32_t*)(*vector)[arg1_00];
                    *puVar4 = 4294967295;
                    puVar4 = (uint32_t*)(*((lVar3 + 40)))[arg1_00];
                    *puVar4 = 0;
                    arg1_00 = arg1_00 + 1;
                    iVar2 = vector->size();
                } while ((long)arg1_00 < (long)iVar2);
            }
        }
    }

    // 0x100180d60
    void ClientInvCache::Delete(int arg1) {
        m_invList.erase(arg1);
    }

    // 0x100180e60
    void ClientInvCache::DeleteAll() {
        m_invList.clear();
    }

} // namespace jag::oldscape

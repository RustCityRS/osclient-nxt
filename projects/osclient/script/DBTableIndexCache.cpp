// projects/osclient/script/DBTableIndexCache.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "DBTableIndexCache.h"

namespace jag::oldscape {
    // 0x100024270
    void DBTableIndexCache::MainLogic() {
        field_8.Clean(500);
        field_5384.Clean(500);
    }

    // 0x1000243d0
    auto DBTableIndexCache::GetDBTableIndex(int arg1) {
        unsigned int uVar2;
        int arg2;
        int iVar3;
        shared_ptr* this_00;
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        PacketJ<Array<unsigned char> _> local_68;
        unsigned long local_58;
        unsigned long local_50;
        LRUHashCache<DBTableIndex, 64ul, 65ul, false, unsigned long long>* local_48;
        unsigned long local_40[2];

        if (field_0 == nullptr) {
            auto result;
        } else {
            uVar2 = game::DBUtils::GetDBCachingKey(arg1);
            local_50 = (unsigned long)uVar2;
            local_40[0] = local_50;
            this_00 = (shared_ptr*)field_8.Find(*local_40);
            if (shared_ptr::operator_cast_to_bool(this_00) == '\0') {
                local_48 = (LRUHashCache<DBTableIndex, 64ul, 65ul, false, unsigned long long>*)&field_8;
                arg2 = game::DBUtils::GetDBFieldTable(arg1);
                iVar3 = game::DBUtils::GetDBFieldColumn(arg1);
                new (local_40) shared_ptr();
                if ((uint8_t*)field_0->GetFile(*local_40, arg2, iVar3 + 1, nullptr) == DataStatus::READY) {
                    **local_40;
                    MakeSharedPool<DBTableIndex, 64>::MakeShared<PacketJ<Array<unsigned char>>&>(&local_68);
                    local_58 = local_50;
                    groundDecor = (shared_ptr<dash3d::GroundDecor>*)local_48->Put(local_68, 1, local_58);
                    new (&result) shared_ptr(groundDecor);
                } else {
                    new (&result) shared_ptr();
                }
            } else {
                new (&result) shared_ptr(this_00);
            }
        }
        return result;
    }

    // 0x1000247b0
    auto DBTableIndexCache::GetDBTableMasterIndex(int arg1) {
        shared_ptr* this_00;
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        PacketJ<Array<unsigned char> _> local_60;
        LRUHashCache<DBTableIndex, 32ul, 33ul, false, unsigned long long>* local_48;
        unsigned long long local_40[2];

        if (field_0 == nullptr) {
            auto result;
        } else {
            local_48 = (LRUHashCache<DBTableIndex, 32ul, 33ul, false, unsigned long long>*)&field_5384;
            local_40[0] = (long)arg1;
            this_00 = (shared_ptr*)local_48->Find(*local_40);
            if (shared_ptr::operator_cast_to_bool(this_00) == '\0') {
                new (local_40) shared_ptr();
                if ((uint8_t*)field_0->GetFile(*local_40, arg1, 0, nullptr) == DataStatus::READY) {
                    **local_40;
                    MakeSharedPool<DBTableIndex, 64>::MakeShared<PacketJ<Array<unsigned char>>&>(&local_60);
                    groundDecor = (shared_ptr<dash3d::GroundDecor>*)local_48->Put(local_60, 1, (long)arg1);
                    new (&result) shared_ptr(groundDecor);
                } else {
                    new (&result) shared_ptr();
                }
            } else {
                new (&result) shared_ptr(this_00);
            }
        }
        return result;
    }

} // namespace jag::oldscape

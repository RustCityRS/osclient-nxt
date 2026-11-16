// projects/osclient/script/DBTableIndexCache.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "DBTableIndexCache.h"

namespace jag::oldscape {
    // 0x100024270, 64 bytes, placed by class name and debug map
    // DBTableIndexCache::MainLogic()
    void DBTableIndexCache::MainLogic() {
        (&field_8, 500)->Clean();
        (&field_5384, 500)->Clean();
    }

    // 0x1000243d0, 336 bytes, placed by class name
    // DBTableIndexCache::GetDBTableIndex(int)
    DBTableIndexCache* DBTableIndexCache::GetDBTableIndex(int param_1) {
        uint uVar2;
        int iVar3;
        int iVar4;
        shared_ptr* psVar5;
        undefined* puVar6;
        uint in_EDX;
        undefined4 in_register_00000034;
        long* plVar7;
        undefined1 auVar8[16];
        shared_ptr local_68;
        ulong local_58;
        ulong local_50;
        LRUHashCache<DBTableIndex, 64ul, 65ul, false, unsigned long long>* local_48;
        ulong local_40[2];

        plVar7 = (long*)CONCAT44(in_register_00000034, param_1);
        if (*plVar7 == 0) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            uVar2 = game::DBUtils::GetDBCachingKey(in_EDX);
            local_50 = (ulong)uVar2;
            local_40[0] = local_50;
            psVar5 = (shared_ptr*)LRUHashCache<DBTableIndex, 64ul, 65ul, false, unsigned long long>::Find(
                (ulonglong*)(plVar7 + 1));
            if (shared_ptr::operator_cast_to_bool(psVar5)) {
                new (this) shared_ptr<dash3d::Decor>(psVar5);
            } else {
                local_48 = (LRUHashCache<DBTableIndex, 64ul, 65ul, false, unsigned long long>*)(plVar7 + 1);
                iVar3 = game::DBUtils::GetDBFieldTable(in_EDX);
                iVar4 = game::DBUtils::GetDBFieldColumn(in_EDX);
                new (local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                puVar6 = (undefined*)((shared_ptr*)*plVar7)
                             ->GetFile((int)(shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)local_40, iVar3,
                                       (array*)(ulong)(iVar4 + 1));
                if (puVar6 == DataStatus::READY) {
                    auVar8 = shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                        (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_40);
                    MakeSharedPool<DBTableIndex, 64>::MakeShared<PacketJ<Array<unsigned char, eastl::allocator>>&>(
                        &local_68, auVar8._0_8_, auVar8._8_8_);
                    local_58 = local_50;
                    psVar5 = (shared_ptr*)local_48->Put(&local_68, 1, &local_58);
                    new (this) shared_ptr<dash3d::Decor>(psVar5);
                    local_68.~shared_ptr();
                } else {
                    new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                }
                local_40->~shared_ptr();
            }
        }
        return this;
    }

    // 0x1000247b0, 304 bytes, placed by class name
    // DBTableIndexCache::GetDBTableMasterIndex(int)
    DBTableIndexCache* DBTableIndexCache::GetDBTableMasterIndex(int param_1) {
        shared_ptr* psVar2;
        undefined* puVar3;
        int in_EDX;
        undefined4 in_register_00000034;
        long* plVar4;
        undefined1 auVar5[16];
        shared_ptr local_60;
        ulonglong local_50;
        LRUHashCache<DBTableIndex, 32ul, 33ul, false, unsigned long long>* local_48;
        ulonglong local_40[2];

        plVar4 = (long*)CONCAT44(in_register_00000034, param_1);
        if (*plVar4 == 0) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            local_48 = (LRUHashCache<DBTableIndex, 32ul, 33ul, false, unsigned long long>*)(plVar4 + 673);
            local_40[0] = (long)in_EDX;
            psVar2 = (shared_ptr*)LRUHashCache<DBTableIndex, 32ul, 33ul, false, unsigned long long>::Find(
                (ulonglong*)local_48);
            if (shared_ptr::operator_cast_to_bool(psVar2)) {
                new (this) shared_ptr<dash3d::Decor>(psVar2);
            } else {
                new (local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                puVar3 = (undefined*)((shared_ptr*)*plVar4)
                             ->GetFile((int)(shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)local_40, in_EDX, 0);
                if (puVar3 == DataStatus::READY) {
                    auVar5 = shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                        (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_40);
                    MakeSharedPool<DBTableIndex, 64>::MakeShared<PacketJ<Array<unsigned char, eastl::allocator>>&>(
                        &local_60, auVar5._0_8_, auVar5._8_8_);
                    local_50 = (long)in_EDX;
                    psVar2 = (shared_ptr*)local_48->Put(&local_60, 1, &local_50);
                    new (this) shared_ptr<dash3d::Decor>(psVar2);
                    local_60.~shared_ptr();
                } else {
                    new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                }
                local_40->~shared_ptr();
            }
        }
        return this;
    }

} // namespace jag::oldscape

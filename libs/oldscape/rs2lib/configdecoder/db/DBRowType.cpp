// libs/oldscape/rs2lib/configdecoder/db/DBRowType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "DBRowType.h"

namespace jag::oldscape::configdecoder {
    // 0x101684f10, 8 bytes, __common; zero-initialised
    DBRowType::m_pConfigClient;

    // 0x101684f18, 5376 bytes, __common; zero-initialised
    DBRowType::m_recentUse;

    // 0x100239fc0, 16 bytes, placed by class name and debug map
    // DBRowType::Init(jagex3::Js5*)
    void DBRowType::Init(Js5* param_1) {
        m_pConfigClient = param_1;
    }

    // 0x100239fd0, 288 bytes, placed by class name and debug map
    // DBRowType::List(int)
    DBRowType* DBRowType::List(int param_1) {
        bool bVar1;
        shared_ptr* psVar2;
        DBRowType* this_00;
        PacketJ* pPVar3;
        shared_ptr local_40;
        shared_ptr local_30;

        local_30._0_8_ = (long)param_1;
        psVar2 =
            (shared_ptr*)LRUHashCache<DBRowType, 64ul, 65ul, false, unsigned long long>::Find((ulonglong*)&m_recentUse);
        new (this) shared_ptr<dash3d::Decor>(psVar2);
        bVar1 = operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            new (&local_30) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            m_pConfigClient->GetFile((int)&local_30, 38, (array*)(ulong)(uint)param_1);
            make_shared<DBRowType>((jag*)&local_40);
            shared_ptr<DBRowType>::operator=((shared_ptr<DBRowType>*)this, &local_40);
            local_40.~shared_ptr();
            bVar1 = operator!=(&local_30, (_func_decltype_nullptr*)0);
            if (bVar1) {
                this_00 = (DBRowType*)shared_ptr<DBRowType>::operator->((shared_ptr<DBRowType>*)this);
                pPVar3 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                    (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_30);
                Decode(this_00, pPVar3);
            }
            local_40._0_8_ = (long)param_1;
            m_recentUse.Put(this, 1, (ulonglong*)&local_40);
            local_30.~shared_ptr();
        }
        return this;
    }

    // 0x10023a260, 64 bytes, placed by class name and debug map
    // DBRowType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void DBRowType::Decode(PacketJ* param_1) {
        byte bVar1;

        while (true) {
            bVar1 = param_1->g1();
            if (bVar1 == 0)
                break;
            Decode(this, param_1, (uint)bVar1);
        }
    }

    // 0x10023a390, 32 bytes, placed by class name and debug map
    // DBRowType::ResetCache()
    void DBRowType::ResetCache() {
        m_recentUse.Reset();
    }

    // 0x10023a3b0, 256 bytes, placed by class name and debug map
    // DBRowType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    void DBRowType::Decode(PacketJ* param_1, int param_2) {
        undefined1* this_00;
        byte bVar1;
        undefined4 uVar2;
        undefined8 in_RAX;
        Array* pAVar3;
        Array* pAVar4;
        undefined8 uVar5;
        ulong uVar6;

        uVar2 = (undefined4)((ulong)in_RAX >> 32);
        if (param_2 == 4) {
            uVar2 = param_1->gVarInt();
            field_48 = uVar2;
        } else if (param_2 == 3) {
            bVar1 = param_1->g1();
            set_max_size((ulong)bVar1, 0);
            this_00 = &field_24;
            this_00->set_max_size((ulong)bVar1, 0);
            while (true) {
                bVar1 = param_1->g1();
                if (bVar1 == 255)
                    break;
                uVar6 = (ulong)bVar1;
                pAVar3 = (Array*)Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>::operator[](
                    (Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>*)this_00, uVar6);
                DBUtils::UnpackColumnVarTypes(param_1, pAVar3);
                pAVar3 = (Array*)Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>::operator[](
                    (Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>*)this_00, uVar6);
                pAVar4 = (Array*)Array<Array<game::VarValue, eastl::allocator>, eastl::allocator>::operator[](
                    (Array<Array<game::VarValue, eastl::allocator>, eastl::allocator>*)this, uVar6);
                DBUtils::UnpackColumnDataValues(param_1, pAVar3, pAVar4);
            }
        } else {
            uVar5 = logger::default_logger();
            logger::Logger::Log(uVar5, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "configdecoder/db/DBRowType.cpp",
                                86, "Unrecognised .dbrow config code: %d", CONCAT44(uVar2, param_2));
        }
    }

    // 0x10023aa20, 176 bytes, placed by class name and debug map
    // DBRowType::GetColumnVarValue(unsigned int, unsigned int, unsigned int) const
    void DBRowType::GetColumnVarValue(uint param_1, uint param_2, uint param_3) {
        ulong uVar1;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        Array<game::VarValue, eastl::allocator>* this_01;

        uVar1 = end();
        if (uVar1 <= (ulong)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("columnIndex < m_columnValues.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/db/DBRowType.cpp",
                      93, "DBRow Column index out of range");
        }
        this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
            Array<Array<game::VarValue, eastl::allocator>, eastl::allocator>::operator[](
                (Array<Array<game::VarValue, eastl::allocator>, eastl::allocator>*)this, (ulong)param_1);
        uVar1 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        if (uVar1 <= param_3 * param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert("valueIndex < m_columnValues[columnIndex].size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/db/DBRowType.cpp",
                      95, "DBRow value index out of range");
        }
        this_01 = (Array<game::VarValue, eastl::allocator>*)
            Array<Array<game::VarValue, eastl::allocator>, eastl::allocator>::operator[](
                (Array<Array<game::VarValue, eastl::allocator>, eastl::allocator>*)this, (ulong)param_1);
        Array<game::VarValue, eastl::allocator>::operator[](this_01, (ulong)(param_3 * param_2));
    }

    // 0x10023ab50, 64 bytes, placed by class name and debug map
    // DBRowType::HasColumnVarValues(unsigned int) const
    undefined8 DBRowType::HasColumnVarValues(uint param_1) {
        ulong uVar2;
        Array<game::VarValue, eastl::allocator>* this_00;

        uVar2 = end();
        if (param_1 < uVar2) {
            this_00 = (Array<game::VarValue, eastl::allocator>*)
                Array<Array<game::VarValue, eastl::allocator>, eastl::allocator>::operator[](
                    (Array<Array<game::VarValue, eastl::allocator>, eastl::allocator>*)this, (ulong)param_1);
            if (this_00->empty() == '\0') {
                return 1;
            }
        }
        return 0;
    }

    // 0x10023ab90, 80 bytes, placed by class name and debug map
    // DBRowType::GetColumnVarValues(unsigned int) const
    void DBRowType::GetColumnVarValues(uint param_1) {
        ulong uVar1;

        uVar1 = end();
        if (uVar1 <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("columnIndex < m_columnValues.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/db/DBRowType.cpp",
                      110, "DBRow Column index out of range");
        }
        Array<Array<game::VarValue, eastl::allocator>, eastl::allocator>::operator[](
            (Array<Array<game::VarValue, eastl::allocator>, eastl::allocator>*)this, (ulong)param_1);
    }

    // 0x10023abe0, 96 bytes, placed by class name and debug map
    // DBRowType::GetColumnVarType(unsigned int) const
    void DBRowType::GetColumnVarType(uint param_1) {
        ulong uVar1;

        uVar1 = (&field_24)->end();
        if (uVar1 <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("columnIndex < m_columnTypes.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/db/DBRowType.cpp",
                      116, "DBRow Column index out of range");
        }
        Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>::operator[](
            (Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>*)&field_24, (ulong)param_1);
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x10023a190, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::configdecoder::DBRowType>::type make_shared<oldscape::configdecoder::DBRowType>()
    jag* make_shared<oldscape::configdecoder::DBRowType>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        DBRowType* local_28[2];

        pvVar1 = (void*)aligned_alloc(88, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::DBRowType>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::configdecoder::DBRowType>, int,
                                   oldscape::configdecoder::DBRowType*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag

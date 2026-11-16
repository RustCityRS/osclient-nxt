// libs/oldscape/rs2lib/configdecoder/db/DBTableType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "DBTableType.h"

namespace jag::oldscape::configdecoder {
    // 0x101686418, 8 bytes, __common; zero-initialised
    DBTableType::m_pConfigClient;

    // 0x101686420, 5376 bytes, __common; zero-initialised
    DBTableType::m_recentUse;

    // 0x10023b1e0, 16 bytes, placed by class name and debug map
    // DBTableType::Init(jagex3::Js5*)
    void DBTableType::Init(Js5* param_1) {
        m_pConfigClient = param_1;
    }

    // 0x10023b1f0, 288 bytes, placed by class name and debug map
    // DBTableType::List(int)
    DBTableType* DBTableType::List(int param_1) {
        bool bVar1;
        shared_ptr* psVar2;
        DBTableType* this_00;
        PacketJ* pPVar3;
        shared_ptr local_40;
        shared_ptr local_30;

        local_30._0_8_ = (long)param_1;
        psVar2 = (shared_ptr*)LRUHashCache<DBTableType, 64ul, 65ul, false, unsigned long long>::Find(
            (ulonglong*)&m_recentUse);
        new (this) shared_ptr<dash3d::Decor>(psVar2);
        bVar1 = operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            new (&local_30) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            m_pConfigClient->GetFile((int)&local_30, 39, (array*)(ulong)(uint)param_1);
            make_shared<DBTableType>((jag*)&local_40);
            shared_ptr<DBTableType>::operator=((shared_ptr<DBTableType>*)this, &local_40);
            local_40.~shared_ptr();
            bVar1 = operator!=(&local_30, (_func_decltype_nullptr*)0);
            if (bVar1) {
                this_00 = (DBTableType*)shared_ptr<DBTableType>::operator->((shared_ptr<DBTableType>*)this);
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

    // 0x10023b480, 64 bytes, placed by class name and debug map
    // DBTableType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void DBTableType::Decode(PacketJ* param_1) {
        byte bVar1;

        while (true) {
            bVar1 = param_1->g1();
            if (bVar1 == 0)
                break;
            Decode(this, param_1, (uint)bVar1);
        }
    }

    // 0x10023b5b0, 32 bytes, placed by class name and debug map
    // DBTableType::ResetCache()
    void DBTableType::ResetCache() {
        m_recentUse.Reset();
    }

    // 0x10023b5d0, 288 bytes, placed by class name and debug map
    // DBTableType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    void DBTableType::Decode(PacketJ* param_1, int param_2) {
        undefined1* this_00;
        byte bVar1;
        byte bVar2;
        char cVar3;
        Array* pAVar4;
        Array* pAVar5;
        undefined8 uVar6;
        ulong uVar7;

        if (param_2 == 1) {
            bVar1 = param_1->g1();
            set_max_size((ulong)bVar1, 0);
            bVar2 = param_1->g1();
            if (bVar2 != 255) {
                this_00 = &field_24;
                do {
                    uVar7 = (ulong)(bVar2 & 127);
                    pAVar5 = (Array*)Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>*)this, uVar7);
                    DBUtils::UnpackColumnVarTypes(param_1, pAVar5);
                    if ((char)bVar2 < '\0') {
                        cVar3 = this_00->empty();
                        if (cVar3 != '\0') {
                            this_00->set_max_size((ulong)bVar1, 0);
                        }
                        pAVar5 =
                            (Array*)Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>*)this, uVar7);
                        pAVar4 = (Array*)Array<Array<game::VarValue, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<game::VarValue, eastl::allocator>, eastl::allocator>*)this_00, uVar7);
                        DBUtils::UnpackColumnDataValues(param_1, pAVar5, pAVar4);
                    }
                    bVar2 = param_1->g1();
                } while (bVar2 != 255);
            }
        } else {
            uVar6 = logger::default_logger();
            logger::Logger::Log(uVar6, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "configdecoder/db/DBTableType.cpp",
                                98, "Unrecognised .dbtable config code: %d", param_2);
        }
    }

    // 0x10023b6f0, 176 bytes, placed by class name and debug map
    // DBTableType::GetColumnDefaultValue(unsigned int, unsigned int, unsigned int) const
    void DBTableType::GetColumnDefaultValue(uint param_1, uint param_2, uint param_3) {
        ulong uVar1;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        Array<game::VarValue, eastl::allocator>* this_01;
        undefined1* this_02;

        this_02 = &field_24;
        uVar1 = this_02->end();
        if (uVar1 <= (ulong)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("columnIndex < m_columnDefaultValues.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/db/DBTableType.cpp",
                      104, "Column index out of range");
        }
        this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
            Array<Array<game::VarValue, eastl::allocator>, eastl::allocator>::operator[](
                (Array<Array<game::VarValue, eastl::allocator>, eastl::allocator>*)this_02, (ulong)param_1);
        uVar1 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        if (uVar1 <= param_3 * param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert("listIndex * tupleIndex < m_columnDefaultValues[columnIndex].size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/db/DBTableType.cpp",
                      105, "Default value index out of range");
        }
        this_01 = (Array<game::VarValue, eastl::allocator>*)
            Array<Array<game::VarValue, eastl::allocator>, eastl::allocator>::operator[](
                (Array<Array<game::VarValue, eastl::allocator>, eastl::allocator>*)this_02, (ulong)param_1);
        Array<game::VarValue, eastl::allocator>::operator[](this_01, (ulong)(param_3 * param_2));
    }

    // 0x10023b7a0, 64 bytes, placed by class name and debug map
    // DBTableType::HasColumnDefaultValues(unsigned int) const
    undefined8 DBTableType::HasColumnDefaultValues(uint param_1) {
        ulong uVar2;
        Array<game::VarValue, eastl::allocator>* this_00;

        uVar2 = (&field_24)->end();
        if (param_1 < uVar2) {
            this_00 = (Array<game::VarValue, eastl::allocator>*)
                Array<Array<game::VarValue, eastl::allocator>, eastl::allocator>::operator[](
                    (Array<Array<game::VarValue, eastl::allocator>, eastl::allocator>*)&field_24, (ulong)param_1);
            if (this_00->empty() == '\0') {
                return 1;
            }
        }
        return 0;
    }

    // 0x10023b7e0, 96 bytes, placed by class name and debug map
    // DBTableType::GetColumnDefaultValues(unsigned int) const
    void DBTableType::GetColumnDefaultValues(uint param_1) {
        ulong uVar1;

        uVar1 = (&field_24)->end();
        if (uVar1 <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("columnIndex < m_columnDefaultValues.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/db/DBTableType.cpp",
                      120, "Column index out of range");
        }
        Array<Array<game::VarValue, eastl::allocator>, eastl::allocator>::operator[](
            (Array<Array<game::VarValue, eastl::allocator>, eastl::allocator>*)&field_24, (ulong)param_1);
    }

    // 0x10023b840, 80 bytes, placed by class name and debug map
    // DBTableType::GetColumnVarType(unsigned int) const
    void DBTableType::GetColumnVarType(uint param_1) {
        ulong uVar1;

        uVar1 = end();
        if (uVar1 <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("columnIndex < m_columnTypes.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/db/DBTableType.cpp",
                      126, "Column index out of range");
        }
        Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>::operator[](
            (Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>*)this, (ulong)param_1);
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x10023b3b0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::configdecoder::DBTableType>::type make_shared<oldscape::configdecoder::DBTableType>()
    jag* make_shared<oldscape::configdecoder::DBTableType>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        DBTableType* local_28[2];

        pvVar1 = (void*)aligned_alloc(80, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::DBTableType>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::configdecoder::DBTableType>, int,
                                   oldscape::configdecoder::DBTableType*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag

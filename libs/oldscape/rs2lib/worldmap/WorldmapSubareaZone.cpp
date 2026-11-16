// libs/oldscape/rs2lib/worldmap/WorldmapSubareaZone.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::rs2lib::worldmap {
    class WorldmapSubareaZone {
    public:
        // virtual methods in vtable order
        virtual ~WorldmapSubareaZone();
        virtual GetType() const;
        virtual WorldmapSubareaZone* GetSquares() const;
        virtual GetZones() const;
        virtual void CalcBounding(WorldmapAreaMetadata&) const;
        virtual ContainsSourceTile(int, int, int) const;
        virtual ContainsTargetTile(int, int) const;
        virtual SourceToTargetTile(int, int, int) const;
        virtual TargetToSourceTile(int, int) const;
        virtual void Pack(PacketJ<Array<unsigned char, eastl::allocator>>&) const;
        virtual void Unpack(PacketJ<Array<unsigned char, eastl::allocator>>&);
        WorldmapSubareaZone();
        WorldmapSubareaZone(int, int, int, int, int, int, int, int, int, int);
        void SetTileBounds();

        // data members, from how the methods use this: 68 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        uint field_12;       // offset 12
        uint field_16;       // offset 16
        uint field_20;       // offset 20
        uint field_24;       // offset 24
        uint field_28;       // offset 28
        uint field_32;       // offset 32
        uint field_36;       // offset 36
        uint field_40;       // offset 40
        uint field_44;       // offset 44
        uint field_48;       // offset 48
        uint field_52;       // offset 52
        uint field_56;       // offset 56
        uint field_60;       // offset 60
        char _unknown_64[4];
    };

    // 0x100022b10: the linker folded this into option::ScriptOption<int, option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    WorldmapSubareaZone::~WorldmapSubareaZone();

    // 0x10002a770: the linker folded this into void eastl::destruct<CoordMapSquare*>(CoordMapSquare*, CoordMapSquare*), which has identical code
    WorldmapSubareaZone::~WorldmapSubareaZone();

    // 0x10004a690: the linker folded this into option::ScriptOption<bool, option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    WorldmapSubareaZone::~WorldmapSubareaZone();

    // 0x1001f7bd0, 32 bytes, base-object constructor, placed by class name and debug map
    // WorldmapSubareaZone::WorldmapSubareaZone()
    void WorldmapSubareaZone::WorldmapSubareaZone() {
        new (this) WorldmapSubarea();
        field_0 = &PTR__ScriptOption_100ef73b8;
    }

    // 0x1001f7bf0, 16 bytes, complete-object constructor, placed by class name and debug map
    // WorldmapSubareaZone::WorldmapSubareaZone(): jumps straight to the base-object constructor

    // 0x1001f7c00, 128 bytes, base-object constructor, placed by class name and debug map
    // WorldmapSubareaZone::WorldmapSubareaZone(int, int, int, int, int, int, int, int, int, int)
    void WorldmapSubareaZone::WorldmapSubareaZone(int param_1, int param_2, int param_3, int param_4, int param_5,
                                                  int param_6, int param_7, int param_8, int param_9, int param_10) {
        new (this) WorldmapSubarea();
        field_0 = &PTR__ScriptOption_100ef73b8;
        field_8 = param_1;
        field_12 = param_2;
        field_16 = param_3;
        field_20 = param_5;
        field_24 = param_4;
        field_28 = param_6;
        field_32 = param_7;
        field_36 = param_9;
        field_40 = param_8;
        field_44 = param_10;
        SetTileBounds(this);
    }

    // 0x1001f7c80, 64 bytes, placed by class name and debug map
    // WorldmapSubareaZone::SetTileBounds()
    void WorldmapSubareaZone::SetTileBounds() {
        int iVar1;
        int iVar2;

        iVar1 = field_24 * 64;
        field_48 = iVar1 + field_40 * 8;
        iVar2 = field_28 * 64;
        field_52 = iVar2 + field_44 * 8;
        field_56 = iVar1 + field_40 * 8 + 7;
        field_60 = iVar2 + field_44 * 8 + 7;
    }

    // 0x1001f7cc0, 64 bytes, complete-object constructor, placed by class name and debug map
    // WorldmapSubareaZone::WorldmapSubareaZone(int, int, int, int, int, int, int, int, int, int)
    void WorldmapSubareaZone::WorldmapSubareaZone(int param_1, int param_2, int param_3, int param_4, int param_5,
                                                  int param_6, int param_7, int param_8, int param_9, int param_10) {
        WorldmapSubareaZone(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9,
                            param_10);
    }

    // 0x1001f7d00, 16 bytes, placed by class name and debug map
    // WorldmapSubareaZone::GetType() const
    undefined8 WorldmapSubareaZone::GetType() {
        return 3;
    }

    // 0x1001f7d10, 32 bytes, placed by class name and debug map
    // WorldmapSubareaZone::GetSquares() const
    WorldmapSubareaZone* WorldmapSubareaZone::GetSquares() {
        new (this) eastl::vector<shared_ptr<MapSquareData>, eastl::allocator>();
        return this;
    }

    // 0x1001f7d30, 176 bytes, placed by class name and debug map
    // WorldmapSubareaZone::GetZones() const
    WorldmapSubareaZone* WorldmapSubareaZone::GetZones() {
        long in_RSI;
        shared_ptr local_30;

        new (this) eastl::vector<shared_ptr<MapZoneData>, eastl::allocator>();
        make_shared<MapZoneData, int const&, int const&, int const&, int const&, int const&, int const&, int const&,
                    int const&, int const&, int const&>((jag*)&local_30, (int*)(in_RSI + 8), (int*)(in_RSI + 12),
                                                        (int*)(in_RSI + 16), (int*)(in_RSI + 20), (int*)(in_RSI + 32),
                                                        (int*)(in_RSI + 36), (int*)(in_RSI + 24), (int*)(in_RSI + 28),
                                                        (int*)(in_RSI + 40), (int*)(in_RSI + 44));
        push_back(&local_30);
        local_30.~shared_ptr();
        return this;
    }

    // 0x1001f7f20, 128 bytes, placed by class name and debug map
    // WorldmapSubareaZone::CalcBounding(WorldmapAreaMetadata&) const
    void WorldmapSubareaZone::CalcBounding(WorldmapAreaMetadata* param_1) {
        int iVar1;

        iVar1 = param_1->GetMinMapX();
        if ((int)field_24 < iVar1) {
            param_1->SetBottomLine(field_24);
        }
        iVar1 = param_1->GetUIHeight();
        if (iVar1 < (int)field_24) {
            param_1->SetMaxMapX(field_24);
        }
        iVar1 = param_1->GetSeqDelay();
        if ((int)field_28 < iVar1) {
            param_1->SetMinMapZ(field_28);
        }
        iVar1 = param_1->GetMaxMapZ();
        if (iVar1 < (int)field_28) {
            param_1->SetLevel(field_28);
        }
    }

    // 0x1001f7fa0, 80 bytes, placed by class name and debug map
    // WorldmapSubareaZone::ContainsSourceTile(int, int, int) const
    undefined4 WorldmapSubareaZone::ContainsSourceTile(int param_1, int param_2, int param_3) {
        uint uVar1;
        int iVar2;

        if (((int)field_8 <= param_1) && (param_1 < (int)(field_8 + field_12))) {
            iVar2 = field_16 * 64;
            if (((int)(iVar2 + field_32 * 8) <= param_2) &&
                ((param_2 <= (int)(iVar2 + field_32 * 8 + 7) &&
                  (uVar1 = field_20 * 64 + field_36 * 8, (int)uVar1 <= param_3)))) {
                return CONCAT31((int3)(uVar1 >> 8), param_3 <= (int)(uVar1 | 7));
            }
        }
        return 0;
    }

    // 0x1001f7ff0, 80 bytes, placed by class name and debug map
    // WorldmapSubareaZone::ContainsTargetTile(int, int) const
    undefined4 WorldmapSubareaZone::ContainsTargetTile(int param_1, int param_2) {
        uint uVar1;
        int iVar2;

        iVar2 = field_24 * 64;
        if (((param_1 < (int)(iVar2 + field_40 * 8)) || ((int)(iVar2 + field_40 * 8 + 7) < param_1)) ||
            (uVar1 = field_28 * 64 + field_44 * 8, param_2 < (int)uVar1)) {
            return 0;
        }
        return CONCAT31((int3)(uVar1 >> 8), param_2 <= (int)(uVar1 | 7));
    }

    // 0x1001f8040, 256 bytes, placed by class name and debug map
    // WorldmapSubareaZone::SourceToTargetTile(int, int, int) const
    WorldmapSubareaZone* WorldmapSubareaZone::SourceToTargetTile(int param_1, int param_2, int param_3) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        long lVar5;
        long lVar6;
        long lVar7;
        long lVar8;
        array<int, 2ul>* this_00;
        int* piVar10;
        undefined4 in_register_00000034;
        long* plVar11;
        int in_R8D;
        unique_ptr local_40[8];
        unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>> local_38[8];

        plVar11 = (long*)CONCAT44(in_register_00000034, param_1);
        if ((**(code**)(*plVar11 + 48))(plVar11, param_2, param_3, in_R8D) == '\0') {
            std::unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>>::unique_ptr<true, void>(
                (_func_decltype_nullptr*)this);
        } else {
            std::unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>>::unique_ptr<true, void>(
                local_38);
            std::make_unique<std::array<int, 2ul>>();
            std::unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>>::operator=(local_38,
                                                                                                        local_40);
            local_40->~unique_ptr();
            this_00 = (array<int, 2ul>*)
                std::unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>>::operator*(local_38);
            lVar5 = plVar11[3];
            lVar6 = plVar11[5];
            lVar7 = plVar11[2];
            lVar8 = plVar11[4];
            piVar10 = (int*)std::array<int, 2ul>::operator[](this_00, 0);
            *piVar10 = ((int)lVar5 - (int)lVar7) * 64 + param_3 + ((int)lVar6 - (int)lVar8) * 8;
            iVar1 = *(int*)((long)plVar11 + 28);
            iVar2 = *(int*)((long)plVar11 + 44);
            iVar3 = *(int*)((long)plVar11 + 20);
            iVar4 = *(int*)((long)plVar11 + 36);
            piVar10 = (int*)std::array<int, 2ul>::operator[](this_00, 1);
            *piVar10 = (iVar1 - iVar3) * 64 + in_R8D + (iVar2 - iVar4) * 8;
            new (this) std::unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>>(local_38);
            std::unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>>::~unique_ptr(local_38);
        }
        return this;
    }

    // 0x1001f8140, 128 bytes, placed by class name and debug map
    // WorldmapSubareaZone::TargetToSourceTile(int, int) const
    WorldmapSubareaZone* WorldmapSubareaZone::TargetToSourceTile(int param_1, int param_2) {
        int in_ECX;
        undefined4 in_register_00000034;
        long* plVar2;

        plVar2 = (long*)CONCAT44(in_register_00000034, param_1);
        if ((**(code**)(*plVar2 + 56))(plVar2, param_2, in_ECX) == '\0') {
            new (this) rs2lib::CoordGrid((CoordGrid*)&rs2lib::CoordGrid::CoordGridNull);
        } else {
            new (this) rs2lib::CoordGrid((int)plVar2[1],
                                         ((int)plVar2[2] - (int)plVar2[3]) * 64 + param_2 +
                                             ((int)plVar2[4] - (int)plVar2[5]) * 8,
                                         (*(int*)((long)plVar2 + 20) - *(int*)((long)plVar2 + 28)) * 64 + in_ECX +
                                             (*(int*)((long)plVar2 + 36) - *(int*)((long)plVar2 + 44)) * 8);
        }
        return this;
    }

    // 0x1001f81c0, 160 bytes, placed by class name and debug map
    // WorldmapSubareaZone::Pack(PacketJ<Array<unsigned char, eastl::allocator> >&) const
    void WorldmapSubareaZone::Pack(PacketJ* param_1) {
        byte bVar1;

        bVar1 = (*(code*)field_0[2])();
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)bVar1);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_8);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_12);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_16);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_32);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_20);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_36);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_24);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_40);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_28);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_44);
    }

    // 0x1001f8260, 176 bytes, placed by class name and debug map
    // WorldmapSubareaZone::Unpack(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void WorldmapSubareaZone::Unpack(PacketJ* param_1) {
        byte bVar1;
        ushort uVar2;

        bVar1 = param_1->g1();
        field_8 = (uint)bVar1;
        bVar1 = param_1->g1();
        field_12 = (uint)bVar1;
        uVar2 = param_1->g2();
        field_16 = (uint)uVar2;
        bVar1 = param_1->g1();
        field_32 = (uint)bVar1;
        uVar2 = param_1->g2();
        field_20 = (uint)uVar2;
        bVar1 = param_1->g1();
        field_36 = (uint)bVar1;
        uVar2 = param_1->g2();
        field_24 = (uint)uVar2;
        bVar1 = param_1->g1();
        field_40 = (uint)bVar1;
        uVar2 = param_1->g2();
        field_28 = (uint)uVar2;
        bVar1 = param_1->g1();
        field_44 = (uint)bVar1;
        SetTileBounds(this);
    }

} // namespace jag::oldscape::rs2lib::worldmap

namespace jag {
    // 0x1001f7de0, 224 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::worldmap::MapZoneData>::type make_shared<oldscape::rs2lib::worldmap::MapZoneData, int const&, int const&, int const&, int const&, int const&, int const&, int const&, int const&, int const&, int const&>(int const&, int const&, int const&, int const&, int const&, int const&, int const&, int const&, int const&, int const&)
    jag* jag::make_shared<oldscape::rs2lib::worldmap::MapZoneData, int const&, int const&, int const&, int const&,
                          int const&, int const&, int const&, int const&, int const&, int const&>(
        int* param_1, int* param_2, int* param_3, int* param_4, int* param_5, int* param_6, int* param_7, int* param_8,
        int* param_9, int* param_10) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        MapZoneData* local_40[2];

        pvVar1 = (void*)aligned_alloc(240, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] =
                placement_new<oldscape::rs2lib::worldmap::MapZoneData, int const&, int const&, int const&, int const&,
                              int const&, int const&, int const&, int const&, int const&, int const&>(
                    (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
                    param_9, param_10);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::worldmap::MapZoneData>, int,
                                   oldscape::rs2lib::worldmap::MapZoneData*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag

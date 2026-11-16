// libs/oldscape/rs2lib/worldmap/WorldmapSubareaSquareArea.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::rs2lib::worldmap {
    class WorldmapSubareaSquareArea {
    public:
        // virtual methods in vtable order
        virtual ~WorldmapSubareaSquareArea();
        virtual GetType() const;
        virtual GetSquares() const;
        virtual WorldmapSubareaSquareArea* GetZones() const;
        virtual void CalcBounding(WorldmapAreaMetadata&) const;
        virtual ContainsSourceTile(int, int, int) const;
        virtual bool ContainsTargetTile(int, int) const;
        virtual SourceToTargetTile(int, int, int) const;
        virtual TargetToSourceTile(int, int) const;
        virtual void Pack(PacketJ<Array<unsigned char, eastl::allocator>>&) const;
        virtual void Unpack(PacketJ<Array<unsigned char, eastl::allocator>>&);
        WorldmapSubareaSquareArea();
        WorldmapSubareaSquareArea(int, int, int, int, int, int, int, int, int, int);
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
    WorldmapSubareaSquareArea::~WorldmapSubareaSquareArea();

    // 0x10002a770: the linker folded this into void eastl::destruct<CoordMapSquare*>(CoordMapSquare*, CoordMapSquare*), which has identical code
    WorldmapSubareaSquareArea::~WorldmapSubareaSquareArea();

    // 0x10004a690: the linker folded this into option::ScriptOption<bool, option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    WorldmapSubareaSquareArea::~WorldmapSubareaSquareArea();

    // 0x1001f75e0, 32 bytes, base-object constructor, placed by class name and debug map
    // WorldmapSubareaSquareArea::WorldmapSubareaSquareArea()
    void WorldmapSubareaSquareArea::WorldmapSubareaSquareArea() {
        new (this) WorldmapSubarea();
        field_0 = &PTR__ScriptOption_100ef7348;
    }

    // 0x1001f7600, 16 bytes, complete-object constructor, placed by class name and debug map
    // WorldmapSubareaSquareArea::WorldmapSubareaSquareArea(): jumps straight to the base-object constructor

    // 0x1001f7610, 128 bytes, base-object constructor, placed by class name and debug map
    // WorldmapSubareaSquareArea::WorldmapSubareaSquareArea(int, int, int, int, int, int, int, int, int, int)
    void WorldmapSubareaSquareArea::WorldmapSubareaSquareArea(int param_1, int param_2, int param_3, int param_4,
                                                              int param_5, int param_6, int param_7, int param_8,
                                                              int param_9, int param_10) {
        new (this) WorldmapSubarea();
        field_0 = &PTR__ScriptOption_100ef7348;
        field_8 = param_1;
        field_12 = param_2;
        field_16 = param_3;
        field_20 = param_5;
        field_24 = param_7;
        field_28 = param_9;
        field_32 = param_4;
        field_36 = param_6;
        field_40 = param_8;
        field_44 = param_10;
        SetTileBounds(this);
    }

    // 0x1001f7690, 48 bytes, placed by class name and debug map
    // WorldmapSubareaSquareArea::SetTileBounds()
    void WorldmapSubareaSquareArea::SetTileBounds() {
        field_48 = field_32 << 6;
        field_52 = field_36 << 6;
        field_56 = field_40 << 6 | 63;
        field_60 = field_44 << 6 | 63;
    }

    // 0x1001f76c0, 64 bytes, complete-object constructor, placed by class name and debug map
    // WorldmapSubareaSquareArea::WorldmapSubareaSquareArea(int, int, int, int, int, int, int, int, int, int)
    void WorldmapSubareaSquareArea::WorldmapSubareaSquareArea(int param_1, int param_2, int param_3, int param_4,
                                                              int param_5, int param_6, int param_7, int param_8,
                                                              int param_9, int param_10) {
        WorldmapSubareaSquareArea(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9,
                                  param_10);
    }

    // 0x1001f7700, 16 bytes, placed by class name and debug map
    // WorldmapSubareaSquareArea::GetType() const
    undefined8 WorldmapSubareaSquareArea::GetType() {
        return 0;
    }

    // 0x1001f7710, 240 bytes, placed by class name and debug map
    // WorldmapSubareaSquareArea::GetSquares() const
    WorldmapSubareaSquareArea* WorldmapSubareaSquareArea::GetSquares() {
        bool bVar1;
        long in_RSI;
        shared_ptr local_50;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        new (this) eastl::vector<shared_ptr<MapSquareData>, eastl::allocator>();
        if (*(int*)(in_RSI + 32) <= *(int*)(in_RSI + 40)) {
            local_34 = *(int*)(in_RSI + 32);
            do {
                local_38 = *(int*)(in_RSI + 36);
                if (*(int*)(in_RSI + 36) <= *(int*)(in_RSI + 44)) {
                    do {
                        local_40 = (local_34 + *(int*)(in_RSI + 16)) - *(int*)(in_RSI + 32);
                        local_3c = (local_38 + *(int*)(in_RSI + 20)) - *(int*)(in_RSI + 36);
                        make_shared<MapSquareData, int const&, int const&, int, int, int&, int&>(
                            (jag*)&local_50, (int*)(in_RSI + 8), (int*)(in_RSI + 12), &local_40, &local_3c, &local_34,
                            &local_38);
                        push_back(&local_50);
                        local_50.~shared_ptr();
                        bVar1 = local_38 < *(int*)(in_RSI + 44);
                        local_38 = local_38 + 1;
                    } while (bVar1);
                }
                bVar1 = local_34 < *(int*)(in_RSI + 40);
                local_34 = local_34 + 1;
            } while (bVar1);
        }
        return this;
    }

    // 0x1001f7800, 32 bytes, placed by class name and debug map
    // WorldmapSubareaSquareArea::GetZones() const
    WorldmapSubareaSquareArea* WorldmapSubareaSquareArea::GetZones() {
        new (this) eastl::vector<shared_ptr<MapZoneData>, eastl::allocator>();
        return this;
    }

    // 0x1001f7820, 128 bytes, placed by class name and debug map
    // WorldmapSubareaSquareArea::CalcBounding(WorldmapAreaMetadata&) const
    void WorldmapSubareaSquareArea::CalcBounding(WorldmapAreaMetadata* param_1) {
        int iVar1;

        iVar1 = param_1->GetMinMapX();
        if ((int)field_32 < iVar1) {
            param_1->SetBottomLine(field_32);
        }
        iVar1 = param_1->GetUIHeight();
        if (iVar1 < (int)field_40) {
            param_1->SetMaxMapX(field_40);
        }
        iVar1 = param_1->GetSeqDelay();
        if ((int)field_36 < iVar1) {
            param_1->SetMinMapZ(field_36);
        }
        iVar1 = param_1->GetMaxMapZ();
        if (iVar1 < (int)field_44) {
            param_1->SetLevel(field_44);
        }
    }

    // 0x1001f78a0, 64 bytes, placed by class name and debug map
    // WorldmapSubareaSquareArea::ContainsSourceTile(int, int, int) const
    undefined4 WorldmapSubareaSquareArea::ContainsSourceTile(int param_1, int param_2, int param_3) {
        int iVar1;

        if ((((param_1 < (int)field_8) || (iVar1 = field_8 + field_12, iVar1 <= param_1)) ||
             (param_2 >> 6 < (int)field_16)) ||
            (((int)field_24 < param_2 >> 6 || (param_3 >> 6 < (int)field_20)))) {
            return 0;
        }
        return CONCAT31((int3)((uint)iVar1 >> 8), param_3 >> 6 <= (int)field_28);
    }

    // 0x1001f78e0, 48 bytes, placed by class name and debug map
    // WorldmapSubareaSquareArea::ContainsTargetTile(int, int) const
    bool WorldmapSubareaSquareArea::ContainsTargetTile(int param_1, int param_2) {
        if (((param_1 >> 6 < (int)field_32) || ((int)field_40 < param_1 >> 6)) || (param_2 >> 6 < (int)field_36)) {
            return false;
        }
        return param_2 >> 6 <= (int)field_44;
    }

    // 0x1001f7910, 256 bytes, placed by class name and debug map
    // WorldmapSubareaSquareArea::SourceToTargetTile(int, int, int) const
    WorldmapSubareaSquareArea* WorldmapSubareaSquareArea::SourceToTargetTile(int param_1, int param_2, int param_3) {
        int iVar1;
        int iVar2;
        long lVar3;
        long lVar4;
        array<int, 2ul>* this_00;
        int* piVar6;
        undefined4 in_register_00000034;
        long* plVar7;
        int in_R8D;
        unique_ptr local_50[8];
        int local_3c;
        unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>> local_38[8];

        plVar7 = (long*)CONCAT44(in_register_00000034, param_1);
        if ((**(code**)(*plVar7 + 48))(plVar7, param_2, param_3, in_R8D) == '\0') {
            std::unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>>::unique_ptr<true, void>(
                (_func_decltype_nullptr*)this);
        } else {
            local_3c = in_R8D;
            std::unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>>::unique_ptr<true, void>(
                local_38);
            std::make_unique<std::array<int, 2ul>>();
            std::unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>>::operator=(local_38,
                                                                                                        local_50);
            local_50->~unique_ptr();
            this_00 = (array<int, 2ul>*)
                std::unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>>::operator*(local_38);
            lVar3 = plVar7[4];
            lVar4 = plVar7[2];
            piVar6 = (int*)std::array<int, 2ul>::operator[](this_00, 0);
            *piVar6 = ((int)lVar3 - (int)lVar4) * 64 + param_3;
            iVar1 = *(int*)((long)plVar7 + 36);
            iVar2 = *(int*)((long)plVar7 + 20);
            piVar6 = (int*)std::array<int, 2ul>::operator[](this_00, 1);
            this = (WorldmapSubareaSquareArea*)this;
            *piVar6 = (iVar1 - iVar2) * 64 + local_3c;
            new ((WorldmapSubareaSquareArea*)this)
                std::unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>>(local_38);
            std::unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>>::~unique_ptr(local_38);
        }
        return this;
    }

    // 0x1001f7a10, 112 bytes, placed by class name and debug map
    // WorldmapSubareaSquareArea::TargetToSourceTile(int, int) const
    WorldmapSubareaSquareArea* WorldmapSubareaSquareArea::TargetToSourceTile(int param_1, int param_2) {
        int in_ECX;
        undefined4 in_register_00000034;
        long* plVar2;

        plVar2 = (long*)CONCAT44(in_register_00000034, param_1);
        if ((**(code**)(*plVar2 + 56))(plVar2, param_2, in_ECX) == '\0') {
            new (this) rs2lib::CoordGrid((CoordGrid*)&rs2lib::CoordGrid::CoordGridNull);
        } else {
            new (this) rs2lib::CoordGrid((int)plVar2[1], ((int)plVar2[2] - (int)plVar2[4]) * 64 + param_2,
                                         (*(int*)((long)plVar2 + 20) - *(int*)((long)plVar2 + 36)) * 64 + in_ECX);
        }
        return this;
    }

    // 0x1001f7a80, 160 bytes, placed by class name and debug map
    // WorldmapSubareaSquareArea::Pack(PacketJ<Array<unsigned char, eastl::allocator> >&) const
    void WorldmapSubareaSquareArea::Pack(PacketJ* param_1) {
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
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_20);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_24);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_28);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_32);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_36);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_40);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_44);
    }

    // 0x1001f7b20, 176 bytes, placed by class name and debug map
    // WorldmapSubareaSquareArea::Unpack(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void WorldmapSubareaSquareArea::Unpack(PacketJ* param_1) {
        byte bVar1;
        ushort uVar2;

        bVar1 = param_1->g1();
        field_8 = (uint)bVar1;
        bVar1 = param_1->g1();
        field_12 = (uint)bVar1;
        uVar2 = param_1->g2();
        field_16 = (uint)uVar2;
        uVar2 = param_1->g2();
        field_20 = (uint)uVar2;
        uVar2 = param_1->g2();
        field_24 = (uint)uVar2;
        uVar2 = param_1->g2();
        field_28 = (uint)uVar2;
        uVar2 = param_1->g2();
        field_32 = (uint)uVar2;
        uVar2 = param_1->g2();
        field_36 = (uint)uVar2;
        uVar2 = param_1->g2();
        field_40 = (uint)uVar2;
        uVar2 = param_1->g2();
        field_44 = (uint)uVar2;
        SetTileBounds(this);
    }

} // namespace jag::oldscape::rs2lib::worldmap

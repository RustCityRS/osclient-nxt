// libs/oldscape/rs2lib/worldmap/WorldmapSubareaSquare.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::rs2lib::worldmap {
    class WorldmapSubareaSquare {
    public:
        // virtual methods in vtable order
        virtual ~WorldmapSubareaSquare();
        virtual GetType() const;
        virtual GetSquares() const;
        virtual WorldmapSubareaSquare* GetZones() const;
        virtual void CalcBounding(WorldmapAreaMetadata&) const;
        virtual ContainsSourceTile(int, int, int) const;
        virtual bool ContainsTargetTile(int, int) const;
        virtual SourceToTargetTile(int, int, int) const;
        virtual TargetToSourceTile(int, int) const;
        virtual void Pack(PacketJ<Array<unsigned char, eastl::allocator>>&) const;
        virtual void Unpack(PacketJ<Array<unsigned char, eastl::allocator>>&);
        WorldmapSubareaSquare();
        WorldmapSubareaSquare(int, int, int, int, int, int);
        void SetTileBounds();

        // data members, from how the methods use this: 52 bytes
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
        char _unknown_48[4];
    };

    // 0x100022b10: the linker folded this into option::ScriptOption<int, option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    WorldmapSubareaSquare::~WorldmapSubareaSquare();

    // 0x10002a770: the linker folded this into void eastl::destruct<CoordMapSquare*>(CoordMapSquare*, CoordMapSquare*), which has identical code
    WorldmapSubareaSquare::~WorldmapSubareaSquare();

    // 0x10004a690: the linker folded this into option::ScriptOption<bool, option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    WorldmapSubareaSquare::~WorldmapSubareaSquare();

    // 0x1001f6e90, 32 bytes, base-object constructor, placed by class name and debug map
    // WorldmapSubareaSquare::WorldmapSubareaSquare()
    void WorldmapSubareaSquare::WorldmapSubareaSquare() {
        new (this) WorldmapSubarea();
        field_0 = &PTR__ScriptOption_100ef72d8;
    }

    // 0x1001f6ed0, 16 bytes, complete-object constructor, placed by class name
    // WorldmapSubareaSquare::WorldmapSubareaSquare(): jumps straight to the base-object constructor

    // 0x1001f6ee0, 112 bytes, base-object constructor, placed by class name
    // WorldmapSubareaSquare::WorldmapSubareaSquare(int, int, int, int, int, int)
    void WorldmapSubareaSquare::WorldmapSubareaSquare(int param_1, int param_2, int param_3, int param_4, int param_5,
                                                      int param_6) {
        new (this) WorldmapSubarea();
        field_0 = &PTR__ScriptOption_100ef72d8;
        field_8 = param_1;
        field_12 = param_2;
        field_16 = param_3;
        field_20 = param_5;
        field_24 = param_4;
        field_28 = param_6;
        SetTileBounds(this);
    }

    // 0x1001f6f50, 48 bytes, placed by class name
    // WorldmapSubareaSquare::SetTileBounds()
    void WorldmapSubareaSquare::SetTileBounds() {
        uint uVar1;
        uint uVar2;

        uVar1 = field_24 << 6;
        field_32 = uVar1;
        uVar2 = field_28 << 6;
        field_36 = uVar2;
        field_40 = uVar1 | 63;
        field_44 = uVar2 | 63;
    }

    // 0x1001f6f80, 32 bytes, complete-object constructor, placed by class name
    // WorldmapSubareaSquare::WorldmapSubareaSquare(int, int, int, int, int, int)
    void WorldmapSubareaSquare::WorldmapSubareaSquare(int param_1, int param_2, int param_3, int param_4, int param_5,
                                                      int param_6) {
        WorldmapSubareaSquare(this, param_1, param_2, param_3, param_4, param_5, param_6);
    }

    // 0x1001f6fa0, 16 bytes, placed by class name
    // WorldmapSubareaSquare::GetType() const
    undefined8 WorldmapSubareaSquare::GetType() {
        return 1;
    }

    // 0x1001f6fb0, 144 bytes, placed by class name
    // WorldmapSubareaSquare::GetSquares() const
    WorldmapSubareaSquare* WorldmapSubareaSquare::GetSquares() {
        long in_RSI;
        shared_ptr local_30;

        new (this) eastl::vector<shared_ptr<MapSquareData>, eastl::allocator>();
        make_shared<MapSquareData, int const&, int const&, int, int, int&, int&>(
            (jag*)&local_30, (int*)(in_RSI + 8), (int*)(in_RSI + 12), (int*)(in_RSI + 16), (int*)(in_RSI + 20),
            (int*)(in_RSI + 24), (int*)(in_RSI + 28));
        push_back(&local_30);
        local_30.~shared_ptr();
        return this;
    }

    // 0x1001f7190, 32 bytes, placed by class name
    // WorldmapSubareaSquare::GetZones() const
    WorldmapSubareaSquare* WorldmapSubareaSquare::GetZones() {
        new (this) eastl::vector<shared_ptr<MapZoneData>, eastl::allocator>();
        return this;
    }

    // 0x1001f71d0, 128 bytes, placed by class name
    // WorldmapSubareaSquare::CalcBounding(WorldmapAreaMetadata&) const
    void WorldmapSubareaSquare::CalcBounding(WorldmapAreaMetadata* param_1) {
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

    // 0x1001f7280, 48 bytes, placed by class name
    // WorldmapSubareaSquare::ContainsSourceTile(int, int, int) const
    undefined4 WorldmapSubareaSquare::ContainsSourceTile(int param_1, int param_2, int param_3) {
        int iVar1;

        if (((param_1 < (int)field_8) || (iVar1 = field_8 + field_12, iVar1 <= param_1)) ||
            (param_2 >> 6 != field_16)) {
            return 0;
        }
        return CONCAT31((int3)((uint)iVar1 >> 8), param_3 >> 6 == field_20);
    }

    // 0x1001f72b0, 32 bytes, placed by class name
    // WorldmapSubareaSquare::ContainsTargetTile(int, int) const
    bool WorldmapSubareaSquare::ContainsTargetTile(int param_1, int param_2) {
        if (param_1 >> 6 == field_24) {
            return param_2 >> 6 == field_28;
        }
        return false;
    }

    // 0x1001f72d0, 256 bytes, placed by class name
    // WorldmapSubareaSquare::SourceToTargetTile(int, int, int) const
    WorldmapSubareaSquare* WorldmapSubareaSquare::SourceToTargetTile(int param_1, int param_2, int param_3) {
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
            lVar3 = plVar7[3];
            lVar4 = plVar7[2];
            piVar6 = (int*)std::array<int, 2ul>::operator[](this_00, 0);
            *piVar6 = ((int)lVar3 - (int)lVar4) * 64 + param_3;
            iVar1 = *(int*)((long)plVar7 + 28);
            iVar2 = *(int*)((long)plVar7 + 20);
            piVar6 = (int*)std::array<int, 2ul>::operator[](this_00, 1);
            this = (WorldmapSubareaSquare*)this;
            *piVar6 = (iVar1 - iVar2) * 64 + local_3c;
            new ((WorldmapSubareaSquare*)this)
                std::unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>>(local_38);
            std::unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>>::~unique_ptr(local_38);
        }
        return this;
    }

    // 0x1001f7490, 112 bytes, placed by class name
    // WorldmapSubareaSquare::TargetToSourceTile(int, int) const
    WorldmapSubareaSquare* WorldmapSubareaSquare::TargetToSourceTile(int param_1, int param_2) {
        int in_ECX;
        undefined4 in_register_00000034;
        long* plVar2;

        plVar2 = (long*)CONCAT44(in_register_00000034, param_1);
        if ((**(code**)(*plVar2 + 56))(plVar2, param_2, in_ECX) == '\0') {
            new (this) rs2lib::CoordGrid((CoordGrid*)&rs2lib::CoordGrid::CoordGridNull);
        } else {
            new (this) rs2lib::CoordGrid((int)plVar2[1], ((int)plVar2[2] - (int)plVar2[3]) * 64 + param_2,
                                         (*(int*)((long)plVar2 + 20) - *(int*)((long)plVar2 + 28)) * 64 + in_ECX);
        }
        return this;
    }

    // 0x1001f7500, 112 bytes, placed by class name
    // WorldmapSubareaSquare::Pack(PacketJ<Array<unsigned char, eastl::allocator> >&) const
    void WorldmapSubareaSquare::Pack(PacketJ* param_1) {
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
    }

    // 0x1001f7570, 112 bytes, placed by class name
    // WorldmapSubareaSquare::Unpack(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void WorldmapSubareaSquare::Unpack(PacketJ* param_1) {
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
        SetTileBounds(this);
    }

} // namespace jag::oldscape::rs2lib::worldmap

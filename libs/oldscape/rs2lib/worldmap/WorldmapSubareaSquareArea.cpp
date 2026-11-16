// libs/oldscape/rs2lib/worldmap/WorldmapSubareaSquareArea.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::rs2lib::worldmap {
    class WorldmapSubareaSquareArea {
    public:
        // virtual methods in vtable order
        virtual ~WorldmapSubareaSquareArea();
        virtual uint64_t GetType() const;
        virtual auto GetSquares() const;
        virtual WorldmapSubareaSquareArea* GetZones() const;
        virtual void CalcBounding(WorldmapAreaMetadata& worldmapAreaMetadata) const;
        virtual bool ContainsSourceTile(int arg1, int arg2, int arg3) const;
        virtual bool ContainsTargetTile(int arg1, int arg2) const;
        virtual auto SourceToTargetTile(int arg1, int arg2, int arg3) const;
        virtual CoordGrid TargetToSourceTile(int arg1, int arg2) const;
        virtual void Pack(PacketJ<Array<unsigned char>>& packetJ) const;
        virtual void Unpack(PacketJ<Array<unsigned char>>& packetJ);
        WorldmapSubareaSquareArea();
        WorldmapSubareaSquareArea(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                  int arg9, int arg10);
        void SetTileBounds();

    private:
        unsigned int field_8;
        unsigned int field_12;
        unsigned int field_16;
        unsigned int field_20;
        unsigned int field_24;
        unsigned int field_28;
        unsigned int field_32;
        unsigned int field_36;
        unsigned int field_40;
        unsigned int field_44;
        int field_48;
        int field_52;
        unsigned int field_56;
        unsigned int field_60;
        uint8_t _unknown_64[4];
    };

    // 0x100022b10: WorldmapSubareaSquareArea::~WorldmapSubareaSquareArea() has the same machine code as option::ScriptOption<int, option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: WorldmapSubareaSquareArea::~WorldmapSubareaSquareArea() has the same machine code as void eastl::destruct<CoordMapSquare*>(CoordMapSquare*, CoordMapSquare*)

    // 0x1001f75e0
    WorldmapSubareaSquareArea::WorldmapSubareaSquareArea() : WorldmapSubarea() {}

    // 0x1001f7610
    WorldmapSubareaSquareArea::WorldmapSubareaSquareArea(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6,
                                                         int arg7, int arg8, int arg9, int arg10)
        : WorldmapSubarea(), field_8(arg1), field_12(arg2), field_16(arg3), field_20(arg5), field_24(arg7),
          field_28(arg9), field_32(arg4), field_36(arg6), field_40(arg8), field_44(arg10) {
        SetTileBounds();
    }

    // 0x1001f7690
    void WorldmapSubareaSquareArea::SetTileBounds() {
        field_48 = field_32 << 6;
        field_52 = field_36 << 6;
        field_56 = field_40 << 6 | 63;
        field_60 = field_44 << 6 | 63;
    }

    // 0x1001f7700
    uint64_t WorldmapSubareaSquareArea::GetType() const {
        return 0;
    }

    // 0x1001f7710
    auto WorldmapSubareaSquareArea::GetSquares() const {
        bool bVar1;
        shared_ptr<MapSquareData> local_50;
        int local_40;
        int local_3c;
        unsigned int local_38;
        unsigned int local_34;

        auto result;
        if ((int)field_32 <= (int)field_40) {
            local_34 = field_32;
            do {
                local_38 = field_36;
                if ((int)field_36 <= (int)field_44) {
                    do {
                        local_40 = (local_34 + field_16) - field_32;
                        local_3c = (local_38 + field_20) - field_36;
                        make_shared<MapSquareData, int const&, int const&, int, int, int&, int&>(
                            &local_50, (int*)&field_8, (int*)&field_12, &local_40, &local_3c, (int*)&local_34);
                        result.push_back(local_50);
                        bVar1 = (int)local_38 < (int)field_44;
                        local_38 = local_38 + 1;
                    } while (bVar1);
                }
                bVar1 = (int)local_34 < (int)field_40;
                local_34 = local_34 + 1;
            } while (bVar1);
        }
        return result;
    }

    // 0x1001f7800
    WorldmapSubareaSquareArea* WorldmapSubareaSquareArea::GetZones() const {
        new (this) eastl::vector<shared_ptr<MapZoneData>>();
        return this;
    }

    // 0x1001f7820
    void WorldmapSubareaSquareArea::CalcBounding(WorldmapAreaMetadata& worldmapAreaMetadata) const {
        int iVar1 = worldmapAreaMetadata.GetMinMapX();
        if ((int)field_32 < iVar1) {
            worldmapAreaMetadata.SetBottomLine(field_32);
        }
        iVar1 = worldmapAreaMetadata.GetUIHeight();
        if (iVar1 < (int)field_40) {
            worldmapAreaMetadata.SetMaxMapX(field_40);
        }
        iVar1 = worldmapAreaMetadata.GetSeqDelay();
        if ((int)field_36 < iVar1) {
            worldmapAreaMetadata.SetMinMapZ(field_36);
        }
        iVar1 = worldmapAreaMetadata.GetMaxMapZ();
        if (iVar1 < (int)field_44) {
            worldmapAreaMetadata.SetLevel(field_44);
        }
    }

    // 0x1001f78a0
    bool WorldmapSubareaSquareArea::ContainsSourceTile(int arg1, int arg2, int arg3) const {
        int iVar1;

        if ((((arg1 < (int)field_8) || (iVar1 = field_8 + field_12, iVar1 <= arg1)) || (arg2 >> 6 < (int)field_16)) ||
            (((int)field_24 < arg2 >> 6 || (arg3 >> 6 < (int)field_20)))) {
            return 0;
        }
        return arg3 >> 6 <= (int)field_28;
    }

    // 0x1001f78e0
    bool WorldmapSubareaSquareArea::ContainsTargetTile(int arg1, int arg2) const {
        if (((arg1 >> 6 < (int)field_32) || ((int)field_40 < arg1 >> 6)) || (arg2 >> 6 < (int)field_36)) {
            return false;
        }
        return arg2 >> 6 <= (int)field_44;
    }

    // 0x1001f7910
    auto WorldmapSubareaSquareArea::SourceToTargetTile(int arg1, int arg2, int arg3) const {
        auto result;
        unsigned int uVar1;
        unsigned int uVar2;
        array<int, 2ul>* this_00;
        int* piVar4;
        int iVar5;
        ReturnValue local_50;
        ReturnValue* local_48;
        unique_ptr<std::array<int, 2ul>> local_38;

        void* arg1_00 = (void*)(unsigned long)(unsigned int)arg1;
        if (ContainsSourceTile((int)this, arg1, arg2) == '\0') {
            result.unique_ptr<true, void>(arg1_00);
        } else {
            local_48 = &result;
            local_38.unique_ptr<true, void>();
            local_50 = std::make_unique<std::array<int, 2ul>>();
            local_38 = local_50;
            this_00 = (array<int, 2ul>*)*local_38;
            uVar1 = field_32;
            uVar2 = field_16;
            piVar4 = (int*)(*this_00)[0];
            *piVar4 = (uVar1 - uVar2) * 64 + arg2;
            iVar5 = (field_36 - field_20) * 64 + arg3;
            piVar4 = (int*)(*this_00)[1];
            &result = local_48;
            *piVar4 = iVar5;
            new (local_48) std::unique_ptr<std::array<int, 2ul>>(local_38);
        }
        return result;
    }

    // 0x1001f7a10
    CoordGrid WorldmapSubareaSquareArea::TargetToSourceTile(int arg1, int arg2) const {
        int in_ECX;
        uint64_t extraout_RDX;
        uint64_t extraout_RDX_00;
        uint64_t uVar2;
        uint32_t in_register_00000034;
        CoordGrid CVar4;

        long* plVar3 = (long*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        if ((**(void (**)(...))(*plVar3 + 56))(plVar3, arg2, in_ECX) == '\0') {
            new (this) rs2lib::CoordGrid((CoordGrid*)&rs2lib::CoordGrid::CoordGridNull);
            uVar2 = extraout_RDX_00;
        } else {
            new (this) rs2lib::CoordGrid((int)plVar3[1], ((int)plVar3[2] - (int)plVar3[4]) * 64 + arg2,
                                         (*(int*)((long)plVar3 + 20) - *(int*)((long)plVar3 + 36)) * 64 + in_ECX);
            uVar2 = extraout_RDX;
        }
        CVar4._8_8_ = uVar2;
        CVar4._0_8_ = this;
        return CVar4;
    }

    // 0x1001f7a80
    void WorldmapSubareaSquareArea::Pack(PacketJ<Array<unsigned char>>& packetJ) const {
        uint8_t bVar1 = GetType();
        packetJ.p1<unsigned long>((unsigned int)bVar1);
        packetJ.p1<unsigned long>(field_8);
        packetJ.p1<unsigned long>(field_12);
        packetJ.p2<unsigned long>((unsigned short)field_16);
        packetJ.p2<unsigned long>((unsigned short)field_20);
        packetJ.p2<unsigned long>((unsigned short)field_24);
        packetJ.p2<unsigned long>((unsigned short)field_28);
        packetJ.p2<unsigned long>((unsigned short)field_32);
        packetJ.p2<unsigned long>((unsigned short)field_36);
        packetJ.p2<unsigned long>((unsigned short)field_40);
        packetJ.p2<unsigned long>((unsigned short)field_44);
    }

    // 0x1001f7b20
    void WorldmapSubareaSquareArea::Unpack(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1 = packetJ.g1();
        field_8 = (unsigned int)bVar1;
        bVar1 = packetJ.g1();
        field_12 = (unsigned int)bVar1;
        unsigned short uVar2 = packetJ.g2();
        field_16 = (unsigned int)uVar2;
        uVar2 = packetJ.g2();
        field_20 = (unsigned int)uVar2;
        uVar2 = packetJ.g2();
        field_24 = (unsigned int)uVar2;
        uVar2 = packetJ.g2();
        field_28 = (unsigned int)uVar2;
        uVar2 = packetJ.g2();
        field_32 = (unsigned int)uVar2;
        uVar2 = packetJ.g2();
        field_36 = (unsigned int)uVar2;
        uVar2 = packetJ.g2();
        field_40 = (unsigned int)uVar2;
        uVar2 = packetJ.g2();
        field_44 = (unsigned int)uVar2;
        SetTileBounds();
    }

} // namespace jag::oldscape::rs2lib::worldmap

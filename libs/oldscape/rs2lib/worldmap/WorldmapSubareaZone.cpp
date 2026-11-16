// libs/oldscape/rs2lib/worldmap/WorldmapSubareaZone.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::rs2lib::worldmap {
    class WorldmapSubareaZone {
    public:
        // virtual methods in vtable order
        virtual ~WorldmapSubareaZone();
        virtual uint64_t GetType() const;
        virtual WorldmapSubareaZone* GetSquares() const;
        virtual auto GetZones() const;
        virtual void CalcBounding(WorldmapAreaMetadata& worldmapAreaMetadata) const;
        virtual bool ContainsSourceTile(int arg1, int arg2, int arg3) const;
        virtual bool ContainsTargetTile(int arg1, int arg2) const;
        virtual auto SourceToTargetTile(int arg1, int arg2, int arg3) const;
        virtual CoordGrid TargetToSourceTile(int arg1, int arg2) const;
        virtual void Pack(PacketJ<Array<unsigned char>>& packetJ) const;
        virtual void Unpack(PacketJ<Array<unsigned char>>& packetJ);
        WorldmapSubareaZone();
        WorldmapSubareaZone(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9,
                            int arg10);
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
        int field_56;
        int field_60;
        uint8_t _unknown_64[4];
    };

    // 0x100022b10: WorldmapSubareaZone::~WorldmapSubareaZone() has the same machine code as option::ScriptOption<int, option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: WorldmapSubareaZone::~WorldmapSubareaZone() has the same machine code as void eastl::destruct<CoordMapSquare*>(CoordMapSquare*, CoordMapSquare*)

    // 0x1001f7bd0
    WorldmapSubareaZone::WorldmapSubareaZone() : WorldmapSubarea() {}

    // 0x1001f7c00
    WorldmapSubareaZone::WorldmapSubareaZone(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                             int arg8, int arg9, int arg10)
        : WorldmapSubarea(), field_8(arg1), field_12(arg2), field_16(arg3), field_20(arg5), field_24(arg4),
          field_28(arg6), field_32(arg7), field_36(arg9), field_40(arg8), field_44(arg10) {
        SetTileBounds();
    }

    // 0x1001f7c80
    void WorldmapSubareaZone::SetTileBounds() {
        int iVar1 = field_24 * 64;
        field_48 = iVar1 + field_40 * 8;
        int iVar2 = field_28 * 64;
        field_52 = iVar2 + field_44 * 8;
        field_56 = iVar1 + field_40 * 8 + 7;
        field_60 = iVar2 + field_44 * 8 + 7;
    }

    // 0x1001f7d00
    uint64_t WorldmapSubareaZone::GetType() const {
        return 3;
    }

    // 0x1001f7d10
    WorldmapSubareaZone* WorldmapSubareaZone::GetSquares() const {
        new (this) eastl::vector<shared_ptr<MapSquareData>>();
        return this;
    }

    // 0x1001f7d30
    auto WorldmapSubareaZone::GetZones() const {
        shared_ptr<MapZoneData> local_30;

        auto result;
        make_shared<MapZoneData, int const&, int const&, int const&, int const&, int const&, int const&, int const&,
                    int const&, int const&, int const&>(&local_30, (int*)&field_8, (int*)&field_12, (int*)&field_16,
                                                        (int*)&field_20, (int*)&field_32, (int*)&field_36,
                                                        (int*)&field_24, (int*)&field_28, (int*)&field_40);
        result.push_back(local_30);
        return result;
    }

    // 0x1001f7f20
    void WorldmapSubareaZone::CalcBounding(WorldmapAreaMetadata& worldmapAreaMetadata) const {
        int iVar1 = worldmapAreaMetadata.GetMinMapX();
        if ((int)field_24 < iVar1) {
            worldmapAreaMetadata.SetBottomLine(field_24);
        }
        iVar1 = worldmapAreaMetadata.GetUIHeight();
        if (iVar1 < (int)field_24) {
            worldmapAreaMetadata.SetMaxMapX(field_24);
        }
        iVar1 = worldmapAreaMetadata.GetSeqDelay();
        if ((int)field_28 < iVar1) {
            worldmapAreaMetadata.SetMinMapZ(field_28);
        }
        iVar1 = worldmapAreaMetadata.GetMaxMapZ();
        if (iVar1 < (int)field_28) {
            worldmapAreaMetadata.SetLevel(field_28);
        }
    }

    // 0x1001f7fa0
    bool WorldmapSubareaZone::ContainsSourceTile(int arg1, int arg2, int arg3) const {
        unsigned int uVar1;
        int iVar2;

        if (((int)field_8 <= arg1) && (arg1 < (int)(field_8 + field_12))) {
            iVar2 = field_16 * 64;
            if (((int)(iVar2 + field_32 * 8) <= arg2) &&
                ((arg2 <= (int)(iVar2 + field_32 * 8 + 7) &&
                  (uVar1 = field_20 * 64 + field_36 * 8, (int)uVar1 <= arg3)))) {
                return arg3 <= (int)(uVar1 | 7);
            }
        }
        return 0;
    }

    // 0x1001f7ff0
    bool WorldmapSubareaZone::ContainsTargetTile(int arg1, int arg2) const {
        unsigned int uVar1;

        int iVar2 = field_24 * 64;
        if (((arg1 < (int)(iVar2 + field_40 * 8)) || ((int)(iVar2 + field_40 * 8 + 7) < arg1)) ||
            (uVar1 = field_28 * 64 + field_44 * 8, arg2 < (int)uVar1)) {
            return 0;
        }
        return arg2 <= (int)(uVar1 | 7);
    }

    // 0x1001f8040
    auto WorldmapSubareaZone::SourceToTargetTile(int arg1, int arg2, int arg3) const {
        unsigned int uVar1;
        unsigned int uVar2;
        unsigned int uVar3;
        unsigned int uVar4;
        array<int, 2ul>* this_00;
        int* piVar6;
        ReturnValue local_40;
        unique_ptr<std::array<int, 2ul>> local_38;

        void* arg1_00 = (void*)(unsigned long)(unsigned int)arg1;
        if (ContainsSourceTile((int)this, arg1, arg2) == '\0') {
            result.unique_ptr<true, void>(arg1_00);
        } else {
            local_38.unique_ptr<true, void>();
            local_40 = std::make_unique<std::array<int, 2ul>>();
            local_38 = local_40;
            this_00 = (array<int, 2ul>*)*local_38;
            uVar1 = field_24;
            uVar2 = field_40;
            uVar3 = field_16;
            uVar4 = field_32;
            piVar6 = (int*)(*this_00)[0];
            *piVar6 = (uVar1 - uVar3) * 64 + arg2 + (uVar2 - uVar4) * 8;
            uVar1 = field_28;
            uVar2 = field_44;
            uVar3 = field_20;
            uVar4 = field_36;
            piVar6 = (int*)(*this_00)[1];
            *piVar6 = (uVar1 - uVar3) * 64 + arg3 + (uVar2 - uVar4) * 8;
            auto result(local_38);
        }
        return result;
    }

    // 0x1001f8140
    CoordGrid WorldmapSubareaZone::TargetToSourceTile(int arg1, int arg2) const {
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
            new (this) rs2lib::CoordGrid(
                (int)plVar3[1], ((int)plVar3[2] - (int)plVar3[3]) * 64 + arg2 + ((int)plVar3[4] - (int)plVar3[5]) * 8,
                (*(int*)((long)plVar3 + 20) - *(int*)((long)plVar3 + 28)) * 64 + in_ECX +
                    (*(int*)((long)plVar3 + 36) - *(int*)((long)plVar3 + 44)) * 8);
            uVar2 = extraout_RDX;
        }
        CVar4._8_8_ = uVar2;
        CVar4._0_8_ = this;
        return CVar4;
    }

    // 0x1001f81c0
    void WorldmapSubareaZone::Pack(PacketJ<Array<unsigned char>>& packetJ) const {
        uint8_t bVar1 = GetType();
        packetJ.p1<unsigned long>((unsigned int)bVar1);
        packetJ.p1<unsigned long>(field_8);
        packetJ.p1<unsigned long>(field_12);
        packetJ.p2<unsigned long>((unsigned short)field_16);
        packetJ.p1<unsigned long>(field_32);
        packetJ.p2<unsigned long>((unsigned short)field_20);
        packetJ.p1<unsigned long>(field_36);
        packetJ.p2<unsigned long>((unsigned short)field_24);
        packetJ.p1<unsigned long>(field_40);
        packetJ.p2<unsigned long>((unsigned short)field_28);
        packetJ.p1<unsigned long>(field_44);
    }

    // 0x1001f8260
    void WorldmapSubareaZone::Unpack(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1 = packetJ.g1();
        field_8 = (unsigned int)bVar1;
        bVar1 = packetJ.g1();
        field_12 = (unsigned int)bVar1;
        unsigned short uVar2 = packetJ.g2();
        field_16 = (unsigned int)uVar2;
        bVar1 = packetJ.g1();
        field_32 = (unsigned int)bVar1;
        uVar2 = packetJ.g2();
        field_20 = (unsigned int)uVar2;
        bVar1 = packetJ.g1();
        field_36 = (unsigned int)bVar1;
        uVar2 = packetJ.g2();
        field_24 = (unsigned int)uVar2;
        bVar1 = packetJ.g1();
        field_40 = (unsigned int)bVar1;
        uVar2 = packetJ.g2();
        field_28 = (unsigned int)uVar2;
        bVar1 = packetJ.g1();
        field_44 = (unsigned int)bVar1;
        SetTileBounds();
    }

} // namespace jag::oldscape::rs2lib::worldmap

namespace jag {
    // 0x1001f7de0
    shared_ptr_if_not_array<oldscape::rs2lib::worldmap::MapZoneData>::type
    make_shared<oldscape::rs2lib::worldmap::MapZoneData, int const&, int const&, int const&, int const&, int const&,
                int const&, int const&, int const&, int const&, int const&>(const int& arg1, const int& arg2,
                                                                            const int& arg3, const int& arg4,
                                                                            const int& arg5, const int& arg6,
                                                                            const int& arg7, const int& arg8,
                                                                            const int& arg9, const int& arg10) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int* in_stack_00000028;
        int local_44;
        MapZoneData* local_40[2];

        auto arg1_00 = aligned_alloc(240, 8);
        if (arg1_00 == nullptr) {
            new (arg1) shared_ptr();
        } else {
            local_40[0] =
                placement_new<oldscape::rs2lib::worldmap::MapZoneData, int const&, int const&, int const&, int const&,
                              int const&, int const&, int const&, int const&, int const&, int const&>(
                    (void*)((long)arg1_00 + 32), arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10,
                    in_stack_00000028);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::worldmap::MapZoneData>, int,
                              oldscape::rs2lib::worldmap::MapZoneData*&>(arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (arg1) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return arg1;
    }

} // namespace jag

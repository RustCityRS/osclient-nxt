// libs/oldscape/rs2lib/worldmap/WorldmapSubareaZoneArea.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::rs2lib::worldmap {
    class WorldmapSubareaZoneArea {
    public:
        // virtual methods in vtable order
        virtual ~WorldmapSubareaZoneArea();
        virtual uint64_t GetType() const;
        virtual WorldmapSubareaZoneArea* GetSquares() const;
        virtual WorldmapSubareaZoneArea* GetZones() const;
        virtual void CalcBounding(WorldmapAreaMetadata& worldmapAreaMetadata) const;
        virtual bool ContainsSourceTile(int arg1, int arg2, int arg3) const;
        virtual bool ContainsTargetTile(int arg1, int arg2) const;
        virtual auto SourceToTargetTile(int arg1, int arg2, int arg3) const;
        virtual CoordGrid TargetToSourceTile(int arg1, int arg2) const;
        virtual void Pack(PacketJ<Array<unsigned char>>& packetJ) const;
        virtual void Unpack(PacketJ<Array<unsigned char>>& packetJ);
        WorldmapSubareaZoneArea();
        WorldmapSubareaZoneArea(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                int arg9, int arg10, int arg11, int arg12, int arg13, int arg14);
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
        unsigned int field_48;
        unsigned int field_52;
        unsigned int field_56;
        unsigned int field_60;
        int field_64;
        int field_68;
        int field_72;
        int field_76;
        uint8_t _unknown_80[4];
    };

    // 0x100022b10: WorldmapSubareaZoneArea::~WorldmapSubareaZoneArea() has the same machine code as option::ScriptOption<int, option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: WorldmapSubareaZoneArea::~WorldmapSubareaZoneArea() has the same machine code as void eastl::destruct<CoordMapSquare*>(CoordMapSquare*, CoordMapSquare*)

    // 0x1001f8310
    WorldmapSubareaZoneArea::WorldmapSubareaZoneArea() : WorldmapSubarea() {}

    // 0x1001f8340
    WorldmapSubareaZoneArea::WorldmapSubareaZoneArea(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6,
                                                     int arg7, int arg8, int arg9, int arg10, int arg11, int arg12,
                                                     int arg13, int arg14)
        : WorldmapSubarea(), field_8(arg1), field_12(arg2), field_16(arg3), field_20(arg5), field_24(arg4),
          field_28(arg6), field_32(arg7), field_36(arg9), field_40(arg11), field_44(arg13), field_48(arg8),
          field_52(arg10), field_56(arg12), field_60(arg14) {
        SetTileBounds();
    }

    // 0x1001f83e0
    void WorldmapSubareaZoneArea::SetTileBounds() {
        int iVar1 = field_24 * 64;
        field_64 = iVar1 + field_48 * 8;
        int iVar2 = field_28 * 64;
        field_68 = iVar2 + field_52 * 8;
        field_72 = iVar1 + 7 + field_56 * 8;
        field_76 = iVar2 + field_60 * 8 + 7;
    }

    // 0x1001f8480
    uint64_t WorldmapSubareaZoneArea::GetType() const {
        return 2;
    }

    // 0x1001f8490
    WorldmapSubareaZoneArea* WorldmapSubareaZoneArea::GetSquares() const {
        new (this) eastl::vector<shared_ptr<MapSquareData>>();
        return this;
    }

    // 0x1001f84b0
    WorldmapSubareaZoneArea* WorldmapSubareaZoneArea::GetZones() const {
        bool bVar1;
        long in_RSI;
        int iVar2;
        int iVar3;
        shared_ptr<MapZoneData> local_80;
        int* local_70;
        int* local_68;
        int* local_60;
        int* local_58;
        int* local_50;
        int local_48;
        int local_44;
        int local_40;
        int local_3c;

        new (this) eastl::vector<shared_ptr<MapZoneData>>();
        if (*(int*)(in_RSI + 32) <= *(int*)(in_RSI + 40)) {
            local_70 = (int*)(in_RSI + 8);
            local_68 = (int*)(in_RSI + 12);
            local_60 = (int*)(in_RSI + 16);
            local_58 = (int*)(in_RSI + 20);
            local_50 = (int*)(in_RSI + 24);
            iVar2 = 0;
            do {
                local_44 = *(int*)(in_RSI + 36);
                if (local_44 <= *(int*)(in_RSI + 44)) {
                    iVar3 = 0;
                    do {
                        local_48 = *(int*)(in_RSI + 32) + iVar2;
                        local_44 = local_44 + iVar3;
                        local_40 = *(int*)(in_RSI + 48) + iVar2;
                        local_3c = *(int*)(in_RSI + 52) + iVar3;
                        make_shared<MapZoneData, int const&, int const&, int const&, int const&, int, int, int const&,
                                    int const&, int, int>(&local_80, local_70, local_68, local_60, local_58, &local_48,
                                                          &local_44, local_50, (int*)(in_RSI + 28), &local_40);
                        push_back(local_80);
                        local_44 = *(int*)(in_RSI + 36);
                        bVar1 = iVar3 < *(int*)(in_RSI + 44) - local_44;
                        iVar3 = iVar3 + 1;
                    } while (bVar1);
                }
                bVar1 = iVar2 < *(int*)(in_RSI + 40) - *(int*)(in_RSI + 32);
                iVar2 = iVar2 + 1;
            } while (bVar1);
        }
        return this;
    }

    // 0x1001f86e0
    void WorldmapSubareaZoneArea::CalcBounding(WorldmapAreaMetadata& worldmapAreaMetadata) const {
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

    // 0x1001f8760
    bool WorldmapSubareaZoneArea::ContainsSourceTile(int arg1, int arg2, int arg3) const {
        int iVar2;

        if ((((arg1 < (int)field_8) || ((int)(field_8 + field_12) <= arg1)) ||
             (iVar2 = field_16 * 64, arg2 < (int)(iVar2 + field_32 * 8))) ||
            (((int)(iVar2 + field_40 * 8 | 7) < arg2 || (iVar2 = field_20 * 64, arg3 < (int)(iVar2 + field_36 * 8))))) {
            return 0;
        }
        unsigned int uVar1 = iVar2 + field_44 * 8;
        return arg3 <= (int)(uVar1 | 7);
    }

    // 0x1001f87c0
    bool WorldmapSubareaZoneArea::ContainsTargetTile(int arg1, int arg2) const {
        int iVar2 = field_24 * 64;
        if (((arg1 < (int)(iVar2 + field_48 * 8)) || ((int)(iVar2 + field_56 * 8 | 7) < arg1)) ||
            (iVar2 = field_28 * 64, arg2 < (int)(iVar2 + field_52 * 8))) {
            return 0;
        }
        unsigned int uVar1 = iVar2 + field_60 * 8;
        return arg2 <= (int)(uVar1 | 7);
    }

    // 0x1001f8810
    auto WorldmapSubareaZoneArea::SourceToTargetTile(int arg1, int arg2, int arg3) const {
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
            uVar2 = field_48;
            uVar3 = field_16;
            uVar4 = field_32;
            piVar6 = (int*)(*this_00)[0];
            *piVar6 = (uVar1 - uVar3) * 64 + arg2 + (uVar2 - uVar4) * 8;
            uVar1 = field_28;
            uVar2 = field_52;
            uVar3 = field_20;
            uVar4 = field_36;
            piVar6 = (int*)(*this_00)[1];
            *piVar6 = (uVar1 - uVar3) * 64 + arg3 + (uVar2 - uVar4) * 8;
            auto result(local_38);
        }
        return result;
    }

    // 0x1001f8910
    CoordGrid WorldmapSubareaZoneArea::TargetToSourceTile(int arg1, int arg2) const {
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
                (int)plVar3[1], ((int)plVar3[2] - (int)plVar3[3]) * 64 + arg2 + ((int)plVar3[4] - (int)plVar3[6]) * 8,
                (*(int*)((long)plVar3 + 20) - *(int*)((long)plVar3 + 28)) * 64 + in_ECX +
                    (*(int*)((long)plVar3 + 36) - *(int*)((long)plVar3 + 52)) * 8);
            uVar2 = extraout_RDX;
        }
        CVar4._8_8_ = uVar2;
        CVar4._0_8_ = this;
        return CVar4;
    }

    // 0x1001f8990
    void WorldmapSubareaZoneArea::Pack(PacketJ<Array<unsigned char>>& packetJ) const {
        uint8_t bVar1 = GetType();
        packetJ.p1<unsigned long>((unsigned int)bVar1);
        packetJ.p1<unsigned long>(field_8);
        packetJ.p1<unsigned long>(field_12);
        packetJ.p2<unsigned long>((unsigned short)field_16);
        packetJ.p1<unsigned long>(field_32);
        packetJ.p1<unsigned long>(field_40);
        packetJ.p2<unsigned long>((unsigned short)field_20);
        packetJ.p1<unsigned long>(field_36);
        packetJ.p1<unsigned long>(field_44);
        packetJ.p2<unsigned long>((unsigned short)field_24);
        packetJ.p1<unsigned long>(field_48);
        packetJ.p1<unsigned long>(field_56);
        packetJ.p2<unsigned long>((unsigned short)field_28);
        packetJ.p1<unsigned long>(field_52);
        packetJ.p1<unsigned long>(field_60);
    }

    // 0x1001f8a50
    void WorldmapSubareaZoneArea::Unpack(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1 = packetJ.g1();
        field_8 = (unsigned int)bVar1;
        bVar1 = packetJ.g1();
        field_12 = (unsigned int)bVar1;
        unsigned short uVar2 = packetJ.g2();
        field_16 = (unsigned int)uVar2;
        bVar1 = packetJ.g1();
        field_32 = (unsigned int)bVar1;
        bVar1 = packetJ.g1();
        field_40 = (unsigned int)bVar1;
        uVar2 = packetJ.g2();
        field_20 = (unsigned int)uVar2;
        bVar1 = packetJ.g1();
        field_36 = (unsigned int)bVar1;
        bVar1 = packetJ.g1();
        field_44 = (unsigned int)bVar1;
        uVar2 = packetJ.g2();
        field_24 = (unsigned int)uVar2;
        bVar1 = packetJ.g1();
        field_48 = (unsigned int)bVar1;
        bVar1 = packetJ.g1();
        field_56 = (unsigned int)bVar1;
        uVar2 = packetJ.g2();
        field_28 = (unsigned int)uVar2;
        bVar1 = packetJ.g1();
        field_52 = (unsigned int)bVar1;
        bVar1 = packetJ.g1();
        field_60 = (unsigned int)bVar1;
        SetTileBounds();
    }

} // namespace jag::oldscape::rs2lib::worldmap

namespace jag {
    // 0x1001f8600
    shared_ptr_if_not_array<oldscape::rs2lib::worldmap::MapZoneData>::type
    make_shared<oldscape::rs2lib::worldmap::MapZoneData, int const&, int const&, int const&, int const&, int, int,
                int const&, int const&, int, int>(const int& arg1, const int& arg2, const int& arg3, const int& arg4,
                                                  int&& arg5, int&& arg6, const int& arg7, const int& arg8, int&& arg9,
                                                  int&& arg10) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int* in_stack_00000028;
        int local_44;
        MapZoneData* local_40[2];

        auto arg1_00 = aligned_alloc(240, 8);
        if (arg1_00 == nullptr) {
            new (arg1) shared_ptr();
        } else {
            local_40[0] = placement_new<oldscape::rs2lib::worldmap::MapZoneData, int const&, int const&, int const&,
                                        int const&, int, int, int const&, int const&, int, int>(
                (void*)((long)arg1_00 + 32), arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, in_stack_00000028);
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

    // 0x1001fa810
    oldscape::rs2lib::worldmap::MapSquareData*
    placement_new<oldscape::rs2lib::worldmap::MapSquareData, int const&, int const&, int const&, int const&, int const&,
                  int const&>(void* arg1, const int& arg2, const int& arg3, const int& arg4, const int& arg5,
                              const int& arg6, const int& arg7) {
        new (arg1) oldscape::rs2lib::worldmap::MapSquareData(arg2, arg3, arg4, arg5, arg6, arg7);
        return arg1;
    }

    // 0x1001fabd0
    oldscape::rs2lib::worldmap::MapZoneData*
    placement_new<oldscape::rs2lib::worldmap::MapZoneData, int const&, int const&, int const&, int const&, int const&,
                  int const&, int const&, int const&, int const&, int const&>(
        void* arg1, const int& arg2, const int& arg3, const int& arg4, const int& arg5, const int& arg6,
        const int& arg7, const int& arg8, const int& arg9, const int& arg10, const int& arg11) {
        new (arg1)
            oldscape::rs2lib::worldmap::MapZoneData(arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
        return arg1;
    }

    // 0x1001fad70
    oldscape::rs2lib::worldmap::MapZoneData*
    placement_new<oldscape::rs2lib::worldmap::MapZoneData, int const&, int const&, int const&, int const&, int, int,
                  int const&, int const&, int, int>(void* arg1, const int& arg2, const int& arg3, const int& arg4,
                                                    const int& arg5, int&& arg6, int&& arg7, const int& arg8,
                                                    const int& arg9, int&& arg10, int&& arg11) {
        new (arg1)
            oldscape::rs2lib::worldmap::MapZoneData(arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
        return arg1;
    }

} // namespace jag

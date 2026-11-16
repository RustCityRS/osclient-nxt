// projects/osclient/clientnpc.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape {
    class ClientNpc : public ClientEntity // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ClientNpc();
        virtual auto GetTempModel(int arg1);
        virtual bool IsClientNPC();
        virtual bool Ready() const;
        virtual unsigned long HasAnyOverlays(int arg1, int arg2) const;
        unsigned long GetShortIDFromUID(int arg1);
        void SetHighlight(const HighlightChannelProperties* highlightChannelProperties);
        bool IsOpEnabled(int arg1) const;
        HighlightChannelProperties* GetHighlight();
        FixedPrimitiveBatchData<256ul>* GetHeadCustomisation();
        void GetHeadIconGraphics() const;
        void GetHeadIconIndices() const;
        void SetHeadIcon(int arg1, int arg2, int arg3);
        void MoveCode(int arg1, signed char arg2);
        void SetCreationCycle(int arg1);
        void Teleport(int arg1, int arg2, bool arg3);
        void ClearHeadIconCustomisation();
        void SetEnabledOpsBitMask(unsigned char arg1);
        void ClearHeadCustomisation();
        void SetHeadCustomisation(eastl::vector<int>&& arg1, Array<short>&& arg2, Array<short>&& arg3, bool arg4);
        void ClearBodyCustomisation();
        void SetBodyCustomisation(eastl::vector<int>&& arg1, Array<short>&& arg2, Array<short>&& arg3, bool arg4);
        void SetHeadIcons(const eastl::fixed_vector<int, 8ul>& arg1, const eastl::fixed_vector<int, 8ul>& arg2);
        auto GetDisplayName() const;
        ClientNpc(int arg1);
        int GetUID() const;
        int GetCreationCycle() const;
        int GetTypeIDFromUID(int arg1);

    private:
        uint8_t _unknown_960[80];
        int field_1040;
        int m_creationCycle;
        HighlightChannelProperties* m_pHighlight;
        uint8_t m_enabledOpsBitMask;
        uint8_t _unknown_1057[31];
    };

    // 0x1000133a0
    void ClientNpc::SetHighlight(const HighlightChannelProperties* highlightChannelProperties) {
        m_pHighlight = highlightChannelProperties;
    }

    // 0x100072dc0
    bool ClientNpc::IsOpEnabled(int arg1) const {
        bool bVar1 = true;
        if ((unsigned int)arg1 < 5) {
            bVar1 = (m_enabledOpsBitMask >> (arg1 & 31U) & 1) != 0;
        }
        return bVar1;
    }

    // 0x1000fc660
    HighlightChannelProperties* ClientNpc::GetHighlight() {
        return m_pHighlight;
    }

    // 0x100102c20
    FixedPrimitiveBatchData<256ul>* ClientNpc::GetHeadCustomisation() {
        return this + 1064;
    }

    // 0x100119c60
    void ClientNpc::SetCreationCycle(int arg1) {
        m_creationCycle = arg1;
    }

    // 0x10011a580
    void ClientNpc::SetEnabledOpsBitMask(unsigned char arg1) {
        m_enabledOpsBitMask = arg1;
    }

    // 0x10011a590
    void ClientNpc::ClearHeadCustomisation() {
        field_1064.reset(nullptr);
    }

    // 0x10011a660
    void ClientNpc::SetHeadCustomisation(eastl::vector<int>&& arg1, Array<short>&& arg2, Array<short>&& arg3,
                                         bool arg4) {
        ReturnValue local_28;

        bool local_19 = false;
        bool local_1a = arg4;
        bucket_make_unique<configdecoder::NPCTypeCustomisation, bool, eastl::vector<int>, Array<short>, Array<short>,
                           bool&>(&local_28, &local_19, arg1, arg2, arg3, &local_1a);
        field_1064 = local_28;
    }

    // 0x10011a6d0
    void ClientNpc::ClearBodyCustomisation() {
        field_1072.reset(nullptr);
    }

    // 0x10011a6f0
    void ClientNpc::SetBodyCustomisation(eastl::vector<int>&& arg1, Array<short>&& arg2, Array<short>&& arg3,
                                         bool arg4) {
        ReturnValue local_28;

        bool local_19 = true;
        bool local_1a = arg4;
        bucket_make_unique<configdecoder::NPCTypeCustomisation, bool, eastl::vector<int>, Array<short>, Array<short>,
                           bool&>(&local_28, &local_19, arg1, arg2, arg3, &local_1a);
        field_1072 = local_28;
    }

    // 0x100131dd0
    ClientNpc::~ClientNpc() {
        field_1080.~unique_ptr();
        field_1072.~unique_ptr();
        field_1064.~unique_ptr();
        field_1024.~shared_ptr();
        field_992.~basic_string();
    }

    // 0x100153280
    ClientNpc::ClientNpc(int arg1) {
        ___bzero(this, 992);
        new (this) ClientEntity();
        new (&field_992) eastl::string();
        new (&field_1024) shared_ptr();
        field_1040 = arg1;
        m_creationCycle = -1;
        m_pHighlight = nullptr;
        m_enabledOpsBitMask = 31;
        field_1064.unique_ptr<true, void>();
        field_1072.unique_ptr<true, void>();
        field_1080.unique_ptr<true, void>();
    }

    // 0x10016c860
    int ClientNpc::GetUID() const {
        auto piVar1 = field_1024.operator->();
        return *piVar1 * 65536 + field_1040;
    }

    // 0x10016c890
    int ClientNpc::GetCreationCycle() const {
        return m_creationCycle;
    }

    // 0x10016c8b0
    int ClientNpc::GetTypeIDFromUID(int arg1) {
        return arg1 >> 16;
    }

} // namespace jag::oldscape

namespace jag::oldscape::minimenu {
    // 0x100073b40
    char MinimenuComponent::WhereToGetIfType(const shared_ptr<rs2lib::IfType>& ifType) {
        long lVar2;

        char cVar3 = '\0';
        if (!ifType == nullptr) {
            lVar2 = ifType.operator->();
            cVar3 = (*(char*)(lVar2 + 24) == '\0') + '\x01';
        }
        return cVar3;
    }

    // 0x100073b80
    auto MinimenuComponent::lock(int arg1, int arg2) const {
        shared_ptr<dash3d::GroundDecor>* groundDecor;

        if ((expired() == '\0') || (field_16 != 2)) {
            result = lock();
        } else {
            groundDecor = (shared_ptr<dash3d::GroundDecor>*)rs2lib::IfType::Get(arg1, arg2);
            auto result(groundDecor);
        }
        return result;
    }

    // 0x100073be0
    MinimenuSubject* MinimenuSubject::operator=(MinimenuSubject&& minimenuSubject) {
        *this = minimenuSubject;
        uint64_t uVar1 = minimenuSubject.field_40;
        field_32 = minimenuSubject.field_32;
        field_40 = uVar1;
        field_48 = minimenuSubject.field_48;
        *field_56 = minimenuSubject.field_56;
        return this;
    }

    // 0x100073c20
    void MinimenuComponent::operator=(const shared_ptr<rs2lib::IfType>& ifType) {
        *this = ifType;
        field_16 = WhereToGetIfType(ifType);
    }

    // 0x100073c50
    auto MinimenuSubject::CreateHeldObjSubject(const eastl::string& str, const shared_ptr<rs2lib::IfType>& ifType,
                                               int arg3, int arg4) {
        auto result;
        CreateSubject(&result, str, 5, -1, arg3, arg4);
        (*((&result + 7))) = ifType;
        return result;
    }

    // 0x100073d70
    MinimenuSubject* MinimenuSubject::operator=(const MinimenuSubject& minimenuSubject) {
        *this = minimenuSubject;
        uint64_t uVar1 = minimenuSubject.field_40;
        field_32 = minimenuSubject.field_32;
        field_40 = uVar1;
        field_48 = minimenuSubject.field_48;
        *field_56 = minimenuSubject.field_56;
        return this;
    }

} // namespace jag::oldscape::minimenu

namespace jag::oldscape::highlight {
    // 0x100013480
    CoordGrid FindNextOccurrenceOfStoredHighlight(const rs2lib::CoordGrid& coordGrid1,
                                                  const rs2lib::CoordGrid& coordGrid2, bool arg3) {
        bool bVar1;
        bool cVar2;
        unsigned int uVar4;
        unsigned int uVar5;
        int iVar6;
        unsigned int uVar7;
        uint64_t* puVar8;
        uint8_t in_CL;
        uint64_t in_register_00000011;
        uint64_t extraout_RDX;
        uint64_t extraout_RDX_00;
        uint64_t extraout_RDX_01;
        uint64_t extraout_RDX_02;
        uint64_t extraout_RDX_03;
        uint64_t extraout_RDX_04;
        uint64_t uVar9;
        uint64_t extraout_RDX_05;
        bool bVar10;
        CoordGrid CVar11;
        uint8_t local_78[24];
        CoordGrid* local_58;
        int local_4c;
        int local_48;
        int local_44;
        unsigned int local_40;
        unsigned int local_3c;
        int local_38;
        int local_34;

        CoordZoneSource* coordZoneSource = (CoordZoneSource*)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg3);
        auto local_60 = Client::Instance();
        int iVar3 = local_60->IsMapBuildRegionMode();
        if ((iVar3 == 0) || (cVar2 = coordGrid2.InRegion(), cVar2)) {
            if (in_CL != 0) {
                coordGrid1 = local_60->BuildCoordFromWorldCoord(coordGrid2);
                uVar9 = extraout_RDX;
                goto LAB_1000136e3;
            }
        } else {
            local_58 = coordGrid1;
            local_4c = coordGrid2.GetMapSquareZ();
            local_48 = coordGrid2.GetZoneZ();
            iVar3 = coordZoneSource->GetX();
            uVar4 = coordZoneSource->GetMapSquareZ();
            uVar5 = coordZoneSource->GetZoneZ();
            uVar9 = extraout_RDX_00;
            local_38 = iVar3;
            if (iVar3 < 4) {
                uVar5 = (unsigned int)(in_CL ^ 1) + (uVar5 & 15);
                uVar4 = uVar4 & 15;
                do {
                    if (uVar4 < 13) {
                        do {
                            bVar10 = (int)uVar5 < 13;
                            local_34 = 8;
                            local_3c = uVar5;
                            if ((int)uVar5 < 13) {
                                do {
                                    puVar8 = (uint64_t*)local_60->GetMapBuildRegionZoneSource(local_38, uVar4, uVar5);
                                    local_78._0_8_ = *puVar8;
                                    local_78._8_8_ = puVar8[1];
                                    cVar2 = local_78->IsSet();
                                    bVar1 = true;
                                    uVar9 = extraout_RDX_01;
                                    if (((cVar2) &&
                                         (iVar3 = local_78->GetX(), uVar9 = extraout_RDX_02, iVar3 == local_4c)) &&
                                        (iVar3 = local_78->GetZ(), uVar9 = extraout_RDX_03, iVar3 == local_48)) {
                                        iVar3 = local_78->GetLevel();
                                        local_44 = iVar3;
                                        local_40 = coordGrid2.GetZoneTileX();
                                        iVar6 = coordGrid2.GetZoneTileZ();
                                        local_40 = util::RegionRotate::DX(local_40, iVar6, iVar3);
                                        iVar3 = coordGrid2.GetZoneTileX();
                                        iVar6 = coordGrid2.GetZoneTileZ();
                                        uVar7 = util::RegionRotate::DZ(iVar3, iVar6, local_44);
                                        uVar4 = uVar4 << 3 | local_40;
                                        uVar5 = uVar5 << 3 | uVar7;
                                        new (local_58) rs2lib::CoordGrid(local_38, uVar4, uVar5);
                                        bVar1 = false;
                                        uVar9 = extraout_RDX_04;
                                    }
                                    if (!bVar1) {
                                        local_34 = 1;
                                        uVar5 = local_3c;
                                        uVar7 = uVar4;
                                        if (bVar10)
                                            goto LAB_10001354d;
                                        goto LAB_100013579;
                                    }
                                    bVar10 = (int)uVar5 < 12;
                                    bVar1 = (int)uVar5 < 12;
                                    uVar5 = uVar5 + 1;
                                } while (bVar1);
                            }
                            uVar5 = local_3c;
                            uVar7 = uVar4;
                            if (bVar10)
                                goto LAB_10001354d;
                        LAB_100013579:
                            uVar4 = uVar7 + 1;
                            uVar5 = 0;
                        } while ((int)uVar7 < 12);
                    }
                    local_34 = 5;
                LAB_10001354d:
                    iVar3 = local_34;
                    if (local_34 != 5)
                        goto LAB_1000136d2;
                    local_38 = local_38 + 1;
                    uVar4 = 0;
                } while (local_38 != 4);
            }
            iVar3 = 2;
        LAB_1000136d2:
            coordGrid1 = local_58;
            if (iVar3 != 2)
                goto LAB_1000136e3;
        }
        new (coordGrid1) rs2lib::CoordGrid();
        uVar9 = extraout_RDX_05;
    LAB_1000136e3:
        CVar11._8_8_ = uVar9;
        CVar11._0_8_ = coordGrid1;
        return CVar11;
    }

    // 0x100013740
    unsigned long LowestNonNegativeNumberOrMinusOne(int arg1, int arg2) {
        unsigned int uVar1 = 4294967295;
        if (-1 < (arg1 & arg2)) {
            uVar1 = arg2;
        }
        if (-1 < arg1) {
            uVar1 = arg1;
        }
        unsigned long uVar2 = (unsigned long)uVar1;
        if ((-1 < arg1) && (-1 < arg2)) {
            uVar2 = eastl::min<jag::graphics::GraphicsQuality>(arg1, arg2);
        }
        return uVar2;
    }

    // 0x1000137e0
    int GetMapSquareIndex(const rs2lib::CoordGrid& coordGrid) {
        int iVar1 = coordGrid.GetMapSquareZ();
        return coordGrid.GetMapSquareX() + iVar1 * 100;
    }

} // namespace jag::oldscape::highlight

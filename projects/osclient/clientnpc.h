// projects/osclient/clientnpc.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape {
    class ClientNpc : public ClientEntity // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ClientNpc();
        virtual GetTempModel(int);
        virtual IsClientNPC();
        virtual bool Ready() const;
        virtual ulong HasAnyOverlays(int, int) const;
        uint GetShortIDFromUID(int);
        void SetHighlight(HighlightChannelProperties const*);
        bool IsOpEnabled(int) const;
        HighlightChannelProperties* GetHighlight();
        GetHeadCustomisation();
        void GetHeadIconGraphics() const;
        void GetHeadIconIndices() const;
        void SetHeadIcon(int, int, int);
        void MoveCode(int, signed char);
        void SetCreationCycle(int);
        void Teleport(int, int, bool);
        void ClearHeadIconCustomisation();
        void SetEnabledOpsBitMask(unsigned char);
        void ClearHeadCustomisation();
        void SetHeadCustomisation(eastl::vector<int, eastl::allocator>&&, Array<short, eastl::allocator>&&,
                                  Array<short, eastl::allocator>&&, bool);
        void ClearBodyCustomisation();
        void SetBodyCustomisation(eastl::vector<int, eastl::allocator>&&, Array<short, eastl::allocator>&&,
                                  Array<short, eastl::allocator>&&, bool);
        void SetHeadIcons(eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&,
                          eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&);
        GetDisplayName() const;
        ClientNpc(int);
        int GetUID() const;
        int GetCreationCycle() const;
        int GetTypeIDFromUID(int);

        // data members, from how the methods use this: 1088 bytes, the first 960 are ClientEntity
        char _unknown_960[80];
        int field_1040;                           // offset 1040
        int m_creationCycle;                      // offset 1044
        HighlightChannelProperties* m_pHighlight; // offset 1048
        byte m_enabledOpsBitMask;                 // offset 1056
        char _unknown_1057[31];
    };

    // 0x1000133a0, 16 bytes, inline, placed by class name and debug map
    // ClientNpc::SetHighlight(HighlightChannelProperties const*)
    void ClientNpc::SetHighlight(HighlightChannelProperties* param_1) {
        m_pHighlight = param_1;
    }

    // 0x100072dc0, 32 bytes, inline, placed by class name and debug map
    // ClientNpc::IsOpEnabled(int) const
    bool ClientNpc::IsOpEnabled(int param_1) {
        bool bVar1;

        bVar1 = true;
        if ((uint)param_1 < 5) {
            bVar1 = (m_enabledOpsBitMask >> (param_1 & 31U) & 1) != 0;
        }
        return bVar1;
    }

    // 0x1000fc660, 16 bytes, inline, placed by class name
    // ClientNpc::GetHighlight()
    HighlightChannelProperties* ClientNpc::GetHighlight() {
        return m_pHighlight;
    }

    // 0x100102c20, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ClientNpc::GetHeadCustomisation()
    /* render::FixedPrimitiveBatchData<256ul>::GetVertexCount() const */

    FixedPrimitiveBatchData<256ul>* render::FixedPrimitiveBatchData<256ul>::GetVertexCount() {
        return this + 1064;
    }

    // 0x100119c60, 16 bytes, inline, placed by class name
    // ClientNpc::SetCreationCycle(int)
    void ClientNpc::SetCreationCycle(int param_1) {
        m_creationCycle = param_1;
    }

    // 0x10011a580, 16 bytes, inline, placed by class name
    // ClientNpc::SetEnabledOpsBitMask(unsigned char)
    void ClientNpc::SetEnabledOpsBitMask(uchar param_1) {
        m_enabledOpsBitMask = param_1;
    }

    // 0x10011a590, 32 bytes, inline, placed by class name
    // ClientNpc::ClearHeadCustomisation()
    void ClientNpc::ClearHeadCustomisation() {
        (&field_1064, (NPCTypeCustomisation*)0)->reset();
    }

    // 0x10011a660, 96 bytes, inline, placed by class name
    // ClientNpc::SetHeadCustomisation(eastl::vector<int, eastl::allocator>&&, Array<short, eastl::allocator>&&, Array<short, eastl::allocator>&&, bool)
    void ClientNpc::SetHeadCustomisation(vector* param_1, Array* param_2, Array* param_3, bool param_4) {
        jag local_28[14];
        bool local_1a;
        bool local_19;

        local_19 = false;
        local_1a = param_4;
        bucket_make_unique<configdecoder::NPCTypeCustomisation, bool, eastl::vector<int, eastl::allocator>,
                           Array<short, eastl::allocator>, Array<short, eastl::allocator>, bool&>(
            local_28, &local_19, param_1, param_2, param_3, &local_1a);
        std::unique_ptr<configdecoder::NPCTypeCustomisation, BucketDeleter<configdecoder::NPCTypeCustomisation>>::
        operator=((unique_ptr<configdecoder::NPCTypeCustomisation,
                              BucketDeleter<configdecoder::NPCTypeCustomisation>>*)&field_1064,
                  (unique_ptr*)local_28);
        local_28->~unique_ptr();
    }

    // 0x10011a6d0, 32 bytes, inline, placed by class name
    // ClientNpc::ClearBodyCustomisation()
    void ClientNpc::ClearBodyCustomisation() {
        (&field_1072, (NPCTypeCustomisation*)0)->reset();
    }

    // 0x10011a6f0, 96 bytes, inline, placed by class name
    // ClientNpc::SetBodyCustomisation(eastl::vector<int, eastl::allocator>&&, Array<short, eastl::allocator>&&, Array<short, eastl::allocator>&&, bool)
    void ClientNpc::SetBodyCustomisation(vector* param_1, Array* param_2, Array* param_3, bool param_4) {
        jag local_28[14];
        bool local_1a;
        bool local_19;

        local_19 = true;
        local_1a = param_4;
        bucket_make_unique<configdecoder::NPCTypeCustomisation, bool, eastl::vector<int, eastl::allocator>,
                           Array<short, eastl::allocator>, Array<short, eastl::allocator>, bool&>(
            local_28, &local_19, param_1, param_2, param_3, &local_1a);
        std::unique_ptr<configdecoder::NPCTypeCustomisation, BucketDeleter<configdecoder::NPCTypeCustomisation>>::
        operator=((unique_ptr<configdecoder::NPCTypeCustomisation,
                              BucketDeleter<configdecoder::NPCTypeCustomisation>>*)&field_1072,
                  (unique_ptr*)local_28);
        local_28->~unique_ptr();
    }

    // 0x100124a90, 16 bytes, complete-object destructor, inline, placed by class name
    // ClientNpc::~ClientNpc(): jumps straight to the base-object destructor

    // 0x100124aa0, 32 bytes, deleting destructor, inline, placed by class name
    // ClientNpc::~ClientNpc()
    void ClientNpc::~ClientNpc() {
        ~ClientNpc(this);
        operator_delete(this);
    }

    // 0x100131dd0, 96 bytes, base-object destructor, inline, placed by class name
    // ClientNpc::~ClientNpc()
    void ClientNpc::~ClientNpc() {
        (&field_1080)->~unique_ptr();
        (&field_1072)->~unique_ptr();
        (&field_1064)->~unique_ptr();
        (&field_1024)->~shared_ptr();
        (&field_992)->~basic_string();
        ~ClientEntity();
    }

    // 0x100153270, 16 bytes, complete-object constructor, inline, placed by class name
    // ClientNpc::ClientNpc(int): jumps straight to the base-object constructor

    // 0x100153280, 192 bytes, base-object constructor, inline, placed by class name
    // ClientNpc::ClientNpc(int)
    void ClientNpc::ClientNpc(int param_1) {
        ___bzero();
        new (this) ClientEntity();
        field_0 = &PTR__ClientNpc_100ef41d8;
        new (&field_992) eastl::string();
        new (&field_1024, (_func_decltype_nullptr*)992) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_1040 = param_1;
        m_creationCycle = -1;
        m_pHighlight = (HighlightChannelProperties*)0;
        m_enabledOpsBitMask = 31;
        std::unique_ptr<configdecoder::NPCTypeCustomisation, BucketDeleter<configdecoder::NPCTypeCustomisation>>::
            unique_ptr<true, void>((unique_ptr<configdecoder::NPCTypeCustomisation,
                                               BucketDeleter<configdecoder::NPCTypeCustomisation>>*)&field_1064);
        std::unique_ptr<configdecoder::NPCTypeCustomisation, BucketDeleter<configdecoder::NPCTypeCustomisation>>::
            unique_ptr<true, void>((unique_ptr<configdecoder::NPCTypeCustomisation,
                                               BucketDeleter<configdecoder::NPCTypeCustomisation>>*)&field_1072);
        std::unique_ptr<configdecoder::NPCHeadIconCustomisation,
                        std::default_delete<configdecoder::NPCHeadIconCustomisation>>::unique_ptr<true,
                                                                                                  void>(
            (unique_ptr<configdecoder::NPCHeadIconCustomisation,
                        std::default_delete<configdecoder::NPCHeadIconCustomisation>>*)&field_1080);
    }

    // 0x10016c860, 48 bytes, inline, placed by class name
    // ClientNpc::GetUID() const
    int ClientNpc::GetUID() {
        int* piVar1;

        piVar1 = (int*)shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)&field_1024);
        return *piVar1 * 65536 + field_1040;
    }

    // 0x10016c890, 16 bytes, inline, placed by class name
    // ClientNpc::GetCreationCycle() const
    int ClientNpc::GetCreationCycle() {
        return m_creationCycle;
    }

    // 0x10016c8b0, 16 bytes, inline, placed by class name
    // ClientNpc::GetTypeIDFromUID(int)
    int ClientNpc::GetTypeIDFromUID(int param_1) {
        return param_1 >> 16;
    }

} // namespace jag::oldscape

namespace jag::oldscape::minimenu {
    // 0x100073670, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MinimenuSubject::MinimenuSubject(): jumps straight to the base-object constructor

    // 0x100073b40, 64 bytes, placed by debug map only (low confidence)
    // MinimenuComponent::WhereToGetIfType(shared_ptr<rs2lib::IfType> const&)
    char MinimenuComponent::WhereToGetIfType(shared_ptr* param_1) {
        long lVar2;
        char cVar3;

        cVar3 = '\0';
        if (!operator==(param_1, (_func_decltype_nullptr*)0)) {
            lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            cVar3 = (*(char*)(lVar2 + 24) == '\0') + '\x01';
        }
        return cVar3;
    }

    // 0x100073b80, 96 bytes, placed by debug map only (low confidence)
    // MinimenuComponent::lock(int, int) const
    MinimenuComponent* MinimenuComponent::lock(int param_1, int param_2) {
        char cVar1;
        shared_ptr* psVar2;
        int in_ECX;
        undefined4 in_register_00000034;

        cVar1 = (CONCAT44(in_register_00000034, param_1))->expired();
        if ((cVar1 == '\0') || (*(int*)((weak_ptr<dash3d::Wall>*)CONCAT44(in_register_00000034, param_1) + 16) != 2)) {
            weak_ptr<rs2lib::IfType>::lock();
        } else {
            psVar2 = (shared_ptr*)rs2lib::IfType::Get(param_2, in_ECX);
            new (this) shared_ptr<dash3d::Decor>(psVar2);
        }
        return this;
    }

    // 0x100073be0, 64 bytes, inline, placed by debug map only (low confidence)
    // MinimenuSubject::operator=(MinimenuSubject&&)
    /* MinimenuSubject::TEMPNAMEPLACEHOLDERVALUE(MinimenuSubject&&)
    */

    MinimenuSubject* MinimenuSubject::operator=(MinimenuSubject* param_1) {
        undefined8 uVar1;
        undefined4 uVar2;

        eastl::string::operator=((eastl::string*)this, (basic_string*)param_1);
        uVar2 = param_1->field_36;
        uVar1 = param_1->field_40;
        field_32 = param_1->field_32;
        field_36 = uVar2;
        field_40 = uVar1;
        uVar2 = param_1->field_52;
        field_48 = param_1->field_48;
        field_52 = uVar2;
        MinimenuComponent::operator=((MinimenuComponent*)&field_56, (MinimenuComponent*)&param_1->field_56);
        return this;
    }

    // 0x100073c20, 48 bytes, inline, placed by debug map only (low confidence)
    // MinimenuComponent::operator=(shared_ptr<rs2lib::IfType> const&)
    /* MinimenuComponent::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<rs2lib::IfType>
   const&) */

    void MinimenuComponent::operator=(shared_ptr* param_1) {
        weak_ptr<rs2lib::IfType>::operator=((weak_ptr<rs2lib::IfType>*)this, param_1);
        field_16 = WhereToGetIfType(param_1);
    }

    // 0x100073c50, 80 bytes, placed by debug map only (low confidence)
    // MinimenuSubject::CreateHeldObjSubject(eastl::string const&, shared_ptr<rs2lib::IfType> const&, int, int)
    MinimenuSubject* MinimenuSubject::CreateHeldObjSubject(basic_string* param_1, shared_ptr* param_2, int param_3,
                                                           int param_4) {
        CreateSubject(this, param_1, 5, 18446744073709551615, param_3, param_4);
        MinimenuComponent::operator=((MinimenuComponent*)&field_56, param_2);
        return this;
    }

    // 0x100073d00, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MinimenuSubject::MinimenuSubject(MinimenuSubject const&): jumps straight to the base-object constructor

    // 0x100073d70, 64 bytes, inline, placed by debug map only (low confidence)
    // MinimenuSubject::operator=(MinimenuSubject const&)
    /* MinimenuSubject::TEMPNAMEPLACEHOLDERVALUE(MinimenuSubject
   const&) */

    MinimenuSubject* MinimenuSubject::operator=(MinimenuSubject* param_1) {
        undefined8 uVar1;
        undefined4 uVar2;

        eastl::string::operator=((eastl::string*)this, (basic_string*)param_1);
        uVar2 = param_1->field_36;
        uVar1 = param_1->field_40;
        field_32 = param_1->field_32;
        field_36 = uVar2;
        field_40 = uVar1;
        uVar2 = param_1->field_52;
        field_48 = param_1->field_48;
        field_52 = uVar2;
        MinimenuComponent::operator=((MinimenuComponent*)&field_56, (MinimenuComponent*)&param_1->field_56);
        return this;
    }

} // namespace jag::oldscape::minimenu

namespace jag::oldscape::highlight {
    // 0x100013480, 640 bytes, placed by debug map only (low confidence)
    // FindNextOccurrenceOfStoredHighlight(rs2lib::CoordGrid const&, rs2lib::CoordGrid const&, bool)
    CoordGrid* FindNextOccurrenceOfStoredHighlight(CoordGrid* param_1, CoordGrid* param_2, bool param_3) {
        bool bVar1;
        char cVar2;
        int iVar3;
        uint uVar4;
        uint uVar5;
        int iVar6;
        uint uVar7;
        undefined8* puVar8;
        bool bVar9;
        undefined8 local_78[3];
        Client* local_60;
        int local_4c;
        int local_48;
        int local_44;
        uint local_40;
        uint local_3c;
        int local_38;
        int local_34;

        local_60 = (Client*)Client::Instance();
        iVar3 = local_60->IsMapBuildRegionMode();
        if ((iVar3 == 0) || (cVar2 = param_1->InRegion(), cVar2 != '\0')) {
            if (param_3) {
                BuildCoordFromWorldCoord(local_60);
                return (CoordGrid*)this;
            }
        } else {
            local_4c = param_1->GetMapSquareZ();
            local_48 = param_1->GetZoneZ();
            iVar3 = param_2->GetX();
            uVar4 = param_2->GetMapSquareZ();
            uVar5 = param_2->GetZoneZ();
            local_38 = iVar3;
            if (iVar3 < 4) {
                uVar5 = (uint)!param_3 + (uVar5 & 15);
                uVar4 = uVar4 & 15;
                do {
                    if (uVar4 < 13) {
                        do {
                            bVar9 = (int)uVar5 < 13;
                            local_34 = 8;
                            local_3c = uVar5;
                            if ((int)uVar5 < 13) {
                                do {
                                    puVar8 = (undefined8*)local_60->GetMapBuildRegionZoneSource(local_38, uVar4, uVar5);
                                    local_78[0] = *puVar8;
                                    local_78[1] = puVar8[1];
                                    cVar2 = local_78->IsSet();
                                    bVar1 = true;
                                    if (((cVar2 != '\0') && (iVar3 = local_78->GetX(), iVar3 == local_4c)) &&
                                        (iVar3 = local_78->GetZ(), iVar3 == local_48)) {
                                        iVar3 = local_78->GetLevel();
                                        local_44 = iVar3;
                                        local_40 = param_1->GetZoneTileX();
                                        iVar6 = param_1->GetZoneTileZ();
                                        local_40 = util::RegionRotate::DX(local_40, iVar6, iVar3);
                                        iVar3 = param_1->GetZoneTileX();
                                        iVar6 = param_1->GetZoneTileZ();
                                        uVar7 = util::RegionRotate::DZ(iVar3, iVar6, local_44);
                                        uVar4 = uVar4 << 3 | local_40;
                                        uVar5 = uVar5 << 3 | uVar7;
                                        new (this) rs2lib::CoordGrid(local_38, uVar4, uVar5);
                                        bVar1 = false;
                                    }
                                    if (!bVar1) {
                                        local_34 = 1;
                                        uVar5 = local_3c;
                                        uVar7 = uVar4;
                                        if (!bVar9)
                                            goto LAB_100013579;
                                        goto LAB_10001354d;
                                    }
                                    bVar9 = (int)uVar5 < 12;
                                    bVar1 = (int)uVar5 < 12;
                                    uVar5 = uVar5 + 1;
                                } while (bVar1);
                            }
                            uVar5 = local_3c;
                            uVar7 = uVar4;
                            if (bVar9)
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
            this = (highlight*)(CoordGrid*)this;
            if (iVar3 != 2) {
                return (CoordGrid*)this;
            }
        }
        new (this) rs2lib::CoordGrid();
        return (CoordGrid*)this;
    }

    // 0x100013740, 32 bytes, placed by debug map only (low confidence)
    // LowestNonNegativeNumberOrMinusOne(int, int)
    ulong LowestNonNegativeNumberOrMinusOne(int param_1, int param_2) {
        uint uVar1;
        ulong uVar2;

        uVar1 = 4294967295;
        if (-1 < (param_1 & param_2)) {
            uVar1 = param_2;
        }
        if (-1 < param_1) {
            uVar1 = param_1;
        }
        uVar2 = (ulong)uVar1;
        if ((-1 < param_1) && (-1 < param_2)) {
            uVar2 = eastl::min<jag::graphics::GraphicsQuality>();
        }
        return uVar2;
    }

    // 0x1000137e0, 48 bytes, inline, placed by debug map only (low confidence)
    // GetMapSquareIndex(rs2lib::CoordGrid const&)
    int GetMapSquareIndex(CoordGrid* param_1) {
        int iVar1;

        iVar1 = param_1->GetMapSquareZ();
        return param_1->GetMapSquareX() + iVar1 * 100;
    }

} // namespace jag::oldscape::highlight

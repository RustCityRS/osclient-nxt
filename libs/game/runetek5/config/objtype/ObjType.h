// libs/game/runetek5/config/objtype/ObjType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class ObjType {
    public:
        // virtual methods in vtable order
        virtual ~ObjType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual void PostDecode();
        virtual void Decode(PacketT<Array<unsigned char, eastl::allocator>>&);
        GetManAppearance() const;
        long GetCost() const;
        GetRecolourDest() const;
        GetAngle2D() const;
        GetStackable() const;
        GetStackModel(graphics::RT7Core*, AssetBuilder&, BuildRequest<graphics::Model, BuildModelMain>&, long long,
                      PlayerModel const*);
        HasRandomPosition() const;
        CastsShadows() const;
        GetName() const;
        GetOffset2D() const;
        uint GetCategory() const;
        uint GetCertTemplate() const;
        uint GetCertLink() const;
        uint GetShardTemplate() const;
        uint GetShardLink() const;
        uint GetLentTemplate() const;
        uint GetLentLink() const;
        uint GetBoughtTemplate() const;
        uint GetBoughtLink() const;
        IsMembers() const;
        void SetTeam(unsigned char);
        void SetOps(std::array<eastl::string, 6ul> const&);
        void SetIOps(std::array<eastl::string, 5ul> const&);
        void SetIsStockmarket(bool);
        void SetQuests(decltype(nullptr));
        void SetIsTradeable(bool);
        GetWomanAppearance() const;
        ObjType(BaseTemplateConfigTypeList<ObjType>*, int);
        void GetAppearance(bool, shared_ptr<ObjTypeCustomisation> const&);
        ObjType* GetStackSizeAlt(long long);
        GetBodyModel(graphics::RT7Core*, AssetBuilder&, BuildRequest<graphics::Model, BuildModelMain>&, bool,
                     shared_ptr<ObjTypeCustomisation> const&, unsigned short, shared_ptr<PlayerModel> const&);
        GetHeadModel(graphics::RT7Core*, AssetBuilder&, BuildRequest<graphics::Model, BuildModelMain>&, bool,
                     shared_ptr<ObjTypeCustomisation> const&, unsigned short, shared_ptr<PlayerModel> const&);
        GetModel(graphics::RT7Core*, AssetBuilder&, BuildRequest<graphics::Model, BuildModelMain>&, PlayerModel const*);
        void SetupDerivedObject(DerivedObjType, shared_ptr<ObjType> const&, shared_ptr<ObjType> const&, char const*);
        RemoveAutoDisabledParams(ConfigProvider const&);
        GetRematerialDest() const;
        GetZoom2D() const;
        static /* 8 bytes */ m_lastType;

        // data members, from how the methods use this: 27048 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        BaseTemplateConfigTypeList* field_24; // offset 24
        int field_32;                         // offset 32
        char _unknown_36[4];
        shared_ptr field_40; // offset 40
        char _unknown_56[448];
        undefined1 m_members; // offset 504
        char _unknown_505[79];
        undefined1 m_stackable;         // offset 584
        undefined1 field_585;           // offset 585
        undefined1 m_hasRandomPosition; // offset 586
        char _unknown_587[5];
        long m_cost; // offset 592
        char _unknown_600[48];
        uchar m_team;         // offset 648
        bool m_isStockmarket; // offset 649
        char _unknown_650[2];
        undefined4 field_652; // offset 652
        bool m_isTradeable;   // offset 656
        undefined1 field_657; // offset 657
        undefined1 field_658; // offset 658
        undefined1 field_659; // offset 659
        undefined4 field_660; // offset 660
        ushort field_664;     // offset 664
        undefined1 field_666; // offset 666
        char _unknown_667[1];
        undefined4 field_668; // offset 668
        char _unknown_672[168];
        short field_840;      // offset 840
        short field_842;      // offset 842
        undefined1 field_844; // offset 844
        char _unknown_845[15];
        undefined1 field_860; // offset 860
        char _unknown_861[1];
        undefined2 m_zoom2D; // offset 862
        char _unknown_864[20];
        undefined1 field_884; // offset 884
        undefined1 field_885; // offset 885
        undefined1 field_886; // offset 886
        char _unknown_887[65];
        ushort field_952;     // offset 952
        ushort field_954;     // offset 954
        ushort field_956;     // offset 956
        ushort field_958;     // offset 958
        ushort field_960;     // offset 960
        ushort field_962;     // offset 962
        ushort field_964;     // offset 964
        ushort field_966;     // offset 966
        undefined2 field_968; // offset 968
        char _unknown_970[26078];
    };

    // 0x1003ed220, 16 bytes, inline, placed by class name and debug map
    // ObjType::GetStackable() const
    undefined1 ObjType::GetStackable() {
        return m_stackable;
    }

    // 0x1003edde0, 80 bytes, inline, placed by class name and debug map
    // ObjType::GetStackModel(graphics::RT7Core*, AssetBuilder&, BuildRequest<graphics::Model, BuildModelMain>&, long long, PlayerModel const*)
    undefined* ObjType::GetStackModel(RT7Core* param_1, AssetBuilder* param_2, BuildRequest* param_3, longlong param_4,
                                      PlayerModel* param_5) {
        ObjType* this_00;
        undefined* puVar1;

        this_00 = (ObjType*)GetStackSizeAlt(this, param_4);
        if (this_00 == (ObjType*)0) {
            puVar1 = DataStatus::MISSING;
        } else {
            puVar1 = (undefined*)GetModel(this_00, param_1, param_2, param_3, param_5);
        }
        return puVar1;
    }

    // 0x1003ee800, 16 bytes, inline, placed by class name and debug map
    // ObjType::HasRandomPosition() const
    undefined1 ObjType::HasRandomPosition() {
        return m_hasRandomPosition;
    }

    // 0x1003ef060, 16 bytes, inline, placed by class name and debug map
    // ObjType::CastsShadows() const
    undefined1 ObjType::CastsShadows() {
        return field_585;
    }

    // 0x1003efcf0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ObjType::GetName() const
    /* Mouse::GetScaledMousePosition() const */

    undefined1* Mouse::GetScaledMousePosition() {
        return &field_408;
    }

    // 0x1004bc0f0, 32 bytes, inline, placed by class name
    // ObjType::GetCategory() const
    uint ObjType::GetCategory() {
        uint uVar1;

        uVar1 = 4294967295;
        if (field_664 != 65535) {
            uVar1 = (uint)field_664;
        }
        return uVar1;
    }

    // 0x1004f35b0, 32 bytes, inline, placed by class name
    // ObjType::GetCertTemplate() const
    uint ObjType::GetCertTemplate() {
        uint uVar1;

        uVar1 = 4294967295;
        if (field_954 != 65535) {
            uVar1 = (uint)field_954;
        }
        return uVar1;
    }

    // 0x1004f3600, 32 bytes, inline, placed by class name
    // ObjType::GetCertLink() const
    uint ObjType::GetCertLink() {
        uint uVar1;

        uVar1 = 4294967295;
        if (field_952 != 65535) {
            uVar1 = (uint)field_952;
        }
        return uVar1;
    }

    // 0x1004f3620, 32 bytes, inline, placed by class name
    // ObjType::GetShardTemplate() const
    uint ObjType::GetShardTemplate() {
        uint uVar1;

        uVar1 = 4294967295;
        if (field_966 != 65535) {
            uVar1 = (uint)field_966;
        }
        return uVar1;
    }

    // 0x1004f3640, 32 bytes, inline, placed by class name
    // ObjType::GetShardLink() const
    uint ObjType::GetShardLink() {
        uint uVar1;

        uVar1 = 4294967295;
        if (field_964 != 65535) {
            uVar1 = (uint)field_964;
        }
        return uVar1;
    }

    // 0x1004f3670, 32 bytes, inline, placed by class name
    // ObjType::GetLentTemplate() const
    uint ObjType::GetLentTemplate() {
        uint uVar1;

        uVar1 = 4294967295;
        if (field_958 != 65535) {
            uVar1 = (uint)field_958;
        }
        return uVar1;
    }

    // 0x1004f3690, 32 bytes, inline, placed by class name
    // ObjType::GetLentLink() const
    uint ObjType::GetLentLink() {
        uint uVar1;

        uVar1 = 4294967295;
        if (field_956 != 65535) {
            uVar1 = (uint)field_956;
        }
        return uVar1;
    }

    // 0x1004f36b0, 32 bytes, inline, placed by class name
    // ObjType::GetBoughtTemplate() const
    uint ObjType::GetBoughtTemplate() {
        uint uVar1;

        uVar1 = 4294967295;
        if (field_962 != 65535) {
            uVar1 = (uint)field_962;
        }
        return uVar1;
    }

    // 0x1004f36d0, 32 bytes, inline, placed by class name
    // ObjType::GetBoughtLink() const
    uint ObjType::GetBoughtLink() {
        uint uVar1;

        uVar1 = 4294967295;
        if (field_960 != 65535) {
            uVar1 = (uint)field_960;
        }
        return uVar1;
    }

    // 0x1004f36f0, 16 bytes, inline, placed by class name
    // ObjType::IsMembers() const
    undefined1 ObjType::IsMembers() {
        return m_members;
    }

    // 0x1004f3700, 16 bytes, inline, placed by class name
    // ObjType::SetTeam(unsigned char)
    void ObjType::SetTeam(uchar param_1) {
        m_team = param_1;
    }

    // 0x1004f3710, 16 bytes, inline, placed by class name
    // ObjType::SetOps(std::array<eastl::string, 6ul> const&)
    /* ObjType::SetOps(std::array<eastl::string, 6ul> const&)
    */

    void ObjType::SetOps(array* param_1) {
        std::array<eastl::string, 6ul>::operator=((array<eastl::string, 6ul>*)&field_56, param_1);
    }

    // 0x1004f3720, 32 bytes, inline, placed by class name
    // ObjType::SetIOps(std::array<eastl::string, 5ul> const&)
    /* ObjType::SetIOps(std::array<eastl::string, 5ul> const&)
    */

    void ObjType::SetIOps(array* param_1) {
        std::array<eastl::string, 5ul>::operator=((array<eastl::string, 5ul>*)&field_248, param_1);
    }

    // 0x1004f3740, 16 bytes, inline, placed by class name
    // ObjType::SetIsStockmarket(bool)
    void ObjType::SetIsStockmarket(bool param_1) {
        m_isStockmarket = param_1;
    }

    // 0x1004f3750, 32 bytes, inline, placed by class name
    // ObjType::SetQuests(decltype(nullptr))
    void ObjType::SetQuests(_func_decltype_nullptr* param_1) {
        ((param_1 + 560))->set_max_size(0, 0);
    }

    // 0x1004f3770, 16 bytes, inline, placed by class name
    // ObjType::SetIsTradeable(bool)
    void ObjType::SetIsTradeable(bool param_1) {
        m_isTradeable = param_1;
    }

    // 0x1004f8e60, 16 bytes, complete-object destructor, inline, placed by class name
    // ObjType::~ObjType(): jumps straight to the base-object destructor

    // 0x1004f8e70, 256 bytes, base-object destructor, inline, placed by class name
    // ObjType::~ObjType()
    void ObjType::~ObjType() {
        field_0 = &PTR__ObjType_100f03078;
        (&field_976)->~basic_string();
        (&field_816)->~Array();
        (&field_792)->~Array();
        (&field_768)->~Array();
        (&field_744)->~Array();
        (&field_720)->~Array();
        (&field_696)->~Array();
        (&field_672)->~Array();
        (&field_624)->~Array();
        (&field_600)->~Array();
        (&field_560)->~Array();
        (&field_536)->~Array();
        (&field_512)->~Array();
        (&field_472)->~basic_string();
        (&field_440)->~basic_string();
        (&field_408)->~basic_string();
        (&field_248)->~array();
        (&field_56)->~array();
        ~ConfigType();
    }

    // 0x10050a030, 16 bytes, inline, placed by class name
    // ObjType::GetRematerialDest() const
    undefined1* ObjType::GetRematerialDest() {
        return &field_792;
    }

    // 0x10050a0a0, 32 bytes, deleting destructor, inline, placed by class name
    // ObjType::~ObjType()
    void ObjType::~ObjType() {
        ~ObjType(this);
        operator_delete(this);
    }

    // 0x10050a0c0, 32 bytes, inline, placed by class name
    // ObjType::Decode(PacketT<Array<unsigned char, eastl::allocator> >&)
    void ObjType::Decode(PacketT* param_1) {
        m_isTradeable = true;
        Decode(param_1);
    }

    // 0x10053a0b0, 16 bytes, inline, placed by class name
    // ObjType::GetZoom2D() const
    undefined2 ObjType::GetZoom2D() {
        return m_zoom2D;
    }

} // namespace jag::game

namespace jag::math {
    // 0x1003ee810, 2128 bytes, inline, placed by debug map only (low confidence)
    // Matrix44T<float> operator*<float>(Matrix33T<float> const&, Matrix44T<float> const&)
    /* Matrix44T<float> TEMPNAMEPLACEHOLDERVALUE(Matrix33T<float>
   const&, Matrix44T<float> const&) */

    Matrix44T* operator*(Matrix44T* __return_storage_ptr__, math* this, Matrix33T* param_1, Matrix44T* param_2) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        float fVar15;
        float fVar16;
        float fVar17;
        float fVar18;
        float fVar19;
        float fVar20;
        float fVar21;
        float fVar22;
        float fVar23;
        float fVar24;
        float fVar25;
        float fVar26;
        float fVar27;
        float fVar28;
        float fVar29;
        float fVar30;
        float fVar31;
        float fVar32;
        float fVar33;
        float fVar34;
        float fVar35;
        float fVar36;
        float fVar37;
        float fVar38;
        float fVar39;
        float fVar40;
        float fVar41;
        float fVar42;
        float fVar43;
        float fVar44;
        float fVar45;
        float fVar46;
        float fVar47;
        float fVar48;
        float fVar49;
        float fVar50;
        float fVar51;
        float fVar52;
        float fVar53;
        float fVar54;
        float fVar55;
        float fVar56;
        float fVar57;
        float fVar58;
        float fVar59;
        float fVar60;
        float fVar61;
        float fVar62;
        float fVar63;
        float fVar64;
        float fVar65;
        float fVar66;
        float fVar67;
        float fVar68;
        float fVar69;
        float fVar70;
        float fVar71;
        float fVar72;
        float fVar73;
        float fVar74;
        float fVar75;
        float* pfVar76;
        long lVar77;

        pfVar76 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)this, 0);
        fVar1 = *pfVar76;
        pfVar76 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 0);
        fVar2 = *pfVar76;
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)this, 0);
        fVar3 = *(float*)(lVar77 + 4);
        pfVar76 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 1);
        fVar4 = *pfVar76;
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)this, 0);
        fVar5 = *(float*)(lVar77 + 8);
        pfVar76 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 2);
        fVar6 = *pfVar76;
        pfVar76 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)this, 0);
        fVar7 = *pfVar76;
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 0);
        fVar8 = *(float*)(lVar77 + 4);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)this, 0);
        fVar9 = *(float*)(lVar77 + 4);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 1);
        fVar10 = *(float*)(lVar77 + 4);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)this, 0);
        fVar11 = *(float*)(lVar77 + 8);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 2);
        fVar12 = *(float*)(lVar77 + 4);
        pfVar76 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)this, 0);
        fVar13 = *pfVar76;
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 0);
        fVar14 = *(float*)(lVar77 + 8);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)this, 0);
        fVar15 = *(float*)(lVar77 + 4);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 1);
        fVar16 = *(float*)(lVar77 + 8);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)this, 0);
        fVar17 = *(float*)(lVar77 + 8);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 2);
        fVar18 = *(float*)(lVar77 + 8);
        pfVar76 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)this, 0);
        fVar19 = *pfVar76;
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 0);
        fVar20 = *(float*)(lVar77 + 12);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)this, 0);
        fVar21 = *(float*)(lVar77 + 4);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 1);
        fVar22 = *(float*)(lVar77 + 12);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)this, 0);
        fVar23 = *(float*)(lVar77 + 8);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 2);
        fVar24 = *(float*)(lVar77 + 12);
        pfVar76 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)this, 1);
        fVar25 = *pfVar76;
        pfVar76 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 0);
        fVar26 = *pfVar76;
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)this, 1);
        fVar27 = *(float*)(lVar77 + 4);
        pfVar76 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 1);
        fVar28 = *pfVar76;
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)this, 1);
        fVar29 = *(float*)(lVar77 + 8);
        pfVar76 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 2);
        fVar30 = *pfVar76;
        pfVar76 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)this, 1);
        fVar31 = *pfVar76;
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 0);
        fVar32 = *(float*)(lVar77 + 4);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)this, 1);
        fVar33 = *(float*)(lVar77 + 4);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 1);
        fVar34 = *(float*)(lVar77 + 4);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)this, 1);
        fVar35 = *(float*)(lVar77 + 8);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 2);
        fVar36 = *(float*)(lVar77 + 4);
        pfVar76 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)this, 1);
        fVar37 = *pfVar76;
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 0);
        fVar38 = *(float*)(lVar77 + 8);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)this, 1);
        fVar39 = *(float*)(lVar77 + 4);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 1);
        fVar40 = *(float*)(lVar77 + 8);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)this, 1);
        fVar41 = *(float*)(lVar77 + 8);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 2);
        fVar42 = *(float*)(lVar77 + 8);
        pfVar76 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)this, 1);
        fVar43 = *pfVar76;
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 0);
        fVar44 = *(float*)(lVar77 + 12);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)this, 1);
        fVar45 = *(float*)(lVar77 + 4);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 1);
        fVar46 = *(float*)(lVar77 + 12);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)this, 1);
        fVar47 = *(float*)(lVar77 + 8);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 2);
        fVar48 = *(float*)(lVar77 + 12);
        pfVar76 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)this, 2);
        fVar49 = *pfVar76;
        pfVar76 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 0);
        fVar50 = *pfVar76;
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)this, 2);
        fVar51 = *(float*)(lVar77 + 4);
        pfVar76 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 1);
        fVar52 = *pfVar76;
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)this, 2);
        fVar53 = *(float*)(lVar77 + 8);
        pfVar76 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 2);
        fVar54 = *pfVar76;
        pfVar76 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)this, 2);
        fVar55 = *pfVar76;
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 0);
        fVar56 = *(float*)(lVar77 + 4);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)this, 2);
        fVar57 = *(float*)(lVar77 + 4);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 1);
        fVar58 = *(float*)(lVar77 + 4);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)this, 2);
        fVar59 = *(float*)(lVar77 + 8);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 2);
        fVar60 = *(float*)(lVar77 + 4);
        pfVar76 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)this, 2);
        fVar61 = *pfVar76;
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 0);
        fVar62 = *(float*)(lVar77 + 8);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)this, 2);
        fVar63 = *(float*)(lVar77 + 4);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 1);
        fVar64 = *(float*)(lVar77 + 8);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)this, 2);
        fVar65 = *(float*)(lVar77 + 8);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 2);
        fVar66 = *(float*)(lVar77 + 8);
        pfVar76 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)this, 2);
        fVar67 = *pfVar76;
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 0);
        fVar68 = *(float*)(lVar77 + 12);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)this, 2);
        fVar69 = *(float*)(lVar77 + 4);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 1);
        fVar70 = *(float*)(lVar77 + 12);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)this, 2);
        fVar71 = *(float*)(lVar77 + 8);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 2);
        fVar72 = *(float*)(lVar77 + 12);
        pfVar76 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 3);
        fVar73 = *pfVar76;
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 3);
        fVar74 = *(float*)(lVar77 + 4);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 3);
        fVar75 = *(float*)(lVar77 + 8);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 3);
        new (__return_storage_ptr__) Matrix44T<float>(
            fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2, fVar11 * fVar12 + fVar9 * fVar10 + fVar7 * fVar8,
            fVar17 * fVar18 + fVar15 * fVar16 + fVar13 * fVar14, fVar23 * fVar24 + fVar21 * fVar22 + fVar19 * fVar20,
            fVar29 * fVar30 + fVar27 * fVar28 + fVar25 * fVar26, fVar35 * fVar36 + fVar33 * fVar34 + fVar31 * fVar32,
            fVar41 * fVar42 + fVar39 * fVar40 + fVar37 * fVar38, fVar47 * fVar48 + fVar45 * fVar46 + fVar43 * fVar44,
            fVar53 * fVar54 + fVar51 * fVar52 + fVar49 * fVar50, fVar59 * fVar60 + fVar57 * fVar58 + fVar55 * fVar56,
            fVar65 * fVar66 + fVar63 * fVar64 + fVar61 * fVar62, fVar71 * fVar72 + fVar69 * fVar70 + fVar67 * fVar68,
            fVar73, fVar74, fVar75, *(float*)(lVar77 + 12));
        return __return_storage_ptr__;
    }

} // namespace jag::math

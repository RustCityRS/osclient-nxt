// libs/game/runetek5/config/objtype/ObjType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class ObjType {
    public:
        // virtual methods in vtable order
        virtual ~ObjType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        virtual void Decode(PacketT<Array<unsigned char>>& arg1);
        uint8_t* GetManAppearance() const;
        long GetCost() const;
        uint8_t* GetRecolourDest() const;
        uint8_t* GetAngle2D() const;
        uint8_t GetStackable() const;
        uint8_t* GetStackModel(graphics::RT7Core* rt7Core, AssetBuilder& assetBuilder,
                               BuildRequest<graphics::Model, BuildModelMain>& buildRequest, long long arg4,
                               const PlayerModel* playerModel);
        bool HasRandomPosition() const;
        uint8_t CastsShadows() const;
        uint8_t* GetName() const;
        uint8_t* GetOffset2D() const;
        unsigned int GetCategory() const;
        unsigned int GetCertTemplate() const;
        unsigned int GetCertLink() const;
        unsigned int GetShardTemplate() const;
        unsigned int GetShardLink() const;
        unsigned int GetLentTemplate() const;
        unsigned int GetLentLink() const;
        unsigned int GetBoughtTemplate() const;
        unsigned int GetBoughtLink() const;
        bool IsMembers() const;
        void SetTeam(unsigned char arg1);
        void SetOps(const std::array<eastl::string, 6ul>& strs);
        void SetIOps(const std::array<eastl::string, 5ul>& strs);
        void SetIsStockmarket(bool arg1);
        void SetQuests(decltype(nullptr) arg1);
        void SetIsTradeable(bool arg1);
        uint8_t* GetWomanAppearance() const;
        ObjType(BaseTemplateConfigTypeList<ObjType>* baseTemplateConfigTypeList, int arg2);
        void GetAppearance(bool arg1, const shared_ptr<ObjTypeCustomisation>& objTypeCustomisation);
        ObjType* GetStackSizeAlt(long long arg1);
        uint8_t* GetBodyModel(graphics::RT7Core* rt7Core, AssetBuilder& assetBuilder,
                              BuildRequest<graphics::Model, BuildModelMain>& buildRequest, bool arg4,
                              const shared_ptr<ObjTypeCustomisation>& objTypeCustomisation, unsigned short arg6,
                              const shared_ptr<PlayerModel>& playerModel);
        uint8_t* GetHeadModel(graphics::RT7Core* rt7Core, AssetBuilder& assetBuilder,
                              BuildRequest<graphics::Model, BuildModelMain>& buildRequest, bool arg4,
                              const shared_ptr<ObjTypeCustomisation>& objTypeCustomisation, unsigned short arg6,
                              const shared_ptr<PlayerModel>& playerModel);
        uint8_t* GetModel(graphics::RT7Core* rt7Core, AssetBuilder& assetBuilder,
                          BuildRequest<graphics::Model, BuildModelMain>& buildRequest, const PlayerModel* playerModel);
        void SetupDerivedObject(DerivedObjType derivedObjType, const shared_ptr<ObjType>& objType1,
                                const shared_ptr<ObjType>& objType2, const char* str);
        uint8_t* RemoveAutoDisabledParams(const ConfigProvider& configProvider);
        uint8_t* GetRematerialDest() const;
        uint16_t GetZoom2D() const;
        static int64_t m_lastType;

    private:
        uint8_t _unknown_8[16];
        BaseTemplateConfigTypeList<ObjType>* field_24;
        int field_32;
        uint8_t _unknown_36[4];
        shared_ptr field_40;
        uint8_t _unknown_56[448];
        uint8_t m_members;
        uint8_t _unknown_505[79];
        uint8_t m_stackable;
        uint8_t field_585;
        uint8_t m_hasRandomPosition;
        uint8_t _unknown_587[5];
        long m_cost;
        uint8_t _unknown_600[48];
        unsigned char m_team;
        bool m_isStockmarket;
        uint8_t _unknown_650[2];
        uint32_t field_652;
        bool m_isTradeable;
        uint8_t field_657;
        uint8_t field_658;
        uint8_t field_659;
        uint32_t field_660;
        unsigned short field_664;
        uint8_t field_666;
        uint8_t _unknown_667[1];
        uint32_t field_668;
        uint8_t _unknown_672[168];
        short field_840;
        short field_842;
        uint8_t field_844;
        uint8_t _unknown_845[15];
        uint8_t field_860;
        uint8_t _unknown_861[1];
        uint16_t m_zoom2D;
        uint8_t _unknown_864[20];
        uint8_t field_884;
        uint8_t field_885;
        uint8_t field_886;
        uint8_t _unknown_887[65];
        unsigned short field_952;
        unsigned short field_954;
        unsigned short field_956;
        unsigned short field_958;
        unsigned short field_960;
        unsigned short field_962;
        unsigned short field_964;
        unsigned short field_966;
        uint16_t field_968;
        uint8_t _unknown_970[26078];
    };

    // 0x1003ed220
    uint8_t ObjType::GetStackable() const {
        return m_stackable;
    }

    // 0x1003edde0
    uint8_t* ObjType::GetStackModel(graphics::RT7Core* rt7Core, AssetBuilder& assetBuilder,
                                    BuildRequest<graphics::Model, BuildModelMain>& buildRequest, long long arg4,
                                    const PlayerModel* playerModel) {
        uint8_t* puVar1;

        auto this_00 = GetStackSizeAlt(arg4);
        if (this_00 == nullptr) {
            puVar1 = DataStatus::MISSING;
        } else {
            puVar1 = (uint8_t*)GetModel(this_00, rt7Core, assetBuilder, buildRequest, playerModel);
        }
        return puVar1;
    }

    // 0x1003ee800
    bool ObjType::HasRandomPosition() const {
        return m_hasRandomPosition;
    }

    // 0x1003ef060
    uint8_t ObjType::CastsShadows() const {
        return field_585;
    }

    // 0x1003efcf0
    uint8_t* ObjType::GetName() const {
        return &field_408;
    }

    // 0x1004bc0f0
    unsigned int ObjType::GetCategory() const {
        unsigned int uVar1 = 4294967295;
        if (field_664 != 65535) {
            uVar1 = (unsigned int)field_664;
        }
        return uVar1;
    }

    // 0x1004f35b0
    unsigned int ObjType::GetCertTemplate() const {
        unsigned int uVar1 = 4294967295;
        if (field_954 != 65535) {
            uVar1 = (unsigned int)field_954;
        }
        return uVar1;
    }

    // 0x1004f3600
    unsigned int ObjType::GetCertLink() const {
        unsigned int uVar1 = 4294967295;
        if (field_952 != 65535) {
            uVar1 = (unsigned int)field_952;
        }
        return uVar1;
    }

    // 0x1004f3620
    unsigned int ObjType::GetShardTemplate() const {
        unsigned int uVar1 = 4294967295;
        if (field_966 != 65535) {
            uVar1 = (unsigned int)field_966;
        }
        return uVar1;
    }

    // 0x1004f3640
    unsigned int ObjType::GetShardLink() const {
        unsigned int uVar1 = 4294967295;
        if (field_964 != 65535) {
            uVar1 = (unsigned int)field_964;
        }
        return uVar1;
    }

    // 0x1004f3670
    unsigned int ObjType::GetLentTemplate() const {
        unsigned int uVar1 = 4294967295;
        if (field_958 != 65535) {
            uVar1 = (unsigned int)field_958;
        }
        return uVar1;
    }

    // 0x1004f3690
    unsigned int ObjType::GetLentLink() const {
        unsigned int uVar1 = 4294967295;
        if (field_956 != 65535) {
            uVar1 = (unsigned int)field_956;
        }
        return uVar1;
    }

    // 0x1004f36b0
    unsigned int ObjType::GetBoughtTemplate() const {
        unsigned int uVar1 = 4294967295;
        if (field_962 != 65535) {
            uVar1 = (unsigned int)field_962;
        }
        return uVar1;
    }

    // 0x1004f36d0
    unsigned int ObjType::GetBoughtLink() const {
        unsigned int uVar1 = 4294967295;
        if (field_960 != 65535) {
            uVar1 = (unsigned int)field_960;
        }
        return uVar1;
    }

    // 0x1004f36f0
    bool ObjType::IsMembers() const {
        return m_members;
    }

    // 0x1004f3700
    void ObjType::SetTeam(unsigned char arg1) {
        m_team = arg1;
    }

    // 0x1004f3710
    void ObjType::SetOps(const std::array<eastl::string, 6ul>& strs) {
        field_56 = strs;
    }

    // 0x1004f3720
    void ObjType::SetIOps(const std::array<eastl::string, 5ul>& strs) {
        field_248 = strs;
    }

    // 0x1004f3740
    void ObjType::SetIsStockmarket(bool arg1) {
        m_isStockmarket = arg1;
    }

    // 0x1004f3750
    void ObjType::SetQuests(decltype(nullptr) arg1) {
        ((Array<int>*)((long)arg1 + 560))->set_max_size(0, 0);
    }

    // 0x1004f3770
    void ObjType::SetIsTradeable(bool arg1) {
        m_isTradeable = arg1;
    }

    // 0x1004f8e70
    ObjType::~ObjType() {
        field_976.~basic_string();
        field_816.~Array();
        field_792.~Array();
        field_768.~Array();
        field_744.~Array();
        field_720.~Array();
        field_696.~Array();
        field_672.~Array();
        field_624.~Array();
        field_600.~Array();
        field_560.~Array();
        field_536.~Array();
        field_512.~Array();
        field_472.~basic_string();
        field_440.~basic_string();
        field_408.~basic_string();
        field_248.~array();
        field_56.~array();
    }

    // 0x10050a030
    uint8_t* ObjType::GetRematerialDest() const {
        return &field_792;
    }

    // 0x10050a0c0
    void ObjType::Decode(PacketT<Array<unsigned char>>& arg1) {
        m_isTradeable = true;
        Decode(arg1);
    }

    // 0x10053a0b0
    uint16_t ObjType::GetZoom2D() const {
        return m_zoom2D;
    }

} // namespace jag::game

namespace jag::math {
    // 0x1003ee810
    Matrix44T<float> operator* <float>(const Matrix33T<float>& matrix33, const Matrix44T<float>& matrix44) {
        Matrix44T<float>* in_RDX;

        float* pfVar73 = &matrix44[0];
        float fVar1 = *pfVar73;
        pfVar73 = (float*)(*in_RDX)[0];
        float fVar2 = *pfVar73;
        long lVar74 = matrix44[0];
        float fVar3 = *(float*)(lVar74 + 4);
        pfVar73 = (float*)(*in_RDX)[1];
        float fVar4 = *pfVar73;
        lVar74 = matrix44[0];
        float fVar5 = *(float*)(lVar74 + 8);
        pfVar73 = (float*)(*in_RDX)[2];
        float fVar6 = *pfVar73;
        pfVar73 = &matrix44[0];
        float fVar7 = *pfVar73;
        lVar74 = (*in_RDX)[0];
        float fVar8 = *(float*)(lVar74 + 4);
        lVar74 = matrix44[0];
        float fVar9 = *(float*)(lVar74 + 4);
        lVar74 = (*in_RDX)[1];
        float fVar10 = *(float*)(lVar74 + 4);
        lVar74 = matrix44[0];
        float fVar11 = *(float*)(lVar74 + 8);
        lVar74 = (*in_RDX)[2];
        float fVar12 = *(float*)(lVar74 + 4);
        pfVar73 = &matrix44[0];
        float fVar13 = *pfVar73;
        lVar74 = (*in_RDX)[0];
        float fVar14 = *(float*)(lVar74 + 8);
        lVar74 = matrix44[0];
        float fVar15 = *(float*)(lVar74 + 4);
        lVar74 = (*in_RDX)[1];
        float fVar16 = *(float*)(lVar74 + 8);
        lVar74 = matrix44[0];
        float fVar17 = *(float*)(lVar74 + 8);
        lVar74 = (*in_RDX)[2];
        float fVar18 = *(float*)(lVar74 + 8);
        pfVar73 = &matrix44[0];
        float fVar19 = *pfVar73;
        lVar74 = (*in_RDX)[0];
        float fVar20 = *(float*)(lVar74 + 12);
        lVar74 = matrix44[0];
        float fVar21 = *(float*)(lVar74 + 4);
        lVar74 = (*in_RDX)[1];
        float fVar22 = *(float*)(lVar74 + 12);
        lVar74 = matrix44[0];
        float fVar23 = *(float*)(lVar74 + 8);
        lVar74 = (*in_RDX)[2];
        float fVar24 = *(float*)(lVar74 + 12);
        pfVar73 = &matrix44[1];
        float fVar25 = *pfVar73;
        pfVar73 = (float*)(*in_RDX)[0];
        float fVar26 = *pfVar73;
        lVar74 = matrix44[1];
        float fVar27 = *(float*)(lVar74 + 4);
        pfVar73 = (float*)(*in_RDX)[1];
        float fVar28 = *pfVar73;
        lVar74 = matrix44[1];
        float fVar29 = *(float*)(lVar74 + 8);
        pfVar73 = (float*)(*in_RDX)[2];
        float fVar30 = *pfVar73;
        pfVar73 = &matrix44[1];
        float fVar31 = *pfVar73;
        lVar74 = (*in_RDX)[0];
        float fVar32 = *(float*)(lVar74 + 4);
        lVar74 = matrix44[1];
        float fVar33 = *(float*)(lVar74 + 4);
        lVar74 = (*in_RDX)[1];
        float fVar34 = *(float*)(lVar74 + 4);
        lVar74 = matrix44[1];
        float fVar35 = *(float*)(lVar74 + 8);
        lVar74 = (*in_RDX)[2];
        float fVar36 = *(float*)(lVar74 + 4);
        pfVar73 = &matrix44[1];
        float fVar37 = *pfVar73;
        lVar74 = (*in_RDX)[0];
        float fVar38 = *(float*)(lVar74 + 8);
        lVar74 = matrix44[1];
        float fVar39 = *(float*)(lVar74 + 4);
        lVar74 = (*in_RDX)[1];
        float fVar40 = *(float*)(lVar74 + 8);
        lVar74 = matrix44[1];
        float fVar41 = *(float*)(lVar74 + 8);
        lVar74 = (*in_RDX)[2];
        float fVar42 = *(float*)(lVar74 + 8);
        pfVar73 = &matrix44[1];
        float fVar43 = *pfVar73;
        lVar74 = (*in_RDX)[0];
        float fVar44 = *(float*)(lVar74 + 12);
        lVar74 = matrix44[1];
        float fVar45 = *(float*)(lVar74 + 4);
        lVar74 = (*in_RDX)[1];
        float fVar46 = *(float*)(lVar74 + 12);
        lVar74 = matrix44[1];
        float fVar47 = *(float*)(lVar74 + 8);
        lVar74 = (*in_RDX)[2];
        float fVar48 = *(float*)(lVar74 + 12);
        pfVar73 = &matrix44[2];
        float fVar49 = *pfVar73;
        pfVar73 = (float*)(*in_RDX)[0];
        float fVar50 = *pfVar73;
        lVar74 = matrix44[2];
        float fVar51 = *(float*)(lVar74 + 4);
        pfVar73 = (float*)(*in_RDX)[1];
        float fVar52 = *pfVar73;
        lVar74 = matrix44[2];
        float fVar53 = *(float*)(lVar74 + 8);
        pfVar73 = (float*)(*in_RDX)[2];
        float fVar54 = *pfVar73;
        pfVar73 = &matrix44[2];
        float fVar55 = *pfVar73;
        lVar74 = (*in_RDX)[0];
        float fVar56 = *(float*)(lVar74 + 4);
        lVar74 = matrix44[2];
        float fVar57 = *(float*)(lVar74 + 4);
        lVar74 = (*in_RDX)[1];
        float fVar58 = *(float*)(lVar74 + 4);
        lVar74 = matrix44[2];
        float fVar59 = *(float*)(lVar74 + 8);
        lVar74 = (*in_RDX)[2];
        float fVar60 = *(float*)(lVar74 + 4);
        pfVar73 = &matrix44[2];
        float fVar61 = *pfVar73;
        lVar74 = (*in_RDX)[0];
        float fVar62 = *(float*)(lVar74 + 8);
        lVar74 = matrix44[2];
        float fVar63 = *(float*)(lVar74 + 4);
        lVar74 = (*in_RDX)[1];
        float fVar64 = *(float*)(lVar74 + 8);
        lVar74 = matrix44[2];
        float fVar65 = *(float*)(lVar74 + 8);
        lVar74 = (*in_RDX)[2];
        float fVar66 = *(float*)(lVar74 + 8);
        pfVar73 = &matrix44[2];
        float fVar67 = *pfVar73;
        lVar74 = (*in_RDX)[0];
        float fVar68 = *(float*)(lVar74 + 12);
        lVar74 = matrix44[2];
        float fVar69 = *(float*)(lVar74 + 4);
        lVar74 = (*in_RDX)[1];
        float fVar70 = *(float*)(lVar74 + 12);
        lVar74 = matrix44[2];
        float fVar71 = *(float*)(lVar74 + 8);
        lVar74 = (*in_RDX)[2];
        float fVar72 = *(float*)(lVar74 + 12);
        pfVar73 = (float*)(*in_RDX)[3];
        float arg13 = *pfVar73;
        lVar74 = (*in_RDX)[3];
        float arg14 = *(float*)(lVar74 + 4);
        lVar74 = (*in_RDX)[3];
        float arg15 = *(float*)(lVar74 + 8);
        lVar74 = (*in_RDX)[3];
        new (matrix33) Matrix44T<float>(
            fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2, fVar11 * fVar12 + fVar9 * fVar10 + fVar7 * fVar8,
            fVar17 * fVar18 + fVar15 * fVar16 + fVar13 * fVar14, fVar23 * fVar24 + fVar21 * fVar22 + fVar19 * fVar20,
            fVar29 * fVar30 + fVar27 * fVar28 + fVar25 * fVar26, fVar35 * fVar36 + fVar33 * fVar34 + fVar31 * fVar32,
            fVar41 * fVar42 + fVar39 * fVar40 + fVar37 * fVar38, fVar47 * fVar48 + fVar45 * fVar46 + fVar43 * fVar44,
            fVar53 * fVar54 + fVar51 * fVar52 + fVar49 * fVar50, fVar59 * fVar60 + fVar57 * fVar58 + fVar55 * fVar56,
            fVar65 * fVar66 + fVar63 * fVar64 + fVar61 * fVar62, fVar71 * fVar72 + fVar69 * fVar70 + fVar67 * fVar68,
            arg13, arg14, arg15, *(float*)(lVar74 + 12));
        return matrix33;
    }

} // namespace jag::math

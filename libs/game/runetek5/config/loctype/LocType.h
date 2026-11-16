// libs/game/runetek5/config/loctype/LocType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class LocType {
    public:
        class AnimationWithWeights;
        class LocationSoundData;
        class MultiLocTypeCache;
        // virtual methods in vtable order
        virtual ~LocType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        uint8_t* GetOpNames() const;
        uint8_t* GetName() const;
        unsigned int GetMapElement() const;
        unsigned int GetMapSceneIcon() const;
        bool ShouldMapSceneIconRotate() const;
        uint8_t GetMapSceneIconRotate90Offset() const;
        bool ShouldMapSceneIconMirror() const;
        unsigned short GetWallWidth() const;
        uint8_t GetMinimumLODLevelOverride() const;
        uint8_t GetIndoorsOverride() const;
        void SetMultiLocIndex(int arg1);
        unsigned long IncrementMultiLocIndex();
        uint32_t GetBackgroundSound() const;
        uint64_t GenerateBackgroundSoundRandomRate() const;
        uint32_t GetBackgroundSoundVolume() const;
        uint32_t GetBackgroundSoundDropoffRange() const;
        uint32_t GetBackgroundSoundRange() const;
        long GetRandomSounds() const;
        uint32_t GetRandomSoundShape() const;
        uint32_t GetBackgroundSoundRateMin() const;
        uint32_t GetBackgroundSoundRateMax() const;
        uint32_t GetRandomSoundMin() const;
        uint32_t GetRandomSoundMax() const;
        uint32_t GetDefaultAnimation() const;
        bool HasParticles() const;
        bool IsMultiLoc() const;
        bool IsActive() const;
        float* GetPostOffset() const;
        bool RaiseEntities(LocShape locShape, bool arg2) const;
        unsigned int GetRaiseObjectGroundDecor(LocShape locShape) const;
        uint8_t* GetModelList() const;
        uint8_t* GetVFXAttachmentsRawData() const;
        ColourHSL GetResize() const;
        uint8_t* GetOffset() const;
        unsigned int GetHillChangeType() const;
        bool IsRuneTek5Only() const;
        void GetCustomBounding() const;
        uint8_t UseRandomAnimFrame() const;
        bool IsHighDetailOnly() const;
        uint8_t UseFastPickingTests() const;
        bool IsExamineOnly() const;
        bool HasHighlightOverride() const;
        unsigned int GetHighlightOverride() const;
        bool HasVFX() const;
        int GetMultiLocIndex() const;
        uint8_t* GetMultiLoc(shared_ptr<LocType>& locType, int arg2, bool arg3);
        LocType(BaseTemplateConfigTypeList<LocType>* baseTemplateConfigTypeList, int arg2);
        void MakeLocationSoundData();
        bool GetLocationOnFlatGround(const LocType& locType, int arg2, const HeightMap& heightMap, int arg4,
                                     unsigned int arg5, unsigned int arg6, Rotation90 rotation90, bool arg8) const;
        uint32_t GetGridWidth(Rotation90 rotation90) const;
        uint32_t GetGridLength(Rotation90 rotation90) const;
        unsigned long GetLocationHeight(const LocType& locType, const HeightMap& heightMap, int arg3, unsigned int arg4,
                                        unsigned int arg5, Rotation90 rotation90, bool arg7) const;
        uint64_t GetHillData(Array<Array<int>>& arg1, Array<Array<int>>& arg2, const LocType& locType,
                             const HeightMap& heightMap, int arg5, unsigned int arg6, unsigned int arg7,
                             Rotation90 rotation90, bool arg9) const;
        int GetMaxRemoveRoofLevel(const LinkMap& linkMap, int arg2, unsigned int arg3, unsigned int arg4,
                                  Rotation90 rotation90) const;
        uint8_t* GetMultiLocValue(int& arg1, int& arg2, int& arg3, int& arg4, const PlayerVarDomain* playerVarDomain,
                                  ConfigProvider* configProvider) const;
        uint8_t* GetMultiLoc(shared_ptr<LocType>& locType, const PlayerVarDomain* playerVarDomain,
                             ConfigProvider* configProvider);
        unsigned long CheckModel(LocShape locShape);
        LocTypeCustomisation* GetModels(graphics::RT7Core* rt7Core, AssetBuilder& assetBuilder,
                                        BuildRequest<graphics::Model, BuildModelMain>& buildRequest, LocShape locShape,
                                        Rotation90 rotation90, bool arg6,
                                        const LocTypeCustomisation* locTypeCustomisation,
                                        AssetJobPriority assetJobPriority);
        unsigned long GetModelHash(LocShape locShape) const;
        unsigned long GetAnimation() const;
        auto GetLocationWorldMatrix(const math::Matrix44T<float>& matrix44, Rotation90 rotation90);
        uint64_t CastsShadows(LocShape locShape) const;
        unsigned int GetHillChangeParam() const;
        bool IsFindable() const;
        uint8_t* GetAnims() const;
        bool IsPotentialGroundDecor() const;
        bool HasSound() const;
        uint32_t GetBackgroundSoundShape() const;
        bool GetBackgroundSoundDistanceFiltered() const;
        uint32_t GetBackgroundSoundDistanceFilterFrequencyHzHigh() const;
        uint32_t GetBackgroundSoundDistanceFilterFrequencyHzLow() const;
        uint32_t GetBackgroundSoundDistanceFilterQ() const;
        bool GetRandomSoundDistanceFiltered() const;
        uint32_t GetRandomSoundDistanceFilterFrequencyHzHigh() const;
        uint32_t GetRandomSoundDistanceFilterFrequencyHzLow() const;
        uint32_t GetRandomSoundDistanceFilterQ() const;

    private:
        uint8_t _unknown_8[16];
        Js5HTTPQueueRequest* field_24;
        int field_32;
        uint8_t _unknown_36[4];
        shared_ptr field_40;
        uint8_t _unknown_56[456];
        uint8_t field_512;
        uint8_t m_runeTek5Only;
        uint8_t _unknown_514[102];
        ColourHSL m_resize;
        uint8_t _unknown_632[8];
        uint8_t m_pPostOffset[4];
        uint8_t _unknown_644[8];
        uint8_t field_652;
        uint8_t _unknown_653[171];
        uint8_t field_824;
        uint8_t field_825;
        uint8_t field_826;
        uint8_t field_827;
        uint8_t field_828;
        uint8_t m_hasParticles;
        uint8_t _unknown_830[2];
        unsigned int m_hillChangeType;
        unsigned int m_hillChangeParam;
        short field_840;
        short field_842;
        uint8_t field_844;
        uint8_t field_845;
        uint8_t field_846;
        uint8_t field_847;
        uint8_t m_minimumLODLevelOverride;
        uint8_t m_indoorsOverride;
        uint8_t _unknown_850[14];
        uint8_t field_864;
        uint8_t _unknown_865[3];
        unsigned int m_highlightOverride;
        uint8_t _unknown_872[48];
        uint8_t field_920;
        uint8_t m_highDetailOnly;
        uint8_t _unknown_922[2];
        unsigned int field_924;
        unsigned int field_928;
        uint32_t field_932;
        uint8_t field_936;
        uint8_t field_937;
        uint8_t _unknown_938[2];
        unsigned int field_940;
        unsigned short m_wallWidth;
        bool field_946;
        uint8_t field_947;
        unsigned int field_948;
        unsigned int field_952;
        uint8_t m_findable;
        uint8_t m_examineOnly;
        uint8_t _unknown_958[2];
        unsigned int field_960;
        unsigned int m_mapElement;
        unsigned int m_mapSceneIcon;
        uint8_t field_972;
        uint8_t m_mapSceneIconRotate90Offset;
        uint8_t field_974;
        uint8_t _unknown_975[25];
        unsigned int field_1000;
        unsigned int field_1004;
        int m_multiLocIndex;
        uint8_t _unknown_1012[4];
        shared_ptr field_1016;
    };

    class LocType::AnimationWithWeights {
    public:
        AnimationWithWeights();

    private:
        uint64_t field_0;
    };

    class LocType::LocationSoundData {
    public:
        int GenerateBackgroundSoundRandomRate() const;
        ~LocationSoundData();
        LocationSoundData();

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint8_t field_16;
        uint8_t _unknown_17[3];
        int field_20;
        int field_24;
        uint32_t field_28;
        uint8_t field_32;
        uint8_t _unknown_33[3];
        uint64_t field_36;
        uint64_t field_44;
        uint32_t field_52;
        uint8_t _unknown_56[24];
        uint32_t field_80;
        uint8_t field_84;
        uint8_t _unknown_85[3];
        uint64_t field_88;
        uint32_t field_96;
        uint8_t _unknown_100[4];
    };

    class LocType::MultiLocTypeCache {
    public:
        MultiLocTypeCache();
        ~MultiLocTypeCache();
        uint8_t* GetMultiLoc(shared_ptr<LocType>& locType1, const shared_ptr<LocType>& locType2,
                             const PlayerVarDomain* playerVarDomain, ConfigProvider* configProvider);

    private:
        uint8_t _unknown_0[8];
        long field_8;
        shared_ptr field_16;
        shared_ptr field_32;
        uint8_t _unknown_48[24];
        uint8_t* field_72;
    };

    class LocTypeCustomisation {
    public:
        void GetModelList() const;
        Option<float>* GetRecolourDest() const;
        uint8_t* GetRematerialDest() const;
        static int32_t nextUniqueID[4]; // = { 1, 0, 0, 0 }
    };

    // 0x100f3c870
    int32_t LocTypeCustomisation::nextUniqueID[4] = {1, 0, 0, 0};

    // 0x1003c2160
    unsigned int LocType::GetMapElement() const {
        return m_mapElement;
    }

    // 0x1003c21c0
    unsigned int LocType::GetMapSceneIcon() const {
        return m_mapSceneIcon;
    }

    // 0x1003c4bf0
    bool LocType::ShouldMapSceneIconRotate() const {
        return field_972;
    }

    // 0x1003c4c00
    uint8_t LocType::GetMapSceneIconRotate90Offset() const {
        return m_mapSceneIconRotate90Offset;
    }

    // 0x1003c4c10
    bool LocType::ShouldMapSceneIconMirror() const {
        return field_974;
    }

    // 0x1003dc7b0
    unsigned short LocType::GetWallWidth() const {
        return m_wallWidth;
    }

    // 0x10040ca50
    uint8_t LocType::GetMinimumLODLevelOverride() const {
        return m_minimumLODLevelOverride;
    }

    // 0x10040ca60
    uint8_t LocType::GetIndoorsOverride() const {
        return m_indoorsOverride;
    }

    // 0x10041c9e0
    void LocType::SetMultiLocIndex(int arg1) {
        uint64_t in_RAX;
        int local_18;
        int local_14;

        _local_18 = (((uint64_t)((int)((unsigned long)in_RAX >> 32)) << 32) | (uint32_t)arg1);
        int iVar1 = field_976.end();
        _local_18 = (((uint64_t)(iVar1 - 1) << 32) | (uint32_t)local_18);
        auto piVar2 = std::min<int>(local_14, local_18);
        m_multiLocIndex = *piVar2;
    }

    // 0x10041ca70
    unsigned long LocType::IncrementMultiLocIndex() {
        unsigned long uVar2 = (long)m_multiLocIndex + 1;
        unsigned long uVar1 = field_976.end();
        m_multiLocIndex = (int)(uVar2 % uVar1);
        return uVar2 / uVar1;
    }

    // 0x10042c2d0
    uint32_t LocType::GetBackgroundSound() const {
        uint32_t* puVar3;

        bool cVar1 = field_1016->operator_cast_to_bool();
        uint32_t uVar2 = 4294967295;
        if (cVar1) {
            puVar3 = (uint32_t*)(*field_1016).operator->();
            uVar2 = *puVar3;
        }
        return uVar2;
    }

    // 0x10042c310
    uint64_t LocType::GenerateBackgroundSoundRandomRate() const {
        bool cVar1 = field_1016->operator_cast_to_bool();
        uint64_t uVar2 = 256;
        if (cVar1) {
            uVar2 = ((LocationSoundData*)(*field_1016).operator->())->GenerateBackgroundSoundRandomRate();
        }
        return uVar2;
    }

    // 0x10042c350
    uint32_t LocType::GetBackgroundSoundVolume() const {
        long lVar3;

        bool cVar1 = field_1016->operator_cast_to_bool();
        uint32_t uVar2 = 255;
        if (cVar1) {
            lVar3 = (*field_1016).operator->();
            uVar2 = *(uint32_t*)(lVar3 + 12);
        }
        return uVar2;
    }

    // 0x10042c390
    uint32_t LocType::GetBackgroundSoundDropoffRange() const {
        long lVar3;

        bool cVar1 = field_1016->operator_cast_to_bool();
        uint32_t uVar2 = 0;
        if (cVar1) {
            lVar3 = (*field_1016).operator->();
            uVar2 = *(uint32_t*)(lVar3 + 8);
        }
        return uVar2;
    }

    // 0x10042c3d0
    uint32_t LocType::GetBackgroundSoundRange() const {
        long lVar3;

        bool cVar1 = field_1016->operator_cast_to_bool();
        uint32_t uVar2 = 0;
        if (cVar1) {
            lVar3 = (*field_1016).operator->();
            uVar2 = *(uint32_t*)(lVar3 + 4);
        }
        return uVar2;
    }

    // 0x10042c5d0
    long LocType::GetRandomSounds() const {
        long lVar2;

        if (field_1016->operator_cast_to_bool() == '\0') {
            lVar2 = 0;
        } else {
            lVar2 = (*field_1016).operator->();
            lVar2 = lVar2 + 56;
        }
        return lVar2;
    }

    // 0x10042c630
    uint32_t LocType::GetRandomSoundShape() const {
        long lVar3;

        bool cVar1 = field_1016->operator_cast_to_bool();
        uint32_t uVar2 = 0;
        if (cVar1) {
            lVar3 = (*field_1016).operator->();
            uVar2 = *(uint32_t*)(lVar3 + 80);
        }
        return uVar2;
    }

    // 0x10042c670
    uint32_t LocType::GetBackgroundSoundRateMin() const {
        long lVar3;

        bool cVar1 = field_1016->operator_cast_to_bool();
        uint32_t uVar2 = 256;
        if (cVar1) {
            lVar3 = (*field_1016).operator->();
            uVar2 = *(uint32_t*)(lVar3 + 20);
        }
        return uVar2;
    }

    // 0x10042c6b0
    uint32_t LocType::GetBackgroundSoundRateMax() const {
        long lVar3;

        bool cVar1 = field_1016->operator_cast_to_bool();
        uint32_t uVar2 = 256;
        if (cVar1) {
            lVar3 = (*field_1016).operator->();
            uVar2 = *(uint32_t*)(lVar3 + 24);
        }
        return uVar2;
    }

    // 0x10042c6f0
    uint32_t LocType::GetRandomSoundMin() const {
        long lVar3;

        bool cVar1 = field_1016->operator_cast_to_bool();
        uint32_t uVar2 = 0;
        if (cVar1) {
            lVar3 = (*field_1016).operator->();
            uVar2 = *(uint32_t*)(lVar3 + 48);
        }
        return uVar2;
    }

    // 0x10042c730
    uint32_t LocType::GetRandomSoundMax() const {
        long lVar3;

        bool cVar1 = field_1016->operator_cast_to_bool();
        uint32_t uVar2 = 0;
        if (cVar1) {
            lVar3 = (*field_1016).operator->();
            uVar2 = *(uint32_t*)(lVar3 + 52);
        }
        return uVar2;
    }

    // 0x10042c770
    uint32_t LocType::GetDefaultAnimation() const {
        uint32_t* puVar3;

        long lVar2 = field_896.end();
        uint32_t uVar1 = 4294967295;
        if (lVar2 == 1) {
            puVar3 = &field_896[0];
            uVar1 = *puVar3;
        }
        return uVar1;
    }

    // 0x10042c8c0
    bool LocType::HasParticles() const {
        return m_hasParticles;
    }

    // 0x10042d3c0
    bool LocType::IsMultiLoc() const {
        return field_976.empty() ^ 1;
    }

    // 0x10042d430
    bool LocType::IsActive() const {
        return field_940 == 1;
    }

    // 0x10042d4a0
    float* LocType::GetPostOffset() const {
        return &m_stippleNearClipParams;
    }

    // 0x10042e6e0
    bool LocType::RaiseEntities(LocShape locShape, bool arg2) const {
        uint32_t in_register_00000011;

        if ((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            if ((LocShapes::IsCentrePieceShape(locShape & 255) != '\0') && (field_948 == 1)) {
                return true;
            }
            if ((char)locShape == '\x16') {
                return field_952 != 0;
            }
        }
        return false;
    }

    // 0x10042e730
    unsigned int LocType::GetRaiseObjectGroundDecor(LocShape locShape) const {
        unsigned int uVar1 = 0;
        if ((char)locShape == '\x16') {
            uVar1 = field_952;
        }
        return uVar1;
    }

    // 0x10042eb10
    uint8_t* LocType::GetModelList() const {
        return m_requestData;
    }

    // 0x10042f3e0
    uint8_t* LocType::GetVFXAttachmentsRawData() const {
        return &field_872;
    }

    // 0x10042fe60
    ColourHSL LocType::GetResize() const {
        return &field_616;
    }

    // 0x10042ff30
    uint8_t* LocType::GetOffset() const {
        return m_resize + 12;
    }

    // 0x10042ff40
    unsigned int LocType::GetHillChangeType() const {
        return m_hillChangeType;
    }

    // 0x100430640
    bool LocType::IsRuneTek5Only() const {
        return m_runeTek5Only;
    }

    // 0x100430d40
    void LocType::GetCustomBounding() const {
        field_856.get();
    }

    // 0x100430e50
    uint8_t LocType::UseRandomAnimFrame() const {
        return field_920;
    }

    // 0x100430e90
    bool LocType::IsHighDetailOnly() const {
        return m_highDetailOnly;
    }

    // 0x1004310f0
    uint8_t LocType::UseFastPickingTests() const {
        return field_864;
    }

    // 0x1004314d0
    bool LocType::IsExamineOnly() const {
        return m_examineOnly;
    }

    // 0x1004315a0
    bool LocType::HasHighlightOverride() const {
        return m_highlightOverride != 9;
    }

    // 0x1004315b0
    unsigned int LocType::GetHighlightOverride() const {
        return m_highlightOverride;
    }

    // 0x100431b90
    LocType::MultiLocTypeCache::MultiLocTypeCache() : shared_ptr() {
        new (field_16) shared_ptr();
        new (field_32) shared_ptr();
        new (&field_48) eastl::optional();
        new (&field_56) shared_ptr();
    }

    // 0x100431d10
    LocType::MultiLocTypeCache::~MultiLocTypeCache() {
        field_56.~shared_ptr();
        field_32->~shared_ptr();
        field_16->~shared_ptr();
    }

    // 0x100431d90
    int LocType::LocationSoundData::GenerateBackgroundSoundRandomRate() const {
        int iVar1 = field_20;
        return math::Rand(field_24 - iVar1) + iVar1;
    }

    // 0x100449880
    bool LocType::HasVFX() const {
        return field_872.empty() ^ 1;
    }

    // 0x10051b050
    LocType::~LocType() {
        field_1016->~shared_ptr();
        field_976.~Array();
        field_896.~Array();
        field_872.~Array();
        field_856.~unique_ptr();
        field_800.~Array();
        field_776.~Array();
        field_752.~Array();
        field_728.~Array();
        field_704.~Array();
        field_680.~Array();
        field_656.~Array();
        field_592.~Array();
        field_568.~Array();
        field_544.~Array();
        field_520.~Array();
        field_480.~basic_string();
        field_56.~fixed_vector();
    }

    // 0x100525640
    int LocType::GetMultiLocIndex() const {
        return m_multiLocIndex;
    }

    // 0x100527420
    void LocType::MakeLocationSoundData() {
        shared_ptr<LocType::LocationSoundData> local_28;

        uint8_t* this_00 = field_1016;
        if (this_00->operator_cast_to_bool() == '\0') {
            MakeSharedPool<LocType::LocationSoundData, 512>::MakeShared<>();
            *this_00 = local_28;
        }
        **this_00;
    }

    // 0x10052b100
    LocType::LocationSoundData::~LocationSoundData() {
        field_56.~Array();
    }

    // 0x10052b2e0
    LocType::LocationSoundData::LocationSoundData()
        : MakeSharedPool<LocType::LocationSoundData, 512>(), field_0(4294967295), field_8(1095216660480), field_16(0),
          field_20(256), field_24(256), field_28(0), field_32(0), field_36(1161527296), field_44(1065353216),
          field_52(0), field_80(0), field_84(0), field_88(1161527296), field_96(1065353216) {}

    // 0x100533b50
    LocType::AnimationWithWeights::AnimationWithWeights() : field_0(433791696895) {}

    // 0x100625640
    unsigned int LocType::GetHillChangeParam() const {
        return m_hillChangeParam;
    }

    // 0x10064b6e0
    bool LocType::IsFindable() const {
        return m_findable;
    }

    // 0x10064b6f0
    uint8_t* LocType::GetAnims() const {
        return &field_896;
    }

    // 0x10064b700
    bool LocType::IsPotentialGroundDecor() const {
        if ((field_940 == 0) && (field_937 == '\0')) {
            return field_932 != 1;
        }
        return false;
    }

    // 0x10064b730
    bool LocType::HasSound() const {
        return field_1016->end() != 0;
    }

    // 0x10064b750
    uint32_t LocType::GetBackgroundSoundShape() const {
        long lVar3;

        bool cVar1 = field_1016->operator_cast_to_bool();
        uint32_t uVar2 = 0;
        if (cVar1) {
            lVar3 = (*field_1016).operator->();
            uVar2 = *(uint32_t*)(lVar3 + 28);
        }
        return uVar2;
    }

    // 0x10064b790
    bool LocType::GetBackgroundSoundDistanceFiltered() const {
        long lVar2;
        bool bVar3;

        if (field_1016->operator_cast_to_bool() == '\0') {
            bVar3 = false;
        } else {
            lVar2 = (*field_1016).operator->();
            bVar3 = *(char*)(lVar2 + 32) != '\0';
        }
        return bVar3;
    }

    // 0x10064b7d0
    uint32_t LocType::GetBackgroundSoundDistanceFilterFrequencyHzHigh() const {
        long lVar1;
        uint32_t uVar3;

        if (field_1016->operator_cast_to_bool() == '\0') {
            uVar3 = 1161527296;
        } else {
            lVar1 = (*field_1016).operator->();
            uVar3 = *(uint32_t*)(lVar1 + 36);
        }
        return uVar3;
    }

    // 0x10064b810
    uint32_t LocType::GetBackgroundSoundDistanceFilterFrequencyHzLow() const {
        long lVar1;

        bool cVar2 = field_1016->operator_cast_to_bool();
        uint32_t uVar3 = 0;
        if (cVar2) {
            lVar1 = (*field_1016).operator->();
            uVar3 = *(uint32_t*)(lVar1 + 40);
        }
        return uVar3;
    }

    // 0x10064b850
    uint32_t LocType::GetBackgroundSoundDistanceFilterQ() const {
        long lVar1;
        uint32_t uVar3;

        if (field_1016->operator_cast_to_bool() == '\0') {
            uVar3 = 1065353216;
        } else {
            lVar1 = (*field_1016).operator->();
            uVar3 = *(uint32_t*)(lVar1 + 44);
        }
        return uVar3;
    }

    // 0x10064b890
    bool LocType::GetRandomSoundDistanceFiltered() const {
        long lVar2;
        bool bVar3;

        if (field_1016->operator_cast_to_bool() == '\0') {
            bVar3 = false;
        } else {
            lVar2 = (*field_1016).operator->();
            bVar3 = *(char*)(lVar2 + 84) != '\0';
        }
        return bVar3;
    }

    // 0x10064b8d0
    uint32_t LocType::GetRandomSoundDistanceFilterFrequencyHzHigh() const {
        long lVar1;
        uint32_t uVar3;

        if (field_1016->operator_cast_to_bool() == '\0') {
            uVar3 = 1161527296;
        } else {
            lVar1 = (*field_1016).operator->();
            uVar3 = *(uint32_t*)(lVar1 + 88);
        }
        return uVar3;
    }

    // 0x10064b910
    uint32_t LocType::GetRandomSoundDistanceFilterFrequencyHzLow() const {
        long lVar1;

        bool cVar2 = field_1016->operator_cast_to_bool();
        uint32_t uVar3 = 0;
        if (cVar2) {
            lVar1 = (*field_1016).operator->();
            uVar3 = *(uint32_t*)(lVar1 + 92);
        }
        return uVar3;
    }

    // 0x10064b950
    uint32_t LocType::GetRandomSoundDistanceFilterQ() const {
        long lVar1;
        uint32_t uVar3;

        if (field_1016->operator_cast_to_bool() == '\0') {
            uVar3 = 1065353216;
        } else {
            lVar1 = (*field_1016).operator->();
            uVar3 = *(uint32_t*)(lVar1 + 96);
        }
        return uVar3;
    }

} // namespace jag::game

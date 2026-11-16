// libs/game/runetek5/config/loctype/LocType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class LocType {
    public:
        class AnimationWithWeights;
        class LocationSoundData;
        class MultiLocTypeCache;
        // virtual methods in vtable order
        virtual ~LocType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual void PostDecode();
        GetOpNames() const;
        GetName() const;
        uint GetMapElement() const;
        uint GetMapSceneIcon() const;
        ShouldMapSceneIconRotate() const;
        GetMapSceneIconRotate90Offset() const;
        ShouldMapSceneIconMirror() const;
        ushort GetWallWidth() const;
        GetMinimumLODLevelOverride() const;
        GetIndoorsOverride() const;
        void SetMultiLocIndex(int);
        ulong IncrementMultiLocIndex();
        GetBackgroundSound() const;
        GenerateBackgroundSoundRandomRate() const;
        GetBackgroundSoundVolume() const;
        GetBackgroundSoundDropoffRange() const;
        GetBackgroundSoundRange() const;
        long GetRandomSounds() const;
        GetRandomSoundShape() const;
        GetBackgroundSoundRateMin() const;
        GetBackgroundSoundRateMax() const;
        GetRandomSoundMin() const;
        GetRandomSoundMax() const;
        GetDefaultAnimation() const;
        HasParticles() const;
        byte IsMultiLoc() const;
        bool IsActive() const;
        GetPostOffset() const;
        bool RaiseEntities(LocShape, bool) const;
        uint GetRaiseObjectGroundDecor(LocShape) const;
        GetModelList() const;
        GetVFXAttachmentsRawData() const;
        GetResize() const;
        GetOffset() const;
        uint GetHillChangeType() const;
        IsRuneTek5Only() const;
        void GetCustomBounding() const;
        UseRandomAnimFrame() const;
        IsHighDetailOnly() const;
        UseFastPickingTests() const;
        byte IsExamineOnly() const;
        bool HasHighlightOverride() const;
        uint GetHighlightOverride() const;
        byte HasVFX() const;
        int GetMultiLocIndex() const;
        GetMultiLoc(shared_ptr<LocType>&, int, bool);
        LocType(BaseTemplateConfigTypeList<LocType>*, int);
        void MakeLocationSoundData();
        bool GetLocationOnFlatGround(LocType const&, int, HeightMap const&, int, unsigned int, unsigned int, Rotation90,
                                     bool) const;
        GetGridWidth(Rotation90) const;
        GetGridLength(Rotation90) const;
        ulong GetLocationHeight(LocType const&, HeightMap const&, int, unsigned int, unsigned int, Rotation90,
                                bool) const;
        GetHillData(Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&,
                    Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&, LocType const&, HeightMap const&,
                    int, unsigned int, unsigned int, Rotation90, bool) const;
        int GetMaxRemoveRoofLevel(LinkMap const&, int, unsigned int, unsigned int, Rotation90) const;
        GetMultiLocValue(int&, int&, int&, int&, PlayerVarDomain const*, ConfigProvider*) const;
        GetMultiLoc(shared_ptr<LocType>&, PlayerVarDomain const*, ConfigProvider*);
        ulong CheckModel(LocShape);
        Logger* GetModels(graphics::RT7Core*, AssetBuilder&, BuildRequest<graphics::Model, BuildModelMain>&, LocShape,
                          Rotation90, bool, LocTypeCustomisation const*, AssetJobPriority);
        ulong GetModelHash(LocShape) const;
        ulong GetAnimation() const;
        Matrix44T<float>* GetLocationWorldMatrix(math::Matrix44T<float> const&, Rotation90);
        CastsShadows(LocShape) const;
        uint GetHillChangeParam() const;
        IsFindable() const;
        GetAnims() const;
        bool IsPotentialGroundDecor() const;
        bool HasSound() const;
        GetBackgroundSoundShape() const;
        bool GetBackgroundSoundDistanceFiltered() const;
        GetBackgroundSoundDistanceFilterFrequencyHzHigh() const;
        GetBackgroundSoundDistanceFilterFrequencyHzLow() const;
        GetBackgroundSoundDistanceFilterQ() const;
        bool GetRandomSoundDistanceFiltered() const;
        GetRandomSoundDistanceFilterFrequencyHzHigh() const;
        GetRandomSoundDistanceFilterFrequencyHzLow() const;
        GetRandomSoundDistanceFilterQ() const;

        // data members, from how the methods use this: 1032 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        Js5HTTPQueueRequest* field_24; // offset 24
        int field_32;                  // offset 32
        char _unknown_36[4];
        shared_ptr field_40; // offset 40
        char _unknown_56[456];
        undefined1 field_512;      // offset 512
        undefined1 m_runeTek5Only; // offset 513
        char _unknown_514[102];
        ColourHSL field_616; // offset 616
        char _unknown_632[20];
        undefined1 field_652; // offset 652
        char _unknown_653[171];
        undefined1 field_824;      // offset 824
        undefined1 field_825;      // offset 825
        undefined1 field_826;      // offset 826
        undefined1 field_827;      // offset 827
        undefined1 field_828;      // offset 828
        undefined1 m_hasParticles; // offset 829
        char _unknown_830[2];
        uint m_hillChangeType;                // offset 832
        uint m_hillChangeParam;               // offset 836
        short field_840;                      // offset 840
        short field_842;                      // offset 842
        undefined1 field_844;                 // offset 844
        undefined1 field_845;                 // offset 845
        undefined1 field_846;                 // offset 846
        undefined1 field_847;                 // offset 847
        undefined1 m_minimumLODLevelOverride; // offset 848
        undefined1 m_indoorsOverride;         // offset 849
        char _unknown_850[14];
        undefined1 field_864; // offset 864
        char _unknown_865[3];
        uint m_highlightOverride; // offset 868
        char _unknown_872[48];
        undefined1 field_920;        // offset 920
        undefined1 m_highDetailOnly; // offset 921
        char _unknown_922[2];
        uint field_924;       // offset 924
        uint field_928;       // offset 928
        undefined4 field_932; // offset 932
        undefined1 field_936; // offset 936
        undefined1 field_937; // offset 937
        char _unknown_938[2];
        uint field_940;        // offset 940
        ushort m_wallWidth;    // offset 944
        bool field_946;        // offset 946
        undefined1 field_947;  // offset 947
        uint field_948;        // offset 948
        uint field_952;        // offset 952
        undefined1 m_findable; // offset 956
        byte m_examineOnly;    // offset 957
        char _unknown_958[2];
        uint field_960;                          // offset 960
        uint m_mapElement;                       // offset 964
        uint m_mapSceneIcon;                     // offset 968
        undefined1 field_972;                    // offset 972
        undefined1 m_mapSceneIconRotate90Offset; // offset 973
        undefined1 field_974;                    // offset 974
        char _unknown_975[25];
        uint field_1000;     // offset 1000
        uint field_1004;     // offset 1004
        int m_multiLocIndex; // offset 1008
        char _unknown_1012[4];
        shared_ptr field_1016; // offset 1016
    };

    class LocType::AnimationWithWeights {
    public:
        AnimationWithWeights();

        // data members, from how the methods use this: 8 bytes
        undefined8 field_0; // offset 0
    };

    class LocType::LocationSoundData {
    public:
        int GenerateBackgroundSoundRandomRate() const;
        ~LocationSoundData();
        LocationSoundData();

        // data members, from how the methods use this: 104 bytes
        undefined8 field_0;  // offset 0
        undefined8 field_8;  // offset 8
        undefined1 field_16; // offset 16
        char _unknown_17[3];
        int field_20;        // offset 20
        int field_24;        // offset 24
        undefined4 field_28; // offset 28
        undefined1 field_32; // offset 32
        char _unknown_33[3];
        undefined8 field_36; // offset 36
        undefined8 field_44; // offset 44
        undefined4 field_52; // offset 52
        char _unknown_56[24];
        undefined4 field_80; // offset 80
        undefined1 field_84; // offset 84
        char _unknown_85[3];
        undefined8 field_88; // offset 88
        undefined4 field_96; // offset 96
        char _unknown_100[4];
    };

    class LocType::MultiLocTypeCache {
    public:
        MultiLocTypeCache();
        ~MultiLocTypeCache();
        GetMultiLoc(shared_ptr<LocType>&, shared_ptr<LocType> const&, PlayerVarDomain const*, ConfigProvider*);

        // data members, from how the methods use this: 80 bytes
        char _unknown_0[8];
        long field_8;        // offset 8
        shared_ptr field_16; // offset 16
        shared_ptr field_32; // offset 32
        char _unknown_48[8];
        shared_ptr field_56; // offset 56
        undefined* field_72; // offset 72
    };

    class LocTypeCustomisation {
    public:
        GetModelList() const;
        GetRecolourDest() const;
        GetRematerialDest() const;
        static /* 16 bytes */ nextUniqueID; // = { 1, 0, 0, 0 }
    };

    // 0x100f3c870, 16 bytes, __data
    LocTypeCustomisation::nextUniqueID = {1, 0, 0, 0};

    // 0x1003c2160, 16 bytes, inline, placed by class name and debug map
    // LocType::GetMapElement() const
    uint LocType::GetMapElement() {
        return m_mapElement;
    }

    // 0x1003c21c0, 16 bytes, inline, placed by class name and debug map
    // LocType::GetMapSceneIcon() const
    uint LocType::GetMapSceneIcon() {
        return m_mapSceneIcon;
    }

    // 0x1003c4bf0, 16 bytes, inline, placed by class name
    // LocType::ShouldMapSceneIconRotate() const
    undefined1 LocType::ShouldMapSceneIconRotate() {
        return field_972;
    }

    // 0x1003c4c00, 16 bytes, inline, placed by class name
    // LocType::GetMapSceneIconRotate90Offset() const
    undefined1 LocType::GetMapSceneIconRotate90Offset() {
        return m_mapSceneIconRotate90Offset;
    }

    // 0x1003c4c10, 16 bytes, inline, placed by class name
    // LocType::ShouldMapSceneIconMirror() const
    undefined1 LocType::ShouldMapSceneIconMirror() {
        return field_974;
    }

    // 0x1003dc7b0, 16 bytes, inline, placed by class name
    // LocType::GetWallWidth() const
    ushort LocType::GetWallWidth() {
        return m_wallWidth;
    }

    // 0x10040ca50, 16 bytes, inline, placed by class name
    // LocType::GetMinimumLODLevelOverride() const
    undefined1 LocType::GetMinimumLODLevelOverride() {
        return m_minimumLODLevelOverride;
    }

    // 0x10040ca60, 16 bytes, inline, placed by class name
    // LocType::GetIndoorsOverride() const
    undefined1 LocType::GetIndoorsOverride() {
        return m_indoorsOverride;
    }

    // 0x10041c9e0, 64 bytes, inline, placed by class name
    // LocType::SetMultiLocIndex(int)
    void LocType::SetMultiLocIndex(int param_1) {
        int iVar1;
        undefined8 in_RAX;
        int* piVar2;
        int local_18;
        int local_14;

        _local_18 = CONCAT44((int)((ulong)in_RAX >> 32), param_1);
        iVar1 = (&field_976)->end();
        _local_18 = CONCAT44(iVar1 + -1, local_18);
        piVar2 = std::min<int>(&local_14, &local_18);
        m_multiLocIndex = *piVar2;
    }

    // 0x10041ca70, 64 bytes, inline, placed by class name
    // LocType::IncrementMultiLocIndex()
    ulong LocType::IncrementMultiLocIndex() {
        ulong uVar1;
        ulong uVar2;

        uVar2 = (long)m_multiLocIndex + 1;
        uVar1 = (&field_976)->end();
        m_multiLocIndex = (int)(uVar2 % uVar1);
        return uVar2 / uVar1;
    }

    // 0x10042add0, 16 bytes, complete-object constructor, inline, placed by class name
    // LocType::MultiLocTypeCache::MultiLocTypeCache(): jumps straight to the base-object constructor

    // 0x10042af60, 16 bytes, complete-object destructor, inline, placed by class name
    // LocType::MultiLocTypeCache::~MultiLocTypeCache(): jumps straight to the base-object destructor

    // 0x10042c2d0, 64 bytes, inline, placed by class name
    // LocType::GetBackgroundSound() const
    undefined4 LocType::GetBackgroundSound() {
        bool bVar1;
        undefined4 uVar2;
        undefined4* puVar3;

        bVar1 = field_1016->operator_cast_to_bool();
        uVar2 = 4294967295;
        if (bVar1) {
            puVar3 = (undefined4*)shared_ptr<LocType::LocationSoundData>::operator->(
                (shared_ptr<LocType::LocationSoundData>*)field_1016);
            uVar2 = *puVar3;
        }
        return uVar2;
    }

    // 0x10042c310, 64 bytes, inline, placed by class name
    // LocType::GenerateBackgroundSoundRandomRate() const
    undefined8 LocType::GenerateBackgroundSoundRandomRate() {
        bool bVar1;
        undefined8 uVar2;
        LocationSoundData* this_00;

        bVar1 = field_1016->operator_cast_to_bool();
        uVar2 = 256;
        if (bVar1) {
            this_00 = (LocationSoundData*)shared_ptr<LocType::LocationSoundData>::operator->(
                (shared_ptr<LocType::LocationSoundData>*)field_1016);
            uVar2 = this_00->GenerateBackgroundSoundRandomRate();
        }
        return uVar2;
    }

    // 0x10042c350, 64 bytes, inline, placed by class name
    // LocType::GetBackgroundSoundVolume() const
    undefined4 LocType::GetBackgroundSoundVolume() {
        bool bVar1;
        undefined4 uVar2;
        long lVar3;

        bVar1 = field_1016->operator_cast_to_bool();
        uVar2 = 255;
        if (bVar1) {
            lVar3 =
                shared_ptr<LocType::LocationSoundData>::operator->((shared_ptr<LocType::LocationSoundData>*)field_1016);
            uVar2 = *(undefined4*)(lVar3 + 12);
        }
        return uVar2;
    }

    // 0x10042c390, 64 bytes, inline, placed by class name
    // LocType::GetBackgroundSoundDropoffRange() const
    undefined4 LocType::GetBackgroundSoundDropoffRange() {
        bool bVar1;
        undefined4 uVar2;
        long lVar3;

        bVar1 = field_1016->operator_cast_to_bool();
        uVar2 = 0;
        if (bVar1) {
            lVar3 =
                shared_ptr<LocType::LocationSoundData>::operator->((shared_ptr<LocType::LocationSoundData>*)field_1016);
            uVar2 = *(undefined4*)(lVar3 + 8);
        }
        return uVar2;
    }

    // 0x10042c3d0, 64 bytes, inline, placed by class name
    // LocType::GetBackgroundSoundRange() const
    undefined4 LocType::GetBackgroundSoundRange() {
        bool bVar1;
        undefined4 uVar2;
        long lVar3;

        bVar1 = field_1016->operator_cast_to_bool();
        uVar2 = 0;
        if (bVar1) {
            lVar3 =
                shared_ptr<LocType::LocationSoundData>::operator->((shared_ptr<LocType::LocationSoundData>*)field_1016);
            uVar2 = *(undefined4*)(lVar3 + 4);
        }
        return uVar2;
    }

    // 0x10042c5d0, 64 bytes, inline, placed by class name
    // LocType::GetRandomSounds() const
    long LocType::GetRandomSounds() {
        long lVar2;

        if (field_1016->operator_cast_to_bool()) {
            lVar2 =
                shared_ptr<LocType::LocationSoundData>::operator->((shared_ptr<LocType::LocationSoundData>*)field_1016);
            lVar2 = lVar2 + 56;
        } else {
            lVar2 = 0;
        }
        return lVar2;
    }

    // 0x10042c630, 64 bytes, inline, placed by class name
    // LocType::GetRandomSoundShape() const
    undefined4 LocType::GetRandomSoundShape() {
        bool bVar1;
        undefined4 uVar2;
        long lVar3;

        bVar1 = field_1016->operator_cast_to_bool();
        uVar2 = 0;
        if (bVar1) {
            lVar3 =
                shared_ptr<LocType::LocationSoundData>::operator->((shared_ptr<LocType::LocationSoundData>*)field_1016);
            uVar2 = *(undefined4*)(lVar3 + 80);
        }
        return uVar2;
    }

    // 0x10042c670, 64 bytes, inline, placed by class name
    // LocType::GetBackgroundSoundRateMin() const
    undefined4 LocType::GetBackgroundSoundRateMin() {
        bool bVar1;
        undefined4 uVar2;
        long lVar3;

        bVar1 = field_1016->operator_cast_to_bool();
        uVar2 = 256;
        if (bVar1) {
            lVar3 =
                shared_ptr<LocType::LocationSoundData>::operator->((shared_ptr<LocType::LocationSoundData>*)field_1016);
            uVar2 = *(undefined4*)(lVar3 + 20);
        }
        return uVar2;
    }

    // 0x10042c6b0, 64 bytes, inline, placed by class name
    // LocType::GetBackgroundSoundRateMax() const
    undefined4 LocType::GetBackgroundSoundRateMax() {
        bool bVar1;
        undefined4 uVar2;
        long lVar3;

        bVar1 = field_1016->operator_cast_to_bool();
        uVar2 = 256;
        if (bVar1) {
            lVar3 =
                shared_ptr<LocType::LocationSoundData>::operator->((shared_ptr<LocType::LocationSoundData>*)field_1016);
            uVar2 = *(undefined4*)(lVar3 + 24);
        }
        return uVar2;
    }

    // 0x10042c6f0, 64 bytes, inline, placed by class name
    // LocType::GetRandomSoundMin() const
    undefined4 LocType::GetRandomSoundMin() {
        bool bVar1;
        undefined4 uVar2;
        long lVar3;

        bVar1 = field_1016->operator_cast_to_bool();
        uVar2 = 0;
        if (bVar1) {
            lVar3 =
                shared_ptr<LocType::LocationSoundData>::operator->((shared_ptr<LocType::LocationSoundData>*)field_1016);
            uVar2 = *(undefined4*)(lVar3 + 48);
        }
        return uVar2;
    }

    // 0x10042c730, 64 bytes, inline, placed by class name
    // LocType::GetRandomSoundMax() const
    undefined4 LocType::GetRandomSoundMax() {
        bool bVar1;
        undefined4 uVar2;
        long lVar3;

        bVar1 = field_1016->operator_cast_to_bool();
        uVar2 = 0;
        if (bVar1) {
            lVar3 =
                shared_ptr<LocType::LocationSoundData>::operator->((shared_ptr<LocType::LocationSoundData>*)field_1016);
            uVar2 = *(undefined4*)(lVar3 + 52);
        }
        return uVar2;
    }

    // 0x10042c770, 64 bytes, inline, placed by class name
    // LocType::GetDefaultAnimation() const
    undefined4 LocType::GetDefaultAnimation() {
        undefined4 uVar1;
        long lVar2;
        undefined4* puVar3;

        lVar2 = (&field_896)->end();
        uVar1 = 4294967295;
        if (lVar2 == 1) {
            puVar3 = (undefined4*)Array<LocType::AnimationWithWeights, eastl::allocator>::operator[](
                (Array<LocType::AnimationWithWeights, eastl::allocator>*)&field_896, 0);
            uVar1 = *puVar3;
        }
        return uVar1;
    }

    // 0x10042c8c0, 16 bytes, inline, placed by class name
    // LocType::HasParticles() const
    undefined1 LocType::HasParticles() {
        return m_hasParticles;
    }

    // 0x10042d3c0, 32 bytes, inline, placed by class name
    // LocType::IsMultiLoc() const
    byte LocType::IsMultiLoc() {
        byte bVar1;

        bVar1 = (&field_976)->empty();
        return bVar1 ^ 1;
    }

    // 0x10042d430, 16 bytes, inline, placed by class name
    // LocType::IsActive() const
    bool LocType::IsActive() {
        return field_940 == 1;
    }

    // 0x10042d4a0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LocType::GetPostOffset() const
    /* graphics::SceneViewData::GetStippleNearClipParams() const */

    float* graphics::SceneViewData::GetStippleNearClipParams() {
        return &m_stippleNearClipParams;
    }

    // 0x10042e6e0, 80 bytes, inline, placed by class name
    // LocType::RaiseEntities(LocShape, bool) const
    bool LocType::RaiseEntities(char param_2, int param_3) {
        if (param_3 == 0) {
            if ((LocShapes::IsCentrePieceShape(param_2) != '\0') && (field_948 == 1)) {
                return true;
            }
            if (param_2 == '\x16') {
                return field_952 != 0;
            }
        }
        return false;
    }

    // 0x10042e730, 32 bytes, inline, placed by class name
    // LocType::GetRaiseObjectGroundDecor(LocShape) const
    uint LocType::GetRaiseObjectGroundDecor(char param_2) {
        uint uVar1;

        uVar1 = 0;
        if (param_2 == '\x16') {
            uVar1 = field_952;
        }
        return uVar1;
    }

    // 0x10042eb10, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LocType::GetModelList() const
    /* BuildTerrainMain::GetRequestData() */

    undefined1* BuildTerrainMain::GetRequestData() {
        return m_requestData;
    }

    // 0x10042f3e0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LocType::GetVFXAttachmentsRawData() const
    /* ObjType::GetOffset2D() const */

    undefined1* ObjType::GetOffset2D() {
        return &field_872;
    }

    // 0x10042fe60, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LocType::GetResize() const
    /* graphics::BillboardBatchInstance::GetApproxMaterialInfoList() const */

    undefined1* graphics::BillboardBatchInstance::GetApproxMaterialInfoList() {
        return &field_616;
    }

    // 0x10042ff30, 16 bytes, inline, placed by class name
    // LocType::GetOffset() const
    undefined1* LocType::GetOffset() {
        return field_616 + 12;
    }

    // 0x10042ff40, 16 bytes, inline, placed by class name
    // LocType::GetHillChangeType() const
    uint LocType::GetHillChangeType() {
        return m_hillChangeType;
    }

    // 0x100430640, 16 bytes, inline, placed by class name
    // LocType::IsRuneTek5Only() const
    undefined1 LocType::IsRuneTek5Only() {
        return m_runeTek5Only;
    }

    // 0x100430d40, 32 bytes, inline, placed by class name
    // LocType::GetCustomBounding() const
    void LocType::GetCustomBounding() {
        (&field_856)->get();
    }

    // 0x100430e50, 16 bytes, inline, placed by class name
    // LocType::UseRandomAnimFrame() const
    undefined1 LocType::UseRandomAnimFrame() {
        return field_920;
    }

    // 0x100430e90, 16 bytes, inline, placed by class name
    // LocType::IsHighDetailOnly() const
    undefined1 LocType::IsHighDetailOnly() {
        return m_highDetailOnly;
    }

    // 0x1004310f0, 16 bytes, inline, placed by class name
    // LocType::UseFastPickingTests() const
    undefined1 LocType::UseFastPickingTests() {
        return field_864;
    }

    // 0x1004314d0, 16 bytes, inline, placed by class name
    // LocType::IsExamineOnly() const
    byte LocType::IsExamineOnly() {
        return m_examineOnly;
    }

    // 0x1004315a0, 16 bytes, inline, placed by class name
    // LocType::HasHighlightOverride() const
    bool LocType::HasHighlightOverride() {
        return m_highlightOverride != 9;
    }

    // 0x1004315b0, 16 bytes, inline, placed by class name
    // LocType::GetHighlightOverride() const
    uint LocType::GetHighlightOverride() {
        return m_highlightOverride;
    }

    // 0x100431b90, 128 bytes, base-object constructor, inline, placed by class name
    // LocType::MultiLocTypeCache::MultiLocTypeCache()
    void LocType::MultiLocTypeCache::MultiLocTypeCache() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        new (field_16, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_32, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_48) eastl::optional<option::EnumOptionToggle>();
        new (field_56, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x100431d10, 64 bytes, base-object destructor, inline, placed by class name
    // LocType::MultiLocTypeCache::~MultiLocTypeCache()
    void LocType::MultiLocTypeCache::~MultiLocTypeCache() {
        field_56->~shared_ptr();
        field_32->~shared_ptr();
        field_16->~shared_ptr();
        ~shared_ptr();
    }

    // 0x100431d90, 32 bytes, inline, placed by class name
    // LocType::LocationSoundData::GenerateBackgroundSoundRandomRate() const
    int LocType::LocationSoundData::GenerateBackgroundSoundRandomRate() {
        int iVar1;

        iVar1 = field_20;
        return math::Rand(field_24 - iVar1) + iVar1;
    }

    // 0x100449880, 32 bytes, inline, placed by class name
    // LocType::HasVFX() const
    byte LocType::HasVFX() {
        byte bVar1;

        bVar1 = (&field_872)->empty();
        return bVar1 ^ 1;
    }

    // 0x10051b040, 16 bytes, complete-object destructor, inline, placed by class name
    // LocType::~LocType(): jumps straight to the base-object destructor

    // 0x10051b050, 256 bytes, base-object destructor, inline, placed by class name
    // LocType::~LocType()
    void LocType::~LocType() {
        field_0 = &PTR__LocType_100f038c8;
        field_1016->~shared_ptr();
        (&field_976)->~Array();
        (&field_896)->~Array();
        (&field_872)->~Array();
        (&field_856)->~unique_ptr();
        (&field_800)->~Array();
        (&field_776)->~Array();
        (&field_752)->~Array();
        (&field_728)->~Array();
        (&field_704)->~Array();
        (&field_680)->~Array();
        (&field_656)->~Array();
        (&field_592)->~Array();
        (&field_568)->~Array();
        (&field_544)->~Array();
        (&field_520)->~Array();
        (&field_480)->~basic_string();
        (&field_56)->~fixed_vector();
        ~ConfigType();
    }

    // 0x100525640, 16 bytes, inline, placed by class name
    // LocType::GetMultiLocIndex() const
    int LocType::GetMultiLocIndex() {
        return m_multiLocIndex;
    }

    // 0x100527420, 112 bytes, inline, placed by class name
    // LocType::MakeLocationSoundData()
    void LocType::MakeLocationSoundData() {
        undefined1* this_00;
        MakeSharedPool<LocType::LocationSoundData, 512>* in_RSI;
        shared_ptr local_28;

        this_00 = field_1016;
        if (!this_00->operator_cast_to_bool()) {
            MakeSharedPool<LocType::LocationSoundData, 512>::MakeShared<>(&local_28, in_RSI);
            shared_ptr<LocType::LocationSoundData>::operator=((shared_ptr<LocType::LocationSoundData>*)this_00,
                                                              &local_28);
            local_28.~shared_ptr();
        }
        shared_ptr<LocType::LocationSoundData>::operator*((shared_ptr<LocType::LocationSoundData>*)this_00);
    }

    // 0x1005296e0, 32 bytes, deleting destructor, inline, placed by class name
    // LocType::~LocType()
    void LocType::~LocType() {
        ~LocType(this);
        operator_delete(this);
    }

    // 0x10052b0f0, 16 bytes, complete-object destructor, inline, placed by class name
    // LocType::LocationSoundData::~LocationSoundData(): jumps straight to the base-object destructor

    // 0x10052b100, 16 bytes, base-object destructor, inline, placed by class name
    // LocType::LocationSoundData::~LocationSoundData()
    void LocType::LocationSoundData::~LocationSoundData() {
        (&field_56)->~Array();
    }

    // 0x10052b2d0, 16 bytes, complete-object constructor, inline, placed by class name
    // LocType::LocationSoundData::LocationSoundData(): jumps straight to the base-object constructor

    // 0x10052b2e0, 128 bytes, base-object constructor, inline, placed by class name
    // LocType::LocationSoundData::LocationSoundData()
    void LocType::LocationSoundData::LocationSoundData() {
        new (this) MakeSharedPool<LocType::LocationSoundData, 512>();
        field_0 = 4294967295;
        field_8 = 1095216660480;
        field_16 = 0;
        field_20 = 256;
        field_24 = 256;
        field_28 = 0;
        field_32 = 0;
        field_36 = 1161527296;
        field_44 = 1065353216;
        field_52 = 0;
        new (&field_56) Array<int, eastl::allocator>();
        field_80 = 0;
        field_84 = 0;
        field_88 = 1161527296;
        field_96 = 1065353216;
    }

    // 0x100533b40, 16 bytes, complete-object constructor, inline, placed by class name
    // LocType::AnimationWithWeights::AnimationWithWeights(): jumps straight to the base-object constructor

    // 0x100533b50, 32 bytes, base-object constructor, inline, placed by class name
    // LocType::AnimationWithWeights::AnimationWithWeights()
    void LocType::AnimationWithWeights::AnimationWithWeights() {
        field_0 = 433791696895;
    }

    // 0x100625640, 16 bytes, inline, placed by class name
    // LocType::GetHillChangeParam() const
    uint LocType::GetHillChangeParam() {
        return m_hillChangeParam;
    }

    // 0x10064b6e0, 16 bytes, inline, placed by class name
    // LocType::IsFindable() const
    undefined1 LocType::IsFindable() {
        return m_findable;
    }

    // 0x10064b6f0, 16 bytes, inline, placed by class name
    // LocType::GetAnims() const
    undefined1* LocType::GetAnims() {
        return &field_896;
    }

    // 0x10064b700, 48 bytes, inline, placed by class name
    // LocType::IsPotentialGroundDecor() const
    bool LocType::IsPotentialGroundDecor() {
        if ((field_940 == 0) && (field_937 == '\0')) {
            return field_932 != 1;
        }
        return false;
    }

    // 0x10064b730, 32 bytes, inline, placed by class name
    // LocType::HasSound() const
    bool LocType::HasSound() {
        long lVar1;

        lVar1 = field_1016->end();
        return lVar1 != 0;
    }

    // 0x10064b750, 64 bytes, inline, placed by class name
    // LocType::GetBackgroundSoundShape() const
    undefined4 LocType::GetBackgroundSoundShape() {
        bool bVar1;
        undefined4 uVar2;
        long lVar3;

        bVar1 = field_1016->operator_cast_to_bool();
        uVar2 = 0;
        if (bVar1) {
            lVar3 =
                shared_ptr<LocType::LocationSoundData>::operator->((shared_ptr<LocType::LocationSoundData>*)field_1016);
            uVar2 = *(undefined4*)(lVar3 + 28);
        }
        return uVar2;
    }

    // 0x10064b790, 64 bytes, inline, placed by class name
    // LocType::GetBackgroundSoundDistanceFiltered() const
    bool LocType::GetBackgroundSoundDistanceFiltered() {
        bool bVar1;
        long lVar2;

        bVar1 = field_1016->operator_cast_to_bool();
        if (bVar1) {
            lVar2 =
                shared_ptr<LocType::LocationSoundData>::operator->((shared_ptr<LocType::LocationSoundData>*)field_1016);
            bVar1 = *(char*)(lVar2 + 32) != '\0';
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x10064b7d0, 64 bytes, inline, placed by class name
    // LocType::GetBackgroundSoundDistanceFilterFrequencyHzHigh() const
    undefined4 LocType::GetBackgroundSoundDistanceFilterFrequencyHzHigh() {
        long lVar1;
        undefined4 uVar3;

        if (field_1016->operator_cast_to_bool()) {
            lVar1 =
                shared_ptr<LocType::LocationSoundData>::operator->((shared_ptr<LocType::LocationSoundData>*)field_1016);
            uVar3 = *(undefined4*)(lVar1 + 36);
        } else {
            uVar3 = 1161527296;
        }
        return uVar3;
    }

    // 0x10064b810, 64 bytes, inline, placed by class name
    // LocType::GetBackgroundSoundDistanceFilterFrequencyHzLow() const
    undefined4 LocType::GetBackgroundSoundDistanceFilterFrequencyHzLow() {
        long lVar1;
        bool bVar2;
        undefined4 uVar3;

        bVar2 = field_1016->operator_cast_to_bool();
        uVar3 = 0;
        if (bVar2) {
            lVar1 =
                shared_ptr<LocType::LocationSoundData>::operator->((shared_ptr<LocType::LocationSoundData>*)field_1016);
            uVar3 = *(undefined4*)(lVar1 + 40);
        }
        return uVar3;
    }

    // 0x10064b850, 64 bytes, inline, placed by class name
    // LocType::GetBackgroundSoundDistanceFilterQ() const
    undefined4 LocType::GetBackgroundSoundDistanceFilterQ() {
        long lVar1;
        undefined4 uVar3;

        if (field_1016->operator_cast_to_bool()) {
            lVar1 =
                shared_ptr<LocType::LocationSoundData>::operator->((shared_ptr<LocType::LocationSoundData>*)field_1016);
            uVar3 = *(undefined4*)(lVar1 + 44);
        } else {
            uVar3 = 1065353216;
        }
        return uVar3;
    }

    // 0x10064b890, 64 bytes, inline, placed by class name
    // LocType::GetRandomSoundDistanceFiltered() const
    bool LocType::GetRandomSoundDistanceFiltered() {
        bool bVar1;
        long lVar2;

        bVar1 = field_1016->operator_cast_to_bool();
        if (bVar1) {
            lVar2 =
                shared_ptr<LocType::LocationSoundData>::operator->((shared_ptr<LocType::LocationSoundData>*)field_1016);
            bVar1 = *(char*)(lVar2 + 84) != '\0';
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x10064b8d0, 64 bytes, inline, placed by class name
    // LocType::GetRandomSoundDistanceFilterFrequencyHzHigh() const
    undefined4 LocType::GetRandomSoundDistanceFilterFrequencyHzHigh() {
        long lVar1;
        undefined4 uVar3;

        if (field_1016->operator_cast_to_bool()) {
            lVar1 =
                shared_ptr<LocType::LocationSoundData>::operator->((shared_ptr<LocType::LocationSoundData>*)field_1016);
            uVar3 = *(undefined4*)(lVar1 + 88);
        } else {
            uVar3 = 1161527296;
        }
        return uVar3;
    }

    // 0x10064b910, 64 bytes, inline, placed by class name
    // LocType::GetRandomSoundDistanceFilterFrequencyHzLow() const
    undefined4 LocType::GetRandomSoundDistanceFilterFrequencyHzLow() {
        long lVar1;
        bool bVar2;
        undefined4 uVar3;

        bVar2 = field_1016->operator_cast_to_bool();
        uVar3 = 0;
        if (bVar2) {
            lVar1 =
                shared_ptr<LocType::LocationSoundData>::operator->((shared_ptr<LocType::LocationSoundData>*)field_1016);
            uVar3 = *(undefined4*)(lVar1 + 92);
        }
        return uVar3;
    }

    // 0x10064b950, 64 bytes, inline, placed by class name
    // LocType::GetRandomSoundDistanceFilterQ() const
    undefined4 LocType::GetRandomSoundDistanceFilterQ() {
        long lVar1;
        undefined4 uVar3;

        if (field_1016->operator_cast_to_bool()) {
            lVar1 =
                shared_ptr<LocType::LocationSoundData>::operator->((shared_ptr<LocType::LocationSoundData>*)field_1016);
            uVar3 = *(undefined4*)(lVar1 + 96);
        } else {
            uVar3 = 1065353216;
        }
        return uVar3;
    }

} // namespace jag::game

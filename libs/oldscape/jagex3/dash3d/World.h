// libs/oldscape/jagex3/dash3d/World.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::dash3d {
    class world {
    public:
        class VisCalcParams;
        GetDrawDistance() const;
        GetLastEntityDrawOrder() const;
        GetGroundHeight(int, int, int) const;
        void GetSquare(int, int, int) const;
        long GetHeightIndex(int, int, int) const;
        long GetSquareIndex(int, int, int) const;
        world(int, int, int, int, Array<int, eastl::allocator> const&, NXTPix3D&);
        void ResetMap();
        ~world();
        void ResetAll();
        void SetSquare(int, int, int, shared_ptr<Square> const&);
        void SetOccluder(unsigned long, unsigned long, std::unique_ptr<Occlude, std::default_delete<Occlude>>&&);
        void FillBaseLevel(int);
        void PushDown(int, int);
        shared_ptr* GetOrCreateSquare(int, int, int);
        void ColourGround(int, int, int, int);
        void SetOcclude(int, int, int, int, int, int, int, int);
        void SetLayer(int, int, int, int);
        void SetGround(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int,
                       int);
        ulong SetGroundDecor(int, int, int, int, shared_ptr<ModelSource> const&, long long, int);
        void SetObj(int, int, int, int, shared_ptr<ModelSource> const&, long long, shared_ptr<ModelSource> const&,
                    shared_ptr<ModelSource> const&, EntityHighlight const&);
        int GetTableHeightOnTile(int, int, int) const;
        ulong GroundExists(int, int, int);
        ulong SetWall(int, int, int, int, shared_ptr<ModelSource> const&, shared_ptr<ModelSource> const&, int, int,
                      long long, int);
        ulong SetDecor(int, int, int, int, shared_ptr<ModelSource> const&, shared_ptr<ModelSource> const&, int, int,
                       int, int, long long, int);
        AddScenery(int, int, int, int, int, int, shared_ptr<ModelSource> const&, int, long long, int);
        SetSprite(int, int, int, int, int, int, int, int, shared_ptr<ModelSource> const&, int, bool, long long, int,
                  EntityHighlight const&, GridRect const&);
        void AddDynamic(int, int, int, int, int, shared_ptr<ModelSource> const&, int, long long, bool);
        AddDynamic(int, int, int, int, int, shared_ptr<ModelSource> const&, int, long long, bool,
                   EntityHighlight const&, GridRect const&);
        AddDynamic(int, int, int, int, int, shared_ptr<ModelSource> const&, int, long long, int, int, int, int,
                   EntityHighlight const&, GridRect const&);
        void RemoveSprites();
        void DelSprite(Sprite const&);
        void MoveDecor(int, int, int, int);
        void DelWall(int, int, int);
        void DelDecor(int, int, int);
        void DelLoc(int, int, int);
        void DelGroundDecor(int, int, int);
        void DelObj(int, int, int);
        void ResetMapArea(int, int, int, int, int);
        void ResetSprites(int, int, int, int);
        void SetDrawDistance(int);
        void ResetVisCalc(eastl::vector<int, BucketAllocatorEASTL>, int, int, int, int);
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>* GetWall(int, int, int) const;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>* GetDecor(int, int, int) const;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>* GetGroundDecor(int, int, int) const;
        shared_ptr<Decor>* GetScene(int, int, int) const;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>* GetGd(int, int, int) const;
        Nullable<LocLayer>* GetLocLayer(int, int, int, int) const;
        WallType(int, int, int);
        DecorType(int, int, int);
        SceneType(int, int, int);
        GdType(int, int, int);
        ulong TypeCode2(int, int, int, long long);
        void SetTileHighlight(int, int, int, EntityHighlight const&);
        bool IsValidSquare(int, int, int);
        void ShareLight(int, int, int);
        void ShareLightLoc(ModelUnlit&, int, int, int, int, int);
        void ShareLightGd(ModelUnlit&, int, int, int);
        int GetTileAvgYDif(rs2lib::CoordGrid const&, rs2lib::CoordGrid const&);
        int GetTileAvgY(rs2lib::CoordGrid const&);
        void Render2DGround(SharedArray<unsigned int>&, int, int, int, int, int, int);
        void GetTileVisibility(int, int);
        void GetTileVisDirtyAt(int, int, int, int);
        void GetTileVisDataAt(int, int, int, int);
        void SetTileVisDirtyAt(int, int, int, int, bool);
        ulong GetPointVisibility(int, int, int, int);
        void SetTileVisDataAt(int, int, int, int, bool);
        void GetPointVisDirtyAt(int, int, int, int);
        void GetPointVisDataAt(int, int, int, int);
        void SetPointVisDirtyAt(int, int, int, int, bool);
        IsPointVisible(int, int, int, int, int);
        void SetPointVisDataAt(int, int, int, int, bool);
        void SetMaxGroundPickingLevel(int);
        int ClampPitchAngle(int);
        void RequestGroundCoordsForOp(int, int, int, bool);
        bool HasValidGroundOpToExecute();
        void RequestExecuteGroundOp();
        void ResetGroundOp();
        void RenderFollow(NXTWorldRenderer*, int, int, int, int, int, int, int, int);
        void Render(NXTWorldRenderer*, int, int, int, int, int, int, int);
        void PrepRender(int, int, int, int, int, int);
        void SetVisCalcCameraAngle(int, int);
        void SubmitAllModelsRt7(int);
        void SubmitDebugPointLight(int);
        void UpdateMousePickingRSeven(int, int, int, int, int);
        void CalcOcclude();
        void Fill(shared_ptr<Square> const&, bool, int);
        void RenderAlwaysOnTopHighlights(int);
        void RenderAllSlow(int, int, int, int, int, int, int);
        void SubmitModelForRender(ModelSource&, int, int, int, int, int, int, int, int, long long, int,
                                  EntityHighlight const&);
        ulong GroundoOcluded(int, int, int);
        WallOccluded(int, int, int, int);
        SpriteOccluded(int, int, int, int);
        SpriteOccluded(int, int, int, int, int, int);
        int TextureLightCol(int, int);
        ulong InsideTriangle(int, int, int, int, int, int, int, int);
        void TransformWorldToScreenCoord(int, int, int, int&, int&);
        void GetOccluder(unsigned long, unsigned long);
        bool Occluded(int, int, int);
        void GetGroundHeightAtFinePos(int, int, int) const;
        GetHighlightOnTile(int, int, int) const;
        GetShowDebugPointLight();
        void SetShowDebugPointLight(bool);
        long GetOccluderIndex(unsigned long, unsigned long);
        GetVisVal(std::array<bool, 8386816ul> const&, int, int, int, int);
        SetVisVal(std::array<bool, 8386816ul>&, int, int, int, int, bool);
        GetPvisVal(std::array<bool, 9644832ul> const&, int, int, int, int);
        SetPvisVal(std::array<bool, 9644832ul>&, int, int, int, int, bool);
        static /* 12 bytes */ Z_CUT;           // = { 50, 0, 0 }
        static /* 48 bytes */ PRETAB;          // = { 19, 55, 38, 155, 255, 110, 137, 205, 76, 0, 0, 0 }
        static /* 48 bytes */ MIDTAB;          // = { 160, 192, 80, 96, 0, 144, 80, 48, 160, 0, 0, 0 }
        static /* 48 bytes */ POSTTAB;         // = { 76, 8, 137, 4, 0, 1, 38, 2, 19, 0, 0, 0 }
        static /* 48 bytes */ MIDDEP_16;       // = { 0, 0, 2, 0, 0, 2, 1, 1, 0, 0, 0, 0 }
        static /* 48 bytes */ MIDDEP_32;       // = { 2, 0, 0, 2, 0, 0, 0, 4, 4, 0, 0, 0 }
        static /* 48 bytes */ MIDDEP_64;       // = { 0, 4, 4, 8, 0, 0, 8, 0, 0, 0, 0, 0 }
        static /* 36 bytes */ MIDDEP_128;      // = { 1, 1, 0, 0, 0, 8, 0, 0, 8 }
        static /* 832 bytes */ MINIMAP_SHAPE;  // initialised in its definition
        static /* 256 bytes */ MINIMAP_ROTATE; // initialised in its definition
        static /* 4 bytes */ FOLLOW_CAMERA_LOWEST_RELATIVEANGLE_X;  // = 128
        static /* 4 bytes */ FOLLOW_CAMERA_HIGHEST_RELATIVEANGLE_X; // = 383
        static /* 4 bytes */ m_groundX;                             // = -1
        static /* 4 bytes */ m_groundY;                             // = -1
        static /* 4 bytes */ m_groundZ;                             // = -1
        static /* 4 bytes */ m_mouseoverGroundX;                    // = -1
        static /* 4 bytes */ m_mouseoverGroundY;                    // = -1
        static /* 4 bytes */ m_mouseoverGroundZ;                    // = -1
        static /* 4 bytes */ m_drawDistanceRange;                   // = 25
        static /* 4 bytes */ m_lowMem;
        static /* 4 bytes */ m_cameraSinX;
        static /* 4 bytes */ m_cameraCosX;
        static /* 4 bytes */ m_cameraSinY;
        static /* 4 bytes */ m_cameraCosY;
        static /* 4 bytes */ m_fillLeft;
        static /* 4 bytes */ m_maxLevel;
        static /* 4 bytes */ m_cycleNo;
        static /* 4 bytes */ m_minX;
        static /* 4 bytes */ m_maxX;
        static /* 4 bytes */ m_minZ;
        static /* 4 bytes */ m_maxZ;
        static /* 4 bytes */ m_gx;
        static /* 4 bytes */ m_gz;
        static /* 4 bytes */ m_cx;
        static /* 4 bytes */ m_cy;
        static /* 4 bytes */ m_cz;
        static /* 4 bytes */ m_click;
        static /* 4 bytes */ m_clickLev;
        static /* 4 bytes */ m_clickX;
        static /* 4 bytes */ m_clickY;
        static /* 12 bytes */ m_mouseoverGroundFine;
        static /* 4 bytes */ m_groundPickingLevel;
        static /* 4 bytes */ m_executeGroundOp;
        static /* 8 bytes */ m_pix3D;
        static /* 8 bytes */ m_worldRenderer;
        static /* 8 bytes */ m_modelLitRenderer;
        static /* 8 bytes */ m_modelLitRendererRt7;
        static /* 4 bytes */ m_cameraAngleXSlice;
        static /* 4 bytes */ m_cameraAngleYSlice;
        static VisCalcParams /* 40 bytes */ m_visCalcParams; // = VisCalcParams()
        static /* 4 bytes */ m_xOrig;
        static /* 4 bytes */ m_yOrig;
        static /* 4 bytes */ m_xClip;
        static /* 4 bytes */ m_yClip;
        static /* 4 bytes */ m_xClip2;
        static /* 4 bytes */ m_yClip2;
        static /* 8386816 bytes */ m_visBacking;
        static /* 8386816 bytes */ m_visBackingDirty;
        static /* 9644832 bytes */ m_pvisBacking;
        static /* 9644832 bytes */ m_pvisBackingDirty;

        // data members, from how the methods use this: 190176 bytes
        long field_0;        // offset 0
        shared_ptr* field_8; // offset 8
        char _unknown_16[1624];
        undefined1 field_1640; // offset 1640
        char _unknown_1641[16095];
        int field_17736; // offset 17736
        char _unknown_17740[4];
        undefined1 field_17744; // offset 17744
        char _unknown_17745[4055];
        int field_21800; // offset 21800
        int field_21804; // offset 21804
        int field_21808; // offset 21808
        char _unknown_21812[88300];
        Array* field_110112; // offset 110112
        int field_110120;    // offset 110120
        int field_110124;    // offset 110124
        char _unknown_110128[80048];
    };

    class world::VisCalcParams {
    public:
        VisCalcParams();
        ~VisCalcParams();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1000f70a0, 16 bytes, inline, placed by class name and debug map
    // world::GetDrawDistance() const
    undefined4 world::GetDrawDistance() {
        return m_drawDistanceRange;
    }

    // 0x1001107e0, 16 bytes, inline, placed by class name
    // world::GetLastEntityDrawOrder() const
    undefined1* world::GetLastEntityDrawOrder() {
        return &field_30072;
    }

    // 0x1001c57f0, 80 bytes, inline, placed by class name
    // world::GetGroundHeight(int, int, int) const
    undefined4 world::GetGroundHeight(int param_1, int param_2, int param_3) {
        long lVar1;
        long lVar2;

        lVar1 = field_110112->data();
        lVar2 = GetHeightIndex(this, param_1, param_2, param_3);
        return *(undefined4*)(lVar1 + lVar2 * 4);
    }

    // 0x1001c62a0, 48 bytes, inline, placed by class name
    // world::GetSquare(int, int, int) const
    void world::GetSquare(int param_1, int param_2, int param_3) {
        ulong uVar1;

        uVar1 = GetSquareIndex(this, param_1, param_2, param_3);
        Array<shared_ptr<Square>, eastl::allocator>::operator[](
            (Array<shared_ptr<Square>, eastl::allocator>*)&field_21816, uVar1);
    }

    // 0x1001dc590, 48 bytes, inline, placed by class name
    // world::GetHeightIndex(int, int, int) const
    long world::GetHeightIndex(int param_1, int param_2, int param_3) {
        return (long)(((field_21804 + 1) * param_1 + param_2) * (field_21808 + 1) + param_3);
    }

    // 0x1001dc5f0, 32 bytes, inline, placed by class name
    // world::GetSquareIndex(int, int, int) const
    long world::GetSquareIndex(int param_1, int param_2, int param_3) {
        return (long)((param_1 * field_21804 + param_2) * field_21808 + param_3);
    }

    // 0x1003068a0, 16 bytes, complete-object constructor, inline, placed by class name
    // world::VisCalcParams::VisCalcParams(): jumps straight to the base-object constructor

    // 0x1003068b0, 16 bytes, complete-object destructor, inline, placed by class name
    // world::VisCalcParams::~VisCalcParams(): jumps straight to the base-object destructor

    // 0x100307520, 64 bytes, inline, placed by class name
    // world::SetSquare(int, int, int, shared_ptr<Square> const&)
    void world::SetSquare(int param_1, int param_2, int param_3, shared_ptr* param_4) {
        ulong uVar1;
        shared_ptr<Square>* this_00;

        uVar1 = GetSquareIndex(this, param_1, param_2, param_3);
        this_00 = (shared_ptr<Square>*)Array<shared_ptr<Square>, eastl::allocator>::operator[](
            (Array<shared_ptr<Square>, eastl::allocator>*)&field_21816, uVar1);
        shared_ptr<Square>::operator=(this_00, param_4);
    }

    // 0x100307560, 64 bytes, inline, placed by class name
    // world::SetOccluder(unsigned long, unsigned long, std::unique_ptr<Occlude, std::default_delete<Occlude> >&&)
    /* world::SetOccluder(unsigned long, unsigned long,
   std::unique_ptr<Occlude,
   std::default_delete<Occlude> >&&) */

    void world::SetOccluder(ulong param_1, ulong param_2, unique_ptr* param_3) {
        ulong uVar1;
        unique_ptr<Occlude, std::default_delete<Occlude>>* this_00;

        uVar1 = GetOccluderIndex(param_1, param_2);
        this_00 = (unique_ptr<Occlude, std::default_delete<Occlude>>*)
            eastl::vector<std::unique_ptr<Occlude, std::default_delete<Occlude>>,
                          eastl::fixed_vector_allocator<8ul, 2000ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[](
                (vector<std::unique_ptr<Occlude, std::default_delete<Occlude>>,
                        eastl::fixed_vector_allocator<8ul, 2000ul, 8ul, 0ul, true, eastl::allocator>>*)&field_1696,
                uVar1);
        std::unique_ptr<Occlude, std::default_delete<Occlude>>::operator=(this_00, param_3);
    }

    // 0x100307980, 176 bytes, inline, placed by class name
    // world::GetOrCreateSquare(int, int, int)
    shared_ptr* world::GetOrCreateSquare(int param_1, int param_2, int param_3) {
        int iVar1;
        int iVar2;
        int iVar3;
        bool bVar4;
        shared_ptr* psVar5;
        shared_ptr local_50;
        int local_3c;
        int local_38;
        int local_34;

        local_3c = param_1;
        local_38 = param_2;
        local_34 = param_3;
        psVar5 = (shared_ptr*)GetSquare(this, param_1, param_2, param_3);
        bVar4 = operator!=(psVar5, (_func_decltype_nullptr*)0);
        iVar3 = local_34;
        iVar2 = local_38;
        iVar1 = local_3c;
        if (!bVar4) {
            make_shared<Square, int&, int&, int&>((jag*)&local_50, &local_3c, &local_38, &local_34);
            SetSquare(this, iVar1, iVar2, iVar3, &local_50);
            local_50.~shared_ptr();
            psVar5 = (shared_ptr*)GetSquare(this, local_3c, local_38, local_34);
        }
        return psVar5;
    }

    // 0x10030aac0, 80 bytes, inline, placed by class name
    // world::IsValidSquare(int, int, int)
    bool world::IsValidSquare(int param_1, int param_2, int param_3) {
        bool bVar1;
        shared_ptr* psVar2;

        bVar1 = false;
        if ((((-1 < param_1) && (param_1 < field_21800)) && (-1 < param_2)) &&
            ((bVar1 = false, param_2 < field_21804 && (-1 < param_3)))) {
            if (field_21808 <= param_3) {
                return false;
            }
            psVar2 = (shared_ptr*)GetSquare(this, param_1, param_2, param_3);
            bVar1 = operator!=(psVar2, (_func_decltype_nullptr*)0);
        }
        return bVar1;
    }

    // 0x10030be20, 32 bytes, inline, placed by class name
    // world::GetTileVisDirtyAt(int, int, int, int)
    void world::GetTileVisDirtyAt(int param_1, int param_2, int param_3, int param_4) {
        GetVisVal((array*)&m_visBackingDirty, param_1, param_2, param_3, param_4);
    }

    // 0x10030be40, 32 bytes, inline, placed by class name
    // world::GetTileVisDataAt(int, int, int, int)
    void world::GetTileVisDataAt(int param_1, int param_2, int param_3, int param_4) {
        GetVisVal((array*)&m_visBacking, param_1, param_2, param_3, param_4);
    }

    // 0x10030be60, 32 bytes, inline, placed by class name
    // world::SetTileVisDirtyAt(int, int, int, int, bool)
    void world::SetTileVisDirtyAt(int param_1, int param_2, int param_3, int param_4, bool param_5) {
        SetVisVal((array*)&m_visBackingDirty, param_1, param_2, param_3, param_4, param_5);
    }

    // 0x10030c010, 32 bytes, inline, placed by class name
    // world::SetTileVisDataAt(int, int, int, int, bool)
    void world::SetTileVisDataAt(int param_1, int param_2, int param_3, int param_4, bool param_5) {
        SetVisVal((array*)&m_visBacking, param_1, param_2, param_3, param_4, param_5);
    }

    // 0x10030c030, 32 bytes, inline, placed by class name
    // world::GetPointVisDirtyAt(int, int, int, int)
    void world::GetPointVisDirtyAt(int param_1, int param_2, int param_3, int param_4) {
        GetPvisVal((array*)&m_pvisBackingDirty, param_1, param_2, param_3, param_4);
    }

    // 0x10030c050, 32 bytes, inline, placed by class name
    // world::GetPointVisDataAt(int, int, int, int)
    void world::GetPointVisDataAt(int param_1, int param_2, int param_3, int param_4) {
        GetPvisVal((array*)&m_pvisBacking, param_1, param_2, param_3, param_4);
    }

    // 0x10030c070, 32 bytes, inline, placed by class name
    // world::SetPointVisDirtyAt(int, int, int, int, bool)
    void world::SetPointVisDirtyAt(int param_1, int param_2, int param_3, int param_4, bool param_5) {
        SetPvisVal((array*)&m_pvisBackingDirty, param_1, param_2, param_3, param_4, param_5);
    }

    // 0x10030c1d0, 32 bytes, inline, placed by class name
    // world::SetPointVisDataAt(int, int, int, int, bool)
    void world::SetPointVisDataAt(int param_1, int param_2, int param_3, int param_4, bool param_5) {
        SetPvisVal((array*)&m_pvisBacking, param_1, param_2, param_3, param_4, param_5);
    }

    // 0x10030ce00, 32 bytes, inline, placed by class name
    // world::SetVisCalcCameraAngle(int, int)
    void world::SetVisCalcCameraAngle(int param_1, int param_2) {
        m_cameraAngleXSlice = param_1;
        m_cameraAngleYSlice = param_2;
    }

    // 0x1003130b0, 64 bytes, inline, placed by class name
    // world::GetOccluder(unsigned long, unsigned long)
    void world::GetOccluder(ulong param_1, ulong param_2) {
        ulong uVar1;
        unique_ptr<Occlude, std::default_delete<Occlude>>* this_00;

        uVar1 = GetOccluderIndex(param_1, param_2);
        this_00 = (unique_ptr<Occlude, std::default_delete<Occlude>>*)
            eastl::vector<std::unique_ptr<Occlude, std::default_delete<Occlude>>,
                          eastl::fixed_vector_allocator<8ul, 2000ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[](
                (vector<std::unique_ptr<Occlude, std::default_delete<Occlude>>,
                        eastl::fixed_vector_allocator<8ul, 2000ul, 8ul, 0ul, true, eastl::allocator>>*)&field_1696,
                uVar1);
        std::unique_ptr<Occlude, std::default_delete<Occlude>>::get(this_00);
    }

    // 0x100326a80, 16 bytes, base-object constructor, inline, placed by class name
    // world::VisCalcParams::VisCalcParams()
    void world::VisCalcParams::VisCalcParams() {
        eastl::vector<int, BucketAllocatorEASTL>::vector();
    }

    // 0x100326a90, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // world::VisCalcParams::~VisCalcParams()
    /* eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int,
   BucketAllocatorEASTL> >::~vector_set() */

    void eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>::
        ~vector_set(
            vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>* this) {
        ~vector_set(this);
    }

    // 0x100326de0, 16 bytes, inline, placed by class name
    // world::GetOccluderIndex(unsigned long, unsigned long)
    long world::GetOccluderIndex(ulong param_1, ulong param_2) {
        return param_1 * 500 + param_2;
    }

    // 0x100326f20, 48 bytes, inline, placed by class name
    // world::GetVisVal(std::array<bool, 8386816ul> const&, int, int, int, int)
    /* world::GetVisVal(std::array<bool, 8386816ul> const&, int, int, int, int)
    */

    undefined1 world::GetVisVal(array* param_1, int param_2, int param_3, int param_4, int param_5) {
        undefined1* puVar1;

        puVar1 = (undefined1*)std::array<bool, 8386816ul>::operator[](
            (array<bool, 8386816ul>*)param_1, (long)(param_4 * 181 + param_3 * 32761 + param_2 * 1048352 + param_5));
        return *puVar1;
    }

    // 0x100326f60, 64 bytes, inline, placed by class name
    // world::SetVisVal(std::array<bool, 8386816ul>&, int, int, int, int, bool)
    /* world::SetVisVal(std::array<bool, 8386816ul>&, int, int, int, int, bool)
    */

    undefined4 world::SetVisVal(array* param_1, int param_2, int param_3, int param_4, int param_5, bool param_6) {
        undefined8 uVar1;
        undefined3 in_register_00000089;

        uVar1 = std::array<bool, 8386816ul>::operator[](
            (array<bool, 8386816ul>*)param_1, (long)(param_4 * 181 + param_3 * 32761 + param_2 * 1048352 + param_5));
        *(bool*)uVar1 = param_6;
        return CONCAT31(in_register_00000089, param_6);
    }

    // 0x100326fb0, 48 bytes, inline, placed by class name
    // world::GetPvisVal(std::array<bool, 9644832ul> const&, int, int, int, int)
    /* world::GetPvisVal(std::array<bool, 9644832ul> const&, int, int, int, int)
    */

    undefined1 world::GetPvisVal(array* param_1, int param_2, int param_3, int param_4, int param_5) {
        undefined1* puVar1;

        puVar1 = (undefined1*)std::array<bool, 9644832ul>::operator[](
            (array<bool, 9644832ul>*)param_1, (long)(param_4 * 183 + param_3 * 33489 + param_2 * 1071648 + param_5));
        return *puVar1;
    }

    // 0x100326ff0, 64 bytes, inline, placed by class name
    // world::SetPvisVal(std::array<bool, 9644832ul>&, int, int, int, int, bool)
    /* world::SetPvisVal(std::array<bool, 9644832ul>&, int, int, int, int, bool)
    */

    undefined4 world::SetPvisVal(array* param_1, int param_2, int param_3, int param_4, int param_5, bool param_6) {
        undefined8 uVar1;
        undefined3 in_register_00000089;

        uVar1 = std::array<bool, 9644832ul>::operator[](
            (array<bool, 9644832ul>*)param_1, (long)(param_4 * 183 + param_3 * 33489 + param_2 * 1071648 + param_5));
        *(bool*)uVar1 = param_6;
        return CONCAT31(in_register_00000089, param_6);
    }

} // namespace jag::oldscape::dash3d

namespace jag::oldscape {
    class WorldSwitcherStructure {
    public:
        WorldSwitcherStructure();

        // data members, from how the methods use this: 37 bytes
        char _unknown_0[36];
        undefined1 field_36; // offset 36
    };

    // 0x1000f7780, 32 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_Common::IsLogicThread() const
    bool OSRenderCore_LogicThread_Common::IsLogicThread() {
        long lVar1;
        long lVar2;

        lVar1 = field_8;
        lVar2 = this_thread::GetThreadID();
        return lVar1 == lVar2;
    }

} // namespace jag::oldscape

// libs/oldscape/jagex3/dash3d/World.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::dash3d {
    class world {
    public:
        class VisCalcParams;
        uint32_t GetDrawDistance() const;
        uint8_t* GetLastEntityDrawOrder() const;
        uint32_t GetGroundHeight(int arg1, int arg2, int arg3) const;
        void GetSquare(int arg1, int arg2, int arg3) const;
        long GetHeightIndex(int arg1, int arg2, int arg3) const;
        long GetSquareIndex(int arg1, int arg2, int arg3) const;
        world(int arg1, int arg2, int arg3, int arg4, const Array<int>& arg5, NXTPix3D& nxtPix3D);
        void ResetMap();
        ~world();
        void ResetAll();
        void SetSquare(int arg1, int arg2, int arg3, const shared_ptr<Square>& square);
        void SetOccluder(unsigned long arg1, unsigned long arg2, std::unique_ptr<Occlude>&& occlude);
        void FillBaseLevel(int arg1);
        void PushDown(int arg1, int arg2);
        shared_ptr<midi2::MidiPlayerMainThread>* GetOrCreateSquare(int arg1, int arg2, int arg3);
        void ColourGround(int arg1, int arg2, int arg3, int arg4);
        void SetOcclude(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8);
        void SetLayer(int arg1, int arg2, int arg3, int arg4);
        void SetGround(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9,
                       int arg10, int arg11, int arg12, int arg13, int arg14, int arg15, int arg16, int arg17,
                       int arg18, int arg19, int arg20);
        unsigned long SetGroundDecor(int arg1, int arg2, int arg3, int arg4, const shared_ptr<ModelSource>& modelSource,
                                     long long arg6, int arg7);
        void SetObj(int arg1, int arg2, int arg3, int arg4, const shared_ptr<ModelSource>& modelSource1, long long arg6,
                    const shared_ptr<ModelSource>& modelSource2, const shared_ptr<ModelSource>& modelSource3,
                    const EntityHighlight& entityHighlight);
        int GetTableHeightOnTile(int arg1, int arg2, int arg3) const;
        unsigned long GroundExists(int arg1, int arg2, int arg3);
        unsigned long SetWall(int arg1, int arg2, int arg3, int arg4, const shared_ptr<ModelSource>& modelSource1,
                              const shared_ptr<ModelSource>& modelSource2, int arg7, int arg8, long long arg9,
                              int arg10);
        unsigned long SetDecor(int arg1, int arg2, int arg3, int arg4, const shared_ptr<ModelSource>& modelSource1,
                               const shared_ptr<ModelSource>& modelSource2, int arg7, int arg8, int arg9, int arg10,
                               long long arg11, int arg12);
        uint64_t AddScenery(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6,
                            const shared_ptr<ModelSource>& modelSource, int arg8, long long arg9, int arg10);
        uint64_t SetSprite(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                           const shared_ptr<ModelSource>& modelSource, int arg10, bool arg11, long long arg12,
                           int arg13, const EntityHighlight& entityHighlight, const GridRect& gridRect);
        void AddDynamic(int arg1, int arg2, int arg3, int arg4, int arg5, const shared_ptr<ModelSource>& modelSource,
                        int arg7, long long arg8, bool arg9);
        uint64_t AddDynamic(int arg1, int arg2, int arg3, int arg4, int arg5,
                            const shared_ptr<ModelSource>& modelSource, int arg7, long long arg8, bool arg9,
                            const EntityHighlight& entityHighlight, const GridRect& gridRect);
        uint64_t AddDynamic(int arg1, int arg2, int arg3, int arg4, int arg5,
                            const shared_ptr<ModelSource>& modelSource, int arg7, long long arg8, int arg9, int arg10,
                            int arg11, int arg12, const EntityHighlight& entityHighlight, const GridRect& gridRect);
        void RemoveSprites();
        void DelSprite(const Sprite& sprite);
        void MoveDecor(int arg1, int arg2, int arg3, int arg4);
        void DelWall(int arg1, int arg2, int arg3);
        void DelDecor(int arg1, int arg2, int arg3);
        void DelLoc(int arg1, int arg2, int arg3);
        void DelGroundDecor(int arg1, int arg2, int arg3);
        void DelObj(int arg1, int arg2, int arg3);
        void ResetMapArea(int arg1, int arg2, int arg3, int arg4, int arg5);
        void ResetSprites(int arg1, int arg2, int arg3, int arg4);
        void SetDrawDistance(int arg1);
        void ResetVisCalc(eastl::vector<int> arg1, int arg2, int arg3, int arg4, int arg5);
        auto GetWall(int arg1, int arg2, int arg3) const;
        auto GetDecor(int arg1, int arg2, int arg3) const;
        auto GetGroundDecor(int arg1, int arg2, int arg3) const;
        auto GetScene(int arg1, int arg2, int arg3) const;
        auto GetGd(int arg1, int arg2, int arg3) const;
        auto GetLocLayer(int arg1, int arg2, int arg3, int arg4) const;
        uint64_t WallType(int arg1, int arg2, int arg3);
        uint64_t DecorType(int arg1, int arg2, int arg3);
        uint64_t SceneType(int arg1, int arg2, int arg3);
        uint64_t GdType(int arg1, int arg2, int arg3);
        unsigned long TypeCode2(int arg1, int arg2, int arg3, long long arg4);
        void SetTileHighlight(int arg1, int arg2, int arg3, const EntityHighlight& entityHighlight);
        bool IsValidSquare(int arg1, int arg2, int arg3);
        void ShareLight(int arg1, int arg2, int arg3);
        void ShareLightLoc(ModelUnlit& modelUnlit, int arg2, int arg3, int arg4, int arg5, int arg6);
        void ShareLightGd(ModelUnlit& modelUnlit, int arg2, int arg3, int arg4);
        int GetTileAvgYDif(const rs2lib::CoordGrid& coordGrid1, const rs2lib::CoordGrid& coordGrid2);
        int GetTileAvgY(const rs2lib::CoordGrid& coordGrid);
        void Render2DGround(SharedArray<unsigned int>& sharedArray, int arg2, int arg3, int arg4, int arg5, int arg6,
                            int arg7);
        void GetTileVisibility(int arg1, int arg2);
        void GetTileVisDirtyAt(int arg1, int arg2, int arg3, int arg4);
        void GetTileVisDataAt(int arg1, int arg2, int arg3, int arg4);
        void SetTileVisDirtyAt(int arg1, int arg2, int arg3, int arg4, bool arg5);
        unsigned long GetPointVisibility(int arg1, int arg2, int arg3, int arg4);
        void SetTileVisDataAt(int arg1, int arg2, int arg3, int arg4, bool arg5);
        void GetPointVisDirtyAt(int arg1, int arg2, int arg3, int arg4);
        void GetPointVisDataAt(int arg1, int arg2, int arg3, int arg4);
        void SetPointVisDirtyAt(int arg1, int arg2, int arg3, int arg4, bool arg5);
        void IsPointVisible(int arg1, int arg2, int arg3, int arg4, int arg5);
        void SetPointVisDataAt(int arg1, int arg2, int arg3, int arg4, bool arg5);
        void SetMaxGroundPickingLevel(int arg1);
        int ClampPitchAngle(int arg1);
        void RequestGroundCoordsForOp(int arg1, int arg2, int arg3, bool arg4);
        bool HasValidGroundOpToExecute();
        void RequestExecuteGroundOp();
        void ResetGroundOp();
        void RenderFollow(NXTWorldRenderer* nxtWorldRenderer, int arg2, int arg3, int arg4, int arg5, int arg6,
                          int arg7, int arg8, int arg9);
        void Render(NXTWorldRenderer* nxtWorldRenderer, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                    int arg8);
        void PrepRender(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
        void SetVisCalcCameraAngle(int arg1, int arg2);
        void SubmitAllModelsRt7(int arg1);
        void SubmitDebugPointLight(int arg1);
        void UpdateMousePickingRSeven(int arg1, int arg2, int arg3, int arg4, int arg5);
        void CalcOcclude();
        void Fill(const shared_ptr<Square>& square, bool arg2, int arg3);
        void RenderAlwaysOnTopHighlights(int arg1);
        void RenderAllSlow(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
        void SubmitModelForRender(ModelSource& modelSource, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                  int arg8, int arg9, long long arg10, int arg11,
                                  const EntityHighlight& entityHighlight);
        unsigned long GroundoOcluded(int arg1, int arg2, int arg3);
        uint64_t WallOccluded(int arg1, int arg2, int arg3, int arg4);
        uint64_t SpriteOccluded(int arg1, int arg2, int arg3, int arg4);
        void SpriteOccluded(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
        int TextureLightCol(int arg1, int arg2);
        unsigned long InsideTriangle(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8);
        void TransformWorldToScreenCoord(int arg1, int arg2, int arg3, int& arg4, int& arg5);
        void GetOccluder(unsigned long arg1, unsigned long arg2);
        bool Occluded(int arg1, int arg2, int arg3);
        void GetGroundHeightAtFinePos(int arg1, int arg2, int arg3) const;
        EntityHighlight* GetHighlightOnTile(int arg1, int arg2, int arg3) const;
        uint8_t GetShowDebugPointLight();
        void SetShowDebugPointLight(bool arg1);
        long GetOccluderIndex(unsigned long arg1, unsigned long arg2);
        void GetVisVal(const std::array<bool, 8386816ul>& arg1, int arg2, int arg3, int arg4, int arg5);
        void SetVisVal(std::array<bool, 8386816ul>& arg1, int arg2, int arg3, int arg4, int arg5, bool arg6);
        void GetPvisVal(const std::array<bool, 9644832ul>& arg1, int arg2, int arg3, int arg4, int arg5);
        void SetPvisVal(std::array<bool, 9644832ul>& arg1, int arg2, int arg3, int arg4, int arg5, bool arg6);
        static int32_t Z_CUT[3];                              // = { 50, 0, 0 }
        static int32_t PRETAB[12];                            // = { 19, 55, 38, 155, 255, 110, 137, 205, 76, 0, 0, 0 }
        static int32_t MIDTAB[12];                            // = { 160, 192, 80, 96, 0, 144, 80, 48, 160, 0, 0, 0 }
        static int32_t POSTTAB[12];                           // = { 76, 8, 137, 4, 0, 1, 38, 2, 19, 0, 0, 0 }
        static int32_t MIDDEP_16[12];                         // = { 0, 0, 2, 0, 0, 2, 1, 1, 0, 0, 0, 0 }
        static int32_t MIDDEP_32[12];                         // = { 2, 0, 0, 2, 0, 0, 0, 4, 4, 0, 0, 0 }
        static int32_t MIDDEP_64[12];                         // = { 0, 4, 4, 8, 0, 0, 8, 0, 0, 0, 0, 0 }
        static int32_t MIDDEP_128[9];                         // = { 1, 1, 0, 0, 0, 8, 0, 0, 8 }
        static int32_t MINIMAP_SHAPE[208];                    // initialised in its definition
        static int32_t MINIMAP_ROTATE[64];                    // initialised in its definition
        static int32_t FOLLOW_CAMERA_LOWEST_RELATIVEANGLE_X;  // = 128
        static int32_t FOLLOW_CAMERA_HIGHEST_RELATIVEANGLE_X; // = 383
        static int32_t m_groundX;                             // = -1
        static int32_t m_groundY;                             // = -1
        static int32_t m_groundZ;                             // = -1
        static int32_t m_mouseoverGroundX;                    // = -1
        static int32_t m_mouseoverGroundY;                    // = -1
        static int32_t m_mouseoverGroundZ;                    // = -1
        static int32_t m_drawDistanceRange;                   // = 25
        static int32_t m_lowMem;
        static int32_t m_cameraSinX;
        static int32_t m_cameraCosX;
        static int32_t m_cameraSinY;
        static int32_t m_cameraCosY;
        static int32_t m_fillLeft;
        static int32_t m_maxLevel;
        static int32_t m_cycleNo;
        static int32_t m_minX;
        static int32_t m_maxX;
        static int32_t m_minZ;
        static int32_t m_maxZ;
        static int32_t m_gx;
        static int32_t m_gz;
        static int32_t m_cx;
        static int32_t m_cy;
        static int32_t m_cz;
        static int32_t m_click;
        static int32_t m_clickLev;
        static int32_t m_clickX;
        static int32_t m_clickY;
        static eastl::basic_string::Layout m_mouseoverGroundFine;
        static int32_t m_groundPickingLevel;
        static int32_t m_executeGroundOp;
        static int64_t m_pix3D;
        static int64_t m_worldRenderer;
        static int64_t m_modelLitRenderer;
        static int64_t m_modelLitRendererRt7;
        static int32_t m_cameraAngleXSlice;
        static int32_t m_cameraAngleYSlice;
        static VisCalcParams m_visCalcParams; // = VisCalcParams()
        static int32_t m_xOrig;
        static int32_t m_yOrig;
        static int32_t m_xClip;
        static int32_t m_yClip;
        static int32_t m_xClip2;
        static int32_t m_yClip2;
        static std::array<bool, _8386816ul> m_visBacking;
        static std::array<bool, 8386816ul> m_visBackingDirty;
        static std::array<bool, _9644832ul> m_pvisBacking;
        static std::array<bool, 9644832ul> m_pvisBackingDirty;

    private:
        long field_0;
        shared_ptr<game::LightSource>* field_8;
        uint8_t _unknown_16[17720];
        int field_17736;
        uint8_t _unknown_17740[4060];
        int field_21800;
        int field_21804;
        int field_21808;
        uint8_t _unknown_21812[88300];
        Array<int>* field_110112;
        int field_110120;
        int field_110124;
        uint8_t _unknown_110128[80048];
    };

    class world::VisCalcParams {
    public:
        VisCalcParams();
        ~VisCalcParams();

        uint8_t _unknown_0[1];
    };

    // 0x1000f70a0
    uint32_t world::GetDrawDistance() const {
        return m_drawDistanceRange;
    }

    // 0x1001107e0
    uint8_t* world::GetLastEntityDrawOrder() const {
        return &field_30072;
    }

    // 0x1001c57f0
    uint32_t world::GetGroundHeight(int arg1, int arg2, int arg3) const {
        long lVar1 = field_110112->data();
        long lVar2 = GetHeightIndex(arg1, arg2, arg3);
        return *(uint32_t*)(lVar1 + lVar2 * 4);
    }

    // 0x1001c62a0
    void world::GetSquare(int arg1, int arg2, int arg3) const {
        unsigned long arg1_00 = GetSquareIndex(arg1, arg2, arg3);
        field_21816[arg1_00];
    }

    // 0x1001dc590
    long world::GetHeightIndex(int arg1, int arg2, int arg3) const {
        return (long)(((field_21804 + 1) * arg1 + arg2) * (field_21808 + 1) + arg3);
    }

    // 0x1001dc5f0
    long world::GetSquareIndex(int arg1, int arg2, int arg3) const {
        return (long)((arg1 * field_21804 + arg2) * field_21808 + arg3);
    }

    // 0x100307520
    void world::SetSquare(int arg1, int arg2, int arg3, const shared_ptr<Square>& square) {
        unsigned long arg1_00 = GetSquareIndex(arg1, arg2, arg3);
        shared_ptr<Square>* this_00 = &field_21816[arg1_00];
        *this_00 = square;
    }

    // 0x100307560
    void world::SetOccluder(unsigned long arg1, unsigned long arg2, std::unique_ptr<Occlude>&& occlude) {
        unsigned long arg1_00 = GetOccluderIndex(arg1, arg2);
        unique_ptr<Occlude>* this_00 = &field_1696[arg1_00];
        *this_00 = occlude;
    }

    // 0x100307980
    shared_ptr<midi2::MidiPlayerMainThread>* world::GetOrCreateSquare(int arg1, int arg2, int arg3) {
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        ReturnValue local_50;

        int local_3c = arg1;
        int local_38 = arg2;
        int local_34 = arg3;
        midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(arg1, arg2, arg3);
        bool bVar1 = *midiPlayerMainThread != nullptr;
        int arg3_00 = local_34;
        int arg2_00 = local_38;
        int arg1_00 = local_3c;
        if (!bVar1) {
            make_shared<Square, int&, int&, int&>(&local_50, &local_3c, &local_38, &local_34);
            SetSquare(arg1_00, arg2_00, arg3_00, local_50);
            midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(local_3c, local_38, local_34);
        }
        return midiPlayerMainThread;
    }

    // 0x10030aac0
    bool world::IsValidSquare(int arg1, int arg2, int arg3) {
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;

        bool bVar1 = false;
        if ((((-1 < arg1) && (arg1 < field_21800)) && (-1 < arg2)) &&
            ((bVar1 = false, arg2 < field_21804 && (-1 < arg3)))) {
            if (field_21808 <= arg3) {
                return false;
            }
            midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(arg1, arg2, arg3);
            bVar1 = *midiPlayerMainThread != nullptr;
        }
        return bVar1;
    }

    // 0x10030be20
    void world::GetTileVisDirtyAt(int arg1, int arg2, int arg3, int arg4) {
        GetVisVal((array<bool, _8386816ul>*)&m_visBackingDirty, arg1, arg2, arg3, arg4);
    }

    // 0x10030be40
    void world::GetTileVisDataAt(int arg1, int arg2, int arg3, int arg4) {
        GetVisVal((array<bool, _8386816ul>*)&m_visBacking, arg1, arg2, arg3, arg4);
    }

    // 0x10030be60
    void world::SetTileVisDirtyAt(int arg1, int arg2, int arg3, int arg4, bool arg5) {
        SetVisVal((array<bool, _8386816ul>*)&m_visBackingDirty, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x10030c010
    void world::SetTileVisDataAt(int arg1, int arg2, int arg3, int arg4, bool arg5) {
        SetVisVal((array<bool, _8386816ul>*)&m_visBacking, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x10030c030
    void world::GetPointVisDirtyAt(int arg1, int arg2, int arg3, int arg4) {
        GetPvisVal((array<bool, _9644832ul>*)&m_pvisBackingDirty, arg1, arg2, arg3, arg4);
    }

    // 0x10030c050
    void world::GetPointVisDataAt(int arg1, int arg2, int arg3, int arg4) {
        GetPvisVal((array<bool, _9644832ul>*)&m_pvisBacking, arg1, arg2, arg3, arg4);
    }

    // 0x10030c070
    void world::SetPointVisDirtyAt(int arg1, int arg2, int arg3, int arg4, bool arg5) {
        SetPvisVal((array<bool, _9644832ul>*)&m_pvisBackingDirty, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x10030c1d0
    void world::SetPointVisDataAt(int arg1, int arg2, int arg3, int arg4, bool arg5) {
        SetPvisVal((array<bool, _9644832ul>*)&m_pvisBacking, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x10030ce00
    void world::SetVisCalcCameraAngle(int arg1, int arg2) {
        m_cameraAngleXSlice = arg1;
        m_cameraAngleYSlice = arg2;
    }

    // 0x1003130b0
    void world::GetOccluder(unsigned long arg1, unsigned long arg2) {
        unsigned long arg1_00 = GetOccluderIndex(arg1, arg2);
        ((unique_ptr<Occlude>*)field_1696[arg1_00])->get();
    }

    // 0x100326a80
    world::VisCalcParams::VisCalcParams() : eastl::vector<int, BucketAllocatorEASTL>() {}

    // 0x100326a90
    world::VisCalcParams::~VisCalcParams() {
        ~vector_set(this);
    }

    // 0x100326de0
    long world::GetOccluderIndex(unsigned long arg1, unsigned long arg2) {
        return arg1 * 500 + arg2;
    }

    // 0x100326f20
    void world::GetVisVal(const std::array<bool, 8386816ul>& arg1, int arg2, int arg3, int arg4, int arg5) {
        uint8_t* puVar1 = &arg1[(long)(arg4 * 181 + arg3 * 32761 + arg2 * 1048352 + arg5)];
        return *puVar1;
    }

    // 0x100326f60
    void world::SetVisVal(std::array<bool, 8386816ul>& arg1, int arg2, int arg3, int arg4, int arg5, bool arg6) {
        uint64_t uVar1 = arg1[(long)(arg4 * 181 + arg3 * 32761 + arg2 * 1048352 + arg5)];
        *(bool*)uVar1 = arg6;
        return arg6;
    }

    // 0x100326fb0
    void world::GetPvisVal(const std::array<bool, 9644832ul>& arg1, int arg2, int arg3, int arg4, int arg5) {
        uint8_t* puVar1 = &arg1[(long)(arg4 * 183 + arg3 * 33489 + arg2 * 1071648 + arg5)];
        return *puVar1;
    }

    // 0x100326ff0
    void world::SetPvisVal(std::array<bool, 9644832ul>& arg1, int arg2, int arg3, int arg4, int arg5, bool arg6) {
        uint64_t uVar1 = arg1[(long)(arg4 * 183 + arg3 * 33489 + arg2 * 1071648 + arg5)];
        *(bool*)uVar1 = arg6;
        return arg6;
    }

} // namespace jag::oldscape::dash3d

namespace jag::oldscape {
    class WorldSwitcherStructure {
    public:
        WorldSwitcherStructure();

    private:
        uint8_t _unknown_0[36];
        uint8_t field_36;
    };

    // 0x1000f7780
    bool OSRenderCore_LogicThread_Common::IsLogicThread() const {
        long lVar1 = field_8;
        long lVar2 = this_thread::GetThreadID();
        return lVar1 == lVar2;
    }

} // namespace jag::oldscape

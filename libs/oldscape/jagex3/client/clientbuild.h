// libs/oldscape/jagex3/client/clientbuild.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape {
    class ClientBuild {
    public:
        void SetApplyBlobShadows(bool);
        GetApplyBlobShadows();
        void Write3DArray<signed char>(Array<signed char, eastl::allocator>*, int, int, int, signed char);
        signed char Read3DArray<signed char>(Array<signed char, eastl::allocator>*, int, int, int);
        int Read3DArray<int>(Array<int, eastl::allocator>*, int, int, int);
        void Init();
        void Quit();
        void SetToSea(int, int, int, int);
        void Write3DArray<short>(Array<short, eastl::allocator>*, int, int, int, short);
        void Write3DArray<int>(Array<int, eastl::allocator>*, int, int, int, int);
        void FadeAdjacent(int, int, int, int);
        void LoadGround(PacketJ<Array<unsigned char, eastl::allocator>>&, int, int, int, int,
                        eastl::fixed_vector<movement::CollisionMap, 4ul, true, eastl::allocator>&);
        void LoadGroundSquare(PacketJ<Array<unsigned char, eastl::allocator>>&, int, int, int, int, int, int);
        void LoadGroundRegion(PacketJ<Array<unsigned char, eastl::allocator>>&, int, int, int, int, int, int, int, int,
                              int, eastl::fixed_vector<movement::CollisionMap, 4ul, true, eastl::allocator>&);
        void AutoGroundRegion(int, int, int);
        void LoadEnvironmentSettings(PacketJ<Array<unsigned char, eastl::allocator>>&, int, int);
        void Write3DArray<jag::math::Vector4T<float>>(Array<jag::math::Vector4T<float>, eastl::allocator>*, int, int,
                                                      int, jag::math::Vector4T<float>);
        int PerlinNoise(int, int);
        ulong CheckLocations(PacketJ<Array<unsigned char, eastl::allocator>>&, int, int);
        void PrefetchLocations(PacketJ<Array<unsigned char, eastl::allocator>>&);
        ClientBuild* LoadLocations(PacketJ<Array<unsigned char, eastl::allocator>>&, int, int, dash3d::world&,
                                   eastl::fixed_vector<movement::CollisionMap, 4ul, true, eastl::allocator>&, int);
        ulong AddLoc(int, int, int, int, int, int, dash3d::world&, movement::CollisionMap*, int);
        ClientBuild* LoadLocationsRegion(PacketJ<Array<unsigned char, eastl::allocator>>&, int, int, int, int, int, int,
                                         int, dash3d::world&,
                                         eastl::fixed_vector<movement::CollisionMap, 4ul, true, eastl::allocator>&,
                                         int);
        void FinishBuild(dash3d::world&, eastl::fixed_vector<movement::CollisionMap, 4ul, true, eastl::allocator>&,
                         bool);
        short Read3DArray<short>(Array<short, eastl::allocator>*, int, int, int);
        int GetTable(int, int, int);
        int GetUCol(int, int);
        int GetOCol(int, int);
        int VisLevel(int, int, int);
        byte IsVisBelow(int, int, int);
        IsLinkBelow(int, int, int);
        int GetVisBelowLevel(int, int, int);
        int GetLinkBelowLevel(int, int, int);
        void GetGroundHeight(int, int, int);
        int GetGroundHeightAtFinePos(int, int, int);
        GetHeightmapWidth();
        GetHeightmapHeight();
        void ResetMapL();
        void InterpolatedNoise(int, int, int);
        int SmoothNoise(int, int);
        int Interpolate(int, int, int, int);
        uint Noise(int, int);
        ChangeLocAvailable(int, int);
        ClientBuild* ChangeLocUnchecked(int, int, int, int, int, int, int, int, dash3d::world&, movement::CollisionMap&,
                                        int);
        void PerformHillSkew(HillSkewBuildInput const&);
        static /* 8 bytes */ m_applyBlobShadows;                      // = 1
        static /* 16 bytes */ WSHAPE0;                                // = { 1, 2, 4, 8 }
        static /* 16 bytes */ WSHAPE1;                                // = { 16, 32, 64, 128 }
        static /* 16 bytes */ DECORXOF;                               // = { 1, 0, -1, 0 }
        static /* 16 bytes */ DECORZOF;                               // = { 0, -1, 0, 1 }
        static /* 16 bytes */ DECORXOF2;                              // = { 1, -1, -1, 1 }
        static /* 16 bytes */ DECORZOF2;                              // = { -1, -1, 1, 1 }
        static /* 4 bytes */ minusedlevel;                            // = 99
        static /* 4 bytes */ m_hueOff;                                // = 1000
        static /* 4 bytes */ m_ligOff;                                // = 1000
        static Array<int, eastl::allocator> /* 24 bytes */ m_groundh; // = Array<int,eastl::allocator>(44100)
        static Array<signed char, eastl::allocator>                   /* 24 bytes */
            m_mapl;                                                   // = Array<signed char,eastl::allocator>(43264)
        static Array<jag::math::Vector4T<float>, eastl::allocator>    /* 24 bytes */
            m_skyboxColour; // = Array<jag::math::Vector4T<float>,eastl::allocator>(44100)
        static Array<int, eastl::allocator> /* 24 bytes */ m_fogStartDistance; // = Array<int,eastl::allocator>(44100)
        static Array<int, eastl::allocator> /* 24 bytes */ m_fogIntensity;     // = Array<int,eastl::allocator>(44100)
        static Array<short, eastl::allocator> /* 24 bytes */ m_floort1;        // = Array<short,eastl::allocator>()
        static Array<short, eastl::allocator> /* 24 bytes */ m_floort2;        // = Array<short,eastl::allocator>()
        static Array<signed char, eastl::allocator> /* 24 bytes */ m_floors; // = Array<signed char,eastl::allocator>()
        static Array<signed char, eastl::allocator> /* 24 bytes */ m_floorr; // = Array<signed char,eastl::allocator>()
        static Array<signed char, eastl::allocator> /* 24 bytes */ m_shadow; // = Array<signed char,eastl::allocator>()
        static /* 44100 bytes */ m_lightmap;
        static /* 416 bytes */ m_huetot;
        static /* 416 bytes */ m_sattot;
        static /* 416 bytes */ m_ligtot;
        static /* 416 bytes */ m_comtot;
        static /* 420 bytes */ m_tot;
        static Array<int, eastl::allocator> /* 24 bytes */ m_mapo; // = Array<int,eastl::allocator>()

        // data members, from how the methods use this: 104 bytes
        int field_0; // offset 0
        char _unknown_4[4];
        LocInfo* field_8; // offset 8
        int field_16;     // offset 16
        int field_20;     // offset 20
        int field_24;     // offset 24
        int field_28;     // offset 28
        int field_32;     // offset 32
        int field_36;     // offset 36
        int field_40;     // offset 40
        char _unknown_44[60];
    };

    // 0x1000b0fb0, 16 bytes, inline, placed by class name and debug map
    // ClientBuild::SetApplyBlobShadows(bool)
    void ClientBuild::SetApplyBlobShadows(bool param_1) {
        *PTR_m_applyBlobShadows_100ee6a78 = param_1;
    }

    // 0x1000b0fc0, 16 bytes, inline, placed by class name and debug map
    // ClientBuild::GetApplyBlobShadows()
    undefined8 ClientBuild::GetApplyBlobShadows() {
        return CONCAT71((int7)((ulong)PTR_m_applyBlobShadows_100ee6a78 >> 8), *PTR_m_applyBlobShadows_100ee6a78);
    }

    // 0x1000e60c0, 96 bytes, inline, placed by class name
    // void ClientBuild::Write3DArray<signed char>(Array<signed char, eastl::allocator>*, int, int, int, signed char)
    void ClientBuild::Write3DArray<signed char>(Array<signed char, eastl::allocator>* param_1, int param_2, int param_3,
                                                int param_4, undefined1 param_5) {
        ulong uVar1;
        undefined1* puVar2;

        uVar1 = (ulong)(param_1 == (Array<signed char, eastl::allocator>*)PTR_m_groundh_100ee6a90 ||
                        (param_1 == (Array<signed char, eastl::allocator>*)PTR_m_shadow_100ee6a88 ||
                         param_1 == (Array<signed char, eastl::allocator>*)PTR_m_mapo_100ee6a80)) |
                104;
        puVar2 = (undefined1*)Array<signed char, eastl::allocator>::operator[](
            param_1, (long)param_4 + ((long)param_3 + (long)param_2 * uVar1) * uVar1);
        *puVar2 = param_5;
    }

    // 0x1000f7fe0, 96 bytes, inline, placed by class name
    // signed char ClientBuild::Read3DArray<signed char>(Array<signed char, eastl::allocator>*, int, int, int)
    int ClientBuild::Read3DArray<signed char>(Array* param_1, int param_2, int param_3, int param_4) {
        ulong uVar1;
        char* pcVar2;

        uVar1 = (ulong)(param_1 == (Array*)PTR_m_groundh_100ee6a90 ||
                        (param_1 == (Array*)PTR_m_shadow_100ee6a88 || param_1 == (Array*)PTR_m_mapo_100ee6a80)) |
                104;
        pcVar2 = (char*)Array<signed char, eastl::allocator>::operator[](
            (Array<signed char, eastl::allocator>*)param_1,
            (long)param_4 + ((long)param_3 + (long)param_2 * uVar1) * uVar1);
        return (int)*pcVar2;
    }

    // 0x1000f8040, 96 bytes, inline, placed by class name
    // int ClientBuild::Read3DArray<int>(Array<int, eastl::allocator>*, int, int, int)
    int ClientBuild::Read3DArray<int>(Array* param_1, int param_2, int param_3, int param_4) {
        ulong uVar1;
        int* piVar2;

        uVar1 = (ulong)(param_1 == (Array*)PTR_m_groundh_100ee6a90 ||
                        (param_1 == (Array*)PTR_m_shadow_100ee6a88 || param_1 == (Array*)PTR_m_mapo_100ee6a80)) |
                104;
        piVar2 = (int*)Array<int, eastl::allocator>::operator[](
            (Array<int, eastl::allocator>*)param_1, (long)param_4 + ((long)param_3 + (long)param_2 * uVar1) * uVar1);
        return *piVar2;
    }

    // 0x10033edf0, 112 bytes, inline, placed by class name and debug map
    // void ClientBuild::Write3DArray<short>(Array<short, eastl::allocator>*, int, int, int, short)
    void ClientBuild::Write3DArray<short>(Array* param_1, int param_2, int param_3, int param_4, short param_5) {
        ulong uVar1;
        short* psVar2;

        uVar1 = (ulong)(param_1 == (Array*)&m_groundh || (param_1 == (Array*)&m_shadow || param_1 == (Array*)&m_mapo)) |
                104;
        psVar2 = (short*)Array<short, eastl::allocator>::operator[](
            (Array<short, eastl::allocator>*)param_1, (long)param_4 + ((long)param_3 + (long)param_2 * uVar1) * uVar1);
        *psVar2 = param_5;
    }

    // 0x10033ee60, 96 bytes, inline, placed by class name and debug map
    // void ClientBuild::Write3DArray<int>(Array<int, eastl::allocator>*, int, int, int, int)
    void ClientBuild::Write3DArray<int>(Array* param_1, int param_2, int param_3, int param_4, int param_5) {
        ulong uVar1;
        int* piVar2;

        uVar1 = (ulong)(param_1 == (Array*)&m_groundh || (param_1 == (Array*)&m_shadow || param_1 == (Array*)&m_mapo)) |
                104;
        piVar2 = (int*)Array<int, eastl::allocator>::operator[](
            (Array<int, eastl::allocator>*)param_1, (long)param_4 + ((long)param_3 + (long)param_2 * uVar1) * uVar1);
        *piVar2 = param_5;
    }

    // 0x10033fb40, 128 bytes, inline, placed by class name and debug map
    // void ClientBuild::Write3DArray<jag::math::Vector4T<float> >(Array<jag::math::Vector4T<float>, eastl::allocator>*, int, int, int, jag::math::Vector4T<float>)
    void ClientBuild::Write3DArray<jag::math::Vector4T<float>>(undefined8 param_1, undefined8 param_2_00,
                                                               ClientBuild* this, int param_4, int param_2,
                                                               int param_3) {
        ulong uVar1;
        Rect<float>* this_00;
        undefined8 local_18;
        undefined8 uStack_10;

        uVar1 = (ulong)(this == (ClientBuild*)&m_groundh ||
                        (this == (ClientBuild*)&m_shadow || this == (ClientBuild*)&m_mapo)) |
                104;
        local_18 = param_1;
        uStack_10 = param_2_00;
        this_00 = (Rect<float>*)Array<jag::math::Vector4T<float>, eastl::allocator>::operator[](
            (Array<jag::math::Vector4T<float>, eastl::allocator>*)this,
            (long)param_3 + ((long)param_2 + (long)param_4 * uVar1) * uVar1);
        jag::math::Rect<float>::operator=(this_00, (Rect*)&local_18);
    }

    // 0x10033fde0, 64 bytes, inline, placed by debug map only (low confidence)
    // PacketJ<Array<unsigned char, eastl::allocator> >::gSmartsExtend()
    int PacketJ<Array<unsigned char, eastl::allocator>>::gSmartsExtend(
        PacketJ<Array<unsigned char, eastl::allocator>>* this) {
        int iVar1;
        int iVar2;

        iVar1 = gSmarts(this);
        iVar2 = 0;
        while (iVar1 == 32767) {
            iVar2 = iVar2 + 32767;
            iVar1 = gSmarts(this);
        }
        return iVar2 + iVar1;
    }

    // 0x100344be0, 96 bytes, inline, placed by class name
    // short ClientBuild::Read3DArray<short>(Array<short, eastl::allocator>*, int, int, int)
    short ClientBuild::Read3DArray<short>(Array* param_1, int param_2, int param_3, int param_4) {
        ulong uVar1;
        short* psVar2;

        uVar1 = (ulong)(param_1 == (Array*)&m_groundh || (param_1 == (Array*)&m_shadow || param_1 == (Array*)&m_mapo)) |
                104;
        psVar2 = (short*)Array<short, eastl::allocator>::operator[](
            (Array<short, eastl::allocator>*)param_1, (long)param_4 + ((long)param_3 + (long)param_2 * uVar1) * uVar1);
        return *psVar2;
    }

} // namespace jag::oldscape

namespace jag::oldscape::minimenu {
    // 0x1000b1ee0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MinimenuGlobalEntryData::MinimenuGlobalEntryData(): jumps straight to the base-object constructor

    // 0x1000b25c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MinimenuGlobalEntryData::MinimenuGlobalEntryData(MinimenuGlobalEntryData&&): jumps straight to the base-object constructor

    // 0x1000b25d0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MinimenuGlobalEntryData::MinimenuGlobalEntryData(MinimenuGlobalEntryData&&)
    /* std::pair<eastl::string,
   int>::pair(std::pair<eastl::string, int>&&) */

    void std::pair<eastl::string, int>::pair(pair<eastl::string, int>* this, pair* param_1) {
        new (this) eastl::string(param_1);
        *(undefined4*)(this + 32) = *(undefined4*)(param_1 + 32);
    }

    // 0x1000b25f0, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MinimenuGlobalEntryData::MinimenuGlobalEntryData()
    /* loottracker::SourceItem::SourceItem() */

    void loottracker::SourceItem::SourceItem() {
        new (this) eastl::string();
    }

} // namespace jag::oldscape::minimenu

// 0x1000b1010, 64 bytes, placed by debug map only (low confidence)
// sqrt(float)
undefined8 sqrt(float param_1) {
    uint in_XMM0_Db;
    undefined4 in_XMM0_Dc;
    undefined4 in_XMM0_Dd;
    undefined1 in_XMM1[16];
    undefined1 auVar1[16];
    float fVar2;

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = param_1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    fVar2 = param_1 * auVar1._0_4_;
    return CONCAT44(~(in_XMM0_Db & 2147483647) & in_XMM0_Db,
                    ~-(uint)(ABS(param_1) < 1.1754944e-38) & (uint)((fVar2 * auVar1._0_4_ + -3.0) * fVar2 * -0.5));
}

namespace jag::oldscape::loottracker {
    // 0x1000b25f0: the linker folded this into minimenu::MinimenuGlobalEntryData::MinimenuGlobalEntryData(), which has identical code
    SourceItem::SourceItem();

} // namespace jag::oldscape::loottracker

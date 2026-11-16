// libs/oldscape/jagex3/client/clientbuild.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape {
    class ClientBuild {
    public:
        void SetApplyBlobShadows(bool arg1);
        void GetApplyBlobShadows();
        void Write3DArray<signed char>(Array<signed char>* arg1, int arg2, int arg3, int arg4, signed char arg5);
        signed char Read3DArray<signed char>(Array<signed char>* arg1, int arg2, int arg3, int arg4);
        int Read3DArray<int>(Array<int>* arg1, int arg2, int arg3, int arg4);
        void Init();
        void Quit();
        void SetToSea(int arg1, int arg2, int arg3, int arg4);
        void Write3DArray<short>(Array<short>* arg1, int arg2, int arg3, int arg4, short arg5);
        void Write3DArray<int>(Array<int>* arg1, int arg2, int arg3, int arg4, int arg5);
        void FadeAdjacent(int arg1, int arg2, int arg3, int arg4);
        void LoadGround(PacketJ<Array<unsigned char>>& packetJ, int arg2, int arg3, int arg4, int arg5,
                        eastl::fixed_vector<movement::CollisionMap, 4ul>& collisionMaps);
        void LoadGroundSquare(PacketJ<Array<unsigned char>>& packetJ, int arg2, int arg3, int arg4, int arg5, int arg6,
                              int arg7);
        void LoadGroundRegion(PacketJ<Array<unsigned char>>& packetJ, int arg2, int arg3, int arg4, int arg5, int arg6,
                              int arg7, int arg8, int arg9, int arg10,
                              eastl::fixed_vector<movement::CollisionMap, 4ul>& collisionMaps);
        void AutoGroundRegion(int arg1, int arg2, int arg3);
        void LoadEnvironmentSettings(PacketJ<Array<unsigned char>>& packetJ, int arg2, int arg3);
        void Write3DArray<jag::math::Vector4T<float>>(Array<jag::math::Vector4T<float>>* vector4s, int arg2, int arg3,
                                                      int arg4, jag::math::Vector4T<float> vector4);
        int PerlinNoise(int arg1, int arg2);
        unsigned long CheckLocations(PacketJ<Array<unsigned char>>& packetJ, int arg2, int arg3);
        void PrefetchLocations(PacketJ<Array<unsigned char>>& packetJ);
        PacketJ<Array<unsigned char> _>* LoadLocations(PacketJ<Array<unsigned char>>& packetJ, int arg2, int arg3,
                                                       dash3d::world& world,
                                                       eastl::fixed_vector<movement::CollisionMap, 4ul>& collisionMaps,
                                                       int arg6);
        unsigned long AddLoc(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, dash3d::world& world,
                             movement::CollisionMap* collisionMap, int arg9);
        ClientBuild* LoadLocationsRegion(PacketJ<Array<unsigned char>>& packetJ, int arg2, int arg3, int arg4, int arg5,
                                         int arg6, int arg7, int arg8, dash3d::world& world,
                                         eastl::fixed_vector<movement::CollisionMap, 4ul>& collisionMaps, int arg11);
        void FinishBuild(dash3d::world& world, eastl::fixed_vector<movement::CollisionMap, 4ul>& collisionMaps,
                         bool arg3);
        short Read3DArray<short>(Array<short>* arg1, int arg2, int arg3, int arg4);
        int GetTable(int arg1, int arg2, int arg3);
        int GetUCol(int arg1, int arg2);
        int GetOCol(int arg1, int arg2);
        int VisLevel(int arg1, int arg2, int arg3);
        bool IsVisBelow(int arg1, int arg2, int arg3);
        void IsLinkBelow(int arg1, int arg2, int arg3);
        int GetVisBelowLevel(int arg1, int arg2, int arg3);
        int GetLinkBelowLevel(int arg1, int arg2, int arg3);
        void GetGroundHeight(int arg1, int arg2, int arg3);
        int GetGroundHeightAtFinePos(int arg1, int arg2, int arg3);
        void GetHeightmapWidth();
        void GetHeightmapHeight();
        void ResetMapL();
        void InterpolatedNoise(int arg1, int arg2, int arg3);
        int SmoothNoise(int arg1, int arg2);
        int Interpolate(int arg1, int arg2, int arg3, int arg4);
        unsigned int Noise(int arg1, int arg2);
        void ChangeLocAvailable(int arg1, int arg2);
        ClientBuild* ChangeLocUnchecked(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                        dash3d::world& world, movement::CollisionMap& collisionMap, int arg11);
        void PerformHillSkew(const HillSkewBuildInput& hillSkewBuildInput);
        static int64_t m_applyBlobShadows;                       // = 1
        static int32_t WSHAPE0[4];                               // = { 1, 2, 4, 8 }
        static int32_t WSHAPE1[4];                               // = { 16, 32, 64, 128 }
        static int32_t DECORXOF[4];                              // = { 1, 0, -1, 0 }
        static int32_t DECORZOF[4];                              // = { 0, -1, 0, 1 }
        static int32_t DECORXOF2[4];                             // = { 1, -1, -1, 1 }
        static int32_t DECORZOF2[4];                             // = { -1, -1, 1, 1 }
        static int32_t minusedlevel;                             // = 99
        static int32_t m_hueOff;                                 // = 1000
        static int32_t m_ligOff;                                 // = 1000
        static Array<int> m_groundh;                             // = Array<int>(44100)
        static Array<signed char> m_mapl;                        // = Array<signed char>(43264)
        static Array<jag::math::Vector4T<float>> m_skyboxColour; // = Array<jag::math::Vector4T<float>>(44100)
        static Array<int> m_fogStartDistance;                    // = Array<int>(44100)
        static Array<int> m_fogIntensity;                        // = Array<int>(44100)
        static Array<short> m_floort1;                           // = Array<short>()
        static Array<short> m_floort2;                           // = Array<short>()
        static Array<signed char> m_floors;                      // = Array<signed char>()
        static Array<signed char> m_floorr;                      // = Array<signed char>()
        static Array<signed char> m_shadow;                      // = Array<signed char>()
        static uint8_t m_lightmap[44100];
        static std::array<int, 104ul> m_huetot;
        static std::array<int, 104ul> m_sattot;
        static std::array<int, 104ul> m_ligtot;
        static std::array<int, 104ul> m_comtot;
        static std::array<int, 104ul> m_tot;
        static Array<int> m_mapo; // = Array<int>()

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        long field_16;
        unsigned long field_24;
        uint8_t _unknown_32[72];
    };

    // 0x1000b0fb0
    void ClientBuild::SetApplyBlobShadows(bool arg1) {
        *PTR_m_applyBlobShadows_100ee6a78 = arg1;
    }

    // 0x1000b0fc0
    void ClientBuild::GetApplyBlobShadows() {
        return *PTR_m_applyBlobShadows_100ee6a78;
    }

    // 0x1000e60c0
    void ClientBuild::Write3DArray<signed char>(Array<signed char>* arg1, int arg2, int arg3, int arg4,
                                                signed char arg5) {
        unsigned long uVar1 = (unsigned long)(arg1 == (Array<signed char>*)PTR_m_groundh_100ee6a90 ||
                                              (arg1 == (Array<signed char>*)PTR_m_shadow_100ee6a88 ||
                                               arg1 == (Array<signed char>*)PTR_m_mapo_100ee6a80)) |
                              104;
        schar* psVar2 = (schar*)(*arg1)[(long)arg4 + ((long)arg3 + (long)arg2 * uVar1) * uVar1];
        *psVar2 = arg5;
    }

    // 0x1000f7fe0
    signed char ClientBuild::Read3DArray<signed char>(Array<signed char>* arg1, int arg2, int arg3, int arg4) {
        unsigned long uVar1 = (unsigned long)(arg1 == (Array<signed char>*)PTR_m_groundh_100ee6a90 ||
                                              (arg1 == (Array<signed char>*)PTR_m_shadow_100ee6a88 ||
                                               arg1 == (Array<signed char>*)PTR_m_mapo_100ee6a80)) |
                              104;
        schar* psVar2 = (schar*)(*arg1)[(long)arg4 + ((long)arg3 + (long)arg2 * uVar1) * uVar1];
        return *psVar2;
    }

    // 0x1000f8040
    int ClientBuild::Read3DArray<int>(Array<int>* arg1, int arg2, int arg3, int arg4) {
        unsigned long uVar1 = (unsigned long)(arg1 == (Array<int>*)PTR_m_groundh_100ee6a90 ||
                                              (arg1 == (Array<int>*)PTR_m_shadow_100ee6a88 ||
                                               arg1 == (Array<int>*)PTR_m_mapo_100ee6a80)) |
                              104;
        int* piVar2 = (int*)(*arg1)[(long)arg4 + ((long)arg3 + (long)arg2 * uVar1) * uVar1];
        return *piVar2;
    }

    // 0x10033edf0
    void ClientBuild::Write3DArray<short>(Array<short>* arg1, int arg2, int arg3, int arg4, short arg5) {
        unsigned long uVar1 = (unsigned long)(arg1 == (Array<short>*)&m_groundh ||
                                              (arg1 == (Array<short>*)&m_shadow || arg1 == (Array<short>*)&m_mapo)) |
                              104;
        short* psVar2 = (short*)(*arg1)[(long)arg4 + ((long)arg3 + (long)arg2 * uVar1) * uVar1];
        *psVar2 = arg5;
    }

    // 0x10033ee60
    void ClientBuild::Write3DArray<int>(Array<int>* arg1, int arg2, int arg3, int arg4, int arg5) {
        unsigned long uVar1 = (unsigned long)(arg1 == (Array<int>*)&m_groundh ||
                                              (arg1 == (Array<int>*)&m_shadow || arg1 == (Array<int>*)&m_mapo)) |
                              104;
        int* piVar2 = (int*)(*arg1)[(long)arg4 + ((long)arg3 + (long)arg2 * uVar1) * uVar1];
        *piVar2 = arg5;
    }

    // 0x10033fb40
    void ClientBuild::Write3DArray<jag::math::Vector4T<float>>(Array<jag::math::Vector4T<float>>* vector4s, int arg2,
                                                               int arg3, int arg4, jag::math::Vector4T<float> vector4) {
        QuaternionT<float> local_18;

        unsigned long uVar1 = (unsigned long)(this == (ClientBuild*)&m_groundh ||
                                              (this == (ClientBuild*)&m_shadow || this == (ClientBuild*)&m_mapo)) |
                              104;
        Rect<float>* this_00 = (Rect<float>*)(*this)[(long)arg3 + ((long)arg2 + (long)(int)vector4s * uVar1) * uVar1];
        *this_00 = local_18;
    }

    // 0x10033fde0
    int PacketJ<Array<unsigned char>>::gSmartsExtend() {
        int iVar1 = gSmarts(this);
        int iVar2 = 0;
        while (iVar1 == 32767) {
            iVar2 = iVar2 + 32767;
            iVar1 = gSmarts(this);
        }
        return iVar2 + iVar1;
    }

    // 0x100344be0
    short ClientBuild::Read3DArray<short>(Array<short>* arg1, int arg2, int arg3, int arg4) {
        unsigned long uVar1 = (unsigned long)(arg1 == (Array<short>*)&m_groundh ||
                                              (arg1 == (Array<short>*)&m_shadow || arg1 == (Array<short>*)&m_mapo)) |
                              104;
        short* psVar2 = (short*)(*arg1)[(long)arg4 + ((long)arg3 + (long)arg2 * uVar1) * uVar1];
        return *psVar2;
    }

} // namespace jag::oldscape

namespace jag::oldscape::minimenu {
    // 0x1000b25d0
    MinimenuGlobalEntryData::MinimenuGlobalEntryData(MinimenuGlobalEntryData&& minimenuGlobalEntryData)
        : eastl::string(minimenuGlobalEntryData) {
        *(uint32_t*)(this + 32) = *(uint32_t*)(minimenuGlobalEntryData + 32);
    }

    // 0x1000b25f0
    MinimenuGlobalEntryData::MinimenuGlobalEntryData() : eastl::string() {}

} // namespace jag::oldscape::minimenu

// 0x1000b1010
void sqrt(float arg1) {
    unsigned int in_XMM0_Db;
    uint32_t in_XMM0_Dc;
    uint32_t in_XMM0_Dd;
    uint8_t in_XMM1[16];
    uint8_t auVar1[16];

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = arg1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    float fVar2 = arg1 * auVar1._0_4_;
    return (((uint64_t)(~(in_XMM0_Db & 2147483647) & in_XMM0_Db) << 32) |
            (uint32_t)(~-(unsigned int)(ABS(arg1) < 1.1754944e-38) &
                       (unsigned int)((fVar2 * auVar1._0_4_ - 3.0) * fVar2 * -0.5)));
}

namespace jag::oldscape::loottracker {
    // 0x1000b25f0: SourceItem::SourceItem() has the same machine code as minimenu::MinimenuGlobalEntryData::MinimenuGlobalEntryData()

} // namespace jag::oldscape::loottracker

// libs/oldscape/rs2lib/util/iftype.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::rs2lib {
    class IfType {
    public:
        class ServerKeyData;
        void SetOnDestroyCallback(std::function<void(IfType const&)>);
        void GetCRMViewHandler() const;
        void GetCRMViewHandler();
        GetInputField();
        long GetInputFieldAppearance();
        long GetInputFieldKeyMap();
        void GetInputFieldWrapper();
        IfType(int);
        void Init(jagex3::Js5*, jagex3::Js5*, jagex3::Js5*, jagex3::Js5*);
        Get(int);
        ulong OpenInterface(int);
        shared_ptr* Get(int, int);
        GetCC(int) const;
        void GetServer(int);
        bool Decode3(PacketJ<Array<unsigned char, eastl::allocator>>&);
        bool Decode(PacketJ<Array<unsigned char, eastl::allocator>>&);
        void CloseInterface(int);
        ulong OpenAll();
        ~IfType();
        ulong DecodeHook(Array<HookArg, eastl::allocator>&, PacketJ<Array<unsigned char, eastl::allocator>>&);
        bool DecodeTransmitList(eastl::vector<int, eastl::allocator>&,
                                PacketJ<Array<unsigned char, eastl::allocator>>&);
        void SwapSlots(int, int);
        shared_ptr* GetGraphic(bool, bool&) const;
        shared_ptr* GetHttpGraphic() const;
        void PrerenderProcessSprite(shared_ptr<graphics::Pix32>&) const;
        bool NeedsPrerenderProcessing() const;
        GetRawDownloadedGraphic() const;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* GetFont(bool&) const;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* GetInvBackground(int, bool&) const;
        GetTempModel(configdecoder::SeqType const*, int, bool, PlayerModel const*, bool&, configdecoder::NpcType*,
                     configdecoder::NPCTypeCustomisation*) const;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* GetMask(bool, bool&) const;
        void ResetCache();
        void SetOpName(int, eastl::string const&);
        void SetOpName(int, eastl::string&&);
        bool CanSkipLogicIfNotVisible();
        bool IsActiveComponent();
        HasHardcodedMouseInputBehaviour();
        void InitialiseCRM(eastl::string const&, http::CRMData::ClientDataProvider*);
        void InitialiseCRMFromJSON(eastl::string const&);
        ulong ServiceCRMView();
        void BuildCRMView();
        bool IsInsideCRMClickBounds(int, int, int, int);
        void InitialiseInputField();
        byte ServiceInputField();
        static /* 24 bytes */ m_list;
        static Array<bool, eastl::allocator> /* 24 bytes */ m_open; // = Array<bool,eastl::allocator>()
        static /* 8 bytes */ m_pInterfaces;
        static /* 8 bytes */ m_pModels;
        static /* 8 bytes */ m_pSprites;
        static /* 8 bytes */ m_pFontMetrics;
        static /* 16256 bytes */ m_spriteCache;
        static /* 4256 bytes */ m_modelCache;
        static /* 1856 bytes */ m_fontCache;
        static /* 896 bytes */ m_maskCache;
        static /* 1608 bytes */ m_httpSpriteCacheRaw;
        static /* 1424 bytes */ m_httpSpriteCacheProcessed;

        // data members, from how the methods use this: 2120 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[3];
        int field_4;         // offset 4
        undefined4 field_8;  // offset 8
        uint field_12;       // offset 12
        uint field_16;       // offset 16
        uint field_20;       // offset 20
        undefined1 field_24; // offset 24
        char _unknown_25[7];
        int field_32;  // offset 32
        int field_36;  // offset 36
        int field_40;  // offset 40
        int field_44;  // offset 44
        int field_48;  // offset 48
        int field_52;  // offset 52
        uint field_56; // offset 56
        uint field_60; // offset 60
        char _unknown_64[8];
        int field_72;        // offset 72
        int field_76;        // offset 76
        undefined8 field_80; // offset 80
        uint field_88;       // offset 88
        bool field_92;       // offset 92
        char _unknown_93[3];
        undefined8 field_96;  // offset 96
        uint field_104;       // offset 104
        uint field_108;       // offset 108
        undefined4 field_112; // offset 112
        undefined4 field_116; // offset 116
        undefined4 field_120; // offset 120
        undefined4 field_124; // offset 124
        undefined4 field_128; // offset 128
        bool field_132;       // offset 132
        char _unknown_133[7];
        uint field_140;       // offset 140
        undefined4 field_144; // offset 144
        uint field_148;       // offset 148
        bool field_152;       // offset 152
        char _unknown_153[3];
        uint field_156; // offset 156
        uint field_160; // offset 160
        uint field_164; // offset 164
        uint field_168; // offset 168
        char _unknown_172[36];
        uint field_208; // offset 208
        bool field_212; // offset 212
        char _unknown_213[3];
        uint field_216; // offset 216
        uint field_220; // offset 220
        bool field_224; // offset 224
        bool field_225; // offset 225
        char _unknown_226[2];
        undefined4 field_228; // offset 228
        uint field_232;       // offset 232
        undefined4 field_236; // offset 236
        uint field_240;       // offset 240
        uint field_244;       // offset 244
        uint field_248;       // offset 248
        int field_252;        // offset 252
        int field_256;        // offset 256
        uint field_260;       // offset 260
        uint field_264;       // offset 264
        uint field_268;       // offset 268
        uint field_272;       // offset 272
        uint field_276;       // offset 276
        uint field_280;       // offset 280
        char _unknown_284[4];
        bool field_288; // offset 288
        char _unknown_289[3];
        undefined4 field_292; // offset 292
        char _unknown_296[16];
        uint field_312; // offset 312
        char _unknown_316[68];
        uint field_384; // offset 384
        uint field_388; // offset 388
        uint field_392; // offset 392
        bool field_396; // offset 396
        char _unknown_397[3];
        undefined8 field_400; // offset 400
        char _unknown_408[272];
        int field_680;        // offset 680
        uint field_684;       // offset 684
        undefined1 field_688; // offset 688
        char _unknown_689[87];
        undefined8 field_776; // offset 776
        undefined2 field_784; // offset 784
        char _unknown_786[38];
        undefined1 field_824; // offset 824
        char _unknown_825[1039];
        uint field_1864; // offset 1864
        char _unknown_1868[116];
        undefined8 field_1984; // offset 1984
        undefined8 field_1992; // offset 1992
        char _unknown_2000[24];
        undefined2 field_2024; // offset 2024
        char _unknown_2026[2];
        undefined8 field_2028; // offset 2028
        undefined8 field_2036; // offset 2036
        undefined8 field_2044; // offset 2044
        char _unknown_2052[28];
        bool field_2080; // offset 2080
        char _unknown_2081[1];
        undefined1 field_2082; // offset 2082
        char _unknown_2083[37];
    };

    class IfType::ServerKeyData {
    public:
        ServerKeyData();
        ~ServerKeyData();

        // data members, from how the methods use this: 616 bytes
        char _unknown_0[616];
    };

    // 0x10006cad0, 96 bytes, inline, placed by debug map only (low confidence)
    // InterfaceGraphicMask::pointInside(int, int)
    undefined8 InterfaceGraphicMask::pointInside(int param_1, int param_2) {
        int iVar1;
        ulong uVar2;
        int* piVar3;

        if (-1 < param_2) {
            uVar2 = (&field_32)->end();
            if ((ulong)param_2 < uVar2) {
                piVar3 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_32,
                                                                        (ulong)param_2);
                iVar1 = *piVar3;
                if (iVar1 <= param_1) {
                    piVar3 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_8,
                                                                            (ulong)param_2);
                    if (param_1 <= iVar1 + *piVar3) {
                        return 1;
                    }
                }
            }
        }
        return 0;
    }

    // 0x1001059b0, 32 bytes, inline, placed by class name
    // IfType::SetOnDestroyCallback(std::function<void (IfType const&)>)
    /* IfType::SetOnDestroyCallback(std::function<void
   (IfType const&)>) */

    void IfType::SetOnDestroyCallback(function* param_2) {
        std::function<void(IfType_const&)>::operator=((function<void(IfType_const&)>*)&field_2112, param_2);
    }

    // 0x10015a200, 32 bytes, inline, placed by class name
    // IfType::GetCRMViewHandler() const
    /* IfType::GetCRMViewHandler() */

    void IfType::GetCRMViewHandler() {
        (&field_2088)->get();
    }

    // 0x1001952f0, 48 bytes, inline, placed by class name
    // IfType::GetInputField()
    undefined8 IfType::GetInputField() {
        long lVar1;
        undefined8 uVar2;

        lVar1 = (&field_2096)->get();
        if (lVar1 == 0) {
            uVar2 = 0;
        } else {
            uVar2 = std::unique_ptr<InputFieldWrapper, std::default_delete<InputFieldWrapper>>::operator->(
                (unique_ptr<InputFieldWrapper, std::default_delete<InputFieldWrapper>>*)&field_2096);
        }
        return uVar2;
    }

    // 0x1001954f0, 64 bytes, inline, placed by class name
    // IfType::GetInputFieldAppearance()
    long IfType::GetInputFieldAppearance() {
        long lVar1;

        lVar1 = (&field_2096)->get();
        if (lVar1 == 0) {
            lVar1 = 0;
        } else {
            lVar1 = std::unique_ptr<InputFieldWrapper, std::default_delete<InputFieldWrapper>>::operator->(
                (unique_ptr<InputFieldWrapper, std::default_delete<InputFieldWrapper>>*)&field_2096);
            lVar1 = lVar1 + 352;
        }
        return lVar1;
    }

    // 0x100195580, 64 bytes, inline, placed by class name
    // IfType::GetInputFieldKeyMap()
    long IfType::GetInputFieldKeyMap() {
        long lVar1;

        lVar1 = (&field_2096)->get();
        if (lVar1 == 0) {
            lVar1 = 0;
        } else {
            lVar1 = std::unique_ptr<InputFieldWrapper, std::default_delete<InputFieldWrapper>>::operator->(
                (unique_ptr<InputFieldWrapper, std::default_delete<InputFieldWrapper>>*)&field_2096);
            lVar1 = lVar1 + 364;
        }
        return lVar1;
    }

    // 0x100195a60, 16 bytes, complete-object constructor, inline, placed by class name
    // IfType::ServerKeyData::ServerKeyData(): jumps straight to the base-object constructor

    // 0x100195b40, 32 bytes, inline, placed by class name
    // IfType::GetInputFieldWrapper()
    void IfType::GetInputFieldWrapper() {
        (&field_2096)->get();
    }

    // 0x1001a3a20, 64 bytes, base-object constructor, inline, placed by class name
    // IfType::ServerKeyData::ServerKeyData()
    void IfType::ServerKeyData::ServerKeyData() {
        new (this) std::array<Array<unsigned char, eastl::allocator>, 11ul>();
        new (&field_264) std::array<Array<unsigned char, eastl::allocator>, 11ul>();
    }

    // 0x1001ae550, 16 bytes, complete-object constructor, inline, placed by class name
    // IfType::IfType(int): jumps straight to the base-object constructor

    // 0x1001ae560, 2800 bytes, base-object constructor, inline, placed by class name
    // IfType::IfType(int)
    void IfType::IfType(int param_1) {
        undefined4 in_register_00000034;
        _func_decltype_nullptr* p_Var1;

        p_Var1 = (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_1);
        field_0 = 0;
        field_4 = param_1;
        field_8 = 4294967295;
        field_12 = 0;
        field_16 = 0;
        *(undefined8*)((long)&field_16 + 1) = 0;
        *(undefined8*)&field_28 = 0;
        field_36 = 0;
        field_40 = 0;
        field_44 = 0;
        field_48 = 0;
        field_52 = 0;
        field_56 = 0;
        *(undefined8*)&field_60 = 0;
        *(undefined8*)&field_68 = 0;
        field_76 = 0;
        field_80 = 4294967297;
        field_88 = 4294967295;
        field_92 = false;
        field_96 = 0;
        field_104 = 0;
        field_108 = 0;
        field_112 = 3;
        *(undefined8*)&field_136 = 0;
        field_144 = 0;
        field_116 = 0;
        field_120 = 0;
        field_124 = 0;
        field_128 = 0;
        field_132 = false;
        field_148 = 1;
        field_152 = false;
        field_156 = 0;
        field_160 = 0;
        field_164 = 4294967295;
        field_168 = 4294967295;
        new (&field_176) eastl::string();
        field_208 = 0;
        field_212 = false;
        field_216 = 0;
        field_220 = 0;
        field_224 = false;
        field_225 = false;
        field_228 = 1;
        field_232 = 4294967295;
        field_236 = 1;
        field_240 = 4294967295;
        field_244 = 4294967295;
        field_248 = 4294967295;
        field_252 = 0;
        field_256 = 0;
        field_260 = 0;
        field_264 = 0;
        field_268 = 0;
        field_272 = 100;
        field_276 = 0;
        field_280 = 0;
        *(undefined8*)((long)&field_280 + 2) = 0;
        field_292 = 1;
        new (&field_296, p_Var1) shared_ptr<worldmap::WorldmapAreaMetadata>();
        field_312 = 4294967295;
        new (&field_320) eastl::string();
        new (&field_352) eastl::string();
        field_400 = 0;
        field_384 = 0;
        field_388 = 0;
        *(undefined8*)((long)&field_388 + 1) = 0;
        new (&field_408) Array<int, eastl::allocator>();
        new (&field_432) Array<int, eastl::allocator>();
        new (&field_456) Array<int, eastl::allocator>();
        new (&field_480) eastl::fixed_vector<eastl::string, 5ul, true, eastl::allocator>();
        field_680 = -1;
        field_684 = 0;
        field_688 = 0;
        std::unique_ptr<IfType::ServerKeyData, std::default_delete<IfType::ServerKeyData>>::unique_ptr<true, void>(
            (unique_ptr<IfType::ServerKeyData, std::default_delete<IfType::ServerKeyData>>*)&field_696);
        new (&field_704) eastl::string();
        new (&field_736) Array<eastl::string, eastl::allocator>();
        new (&field_760, (_func_decltype_nullptr*)0) shared_ptr<worldmap::WorldmapAreaMetadata>();
        field_784 = 0;
        field_776 = 0;
        new (&field_792) eastl::string();
        field_824 = 0;
        new (&field_832) Array<HookArg, eastl::allocator>();
        new (&field_856) Array<HookArg, eastl::allocator>();
        new (&field_880) Array<HookArg, eastl::allocator>();
        new (&field_904) Array<HookArg, eastl::allocator>();
        new (&field_928) Array<HookArg, eastl::allocator>();
        new (&field_952) Array<HookArg, eastl::allocator>();
        new (&field_976) Array<HookArg, eastl::allocator>();
        new (&field_1000) Array<HookArg, eastl::allocator>();
        new (&field_1024) Array<HookArg, eastl::allocator>();
        new (&field_1048) Array<HookArg, eastl::allocator>();
        new (&field_1072) Array<HookArg, eastl::allocator>();
        new (&field_1096) Array<HookArg, eastl::allocator>();
        new (&field_1120) Array<HookArg, eastl::allocator>();
        new (&field_1144) eastl::vector<int, eastl::allocator>();
        new (&field_1176) Array<HookArg, eastl::allocator>();
        new (&field_1200) eastl::vector<int, eastl::allocator>();
        new (&field_1232) Array<HookArg, eastl::allocator>();
        new (&field_1256) eastl::vector<int, eastl::allocator>();
        new (&field_1288) Array<HookArg, eastl::allocator>();
        new (&field_1312) Array<HookArg, eastl::allocator>();
        new (&field_1336) Array<HookArg, eastl::allocator>();
        new (&field_1360) Array<HookArg, eastl::allocator>();
        new (&field_1384) Array<HookArg, eastl::allocator>();
        new (&field_1408) Array<HookArg, eastl::allocator>();
        new (&field_1432) Array<HookArg, eastl::allocator>();
        new (&field_1456) Array<HookArg, eastl::allocator>();
        new (&field_1480) Array<HookArg, eastl::allocator>();
        new (&field_1504) Array<HookArg, eastl::allocator>();
        new (&field_1528) Array<HookArg, eastl::allocator>();
        new (&field_1552) Array<HookArg, eastl::allocator>();
        new (&field_1576) Array<HookArg, eastl::allocator>();
        new (&field_1600) Array<HookArg, eastl::allocator>();
        new (&field_1624) Array<HookArg, eastl::allocator>();
        new (&field_1648) Array<HookArg, eastl::allocator>();
        new (&field_1672) Array<HookArg, eastl::allocator>();
        new (&field_1696) Array<HookArg, eastl::allocator>();
        new (&field_1720) Array<HookArg, eastl::allocator>();
        new (&field_1744) Array<HookArg, eastl::allocator>();
        new (&field_1768) Array<HookArg, eastl::allocator>();
        new (&field_1792) Array<Array<int, eastl::allocator>, eastl::allocator>();
        new (&field_1816) Array<int, eastl::allocator>();
        new (&field_1840) Array<int, eastl::allocator>();
        field_1864 = 4294967295;
        new (&field_1872) eastl::string();
        new (&field_1904, (basic_string*)&constants::text::ok) eastl::string();
        new (&field_1936) Array<int, eastl::allocator>();
        new (&field_1960) Array<int, eastl::allocator>();
        field_1984 = 4294967295;
        field_1992 = 0;
        new (&field_2000) Array<shared_ptr<IfType>, eastl::allocator>();
        field_2024 = 0;
        field_2028 = 4294967295;
        field_2036 = 0;
        field_2044 = 18446744073709551615;
        new (&field_2056, 11) Array<int, eastl::allocator>();
        *(undefined2*)&field_2080 = 0;
        field_2082 = 0;
        std::unique_ptr<CRMViewHandler, std::default_delete<CRMViewHandler>>::unique_ptr<true, void>(
            (unique_ptr<CRMViewHandler, std::default_delete<CRMViewHandler>>*)&field_2088);
        std::unique_ptr<InputFieldWrapper, std::default_delete<InputFieldWrapper>>::unique_ptr<true, void>(
            (unique_ptr<InputFieldWrapper, std::default_delete<InputFieldWrapper>>*)&field_2096);
        std::function<void(IfType_const&)>::function((function<void(IfType_const&)>*)&field_2112);
    }

    // 0x1001b5af0, 16 bytes, complete-object destructor, inline, placed by class name
    // IfType::ServerKeyData::~ServerKeyData(): jumps straight to the base-object destructor

    // 0x1001b5b00, 48 bytes, base-object destructor, inline, placed by class name
    // IfType::ServerKeyData::~ServerKeyData()
    void IfType::ServerKeyData::~ServerKeyData() {
        (&field_264)->~array();
        ~array();
    }

} // namespace jag::oldscape::rs2lib

// libs/oldscape/rs2lib/util/iftype.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::rs2lib {
    class IfType {
    public:
        class ServerKeyData;
        void SetOnDestroyCallback(std::function<void(IfType const&)> callback);
        CRMViewHandler* GetCRMViewHandler() const;
        CRMViewHandler* GetCRMViewHandler();
        uint64_t GetInputField();
        long GetInputFieldAppearance();
        KeyConsumptionMap* GetInputFieldKeyMap();
        InputField* GetInputFieldWrapper();
        IfType(int arg1);
        void Init(jagex3::Js5* js51, jagex3::Js5* js52, jagex3::Js5* js53, jagex3::Js5* js54);
        void Get(int arg1);
        unsigned long OpenInterface(int arg1);
        shared_ptr<configdecoder::ObjType>* Get(int arg1, int arg2);
        uint8_t* GetCC(int arg1) const;
        void GetServer(int arg1);
        bool Decode3(PacketJ<Array<unsigned char>>& packetJ);
        bool Decode(PacketJ<Array<unsigned char>>& packetJ);
        void CloseInterface(int arg1);
        unsigned long OpenAll();
        ~IfType();
        unsigned long DecodeHook(Array<HookArg>& hookArgs, PacketJ<Array<unsigned char>>& packetJ);
        bool DecodeTransmitList(eastl::vector<int>& arg1, PacketJ<Array<unsigned char>>& packetJ);
        void SwapSlots(int arg1, int arg2);
        vector<dash3d::EntityHighlight*>* GetGraphic(bool arg1, bool& arg2) const;
        shared_ptr* GetHttpGraphic() const;
        void PrerenderProcessSprite(shared_ptr<graphics::Pix32>& pix32) const;
        bool NeedsPrerenderProcessing() const;
        uint8_t* GetRawDownloadedGraphic() const;
        vector<dash3d::EntityHighlight*>* GetFont(bool& arg1) const;
        vector<dash3d::EntityHighlight*>* GetInvBackground(int arg1, bool& arg2) const;
        IfType* GetTempModel(const configdecoder::SeqType* seqType, int arg2, bool arg3, const PlayerModel* playerModel,
                             bool& arg5, configdecoder::NpcType* npcType,
                             configdecoder::NPCTypeCustomisation* npcTypeCustomisation) const;
        shared_ptr<configdecoder::ObjType>* GetMask(bool arg1, bool& arg2) const;
        void ResetCache();
        void SetOpName(int arg1, const eastl::string& str);
        void SetOpName(int arg1, eastl::string&& str);
        bool CanSkipLogicIfNotVisible();
        bool IsActiveComponent();
        bool HasHardcodedMouseInputBehaviour();
        void InitialiseCRM(const eastl::string& str, http::CRMData::ClientDataProvider* clientDataProvider);
        void InitialiseCRMFromJSON(const eastl::string& str);
        unsigned long ServiceCRMView();
        void BuildCRMView();
        bool IsInsideCRMClickBounds(int arg1, int arg2, int arg3, int arg4);
        void InitialiseInputField();
        uint8_t ServiceInputField();
        static Array<Array<shared_ptr<IfType>>> m_list;
        static Array<bool> m_open; // = Array<bool>()
        static int64_t m_pInterfaces;
        static int64_t m_pModels;
        static int64_t m_pSprites;
        static int64_t m_pFontMetrics;
        static LRUHashCache<graphics::Pix32, 200ul, 201ul, false, unsigned long long> m_spriteCache;
        static LRUHashCache<dash3d::ModelLit, 50ul, 51ul, false, unsigned long long> m_modelCache;
        static LRUHashCache<jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long> m_fontCache;
        static LRUHashCache<InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long> m_maskCache;
        static LRUHashCache<HttpSpriteData, 10ul, 11ul, false, eastl::string> m_httpSpriteCacheRaw;
        static LRUHashCache<graphics::Pix32, 10ul, 11ul, false, eastl::string> m_httpSpriteCacheProcessed;

    private:
        uint8_t field_0;
        uint8_t _unknown_1[3];
        int field_4;
        uint32_t field_8;
        unsigned int field_12;
        unsigned int field_16;
        unsigned int field_20;
        uint8_t field_24;
        uint8_t _unknown_25[7];
        int field_32;
        int field_36;
        int field_40;
        int field_44;
        int field_48;
        int field_52;
        unsigned int field_56;
        unsigned int field_60;
        uint8_t _unknown_64[8];
        int field_72;
        int field_76;
        uint64_t field_80;
        unsigned int field_88;
        bool field_92;
        uint8_t _unknown_93[3];
        uint64_t field_96;
        unsigned int field_104;
        unsigned int field_108;
        uint32_t field_112;
        uint32_t field_116;
        uint32_t field_120;
        uint32_t field_124;
        uint32_t field_128;
        bool field_132;
        uint8_t _unknown_133[7];
        unsigned int field_140;
        uint32_t field_144;
        unsigned int field_148;
        bool field_152;
        uint8_t _unknown_153[3];
        unsigned int field_156;
        unsigned int field_160;
        int field_164;
        int field_168;
        uint8_t _unknown_172[36];
        unsigned int field_208;
        bool field_212;
        uint8_t _unknown_213[3];
        unsigned int field_216;
        unsigned int field_220;
        bool field_224;
        bool field_225;
        uint8_t _unknown_226[2];
        uint32_t field_228;
        unsigned int field_232;
        uint32_t field_236;
        unsigned int field_240;
        unsigned int field_244;
        unsigned int field_248;
        int field_252;
        int field_256;
        unsigned int field_260;
        unsigned int field_264;
        unsigned int field_268;
        unsigned int field_272;
        unsigned int field_276;
        unsigned int field_280;
        uint8_t _unknown_284[4];
        bool field_288;
        uint8_t _unknown_289[3];
        uint32_t field_292;
        uint8_t _unknown_296[16];
        unsigned int field_312;
        uint8_t _unknown_316[68];
        unsigned int field_384;
        unsigned int field_388;
        unsigned int field_392;
        bool field_396;
        uint8_t _unknown_397[3];
        uint64_t field_400;
        uint8_t _unknown_408[272];
        int field_680;
        unsigned int field_684;
        uint8_t field_688;
        uint8_t _unknown_689[87];
        uint64_t field_776;
        uint16_t field_784;
        uint8_t _unknown_786[38];
        uint8_t field_824;
        uint8_t _unknown_825[1039];
        unsigned int field_1864;
        uint8_t _unknown_1868[116];
        uint64_t field_1984;
        uint64_t field_1992;
        uint8_t _unknown_2000[24];
        uint16_t field_2024;
        uint8_t _unknown_2026[2];
        uint64_t field_2028;
        uint64_t field_2036;
        uint64_t field_2044;
        uint8_t _unknown_2052[28];
        bool field_2080;
        uint8_t _unknown_2081[1];
        uint8_t field_2082;
        uint8_t _unknown_2083[37];
    };

    class IfType::ServerKeyData {
    public:
        ServerKeyData();
        ~ServerKeyData();

        uint8_t _unknown_0[616];
    };

    // 0x10006cad0
    uint64_t InterfaceGraphicMask::pointInside(int arg1, int arg2) {
        int iVar1;
        unsigned long uVar2;
        int* piVar3;

        if (-1 < arg2) {
            uVar2 = field_32.end();
            if ((unsigned long)arg2 < uVar2) {
                piVar3 = &field_32[(unsigned long)arg2];
                iVar1 = *piVar3;
                if (iVar1 <= arg1) {
                    piVar3 = &field_8[(unsigned long)arg2];
                    if (arg1 <= iVar1 + *piVar3) {
                        return 1;
                    }
                }
            }
        }
        return 0;
    }

    // 0x1001059b0
    void IfType::SetOnDestroyCallback(std::function<void(IfType const&)> callback) {
        field_2112 = *callback;
    }

    // 0x10015a200
    CRMViewHandler* IfType::GetCRMViewHandler() const {
        return (CRMViewHandler*)field_2088.get();
    }

    // 0x1001952f0
    uint64_t IfType::GetInputField() {
        uint64_t uVar2;

        if (field_2096.get() == 0) {
            uVar2 = 0;
        } else {
            uVar2 = field_2096.operator->();
        }
        return uVar2;
    }

    // 0x1001954f0
    long IfType::GetInputFieldAppearance() {
        long lVar1 = field_2096.get();
        if (lVar1 == 0) {
            lVar1 = 0;
        } else {
            lVar1 = field_2096.operator->();
            lVar1 = lVar1 + 352;
        }
        return lVar1;
    }

    // 0x100195580
    KeyConsumptionMap* IfType::GetInputFieldKeyMap() {
        KeyConsumptionMap* pKVar2;

        long lVar1 = field_2096.get();
        if (lVar1 == 0) {
            pKVar2 = nullptr;
        } else {
            lVar1 = field_2096.operator->();
            pKVar2 = (KeyConsumptionMap*)(lVar1 + 364);
        }
        return pKVar2;
    }

    // 0x100195b40
    InputField* IfType::GetInputFieldWrapper() {
        return (InputField*)field_2096.get();
    }

    // 0x1001a3a20
    IfType::ServerKeyData::ServerKeyData() : std::array<Array<unsigned char>, 11ul>() {}

    // 0x1001ae560
    IfType::IfType(int arg1) : field_0(0), field_4(arg1), field_8(4294967295), field_12(0), field_16(0) {
        *(uint64_t*)((long)&field_16 + 1) = 0;
        *(uint64_t*)&field_28 = 0;
        field_36 = 0;
        field_40 = 0;
        field_44 = 0;
        field_48 = 0;
        field_52 = 0;
        field_56 = 0;
        *(uint64_t*)&field_60 = 0;
        *(uint64_t*)&field_68 = 0;
        field_76 = 0;
        field_80 = 4294967297;
        field_88 = 4294967295;
        field_92 = false;
        field_96 = 0;
        field_104 = 0;
        field_108 = 0;
        field_112 = 3;
        *(uint64_t*)&field_136 = 0;
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
        field_164 = -1;
        field_168 = -1;
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
        *(uint64_t*)((long)&field_280 + 2) = 0;
        field_292 = 1;
        new (&field_296) shared_ptr();
        field_312 = 4294967295;
        new (&field_320) eastl::string();
        new (&field_352) eastl::string();
        field_400 = 0;
        field_384 = 0;
        field_388 = 0;
        *(uint64_t*)((long)&field_388 + 1) = 0;
        new (&field_408) Array<int>();
        new (&field_432) Array<int>();
        new (&field_456) Array<int>();
        new (&field_480) eastl::fixed_vector<eastl::string, 5ul>();
        field_680 = -1;
        field_684 = 0;
        field_688 = 0;
        field_696.unique_ptr<true, void>();
        new (&field_704) eastl::string();
        new (&field_736) Array<eastl::string>();
        new (&field_760) shared_ptr();
        field_784 = 0;
        field_776 = 0;
        new (&field_792) eastl::string();
        field_824 = 0;
        new (&field_832) Array<HookArg>();
        new (&field_856) Array<HookArg>();
        new (&field_880) Array<HookArg>();
        new (&field_904) Array<HookArg>();
        new (&field_928) Array<HookArg>();
        new (&field_952) Array<HookArg>();
        new (&field_976) Array<HookArg>();
        new (&field_1000) Array<HookArg>();
        new (&field_1024) Array<HookArg>();
        new (&field_1048) Array<HookArg>();
        new (&field_1072) Array<HookArg>();
        new (&field_1096) Array<HookArg>();
        new (&field_1120) Array<HookArg>();
        new (&field_1144) eastl::vector<int>();
        new (&field_1176) Array<HookArg>();
        new (&field_1200) eastl::vector<int>();
        new (&field_1232) Array<HookArg>();
        new (&field_1256) eastl::vector<int>();
        new (&field_1288) Array<HookArg>();
        new (&field_1312) Array<HookArg>();
        new (&field_1336) Array<HookArg>();
        new (&field_1360) Array<HookArg>();
        new (&field_1384) Array<HookArg>();
        new (&field_1408) Array<HookArg>();
        new (&field_1432) Array<HookArg>();
        new (&field_1456) Array<HookArg>();
        new (&field_1480) Array<HookArg>();
        new (&field_1504) Array<HookArg>();
        new (&field_1528) Array<HookArg>();
        new (&field_1552) Array<HookArg>();
        new (&field_1576) Array<HookArg>();
        new (&field_1600) Array<HookArg>();
        new (&field_1624) Array<HookArg>();
        new (&field_1648) Array<HookArg>();
        new (&field_1672) Array<HookArg>();
        new (&field_1696) Array<HookArg>();
        new (&field_1720) Array<HookArg>();
        new (&field_1744) Array<HookArg>();
        new (&field_1768) Array<HookArg>();
        new (&field_1792) Array<Array<int>>();
        new (&field_1816) Array<int>();
        new (&field_1840) Array<int>();
        field_1864 = 4294967295;
        new (&field_1872) eastl::string();
        new (&field_1904) eastl::string(*((eastl::string*)&constants::text::ok));
        new (&field_1936) Array<int>();
        new (&field_1960) Array<int>();
        field_1984 = 4294967295;
        field_1992 = 0;
        new (&field_2000) Array<shared_ptr<IfType>>();
        field_2024 = 0;
        field_2028 = 4294967295;
        field_2036 = 0;
        field_2044 = 18446744073709551615;
        new (&field_2056) Array<int>(11);
        *(uint16_t*)&field_2080 = 0;
        field_2082 = 0;
        field_2088.unique_ptr<true, void>();
        field_2096.unique_ptr<true, void>();
        new (&field_2112) std::function<void(IfType const&)>();
    }

    // 0x1001b5b00
    IfType::ServerKeyData::~ServerKeyData() {
        field_264.~array();
    }

} // namespace jag::oldscape::rs2lib

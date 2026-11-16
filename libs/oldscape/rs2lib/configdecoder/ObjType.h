// libs/oldscape/rs2lib/configdecoder/ObjType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::configdecoder {
    class ObjStatics {
    public:
        ObjStatics();
        ~ObjStatics();

        uint8_t _unknown_0[9640];
    };

    class ObjType {
    public:
        void Init(jagex3::Js5* js51, jagex3::Js5* js52, bool arg3, jstring::PixfontGeneric* pixfontGeneric);
        auto List(int arg1);
        void Decode(shared_ptr<PacketJ<Array<unsigned char>>> packetJ);
        void PostDecode();
        void GenCert(shared_ptr<ObjType> objType1, shared_ptr<ObjType> objType2);
        void GenBought(shared_ptr<ObjType> objType1, shared_ptr<ObjType> objType2);
        void GenPlaceholder(shared_ptr<ObjType> objType1, shared_ptr<ObjType> objType2);
        void Decode(shared_ptr<PacketJ<Array<unsigned char>>> packetJ, int arg2);
        auto GetModelUnlit(int arg1);
        ObjType* GetModelLit(int arg1) const;
        auto GetStackSizeAlt(const shared_ptr<ObjType>& objType, int arg2);
        ObjType* GetSprite(int arg1, int arg2, int arg3, int arg4, SpriteTextType spriteTextType, bool arg6,
                           const eastl::string& str);
        auto InvNumber(int arg1);
        ObjType* GetBaseSprite(const ObjType& objType, int arg2, int arg3, int arg4, int arg5, int arg6);
        bool CheckWearModel(int arg1);
        auto GetWearModelNoCheck(int arg1);
        bool CheckHeadModel(int arg1);
        ObjType* GetHeadModelNoCheck(int arg1);
        auto GetParam(int arg1, const eastl::string& str);
        void GetParam(int arg1, int arg2);
        int GetShiftClickIOp();
        void ResetCache();
        void ResetSpriteCache();
        void SwitchMembers(bool arg1);
        bool CanBeRecoloured() const;
        bool CanBeRetextured() const;
        ObjType();
        ~ObjType();
        static int64_t m_pConfigClient;
        static int64_t m_pModels;
        static int32_t m_memServer;
        static int32_t m_numDefinitions;
        static int64_t m_countFont;
        static graphics::OffscreenSoftwarePixToolkit m_objSpriteToolkit; // = OffscreenSoftwarePixToolkit()

    private:
        uint32_t field_0;
        unsigned int field_4;
        uint8_t _unknown_8[64];
        uint32_t field_72;
        uint8_t _unknown_76[100];
        unsigned int field_176;
        unsigned int field_180;
        unsigned int field_184;
        unsigned int field_188;
        unsigned int field_192;
        unsigned int field_196;
        uint32_t field_200;
        uint32_t field_204;
        unsigned int field_208;
        unsigned int field_212;
        unsigned int field_216;
        uint8_t field_220;
        uint8_t _unknown_221[403];
        unsigned int field_624;
        unsigned int field_628;
        unsigned int field_632;
        unsigned int field_636;
        unsigned int field_640;
        unsigned int field_644;
        unsigned int field_648;
        unsigned int field_652;
        unsigned int field_656;
        unsigned int field_660;
        unsigned int field_664;
        unsigned int field_668;
        unsigned int field_672;
        uint8_t _unknown_676[52];
        unsigned int field_728;
        unsigned int field_732;
        unsigned int field_736;
        unsigned int field_740;
        unsigned int field_744;
        int field_748;
        int field_752;
        unsigned int field_756;
        int field_760;
        uint8_t _unknown_764[60];
        uint16_t field_824;
        uint8_t _unknown_826[2];
        unsigned int field_828;
        unsigned int field_832;
        unsigned int field_836;
        unsigned int field_840;
        int field_844;
        uint8_t _unknown_848[4];
    };

    // 0x100233d40
    bool ObjType::CanBeRecoloured() const {
        return field_104.empty() ^ 1;
    }

    // 0x100233d60
    bool ObjType::CanBeRetextured() const {
        return field_152.empty() ^ 1;
    }

    // 0x100242d00
    ObjStatics::ObjStatics()
        : LRUHashCache<ObjType, 64ul, 65ul, false, unsigned long long>(64, "LRUHashCache"),
          field_5376(50, "LRUHashCache"), field_9632(200, "LRUHashCache") {}

    // 0x100243940
    ObjStatics::~ObjStatics() {
        field_9632.~LRUHashCache();
        field_5376.~LRUHashCache();
    }

    // 0x100249c20
    ObjType::ObjType()
        : field_0(4294967295), field_72(4294967295), field_176(2000), field_180(0), field_184(0), field_188(0),
          field_192(0), field_196(0), field_200(0), field_204(1), field_208(4294967295), field_212(4294967295),
          field_216(4294967295), field_220(0) {
        eastl::string local_d8("");
        eastl::string local_b8("");
        eastl::string local_98(*((eastl::string*)&constants::text::take));
        eastl::string local_78("");
        eastl::string local_58("");
        new (&field_224) eastl::fixed_vector<eastl::string, 5ul>(&local_d8, *5);
        long lVar1 = 128;
        do {
            (&local_d8 + lVar1)->~basic_string();
            lVar1 = lVar1 - 32;
        } while (lVar1 != -32);
        local_d8 = eastl::string("");
        local_b8 = eastl::string("");
        local_98 = eastl::string("");
        local_78 = eastl::string("");
        local_58 = eastl::string(*((eastl::string*)&constants::text::drop));
        new (&field_424) eastl::fixed_vector<eastl::string, 5ul>(&local_d8, *5);
        lVar1 = 128;
        do {
            (&local_d8 + lVar1)->~basic_string();
            lVar1 = lVar1 - 32;
        } while (lVar1 != -32);
        field_624 = 4294967295;
        field_628 = 4294967295;
        field_632 = 0;
        field_636 = 4294967295;
        field_640 = 4294967295;
        field_644 = 0;
        field_648 = 4294967295;
        field_652 = 4294967295;
        field_656 = 4294967295;
        field_660 = 4294967295;
        field_660 = 4294967295;
        field_664 = 4294967295;
        field_668 = 4294967295;
        field_672 = 4294967295;
        new (&field_680) Array<int>();
        new (&field_704) Array<int>();
        field_728 = 4294967295;
        field_732 = 4294967295;
        field_736 = 128;
        field_740 = 128;
        field_744 = 128;
        field_748 = 0;
        field_752 = 0;
        field_756 = 0;
        field_760 = 0;
        new (&field_768) eastl::hash_map<long long, ParamTypeHelper::ParamVariant>(local_d8);
        field_824 = 0;
        field_828 = 4294967295;
        field_832 = 4294967295;
        field_836 = 4294967295;
        field_840 = 4294967295;
        field_844 = -2;
    }

    // 0x10024a370
    ObjType::~ObjType() {
        field_768.~hash_map();
        field_704.~Array();
        field_680.~Array();
        field_424.~fixed_vector();
        field_224.~fixed_vector();
        field_152.~Array();
        field_128.~Array();
        field_104.~Array();
        field_80.~Array();
        field_40.~basic_string();
        field_8.~basic_string();
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x1002340a0
    shared_ptr_if_not_array<oldscape::configdecoder::ObjTypeCustomisation>::type
    make_shared<oldscape::configdecoder::ObjTypeCustomisation, int&>(int& arg1) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        ObjTypeCustomisation* local_30[2];

        auto arg1_00 = aligned_alloc(80, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::configdecoder::ObjTypeCustomisation>::type result;
        } else {
            local_30[0] =
                placement_new<oldscape::configdecoder::ObjTypeCustomisation, int&>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::configdecoder::ObjTypeCustomisation>, int,
                              oldscape::configdecoder::ObjTypeCustomisation*&>(arg1_00, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag

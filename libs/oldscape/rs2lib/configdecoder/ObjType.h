// libs/oldscape/rs2lib/configdecoder/ObjType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::configdecoder {
    class ObjStatics {
    public:
        ObjStatics();
        ~ObjStatics();

        // data members, from how the methods use this: 9640 bytes
        char _unknown_0[9640];
    };

    class ObjType {
    public:
        void Init(jagex3::Js5*, jagex3::Js5*, bool, jstring::PixfontGeneric*);
        ObjType* List(int);
        void Decode(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>);
        void PostDecode();
        void GenCert(shared_ptr<ObjType>, shared_ptr<ObjType>);
        void GenBought(shared_ptr<ObjType>, shared_ptr<ObjType>);
        void GenPlaceholder(shared_ptr<ObjType>, shared_ptr<ObjType>);
        void Decode(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, int);
        GetModelUnlit(int);
        GetModelLit(int) const;
        ObjType* GetStackSizeAlt(shared_ptr<ObjType> const&, int);
        ObjType* GetSprite(int, int, int, int, SpriteTextType, bool, eastl::string const&);
        ObjType* InvNumber(int);
        ObjType* GetBaseSprite(ObjType const&, int, int, int, int, int);
        bool CheckWearModel(int);
        GetWearModelNoCheck(int);
        bool CheckHeadModel(int);
        GetHeadModelNoCheck(int);
        GetParam(int, eastl::string const&);
        void GetParam(int, int);
        int GetShiftClickIOp();
        void ResetCache();
        void ResetSpriteCache();
        void SwitchMembers(bool);
        byte CanBeRecoloured() const;
        byte CanBeRetextured() const;
        ObjType();
        ~ObjType();
        static /* 8 bytes */ m_pConfigClient;
        static /* 8 bytes */ m_pModels;
        static /* 4 bytes */ m_memServer;
        static /* 4 bytes */ m_numDefinitions;
        static /* 8 bytes */ m_countFont;
        static graphics::OffscreenSoftwarePixToolkit /* 6437456 bytes */
            m_objSpriteToolkit;                      // = OffscreenSoftwarePixToolkit()

        // data members, from how the methods use this: 852 bytes
        undefined4 field_0; // offset 0
        uint field_4;       // offset 4
        long field_8;       // offset 8
        char _unknown_16[56];
        undefined4 field_72; // offset 72
        char _unknown_76[100];
        uint field_176;       // offset 176
        uint field_180;       // offset 180
        uint field_184;       // offset 184
        uint field_188;       // offset 188
        uint field_192;       // offset 192
        uint field_196;       // offset 196
        undefined4 field_200; // offset 200
        undefined4 field_204; // offset 204
        uint field_208;       // offset 208
        uint field_212;       // offset 212
        uint field_216;       // offset 216
        undefined1 field_220; // offset 220
        char _unknown_221[3];
        undefined1 field_224; // offset 224
        char _unknown_225[199];
        undefined1 field_424; // offset 424
        char _unknown_425[199];
        uint field_624; // offset 624
        uint field_628; // offset 628
        uint field_632; // offset 632
        uint field_636; // offset 636
        uint field_640; // offset 640
        uint field_644; // offset 644
        uint field_648; // offset 648
        uint field_652; // offset 652
        uint field_656; // offset 656
        uint field_660; // offset 660
        uint field_664; // offset 664
        uint field_668; // offset 668
        uint field_672; // offset 672
        char _unknown_676[52];
        uint field_728; // offset 728
        uint field_732; // offset 732
        uint field_736; // offset 736
        uint field_740; // offset 740
        uint field_744; // offset 744
        int field_748;  // offset 748
        int field_752;  // offset 752
        uint field_756; // offset 756
        int field_760;  // offset 760
        char _unknown_764[60];
        undefined2 field_824; // offset 824
        char _unknown_826[2];
        uint field_828; // offset 828
        uint field_832; // offset 832
        uint field_836; // offset 836
        uint field_840; // offset 840
        int field_844;  // offset 844
        char _unknown_848[4];
    };

    // 0x10022fbb0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ObjStatics::ObjStatics(): jumps straight to the base-object constructor

    // 0x10022fbc0, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // ObjStatics::~ObjStatics(): jumps straight to the base-object destructor

    // 0x100233d40, 32 bytes, inline, placed by class name and debug map
    // ObjType::CanBeRecoloured() const
    byte ObjType::CanBeRecoloured() {
        byte bVar1;

        bVar1 = (&field_104)->empty();
        return bVar1 ^ 1;
    }

    // 0x100233d60, 32 bytes, inline, placed by class name and debug map
    // ObjType::CanBeRetextured() const
    byte ObjType::CanBeRetextured() {
        byte bVar1;

        bVar1 = (&field_152)->empty();
        return bVar1 ^ 1;
    }

    // 0x100242d00, 128 bytes, base-object constructor, inline, placed by class header (inline)
    // ObjStatics::ObjStatics()
    void ObjStatics::ObjStatics() {
        new (this) LRUHashCache<ObjType, 64ul, 65ul, false, unsigned long long>(64, "LRUHashCache");
        new (&field_5376, 50, "LRUHashCache") LRUHashCache<dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>();
        new (&field_9632, 200, "LRUHashCache") LRUHashCache<ObjSprite, 200ul, 211ul, false, ObjSpriteCacheKey>();
    }

    // 0x100243940, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // ObjStatics::~ObjStatics()
    void ObjStatics::~ObjStatics() {
        (&field_9632)->~LRUHashCache();
        (&field_5376)->~LRUHashCache();
        ~LRUHashCache();
    }

    // 0x100249c10, 16 bytes, complete-object constructor, inline, placed by class name
    // ObjType::ObjType(): jumps straight to the base-object constructor

    // 0x100249c20, 1472 bytes, base-object constructor, inline, placed by class name
    // ObjType::ObjType()
    void ObjType::ObjType() {
        long lVar1;
        allocator local_100[8];
        allocator local_f8[8];
        allocator local_f0[8];
        allocator local_e8[8];
        allocator local_e0[8];
        eastl::string local_d8[32];
        eastl::string local_b8[32];
        eastl::string local_98[32];
        eastl::string local_78[32];
        eastl::string local_58[32];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        field_0 = 4294967295;
        new (&field_8) eastl::string();
        new (&field_40) eastl::string();
        field_72 = 4294967295;
        new (&field_80) Array<short, eastl::allocator>();
        new (&field_104) Array<short, eastl::allocator>();
        new (&field_128) Array<short, eastl::allocator>();
        new (&field_152) Array<short, eastl::allocator>();
        field_176 = 2000;
        field_180 = 0;
        field_184 = 0;
        field_188 = 0;
        field_192 = 0;
        field_196 = 0;
        field_200 = 0;
        field_204 = 1;
        field_208 = 4294967295;
        field_212 = 4294967295;
        field_216 = 4294967295;
        field_220 = 0;
        eastl::allocator::allocator(local_100, "EASTL basic_string");
        eastl::string::basic_string(local_d8, "", local_100);
        eastl::allocator::allocator(local_f8, "EASTL basic_string");
        eastl::string::basic_string(local_b8, "", local_f8);
        eastl::string::basic_string(local_98, (basic_string*)&constants::text::take);
        eastl::allocator::allocator(local_f0, "EASTL basic_string");
        eastl::string::basic_string(local_78, "", local_f0);
        eastl::allocator::allocator(local_e8, "EASTL basic_string");
        eastl::string::basic_string(local_58, "", local_e8);
        eastl::allocator::allocator(local_e0, "EASTL fixed_vector");
        new (&field_224, local_d8, 5, local_e0) eastl::fixed_vector<eastl::string, 5ul, true, eastl::allocator>();
        lVar1 = 128;
        do {
            eastl::string::~basic_string(local_d8 + lVar1);
            lVar1 = lVar1 + -32;
        } while (lVar1 != -32);
        eastl::allocator::allocator(local_100, "EASTL basic_string");
        eastl::string::basic_string(local_d8, "", local_100);
        eastl::allocator::allocator(local_f8, "EASTL basic_string");
        eastl::string::basic_string(local_b8, "", local_f8);
        eastl::allocator::allocator(local_f0, "EASTL basic_string");
        eastl::string::basic_string(local_98, "", local_f0);
        eastl::allocator::allocator(local_e8, "EASTL basic_string");
        eastl::string::basic_string(local_78, "", local_e8);
        eastl::string::basic_string(local_58, (basic_string*)&constants::text::drop);
        eastl::allocator::allocator(local_e0, "EASTL fixed_vector");
        new (&field_424, local_d8, 5, local_e0) eastl::fixed_vector<eastl::string, 5ul, true, eastl::allocator>();
        lVar1 = 128;
        do {
            eastl::string::~basic_string(local_d8 + lVar1);
            lVar1 = lVar1 + -32;
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
        new (&field_680) Array<int, eastl::allocator>();
        new (&field_704) Array<int, eastl::allocator>();
        field_728 = 4294967295;
        field_732 = 4294967295;
        field_736 = 128;
        field_740 = 128;
        field_744 = 128;
        field_748 = 0;
        field_752 = 0;
        field_756 = 0;
        field_760 = 0;
        new (local_d8) eastl::allocator("EASTL hash_map");
        new (&field_768, (allocator*)local_d8)
            eastl::hash_map<long long, ParamTypeHelper::ParamVariant, eastl::hash<long long>,
                            eastl::equal_to<long long>, eastl::allocator, false>();
        field_824 = 0;
        field_828 = 4294967295;
        field_832 = 4294967295;
        field_836 = 4294967295;
        field_840 = 4294967295;
        field_844 = -2;
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10024a360, 16 bytes, complete-object destructor, inline, placed by class name
    // ObjType::~ObjType(): jumps straight to the base-object destructor

    // 0x10024a370, 144 bytes, base-object destructor, inline, placed by class name
    // ObjType::~ObjType()
    void ObjType::~ObjType() {
        (&field_768)->~hash_map();
        (&field_704)->~Array();
        (&field_680)->~Array();
        (&field_424)->~fixed_vector();
        (&field_224)->~fixed_vector();
        (&field_152)->~Array();
        (&field_128)->~Array();
        (&field_104)->~Array();
        (&field_80)->~Array();
        (&field_40)->~basic_string();
        (&field_8)->~basic_string();
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x1002340a0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::configdecoder::ObjTypeCustomisation>::type make_shared<oldscape::configdecoder::ObjTypeCustomisation, int&>(int&)
    jag* make_shared<oldscape::configdecoder::ObjTypeCustomisation, int&>(int* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        ObjTypeCustomisation* local_30[2];

        pvVar1 = (void*)aligned_alloc(80, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] =
                placement_new<oldscape::configdecoder::ObjTypeCustomisation, int&>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::configdecoder::ObjTypeCustomisation>, int,
                                   oldscape::configdecoder::ObjTypeCustomisation*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag

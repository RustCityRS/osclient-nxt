// libs/oldscape/rs2lib/configdecoder/NpcType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag {
    // 0x100249540, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::NpcType>::ref_counter_shared(unsigned long, oldscape::configdecoder::NpcType*): jumps straight to the base-object constructor

    // 0x100249550, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::NpcType>::ref_counter_shared(unsigned long, oldscape::configdecoder::NpcType*)
    void ref_counter_shared<oldscape::configdecoder::NpcType>::ref_counter_shared(ulong param_1, NpcType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7610 + 16;
        *(ulong*)(this + 16) = param_1;
        *(NpcType**)(this + 24) = param_2;
    }

    // 0x100249590, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::NpcType>::DeleteData()
    void ref_counter_shared<oldscape::configdecoder::NpcType>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~NpcType();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 728;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100249bc0, 48 bytes, inline, placed by debug map only (low confidence)
    // oldscape::configdecoder::ObjType* placement_new<oldscape::configdecoder::ObjType>(void*)
    ObjType* placement_new<oldscape::configdecoder::ObjType>(void* param_1) {
        ___bzero(param_1, 848);
        oldscape::configdecoder::ObjType::ObjType(param_1);
        return param_1;
    }

    // 0x100249bf0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::ObjType>* placement_new<ref_counter_shared<oldscape::configdecoder::ObjType>, int, oldscape::configdecoder::ObjType*&>(void*, int&&, oldscape::configdecoder::ObjType*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::configdecoder::ObjType>, int, oldscape::configdecoder::ObjType*&>(
        void* param_1, int* param_2, ObjType** param_3) {
        ref_counter_shared<oldscape::configdecoder::ObjType>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10024a2c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::ObjType>::ref_counter_shared(unsigned long, oldscape::configdecoder::ObjType*): jumps straight to the base-object constructor

    // 0x10024a2d0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::ObjType>::ref_counter_shared(unsigned long, oldscape::configdecoder::ObjType*)
    void ref_counter_shared<oldscape::configdecoder::ObjType>::ref_counter_shared(ulong param_1, ObjType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7618 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ObjType**)(this + 24) = param_2;
    }

    // 0x10024a310, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::ObjType>::DeleteData()
    void ref_counter_shared<oldscape::configdecoder::ObjType>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~ObjType();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 848;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10024a7f0, 32 bytes, inline, placed by debug map only (low confidence)
    // LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>::Unlink()
    void
    jag::LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>::Unlink(
        LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>* this) {
        long lVar1;

        lVar1 = *(long*)(this + 80);
        *(undefined8*)(lVar1 + 88) = *(undefined8*)(this + 88);
        *(long*)(*(long*)(this + 88) + 80) = lVar1;
    }

    // 0x10024a810, 32 bytes, inline, placed by debug map only (low confidence)
    // LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>::InsertAfter(LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>&)
    void jag::LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>::
        InsertAfter(
            LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>* this,
            LRUHashCacheWrapper* param_1) {
        long lVar1;

        lVar1 = *(long*)(param_1 + 88);
        *(LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>**)(lVar1 +
                                                                                                                 80) =
            this;
        *(long*)(this + 88) = lVar1;
        *(LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite,
                              oldscape::configdecoder::ObjSpriteCacheKey>**)(param_1 + 88) = this;
        *(LRUHashCacheWrapper**)(this + 80) = param_1;
    }

    // 0x10024a990, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::configdecoder::ObjSprite* placement_new<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjType::ObjTypeConstants, oldscape::configdecoder::ObjType::ObjTypeConstants>(void*, oldscape::configdecoder::ObjType::ObjTypeConstants&&, oldscape::configdecoder::ObjType::ObjTypeConstants&&)
    /* oldscape::configdecoder::ObjSprite*
   placement_new<oldscape::configdecoder::ObjSprite, int&, int&>(void*, int&, int&) */

    ObjSprite* placement_new<oldscape::configdecoder::ObjSprite, int&, int&>(void* param_1, int* param_2,
                                                                             int* param_3) {
        oldscape::configdecoder::ObjSprite::ObjSprite(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x10024a9b0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::ObjSprite>* placement_new<ref_counter_shared<oldscape::configdecoder::ObjSprite>, int, oldscape::configdecoder::ObjSprite*&>(void*, int&&, oldscape::configdecoder::ObjSprite*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::configdecoder::ObjSprite>, int,
                                           oldscape::configdecoder::ObjSprite*&>(void* param_1, int* param_2,
                                                                                 ObjSprite** param_3) {
        ref_counter_shared<oldscape::configdecoder::ObjSprite>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10024aa10, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::ObjSprite>::ref_counter_shared(unsigned long, oldscape::configdecoder::ObjSprite*): jumps straight to the base-object constructor

    // 0x10024aa20, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::ObjSprite>::ref_counter_shared(unsigned long, oldscape::configdecoder::ObjSprite*)
    void ref_counter_shared<oldscape::configdecoder::ObjSprite>::ref_counter_shared(ulong param_1, ObjSprite* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7640 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ObjSprite**)(this + 24) = param_2;
    }

    // 0x10024aa60, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::ObjSprite>::DeleteData()
    void ref_counter_shared<oldscape::configdecoder::ObjSprite>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~ObjSprite();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 80;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10024ac00, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>::LRUHashCacheWrapper(shared_ptr<oldscape::configdecoder::ObjSprite> const&, oldscape::configdecoder::ObjSpriteCacheKey const&, unsigned long long, unsigned int): jumps straight to the base-object constructor

    // 0x10024b140, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>::LRUHashCacheWrapper(shared_ptr<oldscape::configdecoder::ObjSprite> const&, oldscape::configdecoder::ObjSpriteCacheKey const&, unsigned long long, unsigned int)
    void jag::LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>::
        LRUHashCacheWrapper(
            LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>* this,
            shared_ptr* param_1, ObjSpriteCacheKey* param_2, ulonglong param_3, uint param_4) {
        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
        new ((this + 16)) oldscape::configdecoder::ObjSpriteCacheKey(param_2);
        *(uint*)(this + 64) = param_4;
        *(ulonglong*)(this + 72) = param_3;
        *(undefined8*)(this + 80) = 0;
        *(undefined8*)(this + 88) = 0;
    }

    // 0x10024b800, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::configdecoder::ObjTypeCustomisation* placement_new<oldscape::configdecoder::ObjTypeCustomisation, int&>(void*, int&)
    ObjTypeCustomisation* placement_new<oldscape::configdecoder::ObjTypeCustomisation, int&>(void* param_1,
                                                                                             int* param_2) {
        oldscape::configdecoder::ObjTypeCustomisation::ObjTypeCustomisation(param_1, *param_2);
        return param_1;
    }

    // 0x10024b820, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::ObjTypeCustomisation>* placement_new<ref_counter_shared<oldscape::configdecoder::ObjTypeCustomisation>, int, oldscape::configdecoder::ObjTypeCustomisation*&>(void*, int&&, oldscape::configdecoder::ObjTypeCustomisation*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::configdecoder::ObjTypeCustomisation>, int,
                       oldscape::configdecoder::ObjTypeCustomisation*&>(void* param_1, int* param_2,
                                                                        ObjTypeCustomisation** param_3) {
        ref_counter_shared<oldscape::configdecoder::ObjTypeCustomisation>::ref_counter_shared(param_1, (long)*param_2,
                                                                                              *param_3);
        return param_1;
    }

    // 0x10024b840, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::ObjTypeCustomisation>::ref_counter_shared(unsigned long, oldscape::configdecoder::ObjTypeCustomisation*): jumps straight to the base-object constructor

    // 0x10024b850, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::ObjTypeCustomisation>::ref_counter_shared(unsigned long, oldscape::configdecoder::ObjTypeCustomisation*)
    void ref_counter_shared<oldscape::configdecoder::ObjTypeCustomisation>::ref_counter_shared(
        ulong param_1, ObjTypeCustomisation* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee75f8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ObjTypeCustomisation**)(this + 24) = param_2;
    }

    // 0x10024b890, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::ObjTypeCustomisation>::DeleteData()
    void ref_counter_shared<oldscape::configdecoder::ObjTypeCustomisation>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~ObjTypeCustomisation();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 48;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag

namespace jag::oldscape::configdecoder {
    class NpcType {
    public:
        ulong HasHeadIcons() const;
        GetHeadIconGraphics() const;
        GetHeadIconIndices() const;
        void Init(jagex3::Js5*, jagex3::Js5*);
        NpcType* List(int);
        void Decode(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>);
        void PostDecode();
        void Decode(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, int);
        GetTempModel(SeqType*, int, SeqType*, int, NPCTypeCustomisation*);
        GetMultiNpc() const;
        BuildModel(Array<int, eastl::allocator> const&, NPCTypeCustomisation const*) const;
        GetHead(NPCTypeCustomisation*);
        NpcType* GetMultiNpcOrThis() const;
        NpcType* GetSpecifiedMultiNpcOrThis(int) const;
        bool IsMultiNpcVisible();
        GetParam(int, eastl::string const&);
        void GetParam(int, int);
        void ResetCache();
        GetHeadIconGraphic(int) const;
        GetHeadIconIndex(int) const;
        NpcType();
        ~NpcType();
        static /* 8 bytes */ m_pConfigClient;
        static /* 8 bytes */ m_pModels;
        static /* 5376 bytes */ m_recentUse;
        static /* 5376 bytes */ m_modelCache;

        // data members, from how the methods use this: 664 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[4];
        long field_8; // offset 8
        char _unknown_16[24];
        uint field_40; // offset 40
        char _unknown_44[52];
        uint field_96;  // offset 96
        uint field_100; // offset 100
        uint field_104; // offset 104
        uint field_108; // offset 108
        uint field_112; // offset 112
        uint field_116; // offset 116
        uint field_120; // offset 120
        uint field_124; // offset 124
        uint field_128; // offset 128
        uint field_132; // offset 132
        uint field_136; // offset 136
        uint field_140; // offset 140
        uint field_144; // offset 144
        uint field_148; // offset 148
        uint field_152; // offset 152
        uint field_156; // offset 156
        char _unknown_160[296];
        undefined1 field_456; // offset 456
        char _unknown_457[3];
        uint field_460;       // offset 460
        uint field_464;       // offset 464
        uint field_468;       // offset 468
        undefined1 field_472; // offset 472
        char _unknown_473[3];
        int field_476;  // offset 476
        int field_480;  // offset 480
        uint field_484; // offset 484
        char _unknown_488[24];
        uint field_512;       // offset 512
        uint field_516;       // offset 516
        undefined1 field_520; // offset 520
        undefined1 field_521; // offset 521
        undefined1 field_522; // offset 522
        char _unknown_523[133];
        undefined1 m_headIconIndices; // offset 656
        char _unknown_657[7];
    };

    class ObjSprite {
    public:
        ObjSprite(int, int);
        ~ObjSprite();

        // data members, from how the methods use this: 56 bytes
        char _unknown_0[56];
    };

    // 0x10011cda0, 64 bytes, inline, placed by class name and debug map
    // NpcType::HasHeadIcons() const
    ulong NpcType::HasHeadIcons() {
        char cVar1;
        ulong uVar2;

        cVar1 = (&field_584)->empty();
        if (cVar1 == '\0') {
            uVar2 = (&m_headIconIndices)->empty();
            uVar2 = uVar2 ^ 1;
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x10011ceb0, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // NpcType::GetHeadIconGraphics() const
    /* game::Terrain::GetWaterHeights() const */

    undefined1* game::Terrain::GetWaterHeights() {
        return m_waterHeights;
    }

    // 0x10011ced0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // NpcType::GetHeadIconIndices() const
    /* jag::graphics::Model::GetBatchList() */

    undefined1* jag::graphics::Model::GetBatchList() {
        return &field_656;
    }

    // 0x1002491d0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // NpcType::NpcType(): jumps straight to the base-object constructor

    // 0x1002491e0, 576 bytes, base-object constructor, inline, placed by class name and debug map
    // NpcType::NpcType()
    void NpcType::NpcType() {
        allocator local_70[8];
        long* local_68;
        undefined1* local_60;
        undefined1* local_58;
        undefined1* local_50;
        undefined1* local_48;
        undefined1* local_40;
        undefined1* local_38;

        field_0 = 0;
        local_68 = &field_8;
        new (local_68) eastl::string();
        field_40 = 1;
        new (&field_48) Array<int, eastl::allocator>();
        local_60 = &field_48;
        new (&field_72) Array<int, eastl::allocator>();
        field_144 = 4294967295;
        field_148 = 4294967295;
        field_152 = 4294967295;
        field_156 = 4294967295;
        field_128 = 4294967295;
        field_132 = 4294967295;
        field_136 = 4294967295;
        field_140 = 4294967295;
        field_112 = 4294967295;
        field_116 = 4294967295;
        field_120 = 4294967295;
        field_124 = 4294967295;
        field_96 = 4294967295;
        field_100 = 4294967295;
        field_104 = 4294967295;
        field_108 = 4294967295;
        local_58 = &field_72;
        new (&field_160) Array<short, eastl::allocator>();
        local_50 = &field_160;
        new (&field_184) Array<short, eastl::allocator>();
        local_40 = &field_208;
        local_48 = &field_184;
        new (local_40) Array<short, eastl::allocator>();
        new (&field_232) Array<short, eastl::allocator>();
        local_38 = &field_232;
        new (&field_256, 5) eastl::fixed_vector<eastl::string, 5ul, true, eastl::allocator>();
        field_456 = 1;
        field_460 = 4294967295;
        field_464 = 128;
        field_468 = 128;
        field_472 = 0;
        field_476 = 0;
        field_480 = 0;
        field_484 = 32;
        new (&field_488) Array<int, eastl::allocator>();
        field_512 = 4294967295;
        field_516 = 4294967295;
        field_520 = 1;
        field_521 = 1;
        field_522 = 0;
        eastl::allocator::allocator(local_70, "EASTL hash_map");
        new (&field_528, local_70) eastl::hash_map<long long, ParamTypeHelper::ParamVariant, eastl::hash<long long>,
                                                   eastl::equal_to<long long>, eastl::allocator, false>();
        new (&field_584) eastl::fixed_vector<int, 8ul, true, eastl::allocator>();
        new (&m_headIconIndices) eastl::fixed_vector<int, 8ul, true, eastl::allocator>();
    }

    // 0x1002495e0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // NpcType::~NpcType(): jumps straight to the base-object destructor

    // 0x1002495f0, 160 bytes, base-object destructor, inline, placed by class name and debug map
    // NpcType::~NpcType()
    void NpcType::~NpcType() {
        (&m_headIconIndices)->~fixed_vector();
        (&field_584)->~fixed_vector();
        (&field_528)->~hash_map();
        (&field_488)->~Array();
        (&field_256)->~fixed_vector();
        (&field_232)->~Array();
        (&field_208)->~Array();
        (&field_184)->~Array();
        (&field_160)->~Array();
        (&field_72)->~Array();
        (&field_48)->~Array();
        (&field_8)->~basic_string();
    }

    // 0x10024a8e0, 48 bytes, inline, placed by debug map only (low confidence)
    // ObjSpriteCacheKey::operator==(ObjSpriteCacheKey const&) const
    /* ObjSpriteCacheKey::TEMPNAMEPLACEHOLDERVALUE(ObjSpriteCacheKey
   const&) const */

    bool ObjSpriteCacheKey::operator==(ObjSpriteCacheKey* param_1) {
        bool bVar1;

        if (((field_0 == param_1->field_0) && (field_4 == param_1->field_4)) && (field_8 == param_1->field_8)) {
            bVar1 = eastl::operator==((basic_string*)&field_16, (basic_string*)&param_1->field_16);
            return bVar1;
        }
        return false;
    }

    // 0x10024a9d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ObjSprite::ObjSprite(int, int): jumps straight to the base-object constructor

    // 0x10024a9e0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ObjSprite::ObjSprite(int, int)
    void ObjSprite::ObjSprite(int param_1, int param_2) {
        new (this) graphics::Pix32(param_1, param_2);
        new (&field_48) eastl::string();
    }

    // 0x10024aab0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ObjSprite::~ObjSprite(): jumps straight to the base-object destructor

    // 0x10024aac0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // ObjSprite::~ObjSprite()
    void ObjSprite::~ObjSprite() {
        (&field_48)->~basic_string();
        ~BlendedGround();
    }

    // 0x10024ad50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ObjSpriteCacheKey::ObjSpriteCacheKey(ObjSpriteCacheKey const&): jumps straight to the base-object constructor

    // 0x10024ae30, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ObjSpriteCacheKey::ObjSpriteCacheKey(ObjSpriteCacheKey const&)
    void ObjSpriteCacheKey::ObjSpriteCacheKey(ObjSpriteCacheKey* param_1) {
        undefined4 uVar1;

        field_8 = param_1->field_8;
        uVar1 = param_1->field_4;
        field_0 = param_1->field_0;
        field_4 = uVar1;
        new (&field_16, (basic_string*)&param_1->field_16) eastl::string();
    }

} // namespace jag::oldscape::configdecoder

namespace jag::render {
    // 0x10011ceb0: the linker folded this into oldscape::configdecoder::NpcType::GetHeadIconGraphics() const, which has identical code
    GPUMemoryAllocatorZone::GetExclusiveObjectMemory() const;

} // namespace jag::render

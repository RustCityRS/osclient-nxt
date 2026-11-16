// libs/oldscape/rs2lib/configdecoder/NpcType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag {
    // 0x100249550
    ref_counter_shared<oldscape::configdecoder::NpcType>::ref_counter_shared(unsigned long arg1,
                                                                             oldscape::configdecoder::NpcType* npcType)
        : ref_counter_base() {}

    // 0x100249590
    void ref_counter_shared<oldscape::configdecoder::NpcType>::DeleteData() {
        ref_counter_shared<oldscape::configdecoder::NpcType> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((NpcType*)((long)&(this[3]._vptr)->_dtor + lVar2))->~NpcType();
                    prVar1 = (ref_counter_shared<oldscape::configdecoder::NpcType> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 728;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100249bc0
    oldscape::configdecoder::ObjType* placement_new<oldscape::configdecoder::ObjType>(void* arg1) {
        ___bzero(arg1, 848);
        new (arg1) oldscape::configdecoder::ObjType();
        return arg1;
    }

    // 0x100249bf0
    ref_counter_shared<oldscape::configdecoder::ObjType>*
    placement_new<ref_counter_shared<oldscape::configdecoder::ObjType>, int, oldscape::configdecoder::ObjType*&>(
        void* arg1, int&& arg2, oldscape::configdecoder::ObjType*& arg3) {
        new (arg1) ref_counter_shared<oldscape::configdecoder::ObjType>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10024a2d0
    ref_counter_shared<oldscape::configdecoder::ObjType>::ref_counter_shared(unsigned long arg1,
                                                                             oldscape::configdecoder::ObjType* objType)
        : ref_counter_base() {}

    // 0x10024a310
    void ref_counter_shared<oldscape::configdecoder::ObjType>::DeleteData() {
        ref_counter_shared<oldscape::configdecoder::ObjType> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((ObjType*)((long)&(this[3]._vptr)->_dtor + lVar2))->~ObjType();
                    prVar1 = (ref_counter_shared<oldscape::configdecoder::ObjType> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 848;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10024a7f0
    void LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>::Unlink() {
        long lVar1 = *(long*)(this + 80);
        *(uint64_t*)(lVar1 + 88) = *(uint64_t*)(this + 88);
        *(long*)(*(long*)(this + 88) + 80) = lVar1;
    }

    // 0x10024a810
    void
    LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>::InsertAfter(
        LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>&
            lruHashCacheWrapper) {
        long lVar1 = *(long*)(lruHashCacheWrapper + 88);
        *(LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>**)(lVar1 +
                                                                                                                 80) =
            this;
        *(long*)(this + 88) = lVar1;
        *(LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite,
                              oldscape::configdecoder::ObjSpriteCacheKey>**)(lruHashCacheWrapper + 88) = this;
        *(LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>**)(this +
                                                                                                                 80) =
            lruHashCacheWrapper;
    }

    // 0x10024a990
    oldscape::configdecoder::ObjSprite*
    placement_new<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjType::ObjTypeConstants,
                  oldscape::configdecoder::ObjType::ObjTypeConstants>(
        void* arg1, oldscape::configdecoder::ObjType::ObjTypeConstants&& objTypeConstants1,
        oldscape::configdecoder::ObjType::ObjTypeConstants&& objTypeConstants2) {
        new (arg1) oldscape::configdecoder::ObjSprite(*(int*)objTypeConstants1, *(int*)objTypeConstants2);
        return arg1;
    }

    // 0x10024a9b0
    ref_counter_shared<oldscape::configdecoder::ObjSprite>*
    placement_new<ref_counter_shared<oldscape::configdecoder::ObjSprite>, int, oldscape::configdecoder::ObjSprite*&>(
        void* arg1, int&& arg2, oldscape::configdecoder::ObjSprite*& arg3) {
        new (arg1) ref_counter_shared<oldscape::configdecoder::ObjSprite>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10024aa20
    ref_counter_shared<oldscape::configdecoder::ObjSprite>::ref_counter_shared(
        unsigned long arg1, oldscape::configdecoder::ObjSprite* objSprite)
        : ref_counter_base() {}

    // 0x10024aa60
    void ref_counter_shared<oldscape::configdecoder::ObjSprite>::DeleteData() {
        ref_counter_shared<oldscape::configdecoder::ObjSprite> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((ObjSprite*)((long)&(this[3]._vptr)->_dtor + lVar2))->~ObjSprite();
                    prVar1 = (ref_counter_shared<oldscape::configdecoder::ObjSprite> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 80;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10024b140
    LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>::
        LRUHashCacheWrapper(const shared_ptr<oldscape::configdecoder::ObjSprite>& objSprite,
                            const oldscape::configdecoder::ObjSpriteCacheKey& objSpriteCacheKey,
                            unsigned long long arg3, unsigned int arg4)
        : shared_ptr(objSprite) {
        new ((this + 16)) oldscape::configdecoder::ObjSpriteCacheKey(objSpriteCacheKey);
        *(unsigned int*)(this + 64) = arg4;
        *(unsigned long long*)(this + 72) = arg3;
        *(uint64_t*)(this + 80) = 0;
        *(uint64_t*)(this + 88) = 0;
    }

    // 0x10024b800
    oldscape::configdecoder::ObjTypeCustomisation*
    placement_new<oldscape::configdecoder::ObjTypeCustomisation, int&>(void* arg1, int& arg2) {
        new (arg1) oldscape::configdecoder::ObjTypeCustomisation(arg2);
        return arg1;
    }

    // 0x10024b820
    ref_counter_shared<oldscape::configdecoder::ObjTypeCustomisation>*
    placement_new<ref_counter_shared<oldscape::configdecoder::ObjTypeCustomisation>, int,
                  oldscape::configdecoder::ObjTypeCustomisation*&>(
        void* arg1, int&& arg2, oldscape::configdecoder::ObjTypeCustomisation*& arg3) {
        new (arg1) ref_counter_shared<oldscape::configdecoder::ObjTypeCustomisation>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10024b850
    ref_counter_shared<oldscape::configdecoder::ObjTypeCustomisation>::ref_counter_shared(
        unsigned long arg1, oldscape::configdecoder::ObjTypeCustomisation* objTypeCustomisation)
        : ref_counter_base() {}

    // 0x10024b890
    void ref_counter_shared<oldscape::configdecoder::ObjTypeCustomisation>::DeleteData() {
        ref_counter_shared<oldscape::configdecoder::ObjTypeCustomisation> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((ObjTypeCustomisation*)((long)&(this[3]._vptr)->_dtor + lVar2))->~ObjTypeCustomisation();
                    prVar1 = (ref_counter_shared<oldscape::configdecoder::ObjTypeCustomisation> _vtbl*)((long)&prVar1
                                                                                                            ->_dtor +
                                                                                                        1);
                    lVar2 = lVar2 + 48;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag

namespace jag::oldscape::configdecoder {
    class NpcType {
    public:
        unsigned long HasHeadIcons() const;
        uint8_t* GetHeadIconGraphics() const;
        uint8_t* GetHeadIconIndices() const;
        void Init(jagex3::Js5* js51, jagex3::Js5* js52);
        auto List(int arg1);
        void Decode(shared_ptr<PacketJ<Array<unsigned char>>> packetJ);
        void PostDecode();
        void Decode(shared_ptr<PacketJ<Array<unsigned char>>> packetJ, int arg2);
        auto GetTempModel(SeqType* seqType1, int arg2, SeqType* seqType2, int arg4,
                          NPCTypeCustomisation* npcTypeCustomisation);
        auto GetMultiNpc() const;
        NpcType* BuildModel(const Array<int>& arg1, const NPCTypeCustomisation* npcTypeCustomisation) const;
        auto GetHead(NPCTypeCustomisation* npcTypeCustomisation);
        NpcType* GetMultiNpcOrThis() const;
        NpcType* GetSpecifiedMultiNpcOrThis(int arg1) const;
        bool IsMultiNpcVisible();
        auto GetParam(int arg1, const eastl::string& str);
        void GetParam(int arg1, int arg2);
        void ResetCache();
        uint32_t GetHeadIconGraphic(int arg1) const;
        uint32_t GetHeadIconIndex(int arg1) const;
        NpcType();
        ~NpcType();
        static int64_t m_pConfigClient;
        static int64_t m_pModels;
        static LRUHashCache<NpcType, 64ul, 65ul, false, unsigned long long> m_recentUse;
        static LRUHashCache<dash3d::ModelLit, 64ul, 65ul, false, unsigned long long> m_modelCache;

    private:
        uint32_t field_0;
        uint8_t _unknown_4[36];
        unsigned int field_40;
        uint8_t _unknown_44[52];
        unsigned int field_96;
        unsigned int field_100;
        unsigned int field_104;
        unsigned int field_108;
        unsigned int field_112;
        unsigned int field_116;
        unsigned int field_120;
        unsigned int field_124;
        unsigned int field_128;
        unsigned int field_132;
        unsigned int field_136;
        unsigned int field_140;
        unsigned int field_144;
        unsigned int field_148;
        unsigned int field_152;
        unsigned int field_156;
        uint8_t _unknown_160[296];
        uint8_t field_456;
        uint8_t _unknown_457[3];
        unsigned int field_460;
        unsigned int field_464;
        unsigned int field_468;
        uint8_t field_472;
        uint8_t _unknown_473[3];
        int field_476;
        int field_480;
        unsigned int field_484;
        uint8_t _unknown_488[24];
        unsigned int field_512;
        unsigned int field_516;
        uint8_t field_520;
        uint8_t field_521;
        uint8_t field_522;
        uint8_t _unknown_523[133];
        uint8_t m_headIconIndices[1];
        uint8_t _unknown_657[7];
    };

    class ObjSprite {
    public:
        ObjSprite(int arg1, int arg2);
        ~ObjSprite();

        uint8_t _unknown_0[56];
    };

    // 0x10011cda0
    unsigned long NpcType::HasHeadIcons() const {
        unsigned long uVar2;

        if (field_584.empty() == '\0') {
            uVar2 = m_headIconIndices->empty();
            uVar2 = uVar2 ^ 1;
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x10011ceb0
    uint8_t* NpcType::GetHeadIconGraphics() const {
        return m_waterHeights;
    }

    // 0x10011ced0
    uint8_t* NpcType::GetHeadIconIndices() const {
        return &field_656;
    }

    // 0x1002491e0
    NpcType::NpcType() : field_0(0) {
        uint8_t* local_68 = &field_8;
        new (local_68) eastl::string();
        field_40 = 1;
        new (&field_48) Array<int>();
        uint8_t* local_60 = &field_48;
        new (&field_72) Array<int>();
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
        uint8_t* local_58 = &field_72;
        new (&field_160) Array<short>();
        uint8_t* local_50 = &field_160;
        new (&field_184) Array<short>();
        uint8_t* local_40 = &field_208;
        uint8_t* local_48 = &field_184;
        new (local_40) Array<short>();
        new (&field_232) Array<short>();
        uint8_t* local_38 = &field_232;
        new (&field_256) eastl::fixed_vector<eastl::string, 5ul>(5);
        field_456 = 1;
        field_460 = 4294967295;
        field_464 = 128;
        field_468 = 128;
        field_472 = 0;
        field_476 = 0;
        field_480 = 0;
        field_484 = 32;
        new (&field_488) Array<int>();
        field_512 = 4294967295;
        field_516 = 4294967295;
        field_520 = 1;
        field_521 = 1;
        field_522 = 0;
        new (&field_528) eastl::hash_map<long long, ParamTypeHelper::ParamVariant>(local_70);
        new (&field_584) eastl::fixed_vector<int, 8ul>();
        new (m_headIconIndices) eastl::fixed_vector<int, 8ul>();
    }

    // 0x1002495f0
    NpcType::~NpcType() {
        m_headIconIndices->~fixed_vector();
        field_584.~fixed_vector();
        field_528.~hash_map();
        field_488.~Array();
        field_256.~fixed_vector();
        field_232.~Array();
        field_208.~Array();
        field_184.~Array();
        field_160.~Array();
        field_72.~Array();
        field_48.~Array();
        field_8.~basic_string();
    }

    // 0x10024a8e0
    bool ObjSpriteCacheKey::operator==(const ObjSpriteCacheKey& objSpriteCacheKey) const {
        if (((field_0 == objSpriteCacheKey.field_0) && (field_4 == objSpriteCacheKey.field_4)) &&
            (field_8 == objSpriteCacheKey.field_8)) {
            return field_16 == objSpriteCacheKey.field_16;
        }
        return false;
    }

    // 0x10024a9e0
    ObjSprite::ObjSprite(int arg1, int arg2) : graphics::Pix32(arg1, arg2) {}

    // 0x10024aac0
    ObjSprite::~ObjSprite() {
        field_48.~basic_string();
    }

    // 0x10024ae30
    ObjSpriteCacheKey::ObjSpriteCacheKey(const ObjSpriteCacheKey& objSpriteCacheKey)
        : field_8(objSpriteCacheKey.field_8) {
        int iVar1 = objSpriteCacheKey.field_4;
        field_0 = objSpriteCacheKey.field_0;
        field_4 = iVar1;
        new (&field_16) eastl::string(objSpriteCacheKey.field_16);
    }

} // namespace jag::oldscape::configdecoder

namespace jag::render {
    // 0x10011ceb0: GPUMemoryAllocatorZone::GetExclusiveObjectMemory() const has the same machine code as oldscape::configdecoder::NpcType::GetHeadIconGraphics() const

} // namespace jag::render

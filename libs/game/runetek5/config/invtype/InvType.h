// libs/game/runetek5/config/invtype/InvType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class InvType {
    public:
        // virtual methods in vtable order
        virtual ~InvType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual void PostDecode();
        GetSize() const;
        InvType(BaseTemplateConfigTypeList<InvType>*, int);

        // data members, from how the methods use this: 72 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        BaseTemplateConfigTypeList* field_24; // offset 24
        int field_32;                         // offset 32
        char _unknown_36[20];
        uint field_56; // offset 56
        uint field_60; // offset 60
        char _unknown_64[8];
    };

    // 0x1005296c0, 32 bytes, deleting destructor, inline, placed by class name
    // InvType::~InvType()
    void InvType::~InvType() {
        ~InvType(this);
        operator_delete(this);
    }

    // 0x100583600, 16 bytes, complete-object destructor, inline, placed by class name
    // InvType::~InvType(): jumps straight to the base-object destructor

    // 0x100583610, 48 bytes, base-object destructor, inline, placed by class name
    // InvType::~InvType()
    void InvType::~InvType() {
        field_0 = &PTR__InvType_100f03900;
        (&field_64)->~hash_map();
        ~ConfigType();
    }

    // 0x100583840, 16 bytes, complete-object constructor, inline, placed by class name
    // InvType::InvType(BaseTemplateConfigTypeList<InvType>*, int): jumps straight to the base-object constructor

    // 0x100583850, 112 bytes, base-object constructor, inline, placed by class name
    // InvType::InvType(BaseTemplateConfigTypeList<InvType>*, int)
    void InvType::InvType(BaseTemplateConfigTypeList* param_1, int param_2) {
        allocator local_20[8];

        new (this) ConfigType<InvType>(param_1, param_2);
        new (this) MakeSharedPool<InvType, 32>();
        field_0 = &PTR__InvType_100f03900;
        field_56 = 0;
        field_60 = 0;
        eastl::allocator::allocator(local_20, "EASTL hash_map");
        new (&field_64, local_20)
            eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
    }

} // namespace jag::game

namespace jag::oldscape::configdecoder {
    class InvType {
    public:
        InvType();
        void Init(jagex3::Js5*);
        InvType* List(int);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&);
        void ResetCache();
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&, int);
        static /* 8 bytes */ m_pConfigClient;
        static /* 5376 bytes */ m_recentUse;

        // data members, from how the methods use this: 16 bytes
        uint field_0; // offset 0
        char _unknown_4[4];
        long field_8; // offset 8
    };

} // namespace jag::oldscape::configdecoder

// libs/game/runetek5/config/idktype/IDKType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class IDKType {
    public:
        // virtual methods in vtable order
        virtual ~IDKType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual void PostDecode();
        shared_ptr* GetBodyModel(graphics::RT7Core*, AssetBuilder&, BuildRequest<graphics::Model, BuildModelMain>&,
                                 unsigned short, shared_ptr<PlayerModel> const&) const;
        GetHeadModel(graphics::RT7Core*, AssetBuilder&, BuildRequest<graphics::Model, BuildModelMain>&, unsigned short,
                     shared_ptr<PlayerModel> const&) const;
        IDKType(BaseTemplateConfigTypeList<IDKType>*, int);

        // data members, from how the methods use this: 257 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        BaseTemplateConfigTypeList* field_24; // offset 24
        int field_32;                         // offset 32
        char _unknown_36[20];
        uint field_56; // offset 56
        char _unknown_60[196];
        undefined1 field_256; // offset 256
    };

    // 0x100547ad0, 32 bytes, deleting destructor, inline, placed by class name
    // IDKType::~IDKType()
    void IDKType::~IDKType() {
        ~IDKType(this);
        operator_delete(this);
    }

    // 0x1005a7c50, 16 bytes, complete-object destructor, inline, placed by class name
    // IDKType::~IDKType(): jumps straight to the base-object destructor

    // 0x1005a7c60, 128 bytes, base-object destructor, inline, placed by class name
    // IDKType::~IDKType()
    void IDKType::~IDKType() {
        field_0 = &PTR__IDKType_100f04030;
        (&field_232)->~Array();
        (&field_208)->~Array();
        (&field_184)->~Array();
        (&field_160)->~Array();
        (&field_136)->~Array();
        (&field_112)->~Array();
        (&field_88)->~Array();
        (&field_64)->~Array();
        ~ConfigType();
    }

    // 0x1005a7ee0, 16 bytes, complete-object constructor, inline, placed by class name
    // IDKType::IDKType(BaseTemplateConfigTypeList<IDKType>*, int): jumps straight to the base-object constructor

    // 0x1005a7ef0, 480 bytes, base-object constructor, inline, placed by class name
    // IDKType::IDKType(BaseTemplateConfigTypeList<IDKType>*, int)
    void IDKType::IDKType(BaseTemplateConfigTypeList* param_1, int param_2) {
        Array<int, eastl::allocator>* this_00;
        Array<int, eastl::allocator> local_a8[24];
        undefined4* local_90;
        undefined8 local_88;
        undefined1* local_80;
        undefined1* local_78;
        undefined1* local_70;
        undefined1* local_68;
        Array<int, eastl::allocator>* local_60;
        undefined4 local_58;
        undefined4 uStack_54;
        undefined4 uStack_50;
        undefined4 uStack_4c;
        undefined4 local_48;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (this) ConfigType<IDKType>(param_1, param_2);
        new (this) MakeSharedPool<IDKType, 32>();
        field_0 = &PTR__IDKType_100f04030;
        field_56 = 4294967295;
        new (&field_64) Array<int, eastl::allocator>();
        local_60 = (Array<int, eastl::allocator>*)&field_88;
        local_80 = &field_64;
        Array<int, eastl::allocator>::Array(local_60);
        new (&field_112) Array<unsigned short, eastl::allocator>();
        local_78 = &field_112;
        new (&field_136) Array<unsigned short, eastl::allocator>();
        local_70 = &field_136;
        new (&field_160) Array<int, eastl::allocator>();
        this_00 = local_60;
        local_68 = &field_160;
        new (&field_184) Array<unsigned short, eastl::allocator>();
        new (&field_208) Array<unsigned short, eastl::allocator>();
        new (&field_232) Array<int, eastl::allocator>();
        field_256 = 0;
        local_58 = 4294967295;
        uStack_54 = 4294967295;
        uStack_50 = 4294967295;
        uStack_4c = 4294967295;
        local_48 = 4294967295;
        local_90 = &local_58;
        local_88 = 5;
        Array<int, eastl::allocator>::Array(local_a8, (initializer_list*)&local_90);
        Array<int, eastl::allocator>::operator=(this_00, (Array*)local_a8);
        local_a8->~Array();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::game

namespace jag {
    // 0x10049c960, 32 bytes, inline, placed by debug map only (low confidence)
    // game::PlayerModelModelSet* placement_new<game::PlayerModelModelSet, game::BuildRequest<graphics::Model, game::BuildModelMain> const&>(void*, game::BuildRequest<graphics::Model, game::BuildModelMain> const&)
    PlayerModelModelSet*
    jag::placement_new<game::PlayerModelModelSet, game::BuildRequest<graphics::Model, game::BuildModelMain> const&>(
        void* param_1, BuildRequest* param_2) {
        game::PlayerModelModelSet::PlayerModelModelSet(param_1, param_2);
        return param_1;
    }

    // 0x10049c980, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::PlayerModelModelSet, MakeSharedPool<game::PlayerModelModelSet, 256> >* placement_new<MakeSharedPoolRefCounter<game::PlayerModelModelSet, MakeSharedPool<game::PlayerModelModelSet, 256> >, MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData*&, game::PlayerModelModelSet*>(void*, MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData*&, game::PlayerModelModelSet*&&)
    MakeSharedPoolRefCounter* jag::placement_new<
        MakeSharedPoolRefCounter<game::PlayerModelModelSet, MakeSharedPool<game::PlayerModelModelSet, 256>>,
        MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData*&, game::PlayerModelModelSet*>(
        void* param_1, RefCounterAndData** param_2, PlayerModelModelSet** param_3) {
        MakeSharedPoolRefCounter<game::PlayerModelModelSet,
                                 MakeSharedPool<game::PlayerModelModelSet, 256>>::MakeSharedPoolRefCounter(param_1,
                                                                                                           *param_2,
                                                                                                           *param_3);
        return param_1;
    }

} // namespace jag

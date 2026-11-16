// libs/game/runetek5/config/idktype/IDKType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class IDKType {
    public:
        // virtual methods in vtable order
        virtual ~IDKType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        shared_ptr<PlayerModel>* GetBodyModel(graphics::RT7Core* rt7Core, AssetBuilder& assetBuilder,
                                              BuildRequest<graphics::Model, BuildModelMain>& buildRequest,
                                              unsigned short arg4, const shared_ptr<PlayerModel>& playerModel) const;
        uint8_t* GetHeadModel(graphics::RT7Core* rt7Core, AssetBuilder& assetBuilder,
                              BuildRequest<graphics::Model, BuildModelMain>& buildRequest, unsigned short arg4,
                              const shared_ptr<PlayerModel>& playerModel) const;
        IDKType(BaseTemplateConfigTypeList<IDKType>* baseTemplateConfigTypeList, int arg2);

    private:
        uint8_t _unknown_8[16];
        BaseTemplateConfigTypeList<IDKType>* field_24;
        int field_32;
        uint8_t _unknown_36[20];
        unsigned int field_56;
        uint8_t _unknown_60[196];
        uint8_t field_256;
    };

    // 0x1005a7c60
    IDKType::~IDKType() {
        field_232.~Array();
        field_208.~Array();
        field_184.~Array();
        field_160.~Array();
        field_136.~Array();
        field_112.~Array();
        field_88.~Array();
        field_64.~Array();
    }

    // 0x1005a7ef0
    IDKType::IDKType(BaseTemplateConfigTypeList<IDKType>* baseTemplateConfigTypeList, int arg2)
        : ConfigType<IDKType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<IDKType, 32>(), field_56(4294967295) {
        Array<int>* local_60 = (Array<int>*)&field_88;
        uint8_t* local_80 = &field_64;
        new (local_60) Array<int>();
        new (&field_112) Array<unsigned short>();
        uint8_t* local_78 = &field_112;
        new (&field_136) Array<unsigned short>();
        uint8_t* local_70 = &field_136;
        new (&field_160) Array<int>();
        Array<int>* this_00 = local_60;
        uint8_t* local_68 = &field_160;
        new (&field_184) Array<unsigned short>();
        new (&field_208) Array<unsigned short>();
        new (&field_232) Array<int>();
        field_256 = 0;
        uint32_t local_58 = 4294967295;
        uint32_t uStack_54 = 4294967295;
        uint32_t uStack_50 = 4294967295;
        uint32_t uStack_4c = 4294967295;
        uint32_t local_48 = 4294967295;
        uint32_t* local_90 = &local_58;
        uint64_t local_88 = 5;
        Array<int> local_a8(&local_90);
        *this_00 = local_a8;
    }

} // namespace jag::game

namespace jag {
    // 0x10049c960
    game::PlayerModelModelSet*
    placement_new<game::PlayerModelModelSet, game::BuildRequest<graphics::Model, game::BuildModelMain> const&>(
        void* arg1, const game::BuildRequest<graphics::Model, game::BuildModelMain>& buildRequest) {
        new (arg1) game::PlayerModelModelSet(buildRequest);
        return arg1;
    }

    // 0x10049c980
    MakeSharedPoolRefCounter<game::PlayerModelModelSet, MakeSharedPool<game::PlayerModelModelSet, 256>>*
    placement_new<MakeSharedPoolRefCounter<game::PlayerModelModelSet, MakeSharedPool<game::PlayerModelModelSet, 256>>,
                  MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData*&, game::PlayerModelModelSet*>(
        void* arg1, MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData*& arg2,
        game::PlayerModelModelSet*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::PlayerModelModelSet, MakeSharedPool<game::PlayerModelModelSet, 256>>(
            arg2, arg3);
        return arg1;
    }

} // namespace jag

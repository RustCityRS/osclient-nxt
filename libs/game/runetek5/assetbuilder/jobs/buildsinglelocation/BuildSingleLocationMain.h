// libs/game/runetek5/assetbuilder/jobs/buildsinglelocation/BuildSingleLocationMain.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class BuildSingleLocationMain : public AssetJob // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~BuildSingleLocationMain();
        virtual uint8_t* RunFirst(Js5ResourceProvider* js5ResourceProvider, ConfigProvider* configProvider);
        virtual BuildSingleLocationMain* CreateWorker();
        virtual auto DecodeResult(const shared_ptr<void>& arg1);
        virtual shared_ptr GetRequestData();
        BuildSingleLocationMain(int arg1, const shared_ptr<LocType>& locType1, const shared_ptr<LocType>& locType2,
                                const shared_ptr<graphics::Model>& model, Rotation90 rotation90, int arg6,
                                Array<Array<int>>&& arg7, Array<Array<int>>&& arg8);
        void PostDecodeResultSetup(BuildSingleLocationResultData& buildSingleLocationResultData);

    private:
        uint8_t _unknown_72[8];
        shared_ptr m_requestData;
        uint8_t _unknown_96[8];
    };

    // 0x100633960
    BuildSingleLocationMain::~BuildSingleLocationMain() {
        field_96.~shared_ptr();
        m_requestData->~shared_ptr();
    }

} // namespace jag::game

// libs/game/runetek5/assetbuilder/jobs/buildfunction/BuildFunctionMain.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class BuildFunctionMain : public AssetJob // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~BuildFunctionMain();
        virtual uint8_t* RunFirst(Js5ResourceProvider* js5ResourceProvider, ConfigProvider* configProvider);
        virtual BuildFunctionMain* CreateWorker();
        virtual auto DecodeResult(const shared_ptr<void>& arg1);
        virtual shared_ptr GetRequestData();
        BuildFunctionMain(int arg1, const shared_ptr<std::function<void()>>& callback, int arg3);
        void PostDecodeResultSetup(BuildFunctionResultData& buildFunctionResultData);

    private:
        uint8_t _unknown_72[8];
        shared_ptr m_requestData;
    };

    // 0x1006450c0
    BuildFunctionMain::~BuildFunctionMain() {
        m_requestData->~shared_ptr();
    }

} // namespace jag::game

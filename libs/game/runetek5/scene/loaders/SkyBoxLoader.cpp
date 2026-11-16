// libs/game/runetek5/scene/loaders/SkyBoxLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    class SkyBoxLoader {
    public:
        // virtual methods in vtable order
        virtual ~SkyBoxLoader();
        SkyBoxLoader(graphics::RT7Core& rt7Core);
        void MainLogic(ConfigProvider* configProvider, AssetBuilder* assetBuilder);
        void LoadSkyBox(int arg1, graphics::SkyBox& skyBox, ConfigProvider* configProvider, AssetBuilder* assetBuilder);

    private:
        RT7Core* field_8;
    };

    // 0x1003dd280
    SkyBoxLoader::SkyBoxLoader(graphics::RT7Core& rt7Core) : field_8(rt7Core) {}

    // 0x1003dd2b0
    SkyBoxLoader::~SkyBoxLoader() {}

    // 0x1003dd2e0
    void SkyBoxLoader::MainLogic(ConfigProvider* configProvider, AssetBuilder* assetBuilder) {
        int arg1;
        SkyBox* pSVar4;

        auto this_00 = field_8->GetSkyBoxManager();
        auto this_01 = this_00->GetSkyBoxes();
        auto piVar2 = this_01->HeapBeginPtr();
        auto piVar3 = this_01->end();
        for (; piVar2 != piVar3; piVar2 = piVar2 + 8) {
            if (-1 < *piVar2) {
                pSVar4 = (SkyBox*)(*((piVar2 + 2))).operator->();
                if (pSVar4->HasModel() == '\0') {
                    arg1 = *piVar2;
                    pSVar4 = (SkyBox*)*(*((piVar2 + 2)));
                    LoadSkyBox(arg1, *pSVar4, configProvider, assetBuilder);
                }
            }
        }
    }

    // 0x1003dd3c0
    void SkyBoxLoader::LoadSkyBox(int arg1, graphics::SkyBox& skyBox, ConfigProvider* configProvider,
                                  AssetBuilder* assetBuilder) {
        shared_ptr<graphics::Model>* psVar3;

        if (arg1 < 0) {
            LogAssert("skyBoxID > graphics::SkyBoxManager::ACTIVE_SKYBOX_ID",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "loaders/SkyBoxLoader.cpp",
                      40, nullptr);
        }
        shared_ptr<SkyBoxType>* this_00 = configProvider->GetConfig<SkyBoxType>(arg1, nullptr);
        ActiveComponent local_50;
        SkyBoxType* this_01 = (SkyBoxType*)(*this_00).operator->();
        auto puVar2 = this_01->GetStaticSkyModel(field_8, *assetBuilder, local_50);
        if ((puVar2 != DataStatus::NOTLOADED) && (puVar2 != DataStatus::MISSING)) {
            psVar3 = (shared_ptr<graphics::Model>*)local_50.SSOBeginPtr();
            if (((Model*)(*psVar3).operator->())->TexturesReady() != '\0') {
                psVar3 = (shared_ptr<graphics::Model>*)local_50.SSOBeginPtr();
                skyBox.SetModel(*psVar3, 0, 0);
            }
        }
    }

} // namespace jag::game

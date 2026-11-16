// libs/game/runetek5/scene/loaders/SkyBoxLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game {
    class SkyBoxLoader {
    public:
        // virtual methods in vtable order
        virtual ~SkyBoxLoader();
        SkyBoxLoader(graphics::RT7Core&);
        void MainLogic(ConfigProvider*, AssetBuilder*);
        void LoadSkyBox(int, graphics::SkyBox&, ConfigProvider*, AssetBuilder*);

        // data members, from how the methods use this: 16 bytes
        undefined** field_0; // offset 0, vtable pointer
        RT7Core* field_8;    // offset 8
    };

    // 0x1003dd280, 32 bytes, base-object constructor, placed by class name and debug map
    // SkyBoxLoader::SkyBoxLoader(graphics::RT7Core&)
    void SkyBoxLoader::SkyBoxLoader(RT7Core* param_1) {
        field_0 = &PTR__SkyBoxLoader_100efe650;
        field_8 = param_1;
    }

    // 0x1003dd2a0, 16 bytes, complete-object constructor, placed by class name and debug map
    // SkyBoxLoader::SkyBoxLoader(graphics::RT7Core&): jumps straight to the base-object constructor

    // 0x1003dd2b0, 16 bytes, base-object destructor, placed by class name and debug map
    // SkyBoxLoader::~SkyBoxLoader()
    void SkyBoxLoader::~SkyBoxLoader() {}

    // 0x1003dd2c0, 16 bytes, complete-object destructor, placed by class name and debug map
    // SkyBoxLoader::~SkyBoxLoader(): jumps straight to the base-object destructor

    // 0x1003dd2d0, 16 bytes, deleting destructor, placed by class name and debug map
    // SkyBoxLoader::~SkyBoxLoader()
    void SkyBoxLoader::~SkyBoxLoader() {
        operator_delete(this);
    }

    // 0x1003dd2e0, 176 bytes, placed by class name and debug map
    // SkyBoxLoader::MainLogic(ConfigProvider*, AssetBuilder*)
    void SkyBoxLoader::MainLogic(ConfigProvider* param_1, AssetBuilder* param_2) {
        int iVar1;
        SkyBoxManager* this_00;
        SkyBox* pSVar2;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        int* piVar4;
        int* piVar5;

        this_00 = (SkyBoxManager*)field_8->GetSkyBoxManager();
        this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_00->GetSkyBoxes();
        piVar5 = (int*)this_01->HeapBeginPtr();
        piVar4 = (int*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
        for (; piVar5 != piVar4; piVar5 = piVar5 + 8) {
            if (-1 < *piVar5) {
                pSVar2 = (SkyBox*)shared_ptr<graphics::SkyBox>::operator->((shared_ptr<graphics::SkyBox>*)(piVar5 + 2));
                if (pSVar2->HasModel() == '\0') {
                    iVar1 = *piVar5;
                    pSVar2 =
                        (SkyBox*)shared_ptr<graphics::SkyBox>::operator*((shared_ptr<graphics::SkyBox>*)(piVar5 + 2));
                    LoadSkyBox(this, iVar1, pSVar2, param_1, param_2);
                }
            }
        }
    }

    // 0x1003dd3c0, 240 bytes, placed by class name
    // SkyBoxLoader::LoadSkyBox(int, graphics::SkyBox&, ConfigProvider*, AssetBuilder*)
    void SkyBoxLoader::LoadSkyBox(int param_1, SkyBox* param_2, ConfigProvider* param_3, AssetBuilder* param_4) {
        shared_ptr* psVar2;
        SkyBoxType* this_00;
        undefined* puVar3;
        vector* this_01;
        Model* this_02;
        RT7Core* pRVar4;
        ActiveComponent local_50;

        if (param_1 < 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("skyBoxID > graphics::SkyBoxManager::ACTIVE_SKYBOX_ID",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "loaders/SkyBoxLoader.cpp",
                      40, (char*)0);
        }
        psVar2 = ConfigProvider::GetConfig<SkyBoxType>(param_3, param_1, (DataStatus**)0);
        new (&local_50) BuildRequest<graphics::Model, BuildModelMain>();
        this_00 = (SkyBoxType*)shared_ptr<SkyBoxType>::operator->((shared_ptr<SkyBoxType>*)psVar2);
        pRVar4 = field_8;
        puVar3 = (undefined*)this_00->GetStaticSkyModel(pRVar4, param_4, (BuildRequest*)&local_50);
        if ((puVar3 != DataStatus::NOTLOADED) && (puVar3 != DataStatus::MISSING)) {
            this_01 = local_50.SSOBeginPtr(pRVar4);
            this_02 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_01);
            if (this_02->TexturesReady() != '\0') {
                psVar2 = (shared_ptr*)local_50.SSOBeginPtr(pRVar4);
                param_2->SetModel(psVar2, 0, 0);
            }
        }
        local_50.~ActiveComponent();
    }

} // namespace jag::game

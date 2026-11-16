// libs/game/runetek5/assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationMain.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class BuildCombinedLocationMain : public AssetJob // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~BuildCombinedLocationMain();
        virtual uint8_t* RunFirst(Js5ResourceProvider* js5ResourceProvider, ConfigProvider* configProvider);
        virtual BuildCombinedLocationMain* CreateWorker();
        virtual auto DecodeResult(const shared_ptr<void>& arg1);
        virtual shared_ptr GetRequestData();
        void ResetLocationContainer();
        BuildCombinedLocationMain(graphics::RT7Core& rt7Core, int arg2, const LocationContainer* locationContainer,
                                  const eastl::vector<LocationContainerLocation>& locationContainerLocations, int arg5,
                                  int arg6, bool arg7);
        void PostDecodeResultSetup(BuildCombinedLocationResultData& buildCombinedLocationResultData);

    private:
        uint8_t _unknown_72[72];
        RT7Core* field_144;
        shared_ptr m_requestData;
        LocationContainer* field_168;
        uint8_t _unknown_176[8];
    };

    // 0x100410f50
    void BuildCombinedLocationMain::ResetLocationContainer() {
        field_168 = nullptr;
    }

    // 0x10064f240
    shared_ptr BuildCombinedLocationMain::GetRequestData() {
        return m_requestData;
    }

    // 0x10064f370
    BuildCombinedLocationMain::~BuildCombinedLocationMain() {
        field_176.~hash_map();
        m_requestData->~shared_ptr();
        field_112.~vector();
        field_80.~vector();
    }

} // namespace jag::game

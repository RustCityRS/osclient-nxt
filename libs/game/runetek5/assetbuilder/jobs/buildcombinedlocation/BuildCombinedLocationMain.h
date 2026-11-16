// libs/game/runetek5/assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationMain.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class BuildCombinedLocationMain : public AssetJob // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~BuildCombinedLocationMain();
        virtual RunFirst(Js5ResourceProvider*, ConfigProvider*);
        virtual BuildCombinedLocationMain* CreateWorker();
        virtual DecodeResult(shared_ptr<void> const&);
        virtual shared_ptr GetRequestData();
        void ResetLocationContainer();
        BuildCombinedLocationMain(graphics::RT7Core&, int, LocationContainer const*,
                                  eastl::vector<LocationContainerLocation, eastl::allocator> const&, int, int, bool);
        void PostDecodeResultSetup(BuildCombinedLocationResultData&);

        // data members, from how the methods use this: 184 bytes, the first 72 are AssetJob
        char _unknown_72[72];
        RT7Core* field_144;           // offset 144
        shared_ptr m_requestData;     // offset 152
        LocationContainer* field_168; // offset 168
        char _unknown_176[8];
    };

    // 0x100410f50, 32 bytes, inline, placed by class name and debug map
    // BuildCombinedLocationMain::ResetLocationContainer()
    void BuildCombinedLocationMain::ResetLocationContainer() {
        field_168 = (LocationContainer*)0;
    }

    // 0x10064f210, 16 bytes, complete-object destructor, inline, placed by class name
    // BuildCombinedLocationMain::~BuildCombinedLocationMain(): jumps straight to the base-object destructor

    // 0x10064f220, 32 bytes, deleting destructor, inline, placed by class name
    // BuildCombinedLocationMain::~BuildCombinedLocationMain()
    void BuildCombinedLocationMain::~BuildCombinedLocationMain() {
        ~BuildCombinedLocationMain(this);
        operator_delete(this);
    }

    // 0x10064f240, 16 bytes, inline, placed by class name
    // BuildCombinedLocationMain::GetRequestData()
    undefined1* BuildCombinedLocationMain::GetRequestData() {
        return m_requestData;
    }

    // 0x10064f370, 80 bytes, base-object destructor, inline, placed by class name
    // BuildCombinedLocationMain::~BuildCombinedLocationMain()
    void BuildCombinedLocationMain::~BuildCombinedLocationMain() {
        field_0 = &PTR__BuildCombinedLocationMain_100f0d808;
        (&field_176)->~hash_map();
        m_requestData->~shared_ptr();
        (&field_112)->~vector();
        (&field_80)->~vector();
        ~AssetJob();
    }

} // namespace jag::game

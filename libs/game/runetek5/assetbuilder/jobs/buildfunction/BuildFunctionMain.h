// libs/game/runetek5/assetbuilder/jobs/buildfunction/BuildFunctionMain.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class BuildFunctionMain : public AssetJob // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~BuildFunctionMain();
        virtual RunFirst(Js5ResourceProvider*, ConfigProvider*);
        virtual BuildFunctionMain* CreateWorker();
        virtual DecodeResult(shared_ptr<void> const&);
        virtual GetRequestData();
        BuildFunctionMain(int, shared_ptr<std::function<void()>> const&, int);
        void PostDecodeResultSetup(BuildFunctionResultData&);

        // data members, from how the methods use this: 96 bytes, the first 72 are AssetJob
        char _unknown_72[8];
        shared_ptr field_80; // offset 80
    };

    // 0x100644f40, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // BuildFunctionMain::~BuildFunctionMain(): jumps straight to the base-object destructor

    // 0x100644f50, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // BuildFunctionMain::~BuildFunctionMain()
    void BuildFunctionMain::~BuildFunctionMain() {
        ~BuildFunctionMain(this);
        operator_delete(this);
    }

    // 0x1006450c0, 48 bytes, base-object destructor, inline, placed by class name
    // BuildFunctionMain::~BuildFunctionMain()
    void BuildFunctionMain::~BuildFunctionMain() {
        field_0 = &PTR__BuildFunctionMain_100f0d508;
        field_80->~shared_ptr();
        ~AssetJob();
    }

} // namespace jag::game

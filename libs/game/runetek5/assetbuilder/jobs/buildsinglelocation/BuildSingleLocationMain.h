// libs/game/runetek5/assetbuilder/jobs/buildsinglelocation/BuildSingleLocationMain.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class BuildSingleLocationMain : public AssetJob // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~BuildSingleLocationMain();
        virtual RunFirst(Js5ResourceProvider*, ConfigProvider*);
        virtual BuildSingleLocationMain* CreateWorker();
        virtual DecodeResult(shared_ptr<void> const&);
        virtual GetRequestData();
        BuildSingleLocationMain(int, shared_ptr<LocType> const&, shared_ptr<LocType> const&,
                                shared_ptr<graphics::Model> const&, Rotation90, int,
                                Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&&,
                                Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&&);
        void PostDecodeResultSetup(BuildSingleLocationResultData&);

        // data members, from how the methods use this: 104 bytes, the first 72 are AssetJob
        char _unknown_72[8];
        shared_ptr field_80; // offset 80
        char _unknown_96[8];
    };

    // 0x1006333a0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // BuildSingleLocationMain::~BuildSingleLocationMain(): jumps straight to the base-object destructor

    // 0x1006333b0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // BuildSingleLocationMain::~BuildSingleLocationMain()
    void BuildSingleLocationMain::~BuildSingleLocationMain() {
        ~BuildSingleLocationMain(this);
        operator_delete(this);
    }

    // 0x100633960, 64 bytes, base-object destructor, inline, placed by class name
    // BuildSingleLocationMain::~BuildSingleLocationMain()
    void BuildSingleLocationMain::~BuildSingleLocationMain() {
        field_0 = &PTR__BuildSingleLocationMain_100f0c9f0;
        (&field_96)->~shared_ptr();
        field_80->~shared_ptr();
        ~AssetJob();
    }

} // namespace jag::game

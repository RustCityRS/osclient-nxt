// libs/oldscape/jagex3/js5/Js5RemoteLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::jagex3 {
    class Js5RemoteLoader : public Js5LocalLoader // base inferred from shared vtable slots
    {
    public:
        class Js5Remote;
        // virtual methods in vtable order
        virtual void MainLogic();
        virtual ~Js5RemoteLoader();
        virtual void OpenJs5(Js5ArchiveId, bool, bool, bool, bool, Error*);
        virtual void Shutdown();
        virtual GetGroupLoadPercentage(Js5ArchiveId, Js5GroupId) const;
        virtual GetGroupCountInCache(Js5ArchiveId) const;
        virtual GetIndexPercentage(Js5ArchiveId) const;
        virtual BlockingFetch(Js5RequestKey const&, Js5RequestParameters const&);
        Js5RemoteLoader();
        int Initialize(Filename const&, Js5RemoteServerInfo const*);
        void ConsumeResults();
        void OnDataRetrieved(Js5RemoteRequestData&,
                             eastl::list_map_iterator<eastl::pair<Js5RequestKey const, Js5RequestParameters>,
                                                      eastl::pair<Js5RequestKey const, Js5RequestParameters>*,
                                                      eastl::pair<Js5RequestKey const, Js5RequestParameters>&> const&);
        void OnMetaIndexRetrieved(PacketJ<Array<unsigned char, eastl::allocator>>&);
        void RequestCacheDirectoryPermissions(Filename const&);
        void SendNewRequests();
        ulong GetDownloadPercentage(Js5RequestKey const&) const;

        // data members, from how the methods use this: 34160 bytes, the first 408 are Js5LocalLoader
        char _unknown_408[23896];
        undefined4 field_24304; // offset 24304
        char _unknown_24308[12];
        char field_24320; // offset 24320
        char field_24321; // offset 24321
        byte field_24322; // offset 24322
        char _unknown_24323[13];
        uint field_24336; // offset 24336
        uint field_24340; // offset 24340
        char _unknown_24344[9816];
    };

    class Js5RemoteLoader::Js5Remote {
    public:
        // virtual methods in vtable order
        virtual ~Js5Remote();
        Js5Remote(Js5Loader&, Js5ArchiveId, bool, bool, bool, bool);

        // data members, from how the methods use this: 100 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[92];
    };

    class Js5RemoteRequestData {
    public:
        Js5RemoteRequestData();
        ~Js5RemoteRequestData();
        Js5RemoteRequestData(Js5RemoteRequestData&&);

        // data members, from how the methods use this: 80 bytes
        undefined8 field_0;  // offset 0
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        char _unknown_24[4];
        Callstack field_28; // offset 28
        char _unknown_44[12];
        undefined8 field_56; // offset 56
        undefined8 field_64; // offset 64
        undefined4 field_72; // offset 72
        undefined1 field_76; // offset 76
        undefined1 field_77; // offset 77
        undefined1 field_78; // offset 78
        undefined1 field_79; // offset 79
    };

    class RAII_RequestFailureHandler {
    public:
        SetCode(int);
        RAII_RequestFailureHandler(LockFreeStack<Js5RemoteRequestData>&, Js5RemoteRequestData*, int);
        void Clear();
        ~RAII_RequestFailureHandler();

        // data members, from how the methods use this: 24 bytes
        LockFreeStack* field_0;        // offset 0
        Js5RemoteRequestData* field_8; // offset 8
        int field_16;                  // offset 16
        char _unknown_20[4];
    };

    // 0x1002bb7c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Js5RemoteRequestData::Js5RemoteRequestData(): jumps straight to the base-object constructor

    // 0x1002bb7e0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // Js5RemoteRequestData::~Js5RemoteRequestData(): jumps straight to the base-object destructor

    // 0x1002bc1d0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // RAII_RequestFailureHandler::RAII_RequestFailureHandler(LockFreeStack<Js5RemoteRequestData>&, Js5RemoteRequestData*, int): jumps straight to the base-object constructor

    // 0x1002bc1e0, 16 bytes, inline, placed by class header (inline)
    // RAII_RequestFailureHandler::Clear()
    void RAII_RequestFailureHandler::Clear() {
        field_8 = (Js5RemoteRequestData*)0;
    }

    // 0x1002bc1f0, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // RAII_RequestFailureHandler::~RAII_RequestFailureHandler(): jumps straight to the base-object destructor

    // 0x1002e2930, 32 bytes, complete-object constructor, inline, placed by class name
    // Js5RemoteLoader::Js5Remote::Js5Remote(Js5Loader&, Js5ArchiveId, bool, bool, bool, bool)
    void Js5RemoteLoader::Js5Remote::Js5Remote() {
        Js5Remote();
    }

    // 0x1002e2950, 48 bytes, base-object constructor, inline, placed by class name
    // Js5RemoteLoader::Js5Remote::Js5Remote(Js5Loader&, Js5ArchiveId, bool, bool, bool, bool)
    void Js5RemoteLoader::Js5Remote::Js5Remote() {
        undefined1 in_R9B;

        Js5Loader::Js5ForLoader::Js5();
        field_0 = PTR_vtable_100ee8a00 + 16;
        field_99 = in_R9B;
    }

    // 0x1002e2980, 16 bytes, complete-object destructor, inline, placed by class name
    // Js5RemoteLoader::Js5Remote::~Js5Remote(): jumps straight to the base-object destructor

    // 0x1002e2990, 32 bytes, deleting destructor, inline, placed by class name
    // Js5RemoteLoader::Js5Remote::~Js5Remote()
    void Js5RemoteLoader::Js5Remote::~Js5Remote() {
        ~Js5Remote(this);
        operator_delete(this);
    }

    // 0x1002e2db0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Js5RemoteRequestData::Js5RemoteRequestData(Js5RemoteRequestData&&): jumps straight to the base-object constructor

    // 0x1002e2dc0, 80 bytes, base-object constructor, inline, placed by class header (inline)
    // Js5RemoteRequestData::Js5RemoteRequestData(Js5RemoteRequestData&&)
    void Js5RemoteRequestData::Js5RemoteRequestData(Js5RemoteRequestData* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined1 uVar4;
        undefined1 uVar5;
        undefined1 uVar6;
        undefined1 uVar7;

        field_0 = param_1->field_0;
        uVar1 = param_1->field_16;
        uVar2 = *(undefined8*)((long)&param_1->field_16 + 4);
        uVar3 = *(undefined8*)param_1->field_28;
        field_8 = param_1->field_8;
        field_16 = uVar1;
        *(undefined8*)((long)&field_16 + 4) = uVar2;
        *(undefined8*)field_28 = uVar3;
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)(field_28 + 12), (shared_ptr*)(param_1->field_28 + 12));
        uVar4 = param_1->field_76;
        uVar5 = param_1->field_77;
        uVar6 = param_1->field_78;
        uVar7 = param_1->field_79;
        field_72 = param_1->field_72;
        field_76 = uVar4;
        field_77 = uVar5;
        field_78 = uVar6;
        field_79 = uVar7;
        uVar1 = param_1->field_64;
        field_56 = param_1->field_56;
        field_64 = uVar1;
    }

} // namespace jag::oldscape::jagex3

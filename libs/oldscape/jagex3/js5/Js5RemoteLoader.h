// libs/oldscape/jagex3/js5/Js5RemoteLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::jagex3 {
    class Js5RemoteLoader : public Js5LocalLoader // base inferred from shared vtable slots
    {
    public:
        class Js5Remote;
        // virtual methods in vtable order
        virtual void MainLogic();
        virtual ~Js5RemoteLoader();
        virtual void OpenJs5(Js5ArchiveId js5ArchiveId, bool arg2, bool arg3, bool arg4, bool arg5, Error* error);
        virtual void Shutdown();
        virtual uint64_t GetGroupLoadPercentage(Js5ArchiveId js5ArchiveId, Js5GroupId js5GroupId) const;
        virtual uint64_t GetGroupCountInCache(Js5ArchiveId js5ArchiveId) const;
        virtual uint64_t GetIndexPercentage(Js5ArchiveId js5ArchiveId) const;
        virtual uint8_t* BlockingFetch(const Js5RequestKey& js5RequestKey,
                                       const Js5RequestParameters& js5RequestParameters);
        Js5RemoteLoader();
        int Initialize(const Filename& filename, const Js5RemoteServerInfo* js5RemoteServerInfo);
        void ConsumeResults();
        void OnDataRetrieved(
            Js5RemoteRequestData& js5RemoteRequestData,
            eastl::list_map_iterator<eastl::pair<Js5RequestKey const, Js5RequestParameters>,
                                     eastl::pair<Js5RequestKey const, Js5RequestParameters>*,
                                     eastl::pair<Js5RequestKey const, Js5RequestParameters>&> const& list_map_iterator);
        void OnMetaIndexRetrieved(PacketJ<Array<unsigned char>>& packetJ);
        void RequestCacheDirectoryPermissions(const Filename& filename);
        void SendNewRequests();
        unsigned long GetDownloadPercentage(const Js5RequestKey& js5RequestKey) const;

    private:
        uint8_t _unknown_408[23896];
        uint32_t field_24304;
        uint8_t _unknown_24308[12];
        char field_24320;
        char field_24321;
        uint8_t field_24322;
        uint8_t _unknown_24323[13];
        Js5ArchiveId field_24336;
        Js5ArchiveId field_24340;
        uint8_t _unknown_24344[4];
    };

    class Js5RemoteLoader::Js5Remote {
    public:
        // virtual methods in vtable order
        virtual ~Js5Remote();
        Js5Remote(Js5Loader& js5Loader, Js5ArchiveId js5ArchiveId, bool arg3, bool arg4, bool arg5, bool arg6);

    private:
        uint8_t _unknown_8[91];
        bool field_99;
    };

    class Js5RemoteRequestData {
    public:
        Js5RemoteRequestData();
        ~Js5RemoteRequestData();
        Js5RemoteRequestData(Js5RemoteRequestData&& js5RemoteRequestData);

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint64_t field_16;
        uint8_t _unknown_24[4];
        Callstack field_28;
        uint8_t _unknown_44[12];
        uint64_t field_56;
        uint64_t field_64;
        uint32_t field_72;
        uint8_t field_76;
        uint8_t field_77;
        uint8_t field_78;
        uint8_t field_79;
    };

    class RAII_RequestFailureHandler {
    public:
        void SetCode(int arg1);
        RAII_RequestFailureHandler(LockFreeStack<Js5RemoteRequestData>& lockFreeStack,
                                   Js5RemoteRequestData* js5RemoteRequestData, int arg3);
        void Clear();
        ~RAII_RequestFailureHandler();

    private:
        LockFreeStack<Js5RemoteRequestData>* field_0;
        Js5RemoteRequestData* field_8;
        int m_code;
        uint8_t _unknown_20[4];
    };

    // 0x1002bc1e0
    void RAII_RequestFailureHandler::Clear() {
        field_8 = nullptr;
    }

    // 0x1002e2950
    Js5RemoteLoader::Js5Remote::Js5Remote(Js5Loader& js5Loader, Js5ArchiveId js5ArchiveId, bool arg3, bool arg4,
                                          bool arg5, bool arg6) {
        Js5(js5Loader, js5ArchiveId, arg3, arg4, arg6);
        field_99 = arg5;
    }

    // 0x1002e2dc0
    Js5RemoteRequestData::Js5RemoteRequestData(Js5RemoteRequestData&& js5RemoteRequestData)
        : field_0(js5RemoteRequestData.field_0) {
        uint64_t uVar1 = js5RemoteRequestData.field_16;
        uint64_t uVar2 = *(uint64_t*)((long)&js5RemoteRequestData.field_16 + 4);
        uint64_t uVar3 = *(uint64_t*)js5RemoteRequestData.field_28;
        field_8 = js5RemoteRequestData.field_8;
        field_16 = uVar1;
        *(uint64_t*)((long)&field_16 + 4) = uVar2;
        *(uint64_t*)field_28 = uVar3;
        ((field_28 + 12))->shared_ptr<FileRSevenDebugPresetProvider, void>(*((js5RemoteRequestData.field_28 + 12)));
        uint8_t uVar4 = js5RemoteRequestData.field_76;
        uint8_t uVar5 = js5RemoteRequestData.field_77;
        uint8_t uVar6 = js5RemoteRequestData.field_78;
        uint8_t uVar7 = js5RemoteRequestData.field_79;
        field_72 = js5RemoteRequestData.field_72;
        field_76 = uVar4;
        field_77 = uVar5;
        field_78 = uVar6;
        field_79 = uVar7;
        uVar1 = js5RemoteRequestData.field_64;
        field_56 = js5RemoteRequestData.field_56;
        field_64 = uVar1;
    }

} // namespace jag::oldscape::jagex3

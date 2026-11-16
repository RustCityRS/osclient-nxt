// projects/osclient/OSClient.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class OSClient : public GraphicsApp // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~OSClient();
        virtual MainInit(SystemInitParams const&);
        virtual void MainShutdown();
        virtual void Update(float);
        virtual GetInputHAL();
        virtual void DeviceLostFocus();
        virtual void PauseAudio();
        virtual void ResumeAudio();
        virtual OnMainInit(SystemInitParams const&);
        virtual void SaveWindowPosition(Window const*);
        virtual void MainLogic(bool);
        virtual void MainDraw(float);
        virtual void RenderContextInit(render::RenderContextDesc&) const;
        virtual void AllocationFailed(unsigned long) const;
        virtual void HandleProgramCrash(callstack::JagException const&);
        virtual void HandleProgramCrash(std::exception const&);
        OSInstance();
        GetSteamSDK();
        OSClient();
        void SetupSteamOverlayCallbacks();
        void CreateRenderingResources();
        void RenderThreadInit();
        void LogicThreadInit();
        void LogicThreadRun();
        void DestroyRenderingResources();
        void GenerateCrashLog(eastl::string);

        // data members, from how the methods use this: 62809684 bytes, the first 101384 are GraphicsApp
        char _unknown_101384[56];
        undefined** field_101440; // offset 101440
        undefined** field_101448; // offset 101448
        char _unknown_101456[55398784];
        Client field_55500240; // offset 55500240
        char _unknown_62807088[2584];
        undefined4 field_62809672; // offset 62809672
        undefined1 field_62809676; // offset 62809676
        undefined1 field_62809677; // offset 62809677
        undefined1 field_62809678; // offset 62809678
        char _unknown_62809679[5];
    };

    // 0x1000df740, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // OSClient::OSInstance()
    /* GraphicsApp::Instance() */

    void GraphicsApp::Instance() {
        BaseApp::GetAppInstance();
    }

    // 0x1000df750, 16 bytes, inline, placed by class name and debug map
    // OSClient::GetSteamSDK()
    undefined1* OSClient::GetSteamSDK() {
        return &field_62809600;
    }

    // 0x100195e80, 16 bytes, complete-object destructor, inline, placed by class name
    // OSClient::~OSClient(): jumps straight to the base-object destructor

    // 0x100195e90, 32 bytes, deleting destructor, inline, placed by class name
    // OSClient::~OSClient()
    void OSClient::~OSClient() {
        ~OSClient(this);
        operator_delete(this);
    }

    // 0x100195ee0, 16 bytes, inline, placed by class name
    // OSClient::GetInputHAL()
    undefined1* OSClient::GetInputHAL() {
        return &field_62807104;
    }

    // 0x1001a3b40, 208 bytes, base-object destructor, inline, placed by class name
    // OSClient::~OSClient()
    void OSClient::~OSClient() {
        field_0 = &PTR__OSClient_100ef5a78;
        field_1128 = &PTR__OSClient_100ef5bd0;
        field_1144 = &PTR__OSClient_100ef5c00;
        field_101440 = &PTR_HandleProgramCrash_100ef5c28;
        field_101448 = &PTR_AllocationFailed_100ef5c48;
        (&field_62809664)->~unique_ptr();
        std::function<void(bool)>::~function((function<void(bool)>*)&field_62809616);
        (&field_62809600)->~unique_ptr();
        (&field_62807280)->~InputHandler();
        (&field_62807104)->~Input();
        (&field_62807096)->~thread();
        (&field_62807088)->~unique_ptr();
        field_55500240->~Client();
        (&field_101456)->~OSRenderCore_Impl();
        ~GraphicsApp();
    }

} // namespace jag

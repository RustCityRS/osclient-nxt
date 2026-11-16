// projects/osclient/OSClient.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class OSClient : public GraphicsApp // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~OSClient();
        virtual uint32_t MainInit(const SystemInitParams& systemInitParams);
        virtual void MainShutdown();
        virtual void Update(float arg1);
        virtual uint8_t* GetInputHAL();
        virtual void DeviceLostFocus();
        virtual void PauseAudio();
        virtual void ResumeAudio();
        virtual uint64_t OnMainInit(const SystemInitParams& systemInitParams);
        virtual void SaveWindowPosition(const Window* window);
        virtual void MainLogic(bool arg1);
        virtual void MainDraw(float arg1);
        virtual void RenderContextInit(render::RenderContextDesc& renderContextDesc) const;
        virtual void AllocationFailed(unsigned long arg1) const;
        virtual void HandleProgramCrash(const callstack::JagException& jagException);
        virtual void HandleProgramCrash(const std::exception& exception);
        void OSInstance();
        uint8_t* GetSteamSDK();
        OSClient();
        void SetupSteamOverlayCallbacks();
        void CreateRenderingResources();
        void RenderThreadInit();
        void LogicThreadInit();
        void LogicThreadRun();
        void DestroyRenderingResources();
        void GenerateCrashLog(eastl::string str);

    private:
        uint8_t _unknown_101384[56];
        uint8_t** field_101440;
        uint8_t** field_101448;
        uint8_t _unknown_101456[55398784];
        Client field_55500240;
        uint8_t _unknown_62807088[2584];
        uint32_t field_62809672;
        uint8_t field_62809676;
        uint8_t field_62809677;
        uint8_t field_62809678;
        uint8_t _unknown_62809679[5];
    };

    // 0x1000df740
    void OSClient::OSInstance() {
        BaseApp::GetAppInstance();
    }

    // 0x1000df750
    uint8_t* OSClient::GetSteamSDK() {
        return &field_62809600;
    }

    // 0x100195ee0
    uint8_t* OSClient::GetInputHAL() {
        return &field_62807104;
    }

    // 0x1001a3b40
    OSClient::~OSClient() {
        field_1128 = &PTR__OSClient_100ef5bd0;
        field_1144 = &PTR__OSClient_100ef5c00;
        field_101440 = &PTR_HandleProgramCrash_100ef5c28;
        field_101448 = &PTR_AllocationFailed_100ef5c48;
        field_62809664.~unique_ptr();
        field_62809616.~function();
        field_62809600.~unique_ptr();
        field_62807280.~InputHandler();
        field_62807104.~Input();
        (&field_62807096)->~thread();
        field_62807088.~unique_ptr();
        field_55500240->~Client();
        field_101456.~OSRenderCore_Impl();
    }

} // namespace jag

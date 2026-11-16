// projects/osclient/folderbrowser/FolderBrowser_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

namespace jag::oldscape {
    class FolderSelection {
    public:
        class FolderSelectionRequest;
        FolderSelection* RequestFolderPath();

        uint8_t _unknown_0[1];
    };

    class FolderSelection::FolderSelectionRequest {
    public:
        FolderSelectionRequest();
        ~FolderSelectionRequest();

        uint8_t _unknown_0[16];
    };

    // 0x1000299c0
    FolderSelection* FolderSelection::RequestFolderPath() {
        make_shared<FolderSelection::FolderSelectionRequest>((ReturnValue*)this);
        _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
        uint8_t* local_48 = PTR___NSConcreteStackBlock_100ee4038;
        uint64_t local_40 = 3321888768;
        void* local_38 = ____ZN3jag8oldscape15FolderSelection17RequestFolderPathEv_block_invoke;
        uint8_t* local_30 =
            &___block_descriptor_48_ea8_32c78_ZTSN3jag10shared_ptrINS_8oldscape15FolderSelection22FolderSelectionRequestEEE_e5_v8__0l;
        shared_ptr<dash3d::Decor> local_28(this);
        _dispatch_async(PTR___dispatch_main_q_100ee9db8, &local_48);
        return this;
    }

} // namespace jag::oldscape

namespace jag {
    // 0x100029a50
    shared_ptr_if_not_array<oldscape::FolderSelection::FolderSelectionRequest>::type
    make_shared<oldscape::FolderSelection::FolderSelectionRequest>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        FolderSelectionRequest* local_28[2];

        auto arg1 = aligned_alloc(72, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::FolderSelection::FolderSelectionRequest>::type result;
        } else {
            local_28[0] = placement_new<oldscape::FolderSelection::FolderSelectionRequest>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::FolderSelection::FolderSelectionRequest>, int,
                              oldscape::FolderSelection::FolderSelectionRequest*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag

// 0x100029ae0
void ____ZN3jag8oldscape15FolderSelection17RequestFolderPathEv_block_invoke(long param_1) {
    uint8_t* puVar1 = PTR__objc_msgSend_100ee9e50;
    uint64_t uVar3 =
        _objc_retainAutoreleasedReturnValue(NSOpenPanel::openPanel((ID)&_OBJC_CLASS___NSOpenPanel, "openPanel"));
    (*(void (*)(...))puVar1)(uVar3, "setCanChooseFiles:", 0);
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar3, "setCanChooseDirectories:", 1);
    auto client = jag::oldscape::Client::Instance();
    auto plVar4 = client->GetTransitionOutTime();
    uint64_t uVar5 = ((Window*)(**(void (**)(...))(*plVar4 + 96))(plVar4))->GetNSWindow();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uint8_t* local_68 = PTR___NSConcreteStackBlock_100ee4038;
    uint64_t local_60 = 3321888768;
    void* local_58 = ____ZN3jag8oldscape15FolderSelection17RequestFolderPathEv_block_invoke_2;
    uint8_t* local_50 =
        &___block_descriptor_56_ea8_32s40c78_ZTSN3jag10shared_ptrINS_8oldscape15FolderSelection22FolderSelectionRequestEEE_e8_v16__0q8l;
    uVar3 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(uVar3);
    uint64_t local_48 = uVar3;
    shared_ptr<jag::oldscape::dash3d::Decor> local_40((param_1 + 32));
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar3, "beginSheetModalForWindow:completionHandler:", uVar5,
                                                  &local_68);
    puVar1 = PTR__objc_release_100ee9e60;
    (*(void (*)(...))PTR__objc_release_100ee9e60)(local_48);
    (*(void (*)(...))puVar1)(uVar5);
    (*(void (*)(...))puVar1)(uVar3);
}

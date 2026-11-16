// projects/osclient/folderbrowser/FolderBrowser_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

namespace jag::oldscape {
    class FolderSelection {
    public:
        class FolderSelectionRequest;
        FolderSelection* RequestFolderPath();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    class FolderSelection::FolderSelectionRequest {
    public:
        FolderSelectionRequest();
        ~FolderSelectionRequest();

        // data members, from how the methods use this: 16 bytes
        char _unknown_0[16];
    };

    // 0x1000299c0, 144 bytes, placed by debug map only (low confidence)
    // FolderSelection::RequestFolderPath()
    FolderSelection* FolderSelection::RequestFolderPath() {
        undefined* local_48;
        undefined8 local_40;
        code* local_38;
        undefined* local_30;
        shared_ptr<dash3d::Decor> local_28[16];

        make_shared<FolderSelection::FolderSelectionRequest>((jag*)this);
        _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
        local_48 = PTR___NSConcreteStackBlock_100ee4038;
        local_40 = 3321888768;
        local_38 = ____ZN3jag8oldscape15FolderSelection17RequestFolderPathEv_block_invoke;
        local_30 =
            &___block_descriptor_48_ea8_32c78_ZTSN3jag10shared_ptrINS_8oldscape15FolderSelection22FolderSelectionRequestEEE_e5_v8__0l;
        shared_ptr<dash3d::Decor>::shared_ptr(local_28, (shared_ptr*)this);
        _dispatch_async(PTR___dispatch_main_q_100ee9db8, &local_48);
        local_28->~shared_ptr();
        return this;
    }

} // namespace jag::oldscape

namespace jag {
    // 0x100029a50, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::FolderSelection::FolderSelectionRequest>::type make_shared<oldscape::FolderSelection::FolderSelectionRequest>()
    jag* make_shared<oldscape::FolderSelection::FolderSelectionRequest>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        FolderSelectionRequest* local_28[2];

        pvVar1 = (void*)aligned_alloc(72, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::FolderSelection::FolderSelectionRequest>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::FolderSelection::FolderSelectionRequest>, int,
                                   oldscape::FolderSelection::FolderSelectionRequest*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag

// 0x100029ae0, 352 bytes, placed by debug map only (low confidence)
// ___ZN3jag8oldscape15FolderSelection17RequestFolderPathEv_block_invoke
void ____ZN3jag8oldscape15FolderSelection17RequestFolderPathEv_block_invoke(long param_1) {
    undefined* puVar1;
    ID IVar2;
    undefined8 uVar3;
    LayeredAnimationStateMachineLayerDescriptor* this;
    long* plVar4;
    Window* this_00;
    undefined8 uVar5;
    undefined* local_68;
    undefined8 local_60;
    code* local_58;
    undefined* local_50;
    undefined8 local_48;
    shared_ptr<jag::oldscape::dash3d::Decor> local_40[16];

    puVar1 = PTR__objc_msgSend_100ee9e50;
    IVar2 = NSOpenPanel::openPanel((ID)&_OBJC_CLASS___NSOpenPanel, "openPanel");
    uVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
    (*(code*)puVar1)(uVar3, "setCanChooseFiles:", 0);
    (*(code*)PTR__objc_msgSend_100ee9e50)(uVar3, "setCanChooseDirectories:", 1);
    this = (LayeredAnimationStateMachineLayerDescriptor*)jag::oldscape::Client::Instance();
    plVar4 = (long*)GetTransitionOutTime();
    this_00 = (Window*)(**(code**)(*plVar4 + 96))(plVar4);
    uVar5 = this_00->GetNSWindow();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    local_68 = PTR___NSConcreteStackBlock_100ee4038;
    local_60 = 3321888768;
    local_58 = ____ZN3jag8oldscape15FolderSelection17RequestFolderPathEv_block_invoke_2;
    local_50 =
        &___block_descriptor_56_ea8_32s40c78_ZTSN3jag10shared_ptrINS_8oldscape15FolderSelection22FolderSelectionRequestEEE_e8_v16__0q8l;
    uVar3 = (*(code*)PTR__objc_retain_100ee9e68)(uVar3);
    local_48 = uVar3;
    jag::shared_ptr<jag::oldscape::dash3d::Decor>::shared_ptr(local_40, (shared_ptr*)(param_1 + 32));
    (*(code*)PTR__objc_msgSend_100ee9e50)(uVar3, "beginSheetModalForWindow:completionHandler:", uVar5, &local_68);
    local_40->~shared_ptr();
    puVar1 = PTR__objc_release_100ee9e60;
    (*(code*)PTR__objc_release_100ee9e60)(local_48);
    (*(code*)puVar1)(uVar5);
    (*(code*)puVar1)(uVar3);
}
